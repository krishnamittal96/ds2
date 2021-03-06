// !!! WARNING !!! THIS FILE WAS AUTOGENERATED !!! DO NOT MODIFY !!!
// !!! WARNING !!! MODIFY INSTEAD: Definitions/ARM64.json

#pragma once

#include "DebugServer2/Architecture/RegisterLayout.h"

namespace ds2 {
namespace Architecture {
namespace ARM64 {

enum /* dwarf_reg */ {
  reg_dwarf_x0 = 0,
  reg_dwarf_x1 = 1,
  reg_dwarf_x2 = 2,
  reg_dwarf_x3 = 3,
  reg_dwarf_x4 = 4,
  reg_dwarf_x5 = 5,
  reg_dwarf_x6 = 6,
  reg_dwarf_x7 = 7,
  reg_dwarf_x8 = 8,
  reg_dwarf_x9 = 9,
  reg_dwarf_x10 = 10,
  reg_dwarf_x11 = 11,
  reg_dwarf_x12 = 12,
  reg_dwarf_x13 = 13,
  reg_dwarf_x14 = 14,
  reg_dwarf_x15 = 15,
  reg_dwarf_x16 = 16,
  reg_dwarf_x17 = 17,
  reg_dwarf_x18 = 18,
  reg_dwarf_x19 = 19,
  reg_dwarf_x20 = 20,
  reg_dwarf_x21 = 21,
  reg_dwarf_x22 = 22,
  reg_dwarf_x23 = 23,
  reg_dwarf_x24 = 24,
  reg_dwarf_x25 = 25,
  reg_dwarf_x26 = 26,
  reg_dwarf_x27 = 27,
  reg_dwarf_x28 = 28,
  reg_dwarf_x29 = 29,
  reg_dwarf_x30 = 30,
  reg_dwarf_sp = 31,
  reg_dwarf_pc = 32,
  reg_dwarf_w0 = 0,
  reg_dwarf_w1 = 1,
  reg_dwarf_w2 = 2,
  reg_dwarf_w3 = 3,
  reg_dwarf_w4 = 4,
  reg_dwarf_w5 = 5,
  reg_dwarf_w6 = 6,
  reg_dwarf_w7 = 7,
  reg_dwarf_w8 = 8,
  reg_dwarf_w9 = 9,
  reg_dwarf_w10 = 10,
  reg_dwarf_w11 = 11,
  reg_dwarf_w12 = 12,
  reg_dwarf_w13 = 13,
  reg_dwarf_w14 = 14,
  reg_dwarf_w15 = 15,
  reg_dwarf_w16 = 16,
  reg_dwarf_w17 = 17,
  reg_dwarf_w18 = 18,
  reg_dwarf_w19 = 19,
  reg_dwarf_w20 = 20,
  reg_dwarf_w21 = 21,
  reg_dwarf_w22 = 22,
  reg_dwarf_w23 = 23,
  reg_dwarf_w24 = 24,
  reg_dwarf_w25 = 25,
  reg_dwarf_w26 = 26,
  reg_dwarf_w27 = 27,
  reg_dwarf_w28 = 28,
  reg_dwarf_w29 = 29,
  reg_dwarf_w30 = 30,
  reg_dwarf_cpsr = 33,
};

enum /* gdb_reg */ {
  reg_gdb_x0 = 0,
  reg_gdb_x1 = 1,
  reg_gdb_x2 = 2,
  reg_gdb_x3 = 3,
  reg_gdb_x4 = 4,
  reg_gdb_x5 = 5,
  reg_gdb_x6 = 6,
  reg_gdb_x7 = 7,
  reg_gdb_x8 = 8,
  reg_gdb_x9 = 9,
  reg_gdb_x10 = 10,
  reg_gdb_x11 = 11,
  reg_gdb_x12 = 12,
  reg_gdb_x13 = 13,
  reg_gdb_x14 = 14,
  reg_gdb_x15 = 15,
  reg_gdb_x16 = 16,
  reg_gdb_x17 = 17,
  reg_gdb_x18 = 18,
  reg_gdb_x19 = 19,
  reg_gdb_x20 = 20,
  reg_gdb_x21 = 21,
  reg_gdb_x22 = 22,
  reg_gdb_x23 = 23,
  reg_gdb_x24 = 24,
  reg_gdb_x25 = 25,
  reg_gdb_x26 = 26,
  reg_gdb_x27 = 27,
  reg_gdb_x28 = 28,
  reg_gdb_x29 = 29,
  reg_gdb_x30 = 30,
  reg_gdb_sp = 31,
  reg_gdb_pc = 32,
  reg_gdb_w0 = 0,
  reg_gdb_w1 = 1,
  reg_gdb_w2 = 2,
  reg_gdb_w3 = 3,
  reg_gdb_w4 = 4,
  reg_gdb_w5 = 5,
  reg_gdb_w6 = 6,
  reg_gdb_w7 = 7,
  reg_gdb_w8 = 8,
  reg_gdb_w9 = 9,
  reg_gdb_w10 = 10,
  reg_gdb_w11 = 11,
  reg_gdb_w12 = 12,
  reg_gdb_w13 = 13,
  reg_gdb_w14 = 14,
  reg_gdb_w15 = 15,
  reg_gdb_w16 = 16,
  reg_gdb_w17 = 17,
  reg_gdb_w18 = 18,
  reg_gdb_w19 = 19,
  reg_gdb_w20 = 20,
  reg_gdb_w21 = 21,
  reg_gdb_w22 = 22,
  reg_gdb_w23 = 23,
  reg_gdb_w24 = 24,
  reg_gdb_w25 = 25,
  reg_gdb_w26 = 26,
  reg_gdb_w27 = 27,
  reg_gdb_w28 = 28,
  reg_gdb_w29 = 29,
  reg_gdb_w30 = 30,
  reg_gdb_cpsr = 25,
};

enum /* gcc_reg */ {
  reg_gcc_x0 = 0,
  reg_gcc_x1 = 1,
  reg_gcc_x2 = 2,
  reg_gcc_x3 = 3,
  reg_gcc_x4 = 4,
  reg_gcc_x5 = 5,
  reg_gcc_x6 = 6,
  reg_gcc_x7 = 7,
  reg_gcc_x8 = 8,
  reg_gcc_x9 = 9,
  reg_gcc_x10 = 10,
  reg_gcc_x11 = 11,
  reg_gcc_x12 = 12,
  reg_gcc_x13 = 13,
  reg_gcc_x14 = 14,
  reg_gcc_x15 = 15,
  reg_gcc_x16 = 16,
  reg_gcc_x17 = 17,
  reg_gcc_x18 = 18,
  reg_gcc_x19 = 19,
  reg_gcc_x20 = 20,
  reg_gcc_x21 = 21,
  reg_gcc_x22 = 22,
  reg_gcc_x23 = 23,
  reg_gcc_x24 = 24,
  reg_gcc_x25 = 25,
  reg_gcc_x26 = 26,
  reg_gcc_x27 = 27,
  reg_gcc_x28 = 28,
  reg_gcc_x29 = 29,
  reg_gcc_x30 = 30,
  reg_gcc_sp = 31,
  reg_gcc_pc = 32,
  reg_gcc_w0 = 0,
  reg_gcc_w1 = 1,
  reg_gcc_w2 = 2,
  reg_gcc_w3 = 3,
  reg_gcc_w4 = 4,
  reg_gcc_w5 = 5,
  reg_gcc_w6 = 6,
  reg_gcc_w7 = 7,
  reg_gcc_w8 = 8,
  reg_gcc_w9 = 9,
  reg_gcc_w10 = 10,
  reg_gcc_w11 = 11,
  reg_gcc_w12 = 12,
  reg_gcc_w13 = 13,
  reg_gcc_w14 = 14,
  reg_gcc_w15 = 15,
  reg_gcc_w16 = 16,
  reg_gcc_w17 = 17,
  reg_gcc_w18 = 18,
  reg_gcc_w19 = 19,
  reg_gcc_w20 = 20,
  reg_gcc_w21 = 21,
  reg_gcc_w22 = 22,
  reg_gcc_w23 = 23,
  reg_gcc_w24 = 24,
  reg_gcc_w25 = 25,
  reg_gcc_w26 = 26,
  reg_gcc_w27 = 27,
  reg_gcc_w28 = 28,
  reg_gcc_w29 = 29,
  reg_gcc_w30 = 30,
  reg_gcc_cpsr = 33,
};

enum /* lldb_reg */ {
  reg_lldb_x0 = 0,
  reg_lldb_x1 = 1,
  reg_lldb_x2 = 2,
  reg_lldb_x3 = 3,
  reg_lldb_x4 = 4,
  reg_lldb_x5 = 5,
  reg_lldb_x6 = 6,
  reg_lldb_x7 = 7,
  reg_lldb_x8 = 8,
  reg_lldb_x9 = 9,
  reg_lldb_x10 = 10,
  reg_lldb_x11 = 11,
  reg_lldb_x12 = 12,
  reg_lldb_x13 = 13,
  reg_lldb_x14 = 14,
  reg_lldb_x15 = 15,
  reg_lldb_x16 = 16,
  reg_lldb_x17 = 17,
  reg_lldb_x18 = 18,
  reg_lldb_x19 = 19,
  reg_lldb_x20 = 20,
  reg_lldb_x21 = 21,
  reg_lldb_x22 = 22,
  reg_lldb_x23 = 23,
  reg_lldb_x24 = 24,
  reg_lldb_x25 = 25,
  reg_lldb_x26 = 26,
  reg_lldb_x27 = 27,
  reg_lldb_x28 = 28,
  reg_lldb_x29 = 29,
  reg_lldb_x30 = 30,
  reg_lldb_sp = 31,
  reg_lldb_pc = 32,
  reg_lldb_w0 = 34,
  reg_lldb_w1 = 35,
  reg_lldb_w2 = 36,
  reg_lldb_w3 = 37,
  reg_lldb_w4 = 38,
  reg_lldb_w5 = 39,
  reg_lldb_w6 = 40,
  reg_lldb_w7 = 41,
  reg_lldb_w8 = 42,
  reg_lldb_w9 = 43,
  reg_lldb_w10 = 44,
  reg_lldb_w11 = 45,
  reg_lldb_w12 = 46,
  reg_lldb_w13 = 47,
  reg_lldb_w14 = 48,
  reg_lldb_w15 = 49,
  reg_lldb_w16 = 50,
  reg_lldb_w17 = 51,
  reg_lldb_w18 = 52,
  reg_lldb_w19 = 53,
  reg_lldb_w20 = 54,
  reg_lldb_w21 = 55,
  reg_lldb_w22 = 56,
  reg_lldb_w23 = 57,
  reg_lldb_w24 = 58,
  reg_lldb_w25 = 59,
  reg_lldb_w26 = 60,
  reg_lldb_w27 = 61,
  reg_lldb_w28 = 62,
  reg_lldb_w29 = 63,
  reg_lldb_w30 = 64,
  reg_lldb_cpsr = 33,
};

extern LLDBDescriptor const LLDB;
extern GDBDescriptor const GDB;
}
}
}
