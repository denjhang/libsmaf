/* Ma7emu_UnlockSmwApi @ 000305b4 10B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_UnlockSmwApi() */

void Ma7emu_UnlockSmwApi(void)

{
  CM7_EmuSmw7App::EmuUnlockSmwApi(*(CM7_EmuSmw7App **)(DAT_000305c0 + 0x305ba));
  return;
}

