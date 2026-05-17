/* SetBlockFnum @ 0014f918 60B */


/* ARM::CDtmfSynth::SetBlockFnum(unsigned int, unsigned int, unsigned int) */

void __thiscall
ARM::CDtmfSynth::SetBlockFnum(CDtmfSynth *this,uint param_1,uint param_2,uint param_3)

{
  if (param_1 != 0) {
    if (param_1 == 1) {
      *(uint *)(this + 0x28) = param_2;
      *(uint *)(this + 0x2c) = param_3;
    }
    *(uint *)(this + 8) = *(uint *)(this + 8) | 8;
    return;
  }
  *(uint *)(this + 0x14) = param_2;
  *(uint *)(this + 0x18) = param_3;
  *(uint *)(this + 8) = *(uint *)(this + 8) | 8;
  return;
}

