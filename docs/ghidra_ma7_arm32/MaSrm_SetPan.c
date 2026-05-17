/* MaSrm_SetPan @ 0008b36c 98B */


/* YAMAHA::MaSrm_SetPan(unsigned int, unsigned int) */

undefined4 YAMAHA::MaSrm_SetPan(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uchar local_10;
  byte local_f;
  undefined1 local_e;
  byte local_d;
  
  iVar2 = *(int *)(DAT_0008b3d0 + 0x8b378) + (param_1 & 3) * 0x70;
  if (*(int *)(iVar2 + 0x44) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_d = (byte)param_2;
    *(byte *)(iVar2 + 0x3c) = local_d;
    local_f = (byte)(param_1 & 3) | 0x80;
    if (param_2 != 0xff) {
      local_d = local_d & 0x7c;
    }
    local_10 = 0xdd;
    if (param_2 != 0xff) {
      local_d = local_d | 0x80;
    }
    else {
      local_d = 0x81;
    }
    local_e = 0xdf;
    uVar1 = MaDevDrv_SendDirectPacket(&local_10,4);
  }
  return uVar1;
}

