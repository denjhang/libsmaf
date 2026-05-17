/* MaHvDrvJP_Initialize @ 00222e64 620B */


/* YAMAHA::MaHvDrvJP_Initialize(unsigned int) */

undefined4 YAMAHA::MaHvDrvJP_Initialize(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0057e810;
  if (DAT_0057e810 == 0) {
    if (param_1 == 0x14) {
      DAT_0057f2f4 = 200;
      DAT_0057f300 = &DAT_004967c0;
      DAT_0057f2fc = 0x4b0;
      DAT_0057f308 = 0x14;
      DAT_0057f30c = 8;
      DAT_0057f314 = 0xf88;
      DAT_0057e81c = DAT_0057e810;
      DAT_0057e820 = DAT_0057e810;
      DAT_0057e824 = DAT_0057e810;
      DAT_0057e828 = 1;
      DAT_0057e82c = DAT_0057e810;
      DAT_0057e830 = DAT_0057e810;
      DAT_0057e834 = DAT_0057e810;
      DAT_0057e838 = 0;
      DAT_0057e83a = 0;
      DAT_0057e83b = 0;
      DAT_0057ec44 = 0;
      DAT_0057f050 = 0;
      DAT_0057f258 = 1;
      DAT_0057f259 = 1;
      DAT_0057f25c = DAT_0057e810;
      DAT_0057f260 = 0;
      DAT_0057f26c = 0;
      DAT_0057f2f0 = 0;
      DAT_0057f2f1 = 0;
      DAT_0057f2f2 = 0;
      DAT_0057f2f8 = DAT_0057e810;
      DAT_0057f550 = 0;
      DAT_0057f552 = 0;
      DAT_0057f553 = 1;
      DAT_0057f316 = 0x16;
      DAT_0057f318 = 0x86;
      DAT_0057f31c = 0x8ac;
      DAT_0057f310 = 0x911c;
      DAT_0057f328 = 0x14;
      DAT_0057f32c = 8;
      DAT_0057f320 = &DAT_0049f8e0;
      DAT_0057f334 = 0x1373;
      DAT_0057f336 = 0x16;
      DAT_0057f338 = 0x86;
      DAT_0057f33c = 0x8ac;
      DAT_0057f330 = 0x93a6;
      DAT_0057f340 = 0;
      DAT_0057f356 = 0;
      DAT_0057f34c = DAT_0057e810;
      DAT_0057f358 = DAT_0057e810;
      DAT_0057f35c = DAT_0057e810;
      DAT_0057f350 = DAT_0057e810;
      DAT_0057f348 = 0;
      DAT_0057f354 = 0;
      DAT_0057f378 = 0;
      DAT_0057f36e = 0;
      DAT_0057f36c = 0;
      DAT_0057f36a = 0;
      DAT_0057f368 = 0;
      DAT_0057f370 = 0;
      DAT_0057f360 = &DAT_0057f300;
      DAT_0057e810 = 1;
      DAT_0057e814 = iVar1;
      DAT_0057f3b8 = &DAT_004a8c90;
      DAT_0057f3c0 = &DAT_004a8cbe;
      DAT_0057f3c8 = &DAT_004a8cec;
      DAT_0057f3d0 = &DAT_004a8d1a;
      DAT_0057f3d8 = &DAT_004a8d48;
      DAT_0057f3e0 = &DAT_004a8d76;
      DAT_0057f3e8 = &DAT_004a8da4;
      DAT_0057f3f0 = &DAT_004a8dd2;
      DAT_0057f438 = 0;
      DAT_0057f440 = 0;
      DAT_0057f3f8 = &DAT_004a8e00;
      DAT_0057f448 = 0;
      DAT_0057f450 = 0;
      DAT_0057f400 = &DAT_004a8e2e;
      DAT_0057f458 = 0;
      DAT_0057f460 = 0;
      DAT_0057f408 = &DAT_004a8e5c;
      DAT_0057f468 = 0;
      DAT_0057f470 = 0;
      DAT_0057f410 = &DAT_004a8e8a;
      DAT_0057f478 = 0;
      DAT_0057f480 = 0;
      DAT_0057f418 = &DAT_004a8eb8;
      DAT_0057f488 = 0;
      DAT_0057f490 = 0;
      DAT_0057f420 = &DAT_004a8ee6;
      DAT_0057f498 = 0;
      DAT_0057f4a0 = 0;
      DAT_0057f428 = &DAT_004a8f14;
      DAT_0057f4a8 = 0;
      DAT_0057f4b0 = 0;
      DAT_0057f430 = &DAT_004a8f42;
      DAT_0057f4b8 = 0;
      DAT_0057e818 = param_1;
      iVar2 = FUN_00221964(0);
      uVar3 = 0;
      if (iVar2 < 0) {
        uVar3 = 0xffffffff;
        DAT_0057e810 = iVar1;
      }
    }
    else {
      uVar3 = 0xfffffffe;
      DAT_0057e810 = iVar1;
    }
  }
  else {
    uVar3 = 0xffffffff;
    DAT_0057e810 = iVar1;
  }
  return uVar3;
}

