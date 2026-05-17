/* MaSrm_SetOutput @ 0008b52c 248B */


/* YAMAHA::MaSrm_SetOutput(unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetOutput(uint param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uchar local_30;
  char local_2f;
  byte local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  byte local_28;
  undefined1 local_27;
  char local_26;
  byte local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  byte local_1f;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0008b628 + 0x8b544);
  iVar2 = *(int *)(DAT_0008b624 + 0x8b538) + (param_1 & 3) * 0x70;
  cVar1 = (char)(param_1 & 3);
  local_2f = cVar1 + '\x04';
  local_1c = *piVar3;
  local_2e = *(byte *)(iVar2 + 0x3b) & 0x7c | 1;
  if ((*(byte *)(iVar2 + 0x3a) & 0x40) == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
  }
  local_30 = 0xf2;
  local_2d = 0x41;
  local_2c = 8;
  local_2a = 8;
  local_2b = 0;
  local_29 = 0;
  if (param_2 == 0) {
    local_28 = 0x80;
  }
  else if (param_2 == 1) {
    local_28 = 0xa0;
  }
  else {
    local_28 = (char)param_2 - 2U | 0xc0;
  }
  if (uVar4 < 2) {
    uVar4 = 9;
  }
  else {
    local_26 = cVar1 + '\x05';
    local_27 = 0xf2;
    local_24 = 0x41;
    local_23 = 8;
    local_21 = 8;
    local_22 = 0;
    local_20 = 0;
    if (param_2 == 0) {
      local_1f = 0x80;
    }
    else if (param_2 == 1) {
      local_1f = 0xa0;
    }
    else {
      local_1f = (char)param_2 - 2U | 0xc0;
    }
    uVar4 = 0x12;
    local_25 = local_2e;
  }
  MaDevDrv_SendDirectPacket(&local_30,uVar4);
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

