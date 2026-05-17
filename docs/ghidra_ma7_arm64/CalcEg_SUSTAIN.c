/* CalcEg_SUSTAIN @ 0015a2b8 68B */


/* ARM::CLpf::CalcEg_SUSTAIN(ARM::CLpf*) */

void ARM::CLpf::CalcEg_SUSTAIN(CLpf *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x80) <= iVar1) {
    if (*(int *)(param_1 + 0x80) < iVar1) {
      *(int *)(param_1 + 0x10) = iVar1 - *(int *)(param_1 + 0x68);
    }
    return;
  }
  *(int *)(param_1 + 0x10) = iVar1 + *(int *)(param_1 + 0x68);
  return;
}

