/* CalcEg_DEAD @ 00052d10 14B */


/* ARM::CLpf::CalcEg_DEAD(ARM::CLpf*) */

void ARM::CLpf::CalcEg_DEAD(CLpf *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x10);
  return;
}

