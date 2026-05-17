/* mapimachdep_UnlockApi @ 0007398c 4B */


/* YAMAHA::mapimachdep_UnlockApi() */

void YAMAHA::mapimachdep_UnlockApi(void)

{
  CM7_EmuSmw7App::EmuUnlockMapi(*(CM7_EmuSmw7App **)(Ma7emu_UnlockMapi + DAT_00030590 + 6));
  return;
}

