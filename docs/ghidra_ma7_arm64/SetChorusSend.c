/* SetChorusSend @ 001486f8 40B */


/* ARM::CCsmSynth::SetChorusSend(unsigned int) */

void __thiscall ARM::CCsmSynth::SetChorusSend(CCsmSynth *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = CVolIP::GetLinearVol(*(CVolIP **)(this + 0x19b0),param_1);
  *(undefined4 *)(this + 0x19cc) = uVar1;
  return;
}

