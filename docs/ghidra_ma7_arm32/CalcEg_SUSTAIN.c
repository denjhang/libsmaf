/* CalcEg_SUSTAIN @ 00052cb0 48B */


/* ARM::CLpf::CalcEg_SUSTAIN(ARM::CLpf*) */

void ARM::CLpf::CalcEg_SUSTAIN(CLpf *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x10);
  if (iVar1 < *(int *)(param_1 + 100)) {
    *(int *)(param_1 + 0xc) = iVar1 + *(int *)(param_1 + 0x4c);
    return;
  }
  if (*(int *)(param_1 + 100) < iVar1) {
    *(int *)(param_1 + 0xc) = iVar1 - *(int *)(param_1 + 0x4c);
  }
  return;
}

