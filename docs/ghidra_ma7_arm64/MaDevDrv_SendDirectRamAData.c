/* MaDevDrv_SendDirectRamAData @ 0021eeb8 832B */


/* YAMAHA::MaDevDrv_SendDirectRamAData(unsigned int, unsigned char const*, unsigned int) */

void YAMAHA::MaDevDrv_SendDirectRamAData(uint param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  byte local_10;
  undefined1 local_f;
  undefined1 local_e;
  byte local_d;
  byte local_c;
  long local_8;
  
  uVar4 = 0;
  uVar3 = param_3 * 2;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (uVar3 == 0) goto LAB_0021f064;
  if (((param_2 == (uchar *)0x0) || (0x3fff < param_1 - 0x10000)) || (0x13fff < uVar3 + param_1)) {
    uVar4 = 0xfffffffe;
    goto LAB_0021f064;
  }
  local_10 = (byte)param_1 & 0x7f;
  local_e = 0x84;
  local_f = (undefined1)(param_1 >> 7);
  if (uVar3 < 0x80) {
    local_d = (byte)uVar3 | 0x80;
    uVar6 = 4;
    MaDevDrv_DisableIrq();
    uVar3 = machdep_WaitFifoEmpty(0);
  }
  else {
    local_d = (byte)uVar3 & 0x7e;
    local_c = (byte)((param_3 & 0x7fffffff) >> 6) | 0x80;
    uVar6 = 5;
    MaDevDrv_DisableIrq();
    uVar3 = machdep_WaitFifoEmpty(0);
  }
  if (uVar3 != 0) {
    uVar4 = (ulong)uVar3;
    MaDevDrv_EnableIrq();
    goto LAB_0021f064;
  }
  machdep_WriteRegN(3,&local_10,uVar6);
  if (param_3 != 0) {
    pbVar2 = param_2 + (ulong)(param_3 - 1) + 1;
    uVar4 = machdep_WaitFifoEmpty(0);
    if ((int)uVar4 != 0) {
LAB_0021f1e4:
      MaDevDrv_EnableIrq();
      goto LAB_0021f064;
    }
    iVar8 = 2;
    uVar3 = *param_2 ^ 0x55;
    uVar6 = uVar3 >> 4 & 7;
    iVar9 = (uVar3 & 0xf) * 0x10;
    if (uVar6 == 0) {
      uVar5 = iVar9 + 8;
    }
    else {
      uVar5 = iVar9 + 0x108;
      if (uVar6 != 1) {
        uVar5 = uVar5 << (ulong)(uVar6 - 1 & 0x1f);
      }
    }
    pbVar7 = param_2 + 1;
    uVar3 = ~(int)(char)uVar3 >> 0x1f;
    iVar9 = (uVar5 ^ uVar3) - uVar3;
    machdep_WriteReg(3,(uchar)iVar9);
    machdep_WriteReg(3,(uchar)((uint)iVar9 >> 8));
    if (pbVar7 != pbVar2) {
      if (((ulong)(pbVar2 + ~(ulong)param_2) & 1) != 0) {
        iVar8 = 4;
        uVar3 = *pbVar7 ^ 0x55;
        uVar6 = uVar3 >> 4 & 7;
        iVar9 = (uVar3 & 0xf) * 0x10;
        if (uVar6 == 0) {
          uVar5 = iVar9 + 8;
        }
        else {
          uVar5 = iVar9 + 0x108;
          if (uVar6 != 1) {
            uVar5 = uVar5 << (ulong)(uVar6 - 1 & 0x1f);
          }
        }
        pbVar7 = param_2 + 2;
        uVar3 = ~(int)(char)uVar3 >> 0x1f;
        iVar9 = (uVar5 ^ uVar3) - uVar3;
        machdep_WriteReg(3,(uchar)iVar9);
        machdep_WriteReg(3,(uchar)((uint)iVar9 >> 8));
        if (pbVar7 == pbVar2) goto LAB_0021f05c;
      }
      do {
        iVar9 = iVar8 + 2;
        if (iVar8 == 0x80) {
          uVar4 = machdep_WaitFifoEmpty(0);
          if ((int)uVar4 != 0) goto LAB_0021f1e4;
          iVar9 = 2;
        }
        uVar3 = *pbVar7 ^ 0x55;
        uVar6 = uVar3 >> 4 & 7;
        iVar8 = (uVar3 & 0xf) * 0x10;
        if ((uVar3 >> 4 & 7) == 0) {
          uVar5 = iVar8 + 8;
        }
        else {
          uVar5 = iVar8 + 0x108;
          if (uVar6 != 1) {
            uVar5 = uVar5 << (ulong)(uVar6 - 1 & 0x1f);
          }
        }
        iVar8 = iVar9 + 2;
        uVar3 = ~(int)(char)uVar3 >> 0x1f;
        iVar1 = (uVar5 ^ uVar3) - uVar3;
        machdep_WriteReg(3,(uchar)iVar1);
        machdep_WriteReg(3,(uchar)((uint)iVar1 >> 8));
        if (iVar9 == 0x80) {
          uVar4 = machdep_WaitFifoEmpty(0);
          if ((int)uVar4 != 0) goto LAB_0021f1e4;
          iVar8 = 2;
        }
        uVar3 = pbVar7[1] ^ 0x55;
        uVar6 = uVar3 >> 4 & 7;
        iVar9 = (uVar3 & 0xf) * 0x10;
        if (uVar6 == 0) {
          uVar5 = iVar9 + 8;
        }
        else {
          uVar5 = iVar9 + 0x108;
          if (uVar6 != 1) {
            uVar5 = uVar5 << (ulong)(uVar6 - 1 & 0x1f);
          }
        }
        pbVar7 = pbVar7 + 2;
        uVar3 = ~(int)(char)uVar3 >> 0x1f;
        iVar9 = (uVar5 ^ uVar3) - uVar3;
        machdep_WriteReg(3,(uchar)iVar9);
        machdep_WriteReg(3,(uchar)((uint)iVar9 >> 8));
      } while (pbVar7 != pbVar2);
    }
  }
LAB_0021f05c:
  MaDevDrv_EnableIrq();
  uVar4 = 0;
LAB_0021f064:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

