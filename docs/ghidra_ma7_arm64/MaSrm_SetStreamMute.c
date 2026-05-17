/* MaSrm_SetStreamMute @ 001a7e1c 1304B */


/* YAMAHA::MaSrm_SetStreamMute(unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetStreamMute(uint param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uchar local_10 [3];
  byte local_d;
  long local_8;
  
  uVar3 = (ulong)param_2;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((param_2 < 0x40 && param_3 < 2) && (param_1 < 4)) {
    uVar1 = 0;
    if (param_3 == 1) {
      uVar2 = param_1 & 0xff;
      if ((((*(byte *)(DAT_005dd9b8 + 0x40) == uVar2) &&
           ((uint)*(byte *)(DAT_005dd9b8 + 0x47) == (param_2 & 0xff))) &&
          (*(int *)(DAT_005dd9b8 + 0x4c) == 2)) &&
         ((&DAT_005dc1ca)[(ulong)param_1 * 0x600 + uVar3 * 0x18] != '\x01')) {
        local_10[1] = 0x80;
        local_10[0] = 0xdd;
        local_10[2] = 0xe0;
        local_d = 0x80;
        uVar1 = MaDevDrv_SendDirectPacket(local_10,4);
      }
      uVar4 = (ulong)param_1;
      if (((*(byte *)(DAT_005dd9b8 + 0xb8) == uVar2) &&
          ((uint)*(byte *)(DAT_005dd9b8 + 0xbf) == (param_2 & 0xff))) &&
         ((*(int *)(DAT_005dd9b8 + 0xc4) == 2 &&
          ((&DAT_005dc1ca)[uVar4 * 0x600 + uVar3 * 0x18] != '\x01')))) {
        local_10[0] = 0xdd;
        local_10[1] = 0x81;
        local_10[2] = 0xe0;
        local_d = 0x80;
        uVar1 = MaDevDrv_SendDirectPacket(local_10,4);
      }
      if (((*(byte *)(DAT_005dd9b8 + 0x130) == uVar2) &&
          ((uint)*(byte *)(DAT_005dd9b8 + 0x137) == (param_2 & 0xff))) &&
         ((*(int *)(DAT_005dd9b8 + 0x13c) == 2 &&
          ((&DAT_005dc1ca)[uVar4 * 0x600 + uVar3 * 0x18] != '\x01')))) {
        local_10[0] = 0xdd;
        local_10[1] = 0x82;
        local_10[2] = 0xe0;
        local_d = 0x80;
        uVar1 = MaDevDrv_SendDirectPacket(local_10,4);
      }
      if ((((*(byte *)(DAT_005dd9b8 + 0x1a8) == uVar2) &&
           ((uint)*(byte *)(DAT_005dd9b8 + 0x1af) == (param_2 & 0xff))) &&
          (*(int *)(DAT_005dd9b8 + 0x1b4) == 2)) &&
         ((&DAT_005dc1ca)[uVar4 * 0x600 + uVar3 * 0x18] != '\x01')) {
        local_10[0] = 0xdd;
        local_10[1] = 0x83;
        local_10[2] = 0xe0;
        local_d = 0x80;
        uVar1 = MaDevDrv_SendDirectPacket(local_10,4);
      }
    }
    else {
      uVar2 = param_3 & 0xff;
      if ((((uint)*(byte *)(DAT_005dd9b8 + 0x40) == (param_1 & 0xff)) &&
          ((uint)*(byte *)(DAT_005dd9b8 + 0x47) == (param_2 & 0xff))) &&
         ((*(int *)(DAT_005dd9b8 + 0x4c) == 2 &&
          ((byte)(&DAT_005dc1ca)[(ulong)param_1 * 0x600 + uVar3 * 0x18] != uVar2)))) {
        local_d = *(char *)(DAT_005dd9b8 + 0x43) << 2 | 0x80;
        local_10[0] = 0xdd;
        local_10[1] = 0x80;
        local_10[2] = 0xe0;
        uVar1 = MaDevDrv_SendDirectPacket(local_10,4);
      }
      uVar4 = (ulong)param_1;
      if ((((uint)*(byte *)(DAT_005dd9b8 + 0xb8) == (param_1 & 0xff)) &&
          ((uint)*(byte *)(DAT_005dd9b8 + 0xbf) == (param_2 & 0xff))) &&
         ((*(int *)(DAT_005dd9b8 + 0xc4) == 2 &&
          ((byte)(&DAT_005dc1ca)[uVar4 * 0x600 + uVar3 * 0x18] != uVar2)))) {
        local_d = *(char *)(DAT_005dd9b8 + 0xbb) << 2 | 0x80;
        local_10[0] = 0xdd;
        local_10[1] = 0x81;
        local_10[2] = 0xe0;
        uVar1 = MaDevDrv_SendDirectPacket(local_10,4);
      }
      if (((((uint)*(byte *)(DAT_005dd9b8 + 0x130) == (param_1 & 0xff)) &&
           ((uint)*(byte *)(DAT_005dd9b8 + 0x137) == (param_2 & 0xff))) &&
          (*(int *)(DAT_005dd9b8 + 0x13c) == 2)) &&
         ((byte)(&DAT_005dc1ca)[uVar4 * 0x600 + uVar3 * 0x18] != uVar2)) {
        local_d = *(char *)(DAT_005dd9b8 + 0x133) << 2 | 0x80;
        local_10[0] = 0xdd;
        local_10[1] = 0x82;
        local_10[2] = 0xe0;
        uVar1 = MaDevDrv_SendDirectPacket(local_10,4);
      }
      if ((((uint)*(byte *)(DAT_005dd9b8 + 0x1a8) == (param_1 & 0xff)) &&
          ((uint)*(byte *)(DAT_005dd9b8 + 0x1af) == (param_2 & 0xff))) &&
         ((*(int *)(DAT_005dd9b8 + 0x1b4) == 2 &&
          ((byte)(&DAT_005dc1ca)[uVar4 * 0x600 + uVar3 * 0x18] != uVar2)))) {
        local_d = *(char *)(DAT_005dd9b8 + 0x1ab) << 2 | 0x80;
        local_10[0] = 0xdd;
        local_10[1] = 0x83;
        local_10[2] = 0xe0;
        uVar1 = MaDevDrv_SendDirectPacket(local_10,4);
      }
    }
    (&DAT_005dc1ca)[(ulong)param_1 * 0x600 + uVar3 * 0x18] = (char)param_3;
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

