module iFetch(
  input         clock,
  input         reset,
  input  [31:0] io_instIn,
  output [31:0] io_instOut,
  output [63:0] io_pc,
  output [63:0] io_snpc,
  input  [63:0] io_dnpc,
  input         io_jump
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] Ebpro_inst; // @[iFetch.scala 29:21]
  reg [63:0] pc; // @[iFetch.scala 17:19]
  wire [63:0] snpc = pc + 64'h4; // @[iFetch.scala 18:17]
  ebProbe Ebpro ( // @[iFetch.scala 29:21]
    .inst(Ebpro_inst)
  );
  assign io_instOut = io_instIn; // @[iFetch.scala 28:14]
  assign io_pc = pc; // @[iFetch.scala 21:9]
  assign io_snpc = pc + 64'h4; // @[iFetch.scala 19:11]
  assign Ebpro_inst = io_instIn; // @[iFetch.scala 30:17]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  pc = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (reset) begin
      pc <= 64'h80000000;
    end else if (io_jump) begin
      pc <= io_dnpc;
    end else begin
      pc <= snpc;
    end
  end
endmodule
module immeGen(
  input  [31:0] io_inst,
  output [63:0] io_imme
);
  wire [51:0] _T_3 = io_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [63:0] Iimm = {_T_3,io_inst[31:20]}; // @[Cat.scala 29:58]
  wire [11:0] _T_6 = {io_inst[31:25],io_inst[11:7]}; // @[Cat.scala 29:58]
  wire [51:0] _T_9 = _T_6[11] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [63:0] Simm = {_T_9,io_inst[31:25],io_inst[11:7]}; // @[Cat.scala 29:58]
  wire [12:0] _T_17 = {io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8],1'h0}; // @[Cat.scala 29:58]
  wire [50:0] _T_20 = _T_17[12] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire [63:0] Bimm = {_T_20,io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8],1'h0}; // @[Cat.scala 29:58]
  wire [31:0] _T_22 = {io_inst[31:12],12'h0}; // @[Cat.scala 29:58]
  wire [31:0] _T_25 = _T_22[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] Uimm = {_T_25,io_inst[31:12],12'h0}; // @[Cat.scala 29:58]
  wire [20:0] _T_33 = {io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 29:58]
  wire [42:0] _T_36 = _T_33[20] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 72:12]
  wire [63:0] Jimm = {_T_36,io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 29:58]
  wire [31:0] _T_37 = io_inst & 32'h7f; // @[immeGen.scala 53:47]
  wire  _T_38 = 32'h17 == _T_37; // @[immeGen.scala 53:47]
  wire [31:0] _T_39 = io_inst & 32'h707f; // @[immeGen.scala 54:47]
  wire  _T_40 = 32'h23 == _T_39; // @[immeGen.scala 54:47]
  wire  _T_42 = 32'h3003 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_44 = 32'h63 == _T_39; // @[immeGen.scala 55:47]
  wire  _T_46 = 32'h4003 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_48 = 32'h37 == _T_37; // @[immeGen.scala 53:47]
  wire  _T_50 = 32'h5063 == _T_39; // @[immeGen.scala 55:47]
  wire [31:0] _T_51 = io_inst & 32'hfe00707f; // @[immeGen.scala 51:47]
  wire  _T_52 = 32'h4000501b == _T_51; // @[immeGen.scala 51:47]
  wire  _T_54 = 32'h7013 == _T_39; // @[immeGen.scala 51:47]
  wire [31:0] _T_55 = io_inst & 32'hfc00707f; // @[immeGen.scala 51:47]
  wire  _T_56 = 32'h1013 == _T_55; // @[immeGen.scala 51:47]
  wire  _T_58 = 32'h3013 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_60 = 32'h1063 == _T_39; // @[immeGen.scala 55:47]
  wire  _T_62 = 32'h6013 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_64 = 32'h1003 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_66 = 32'h7063 == _T_39; // @[immeGen.scala 55:47]
  wire  _T_68 = 32'h1023 == _T_39; // @[immeGen.scala 54:47]
  wire  _T_70 = 32'h6003 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_72 = 32'h3 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_74 = 32'h1b == _T_39; // @[immeGen.scala 51:47]
  wire  _T_76 = 32'h4063 == _T_39; // @[immeGen.scala 55:47]
  wire  _T_78 = 32'h6f == _T_37; // @[immeGen.scala 52:47]
  wire  _T_80 = 32'h501b == _T_51; // @[immeGen.scala 51:47]
  wire  _T_82 = 32'h4013 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_84 = 32'h6063 == _T_39; // @[immeGen.scala 55:47]
  wire  _T_86 = 32'h101b == _T_51; // @[immeGen.scala 51:47]
  wire  _T_88 = 32'h5003 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_90 = 32'h3023 == _T_39; // @[immeGen.scala 54:47]
  wire  _T_92 = 32'h13 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_94 = 32'h67 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_96 = 32'h5013 == _T_55; // @[immeGen.scala 51:47]
  wire  _T_98 = 32'h2003 == _T_39; // @[immeGen.scala 51:47]
  wire  _T_100 = 32'h40005013 == _T_55; // @[immeGen.scala 51:47]
  wire  _T_102 = 32'h2023 == _T_39; // @[immeGen.scala 54:47]
  wire  _T_104 = 32'h1073 == _T_39; // @[immeGen.scala 61:29]
  wire  _T_106 = 32'h2073 == _T_39; // @[immeGen.scala 62:29]
  wire [63:0] _T_107 = _T_106 ? Iimm : 64'h0; // @[Mux.scala 98:16]
  wire [63:0] _T_108 = _T_104 ? Iimm : _T_107; // @[Mux.scala 98:16]
  wire [63:0] _T_109 = _T_102 ? Simm : _T_108; // @[Mux.scala 98:16]
  wire [63:0] _T_110 = _T_100 ? Iimm : _T_109; // @[Mux.scala 98:16]
  wire [63:0] _T_111 = _T_98 ? Iimm : _T_110; // @[Mux.scala 98:16]
  wire [63:0] _T_112 = _T_96 ? Iimm : _T_111; // @[Mux.scala 98:16]
  wire [63:0] _T_113 = _T_94 ? Iimm : _T_112; // @[Mux.scala 98:16]
  wire [63:0] _T_114 = _T_92 ? Iimm : _T_113; // @[Mux.scala 98:16]
  wire [63:0] _T_115 = _T_90 ? Simm : _T_114; // @[Mux.scala 98:16]
  wire [63:0] _T_116 = _T_88 ? Iimm : _T_115; // @[Mux.scala 98:16]
  wire [63:0] _T_117 = _T_86 ? Iimm : _T_116; // @[Mux.scala 98:16]
  wire [63:0] _T_118 = _T_84 ? Bimm : _T_117; // @[Mux.scala 98:16]
  wire [63:0] _T_119 = _T_82 ? Iimm : _T_118; // @[Mux.scala 98:16]
  wire [63:0] _T_120 = _T_80 ? Iimm : _T_119; // @[Mux.scala 98:16]
  wire [63:0] _T_121 = _T_78 ? Jimm : _T_120; // @[Mux.scala 98:16]
  wire [63:0] _T_122 = _T_76 ? Bimm : _T_121; // @[Mux.scala 98:16]
  wire [63:0] _T_123 = _T_74 ? Iimm : _T_122; // @[Mux.scala 98:16]
  wire [63:0] _T_124 = _T_72 ? Iimm : _T_123; // @[Mux.scala 98:16]
  wire [63:0] _T_125 = _T_70 ? Iimm : _T_124; // @[Mux.scala 98:16]
  wire [63:0] _T_126 = _T_68 ? Simm : _T_125; // @[Mux.scala 98:16]
  wire [63:0] _T_127 = _T_66 ? Bimm : _T_126; // @[Mux.scala 98:16]
  wire [63:0] _T_128 = _T_64 ? Iimm : _T_127; // @[Mux.scala 98:16]
  wire [63:0] _T_129 = _T_62 ? Iimm : _T_128; // @[Mux.scala 98:16]
  wire [63:0] _T_130 = _T_60 ? Bimm : _T_129; // @[Mux.scala 98:16]
  wire [63:0] _T_131 = _T_58 ? Iimm : _T_130; // @[Mux.scala 98:16]
  wire [63:0] _T_132 = _T_56 ? Iimm : _T_131; // @[Mux.scala 98:16]
  wire [63:0] _T_133 = _T_54 ? Iimm : _T_132; // @[Mux.scala 98:16]
  wire [63:0] _T_134 = _T_52 ? Iimm : _T_133; // @[Mux.scala 98:16]
  wire [63:0] _T_135 = _T_50 ? Bimm : _T_134; // @[Mux.scala 98:16]
  wire [63:0] _T_136 = _T_48 ? Uimm : _T_135; // @[Mux.scala 98:16]
  wire [63:0] _T_137 = _T_46 ? Iimm : _T_136; // @[Mux.scala 98:16]
  wire [63:0] _T_138 = _T_44 ? Bimm : _T_137; // @[Mux.scala 98:16]
  wire [63:0] _T_139 = _T_42 ? Iimm : _T_138; // @[Mux.scala 98:16]
  wire [63:0] _T_140 = _T_40 ? Simm : _T_139; // @[Mux.scala 98:16]
  assign io_imme = _T_38 ? Uimm : _T_140; // @[immeGen.scala 64:13]
endmodule
module RF(
  input         clock,
  input  [63:0] io_pc,
  input         io_we,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_rd,
  output [63:0] io_dout1,
  output [63:0] io_dout2,
  input  [63:0] io_din
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] DPIC_RegRead_ins_inst_0; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_1; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_2; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_3; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_4; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_5; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_6; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_7; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_8; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_9; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_10; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_11; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_12; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_13; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_14; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_15; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_16; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_17; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_18; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_19; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_20; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_21; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_22; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_23; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_24; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_25; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_26; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_27; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_28; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_29; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_30; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_inst_31; // @[regFile.scala 23:32]
  wire [63:0] DPIC_RegRead_ins_pc; // @[regFile.scala 23:32]
  wire  _T_3 = io_rd == 5'h1; // @[regFile.scala 31:22]
  wire  _T_4 = io_we & _T_3; // @[regFile.scala 31:13]
  reg [63:0] _T_5; // @[Reg.scala 15:16]
  wire  _T_7 = io_rd == 5'h2; // @[regFile.scala 31:22]
  wire  _T_8 = io_we & _T_7; // @[regFile.scala 31:13]
  reg [63:0] _T_9; // @[Reg.scala 15:16]
  wire  _T_11 = io_rd == 5'h3; // @[regFile.scala 31:22]
  wire  _T_12 = io_we & _T_11; // @[regFile.scala 31:13]
  reg [63:0] _T_13; // @[Reg.scala 15:16]
  wire  _T_15 = io_rd == 5'h4; // @[regFile.scala 31:22]
  wire  _T_16 = io_we & _T_15; // @[regFile.scala 31:13]
  reg [63:0] _T_17; // @[Reg.scala 15:16]
  wire  _T_19 = io_rd == 5'h5; // @[regFile.scala 31:22]
  wire  _T_20 = io_we & _T_19; // @[regFile.scala 31:13]
  reg [63:0] _T_21; // @[Reg.scala 15:16]
  wire  _T_23 = io_rd == 5'h6; // @[regFile.scala 31:22]
  wire  _T_24 = io_we & _T_23; // @[regFile.scala 31:13]
  reg [63:0] _T_25; // @[Reg.scala 15:16]
  wire  _T_27 = io_rd == 5'h7; // @[regFile.scala 31:22]
  wire  _T_28 = io_we & _T_27; // @[regFile.scala 31:13]
  reg [63:0] _T_29; // @[Reg.scala 15:16]
  wire  _T_31 = io_rd == 5'h8; // @[regFile.scala 31:22]
  wire  _T_32 = io_we & _T_31; // @[regFile.scala 31:13]
  reg [63:0] _T_33; // @[Reg.scala 15:16]
  wire  _T_35 = io_rd == 5'h9; // @[regFile.scala 31:22]
  wire  _T_36 = io_we & _T_35; // @[regFile.scala 31:13]
  reg [63:0] _T_37; // @[Reg.scala 15:16]
  wire  _T_39 = io_rd == 5'ha; // @[regFile.scala 31:22]
  wire  _T_40 = io_we & _T_39; // @[regFile.scala 31:13]
  reg [63:0] _T_41; // @[Reg.scala 15:16]
  wire  _T_43 = io_rd == 5'hb; // @[regFile.scala 31:22]
  wire  _T_44 = io_we & _T_43; // @[regFile.scala 31:13]
  reg [63:0] _T_45; // @[Reg.scala 15:16]
  wire  _T_47 = io_rd == 5'hc; // @[regFile.scala 31:22]
  wire  _T_48 = io_we & _T_47; // @[regFile.scala 31:13]
  reg [63:0] _T_49; // @[Reg.scala 15:16]
  wire  _T_51 = io_rd == 5'hd; // @[regFile.scala 31:22]
  wire  _T_52 = io_we & _T_51; // @[regFile.scala 31:13]
  reg [63:0] _T_53; // @[Reg.scala 15:16]
  wire  _T_55 = io_rd == 5'he; // @[regFile.scala 31:22]
  wire  _T_56 = io_we & _T_55; // @[regFile.scala 31:13]
  reg [63:0] _T_57; // @[Reg.scala 15:16]
  wire  _T_59 = io_rd == 5'hf; // @[regFile.scala 31:22]
  wire  _T_60 = io_we & _T_59; // @[regFile.scala 31:13]
  reg [63:0] _T_61; // @[Reg.scala 15:16]
  wire  _T_63 = io_rd == 5'h10; // @[regFile.scala 31:22]
  wire  _T_64 = io_we & _T_63; // @[regFile.scala 31:13]
  reg [63:0] _T_65; // @[Reg.scala 15:16]
  wire  _T_67 = io_rd == 5'h11; // @[regFile.scala 31:22]
  wire  _T_68 = io_we & _T_67; // @[regFile.scala 31:13]
  reg [63:0] _T_69; // @[Reg.scala 15:16]
  wire  _T_71 = io_rd == 5'h12; // @[regFile.scala 31:22]
  wire  _T_72 = io_we & _T_71; // @[regFile.scala 31:13]
  reg [63:0] _T_73; // @[Reg.scala 15:16]
  wire  _T_75 = io_rd == 5'h13; // @[regFile.scala 31:22]
  wire  _T_76 = io_we & _T_75; // @[regFile.scala 31:13]
  reg [63:0] _T_77; // @[Reg.scala 15:16]
  wire  _T_79 = io_rd == 5'h14; // @[regFile.scala 31:22]
  wire  _T_80 = io_we & _T_79; // @[regFile.scala 31:13]
  reg [63:0] _T_81; // @[Reg.scala 15:16]
  wire  _T_83 = io_rd == 5'h15; // @[regFile.scala 31:22]
  wire  _T_84 = io_we & _T_83; // @[regFile.scala 31:13]
  reg [63:0] _T_85; // @[Reg.scala 15:16]
  wire  _T_87 = io_rd == 5'h16; // @[regFile.scala 31:22]
  wire  _T_88 = io_we & _T_87; // @[regFile.scala 31:13]
  reg [63:0] _T_89; // @[Reg.scala 15:16]
  wire  _T_91 = io_rd == 5'h17; // @[regFile.scala 31:22]
  wire  _T_92 = io_we & _T_91; // @[regFile.scala 31:13]
  reg [63:0] _T_93; // @[Reg.scala 15:16]
  wire  _T_95 = io_rd == 5'h18; // @[regFile.scala 31:22]
  wire  _T_96 = io_we & _T_95; // @[regFile.scala 31:13]
  reg [63:0] _T_97; // @[Reg.scala 15:16]
  wire  _T_99 = io_rd == 5'h19; // @[regFile.scala 31:22]
  wire  _T_100 = io_we & _T_99; // @[regFile.scala 31:13]
  reg [63:0] _T_101; // @[Reg.scala 15:16]
  wire  _T_103 = io_rd == 5'h1a; // @[regFile.scala 31:22]
  wire  _T_104 = io_we & _T_103; // @[regFile.scala 31:13]
  reg [63:0] _T_105; // @[Reg.scala 15:16]
  wire  _T_107 = io_rd == 5'h1b; // @[regFile.scala 31:22]
  wire  _T_108 = io_we & _T_107; // @[regFile.scala 31:13]
  reg [63:0] _T_109; // @[Reg.scala 15:16]
  wire  _T_111 = io_rd == 5'h1c; // @[regFile.scala 31:22]
  wire  _T_112 = io_we & _T_111; // @[regFile.scala 31:13]
  reg [63:0] _T_113; // @[Reg.scala 15:16]
  wire  _T_115 = io_rd == 5'h1d; // @[regFile.scala 31:22]
  wire  _T_116 = io_we & _T_115; // @[regFile.scala 31:13]
  reg [63:0] _T_117; // @[Reg.scala 15:16]
  wire  _T_119 = io_rd == 5'h1e; // @[regFile.scala 31:22]
  wire  _T_120 = io_we & _T_119; // @[regFile.scala 31:13]
  reg [63:0] _T_121; // @[Reg.scala 15:16]
  wire  _T_123 = io_rd == 5'h1f; // @[regFile.scala 31:22]
  wire  _T_124 = io_we & _T_123; // @[regFile.scala 31:13]
  reg [63:0] _T_125; // @[Reg.scala 15:16]
  wire  _T_126 = 5'h1 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_127 = _T_126 ? _T_5 : 64'h0; // @[Mux.scala 80:57]
  wire  _T_128 = 5'h2 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_129 = _T_128 ? _T_9 : _T_127; // @[Mux.scala 80:57]
  wire  _T_130 = 5'h3 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_131 = _T_130 ? _T_13 : _T_129; // @[Mux.scala 80:57]
  wire  _T_132 = 5'h4 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_133 = _T_132 ? _T_17 : _T_131; // @[Mux.scala 80:57]
  wire  _T_134 = 5'h5 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_135 = _T_134 ? _T_21 : _T_133; // @[Mux.scala 80:57]
  wire  _T_136 = 5'h6 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_137 = _T_136 ? _T_25 : _T_135; // @[Mux.scala 80:57]
  wire  _T_138 = 5'h7 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_139 = _T_138 ? _T_29 : _T_137; // @[Mux.scala 80:57]
  wire  _T_140 = 5'h8 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_141 = _T_140 ? _T_33 : _T_139; // @[Mux.scala 80:57]
  wire  _T_142 = 5'h9 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_143 = _T_142 ? _T_37 : _T_141; // @[Mux.scala 80:57]
  wire  _T_144 = 5'ha == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_145 = _T_144 ? _T_41 : _T_143; // @[Mux.scala 80:57]
  wire  _T_146 = 5'hb == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_147 = _T_146 ? _T_45 : _T_145; // @[Mux.scala 80:57]
  wire  _T_148 = 5'hc == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_149 = _T_148 ? _T_49 : _T_147; // @[Mux.scala 80:57]
  wire  _T_150 = 5'hd == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_151 = _T_150 ? _T_53 : _T_149; // @[Mux.scala 80:57]
  wire  _T_152 = 5'he == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_153 = _T_152 ? _T_57 : _T_151; // @[Mux.scala 80:57]
  wire  _T_154 = 5'hf == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_155 = _T_154 ? _T_61 : _T_153; // @[Mux.scala 80:57]
  wire  _T_156 = 5'h10 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_157 = _T_156 ? _T_65 : _T_155; // @[Mux.scala 80:57]
  wire  _T_158 = 5'h11 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_159 = _T_158 ? _T_69 : _T_157; // @[Mux.scala 80:57]
  wire  _T_160 = 5'h12 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_161 = _T_160 ? _T_73 : _T_159; // @[Mux.scala 80:57]
  wire  _T_162 = 5'h13 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_163 = _T_162 ? _T_77 : _T_161; // @[Mux.scala 80:57]
  wire  _T_164 = 5'h14 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_165 = _T_164 ? _T_81 : _T_163; // @[Mux.scala 80:57]
  wire  _T_166 = 5'h15 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_167 = _T_166 ? _T_85 : _T_165; // @[Mux.scala 80:57]
  wire  _T_168 = 5'h16 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_169 = _T_168 ? _T_89 : _T_167; // @[Mux.scala 80:57]
  wire  _T_170 = 5'h17 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_171 = _T_170 ? _T_93 : _T_169; // @[Mux.scala 80:57]
  wire  _T_172 = 5'h18 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_173 = _T_172 ? _T_97 : _T_171; // @[Mux.scala 80:57]
  wire  _T_174 = 5'h19 == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_175 = _T_174 ? _T_101 : _T_173; // @[Mux.scala 80:57]
  wire  _T_176 = 5'h1a == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_177 = _T_176 ? _T_105 : _T_175; // @[Mux.scala 80:57]
  wire  _T_178 = 5'h1b == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_179 = _T_178 ? _T_109 : _T_177; // @[Mux.scala 80:57]
  wire  _T_180 = 5'h1c == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_181 = _T_180 ? _T_113 : _T_179; // @[Mux.scala 80:57]
  wire  _T_182 = 5'h1d == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_183 = _T_182 ? _T_117 : _T_181; // @[Mux.scala 80:57]
  wire  _T_184 = 5'h1e == io_rs1; // @[Mux.scala 80:60]
  wire [63:0] _T_185 = _T_184 ? _T_121 : _T_183; // @[Mux.scala 80:57]
  wire  _T_186 = 5'h1f == io_rs1; // @[Mux.scala 80:60]
  wire  _T_188 = 5'h1 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_189 = _T_188 ? _T_5 : 64'h0; // @[Mux.scala 80:57]
  wire  _T_190 = 5'h2 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_191 = _T_190 ? _T_9 : _T_189; // @[Mux.scala 80:57]
  wire  _T_192 = 5'h3 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_193 = _T_192 ? _T_13 : _T_191; // @[Mux.scala 80:57]
  wire  _T_194 = 5'h4 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_195 = _T_194 ? _T_17 : _T_193; // @[Mux.scala 80:57]
  wire  _T_196 = 5'h5 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_197 = _T_196 ? _T_21 : _T_195; // @[Mux.scala 80:57]
  wire  _T_198 = 5'h6 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_199 = _T_198 ? _T_25 : _T_197; // @[Mux.scala 80:57]
  wire  _T_200 = 5'h7 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_201 = _T_200 ? _T_29 : _T_199; // @[Mux.scala 80:57]
  wire  _T_202 = 5'h8 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_203 = _T_202 ? _T_33 : _T_201; // @[Mux.scala 80:57]
  wire  _T_204 = 5'h9 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_205 = _T_204 ? _T_37 : _T_203; // @[Mux.scala 80:57]
  wire  _T_206 = 5'ha == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_207 = _T_206 ? _T_41 : _T_205; // @[Mux.scala 80:57]
  wire  _T_208 = 5'hb == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_209 = _T_208 ? _T_45 : _T_207; // @[Mux.scala 80:57]
  wire  _T_210 = 5'hc == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_211 = _T_210 ? _T_49 : _T_209; // @[Mux.scala 80:57]
  wire  _T_212 = 5'hd == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_213 = _T_212 ? _T_53 : _T_211; // @[Mux.scala 80:57]
  wire  _T_214 = 5'he == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_215 = _T_214 ? _T_57 : _T_213; // @[Mux.scala 80:57]
  wire  _T_216 = 5'hf == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_217 = _T_216 ? _T_61 : _T_215; // @[Mux.scala 80:57]
  wire  _T_218 = 5'h10 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_219 = _T_218 ? _T_65 : _T_217; // @[Mux.scala 80:57]
  wire  _T_220 = 5'h11 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_221 = _T_220 ? _T_69 : _T_219; // @[Mux.scala 80:57]
  wire  _T_222 = 5'h12 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_223 = _T_222 ? _T_73 : _T_221; // @[Mux.scala 80:57]
  wire  _T_224 = 5'h13 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_225 = _T_224 ? _T_77 : _T_223; // @[Mux.scala 80:57]
  wire  _T_226 = 5'h14 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_227 = _T_226 ? _T_81 : _T_225; // @[Mux.scala 80:57]
  wire  _T_228 = 5'h15 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_229 = _T_228 ? _T_85 : _T_227; // @[Mux.scala 80:57]
  wire  _T_230 = 5'h16 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_231 = _T_230 ? _T_89 : _T_229; // @[Mux.scala 80:57]
  wire  _T_232 = 5'h17 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_233 = _T_232 ? _T_93 : _T_231; // @[Mux.scala 80:57]
  wire  _T_234 = 5'h18 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_235 = _T_234 ? _T_97 : _T_233; // @[Mux.scala 80:57]
  wire  _T_236 = 5'h19 == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_237 = _T_236 ? _T_101 : _T_235; // @[Mux.scala 80:57]
  wire  _T_238 = 5'h1a == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_239 = _T_238 ? _T_105 : _T_237; // @[Mux.scala 80:57]
  wire  _T_240 = 5'h1b == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_241 = _T_240 ? _T_109 : _T_239; // @[Mux.scala 80:57]
  wire  _T_242 = 5'h1c == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_243 = _T_242 ? _T_113 : _T_241; // @[Mux.scala 80:57]
  wire  _T_244 = 5'h1d == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_245 = _T_244 ? _T_117 : _T_243; // @[Mux.scala 80:57]
  wire  _T_246 = 5'h1e == io_rs2; // @[Mux.scala 80:60]
  wire [63:0] _T_247 = _T_246 ? _T_121 : _T_245; // @[Mux.scala 80:57]
  wire  _T_248 = 5'h1f == io_rs2; // @[Mux.scala 80:60]
  DPIC_RegRead DPIC_RegRead_ins ( // @[regFile.scala 23:32]
    .inst_0(DPIC_RegRead_ins_inst_0),
    .inst_1(DPIC_RegRead_ins_inst_1),
    .inst_2(DPIC_RegRead_ins_inst_2),
    .inst_3(DPIC_RegRead_ins_inst_3),
    .inst_4(DPIC_RegRead_ins_inst_4),
    .inst_5(DPIC_RegRead_ins_inst_5),
    .inst_6(DPIC_RegRead_ins_inst_6),
    .inst_7(DPIC_RegRead_ins_inst_7),
    .inst_8(DPIC_RegRead_ins_inst_8),
    .inst_9(DPIC_RegRead_ins_inst_9),
    .inst_10(DPIC_RegRead_ins_inst_10),
    .inst_11(DPIC_RegRead_ins_inst_11),
    .inst_12(DPIC_RegRead_ins_inst_12),
    .inst_13(DPIC_RegRead_ins_inst_13),
    .inst_14(DPIC_RegRead_ins_inst_14),
    .inst_15(DPIC_RegRead_ins_inst_15),
    .inst_16(DPIC_RegRead_ins_inst_16),
    .inst_17(DPIC_RegRead_ins_inst_17),
    .inst_18(DPIC_RegRead_ins_inst_18),
    .inst_19(DPIC_RegRead_ins_inst_19),
    .inst_20(DPIC_RegRead_ins_inst_20),
    .inst_21(DPIC_RegRead_ins_inst_21),
    .inst_22(DPIC_RegRead_ins_inst_22),
    .inst_23(DPIC_RegRead_ins_inst_23),
    .inst_24(DPIC_RegRead_ins_inst_24),
    .inst_25(DPIC_RegRead_ins_inst_25),
    .inst_26(DPIC_RegRead_ins_inst_26),
    .inst_27(DPIC_RegRead_ins_inst_27),
    .inst_28(DPIC_RegRead_ins_inst_28),
    .inst_29(DPIC_RegRead_ins_inst_29),
    .inst_30(DPIC_RegRead_ins_inst_30),
    .inst_31(DPIC_RegRead_ins_inst_31),
    .pc(DPIC_RegRead_ins_pc)
  );
  assign io_dout1 = _T_186 ? _T_125 : _T_185; // @[regFile.scala 40:12]
  assign io_dout2 = _T_248 ? _T_125 : _T_247; // @[regFile.scala 41:12]
  assign DPIC_RegRead_ins_inst_0 = 64'h0; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_1 = _T_5; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_2 = _T_9; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_3 = _T_13; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_4 = _T_17; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_5 = _T_21; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_6 = _T_25; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_7 = _T_29; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_8 = _T_33; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_9 = _T_37; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_10 = _T_41; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_11 = _T_45; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_12 = _T_49; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_13 = _T_53; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_14 = _T_57; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_15 = _T_61; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_16 = _T_65; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_17 = _T_69; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_18 = _T_73; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_19 = _T_77; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_20 = _T_81; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_21 = _T_85; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_22 = _T_89; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_23 = _T_93; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_24 = _T_97; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_25 = _T_101; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_26 = _T_105; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_27 = _T_109; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_28 = _T_113; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_29 = _T_117; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_30 = _T_121; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_inst_31 = _T_125; // @[regFile.scala 36:33]
  assign DPIC_RegRead_ins_pc = io_pc; // @[regFile.scala 24:26]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  _T_5 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  _T_9 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  _T_13 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  _T_17 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  _T_21 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  _T_25 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  _T_29 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  _T_33 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  _T_37 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  _T_41 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  _T_45 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  _T_49 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  _T_53 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  _T_57 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  _T_61 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  _T_65 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  _T_69 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  _T_73 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  _T_77 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  _T_81 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  _T_85 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  _T_89 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  _T_93 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  _T_97 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  _T_101 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  _T_105 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  _T_109 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  _T_113 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  _T_117 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  _T_121 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  _T_125 = _RAND_30[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (_T_4) begin
      _T_5 <= io_din;
    end
    if (_T_8) begin
      _T_9 <= io_din;
    end
    if (_T_12) begin
      _T_13 <= io_din;
    end
    if (_T_16) begin
      _T_17 <= io_din;
    end
    if (_T_20) begin
      _T_21 <= io_din;
    end
    if (_T_24) begin
      _T_25 <= io_din;
    end
    if (_T_28) begin
      _T_29 <= io_din;
    end
    if (_T_32) begin
      _T_33 <= io_din;
    end
    if (_T_36) begin
      _T_37 <= io_din;
    end
    if (_T_40) begin
      _T_41 <= io_din;
    end
    if (_T_44) begin
      _T_45 <= io_din;
    end
    if (_T_48) begin
      _T_49 <= io_din;
    end
    if (_T_52) begin
      _T_53 <= io_din;
    end
    if (_T_56) begin
      _T_57 <= io_din;
    end
    if (_T_60) begin
      _T_61 <= io_din;
    end
    if (_T_64) begin
      _T_65 <= io_din;
    end
    if (_T_68) begin
      _T_69 <= io_din;
    end
    if (_T_72) begin
      _T_73 <= io_din;
    end
    if (_T_76) begin
      _T_77 <= io_din;
    end
    if (_T_80) begin
      _T_81 <= io_din;
    end
    if (_T_84) begin
      _T_85 <= io_din;
    end
    if (_T_88) begin
      _T_89 <= io_din;
    end
    if (_T_92) begin
      _T_93 <= io_din;
    end
    if (_T_96) begin
      _T_97 <= io_din;
    end
    if (_T_100) begin
      _T_101 <= io_din;
    end
    if (_T_104) begin
      _T_105 <= io_din;
    end
    if (_T_108) begin
      _T_109 <= io_din;
    end
    if (_T_112) begin
      _T_113 <= io_din;
    end
    if (_T_116) begin
      _T_117 <= io_din;
    end
    if (_T_120) begin
      _T_121 <= io_din;
    end
    if (_T_124) begin
      _T_125 <= io_din;
    end
  end
endmodule
module iDecode(
  input         clock,
  input  [63:0] io_pc,
  input  [31:0] io_inst,
  input         io_regEn,
  output [63:0] io_dataEx_imme,
  output [63:0] io_dataEx_dOut1,
  output [63:0] io_dataEx_dOut2,
  input  [63:0] io_dataEx_dIn,
  input         io_csrrfen
);
  wire [31:0] imme_io_inst; // @[iDecode.scala 20:19]
  wire [63:0] imme_io_imme; // @[iDecode.scala 20:19]
  wire  rf_clock; // @[iDecode.scala 31:18]
  wire [63:0] rf_io_pc; // @[iDecode.scala 31:18]
  wire  rf_io_we; // @[iDecode.scala 31:18]
  wire [4:0] rf_io_rs1; // @[iDecode.scala 31:18]
  wire [4:0] rf_io_rs2; // @[iDecode.scala 31:18]
  wire [4:0] rf_io_rd; // @[iDecode.scala 31:18]
  wire [63:0] rf_io_dout1; // @[iDecode.scala 31:18]
  wire [63:0] rf_io_dout2; // @[iDecode.scala 31:18]
  wire [63:0] rf_io_din; // @[iDecode.scala 31:18]
  immeGen imme ( // @[iDecode.scala 20:19]
    .io_inst(imme_io_inst),
    .io_imme(imme_io_imme)
  );
  RF rf ( // @[iDecode.scala 31:18]
    .clock(rf_clock),
    .io_pc(rf_io_pc),
    .io_we(rf_io_we),
    .io_rs1(rf_io_rs1),
    .io_rs2(rf_io_rs2),
    .io_rd(rf_io_rd),
    .io_dout1(rf_io_dout1),
    .io_dout2(rf_io_dout2),
    .io_din(rf_io_din)
  );
  assign io_dataEx_imme = imme_io_imme; // @[iDecode.scala 22:18]
  assign io_dataEx_dOut1 = rf_io_dout1; // @[iDecode.scala 37:19]
  assign io_dataEx_dOut2 = rf_io_dout2; // @[iDecode.scala 38:19]
  assign imme_io_inst = io_inst; // @[iDecode.scala 21:16]
  assign rf_clock = clock;
  assign rf_io_pc = io_pc; // @[iDecode.scala 40:12]
  assign rf_io_we = io_regEn | io_csrrfen; // @[iDecode.scala 35:12]
  assign rf_io_rs1 = io_inst[19:15]; // @[iDecode.scala 32:13]
  assign rf_io_rs2 = io_inst[24:20]; // @[iDecode.scala 33:13]
  assign rf_io_rd = io_inst[11:7]; // @[iDecode.scala 34:12]
  assign rf_io_din = io_dataEx_dIn; // @[iDecode.scala 36:13]
endmodule
module ALU(
  input  [63:0] io_srcA,
  input  [63:0] io_srcB,
  input  [5:0]  io_ALUCtrl,
  output [63:0] io_ALUResult
);
  wire [5:0] shamt = io_srcB[5:0]; // @[ALU.scala 19:22]
  wire [63:0] _T_1 = io_srcA + io_srcB; // @[ALU.scala 21:25]
  wire [63:0] _T_3 = io_srcA - io_srcB; // @[ALU.scala 22:25]
  wire [63:0] _T_6 = $signed(io_srcA) >>> shamt; // @[ALU.scala 23:42]
  wire [63:0] _T_7 = io_srcA >> shamt; // @[ALU.scala 24:25]
  wire [126:0] _GEN_0 = {{63'd0}, io_srcA}; // @[ALU.scala 25:25]
  wire [126:0] _T_8 = _GEN_0 << shamt; // @[ALU.scala 25:25]
  wire  _T_11 = $signed(io_srcA) < $signed(io_srcB); // @[ALU.scala 26:32]
  wire  _T_12 = io_srcA < io_srcB; // @[ALU.scala 27:26]
  wire [63:0] _T_13 = io_srcA & io_srcB; // @[ALU.scala 28:25]
  wire [63:0] _T_14 = io_srcA | io_srcB; // @[ALU.scala 29:24]
  wire [63:0] _T_15 = io_srcA ^ io_srcB; // @[ALU.scala 30:25]
  wire  _T_16 = io_srcA != io_srcB; // @[ALU.scala 31:32]
  wire [63:0] _T_17 = {63'h0,_T_16}; // @[Cat.scala 29:58]
  wire [63:0] _T_19 = {63'h0,_T_12}; // @[Cat.scala 29:58]
  wire [31:0] _T_21 = io_srcA[31:0] >> shamt; // @[ALU.scala 33:48]
  wire [31:0] _T_24 = _T_21[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_25 = {_T_24,_T_21}; // @[Cat.scala 29:58]
  wire [31:0] _T_31 = _T_1[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_32 = {_T_31,_T_1[31:0]}; // @[Cat.scala 29:58]
  wire [94:0] _GEN_1 = {{63'd0}, io_srcA[31:0]}; // @[ALU.scala 35:48]
  wire [94:0] _T_34 = _GEN_1 << shamt; // @[ALU.scala 35:48]
  wire [31:0] _T_38 = _T_34[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_39 = {_T_38,_T_34[31:0]}; // @[Cat.scala 29:58]
  wire [31:0] _T_41 = io_srcA[31:0]; // @[ALU.scala 36:41]
  wire [31:0] _T_43 = $signed(_T_41) >>> shamt; // @[ALU.scala 36:65]
  wire [31:0] _T_46 = _T_43[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_47 = {_T_46,_T_43}; // @[Cat.scala 29:58]
  wire [31:0] _T_53 = _T_3[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_54 = {_T_53,_T_3[31:0]}; // @[Cat.scala 29:58]
  wire [31:0] _T_57 = io_srcA[31:0] / io_srcB[31:0]; // @[ALU.scala 38:48]
  wire [31:0] _T_61 = _T_57[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_62 = {_T_61,_T_57}; // @[Cat.scala 29:58]
  wire [31:0] _GEN_2 = io_srcA[31:0] % io_srcB[31:0]; // @[ALU.scala 39:48]
  wire [31:0] _T_65 = _GEN_2[31:0]; // @[ALU.scala 39:48]
  wire [31:0] _T_69 = _T_65[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_70 = {_T_69,_T_65}; // @[Cat.scala 29:58]
  wire [63:0] _T_73 = io_srcA[31:0] * io_srcB[31:0]; // @[ALU.scala 40:47]
  wire [31:0] _T_77 = _T_73[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_78 = {_T_77,_T_73[31:0]}; // @[Cat.scala 29:58]
  wire [31:0] _T_82 = io_srcB[31:0]; // @[ALU.scala 41:63]
  wire [31:0] _T_84 = $signed(_T_41) % $signed(_T_82); // @[ALU.scala 41:72]
  wire [31:0] _T_87 = _T_84[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_88 = {_T_87,_T_84}; // @[Cat.scala 29:58]
  wire [32:0] _T_93 = $signed(_T_41) / $signed(_T_82); // @[ALU.scala 42:47]
  wire [31:0] _T_97 = _T_93[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_98 = {_T_97,_T_93[31:0]}; // @[Cat.scala 29:58]
  wire [127:0] _T_99 = io_srcA * io_srcB; // @[ALU.scala 43:23]
  wire [63:0] _T_100 = io_srcA / io_srcB; // @[ALU.scala 44:24]
  wire [63:0] _T_104 = $signed(io_srcA) % $signed(io_srcB); // @[ALU.scala 45:56]
  wire [64:0] _T_108 = $signed(io_srcA) / $signed(io_srcB); // @[ALU.scala 46:54]
  wire  _T_109 = io_srcA == io_srcB; // @[ALU.scala 47:24]
  wire  _T_110 = io_srcA >= io_srcB; // @[ALU.scala 48:25]
  wire  _T_116 = $signed(io_srcA) >= $signed(io_srcB); // @[ALU.scala 50:33]
  wire [63:0] _GEN_3 = io_srcA % io_srcB; // @[ALU.scala 51:25]
  wire [63:0] _T_117 = _GEN_3[63:0]; // @[ALU.scala 51:25]
  wire  _T_118 = 6'h0 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [63:0] _T_119 = _T_118 ? _T_1 : 64'h0; // @[Mux.scala 80:57]
  wire  _T_120 = 6'h1 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [63:0] _T_121 = _T_120 ? _T_3 : _T_119; // @[Mux.scala 80:57]
  wire  _T_122 = 6'h9 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [63:0] _T_123 = _T_122 ? _T_6 : _T_121; // @[Mux.scala 80:57]
  wire  _T_124 = 6'h8 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [63:0] _T_125 = _T_124 ? _T_7 : _T_123; // @[Mux.scala 80:57]
  wire  _T_126 = 6'h6 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_127 = _T_126 ? _T_8 : {{63'd0}, _T_125}; // @[Mux.scala 80:57]
  wire  _T_128 = 6'h5 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_129 = _T_128 ? {{126'd0}, _T_11} : _T_127; // @[Mux.scala 80:57]
  wire  _T_130 = 6'h7 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_131 = _T_130 ? {{126'd0}, _T_12} : _T_129; // @[Mux.scala 80:57]
  wire  _T_132 = 6'h2 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_133 = _T_132 ? {{63'd0}, _T_13} : _T_131; // @[Mux.scala 80:57]
  wire  _T_134 = 6'h3 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_135 = _T_134 ? {{63'd0}, _T_14} : _T_133; // @[Mux.scala 80:57]
  wire  _T_136 = 6'h4 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_137 = _T_136 ? {{63'd0}, _T_15} : _T_135; // @[Mux.scala 80:57]
  wire  _T_138 = 6'hb == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_139 = _T_138 ? {{63'd0}, _T_17} : _T_137; // @[Mux.scala 80:57]
  wire  _T_140 = 6'hc == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_141 = _T_140 ? {{63'd0}, _T_19} : _T_139; // @[Mux.scala 80:57]
  wire  _T_142 = 6'hd == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_143 = _T_142 ? {{63'd0}, _T_25} : _T_141; // @[Mux.scala 80:57]
  wire  _T_144 = 6'he == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_145 = _T_144 ? {{63'd0}, _T_32} : _T_143; // @[Mux.scala 80:57]
  wire  _T_146 = 6'hf == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_147 = _T_146 ? {{63'd0}, _T_39} : _T_145; // @[Mux.scala 80:57]
  wire  _T_148 = 6'h10 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_149 = _T_148 ? {{63'd0}, _T_47} : _T_147; // @[Mux.scala 80:57]
  wire  _T_150 = 6'h11 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_151 = _T_150 ? {{63'd0}, _T_54} : _T_149; // @[Mux.scala 80:57]
  wire  _T_152 = 6'h12 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_153 = _T_152 ? {{63'd0}, _T_62} : _T_151; // @[Mux.scala 80:57]
  wire  _T_154 = 6'h13 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_155 = _T_154 ? {{63'd0}, _T_70} : _T_153; // @[Mux.scala 80:57]
  wire  _T_156 = 6'h14 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_157 = _T_156 ? {{63'd0}, _T_78} : _T_155; // @[Mux.scala 80:57]
  wire  _T_158 = 6'h15 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_159 = _T_158 ? {{63'd0}, _T_88} : _T_157; // @[Mux.scala 80:57]
  wire  _T_160 = 6'h16 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [126:0] _T_161 = _T_160 ? {{63'd0}, _T_98} : _T_159; // @[Mux.scala 80:57]
  wire  _T_162 = 6'h17 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [127:0] _T_163 = _T_162 ? _T_99 : {{1'd0}, _T_161}; // @[Mux.scala 80:57]
  wire  _T_164 = 6'h18 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [127:0] _T_165 = _T_164 ? {{64'd0}, _T_100} : _T_163; // @[Mux.scala 80:57]
  wire  _T_166 = 6'h19 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [127:0] _T_167 = _T_166 ? {{64'd0}, _T_104} : _T_165; // @[Mux.scala 80:57]
  wire  _T_168 = 6'h1a == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [127:0] _T_169 = _T_168 ? {{63'd0}, _T_108} : _T_167; // @[Mux.scala 80:57]
  wire  _T_170 = 6'h1b == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [127:0] _T_171 = _T_170 ? {{127'd0}, _T_109} : _T_169; // @[Mux.scala 80:57]
  wire  _T_172 = 6'h1d == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [127:0] _T_173 = _T_172 ? {{127'd0}, _T_110} : _T_171; // @[Mux.scala 80:57]
  wire  _T_174 = 6'h1e == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [127:0] _T_175 = _T_174 ? {{127'd0}, _T_11} : _T_173; // @[Mux.scala 80:57]
  wire  _T_176 = 6'h1f == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [127:0] _T_177 = _T_176 ? {{127'd0}, _T_116} : _T_175; // @[Mux.scala 80:57]
  wire  _T_178 = 6'h20 == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [127:0] _T_179 = _T_178 ? {{64'd0}, _T_117} : _T_177; // @[Mux.scala 80:57]
  wire  _T_180 = 6'ha == io_ALUCtrl; // @[Mux.scala 80:60]
  wire [127:0] _T_181 = _T_180 ? {{64'd0}, io_srcA} : _T_179; // @[Mux.scala 80:57]
  assign io_ALUResult = _T_181[63:0]; // @[ALU.scala 54:16]
endmodule
module dnpcGen(
  input         io_npcSrc,
  input  [63:0] io_pc,
  input  [63:0] io_imme,
  input  [63:0] io_rd,
  output [63:0] io_dnpc
);
  wire  _T = ~io_npcSrc; // @[dnpcGen.scala 15:28]
  wire [63:0] src1 = _T ? io_rd : io_pc; // @[dnpcGen.scala 15:17]
  assign io_dnpc = io_imme + src1; // @[dnpcGen.scala 16:11]
endmodule
module memData(
  input  [63:0] io_rdata,
  output [63:0] io_rdata_ext,
  input  [2:0]  io_memReadNum
);
  wire [55:0] _T_3 = io_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_4 = {_T_3,io_rdata[7:0]}; // @[Cat.scala 29:58]
  wire [47:0] _T_8 = io_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_9 = {_T_8,io_rdata[15:0]}; // @[Cat.scala 29:58]
  wire [31:0] _T_13 = io_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _T_14 = {_T_13,io_rdata[31:0]}; // @[Cat.scala 29:58]
  wire [63:0] _T_16 = {56'h0,io_rdata[7:0]}; // @[Cat.scala 29:58]
  wire [63:0] _T_18 = {48'h0,io_rdata[15:0]}; // @[Cat.scala 29:58]
  wire [63:0] _T_20 = {32'h0,io_rdata[31:0]}; // @[Cat.scala 29:58]
  wire  _T_21 = 3'h0 == io_memReadNum; // @[Mux.scala 80:60]
  wire [63:0] _T_22 = _T_21 ? _T_4 : 64'h0; // @[Mux.scala 80:57]
  wire  _T_23 = 3'h1 == io_memReadNum; // @[Mux.scala 80:60]
  wire [63:0] _T_24 = _T_23 ? _T_9 : _T_22; // @[Mux.scala 80:57]
  wire  _T_25 = 3'h2 == io_memReadNum; // @[Mux.scala 80:60]
  wire [63:0] _T_26 = _T_25 ? _T_14 : _T_24; // @[Mux.scala 80:57]
  wire  _T_27 = 3'h3 == io_memReadNum; // @[Mux.scala 80:60]
  wire [63:0] _T_28 = _T_27 ? io_rdata : _T_26; // @[Mux.scala 80:57]
  wire  _T_29 = 3'h4 == io_memReadNum; // @[Mux.scala 80:60]
  wire [63:0] _T_30 = _T_29 ? _T_16 : _T_28; // @[Mux.scala 80:57]
  wire  _T_31 = 3'h5 == io_memReadNum; // @[Mux.scala 80:60]
  wire [63:0] _T_32 = _T_31 ? _T_18 : _T_30; // @[Mux.scala 80:57]
  wire  _T_33 = 3'h6 == io_memReadNum; // @[Mux.scala 80:60]
  assign io_rdata_ext = _T_33 ? _T_20 : _T_32; // @[memData.scala 13:16]
endmodule
module CSR(
  input         clock,
  input         reset,
  input         io_csrrwen,
  input         io_csrswen,
  input         io_mepcen,
  input         io_mcauseen,
  input  [63:0] io_rs1,
  input  [11:0] io_imme,
  input  [63:0] io_pc,
  output [63:0] io_rd,
  output [63:0] io_mtvec,
  output [63:0] io_mepc
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  _T = io_csrrwen | io_csrswen; // @[CSR.scala 28:42]
  wire  _T_1 = io_imme == 12'h341; // @[CSR.scala 28:69]
  wire  _T_2 = _T & _T_1; // @[CSR.scala 28:57]
  wire  mepcen = io_mepcen | _T_2; // @[CSR.scala 28:26]
  reg [63:0] mepcins; // @[Reg.scala 15:16]
  wire [63:0] _T_3 = io_rs1 | mepcins; // @[CSR.scala 30:65]
  wire  _T_7 = io_imme == 12'h342; // @[CSR.scala 33:72]
  wire  _T_8 = _T & _T_7; // @[CSR.scala 33:60]
  wire  mcauseen = io_mcauseen | _T_8; // @[CSR.scala 33:30]
  reg [63:0] mcauseins; // @[Reg.scala 15:16]
  wire [63:0] _T_9 = io_rs1 | mcauseins; // @[CSR.scala 35:68]
  wire  _T_13 = io_imme == 12'h305; // @[CSR.scala 38:57]
  wire  mtvecen = _T & _T_13; // @[CSR.scala 38:45]
  reg [63:0] mtvecins; // @[Reg.scala 15:16]
  wire [63:0] _T_14 = io_rs1 | mtvecins; // @[CSR.scala 40:46]
  wire  _T_17 = io_imme == 12'h300; // @[CSR.scala 43:60]
  wire  mstatusen = _T & _T_17; // @[CSR.scala 43:48]
  reg [63:0] mstatusins; // @[Reg.scala 27:20]
  wire [63:0] _T_18 = io_rs1 | mstatusins; // @[CSR.scala 45:48]
  wire  _T_20 = 12'h341 == io_imme; // @[Mux.scala 80:60]
  wire [63:0] _T_21 = _T_20 ? mepcins : 64'h0; // @[Mux.scala 80:57]
  wire  _T_22 = 12'h342 == io_imme; // @[Mux.scala 80:60]
  wire [63:0] _T_23 = _T_22 ? mcauseins : _T_21; // @[Mux.scala 80:57]
  wire  _T_24 = 12'h305 == io_imme; // @[Mux.scala 80:60]
  wire [63:0] _T_25 = _T_24 ? mtvecins : _T_23; // @[Mux.scala 80:57]
  wire  _T_26 = 12'h300 == io_imme; // @[Mux.scala 80:60]
  assign io_rd = _T_26 ? mstatusins : _T_25; // @[CSR.scala 48:9]
  assign io_mtvec = mtvecins; // @[CSR.scala 60:12]
  assign io_mepc = mepcins; // @[CSR.scala 61:11]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  mepcins = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  mcauseins = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  mtvecins = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  mstatusins = _RAND_3[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
  always @(posedge clock) begin
    if (mepcen) begin
      if (io_mepcen) begin
        mepcins <= io_pc;
      end else if (io_csrrwen) begin
        mepcins <= io_rs1;
      end else begin
        mepcins <= _T_3;
      end
    end
    if (mcauseen) begin
      if (io_mcauseen) begin
        mcauseins <= 64'hb;
      end else if (io_csrrwen) begin
        mcauseins <= io_rs1;
      end else begin
        mcauseins <= _T_9;
      end
    end
    if (mtvecen) begin
      if (io_csrrwen) begin
        mtvecins <= io_rs1;
      end else begin
        mtvecins <= _T_14;
      end
    end
    if (reset) begin
      mstatusins <= 64'ha00001800;
    end else if (mstatusen) begin
      if (io_csrrwen) begin
        mstatusins <= io_rs1;
      end else begin
        mstatusins <= _T_18;
      end
    end
  end
endmodule
module execute(
  input         clock,
  input         reset,
  input  [1:0]  io_AluSrc1,
  input  [1:0]  io_AluSrc2,
  input  [5:0]  io_ALUCtrl,
  input         io_dnpcSrc,
  input  [1:0]  io_ResultSrc,
  input  [2:0]  io_memReadNum,
  input  [63:0] io_dataId_imme,
  input  [63:0] io_dataId_dOut1,
  input  [63:0] io_dataId_dOut2,
  output [63:0] io_dataId_dIn,
  output [63:0] io_dataOut_addr,
  output [63:0] io_dataOut_wdata,
  input  [63:0] io_dataOut_rdata,
  output        io_brTake,
  input  [63:0] io_pc,
  input  [63:0] io_snpc,
  output [63:0] io_dnpc,
  input         io_CSRCtrlIf_csrrwen,
  input         io_CSRCtrlIf_csrswen,
  input         io_CSRCtrlIf_mepcen,
  input         io_CSRCtrlIf_mcauseen,
  input         io_CSRCtrlIf_rfen,
  input         io_CSRCtrlIf_vec2pc,
  input         io_CSRCtrlIf_mepc2pc
);
  wire [63:0] ALU_io_srcA; // @[execute.scala 60:19]
  wire [63:0] ALU_io_srcB; // @[execute.scala 60:19]
  wire [5:0] ALU_io_ALUCtrl; // @[execute.scala 60:19]
  wire [63:0] ALU_io_ALUResult; // @[execute.scala 60:19]
  wire  dnpcGenIns_io_npcSrc; // @[execute.scala 68:26]
  wire [63:0] dnpcGenIns_io_pc; // @[execute.scala 68:26]
  wire [63:0] dnpcGenIns_io_imme; // @[execute.scala 68:26]
  wire [63:0] dnpcGenIns_io_rd; // @[execute.scala 68:26]
  wire [63:0] dnpcGenIns_io_dnpc; // @[execute.scala 68:26]
  wire [63:0] memData_ins_io_rdata; // @[execute.scala 76:27]
  wire [63:0] memData_ins_io_rdata_ext; // @[execute.scala 76:27]
  wire [2:0] memData_ins_io_memReadNum; // @[execute.scala 76:27]
  wire  csr_ins_clock; // @[execute.scala 101:23]
  wire  csr_ins_reset; // @[execute.scala 101:23]
  wire  csr_ins_io_csrrwen; // @[execute.scala 101:23]
  wire  csr_ins_io_csrswen; // @[execute.scala 101:23]
  wire  csr_ins_io_mepcen; // @[execute.scala 101:23]
  wire  csr_ins_io_mcauseen; // @[execute.scala 101:23]
  wire [63:0] csr_ins_io_rs1; // @[execute.scala 101:23]
  wire [11:0] csr_ins_io_imme; // @[execute.scala 101:23]
  wire [63:0] csr_ins_io_pc; // @[execute.scala 101:23]
  wire [63:0] csr_ins_io_rd; // @[execute.scala 101:23]
  wire [63:0] csr_ins_io_mtvec; // @[execute.scala 101:23]
  wire [63:0] csr_ins_io_mepc; // @[execute.scala 101:23]
  wire  _T = 2'h0 == io_AluSrc1; // @[Mux.scala 80:60]
  wire [63:0] _T_1 = _T ? io_dataId_dOut1 : 64'h0; // @[Mux.scala 80:57]
  wire  _T_2 = 2'h1 == io_AluSrc1; // @[Mux.scala 80:60]
  wire [63:0] _T_3 = _T_2 ? io_dataId_imme : _T_1; // @[Mux.scala 80:57]
  wire  _T_4 = 2'h2 == io_AluSrc1; // @[Mux.scala 80:60]
  wire  _T_5 = 2'h0 == io_AluSrc2; // @[Mux.scala 80:60]
  wire [63:0] _T_6 = _T_5 ? io_dataId_dOut2 : 64'h0; // @[Mux.scala 80:57]
  wire  _T_7 = 2'h1 == io_AluSrc2; // @[Mux.scala 80:60]
  wire [63:0] _T_8 = _T_7 ? io_dataId_imme : _T_6; // @[Mux.scala 80:57]
  wire  _T_9 = 2'h2 == io_AluSrc2; // @[Mux.scala 80:60]
  wire [63:0] _T_11 = ALU_io_ALUResult; // @[Mux.scala 80:57]
  wire  _T_12 = 2'h1 == io_ResultSrc; // @[Mux.scala 80:60]
  wire [63:0] _T_13 = _T_12 ? io_snpc : _T_11; // @[Mux.scala 80:57]
  wire  _T_14 = 2'h2 == io_ResultSrc; // @[Mux.scala 80:60]
  wire [63:0] dinMux = _T_14 ? memData_ins_io_rdata_ext : _T_13; // @[Mux.scala 80:57]
  wire [63:0] _T_18 = io_CSRCtrlIf_mepc2pc ? csr_ins_io_mepc : dnpcGenIns_io_dnpc; // @[execute.scala 112:58]
  ALU ALU ( // @[execute.scala 60:19]
    .io_srcA(ALU_io_srcA),
    .io_srcB(ALU_io_srcB),
    .io_ALUCtrl(ALU_io_ALUCtrl),
    .io_ALUResult(ALU_io_ALUResult)
  );
  dnpcGen dnpcGenIns ( // @[execute.scala 68:26]
    .io_npcSrc(dnpcGenIns_io_npcSrc),
    .io_pc(dnpcGenIns_io_pc),
    .io_imme(dnpcGenIns_io_imme),
    .io_rd(dnpcGenIns_io_rd),
    .io_dnpc(dnpcGenIns_io_dnpc)
  );
  memData memData_ins ( // @[execute.scala 76:27]
    .io_rdata(memData_ins_io_rdata),
    .io_rdata_ext(memData_ins_io_rdata_ext),
    .io_memReadNum(memData_ins_io_memReadNum)
  );
  CSR csr_ins ( // @[execute.scala 101:23]
    .clock(csr_ins_clock),
    .reset(csr_ins_reset),
    .io_csrrwen(csr_ins_io_csrrwen),
    .io_csrswen(csr_ins_io_csrswen),
    .io_mepcen(csr_ins_io_mepcen),
    .io_mcauseen(csr_ins_io_mcauseen),
    .io_rs1(csr_ins_io_rs1),
    .io_imme(csr_ins_io_imme),
    .io_pc(csr_ins_io_pc),
    .io_rd(csr_ins_io_rd),
    .io_mtvec(csr_ins_io_mtvec),
    .io_mepc(csr_ins_io_mepc)
  );
  assign io_dataId_dIn = io_CSRCtrlIf_rfen ? csr_ins_io_rd : dinMux; // @[execute.scala 110:17]
  assign io_dataOut_addr = ALU_io_ALUResult; // @[execute.scala 66:19]
  assign io_dataOut_wdata = io_dataId_dOut2; // @[execute.scala 96:20]
  assign io_brTake = ALU_io_ALUResult[0]; // @[execute.scala 91:13]
  assign io_dnpc = io_CSRCtrlIf_vec2pc ? csr_ins_io_mtvec : _T_18; // @[execute.scala 112:11]
  assign ALU_io_srcA = _T_4 ? io_pc : _T_3; // @[execute.scala 61:15]
  assign ALU_io_srcB = _T_9 ? io_pc : _T_8; // @[execute.scala 62:15]
  assign ALU_io_ALUCtrl = io_ALUCtrl; // @[execute.scala 63:18]
  assign dnpcGenIns_io_npcSrc = io_dnpcSrc; // @[execute.scala 72:24]
  assign dnpcGenIns_io_pc = io_pc; // @[execute.scala 69:20]
  assign dnpcGenIns_io_imme = io_dataId_imme; // @[execute.scala 70:22]
  assign dnpcGenIns_io_rd = io_dataId_dOut1; // @[execute.scala 71:20]
  assign memData_ins_io_rdata = io_dataOut_rdata; // @[execute.scala 78:24]
  assign memData_ins_io_memReadNum = io_memReadNum; // @[execute.scala 77:29]
  assign csr_ins_clock = clock;
  assign csr_ins_reset = reset;
  assign csr_ins_io_csrrwen = io_CSRCtrlIf_csrrwen; // @[execute.scala 102:23]
  assign csr_ins_io_csrswen = io_CSRCtrlIf_csrswen; // @[execute.scala 103:23]
  assign csr_ins_io_mepcen = io_CSRCtrlIf_mepcen; // @[execute.scala 104:22]
  assign csr_ins_io_mcauseen = io_CSRCtrlIf_mcauseen; // @[execute.scala 105:24]
  assign csr_ins_io_rs1 = io_dataId_dOut1; // @[execute.scala 106:18]
  assign csr_ins_io_imme = io_dataId_imme[11:0]; // @[execute.scala 107:19]
  assign csr_ins_io_pc = io_pc; // @[execute.scala 108:17]
endmodule
module ALUCtrl(
  input  [31:0] io_inst,
  output [5:0]  io_ALUCtrl
);
  wire [31:0] _T = io_inst & 32'h707f; // @[ALUCtrl.scala 74:49]
  wire  _T_1 = 32'h23 == _T; // @[ALUCtrl.scala 74:49]
  wire  _T_3 = 32'h1023 == _T; // @[ALUCtrl.scala 74:49]
  wire  _T_5 = 32'h3023 == _T; // @[ALUCtrl.scala 74:49]
  wire  _T_7 = 32'h2023 == _T; // @[ALUCtrl.scala 74:49]
  wire [31:0] _T_8 = io_inst & 32'h7f; // @[ALUCtrl.scala 79:31]
  wire  _T_9 = 32'h17 == _T_8; // @[ALUCtrl.scala 79:31]
  wire  _T_11 = 32'h37 == _T_8; // @[ALUCtrl.scala 80:31]
  wire  _T_13 = 32'h13 == _T; // @[ALUCtrl.scala 81:31]
  wire  _T_15 = 32'h67 == _T; // @[ALUCtrl.scala 82:31]
  wire  _T_17 = 32'h3003 == _T; // @[ALUCtrl.scala 83:31]
  wire  _T_19 = 32'h4003 == _T; // @[ALUCtrl.scala 84:31]
  wire  _T_21 = 32'h3013 == _T; // @[ALUCtrl.scala 85:31]
  wire [31:0] _T_22 = io_inst & 32'hfe00707f; // @[ALUCtrl.scala 86:31]
  wire  _T_23 = 32'h501b == _T_22; // @[ALUCtrl.scala 86:31]
  wire [31:0] _T_24 = io_inst & 32'hfc00707f; // @[ALUCtrl.scala 87:31]
  wire  _T_25 = 32'h1013 == _T_24; // @[ALUCtrl.scala 87:31]
  wire  _T_27 = 32'h7013 == _T; // @[ALUCtrl.scala 88:31]
  wire  _T_29 = 32'h4013 == _T; // @[ALUCtrl.scala 89:31]
  wire  _T_31 = 32'h1b == _T; // @[ALUCtrl.scala 90:31]
  wire  _T_33 = 32'h5013 == _T_24; // @[ALUCtrl.scala 91:31]
  wire  _T_35 = 32'h101b == _T_22; // @[ALUCtrl.scala 92:31]
  wire  _T_37 = 32'h4000501b == _T_22; // @[ALUCtrl.scala 93:31]
  wire  _T_39 = 32'h40005013 == _T_24; // @[ALUCtrl.scala 94:31]
  wire  _T_41 = 32'h1003 == _T; // @[ALUCtrl.scala 95:31]
  wire  _T_43 = 32'h2003 == _T; // @[ALUCtrl.scala 96:31]
  wire  _T_47 = 32'h5003 == _T; // @[ALUCtrl.scala 98:31]
  wire  _T_49 = 32'h6003 == _T; // @[ALUCtrl.scala 99:31]
  wire  _T_51 = 32'h3 == _T; // @[ALUCtrl.scala 100:31]
  wire  _T_53 = 32'h6013 == _T; // @[ALUCtrl.scala 101:31]
  wire  _T_55 = 32'h3033 == _T_22; // @[ALUCtrl.scala 102:31]
  wire  _T_57 = 32'h3b == _T_22; // @[ALUCtrl.scala 103:31]
  wire  _T_59 = 32'h4000003b == _T_22; // @[ALUCtrl.scala 104:31]
  wire  _T_61 = 32'h7033 == _T_22; // @[ALUCtrl.scala 105:31]
  wire  _T_63 = 32'h33 == _T_22; // @[ALUCtrl.scala 106:31]
  wire  _T_65 = 32'h200503b == _T_22; // @[ALUCtrl.scala 107:31]
  wire  _T_67 = 32'h200703b == _T_22; // @[ALUCtrl.scala 108:31]
  wire  _T_69 = 32'h40000033 == _T_22; // @[ALUCtrl.scala 109:31]
  wire  _T_71 = 32'h200003b == _T_22; // @[ALUCtrl.scala 110:31]
  wire  _T_73 = 32'h200603b == _T_22; // @[ALUCtrl.scala 111:31]
  wire  _T_75 = 32'h200403b == _T_22; // @[ALUCtrl.scala 112:31]
  wire  _T_77 = 32'h2000033 == _T_22; // @[ALUCtrl.scala 113:31]
  wire  _T_79 = 32'h6033 == _T_22; // @[ALUCtrl.scala 114:31]
  wire  _T_81 = 32'h103b == _T_22; // @[ALUCtrl.scala 115:31]
  wire  _T_83 = 32'h4000503b == _T_22; // @[ALUCtrl.scala 116:31]
  wire  _T_85 = 32'h503b == _T_22; // @[ALUCtrl.scala 117:31]
  wire  _T_87 = 32'h2033 == _T_22; // @[ALUCtrl.scala 118:31]
  wire  _T_89 = 32'h2005033 == _T_22; // @[ALUCtrl.scala 119:31]
  wire  _T_91 = 32'h4033 == _T_22; // @[ALUCtrl.scala 120:31]
  wire  _T_93 = 32'h2006033 == _T_22; // @[ALUCtrl.scala 121:31]
  wire  _T_95 = 32'h2004033 == _T_22; // @[ALUCtrl.scala 122:31]
  wire  _T_97 = 32'h1033 == _T_22; // @[ALUCtrl.scala 123:31]
  wire  _T_99 = 32'h63 == _T; // @[ALUCtrl.scala 124:31]
  wire  _T_101 = 32'h6063 == _T; // @[ALUCtrl.scala 125:31]
  wire  _T_103 = 32'h7063 == _T; // @[ALUCtrl.scala 126:31]
  wire  _T_105 = 32'h4063 == _T; // @[ALUCtrl.scala 127:31]
  wire  _T_107 = 32'h5063 == _T; // @[ALUCtrl.scala 128:31]
  wire  _T_109 = 32'h1063 == _T; // @[ALUCtrl.scala 129:31]
  wire  _T_111 = 32'h2007033 == _T_22; // @[ALUCtrl.scala 130:31]
  wire  _T_113 = 32'h5033 == _T_22; // @[ALUCtrl.scala 131:31]
  wire [5:0] _T_114 = _T_113 ? 6'h8 : 6'h3f; // @[Mux.scala 98:16]
  wire [5:0] _T_115 = _T_111 ? 6'h20 : _T_114; // @[Mux.scala 98:16]
  wire [5:0] _T_116 = _T_109 ? 6'hb : _T_115; // @[Mux.scala 98:16]
  wire [5:0] _T_117 = _T_107 ? 6'h1f : _T_116; // @[Mux.scala 98:16]
  wire [5:0] _T_118 = _T_105 ? 6'h1e : _T_117; // @[Mux.scala 98:16]
  wire [5:0] _T_119 = _T_103 ? 6'h1d : _T_118; // @[Mux.scala 98:16]
  wire [5:0] _T_120 = _T_101 ? 6'hc : _T_119; // @[Mux.scala 98:16]
  wire [5:0] _T_121 = _T_99 ? 6'h1b : _T_120; // @[Mux.scala 98:16]
  wire [5:0] _T_122 = _T_97 ? 6'h6 : _T_121; // @[Mux.scala 98:16]
  wire [5:0] _T_123 = _T_95 ? 6'h1a : _T_122; // @[Mux.scala 98:16]
  wire [5:0] _T_124 = _T_93 ? 6'h19 : _T_123; // @[Mux.scala 98:16]
  wire [5:0] _T_125 = _T_91 ? 6'h4 : _T_124; // @[Mux.scala 98:16]
  wire [5:0] _T_126 = _T_89 ? 6'h18 : _T_125; // @[Mux.scala 98:16]
  wire [5:0] _T_127 = _T_87 ? 6'h5 : _T_126; // @[Mux.scala 98:16]
  wire [5:0] _T_128 = _T_85 ? 6'hd : _T_127; // @[Mux.scala 98:16]
  wire [5:0] _T_129 = _T_83 ? 6'h10 : _T_128; // @[Mux.scala 98:16]
  wire [5:0] _T_130 = _T_81 ? 6'hf : _T_129; // @[Mux.scala 98:16]
  wire [5:0] _T_131 = _T_79 ? 6'h3 : _T_130; // @[Mux.scala 98:16]
  wire [5:0] _T_132 = _T_77 ? 6'h17 : _T_131; // @[Mux.scala 98:16]
  wire [5:0] _T_133 = _T_75 ? 6'h16 : _T_132; // @[Mux.scala 98:16]
  wire [5:0] _T_134 = _T_73 ? 6'h15 : _T_133; // @[Mux.scala 98:16]
  wire [5:0] _T_135 = _T_71 ? 6'h14 : _T_134; // @[Mux.scala 98:16]
  wire [5:0] _T_136 = _T_69 ? 6'h1 : _T_135; // @[Mux.scala 98:16]
  wire [5:0] _T_137 = _T_67 ? 6'h13 : _T_136; // @[Mux.scala 98:16]
  wire [5:0] _T_138 = _T_65 ? 6'h12 : _T_137; // @[Mux.scala 98:16]
  wire [5:0] _T_139 = _T_63 ? 6'h0 : _T_138; // @[Mux.scala 98:16]
  wire [5:0] _T_140 = _T_61 ? 6'h2 : _T_139; // @[Mux.scala 98:16]
  wire [5:0] _T_141 = _T_59 ? 6'h11 : _T_140; // @[Mux.scala 98:16]
  wire [5:0] _T_142 = _T_57 ? 6'he : _T_141; // @[Mux.scala 98:16]
  wire [5:0] _T_143 = _T_55 ? 6'h7 : _T_142; // @[Mux.scala 98:16]
  wire [5:0] _T_144 = _T_53 ? 6'h3 : _T_143; // @[Mux.scala 98:16]
  wire [5:0] _T_145 = _T_51 ? 6'h0 : _T_144; // @[Mux.scala 98:16]
  wire [5:0] _T_146 = _T_49 ? 6'h0 : _T_145; // @[Mux.scala 98:16]
  wire [5:0] _T_147 = _T_47 ? 6'h0 : _T_146; // @[Mux.scala 98:16]
  wire [5:0] _T_148 = _T_17 ? 6'h0 : _T_147; // @[Mux.scala 98:16]
  wire [5:0] _T_149 = _T_43 ? 6'h0 : _T_148; // @[Mux.scala 98:16]
  wire [5:0] _T_150 = _T_41 ? 6'h0 : _T_149; // @[Mux.scala 98:16]
  wire [5:0] _T_151 = _T_39 ? 6'h9 : _T_150; // @[Mux.scala 98:16]
  wire [5:0] _T_152 = _T_37 ? 6'h10 : _T_151; // @[Mux.scala 98:16]
  wire [5:0] _T_153 = _T_35 ? 6'hf : _T_152; // @[Mux.scala 98:16]
  wire [5:0] _T_154 = _T_33 ? 6'h8 : _T_153; // @[Mux.scala 98:16]
  wire [5:0] _T_155 = _T_31 ? 6'he : _T_154; // @[Mux.scala 98:16]
  wire [5:0] _T_156 = _T_29 ? 6'h4 : _T_155; // @[Mux.scala 98:16]
  wire [5:0] _T_157 = _T_27 ? 6'h2 : _T_156; // @[Mux.scala 98:16]
  wire [5:0] _T_158 = _T_25 ? 6'h6 : _T_157; // @[Mux.scala 98:16]
  wire [5:0] _T_159 = _T_23 ? 6'hd : _T_158; // @[Mux.scala 98:16]
  wire [5:0] _T_160 = _T_21 ? 6'hc : _T_159; // @[Mux.scala 98:16]
  wire [5:0] _T_161 = _T_19 ? 6'h0 : _T_160; // @[Mux.scala 98:16]
  wire [5:0] _T_162 = _T_17 ? 6'h0 : _T_161; // @[Mux.scala 98:16]
  wire [5:0] _T_163 = _T_15 ? 6'h3f : _T_162; // @[Mux.scala 98:16]
  wire [5:0] _T_164 = _T_13 ? 6'h0 : _T_163; // @[Mux.scala 98:16]
  wire [5:0] _T_165 = _T_11 ? 6'ha : _T_164; // @[Mux.scala 98:16]
  wire [5:0] _T_166 = _T_9 ? 6'h0 : _T_165; // @[Mux.scala 98:16]
  wire [5:0] _T_167 = _T_7 ? 6'h0 : _T_166; // @[Mux.scala 98:16]
  wire [5:0] _T_168 = _T_5 ? 6'h0 : _T_167; // @[Mux.scala 98:16]
  wire [5:0] _T_169 = _T_3 ? 6'h0 : _T_168; // @[Mux.scala 98:16]
  assign io_ALUCtrl = _T_1 ? 6'h0 : _T_169; // @[ALUCtrl.scala 134:14]
endmodule
module ALUSrcGen(
  input  [31:0] io_inst,
  output [1:0]  io_AluSrc1,
  output [1:0]  io_AluSrc2
);
  wire [31:0] _T = io_inst & 32'hfe00707f; // @[ALUSrcGen.scala 66:49]
  wire  _T_1 = 32'h3033 == _T; // @[ALUSrcGen.scala 66:49]
  wire [31:0] _T_2 = io_inst & 32'h707f; // @[ALUSrcGen.scala 64:49]
  wire  _T_3 = 32'h23 == _T_2; // @[ALUSrcGen.scala 64:49]
  wire  _T_5 = 32'h3b == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_7 = 32'h3003 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_9 = 32'h63 == _T_2; // @[ALUSrcGen.scala 65:49]
  wire  _T_11 = 32'h4003 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_13 = 32'h7033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_15 = 32'h5063 == _T_2; // @[ALUSrcGen.scala 65:49]
  wire  _T_17 = 32'h4000501b == _T; // @[ALUSrcGen.scala 63:49]
  wire  _T_19 = 32'h7013 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire [31:0] _T_20 = io_inst & 32'hfc00707f; // @[ALUSrcGen.scala 63:49]
  wire  _T_21 = 32'h1013 == _T_20; // @[ALUSrcGen.scala 63:49]
  wire  _T_23 = 32'h3013 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_25 = 32'h33 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_27 = 32'h1063 == _T_2; // @[ALUSrcGen.scala 65:49]
  wire  _T_29 = 32'h2007033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_31 = 32'h4033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_33 = 32'h4000503b == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_35 = 32'h200603b == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_37 = 32'h6013 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_39 = 32'h5033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_41 = 32'h1003 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_43 = 32'h7063 == _T_2; // @[ALUSrcGen.scala 65:49]
  wire  _T_45 = 32'h1023 == _T_2; // @[ALUSrcGen.scala 64:49]
  wire  _T_47 = 32'h6003 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_49 = 32'h2005033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_51 = 32'h2006033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_53 = 32'h2033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_55 = 32'h3 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_57 = 32'h2004033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_59 = 32'h103b == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_61 = 32'h40000033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_63 = 32'h4000003b == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_65 = 32'h200403b == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_67 = 32'h1b == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_69 = 32'h200503b == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_71 = 32'h200003b == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_73 = 32'h1033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_75 = 32'h2000033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_77 = 32'h4063 == _T_2; // @[ALUSrcGen.scala 65:49]
  wire  _T_79 = 32'h501b == _T; // @[ALUSrcGen.scala 63:49]
  wire  _T_81 = 32'h4013 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_83 = 32'h200703b == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_85 = 32'h6063 == _T_2; // @[ALUSrcGen.scala 65:49]
  wire  _T_87 = 32'h101b == _T; // @[ALUSrcGen.scala 63:49]
  wire  _T_89 = 32'h5003 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_91 = 32'h3023 == _T_2; // @[ALUSrcGen.scala 64:49]
  wire  _T_93 = 32'h6033 == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_95 = 32'h13 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_97 = 32'h67 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_99 = 32'h5013 == _T_20; // @[ALUSrcGen.scala 63:49]
  wire  _T_101 = 32'h2003 == _T_2; // @[ALUSrcGen.scala 63:49]
  wire  _T_103 = 32'h40005013 == _T_20; // @[ALUSrcGen.scala 63:49]
  wire  _T_105 = 32'h503b == _T; // @[ALUSrcGen.scala 66:49]
  wire  _T_107 = 32'h2023 == _T_2; // @[ALUSrcGen.scala 64:49]
  wire [31:0] _T_108 = io_inst & 32'h7f; // @[ALUSrcGen.scala 71:31]
  wire  _T_109 = 32'h17 == _T_108; // @[ALUSrcGen.scala 71:31]
  wire  _T_111 = 32'h37 == _T_108; // @[ALUSrcGen.scala 72:31]
  wire  _T_225 = _T_109 | _T_111; // @[Mux.scala 98:16]
  wire  _T_226 = _T_107 ? 1'h0 : _T_225; // @[Mux.scala 98:16]
  wire  _T_227 = _T_105 ? 1'h0 : _T_226; // @[Mux.scala 98:16]
  wire  _T_228 = _T_103 ? 1'h0 : _T_227; // @[Mux.scala 98:16]
  wire  _T_229 = _T_101 ? 1'h0 : _T_228; // @[Mux.scala 98:16]
  wire  _T_230 = _T_99 ? 1'h0 : _T_229; // @[Mux.scala 98:16]
  wire  _T_231 = _T_97 ? 1'h0 : _T_230; // @[Mux.scala 98:16]
  wire  _T_232 = _T_95 ? 1'h0 : _T_231; // @[Mux.scala 98:16]
  wire  _T_233 = _T_93 ? 1'h0 : _T_232; // @[Mux.scala 98:16]
  wire  _T_234 = _T_91 ? 1'h0 : _T_233; // @[Mux.scala 98:16]
  wire  _T_235 = _T_89 ? 1'h0 : _T_234; // @[Mux.scala 98:16]
  wire  _T_236 = _T_87 ? 1'h0 : _T_235; // @[Mux.scala 98:16]
  wire  _T_237 = _T_85 ? 1'h0 : _T_236; // @[Mux.scala 98:16]
  wire  _T_238 = _T_83 ? 1'h0 : _T_237; // @[Mux.scala 98:16]
  wire  _T_239 = _T_81 ? 1'h0 : _T_238; // @[Mux.scala 98:16]
  wire  _T_240 = _T_79 ? 1'h0 : _T_239; // @[Mux.scala 98:16]
  wire  _T_241 = _T_77 ? 1'h0 : _T_240; // @[Mux.scala 98:16]
  wire  _T_242 = _T_75 ? 1'h0 : _T_241; // @[Mux.scala 98:16]
  wire  _T_243 = _T_73 ? 1'h0 : _T_242; // @[Mux.scala 98:16]
  wire  _T_244 = _T_71 ? 1'h0 : _T_243; // @[Mux.scala 98:16]
  wire  _T_245 = _T_69 ? 1'h0 : _T_244; // @[Mux.scala 98:16]
  wire  _T_246 = _T_67 ? 1'h0 : _T_245; // @[Mux.scala 98:16]
  wire  _T_247 = _T_65 ? 1'h0 : _T_246; // @[Mux.scala 98:16]
  wire  _T_248 = _T_63 ? 1'h0 : _T_247; // @[Mux.scala 98:16]
  wire  _T_249 = _T_61 ? 1'h0 : _T_248; // @[Mux.scala 98:16]
  wire  _T_250 = _T_59 ? 1'h0 : _T_249; // @[Mux.scala 98:16]
  wire  _T_251 = _T_57 ? 1'h0 : _T_250; // @[Mux.scala 98:16]
  wire  _T_252 = _T_55 ? 1'h0 : _T_251; // @[Mux.scala 98:16]
  wire  _T_253 = _T_53 ? 1'h0 : _T_252; // @[Mux.scala 98:16]
  wire  _T_254 = _T_51 ? 1'h0 : _T_253; // @[Mux.scala 98:16]
  wire  _T_255 = _T_49 ? 1'h0 : _T_254; // @[Mux.scala 98:16]
  wire  _T_256 = _T_47 ? 1'h0 : _T_255; // @[Mux.scala 98:16]
  wire  _T_257 = _T_45 ? 1'h0 : _T_256; // @[Mux.scala 98:16]
  wire  _T_258 = _T_43 ? 1'h0 : _T_257; // @[Mux.scala 98:16]
  wire  _T_259 = _T_41 ? 1'h0 : _T_258; // @[Mux.scala 98:16]
  wire  _T_260 = _T_39 ? 1'h0 : _T_259; // @[Mux.scala 98:16]
  wire  _T_261 = _T_37 ? 1'h0 : _T_260; // @[Mux.scala 98:16]
  wire  _T_262 = _T_35 ? 1'h0 : _T_261; // @[Mux.scala 98:16]
  wire  _T_263 = _T_33 ? 1'h0 : _T_262; // @[Mux.scala 98:16]
  wire  _T_264 = _T_31 ? 1'h0 : _T_263; // @[Mux.scala 98:16]
  wire  _T_265 = _T_29 ? 1'h0 : _T_264; // @[Mux.scala 98:16]
  wire  _T_266 = _T_27 ? 1'h0 : _T_265; // @[Mux.scala 98:16]
  wire  _T_267 = _T_25 ? 1'h0 : _T_266; // @[Mux.scala 98:16]
  wire  _T_268 = _T_23 ? 1'h0 : _T_267; // @[Mux.scala 98:16]
  wire  _T_269 = _T_21 ? 1'h0 : _T_268; // @[Mux.scala 98:16]
  wire  _T_270 = _T_19 ? 1'h0 : _T_269; // @[Mux.scala 98:16]
  wire  _T_271 = _T_17 ? 1'h0 : _T_270; // @[Mux.scala 98:16]
  wire  _T_272 = _T_15 ? 1'h0 : _T_271; // @[Mux.scala 98:16]
  wire  _T_273 = _T_13 ? 1'h0 : _T_272; // @[Mux.scala 98:16]
  wire  _T_274 = _T_11 ? 1'h0 : _T_273; // @[Mux.scala 98:16]
  wire  _T_275 = _T_9 ? 1'h0 : _T_274; // @[Mux.scala 98:16]
  wire  _T_276 = _T_7 ? 1'h0 : _T_275; // @[Mux.scala 98:16]
  wire  _T_277 = _T_5 ? 1'h0 : _T_276; // @[Mux.scala 98:16]
  wire  _T_278 = _T_3 ? 1'h0 : _T_277; // @[Mux.scala 98:16]
  wire  _T_279 = _T_1 ? 1'h0 : _T_278; // @[Mux.scala 98:16]
  wire [1:0] _T_280 = _T_111 ? 2'h3 : 2'h0; // @[Mux.scala 98:16]
  wire [1:0] _T_281 = _T_109 ? 2'h2 : _T_280; // @[Mux.scala 98:16]
  wire [1:0] _T_282 = _T_107 ? 2'h1 : _T_281; // @[Mux.scala 98:16]
  wire [1:0] _T_283 = _T_105 ? 2'h0 : _T_282; // @[Mux.scala 98:16]
  wire [1:0] _T_284 = _T_103 ? 2'h1 : _T_283; // @[Mux.scala 98:16]
  wire [1:0] _T_285 = _T_101 ? 2'h1 : _T_284; // @[Mux.scala 98:16]
  wire [1:0] _T_286 = _T_99 ? 2'h1 : _T_285; // @[Mux.scala 98:16]
  wire [1:0] _T_287 = _T_97 ? 2'h1 : _T_286; // @[Mux.scala 98:16]
  wire [1:0] _T_288 = _T_95 ? 2'h1 : _T_287; // @[Mux.scala 98:16]
  wire [1:0] _T_289 = _T_93 ? 2'h0 : _T_288; // @[Mux.scala 98:16]
  wire [1:0] _T_290 = _T_91 ? 2'h1 : _T_289; // @[Mux.scala 98:16]
  wire [1:0] _T_291 = _T_89 ? 2'h1 : _T_290; // @[Mux.scala 98:16]
  wire [1:0] _T_292 = _T_87 ? 2'h1 : _T_291; // @[Mux.scala 98:16]
  wire [1:0] _T_293 = _T_85 ? 2'h0 : _T_292; // @[Mux.scala 98:16]
  wire [1:0] _T_294 = _T_83 ? 2'h0 : _T_293; // @[Mux.scala 98:16]
  wire [1:0] _T_295 = _T_81 ? 2'h1 : _T_294; // @[Mux.scala 98:16]
  wire [1:0] _T_296 = _T_79 ? 2'h1 : _T_295; // @[Mux.scala 98:16]
  wire [1:0] _T_297 = _T_77 ? 2'h0 : _T_296; // @[Mux.scala 98:16]
  wire [1:0] _T_298 = _T_75 ? 2'h0 : _T_297; // @[Mux.scala 98:16]
  wire [1:0] _T_299 = _T_73 ? 2'h0 : _T_298; // @[Mux.scala 98:16]
  wire [1:0] _T_300 = _T_71 ? 2'h0 : _T_299; // @[Mux.scala 98:16]
  wire [1:0] _T_301 = _T_69 ? 2'h0 : _T_300; // @[Mux.scala 98:16]
  wire [1:0] _T_302 = _T_67 ? 2'h1 : _T_301; // @[Mux.scala 98:16]
  wire [1:0] _T_303 = _T_65 ? 2'h0 : _T_302; // @[Mux.scala 98:16]
  wire [1:0] _T_304 = _T_63 ? 2'h0 : _T_303; // @[Mux.scala 98:16]
  wire [1:0] _T_305 = _T_61 ? 2'h0 : _T_304; // @[Mux.scala 98:16]
  wire [1:0] _T_306 = _T_59 ? 2'h0 : _T_305; // @[Mux.scala 98:16]
  wire [1:0] _T_307 = _T_57 ? 2'h0 : _T_306; // @[Mux.scala 98:16]
  wire [1:0] _T_308 = _T_55 ? 2'h1 : _T_307; // @[Mux.scala 98:16]
  wire [1:0] _T_309 = _T_53 ? 2'h0 : _T_308; // @[Mux.scala 98:16]
  wire [1:0] _T_310 = _T_51 ? 2'h0 : _T_309; // @[Mux.scala 98:16]
  wire [1:0] _T_311 = _T_49 ? 2'h0 : _T_310; // @[Mux.scala 98:16]
  wire [1:0] _T_312 = _T_47 ? 2'h1 : _T_311; // @[Mux.scala 98:16]
  wire [1:0] _T_313 = _T_45 ? 2'h1 : _T_312; // @[Mux.scala 98:16]
  wire [1:0] _T_314 = _T_43 ? 2'h0 : _T_313; // @[Mux.scala 98:16]
  wire [1:0] _T_315 = _T_41 ? 2'h1 : _T_314; // @[Mux.scala 98:16]
  wire [1:0] _T_316 = _T_39 ? 2'h0 : _T_315; // @[Mux.scala 98:16]
  wire [1:0] _T_317 = _T_37 ? 2'h1 : _T_316; // @[Mux.scala 98:16]
  wire [1:0] _T_318 = _T_35 ? 2'h0 : _T_317; // @[Mux.scala 98:16]
  wire [1:0] _T_319 = _T_33 ? 2'h0 : _T_318; // @[Mux.scala 98:16]
  wire [1:0] _T_320 = _T_31 ? 2'h0 : _T_319; // @[Mux.scala 98:16]
  wire [1:0] _T_321 = _T_29 ? 2'h0 : _T_320; // @[Mux.scala 98:16]
  wire [1:0] _T_322 = _T_27 ? 2'h0 : _T_321; // @[Mux.scala 98:16]
  wire [1:0] _T_323 = _T_25 ? 2'h0 : _T_322; // @[Mux.scala 98:16]
  wire [1:0] _T_324 = _T_23 ? 2'h1 : _T_323; // @[Mux.scala 98:16]
  wire [1:0] _T_325 = _T_21 ? 2'h1 : _T_324; // @[Mux.scala 98:16]
  wire [1:0] _T_326 = _T_19 ? 2'h1 : _T_325; // @[Mux.scala 98:16]
  wire [1:0] _T_327 = _T_17 ? 2'h1 : _T_326; // @[Mux.scala 98:16]
  wire [1:0] _T_328 = _T_15 ? 2'h0 : _T_327; // @[Mux.scala 98:16]
  wire [1:0] _T_329 = _T_13 ? 2'h0 : _T_328; // @[Mux.scala 98:16]
  wire [1:0] _T_330 = _T_11 ? 2'h1 : _T_329; // @[Mux.scala 98:16]
  wire [1:0] _T_331 = _T_9 ? 2'h0 : _T_330; // @[Mux.scala 98:16]
  wire [1:0] _T_332 = _T_7 ? 2'h1 : _T_331; // @[Mux.scala 98:16]
  wire [1:0] _T_333 = _T_5 ? 2'h0 : _T_332; // @[Mux.scala 98:16]
  wire [1:0] _T_334 = _T_3 ? 2'h1 : _T_333; // @[Mux.scala 98:16]
  assign io_AluSrc1 = {{1'd0}, _T_279}; // @[ALUSrcGen.scala 90:14]
  assign io_AluSrc2 = _T_1 ? 2'h0 : _T_334; // @[ALUSrcGen.scala 91:14]
endmodule
module memWriteMGen(
  input  [31:0] io_inst,
  output        io_memWriteM
);
  wire [31:0] _T = io_inst & 32'h707f; // @[memWriteMGen.scala 19:49]
  wire  _T_1 = 32'h23 == _T; // @[memWriteMGen.scala 19:49]
  wire  _T_3 = 32'h1023 == _T; // @[memWriteMGen.scala 19:49]
  wire  _T_5 = 32'h3023 == _T; // @[memWriteMGen.scala 19:49]
  wire  _T_7 = 32'h2023 == _T; // @[memWriteMGen.scala 19:49]
  wire  _T_9 = _T_5 | _T_7; // @[Mux.scala 98:16]
  wire  _T_10 = _T_3 | _T_9; // @[Mux.scala 98:16]
  assign io_memWriteM = _T_1 | _T_10; // @[memWriteMGen.scala 25:16]
endmodule
module memWriteMaskGen(
  input  [31:0] io_inst,
  output [7:0]  io_mask
);
  wire  _T_1 = 3'h0 == io_inst[14:12]; // @[Mux.scala 80:60]
  wire [7:0] _T_2 = _T_1 ? 8'h1 : 8'h0; // @[Mux.scala 80:57]
  wire  _T_3 = 3'h1 == io_inst[14:12]; // @[Mux.scala 80:60]
  wire [7:0] _T_4 = _T_3 ? 8'h3 : _T_2; // @[Mux.scala 80:57]
  wire  _T_5 = 3'h2 == io_inst[14:12]; // @[Mux.scala 80:60]
  wire [7:0] _T_6 = _T_5 ? 8'hf : _T_4; // @[Mux.scala 80:57]
  wire  _T_7 = 3'h3 == io_inst[14:12]; // @[Mux.scala 80:60]
  assign io_mask = _T_7 ? 8'hff : _T_6; // @[memWriteMaskGen.scala 19:11]
endmodule
module memReadNumGen(
  input  [31:0] io_inst,
  output [2:0]  io_memReadNum
);
  assign io_memReadNum = io_inst[14:12]; // @[memReadNumGen.scala 22:17]
endmodule
module dnpcSrcGen(
  input  [31:0] io_inst,
  output        io_dnpcSrc
);
  wire [31:0] _T = io_inst & 32'h707f; // @[npcSrcGen.scala 25:49]
  wire  _T_1 = 32'h63 == _T; // @[npcSrcGen.scala 25:49]
  wire  _T_3 = 32'h5063 == _T; // @[npcSrcGen.scala 25:49]
  wire  _T_5 = 32'h1063 == _T; // @[npcSrcGen.scala 25:49]
  wire  _T_7 = 32'h7063 == _T; // @[npcSrcGen.scala 25:49]
  wire  _T_9 = 32'h4063 == _T; // @[npcSrcGen.scala 25:49]
  wire  _T_11 = 32'h6063 == _T; // @[npcSrcGen.scala 25:49]
  wire [31:0] _T_12 = io_inst & 32'h7f; // @[npcSrcGen.scala 30:31]
  wire  _T_13 = 32'h6f == _T_12; // @[npcSrcGen.scala 30:31]
  wire  _T_18 = _T_11 | _T_13; // @[Mux.scala 98:16]
  wire  _T_19 = _T_9 | _T_18; // @[Mux.scala 98:16]
  wire  _T_20 = _T_7 | _T_19; // @[Mux.scala 98:16]
  wire  _T_21 = _T_5 | _T_20; // @[Mux.scala 98:16]
  wire  _T_22 = _T_3 | _T_21; // @[Mux.scala 98:16]
  assign io_dnpcSrc = _T_1 | _T_22; // @[npcSrcGen.scala 33:14]
endmodule
module jumpGen(
  input  [31:0] io_inst,
  output        io_jump
);
  wire [31:0] _T = io_inst & 32'h7f; // @[npcSrcGen.scala 46:14]
  wire  _T_1 = 32'h6f == _T; // @[npcSrcGen.scala 46:14]
  wire [31:0] _T_2 = io_inst & 32'h707f; // @[npcSrcGen.scala 47:14]
  wire  _T_3 = 32'h67 == _T_2; // @[npcSrcGen.scala 47:14]
  assign io_jump = _T_1 | _T_3; // @[npcSrcGen.scala 50:11]
endmodule
module branchGen(
  input  [31:0] io_inst,
  output        io_branch
);
  wire [31:0] _T = io_inst & 32'h707f; // @[npcSrcGen.scala 66:47]
  wire  _T_1 = 32'h63 == _T; // @[npcSrcGen.scala 66:47]
  wire  _T_3 = 32'h5063 == _T; // @[npcSrcGen.scala 66:47]
  wire  _T_5 = 32'h1063 == _T; // @[npcSrcGen.scala 66:47]
  wire  _T_7 = 32'h7063 == _T; // @[npcSrcGen.scala 66:47]
  wire  _T_9 = 32'h4063 == _T; // @[npcSrcGen.scala 66:47]
  wire  _T_11 = 32'h6063 == _T; // @[npcSrcGen.scala 66:47]
  wire  _T_13 = _T_9 | _T_11; // @[Mux.scala 98:16]
  wire  _T_14 = _T_7 | _T_13; // @[Mux.scala 98:16]
  wire  _T_15 = _T_5 | _T_14; // @[Mux.scala 98:16]
  wire  _T_16 = _T_3 | _T_15; // @[Mux.scala 98:16]
  assign io_branch = _T_1 | _T_16; // @[npcSrcGen.scala 72:13]
endmodule
module regEnGen(
  input  [31:0] io_inst,
  output        io_regEn
);
  wire [31:0] _T = io_inst & 32'h7f; // @[regEnGen.scala 32:45]
  wire  _T_1 = 32'h17 == _T; // @[regEnGen.scala 32:45]
  wire [31:0] _T_2 = io_inst & 32'hfe00707f; // @[regEnGen.scala 35:45]
  wire  _T_3 = 32'h3033 == _T_2; // @[regEnGen.scala 35:45]
  wire [31:0] _T_4 = io_inst & 32'h707f; // @[regEnGen.scala 36:45]
  wire  _T_5 = 32'h23 == _T_4; // @[regEnGen.scala 36:45]
  wire  _T_7 = 32'h3b == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_9 = 32'h3003 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_11 = 32'h63 == _T_4; // @[regEnGen.scala 37:45]
  wire  _T_13 = 32'h4003 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_15 = 32'h37 == _T; // @[regEnGen.scala 32:45]
  wire  _T_17 = 32'h7033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_19 = 32'h5063 == _T_4; // @[regEnGen.scala 37:45]
  wire  _T_21 = 32'h4000501b == _T_2; // @[regEnGen.scala 33:45]
  wire  _T_23 = 32'h7013 == _T_4; // @[regEnGen.scala 33:45]
  wire [31:0] _T_24 = io_inst & 32'hfc00707f; // @[regEnGen.scala 33:45]
  wire  _T_25 = 32'h1013 == _T_24; // @[regEnGen.scala 33:45]
  wire  _T_27 = 32'h3013 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_29 = 32'h33 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_31 = 32'h1063 == _T_4; // @[regEnGen.scala 37:45]
  wire  _T_33 = 32'h2007033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_35 = 32'h4033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_37 = 32'h4000503b == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_39 = 32'h200603b == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_41 = 32'h6013 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_43 = 32'h5033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_45 = 32'h1003 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_47 = 32'h7063 == _T_4; // @[regEnGen.scala 37:45]
  wire  _T_49 = 32'h1023 == _T_4; // @[regEnGen.scala 36:45]
  wire  _T_51 = 32'h6003 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_53 = 32'h2005033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_55 = 32'h2006033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_57 = 32'h2033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_59 = 32'h3 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_61 = 32'h2004033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_63 = 32'h103b == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_65 = 32'h40000033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_67 = 32'h4000003b == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_69 = 32'h200403b == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_71 = 32'h1b == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_73 = 32'h200503b == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_75 = 32'h200003b == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_77 = 32'h1033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_79 = 32'h2000033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_81 = 32'h4063 == _T_4; // @[regEnGen.scala 37:45]
  wire  _T_83 = 32'h6f == _T; // @[regEnGen.scala 34:45]
  wire  _T_85 = 32'h501b == _T_2; // @[regEnGen.scala 33:45]
  wire  _T_87 = 32'h4013 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_89 = 32'h200703b == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_91 = 32'h6063 == _T_4; // @[regEnGen.scala 37:45]
  wire  _T_93 = 32'h101b == _T_2; // @[regEnGen.scala 33:45]
  wire  _T_95 = 32'h5003 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_97 = 32'h3023 == _T_4; // @[regEnGen.scala 36:45]
  wire  _T_99 = 32'h6033 == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_101 = 32'h13 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_103 = 32'h67 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_105 = 32'h5013 == _T_24; // @[regEnGen.scala 33:45]
  wire  _T_107 = 32'h2003 == _T_4; // @[regEnGen.scala 33:45]
  wire  _T_109 = 32'h40005013 == _T_24; // @[regEnGen.scala 33:45]
  wire  _T_111 = 32'h503b == _T_2; // @[regEnGen.scala 35:45]
  wire  _T_116 = _T_109 | _T_111; // @[Mux.scala 98:16]
  wire  _T_117 = _T_107 | _T_116; // @[Mux.scala 98:16]
  wire  _T_118 = _T_105 | _T_117; // @[Mux.scala 98:16]
  wire  _T_119 = _T_103 | _T_118; // @[Mux.scala 98:16]
  wire  _T_120 = _T_101 | _T_119; // @[Mux.scala 98:16]
  wire  _T_121 = _T_99 | _T_120; // @[Mux.scala 98:16]
  wire  _T_122 = _T_97 ? 1'h0 : _T_121; // @[Mux.scala 98:16]
  wire  _T_123 = _T_95 | _T_122; // @[Mux.scala 98:16]
  wire  _T_124 = _T_93 | _T_123; // @[Mux.scala 98:16]
  wire  _T_125 = _T_91 ? 1'h0 : _T_124; // @[Mux.scala 98:16]
  wire  _T_126 = _T_89 | _T_125; // @[Mux.scala 98:16]
  wire  _T_127 = _T_87 | _T_126; // @[Mux.scala 98:16]
  wire  _T_128 = _T_85 | _T_127; // @[Mux.scala 98:16]
  wire  _T_129 = _T_83 | _T_128; // @[Mux.scala 98:16]
  wire  _T_130 = _T_81 ? 1'h0 : _T_129; // @[Mux.scala 98:16]
  wire  _T_131 = _T_79 | _T_130; // @[Mux.scala 98:16]
  wire  _T_132 = _T_77 | _T_131; // @[Mux.scala 98:16]
  wire  _T_133 = _T_75 | _T_132; // @[Mux.scala 98:16]
  wire  _T_134 = _T_73 | _T_133; // @[Mux.scala 98:16]
  wire  _T_135 = _T_71 | _T_134; // @[Mux.scala 98:16]
  wire  _T_136 = _T_69 | _T_135; // @[Mux.scala 98:16]
  wire  _T_137 = _T_67 | _T_136; // @[Mux.scala 98:16]
  wire  _T_138 = _T_65 | _T_137; // @[Mux.scala 98:16]
  wire  _T_139 = _T_63 | _T_138; // @[Mux.scala 98:16]
  wire  _T_140 = _T_61 | _T_139; // @[Mux.scala 98:16]
  wire  _T_141 = _T_59 | _T_140; // @[Mux.scala 98:16]
  wire  _T_142 = _T_57 | _T_141; // @[Mux.scala 98:16]
  wire  _T_143 = _T_55 | _T_142; // @[Mux.scala 98:16]
  wire  _T_144 = _T_53 | _T_143; // @[Mux.scala 98:16]
  wire  _T_145 = _T_51 | _T_144; // @[Mux.scala 98:16]
  wire  _T_146 = _T_49 ? 1'h0 : _T_145; // @[Mux.scala 98:16]
  wire  _T_147 = _T_47 ? 1'h0 : _T_146; // @[Mux.scala 98:16]
  wire  _T_148 = _T_45 | _T_147; // @[Mux.scala 98:16]
  wire  _T_149 = _T_43 | _T_148; // @[Mux.scala 98:16]
  wire  _T_150 = _T_41 | _T_149; // @[Mux.scala 98:16]
  wire  _T_151 = _T_39 | _T_150; // @[Mux.scala 98:16]
  wire  _T_152 = _T_37 | _T_151; // @[Mux.scala 98:16]
  wire  _T_153 = _T_35 | _T_152; // @[Mux.scala 98:16]
  wire  _T_154 = _T_33 | _T_153; // @[Mux.scala 98:16]
  wire  _T_155 = _T_31 ? 1'h0 : _T_154; // @[Mux.scala 98:16]
  wire  _T_156 = _T_29 | _T_155; // @[Mux.scala 98:16]
  wire  _T_157 = _T_27 | _T_156; // @[Mux.scala 98:16]
  wire  _T_158 = _T_25 | _T_157; // @[Mux.scala 98:16]
  wire  _T_159 = _T_23 | _T_158; // @[Mux.scala 98:16]
  wire  _T_160 = _T_21 | _T_159; // @[Mux.scala 98:16]
  wire  _T_161 = _T_19 ? 1'h0 : _T_160; // @[Mux.scala 98:16]
  wire  _T_162 = _T_17 | _T_161; // @[Mux.scala 98:16]
  wire  _T_163 = _T_15 | _T_162; // @[Mux.scala 98:16]
  wire  _T_164 = _T_13 | _T_163; // @[Mux.scala 98:16]
  wire  _T_165 = _T_11 ? 1'h0 : _T_164; // @[Mux.scala 98:16]
  wire  _T_166 = _T_9 | _T_165; // @[Mux.scala 98:16]
  wire  _T_167 = _T_7 | _T_166; // @[Mux.scala 98:16]
  wire  _T_168 = _T_5 ? 1'h0 : _T_167; // @[Mux.scala 98:16]
  wire  _T_169 = _T_3 | _T_168; // @[Mux.scala 98:16]
  assign io_regEn = _T_1 | _T_169; // @[regEnGen.scala 43:12]
endmodule
module ResultSrcGen(
  input  [31:0] io_inst,
  output [1:0]  io_ResultSrc
);
  wire [31:0] _T = io_inst & 32'h7f; // @[ResultSrcGen.scala 37:44]
  wire  _T_1 = 32'h17 == _T; // @[ResultSrcGen.scala 37:44]
  wire [31:0] _T_2 = io_inst & 32'hfe00707f; // @[ResultSrcGen.scala 39:44]
  wire  _T_3 = 32'h3033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_5 = 32'h3b == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_7 = 32'h37 == _T; // @[ResultSrcGen.scala 37:44]
  wire  _T_9 = 32'h7033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_11 = 32'h33 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_13 = 32'h2007033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_15 = 32'h4033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_17 = 32'h4000503b == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_19 = 32'h200603b == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_21 = 32'h5033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_23 = 32'h2005033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_25 = 32'h2006033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_27 = 32'h2033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_29 = 32'h2004033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_31 = 32'h103b == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_33 = 32'h40000033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_35 = 32'h4000003b == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_37 = 32'h200403b == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_39 = 32'h200503b == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_41 = 32'h200003b == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_43 = 32'h1033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_45 = 32'h2000033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_47 = 32'h6f == _T; // @[ResultSrcGen.scala 38:44]
  wire  _T_49 = 32'h200703b == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_51 = 32'h6033 == _T_2; // @[ResultSrcGen.scala 39:44]
  wire  _T_53 = 32'h503b == _T_2; // @[ResultSrcGen.scala 39:44]
  wire [31:0] _T_54 = io_inst & 32'h707f; // @[ResultSrcGen.scala 44:26]
  wire  _T_55 = 32'h13 == _T_54; // @[ResultSrcGen.scala 44:26]
  wire  _T_57 = 32'h67 == _T_54; // @[ResultSrcGen.scala 45:26]
  wire  _T_61 = 32'h3003 == _T_54; // @[ResultSrcGen.scala 47:26]
  wire  _T_63 = 32'h4003 == _T_54; // @[ResultSrcGen.scala 48:26]
  wire  _T_65 = 32'h3013 == _T_54; // @[ResultSrcGen.scala 49:26]
  wire  _T_67 = 32'h501b == _T_2; // @[ResultSrcGen.scala 50:26]
  wire [31:0] _T_68 = io_inst & 32'hfc00707f; // @[ResultSrcGen.scala 51:26]
  wire  _T_69 = 32'h1013 == _T_68; // @[ResultSrcGen.scala 51:26]
  wire  _T_71 = 32'h7013 == _T_54; // @[ResultSrcGen.scala 52:26]
  wire  _T_73 = 32'h4013 == _T_54; // @[ResultSrcGen.scala 53:26]
  wire  _T_75 = 32'h1b == _T_54; // @[ResultSrcGen.scala 54:26]
  wire  _T_77 = 32'h5013 == _T_68; // @[ResultSrcGen.scala 55:26]
  wire  _T_79 = 32'h101b == _T_2; // @[ResultSrcGen.scala 56:26]
  wire  _T_81 = 32'h4000501b == _T_2; // @[ResultSrcGen.scala 57:26]
  wire  _T_83 = 32'h40005013 == _T_68; // @[ResultSrcGen.scala 58:26]
  wire  _T_85 = 32'h6013 == _T_54; // @[ResultSrcGen.scala 59:26]
  wire  _T_87 = 32'h1003 == _T_54; // @[ResultSrcGen.scala 60:26]
  wire  _T_89 = 32'h2003 == _T_54; // @[ResultSrcGen.scala 61:26]
  wire  _T_91 = 32'h5003 == _T_54; // @[ResultSrcGen.scala 62:26]
  wire  _T_93 = 32'h6003 == _T_54; // @[ResultSrcGen.scala 63:26]
  wire  _T_95 = 32'h3 == _T_54; // @[ResultSrcGen.scala 64:26]
  wire [1:0] _T_96 = _T_95 ? 2'h2 : 2'h0; // @[Mux.scala 98:16]
  wire [1:0] _T_97 = _T_93 ? 2'h2 : _T_96; // @[Mux.scala 98:16]
  wire [1:0] _T_98 = _T_91 ? 2'h2 : _T_97; // @[Mux.scala 98:16]
  wire [1:0] _T_99 = _T_89 ? 2'h2 : _T_98; // @[Mux.scala 98:16]
  wire [1:0] _T_100 = _T_87 ? 2'h2 : _T_99; // @[Mux.scala 98:16]
  wire [1:0] _T_101 = _T_85 ? 2'h0 : _T_100; // @[Mux.scala 98:16]
  wire [1:0] _T_102 = _T_83 ? 2'h0 : _T_101; // @[Mux.scala 98:16]
  wire [1:0] _T_103 = _T_81 ? 2'h0 : _T_102; // @[Mux.scala 98:16]
  wire [1:0] _T_104 = _T_79 ? 2'h0 : _T_103; // @[Mux.scala 98:16]
  wire [1:0] _T_105 = _T_77 ? 2'h0 : _T_104; // @[Mux.scala 98:16]
  wire [1:0] _T_106 = _T_75 ? 2'h0 : _T_105; // @[Mux.scala 98:16]
  wire [1:0] _T_107 = _T_73 ? 2'h0 : _T_106; // @[Mux.scala 98:16]
  wire [1:0] _T_108 = _T_71 ? 2'h0 : _T_107; // @[Mux.scala 98:16]
  wire [1:0] _T_109 = _T_69 ? 2'h0 : _T_108; // @[Mux.scala 98:16]
  wire [1:0] _T_110 = _T_67 ? 2'h0 : _T_109; // @[Mux.scala 98:16]
  wire [1:0] _T_111 = _T_65 ? 2'h0 : _T_110; // @[Mux.scala 98:16]
  wire [1:0] _T_112 = _T_63 ? 2'h2 : _T_111; // @[Mux.scala 98:16]
  wire [1:0] _T_113 = _T_61 ? 2'h2 : _T_112; // @[Mux.scala 98:16]
  wire [1:0] _T_114 = _T_57 ? 2'h1 : _T_113; // @[Mux.scala 98:16]
  wire [1:0] _T_115 = _T_57 ? 2'h1 : _T_114; // @[Mux.scala 98:16]
  wire [1:0] _T_116 = _T_55 ? 2'h0 : _T_115; // @[Mux.scala 98:16]
  wire [1:0] _T_117 = _T_53 ? 2'h0 : _T_116; // @[Mux.scala 98:16]
  wire [1:0] _T_118 = _T_51 ? 2'h0 : _T_117; // @[Mux.scala 98:16]
  wire [1:0] _T_119 = _T_49 ? 2'h0 : _T_118; // @[Mux.scala 98:16]
  wire [1:0] _T_120 = _T_47 ? 2'h1 : _T_119; // @[Mux.scala 98:16]
  wire [1:0] _T_121 = _T_45 ? 2'h0 : _T_120; // @[Mux.scala 98:16]
  wire [1:0] _T_122 = _T_43 ? 2'h0 : _T_121; // @[Mux.scala 98:16]
  wire [1:0] _T_123 = _T_41 ? 2'h0 : _T_122; // @[Mux.scala 98:16]
  wire [1:0] _T_124 = _T_39 ? 2'h0 : _T_123; // @[Mux.scala 98:16]
  wire [1:0] _T_125 = _T_37 ? 2'h0 : _T_124; // @[Mux.scala 98:16]
  wire [1:0] _T_126 = _T_35 ? 2'h0 : _T_125; // @[Mux.scala 98:16]
  wire [1:0] _T_127 = _T_33 ? 2'h0 : _T_126; // @[Mux.scala 98:16]
  wire [1:0] _T_128 = _T_31 ? 2'h0 : _T_127; // @[Mux.scala 98:16]
  wire [1:0] _T_129 = _T_29 ? 2'h0 : _T_128; // @[Mux.scala 98:16]
  wire [1:0] _T_130 = _T_27 ? 2'h0 : _T_129; // @[Mux.scala 98:16]
  wire [1:0] _T_131 = _T_25 ? 2'h0 : _T_130; // @[Mux.scala 98:16]
  wire [1:0] _T_132 = _T_23 ? 2'h0 : _T_131; // @[Mux.scala 98:16]
  wire [1:0] _T_133 = _T_21 ? 2'h0 : _T_132; // @[Mux.scala 98:16]
  wire [1:0] _T_134 = _T_19 ? 2'h0 : _T_133; // @[Mux.scala 98:16]
  wire [1:0] _T_135 = _T_17 ? 2'h0 : _T_134; // @[Mux.scala 98:16]
  wire [1:0] _T_136 = _T_15 ? 2'h0 : _T_135; // @[Mux.scala 98:16]
  wire [1:0] _T_137 = _T_13 ? 2'h0 : _T_136; // @[Mux.scala 98:16]
  wire [1:0] _T_138 = _T_11 ? 2'h0 : _T_137; // @[Mux.scala 98:16]
  wire [1:0] _T_139 = _T_9 ? 2'h0 : _T_138; // @[Mux.scala 98:16]
  wire [1:0] _T_140 = _T_7 ? 2'h0 : _T_139; // @[Mux.scala 98:16]
  wire [1:0] _T_141 = _T_5 ? 2'h0 : _T_140; // @[Mux.scala 98:16]
  wire [1:0] _T_142 = _T_3 ? 2'h0 : _T_141; // @[Mux.scala 98:16]
  assign io_ResultSrc = _T_1 ? 2'h0 : _T_142; // @[ResultSrcGen.scala 66:16]
endmodule
module CtrlUnit(
  input  [31:0] io_inst,
  output [1:0]  io_CtrlS_AluSrc1,
  output [1:0]  io_CtrlS_AluSrc2,
  output [5:0]  io_CtrlS_ALUCtrl,
  output        io_CtrlS_memWriteM,
  output [7:0]  io_CtrlS_memWriteMask,
  output [2:0]  io_CtrlS_memReadNum,
  output        io_CtrlS_dnpcSrc,
  output        io_CtrlS_jump,
  output        io_CtrlS_branch,
  output        io_CtrlS_regEn,
  output [1:0]  io_CtrlS_ResultSrc
);
  wire [31:0] ALUCtrl_ins_io_inst; // @[CtrlUnit.scala 31:26]
  wire [5:0] ALUCtrl_ins_io_ALUCtrl; // @[CtrlUnit.scala 31:26]
  wire [31:0] ALUSrcGen_ins_io_inst; // @[CtrlUnit.scala 35:29]
  wire [1:0] ALUSrcGen_ins_io_AluSrc1; // @[CtrlUnit.scala 35:29]
  wire [1:0] ALUSrcGen_ins_io_AluSrc2; // @[CtrlUnit.scala 35:29]
  wire [31:0] memWriteMGen_ins_io_inst; // @[CtrlUnit.scala 40:32]
  wire  memWriteMGen_ins_io_memWriteM; // @[CtrlUnit.scala 40:32]
  wire [31:0] memWriteMaskGen_ins_io_inst; // @[CtrlUnit.scala 44:35]
  wire [7:0] memWriteMaskGen_ins_io_mask; // @[CtrlUnit.scala 44:35]
  wire [31:0] memReadNumGen_ins_io_inst; // @[CtrlUnit.scala 48:33]
  wire [2:0] memReadNumGen_ins_io_memReadNum; // @[CtrlUnit.scala 48:33]
  wire [31:0] dnpcSrcGen_ins_io_inst; // @[CtrlUnit.scala 52:32]
  wire  dnpcSrcGen_ins_io_dnpcSrc; // @[CtrlUnit.scala 52:32]
  wire [31:0] jumpGen_ins_io_inst; // @[CtrlUnit.scala 56:27]
  wire  jumpGen_ins_io_jump; // @[CtrlUnit.scala 56:27]
  wire [31:0] branchGen_ins_io_inst; // @[CtrlUnit.scala 60:29]
  wire  branchGen_ins_io_branch; // @[CtrlUnit.scala 60:29]
  wire [31:0] regEnGen_ins_io_inst; // @[CtrlUnit.scala 65:28]
  wire  regEnGen_ins_io_regEn; // @[CtrlUnit.scala 65:28]
  wire [31:0] ResultSrcGen_ins_io_inst; // @[CtrlUnit.scala 69:32]
  wire [1:0] ResultSrcGen_ins_io_ResultSrc; // @[CtrlUnit.scala 69:32]
  ALUCtrl ALUCtrl_ins ( // @[CtrlUnit.scala 31:26]
    .io_inst(ALUCtrl_ins_io_inst),
    .io_ALUCtrl(ALUCtrl_ins_io_ALUCtrl)
  );
  ALUSrcGen ALUSrcGen_ins ( // @[CtrlUnit.scala 35:29]
    .io_inst(ALUSrcGen_ins_io_inst),
    .io_AluSrc1(ALUSrcGen_ins_io_AluSrc1),
    .io_AluSrc2(ALUSrcGen_ins_io_AluSrc2)
  );
  memWriteMGen memWriteMGen_ins ( // @[CtrlUnit.scala 40:32]
    .io_inst(memWriteMGen_ins_io_inst),
    .io_memWriteM(memWriteMGen_ins_io_memWriteM)
  );
  memWriteMaskGen memWriteMaskGen_ins ( // @[CtrlUnit.scala 44:35]
    .io_inst(memWriteMaskGen_ins_io_inst),
    .io_mask(memWriteMaskGen_ins_io_mask)
  );
  memReadNumGen memReadNumGen_ins ( // @[CtrlUnit.scala 48:33]
    .io_inst(memReadNumGen_ins_io_inst),
    .io_memReadNum(memReadNumGen_ins_io_memReadNum)
  );
  dnpcSrcGen dnpcSrcGen_ins ( // @[CtrlUnit.scala 52:32]
    .io_inst(dnpcSrcGen_ins_io_inst),
    .io_dnpcSrc(dnpcSrcGen_ins_io_dnpcSrc)
  );
  jumpGen jumpGen_ins ( // @[CtrlUnit.scala 56:27]
    .io_inst(jumpGen_ins_io_inst),
    .io_jump(jumpGen_ins_io_jump)
  );
  branchGen branchGen_ins ( // @[CtrlUnit.scala 60:29]
    .io_inst(branchGen_ins_io_inst),
    .io_branch(branchGen_ins_io_branch)
  );
  regEnGen regEnGen_ins ( // @[CtrlUnit.scala 65:28]
    .io_inst(regEnGen_ins_io_inst),
    .io_regEn(regEnGen_ins_io_regEn)
  );
  ResultSrcGen ResultSrcGen_ins ( // @[CtrlUnit.scala 69:32]
    .io_inst(ResultSrcGen_ins_io_inst),
    .io_ResultSrc(ResultSrcGen_ins_io_ResultSrc)
  );
  assign io_CtrlS_AluSrc1 = ALUSrcGen_ins_io_AluSrc1; // @[CtrlUnit.scala 37:20]
  assign io_CtrlS_AluSrc2 = ALUSrcGen_ins_io_AluSrc2; // @[CtrlUnit.scala 38:20]
  assign io_CtrlS_ALUCtrl = ALUCtrl_ins_io_ALUCtrl; // @[CtrlUnit.scala 33:20]
  assign io_CtrlS_memWriteM = memWriteMGen_ins_io_memWriteM; // @[CtrlUnit.scala 42:22]
  assign io_CtrlS_memWriteMask = memWriteMaskGen_ins_io_mask; // @[CtrlUnit.scala 46:25]
  assign io_CtrlS_memReadNum = memReadNumGen_ins_io_memReadNum; // @[CtrlUnit.scala 50:23]
  assign io_CtrlS_dnpcSrc = dnpcSrcGen_ins_io_dnpcSrc; // @[CtrlUnit.scala 54:20]
  assign io_CtrlS_jump = jumpGen_ins_io_jump; // @[CtrlUnit.scala 58:17]
  assign io_CtrlS_branch = branchGen_ins_io_branch; // @[CtrlUnit.scala 62:19]
  assign io_CtrlS_regEn = regEnGen_ins_io_regEn; // @[CtrlUnit.scala 67:18]
  assign io_CtrlS_ResultSrc = ResultSrcGen_ins_io_ResultSrc; // @[CtrlUnit.scala 71:22]
  assign ALUCtrl_ins_io_inst = io_inst; // @[CtrlUnit.scala 32:23]
  assign ALUSrcGen_ins_io_inst = io_inst; // @[CtrlUnit.scala 36:25]
  assign memWriteMGen_ins_io_inst = io_inst; // @[CtrlUnit.scala 41:28]
  assign memWriteMaskGen_ins_io_inst = io_inst; // @[CtrlUnit.scala 45:31]
  assign memReadNumGen_ins_io_inst = io_inst; // @[CtrlUnit.scala 49:29]
  assign dnpcSrcGen_ins_io_inst = io_inst; // @[CtrlUnit.scala 53:26]
  assign jumpGen_ins_io_inst = io_inst; // @[CtrlUnit.scala 57:23]
  assign branchGen_ins_io_inst = io_inst; // @[CtrlUnit.scala 61:25]
  assign regEnGen_ins_io_inst = io_inst; // @[CtrlUnit.scala 66:24]
  assign ResultSrcGen_ins_io_inst = io_inst; // @[CtrlUnit.scala 70:28]
endmodule
module csrCtrl(
  input  [31:0] io_inst,
  output        io_CSRCtrlIf_csrrwen,
  output        io_CSRCtrlIf_csrswen,
  output        io_CSRCtrlIf_mepcen,
  output        io_CSRCtrlIf_mcauseen,
  output        io_CSRCtrlIf_rfen,
  output        io_CSRCtrlIf_vec2pc,
  output        io_CSRCtrlIf_mepc2pc
);
  wire [31:0] _T_6 = io_inst & 32'h707f; // @[csrCtrl.scala 41:35]
  wire  _T_7 = 32'h1073 == _T_6; // @[csrCtrl.scala 41:35]
  wire  _T_9 = 32'h2073 == _T_6; // @[csrCtrl.scala 42:35]
  assign io_CSRCtrlIf_csrrwen = 32'h1073 == _T_6; // @[csrCtrl.scala 41:24]
  assign io_CSRCtrlIf_csrswen = 32'h2073 == _T_6; // @[csrCtrl.scala 42:24]
  assign io_CSRCtrlIf_mepcen = 32'h73 == io_inst; // @[csrCtrl.scala 36:23]
  assign io_CSRCtrlIf_mcauseen = 32'h73 == io_inst; // @[csrCtrl.scala 37:25]
  assign io_CSRCtrlIf_rfen = _T_7 | _T_9; // @[csrCtrl.scala 43:21]
  assign io_CSRCtrlIf_vec2pc = 32'h73 == io_inst; // @[csrCtrl.scala 38:23]
  assign io_CSRCtrlIf_mepc2pc = 32'h30200073 == io_inst; // @[csrCtrl.scala 45:24]
endmodule
module riscv(
  input         clock,
  input         reset,
  input  [31:0] io_inst,
  output [63:0] io_pc,
  output [63:0] io_dout_addr,
  output [63:0] io_dout_wdata,
  input  [63:0] io_dout_rdata,
  output        io_we,
  output [7:0]  io_mask
);
  wire  ifu_clock; // @[riscv.scala 18:19]
  wire  ifu_reset; // @[riscv.scala 18:19]
  wire [31:0] ifu_io_instIn; // @[riscv.scala 18:19]
  wire [31:0] ifu_io_instOut; // @[riscv.scala 18:19]
  wire [63:0] ifu_io_pc; // @[riscv.scala 18:19]
  wire [63:0] ifu_io_snpc; // @[riscv.scala 18:19]
  wire [63:0] ifu_io_dnpc; // @[riscv.scala 18:19]
  wire  ifu_io_jump; // @[riscv.scala 18:19]
  wire  idu_clock; // @[riscv.scala 19:19]
  wire [63:0] idu_io_pc; // @[riscv.scala 19:19]
  wire [31:0] idu_io_inst; // @[riscv.scala 19:19]
  wire  idu_io_regEn; // @[riscv.scala 19:19]
  wire [63:0] idu_io_dataEx_imme; // @[riscv.scala 19:19]
  wire [63:0] idu_io_dataEx_dOut1; // @[riscv.scala 19:19]
  wire [63:0] idu_io_dataEx_dOut2; // @[riscv.scala 19:19]
  wire [63:0] idu_io_dataEx_dIn; // @[riscv.scala 19:19]
  wire  idu_io_csrrfen; // @[riscv.scala 19:19]
  wire  exu_clock; // @[riscv.scala 20:19]
  wire  exu_reset; // @[riscv.scala 20:19]
  wire [1:0] exu_io_AluSrc1; // @[riscv.scala 20:19]
  wire [1:0] exu_io_AluSrc2; // @[riscv.scala 20:19]
  wire [5:0] exu_io_ALUCtrl; // @[riscv.scala 20:19]
  wire  exu_io_dnpcSrc; // @[riscv.scala 20:19]
  wire [1:0] exu_io_ResultSrc; // @[riscv.scala 20:19]
  wire [2:0] exu_io_memReadNum; // @[riscv.scala 20:19]
  wire [63:0] exu_io_dataId_imme; // @[riscv.scala 20:19]
  wire [63:0] exu_io_dataId_dOut1; // @[riscv.scala 20:19]
  wire [63:0] exu_io_dataId_dOut2; // @[riscv.scala 20:19]
  wire [63:0] exu_io_dataId_dIn; // @[riscv.scala 20:19]
  wire [63:0] exu_io_dataOut_addr; // @[riscv.scala 20:19]
  wire [63:0] exu_io_dataOut_wdata; // @[riscv.scala 20:19]
  wire [63:0] exu_io_dataOut_rdata; // @[riscv.scala 20:19]
  wire  exu_io_brTake; // @[riscv.scala 20:19]
  wire [63:0] exu_io_pc; // @[riscv.scala 20:19]
  wire [63:0] exu_io_snpc; // @[riscv.scala 20:19]
  wire [63:0] exu_io_dnpc; // @[riscv.scala 20:19]
  wire  exu_io_CSRCtrlIf_csrrwen; // @[riscv.scala 20:19]
  wire  exu_io_CSRCtrlIf_csrswen; // @[riscv.scala 20:19]
  wire  exu_io_CSRCtrlIf_mepcen; // @[riscv.scala 20:19]
  wire  exu_io_CSRCtrlIf_mcauseen; // @[riscv.scala 20:19]
  wire  exu_io_CSRCtrlIf_rfen; // @[riscv.scala 20:19]
  wire  exu_io_CSRCtrlIf_vec2pc; // @[riscv.scala 20:19]
  wire  exu_io_CSRCtrlIf_mepc2pc; // @[riscv.scala 20:19]
  wire [31:0] ctrl_io_inst; // @[riscv.scala 22:20]
  wire [1:0] ctrl_io_CtrlS_AluSrc1; // @[riscv.scala 22:20]
  wire [1:0] ctrl_io_CtrlS_AluSrc2; // @[riscv.scala 22:20]
  wire [5:0] ctrl_io_CtrlS_ALUCtrl; // @[riscv.scala 22:20]
  wire  ctrl_io_CtrlS_memWriteM; // @[riscv.scala 22:20]
  wire [7:0] ctrl_io_CtrlS_memWriteMask; // @[riscv.scala 22:20]
  wire [2:0] ctrl_io_CtrlS_memReadNum; // @[riscv.scala 22:20]
  wire  ctrl_io_CtrlS_dnpcSrc; // @[riscv.scala 22:20]
  wire  ctrl_io_CtrlS_jump; // @[riscv.scala 22:20]
  wire  ctrl_io_CtrlS_branch; // @[riscv.scala 22:20]
  wire  ctrl_io_CtrlS_regEn; // @[riscv.scala 22:20]
  wire [1:0] ctrl_io_CtrlS_ResultSrc; // @[riscv.scala 22:20]
  wire [31:0] csrCtrl_io_inst; // @[riscv.scala 23:23]
  wire  csrCtrl_io_CSRCtrlIf_csrrwen; // @[riscv.scala 23:23]
  wire  csrCtrl_io_CSRCtrlIf_csrswen; // @[riscv.scala 23:23]
  wire  csrCtrl_io_CSRCtrlIf_mepcen; // @[riscv.scala 23:23]
  wire  csrCtrl_io_CSRCtrlIf_mcauseen; // @[riscv.scala 23:23]
  wire  csrCtrl_io_CSRCtrlIf_rfen; // @[riscv.scala 23:23]
  wire  csrCtrl_io_CSRCtrlIf_vec2pc; // @[riscv.scala 23:23]
  wire  csrCtrl_io_CSRCtrlIf_mepc2pc; // @[riscv.scala 23:23]
  wire  _T = ctrl_io_CtrlS_branch & exu_io_brTake; // @[riscv.scala 27:38]
  wire  _T_1 = _T | ctrl_io_CtrlS_jump; // @[riscv.scala 27:56]
  wire  _T_2 = _T_1 | csrCtrl_io_CSRCtrlIf_mepc2pc; // @[riscv.scala 27:78]
  iFetch ifu ( // @[riscv.scala 18:19]
    .clock(ifu_clock),
    .reset(ifu_reset),
    .io_instIn(ifu_io_instIn),
    .io_instOut(ifu_io_instOut),
    .io_pc(ifu_io_pc),
    .io_snpc(ifu_io_snpc),
    .io_dnpc(ifu_io_dnpc),
    .io_jump(ifu_io_jump)
  );
  iDecode idu ( // @[riscv.scala 19:19]
    .clock(idu_clock),
    .io_pc(idu_io_pc),
    .io_inst(idu_io_inst),
    .io_regEn(idu_io_regEn),
    .io_dataEx_imme(idu_io_dataEx_imme),
    .io_dataEx_dOut1(idu_io_dataEx_dOut1),
    .io_dataEx_dOut2(idu_io_dataEx_dOut2),
    .io_dataEx_dIn(idu_io_dataEx_dIn),
    .io_csrrfen(idu_io_csrrfen)
  );
  execute exu ( // @[riscv.scala 20:19]
    .clock(exu_clock),
    .reset(exu_reset),
    .io_AluSrc1(exu_io_AluSrc1),
    .io_AluSrc2(exu_io_AluSrc2),
    .io_ALUCtrl(exu_io_ALUCtrl),
    .io_dnpcSrc(exu_io_dnpcSrc),
    .io_ResultSrc(exu_io_ResultSrc),
    .io_memReadNum(exu_io_memReadNum),
    .io_dataId_imme(exu_io_dataId_imme),
    .io_dataId_dOut1(exu_io_dataId_dOut1),
    .io_dataId_dOut2(exu_io_dataId_dOut2),
    .io_dataId_dIn(exu_io_dataId_dIn),
    .io_dataOut_addr(exu_io_dataOut_addr),
    .io_dataOut_wdata(exu_io_dataOut_wdata),
    .io_dataOut_rdata(exu_io_dataOut_rdata),
    .io_brTake(exu_io_brTake),
    .io_pc(exu_io_pc),
    .io_snpc(exu_io_snpc),
    .io_dnpc(exu_io_dnpc),
    .io_CSRCtrlIf_csrrwen(exu_io_CSRCtrlIf_csrrwen),
    .io_CSRCtrlIf_csrswen(exu_io_CSRCtrlIf_csrswen),
    .io_CSRCtrlIf_mepcen(exu_io_CSRCtrlIf_mepcen),
    .io_CSRCtrlIf_mcauseen(exu_io_CSRCtrlIf_mcauseen),
    .io_CSRCtrlIf_rfen(exu_io_CSRCtrlIf_rfen),
    .io_CSRCtrlIf_vec2pc(exu_io_CSRCtrlIf_vec2pc),
    .io_CSRCtrlIf_mepc2pc(exu_io_CSRCtrlIf_mepc2pc)
  );
  CtrlUnit ctrl ( // @[riscv.scala 22:20]
    .io_inst(ctrl_io_inst),
    .io_CtrlS_AluSrc1(ctrl_io_CtrlS_AluSrc1),
    .io_CtrlS_AluSrc2(ctrl_io_CtrlS_AluSrc2),
    .io_CtrlS_ALUCtrl(ctrl_io_CtrlS_ALUCtrl),
    .io_CtrlS_memWriteM(ctrl_io_CtrlS_memWriteM),
    .io_CtrlS_memWriteMask(ctrl_io_CtrlS_memWriteMask),
    .io_CtrlS_memReadNum(ctrl_io_CtrlS_memReadNum),
    .io_CtrlS_dnpcSrc(ctrl_io_CtrlS_dnpcSrc),
    .io_CtrlS_jump(ctrl_io_CtrlS_jump),
    .io_CtrlS_branch(ctrl_io_CtrlS_branch),
    .io_CtrlS_regEn(ctrl_io_CtrlS_regEn),
    .io_CtrlS_ResultSrc(ctrl_io_CtrlS_ResultSrc)
  );
  csrCtrl csrCtrl ( // @[riscv.scala 23:23]
    .io_inst(csrCtrl_io_inst),
    .io_CSRCtrlIf_csrrwen(csrCtrl_io_CSRCtrlIf_csrrwen),
    .io_CSRCtrlIf_csrswen(csrCtrl_io_CSRCtrlIf_csrswen),
    .io_CSRCtrlIf_mepcen(csrCtrl_io_CSRCtrlIf_mepcen),
    .io_CSRCtrlIf_mcauseen(csrCtrl_io_CSRCtrlIf_mcauseen),
    .io_CSRCtrlIf_rfen(csrCtrl_io_CSRCtrlIf_rfen),
    .io_CSRCtrlIf_vec2pc(csrCtrl_io_CSRCtrlIf_vec2pc),
    .io_CSRCtrlIf_mepc2pc(csrCtrl_io_CSRCtrlIf_mepc2pc)
  );
  assign io_pc = ifu_io_pc; // @[riscv.scala 29:9]
  assign io_dout_addr = exu_io_dataOut_addr; // @[riscv.scala 56:16]
  assign io_dout_wdata = exu_io_dataOut_wdata; // @[riscv.scala 57:16]
  assign io_we = ctrl_io_CtrlS_memWriteM; // @[riscv.scala 59:9]
  assign io_mask = ctrl_io_CtrlS_memWriteMask; // @[riscv.scala 60:11]
  assign ifu_clock = clock;
  assign ifu_reset = reset;
  assign ifu_io_instIn = io_inst; // @[riscv.scala 28:17]
  assign ifu_io_dnpc = exu_io_dnpc; // @[riscv.scala 31:15]
  assign ifu_io_jump = _T_2 | csrCtrl_io_CSRCtrlIf_vec2pc; // @[riscv.scala 30:15]
  assign idu_clock = clock;
  assign idu_io_pc = ifu_io_pc; // @[riscv.scala 38:13]
  assign idu_io_inst = ifu_io_instOut; // @[riscv.scala 35:15]
  assign idu_io_regEn = ctrl_io_CtrlS_regEn; // @[riscv.scala 37:16]
  assign idu_io_dataEx_dIn = exu_io_dataId_dIn; // @[riscv.scala 36:21]
  assign idu_io_csrrfen = csrCtrl_io_CSRCtrlIf_rfen; // @[riscv.scala 63:18]
  assign exu_clock = clock;
  assign exu_reset = reset;
  assign exu_io_AluSrc1 = ctrl_io_CtrlS_AluSrc1; // @[riscv.scala 49:18]
  assign exu_io_AluSrc2 = ctrl_io_CtrlS_AluSrc2; // @[riscv.scala 50:18]
  assign exu_io_ALUCtrl = ctrl_io_CtrlS_ALUCtrl; // @[riscv.scala 48:17]
  assign exu_io_dnpcSrc = ctrl_io_CtrlS_dnpcSrc; // @[riscv.scala 52:18]
  assign exu_io_ResultSrc = ctrl_io_CtrlS_ResultSrc; // @[riscv.scala 51:20]
  assign exu_io_memReadNum = ctrl_io_CtrlS_memReadNum; // @[riscv.scala 54:21]
  assign exu_io_dataId_imme = idu_io_dataEx_imme; // @[riscv.scala 41:22]
  assign exu_io_dataId_dOut1 = idu_io_dataEx_dOut1; // @[riscv.scala 42:23]
  assign exu_io_dataId_dOut2 = idu_io_dataEx_dOut2; // @[riscv.scala 43:23]
  assign exu_io_dataOut_rdata = io_dout_rdata; // @[riscv.scala 53:24]
  assign exu_io_pc = ifu_io_pc; // @[riscv.scala 45:13]
  assign exu_io_snpc = ifu_io_snpc; // @[riscv.scala 46:15]
  assign exu_io_CSRCtrlIf_csrrwen = csrCtrl_io_CSRCtrlIf_csrrwen; // @[riscv.scala 66:20]
  assign exu_io_CSRCtrlIf_csrswen = csrCtrl_io_CSRCtrlIf_csrswen; // @[riscv.scala 66:20]
  assign exu_io_CSRCtrlIf_mepcen = csrCtrl_io_CSRCtrlIf_mepcen; // @[riscv.scala 66:20]
  assign exu_io_CSRCtrlIf_mcauseen = csrCtrl_io_CSRCtrlIf_mcauseen; // @[riscv.scala 66:20]
  assign exu_io_CSRCtrlIf_rfen = csrCtrl_io_CSRCtrlIf_rfen; // @[riscv.scala 66:20]
  assign exu_io_CSRCtrlIf_vec2pc = csrCtrl_io_CSRCtrlIf_vec2pc; // @[riscv.scala 66:20]
  assign exu_io_CSRCtrlIf_mepc2pc = csrCtrl_io_CSRCtrlIf_mepc2pc; // @[riscv.scala 66:20]
  assign ctrl_io_inst = ifu_io_instOut; // @[riscv.scala 33:16]
  assign csrCtrl_io_inst = ifu_io_instOut; // @[riscv.scala 24:19]
endmodule
