/* SetLpfQ @ 0013e2fc 32B */


/* ARM::CStmSynth::SetLpfQ(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetLpfQ(CStmSynth *this,uint param_1,uint param_2,uint param_3)

{
  if (param_1 < 4) {
    this[(ulong)param_1 * 0x918 + 0x74] = SUB41(param_2,0);
    this[(ulong)param_1 * 0x918 + 0x7c] = SUB41(param_3,0);
  }
  return;
}

