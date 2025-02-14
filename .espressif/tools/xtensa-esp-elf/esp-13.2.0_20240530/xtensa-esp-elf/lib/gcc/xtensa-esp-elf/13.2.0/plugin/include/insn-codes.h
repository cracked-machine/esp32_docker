/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_nothing = 0,
  CODE_FOR_addsi3 = 1,
  CODE_FOR_addsf3 = 3,
  CODE_FOR_subsi3 = 4,
  CODE_FOR_subsf3 = 6,
  CODE_FOR_mulsi3_highpart = 7,
  CODE_FOR_umulsi3_highpart = 8,
  CODE_FOR_mulsi3 = 9,
  CODE_FOR_mulhisi3 = 10,
  CODE_FOR_umulhisi3 = 11,
  CODE_FOR_muladdhisi = 12,
  CODE_FOR_mulsubhisi = 13,
  CODE_FOR_mulsf3 = 14,
  CODE_FOR_fmasf4 = 15,
  CODE_FOR_fnmasf4 = 16,
  CODE_FOR_divsi3 = 17,
  CODE_FOR_udivsi3 = 18,
  CODE_FOR_modsi3 = 19,
  CODE_FOR_umodsi3 = 20,
  CODE_FOR_abssi2 = 21,
  CODE_FOR_abssf2 = 22,
  CODE_FOR_sminsi3 = 23,
  CODE_FOR_uminsi3 = 24,
  CODE_FOR_smaxsi3 = 25,
  CODE_FOR_umaxsi3 = 26,
  CODE_FOR_clrsbsi2 = 29,
  CODE_FOR_clzsi2 = 30,
  CODE_FOR_bswaphi2 = 31,
  CODE_FOR_bswapsi2_internal = 32,
  CODE_FOR_negsi2 = 33,
  CODE_FOR_one_cmplsi2 = 34,
  CODE_FOR_negsf2 = 35,
  CODE_FOR_andsi3 = 36,
  CODE_FOR_iorsi3 = 41,
  CODE_FOR_xorsi3_internal = 42,
  CODE_FOR_zero_extendhisi2 = 44,
  CODE_FOR_zero_extendqisi2 = 45,
  CODE_FOR_extendhisi2_internal = 46,
  CODE_FOR_extendqisi2_internal = 47,
  CODE_FOR_extvsi_internal = 48,
  CODE_FOR_extzvsi_internal = 49,
  CODE_FOR_fix_truncsfsi2 = 50,
  CODE_FOR_fixuns_truncsfsi2 = 51,
  CODE_FOR_floatsisf2 = 52,
  CODE_FOR_floatunssisf2 = 53,
  CODE_FOR_movdi_internal = 54,
  CODE_FOR_movsi_internal = 55,
  CODE_FOR_movhi_internal = 56,
  CODE_FOR_movqi_internal = 57,
  CODE_FOR_movsf_internal = 58,
  CODE_FOR_movdf_internal = 63,
  CODE_FOR_ashlsi3_internal = 64,
  CODE_FOR_ashrsi3 = 65,
  CODE_FOR_lshrsi3 = 66,
  CODE_FOR_rotlsi3 = 78,
  CODE_FOR_rotrsi3 = 79,
  CODE_FOR_zero_cost_loop_start = 89,
  CODE_FOR_zero_cost_loop_end = 90,
  CODE_FOR_loop_end = 91,
  CODE_FOR_movsicc_internal0 = 92,
  CODE_FOR_movsicc_internal1 = 93,
  CODE_FOR_movsfcc_internal0 = 94,
  CODE_FOR_movsfcc_internal1 = 95,
  CODE_FOR_seq_sf = 96,
  CODE_FOR_slt_sf = 97,
  CODE_FOR_sle_sf = 98,
  CODE_FOR_suneq_sf = 99,
  CODE_FOR_sunlt_sf = 100,
  CODE_FOR_sunle_sf = 101,
  CODE_FOR_sunordered_sf = 102,
  CODE_FOR_jump = 103,
  CODE_FOR_indirect_jump_internal = 104,
  CODE_FOR_tablejump_internal = 105,
  CODE_FOR_call_internal = 106,
  CODE_FOR_call_value_internal = 107,
  CODE_FOR_sibcall_internal = 108,
  CODE_FOR_sibcall_value_internal = 109,
  CODE_FOR_entry = 110,
  CODE_FOR_return = 111,
  CODE_FOR_nop = 112,
  CODE_FOR_eh_set_a0_windowed = 113,
  CODE_FOR_eh_set_a0_call0 = 114,
  CODE_FOR_blockage = 115,
  CODE_FOR_trap = 117,
  CODE_FOR_set_frame_ptr = 118,
  CODE_FOR_get_thread_pointersi = 120,
  CODE_FOR_set_thread_pointersi = 121,
  CODE_FOR_tls_func = 122,
  CODE_FOR_tls_arg = 123,
  CODE_FOR_tls_call = 124,
  CODE_FOR_sync_lock_releasesi = 128,
  CODE_FOR_sync_compare_and_swapsi = 129,
  CODE_FOR_mulsidi3 = 132,
  CODE_FOR_umulsidi3 = 133,
  CODE_FOR_ctzsi2 = 134,
  CODE_FOR_ffssi2 = 135,
  CODE_FOR_bswapsi2 = 136,
  CODE_FOR_bswapdi2 = 137,
  CODE_FOR_xorsi3 = 138,
  CODE_FOR_extendhisi2 = 139,
  CODE_FOR_extendqisi2 = 140,
  CODE_FOR_extvsi = 141,
  CODE_FOR_extzvsi = 142,
  CODE_FOR_movdi = 143,
  CODE_FOR_movsi = 144,
  CODE_FOR_movhi = 145,
  CODE_FOR_movqi = 146,
  CODE_FOR_reloadhi_literal = 147,
  CODE_FOR_reloadqi_literal = 148,
  CODE_FOR_movsf = 149,
  CODE_FOR_movdf = 150,
  CODE_FOR_cpymemsi = 151,
  CODE_FOR_setmemsi = 152,
  CODE_FOR_ashlsi3 = 153,
  CODE_FOR_cbranchsi4 = 154,
  CODE_FOR_cbranchsf4 = 155,
  CODE_FOR_doloop_end = 156,
  CODE_FOR_cstoresi4 = 157,
  CODE_FOR_cstoresf4 = 158,
  CODE_FOR_movsicc = 159,
  CODE_FOR_movsfcc = 160,
  CODE_FOR_indirect_jump = 161,
  CODE_FOR_tablejump = 162,
  CODE_FOR_sym_PLT = 163,
  CODE_FOR_call = 164,
  CODE_FOR_call_value = 165,
  CODE_FOR_sibcall = 166,
  CODE_FOR_sibcall_value = 167,
  CODE_FOR_untyped_call = 168,
  CODE_FOR_allocate_stack = 169,
  CODE_FOR_prologue = 170,
  CODE_FOR_epilogue = 171,
  CODE_FOR_sibcall_epilogue = 172,
  CODE_FOR_nonlocal_goto = 173,
  CODE_FOR_eh_return = 174,
  CODE_FOR_frame_blockage = 175,
  CODE_FOR_sym_TPOFF = 176,
  CODE_FOR_sym_DTPOFF = 177,
  CODE_FOR_memory_barrier = 178,
  CODE_FOR_sync_compare_and_swaphi = 179,
  CODE_FOR_sync_compare_and_swapqi = 180,
  CODE_FOR_sync_lock_test_and_sethi = 181,
  CODE_FOR_sync_lock_test_and_setqi = 182,
  CODE_FOR_sync_andhi = 183,
  CODE_FOR_sync_iorhi = 184,
  CODE_FOR_sync_xorhi = 185,
  CODE_FOR_sync_addhi = 186,
  CODE_FOR_sync_subhi = 187,
  CODE_FOR_sync_nandhi = 188,
  CODE_FOR_sync_andqi = 189,
  CODE_FOR_sync_iorqi = 190,
  CODE_FOR_sync_xorqi = 191,
  CODE_FOR_sync_addqi = 192,
  CODE_FOR_sync_subqi = 193,
  CODE_FOR_sync_nandqi = 194,
  CODE_FOR_sync_old_andhi = 195,
  CODE_FOR_sync_old_iorhi = 196,
  CODE_FOR_sync_old_xorhi = 197,
  CODE_FOR_sync_old_addhi = 198,
  CODE_FOR_sync_old_subhi = 199,
  CODE_FOR_sync_old_nandhi = 200,
  CODE_FOR_sync_old_andqi = 201,
  CODE_FOR_sync_old_iorqi = 202,
  CODE_FOR_sync_old_xorqi = 203,
  CODE_FOR_sync_old_addqi = 204,
  CODE_FOR_sync_old_subqi = 205,
  CODE_FOR_sync_old_nandqi = 206,
  CODE_FOR_sync_new_andhi = 207,
  CODE_FOR_sync_new_iorhi = 208,
  CODE_FOR_sync_new_xorhi = 209,
  CODE_FOR_sync_new_addhi = 210,
  CODE_FOR_sync_new_subhi = 211,
  CODE_FOR_sync_new_nandhi = 212,
  CODE_FOR_sync_new_andqi = 213,
  CODE_FOR_sync_new_iorqi = 214,
  CODE_FOR_sync_new_xorqi = 215,
  CODE_FOR_sync_new_addqi = 216,
  CODE_FOR_sync_new_subqi = 217,
  CODE_FOR_sync_new_nandqi = 218
};

const unsigned int NUM_INSN_CODES = 219;
#endif /* GCC_INSN_CODES_H */
