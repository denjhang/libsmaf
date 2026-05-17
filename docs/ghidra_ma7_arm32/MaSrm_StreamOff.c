/* MaSrm_StreamOff @ 0008a1a0 38B */


/* YAMAHA::MaSrm_StreamOff(unsigned int) */

void YAMAHA::MaSrm_StreamOff(uint param_1)

{
  MaDevDrv_ResetIrqCtrl((uchar)(1 << (param_1 & 0xff)),'\0');
  *(undefined4 *)(*(int *)(DAT_0008a1c8 + 0x8a1bc) + param_1 * 0x70 + 0x44) = 1;
  return;
}

