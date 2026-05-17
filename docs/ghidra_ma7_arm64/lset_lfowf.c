/* lset_lfowf @ 00245420 756B */


/* YAMAHA::lset_lfowf(unsigned char, unsigned char, unsigned char const*, unsigned char const*) */

void YAMAHA::lset_lfowf(uchar param_1,uchar param_2,uchar *param_3,uchar *param_4)

{
  short sVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined2 uVar7;
  short sVar8;
  short local_c;
  short local_a;
  long local_8;
  
  puVar6 = PTR_lprm_00567530;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 == '\0') {
    bVar2 = *param_3;
    uVar7 = 0xf000;
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)*param_4 * 2 + 0x26) = 0x4000;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0x4000;
    bVar2 = param_4[1];
    bVar3 = param_3[1];
    bVar4 = param_3[2];
    *(undefined2 *)(puVar6 + (ulong)param_4[2] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar4 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0x7fff;
    bVar2 = param_3[6];
    bVar3 = param_4[6];
    bVar4 = param_3[7];
    *(undefined2 *)(puVar6 + (ulong)param_4[7] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar4 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0x7fff;
    bVar2 = param_3[3];
    *(undefined2 *)(puVar6 + (ulong)param_4[3] * 2 + 0x26) = 0x800;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0x800;
  }
  else {
    if (param_1 == '\x01') {
      uVar5 = *(ushort *)(PTR_ltb_lpf_00567118 + (long)(int)(uint)param_2 * 2);
      lset_flt10(uVar5,&local_c,&local_a);
      puVar6 = PTR_lprm_00567530;
      sVar1 = (short)uVar5 >> 4;
      bVar2 = param_3[1];
      local_c = local_c << 6;
      bVar3 = param_4[1];
      bVar4 = param_3[2];
      *(short *)(PTR_lprm_00567530 + (ulong)param_4[2] * 2 + 0x26) = local_c;
      sVar8 = 0x3fc0;
      *(short *)(puVar6 + (long)(int)(uint)bVar4 * 2 + 0x26) = local_c;
      *(short *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = local_c;
      *(short *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = local_c;
      bVar2 = param_3[6];
      bVar3 = param_4[6];
      bVar4 = param_3[7];
      *(short *)(puVar6 + (ulong)param_4[7] * 2 + 0x26) = local_a;
      *(short *)(puVar6 + (long)(int)(uint)bVar4 * 2 + 0x26) = local_a;
      *(short *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = local_a;
      *(short *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = local_a;
      puVar6 = PTR_lprm_00567530;
      if (sVar1 < 0xb) {
        sVar8 = sVar1 * 0x40 + 0x3d40;
      }
      bVar2 = *param_3;
      *(short *)(PTR_lprm_00567530 + (ulong)*param_4 * 2 + 0x26) = sVar8;
      *(short *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = sVar8;
      bVar2 = param_3[3];
      *(undefined2 *)(puVar6 + (ulong)param_4[3] * 2 + 0x26) = 0x2000;
      *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0x2000;
      bVar2 = param_3[4];
      *(undefined2 *)(puVar6 + (ulong)param_4[4] * 2 + 0x26) = 0xf000;
      *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0xf000;
      goto LAB_00245518;
    }
    bVar2 = *param_3;
    uVar7 = 0xf800;
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)*param_4 * 2 + 0x26) = 0x4000;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0x4000;
    bVar2 = param_3[1];
    bVar3 = param_4[1];
    bVar4 = param_3[2];
    *(undefined2 *)(puVar6 + (ulong)param_4[2] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar4 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0x7fff;
    bVar2 = param_3[6];
    bVar3 = param_4[6];
    bVar4 = param_3[7];
    *(undefined2 *)(puVar6 + (ulong)param_4[7] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar4 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar3 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0x7fff;
    bVar2 = param_3[3];
    *(undefined2 *)(puVar6 + (ulong)param_4[3] * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = 0x7fff;
  }
  bVar2 = param_3[4];
  *(undefined2 *)(puVar6 + (ulong)param_4[4] * 2 + 0x26) = uVar7;
  *(undefined2 *)(puVar6 + (long)(int)(uint)bVar2 * 2 + 0x26) = uVar7;
LAB_00245518:
  LSendCoef('\b',param_3);
  LSendCoef('\b',param_4);
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

