/* MaCmd_AllSoundOff @ 000ee21c 5650B */


/* YAMAHA::MaCmd_AllSoundOff(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_AllSoundOff(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uchar *puVar12;
  bool bVar13;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  
  uVar7 = param_3 & 0xf;
  iVar4 = DAT_000ef050 + 0xee23a + param_1 * 0x65d0;
  if ((*(char *)(iVar4 + 0x3c5) == '\x03') && (*(byte *)(iVar4 + 0x3c9) == uVar7)) {
    uVar7 = 0;
    *(undefined1 *)
     (DAT_000ef050 + 0xee23a + param_1 * 0x65d0 + (uint)*(byte *)(iVar4 + 0x3c9) * 0x1e + 2) = 0;
    if (param_2 < 0) {
      *param_4 = 0x80;
      iVar1 = 4;
      iVar11 = 2;
      param_4[1] = *(byte *)(iVar4 + 0x3ca) | 0x80;
      iVar4 = 3;
    }
    else {
      if (param_2 < 0x80) {
        iVar1 = 6;
        iVar4 = 5;
        iVar10 = 2;
        iVar3 = 1;
        iVar11 = 4;
        iVar2 = 3;
      }
      else {
        do {
          param_4[uVar7] = (byte)param_2 & 0x7f;
          uVar6 = uVar7 + 1;
          iVar9 = param_2 >> 7;
          if (iVar9 < 0x80 || 1 < uVar6) break;
          param_4[uVar6] = (byte)iVar9 & 0x7f;
          uVar6 = uVar7 + 2;
          iVar9 = param_2 >> 0xe;
          if (iVar9 < 0x80 || 1 < uVar6) break;
          param_4[uVar6] = (byte)iVar9 & 0x7f;
          uVar6 = uVar7 + 3;
          iVar9 = param_2 >> 0x15;
          if (iVar9 < 0x80 || 1 < uVar6) break;
          param_4[uVar6] = (byte)iVar9 & 0x7f;
          uVar7 = uVar7 + 4;
          param_2 = param_2 >> 0x1c;
          uVar6 = uVar7;
          iVar9 = param_2;
        } while (0x7f < param_2 && uVar7 < 2);
        iVar3 = uVar6 + 1;
        iVar2 = uVar6 + 3;
        iVar10 = uVar6 + 2;
        iVar4 = uVar6 + 5;
        iVar1 = uVar6 + 6;
        iVar11 = uVar6 + 4;
        uVar7 = uVar6;
        param_2 = iVar9;
      }
      iVar9 = DAT_000ef05c;
      param_4[uVar7] = (byte)param_2 | 0x80;
      param_4[iVar3] = 0x80;
      param_4[iVar10] = *(byte *)(param_1 * 0x65d0 + iVar9 + 0xee7ba) | 0x80;
      param_4[iVar2] = 0x80;
    }
    param_4[iVar11] = 0x8a;
    param_4[iVar4] = 0xb0;
  }
  else {
    iVar4 = DAT_000ef054 + 0xee25e + param_1 * 0x65d0 + uVar7 * 0x1e;
    if (*(char *)(iVar4 + 3) == -1) {
      MaDva_ReleaseFmAllSlot(param_1,uVar7,(_MADVA_SLOTMAP *)&local_38);
      MaDva_ReleaseWtAllSlot(param_1,uVar7,(_MADVA_SLOTMAP *)&uStack_30);
      if ((((local_38 == 0) && (uStack_34 == 0)) && (uStack_30 == 0)) && (local_2c == 0)) {
        if (param_2 < 1) {
          iVar1 = 0;
        }
        else {
          iVar1 = MaCmd_Nop(param_2,0,param_4);
        }
      }
      else if (param_2 < 0) {
        bVar13 = false;
        iVar4 = 0;
        uVar7 = 0;
        do {
          iVar11 = iVar4;
          if ((local_38 >> (uVar7 & 0xff) & 1) != 0) {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = (byte)uVar7 | 0x80;
            param_4[iVar4 + 2] = 0x8a;
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar4 = iVar11;
          if ((local_38 >> (uVar7 + 1 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 1);
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0x80;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0x80;
            }
            iVar4 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          iVar11 = iVar4;
          if ((local_38 >> (uVar7 + 2 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 2);
            if (bVar13) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0x80;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0x80;
            }
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar4 = iVar11;
          if ((local_38 >> (uVar7 + 3 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 3);
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0x80;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0x80;
            }
            iVar4 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          iVar11 = iVar4;
          if ((local_38 >> (uVar7 + 4 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 4);
            if (bVar13) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0x80;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0x80;
            }
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar4 = iVar11;
          if ((local_38 >> (uVar7 + 5 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 5);
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0x80;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0x80;
            }
            iVar4 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          iVar11 = iVar4;
          if ((local_38 >> (uVar7 + 6 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 6);
            if (bVar13) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0x80;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0x80;
            }
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar4 = iVar11;
          if ((local_38 >> (uVar7 + 7 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 7);
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0x80;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0x80;
            }
            iVar4 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          uVar7 = uVar7 + 8;
        } while (uVar7 != 0x20);
        iVar11 = iVar4;
        if ((int)(uStack_34 << 0x1f) < 0) {
          if (bVar13) {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = 0xa0;
          }
          else {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = 0xa0;
          }
          iVar11 = iVar4 + 4;
          bVar13 = true;
          param_4[iVar4 + 2] = 0x8a;
          param_4[iVar4 + 3] = 0xb0;
        }
        iVar4 = iVar11;
        if ((uStack_34 & 2) != 0) {
          if (bVar13) {
            param_4[iVar11] = 0x80;
            param_4[iVar11 + 1] = 0xa1;
          }
          else {
            param_4[iVar11] = 0x80;
            param_4[iVar11 + 1] = 0xa1;
          }
          iVar4 = iVar11 + 4;
          bVar13 = true;
          param_4[iVar11 + 2] = 0x8a;
          param_4[iVar11 + 3] = 0xb0;
        }
        uVar7 = 2;
        bVar8 = 0x22;
        do {
          iVar11 = iVar4;
          if ((uStack_34 >> (uVar7 & 0xff) & 1) != 0) {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = bVar8 | 0x80;
            param_4[iVar4 + 2] = 0x8a;
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar4 = iVar11;
          if ((uStack_34 >> (uVar7 + 1 & 0xff) & 1) != 0) {
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 + 1 | 0x80;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 + 1 | 0x80;
            }
            iVar4 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          iVar11 = iVar4;
          if ((uStack_34 >> (uVar7 + 2 & 0xff) & 1) != 0) {
            if (bVar13) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 + 2 | 0x80;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 + 2 | 0x80;
            }
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar1 = iVar11;
          if ((uStack_34 >> (uVar7 + 3 & 0xff) & 1) != 0) {
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 + 3 | 0x80;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 + 3 | 0x80;
            }
            iVar1 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          iVar4 = iVar1;
          if ((uStack_34 >> (uVar7 + 4 & 0xff) & 1) != 0) {
            if (bVar13) {
              param_4[iVar1] = 0x80;
              param_4[iVar1 + 1] = bVar8 + 4 | 0x80;
            }
            else {
              param_4[iVar1] = 0x80;
              param_4[iVar1 + 1] = bVar8 + 4 | 0x80;
            }
            iVar4 = iVar1 + 4;
            bVar13 = true;
            param_4[iVar1 + 2] = 0x8a;
            param_4[iVar1 + 3] = 0xb0;
          }
          uVar7 = uVar7 + 5;
          bVar8 = bVar8 + 5;
        } while (uVar7 != 0x20);
        uVar7 = 0;
        do {
          iVar11 = iVar4;
          if ((uStack_30 >> (uVar7 & 0xff) & 1) != 0) {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = (byte)uVar7 | 0xc0;
            param_4[iVar4 + 2] = 0x8a;
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar4 = iVar11;
          if ((uStack_30 >> (uVar7 + 1 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 1);
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0xc0;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0xc0;
            }
            iVar4 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          iVar11 = iVar4;
          if ((uStack_30 >> (uVar7 + 2 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 2);
            if (bVar13) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0xc0;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0xc0;
            }
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar4 = iVar11;
          if ((uStack_30 >> (uVar7 + 3 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 3);
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0xc0;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0xc0;
            }
            iVar4 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          iVar11 = iVar4;
          if ((uStack_30 >> (uVar7 + 4 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 4);
            if (bVar13) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0xc0;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0xc0;
            }
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar4 = iVar11;
          if ((uStack_30 >> (uVar7 + 5 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 5);
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0xc0;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0xc0;
            }
            iVar4 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          iVar11 = iVar4;
          if ((uStack_30 >> (uVar7 + 6 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 6);
            if (bVar13) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0xc0;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 | 0xc0;
            }
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar4 = iVar11;
          if ((uStack_30 >> (uVar7 + 7 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 7);
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0xc0;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 | 0xc0;
            }
            iVar4 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          uVar7 = uVar7 + 8;
        } while (uVar7 != 0x20);
        iVar11 = iVar4;
        if ((int)(local_2c << 0x1f) < 0) {
          if (bVar13) {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = 0xe0;
          }
          else {
            param_4[iVar4] = 0x80;
            param_4[iVar4 + 1] = 0xe0;
          }
          iVar11 = iVar4 + 4;
          bVar13 = true;
          param_4[iVar4 + 2] = 0x8a;
          param_4[iVar4 + 3] = 0xb0;
        }
        iVar1 = iVar11;
        if ((local_2c & 2) != 0) {
          if (bVar13) {
            param_4[iVar11] = 0x80;
            param_4[iVar11 + 1] = 0xe1;
          }
          else {
            param_4[iVar11] = 0x80;
            param_4[iVar11 + 1] = 0xe1;
          }
          iVar1 = iVar11 + 4;
          bVar13 = true;
          param_4[iVar11 + 2] = 0x8a;
          param_4[iVar11 + 3] = 0xb0;
        }
        uVar7 = 2;
        bVar8 = 0x22;
        do {
          iVar4 = iVar1;
          if ((local_2c >> (uVar7 & 0xff) & 1) != 0) {
            param_4[iVar1] = 0x80;
            param_4[iVar1 + 1] = bVar8 | 0xc0;
            param_4[iVar1 + 2] = 0x8a;
            iVar4 = iVar1 + 4;
            bVar13 = true;
            param_4[iVar1 + 3] = 0xb0;
          }
          iVar11 = iVar4;
          if ((local_2c >> (uVar7 + 1 & 0xff) & 1) != 0) {
            if (bVar13) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 + 1 | 0xc0;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 + 1 | 0xc0;
            }
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar4 = iVar11;
          if ((local_2c >> (uVar7 + 2 & 0xff) & 1) != 0) {
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 + 2 | 0xc0;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 + 2 | 0xc0;
            }
            iVar4 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          iVar11 = iVar4;
          if ((local_2c >> (uVar7 + 3 & 0xff) & 1) != 0) {
            if (bVar13) {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 + 3 | 0xc0;
            }
            else {
              param_4[iVar4] = 0x80;
              param_4[iVar4 + 1] = bVar8 + 3 | 0xc0;
            }
            iVar11 = iVar4 + 4;
            bVar13 = true;
            param_4[iVar4 + 2] = 0x8a;
            param_4[iVar4 + 3] = 0xb0;
          }
          iVar1 = iVar11;
          if ((local_2c >> (uVar7 + 4 & 0xff) & 1) != 0) {
            if (bVar13) {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 + 4 | 0xc0;
            }
            else {
              param_4[iVar11] = 0x80;
              param_4[iVar11 + 1] = bVar8 + 4 | 0xc0;
            }
            iVar1 = iVar11 + 4;
            bVar13 = true;
            param_4[iVar11 + 2] = 0x8a;
            param_4[iVar11 + 3] = 0xb0;
          }
          uVar7 = uVar7 + 5;
          bVar8 = bVar8 + 5;
        } while (uVar7 != 0x20);
      }
      else {
        if (param_2 < 0x80) {
          iVar4 = 1;
          uVar7 = 0;
        }
        else {
          uVar6 = 0;
          do {
            param_4[uVar6] = (byte)param_2 & 0x7f;
            uVar7 = uVar6 + 1;
            iVar11 = param_2 >> 7;
            if (iVar11 < 0x80 || 1 < uVar7) break;
            param_4[uVar7] = (byte)iVar11 & 0x7f;
            uVar7 = uVar6 + 2;
            iVar11 = param_2 >> 0xe;
            if (iVar11 < 0x80 || 1 < uVar7) break;
            param_4[uVar7] = (byte)iVar11 & 0x7f;
            uVar7 = uVar6 + 3;
            iVar11 = param_2 >> 0x15;
            if (iVar11 < 0x80 || 1 < uVar7) break;
            param_4[uVar7] = (byte)iVar11 & 0x7f;
            uVar6 = uVar6 + 4;
            param_2 = param_2 >> 0x1c;
            uVar7 = uVar6;
            iVar11 = param_2;
          } while (0x7f < param_2 && uVar6 < 2);
          iVar4 = uVar7 + 1;
          param_2 = iVar11;
        }
        param_4[uVar7] = (byte)param_2 | 0x80;
        bVar13 = (int)(local_38 << 0x1f) < 0;
        iVar1 = iVar4;
        if (bVar13) {
          param_4[iVar4] = 0x80;
          iVar1 = iVar4 + 5;
          param_4[iVar4 + 1] = 0x80;
          param_4[iVar4 + 2] = 0x80;
          param_4[iVar4 + 3] = 0x8a;
          param_4[iVar4 + 4] = 0xb0;
        }
        if ((local_38 & 2) != 0) {
          if (bVar13) {
            iVar4 = iVar1 + 1;
            param_4[iVar1] = 0x80;
            iVar11 = iVar1 + 3;
            param_4[iVar4] = 0x80;
            puVar12 = param_4 + iVar4;
            param_4[iVar1 + 2] = 0x81;
          }
          else {
            puVar12 = param_4 + iVar1;
            iVar11 = iVar1 + 2;
            param_4[iVar1] = 0x80;
            puVar12[1] = 0x81;
            iVar4 = iVar1;
          }
          iVar1 = iVar4 + 5;
          param_4[iVar11] = 0x80;
          bVar13 = true;
          puVar12[3] = 0x8a;
          puVar12[4] = 0xb0;
        }
        uVar7 = 2;
        do {
          if ((local_38 >> (uVar7 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar4 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              param_4[iVar4] = 0x80;
              iVar11 = iVar1 + 3;
              param_4[iVar1 + 2] = (byte)uVar7 | 0x80;
              puVar12 = param_4 + iVar4;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar11 = iVar1 + 2;
              puVar12[1] = (byte)uVar7 | 0x80;
              iVar4 = iVar1;
            }
            iVar1 = iVar4 + 5;
            bVar13 = true;
            param_4[iVar11] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((local_38 >> (uVar7 + 1 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 1);
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              puVar12 = param_4 + iVar11;
              param_4[iVar1 + 2] = bVar8 | 0x80;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 | 0x80;
            }
            iVar1 = iVar1 + 5;
            param_4[iVar4] = 0x80;
            bVar13 = true;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((local_38 >> (uVar7 + 2 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 2);
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              param_4[iVar1 + 2] = bVar8 | 0x80;
              puVar12 = param_4 + iVar11;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 | 0x80;
            }
            iVar1 = iVar1 + 5;
            param_4[iVar4] = 0x80;
            bVar13 = true;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((local_38 >> (uVar7 + 3 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 3);
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              param_4[iVar1 + 2] = bVar8 | 0x80;
              puVar12 = param_4 + iVar11;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 | 0x80;
            }
            iVar1 = iVar1 + 5;
            param_4[iVar4] = 0x80;
            bVar13 = true;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((local_38 >> (uVar7 + 4 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 4);
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              param_4[iVar1 + 2] = bVar8 | 0x80;
              puVar12 = param_4 + iVar11;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 | 0x80;
            }
            iVar1 = iVar1 + 5;
            param_4[iVar4] = 0x80;
            bVar13 = true;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          uVar7 = uVar7 + 5;
        } while (uVar7 != 0x20);
        if ((int)(uStack_34 << 0x1f) < 0) {
          if (bVar13) {
            iVar4 = iVar1 + 1;
            param_4[iVar1] = 0x80;
            iVar11 = iVar1 + 3;
            param_4[iVar4] = 0x80;
            puVar12 = param_4 + iVar4;
            param_4[iVar1 + 2] = 0xa0;
          }
          else {
            puVar12 = param_4 + iVar1;
            iVar11 = iVar1 + 2;
            param_4[iVar1] = 0x80;
            puVar12[1] = 0xa0;
            iVar4 = iVar1;
          }
          iVar1 = iVar4 + 5;
          bVar13 = true;
          param_4[iVar11] = 0x80;
          puVar12[3] = 0x8a;
          puVar12[4] = 0xb0;
        }
        if ((uStack_34 & 2) != 0) {
          if (bVar13) {
            iVar4 = iVar1 + 1;
            param_4[iVar1] = 0x80;
            iVar11 = iVar1 + 3;
            param_4[iVar4] = 0x80;
            puVar12 = param_4 + iVar4;
            param_4[iVar1 + 2] = 0xa1;
          }
          else {
            puVar12 = param_4 + iVar1;
            iVar11 = iVar1 + 2;
            param_4[iVar1] = 0x80;
            puVar12[1] = 0xa1;
            iVar4 = iVar1;
          }
          iVar1 = iVar4 + 5;
          param_4[iVar11] = 0x80;
          bVar13 = true;
          puVar12[3] = 0x8a;
          puVar12[4] = 0xb0;
        }
        uVar7 = 2;
        bVar8 = 0x22;
        do {
          if ((uStack_34 >> (uVar7 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar4 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar11 = iVar1 + 3;
              param_4[iVar4] = 0x80;
              puVar12 = param_4 + iVar4;
              param_4[iVar1 + 2] = bVar8 | 0x80;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar11 = iVar1 + 2;
              puVar12[1] = bVar8 | 0x80;
              iVar4 = iVar1;
            }
            iVar1 = iVar4 + 5;
            bVar13 = true;
            param_4[iVar11] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((uStack_34 >> (uVar7 + 1 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              puVar12 = param_4 + iVar11;
              param_4[iVar1 + 2] = bVar8 + 1 | 0x80;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 + 1 | 0x80;
            }
            iVar1 = iVar1 + 5;
            param_4[iVar4] = 0x80;
            bVar13 = true;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((uStack_34 >> (uVar7 + 2 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              puVar12 = param_4 + iVar11;
              param_4[iVar1 + 2] = bVar8 + 2 | 0x80;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 + 2 | 0x80;
            }
            iVar1 = iVar1 + 5;
            param_4[iVar4] = 0x80;
            bVar13 = true;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((uStack_34 >> (uVar7 + 3 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              puVar12 = param_4 + iVar11;
              param_4[iVar1 + 2] = bVar8 + 3 | 0x80;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 + 3 | 0x80;
            }
            iVar1 = iVar1 + 5;
            param_4[iVar4] = 0x80;
            bVar13 = true;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((uStack_34 >> (uVar7 + 4 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              puVar12 = param_4 + iVar11;
              param_4[iVar1 + 2] = bVar8 + 4 | 0x80;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 + 4 | 0x80;
            }
            iVar1 = iVar1 + 5;
            param_4[iVar4] = 0x80;
            bVar13 = true;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          uVar7 = uVar7 + 5;
          bVar8 = bVar8 + 5;
        } while (uVar7 != 0x20);
        if ((int)(uStack_30 << 0x1f) < 0) {
          if (bVar13) {
            iVar4 = iVar1 + 1;
            param_4[iVar1] = 0x80;
            iVar11 = iVar1 + 3;
            param_4[iVar4] = 0x80;
            puVar12 = param_4 + iVar4;
            param_4[iVar1 + 2] = 0xc0;
          }
          else {
            puVar12 = param_4 + iVar1;
            iVar11 = iVar1 + 2;
            param_4[iVar1] = 0x80;
            puVar12[1] = 0xc0;
            iVar4 = iVar1;
          }
          iVar1 = iVar4 + 5;
          bVar13 = true;
          param_4[iVar11] = 0x80;
          puVar12[3] = 0x8a;
          puVar12[4] = 0xb0;
        }
        if ((int)(uStack_30 << 0x1e) < 0) {
          if (bVar13) {
            iVar4 = iVar1 + 1;
            param_4[iVar1] = 0x80;
            iVar11 = iVar1 + 3;
            param_4[iVar4] = 0x80;
            puVar12 = param_4 + iVar4;
            param_4[iVar1 + 2] = 0xc1;
          }
          else {
            puVar12 = param_4 + iVar1;
            iVar11 = iVar1 + 2;
            param_4[iVar1] = 0x80;
            puVar12[1] = 0xc1;
            iVar4 = iVar1;
          }
          iVar1 = iVar4 + 5;
          bVar13 = true;
          param_4[iVar11] = 0x80;
          puVar12[3] = 0x8a;
          puVar12[4] = 0xb0;
        }
        uVar7 = 2;
        do {
          if ((int)((uStack_30 >> (uVar7 & 0xff)) << 0x1f) < 0) {
            if (bVar13) {
              iVar4 = iVar1 + 1;
              puVar12 = param_4 + iVar4;
              param_4[iVar1] = 0x80;
              iVar11 = iVar1 + 3;
              param_4[iVar4] = 0x80;
              param_4[iVar1 + 2] = (byte)uVar7 | 0xc0;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar11 = iVar1 + 2;
              puVar12[1] = (byte)uVar7 | 0xc0;
              iVar4 = iVar1;
            }
            iVar1 = iVar4 + 5;
            bVar13 = true;
            param_4[iVar11] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((int)((uStack_30 >> (uVar7 + 1 & 0xff)) << 0x1f) < 0) {
            bVar8 = (byte)(uVar7 + 1);
            if (bVar13) {
              iVar11 = iVar1 + 1;
              puVar12 = param_4 + iVar11;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              param_4[iVar1 + 2] = bVar8 | 0xc0;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 | 0xc0;
            }
            iVar1 = iVar1 + 5;
            bVar13 = true;
            param_4[iVar4] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((uStack_30 >> (uVar7 + 2 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 2);
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              puVar12 = param_4 + iVar11;
              param_4[iVar1 + 2] = bVar8 | 0xc0;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 | 0xc0;
            }
            iVar1 = iVar1 + 5;
            bVar13 = true;
            param_4[iVar4] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((uStack_30 >> (uVar7 + 3 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 3);
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              puVar12 = param_4 + iVar11;
              param_4[iVar1 + 2] = bVar8 | 0xc0;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 | 0xc0;
            }
            iVar1 = iVar1 + 5;
            bVar13 = true;
            param_4[iVar4] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((uStack_30 >> (uVar7 + 4 & 0xff) & 1) != 0) {
            bVar8 = (byte)(uVar7 + 4);
            if (bVar13) {
              iVar11 = iVar1 + 1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              puVar12 = param_4 + iVar11;
              param_4[iVar1 + 2] = bVar8 | 0xc0;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 | 0xc0;
            }
            iVar1 = iVar1 + 5;
            bVar13 = true;
            param_4[iVar4] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          uVar7 = uVar7 + 5;
        } while (uVar7 != 0x20);
        if ((int)(local_2c << 0x1f) < 0) {
          if (bVar13) {
            iVar4 = iVar1 + 1;
            param_4[iVar1] = 0x80;
            iVar11 = iVar1 + 3;
            param_4[iVar4] = 0x80;
            puVar12 = param_4 + iVar4;
            param_4[iVar1 + 2] = 0xe0;
          }
          else {
            puVar12 = param_4 + iVar1;
            iVar11 = iVar1 + 2;
            param_4[iVar1] = 0x80;
            puVar12[1] = 0xe0;
            iVar4 = iVar1;
          }
          iVar1 = iVar4 + 5;
          bVar13 = true;
          param_4[iVar11] = 0x80;
          puVar12[3] = 0x8a;
          puVar12[4] = 0xb0;
        }
        if ((local_2c & 2) != 0) {
          if (bVar13) {
            iVar4 = iVar1 + 1;
            param_4[iVar1] = 0x80;
            iVar11 = iVar1 + 3;
            param_4[iVar4] = 0x80;
            puVar12 = param_4 + iVar4;
            param_4[iVar1 + 2] = 0xe1;
          }
          else {
            puVar12 = param_4 + iVar1;
            iVar11 = iVar1 + 2;
            param_4[iVar1] = 0x80;
            puVar12[1] = 0xe1;
            iVar4 = iVar1;
          }
          iVar1 = iVar4 + 5;
          bVar13 = true;
          param_4[iVar11] = 0x80;
          puVar12[3] = 0x8a;
          puVar12[4] = 0xb0;
        }
        uVar7 = 2;
        bVar8 = 0x22;
        do {
          if ((local_2c >> (uVar7 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar4 = iVar1 + 1;
              puVar12 = param_4 + iVar4;
              param_4[iVar1] = 0x80;
              iVar11 = iVar1 + 3;
              param_4[iVar4] = 0x80;
              param_4[iVar1 + 2] = bVar8 | 0xc0;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar11 = iVar1 + 2;
              puVar12[1] = bVar8 | 0xc0;
              iVar4 = iVar1;
            }
            iVar1 = iVar4 + 5;
            bVar13 = true;
            param_4[iVar11] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((local_2c >> (uVar7 + 1 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar11 = iVar1 + 1;
              puVar12 = param_4 + iVar11;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              param_4[iVar1 + 2] = bVar8 + 1 | 0xc0;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 + 1 | 0xc0;
            }
            iVar1 = iVar1 + 5;
            bVar13 = true;
            param_4[iVar4] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((local_2c >> (uVar7 + 2 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar11 = iVar1 + 1;
              puVar12 = param_4 + iVar11;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              param_4[iVar1 + 2] = bVar8 + 2 | 0xc0;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 + 2 | 0xc0;
            }
            iVar1 = iVar1 + 5;
            bVar13 = true;
            param_4[iVar4] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((local_2c >> (uVar7 + 3 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar11 = iVar1 + 1;
              puVar12 = param_4 + iVar11;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              param_4[iVar1 + 2] = bVar8 + 3 | 0xc0;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 + 3 | 0xc0;
            }
            iVar1 = iVar1 + 5;
            bVar13 = true;
            param_4[iVar4] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          if ((local_2c >> (uVar7 + 4 & 0xff) & 1) != 0) {
            if (bVar13) {
              iVar11 = iVar1 + 1;
              puVar12 = param_4 + iVar11;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 3;
              param_4[iVar11] = 0x80;
              param_4[iVar1 + 2] = bVar8 + 4 | 0xc0;
              iVar1 = iVar11;
            }
            else {
              puVar12 = param_4 + iVar1;
              param_4[iVar1] = 0x80;
              iVar4 = iVar1 + 2;
              puVar12[1] = bVar8 + 4 | 0xc0;
            }
            iVar1 = iVar1 + 5;
            bVar13 = true;
            param_4[iVar4] = 0x80;
            puVar12[3] = 0x8a;
            puVar12[4] = 0xb0;
          }
          uVar7 = uVar7 + 5;
          bVar8 = bVar8 + 5;
        } while (uVar7 != 0x20);
      }
    }
    else {
      if (param_2 < 0) {
        *param_4 = 0x80;
        iVar1 = 4;
        iVar11 = 3;
        iVar2 = 2;
        param_4[1] = *(byte *)(iVar4 + 3) | 0x80;
      }
      else {
        if (param_2 < 0x80) {
          iVar1 = 6;
          iVar11 = 5;
          iVar4 = 2;
          iVar10 = 3;
          iVar3 = 1;
          iVar2 = 4;
          uVar6 = 0;
        }
        else {
          uVar5 = 0;
          do {
            param_4[uVar5] = (byte)param_2 & 0x7f;
            uVar6 = uVar5 + 1;
            iVar9 = param_2 >> 7;
            if (iVar9 < 0x80 || 1 < uVar6) break;
            param_4[uVar6] = (byte)iVar9 & 0x7f;
            uVar6 = uVar5 + 2;
            iVar9 = param_2 >> 0xe;
            if (iVar9 < 0x80 || 1 < uVar6) break;
            param_4[uVar6] = (byte)iVar9 & 0x7f;
            uVar6 = uVar5 + 3;
            iVar9 = param_2 >> 0x15;
            if (iVar9 < 0x80 || 1 < uVar6) break;
            param_4[uVar6] = (byte)iVar9 & 0x7f;
            uVar5 = uVar5 + 4;
            param_2 = param_2 >> 0x1c;
            uVar6 = uVar5;
            iVar9 = param_2;
          } while (0x7f < param_2 && uVar5 < 2);
          iVar3 = uVar6 + 1;
          iVar10 = uVar6 + 3;
          iVar4 = uVar6 + 2;
          iVar11 = uVar6 + 5;
          iVar1 = uVar6 + 6;
          iVar2 = uVar6 + 4;
          param_2 = iVar9;
        }
        iVar9 = DAT_000ef058;
        param_4[uVar6] = (byte)param_2 | 0x80;
        param_4[iVar3] = 0x80;
        param_4[iVar4] = *(byte *)(iVar9 + param_1 * 0x65d0 + uVar7 * 0x1e + 0xee315) | 0x80;
        param_4[iVar10] = 0x80;
      }
      param_4[iVar2] = 0x8a;
      param_4[iVar11] = 0xb0;
    }
  }
  return iVar1;
}

