/* SetLpfLfo @ 0003b948 34B */


/* ARM::CStmSynth::SetLpfLfo(unsigned int, unsigned int, unsigned int, unsigned int) */

void __thiscall
ARM::CStmSynth::SetLpfLfo(CStmSynth *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  if (param_1 < 4) {
    this[param_1 * 0x8f0 + 0x91] = SUB41(param_3,0);
    this[param_1 * 0x8f0 + 0x90] = SUB41(param_2,0);
    this[param_1 * 0x8f0 + 0x92] = SUB41(param_4,0);
  }
  return;
}

