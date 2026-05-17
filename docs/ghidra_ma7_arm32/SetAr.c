/* SetAr @ 0003b904 18B */


/* ARM::CStmSynth::SetAr(unsigned int, unsigned int) */

void __thiscall ARM::CStmSynth::SetAr(CStmSynth *this,uint param_1,uint param_2)

{
  if (param_1 < 4) {
    this[param_1 * 0x8f0 + 0x8c] = SUB41(param_2,0);
  }
  return;
}

