/* MaSrm_SetOutput @ 001a9784 332B */


/* YAMAHA::MaSrm_SetOutput(unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetOutput(uint param_1,uint param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uchar local_20;
  char local_1f;
  byte local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  byte local_18;
  undefined1 local_17;
  char local_16;
  byte local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  byte local_f;
  long local_8;
  
  lVar1 = DAT_005dd9b8 + (ulong)(param_1 & 3) * 0x78;
  cVar2 = (char)(param_1 & 3);
  local_1f = cVar2 + '\x04';
  local_20 = 0xf2;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_1e = *(byte *)(lVar1 + 0x43) & 0x7c | 1;
  iVar3 = 2;
  if ((*(byte *)(lVar1 + 0x42) & 0x40) == 0) {
    iVar3 = 1;
  }
  local_1d = 0x41;
  local_1c = 8;
  local_1b = 0;
  local_1a = 8;
  local_19 = 0;
  if (param_2 == 0) {
    local_18 = 0x80;
  }
  else if (param_2 == 1) {
    local_18 = 0xa0;
  }
  else {
    local_18 = (char)param_2 - 2U | 0xc0;
  }
  if (iVar3 == 2) {
    local_16 = cVar2 + '\x05';
    local_17 = 0xf2;
    local_14 = 0x41;
    local_13 = 8;
    local_12 = 0;
    local_11 = 8;
    local_10 = 0;
    local_15 = local_1e;
    if (param_2 == 0) {
      local_f = 0x80;
    }
    else if (param_2 == 1) {
      local_f = 0xa0;
    }
    else {
      local_f = (char)param_2 - 2U | 0xc0;
    }
  }
  MaDevDrv_SendDirectPacket(&local_20,iVar3 * 9);
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

