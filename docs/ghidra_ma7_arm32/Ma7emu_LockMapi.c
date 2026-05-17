/* Ma7emu_LockMapi @ 0003056c 10B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_LockMapi() */

void Ma7emu_LockMapi(void)

{
  CM7_EmuSmw7App::EmuLockMapi(*(CM7_EmuSmw7App **)(DAT_00030578 + 0x30572));
  return;
}

