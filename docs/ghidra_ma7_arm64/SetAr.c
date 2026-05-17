/* SetAr @ 0013e38c 28B */


/* ARM::CStmSynth::SetAr(unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetAr(CStmSynth *this,uint param_1,uint param_2)

{
  if (param_1 < 4) {
    this[(ulong)param_1 * 0x918 + 0x94] = SUB41(param_2,0);
  }
  return;
}

