/* MaDevDrv_SendDirectRamUData @ 000dd3dc 456B */


/* YAMAHA::MaDevDrv_SendDirectRamUData(unsigned int, unsigned char const*, unsigned int) */

int YAMAHA::MaDevDrv_SendDirectRamUData(uint param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  short sVar5;
  byte *pbVar6;
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
        pbVar6 = param_2 + param_3;
        iVar1 = machdep_WaitFifoEmpty(0);
        if (iVar1 != 0) {
LAB_000dd56a:
          MaDevDrv_EnableIrq();
          return iVar1;
        }
        pbVar4 = param_2 + 1;
        iVar1 = 2;
        uVar3 = (uint)(byte)~*param_2;
        sVar5 = (short)((uVar3 & 0xf) * 8 + 0x84 << ((uVar3 & 0x7f) >> 4));
        if ((int)(uVar3 << 0x18) < 0) {
          sVar5 = 0x84 - sVar5;
        }
        else {
          sVar5 = sVar5 + -0x84;
        }
        machdep_WriteReg(3,(uchar)sVar5);
        machdep_WriteReg(3,(uchar)((ushort)sVar5 >> 8));
        if (pbVar4 != pbVar6) {
          if (((uint)(pbVar6 + ~(uint)param_2) & 1) == 0) goto LAB_000dd556;
          bVar2 = *pbVar4;
          iVar1 = 4;
          pbVar4 = param_2;
          do {
            pbVar4 = pbVar4 + 2;
            uVar3 = (uint)(byte)~bVar2;
            sVar5 = (short)((uVar3 & 0xf) * 8 + 0x84 << ((uVar3 & 0x7f) >> 4));
            if ((int)(uVar3 << 0x18) < 0) {
              sVar5 = 0x84 - sVar5;
            }
            else {
              sVar5 = sVar5 + -0x84;
            }
            machdep_WriteReg(3,(uchar)sVar5);
            machdep_WriteReg(3,(uchar)((ushort)sVar5 >> 8));
            if (pbVar4 == pbVar6) break;
LAB_000dd556:
            if (iVar1 == 0x80) {
              iVar1 = machdep_WaitFifoEmpty(0);
              if (iVar1 != 0) goto LAB_000dd56a;
              iVar1 = 2;
            }
            else {
              iVar1 = iVar1 + 2;
            }
            uVar3 = (uint)(byte)~*pbVar4;
            sVar5 = (short)((uVar3 & 0xf) * 8 + 0x84 << ((uVar3 & 0x7f) >> 4));
            if ((int)(uVar3 << 0x18) < 0) {
              sVar5 = 0x84 - sVar5;
            }
            else {
              sVar5 = sVar5 + -0x84;
            }
            machdep_WriteReg(3,(uchar)sVar5);
            machdep_WriteReg(3,(uchar)((ushort)sVar5 >> 8));
            if (iVar1 == 0x80) {
              iVar1 = machdep_WaitFifoEmpty(0);
              if (iVar1 != 0) goto LAB_000dd56a;
              iVar1 = 2;
            }
            else {
              iVar1 = iVar1 + 2;
            }
            bVar2 = pbVar4[1];
          } while( true );
        }
      }
      MaDevDrv_EnableIrq();
      return 0;
    }
    iVar1 = -2;
  }
  return iVar1;
}

