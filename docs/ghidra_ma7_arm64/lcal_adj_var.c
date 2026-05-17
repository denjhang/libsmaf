/* lcal_adj_var @ 0024ebc8 68B */


/* YAMAHA::lcal_adj_var(short) */

ulong YAMAHA::lcal_adj_var(short param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = (ulong)((int)param_1 *
                 (uint)(byte)PTR_ltb_var_adj_00567660
                             [(ulong)*(uint *)(PTR_lprm_00567530 + 0xc) +
                              (ulong)(byte)PTR_lprm_00567530[9] * 0xf]) << 0x2a;
  uVar2 = lVar1 >> 0x30;
  if ((short)((ulong)lVar1 >> 0x30) == 0) {
    uVar2 = (ulong)(1 < *(ushort *)(PTR_lprm_00567530 + 0x318));
  }
  return uVar2;
}

