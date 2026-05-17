/* lset_lfo2 @ 00245714 1112B */


/* YAMAHA::lset_lfo2(unsigned char, unsigned char const*) */

void YAMAHA::lset_lfo2(uchar param_1,uchar *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  short local_c;
  short local_a;
  long local_8;
  
  puVar7 = PTR_ltavm2_lfo_00567968;
  puVar6 = PTR_lprm_00567530;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 == '\0') {
    uVar1 = (int)*(short *)(PTR_ltb_cfreq_fact_00567440 +
                           (long)(int)(uint)*(ushort *)(PTR_lprm_00567530 + 0x306) * 2) +
            (int)(((int)*(short *)(PTR_ltb_cfreq_fact_00567440 +
                                  (long)(int)(*(ushort *)(PTR_lprm_00567530 + 0x306) + 0x10) * 2) -
                  (int)*(short *)(PTR_ltb_cfreq_fact_00567440 +
                                 (long)(int)(uint)*(ushort *)(PTR_lprm_00567530 + 0x306) * 2)) *
                 (uint)*(ushort *)(PTR_lprm_00567530 + 0x308)) / 0x7f;
    *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm2_lfo_00567968[1] * 2 + 0x26) =
         (short)((int)uVar1 >> 6);
    if ((int)uVar1 < 1) {
      *(undefined2 *)(puVar6 + (ulong)(byte)*puVar7 * 2 + 0x26) = 0;
    }
    else {
      uVar8 = (ulong)(byte)*puVar7;
      if (uVar1 == 1) {
        *(undefined2 *)(puVar6 + uVar8 * 2 + 0x26) = 0xc0;
      }
      else if ((int)uVar1 < 4) {
        *(ushort *)(puVar6 + uVar8 * 2 + 0x26) = (ushort)((uVar1 & 3) << 5) | 0x100;
      }
      else if ((int)uVar1 < 8) {
        *(ushort *)(puVar6 + uVar8 * 2 + 0x26) = (ushort)((uVar1 & 7) << 4) | 0x180;
      }
      else if ((int)uVar1 < 0x10) {
        *(ushort *)(puVar6 + uVar8 * 2 + 0x26) = (ushort)((uVar1 & 0xf) << 3) | 0x200;
      }
      else if ((int)uVar1 < 0x20) {
        *(ushort *)(puVar6 + uVar8 * 2 + 0x26) = (ushort)((uVar1 & 0x1f) << 2) | 0x280;
      }
      else {
        *(ushort *)(puVar6 + uVar8 * 2 + 0x26) = (ushort)((uVar1 & 0x3f) << 1) | 0x300;
      }
    }
    puVar6 = PTR_lprm_00567530;
    bVar3 = param_2[1];
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)param_2[2] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0x7fff;
    bVar3 = param_2[6];
    *(undefined2 *)(puVar6 + (ulong)param_2[7] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (ulong)param_2[3] * 2 + 0x26) = 0x1000;
    *(undefined2 *)(puVar6 + (ulong)param_2[4] * 2 + 0x26) = 0xe000;
  }
  else if (param_1 == '\x01') {
    uVar4 = *(ushort *)(PTR_lprm_00567530 + 0x306);
    uVar5 = *(ushort *)(PTR_lprm_00567530 + 0x308);
    bVar3 = PTR_ltavm2_lfo_00567968[1];
    iVar2 = (int)*(short *)(PTR_ltb_lfo_00567b10 + (long)(int)(uint)uVar4 * 2) +
            (int)(((int)*(short *)(PTR_ltb_lfo_00567b10 + (long)(int)(uVar4 + 0x10) * 2) -
                  (int)*(short *)(PTR_ltb_lfo_00567b10 + (long)(int)(uint)uVar4 * 2)) * (uint)uVar5)
            / 0x7f;
    *(short *)(PTR_lprm_00567530 + (ulong)(byte)*PTR_ltavm2_lfo_00567968 * 2 + 0x26) = (short)iVar2;
    *(short *)(puVar6 + (ulong)bVar3 * 2 + 0x26) = (short)(iVar2 >> 6);
    lset_flt10(*(ushort *)
                (PTR_ltb_lpf_00567118 + (ulong)((uint)uVar4 + ((uint)uVar5 * 0x10) / 0x7f) * 2),
               &local_c,&local_a);
    bVar3 = param_2[1];
    *(short *)(puVar6 + (ulong)param_2[2] * 2 + 0x26) = local_c << 6;
    *(short *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = local_c << 6;
    bVar3 = param_2[6];
    *(short *)(puVar6 + (ulong)param_2[7] * 2 + 0x26) = local_a;
    *(short *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = local_a;
    *(undefined2 *)(puVar6 + (ulong)param_2[3] * 2 + 0x26) = 0x4000;
    *(undefined2 *)(puVar6 + (ulong)param_2[4] * 2 + 0x26) = 0xe000;
  }
  else {
    uVar1 = (int)*(short *)(PTR_ltb_cfreq_fact_00567440 +
                           (long)(int)(uint)*(ushort *)(PTR_lprm_00567530 + 0x306) * 2) +
            (int)(((int)*(short *)(PTR_ltb_cfreq_fact_00567440 +
                                  (long)(int)(*(ushort *)(PTR_lprm_00567530 + 0x306) + 0x10) * 2) -
                  (int)*(short *)(PTR_ltb_cfreq_fact_00567440 +
                                 (long)(int)(uint)*(ushort *)(PTR_lprm_00567530 + 0x306) * 2)) *
                 (uint)*(ushort *)(PTR_lprm_00567530 + 0x308)) / 0x7f;
    *(short *)(PTR_lprm_00567530 + (ulong)(byte)PTR_ltavm2_lfo_00567968[1] * 2 + 0x26) =
         (short)((int)uVar1 >> 6);
    if ((int)uVar1 < 1) {
      *(undefined2 *)(puVar6 + (ulong)(byte)*puVar7 * 2 + 0x26) = 0;
    }
    else if (uVar1 == 1) {
      *(undefined2 *)(puVar6 + (ulong)(byte)*puVar7 * 2 + 0x26) = 0xc0;
    }
    else {
      uVar8 = (ulong)(byte)*puVar7;
      if ((int)uVar1 < 4) {
        *(ushort *)(puVar6 + uVar8 * 2 + 0x26) = (ushort)((uVar1 & 3) << 5) | 0x100;
      }
      else if ((int)uVar1 < 8) {
        *(ushort *)(puVar6 + uVar8 * 2 + 0x26) = (ushort)((uVar1 & 7) << 4) | 0x180;
      }
      else if ((int)uVar1 < 0x10) {
        *(ushort *)(puVar6 + uVar8 * 2 + 0x26) = (ushort)((uVar1 & 0xf) << 3) | 0x200;
      }
      else if ((int)uVar1 < 0x20) {
        *(ushort *)(puVar6 + uVar8 * 2 + 0x26) = (ushort)((uVar1 & 0x1f) << 2) | 0x280;
      }
      else {
        *(ushort *)(puVar6 + uVar8 * 2 + 0x26) = (ushort)((uVar1 & 0x3f) << 1) | 0x300;
      }
    }
    puVar6 = PTR_lprm_00567530;
    bVar3 = param_2[1];
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)param_2[2] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0x7fff;
    bVar3 = param_2[6];
    *(undefined2 *)(puVar6 + (ulong)param_2[7] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (ulong)param_2[3] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (ulong)param_2[4] * 2 + 0x26) = 0xf800;
  }
  LSendCoef('\a',param_2 + 1);
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

