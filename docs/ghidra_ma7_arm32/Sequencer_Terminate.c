/* Sequencer_Terminate @ 00038658 50B */


/* ARM::Sequencer_Terminate() */

void ARM::Sequencer_Terminate(void)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = DAT_0003868c;
  *(undefined1 *)(DAT_0003868c + 0x38664) = 0;
  bVar2 = VIRTUALREGISTER_GetRegC(0x26);
  VIRTUALREGISTER_SetRegC(0x26,bVar2 & 2);
  *(undefined1 *)(iVar1 + 0x38abc) = 0;
  bVar2 = VIRTUALREGISTER_GetRegC(0x26);
  VIRTUALREGISTER_SetRegC(0x26,bVar2 & 1);
  return;
}

