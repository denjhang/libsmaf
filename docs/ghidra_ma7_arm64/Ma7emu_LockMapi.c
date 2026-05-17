/* Ma7emu_LockMapi @ 0012c0c4 12B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_LockMapi() */

void Ma7emu_LockMapi(void)

{
  CM7_EmuSmw7App::EmuLockMapi((CM7_EmuSmw7App *)PTR_theApp_005675c8);
  return;
}

