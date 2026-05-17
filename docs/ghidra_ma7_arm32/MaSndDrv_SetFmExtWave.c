/* MaSndDrv_SetFmExtWave @ 0007b958 352B */


/* YAMAHA::MaSndDrv_SetFmExtWave(_MACNV_SEQ_INFO*, unsigned int, unsigned int, unsigned char const*,
   unsigned int) */

int YAMAHA::MaSndDrv_SetFmExtWave
              (_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar8 = (uint)(param_4 == (uchar *)0x0 || param_1 == (_MACNV_SEQ_INFO *)0x0);
  if ((param_4 != (uchar *)0x0 && param_1 != (_MACNV_SEQ_INFO *)0x0) && (param_5 != 0)) {
    if (param_2 == 0x17) {
      uVar8 = 1;
    }
    else if (param_2 == 0x1f) {
      uVar8 = 2;
    }
    else if (param_2 != 0xf) {
      return -2;
    }
    uVar2 = (*(uint *)param_1 & 0xffff) >> 8;
    if (uVar2 < 2) {
      uVar6 = (uint)*(byte *)(DAT_0007bab8 + 0x7b9ae + (*(uint *)param_1 & 0xff) + uVar2 * 4);
      iVar3 = *(int *)(DAT_0007babc + 0x7b9b0);
      iVar5 = *(int *)(DAT_0007babc + 0x7b9b4);
      iVar4 = uVar6 * 0x228;
      iVar7 = iVar5 + iVar4;
      uVar2 = *(uint *)(iVar5 + iVar4);
      if (*(uint *)(iVar7 + 4) < 0x800) {
        return -3;
      }
      iVar1 = MaResMgr_AllocFmExtWave(uVar8,uVar2);
      if (iVar1 < 0) {
        return iVar1;
      }
      if (param_3 == 0) {
        if (param_5 < 0x800) {
          iVar1 = MaDevDrv_SendDirectRamData(uVar2,param_4,param_5);
          if (iVar1 < 0) {
            return iVar1;
          }
          iVar1 = MaDevDrv_SendDirectRamVal(param_5 + uVar2,0x800 - param_5,'\0');
        }
        else {
          iVar1 = MaDevDrv_SendDirectRamData(uVar2,param_4,0x800);
        }
      }
      else {
        uVar10 = param_5 & 7;
        bVar11 = uVar10 != 0;
        if (bVar11) {
          uVar10 = uVar10 - 1;
        }
        uVar9 = (param_5 >> 3) * 7;
        if (bVar11) {
          uVar9 = uVar9 + uVar10;
        }
        if (uVar9 < 0x800) {
          iVar1 = MaDevDrv_SendDirectRamEncData(uVar2,param_4,param_5);
          if (iVar1 < 0) {
            return iVar1;
          }
          iVar1 = MaDevDrv_SendDirectRamVal(uVar9 + uVar2,0x800 - uVar9,'\0');
        }
        else {
          iVar1 = MaDevDrv_SendDirectRamEncData(uVar2,param_4,0x925);
        }
      }
      if (-1 < iVar1) {
        iVar3 = iVar3 + uVar6 * 0x98;
        uVar6 = MaCmd_SetFmExtWave(-1,uVar8,uVar2,*(uchar **)(iVar3 + 0x6c));
        iVar3 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar3 + 0x6c),uVar6);
        if (-1 < iVar3) {
          *(uint *)(iVar7 + (uVar8 + 4) * 4) = uVar2;
          *(int *)(iVar5 + iVar4) = *(int *)(iVar5 + iVar4) + 0x800;
          *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + -0x800;
          return iVar3;
        }
        return iVar3;
      }
      return iVar1;
    }
  }
  return -2;
}

