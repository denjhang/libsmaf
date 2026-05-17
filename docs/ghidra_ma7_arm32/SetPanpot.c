/* SetPanpot @ 00043104 14B */


/* ARM::CCsmSynth::SetPanpot(unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::SetPanpot(CCsmSynth *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x18d0) = param_1;
  this[0x18cb] = SUB41(param_2,0);
  return;
}

