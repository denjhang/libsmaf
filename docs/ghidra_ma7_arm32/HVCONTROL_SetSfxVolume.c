/* HVCONTROL_SetSfxVolume @ 00042a44 82B */


/* ARM::HVCONTROL_SetSfxVolume(unsigned char, unsigned char) */

void ARM::HVCONTROL_SetSfxVolume(uchar param_1,uchar param_2)

{
  uint uVar1;
  int iVar2;
  
  VIRTUALREGISTER_SetRegM('\0',param_1,param_2 & 0x7c);
  uVar1 = (param_2 & 0x7f) >> 2;
  iVar2 = DAT_00042a98 + 0x42a62;
  if (param_1 == 0xa6) {
    CCsmSynth::SetChorusSend((CCsmSynth *)**(undefined4 **)(iVar2 + DAT_00042a9c),uVar1);
    return;
  }
  if (param_1 != 0xa7) {
    if (param_1 != 0xa5) {
      return;
    }
    CCsmSynth::SetReverbSend((CCsmSynth *)**(undefined4 **)(iVar2 + DAT_00042a9c),uVar1);
    return;
  }
  CCsmSynth::SetDrySend((CCsmSynth *)**(undefined4 **)(iVar2 + DAT_00042a9c),uVar1);
  return;
}

