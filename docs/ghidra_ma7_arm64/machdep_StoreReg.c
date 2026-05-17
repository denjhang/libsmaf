/* machdep_StoreReg @ 00178e10 532B */


/* YAMAHA::machdep_StoreReg(unsigned int, unsigned char) */

void YAMAHA::machdep_StoreReg(uint param_1,uchar param_2)

{
  switch(param_1) {
  case 0x6a:
    DAT_0059a3af = param_2;
    return;
  case 0x6b:
    DAT_0059a3b0 = param_2;
    return;
  case 0x6c:
    DAT_0059a3b1 = param_2;
    return;
  case 0x6d:
    DAT_0059a3b4 = param_2;
    return;
  case 0x72:
    DAT_0059a3cd = param_2;
    return;
  case 0x73:
    DAT_0059a3ce = param_2;
    return;
  case 0x74:
    DAT_0059a3ab = param_2;
    return;
  case 0x75:
    DAT_0059a3ac = param_2;
    return;
  case 0x77:
    DAT_0059a3ad = param_2;
    return;
  case 0x78:
    DAT_0059a3ae = param_2;
    return;
  case 0x79:
    DAT_0059a3a8 = param_2;
    return;
  case 0x7a:
    DAT_0059a3a9 = param_2;
    return;
  case 0x7c:
    DAT_0059a3aa = param_2;
    return;
  case 0xb6:
    DAT_0059a3ba = param_2;
    return;
  case 0xb7:
    DAT_0059a3bb = param_2;
    return;
  case 0xb8:
    DAT_0059a3bc = param_2;
    return;
  case 0xb9:
    DAT_0059a3bd = param_2;
    return;
  case 0xba:
    DAT_0059a3be = param_2;
    return;
  case 0xbb:
    DAT_0059a3bf = param_2;
    return;
  case 0xbc:
    DAT_0059a3c0 = param_2;
    return;
  case 0xbd:
    DAT_0059a3c1 = param_2;
    return;
  case 0xbe:
    DAT_0059a3c2 = param_2;
    return;
  case 0xbf:
    DAT_0059a3b7 = param_2;
    return;
  case 0xc0:
    DAT_0059a3b8 = param_2;
    return;
  case 0xc1:
    DAT_0059a3c3 = param_2;
    return;
  case 0xc2:
    DAT_0059a3c4 = param_2;
    return;
  case 0xc3:
    DAT_0059a3c5 = param_2;
    return;
  case 0xc4:
    DAT_0059a3c6 = param_2;
    return;
  case 0xc5:
    DAT_0059a3cf = param_2;
    return;
  case 0xc6:
    DAT_0059a3d0 = param_2;
    break;
  case 200:
    DAT_0059a3c7 = param_2;
    return;
  case 0xca:
    DAT_0059a3c8 = param_2;
    return;
  case 0xcc:
    DAT_0059a3c9 = param_2;
    return;
  case 0xce:
    DAT_0059a3ca = param_2;
    return;
  case 0xd0:
    DAT_0059a3b9 = param_2;
    return;
  case 0xd1:
    DAT_0059a3b2 = param_2;
    return;
  case 0xd2:
    DAT_0059a3b3 = param_2;
    return;
  case 0xd3:
    DAT_0059a3b5 = param_2;
    return;
  case 0xd4:
    DAT_0059a3b6 = param_2;
    return;
  case 0xd5:
    DAT_0059a3cb = param_2;
    return;
  case 0xd6:
    DAT_0059a3cc = param_2;
    return;
  }
  return;
}

