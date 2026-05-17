/* SetReverbSend @ 0004328c 20B */


/* ARM::CCsmSynth::SetReverbSend(unsigned int) */

void __thiscall ARM::CCsmSynth::SetReverbSend(CCsmSynth *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = CVolIP::GetLinearVol(*(CVolIP **)(this + 0x1958),param_1);
  *(undefined4 *)(this + 0x1968) = uVar1;
  return;
}

