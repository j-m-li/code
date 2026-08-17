//
//             MMXXV July 18 PUBLIC DOMAIN by JML
//
//      The authors and contributors disclaim copyright, 
//      patents and all related rights to this software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT OF ANY PATENT, COPYRIGHT, TRADE SECRET OR OTHER
// PROPRIETARY RIGHT.  IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR
// ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
// CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//

// References :
// ------------
// http://riscvbook.com/
// https://github.com/copilot/share/4a3a1026-4364-8491-8850-9047a04300d4
// https://github.com/rolandbernard/kleine-riscv
// https://chipmunklogic.com/digital-logic-design/designing-pequeno-risc-v-cpu-from-scratch-part-3-dealing-with-pipeline-hazards/
// http://plasmacpu.no-ip.org/
//

module riscv (
    input          I_clk,        // Clock
    input          I_rst,        // Reset (synchronous, active high)
    input	   I_stall,
    output reg [31:0] O_imem_addr,  // Instruction memory address
    input  [31:0] I_imem_data,  // Instruction memory data
    output reg [31:0] O_dmem_addr,  // Data memory address
    input  [31:0] I_dmem_rdata, // Data memory read data
    output reg [31:0] O_dmem_wdata, // Data memory write data
    output reg [3:0]  O_dmem_wmask, // Data memory write mask (byte-enable)
    output reg O_dmem_rd,     // Data memory read enable
    output reg O_dmem_we     // Data memory write enable
);

reg [31:0] c = 0;
// Hazard
reg take_branch;
reg [6:0]  opcode;
reg [4:0]  rd;
reg [4:0]  rs1;
reg [4:0]  rs2;
reg [4:0]  rd_ex;
reg [31:0] write_back;
reg [31:0] alu_jal;
reg [31:0] alu_jalr;
reg [31:0] alu_branch;

// stage 1: IF instruction fetch
reg [31:0] instr;
reg [31:0] pc;
reg [31:0] next_pc;
reg [31:0] pc_if;

reg [4:0] stall;
reg stall_if;
reg stall_id;
reg stall_ex;
reg stall_mem;
reg stall_wb;

reg invalidate;
reg invalidate_if;
reg invalidate_id;
reg invalidate_ex;
reg invalidate_mem;
reg invalidate_wb;
reg [15:0] reset;
reg [15:0] skip;
        
always @* begin
	invalidate <= 0;
	next_pc <= pc + 4;
	case (opcode)
	7'b1101111:  begin // JAL
			next_pc <= alu_jal;
			invalidate <= 1; 
		end
	7'b1100111: begin
			next_pc <= alu_jalr; //JALR
			invalidate <= 1; // JALR
		end
	7'b1100011: begin
			if (take_branch) begin
				next_pc <= alu_branch;
				invalidate <= 1; // Branch
			end else begin
			end
		end
	endcase
end

always @* begin
	invalidate_if <= /*skip[0] ||*/ invalidate || reset[0];
	invalidate_id <= skip[1] || (reset[1:0] != 0) ;
	invalidate_ex <= skip[2] || (reset[2:0] != 0);
	invalidate_mem <= skip[3] || (reset[3:0] != 0);
	invalidate_wb <= skip[4] || (reset[4:0] != 0);
end
	
