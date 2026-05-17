/* VIRTUALREGISTER_ChReset @ 000394fc 48B */


/* ARM::VIRTUALREGISTER_ChReset(unsigned char) */

void ARM::VIRTUALREGISTER_ChReset(uchar param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0x40) {
    iVar2 = (uint)param_1 * 0xc;
    iVar1 = DAT_0003952c + 0x39a62 + iVar2;
    *(undefined4 *)(DAT_0003952c + 0x39a62 + iVar2) = 0x4060;
    *(undefined4 *)(iVar1 + 4) = 8;
    *(undefined4 *)(iVar1 + 8) = 0x7c000000;
  }
  return;
}

