/* MaDevDrv_SendDirectRamUData @ 0021f1f8 708B */


/* YAMAHA::MaDevDrv_SendDirectRamUData(unsigned int, unsigned char const*, unsigned int) */

void YAMAHA::MaDevDrv_SendDirectRamUData(uint param_1,uchar *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  byte local_10;
  undefined1 local_f;
  undefined1 local_e;
  byte local_d;
  byte local_c;
  long local_8;
  
  uVar4 = 0;
  uVar3 = param_3 * 2;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (uVar3 != 0) {
    if (((param_2 == (uchar *)0x0) || (0x3fff < param_1 - 0x10000)) || (0x13fff < uVar3 + param_1))
    {
      uVar4 = 0xfffffffe;
    }
    else {
      local_10 = (byte)param_1 & 0x7f;
      local_e = 0x84;
      local_f = (undefined1)(param_1 >> 7);
      if (uVar3 < 0x80) {
        local_d = (byte)uVar3 | 0x80;
        uVar7 = 4;
        MaDevDrv_DisableIrq();
        uVar3 = machdep_WaitFifoEmpty(0);
      }
      else {
        local_d = (byte)uVar3 & 0x7e;
        local_c = (byte)((param_3 & 0x7fffffff) >> 6) | 0x80;
        uVar7 = 5;
        MaDevDrv_DisableIrq();
        uVar3 = machdep_WaitFifoEmpty(0);
      }
      if (uVar3 == 0) {
        machdep_WriteRegN(3,&local_10,uVar7);
        if (param_3 != 0) {
          pbVar1 = param_2 + (ulong)(param_3 - 1) + 1;
          uVar4 = machdep_WaitFifoEmpty(0);
          if ((int)uVar4 != 0) {
LAB_0021f4a8:
            MaDevDrv_EnableIrq();
            goto LAB_0021f360;
          }
          iVar8 = 2;
          bVar2 = ~*param_2;
          sVar9 = (short)((bVar2 & 0xf) * 8 + 0x84 << ((ulong)(bVar2 >> 4) & 7));
          if ((char)*param_2 < '\0') {
            sVar9 = sVar9 + -0x84;
          }
          else {
            sVar9 = 0x84 - sVar9;
          }
          pbVar6 = param_2 + 1;
          machdep_WriteReg(3,(uchar)sVar9);
          machdep_WriteReg(3,(uchar)((ushort)sVar9 >> 8));
          if (pbVar6 != pbVar1) {
            if (((ulong)(pbVar1 + ~(ulong)param_2) & 1) == 0) goto LAB_0021f3e4;
            iVar8 = 4;
            bVar2 = ~*pbVar6;
            iVar5 = (bVar2 & 0xf) * 8 + 0x84 << ((ulong)(bVar2 >> 4) & 7);
            if (-1 < (char)*pbVar6) goto LAB_0021f3bc;
            iVar5 = iVar5 + -0x84;
            while( true ) {
              pbVar6 = pbVar6 + 1;
              machdep_WriteReg(3,(uchar)iVar5);
              machdep_WriteReg(3,(uchar)((uint)iVar5 >> 8));
              if (pbVar6 == pbVar1) break;
LAB_0021f3e4:
              iVar5 = iVar8 + 2;
              if (iVar8 == 0x80) {
                uVar4 = machdep_WaitFifoEmpty(0);
                if ((int)uVar4 != 0) goto LAB_0021f4a8;
                iVar5 = 2;
              }
              bVar2 = ~*pbVar6;
              sVar9 = (short)((bVar2 & 0xf) * 8 + 0x84 << ((ulong)(bVar2 >> 4) & 7));
              if ((char)*pbVar6 < '\0') {
                sVar9 = sVar9 + -0x84;
              }
              else {
                sVar9 = 0x84 - sVar9;
              }
              pbVar6 = pbVar6 + 1;
              iVar8 = iVar5 + 2;
              machdep_WriteReg(3,(uchar)sVar9);
              machdep_WriteReg(3,(uchar)((ushort)sVar9 >> 8));
              if (iVar5 == 0x80) {
                uVar4 = machdep_WaitFifoEmpty(0);
                if ((int)uVar4 != 0) goto LAB_0021f4a8;
                iVar8 = 2;
              }
              bVar2 = ~*pbVar6;
              iVar5 = (bVar2 & 0xf) * 8 + 0x84 << ((ulong)(bVar2 >> 4) & 7);
              if ((char)*pbVar6 < '\0') {
                iVar5 = iVar5 + -0x84;
              }
              else {
LAB_0021f3bc:
                iVar5 = 0x84 - iVar5;
              }
            }
          }
        }
        MaDevDrv_EnableIrq();
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)uVar3;
        MaDevDrv_EnableIrq();
      }
    }
  }
LAB_0021f360:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

