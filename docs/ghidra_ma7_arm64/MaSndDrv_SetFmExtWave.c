/* MaSndDrv_SetFmExtWave @ 00191de8 520B */


/* YAMAHA::MaSndDrv_SetFmExtWave(_MACNV_SEQ_INFO*, unsigned int, unsigned int, unsigned char const*,
   unsigned int) */

undefined8
YAMAHA::MaSndDrv_SetFmExtWave
          (_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,uchar *param_4,uint param_5)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar2 = DAT_0059a420;
  if ((param_4 != (uchar *)0x0 && param_5 != 0) &&
     (uVar10 = (ulong)(param_1 == (_MACNV_SEQ_INFO *)0x0), param_1 != (_MACNV_SEQ_INFO *)0x0)) {
    if (param_2 == 0x17) {
      uVar10 = 1;
    }
    else if (param_2 == 0x1f) {
      uVar10 = 2;
    }
    else if (param_2 != 0xf) {
      return 0xfffffffe;
    }
    uVar8 = (ulong)(*(uint *)param_1 >> 8) & 0xff;
    if (uVar8 < 2) {
      bVar4 = (&DAT_0048aa70)[uVar8 * 4 + (ulong)(byte)*(uint *)param_1];
      lVar9 = (ulong)bVar4 * 0x430;
      puVar1 = (undefined8 *)(DAT_0059a428 + lVar9);
      uVar3 = *(uint *)(DAT_0059a428 + lVar9);
      if (*(uint *)((long)puVar1 + 4) < 0x800) {
        return 0xfffffffd;
      }
      uVar6 = MaResMgr_AllocFmExtWave((uint)uVar10,uVar3);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      if (param_3 == 0) {
        if (param_5 < 0x800) {
          uVar6 = MaDevDrv_SendDirectRamData(uVar3,param_4,param_5);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = MaDevDrv_SendDirectRamVal(param_5 + uVar3,0x800 - param_5,'\0');
        }
        else {
          uVar6 = MaDevDrv_SendDirectRamData(uVar3,param_4,0x800);
        }
      }
      else {
        uVar5 = (param_5 >> 3) * 7;
        if ((param_5 & 7) != 0) {
          uVar5 = uVar5 + ((param_5 & 7) - 1);
        }
        if (uVar5 < 0x800) {
          uVar6 = MaDevDrv_SendDirectRamEncData(uVar3,param_4,param_5);
          if ((int)uVar6 < 0) {
            return uVar6;
          }
          uVar6 = MaDevDrv_SendDirectRamVal(uVar5 + uVar3,0x800 - uVar5,'\0');
        }
        else {
          uVar6 = MaDevDrv_SendDirectRamEncData(uVar3,param_4,0x925);
        }
      }
      if (-1 < (int)uVar6) {
        lVar2 = lVar2 + (ulong)bVar4 * 0xc0;
        uVar5 = MaCmd_SetFmExtWave(-1,(uint)uVar10,uVar3,*(uchar **)(lVar2 + 0x80));
        uVar7 = MaDevDrv_SendDirectPacket(*(uchar **)(lVar2 + 0x80),uVar5);
        uVar6 = DAT_00191ff0;
        if (-1 < (int)uVar7) {
          *(uint *)((long)puVar1 + (uVar10 + 4) * 4) = uVar3;
          *puVar1 = CONCAT44((int)((ulong)*puVar1 >> 0x20) + (int)((ulong)uVar6 >> 0x20),
                             (int)*puVar1 + (int)uVar6);
          return uVar7;
        }
        return uVar7;
      }
      return uVar6;
    }
  }
  return 0xfffffffe;
}

