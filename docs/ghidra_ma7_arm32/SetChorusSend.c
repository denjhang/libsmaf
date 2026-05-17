/* SetChorusSend @ 000432a0 20B */


/* ARM::CCsmSynth::SetChorusSend(unsigned int) */

void __thiscall ARM::CCsmSynth::SetChorusSend(CCsmSynth *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = CVolIP::GetLinearVol(*(CVolIP **)(this + 0x1958),param_1);
  *(undefined4 *)(this + 0x196c) = uVar1;
  return;
}

