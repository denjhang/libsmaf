/* CalcEg_ATTACK @ 0015a1d8 112B */


/* ARM::CLpf::CalcEg_ATTACK(ARM::CLpf*) */

void ARM::CLpf::CalcEg_ATTACK(CLpf *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x34);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar1 < iVar2) {
      iVar3 = iVar3 + iVar1;
      if (iVar3 < iVar2) {
LAB_0015a230:
        *(int *)(param_1 + 0x10) = iVar3;
        return;
      }
    }
    else {
      if (iVar1 <= iVar2) {
        *(undefined **)(param_1 + 8) = PTR_CalcEg_DECAY_00567c00;
        return;
      }
      iVar3 = iVar1 - iVar3;
      if (iVar2 < iVar3) goto LAB_0015a230;
    }
    *(int *)(param_1 + 0x10) = iVar2;
    *(undefined **)(param_1 + 8) = PTR_CalcEg_DECAY_00567c00;
  }
  return;
}

