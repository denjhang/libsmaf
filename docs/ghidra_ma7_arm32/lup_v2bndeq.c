/* lup_v2bndeq @ 000fdd78 282B */


/* YAMAHA::lup_v2bndeq(unsigned char) */

void YAMAHA::lup_v2bndeq(uchar param_1)

{
  byte bVar1;
  uchar uVar2;
  uchar uVar3;
  undefined2 uVar4;
  uchar uVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  
  iVar6 = DAT_000fde98;
  iVar7 = DAT_000fde94 + 0xfdd84;
  if (param_1 < 4) {
    if (param_1 < 2) {
      lchk_prm(1,0);
      uVar2 = '\x02';
      puVar8 = *(uchar **)(iVar7 + DAT_000fde9c);
      uVar5 = *(uchar *)(*(int *)(iVar7 + DAT_000fde98) + 0x308);
      uVar3 = *(uchar *)(*(int *)(iVar7 + DAT_000fde98) + 0x306);
      iVar6 = DAT_000fdea0;
    }
    else {
      lchk_prm(0,2);
      uVar2 = '\x03';
      puVar8 = *(uchar **)(iVar7 + DAT_000fdeac);
      uVar3 = *(uchar *)(*(int *)(iVar7 + DAT_000fde98) + 0x30a);
      uVar5 = *(uchar *)(*(int *)(iVar7 + DAT_000fde98) + 0x30c);
      iVar6 = DAT_000fdeb0;
    }
    lset_iir('\x01',uVar2,uVar3,uVar5,'\0',puVar8,*(uchar **)(iVar7 + iVar6));
  }
  else {
    if (param_1 == '\t') {
      pbVar10 = *(byte **)(iVar7 + DAT_000fdea8);
      iVar6 = *(int *)(iVar7 + DAT_000fde98);
      bVar1 = *pbVar10;
      if ((*(ushort *)(iVar6 + 0x358) & 1) == 0) {
        uVar4 = 0x2000;
      }
      else {
        uVar4 = 0x4000;
      }
      *(undefined2 *)(iVar6 + (uint)pbVar10[3] * 2 + 0x26) = uVar4;
      *(undefined2 *)(iVar6 + (uint)bVar1 * 2 + 0x26) = uVar4;
      LSendCoef('\x01',pbVar10);
      LSendCoef('\x01',pbVar10 + 3);
      return;
    }
    if (param_1 == 0xff) {
      puVar9 = *(undefined1 **)(iVar7 + DAT_000fdea4);
      *puVar9 = 1;
      iVar6 = *(int *)(iVar7 + iVar6);
      *(undefined2 *)(iVar6 + 0x6c) = 0x8000;
      *(undefined2 *)(iVar6 + 0xd8) = 0x7fff;
      *(undefined2 *)(iVar6 + 0xd2) = 0x7fff;
      *(undefined2 *)(iVar6 + 0xc2) = 0x7fff;
      *(undefined2 *)(iVar6 + 0xbc) = 0x7fff;
      *(undefined2 *)(iVar6 + 0x9c) = 0x7fff;
      *(undefined2 *)(iVar6 + 0x96) = 0x7fff;
      *(undefined2 *)(iVar6 + 0x82) = 0x7fff;
      *(undefined2 *)(iVar6 + 0x7c) = 0x7fff;
      *(undefined2 *)(iVar6 + 0x56) = 0x7fff;
      *(undefined2 *)(iVar6 + 0xa2) = 0x2000;
      *(undefined2 *)(iVar6 + 0x88) = 0x2000;
      lup_v2bndeq('\0');
      lup_v2bndeq('\x02');
      lup_v2bndeq('\t');
      *puVar9 = 0;
      return;
    }
  }
  return;
}

