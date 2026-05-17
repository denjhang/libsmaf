/* HVCONTROL_SetSfxVolume @ 00147474 164B */


/* ARM::HVCONTROL_SetSfxVolume(unsigned char, unsigned char) */

void ARM::HVCONTROL_SetSfxVolume(uchar param_1,uchar param_2)

{
  uint uVar1;
  
  VIRTUALREGISTER_SetRegM('\0',param_1,param_2 & 0x7c);
  uVar1 = param_2 >> 2 & 0x1f;
  if (param_1 == 0xa6) {
    CCsmSynth::SetChorusSend(*(CCsmSynth **)PTR_gpVHV_00567ec0,uVar1);
    return;
  }
  if (param_1 != 0xa7) {
    if (param_1 != 0xa5) {
      return;
    }
    CCsmSynth::SetReverbSend(*(CCsmSynth **)PTR_gpVHV_00567ec0,uVar1);
    return;
  }
  CCsmSynth::SetDrySend(*(CCsmSynth **)PTR_gpVHV_00567ec0,uVar1);
  return;
}

