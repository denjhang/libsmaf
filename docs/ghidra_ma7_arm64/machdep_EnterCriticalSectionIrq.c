/* machdep_EnterCriticalSectionIrq @ 0017c7d4 4B */


/* YAMAHA::machdep_EnterCriticalSectionIrq() */

void YAMAHA::machdep_EnterCriticalSectionIrq(void)

{
  CM7_EmuSmw7App::EmuLockSmwIrq((CM7_EmuSmw7App *)PTR_theApp_005675c8);
  return;
}

