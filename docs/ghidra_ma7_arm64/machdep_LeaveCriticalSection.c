/* machdep_LeaveCriticalSection @ 0017c7d0 4B */


/* YAMAHA::machdep_LeaveCriticalSection() */

void YAMAHA::machdep_LeaveCriticalSection(void)

{
  CM7_EmuSmw7App::EmuUnlockSmwApi((CM7_EmuSmw7App *)PTR_theApp_005675c8);
  return;
}

