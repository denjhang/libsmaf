/* STMCONTROL_SetSfxVolume @ 0013a9bc 304B */


/* ARM::STMCONTROL_SetSfxVolume(unsigned char, unsigned char) */

void ARM::STMCONTROL_SetSfxVolume(uchar param_1,uchar param_2)

{
  uint uVar1;
  
  switch(param_1) {
  case 0xa0:
    VIRTUALREGISTER_SetRegM('\0',0xa0,param_2 & 3);
    return;
  case 0xa1:
    uVar1 = VIRTUALREGISTER_GetRegM('\0',0xa0);
    VIRTUALREGISTER_SetRegM('\0',0xa1,param_2 & 0x7c);
    CStmSynth::SetReverbSend(*(CStmSynth **)PTR_gpVstm_00567d68,uVar1 & 0xff,param_2 >> 2 & 0x1f);
    return;
  case 0xa2:
    uVar1 = VIRTUALREGISTER_GetRegM('\0',0xa0);
    VIRTUALREGISTER_SetRegM('\0',0xa2,param_2 & 0x7c);
    CStmSynth::SetChorusSend(*(CStmSynth **)PTR_gpVstm_00567d68,uVar1 & 0xff,param_2 >> 2 & 0x1f);
    return;
  case 0xa3:
    uVar1 = VIRTUALREGISTER_GetRegM('\0',0xa0);
    VIRTUALREGISTER_SetRegM('\0',0xa3,param_2 & 0x7c);
    CStmSynth::SetDrySend(*(CStmSynth **)PTR_gpVstm_00567d68,uVar1 & 0xff,param_2 >> 2 & 0x1f);
    return;
  default:
    return;
  }
}

