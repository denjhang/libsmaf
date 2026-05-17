/* lcal_pitch @ 0024c370 184B */


/* YAMAHA::lcal_pitch(short) */

ulong YAMAHA::lcal_pitch(short param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)param_1;
  uVar1 = *(ushort *)(PTR_lprm_00567530 + 0x306);
  if (uVar1 == 0x40) {
    return (long)((ulong)(uint)(*(int *)(PTR_ltb_fine_wgt_005679e0 + (long)(iVar2 + -0xe) * 4) *
                               0x1e00) << 0x21) >> 0x30;
  }
  if (uVar1 < 0x40) {
    iVar3 = *(int *)(PTR_ltb_pi_dep_00567148 + (long)(int)(uVar1 - 0x28) * 4);
    iVar4 = (0x1e00 - iVar3) * *(int *)(PTR_ltb_fine_wgt_005679e0 + (long)(iVar2 + -0xe) * 4);
    if (iVar2 < 0x40) {
LAB_0024c3fc:
      return (ulong)(uint)(int)(short)((short)iVar3 + (short)(iVar4 >> 0xf));
    }
  }
  else {
    iVar3 = *(int *)(PTR_ltb_pi_dep_00567148 + (long)(int)(uVar1 - 0x28) * 4);
    iVar4 = (0x1e00 - iVar3) * *(int *)(PTR_ltb_fine_wgt_005679e0 + (long)(iVar2 + -0xe) * 4);
    if (0x40 < iVar2) goto LAB_0024c3fc;
  }
  return (ulong)(uint)(int)(short)((short)iVar3 - (short)(iVar4 >> 0xf));
}

