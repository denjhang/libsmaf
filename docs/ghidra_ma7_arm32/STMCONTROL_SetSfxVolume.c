/* STMCONTROL_SetSfxVolume @ 00038d28 166B */


/* ARM::STMCONTROL_SetSfxVolume(unsigned char, unsigned char) */

void ARM::STMCONTROL_SetSfxVolume(uchar param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)param_2;
  iVar3 = DAT_00038dd4 + 0x38d34;
  switch(param_1) {
  case 0xa0:
    VIRTUALREGISTER_SetRegM('\0',0xa0,param_2 & 3);
    return;
  case 0xa1:
    uVar1 = VIRTUALREGISTER_GetRegM('\0',0xa0);
    VIRTUALREGISTER_SetRegM('\0',0xa1,param_2 & 0x7c);
    CStmSynth::SetReverbSend
              ((CStmSynth *)**(undefined4 **)(iVar3 + DAT_00038dd8),uVar1,(uVar2 & 0x7f) >> 2);
    return;
  case 0xa2:
    uVar1 = VIRTUALREGISTER_GetRegM('\0',0xa0);
    VIRTUALREGISTER_SetRegM('\0',0xa2,param_2 & 0x7c);
    CStmSynth::SetChorusSend
              ((CStmSynth *)**(undefined4 **)(iVar3 + DAT_00038dd8),uVar1,(uVar2 & 0x7f) >> 2);
    return;
  case 0xa3:
    uVar1 = VIRTUALREGISTER_GetRegM('\0',0xa0);
    VIRTUALREGISTER_SetRegM('\0',0xa3,param_2 & 0x7c);
    CStmSynth::SetDrySend
              ((CStmSynth *)**(undefined4 **)(iVar3 + DAT_00038dd8),uVar1,(uVar2 & 0x7f) >> 2);
    return;
  default:
    return;
  }
}

