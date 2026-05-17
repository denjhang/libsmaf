/* SetVol @ 0004a708 36B */


/* ARM::CDtmfSynth::SetVol(unsigned int, unsigned int) */

void __thiscall ARM::CDtmfSynth::SetVol(CDtmfSynth *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = CVolIP::GetLinearVol(*(CVolIP **)(this + 0x44),param_2);
    *(undefined4 *)(this + 0x18) = uVar1;
    return;
  }
  if (param_1 == 1) {
    uVar1 = CVolIP::GetLinearVol(*(CVolIP **)(this + 0x44),param_2);
    *(undefined4 *)(this + 0x2c) = uVar1;
    return;
  }
  return;
}

