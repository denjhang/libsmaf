/* malib_Mix40LogVol @ 001b9a70 52B */


/* YAMAHA::malib_Mix40LogVol(unsigned int, unsigned int) */

undefined1 YAMAHA::malib_Mix40LogVol(uint param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)((uint)(byte)(&DAT_0048d420)[(ulong)param_1 & 0x7f] +
                 (uint)(byte)(&DAT_0048d420)[(ulong)param_2 & 0x7f]);
  if (0xc0 < (uint)(byte)(&DAT_0048d420)[(ulong)param_1 & 0x7f] +
             (uint)(byte)(&DAT_0048d420)[(ulong)param_2 & 0x7f]) {
    uVar1 = 0xc0;
  }
  return (&DAT_0048d4a0)[uVar1];
}

