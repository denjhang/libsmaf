/* MaSndDrv_MultiCnv @ 0007c44c 250B */


/* YAMAHA::MaSndDrv_MultiCnv(unsigned char*, unsigned int) */

void YAMAHA::MaSndDrv_MultiCnv(uchar *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  uint uVar5;
  uchar *puVar6;
  
  if (param_2 < 0x27) {
    iVar1 = 2;
  }
  else {
    iVar1 = 4;
  }
  puVar3 = param_1 + 10;
  iVar2 = DAT_0007c548 + 0x7c46a;
  puVar6 = param_1 + iVar1 * 10;
  uVar5 = ((uint)(puVar6 + (-10 - (int)param_1)) & 7) >> 1;
  param_1[0xb] = param_1[0xb] & 0xf | *(char *)(iVar2 + (uint)(param_1[0xb] >> 4) + 0x2d0) << 4;
  if (puVar3 != puVar6) {
    puVar4 = puVar3;
    if (uVar5 != 0) {
      if (uVar5 != 1) {
        if (uVar5 != 2) {
          param_1[0x15] =
               param_1[0x15] & 0xf | *(char *)(iVar2 + (uint)(param_1[0x15] >> 4) + 0x2d0) << 4;
          puVar4 = param_1 + 0x14;
        }
        puVar3 = puVar4 + 10;
        puVar4[0xb] = puVar4[0xb] & 0xf | *(char *)(iVar2 + (uint)(puVar4[0xb] >> 4) + 0x2d0) << 4;
      }
      puVar3[0xb] = puVar3[0xb] & 0xf | *(char *)(iVar2 + (uint)(puVar3[0xb] >> 4) + 0x2d0) << 4;
      puVar4 = puVar3 + 10;
      if (puVar3 + 10 == puVar6) {
        return;
      }
    }
    do {
      puVar3 = puVar4 + 0x28;
      puVar4[0xb] = puVar4[0xb] & 0xf | *(char *)(iVar2 + (uint)(puVar4[0xb] >> 4) + 0x2d0) << 4;
      puVar4[0x15] = puVar4[0x15] & 0xf | *(char *)(iVar2 + (uint)(puVar4[0x15] >> 4) + 0x2d0) << 4;
      puVar4[0x1f] = puVar4[0x1f] & 0xf | *(char *)(iVar2 + (uint)(puVar4[0x1f] >> 4) + 0x2d0) << 4;
      puVar4[0x29] = puVar4[0x29] & 0xf | *(char *)(iVar2 + (uint)(puVar4[0x29] >> 4) + 0x2d0) << 4;
      puVar4 = puVar3;
    } while (puVar3 != puVar6);
  }
  return;
}

