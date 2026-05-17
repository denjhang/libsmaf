/* MaSrm_SetPan @ 001a9530 172B */


/* YAMAHA::MaSrm_SetPan(unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetPan(uint param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  uchar local_10;
  byte local_f;
  undefined1 local_e;
  byte local_d;
  long local_8;
  
  lVar1 = DAT_005dd9b8 + (ulong)(param_1 & 3) * 0x78;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (*(int *)(lVar1 + 0x4c) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_f = (byte)(param_1 & 3) | 0x80;
    *(byte *)(lVar1 + 0x44) = (byte)param_2;
    local_10 = 0xdd;
    local_e = 0xdf;
    if (param_2 == 0xff) {
      local_d = 0x81;
    }
    else {
      local_d = (byte)param_2 & 0x7c | 0x80;
    }
    uVar2 = MaDevDrv_SendDirectPacket(&local_10,4);
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

