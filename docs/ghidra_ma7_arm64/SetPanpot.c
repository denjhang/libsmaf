/* SetPanpot @ 0014f8ac 16B */


/* ARM::CDtmfSynth::SetPanpot(unsigned int, unsigned int) */

void __thiscall ARM::CDtmfSynth::SetPanpot(CDtmfSynth *this,uint param_1,uint param_2)

{
  *(uint *)(this + 0x44) = param_2;
  *(uint *)(this + 0x40) = param_1 & 0x1f;
  return;
}

