/* MaSndDrv_SetWtWave @ 001920f0 484B */


/* YAMAHA::MaSndDrv_SetWtWave(_MACNV_SEQ_INFO*, unsigned int, unsigned int, unsigned char const*,
   unsigned int) */

undefined8
YAMAHA::MaSndDrv_SetWtWave
          (_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  
  lVar6 = DAT_0059a428;
  if ((param_4 == (uchar *)0x0 || param_5 == 0) || (param_1 == (_MACNV_SEQ_INFO *)0x0)) {
    return 0xfffffffe;
  }
  uVar3 = *(uint *)param_1;
  uVar8 = (ulong)(uVar3 >> 8) & 0xff;
  uVar2 = uVar3 & 0xff;
  if (1 < uVar8) {
    return 0xfffffffe;
  }
  lVar9 = (ulong)(byte)(&DAT_0048aa70)[uVar8 * 4 + (ulong)(byte)uVar3] * 0x430;
  lVar1 = DAT_0059a428 + lVar9;
  uVar5 = *(uint *)(DAT_0059a428 + lVar9);
  uVar3 = *(uint *)(lVar1 + 4);
  switch(param_3) {
  case 0:
    if (uVar3 < param_5) {
      return 0xfffffffd;
    }
    uVar7 = MaCmd_SetWtWave(uVar2,param_2,uVar5);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = MaDevDrv_SendDirectRamData(uVar5,param_4,param_5);
    break;
  case 1:
    uVar10 = (param_5 >> 3) * 7;
    if ((param_5 & 7) != 0) {
      uVar10 = uVar10 + ((param_5 & 7) - 1);
    }
    if (uVar3 < uVar10) {
      return 0xfffffffd;
    }
    uVar7 = MaCmd_SetWtWave(uVar2,param_2,uVar5);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = MaDevDrv_SendDirectRamEncData(uVar5,param_4,param_5);
    param_5 = uVar10;
    break;
  case 2:
    if (uVar3 < param_5 << 1) {
      return 0xfffffffd;
    }
    uVar7 = MaCmd_SetWtWave(uVar2,param_2,uVar5);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = MaDevDrv_SendDirectRamAData(uVar5,param_4,param_5);
    param_5 = param_5 << 1;
    break;
  default:
    return 0xffffffff;
  case 4:
    if (uVar3 < param_5 << 1) {
      return 0xfffffffd;
    }
    uVar7 = MaCmd_SetWtWave(uVar2,param_2,uVar5);
    if ((int)uVar7 < 0) {
      return uVar7;
    }
    uVar7 = MaDevDrv_SendDirectRamUData(uVar5,param_4,param_5);
    param_5 = param_5 << 1;
  }
  if (-1 < (int)uVar7) {
    iVar4 = *(int *)(lVar1 + 4);
    uVar2 = param_5 + 1 & 0xfffffffe;
    *(uint *)(lVar6 + lVar9) = *(int *)(lVar6 + lVar9) + uVar2;
    *(uint *)(lVar1 + 4) = iVar4 - uVar2;
    return uVar7;
  }
  return uVar7;
}

