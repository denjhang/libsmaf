/* CalcEg_DECAY @ 0015a248 112B */


/* ARM::CLpf::CalcEg_DECAY(ARM::CLpf*) */

void ARM::CLpf::CalcEg_DECAY(CLpf *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x34);
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = *(int *)(param_1 + 0x7c);
    if (iVar1 < iVar2) {
      iVar3 = iVar3 + iVar1;
      if (iVar3 < iVar2) {
LAB_0015a2a0:
        *(int *)(param_1 + 0x10) = iVar3;
        return;
      }
    }
    else {
      if (iVar1 <= iVar2) {
        *(undefined **)(param_1 + 8) = PTR_CalcEg_SUSTAIN_00567438;
        return;
      }
      iVar3 = iVar1 - iVar3;
      if (iVar2 < iVar3) goto LAB_0015a2a0;
    }
    *(int *)(param_1 + 0x10) = iVar2;
    *(undefined **)(param_1 + 8) = PTR_CalcEg_SUSTAIN_00567438;
  }
  return;
}

