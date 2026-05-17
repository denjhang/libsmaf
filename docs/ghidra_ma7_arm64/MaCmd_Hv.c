/* MaCmd_Hv @ 002330d0 272B */


/* YAMAHA::MaCmd_Hv(unsigned int, unsigned int, unsigned char*, unsigned int) */

undefined8 YAMAHA::MaCmd_Hv(uint param_1,uint param_2,uchar *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  
  switch(param_4) {
  case 1:
    bVar3 = 0;
    if (3 < param_1) {
      bVar3 = 0x20;
    }
    *param_3 = 0xd5;
    param_3[1] = bVar3 | param_3[1] | 0x80;
    return 2;
  default:
    return 0;
  case 0x1a:
    *param_3 = 0xba;
    param_3[0x1a] = param_3[0x1a] | 0x80;
    return 0x1b;
  case 0x22:
    *param_3 = 0xb2;
    param_3[0x22] = param_3[0x22] | 0x80;
    return 0x23;
  case 0x24:
    break;
  }
  uVar1 = param_2 & 0xf;
  if (param_1 < 4) {
    uVar4 = (ulong)uVar1;
    uVar1 = uVar1 + param_1 * 0x10;
    lVar5 = uVar4 * 0x1e + (ulong)param_1 * 0x65d0;
    bVar2 = (&DAT_0074a411)[lVar5];
    bVar3 = 0;
    if ((&DAT_0074a420)[lVar5] != '\x01') {
      bVar3 = 0x40;
    }
  }
  else {
    bVar2 = 0x20;
    bVar3 = 0x40;
  }
  *param_3 = 0xb2;
  param_3[0x23] = bVar3 | (byte)uVar1;
  param_3[0x24] = bVar2 | param_3[0x24];
  param_3[0x25] = 0x80;
  return 0x26;
}

