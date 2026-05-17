/* VIRTUALREGISTER_ExChReset @ 00039530 60B */


/* ARM::VIRTUALREGISTER_ExChReset(unsigned char) */

void ARM::VIRTUALREGISTER_ExChReset(uchar param_1)

{
  int iVar1;
  
  if (param_1 < 0x10) {
    iVar1 = DAT_0003956c + 0x39546 + (uint)param_1 * 7;
    *(undefined1 *)(iVar1 + 0x850) = 0x60;
    *(undefined1 *)(iVar1 + 0x851) = 0x40;
    *(undefined1 *)(iVar1 + 0x852) = 8;
    *(undefined1 *)(iVar1 + 0x854) = 8;
    *(undefined1 *)(iVar1 + 0x853) = 0;
    *(undefined1 *)(iVar1 + 0x855) = 0;
    *(undefined1 *)(iVar1 + 0x856) = 0;
  }
  return;
}

