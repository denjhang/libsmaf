/* ClrDspRAM @ 0014e2d8 68B */


/* ARM::CDsp::ClrDspRAM(unsigned int) */

void ARM::CDsp::ClrDspRAM(uint param_1)

{
  EnterCriticalSection((critical_section *)(&UNK_003bf7b0 + param_1));
  CDsp2::ClearSubArea(param_1 + 0xd0);
  LeaveCriticalSection((critical_section *)(&UNK_003bf7b0 + param_1));
  return;
}

