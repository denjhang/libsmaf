/* SetVol @ 0014f8c8 80B */


/* ARM::CDtmfSynth::SetVol(unsigned int, unsigned int) */

void __thiscall ARM::CDtmfSynth::SetVol(CDtmfSynth *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar1 = CVolIP::GetLinearVol(*(CVolIP **)(this + 0x48),param_2);
      *(undefined4 *)(this + 0x30) = uVar1;
    }
    return;
  }
  uVar1 = CVolIP::GetLinearVol(*(CVolIP **)(this + 0x48),param_2);
  *(undefined4 *)(this + 0x1c) = uVar1;
  return;
}

