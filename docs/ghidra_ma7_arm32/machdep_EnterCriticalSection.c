/* machdep_EnterCriticalSection @ 00069b64 4B */


/* YAMAHA::machdep_EnterCriticalSection() */

void YAMAHA::machdep_EnterCriticalSection(void)

{
  CM7_EmuSmw7App::EmuLockSmwApi(*(CM7_EmuSmw7App **)(Ma7emu_LockSmwApi + DAT_000305a8 + 6));
  return;
}

