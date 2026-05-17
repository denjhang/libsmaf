/* machdep_LeaveCriticalSectionIrq @ 0017c7d8 4B */


/* YAMAHA::machdep_LeaveCriticalSectionIrq() */

void YAMAHA::machdep_LeaveCriticalSectionIrq(void)

{
  CM7_EmuSmw7App::EmuUnlockSmwIrq((CM7_EmuSmw7App *)PTR_theApp_005675c8);
  return;
}

