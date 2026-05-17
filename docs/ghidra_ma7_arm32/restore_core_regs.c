/* restore_core_regs @ 0011f9f4 24B */


undefined8 restore_core_regs(undefined8 *param_1)

{
  *(undefined4 *)(*(int *)((int)param_1 + 0x34) + -4) = *(undefined4 *)((int)param_1 + 0x3c);
  return *param_1;
}

