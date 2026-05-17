/* SetLpfMode @ 001487dc 28B */


/* ARM::CCsmSynth::SetLpfMode(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::SetLpfMode(CCsmSynth *this,uint param_1,uint param_2,uint param_3)

{
  this[0x1998] = SUB41(param_1,0);
  this[0x1999] = SUB41(param_2,0);
  this[0x199a] = SUB41(param_3,0);
  CLpf::SetVoice(*(CLpf **)(this + 0x19a0),(_tagAlInfo *)(this + 0x1978));
  return;
}

