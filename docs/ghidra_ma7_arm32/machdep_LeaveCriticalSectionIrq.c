/* machdep_LeaveCriticalSectionIrq @ 00069b70 4B */


/* YAMAHA::machdep_LeaveCriticalSectionIrq() */

void YAMAHA::machdep_LeaveCriticalSectionIrq(void)

{
  CM7_EmuSmw7App::EmuUnlockSmwIrq(*(CM7_EmuSmw7App **)(Ma7emu_UnlockSmwIrq + DAT_000305f0 + 6));
  return;
}

