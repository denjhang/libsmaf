/* SetCh @ 0004307c 32B */


/* ARM::CCsmSynth::SetCh(unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::SetCh(CCsmSynth *this,uint param_1,uint param_2)

{
  this[0x18c8] = SUB41(param_1,0);
  if (this[0x18c5] == (CCsmSynth)0x0) {
    this[0x18c7] = SUB41(param_1,0);
  }
  this[0x18c6] = SUB41(param_2,0);
  return;
}

