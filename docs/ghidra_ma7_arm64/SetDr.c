/* SetDr @ 0013e3a8 28B */


/* ARM::CStmSynth::SetDr(unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetDr(CStmSynth *this,uint param_1,uint param_2)

{
  if (param_1 < 4) {
    this[(ulong)param_1 * 0x918 + 0x95] = SUB41(param_2,0);
  }
  return;
}

