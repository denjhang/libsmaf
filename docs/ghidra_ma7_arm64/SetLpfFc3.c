/* SetLpfFc3 @ 001487b0 20B */


/* ARM::CCsmSynth::SetLpfFc3(unsigned int) */

void __thiscall ARM::CCsmSynth::SetLpfFc3(CCsmSynth *this,uint param_1)

{
  *(uint *)(this + 0x198c) = param_1;
  CLpf::SetVoice(*(CLpf **)(this + 0x19a0),(_tagAlInfo *)(this + 0x1978));
  return;
}

