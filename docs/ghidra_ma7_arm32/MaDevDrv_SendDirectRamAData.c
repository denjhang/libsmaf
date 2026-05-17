/* MaDevDrv_SendDirectRamAData @ 000dd1d8 514B */


/* YAMAHA::MaDevDrv_SendDirectRamAData(unsigned int, unsigned char const*, unsigned int) */

int YAMAHA::MaDevDrv_SendDirectRamAData(uint param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  short sVar9;
  byte local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  byte local_1d;
  byte local_1c;
  
  uVar3 = param_3 * 2;
  if (uVar3 == 0) {
    iVar1 = 0;
  }
  else {
    if ((param_2 != (uchar *)0x0 && param_1 - 0x10000 < 0x4000) && (uVar3 + param_1 < 0x14000)) {
      if (uVar3 < 0x80) {
        bVar2 = (byte)uVar3 | 0x80;
        local_1d = (byte)param_2;
      }
      else {
        local_1d = (byte)uVar3 & 0x7e;
        bVar2 = (byte)((param_3 & 0x7fffffff) >> 6);
      }
      local_20 = (byte)param_1 & 0x7f;
      if (uVar3 < 0x80) {
        local_1d = bVar2;
      }
      if (0x7f < uVar3) {
        bVar2 = bVar2 | 0x80;
      }
      local_1f = (undefined1)(param_1 >> 7);
      local_1e = 0x84;
      if (uVar3 < 0x80) {
        uVar3 = 4;
      }
      else {
        uVar3 = 5;
        local_1c = bVar2;
      }
      MaDevDrv_DisableIrq();
      iVar1 = machdep_WaitFifoEmpty(0);
      if (iVar1 != 0) {
        MaDevDrv_EnableIrq();
        return iVar1;
      }
      machdep_WriteRegN(3,&local_20,uVar3);
      if (param_3 != 0) {
        pbVar7 = param_2 + param_3;
        iVar1 = machdep_WaitFifoEmpty(0);
        if (iVar1 != 0) {
LAB_000dd386:
          MaDevDrv_EnableIrq();
          return iVar1;
        }
        pbVar5 = param_2 + 1;
        iVar8 = 2;
        uVar4 = *param_2 ^ 0x55;
        uVar3 = (uVar4 & 0x7f) >> 4;
        iVar1 = (uVar4 & 0xf) * 0x10;
        if (uVar3 == 0) {
          iVar1 = iVar1 + 8;
        }
        else {
          iVar1 = iVar1 + 0x108;
          if (uVar3 != 1) {
            iVar1 = iVar1 << (uVar3 - 1 & 0xff);
          }
        }
        sVar9 = (short)iVar1;
        if (-1 < (int)(uVar4 << 0x18)) {
          sVar9 = -sVar9;
        }
        machdep_WriteReg(3,(uchar)sVar9);
        machdep_WriteReg(3,(uchar)((ushort)sVar9 >> 8));
        if (pbVar5 != pbVar7) {
          pbVar6 = pbVar5;
          if (((uint)(pbVar7 + ~(uint)param_2) & 1) == 0) goto LAB_000dd304;
          pbVar6 = param_2 + 2;
          iVar8 = 4;
          uVar4 = *pbVar5 ^ 0x55;
          uVar3 = (uVar4 & 0x7f) >> 4;
          iVar1 = (uVar4 & 0xf) << 4;
          if (uVar3 != 0) goto LAB_000dd376;
          do {
            iVar1 = iVar1 + 8;
            while( true ) {
              sVar9 = (short)iVar1;
              if (-1 < (int)(uVar4 << 0x18)) {
                sVar9 = -sVar9;
              }
              machdep_WriteReg(3,(uchar)sVar9);
              machdep_WriteReg(3,(uchar)((ushort)sVar9 >> 8));
              if (pbVar6 == pbVar7) goto LAB_000dd3c2;
LAB_000dd304:
              if (iVar8 == 0x80) {
                iVar1 = machdep_WaitFifoEmpty(0);
                if (iVar1 != 0) goto LAB_000dd386;
                iVar8 = 2;
              }
              else {
                iVar8 = iVar8 + 2;
              }
              pbVar5 = pbVar6 + 1;
              uVar4 = *pbVar6 ^ 0x55;
              uVar3 = (uVar4 & 0x7f) >> 4;
              iVar1 = (uVar4 & 0xf) * 0x10;
              sVar9 = (short)iVar1;
              if (uVar3 == 0) {
                sVar9 = sVar9 + 8;
              }
              else if (uVar3 == 1) {
                sVar9 = sVar9 + 0x108;
              }
              else {
                sVar9 = (short)(iVar1 + 0x108 << (uVar3 - 1 & 0xff));
              }
              if (-1 < (int)(uVar4 << 0x18)) {
                sVar9 = -sVar9;
              }
              machdep_WriteReg(3,(uchar)sVar9);
              machdep_WriteReg(3,(uchar)((ushort)sVar9 >> 8));
              if (iVar8 == 0x80) {
                iVar1 = machdep_WaitFifoEmpty(0);
                if (iVar1 != 0) goto LAB_000dd386;
                iVar8 = 2;
              }
              else {
                iVar8 = iVar8 + 2;
              }
              pbVar6 = pbVar6 + 2;
              uVar4 = *pbVar5 ^ 0x55;
              uVar3 = (uVar4 & 0x7f) >> 4;
              iVar1 = (uVar4 & 0xf) << 4;
              if (uVar3 == 0) break;
LAB_000dd376:
              iVar1 = iVar1 + 0x108;
              if (uVar3 != 1) {
                iVar1 = iVar1 << (uVar3 - 1 & 0xff);
              }
            }
          } while( true );
        }
      }
LAB_000dd3c2:
      MaDevDrv_EnableIrq();
      return 0;
    }
    iVar1 = -2;
  }
  return iVar1;
}

