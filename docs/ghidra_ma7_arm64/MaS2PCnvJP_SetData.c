/* MaS2PCnvJP_SetData @ 00201b04 208B */


/* YAMAHA::MaS2PCnvJP_SetData(unsigned char*, unsigned int, void*) */

undefined4 YAMAHA::MaS2PCnvJP_SetData(uchar *param_1,uint param_2,void *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (DAT_0057c580 == 1) {
    if ((param_1 != (uchar *)0x0) && (bVar1 = param_2 == 0, !bVar1)) {
      if (param_2 < 4) {
        return 0xfffffffb;
      }
      if (*param_1 != 'H') {
        return 0xfffffffb;
      }
      if (param_1[1] != 'V') {
        return 0xfffffffb;
      }
      if (param_1[2] != '#') {
        return 0xfffffffb;
      }
      if (param_1[3] != 'J') {
        return 0xfffffffb;
      }
      DAT_0057d23c = (uint)bVar1;
      DAT_0057c590 = param_1;
      DAT_0057c598 = 4;
      DAT_0057c59c = param_2;
      DAT_0057c5a4 = 1;
      DAT_0057c5a8 = 4;
      DAT_0057c5a9 = bVar1;
      DAT_0057c5aa = 0x3c;
      DAT_0057c5ab = 2;
      DAT_0057c5ac = bVar1;
      DAT_0057c5ad = bVar1;
      DAT_0057c5ae = (ushort)bVar1;
      DAT_0057c5b4 = 0x59;
      DAT_0057d239 = 1;
      DAT_0057d24c = bVar1;
      DAT_0057d260 = DAT_0057d23c;
      DAT_0057d268 = DAT_0057d23c;
      return 0;
    }
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

