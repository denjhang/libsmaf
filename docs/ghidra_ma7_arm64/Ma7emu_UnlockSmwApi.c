/* Ma7emu_UnlockSmwApi @ 0012c100 12B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_UnlockSmwApi() */

void Ma7emu_UnlockSmwApi(void)

{
  CM7_EmuSmw7App::EmuUnlockSmwApi((CM7_EmuSmw7App *)PTR_theApp_005675c8);
  return;
}