always @(posedge I_clk) begin
        if (I_rst) begin
		reset <= 1;
		skip <= 0;
	end else begin
		reset <= {reset[13:1],reset[0],1'h0};
		skip <= {skip[14:0],1'h0};
		if (invalidate) begin
			skip[0] <= 1;
			skip[1] <= 1;
			skip[2] <= 1;
		end
	end
end

always @* begin
	stall_if <= I_stall || (stall[4:0] != 0);
	stall_id <= I_stall || (stall[4:1] != 0);
	stall_ex <= I_stall || (stall[4:2] != 0);
	stall_mem <= I_stall || (stall[4:3] != 0);
	stall_wb <= I_stall || (stall[4] != 0);
end

always @* begin
	case (I_imem_data[6:0])
	7'b1100111, //JALR 
        7'b0010011, // I-type 
        7'b0110011, // R-type 
	7'b1100011, // Branch
	7'b0100011, // Store
	7'b0000011: begin // Load
			if (I_imem_data[19:15] != 5'h0 && (
				I_imem_data[19:15] == instr[11:7] ||
				I_imem_data[19:15] == rd ))
			begin
				// rs1 = rd
			end
		end
	endcase
	case (I_imem_data[6:0])
        7'b0110011, // R-type 
	7'b1100011, // Branch
	7'b0100011: begin // Store
			if (I_imem_data[24:20] != 5'h0 && (
				I_imem_data[24:20] == instr[11:7] ||
				I_imem_data[24:20] == rd ))
			begin
				// rs2 = rd
			end
		end
	endcase
	if (I_rst) begin
		stall <= 5'h0;
	end
end

always @(posedge I_clk) begin
	c <= c + 1;
        if (I_rst) begin
            	pc <= 32'h0;
		instr <= 32'h0;
		O_imem_addr <= 32'h0;
	end else if (stall_if) begin
        end else if (invalidate_if) begin
		//instr <= 32'h0;
		instr <= I_imem_data;
		pc <= next_pc;
		O_imem_addr <= next_pc;
		pc_if <= pc;
        end else begin
		pc <= next_pc;
		O_imem_addr <= next_pc;
		instr <= I_imem_data;
		pc_if <= pc;
        end
end

// stage 2 : ID instruction decode and register fetch
// ==== Instruction Decode Wires ====
//reg [6:0]  opcode;
//reg [4:0]  rd;
//reg [4:0]  rs1;
//reg [4:0]  rs2;
reg [2:0]  funct3;
reg [6:0]  funct7;
// Immediate decode
reg [31:0] imm_i;
reg [31:0] imm_s;
reg [31:0] imm_b;
reg [31:0] imm_u;
reg [31:0] imm_j;
// ==== Registers ====
reg [31:0] regfile [0:31];
reg [31:0] rv1;
reg [31:0] rv2;
reg [4:0] shift_amount;

reg [31:0] pc_id;
reg [31:0] instr_id;

