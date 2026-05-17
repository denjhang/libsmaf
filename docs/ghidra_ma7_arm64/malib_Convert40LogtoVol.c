/* malib_Convert40LogtoVol @ 001b9abc 32B */


/* YAMAHA::malib_Convert40LogtoVol(unsigned int) */

undefined1 YAMAHA::malib_Convert40LogtoVol(uint param_1)

{
  if (0xc0 < param_1) {
    param_1 = 0xc0;
  }
  return (&DAT_0048d4a0)[param_1];
}

