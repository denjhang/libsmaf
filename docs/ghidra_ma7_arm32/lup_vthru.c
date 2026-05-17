/* lup_vthru @ 000fd4a4 136B */


/* YAMAHA::lup_vthru(unsigned char) */

void YAMAHA::lup_vthru(uchar param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined2 uVar6;
  
  iVar3 = DAT_000fd534;
  iVar2 = DAT_000fd52c + 0xfd4ae;
  if (param_1 == '\t') {
    iVar3 = *(int *)(iVar2 + DAT_000fd534);
    pbVar5 = *(byte **)(iVar2 + DAT_000fd538);
    bVar1 = *pbVar5;
    if ((int)((uint)*(ushort *)(iVar3 + 0x358) << 0x1f) < 0) {
      uVar6 = 0x4000;
    }
    else {
      uVar6 = 0x2000;
    }
    *(undefined2 *)(iVar3 + (uint)pbVar5[3] * 2 + 0x26) = uVar6;
    *(undefined2 *)(iVar3 + (uint)bVar1 * 2 + 0x26) = uVar6;
    LSendCoef('\x01',pbVar5);
    LSendCoef('\x01',pbVar5 + 3);
    return;
  }
  if (param_1 != 0xff) {
    return;
  }
  puVar4 = *(undefined1 **)(iVar2 + DAT_000fd530);
  *puVar4 = 1;
  iVar3 = *(int *)(iVar2 + iVar3);
  *(undefined2 *)(iVar3 + 0x92) = 0x2000;
  *(undefined2 *)(iVar3 + 0xa2) = 0x2000;
  *(undefined2 *)(iVar3 + 0x8c) = 0x2000;
  *(undefined2 *)(iVar3 + 0x78) = 0x2000;
  *(undefined2 *)(iVar3 + 0x88) = 0x2000;
  *(undefined2 *)(iVar3 + 0x72) = 0x2000;
  lup_vthru('\t');
  *puVar4 = 0;
  return;
}

