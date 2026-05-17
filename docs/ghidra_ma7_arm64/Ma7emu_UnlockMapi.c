/* Ma7emu_UnlockMapi @ 0012c0d8 12B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_UnlockMapi() */

void Ma7emu_UnlockMapi(void)

{
  CM7_EmuSmw7App::EmuUnlockMapi((CM7_EmuSmw7App *)PTR_theApp_005675c8);
  return;
}

