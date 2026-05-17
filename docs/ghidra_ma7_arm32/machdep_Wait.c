/* machdep_Wait @ 0006681c 4B */


/* YAMAHA::machdep_Wait(unsigned int) */

void YAMAHA::machdep_Wait(uint param_1)

{
  CM7_EmuSmw7App::Wait(*(uint *)(DAT_00030560 + 0x3055a));
  return;
}

