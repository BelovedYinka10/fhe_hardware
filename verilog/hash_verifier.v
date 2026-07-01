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
// 3-phase sequential load protocol (eliminates internal ct_mem):
//   Phase 1: Write c1 via ct_wr_* (ct_sel=component index).
//            Assert start. Wait for ready=1.
//   Phase 2: Write c2 via ct_wr_*. Assert start. Wait for ready=1.
//   Phase 3: Write c3 via ct_wr_*. Assert start. Wait for done.
//
//   Load r and twiddles any time before phase-1 start.
//   ct_wr_* writes go directly to the cipher_hash coefficient RAM;
//   do NOT write while ready=0 (cipher_hash is computing).
//
// Parameters
//   LOGN    : log2(N)         (default 13)
//   Q_WIDTH : modulus width   (default 40)
//   CT_SIZE : max ct components per ciphertext (default 3)
// ================================================================
module hash_verifier #(
    parameter LOGN    = 13,
    parameter Q_WIDTH = 40,
    parameter CT_SIZE = 3
)(
    input  wire                clk,
    input  wire                rst_n,

    // ── Runtime modulus ─────────────────────────────────────────
    input  wire [Q_WIDTH-1:0]  q,
    input  wire [Q_WIDTH-1:0]  n_inv,
    input  wire [2*Q_WIDTH-1:0] barrett_m,

    // ── Ciphertext write port (direct to cipher_hash ct RAM) ─────
    // Only write when ready=1.  ct_sel = component index.
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
    input  wire [1:0]          c1_count,
    input  wire [1:0]          c2_count,
    input  wire [1:0]          c3_count,

    // ── Control ──────────────────────────────────────────────────
    input  wire                start,

    // ── Output ───────────────────────────────────────────────────
    output wire                ready,   // 1 = waiting for next ciphertext load
    output reg                 done,
    output reg                 valid
);
    localparam integer N = 1 << LOGN;

    // ── Hash result storage: h1, h2, h3 ─────────────────────────
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] h1 [0:N-1];
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] h2 [0:N-1];
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] h3 [0:N-1];
    reg [Q_WIDTH-1:0] h3_rd;

    // ── cipher_hash instance (shared across h1, h2, h3) ─────────
    // ct_wr_* and r_wr_* wired directly from top-level ports.
    reg  [1:0]         ch_ct_count;
    reg                ch_start;
    wire               ch_done;
    reg  [LOGN-1:0]    ch_rd_addr;
    wire [Q_WIDTH-1:0] ch_rd_data;

    cipher_hash #(
        .LOGN    (LOGN),
        .Q_WIDTH (Q_WIDTH),
        .CT_SIZE (CT_SIZE)
    ) u_ch (
        .clk          (clk),
        .rst_n        (rst_n),
        .q            (q),
        .n_inv        (n_inv),
        .barrett_m    (barrett_m),
        .ct_sel       (ct_sel),
        .ct_wr_en     (ct_wr_en),
        .ct_wr_addr   (ct_wr_addr),
        .ct_wr_data   (ct_wr_data),
        .r_wr_en      (r_wr_en),
        .r_wr_addr    (r_wr_addr),
        .r_wr_data    (r_wr_data),
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
    wire [Q_WIDTH-1:0] pm_a_wr_data;   // = h1_rd
    reg                pm_b_wr_en;
    reg  [LOGN-1:0]    pm_b_wr_addr;
    wire [Q_WIDTH-1:0] pm_b_wr_data;   // = h2_rd
    reg                pm_start;
    wire               pm_done;
    reg  [LOGN-1:0]    pm_rd_addr;
    wire [Q_WIDTH-1:0] pm_rd_data;

    poly_mul #(
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
    wire [Q_WIDTH-1:0] pa_b_wr_data;   // = h2_rd
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
    // ════════════════════════════════════════════════════════════
    reg  [Q_WIDTH-1:0] h1_rd, h2_rd;
    reg  [LOGN-1:0]    h1_ra, h2_ra;
    reg                h1_we, h2_we, h3_we;
    reg  [LOGN-1:0]    h1_wa, h2_wa, h3_wa;

    // ── FSM ──────────────────────────────────────────────────────
    localparam [3:0]
        ST_IDLE     = 4'd0,   // waiting for c1 load + start
        ST_HASH_C1  = 4'd1,   // cipher_hash computing h1
        ST_SAVE_H1  = 4'd2,   // drain cipher_hash output → h1[]
        ST_WAIT_C2  = 4'd3,   // waiting for c2 load + start
        ST_HASH_C2  = 4'd4,   // computing h2
        ST_SAVE_H2  = 4'd5,   // drain → h2[]
        ST_WAIT_C3  = 4'd6,   // waiting for c3 load + start
        ST_HASH_C3  = 4'd7,   // computing h3
        ST_SAVE_H3  = 4'd8,   // drain → h3[]
        ST_LOAD_MUL = 4'd9,   // load h1,h2 into poly_mul
        ST_WAIT_MUL = 4'd10,  // wait for h1*h2
        ST_LOAD_ADD = 4'd11,  // load h1*h2 + h2 into poly_add
        ST_WAIT_ADD = 4'd12,  // wait for poly_add
        ST_COMPARE  = 4'd13,  // compare expected vs h3
        ST_DONE     = 4'd14;

    reg [3:0]    state;
    reg [LOGN:0] idx;
    reg          cmp_ok;

    assign ready = (state == ST_IDLE   ||
                    state == ST_WAIT_C2 ||
                    state == ST_WAIT_C3);

    always @* begin
        h1_ra = idx[LOGN-1:0];
        h2_ra = (state == ST_LOAD_ADD) ? (idx[LOGN-1:0] - 2'd2)
                                       :  idx[LOGN-1:0];
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
        h3_rd <= h3[pa_rd_addr];
    end

    assign pm_a_wr_data = h1_rd;
    assign pm_b_wr_data = h2_rd;
    assign pa_b_wr_data = h2_rd;

    always @(posedge clk) begin
        if (!rst_n) begin
            state       <= ST_IDLE;
            done        <= 0;
            valid       <= 0;
            idx         <= 0;
            ch_ct_count <= 0;
            ch_start    <= 0;
            pm_a_wr_en  <= 0;
            pm_b_wr_en  <= 0;
            pm_start    <= 0;
            pa_a_wr_en  <= 0;
            pa_b_wr_en  <= 0;
            pa_start    <= 0;
            cmp_ok      <= 1;
        end else begin
            ch_start   <= 0;
            pm_a_wr_en <= 0;
            pm_b_wr_en <= 0;
            pm_start   <= 0;
            pa_a_wr_en <= 0;
            pa_b_wr_en <= 0;
            pa_start   <= 0;
            done       <= 0;

            case (state)

                ST_IDLE: begin
                    if (start) begin
                        ch_ct_count <= c1_count;
                        ch_start    <= 1;
                        state       <= ST_HASH_C1;
                    end
                end

                ST_HASH_C1: begin
                    if (ch_done) begin idx <= 0; state <= ST_SAVE_H1; end
                end

                ST_SAVE_H1: begin
                    if (idx < N) ch_rd_addr <= idx[LOGN-1:0];
                    if (idx == N + 1) begin
                        idx   <= 0;
                        state <= ST_WAIT_C2;
                    end else idx <= idx + 1'b1;
                end

                ST_WAIT_C2: begin
                    if (start) begin
                        ch_ct_count <= c2_count;
                        ch_start    <= 1;
                        state       <= ST_HASH_C2;
                    end
                end

                ST_HASH_C2: begin
                    if (ch_done) begin idx <= 0; state <= ST_SAVE_H2; end
                end

                ST_SAVE_H2: begin
                    if (idx < N) ch_rd_addr <= idx[LOGN-1:0];
                    if (idx == N + 1) begin
                        idx   <= 0;
                        state <= ST_WAIT_C3;
                    end else idx <= idx + 1'b1;
                end

                ST_WAIT_C3: begin
                    if (start) begin
                        ch_ct_count <= c3_count;
                        ch_start    <= 1;
                        state       <= ST_HASH_C3;
                    end
                end

                ST_HASH_C3: begin
                    if (ch_done) begin idx <= 0; state <= ST_SAVE_H3; end
                end

                ST_SAVE_H3: begin
                    if (idx < N) ch_rd_addr <= idx[LOGN-1:0];
                    if (idx == N + 1) begin
                        idx   <= 0;
                        state <= ST_LOAD_MUL;
                    end else idx <= idx + 1'b1;
                end

                ST_LOAD_MUL: begin
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

                ST_LOAD_ADD: begin
                    if (idx < N) pm_rd_addr <= idx[LOGN-1:0];
                    if (idx >= 2) begin
                        pa_a_wr_en   <= 1;
                        pa_a_wr_addr <= idx[LOGN-1:0] - 2'd2;
                        pa_a_wr_data <= pm_rd_data;
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

                ST_COMPARE: begin
                    if (idx < N) pa_rd_addr <= idx[LOGN-1:0];
                    if (idx >= 2) begin
                        if (pa_rd_data != h3_rd) cmp_ok <= 0;
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
