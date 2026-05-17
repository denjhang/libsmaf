/* SetSr @ 0003b92c 28B */


/* ARM::CStmSynth::SetSr(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetSr(CStmSynth *this,uint param_1,uint param_2,uint param_3)

{
  if (param_1 < 4) {
    this[param_1 * 0x8f0 + 0x8e] = SUB41(param_3,0);
    this[param_1 * 0x8f0 + 0x93] = SUB41(param_2,0);
  }
  return;
}

