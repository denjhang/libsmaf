/* lset_lfo @ 002450c0 144B */


/* YAMAHA::lset_lfo(unsigned char, unsigned char const*, unsigned char const*) */

void YAMAHA::lset_lfo(uchar param_1,uchar *param_2,uchar *param_3)

{
  undefined2 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_lprm_00567530;
  if ((uint)*param_3 != (uint)*param_2) {
    uVar1 = *(undefined2 *)(PTR_ltb_lfo_00567b10 + (long)(int)(uint)param_1 * 2);
    *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)*param_2 * 2 + 0x26) = uVar1;
    *(undefined2 *)(puVar2 + (ulong)*param_3 * 2 + 0x26) = uVar1;
    LSendCoef('\x01',param_2);
    LSendCoef('\x01',param_3);
    return;
  }
  *(undefined2 *)(PTR_lprm_00567530 + (long)(int)(uint)*param_3 * 2 + 0x26) =
       *(undefined2 *)(PTR_ltb_lfo_00567b10 + (long)(int)(uint)param_1 * 2);
  LSendCoef('\x01',param_2);
  return;
}

