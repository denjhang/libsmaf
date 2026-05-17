/* SetVolume @ 00043280 12B */


/* ARM::CCsmSynth::SetVolume(unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::SetVolume(CCsmSynth *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x1970) = param_1;
  *(uint *)(this + 0x1974) = param_2 << (param_1 & 0xff);
  return;
}

