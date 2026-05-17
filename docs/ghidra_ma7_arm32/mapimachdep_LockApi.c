/* mapimachdep_LockApi @ 00073988 4B */


/* YAMAHA::mapimachdep_LockApi() */

void YAMAHA::mapimachdep_LockApi(void)

{
  CM7_EmuSmw7App::EmuLockMapi(*(CM7_EmuSmw7App **)(Ma7emu_LockMapi + DAT_00030578 + 6));
  return;
}

