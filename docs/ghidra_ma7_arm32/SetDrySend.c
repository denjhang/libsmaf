/* SetDrySend @ 000432b4 20B */


/* ARM::CCsmSynth::SetDrySend(unsigned int) */

void __thiscall ARM::CCsmSynth::SetDrySend(CCsmSynth *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = CVolIP::GetLinearVol(*(CVolIP **)(this + 0x1958),param_1);
  *(undefined4 *)(this + 0x1964) = uVar1;
  return;
}

