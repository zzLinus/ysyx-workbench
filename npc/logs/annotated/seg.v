	// verilator_coverage annotation
	module seg(
 000019	  input clk,
%000001	  input rst,
%000001	  input [2:0] seg_x,
%000006	  output [7:0] o_seg0,
%000003	  output [7:0] o_seg1,
%000003	  output [7:0] o_seg2,
%000004	  output [7:0] o_seg3,
%000003	  output [7:0] o_seg4,
%000002	  output [7:0] o_seg5,
%000005	  output [7:0] o_seg6,
	  output [7:0] o_seg7
	);
%000037	
	wire [7:0] segs [7:0];
	assign segs[0] = 8'b11111101;
	assign segs[1] = 8'b01100000;
	assign segs[2] = 8'b11011010;
	assign segs[3] = 8'b11110010;
	assign segs[4] = 8'b01100110;
	assign segs[5] = 8'b10110110;
	assign segs[6] = 8'b10111110;
	assign segs[7] = 8'b11100000;
	
	parameter CLK_NUM = 5000000;
%000000	
%000000	reg [31:0] count;
	reg [2:0] offset;
 000020	
 000020	integer x;
%000000	verilator_coverage: (next point on previous line)

%000000	
%000000	always @(posedge clk) begin
%000000	verilator_coverage: (next point on previous line)

%000000		if(rst) begin count <= 0; offset <= 0; end
			else begin
				if(count == CLK_NUM) begin offset <= offset + 1; end
					count <= (count == CLK_NUM) ? 0 : count + 1;
			end
		x = integer'(seg_x);
	end
	
	assign o_seg0 = ~segs[x[2:0]];
	assign o_seg1 = ~segs[3'd1];
	assign o_seg2 = ~segs[3'd7];
	assign o_seg3 = ~segs[3'd6];
	assign o_seg4 = ~segs[3'd4];
	assign o_seg5 = ~segs[3'd5];
	assign o_seg6 = ~segs[3'd3];
	assign o_seg7 = ~segs[3'd2];
	
	endmodule
	
