 module top(
    input  [3:0] A,
	input  [3:0] B,
    input   cin,
	input[2:0] operation,
	output reg [3:0] result,
	output reg out_s,
    output reg overflow,
    output reg zero
    );
    
    wire [3:0] t_no_cin;
    assign t_no_cin = {3{ cin }}^B;
 
    always @(A or B or operation) 
    begin
        case(operation) 
        //A+B
        3'b000: begin 
                    {out_s,result} <= A + B;
                    overflow <= (A[3] == B[3])&&(result[3] != A[3]);
                    zero <= ~(| result);
                end 	    
        //A-B
	    3'b001: begin 
                    result <= A - B;
                    overflow <= (A[3] == t_no_cin[3]) && (result [3] != A[3]);
                    zero <= ~(| result);
                end
        //Not A
	    3'b010: begin result <= ~A;end
        //A and B
	    3'b011: begin result <= A & B;end
        //A OR B
	    3'b100: begin result <= A | B;end
        //A XOR B
	    3'b101: begin result = A ^ B;end     
        //±ÈœÏŽóÐ¡
	    3'b110: begin 
                    if(A > B)
                        result <= 4'd1;
                    else
                        result <= 4'd0;
                end    
        //ÅÐ¶ÏÏàµÈ
	    3'b111: begin 
                    if(A == B)
                        result <= 4'd1;
                    else
                        result <= 4'd0;
                end 
        endcase
    end
endmodule
