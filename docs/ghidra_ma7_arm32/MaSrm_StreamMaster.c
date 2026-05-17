/* MaSrm_StreamMaster @ 00089fcc 450B */


/* YAMAHA::MaSrm_StreamMaster(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
    */

void YAMAHA::MaSrm_StreamMaster(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  uchar uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uchar local_38;
  byte local_37;
  undefined1 local_36;
  byte local_35;
  undefined1 local_34;
  byte local_33;
  undefined1 local_32;
  byte local_31;
  int local_2c;
  
  piVar8 = *(int **)(DAT_0008a194 + 0x89fe6);
  iVar7 = DAT_0008a190 + 0x89fe4 + (param_3 + param_2 * 0x40) * 0x10;
  local_2c = *piVar8;
  if (*(int *)(iVar7 + 8) != 0) {
    bVar2 = (byte)param_4;
    iVar6 = *(int *)(DAT_0008a190 + 0x89fe0) + param_1 * 0x70;
    bVar3 = (byte)param_1 | 0x80;
    *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar7 + 4);
    *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(iVar7 + 8);
    uVar1 = *(undefined1 *)(iVar7 + 0xc);
    *(undefined4 *)(iVar6 + 4) = 1;
    *(char *)(iVar6 + 0x38) = (char)param_2;
    *(char *)(iVar6 + 0x3b) = (char)param_5;
    *(undefined1 *)(iVar6 + 0x3a) = uVar1;
    *(undefined4 *)(iVar6 + 0x1c) = 1;
    *(char *)(iVar6 + 0x3f) = (char)param_3;
    *(byte *)(iVar6 + 0x40) = bVar2;
    local_38 = 0xdd;
    local_35 = 0xa0;
    local_33 = 0xb0;
    if (*(char *)(iVar7 + 0xe) == '\x01') {
      iVar7 = 8;
      local_31 = 0x80;
      iVar9 = 9;
      uVar5 = 10;
      local_32 = 0xe0;
    }
    else {
      iVar9 = 7;
      iVar7 = 6;
      uVar5 = 8;
    }
    local_36 = 0xe4;
    local_34 = 0xe4;
    (&local_38)[iVar7] = 0xa8;
    (&local_38)[iVar9] = 0x80;
    local_37 = bVar3;
    iVar7 = MaDevDrv_SendDirectPacket(&local_38,uVar5);
    if ((-1 < iVar7) && (iVar7 = MaDevDrv_WaitStreamFifoEmpty(param_1), -1 < iVar7)) {
      uVar4 = (uchar)(1 << (param_1 & 0xff));
      MaDevDrv_ResetIrqCtrl(uVar4,'\0');
      if (*(uint *)(iVar6 + 0x10) < 0x401) {
        MaDevDrv_SendStreamData(param_1,*(uchar **)(iVar6 + 0x34),*(uint *)(iVar6 + 0x10));
        *(undefined4 *)(iVar6 + 0x34) = 0;
        *(undefined4 *)(iVar6 + 0x14) = 0;
      }
      else {
        MaDevDrv_SendStreamData(param_1,*(uchar **)(iVar6 + 0x34),0x400);
        MaDevDrv_SetIrqCtrl(uVar4,'\0');
        *(int *)(iVar6 + 0x34) = *(int *)(iVar6 + 0x34) + 0x400;
        *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x10) + -0x400;
      }
      local_38 = 0xdd;
      local_35 = bVar2 | 0xe0;
      local_36 = 0xe4;
      if (param_1 < 3) {
        iVar7 = *(int *)(DAT_0008a198 + param_1 * 4 + 0x8a172);
        local_33 = (byte)iVar7 | 0x80;
        iVar7 = iVar7 * 0x70;
      }
      else {
        iVar7 = 0xe0;
        local_33 = 0x82;
      }
      local_32 = 0xe4;
      local_34 = 0xdd;
      local_37 = bVar3;
      local_31 = local_35;
      MaDevDrv_SendDirectPacket(&local_38,8);
      iVar7 = *(int *)(DAT_0008a19c + 0x8a15e) + iVar7;
      *(undefined4 *)(param_1 * 0x70 + *(int *)(DAT_0008a19c + 0x8a15e) + 0x44) = 2;
      *(undefined4 *)(iVar7 + 0x44) = 2;
      *(byte *)(iVar7 + 0x40) = bVar2;
    }
  }
  if (local_2c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

