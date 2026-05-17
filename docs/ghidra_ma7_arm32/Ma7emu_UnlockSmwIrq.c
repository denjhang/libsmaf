/* Ma7emu_UnlockSmwIrq @ 000305e4 10B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Ma7emu_UnlockSmwIrq() */

void Ma7emu_UnlockSmwIrq(void)

{
  CM7_EmuSmw7App::EmuUnlockSmwIrq(*(CM7_EmuSmw7App **)(DAT_000305f0 + 0x305ea));
  return;
}

