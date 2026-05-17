/* machdep_StoreReg @ 00066cbc 396B */


/* YAMAHA::machdep_StoreReg(unsigned int, unsigned char) */

void YAMAHA::machdep_StoreReg(uint param_1,uchar param_2)

{
  switch(param_1) {
  case 0x6a:
    *(uchar *)((int)&DAT_00066f24 + DAT_00066fc4 + 3) = param_2;
    return;
  case 0x6b:
    *(uchar *)(DAT_00066fc0 + 0x66f20) = param_2;
    return;
  case 0x6c:
    *(uchar *)(DAT_00066fbc + 0x66f17) = param_2;
    return;
  case 0x6d:
    *(uchar *)(DAT_00066fb8 + 0x66f10) = param_2;
    return;
  case 0x72:
    *(uchar *)(DAT_00066fb4 + 0x66f1f) = param_2;
    return;
  case 0x73:
    *(uchar *)(DAT_00066fb0 + 0x66f16) = param_2;
    return;
  case 0x74:
    *(uchar *)(DAT_00066fac + 0x66ee9) = param_2;
    return;
  case 0x75:
    *(uchar *)(DAT_00066fa8 + 0x66ee0) = param_2;
    return;
  case 0x77:
    *(uchar *)(DAT_00066fa4 + 0x66ed9) = param_2;
    return;
  case 0x78:
    *(uchar *)(DAT_00066fa0 + 0x66ed2) = param_2;
    return;
  case 0x79:
    *(uchar *)(DAT_00066f9c + 0x66ec2) = param_2;
    return;
  case 0x7a:
    *(uchar *)(DAT_00066f98 + 0x66eb9) = param_2;
    return;
  case 0x7c:
    *(uchar *)(DAT_00066f94 + 0x66eb2) = param_2;
    return;
  case 0xb6:
    *(uchar *)(DAT_00066f90 + 0x66eba) = param_2;
    return;
  case 0xb7:
    *(uchar *)(DAT_00066f8c + 0x66eb1) = param_2;
    return;
  case 0xb8:
    *(uchar *)(DAT_00066f88 + 0x66ea8) = param_2;
    return;
  case 0xb9:
    *(uchar *)(DAT_00066f84 + 0x66ea1) = param_2;
    return;
  case 0xba:
    *(uchar *)(DAT_00066f80 + 0x66e9a) = param_2;
    return;
  case 0xbb:
    *(uchar *)(DAT_00066f7c + 0x66e91) = param_2;
    return;
  case 0xbc:
    *(uchar *)(DAT_00066f78 + 0x66e88) = param_2;
    return;
  case 0xbd:
    *(uchar *)(DAT_00066f74 + 0x66e81) = param_2;
    return;
  case 0xbe:
    *(uchar *)(DAT_00066f70 + 0x66e7a) = param_2;
    return;
  case 0xbf:
    *(uchar *)(DAT_00066f6c + 0x66e65) = param_2;
    return;
  case 0xc0:
    *(uchar *)(DAT_00066f68 + 0x66e5c) = param_2;
    return;
  case 0xc1:
    *(uchar *)(DAT_00066f64 + 0x66e5f) = param_2;
    return;
  case 0xc2:
    *(uchar *)(DAT_00066f60 + 0x66e58) = param_2;
    return;
  case 0xc3:
    *(uchar *)(DAT_00066f5c + 0x66e4f) = param_2;
    return;
  case 0xc4:
    *(uchar *)(DAT_00066f58 + 0x66e46) = param_2;
    return;
  case 0xc5:
    *(uchar *)(DAT_00066f54 + 0x66e45) = param_2;
    return;
  case 0xc6:
    *(uchar *)(DAT_00066f24 + 0x66dce) = param_2;
    break;
  case 200:
    *(uchar *)(DAT_00066f50 + 0x66e33) = param_2;
    return;
  case 0xca:
    *(uchar *)(DAT_00066f4c + 0x66e28) = param_2;
    return;
  case 0xcc:
    *(uchar *)(DAT_00066f48 + 0x66e1f) = param_2;
    return;
  case 0xce:
    *(uchar *)(DAT_00066f44 + 0x66e16) = param_2;
    return;
  case 0xd0:
    *(uchar *)(DAT_00066f40 + 0x66dfb) = param_2;
    return;
  case 0xd1:
    *(uchar *)(DAT_00066f3c + 0x66dea) = param_2;
    return;
  case 0xd2:
    *(uchar *)(DAT_00066f38 + 0x66de3) = param_2;
    return;
  case 0xd3:
    *(uchar *)(DAT_00066f34 + 0x66ddd) = param_2;
    return;
  case 0xd4:
    *(uchar *)(DAT_00066f30 + 0x66dd4) = param_2;
    return;
  case 0xd5:
    *(uchar *)(DAT_00066f2c + 0x66ddd) = param_2;
    return;
  case 0xd6:
    *(uchar *)(DAT_00066f28 + 0x66dd4) = param_2;
    return;
  }
  return;
}

