/* MaSndDrv_SetDoppler @ 0007c574 66B */


/* YAMAHA::MaSndDrv_SetDoppler(unsigned int, unsigned int) */

void YAMAHA::MaSndDrv_SetDoppler(uint param_1,uint param_2)

{
  uchar local_18;
  byte local_17;
  undefined1 local_16;
  byte local_15;
  byte local_14;
  
  if (0xc < param_1) {
    return;
  }
  local_17 = (byte)param_1 | 0x80;
  local_14 = (byte)param_2 | 0x80;
  local_18 = 0xf2;
  local_16 = 0xf7;
  local_15 = (byte)((param_2 << 0x14) >> 0x1b);
  MaDevDrv_SendDirectPacket(&local_18,5);
  return;
}

