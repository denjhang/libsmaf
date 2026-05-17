/* SetBlockFnum @ 000430d0 18B */


/* ARM::CCsmSynth::SetBlockFnum(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::SetBlockFnum(CCsmSynth *this,uint param_1,uint param_2,uint param_3)

{
  this[0x18ca] = SUB41(param_1,0);
  *(uint *)(this + 0x18dc) = param_2;
  *(uint *)(this + 0x18e0) = param_3;
  return;
}

