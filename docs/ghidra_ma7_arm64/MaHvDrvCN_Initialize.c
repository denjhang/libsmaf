/* MaHvDrvCN_Initialize @ 002282f8 604B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaHvDrvCN_Initialize(unsigned int) */

undefined4 YAMAHA::MaHvDrvCN_Initialize(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_0057f558;
  if (DAT_0057f558 == 0) {
    if (param_1 == 0x14) {
      DAT_00580040 = 200;
      DAT_00580048 = 0x4b0;
      DAT_00580084 = 0x12fd;
      DAT_00580080 = 0x3e964;
      DAT_0057f564 = DAT_0057f558;
      _DAT_0057f568 = DAT_0057f558;
      DAT_0057f56c = DAT_0057f558;
      DAT_0057f570 = 1;
      DAT_0057f574 = DAT_0057f558;
      DAT_0057f578 = DAT_0057f558;
      DAT_0057f57c = DAT_0057f558;
      DAT_0057f580 = 0;
      DAT_0057f582 = 0;
      DAT_0057f583 = 0;
      DAT_0057f98c = 0;
      DAT_0057fd98 = 0;
      DAT_0057ffa0 = 1;
      DAT_0057ffa1 = 1;
      DAT_0057ffa4 = DAT_0057f558;
      DAT_0057ffac = 0;
      DAT_00580030 = 0;
      DAT_00580031 = 0;
      DAT_00580044 = DAT_0057f558;
      DAT_005802a0 = 0;
      DAT_005802a2 = 0;
      DAT_005802a3 = 1;
      DAT_00580070 = &DAT_004a9cf0;
      DAT_00580078 = 0x14;
      DAT_0058007c = 8;
      DAT_00580086 = 0x14;
      DAT_00580088 = 0x7c;
      DAT_0058008c = 0x1f0e;
      DAT_00580050 = &DAT_004a9cf0;
      DAT_00580058 = 0x14;
      DAT_0058005c = 8;
      DAT_00580064 = 0xf53;
      DAT_00580066 = 0x14;
      DAT_00580068 = 0x7c;
      DAT_0058006c = 0x1f0e;
      DAT_00580060 = 0x3e964;
      DAT_00580090 = 0;
      DAT_005800a6 = 0;
      DAT_0058009c = DAT_0057f558;
      DAT_005800a8 = DAT_0057f558;
      DAT_005800ac = DAT_0057f558;
      DAT_005800a0 = DAT_0057f558;
      DAT_00580098 = 0;
      DAT_005800a4 = 0;
      DAT_005800c8 = 0;
      DAT_005800be = 0;
      DAT_005800bc = 0;
      DAT_005800ba = 0;
      DAT_005800b8 = 0;
      DAT_005800c0 = 0;
      DAT_005800b0 = &DAT_00580050;
      DAT_0057f558 = 1;
      DAT_0057f55c = iVar1;
      DAT_00580108 = &DAT_004e8660;
      DAT_00580110 = &DAT_004e868e;
      DAT_00580118 = &DAT_004e86bc;
      DAT_00580120 = &DAT_004e86ea;
      DAT_00580128 = &DAT_004e8718;
      DAT_00580130 = &DAT_004e8746;
      DAT_00580138 = &DAT_004e8774;
      DAT_00580140 = &DAT_004e87a2;
      DAT_00580148 = &DAT_004e87d0;
      DAT_00580150 = &DAT_004e87fe;
      DAT_00580188 = 0;
      DAT_00580190 = 0;
      DAT_00580158 = &DAT_004e882c;
      DAT_00580198 = 0;
      DAT_005801a0 = 0;
      DAT_00580160 = &DAT_004e885a;
      DAT_005801a8 = 0;
      DAT_005801b0 = 0;
      DAT_00580168 = &DAT_004e8888;
      DAT_005801b8 = 0;
      DAT_005801c0 = 0;
      DAT_00580170 = &DAT_004e88b6;
      DAT_005801c8 = 0;
      DAT_005801d0 = 0;
      DAT_00580178 = &DAT_004e88e4;
      DAT_005801d8 = 0;
      DAT_005801e0 = 0;
      DAT_00580180 = &DAT_004e8912;
      DAT_005801e8 = 0;
      DAT_005801f0 = 0;
      DAT_005801f8 = 0;
      DAT_00580200 = 0;
      DAT_00580208 = 0;
      DAT_0057f560 = param_1;
      iVar2 = FUN_00226cac(0);
      uVar3 = 0;
      if (iVar2 < 0) {
        uVar3 = 0xffffffff;
        DAT_0057f558 = iVar1;
      }
    }
    else {
      uVar3 = 0xfffffffe;
      DAT_0057f558 = iVar1;
    }
  }
  else {
    uVar3 = 0xffffffff;
    DAT_0057f558 = iVar1;
  }
  return uVar3;
}

