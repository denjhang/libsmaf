/* SetDr @ 0003b918 18B */


/* ARM::CStmSynth::SetDr(unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetDr(CStmSynth *this,uint param_1,uint param_2)

{
  if (param_1 < 4) {
    this[param_1 * 0x8f0 + 0x8d] = SUB41(param_2,0);
  }
  return;
}

