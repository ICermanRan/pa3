module receive2seg(
    input clk,
    input rst,
    input [7:0] data_in,
	input ready,
	output [7:0] seg_0_t,
    output [7:0] seg_1_t,
	output [7:0] seg_2_t,
	output [7:0] seg_3_t,
	output [7:0] seg_4_t,
	output [7:0] seg_5_t
);

		assign seg_0_t = seg_0;
		assign seg_1_t = seg_1;
		assign seg_2_t = seg_2;
		assign seg_3_t = seg_3;
		assign seg_4_t = seg_4;
		assign seg_5_t = seg_5;
	
//when the data_in=8'hF0,the cnt+1;
	reg [5:0] cnt;//the max = 50
	
	always@(posedge clk) begin
		if(!rst)
			cnt <= 6'd0;
		else	if (data_in == 8'hF0)
			cnt <= cnt + 1'd1;
		else if (cnt == 6'd50)
			cnt <= 6'd0;
		else
			cnt <= cnt;
	 end
    
	reg [7:0] seg_5;
	reg [7:0] seg_4;
	
	
	always@(data_in) begin
		case (cnt)
			6'd0: begin seg_5 <= 8'b1000_0001; seg_4 <= 8'b1000_0001; end//cnt=0
			6'd1: begin seg_5 <= 8'b1000_0001; seg_4 <= 8'b1100_1111; end//cnt=1
			6'd2: begin seg_5 <= 8'b1000_0001; seg_4 <= 8'b1001_0010; end//cnt=2
			6'd3: begin seg_5 <= 8'b1000_0001; seg_4 <= 8'b1000_0110; end//cnt=3
			6'd4: begin seg_5 <= 8'b1000_0001; seg_4 <= 8'b1100_1100; end//cnt=4
			6'd5: begin seg_5 <= 8'b1000_0001; seg_4 <= 8'b1010_0100; end//cnt=5
			6'd6: begin seg_5 <= 8'b1000_0001; seg_4 <= 8'b1010_0000; end//cnt=6
			6'd7: begin seg_5 <= 8'b1000_0001; seg_4 <= 8'b1000_1111; end//cnt=7
			6'd8: begin seg_5 <= 8'b1000_0001; seg_4 <= 8'b1000_0000; end//cnt=8
			6'd9: begin seg_5 <= 8'b1000_0001; seg_4 <= 8'b1000_0100; end//cnt=9
			
			6'd10: begin seg_5 <= 8'b1100_1111; seg_4 <= 8'b1000_0001; end//cnt=10
			6'd11: begin seg_5 <= 8'b1100_1111; seg_4 <= 8'b1100_1111; end//cnt=11
			6'd12: begin seg_5 <= 8'b1100_1111; seg_4 <= 8'b1001_0010; end//cnt=12
			6'd13: begin seg_5 <= 8'b1100_1111; seg_4 <= 8'b1000_0110; end//cnt=13
			6'd14: begin seg_5 <= 8'b1100_1111; seg_4 <= 8'b1100_1100; end//cnt=14
			6'd15: begin seg_5 <= 8'b1100_1111; seg_4 <= 8'b1010_0100; end//cnt=15
			6'd16: begin seg_5 <= 8'b1100_1111; seg_4 <= 8'b1010_0000; end//cnt=16
			6'd17: begin seg_5 <= 8'b1100_1111; seg_4 <= 8'b1000_1111; end//cnt=17
			6'd18: begin seg_5 <= 8'b1100_1111; seg_4 <= 8'b1000_0000; end//cnt=18
			6'd19: begin seg_5 <= 8'b1100_1111; seg_4 <= 8'b1000_0100; end//cnt=19
			
			6'd20: begin seg_5 <= 8'b1001_0010; seg_4 <= 8'b1000_0001; end//cnt=20
			6'd21: begin seg_5 <= 8'b1001_0010; seg_4 <= 8'b1100_1111; end//cnt=21
			6'd22: begin seg_5 <= 8'b1001_0010; seg_4 <= 8'b1001_0010; end//cnt=22
			6'd23: begin seg_5 <= 8'b1001_0010; seg_4 <= 8'b1000_0110; end//cnt=23
			6'd24: begin seg_5 <= 8'b1001_0010; seg_4 <= 8'b1100_1100; end//cnt=24
			6'd25: begin seg_5 <= 8'b1001_0010; seg_4 <= 8'b1010_0100; end//cnt=25
			6'd26: begin seg_5 <= 8'b1001_0010; seg_4 <= 8'b1010_0000; end//cnt=26
			6'd27: begin seg_5 <= 8'b1001_0010; seg_4 <= 8'b1000_1111; end//cnt=27
			6'd28: begin seg_5 <= 8'b1001_0010; seg_4 <= 8'b1000_0000; end//cnt=28
			6'd29: begin seg_5 <= 8'b1001_0010; seg_4 <= 8'b1000_0100; end//cnt=29
			
			6'd30: begin seg_5 <= 8'b1000_0110; seg_4 <= 8'b1000_0001; end//cnt=30
			6'd31: begin seg_5 <= 8'b1000_0110; seg_4 <= 8'b1100_1111; end//cnt=31
			6'd32: begin seg_5 <= 8'b1000_0110; seg_4 <= 8'b1001_0010; end//cnt=32
			6'd33: begin seg_5 <= 8'b1000_0110; seg_4 <= 8'b1000_0110; end//cnt=33
			6'd34: begin seg_5 <= 8'b1000_0110; seg_4 <= 8'b1100_1100; end//cnt=34
			6'd35: begin seg_5 <= 8'b1000_0110; seg_4 <= 8'b1010_0100; end//cnt=35
			6'd36: begin seg_5 <= 8'b1000_0110; seg_4 <= 8'b1010_0000; end//cnt=36
			6'd37: begin seg_5 <= 8'b1000_0110; seg_4 <= 8'b1000_1111; end//cnt=37
			6'd38: begin seg_5 <= 8'b1000_0110; seg_4 <= 8'b1000_0000; end//cnt=38
			6'd39: begin seg_5 <= 8'b1000_0110; seg_4 <= 8'b1000_0100; end//cnt=39
			
			
			6'd40: begin seg_5 <= 8'b1100_1100; seg_4 <= 8'b1000_0001; end//cnt=40
			6'd41: begin seg_5 <= 8'b1100_1100; seg_4 <= 8'b1100_1111; end//cnt=41
			6'd42: begin seg_5 <= 8'b1100_1100; seg_4 <= 8'b1001_0010; end//cnt=42
			6'd43: begin seg_5 <= 8'b1100_1100; seg_4 <= 8'b1000_0110; end//cnt=43
			6'd44: begin seg_5 <= 8'b1100_1100; seg_4 <= 8'b1100_1100; end//cnt=44
			6'd45: begin seg_5 <= 8'b1100_1100; seg_4 <= 8'b1010_0100; end//cnt=45
			6'd46: begin seg_5 <= 8'b1100_1100; seg_4 <= 8'b1010_0000; end//cnt=46
			6'd47: begin seg_5 <= 8'b1100_1100; seg_4 <= 8'b1000_1111; end//cnt=47
			6'd48: begin seg_5 <= 8'b1100_1100; seg_4 <= 8'b1000_0000; end//cnt=48
			6'd49: begin seg_5 <= 8'b1100_1100; seg_4 <= 8'b1000_0100; end//cnt=49
			
			6'd50: begin seg_5 <= 8'b1010_0100; seg_4 <= 8'b1000_0001; end//cnt=50
			default: ;//begin seg_5 <= 8'b1111_1111; seg_4 <= 8'b1111_1111; end
		endcase
	end
	
//save ASCII code and trans to seg 
    reg [7:0] seg_3;
	reg [7:0] seg_2;

	always@(data_in) begin
        case (data_in)
            8'h15: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1100_1111; end //ps2=Q,code=15,ASCII=8'h51
													
			8'h1D: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1000_1111; end //ps2=W,code=1D,ASCII=8'h57
																						  
			8'h24: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1010_0100; end //ps2=E,code=24,ASCII=8'h45
																						  
			8'h2D: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1001_0010; end //ps2=R,code=2D,ASCII=8'h52
																						  
			8'h2C: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1100_1100; end //ps2=T,code=2C,ASCII=8'h54
																						  
			8'h35: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1000_0100; end //ps2=Y,code=35,ASCII=8'h59
																						  
			8'h3C: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1010_0100; end //ps2=U,code=3C,ASCII=8'h55
																						  
			8'h43: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1000_0100; end //ps2=I,code=43,ASCII=8'h49
																						  
			8'h44: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1011_1000; end //ps2=O,code=44,ASCII=8'h4f
																						  
			8'h4D: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1000_0001; end //ps2=P,code=4D,ASCII=8'h50
																						  
			8'h1C: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1100_1111; end //ps2=A,code=1C,ASCII=8'h41
																						  
			8'h1B: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1000_0110; end //ps2=S,code=1B,ASCII=8'h53
																						  
			8'h23: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1100_1100; end //ps2=D,code=23,ASCII=8'h44
																						  
			8'h2B: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1010_0000; end //ps2=F,code=2B,ASCII=8'h46
																						  
			8'h34: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1000_1111; end //ps2=G,code=34,ASCII=8'h47
																						  
			8'h33: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1000_0000; end //ps2=H,code=33,ASCII=8'h48
																						 
			8'h3B: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1000_1000; end //ps2=J,code=3B,ASCII=8'h4a
																						  
			8'h42: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1110_0000; end //ps2=K,code=42,ASCII=8'h4b
																						  
			8'h4B: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1011_0000; end //ps2=L,code=4B,ASCII=8'h4c
																						  
			8'h1A: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1000_1000; end //ps2=Z,code=1A,ASCII=8'h5a
																						  
			8'h22: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1000_0000; end //ps2=X,code=22,ASCII=8'h58
																						  
			8'h21: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1000_0110; end //ps2=C,code=21,ASCII=8'h43
																						 
			8'h2A: begin seg_3 <= 8'b1010_0100; seg_2 <= 8'b1010_0000; end //ps2=V,code=2A,ASCII=8'h56
																						  
			8'h32: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1001_0010; end //ps2=B,code=32,ASCII=8'h42
																						 
			8'h31: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1011_0000; end //ps2=N,code=31,ASCII=8'h4e
																						  
			8'h3A: begin seg_3 <= 8'b1100_1100; seg_2 <= 8'b1100_0010; end //ps2=M,code=3A,ASCII=8'h4d
																						 
			8'h70: begin seg_3 <= 8'b1000_0110; seg_2 <= 8'b1000_0001; end //ps2=0,code=70,ASCII=8'h30
																						 
			8'h69: begin seg_3 <= 8'b1000_0110; seg_2 <= 8'b1100_1111; end //ps2=1,code=69,ASCII=8'h31
																						  
			8'h72: begin seg_3 <= 8'b1000_0110; seg_2 <= 8'b1001_0010; end //ps2=2,code=72,ASCII=8'h32
																						  
			8'h7A: begin seg_3 <= 8'b1000_0110; seg_2 <= 8'b1000_0110; end //ps2=3,code=7A,ASCII=8'h33
																						 
			8'h6B: begin seg_3 <= 8'b1000_0110; seg_2 <= 8'b1100_1100; end //ps2=4,code=6B,ASCII=8'h34
																						 
			8'h73: begin seg_3 <= 8'b1000_0110; seg_2 <= 8'b1010_0100; end //ps2=5,code=73,ASCII=8'h35
																						 
			8'h74: begin seg_3 <= 8'b1000_0110; seg_2 <= 8'b1010_0000; end //ps2=6,code=74,ASCII=8'h36
																						  
			8'h6C: begin seg_3 <= 8'b1000_0110; seg_2 <= 8'b1000_1111; end //ps2=7,code=6C,ASCII=8'h37
																						 
			8'h75: begin seg_3 <= 8'b1000_0110; seg_2 <= 8'b1000_0000; end //ps2=8,code=75,ASCII=8'h38
																						 
			8'h7D: begin seg_3 <= 8'b1000_0110; seg_2 <= 8'b1000_0100; end //ps2=9,code=7D,ASCII=8'h39
			
			8'hF0: begin seg_3 <= 8'b1111_1111; seg_2 <= 8'b1111_1111; end //ps2=no touch,code=F0,seg turn off
			
			default: begin seg_3 <= 8'b1111_1111; seg_2 <= 8'b1111_1111; end //At begin,no touch,seg turn off
		endcase
	 end
        
        
        
        
        
//save code and trans to seg            
		reg [7:0] seg_1;
		reg [7:0] seg_0;		

     always@(data_in) begin
		case (data_in)
			8'h15: begin seg_1 <= 8'b1100_1111; seg_0 <= 8'b1010_0100; end //ps2=Q,code=15
			
			8'h1D: begin seg_1 <= 8'b1100_1111; seg_0 <= 8'b1100_0010; end //ps2=W,code=1D
			
			8'h24: begin seg_1 <= 8'b1001_0010; seg_0 <= 8'b1100_1100; end //ps2=E,code=24
			
			8'h2D: begin seg_1 <= 8'b1001_0010; seg_0 <= 8'b1100_0010; end //ps2=R,code=2D
			
			8'h2C: begin seg_1 <= 8'b1001_0010; seg_0 <= 8'b1011_0000; end //ps2=T,code=2C
			
			8'h35: begin seg_1 <= 8'b1000_0110; seg_0 <= 8'b1010_0100; end //ps2=Y,code=35
			
			8'h3C: begin seg_1 <= 8'b1000_0110; seg_0 <= 8'b1011_0000; end //ps2=U,code=3C
			
			8'h43: begin seg_1 <= 8'b1100_1100; seg_0 <= 8'b1000_0110; end //ps2=I,code=43
			
			8'h44: begin seg_1 <= 8'b1100_1100; seg_0 <= 8'b1100_1100; end //ps2=O,code=44
			
			8'h4D: begin seg_1 <= 8'b1100_1100; seg_0 <= 8'b1100_0010; end //ps2=P,code=4D
			
			8'h1C: begin seg_1 <= 8'b1100_1111; seg_0 <= 8'b1011_0000; end //ps2=A,code=1C
			
			8'h1B: begin seg_1 <= 8'b1100_1111; seg_0 <= 8'b1110_0000; end //ps2=S,code=1B
			
			8'h23: begin seg_1 <= 8'b1001_0010; seg_0 <= 8'b1000_0110; end //ps2=D,code=23
			
			8'h2B: begin seg_1 <= 8'b1001_0010; seg_0 <= 8'b1110_0000; end //ps2=F,code=2B
			
			8'h34: begin seg_1 <= 8'b1000_0110; seg_0 <= 8'b1100_1100; end //ps2=G,code=34
			
			8'h33: begin seg_1 <= 8'b1000_0110; seg_0 <= 8'b1000_0110; end //ps2=H,code=33
			
			8'h3B: begin seg_1 <= 8'b1000_0110; seg_0 <= 8'b1110_0000; end //ps2=J,code=3B
			
			8'h42: begin seg_1 <= 8'b1100_1100; seg_0 <= 8'b1001_0010; end //ps2=K,code=42
			
			8'h4B: begin seg_1 <= 8'b1100_1100; seg_0 <= 8'b1110_0000; end //ps2=L,code=4B
			
			8'h1A: begin seg_1 <= 8'b1100_1111; seg_0 <= 8'b1000_1000; end //ps2=Z,code=1A
			
			8'h22: begin seg_1 <= 8'b1001_0010; seg_0 <= 8'b1001_0010; end //ps2=X,code=22
			
			8'h21: begin seg_1 <= 8'b1001_0010; seg_0 <= 8'b1100_1111; end //ps2=C,code=21
			
			8'h2A: begin seg_1 <= 8'b1001_0010; seg_0 <= 8'b1000_1000; end //ps2=V,code=2A
			
			8'h32: begin seg_1 <= 8'b1000_0110; seg_0 <= 8'b1001_0010; end //ps2=B,code=32
			
			8'h31: begin seg_1 <= 8'b1000_0110; seg_0 <= 8'b1100_1111; end //ps2=N,code=31
			
			8'h3A: begin seg_1 <= 8'b1000_0110; seg_0 <= 8'b1000_1000; end //ps2=M,code=3A
			
			8'h70: begin seg_1 <= 8'b1000_1111; seg_0 <= 8'b1000_0001; end //ps2=0,code=70
			
			8'h69: begin seg_1 <= 8'b1010_0000; seg_0 <= 8'b1000_0100; end //ps2=1,code=69
			
			8'h72: begin seg_1 <= 8'b1000_1111; seg_0 <= 8'b1001_0010; end //ps2=2,code=72
			
			8'h7A: begin seg_1 <= 8'b1000_1111; seg_0 <= 8'b1000_1000; end //ps2=3,code=7A
			
			8'h6B: begin seg_1 <= 8'b1010_0000; seg_0 <= 8'b1110_0000; end //ps2=4,code=6B
			
			8'h73: begin seg_1 <= 8'b1000_1111; seg_0 <= 8'b1000_0110; end //ps2=5,code=73
			
			8'h74: begin seg_1 <= 8'b1000_1111; seg_0 <= 8'b1100_1100; end //ps2=6,code=74
			
			8'h6C: begin seg_1 <= 8'b1010_0000; seg_0 <= 8'b1011_0000; end //ps2=7,code=6C
			
			8'h75: begin seg_1 <= 8'b1000_1111; seg_0 <= 8'b1010_0100; end //ps2=8,code=75
			
			8'h7D: begin seg_1 <= 8'b1000_1111; seg_0 <= 8'b1100_0010; end //ps2=9,code=7D
			
			8'hF0: begin seg_1 <= 8'b1111_1111; seg_0 <= 8'b1111_1111; end //ps2=no touch,seg turn off
			
			default: begin seg_1 <= 8'b1111_1111; seg_0 <= 8'b1111_1111; end //At begin,no touch,seg turn off 
		endcase
	 end
			
    
endmodule   
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
