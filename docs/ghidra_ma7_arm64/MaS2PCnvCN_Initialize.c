/* MaS2PCnvCN_Initialize @ 00206f88 204B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaS2PCnvCN_Initialize(unsigned int) */

undefined8 YAMAHA::MaS2PCnvCN_Initialize(uint param_1)

{
  if (DAT_0057d2b8 != 0) {
    return 0xffffffff;
  }
  if (param_1 == 0x14) {
    DAT_0057d2bc = param_1;
    DAT_0057d2c0 = 0x666;
    _DAT_0057de10 = 0;
    _DAT_0057de08 = 0;
    DAT_0057d2c8 = 0;
    DAT_0057d2d0 = DAT_0057d2b8;
    DAT_0057d2d4 = DAT_0057d2b8;
    DAT_0057d2e0 = 4;
    DAT_0057d2e1 = 0;
    DAT_0057d2e2 = 0x3c;
    DAT_0057d2e3 = 2;
    DAT_0057d2e4 = 0;
    DAT_0057d2e6 = 0;
    DAT_0057d2e8 = 0x59;
    DAT_0057dddc = 0;
    DAT_0057dddd = 1;
    DAT_0057ddde = 1;
    DAT_0057dddf = 1;
    DAT_0057dde0 = DAT_0057d2b8;
    DAT_0057dde4 = 0;
    DAT_0057dde8 = 0;
    DAT_0057ddf0 = 0;
    DAT_0057ddf8 = 0;
    DAT_0057ddf9 = 0;
    DAT_0057ddfa = 0;
    DAT_0057ddfb = 0;
    DAT_0057ddfc = 0;
    DAT_0057de00 = DAT_0057d2b8;
    DAT_0057de04 = 0;
    DAT_0057de06 = 0;
    DAT_0057d2b8 = 1;
    return 0;
  }
  return 0xfffffffe;
}

