/* MaDevDrv_VerifyRegisters @ 000de74c 226B */


/* YAMAHA::MaDevDrv_VerifyRegisters() */

void YAMAHA::MaDevDrv_VerifyRegisters(void)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  byte local_34 [24];
  int local_1c;
  
  uVar2 = 0;
  piVar3 = *(int **)(DAT_000de830 + 0xde760);
  local_1c = *piVar3;
  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  local_34[7] = 0;
  local_34[8] = 0;
  local_34[9] = 0;
  local_34[10] = 0;
  local_34[0xb] = 0;
  local_34[0xc] = 0x60;
  local_34[0xd] = 0x40;
  local_34[0xe] = 0;
  local_34[0xf] = 0;
  local_34[0x10] = 8;
  local_34[0x11] = 0;
  local_34[0x12] = 0;
  local_34[0x13] = 0;
  local_34[0x14] = 0;
  local_34[0x15] = 0;
  local_34[0x16] = 0;
  local_34[0x17] = 0x7c;
  do {
    uVar1 = MaDevDrv_ReceiveData(uVar2);
    if ((int)uVar1 < 0) goto LAB_000de814;
    if ((uint)local_34[uVar2] != (uVar1 & 0xff)) {
LAB_000de824:
      uVar1 = 0xfffffffa;
      goto LAB_000de814;
    }
    uVar1 = MaDevDrv_ReceiveData(uVar2 + 1);
    if ((int)uVar1 < 0) goto LAB_000de814;
    if ((uint)local_34[uVar2 + 1] != (uVar1 & 0xff)) goto LAB_000de824;
    uVar1 = MaDevDrv_ReceiveData(uVar2 + 2);
    if ((int)uVar1 < 0) goto LAB_000de814;
    if ((uint)local_34[uVar2 + 2] != (uVar1 & 0xff)) goto LAB_000de824;
    uVar1 = MaDevDrv_ReceiveData(uVar2 + 3);
    if ((int)uVar1 < 0) goto LAB_000de814;
    if ((uint)local_34[uVar2 + 3] != (uVar1 & 0xff)) goto LAB_000de824;
    uVar1 = MaDevDrv_ReceiveData(uVar2 + 4);
    if ((int)uVar1 < 0) goto LAB_000de814;
    if ((uint)local_34[uVar2 + 4] != (uVar1 & 0xff)) goto LAB_000de824;
    uVar1 = MaDevDrv_ReceiveData(uVar2 + 5);
    if ((int)uVar1 < 0) goto LAB_000de814;
    if ((uint)local_34[uVar2 + 5] != (uVar1 & 0xff)) goto LAB_000de824;
    uVar2 = uVar2 + 6;
  } while (uVar2 != 0x18);
  uVar1 = 0;
LAB_000de814:
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

