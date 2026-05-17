/* Ma7emu_UnlockSmwIrq @ 0012c128 12B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_UnlockSmwIrq() */

void Ma7emu_UnlockSmwIrq(void)

{
  CM7_EmuSmw7App::EmuUnlockSmwIrq((CM7_EmuSmw7App *)PTR_theApp_005675c8);
  return;
}

