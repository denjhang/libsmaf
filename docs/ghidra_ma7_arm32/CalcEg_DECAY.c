/* CalcEg_DECAY @ 00052c5c 74B */


/* ARM::CLpf::CalcEg_DECAY(ARM::CLpf*) */

void ARM::CLpf::CalcEg_DECAY(CLpf *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = DAT_00052ca8 + 0x52c68;
  iVar4 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x10);
  iVar1 = DAT_00052cac;
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x60);
    if (iVar5 < iVar2) {
      iVar4 = iVar4 + iVar5;
      if (iVar4 < iVar2) {
LAB_00052c92:
        *(int *)(param_1 + 0xc) = iVar4;
        return;
      }
    }
    else {
      if (iVar5 <= iVar2) {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + DAT_00052cac);
        return;
      }
      iVar4 = iVar5 - iVar4;
      if (iVar2 < iVar4) goto LAB_00052c92;
    }
    *(int *)(param_1 + 0xc) = iVar2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + iVar1);
  }
  return;
}

