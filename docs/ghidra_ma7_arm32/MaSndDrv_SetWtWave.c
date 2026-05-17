/* MaSndDrv_SetWtWave @ 0007bb50 258B */


/* YAMAHA::MaSndDrv_SetWtWave(_MACNV_SEQ_INFO*, unsigned int, unsigned int, unsigned char const*,
   unsigned int) */

int YAMAHA::MaSndDrv_SetWtWave
              (_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  if ((param_4 == (uchar *)0x0 || param_1 == (_MACNV_SEQ_INFO *)0x0) || (param_5 == 0)) {
    return -2;
  }
  uVar3 = (*(uint *)param_1 & 0xffff) >> 8;
  uVar1 = *(uint *)param_1 & 0xff;
  if (1 < uVar3) {
    return -2;
  }
  iVar5 = *(int *)(DAT_0007bc5c + 0x7bb86);
  iVar4 = (uint)*(byte *)(DAT_0007bc58 + 0x7bb80 + uVar1 + uVar3 * 4) * 0x228;
  iVar6 = iVar5 + iVar4;
  uVar7 = *(uint *)(iVar5 + iVar4);
  uVar3 = *(uint *)(iVar6 + 4);
  switch(param_3) {
  case 0:
    if (uVar3 < param_5) {
      return -3;
    }
    iVar2 = MaCmd_SetWtWave(uVar1,param_2,uVar7);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = MaDevDrv_SendDirectRamData(uVar7,param_4,param_5);
    break;
  case 1:
    uVar9 = param_5 & 7;
    bVar10 = uVar9 != 0;
    if (bVar10) {
      uVar9 = uVar9 - 1;
    }
    uVar8 = (param_5 >> 3) * 7;
    if (bVar10) {
      uVar8 = uVar8 + uVar9;
    }
    if (uVar3 < uVar8) {
      return -3;
    }
    iVar2 = MaCmd_SetWtWave(uVar1,param_2,uVar7);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = MaDevDrv_SendDirectRamEncData(uVar7,param_4,param_5);
    param_5 = uVar8;
    break;
  case 2:
    if (uVar3 < param_5 << 1) {
      return -3;
    }
    iVar2 = MaCmd_SetWtWave(uVar1,param_2,uVar7);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = MaDevDrv_SendDirectRamAData(uVar7,param_4,param_5);
    param_5 = param_5 << 1;
    break;
  default:
    return -1;
  case 4:
    if (uVar3 < param_5 << 1) {
      return -3;
    }
    iVar2 = MaCmd_SetWtWave(uVar1,param_2,uVar7);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = MaDevDrv_SendDirectRamUData(uVar7,param_4,param_5);
    param_5 = param_5 << 1;
  }
  if (-1 < iVar2) {
    uVar1 = param_5 + 1 & 0xfffffffe;
    *(uint *)(iVar5 + iVar4) = *(int *)(iVar5 + iVar4) + uVar1;
    *(uint *)(iVar6 + 4) = *(int *)(iVar6 + 4) - uVar1;
    return iVar2;
  }
  return iVar2;
}

