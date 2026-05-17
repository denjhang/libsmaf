/* MaSndDrv_DelFmExtWave @ 00191ff8 248B */


/* YAMAHA::MaSndDrv_DelFmExtWave(_MACNV_SEQ_INFO*, unsigned int) */

undefined8 YAMAHA::MaSndDrv_DelFmExtWave(_MACNV_SEQ_INFO *param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar3 = DAT_0059a428;
  lVar1 = DAT_0059a420;
  if (param_1 != (_MACNV_SEQ_INFO *)0x0) {
    if (param_2 == 0x17) {
      lVar7 = 1;
    }
    else if (param_2 == 0x1f) {
      lVar7 = 2;
    }
    else {
      if (param_2 != 0xf) {
        return 0xfffffffe;
      }
      lVar7 = 0;
    }
    uVar6 = (ulong)(*(uint *)param_1 >> 8) & 0xff;
    if (uVar6 < 2) {
      bVar2 = (&DAT_0048aa70)[uVar6 * 4 + (ulong)(byte)*(uint *)param_1];
      uVar5 = MaResMgr_FreeFmExtWave((uint)lVar7);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      lVar1 = lVar1 + (ulong)bVar2 * 0xc0;
      uVar4 = MaCmd_SetFmExtWave(-1,(uint)lVar7,0,*(uchar **)(lVar1 + 0x80));
      uVar5 = MaDevDrv_SendDirectPacket(*(uchar **)(lVar1 + 0x80),uVar4);
      if (-1 < (int)uVar5) {
        *(undefined4 *)(lVar3 + (ulong)bVar2 * 0x430 + (lVar7 + 4) * 4) = 0;
        return uVar5;
      }
      return uVar5;
    }
  }
  return 0xfffffffe;
}

