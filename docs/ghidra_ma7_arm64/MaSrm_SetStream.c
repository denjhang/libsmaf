/* MaSrm_SetStream @ 001a72e4 116B */


/* YAMAHA::MaSrm_SetStream(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char
   const*, unsigned int) */

undefined8
YAMAHA::MaSrm_SetStream
          (uint param_1,uint param_2,uint param_3,uint param_4,uchar *param_5,uint param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 < 4) {
    if (0x3f >= param_2) {
      uVar2 = (ulong)param_1;
      uVar3 = (ulong)param_2;
      lVar1 = uVar2 * 0x600 + uVar3 * 0x18;
      (&DAT_005dc1b8)[uVar3 * 6 + uVar2 * 0x180] = param_4;
      (&DAT_005dc1bc)[uVar3 * 6 + uVar2 * 0x180] = param_6;
      (&DAT_005dc1c8)[lVar1] = (char)param_3;
      (&DAT_005dc1c0)[uVar3 * 3 + uVar2 * 0xc0] = param_5;
      (&DAT_005dc1c9)[lVar1] = 0xff;
      (&DAT_005dc1ca)[lVar1] = 0x3f < param_2;
      if ((param_3 >> 5 & 1) != 0) {
        (&DAT_005dc1c9)[lVar1] = 0x80;
      }
      return 0;
    }
  }
  return 0xfffffffe;
}

