/* DTMFCONTROL_SetDtmfVoiceReg @ 001460fc 544B */


/* ARM::DTMFCONTROL_SetDtmfVoiceReg(unsigned char, unsigned char) */

void ARM::DTMFCONTROL_SetDtmfVoiceReg(uchar param_1,uchar param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (8 < param_1 - 0x4d) {
    return;
  }
  switch((uint)param_1) {
  case 0x4d:
    VIRTUALREGISTER_SetRegM('\0','M',param_2 & 0x7c);
    CDtmfSynth::SetVol(*(CDtmfSynth **)PTR_gpVDTMF_00567308,0,param_2 >> 2 & 0x1f);
    return;
  case 0x4e:
    VIRTUALREGISTER_SetRegM('\0','N',param_2 & 0x3f);
    return;
  case 0x4f:
    VIRTUALREGISTER_SetRegM('\0','O',param_2 & 0x7f);
    bVar1 = VIRTUALREGISTER_GetRegM('\0','N');
    uVar2 = VIRTUALREGISTER_GetRegM('\0','N');
    uVar3 = 0;
    break;
  case 0x50:
    VIRTUALREGISTER_SetRegM('\0','P',param_2 & 0x7c);
    CDtmfSynth::SetVol(*(CDtmfSynth **)PTR_gpVDTMF_00567308,1,param_2 >> 2 & 0x1f);
    return;
  case 0x51:
    VIRTUALREGISTER_SetRegM('\0','Q',param_2 & 0x3f);
    return;
  case 0x52:
    VIRTUALREGISTER_SetRegM('\0','R',param_2 & 0x7f);
    bVar1 = VIRTUALREGISTER_GetRegM('\0','Q');
    uVar2 = VIRTUALREGISTER_GetRegM('\0','Q');
    uVar3 = 1;
    break;
  case 0x53:
    VIRTUALREGISTER_SetRegM('\0','S',param_2 & 0xfc);
    CDtmfSynth::SetPanpot
              (*(CDtmfSynth **)PTR_gpVDTMF_00567308,param_2 >> 2 & 0x1f,(uint)(param_2 >> 7));
    return;
  case 0x54:
    VIRTUALREGISTER_SetRegM('\0','T',param_2 & 0x7c);
    CDtmfSynth::SetVelocity(*(CDtmfSynth **)PTR_gpVDTMF_00567308,param_2 >> 2 & 0x1f);
    return;
  case 0x55:
    VIRTUALREGISTER_SetRegM('\0','U',param_2 & 0x4f);
    uVar2 = VIRTUALREGISTER_GetRegM('\0','\x02');
    if ((uVar2 >> 7 & 1) != 0) {
      return;
    }
    CDtmfSynth::KeyOn(*(CDtmfSynth **)PTR_gpVDTMF_00567308,param_2 >> 6 & 1);
    return;
  }
  CDtmfSynth::SetBlockFnum
            (*(CDtmfSynth **)PTR_gpVDTMF_00567308,uVar3,bVar1 >> 3 & 7,
             (uVar2 & 7) << 7 | (uint)param_2);
  return;
}

