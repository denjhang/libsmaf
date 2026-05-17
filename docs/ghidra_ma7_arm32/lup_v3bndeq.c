/* lup_v3bndeq @ 000fcf18 676B */


/* YAMAHA::lup_v3bndeq(unsigned char) */

void YAMAHA::lup_v3bndeq(uchar param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uint uVar7;
  undefined2 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  char cVar13;
  
  iVar10 = DAT_000fd1c4;
  iVar9 = DAT_000fd1bc + 0xfcf26;
  if (param_1 == '\x04') {
    iVar10 = *(int *)(iVar9 + DAT_000fd1c4);
    uVar5 = *(uchar *)(iVar10 + 0x312);
LAB_000fd0fc:
    uVar7 = (uint)*(ushort *)(iVar10 + 0x30e);
    if (uVar7 < 0x4d) {
      if (uVar7 < 0x34) {
        uVar6 = ':';
        *(undefined2 *)(iVar10 + 0x30e) = 0x34;
        cVar13 = -6;
      }
      else {
        cVar13 = (char)((int)(uVar7 - 0x40) / 2);
        uVar6 = cVar13 + '@';
      }
    }
    else {
      cVar13 = '\x06';
      uVar6 = 'F';
      *(undefined2 *)(iVar10 + 0x30e) = 0x4c;
    }
    lset_iir('\x01','\x03',uVar5,uVar6,'\0',*(uchar **)(iVar9 + DAT_000fd1d8),
             *(uchar **)(iVar9 + DAT_000fd1d8));
    cVar2 = (char)*(undefined2 *)(iVar10 + 0x30e);
    uVar6 = '\x01';
    uVar5 = *(uchar *)(iVar10 + 0x312);
    uVar4 = '\x03';
    iVar10 = DAT_000fd1dc;
  }
  else {
    if (param_1 < 5) {
      if (param_1 != '\0') {
        lchk_prm(2,1);
        iVar10 = *(int *)(iVar9 + DAT_000fd1c4);
        lset_iir('\x02','\n',*(uchar *)(iVar10 + 0x308),*(uchar *)(iVar10 + 0x30a),
                 *(uchar *)(iVar10 + 0x30c),*(uchar **)(iVar9 + DAT_000fd1c8),
                 *(uchar **)(iVar9 + DAT_000fd1c8));
        return;
      }
      iVar10 = *(int *)(iVar9 + DAT_000fd1c4);
      uVar5 = *(uchar *)(iVar10 + 0x310);
    }
    else {
      if (param_1 == '\x06') {
        iVar10 = *(int *)(iVar9 + DAT_000fd1c4);
        uVar3 = *(ushort *)(iVar10 + 0x312);
        if (uVar3 < 0x3b) {
          if (uVar3 < 0x1c) {
            uVar5 = '\x1c';
            *(undefined2 *)(iVar10 + 0x312) = 0x1c;
          }
          else {
            uVar5 = (uchar)uVar3;
          }
        }
        else {
          uVar5 = ':';
          *(undefined2 *)(iVar10 + 0x312) = 0x3a;
        }
        goto LAB_000fd0fc;
      }
      if (5 < param_1) {
        if (param_1 != '\t') {
          if (param_1 == 0xff) {
            puVar11 = *(undefined1 **)(iVar9 + DAT_000fd1c0);
            *puVar11 = 1;
            iVar10 = *(int *)(iVar9 + iVar10);
            *(undefined2 *)(iVar10 + 0x9a) = 0x80;
            *(undefined2 *)(iVar10 + 0x8e) = 0x4000;
            *(undefined2 *)(iVar10 + 0x6c) = 0x4000;
            *(undefined2 *)(iVar10 + 0x6a) = 0x4000;
            *(undefined2 *)(iVar10 + 0x58) = 0x4000;
            *(undefined2 *)(iVar10 + 0x4e) = 0x4000;
            *(undefined2 *)(iVar10 + 0x4c) = 0x4000;
            *(undefined2 *)(iVar10 + 0x5a) = 0x2000;
            *(undefined2 *)(iVar10 + 0xf8) = 0x2000;
            *(undefined2 *)(iVar10 + 0xee) = 0x2000;
            *(undefined2 *)(iVar10 + 0xe4) = 0x2000;
            *(undefined2 *)(iVar10 + 0xda) = 0x2000;
            *(undefined2 *)(iVar10 + 0xd0) = 0x2000;
            *(undefined2 *)(iVar10 + 0xc4) = 0x2000;
            *(undefined2 *)(iVar10 + 0xb6) = 0x2000;
            *(undefined2 *)(iVar10 + 0xaa) = 0x2000;
            *(undefined2 *)(iVar10 + 0xa0) = 0x2000;
            *(undefined2 *)(iVar10 + 0x94) = 0x2000;
            *(undefined2 *)(iVar10 + 0x62) = 0xc000;
            *(undefined2 *)(iVar10 + 0xa8) = 0x7fff;
            *(undefined2 *)(iVar10 + 0x98) = 0x7fff;
            *(undefined2 *)(iVar10 + 0x70) = 0x7fff;
            *(undefined2 *)(iVar10 + 0x56) = 0x7fff;
            *(undefined2 *)(iVar10 + 0x50) = 0x7fff;
            *(undefined2 *)(iVar10 + 0x5c) = 0;
            *(undefined2 *)(iVar10 + 0x5e) = 0;
            *(undefined2 *)(iVar10 + 0x60) = 0;
            *(undefined2 *)(iVar10 + 0x90) = 0;
            *(undefined2 *)(iVar10 + 0x92) = 0;
            *(undefined2 *)(iVar10 + 0x9c) = 0;
            *(undefined2 *)(iVar10 + 0x9e) = 0;
            *(undefined2 *)(iVar10 + 0x78) = 0x1000;
            *(undefined2 *)(iVar10 + 0x82) = 0x1000;
            lup_v3bndeq('\0');
            lup_v3bndeq('\x01');
            lup_v3bndeq('\x04');
            lup_v3bndeq('\t');
            *puVar11 = 0;
          }
          return;
        }
        iVar12 = *(int *)(iVar9 + DAT_000fd1cc);
        iVar10 = *(int *)(iVar9 + DAT_000fd1c4);
        bVar1 = *(byte *)(iVar12 + 2);
        if ((*(ushort *)(iVar10 + 0x358) & 1) == 0) {
          uVar8 = 0x2000;
        }
        else {
          uVar8 = 0x4000;
        }
        *(undefined2 *)(iVar10 + (uint)*(byte *)(iVar12 + 3) * 2 + 0x26) = uVar8;
        *(undefined2 *)(iVar10 + (uint)bVar1 * 2 + 0x26) = uVar8;
        LSendCoef('\x02',(uchar *)(iVar12 + 2));
        return;
      }
      iVar10 = *(int *)(iVar9 + DAT_000fd1c4);
      uVar3 = *(ushort *)(iVar10 + 0x310);
      if (uVar3 < 0x29) {
        if (uVar3 < 8) {
          uVar5 = '\b';
          *(undefined2 *)(iVar10 + 0x310) = 8;
        }
        else {
          uVar5 = (uchar)uVar3;
        }
      }
      else {
        uVar5 = '(';
        *(undefined2 *)(iVar10 + 0x310) = 0x28;
      }
    }
    uVar7 = (uint)*(ushort *)(iVar10 + 0x306);
    if (uVar7 < 0x4d) {
      if (uVar7 < 0x34) {
        uVar6 = ':';
        *(undefined2 *)(iVar10 + 0x306) = 0x34;
        cVar13 = -6;
      }
      else {
        cVar13 = (char)((int)(uVar7 - 0x40) / 2);
        uVar6 = cVar13 + '@';
      }
    }
    else {
      cVar13 = '\x06';
      uVar6 = 'F';
      *(undefined2 *)(iVar10 + 0x306) = 0x4c;
    }
    lset_iir('\0','\x02',uVar5,uVar6,'\0',*(uchar **)(iVar9 + DAT_000fd1d0),
             *(uchar **)(iVar9 + DAT_000fd1d0));
    cVar2 = (char)*(undefined2 *)(iVar10 + 0x306);
    uVar6 = '\0';
    uVar5 = *(uchar *)(iVar10 + 0x310);
    uVar4 = '\x02';
    iVar10 = DAT_000fd1d4;
  }
  lset_iir(uVar6,uVar4,uVar5,cVar2 - cVar13,'\0',*(uchar **)(iVar9 + iVar10),
           *(uchar **)(iVar9 + iVar10));
  return;
}

