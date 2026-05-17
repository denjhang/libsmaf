/* CalcEg_RELEASE @ 0015a2fc 84B */


/* ARM::CLpf::CalcEg_RELEASE(ARM::CLpf*) */

void ARM::CLpf::CalcEg_RELEASE(CLpf *param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x34);
  if ((param_1[0xa4] == (CLpf)0x0) || (param_1[0x52] == (CLpf)0x0)) {
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 < *(int *)(param_1 + 0x84)) {
      *(int *)(param_1 + 0x10) = iVar1 + *(int *)(param_1 + 0x6c);
      return;
    }
    if (*(int *)(param_1 + 0x84) < iVar1) {
      *(int *)(param_1 + 0x10) = iVar1 - *(int *)(param_1 + 0x6c);
    }
  }
  return;
}

