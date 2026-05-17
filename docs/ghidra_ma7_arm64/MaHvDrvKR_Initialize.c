/* MaHvDrvKR_Initialize @ 0022db9c 636B */


/* YAMAHA::MaHvDrvKR_Initialize(unsigned int) */

undefined4 YAMAHA::MaHvDrvKR_Initialize(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_005802a8;
  if (DAT_005802a8 == 0) {
    if (param_1 == 0x14) {
      DAT_00580de0 = 200;
      DAT_00580de8 = 0x4b0;
      DAT_00580df0 = &DAT_004e91c0;
      DAT_00580df8 = 0x14;
      DAT_00580e04 = 0xeb9;
      DAT_005802b4 = DAT_005802a8;
      DAT_005802b8 = DAT_005802a8;
      DAT_005802bc = DAT_005802a8;
      DAT_005802c0 = 1;
      DAT_005802c4 = DAT_005802a8;
      DAT_005802c8 = DAT_005802a8;
      DAT_005802cc = DAT_005802a8;
      DAT_005802d0 = 0;
      DAT_005802d2 = 0;
      DAT_005802d3 = 0;
      DAT_005806dc = 0;
      DAT_00580ae8 = 0;
      DAT_00580cf0 = 1;
      DAT_00580cf1 = 1;
      DAT_00580cf4 = DAT_005802a8;
      DAT_00580cf8 = 0;
      DAT_00580d14 = 0;
      DAT_00580d99 = 0;
      DAT_00580d9a = 0;
      DAT_00580d98 = 0;
      DAT_00580ddc = 0;
      DAT_00580de4 = DAT_005802a8;
      DAT_00581040 = 0;
      DAT_00581042 = 0;
      DAT_00581043 = 1;
      DAT_00580dfc = 8;
      DAT_00580e06 = 0x11;
      DAT_00580e08 = 0x6d;
      DAT_00580e00 = 0x20f51;
      DAT_00580e18 = 0x14;
      DAT_00580e0c = 0x13c9;
      DAT_00580e1c = 8;
      DAT_00580e10 = &DAT_0050a120;
      DAT_00580e24 = 0x122e;
      DAT_00580e26 = 0x11;
      DAT_00580e28 = 0x6d;
      DAT_00580e2c = 0x13c9;
      DAT_00580e20 = 0x232a9;
      DAT_00580e30 = 0;
      DAT_00580e46 = 0;
      DAT_00580e3c = DAT_005802a8;
      DAT_00580e48 = DAT_005802a8;
      DAT_00580e4c = DAT_005802a8;
      DAT_00580e40 = DAT_005802a8;
      DAT_00580e38 = 0;
      DAT_00580e44 = 0;
      DAT_00580e68 = 0;
      DAT_00580e5e = 0;
      DAT_00580e5c = 0;
      DAT_00580e5a = 0;
      DAT_00580e58 = 0;
      DAT_00580e60 = 0;
      DAT_00580e50 = &DAT_00580df0;
      DAT_005802a8 = 1;
      DAT_005802ac = iVar1;
      DAT_00580ea8 = &DAT_0052d3d0;
      DAT_00580eb0 = &DAT_0052d3fe;
      DAT_00580eb8 = &DAT_0052d42c;
      DAT_00580ec0 = &DAT_0052d45a;
      DAT_00580ec8 = &DAT_0052d488;
      DAT_00580ed0 = &DAT_0052d4b6;
      DAT_00580ed8 = &DAT_0052d4e4;
      DAT_00580f28 = 0;
      DAT_00580f30 = 0;
      DAT_00580ee0 = &DAT_0052d512;
      DAT_00580f38 = 0;
      DAT_00580f40 = 0;
      DAT_00580ee8 = &DAT_0052d540;
      DAT_00580f48 = 0;
      DAT_00580f50 = 0;
      DAT_00580ef0 = &DAT_0052d56e;
      DAT_00580f58 = 0;
      DAT_00580f60 = 0;
      DAT_00580ef8 = &DAT_0052d59c;
      DAT_00580f68 = 0;
      DAT_00580f70 = 0;
      DAT_00580f00 = &DAT_0052d5ca;
      DAT_00580f78 = 0;
      DAT_00580f80 = 0;
      DAT_00580f08 = &DAT_0052d5f8;
      DAT_00580f88 = 0;
      DAT_00580f90 = 0;
      DAT_00580f10 = &DAT_0052d626;
      DAT_00580f98 = 0;
      DAT_00580fa0 = 0;
      DAT_00580f18 = &DAT_0052d654;
      DAT_00580f20 = &DAT_0052d682;
      DAT_00580fa8 = 0;
      DAT_005802b0 = param_1;
      iVar2 = FUN_0022ceac(0);
      uVar3 = 0;
      if (iVar2 < 0) {
        uVar3 = 0xffffffff;
        DAT_005802a8 = iVar1;
      }
    }
    else {
      uVar3 = 0xfffffffe;
      DAT_005802a8 = iVar1;
    }
  }
  else {
    uVar3 = 0xffffffff;
    DAT_005802a8 = iVar1;
  }
  return uVar3;
}

