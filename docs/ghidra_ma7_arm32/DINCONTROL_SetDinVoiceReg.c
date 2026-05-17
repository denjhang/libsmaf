/* DINCONTROL_SetDinVoiceReg @ 00041868 532B */


/* ARM::DINCONTROL_SetDinVoiceReg(unsigned char, unsigned char) */

void ARM::DINCONTROL_SetDinVoiceReg(uchar param_1,uchar param_2)

{
  int iVar1;
  int iVar2;
  CDinSynth *this;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = DAT_00041a98;
  iVar2 = DAT_00041a90;
  uVar5 = (uint)param_2;
  iVar6 = DAT_00041a8c + 0x4187c;
  switch(param_1) {
  case 'V':
    VIRTUALREGISTER_SetRegM('\0','V',param_2);
    return;
  case 'W':
    VIRTUALREGISTER_SetRegM('\0','W',param_2);
    iVar2 = VIRTUALREGISTER_GetRegM('\0','\\');
    if (-1 < iVar2 << 0x18) {
      VIRTUALREGISTER_GetRegM('\0','V');
      uVar5 = 0;
LAB_000418d2:
      CDinSynth::SetSrcRate(**(uint **)(iVar6 + DAT_00041a90),uVar5);
      return;
    }
    break;
  case 'X':
    VIRTUALREGISTER_SetRegM('\0','X',param_2);
    return;
  case 'Y':
    VIRTUALREGISTER_SetRegM('\0','Y',param_2);
    iVar2 = VIRTUALREGISTER_GetRegM('\0',']');
    if (-1 < iVar2 << 0x18) {
      VIRTUALREGISTER_GetRegM('\0','X');
      uVar5 = 1;
      goto LAB_000418d2;
    }
    break;
  case 'Z':
    VIRTUALREGISTER_SetRegM('\0','Z',param_2 & 0x7f);
    uVar3 = 0;
    goto LAB_0004192e;
  case '[':
    VIRTUALREGISTER_SetRegM('\0','[',param_2 & 0x7f);
    uVar3 = 1;
LAB_0004192e:
    CDinSynth::SetMode((CDinSynth *)**(undefined4 **)(iVar6 + iVar2),uVar3,0,uVar5 & 0xf);
    return;
  case '\\':
    VIRTUALREGISTER_SetRegM('\0','\\',param_2 & 0x87);
    puVar7 = *(undefined4 **)(iVar6 + DAT_00041a90);
    CDinSynth::SetBuffer
              ((CDinSynth *)*puVar7,0,*(short **)(DAT_00041a94 + 0x4196c),
               *(short **)(DAT_00041a94 + 0x41974),*(uint *)(DAT_00041a94 + 0x4197c));
    this = (CDinSynth *)*puVar7;
    uVar3 = 0;
    goto LAB_00041984;
  case ']':
    VIRTUALREGISTER_SetRegM('\0',']',param_2 & 0x87);
    puVar7 = *(undefined4 **)(iVar6 + DAT_00041a90);
    CDinSynth::SetBuffer
              ((CDinSynth *)*puVar7,1,*(short **)(iVar1 + 0x419ae),*(short **)(iVar1 + 0x419b6),
               *(uint *)(iVar1 + 0x419be));
    this = (CDinSynth *)*puVar7;
    uVar3 = 1;
LAB_00041984:
    CDinSynth::Start(this,uVar3,(uint)(param_2 >> 7),(uVar5 & 7) >> 2);
    return;
  case '^':
    VIRTUALREGISTER_SetRegM('\0','^',param_2 & 3);
    return;
  default:
    uVar3 = VIRTUALREGISTER_GetRegM('\0','^');
    uVar8 = uVar3 & 3;
    pbVar4 = (byte *)VIRTUALREGISTER_GetDinInfoPointer((uchar)uVar8);
    iVar2 = DAT_00041a90;
    if (-1 < (int)(uVar3 << 0x1f)) {
      switch(param_1) {
      case '_':
        pbVar4[1] = param_2 & 0xfc;
        CDinSynth::SetPanpot
                  ((CDinSynth *)**(undefined4 **)(iVar6 + iVar2),uVar8,(uVar5 & 0x7f) >> 2,
                   (uint)(param_2 >> 7));
        return;
      case '`':
        *pbVar4 = param_2 & 0x7c;
        CDinSynth::SetVelocity
                  ((CDinSynth *)**(undefined4 **)(iVar6 + iVar2),uVar8,(uVar5 & 0x7f) >> 2);
        return;
      case 'a':
        pbVar4[2] = param_2 & 0x7c;
        CDinSynth::SetReverbSend
                  ((CDinSynth *)**(undefined4 **)(iVar6 + iVar2),uVar8,(uVar5 & 0x7f) >> 2);
        return;
      case 'b':
        pbVar4[3] = param_2 & 0x7c;
        CDinSynth::SetChorusSend
                  ((CDinSynth *)**(undefined4 **)(iVar6 + iVar2),uVar8,(uVar5 & 0x7f) >> 2);
        return;
      case 'c':
        pbVar4[4] = param_2 & 0x7c;
        CDinSynth::SetDrySend
                  ((CDinSynth *)**(undefined4 **)(iVar6 + iVar2),uVar8,(uVar5 & 0x7f) >> 2);
        return;
      }
    }
  }
  return;
}

