/* MaDevDrv_SendDirectRamEncData @ 000dd5a4 670B */


/* YAMAHA::MaDevDrv_SendDirectRamEncData(unsigned int, unsigned char const*, unsigned int) */

int YAMAHA::MaDevDrv_SendDirectRamEncData(uint param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint unaff_r4;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte local_28;
  undefined1 local_27;
  undefined1 local_26;
  byte local_25;
  byte local_24;
  
  if (param_3 == 0) {
    return 0;
  }
  uVar2 = param_3 & 7;
  bVar6 = uVar2 != 0;
  if (bVar6) {
    uVar2 = uVar2 - 1;
  }
  uVar4 = (param_3 >> 3) * 7;
  if (bVar6) {
    uVar4 = uVar4 + uVar2;
  }
  if (((uVar4 == 0 || param_2 == (uchar *)0x0) || (0x3fff < param_1 - 0x10000)) ||
     (0x13fff < uVar4 + param_1)) {
    return -2;
  }
  local_28 = (byte)param_1 & 0x7f;
  if (uVar4 < 0x80) {
    bVar3 = (byte)uVar4 | 0x80;
    local_25 = (byte)param_2;
  }
  else {
    local_25 = (byte)uVar4 & 0x7f;
    bVar3 = (byte)(uVar4 >> 7);
  }
  local_27 = (undefined1)(param_1 >> 7);
  if (uVar4 < 0x80) {
    unaff_r4 = 4;
    local_25 = bVar3;
  }
  else {
    bVar3 = bVar3 | 0x80;
  }
  local_26 = 0x84;
  if (0x7f < uVar4) {
    unaff_r4 = 5;
    local_24 = bVar3;
  }
  MaDevDrv_DisableIrq();
  iVar1 = machdep_WaitFifoEmpty(0);
  if (iVar1 != 0) {
    MaDevDrv_EnableIrq();
    return iVar1;
  }
  uVar4 = 1;
  machdep_WriteRegN(3,&local_28,unaff_r4);
  iVar1 = 0x80;
  uVar2 = param_3 - 1 & 3;
  uVar5 = (uint)*param_2;
  if (param_3 != 1) {
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        if (uVar2 != 2) {
          iVar1 = machdep_WaitFifoEmpty(0);
          if (iVar1 != 0) goto LAB_000dd838;
          uVar2 = uVar5 << 1;
          iVar1 = 1;
          uVar5 = uVar2 & 0xff;
          uVar4 = 2;
          machdep_WriteReg(3,(byte)uVar2 & 0x80 | param_2[1]);
        }
        if (uVar4 == 0) {
          uVar5 = (uint)*param_2;
        }
        else {
          if (iVar1 == 0x80) {
            iVar1 = machdep_WaitFifoEmpty(0);
            if (iVar1 != 0) goto LAB_000dd838;
            iVar1 = 1;
          }
          else {
            iVar1 = iVar1 + 1;
          }
          uVar2 = uVar5 << 1;
          uVar5 = uVar2 & 0xff;
          machdep_WriteReg(3,(byte)uVar2 & 0x80 | param_2[uVar4]);
        }
        uVar4 = uVar4 + 1;
      }
      if (uVar4 == 0) {
        uVar5 = (uint)*param_2;
      }
      else {
        if (iVar1 == 0x80) {
          iVar1 = machdep_WaitFifoEmpty(0);
          if (iVar1 != 0) {
LAB_000dd838:
            MaDevDrv_EnableIrq();
            return iVar1;
          }
          iVar1 = 1;
        }
        else {
          iVar1 = iVar1 + 1;
        }
        uVar2 = uVar5 << 1;
        uVar5 = uVar2 & 0xff;
        machdep_WriteReg(3,(byte)uVar2 & 0x80 | param_2[uVar4]);
      }
      uVar4 = uVar4 + 1;
      if (uVar4 == param_3) goto LAB_000dd6ee;
    }
    do {
      if ((uVar4 & 7) == 0) {
        uVar2 = (uint)param_2[uVar4];
        if ((uVar4 + 1 & 7) != 0) goto LAB_000dd78e;
LAB_000dd704:
        uVar5 = (uint)param_2[uVar4 + 1];
        if ((uVar4 + 2 & 7) == 0) goto LAB_000dd7b6;
LAB_000dd712:
        if (iVar1 == 0x80) {
          iVar1 = machdep_WaitFifoEmpty(0);
          if (iVar1 != 0) goto LAB_000dd838;
          iVar1 = 1;
        }
        else {
          iVar1 = iVar1 + 1;
        }
        uVar2 = uVar5 << 1 & 0xff;
        machdep_WriteReg(3,(byte)(uVar5 << 1) & 0x80 | param_2[uVar4 + 2]);
        if ((uVar4 + 3 & 7) == 0) goto LAB_000dd7c4;
LAB_000dd73c:
        if (iVar1 == 0x80) {
          iVar1 = machdep_WaitFifoEmpty(0);
          if (iVar1 != 0) goto LAB_000dd838;
          iVar1 = 1;
        }
        else {
          iVar1 = iVar1 + 1;
        }
        uVar5 = uVar2 << 1 & 0xff;
        machdep_WriteReg(3,(byte)(uVar2 << 1) & 0x80 | param_2[uVar4 + 3]);
      }
      else {
        if (iVar1 == 0x80) {
          iVar1 = machdep_WaitFifoEmpty(0);
          if (iVar1 != 0) goto LAB_000dd838;
          iVar1 = 1;
        }
        else {
          iVar1 = iVar1 + 1;
        }
        uVar2 = uVar5 << 1 & 0xff;
        machdep_WriteReg(3,param_2[uVar4] | (byte)(uVar5 << 1) & 0x80);
        if ((uVar4 + 1 & 7) == 0) goto LAB_000dd704;
LAB_000dd78e:
        if (iVar1 == 0x80) {
          iVar1 = machdep_WaitFifoEmpty(0);
          if (iVar1 != 0) goto LAB_000dd838;
          iVar1 = 1;
        }
        else {
          iVar1 = iVar1 + 1;
        }
        uVar5 = uVar2 << 1 & 0xff;
        machdep_WriteReg(3,(byte)(uVar2 << 1) & 0x80 | param_2[uVar4 + 1]);
        if ((uVar4 + 2 & 7) != 0) goto LAB_000dd712;
LAB_000dd7b6:
        uVar2 = (uint)param_2[uVar4 + 2];
        if ((uVar4 + 3 & 7) != 0) goto LAB_000dd73c;
LAB_000dd7c4:
        uVar5 = (uint)param_2[uVar4 + 3];
      }
      uVar4 = uVar4 + 4;
    } while (uVar4 != param_3);
  }
LAB_000dd6ee:
  MaDevDrv_EnableIrq();
  return 0;
}

