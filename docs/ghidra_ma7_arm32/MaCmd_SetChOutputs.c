/* MaCmd_SetChOutputs @ 000f37b8 428B */


/* YAMAHA::MaCmd_SetChOutputs(unsigned int, unsigned int, unsigned char*) */

undefined4 YAMAHA::MaCmd_SetChOutputs(uint param_1,uint param_2,uchar *param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  
  iVar6 = DAT_000f3964 + 0xf37d2 + param_1 * 0x65d0;
  if (param_2 - 2 < 4) {
    bVar5 = *(byte *)((param_2 - 2) + DAT_000f3968 + 0xf4388);
  }
  else {
    bVar5 = 0;
  }
  bVar1 = bVar5 | (byte)param_1 | 0x80;
  iVar4 = 0;
  cVar3 = (char)(param_1 << 4);
  *(byte *)(DAT_000f3964 + 0xf37d2 + param_1 * 0x65d0) = bVar5;
  *(byte *)(iVar6 + 0x1e) = bVar5;
  *(byte *)(iVar6 + 0x3c) = bVar5;
  *(byte *)(iVar6 + 0x5a) = bVar5;
  *(byte *)(iVar6 + 0x78) = bVar5;
  *(byte *)(iVar6 + 0x96) = bVar5;
  *(byte *)(iVar6 + 0xb4) = bVar5;
  *(byte *)(iVar6 + 0xd2) = bVar5;
  *(byte *)(iVar6 + 0xf0) = bVar5;
  *(byte *)(iVar6 + 0x10e) = bVar5;
  *(byte *)(iVar6 + 300) = bVar5;
  *(byte *)(iVar6 + 0x14a) = bVar5;
  *(byte *)(iVar6 + 0x168) = bVar5;
  *(byte *)(iVar6 + 0x186) = bVar5;
  *(byte *)(iVar6 + 0x1a4) = bVar5;
  *(byte *)(iVar6 + 0x1c2) = bVar5;
  *(byte *)(iVar6 + 0x1e0) = bVar5;
  *(byte *)(iVar6 + 0x1fe) = bVar5;
  *(byte *)(iVar6 + 0x21c) = bVar5;
  *(byte *)(iVar6 + 0x23a) = bVar5;
  *(byte *)(iVar6 + 600) = bVar5;
  *(byte *)(iVar6 + 0x276) = bVar5;
  *(byte *)(iVar6 + 0x294) = bVar5;
  *(byte *)(iVar6 + 0x2b2) = bVar5;
  *(byte *)(iVar6 + 0x2d0) = bVar5;
  *(byte *)(iVar6 + 0x2ee) = bVar5;
  *(byte *)(iVar6 + 0x30c) = bVar5;
  *(byte *)(iVar6 + 0x32a) = bVar5;
  *(byte *)(iVar6 + 0x348) = bVar5;
  *(byte *)(iVar6 + 0x366) = bVar5;
  *(byte *)(iVar6 + 900) = bVar5;
  *(byte *)(iVar6 + 0x3a2) = bVar5;
  do {
    cVar2 = (char)iVar4;
    *param_3 = 0x8b;
    param_3[2] = 0x94;
    param_3[3] = bVar1;
    param_3[4] = 0x8b;
    param_3[5] = cVar2 + '\x01' + cVar3 | 0x80;
    param_3[1] = cVar3 + cVar2 | 0x80;
    param_3[6] = 0x94;
    param_3[7] = bVar1;
    param_3[8] = 0x8b;
    param_3[9] = cVar2 + '\x02' + cVar3 | 0x80;
    param_3[10] = 0x94;
    param_3[0xb] = bVar1;
    param_3[0xc] = 0x8b;
    iVar4 = iVar4 + 8;
    param_3[0xd] = cVar2 + '\x03' + cVar3 | 0x80;
    param_3[0xe] = 0x94;
    param_3[0xf] = bVar1;
    param_3[0x11] = cVar2 + '\x04' + cVar3 | 0x80;
    param_3[0x10] = 0x8b;
    param_3[0x12] = 0x94;
    param_3[0x13] = bVar1;
    param_3[0x14] = 0x8b;
    param_3[0x15] = cVar2 + '\x05' + cVar3 | 0x80;
    param_3[0x16] = 0x94;
    param_3[0x17] = bVar1;
    param_3[0x18] = 0x8b;
    param_3[0x19] = cVar2 + '\x06' + cVar3 | 0x80;
    param_3[0x1a] = 0x94;
    param_3[0x1b] = bVar1;
    param_3[0x1c] = 0x8b;
    param_3[0x1d] = cVar2 + '\a' + cVar3 | 0x80;
    param_3[0x1e] = 0x94;
    param_3[0x1f] = bVar1;
    param_3 = param_3 + 0x20;
  } while (iVar4 != 0x10);
  return 0x40;
}

