/* SetLpfLfo @ 0013e3e4 36B */


/* ARM::CStmSynth::SetLpfLfo(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
ARM::CStmSynth::SetLpfLfo(CStmSynth *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_1 < 4) {
    this[(ulong)param_1 * 0x918 + 0x98] = SUB41(param_2,0);
    this[(ulong)param_1 * 0x918 + 0x99] = SUB41(param_3,0);
    this[(ulong)param_1 * 0x918 + 0x9a] = SUB41(param_4,0);
  }
  return;
}

