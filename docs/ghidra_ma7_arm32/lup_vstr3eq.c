/* lup_vstr3eq @ 000fdeb4 430B */


/* YAMAHA::lup_vstr3eq(unsigned char) */

void YAMAHA::lup_vstr3eq(uchar param_1)

{
  byte bVar1;
  ushort uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  undefined2 uVar6;
  uchar uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  uchar *puVar12;
  uchar uVar13;
  
  iVar9 = DAT_000fe06c;
  iVar8 = DAT_000fe064 + 0xfdec0;
  if (param_1 == '\x04') {
    iVar9 = *(int *)(iVar8 + DAT_000fe06c);
    uVar5 = *(uchar *)(iVar9 + 0x312);
LAB_000fe006:
    uVar2 = *(ushort *)(iVar9 + 0x30e);
    if (uVar2 < 0x4d) {
      if (uVar2 < 0x34) {
        uVar7 = '4';
        *(undefined2 *)(iVar9 + 0x30e) = 0x34;
      }
      else {
        uVar7 = (uchar)uVar2;
      }
    }
    else {
      uVar7 = 'L';
      *(undefined2 *)(iVar9 + 0x30e) = 0x4c;
    }
    uVar4 = '\x03';
    uVar13 = '\0';
    uVar3 = '\x01';
    puVar12 = *(uchar **)(iVar8 + DAT_000fe084);
    iVar9 = DAT_000fe088;
  }
  else {
    if (param_1 < 5) {
      if (param_1 != '\0') {
        lchk_prm(2,1);
        uVar3 = '\x02';
        uVar4 = '\n';
        iVar9 = *(int *)(iVar8 + DAT_000fe06c);
        uVar13 = *(uchar *)(iVar9 + 0x30c);
        uVar5 = *(uchar *)(iVar9 + 0x308);
        uVar7 = *(uchar *)(iVar9 + 0x30a);
        puVar12 = *(uchar **)(iVar8 + DAT_000fe070);
        iVar9 = DAT_000fe074;
        goto LAB_000fdf62;
      }
      iVar9 = *(int *)(iVar8 + DAT_000fe06c);
      uVar5 = *(uchar *)(iVar9 + 0x310);
    }
    else {
      if (param_1 == '\x06') {
        iVar9 = *(int *)(iVar8 + DAT_000fe06c);
        uVar2 = *(ushort *)(iVar9 + 0x312);
        if (uVar2 < 0x3b) {
          if (uVar2 < 0x1c) {
            uVar5 = '\x1c';
            *(undefined2 *)(iVar9 + 0x312) = 0x1c;
          }
          else {
            uVar5 = (uchar)uVar2;
          }
        }
        else {
          uVar5 = ':';
          *(undefined2 *)(iVar9 + 0x312) = 0x3a;
        }
        goto LAB_000fe006;
      }
      if (5 < param_1) {
        if (param_1 != '\t') {
          if (param_1 == 0xff) {
            puVar10 = *(undefined1 **)(iVar8 + DAT_000fe068);
            *puVar10 = 1;
            iVar9 = *(int *)(iVar8 + iVar9);
            *(undefined2 *)(iVar9 + 0x6c) = 0x8000;
            *(undefined2 *)(iVar9 + 0xd8) = 0x7fff;
            *(undefined2 *)(iVar9 + 0xd2) = 0x7fff;
            *(undefined2 *)(iVar9 + 0xc2) = 0x7fff;
            *(undefined2 *)(iVar9 + 0xbc) = 0x7fff;
            *(undefined2 *)(iVar9 + 0x9c) = 0x7fff;
            *(undefined2 *)(iVar9 + 0x96) = 0x7fff;
            *(undefined2 *)(iVar9 + 0x82) = 0x7fff;
            *(undefined2 *)(iVar9 + 0x7c) = 0x7fff;
            *(undefined2 *)(iVar9 + 0x56) = 0x7fff;
            lup_vstr3eq('\0');
            lup_vstr3eq('\x01');
            lup_vstr3eq('\x04');
            lup_vstr3eq('\t');
            *puVar10 = 0;
          }
          return;
        }
        pbVar11 = *(byte **)(iVar8 + DAT_000fe078);
        iVar9 = *(int *)(iVar8 + DAT_000fe06c);
        bVar1 = *pbVar11;
        if ((*(ushort *)(iVar9 + 0x358) & 1) == 0) {
          uVar6 = 0x2000;
        }
        else {
          uVar6 = 0x4000;
        }
        *(undefined2 *)(iVar9 + (uint)pbVar11[3] * 2 + 0x26) = uVar6;
        *(undefined2 *)(iVar9 + (uint)bVar1 * 2 + 0x26) = uVar6;
        LSendCoef('\x01',pbVar11);
        LSendCoef('\x01',pbVar11 + 3);
        return;
      }
      iVar9 = *(int *)(iVar8 + DAT_000fe06c);
      uVar2 = *(ushort *)(iVar9 + 0x310);
      if (uVar2 < 0x29) {
        if (uVar2 < 8) {
          uVar5 = '\b';
          *(undefined2 *)(iVar9 + 0x310) = 8;
        }
        else {
          uVar5 = (uchar)uVar2;
        }
      }
      else {
        uVar5 = '(';
        *(undefined2 *)(iVar9 + 0x310) = 0x28;
      }
    }
    uVar2 = *(ushort *)(iVar9 + 0x306);
    if (uVar2 < 0x4d) {
      if (uVar2 < 0x34) {
        uVar7 = '4';
        *(undefined2 *)(iVar9 + 0x306) = 0x34;
      }
      else {
        uVar7 = (uchar)uVar2;
      }
    }
    else {
      uVar7 = 'L';
      *(undefined2 *)(iVar9 + 0x306) = 0x4c;
    }
    uVar3 = '\x01';
    uVar13 = '\0';
    uVar4 = '\x02';
    puVar12 = *(uchar **)(iVar8 + DAT_000fe07c);
    iVar9 = DAT_000fe080;
  }
LAB_000fdf62:
  lset_iir(uVar3,uVar4,uVar5,uVar7,uVar13,puVar12,*(uchar **)(iVar8 + iVar9));
  return;
}

