/* MaDevDrv_SendDirectRamEncData @ 0021f4bc 936B */


/* YAMAHA::MaDevDrv_SendDirectRamEncData(unsigned int, unsigned char const*, unsigned int) */

void YAMAHA::MaDevDrv_SendDirectRamEncData(uint param_1,uchar *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  byte local_10;
  undefined1 local_f;
  undefined1 local_e;
  byte local_d;
  byte local_c;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar3 = 0;
  if (param_3 == 0) goto LAB_0021f65c;
  uVar2 = (param_3 >> 3) * 7;
  if ((param_3 & 7) != 0) {
    uVar2 = uVar2 + ((param_3 & 7) - 1);
  }
  if ((((param_2 == (uchar *)0x0) || (uVar2 == 0)) || (0x3fff < param_1 - 0x10000)) ||
     (0x13fff < uVar2 + param_1)) {
    uVar3 = 0xfffffffe;
    goto LAB_0021f65c;
  }
  local_10 = (byte)param_1 & 0x7f;
  local_e = 0x84;
  local_f = (undefined1)(param_1 >> 7);
  if (uVar2 < 0x80) {
    local_d = (byte)uVar2 | 0x80;
    uVar4 = 4;
    MaDevDrv_DisableIrq();
    uVar2 = machdep_WaitFifoEmpty(0);
  }
  else {
    local_d = (byte)uVar2 & 0x7f;
    local_c = (byte)(uVar2 >> 7) | 0x80;
    uVar4 = 5;
    MaDevDrv_DisableIrq();
    uVar2 = machdep_WaitFifoEmpty(0);
  }
  if (uVar2 != 0) {
    uVar3 = (ulong)uVar2;
    MaDevDrv_EnableIrq();
    goto LAB_0021f65c;
  }
  uVar2 = param_3 - 1;
  uVar5 = 1;
  iVar6 = 0x80;
  machdep_WriteRegN(3,&local_10,uVar4);
  uVar1 = (ulong)uVar2 + 1;
  uVar3 = (ulong)uVar2 & 3;
  uVar4 = (uint)*param_2;
  if (uVar1 != 1) {
    if ((uVar2 & 3) != 0) {
      if (uVar3 != 1) {
        if (uVar3 == 2) {
LAB_0021f5ec:
          if ((int)uVar5 == 0) {
            uVar4 = (uint)param_2[uVar5];
          }
          else {
            if (iVar6 == 0x80) {
              iVar6 = 1;
              uVar3 = machdep_WaitFifoEmpty(0);
              if ((int)uVar3 != 0) goto LAB_0021f83c;
            }
            else {
              iVar6 = iVar6 + 1;
            }
            uVar4 = (uVar4 & 0x7f) << 1;
            machdep_WriteReg(3,(byte)uVar4 & 0x80 | param_2[uVar5]);
          }
          uVar5 = uVar5 + 1;
          goto LAB_0021f61c;
        }
        uVar3 = machdep_WaitFifoEmpty(0);
        if ((int)uVar3 == 0) {
          uVar4 = (uVar4 & 0x7f) << 1;
          iVar6 = 1;
          uVar5 = 2;
          machdep_WriteReg(3,(byte)uVar4 & 0x80 | param_2[1]);
          goto LAB_0021f5ec;
        }
LAB_0021f83c:
        MaDevDrv_EnableIrq();
        goto LAB_0021f65c;
      }
LAB_0021f61c:
      if ((int)uVar5 == 0) {
        uVar4 = (uint)param_2[uVar5];
      }
      else {
        if (iVar6 == 0x80) {
          iVar6 = 1;
          uVar3 = machdep_WaitFifoEmpty(0);
          if ((int)uVar3 != 0) goto LAB_0021f83c;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        uVar4 = (uVar4 & 0x7f) << 1;
        machdep_WriteReg(3,(byte)uVar4 & 0x80 | param_2[uVar5]);
      }
      uVar5 = uVar5 + 1;
      if (uVar5 == uVar1) goto LAB_0021f654;
    }
    do {
      if ((uVar5 & 7) == 0) {
        uVar2 = (uint)param_2[uVar5];
        if ((uVar5 + 1 & 7) == 0) goto LAB_0021f6a4;
LAB_0021f74c:
        if (iVar6 == 0x80) {
          uVar3 = machdep_WaitFifoEmpty(0);
          if ((int)uVar3 != 0) goto LAB_0021f83c;
          iVar6 = 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        uVar2 = (uVar2 & 0x7f) << 1;
        machdep_WriteReg(3,(byte)uVar2 & 0x80 | param_2[uVar5 + 1]);
        if ((uVar5 + 2 & 7) == 0) goto LAB_0021f77c;
LAB_0021f6b4:
        if (iVar6 == 0x80) {
          uVar3 = machdep_WaitFifoEmpty(0);
          if ((int)uVar3 != 0) goto LAB_0021f83c;
          iVar6 = 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        uVar2 = (uVar2 & 0x7f) << 1;
        machdep_WriteReg(3,(byte)uVar2 & 0x80 | param_2[uVar5 + 2]);
        if ((uVar5 + 3 & 7) != 0) goto LAB_0021f6e4;
LAB_0021f78c:
        uVar4 = (uint)param_2[uVar5 + 3];
      }
      else {
        if (iVar6 == 0x80) {
          uVar3 = machdep_WaitFifoEmpty(0);
          if ((int)uVar3 != 0) goto LAB_0021f83c;
          iVar6 = 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        uVar2 = (uVar4 & 0x7f) << 1;
        machdep_WriteReg(3,(byte)uVar2 & 0x80 | param_2[uVar5]);
        if (((int)uVar5 + 1U & 7) != 0) goto LAB_0021f74c;
LAB_0021f6a4:
        uVar2 = (uint)param_2[uVar5 + 1];
        if ((uVar5 + 2 & 7) != 0) goto LAB_0021f6b4;
LAB_0021f77c:
        uVar2 = (uint)param_2[uVar5 + 2];
        if ((uVar5 + 3 & 7) == 0) goto LAB_0021f78c;
LAB_0021f6e4:
        if (iVar6 == 0x80) {
          uVar3 = machdep_WaitFifoEmpty(0);
          if ((int)uVar3 != 0) goto LAB_0021f83c;
          iVar6 = 1;
        }
        else {
          iVar6 = iVar6 + 1;
        }
        uVar4 = (uVar2 & 0x7f) << 1;
        machdep_WriteReg(3,(byte)uVar4 & 0x80 | param_2[uVar5 + 3]);
      }
      uVar5 = uVar5 + 4;
    } while (uVar5 != uVar1);
  }
LAB_0021f654:
  MaDevDrv_EnableIrq();
  uVar3 = 0;
LAB_0021f65c:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

