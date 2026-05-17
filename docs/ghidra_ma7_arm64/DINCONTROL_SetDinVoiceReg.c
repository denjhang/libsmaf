/* DINCONTROL_SetDinVoiceReg @ 00145c70 920B */


/* ARM::DINCONTROL_SetDinVoiceReg(unsigned char, unsigned char) */

void ARM::DINCONTROL_SetDinVoiceReg(uchar param_1,uchar param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uchar uVar5;
  
  switch(param_1) {
  case 'V':
    uVar5 = 'V';
    goto LAB_00145d18;
  case 'W':
    VIRTUALREGISTER_SetRegM('\0','W',param_2);
    uVar3 = VIRTUALREGISTER_GetRegM('\0','\\');
    if ((uVar3 >> 7 & 1) == 0) {
      VIRTUALREGISTER_GetRegM('\0','V');
      uVar3 = 0;
LAB_00145d60:
      CDinSynth::SetSrcRate((uint)*(undefined8 *)PTR_gpVDin_00567b50,uVar3);
      return;
    }
    break;
  case 'X':
    uVar5 = 'X';
LAB_00145d18:
    VIRTUALREGISTER_SetRegM('\0',uVar5,param_2);
    return;
  case 'Y':
    VIRTUALREGISTER_SetRegM('\0','Y',param_2);
    uVar3 = VIRTUALREGISTER_GetRegM('\0',']');
    if ((uVar3 >> 7 & 1) == 0) {
      VIRTUALREGISTER_GetRegM('\0','X');
      uVar3 = 1;
      goto LAB_00145d60;
    }
    break;
  case 'Z':
    VIRTUALREGISTER_SetRegM('\0','Z',param_2 & 0x7f);
    CDinSynth::SetMode(*(CDinSynth **)PTR_gpVDin_00567b50,0,0,param_2 & 0xf);
    return;
  case '[':
    VIRTUALREGISTER_SetRegM('\0','[',param_2 & 0x7f);
    CDinSynth::SetMode(*(CDinSynth **)PTR_gpVDin_00567b50,1,0,param_2 & 0xf);
    return;
  case '\\':
    VIRTUALREGISTER_SetRegM('\0','\\',param_2 & 0x87);
    puVar1 = PTR_gpVDin_00567b50;
    CDinSynth::SetBuffer
              (*(CDinSynth **)PTR_gpVDin_00567b50,0,DAT_00599420,DAT_00599430,DAT_00599440);
    CDinSynth::Start(*(CDinSynth **)puVar1,0,(uint)(param_2 >> 7),param_2 >> 2 & 1);
    return;
  case ']':
    VIRTUALREGISTER_SetRegM('\0',']',param_2 & 0x87);
    puVar1 = PTR_gpVDin_00567b50;
    CDinSynth::SetBuffer
              (*(CDinSynth **)PTR_gpVDin_00567b50,1,DAT_00599428,DAT_00599438,DAT_00599444);
    CDinSynth::Start(*(CDinSynth **)puVar1,1,(uint)(param_2 >> 7),param_2 >> 2 & 1);
    return;
  case '^':
    VIRTUALREGISTER_SetRegM('\0','^',param_2 & 3);
    return;
  default:
    uVar2 = VIRTUALREGISTER_GetRegM('\0','^');
    uVar3 = uVar2 & 3;
    pbVar4 = (byte *)VIRTUALREGISTER_GetDinInfoPointer((uchar)uVar3);
    if ((uVar2 & 1) == 0) {
      switch(param_1) {
      case '_':
        pbVar4[1] = param_2 & 0xfc;
        CDinSynth::SetPanpot
                  (*(CDinSynth **)PTR_gpVDin_00567b50,uVar3,param_2 >> 2 & 0x1f,(uint)(param_2 >> 7)
                  );
        return;
      case '`':
        *pbVar4 = param_2 & 0x7c;
        CDinSynth::SetVelocity(*(CDinSynth **)PTR_gpVDin_00567b50,uVar3,param_2 >> 2 & 0x1f);
        return;
      case 'a':
        pbVar4[2] = param_2 & 0x7c;
        CDinSynth::SetReverbSend(*(CDinSynth **)PTR_gpVDin_00567b50,uVar3,param_2 >> 2 & 0x1f);
        return;
      case 'b':
        pbVar4[3] = param_2 & 0x7c;
        CDinSynth::SetChorusSend(*(CDinSynth **)PTR_gpVDin_00567b50,uVar3,param_2 >> 2 & 0x1f);
        return;
      case 'c':
        pbVar4[4] = param_2 & 0x7c;
        CDinSynth::SetDrySend(*(CDinSynth **)PTR_gpVDin_00567b50,uVar3,param_2 >> 2 & 0x1f);
        return;
      }
    }
  }
  return;
}

