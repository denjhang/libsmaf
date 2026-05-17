/* SetLpfMode @ 0004332c 34B */


/* ARM::CCsmSynth::SetLpfMode(unsigned int, unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::SetLpfMode(CCsmSynth *this,uint param_1,uint param_2,uint param_3)

{
  this[0x194c] = SUB41(param_1,0);
  this[0x194d] = SUB41(param_2,0);
  this[0x194e] = SUB41(param_3,0);
  CLpf::SetVoice(*(CLpf **)(this + 0x1950),(_tagAlInfo *)(this + 0x192c));
  return;
}

