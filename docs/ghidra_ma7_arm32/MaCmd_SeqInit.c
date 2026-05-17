/* MaCmd_SeqInit @ 000f396c 678B */


/* YAMAHA::MaCmd_SeqInit(unsigned int, unsigned int, unsigned char*) */

undefined4 YAMAHA::MaCmd_SeqInit(uint param_1,uint param_2,uchar *param_3)

{
  uchar uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uchar *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if (param_2 < 5) {
    iVar6 = param_2 + DAT_000f3c14 + 0xf3980;
    uVar1 = *(uchar *)(iVar6 + 0xbac);
    bVar2 = *(byte *)(iVar6 + 0xbb4);
  }
  else {
    bVar2 = 0x70;
    uVar1 = 0xc3;
  }
  if (param_1 < 4) {
    iVar8 = param_1 * 0x65d0;
    iVar6 = DAT_000f3c18 + 0xf399c;
    iVar10 = iVar6 + iVar8;
    *(undefined1 *)(iVar10 + 0x3c4) = 100;
    *(byte *)(iVar6 + iVar8) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x1e) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x3c) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x5a) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x78) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x96) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0xb4) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0xd2) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0xf0) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x10e) = bVar2;
    *(byte *)(iVar6 + iVar8 + 300) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x14a) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x168) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x186) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x1a4) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x1c2) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x1e0) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x1fe) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x21c) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x23a) = bVar2;
    *(byte *)(iVar6 + iVar8 + 600) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x276) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x294) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x2b2) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x2d0) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x2ee) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x30c) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x32a) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x348) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x366) = bVar2;
    *(byte *)(iVar6 + iVar8 + 900) = bVar2;
    *(byte *)(iVar6 + iVar8 + 0x3a2) = bVar2;
    if (bVar2 == 0) {
      *(undefined1 *)(iVar10 + 0x3c8) = 0;
      iVar8 = 8;
      uVar5 = 9;
      iVar10 = 7;
      iVar9 = 6;
      iVar11 = 5;
      iVar15 = 4;
      iVar12 = 3;
      iVar13 = 2;
      iVar14 = 1;
      iVar6 = 0;
    }
    else {
      bVar2 = (byte)param_1 | bVar2 | 0x80;
      cVar4 = (char)(param_1 << 4);
      iVar6 = 0;
      *(undefined1 *)(iVar10 + 0x3c8) = 1;
      puVar7 = param_3;
      do {
        cVar3 = (char)iVar6;
        puVar7[1] = cVar4 + cVar3 | 0x80;
        puVar7[5] = cVar3 + '\x01' + cVar4 | 0x80;
        *puVar7 = 0x8b;
        puVar7[2] = 0x94;
        puVar7[3] = bVar2;
        puVar7[4] = 0x8b;
        puVar7[6] = 0x94;
        puVar7[7] = bVar2;
        puVar7[8] = 0x8b;
        puVar7[9] = cVar3 + '\x02' + cVar4 | 0x80;
        puVar7[10] = 0x94;
        puVar7[0xb] = bVar2;
        iVar6 = iVar6 + 8;
        puVar7[0xd] = cVar3 + '\x03' + cVar4 | 0x80;
        puVar7[0x11] = cVar3 + '\x04' + cVar4 | 0x80;
        puVar7[0xc] = 0x8b;
        puVar7[0xe] = 0x94;
        puVar7[0xf] = bVar2;
        puVar7[0x10] = 0x8b;
        puVar7[0x12] = 0x94;
        puVar7[0x13] = bVar2;
        puVar7[0x14] = 0x8b;
        puVar7[0x15] = cVar3 + '\x05' + cVar4 | 0x80;
        puVar7[0x16] = 0x94;
        puVar7[0x17] = bVar2;
        puVar7[0x18] = 0x8b;
        puVar7[0x19] = cVar3 + '\x06' + cVar4 | 0x80;
        puVar7[0x1a] = 0x94;
        puVar7[0x1b] = bVar2;
        puVar7[0x1c] = 0x8b;
        puVar7[0x1d] = cVar3 + '\a' + cVar4 | 0x80;
        puVar7[0x1e] = 0x94;
        puVar7[0x1f] = bVar2;
        puVar7 = puVar7 + 0x20;
      } while (iVar6 != 0x10);
      uVar5 = 0x49;
      iVar8 = 0x48;
      iVar10 = 0x47;
      iVar9 = 0x46;
      iVar11 = 0x45;
      iVar15 = 0x44;
      iVar12 = 0x43;
      iVar13 = 0x42;
      iVar14 = 0x41;
      iVar6 = 0x40;
    }
  }
  else {
    iVar8 = 8;
    uVar5 = 9;
    iVar10 = 7;
    iVar9 = 6;
    iVar11 = 5;
    iVar15 = 4;
    iVar12 = 3;
    iVar13 = 2;
    iVar14 = 1;
    iVar6 = 0;
  }
  param_3[iVar6] = 0xf2;
  param_3[iVar14] = (byte)param_1;
  param_3[iVar13] = 'e';
  param_3[iVar12] = 'A';
  param_3[iVar15] = '\b';
  param_3[iVar11] = '\0';
  param_3[iVar9] = '\b';
  param_3[iVar10] = '\0';
  param_3[iVar8] = uVar1;
  return uVar5;
}

