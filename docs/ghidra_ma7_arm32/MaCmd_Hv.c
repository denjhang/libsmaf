/* MaCmd_Hv @ 000ebb3c 180B */


/* YAMAHA::MaCmd_Hv(unsigned int, unsigned int, unsigned char*, unsigned int) */

undefined4 YAMAHA::MaCmd_Hv(uint param_1,uint param_2,uchar *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  
  switch(param_4) {
  case 1:
    if (param_1 < 4) {
      bVar5 = 0;
    }
    else {
      bVar5 = 0x20;
    }
    *param_3 = 0xd5;
    param_3[1] = bVar5 | param_3[1] | 0x80;
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
  uVar2 = param_2 & 0xf;
  if (param_1 < 4) {
    uVar3 = uVar2 + param_1 * 0x10;
    iVar4 = DAT_000ebc14 + 0xebb90 + param_1 * 0x65d0 + uVar2 * 0x1e;
    bVar5 = *(byte *)(iVar4 + 1);
    if (*(char *)(iVar4 + 0x10) == '\x01') {
      bVar1 = 0;
    }
    else {
      bVar1 = 0x40;
    }
  }
  else {
    bVar5 = 0x20;
    bVar1 = 0x40;
    uVar3 = uVar2;
  }
  param_3[0x25] = 0x80;
  param_3[0x24] = bVar5 | param_3[0x24];
  param_3[0x23] = bVar1 | (byte)uVar3;
  *param_3 = 0xb2;
  return 0x26;
}

