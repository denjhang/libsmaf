/* MaCmd_AllNotesOff @ 000f0e64 5562B */


/* YAMAHA::MaCmd_AllNotesOff(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_AllNotesOff(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uchar *puVar13;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar8 = param_3 & 0xf;
  iVar4 = DAT_000f1ae4 + 0xf0e7a + param_1 * 0x65d0;
  if ((*(char *)(iVar4 + 0x3c5) == '\x03') && (*(byte *)(iVar4 + 0x3c9) == uVar8)) {
    uVar8 = 0;
    *(undefined1 *)
     (DAT_000f1ae4 + 0xf0e7a + param_1 * 0x65d0 + (uint)*(byte *)(iVar4 + 0x3c9) * 0x1e + 2) = 0;
    if (param_2 < 0) {
      *param_4 = 0x80;
      iVar2 = 4;
      iVar10 = 2;
      param_4[1] = *(byte *)(iVar4 + 0x3ca) | 0x80;
      iVar4 = 3;
    }
    else {
      if (param_2 < 0x80) {
        iVar2 = 6;
        iVar4 = 5;
        iVar12 = 2;
        iVar11 = 1;
        iVar10 = 4;
        iVar3 = 3;
      }
      else {
        do {
          param_4[uVar8] = (byte)param_2 & 0x7f;
          uVar6 = uVar8 + 1;
          iVar7 = param_2 >> 7;
          if (iVar7 < 0x80 || 1 < uVar6) break;
          param_4[uVar6] = (byte)iVar7 & 0x7f;
          uVar6 = uVar8 + 2;
          iVar7 = param_2 >> 0xe;
          if (iVar7 < 0x80 || 1 < uVar6) break;
          param_4[uVar6] = (byte)iVar7 & 0x7f;
          uVar6 = uVar8 + 3;
          iVar7 = param_2 >> 0x15;
          if (iVar7 < 0x80 || 1 < uVar6) break;
          param_4[uVar6] = (byte)iVar7 & 0x7f;
          uVar8 = uVar8 + 4;
          param_2 = param_2 >> 0x1c;
          uVar6 = uVar8;
          iVar7 = param_2;
        } while (0x7f < param_2 && uVar8 < 2);
        iVar11 = uVar6 + 1;
        iVar3 = uVar6 + 3;
        iVar12 = uVar6 + 2;
        iVar4 = uVar6 + 5;
        iVar2 = uVar6 + 6;
        iVar10 = uVar6 + 4;
        uVar8 = uVar6;
        param_2 = iVar7;
      }
      iVar7 = DAT_000f1af0;
      param_4[uVar8] = (byte)param_2 | 0x80;
      param_4[iVar11] = 0x80;
      param_4[iVar12] = *(byte *)(param_1 * 0x65d0 + iVar7 + 0xf1de2) | 0x80;
      param_4[iVar3] = 0x80;
    }
    param_4[iVar10] = 0x8a;
    param_4[iVar4] = 0x80;
  }
  else {
    iVar4 = DAT_000f1ae8 + 0xf0ea4 + param_1 * 0x65d0 + uVar8 * 0x1e;
    if (*(char *)(iVar4 + 2) == '\0') {
      MaDva_ReleaseFmOnSlot(param_1,uVar8,(_MADVA_SLOTMAP *)&local_38);
      MaDva_ReleaseWtOnSlot(param_1,uVar8,(_MADVA_SLOTMAP *)&local_30);
      if ((((local_38 == 0) && (local_34 == 0)) && (local_30 == 0)) && (local_2c == 0)) {
        if (param_2 < 1) {
          iVar2 = 0;
        }
        else {
          iVar2 = MaCmd_Nop(param_2,0,param_4);
        }
      }
      else if (param_2 < 0) {
        bVar1 = false;
        iVar4 = 0;
        uVar8 = 0;
        do {
          iVar10 = iVar4;
          if ((local_38 >> (uVar8 & 0xff) & 1) != 0) {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = (byte)uVar8 | 0x80;
            param_4[iVar4 + 2] = 0x8a;
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar4 = iVar10;
          if ((local_38 >> (uVar8 + 1 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 1);
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0x80;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0x80;
            }
            iVar4 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          iVar10 = iVar4;
          if ((local_38 >> (uVar8 + 2 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 2);
            if (bVar1) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0x80;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0x80;
            }
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar4 = iVar10;
          if ((local_38 >> (uVar8 + 3 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 3);
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0x80;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0x80;
            }
            iVar4 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          iVar10 = iVar4;
          if ((local_38 >> (uVar8 + 4 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 4);
            if (bVar1) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0x80;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0x80;
            }
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar4 = iVar10;
          if ((local_38 >> (uVar8 + 5 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 5);
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0x80;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0x80;
            }
            iVar4 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          iVar10 = iVar4;
          if ((local_38 >> (uVar8 + 6 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 6);
            if (bVar1) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0x80;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0x80;
            }
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar4 = iVar10;
          if ((local_38 >> (uVar8 + 7 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 7);
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0x80;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0x80;
            }
            iVar4 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          uVar8 = uVar8 + 8;
        } while (uVar8 != 0x20);
        iVar10 = iVar4;
        if ((int)(local_34 << 0x1f) < 0) {
          if (bVar1) {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = 0xa0;
          }
          else {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = 0xa0;
          }
          iVar10 = iVar4 + 4;
          bVar1 = true;
          param_4[iVar4 + 2] = 0x8a;
          param_4[iVar4 + 3] = 0x80;
        }
        iVar4 = iVar10;
        if ((local_34 & 2) != 0) {
          if (bVar1) {
            param_4[iVar10] = 0x80;
            param_4[iVar10 + 1] = 0xa1;
          }
          else {
            param_4[iVar10] = 0x80;
            param_4[iVar10 + 1] = 0xa1;
          }
          iVar4 = iVar10 + 4;
          bVar1 = true;
          param_4[iVar10 + 2] = 0x8a;
          param_4[iVar10 + 3] = 0x80;
        }
        uVar8 = 2;
        bVar9 = 0x22;
        do {
          iVar10 = iVar4;
          if ((local_34 >> (uVar8 & 0xff) & 1) != 0) {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = bVar9 | 0x80;
            param_4[iVar4 + 2] = 0x8a;
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar4 = iVar10;
          if ((local_34 >> (uVar8 + 1 & 0xff) & 1) != 0) {
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 + 1 | 0x80;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 + 1 | 0x80;
            }
            iVar4 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          iVar10 = iVar4;
          if ((local_34 >> (uVar8 + 2 & 0xff) & 1) != 0) {
            if (bVar1) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 + 2 | 0x80;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 + 2 | 0x80;
            }
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar2 = iVar10;
          if ((local_34 >> (uVar8 + 3 & 0xff) & 1) != 0) {
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 + 3 | 0x80;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 + 3 | 0x80;
            }
            iVar2 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          iVar4 = iVar2;
          if ((local_34 >> (uVar8 + 4 & 0xff) & 1) != 0) {
            if (bVar1) {
              param_4[iVar2] = 0x80;
              param_4[iVar2 + 1] = bVar9 + 4 | 0x80;
            }
            else {
              param_4[iVar2] = 0x80;
              param_4[iVar2 + 1] = bVar9 + 4 | 0x80;
            }
            iVar4 = iVar2 + 4;
            bVar1 = true;
            param_4[iVar2 + 2] = 0x8a;
            param_4[iVar2 + 3] = 0x80;
          }
          uVar8 = uVar8 + 5;
          bVar9 = bVar9 + 5;
        } while (uVar8 != 0x20);
        uVar8 = 0;
        do {
          iVar10 = iVar4;
          if ((int)((local_30 >> (uVar8 & 0xff)) << 0x1f) < 0) {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = (byte)uVar8 | 0xc0;
            param_4[iVar4 + 2] = 0x8a;
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar4 = iVar10;
          if ((int)((local_30 >> (uVar8 + 1 & 0xff)) << 0x1f) < 0) {
            bVar9 = (byte)(uVar8 + 1);
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0xc0;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0xc0;
            }
            iVar4 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          iVar10 = iVar4;
          if ((local_30 >> (uVar8 + 2 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 2);
            if (bVar1) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0xc0;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0xc0;
            }
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar4 = iVar10;
          if ((local_30 >> (uVar8 + 3 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 3);
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0xc0;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0xc0;
            }
            iVar4 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          iVar10 = iVar4;
          if ((local_30 >> (uVar8 + 4 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 4);
            if (bVar1) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0xc0;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0xc0;
            }
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar4 = iVar10;
          if ((local_30 >> (uVar8 + 5 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 5);
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0xc0;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0xc0;
            }
            iVar4 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          iVar10 = iVar4;
          if ((local_30 >> (uVar8 + 6 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 6);
            if (bVar1) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0xc0;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 | 0xc0;
            }
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar4 = iVar10;
          if ((local_30 >> (uVar8 + 7 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 7);
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0xc0;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 | 0xc0;
            }
            iVar4 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          uVar8 = uVar8 + 8;
        } while (uVar8 != 0x20);
        iVar10 = iVar4;
        if ((int)(local_2c << 0x1f) < 0) {
          if (bVar1) {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = 0xe0;
          }
          else {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = 0xe0;
          }
          iVar10 = iVar4 + 4;
          bVar1 = true;
          param_4[iVar4 + 2] = 0x8a;
          param_4[iVar4 + 3] = 0x80;
        }
        iVar2 = iVar10;
        if ((local_2c & 2) != 0) {
          if (bVar1) {
            param_4[iVar10] = 0x80;
            param_4[iVar10 + 1] = 0xe1;
          }
          else {
            param_4[iVar10] = 0x80;
            param_4[iVar10 + 1] = 0xe1;
          }
          iVar2 = iVar10 + 4;
          bVar1 = true;
          param_4[iVar10 + 2] = 0x8a;
          param_4[iVar10 + 3] = 0x80;
        }
        uVar8 = 2;
        bVar9 = 0x22;
        do {
          iVar4 = iVar2;
          if ((local_2c >> (uVar8 & 0xff) & 1) != 0) {
            param_4[iVar2] = 0x80;
            param_4[iVar2 + 1] = bVar9 | 0xc0;
            param_4[iVar2 + 2] = 0x8a;
            iVar4 = iVar2 + 4;
            bVar1 = true;
            param_4[iVar2 + 3] = 0x80;
          }
          iVar10 = iVar4;
          if ((local_2c >> (uVar8 + 1 & 0xff) & 1) != 0) {
            if (bVar1) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 + 1 | 0xc0;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 + 1 | 0xc0;
            }
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar4 = iVar10;
          if ((local_2c >> (uVar8 + 2 & 0xff) & 1) != 0) {
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 + 2 | 0xc0;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 + 2 | 0xc0;
            }
            iVar4 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          iVar10 = iVar4;
          if ((local_2c >> (uVar8 + 3 & 0xff) & 1) != 0) {
            if (bVar1) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 + 3 | 0xc0;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar9 + 3 | 0xc0;
            }
            iVar10 = iVar4 + 4;
            bVar1 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0x80;
          }
          iVar2 = iVar10;
          if ((local_2c >> (uVar8 + 4 & 0xff) & 1) != 0) {
            if (bVar1) {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 + 4 | 0xc0;
            }
            else {
              param_4[iVar10] = 0x80;
              param_4[iVar10 + 1] = bVar9 + 4 | 0xc0;
            }
            iVar2 = iVar10 + 4;
            bVar1 = true;
            param_4[iVar10 + 2] = 0x8a;
            param_4[iVar10 + 3] = 0x80;
          }
          uVar8 = uVar8 + 5;
          bVar9 = bVar9 + 5;
        } while (uVar8 != 0x20);
      }
      else {
        if (param_2 < 0x80) {
          iVar2 = 1;
          uVar8 = 0;
        }
        else {
          uVar6 = 0;
          do {
            param_4[uVar6] = (byte)param_2 & 0x7f;
            uVar8 = uVar6 + 1;
            iVar4 = param_2 >> 7;
            if (iVar4 < 0x80 || 1 < uVar8) break;
            param_4[uVar8] = (byte)iVar4 & 0x7f;
            uVar8 = uVar6 + 2;
            iVar4 = param_2 >> 0xe;
            if (iVar4 < 0x80 || 1 < uVar8) break;
            param_4[uVar8] = (byte)iVar4 & 0x7f;
            uVar8 = uVar6 + 3;
            iVar4 = param_2 >> 0x15;
            if (iVar4 < 0x80 || 1 < uVar8) break;
            param_4[uVar8] = (byte)iVar4 & 0x7f;
            uVar6 = uVar6 + 4;
            param_2 = param_2 >> 0x1c;
            iVar4 = param_2;
            uVar8 = uVar6;
          } while (0x7f < param_2 && uVar6 < 2);
          iVar2 = uVar8 + 1;
          param_2 = iVar4;
        }
        bVar1 = false;
        uVar6 = 0;
        param_4[uVar8] = (byte)param_2 | 0x80;
        do {
          if ((int)((local_38 >> (uVar6 & 0xff)) << 0x1f) < 0) {
            if (bVar1) {
              iVar4 = iVar2 + 1;
              puVar13 = param_4 + iVar4;
              param_4[iVar2] = 0x80;
              iVar10 = iVar2 + 3;
              param_4[iVar4] = 0x80;
              param_4[iVar2 + 2] = (byte)uVar6 | 0x80;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar10 = iVar2 + 2;
              puVar13[1] = (byte)uVar6 | 0x80;
              iVar4 = iVar2;
            }
            iVar2 = iVar4 + 5;
            bVar1 = true;
            param_4[iVar10] = 0x80;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_38 >> (uVar6 + 1 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar6 + 1);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_38 >> (uVar6 + 2 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar6 + 2);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              puVar13 = param_4 + iVar10;
              param_4[iVar2 + 2] = bVar9 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_38 >> (uVar6 + 3 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar6 + 3);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              puVar13 = param_4 + iVar10;
              param_4[iVar2 + 2] = bVar9 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_38 >> (uVar6 + 4 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar6 + 4);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              puVar13 = param_4 + iVar10;
              param_4[iVar2 + 2] = bVar9 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_38 >> (uVar6 + 5 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar6 + 5);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              puVar13 = param_4 + iVar10;
              param_4[iVar2 + 2] = bVar9 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_38 >> (uVar6 + 6 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar6 + 6);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              puVar13 = param_4 + iVar10;
              param_4[iVar2 + 2] = bVar9 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_38 >> (uVar6 + 7 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar6 + 7);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              puVar13 = param_4 + iVar10;
              param_4[iVar2 + 2] = bVar9 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          uVar6 = uVar6 + 8;
        } while (uVar6 != 0x20);
        if ((int)(local_34 << 0x1f) < 0) {
          if (bVar1) {
            iVar10 = iVar2 + 1;
            puVar13 = param_4 + iVar10;
            param_4[iVar2] = 0x80;
            iVar4 = iVar2 + 3;
            param_4[iVar10] = 0x80;
            param_4[iVar2 + 2] = 0xa0;
            iVar2 = iVar10;
          }
          else {
            puVar13 = param_4 + iVar2;
            param_4[iVar2] = 0x80;
            iVar4 = iVar2 + 2;
            puVar13[1] = 0xa0;
          }
          iVar2 = iVar2 + 5;
          bVar1 = true;
          param_4[iVar4] = 0x80;
          puVar13[3] = 0x8a;
          puVar13[4] = 0x80;
        }
        if ((local_34 & 2) != 0) {
          if (bVar1) {
            iVar10 = iVar2 + 1;
            param_4[iVar2] = 0x80;
            iVar4 = iVar2 + 3;
            param_4[iVar10] = 0x80;
            puVar13 = param_4 + iVar10;
            param_4[iVar2 + 2] = 0xa1;
            iVar2 = iVar10;
          }
          else {
            puVar13 = param_4 + iVar2;
            param_4[iVar2] = 0x80;
            iVar4 = iVar2 + 2;
            puVar13[1] = 0xa1;
          }
          param_4[iVar4] = 0x80;
          iVar2 = iVar2 + 5;
          puVar13[3] = 0x8a;
          bVar1 = true;
          puVar13[4] = 0x80;
        }
        uVar8 = 2;
        bVar9 = 0x22;
        do {
          if ((local_34 >> (uVar8 & 0xff) & 1) != 0) {
            if (bVar1) {
              iVar4 = iVar2 + 1;
              puVar13 = param_4 + iVar4;
              param_4[iVar2] = 0x80;
              iVar10 = iVar2 + 3;
              param_4[iVar4] = 0x80;
              param_4[iVar2 + 2] = bVar9 | 0x80;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar10 = iVar2 + 2;
              puVar13[1] = bVar9 | 0x80;
              iVar4 = iVar2;
            }
            iVar2 = iVar4 + 5;
            bVar1 = true;
            param_4[iVar10] = 0x80;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_34 >> (uVar8 + 1 & 0xff) & 1) != 0) {
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 + 1 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 + 1 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_34 >> (uVar8 + 2 & 0xff) & 1) != 0) {
            if (bVar1) {
              iVar10 = iVar2 + 1;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              puVar13 = param_4 + iVar10;
              param_4[iVar2 + 2] = bVar9 + 2 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 + 2 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_34 >> (uVar8 + 3 & 0xff) & 1) != 0) {
            if (bVar1) {
              iVar10 = iVar2 + 1;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              puVar13 = param_4 + iVar10;
              param_4[iVar2 + 2] = bVar9 + 3 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 + 3 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_34 >> (uVar8 + 4 & 0xff) & 1) != 0) {
            if (bVar1) {
              iVar10 = iVar2 + 1;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              puVar13 = param_4 + iVar10;
              param_4[iVar2 + 2] = bVar9 + 4 | 0x80;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 + 4 | 0x80;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          uVar8 = uVar8 + 5;
          bVar9 = bVar9 + 5;
        } while (uVar8 != 0x20);
        uVar8 = 0;
        do {
          if ((int)((local_30 >> (uVar8 & 0xff)) << 0x1f) < 0) {
            if (bVar1) {
              iVar4 = iVar2 + 1;
              puVar13 = param_4 + iVar4;
              param_4[iVar2] = 0x80;
              iVar10 = iVar2 + 3;
              param_4[iVar4] = 0x80;
              param_4[iVar2 + 2] = (byte)uVar8 | 0xc0;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar10 = iVar2 + 2;
              puVar13[1] = (byte)uVar8 | 0xc0;
              iVar4 = iVar2;
            }
            iVar2 = iVar4 + 5;
            bVar1 = true;
            param_4[iVar10] = 0x80;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((int)((local_30 >> (uVar8 + 1 & 0xff)) << 0x1f) < 0) {
            bVar9 = (byte)(uVar8 + 1);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_30 >> (uVar8 + 2 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 2);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_30 >> (uVar8 + 3 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 3);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_30 >> (uVar8 + 4 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 4);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_30 >> (uVar8 + 5 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 5);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_30 >> (uVar8 + 6 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 6);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_30 >> (uVar8 + 7 & 0xff) & 1) != 0) {
            bVar9 = (byte)(uVar8 + 7);
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          uVar8 = uVar8 + 8;
        } while (uVar8 != 0x20);
        if ((int)(local_2c << 0x1f) < 0) {
          if (bVar1) {
            iVar10 = iVar2 + 1;
            puVar13 = param_4 + iVar10;
            param_4[iVar2] = 0x80;
            iVar4 = iVar2 + 3;
            param_4[iVar10] = 0x80;
            param_4[iVar2 + 2] = 0xe0;
            iVar2 = iVar10;
          }
          else {
            puVar13 = param_4 + iVar2;
            param_4[iVar2] = 0x80;
            iVar4 = iVar2 + 2;
            puVar13[1] = 0xe0;
          }
          iVar2 = iVar2 + 5;
          bVar1 = true;
          param_4[iVar4] = 0x80;
          puVar13[3] = 0x8a;
          puVar13[4] = 0x80;
        }
        if ((local_2c & 2) != 0) {
          if (bVar1) {
            iVar10 = iVar2 + 1;
            puVar13 = param_4 + iVar10;
            param_4[iVar2] = 0x80;
            iVar4 = iVar2 + 3;
            param_4[iVar10] = 0x80;
            param_4[iVar2 + 2] = 0xe1;
            iVar2 = iVar10;
          }
          else {
            puVar13 = param_4 + iVar2;
            param_4[iVar2] = 0x80;
            iVar4 = iVar2 + 2;
            puVar13[1] = 0xe1;
          }
          param_4[iVar4] = 0x80;
          iVar2 = iVar2 + 5;
          puVar13[3] = 0x8a;
          bVar1 = true;
          puVar13[4] = 0x80;
        }
        uVar8 = 2;
        bVar9 = 0x22;
        do {
          if ((local_2c >> (uVar8 & 0xff) & 1) != 0) {
            if (bVar1) {
              iVar4 = iVar2 + 1;
              puVar13 = param_4 + iVar4;
              param_4[iVar2] = 0x80;
              iVar10 = iVar2 + 3;
              param_4[iVar4] = 0x80;
              param_4[iVar2 + 2] = bVar9 | 0xc0;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar10 = iVar2 + 2;
              puVar13[1] = bVar9 | 0xc0;
              iVar4 = iVar2;
            }
            iVar2 = iVar4 + 5;
            bVar1 = true;
            param_4[iVar10] = 0x80;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_2c >> (uVar8 + 1 & 0xff) & 1) != 0) {
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 + 1 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 + 1 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_2c >> (uVar8 + 2 & 0xff) & 1) != 0) {
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 + 2 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 + 2 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_2c >> (uVar8 + 3 & 0xff) & 1) != 0) {
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 + 3 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 + 3 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          if ((local_2c >> (uVar8 + 4 & 0xff) & 1) != 0) {
            if (bVar1) {
              iVar10 = iVar2 + 1;
              puVar13 = param_4 + iVar10;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 3;
              param_4[iVar10] = 0x80;
              param_4[iVar2 + 2] = bVar9 + 4 | 0xc0;
              iVar2 = iVar10;
            }
            else {
              puVar13 = param_4 + iVar2;
              param_4[iVar2] = 0x80;
              iVar4 = iVar2 + 2;
              puVar13[1] = bVar9 + 4 | 0xc0;
            }
            iVar2 = iVar2 + 5;
            param_4[iVar4] = 0x80;
            bVar1 = true;
            puVar13[3] = 0x8a;
            puVar13[4] = 0x80;
          }
          uVar8 = uVar8 + 5;
          bVar9 = bVar9 + 5;
        } while (uVar8 != 0x20);
      }
    }
    else {
      if (param_2 < 0) {
        *param_4 = 0x80;
        iVar2 = 4;
        iVar10 = 3;
        iVar12 = 2;
        param_4[1] = *(byte *)(iVar4 + 3) | 0x80;
      }
      else {
        if (param_2 < 0x80) {
          iVar2 = 6;
          iVar10 = 5;
          iVar4 = 2;
          iVar3 = 3;
          iVar11 = 1;
          iVar12 = 4;
          uVar6 = 0;
        }
        else {
          uVar5 = 0;
          do {
            param_4[uVar5] = (byte)param_2 & 0x7f;
            uVar6 = uVar5 + 1;
            iVar7 = param_2 >> 7;
            if (iVar7 < 0x80 || 1 < uVar6) break;
            param_4[uVar6] = (byte)iVar7 & 0x7f;
            uVar6 = uVar5 + 2;
            iVar7 = param_2 >> 0xe;
            if (iVar7 < 0x80 || 1 < uVar6) break;
            param_4[uVar6] = (byte)iVar7 & 0x7f;
            uVar6 = uVar5 + 3;
            iVar7 = param_2 >> 0x15;
            if (iVar7 < 0x80 || 1 < uVar6) break;
            param_4[uVar6] = (byte)iVar7 & 0x7f;
            uVar5 = uVar5 + 4;
            param_2 = param_2 >> 0x1c;
            uVar6 = uVar5;
            iVar7 = param_2;
          } while (0x7f < param_2 && uVar5 < 2);
          iVar11 = uVar6 + 1;
          iVar3 = uVar6 + 3;
          iVar4 = uVar6 + 2;
          iVar10 = uVar6 + 5;
          iVar2 = uVar6 + 6;
          iVar12 = uVar6 + 4;
          param_2 = iVar7;
        }
        iVar7 = DAT_000f1aec;
        param_4[uVar6] = (byte)param_2 | 0x80;
        param_4[iVar11] = 0x80;
        param_4[iVar4] = *(byte *)(iVar7 + param_1 * 0x65d0 + uVar8 * 0x1e + 0xf0f65) | 0x80;
        param_4[iVar3] = 0x80;
      }
      param_4[iVar12] = 0x8a;
      param_4[iVar10] = 0x80;
    }
  }
  return iVar2;
}

