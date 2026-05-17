/* CalcEg_RELEASE @ 00052ce0 48B */


/* ARM::CLpf::CalcEg_RELEASE(ARM::CLpf*) */

void ARM::CLpf::CalcEg_RELEASE(CLpf *param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x10);
  if ((param_1[0x88] == (CLpf)0x0) || (param_1[0x36] == (CLpf)0x0)) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < *(int *)(param_1 + 0x68)) {
      *(int *)(param_1 + 0xc) = iVar1 + *(int *)(param_1 + 0x50);
      return;
    }
    if (*(int *)(param_1 + 0x68) < iVar1) {
      *(int *)(param_1 + 0xc) = iVar1 - *(int *)(param_1 + 0x50);
    }
  }
  return;
}

