/* MaSrm_Open @ 0008a690 372B */


/* YAMAHA::MaSrm_Open(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int, unsigned int, unsigned char const*, unsigned int) */

void YAMAHA::MaSrm_Open(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,uint param_7,uint param_8,uchar *param_9,uint param_10)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uchar local_38;
  undefined1 local_37;
  byte local_36;
  byte local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  int local_2c;
  
  piVar2 = *(int **)(DAT_0008a804 + 0x8a6a6);
  local_2c = *piVar2;
  if ((((44000 < param_3 - 4000) || (param_10 == 0 || param_9 == (uchar *)0x0)) ||
      (((int)(param_4 << 0x19) < 0 && ((int)(param_2 << 0x1f) < 0)))) ||
     (((param_4 & 0x10) != 0 && (param_7 < 0x46)))) goto LAB_0008a7f2;
  if (param_4 == 0x10) {
LAB_0008a6ec:
    if ((param_8 != 0) || ((0x7ff < param_10 && ((param_4 & 0x10) == 0)))) {
      iVar4 = (param_2 & 3) * 0x70;
      local_36 = (byte)param_4 & 0x43;
      iVar3 = *(int *)(DAT_0008a808 + 0x8a70c);
      *(uint *)(iVar3 + iVar4) = param_3;
      iVar4 = iVar4 + iVar3;
      *(uint *)(iVar4 + 0x10) = param_10;
      *(uint *)(iVar4 + 4) = param_8;
      *(uint *)(iVar4 + 0x14) = param_10;
      *(uint *)(iVar4 + 8) = param_7;
      local_37 = (undefined1)(param_2 & 3);
      *(uint *)(iVar4 + 0x1c) = param_8;
      local_35 = (byte)param_6 & 0x7c;
      *(uchar **)(iVar4 + 0x30) = param_9;
      *(uchar **)(iVar4 + 0x34) = param_9;
      *(char *)(iVar4 + 0x38) = (char)param_1;
      *(byte *)(iVar4 + 0x3a) = (byte)param_4;
      *(undefined4 *)(iVar4 + 0x20) = 100;
      *(byte *)(iVar4 + 0x3b) = (byte)param_5 & 0x7f;
      *(byte *)(iVar4 + 0x3c) = (byte)param_6 & 0x7f;
      *(undefined4 *)(iVar4 + 0x44) = 1;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined1 *)(iVar4 + 0x3d) = 0;
      *(undefined1 *)(iVar4 + 0x3e) = 0;
      *(undefined1 *)(iVar4 + 0x4c) = 0;
      *(undefined1 *)(iVar4 + 0x54) = 0;
      *(undefined1 *)(iVar4 + 0x5c) = 0;
      *(undefined1 *)(iVar4 + 100) = 0;
      *(undefined1 *)(iVar4 + 0x6c) = 0;
      local_34 = 0;
      local_33 = 0;
      local_38 = 0xdd;
      local_32 = 0;
      local_31 = 0;
      local_30 = 0xa0;
      uVar1 = MaDevDrv_SendDirectPacket(&local_38,9);
      goto LAB_0008a7dc;
    }
  }
  else if (param_4 < 0x11) {
    if (param_4 < 4) goto LAB_0008a6ec;
  }
  else if ((0x3f < param_4) && ((param_4 < 0x44 || (param_4 == 0x50)))) goto LAB_0008a6ec;
LAB_0008a7f2:
  uVar1 = 0xfffffffe;
LAB_0008a7dc:
  if (local_2c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

