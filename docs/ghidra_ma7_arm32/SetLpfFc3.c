/* SetLpfFc3 @ 00043300 20B */


/* ARM::CCsmSynth::SetLpfFc3(unsigned int) */

void __thiscall ARM::CCsmSynth::SetLpfFc3(CCsmSynth *this,uint param_1)

{
  *(uint *)(this + 0x1940) = param_1;
  CLpf::SetVoice(*(CLpf **)(this + 0x1950),(_tagAlInfo *)(this + 0x192c));
  return;
}

