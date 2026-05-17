/* MaDevDrv_SendDirectRamVal @ 0021f864 328B */


/* YAMAHA::MaDevDrv_SendDirectRamVal(unsigned int, unsigned int, unsigned char) */

void YAMAHA::MaDevDrv_SendDirectRamVal(uint param_1,uint param_2,uchar param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  byte local_10;
  undefined1 local_f;
  undefined1 local_e;
  byte local_d;
  byte local_c;
  long local_8;
  
  uVar2 = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_2 != 0) {
    if ((param_1 - 0x10000 < 0x4000) && (param_2 + param_1 < 0x14000)) {
      local_10 = (byte)param_1 & 0x7f;
      local_e = 0x84;
      local_f = (undefined1)(param_1 >> 7);
      if (param_2 < 0x80) {
        local_d = (byte)param_2 | 0x80;
        uVar3 = 4;
        MaDevDrv_DisableIrq();
        uVar2 = machdep_WaitFifoEmpty(0);
        iVar1 = (int)uVar2;
      }
      else {
        local_d = (byte)param_2 & 0x7f;
        local_c = (byte)(param_2 >> 7) | 0x80;
        uVar3 = 5;
        MaDevDrv_DisableIrq();
        uVar2 = machdep_WaitFifoEmpty(0);
        iVar1 = (int)uVar2;
      }
      if (iVar1 == 0) {
        machdep_WriteRegN(3,&local_10,uVar3);
        do {
          uVar2 = machdep_WaitFifoEmpty(0);
          if ((int)uVar2 != 0) goto LAB_0021f990;
          uVar3 = param_2;
          if (0x80 < param_2) {
            uVar3 = 0x80;
          }
          machdep_WriteValN(3,param_3,uVar3);
          param_2 = param_2 - uVar3;
        } while (param_2 != 0);
        MaDevDrv_EnableIrq();
        uVar2 = 0;
      }
      else {
LAB_0021f990:
        MaDevDrv_EnableIrq();
      }
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

