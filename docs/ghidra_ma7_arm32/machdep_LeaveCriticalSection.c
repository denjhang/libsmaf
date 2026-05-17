/* machdep_LeaveCriticalSection @ 00069b68 4B */


/* YAMAHA::machdep_LeaveCriticalSection() */

void YAMAHA::machdep_LeaveCriticalSection(void)

{
  CM7_EmuSmw7App::EmuUnlockSmwApi(*(CM7_EmuSmw7App **)(Ma7emu_UnlockSmwApi + DAT_000305c0 + 6));
  return;
}

