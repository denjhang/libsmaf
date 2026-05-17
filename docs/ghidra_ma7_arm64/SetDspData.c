/* SetDspData @ 0014e178 76B */


/* ARM::CDsp::SetDspData(unsigned int, unsigned int) */

void ARM::CDsp::SetDspData(uint param_1,uint param_2)

{
  EnterCriticalSection((critical_section *)(&UNK_003bf7b0 + param_1));
  CDsp2::SetDspData(param_1 + 0xd0,param_2);
  LeaveCriticalSection((critical_section *)(&UNK_003bf7b0 + param_1));
  return;
}

