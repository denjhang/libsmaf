/* Mapi_EmuTerminate @ 000310a4 10B */


void Mapi_EmuTerminate(void)

{
  CM7_EmuSmw7App::EmuTerm(*(CM7_EmuSmw7App **)(DAT_000310b0 + 0x310aa));
  return;
}

