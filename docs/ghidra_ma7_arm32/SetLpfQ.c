/* SetLpfQ @ 000432c8 56B */


/* ARM::CCsmSynth::SetLpfQ(unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::SetLpfQ(CCsmSynth *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  this[0x1930] = SUB41(param_2,0);
  CLpf::SetVoice(*(CLpf **)(this + 0x1950),(_tagAlInfo *)(this + 0x192c));
  if ((byte)this[0x1928] != param_1) {
    if (param_1 == 1) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
    CLpf::SetEgMode(*(CLpf **)(this + 0x1950),uVar1);
    this[0x1928] = SUB41(param_1,0);
  }
  return;
}

