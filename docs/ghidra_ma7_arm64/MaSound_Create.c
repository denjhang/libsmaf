/* MaSound_Create @ 0018abbc 88B */


/* YAMAHA::MaSound_Create(unsigned char) */

ulong YAMAHA::MaSound_Create(uchar param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  if ((DAT_0057c414 == -2) &&
     (((param_1 == '\r' || (param_1 == '\x01')) &&
      (((long)(ulong)DAT_0057c410 >> (uVar1 & 0x3f) & 1U) == 0)))) {
    DAT_0057c410 = DAT_0057c410 | (uint)(1L << (uVar1 & 0x3f));
    return uVar1;
  }
  return 0xffffffff;
}

