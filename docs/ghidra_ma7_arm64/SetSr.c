/* SetSr @ 0013e3c4 32B */


/* ARM::CStmSynth::SetSr(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetSr(CStmSynth *this,uint param_1,uint param_2,uint param_3)

{
  if (param_1 < 4) {
    this[(ulong)param_1 * 0x918 + 0x96] = SUB41(param_3,0);
    this[(ulong)param_1 * 0x918 + 0x9b] = SUB41(param_2,0);
  }
  return;
}

