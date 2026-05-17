/* ClrDspRAM @ 00049218 40B */


/* ARM::CDsp::ClrDspRAM(unsigned int) */

void ARM::CDsp::ClrDspRAM(uint param_1)

{
  EnterCriticalSection((critical_section *)(&UNK_003bf700 + param_1));
  CDsp2::ClearSubArea(param_1 + 200);
  LeaveCriticalSection((critical_section *)(&UNK_003bf700 + param_1));
  return;
}

