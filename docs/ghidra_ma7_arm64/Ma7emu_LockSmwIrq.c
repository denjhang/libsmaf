/* Ma7emu_LockSmwIrq @ 0012c114 12B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_LockSmwIrq() */

void Ma7emu_LockSmwIrq(void)

{
  CM7_EmuSmw7App::EmuLockSmwIrq((CM7_EmuSmw7App *)PTR_theApp_005675c8);
  return;
}

