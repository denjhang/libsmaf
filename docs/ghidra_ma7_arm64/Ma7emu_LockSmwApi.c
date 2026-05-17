/* Ma7emu_LockSmwApi @ 0012c0ec 12B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_LockSmwApi() */

void Ma7emu_LockSmwApi(void)

{
  CM7_EmuSmw7App::EmuLockSmwApi((CM7_EmuSmw7App *)PTR_theApp_005675c8);
  return;
}

