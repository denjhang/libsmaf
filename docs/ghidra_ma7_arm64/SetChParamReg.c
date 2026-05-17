/* SetChParamReg @ 0014508c 600B */


/* ARM::CCh::SetChParamReg(unsigned char, unsigned char, unsigned char) */

void __thiscall ARM::CCh::SetChParamReg(CCh *this,uchar param_1,uchar param_2,uchar param_3)

{
  byte *pbVar1;
  
  if ((param_1 < 0x40) && (10 < param_2)) {
    pbVar1 = (byte *)VIRTUALREGISTER_GetChannelInfoPointer(param_1);
    switch(param_2) {
    case '\f':
      *pbVar1 = param_3 & 0x7d;
      SetChVolume(this,param_1,param_3);
      return;
    case '\r':
      pbVar1[1] = param_3 & 0x7d;
      SetChPanpot(this,param_1,param_3);
      return;
    case '\x0e':
      pbVar1[2] = param_3 & 0x71;
      SetHold1(this,param_1,param_3);
      SetToremolo(this,param_1,param_3);
      return;
    case '\x0f':
      pbVar1[3] = param_3 & 0x5f;
      SetModulation(this,param_1,param_3);
      return;
    case '\x10':
      pbVar1[4] = param_3 & 0x7f;
      break;
    case '\x11':
      pbVar1[5] = param_3 & 0x7f;
      SetPitchBend((uchar)this,param_1);
      return;
    case '\x12':
      pbVar1[6] = param_3 & 0xfe;
      SetResonance(this,param_1,param_3);
      return;
    case '\x13':
      pbVar1[7] = param_3 & 0x7f;
      SetBrightness(this,param_1,param_3);
      return;
    case '\x14':
      pbVar1[8] = param_3 & 0x7f;
      SetExId(this,param_1,param_3);
      return;
    case '\x15':
      pbVar1[9] = param_3 & 0x7c;
      SetSfx1Volume(this,param_1,param_3);
      return;
    case '\x16':
      pbVar1[10] = param_3 & 0x7c;
      SetSfx2Volume(this,param_1,param_3);
      return;
    case '\x17':
      pbVar1[0xb] = param_3 & 0x7c;
      SetDryVolume(this,param_1,param_3);
      return;
    }
  }
  return;
}

