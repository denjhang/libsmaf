/* Ma7emu_UnlockMapi @ 00030584 10B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_UnlockMapi() */

void Ma7emu_UnlockMapi(void)

{
  CM7_EmuSmw7App::EmuUnlockMapi(*(CM7_EmuSmw7App **)(DAT_00030590 + 0x3058a));
  return;
}

