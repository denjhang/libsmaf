/* MaSndDrv_SetHvScript @ 0007be3c 400B */


/* YAMAHA::MaSndDrv_SetHvScript(_MACNV_SEQ_INFO*, unsigned char const*, unsigned int) */

undefined4 YAMAHA::MaSndDrv_SetHvScript(_MACNV_SEQ_INFO *param_1,uchar *param_2,uint param_3)

{
  uchar uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar5 = *(uint *)param_1;
  piVar3 = (int *)(DAT_0007bfd0 + 0x7be60);
  iVar11 = (uint)*(byte *)(DAT_0007bfcc + 0x7be5a + (uVar5 & 0xff) + ((uVar5 & 0xffff) >> 8) * 4) *
           0x228 + DAT_0007bfd0 + 0x7bf1c;
  if (*(char *)(iVar11 + 0x1d) == -1) {
    return 0xffffffff;
  }
  if (param_2 == (uchar *)0x0) {
    return 0xffffffff;
  }
  *(undefined1 *)(iVar11 + 0x1d) = 0xff;
  if (((((uint)param_2[5] * 0x10000 + (uint)param_2[4] * 0x1000000 + (uint)param_2[7] +
         (uint)param_2[6] * 0x100 < 4) || (param_2[8] != 'H')) || (param_2[9] != 'V')) ||
     (param_2[10] != '#')) {
    iVar11 = *(int *)(DAT_0007bfd4 + 0x7be98);
LAB_0007be98:
    MaResMgr_FreeHv();
    MaResMgr_FreeBuf((uint)*(byte *)(iVar11 + 0xb24));
  }
  else {
    uVar1 = param_2[0xb];
    if (uVar1 == 'J') {
      *(undefined1 *)(iVar11 + 0x1d) = 0;
    }
    else if (uVar1 == 'K') {
      *(undefined1 *)(iVar11 + 0x1d) = 1;
    }
    else {
      if (uVar1 != 'C') {
        iVar11 = *piVar3;
        goto LAB_0007be98;
      }
      *(undefined1 *)(iVar11 + 0x1d) = 2;
    }
    iVar10 = DAT_0007bfdc + 0x7bee6;
    iVar9 = *(int *)(DAT_0007bfd8 + 0x7bee4);
    iVar4 = *(int *)(DAT_0007bfd8 + 0x7bee8);
    *(char *)(iVar9 + 0xadb) = (char)uVar5;
    *(undefined4 *)(iVar9 + 0xab4) = 8;
    bVar2 = *(byte *)(iVar11 + 0x1d);
    *(byte *)(iVar4 + 0x26ed) = bVar2;
    (**(code **)(iVar10 + (uint)bVar2 * 0x14))(0x14);
    **(undefined1 **)(iVar9 + 0xb1c) = 0xdc;
    *(undefined1 *)(*(int *)(iVar9 + 0xb1c) + 1) = 0xfd;
    iVar4 = MaDevDrv_SendDirectPacket(*(uchar **)(iVar9 + 0xb1c),2);
    if (-1 < iVar4) {
      MaDevDrv_WriteIntermediateReg(0xa5,'\0');
      MaDevDrv_WriteIntermediateReg(0xa6,'\0');
      MaDevDrv_WriteIntermediateReg(0xa7,'|');
      do {
        if (param_3 < 8) {
          return 0;
        }
        while( true ) {
          iVar4 = (uint)param_2[5] * 0x10000 + (uint)param_2[4] * 0x1000000 + (uint)param_2[7] +
                  (uint)param_2[6] * 0x100;
          uVar5 = iVar4 + 8;
          uVar8 = param_3 + (-8 - iVar4);
          if (param_3 < uVar5) {
            return 0xffffffff;
          }
          param_3 = uVar8;
          if ((uint)*param_2 * 0x1000000 + (uint)param_2[1] * 0x10000 + (uint)param_2[2] * 0x100 !=
              0x4d736300) break;
          uVar6 = (uint)param_2[3];
          uVar7 = uVar6;
          if (uVar6 < 0x40) {
            *(uchar **)(iVar11 + (uVar6 + 5) * 8) = param_2 + 8;
            uVar7 = (uint)param_2[3];
          }
          param_2 = param_2 + uVar5;
          if (uVar6 < 0x40) {
            uVar7 = iVar11 + uVar7 * 8;
          }
          if (uVar6 < 0x40) {
            *(int *)(uVar7 + 0x2c) = iVar4;
          }
          if (uVar8 < 8) {
            return 0;
          }
        }
        param_2 = param_2 + uVar5;
      } while( true );
    }
  }
  return 0xffffffff;
}

