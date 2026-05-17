/* Ma7emu_GetMode @ 000307c4 10B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_GetMode() */

void Ma7emu_GetMode(void)

{
  CM7_EmuSmw7App::EmuGetMode(*(CM7_EmuSmw7App **)(DAT_000307d0 + 0x307ca));
  return;
}

