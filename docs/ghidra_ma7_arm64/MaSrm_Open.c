/* MaSrm_Open @ 001a8334 412B */


/* YAMAHA::MaSrm_Open(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned char const*, unsigned int) */

void YAMAHA::MaSrm_Open(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,uint param_7,uint param_8,uchar *param_9,uint param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uchar local_18;
  undefined1 local_17;
  byte local_16;
  byte local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (((((44000 < param_3 - 4000) || (param_9 == (uchar *)0x0)) || (param_10 == 0)) ||
      (((param_4 >> 6 & 1) != 0 && ((param_2 & 1) != 0)))) ||
     (((param_4 >> 4 & 1) != 0 && (param_7 < 0x46)))) goto LAB_001a84c4;
  if (param_4 == 0x10) {
LAB_001a83b0:
    if ((param_8 != 0) || ((0x7ff < param_10 && ((param_4 >> 4 & 1) == 0)))) {
      lVar2 = (ulong)(param_2 & 3) * 0x78;
      lVar1 = DAT_005dd9b8 + lVar2;
      local_16 = (byte)param_4 & 0x43;
      *(uint *)(DAT_005dd9b8 + lVar2) = param_3;
      local_15 = (byte)param_6 & 0x7c;
      *(uint *)(lVar1 + 4) = param_8;
      *(uint *)(lVar1 + 8) = param_7;
      *(undefined4 *)(lVar1 + 0xc) = 0;
      *(uint *)(lVar1 + 0x1c) = param_8;
      *(char *)(lVar1 + 0x40) = (char)param_1;
      *(uint *)(lVar1 + 0x10) = param_10;
      *(uint *)(lVar1 + 0x14) = param_10;
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(undefined4 *)(lVar1 + 0x20) = 100;
      *(undefined4 *)(lVar1 + 0x24) = 0;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined4 *)(lVar1 + 0x2c) = 0;
      *(uchar **)(lVar1 + 0x30) = param_9;
      *(uchar **)(lVar1 + 0x38) = param_9;
      *(byte *)(lVar1 + 0x42) = (byte)param_4;
      *(byte *)(lVar1 + 0x43) = (byte)param_5 & 0x7f;
      *(byte *)(lVar1 + 0x44) = (byte)param_6 & 0x7f;
      *(undefined1 *)(lVar1 + 0x45) = 0;
      *(undefined4 *)(lVar1 + 0x4c) = 1;
      *(undefined1 *)(lVar1 + 0x46) = 0;
      *(undefined1 *)(lVar1 + 0x54) = 0;
      *(undefined1 *)(lVar1 + 0x5c) = 0;
      *(undefined1 *)(lVar1 + 100) = 0;
      *(undefined1 *)(lVar1 + 0x6c) = 0;
      *(undefined1 *)(lVar1 + 0x74) = 0;
      local_18 = 0xdd;
      local_17 = (undefined1)(param_2 & 3);
      local_14 = 0;
      local_13 = 0;
      local_12 = 0;
      local_11 = 0;
      local_10 = 0xa0;
      uVar3 = MaDevDrv_SendDirectPacket(&local_18,9);
      goto LAB_001a849c;
    }
  }
  else if (param_4 < 0x11) {
    if (param_4 < 4) goto LAB_001a83b0;
  }
  else if ((0x3f < param_4) && ((param_4 < 0x44 || (param_4 == 0x50)))) goto LAB_001a83b0;
LAB_001a84c4:
  uVar3 = 0xfffffffe;
LAB_001a849c:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