integer i;
always @(posedge I_clk) begin
	instr_id <= instr;
	pc_id <= pc_if;
        if (I_rst) begin
		rv1 <= 32'h0;
		rv2 <= 32'h0;
		opcode <= 7'h0;
		rd <= 5'h0;
            	for (i = 0; i < 32; i = i+1) regfile[i] <= 0;
	end else if (stall_id) begin
        end else if (invalidate_id) begin
		rd <= 5'h0;
	end else begin
    		// ==== Main Register Read ====
		rv1 <= (instr[19:15] == 0) ? 32'b0 : 
			(instr[19:15] == rd_ex) ?  write_back : 
				regfile[instr[19:15]];
		rv2 <= (instr[24:20] == 0) ? 32'b0 : 
			(instr[24:20] == rd_ex) ? write_back : 
				regfile[instr[24:20]];
		opcode <= instr[6:0];
		case (instr[6:0])
		7'b0000011, // Load
        	7'b0110011, // R-type
        	7'b0010011, // I-type ALU
		7'b1101111, // JAL
		7'b1100111, // JALR
        	7'b0110111, // LUI
        	7'b0010111: rd <= instr[11:7]; // AUIPC
		default: rd <= 5'h0;
		endcase
		funct3 <= instr[14:12];
		shift_amount <= instr[24:20]; 
		rs1    <= instr[19:15];
		rs2    <= instr[24:20];
		funct7 <= instr[31:25];
		imm_i <= {{20{instr[31]}}, instr[31:20]};
		imm_s <= {{20{instr[31]}}, instr[31:25], instr[11:7]};
		imm_b <= {{19{instr[31]}}, instr[31], instr[7],
                         instr[30:25], instr[11:8], 1'b0};
		imm_u <= {instr[31:12], 12'b0};
		imm_j <= {{11{instr[31]}}, instr[31], instr[19:12],
                         instr[20], instr[30:21], 1'b0};
        end
end

// stage 3 : EX execute and effective address calculation
// ==== ALU ====
// Shifter
wire [31:0] shift1l;
wire [31:0] shift2l;
wire [31:0] shift4l;
wire [31:0] shift8l;
wire [31:0] shift16l;
wire [31:0] shift1r;
wire [31:0] shift2r;
wire [31:0] shift4r;
wire [31:0] shift8r;
wire [31:0] shift16r;
wire [15:0] fills;

assign shift1l = (shift_amount[0] == 1) ? {rv1[30:0],1'b0} : rv1;
assign shift2l = (shift_amount[1] == 1) ? {shift1l[29:0],2'b00} : shift1l;
assign shift4l = (shift_amount[2] == 1) ? {shift2l[27:0],4'b0000} : shift2l;
assign shift8l = (shift_amount[3] == 1) ? {shift4l[23:0],8'h00} : shift4l;
assign shift16l = (shift_amount[4] == 1) ? {shift8l[15:0],16'h0000} : shift8l;
assign fills = (funct3 == 3'b001 && funct7 != 7'h0 /*SHIFT_RIGHT_SIGNED*/
	&& rv1[31] == 1'b1) ? 16'b1111_1111_1111_1111 : 16'b0000_0000_0000_0000;
assign shift1r = (shift_amount[0] == 1) ? {fills[0],rv1[31:1]} : rv1;
assign shift2r = (shift_amount[1] == 1) ? {fills[1:0],shift1r[31:2]} : shift1r;
assign shift4r = (shift_amount[2] == 1) ? {fills[3:0],shift2r[31:4]} : shift2r;
assign shift8r = (shift_amount[3] == 1) ? {fills[7:0],shift4r[31:8]} : shift4r;
assign shift16r = (shift_amount[4] == 1)?{fills[15:0],shift8r[31:16]} : shift8r;

reg [31:0] alu_out;

reg [6:0]  opcode_ex;
//reg [4:0]  rd_ex;
reg [31:0] imm_u_ex;
reg [31:0] pc_ex;
reg [31:0] instr_ex;
reg [2:0]  funct3_ex;
reg [31:0] dmem_wmask;
reg [31:0] dmem_wdata;
reg dmem_we;
reg dmem_rd;

always @* begin
	case (funct3)
       	3'b000: take_branch <= rv1 == rv2; // BEQ
       	3'b001: take_branch <= rv1 != rv2; // BNE
       	3'b100: take_branch <=  $signed(rv1) < $signed(rv2); // BLT
	3'b101: take_branch <=  $signed(rv1) >= $signed(rv2); // BGE
	3'b110: take_branch <= rv1 < rv2; // BLTU
        3'b111: take_branch <= rv1 >= rv2;    // BGEU
	default: take_branch <= 0;
	endcase
end

always @* begin
	alu_jal <= pc_ex + imm_j; //JAL
       	alu_jalr <= (rv1 + imm_i) & ~1; //JALR
	alu_branch <= pc_ex + imm_b; // branch
end

reg [31:0] alu_add;
reg [31:0] alu_sub;
reg [31:0] alu_sll;
reg [31:0] alu_slt;
reg [31:0] alu_sltu;
reg [31:0] alu_xor;
reg [31:0] alu_srl;
reg [31:0] alu_sra;
reg [31:0] alu_or;
reg [31:0] alu_and;
always @* begin
	alu_add <= rv1 + rv2; // ADD
        alu_sub <= rv1 - rv2; // SUB
        alu_sll <= rv1 << rv2[4:0]; // SLL
        alu_slt <= ($signed(rv1) < $signed(rv2)) ? 32'b1 : 32'b0; //SLT
        alu_sltu <= (rv1 < rv2) ? 32'b1 : 32'b0; // SLTU
	alu_xor <= rv1 ^ rv2; // XOR
        alu_srl <= rv1 >> rv2[4:0]; // SRL
        alu_sra <= $signed(rv1) >>> rv2[4:0]; // SRA
        alu_or <= rv1 | rv2; // OR
        alu_and <= rv1 & rv2; // AND
 
end

reg [31:0] alu_addi;
reg [31:0] alu_slti;
reg [31:0] alu_sltiu;
reg [31:0] alu_xori;
reg [31:0] alu_ori;
reg [31:0] alu_andi;
reg [31:0] alu_slli;
reg [31:0] alu_srli;
always @* begin
	alu_addi <= rv1 + imm_i; // ADDI
	alu_slti <= ($signed(rv1) < $signed(imm_i)) ? 32'b1 : 32'b0; // SLTI
	alu_sltiu <= (rv1 < imm_i) ? 32'b1 : 32'b0; // SLTIU
	alu_xori <= rv1 ^ imm_i; // XORI
	alu_ori <= rv1 | imm_i; // ORI
	alu_andi <= rv1 & imm_i; // ANDI
	alu_slli <= shift16l; // SLLI
	alu_srli <= shift16r; // SRLI/SRAI
end

reg [31:0] alu_sw;
always @* begin
	alu_sw <= rv1 + imm_s;
end

reg [31:0] alu_lw;
always @* begin
	alu_lw <= rv1 + imm_i;
end

reg [31:0] alu_out0;
always @* begin
        if (I_rst) begin
	end else begin
	 	case (opcode)
            	7'b0110011: begin // R-type
                	case ({funct7, funct3})
                    	{7'b0000000,3'b000}: alu_out0 <= alu_add; // ADD
                    	{7'b0100000,3'b000}: alu_out0 <= alu_sub; // SUB
                    	{7'b0000000,3'b001}: alu_out0 <= alu_sll; // SLL
                    	{7'b0000000,3'b010}: alu_out0 <= alu_slt; // SLT
                    	{7'b0000000,3'b011}: alu_out0 <= alu_sltu; // SLTU
                    	{7'b0000000,3'b100}: alu_out0 <= alu_xor; // XOR
                    	{7'b0000000,3'b101}: alu_out0 <= alu_srl; // SRL
                    	{7'b0100000,3'b101}: alu_out0 <= alu_sra; // SRA
                    	{7'b0000000,3'b110}: alu_out0 <= alu_or; // OR
                    	{7'b0000000,3'b111}: alu_out0 <= alu_and; // AND
           		endcase
            	end
            	7'b0010011: begin // I-type ALU
                		case (funct3)
                    		3'b000: alu_out0 <= alu_addi; // ADDI
                    		3'b010: alu_out0 <= alu_slti; // SLTI
                    		3'b011: alu_out0 <= alu_sltiu; // SLTIU 
                    		3'b100: alu_out0 <= alu_xori; // XORI
                    		3'b110: alu_out0 <= alu_ori; // ORI
                    		3'b111: alu_out0 <= alu_andi; // ANDI
                    		3'b001: alu_out0 <= shift16l; // SLLI
                    		3'b101: alu_out0 <= shift16r; // SRLI/SRAI
                		endcase
            		end
		7'b0100011: begin // SW
				alu_out0 <= alu_sw;
			end 
		7'b0000011: begin // LW
				alu_out0 <= alu_lw;
			end
        	endcase
	end
end

always @(posedge I_clk) begin
	instr_ex <= instr_id;
	pc_ex <= pc_id;
	dmem_we <= 0;
	dmem_rd <= 0;
        if (I_rst) begin
        	alu_out <= 32'b0;
		opcode_ex <= 7'h0;
		rd_ex <= 5'h0;
        end else if (stall_ex) begin
	end else if (invalidate_ex) begin
		rd_ex <= 5'h0;
	end else begin
		alu_out <= alu_out0;
        	case (opcode)
		7'b0100011: begin
				if (funct3 == 4'b000) begin
					dmem_wmask <= 4'b0001; // SB
				end else if (funct3  == 4'b001) begin
					dmem_wmask <= 4'b0011; // SH
				end else begin
					dmem_wmask <= 4'b1111; // SW
				end
				dmem_wdata <= rv2;
				dmem_we <= 1;
			end 
		7'b0000011: begin // LW
				dmem_rd <= 1;
			end
		default: begin
			end
        	endcase
		opcode_ex <= opcode;
		rd_ex <= rd;
		imm_u_ex <= imm_u;
		funct3_ex <= funct3;
	end
end

// stage 4: MEM memory access   
reg [6:0]  opcode_mem;
reg [2:0]  funct3_mem;
reg [4:0]  rd_mem;
reg [31:0] pc_mem;
reg [31:0] instr_mem;
reg [31:0] alu_out_mem;
reg [31:0] dmem_wmask_mem;

always @(posedge I_clk) begin
	instr_mem <= instr_ex;
	pc_mem <= pc_ex;
        if (I_rst) begin
		O_dmem_rd <= 0;
		O_dmem_we <= 0;
		O_dmem_wmask <= 4'b0000;
		O_dmem_wdata <= 32'h0;
		O_dmem_addr <= 32'h0;
        	alu_out_mem <= 32'b0;
		opcode_mem <= 7'h0;
		rd_mem <= 5'h0;
		instr_mem <= 32'h0;
        end else if (stall_mem) begin
	end else if (invalidate_mem) begin
		rd_mem <= 5'h0;
	end else begin
		O_dmem_wdata <= 32'h0;
		O_dmem_wmask <= dmem_wmask;
		O_dmem_rd <= dmem_rd;
		O_dmem_we <= dmem_we;
		alu_out_mem <= alu_out;
		opcode_mem <= opcode_ex;
		funct3_mem <= funct3_ex;
		rd_mem <= rd_ex;
		if (dmem_rd) begin
			O_dmem_addr <= alu_out;
		end
		if (dmem_we) begin
			rd_mem <= 5'h0;
			O_dmem_wdata <= dmem_wdata;
			O_dmem_addr <= alu_out;
		end
	end
end


// stage 5: write back

// FIXME for sorting bytes in unaligned LW/LH memory access (this should be 
// in cache.v but it doesn't compile with yosys...)
//reg [31:0] write_back;
reg [31:0] rdata[4];
reg [1:0] rdatai;
always @* begin
	rdata[0] <= I_dmem_rdata;
	rdata[1] <= {I_dmem_rdata[7:0],I_dmem_rdata[31:8]};
	rdata[2] <= {I_dmem_rdata[15:0],I_dmem_rdata[31:16]};
	rdata[3] <= {I_dmem_rdata[23:0],I_dmem_rdata[31:24]};
	rdatai <= alu_out_mem[1:0];
end

always @* begin
        	write_back <= alu_out_mem; 
		case (opcode_mem)
		7'b0000011: begin // Load
			case (funct3_mem)
			3'b000: write_back <= // LB 
				{{24{rdata[rdatai][7]}}, rdata[rdatai][7:0]}; 
			3'b100: write_back <= // LBU 
				{24'h0, rdata[rdatai][7:0]}; 
			3'b001: write_back <= // LH 
				{{16{rdata[rdatai][15]}}, rdata[rdatai][15:0]}; 
			3'b101: write_back <= // LHU 
				{16'h0, rdata[rdatai][15:0]}; 
			3'b010: write_back <= rdata[rdatai]; // LW
			endcase
			end 
		endcase

end

always @(posedge I_clk) begin
        if (I_rst) begin
        end else if (stall_wb) begin
	end else if (invalidate_wb) begin
	end else begin
		if (rd_mem) begin
			regfile[rd_mem] <= write_back;
		end
	end
end

endmodule

