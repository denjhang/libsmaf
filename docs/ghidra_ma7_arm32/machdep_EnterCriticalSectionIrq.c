/* machdep_EnterCriticalSectionIrq @ 00069b6c 4B */


/* YAMAHA::machdep_EnterCriticalSectionIrq() */

void YAMAHA::machdep_EnterCriticalSectionIrq(void)

{
  CM7_EmuSmw7App::EmuLockSmwIrq(*(CM7_EmuSmw7App **)(Ma7emu_LockSmwIrq + DAT_000305d8 + 6));
  return;
}

