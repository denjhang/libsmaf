/* SetVelocity @ 000430e4 30B */


/* ARM::CCsmSynth::SetVelocity(unsigned int, unsigned int) */

void __thiscall ARM::CCsmSynth::SetVelocity(CCsmSynth *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = CVolIP::GetLinearVol(*(CVolIP **)(this + 0x1958),param_1);
  *(uint *)(this + 0x18ec) = param_2 & 1;
  *(undefined4 *)(this + 0x18cc) = uVar1;
  return;
}

