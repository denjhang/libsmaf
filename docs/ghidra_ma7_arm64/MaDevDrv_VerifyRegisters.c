/* MaDevDrv_VerifyRegisters @ 0022128c 316B */


/* YAMAHA::MaDevDrv_VerifyRegisters() */

void YAMAHA::MaDevDrv_VerifyRegisters(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  byte local_20 [24];
  long local_8;
  
  lVar3 = 0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_20[8] = 0;
  local_20[9] = 0;
  local_20[10] = 0;
  local_20[0xb] = 0;
  local_20[0xc] = 0x60;
  local_20[0xd] = 0x40;
  local_20[0xe] = 0;
  local_20[0xf] = 0;
  local_20[0x10] = 8;
  local_20[0x11] = 0;
  local_20[0x12] = 0;
  local_20[0x13] = 0;
  local_20[0x14] = 0;
  local_20[0x15] = 0;
  local_20[0x16] = 0;
  local_20[0x17] = 0x7c;
  do {
    uVar1 = (uint)lVar3;
    uVar2 = MaDevDrv_ReceiveData(uVar1);
    if ((int)(uint)uVar2 < 0) goto LAB_00221394;
    if ((uint)local_20[lVar3] != ((uint)uVar2 & 0xff)) {
LAB_002213bc:
      uVar2 = 0xfffffffa;
      goto LAB_00221394;
    }
    uVar2 = MaDevDrv_ReceiveData(uVar1 + 1);
    if ((int)(uint)uVar2 < 0) goto LAB_00221394;
    if ((uint)local_20[lVar3 + 1] != ((uint)uVar2 & 0xff)) goto LAB_002213bc;
    uVar2 = MaDevDrv_ReceiveData(uVar1 + 2);
    if ((int)(uint)uVar2 < 0) goto LAB_00221394;
    if ((uint)local_20[lVar3 + 2] != ((uint)uVar2 & 0xff)) goto LAB_002213bc;
    uVar2 = MaDevDrv_ReceiveData(uVar1 + 3);
    if ((int)(uint)uVar2 < 0) goto LAB_00221394;
    if ((uint)local_20[lVar3 + 3] != ((uint)uVar2 & 0xff)) goto LAB_002213bc;
    uVar2 = MaDevDrv_ReceiveData(uVar1 + 4);
    if ((int)(uint)uVar2 < 0) goto LAB_00221394;
    if ((uint)local_20[lVar3 + 4] != ((uint)uVar2 & 0xff)) goto LAB_002213bc;
    uVar2 = MaDevDrv_ReceiveData(uVar1 + 5);
    if ((int)(uint)uVar2 < 0) goto LAB_00221394;
    if ((uint)local_20[lVar3 + 5] != ((uint)uVar2 & 0xff)) goto LAB_002213bc;
    lVar3 = lVar3 + 6;
  } while (lVar3 != 0x18);
  uVar2 = 0;
LAB_00221394:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

