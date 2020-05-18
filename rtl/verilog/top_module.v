module top_module(data, enc, dec);
  input  [7:0]  data;
  output [12:0] enc;
  output [7:0]  dec;

  /* verilator lint_off PINMISSING */
  ecc_enc encoder(
    .d_i(data),
    .q_o(enc)
  );

  ecc_dec decoder(
    .d_i(enc),
    .q_o(dec)
  );
  /* verilator lint_on PINMISSING */
endmodule
