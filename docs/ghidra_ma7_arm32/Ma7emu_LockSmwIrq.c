/* Ma7emu_LockSmwIrq @ 000305cc 10B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_LockSmwIrq() */

void Ma7emu_LockSmwIrq(void)

{
  CM7_EmuSmw7App::EmuLockSmwIrq(*(CM7_EmuSmw7App **)(DAT_000305d8 + 0x305d2));
  return;
}

