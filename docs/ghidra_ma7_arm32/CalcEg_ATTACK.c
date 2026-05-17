/* CalcEg_ATTACK @ 00052c08 74B */


/* ARM::CLpf::CalcEg_ATTACK(ARM::CLpf*) */

void ARM::CLpf::CalcEg_ATTACK(CLpf *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = DAT_00052c54 + 0x52c14;
  iVar4 = *(int *)(param_1 + 0x44);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x10);
  iVar1 = DAT_00052c58;
  if (iVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x5c);
    if (iVar5 < iVar2) {
      iVar4 = iVar4 + iVar5;
      if (iVar4 < iVar2) {
LAB_00052c3e:
        *(int *)(param_1 + 0xc) = iVar4;
        return;
      }
    }
    else {
      if (iVar5 <= iVar2) {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + DAT_00052c58);
        return;
      }
      iVar4 = iVar5 - iVar4;
      if (iVar2 < iVar4) goto LAB_00052c3e;
    }
    *(int *)(param_1 + 0xc) = iVar2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar3 + iVar1);
  }
  return;
}

