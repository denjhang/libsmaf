/* SetLpfSr @ 001487c4 24B */


/* ARM::CCsmSynth::SetLpfSr(unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::SetLpfSr(CCsmSynth *this,uint param_1,uint param_2)

{
  this[0x199b] = SUB41(param_1,0);
  this[0x1996] = SUB41(param_2,0);
  CLpf::SetVoice(*(CLpf **)(this + 0x19a0),(_tagAlInfo *)(this + 0x1978));
  return;
}

