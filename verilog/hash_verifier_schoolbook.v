`timescale 1ns/1ps
// ================================================================
// hash_verifier.v  —  Top-level homomorphic hash verifier
//
// Verifies the circuit:  c3 = c1 * c2 + c2
// by checking:  hash(c3) == hash(c1) * hash(c2) + hash(c2)
//
// Steps:
//   1. Compute h1 = cipher_hash(c1, r)
//   2. Compute h2 = cipher_hash(c2, r)
//   3. Compute h3 = cipher_hash(c3, r)
//   4. expected = h1 * h2 + h2          (poly_mul + poly_add)
//   5. valid = (h3 == expected)          (coefficient-wise compare)
//
// Steps 1-3 run sequentially (single shared cipher_hash unit).
// Step 4 reuses poly_mul + poly_add from cipher_hash internals.
//
// Interface:
//   Load ciphertexts via ct_wr_* port:
//     ct_id  = 0 → c1,  1 → c2,  2 → c3
//     ct_sel = component index within ciphertext
//   Load r via r_wr_* port.
//   Load twiddle tables via tw_wr_* port.
//   Set c1_count, c2_count, c3_count to number of components each.
//   Assert start. Poll done. Read valid output.
//
// Parameters
//   LOGN    : log2(N)         (default 13)
//   Q_WIDTH : modulus width   (default 40)
//   CT_SIZE : max ct components per ciphertext (default 3)
// ================================================================
module hash_verifier_schoolbook #(
    parameter LOGN    = 13,
    parameter Q_WIDTH = 40,
    parameter CT_SIZE = 3
)(
    input  wire                clk,
    input  wire                rst_n,

    // ── Runtime modulus ─────────────────────────────────────────
    input  wire [Q_WIDTH-1:0]  q,
    input  wire [Q_WIDTH-1:0]  n_inv,
    input  wire [2*Q_WIDTH-1:0] barrett_m,  // floor(2^(2·Q_WIDTH) / q)

    // ── Ciphertext write port ────────────────────────────────────
    // ct_id  : 0=c1, 1=c2, 2=c3
    // ct_sel : component index [0..CT_SIZE-1]
    input  wire [1:0]          ct_id,
    input  wire [1:0]          ct_sel,
    input  wire                ct_wr_en,
    input  wire [LOGN-1:0]     ct_wr_addr,
    input  wire [Q_WIDTH-1:0]  ct_wr_data,

    // ── Random polynomial r ──────────────────────────────────────
    input  wire                r_wr_en,
    input  wire [LOGN-1:0]     r_wr_addr,
    input  wire [Q_WIDTH-1:0]  r_wr_data,

    // ── Twiddle tables ───────────────────────────────────────────
    input  wire                tw_wr_en,
    input  wire [LOGN:0]       tw_wr_addr,
    input  wire [Q_WIDTH-1:0]  tw_wr_data,

    // ── Component counts ─────────────────────────────────────────
    input  wire [1:0]          c1_count,  // components in c1 (1 or 2)
    input  wire [1:0]          c2_count,  // components in c2 (1 or 2)
    input  wire [1:0]          c3_count,  // components in c3 (up to 3)

    // ── Control ──────────────────────────────────────────────────
    input  wire                start,

    // ── Output ───────────────────────────────────────────────────
    output reg                 done,
    output reg                 valid      // 1 = hashes match
);
    localparam integer N = 1 << LOGN;

    // ── Ciphertext storage (3 ciphertexts × CT_SIZE × N) ────────
    // Flattened to a 1-D array so Vivado infers Block RAM instead of
    // treating the 3-D array as one huge (2.95 Mbit) logic variable
    // (Synth 8-4556 / 8-3391).
    //   linear address = (ct_id*CT_SIZE + comp)*N + coeff
    localparam integer CT_MEM_DEPTH = 3 * CT_SIZE * N;

    (* ram_style = "block" *)
    reg [Q_WIDTH-1:0] ct_mem [0:CT_MEM_DEPTH-1];

    function integer ct_lin;
        input [1:0]        cid;
        input [1:0]        comp;
        input [LOGN-1:0]   a;
        begin
            ct_lin = ((cid * CT_SIZE) + comp) * N + a;
        end
    endfunction

    always @(posedge clk) begin
        if (ct_wr_en) ct_mem[ct_lin(ct_id, ct_sel, ct_wr_addr)] <= ct_wr_data;
    end

    // ── Hash result storage: h1, h2, h3 ─────────────────────────
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] h1 [0:N-1];
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] h2 [0:N-1];
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] h3 [0:N-1];
    reg [Q_WIDTH-1:0] h3_rd;   // registered read of h3 for the compare stage
    // (h3_rd read process is declared below, after pa_rd_addr exists)

    // ── cipher_hash instance (shared across h1, h2, h3) ─────────
    reg                ch_ct_wr_en;
    reg  [1:0]         ch_ct_sel;
    reg  [LOGN-1:0]    ch_ct_wr_addr;
    reg  [Q_WIDTH-1:0] ch_ct_wr_data;
    reg                ch_r_wr_en;
    reg  [LOGN-1:0]    ch_r_wr_addr;
    reg  [Q_WIDTH-1:0] ch_r_wr_data;
    reg  [1:0]         ch_ct_count;
    reg                ch_start;
    wire               ch_done;
    reg  [LOGN-1:0]    ch_rd_addr;
    wire [Q_WIDTH-1:0] ch_rd_data;

    cipher_hash_schoolbook #(
        .LOGN    (LOGN),
        .Q_WIDTH (Q_WIDTH),
        .CT_SIZE (CT_SIZE)
    ) u_ch (
        .clk          (clk),
        .rst_n        (rst_n),
        .q            (q),
        .n_inv        (n_inv),
        .barrett_m    (barrett_m),
        .ct_sel       (ch_ct_sel),
        .ct_wr_en     (ch_ct_wr_en),
        .ct_wr_addr   (ch_ct_wr_addr),
        .ct_wr_data   (ch_ct_wr_data),
        .r_wr_en      (ch_r_wr_en),
        .r_wr_addr    (ch_r_wr_addr),
        .r_wr_data    (ch_r_wr_data),
        .tw_wr_en     (tw_wr_en),
        .tw_wr_addr   (tw_wr_addr),
        .tw_wr_data   (tw_wr_data),
        .ct_count     (ch_ct_count),
        .start        (ch_start),
        .rd_addr      (ch_rd_addr),
        .rd_data      (ch_rd_data),
        .done         (ch_done)
    );

    // ── poly_mul for expected = h1 * h2 ─────────────────────────
    reg                pm_a_wr_en;
    reg  [LOGN-1:0]    pm_a_wr_addr;
    wire [Q_WIDTH-1:0] pm_a_wr_data;   // = h1_rd (dedicated read reg)
    reg                pm_b_wr_en;
    reg  [LOGN-1:0]    pm_b_wr_addr;
    wire [Q_WIDTH-1:0] pm_b_wr_data;   // = h2_rd (dedicated read reg)
    reg                pm_start;
    wire               pm_done;
    reg  [LOGN-1:0]    pm_rd_addr;
    wire [Q_WIDTH-1:0] pm_rd_data;

    poly_mul_schoolbook #(
        .LOGN    (LOGN),
        .Q_WIDTH (Q_WIDTH)
    ) u_pmul (
        .clk          (clk),
        .rst_n        (rst_n),
        .q            (q),
        .n_inv        (n_inv),
        .barrett_m    (barrett_m),
        .a_wr_en      (pm_a_wr_en),
        .a_wr_addr    (pm_a_wr_addr),
        .a_wr_data    (pm_a_wr_data),
        .b_wr_en      (pm_b_wr_en),
        .b_wr_addr    (pm_b_wr_addr),
        .b_wr_data    (pm_b_wr_data),
        .tw_wr_en     (tw_wr_en),
        .tw_wr_addr   (tw_wr_addr),
        .tw_wr_data   (tw_wr_data),
        .start        (pm_start),
        .rd_addr      (pm_rd_addr),
        .rd_data      (pm_rd_data),
        .done         (pm_done)
    );

    // ── poly_add for expected = h1*h2 + h2 ──────────────────────
    reg                pa_a_wr_en;
    reg  [LOGN-1:0]    pa_a_wr_addr;
    reg  [Q_WIDTH-1:0] pa_a_wr_data;
    reg                pa_b_wr_en;
    reg  [LOGN-1:0]    pa_b_wr_addr;
    wire [Q_WIDTH-1:0] pa_b_wr_data;   // = h2_rd (dedicated read reg)
    reg                pa_start;
    wire               pa_done;
    reg  [LOGN-1:0]    pa_rd_addr;
    wire [Q_WIDTH-1:0] pa_rd_data;

    poly_add #(
        .LOGN    (LOGN),
        .Q_WIDTH (Q_WIDTH)
    ) u_padd (
        .clk        (clk),
        .rst_n      (rst_n),
        .q          (q),
        .a_wr_en    (pa_a_wr_en),
        .a_wr_addr  (pa_a_wr_addr),
        .a_wr_data  (pa_a_wr_data),
        .b_wr_en    (pa_b_wr_en),
        .b_wr_addr  (pa_b_wr_addr),
        .b_wr_data  (pa_b_wr_data),
        .start      (pa_start),
        .subtract   (1'b0),
        .rd_addr    (pa_rd_addr),
        .rd_data    (pa_rd_data),
        .done       (pa_done)
    );

    // ════════════════════════════════════════════════════════════
    //  Dedicated Block-RAM ports for h1/h2/h3
    //  Each gets its own write + registered read in a single process
    //  (single-process simple-dual-port → infers Block RAM). The shared
    //  poly_mul/poly_add data inputs are combinational muxes of the
    //  registered read outputs, preserving the original 1-cycle timing.
    // ════════════════════════════════════════════════════════════
    reg  [Q_WIDTH-1:0] h1_rd, h2_rd;     // h3_rd declared above
    reg  [LOGN-1:0]    h1_ra, h2_ra;     // combinational read addresses
    reg                h1_we, h2_we, h3_we;
    reg  [LOGN-1:0]    h1_wa, h2_wa, h3_wa;

    always @* begin
        // read addresses
        h1_ra = idx[LOGN-1:0];                                  // ST_LOAD_MUL
        h2_ra = (state == ST_LOAD_ADD) ? (idx[LOGN-1:0]-2'd2)   // ST_LOAD_ADD
                                       :  idx[LOGN-1:0];         // ST_LOAD_MUL
        // write controls (save the cipher_hash result, 2-cycle latency)
        h1_we = (state == ST_SAVE_H1) && (idx >= 2);
        h2_we = (state == ST_SAVE_H2) && (idx >= 2);
        h3_we = (state == ST_SAVE_H3) && (idx >= 2);
        h1_wa = idx[LOGN-1:0] - 2'd2;
        h2_wa = idx[LOGN-1:0] - 2'd2;
        h3_wa = idx[LOGN-1:0] - 2'd2;
    end

    always @(posedge clk) begin
        if (h1_we) h1[h1_wa] <= ch_rd_data;
        h1_rd <= h1[h1_ra];
    end
    always @(posedge clk) begin
        if (h2_we) h2[h2_wa] <= ch_rd_data;
        h2_rd <= h2[h2_ra];
    end
    always @(posedge clk) begin
        if (h3_we) h3[h3_wa] <= ch_rd_data;
        h3_rd <= h3[pa_rd_addr];        // read shares poly_add's rd address
    end

    assign pm_a_wr_data = h1_rd;
    assign pm_b_wr_data = h2_rd;
    assign pa_b_wr_data = h2_rd;

    // ── FSM ──────────────────────────────────────────────────────
    localparam [3:0]
        ST_IDLE       = 4'd0,
        ST_LOAD_C1    = 4'd1,   // load c1 into cipher_hash
        ST_HASH_C1    = 4'd2,   // run cipher_hash → h1
        ST_SAVE_H1    = 4'd3,   // read h1 from cipher_hash
        ST_LOAD_C2    = 4'd4,   // load c2 into cipher_hash
        ST_HASH_C2    = 4'd5,   // run cipher_hash → h2
        ST_SAVE_H2    = 4'd6,   // read h2 from cipher_hash
        ST_LOAD_C3    = 4'd7,   // load c3 into cipher_hash
        ST_HASH_C3    = 4'd8,   // run cipher_hash → h3
        ST_SAVE_H3    = 4'd9,   // read h3 from cipher_hash
        ST_LOAD_MUL   = 4'd10,  // load h1,h2 into poly_mul
        ST_WAIT_MUL   = 4'd11,  // wait for h1*h2
        ST_LOAD_ADD   = 4'd12,  // load h1*h2 + h2 into poly_add
        ST_WAIT_ADD   = 4'd13,  // wait for poly_add
        ST_COMPARE    = 4'd14,  // compare expected vs h3
        ST_DONE       = 4'd15;

    reg [3:0]      state;
    reg [LOGN:0]   idx;        // needs LOGN+1 bits for pipeline drain cycles
    reg [1:0]      comp_i;     // ciphertext component loop counter
    reg [1:0]      cur_ct_id;  // which ct (0=c1,1=c2,2=c3) we're loading
    reg [1:0]      cur_count;
    reg            cmp_ok;

    // Synchronous reset so h1/h2/h3 infer Block RAM.
    always @(posedge clk) begin
        if (!rst_n) begin
            state       <= ST_IDLE;
            done        <= 0;
            valid       <= 0;
            idx         <= 0;
            comp_i      <= 0;
            ch_ct_wr_en <= 0;
            ch_r_wr_en  <= 0;
            ch_start    <= 0;
            pm_a_wr_en  <= 0;
            pm_b_wr_en  <= 0;
            pm_start    <= 0;
            pa_a_wr_en  <= 0;
            pa_b_wr_en  <= 0;
            pa_start    <= 0;
            cmp_ok      <= 1;
        end else begin
            // Defaults
            ch_ct_wr_en <= 0;
            ch_r_wr_en  <= 0;
            ch_start    <= 0;
            pm_a_wr_en  <= 0;
            pm_b_wr_en  <= 0;
            pm_start    <= 0;
            pa_a_wr_en  <= 0;
            pa_b_wr_en  <= 0;
            pa_start    <= 0;
            done        <= 0;

            // Forward r writes to cipher_hash always
            if (r_wr_en) begin
                ch_r_wr_en   <= 1;
                ch_r_wr_addr <= r_wr_addr;
                ch_r_wr_data <= r_wr_data;
            end

            case (state)

                // ── Idle ─────────────────────────────────────────
                ST_IDLE: begin
                    if (start) begin
                        cur_ct_id  <= 2'd0;
                        cur_count  <= c1_count;
                        comp_i     <= 0;
                        idx        <= 0;
                        state      <= ST_LOAD_C1;
                    end
                end

                // ── Load c1 components into cipher_hash ──────────
                ST_LOAD_C1: begin
                    ch_ct_wr_en   <= 1;
                    ch_ct_sel     <= comp_i;
                    ch_ct_wr_addr <= idx;
                    ch_ct_wr_data <= ct_mem[ct_lin(2'd0, comp_i, idx[LOGN-1:0])];

                    if (idx == N-1) begin
                        idx <= 0;
                        if (comp_i == c1_count - 2'd1) begin
                            comp_i     <= 0;
                            ch_ct_count <= c1_count;
                            ch_start   <= 1;
                            state      <= ST_HASH_C1;
                        end else begin
                            comp_i <= comp_i + 2'd1;
                        end
                    end else begin
                        idx <= idx + 1'b1;
                    end
                end

                ST_HASH_C1: begin
                    if (ch_done) begin
                        idx   <= 0;
                        state <= ST_SAVE_H1;
                    end
                end

                // cipher_hash rd_data has 2-cycle latency (NB addr + NB read).
                // idx=0,1: prime pipeline. idx>=2: save h1[idx-2]. idx=N+1: done.
                ST_SAVE_H1: begin
                    // h1[idx-2] <= ch_rd_data handled by dedicated h1 process.
                    if (idx < N)
                        ch_rd_addr <= idx[LOGN-1:0];
                    if (idx == N + 1) begin
                        idx    <= 0;
                        comp_i <= 0;
                        state  <= ST_LOAD_C2;
                    end else idx <= idx + 1'b1;
                end

                // ── Load c2 ──────────────────────────────────────
                ST_LOAD_C2: begin
                    ch_ct_wr_en   <= 1;
                    ch_ct_sel     <= comp_i;
                    ch_ct_wr_addr <= idx;
                    ch_ct_wr_data <= ct_mem[ct_lin(2'd1, comp_i, idx[LOGN-1:0])];

                    if (idx == N-1) begin
                        idx <= 0;
                        if (comp_i == c2_count - 2'd1) begin
                            comp_i      <= 0;
                            ch_ct_count <= c2_count;
                            ch_start    <= 1;
                            state       <= ST_HASH_C2;
                        end else comp_i <= comp_i + 2'd1;
                    end else idx <= idx + 1'b1;
                end

                ST_HASH_C2: begin
                    if (ch_done) begin idx <= 0; state <= ST_SAVE_H2; end
                end

                ST_SAVE_H2: begin
                    // h2[idx-2] <= ch_rd_data handled by dedicated h2 process.
                    if (idx < N)
                        ch_rd_addr <= idx[LOGN-1:0];
                    if (idx == N + 1) begin
                        idx    <= 0;
                        comp_i <= 0;
                        state  <= ST_LOAD_C3;
                    end else idx <= idx + 1'b1;
                end

                // ── Load c3 ──────────────────────────────────────
                ST_LOAD_C3: begin
                    ch_ct_wr_en   <= 1;
                    ch_ct_sel     <= comp_i;
                    ch_ct_wr_addr <= idx;
                    ch_ct_wr_data <= ct_mem[ct_lin(2'd2, comp_i, idx[LOGN-1:0])];

                    if (idx == N-1) begin
                        idx <= 0;
                        if (comp_i == c3_count - 2'd1) begin
                            comp_i      <= 0;
                            ch_ct_count <= c3_count;
                            ch_start    <= 1;
                            state       <= ST_HASH_C3;
                        end else comp_i <= comp_i + 2'd1;
                    end else idx <= idx + 1'b1;
                end

                ST_HASH_C3: begin
                    if (ch_done) begin idx <= 0; state <= ST_SAVE_H3; end
                end

                ST_SAVE_H3: begin
                    // h3[idx-2] <= ch_rd_data handled by dedicated h3 process.
                    if (idx < N)
                        ch_rd_addr <= idx[LOGN-1:0];
                    if (idx == N + 1) begin
                        idx   <= 0;
                        state <= ST_LOAD_MUL;
                    end else idx <= idx + 1'b1;
                end

                // ── Load h1, h2 into poly_mul ─────────────────────
                ST_LOAD_MUL: begin
                    // data: pm_a_wr_data=h1_rd, pm_b_wr_data=h2_rd (wires)
                    pm_a_wr_en   <= 1;
                    pm_a_wr_addr <= idx;
                    pm_b_wr_en   <= 1;
                    pm_b_wr_addr <= idx;

                    if (idx == N-1) begin
                        idx      <= 0;
                        pm_start <= 1;
                        state    <= ST_WAIT_MUL;
                    end else idx <= idx + 1'b1;
                end

                ST_WAIT_MUL: begin
                    if (pm_done) begin idx <= 0; state <= ST_LOAD_ADD; end
                end

                // ── Load (h1*h2) and h2 into poly_add ─────────────
                // poly_mul rd_data has 2-cycle latency.
                ST_LOAD_ADD: begin
                    if (idx < N)
                        pm_rd_addr <= idx[LOGN-1:0];

                    if (idx >= 2) begin
                        // pa_a_wr_data=pm_rd_data (reg), pa_b_wr_data=h2_rd (wire)
                        pa_a_wr_en   <= 1;
                        pa_a_wr_addr <= idx[LOGN-1:0] - 2'd2;
                        pa_a_wr_data <= pm_rd_data;   // h1*h2

                        pa_b_wr_en   <= 1;
                        pa_b_wr_addr <= idx[LOGN-1:0] - 2'd2;
                    end

                    if (idx == N + 1) begin
                        idx      <= 0;
                        pa_start <= 1;
                        state    <= ST_WAIT_ADD;
                    end else idx <= idx + 1'b1;
                end

                ST_WAIT_ADD: begin
                    if (pa_done) begin
                        idx    <= 0;
                        cmp_ok <= 1;
                        state  <= ST_COMPARE;
                    end
                end

                // ── Compare expected (poly_add out) vs h3 ─────────
                // poly_add rd_data has 2-cycle latency; h3_rd is a
                // registered read of h3 aligned to the same latency.
                ST_COMPARE: begin
                    if (idx < N)
                        pa_rd_addr <= idx[LOGN-1:0];
                    // compare pa_rd_data (expected[idx-2]) with h3[idx-2]
                    if (idx >= 2) begin
                        if (pa_rd_data != h3_rd)
                            cmp_ok <= 0;
                    end

                    if (idx == N + 1) begin
                        state <= ST_DONE;
                    end else idx <= idx + 1'b1;
                end

                ST_DONE: begin
                    valid <= cmp_ok;
                    done  <= 1;
                    state <= ST_IDLE;
                end

                default: state <= ST_IDLE;

            endcase
        end
    end

endmodule
