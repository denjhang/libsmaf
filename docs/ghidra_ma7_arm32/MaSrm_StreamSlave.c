/* MaSrm_StreamSlave @ 00089e68 338B */


/* YAMAHA::MaSrm_StreamSlave(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    */

void YAMAHA::MaSrm_StreamSlave(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 uVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uchar local_30;
  byte local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  int local_24;
  
  piVar7 = *(int **)(DAT_00089fc0 + 0x89e7e);
  iVar4 = DAT_00089fbc + 0x89e7e + (param_3 + param_2 * 0x40) * 0x10;
  local_24 = *piVar7;
  if (*(int *)(iVar4 + 8) != 0) {
    if (param_1 < 3) {
      uVar8 = *(uint *)(DAT_00089fc4 + param_1 * 4 + 0x89ed8);
      local_2f = (byte)uVar8 | 0x80;
      iVar6 = uVar8 * 0x70;
    }
    else {
      local_2f = 0x82;
      iVar6 = 0xe0;
      uVar8 = 2;
    }
    iVar6 = iVar6 + *(int *)(DAT_00089fc8 + 0x89ebe);
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(iVar4 + 8);
    uVar1 = *(undefined1 *)(iVar4 + 0xc);
    *(char *)(iVar6 + 0x38) = (char)param_2;
    *(undefined4 *)(iVar6 + 4) = 1;
    *(undefined1 *)(iVar6 + 0x3a) = uVar1;
    *(char *)(iVar6 + 0x3b) = (char)param_5;
    *(char *)(iVar6 + 0x3f) = (char)param_3;
    *(undefined4 *)(iVar6 + 0x1c) = 1;
    local_2e = 0xe4;
    local_2c = 0xe4;
    if (*(char *)(iVar4 + 0xe) == '\x01') {
      local_2a = 0xe0;
      iVar4 = 8;
      local_29 = 0x80;
      iVar5 = 9;
      uVar3 = 10;
    }
    else {
      iVar5 = 7;
      iVar4 = 6;
      uVar3 = 8;
    }
    local_30 = 0xdd;
    local_2d = 0xa0;
    local_2b = 0xb0;
    (&local_30)[iVar4] = 0xa8;
    (&local_30)[iVar5] = 0x80;
    iVar4 = MaDevDrv_SendDirectPacket(&local_30,uVar3);
    if ((-1 < iVar4) && (iVar4 = MaDevDrv_WaitStreamFifoEmpty(uVar8), -1 < iVar4)) {
      uVar2 = (uchar)(1 << (uVar8 & 0xff));
      MaDevDrv_ResetIrqCtrl(uVar2,'\0');
      if (*(uint *)(iVar6 + 0x10) < 0x401) {
        MaDevDrv_SendStreamData(uVar8,*(uchar **)(iVar6 + 0x34),*(uint *)(iVar6 + 0x10));
        *(undefined4 *)(iVar6 + 0x34) = 0;
        *(undefined4 *)(iVar6 + 0x14) = 0;
      }
      else {
        MaDevDrv_SendStreamData(uVar8,*(uchar **)(iVar6 + 0x34),0x400);
        MaDevDrv_SetIrqCtrl(uVar2,'\0');
        *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + 0x400;
        *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x10) + -0x400;
      }
    }
  }
  if (local_24 != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

