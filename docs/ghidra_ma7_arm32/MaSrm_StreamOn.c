/* MaSrm_StreamOn @ 00089cf0 366B */


/* YAMAHA::MaSrm_StreamOn(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaSrm_StreamOn(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 uVar1;
  byte bVar2;
  uchar uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uchar local_38;
  byte local_37;
  undefined1 local_36;
  byte local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  int local_2c;
  
  piVar8 = *(int **)(DAT_00089e64 + 0x89d0a);
  iVar6 = DAT_00089e60 + 0x89d08 + (param_3 + param_2 * 0x40) * 0x10;
  local_2c = *piVar8;
  if (*(int *)(iVar6 + 8) != 0) {
    iVar5 = *(int *)(DAT_00089e60 + 0x89d04) + param_1 * 0x70;
    bVar2 = (byte)param_1 | 0x80;
    *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(iVar6 + 8);
    uVar1 = *(undefined1 *)(iVar6 + 0xc);
    *(char *)(iVar5 + 0x38) = (char)param_2;
    *(undefined4 *)(iVar5 + 4) = 1;
    *(undefined4 *)(iVar5 + 0x1c) = 1;
    *(char *)(iVar5 + 0x3b) = (char)param_5;
    *(char *)(iVar5 + 0x3f) = (char)param_3;
    *(undefined1 *)(iVar5 + 0x3a) = uVar1;
    *(byte *)(iVar5 + 0x40) = (byte)param_4;
    local_36 = 0xe4;
    local_34 = 0xe4;
    local_38 = 0xdd;
    if (*(char *)(iVar6 + 0xe) == '\x01') {
      local_32 = 0xe0;
      iVar6 = 8;
      local_31 = 0x80;
      iVar7 = 9;
      uVar4 = 10;
    }
    else {
      iVar7 = 7;
      iVar6 = 6;
      uVar4 = 8;
    }
    local_35 = 0xa0;
    local_33 = 0xb0;
    (&local_38)[iVar6] = 0xa8;
    (&local_38)[iVar7] = 0x80;
    local_37 = bVar2;
    iVar6 = MaDevDrv_SendDirectPacket(&local_38,uVar4);
    if ((-1 < iVar6) && (iVar6 = MaDevDrv_WaitStreamFifoEmpty(param_1), -1 < iVar6)) {
      uVar3 = (uchar)(1 << (param_1 & 0xff));
      MaDevDrv_ResetIrqCtrl(uVar3,'\0');
      if ((*(byte *)(iVar5 + 0x3a) & 0x40) == 0) {
        uVar4 = 0x400;
      }
      else {
        uVar4 = 0x800;
      }
      if (uVar4 < *(uint *)(iVar5 + 0x10)) {
        MaDevDrv_SendStreamData(param_1,*(uchar **)(iVar5 + 0x34),uVar4);
        MaDevDrv_SetIrqCtrl(uVar3,'\0');
        *(uint *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + uVar4;
        *(uint *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x10) - uVar4;
      }
      else {
        MaDevDrv_SendStreamData(param_1,*(uchar **)(iVar5 + 0x34),*(uint *)(iVar5 + 0x10));
        *(undefined4 *)(iVar5 + 0x34) = 0;
        *(undefined4 *)(iVar5 + 0x14) = 0;
      }
      local_35 = (byte)param_4 | 0xe0;
      local_38 = 0xdd;
      local_36 = 0xe4;
      local_37 = bVar2;
      MaDevDrv_SendDirectPacket(&local_38,4);
      *(undefined4 *)(iVar5 + 0x44) = 2;
    }
  }
  if (local_2c != *piVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

