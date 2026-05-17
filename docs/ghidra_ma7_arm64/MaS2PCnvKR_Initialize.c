/* MaS2PCnvKR_Initialize @ 0021565c 208B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaS2PCnvKR_Initialize(unsigned int) */

undefined8 YAMAHA::MaS2PCnvKR_Initialize(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_0057de20 == 0) {
    if (param_1 == 0x14) {
      _DAT_0057e7e4 = 0;
      _DAT_0057e7dc = 0;
      DAT_0057de30 = 0;
      DAT_0057de3c = DAT_0057de20;
      uVar1 = 0;
      DAT_0057de38 = DAT_0057de20;
      DAT_0057de28 = 0x666;
      DAT_0057de54 = 0x59;
      DAT_0057de49 = 0;
      DAT_0057de4a = 0x3c;
      DAT_0057de4b = 2;
      DAT_0057de4e = 0;
      DAT_0057de4c = 0;
      DAT_0057de4d = 0;
      DAT_0057e7b8 = 0;
      DAT_0057de48 = 4;
      DAT_0057e7ba = 1;
      DAT_0057e7bb = 1;
      DAT_0057e7b9 = 1;
      DAT_0057e7bc = DAT_0057de20;
      DAT_0057e7cc = 0;
      DAT_0057e7d0 = DAT_0057de20;
      DAT_0057e7d4 = DAT_0057de20;
      DAT_0057e7d8 = 0;
      DAT_0057e7da = 0;
      DAT_0057de20 = 1;
      DAT_0057e7c0 = 0;
      DAT_0057e7c8 = 0;
      DAT_0057e7c9 = 0;
      DAT_0057e7ca = 0;
      DAT_0057e7cb = 0;
      DAT_0057de24 = 0x14;
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

