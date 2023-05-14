module de_len_olen #(LEN=7,OLEN=128)(
	input [(LEN-1):0]sig,
	output[(OLEN-1):0]o_h
);
	assign o_h=1<<sig;
endmodule

