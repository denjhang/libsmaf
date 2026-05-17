/* MaSndDrv_SetHvScript @ 00192558 640B */


/* YAMAHA::MaSndDrv_SetHvScript(_MACNV_SEQ_INFO*, unsigned char const*, unsigned int) */

undefined8 YAMAHA::MaSndDrv_SetHvScript(_MACNV_SEQ_INFO *param_1,uchar *param_2,uint param_3)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uchar uVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  
  bVar6 = (byte)*(uint *)param_1;
  uVar9 = (ulong)(byte)(&DAT_0048aa70)[((ulong)(*(uint *)param_1 >> 8) & 0xff) * 4 + (ulong)bVar6];
  if (param_2 == (uchar *)0x0) {
    return 0xffffffff;
  }
  lVar1 = uVar9 * 0x430;
  if ((&DAT_0059a44d)[lVar1] == -1) {
    return 0xffffffff;
  }
  (&DAT_0059a44d)[lVar1] = 0xff;
  lVar7 = DAT_0059a420;
  if (((((uint)param_2[5] * 0x10000 + (uint)param_2[4] * 0x1000000 + (uint)param_2[7] +
         (uint)param_2[6] * 0x100 < 4) || (param_2[8] != 'H')) || (param_2[9] != 'V')) ||
     (param_2[10] != '#')) {
LAB_001925f8:
    MaResMgr_FreeHv();
    MaResMgr_FreeBuf((uint)*(byte *)(lVar7 + 0xe0c));
  }
  else {
    uVar5 = param_2[0xb];
    if (uVar5 == 'J') {
      (&DAT_0059a44d)[lVar1] = 0;
    }
    else if (uVar5 == 'K') {
      (&DAT_0059a44d)[lVar1] = 1;
    }
    else {
      if (uVar5 != 'C') goto LAB_001925f8;
      (&DAT_0059a44d)[lVar1] = 2;
    }
    lVar1 = DAT_0059a420;
    *(byte *)(DAT_0059a420 + 0xdab) = bVar6;
    *(undefined4 *)(lVar1 + 0xd84) = 8;
    bVar6 = (&DAT_0059a44d)[uVar9 * 0x430];
    *(byte *)(DAT_0059a428 + 0x4b7d) = bVar6;
    (*(code *)(&PTR_MaHvDrvJP_Initialize_00565950)[(ulong)bVar6 * 5])(0x14);
    **(undefined1 **)(lVar1 + 0xe00) = 0xdc;
    *(undefined1 *)(*(long *)(lVar1 + 0xe00) + 1) = 0xfd;
    iVar8 = MaDevDrv_SendDirectPacket(*(uchar **)(lVar1 + 0xe00),2);
    if (-1 < iVar8) {
      MaDevDrv_WriteIntermediateReg(0xa5,'\0');
      MaDevDrv_WriteIntermediateReg(0xa6,'\0');
      MaDevDrv_WriteIntermediateReg(0xa7,'|');
      while( true ) {
        if (param_3 < 8) {
          return 0;
        }
        iVar8 = (uint)param_2[5] * 0x10000 + (uint)param_2[4] * 0x1000000 + (uint)param_2[7] +
                (uint)param_2[6] * 0x100;
        uVar3 = iVar8 + 8;
        uVar4 = param_3 + (-8 - iVar8);
        if (param_3 < uVar3) break;
        param_3 = uVar4;
        if ((uint)*param_2 * 0x1000000 + (uint)param_2[1] * 0x10000 + (uint)param_2[2] * 0x100 ==
            0x4d736300) {
          if (0x3f < param_2[3]) goto LAB_0019270c;
          (&DAT_0059a460)[(uVar9 * 0x43 + (long)(int)(uint)param_2[3]) * 2] = param_2 + 8;
          pbVar2 = param_2 + 3;
          param_2 = param_2 + uVar3;
          (&DAT_0059a468)[(uVar9 * 0x43 + (ulong)*pbVar2) * 4] = iVar8;
        }
        else {
LAB_0019270c:
          param_2 = param_2 + uVar3;
        }
      }
    }
  }
  return 0xffffffff;
}

