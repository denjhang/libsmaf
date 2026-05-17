/* SetLpfSr @ 00043314 24B */


/* ARM::CCsmSynth::SetLpfSr(unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::SetLpfSr(CCsmSynth *this,uint param_1,uint param_2)

{
  this[0x194f] = SUB41(param_1,0);
  this[0x194a] = SUB41(param_2,0);
  CLpf::SetVoice(*(CLpf **)(this + 0x1950),(_tagAlInfo *)(this + 0x192c));
  return;
}

