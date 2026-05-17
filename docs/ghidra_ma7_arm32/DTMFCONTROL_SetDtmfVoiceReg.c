/* DTMFCONTROL_SetDtmfVoiceReg @ 00041b48 332B */


/* ARM::DTMFCONTROL_SetDtmfVoiceReg(unsigned char, unsigned char) */

void ARM::DTMFCONTROL_SetDtmfVoiceReg(uchar param_1,uchar param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = DAT_00041ca4;
  uVar4 = (uint)param_2;
  iVar6 = DAT_00041ca0 + 0x41b54;
  switch(param_1) {
  case 'M':
    VIRTUALREGISTER_SetRegM('\0','M',param_2 & 0x7c);
    CDtmfSynth::SetVol((CDtmfSynth *)**(undefined4 **)(iVar6 + DAT_00041ca4),0,(uVar4 & 0x7f) >> 2);
    return;
  case 'N':
    VIRTUALREGISTER_SetRegM('\0','N',param_2 & 0x3f);
    return;
  case 'O':
    VIRTUALREGISTER_SetRegM('\0','O',param_2 & 0x7f);
    uVar2 = VIRTUALREGISTER_GetRegM('\0','N');
    uVar3 = VIRTUALREGISTER_GetRegM('\0','N');
    uVar5 = 0;
    break;
  case 'P':
    VIRTUALREGISTER_SetRegM('\0','P',param_2 & 0x7c);
    CDtmfSynth::SetVol((CDtmfSynth *)**(undefined4 **)(iVar6 + DAT_00041ca4),1,(uVar4 & 0x7f) >> 2);
    return;
  case 'Q':
    VIRTUALREGISTER_SetRegM('\0','Q',param_2 & 0x3f);
    return;
  case 'R':
    VIRTUALREGISTER_SetRegM('\0','R',param_2 & 0x7f);
    uVar2 = VIRTUALREGISTER_GetRegM('\0','Q');
    uVar3 = VIRTUALREGISTER_GetRegM('\0','Q');
    uVar5 = 1;
    break;
  case 'S':
    VIRTUALREGISTER_SetRegM('\0','S',param_2 & 0xfc);
    CDtmfSynth::SetPanpot
              ((CDtmfSynth *)**(undefined4 **)(iVar6 + DAT_00041ca4),(uVar4 & 0x7f) >> 2,
               (uint)(param_2 >> 7));
    return;
  case 'T':
    VIRTUALREGISTER_SetRegM('\0','T',param_2 & 0x7c);
    CDtmfSynth::SetVelocity((CDtmfSynth *)**(undefined4 **)(iVar6 + iVar1),(uVar4 & 0x7f) >> 2);
    return;
  case 'U':
    VIRTUALREGISTER_SetRegM('\0','U',param_2 & 0x4f);
    uVar2 = VIRTUALREGISTER_GetRegM('\0','\x02');
    if ((uVar2 & 0x7fff) >> 7 != 1) {
      CDtmfSynth::KeyOn((CDtmfSynth *)**(undefined4 **)(iVar6 + DAT_00041ca4),(uVar4 & 0x7f) >> 6);
      return;
    }
  default:
    return;
  }
  CDtmfSynth::SetBlockFnum
            ((CDtmfSynth *)**(undefined4 **)(iVar6 + DAT_00041ca4),uVar5,(uVar2 & 0x3f) >> 3,
             uVar4 | (uVar3 & 7) << 7);
  return;
}

