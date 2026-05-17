/* STMCONTROL_SetAdpcmSeek @ 00038c90 256B */


/* ARM::STMCONTROL_SetAdpcmSeek(unsigned char, unsigned char) */

void ARM::STMCONTROL_SetAdpcmSeek(uchar param_1,uchar param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  switch(param_1) {
  case 0x8e:
    VIRTUALREGISTER_SetRegM('\0',0x8e,param_2 & 0xf);
    return;
  case 0x8f:
  case 0x93:
  case 0x97:
  case 0x9b:
    VIRTUALREGISTER_SetRegM('\0',param_1,param_2);
    return;
  case 0x90:
  case 0x92:
    VIRTUALREGISTER_SetRegM('\0',param_1,param_2);
    uVar3 = 0;
    break;
  case 0x91:
  case 0x95:
  case 0x99:
  case 0x9d:
    VIRTUALREGISTER_SetRegM('\0',param_1,param_2 & 0x7f);
    return;
  case 0x94:
  case 0x96:
    VIRTUALREGISTER_SetRegM('\0',param_1,param_2);
    uVar3 = 1;
    break;
  case 0x98:
  case 0x9a:
    VIRTUALREGISTER_SetRegM('\0',param_1,param_2);
    uVar3 = 2;
    break;
  case 0x9c:
  case 0x9e:
    VIRTUALREGISTER_SetRegM('\0',param_1,param_2);
    uVar3 = 3;
    break;
  default:
    return;
  }
  iVar2 = VIRTUALREGISTER_GetRegM('\0',0x8e);
  if ((iVar2 >> uVar3) << 0x1f < 0) {
    cVar1 = (char)uVar3 * '\x04';
    iVar2 = VIRTUALREGISTER_GetRegM('\0',cVar1 + 0x8f);
    uVar4 = VIRTUALREGISTER_GetRegM('\0',cVar1 + 0x90);
    uVar4 = iVar2 << 8 | uVar4;
    iVar2 = VIRTUALREGISTER_GetRegM('\0',cVar1 + 0x91);
    uVar5 = VIRTUALREGISTER_GetRegM('\0',cVar1 + 0x92);
    uVar5 = (iVar2 << 8 | uVar5) & 0x7fff;
  }
  else {
    uVar5 = 0x7f;
    uVar4 = 0;
  }
  CStmSynth::SetAdpcmDefault
            ((CStmSynth *)**(undefined4 **)(DAT_0003870c + 0x386b2),uVar3,uVar4,uVar5);
  return;
}

