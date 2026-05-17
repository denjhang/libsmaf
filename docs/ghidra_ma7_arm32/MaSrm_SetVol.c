/* MaSrm_SetVol @ 0008b2f4 74B */


/* YAMAHA::MaSrm_SetVol(unsigned int, unsigned int) */

undefined4 YAMAHA::MaSrm_SetVol(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uchar local_10;
  char local_f;
  byte local_e;
  
  iVar2 = *(int *)(DAT_0008b340 + 0x8b306) + (param_1 & 3) * 0x70;
  if (*(int *)(iVar2 + 0x44) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(byte *)(iVar2 + 0x3b) = (byte)param_2;
    local_f = (char)(param_1 & 3) + '\x04';
    local_e = (byte)param_2 & 0x7c | 0x81;
    local_10 = 0xf2;
    uVar1 = MaDevDrv_SendDirectPacket(&local_10,3);
  }
  return uVar1;
}

