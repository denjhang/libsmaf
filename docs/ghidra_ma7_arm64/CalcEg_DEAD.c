/* CalcEg_DEAD @ 0015a350 24B */


/* ARM::CLpf::CalcEg_DEAD(ARM::CLpf*) */

void ARM::CLpf::CalcEg_DEAD(CLpf *param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x34);
  return;
}

