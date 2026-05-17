/* MaSrm_SetVol @ 001a946c 148B */


/* YAMAHA::MaSrm_SetVol(unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetVol(uint param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uchar local_10;
  char local_f;
  byte local_e;
  long local_8;
  
  lVar1 = DAT_005dd9b8 + (ulong)(param_1 & 3) * 0x78;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (*(int *)(lVar1 + 0x4c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_f = (char)(param_1 & 3) + '\x04';
    local_e = (byte)param_2 & 0x7c | 0x81;
    *(byte *)(lVar1 + 0x43) = (byte)param_2;
    local_10 = 0xf2;
    uVar2 = MaDevDrv_SendDirectPacket(&local_10,3);
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

