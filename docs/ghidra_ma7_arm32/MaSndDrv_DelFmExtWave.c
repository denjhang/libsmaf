/* MaSndDrv_DelFmExtWave @ 0007bac0 134B */


/* YAMAHA::MaSndDrv_DelFmExtWave(_MACNV_SEQ_INFO*, unsigned int) */

int YAMAHA::MaSndDrv_DelFmExtWave(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 != (_MACNV_SEQ_INFO *)0x0) {
    if (param_2 == 0x17) {
      uVar4 = 1;
    }
    else if (param_2 == 0x1f) {
      uVar4 = 2;
    }
    else {
      if (param_2 != 0xf) {
        return -2;
      }
      uVar4 = 0;
    }
    uVar3 = (*(uint *)param_1 & 0xffff) >> 8;
    if (uVar3 < 2) {
      uVar3 = (uint)*(byte *)(DAT_0007bb48 + 0x7bafa + (*(uint *)param_1 & 0xff) + uVar3 * 4);
      iVar5 = *(int *)(DAT_0007bb4c + 0x7bafc);
      iVar6 = *(int *)(DAT_0007bb4c + 0x7bb00);
      iVar1 = MaResMgr_FreeFmExtWave(uVar4);
      if (iVar1 < 0) {
        return iVar1;
      }
      iVar5 = iVar5 + uVar3 * 0x98;
      uVar2 = MaCmd_SetFmExtWave(-1,uVar4,0,*(uchar **)(iVar5 + 0x6c));
      iVar1 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar5 + 0x6c),uVar2);
      if (-1 < iVar1) {
        *(undefined4 *)(uVar3 * 0x228 + iVar6 + (uVar4 + 4) * 4) = 0;
        return iVar1;
      }
      return iVar1;
    }
  }
  return -2;
}

