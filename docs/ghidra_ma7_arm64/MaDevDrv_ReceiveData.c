/* MaDevDrv_ReceiveData @ 0021ec3c 300B */


/* YAMAHA::MaDevDrv_ReceiveData(unsigned int) */

void YAMAHA::MaDevDrv_ReceiveData(uint param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  byte local_10;
  byte local_f;
  byte local_e;
  undefined1 local_d;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 < 0x14000) {
    if (param_1 < 0x80) {
      local_10 = (byte)param_1 | 0x80;
      uVar4 = 2;
      local_f = 0x80;
      MaDevDrv_DisableIrq();
      uVar3 = machdep_WaitFifoEmpty(0);
      iVar2 = (int)uVar3;
    }
    else {
      if (param_1 < 0x4000) {
        local_f = (byte)(param_1 >> 7) | 0x80;
        uVar4 = 3;
        local_e = 0x80;
      }
      else {
        local_e = (byte)(param_1 >> 0xe) | 0x80;
        local_f = (byte)(param_1 >> 7) & 0x7f;
        uVar4 = 4;
        local_d = 0x80;
      }
      local_10 = (byte)param_1 & 0x7f;
      MaDevDrv_DisableIrq();
      uVar3 = machdep_WaitFifoEmpty(0);
      iVar2 = (int)uVar3;
    }
    if (iVar2 == 0) {
      machdep_WriteRegN(10,&local_10,uVar4);
      uVar3 = machdep_WaitValidData();
      if ((int)uVar3 == 0) {
        bVar1 = machdep_ReadReg(3);
        uVar3 = (ulong)bVar1;
        MaDevDrv_EnableIrq();
        goto LAB_0021ecd8;
      }
    }
    MaDevDrv_EnableIrq();
  }
  else {
    uVar3 = 0xfffffffe;
  }
LAB_0021ecd8:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

