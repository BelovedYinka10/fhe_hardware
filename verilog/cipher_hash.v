`timescale 1ns/1ps
// ================================================================
// cipher_hash.v  —  Squaring-power hash evaluation of one ciphertext
//
// Computes (matching the Python SW cipher_hash):
//
//   acc   = ct[ct_last]
//   r_pow = r
//   for i = ct_last-1 down to 0:
//       acc   = acc + poly_mul(ct[i], r_pow)
//       r_pow = poly_mul(r_pow, r_pow)       // square
//   H = acc
//
// Powers of r double each step: r, r^2, r^4, r^8, ...
//
// This is the polynomial-ring evaluation that gives a ring
// homomorphism:  H(ct1 * ct2) = H(ct1) * H(ct2)
//
// Fixed ciphertext size: CT_SIZE components (default 3).
// Each component is a single polynomial of degree N = 2^LOGN.
//
// Interface:
//   - Load all CT_SIZE ciphertext component RAMs via ct_wr_*
//   - Load random polynomial r via r_wr_*
//   - Load twiddle tables via tw_wr_* (shared with poly_mul)
//   - Assert start; done pulses when H is ready in result RAM
//   - Read H via rd_addr / rd_data (1-cycle latency)
//
// Parameters
//   LOGN    : log2(N)         (default 13)
//   Q_WIDTH : modulus width   (default 60)
//   CT_SIZE : max components  (default 3)
// ================================================================
module cipher_hash #(
    parameter LOGN    = 13,
    parameter Q_WIDTH = 60,
    parameter CT_SIZE = 3
)(
    input  wire                clk,
    input  wire                rst_n,

    // ── Runtime modulus ─────────────────────────────────────────
    input  wire [Q_WIDTH-1:0]  q,
    input  wire [Q_WIDTH-1:0]  n_inv,
    input  wire [2*Q_WIDTH-1:0] barrett_m,  // floor(2^(2·Q_WIDTH) / q)

    // ── Ciphertext component write port ──────────────────────────
    // ct_sel selects which component [0..CT_SIZE-1] to write
    input  wire [1:0]          ct_sel,
    input  wire                ct_wr_en,
    input  wire [LOGN-1:0]     ct_wr_addr,
    input  wire [Q_WIDTH-1:0]  ct_wr_data,

    // ── Random polynomial r write port ───────────────────────────
    input  wire                r_wr_en,
    input  wire [LOGN-1:0]     r_wr_addr,
    input  wire [Q_WIDTH-1:0]  r_wr_data,

    // ── Twiddle table write port ──────────────────────────────────
    input  wire                tw_wr_en,
    input  wire [LOGN:0]       tw_wr_addr,
    input  wire [Q_WIDTH-1:0]  tw_wr_data,

    // ── actual ciphertext component count (1..CT_SIZE) ───────────
    input  wire [1:0]          ct_count,

    // ── Control ──────────────────────────────────────────────────
    input  wire                start,

    // ── Result read port ─────────────────────────────────────────
    input  wire [LOGN-1:0]     rd_addr,
    output reg  [Q_WIDTH-1:0]  rd_data,

    output reg                 done
);
    localparam integer N = 1 << LOGN;

    // ── Ciphertext coefficient RAM (CT_SIZE × N) ─────────────────
    // Flattened to 1-D so Vivado infers Block RAM (not a multi-D logic
    // variable).  linear address = comp*N + coeff
    localparam integer CT_DEPTH = CT_SIZE * N;

    (* ram_style = "ultra" *)
    reg [Q_WIDTH-1:0] ct [0:CT_DEPTH-1];
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] mem_r  [0:N-1];   // r_pow (squared each iter)
    (* ram_style = "block" *) reg [Q_WIDTH-1:0] mem_h  [0:N-1];   // accumulator

    function integer ct_lin;
        input [1:0]      comp;
        input [LOGN-1:0] a;
        begin
            ct_lin = comp * N + a;
        end
    endfunction

    // (ct / mem_r / mem_h RAM ports are defined below as dedicated
    //  Block-RAM processes.)

    // ── poly_mul sub-instance ────────────────────────────────────
    reg                pm_a_wr_en;
    reg  [LOGN-1:0]    pm_a_wr_addr;
    wire [Q_WIDTH-1:0] pm_a_wr_data;   // driven by dedicated RAM read regs
    reg                pm_b_wr_en;
    reg  [LOGN-1:0]    pm_b_wr_addr;
    wire [Q_WIDTH-1:0] pm_b_wr_data;   // driven by dedicated RAM read regs
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

    // ── poly_add sub-instance ────────────────────────────────────
    reg                pa_a_wr_en;
    reg  [LOGN-1:0]    pa_a_wr_addr;
    reg  [Q_WIDTH-1:0] pa_a_wr_data;
    reg                pa_b_wr_en;
    reg  [LOGN-1:0]    pa_b_wr_addr;
    wire [Q_WIDTH-1:0] pa_b_wr_data;   // driven by dedicated mem_h read reg
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

    // ── FSM ──────────────────────────────────────────────────────
    // Squaring-power scheme (matches Python SW cipher_hash):
    //
    //   acc   = ct[ct_last]
    //   r_pow = r                          (stored in mem_r)
    //   for i = ct_last-1 down to 0:
    //       tmp   = poly_mul(ct[i], r_pow)
    //       acc   = poly_add(tmp, acc)
    //       if i > 0:
    //           r_pow = poly_mul(r_pow, r_pow)   // square
    //
    // Result: H = ct[0]*r^(2^(k-1)) + ... + ct[k-1]*r + ct[k]

    localparam [3:0]
        ST_IDLE       = 4'd0,
        ST_INIT       = 4'd1,   // load ct[ct_last] → acc (mem_h)
        ST_LOAD_MUL   = 4'd2,   // load ct[horner_i] → pm_A, mem_r → pm_B
        ST_WAIT_MUL   = 4'd3,   // wait for poly_mul done
        ST_LOAD_ADD   = 4'd4,   // load pm result → pa_A, mem_h → pa_B
        ST_WAIT_ADD   = 4'd5,   // wait for poly_add done
        ST_SAVE       = 4'd6,   // save pa result → mem_h (acc)
        ST_LOAD_SQR   = 4'd7,   // load mem_r → pm_A and pm_B (squaring)
        ST_WAIT_SQR   = 4'd8,   // wait for poly_mul done
        ST_SAVE_SQR   = 4'd9,   // save pm result → mem_r (r_pow)
        ST_DONE       = 4'd10;

    reg [3:0]      state;
    reg [1:0]      horner_i;    // current ct index counting DOWN
    reg [LOGN:0]   idx;         // loop counter (needs LOGN+1 bits for pipeline drain)
    reg [1:0]      ct_last;

    // ════════════════════════════════════════════════════════════
    //  Dedicated Block-RAM read/write ports
    //  Each RAM gets its own registered read output (never shared
    //  between two RAMs) so Vivado can infer Block RAM.  The shared
    //  poly_mul/poly_add data inputs are combinational muxes of those
    //  registered outputs, which keeps the original 1-cycle timing.
    // ════════════════════════════════════════════════════════════
    reg  [Q_WIDTH-1:0] ct_rd, memr_rd, memh_rd;   // registered read outputs
    reg  [LOGN-1:0]    ct_ra, memr_ra, memh_ra;   // combinational read addrs
    reg                memr_we, memh_we;          // combinational write ctrl
    reg  [LOGN-1:0]    memr_wa, memh_wa;
    reg  [Q_WIDTH-1:0] memr_wd, memh_wd;

    // ── Combinational read-address / write-control selection ─────
    always @* begin
        // ct read: ST_INIT reads ct[ct_last][idx]; ST_LOAD_MUL reads ct[horner_i][idx]
        if (state == ST_INIT) ct_ra = ct_lin(ct_last,  idx[LOGN-1:0]);
        else                  ct_ra = ct_lin(horner_i, idx[LOGN-1:0]);

        // mem_r read address (squaring / multiply load streams at idx)
        memr_ra = idx[LOGN-1:0];

        // mem_h read address: ST_LOAD_ADD reads mem_h[idx-2]
        memh_ra = idx[LOGN-1:0] - 2'd2;

        // mem_r write: r load, or squared r_pow store (ST_SAVE_SQR, idx>=2)
        if (r_wr_en) begin
            memr_we = 1'b1; memr_wa = r_wr_addr;          memr_wd = r_wr_data;
        end else if (state == ST_SAVE_SQR && idx >= 2) begin
            memr_we = 1'b1; memr_wa = idx[LOGN-1:0]-2'd2;  memr_wd = pm_rd_data;
        end else begin
            memr_we = 1'b0; memr_wa = idx[LOGN-1:0];       memr_wd = pm_rd_data;
        end

        // mem_h write: ST_INIT copies ct[ct_last] (re-timed -1),
        //              ST_SAVE stores the poly_add result (idx-2)
        if (state == ST_INIT && idx >= 1) begin
            memh_we = 1'b1; memh_wa = idx[LOGN-1:0]-1'b1;  memh_wd = ct_rd;
        end else if (state == ST_SAVE && idx >= 2) begin
            memh_we = 1'b1; memh_wa = idx[LOGN-1:0]-2'd2;  memh_wd = pa_rd_data;
        end else begin
            memh_we = 1'b0; memh_wa = idx[LOGN-1:0];       memh_wd = pa_rd_data;
        end
    end

    // ── ct RAM: write (host) + registered read ───────────────────
    always @(posedge clk) begin
        if (ct_wr_en) ct[ct_lin(ct_sel, ct_wr_addr)] <= ct_wr_data;
        ct_rd <= ct[ct_ra];
    end

    // ── mem_r RAM: write + registered read ───────────────────────
    always @(posedge clk) begin
        if (memr_we) mem_r[memr_wa] <= memr_wd;
        memr_rd <= mem_r[memr_ra];
    end

    // ── mem_h RAM: write + registered read (port A) ──────────────
    always @(posedge clk) begin
        if (memh_we) mem_h[memh_wa] <= memh_wd;
        memh_rd <= mem_h[memh_ra];
    end

    // ── Shared data inputs = combinational muxes of read outputs ──
    assign pm_a_wr_data = (state == ST_LOAD_SQR) ? memr_rd : ct_rd;
    assign pm_b_wr_data = memr_rd;
    assign pa_b_wr_data = memh_rd;

    // ── mem_h result read port (port B) ──────────────────────────
    always @(posedge clk) begin
        rd_data <= mem_h[rd_addr];
    end

    // Synchronous reset so mem_r / mem_h infer Block RAM.
    always @(posedge clk) begin
        if (!rst_n) begin
            state       <= ST_IDLE;
            done        <= 1'b0;
            idx         <= 0;
            horner_i    <= 0;
            ct_last     <= 0;
            pm_a_wr_en  <= 0;
            pm_b_wr_en  <= 0;
            pm_start    <= 0;
            pa_a_wr_en  <= 0;
            pa_b_wr_en  <= 0;
            pa_start    <= 0;
        end else begin
            // (mem_r / mem_h writes handled in the dedicated RAM processes.)

            // Default deassert
            pm_a_wr_en <= 0;
            pm_b_wr_en <= 0;
            pm_start   <= 0;
            pa_a_wr_en <= 0;
            pa_b_wr_en <= 0;
            pa_start   <= 0;
            done       <= 0;

            case (state)

                // ── Idle ─────────────────────────────────────────
                ST_IDLE: begin
                    if (start) begin
                        ct_last  <= ct_count - 2'd1;
                        idx      <= 0;
                        state    <= ST_INIT;
                    end
                end

                // ── Copy ct[ct_last] into mem_h (accumulator) ────
                // ct read at idx, mem_h[idx-1] written by the dedicated
                // process one cycle later, so run idx 0..N.
                ST_INIT: begin
                    if (idx == N) begin
                        idx      <= 0;
                        horner_i <= ct_last - 2'd1;
                        // If only 1 component, hash = ct[0], done.
                        state    <= (ct_last == 0) ? ST_DONE : ST_LOAD_MUL;
                    end else begin
                        idx <= idx + 1'b1;
                    end
                end

                // ── Load ct[horner_i] → pm_A, mem_r (r_pow) → pm_B ──
                ST_LOAD_MUL: begin
                    // data: pm_a_wr_data=ct_rd, pm_b_wr_data=memr_rd (wires)
                    pm_a_wr_en   <= 1'b1;
                    pm_a_wr_addr <= idx;
                    pm_b_wr_en   <= 1'b1;
                    pm_b_wr_addr <= idx;

                    if (idx == N-1) begin
                        idx      <= 0;
                        pm_start <= 1'b1;
                        state    <= ST_WAIT_MUL;
                    end else begin
                        idx <= idx + 1'b1;
                    end
                end

                // ── Wait for poly_mul (ct[i] * r_pow) ────────────
                ST_WAIT_MUL: begin
                    if (pm_done) begin
                        idx   <= 0;
                        state <= ST_LOAD_ADD;
                    end
                end

                // ── Load mul result → pa_A, mem_h (acc) → pa_B ──
                // poly_mul rd_data has 2-cycle latency.
                // idx=0,1: prime pipeline.
                // idx>=2: write data[idx-2] to poly_add.
                // idx=N+1: start poly_add.
                ST_LOAD_ADD: begin
                    if (idx < N) begin
                        pm_rd_addr <= idx[LOGN-1:0];
                    end

                    if (idx >= 2) begin
                        // pa_a_wr_data=pm_rd_data (reg), pa_b_wr_data=memh_rd (wire)
                        pa_a_wr_en   <= 1'b1;
                        pa_a_wr_addr <= idx[LOGN-1:0] - 2'd2;
                        pa_a_wr_data <= pm_rd_data;

                        pa_b_wr_en   <= 1'b1;
                        pa_b_wr_addr <= idx[LOGN-1:0] - 2'd2;
                    end

                    if (idx == N + 1) begin
                        idx      <= 0;
                        pa_start <= 1'b1;
                        state    <= ST_WAIT_ADD;
                    end else begin
                        idx <= idx + 1'b1;
                    end
                end

                // ── Wait for poly_add ─────────────────────────────
                ST_WAIT_ADD: begin
                    if (pa_done) begin
                        idx   <= 0;
                        state <= ST_SAVE;
                    end
                end

                // ── Save poly_add result → mem_h (acc) ────────────
                // poly_add rd_data has 2-cycle latency.
                // idx=0,1: prime pipeline. idx>=2: save data[idx-2].
                // idx=N+1: decide next state.
                ST_SAVE: begin
                    // mem_h[idx-2] <= pa_rd_data handled by dedicated process.
                    if (idx < N) begin
                        pa_rd_addr <= idx[LOGN-1:0];
                    end

                    if (idx == N + 1) begin
                        idx   <= 0;
                        // Last iteration? Done. Otherwise square r_pow.
                        state <= (horner_i == 0) ? ST_DONE : ST_LOAD_SQR;
                    end else begin
                        idx <= idx + 1'b1;
                    end
                end

                // ── Load mem_r → pm_A and pm_B (squaring r_pow) ──
                ST_LOAD_SQR: begin
                    // data: pm_a_wr_data=memr_rd, pm_b_wr_data=memr_rd (wires)
                    pm_a_wr_en   <= 1'b1;
                    pm_a_wr_addr <= idx;
                    pm_b_wr_en   <= 1'b1;
                    pm_b_wr_addr <= idx;

                    if (idx == N-1) begin
                        idx      <= 0;
                        pm_start <= 1'b1;
                        state    <= ST_WAIT_SQR;
                    end else begin
                        idx <= idx + 1'b1;
                    end
                end

                // ── Wait for poly_mul (r_pow * r_pow) ─────────────
                ST_WAIT_SQR: begin
                    if (pm_done) begin
                        idx   <= 0;
                        state <= ST_SAVE_SQR;
                    end
                end

                // ── Save squared r_pow → mem_r ────────────────────
                // poly_mul rd_data has 2-cycle latency.
                // idx=0,1: prime pipeline. idx>=2: save data[idx-2].
                // idx=N+1: decrement horner_i, back to LOAD_MUL.
                ST_SAVE_SQR: begin
                    // mem_r[idx-2] <= pm_rd_data handled by dedicated process.
                    if (idx < N) begin
                        pm_rd_addr <= idx[LOGN-1:0];
                    end

                    if (idx == N + 1) begin
                        idx      <= 0;
                        horner_i <= horner_i - 2'd1;
                        state    <= ST_LOAD_MUL;
                    end else begin
                        idx <= idx + 1'b1;
                    end
                end

                // ── Done — H is in mem_h ──────────────────────────
                ST_DONE: begin
                    done  <= 1'b1;
                    state <= ST_IDLE;
                end

                default: state <= ST_IDLE;

            endcase
        end
    end

endmodule
