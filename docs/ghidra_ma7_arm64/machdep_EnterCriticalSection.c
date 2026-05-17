/* machdep_EnterCriticalSection @ 0017c7cc 4B */


/* YAMAHA::machdep_EnterCriticalSection() */

void YAMAHA::machdep_EnterCriticalSection(void)

{
  CM7_EmuSmw7App::EmuLockSmwApi((CM7_EmuSmw7App *)PTR_theApp_005675c8);
  return;
}

