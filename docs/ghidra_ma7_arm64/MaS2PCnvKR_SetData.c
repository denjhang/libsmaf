/* MaS2PCnvKR_SetData @ 00215550 208B */


/* YAMAHA::MaS2PCnvKR_SetData(unsigned char*, unsigned int, void*) */

undefined8 YAMAHA::MaS2PCnvKR_SetData(uchar *param_1,uint param_2,void *param_3)

{
  bool bVar1;
  
  if (DAT_0057de20 != 1) {
    return 0xffffffff;
  }
  if (param_1 != (uchar *)0x0) {
    bVar1 = param_2 == 0;
    if (!bVar1) {
      if ((((3 < param_2) && (*param_1 == 'H')) && (param_1[1] == 'V')) &&
         ((param_1[2] == '#' && (param_1[3] == 'K')))) {
        DAT_0057de30 = param_1;
        DAT_0057de3c = param_2;
        DAT_0057de38 = 4;
        DAT_0057de44 = 1;
        DAT_0057de54 = 0x59;
        DAT_0057de49 = bVar1;
        DAT_0057de4a = 0x3c;
        DAT_0057de4b = 2;
        DAT_0057de4e = (ushort)bVar1;
        DAT_0057de4c = bVar1;
        DAT_0057de4d = bVar1;
        DAT_0057de48 = 4;
        DAT_0057e7bc = (uint)bVar1;
        DAT_0057e7e0 = DAT_0057e7bc;
        DAT_0057e7cc = bVar1;
        DAT_0057e7e8 = DAT_0057e7bc;
        DAT_0057e7b9 = 1;
        return 0;
      }
      return 0xfffffffb;
    }
  }
  return 0xfffffffe;
}

