/* MaSndDrv_MultiCnv @ 00192d1c 156B */


/* YAMAHA::MaSndDrv_MultiCnv(unsigned char*, unsigned int) */

void YAMAHA::MaSndDrv_MultiCnv(uchar *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (&DAT_0048ad60)[(int)(uint)param_1[0x15] >> 4];
  iVar2 = 2;
  if (0x26 < param_2) {
    iVar2 = 4;
  }
  param_1[0xb] = param_1[0xb] & 0xf | (&DAT_0048ad60)[(int)(uint)param_1[0xb] >> 4] << 4;
  param_1[0x15] = param_1[0x15] & 0xf | cVar1 << 4;
  if ((iVar2 != 2) &&
     (param_1[0x1f] = param_1[0x1f] & 0xf | (&DAT_0048ad60)[(int)(uint)param_1[0x1f] >> 4] << 4,
     iVar2 != 3)) {
    param_1[0x29] = param_1[0x29] & 0xf | (&DAT_0048ad60)[(int)(uint)param_1[0x29] >> 4] << 4;
  }
  return;
}

