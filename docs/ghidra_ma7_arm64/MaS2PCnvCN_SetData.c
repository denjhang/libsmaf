/* MaS2PCnvCN_SetData @ 00206e74 216B */


/* YAMAHA::MaS2PCnvCN_SetData(unsigned char*, unsigned int, void*) */

undefined8 YAMAHA::MaS2PCnvCN_SetData(uchar *param_1,uint param_2,void *param_3)

{
  bool bVar1;
  
  if (DAT_0057d2b8 != 1) {
    return 0xffffffff;
  }
  if (0 < (int)param_2) {
    bVar1 = param_1 == (uchar *)0x0;
    if (!bVar1) {
      if ((((3 < param_2) && (*param_1 == 'H')) && (param_1[1] == 'V')) &&
         ((param_1[2] == '#' && (param_1[3] == 'C')))) {
        DAT_0057d2c8 = param_1;
        DAT_0057d2d4 = param_2;
        DAT_0057d2d0 = 4;
        DAT_0057d2dc = 1;
        DAT_0057d2e0 = 4;
        DAT_0057d2e1 = bVar1;
        DAT_0057d2e2 = 0x3c;
        DAT_0057d2e3 = 2;
        DAT_0057d2e4 = bVar1;
        DAT_0057d2e6 = (ushort)bVar1;
        DAT_0057d2e8 = 0x59;
        DAT_0057dddd = 1;
        DAT_0057dde0 = (uint)bVar1;
        DAT_0057dde4 = bVar1;
        DAT_0057dde8 = 0;
        DAT_0057ddfc = bVar1;
        DAT_0057de0c = (uint)bVar1;
        DAT_0057de14 = (uint)bVar1;
        return 0;
      }
      return 0xfffffffb;
    }
  }
  return 0xfffffffe;
}

