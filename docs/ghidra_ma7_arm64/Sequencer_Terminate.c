/* Sequencer_Terminate @ 00139e30 72B */


/* ARM::Sequencer_Terminate() */

void ARM::Sequencer_Terminate(void)

{
  byte bVar1;
  
  DAT_00582aa0 = 0;
  bVar1 = VIRTUALREGISTER_GetRegC(0x26);
  VIRTUALREGISTER_SetRegC(0x26,bVar1 & 2);
  DAT_00582ef8 = 0;
  bVar1 = VIRTUALREGISTER_GetRegC(0x26);
  VIRTUALREGISTER_SetRegC(0x26,bVar1 & 1);
  return;
}

