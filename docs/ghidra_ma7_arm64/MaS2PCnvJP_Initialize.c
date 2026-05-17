/* MaS2PCnvJP_Initialize @ 00201c10 208B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaS2PCnvJP_Initialize(unsigned int) */

undefined8 YAMAHA::MaS2PCnvJP_Initialize(uint param_1)

{
  undefined8 uVar1;
  
  if (DAT_0057c580 == 0) {
    if (param_1 == 0x14) {
      _DAT_0057d264 = 0;
      _DAT_0057d25c = 0;
      DAT_0057c590 = 0;
      DAT_0057c59c = DAT_0057c580;
      uVar1 = 0;
      DAT_0057c598 = DAT_0057c580;
      DAT_0057c588 = 0x666;
      DAT_0057c5b4 = 0x59;
      DAT_0057c5a9 = 0;
      DAT_0057c5aa = 0x3c;
      DAT_0057c5ab = 2;
      DAT_0057c5ae = 0;
      DAT_0057c5ac = 0;
      DAT_0057c5ad = 0;
      DAT_0057d238 = 0;
      DAT_0057c5a8 = 4;
      DAT_0057d23a = 1;
      DAT_0057d23b = 1;
      DAT_0057d239 = 1;
      DAT_0057d23c = DAT_0057c580;
      DAT_0057d24c = 0;
      DAT_0057d250 = DAT_0057c580;
      DAT_0057d254 = DAT_0057c580;
      DAT_0057d258 = 0;
      DAT_0057d25a = 0;
      DAT_0057c580 = 1;
      DAT_0057d240 = 0;
      DAT_0057d248 = 0;
      DAT_0057d249 = 0;
      DAT_0057d24a = 0;
      DAT_0057d24b = 0;
      DAT_0057c584 = 0x14;
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

