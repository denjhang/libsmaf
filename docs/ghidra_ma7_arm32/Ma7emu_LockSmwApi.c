/* Ma7emu_LockSmwApi @ 0003059c 10B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_LockSmwApi() */

void Ma7emu_LockSmwApi(void)

{
  CM7_EmuSmw7App::EmuLockSmwApi(*(CM7_EmuSmw7App **)(DAT_000305a8 + 0x305a2));
  return;
}

