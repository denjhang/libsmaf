/* STMCONTROL_SetAdpcmSeek @ 0013a6cc 752B */


/* ARM::STMCONTROL_SetAdpcmSeek(unsigned char, unsigned char) */

void ARM::STMCONTROL_SetAdpcmSeek(uchar param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
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
    uVar4 = VIRTUALREGISTER_GetRegM('\0',0x8e);
    if ((uVar4 & 1) == 0) {
      uVar1 = 0x7f;
      uVar2 = 0;
    }
    else {
      uVar1 = VIRTUALREGISTER_GetRegM('\0',0x8f);
      uVar2 = VIRTUALREGISTER_GetRegM('\0',0x90);
      uVar2 = (uVar1 & 0xff) << 8 | uVar2 & 0xff;
      uVar1 = VIRTUALREGISTER_GetRegM('\0',0x91);
      uVar3 = VIRTUALREGISTER_GetRegM('\0',0x92);
      uVar1 = (uVar1 & 0x7f) << 8 | uVar3 & 0xff;
    }
    CStmSynth::SetAdpcmDefault(*(CStmSynth **)PTR_gpVstm_00567d68,0,uVar2,uVar1);
    return;
  case 0x91:
  case 0x95:
  case 0x99:
  case 0x9d:
    VIRTUALREGISTER_SetRegM('\0',param_1,param_2 & 0x7f);
    return;
  case 0x94:
  case 0x96:
    VIRTUALREGISTER_SetRegM('\0',param_1,param_2);
    uVar1 = VIRTUALREGISTER_GetRegM('\0',0x8e);
    if ((uVar1 >> 1 & 1) == 0) {
      uVar1 = 0x7f;
      uVar2 = 0;
    }
    else {
      uVar1 = VIRTUALREGISTER_GetRegM('\0',0x93);
      uVar2 = VIRTUALREGISTER_GetRegM('\0',0x94);
      uVar2 = (uVar1 & 0xff) << 8 | uVar2 & 0xff;
      uVar1 = VIRTUALREGISTER_GetRegM('\0',0x95);
      uVar3 = VIRTUALREGISTER_GetRegM('\0',0x96);
      uVar1 = (uVar1 & 0x7f) << 8 | uVar3 & 0xff;
    }
    break;
  case 0x98:
  case 0x9a:
    VIRTUALREGISTER_SetRegM('\0',param_1,param_2);
    uVar1 = VIRTUALREGISTER_GetRegM('\0',0x8e);
    if ((uVar1 >> 2 & 1) == 0) {
      uVar1 = 0x7f;
      uVar2 = 0;
    }
    else {
      uVar1 = VIRTUALREGISTER_GetRegM('\0',0x97);
      uVar2 = VIRTUALREGISTER_GetRegM('\0',0x98);
      uVar2 = (uVar1 & 0xff) << 8 | uVar2 & 0xff;
      uVar1 = VIRTUALREGISTER_GetRegM('\0',0x99);
      uVar3 = VIRTUALREGISTER_GetRegM('\0',0x9a);
      uVar1 = (uVar1 & 0x7f) << 8 | uVar3 & 0xff;
    }
    CStmSynth::SetAdpcmDefault(*(CStmSynth **)PTR_gpVstm_00567d68,2,uVar2,uVar1);
    return;
  case 0x9c:
  case 0x9e:
    VIRTUALREGISTER_SetRegM('\0',param_1,param_2);
    uVar1 = VIRTUALREGISTER_GetRegM('\0',0x8e);
    if ((uVar1 >> 3 & 1) == 0) {
      uVar1 = 0x7f;
      uVar2 = 0;
    }
    else {
      uVar1 = VIRTUALREGISTER_GetRegM('\0',0x9b);
      uVar2 = VIRTUALREGISTER_GetRegM('\0',0x9c);
      uVar2 = (uVar1 & 0xff) << 8 | uVar2 & 0xff;
      uVar1 = VIRTUALREGISTER_GetRegM('\0',0x9d);
      uVar3 = VIRTUALREGISTER_GetRegM('\0',0x9e);
      uVar1 = (uVar1 & 0x7f) << 8 | uVar3 & 0xff;
    }
    CStmSynth::SetAdpcmDefault(*(CStmSynth **)PTR_gpVstm_00567d68,3,uVar2,uVar1);
    return;
  default:
    return;
  }
  CStmSynth::SetAdpcmDefault(*(CStmSynth **)PTR_gpVstm_00567d68,1,uVar2,uVar1);
  return;
}

