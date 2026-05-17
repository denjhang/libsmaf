/* MaSrm_StreamOff @ 001a7b40 72B */


/* YAMAHA::MaSrm_StreamOff(unsigned int) */

void YAMAHA::MaSrm_StreamOff(uint param_1)

{
  MaDevDrv_ResetIrqCtrl((uchar)(1 << (ulong)(param_1 & 0x1f)),'\0');
  *(undefined4 *)(DAT_005dd9b8 + (ulong)param_1 * 0x78 + 0x4c) = 1;
  return;
}

