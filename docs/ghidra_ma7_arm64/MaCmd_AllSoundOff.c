/* MaCmd_AllSoundOff @ 00235f68 4452B */


/* YAMAHA::MaCmd_AllSoundOff(unsigned int, int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_AllSoundOff(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  long local_8;
  
  uVar10 = (ulong)param_1;
  lVar11 = uVar10 * 0x65d0;
  uVar16 = param_3 & 0xf;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (((&DAT_0074a7d5)[lVar11] == '\x03') && ((byte)(&DAT_0074a7d9)[lVar11] == uVar16)) {
    (&DAT_0074a412)[(ulong)(byte)(&DAT_0074a7d9)[lVar11] * 0x1e + lVar11] = 0;
    if (param_2 < 0) {
      *param_4 = 0x80;
      uVar14 = 3;
      uVar4 = 4;
      uVar6 = 2;
      param_4[1] = (&DAT_0074a7da)[lVar11] | 0x80;
    }
    else {
      if (param_2 < 0x80) {
        uVar4 = 6;
        uVar14 = 5;
        uVar6 = 4;
        uVar12 = 2;
        uVar17 = 1;
        uVar15 = 0;
        uVar7 = 3;
      }
      else {
        lVar11 = 0;
        do {
          iVar9 = (int)lVar11;
          bVar8 = (byte)param_2;
          param_2 = param_2 >> 7;
          param_4[lVar11] = bVar8 & 0x7f;
          if (1 < iVar9 + 1U) break;
          lVar11 = 1;
        } while (0x7f < param_2);
        uVar7 = (ulong)(iVar9 + 4);
        uVar17 = (ulong)(iVar9 + 2);
        uVar12 = (ulong)(iVar9 + 3);
        uVar6 = (ulong)(iVar9 + 5);
        uVar14 = (ulong)(iVar9 + 6);
        uVar15 = (ulong)(iVar9 + 1U);
        uVar4 = iVar9 + 7;
      }
      param_4[uVar15] = (byte)param_2 | 0x80;
      param_4[uVar17] = 0x80;
      param_4[uVar12] = (&DAT_0074a7da)[uVar10 * 0x65d0] | 0x80;
      param_4[uVar7] = 0x80;
    }
  }
  else {
    lVar11 = (ulong)uVar16 * 0x1e + uVar10 * 0x65d0;
    if ((&DAT_0074a413)[lVar11] == -1) {
      MaDva_ReleaseFmAllSlot(param_1,uVar16,(_MADVA_SLOTMAP *)&local_18);
      MaDva_ReleaseWtAllSlot(param_1,uVar16,(_MADVA_SLOTMAP *)&local_10);
      if ((((local_18 == 0) && (local_14 == 0)) && (local_10 == 0)) && (local_c == 0)) {
        uVar4 = 0;
        if (0 < param_2) {
          uVar4 = MaCmd_Nop(param_2,0,param_4);
        }
      }
      else if (param_2 < 0) {
        uVar4 = 0;
        bVar2 = (local_18 & 1) != 0;
        if (bVar2) {
          *param_4 = 0x80;
          param_4[2] = 0x8a;
          uVar4 = 4;
          param_4[1] = 0x80;
          param_4[3] = 0xb0;
        }
        bVar3 = (local_18 >> 1 & 1) != 0;
        if (bVar3) {
          param_4[uVar4] = 0x80;
          uVar16 = uVar4 + 3;
          param_4[uVar4 + 1] = 0x81;
          param_4[uVar4 + 2] = 0x8a;
          uVar4 = uVar4 + 4;
          param_4[uVar16] = 0xb0;
        }
        bVar3 = bVar3 || bVar2;
        uVar16 = 2;
        do {
          if ((local_18 >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
            uVar5 = uVar4 + 1;
            uVar13 = uVar4 + 2;
            param_4[uVar4] = 0x80;
            uVar1 = uVar4 + 3;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = (byte)uVar16 | 0x80;
            bVar3 = true;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_18 >> (ulong)(uVar16 + 1 & 0x1f) & 1) != 0) {
            uVar5 = uVar4 + 1;
            uVar13 = uVar4 + 2;
            param_4[uVar4] = 0x80;
            uVar1 = uVar4 + 3;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = (byte)(uVar16 + 1) | 0x80;
            bVar3 = true;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_18 >> (ulong)(uVar16 + 2 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = (byte)(uVar16 + 2) | 0x80;
            bVar3 = true;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_18 >> (ulong)(uVar16 + 3 & 0x1f) & 1) != 0) {
            uVar5 = uVar4 + 1;
            uVar13 = uVar4 + 2;
            param_4[uVar4] = 0x80;
            uVar1 = uVar4 + 3;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = (byte)(uVar16 + 3) | 0x80;
            bVar3 = true;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_18 >> (ulong)(uVar16 + 4 & 0x1f) & 1) != 0) {
            uVar5 = uVar4 + 1;
            uVar13 = uVar4 + 2;
            param_4[uVar4] = 0x80;
            uVar1 = uVar4 + 3;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = (byte)(uVar16 + 4) | 0x80;
            bVar3 = true;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          uVar16 = uVar16 + 5;
        } while (uVar16 != 0x20);
        if ((local_14 & 1) != 0) {
          param_4[uVar4] = 0x80;
          if (!bVar3) {
            bVar3 = true;
          }
          uVar16 = uVar4 + 3;
          param_4[uVar4 + 1] = 0xa0;
          param_4[uVar4 + 2] = 0x8a;
          uVar4 = uVar4 + 4;
          param_4[uVar16] = 0xb0;
        }
        if ((local_14 >> 1 & 1) != 0) {
          if (bVar3) {
            param_4[uVar4] = 0x80;
            param_4[uVar4 + 1] = 0xa1;
          }
          else {
            param_4[uVar4] = 0x80;
            param_4[uVar4 + 1] = 0xa1;
            bVar3 = true;
          }
          uVar16 = uVar4 + 3;
          param_4[uVar4 + 2] = 0x8a;
          uVar4 = uVar4 + 4;
          param_4[uVar16] = 0xb0;
        }
        uVar16 = 2;
        bVar8 = 0x22;
        do {
          if ((local_14 >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
            if (bVar3) {
              param_4[uVar4] = 0x80;
              param_4[uVar4 + 1] = bVar8 | 0x80;
            }
            else {
              param_4[uVar4] = 0x80;
              bVar3 = true;
              param_4[uVar4 + 1] = bVar8 | 0x80;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_14 >> (ulong)(uVar16 + 1 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = bVar8 + 1 | 0x80;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_14 >> (ulong)(uVar16 + 2 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = bVar8 + 2 | 0x80;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_14 >> (ulong)(uVar16 + 3 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = bVar8 + 3 | 0x80;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_14 >> (ulong)(uVar16 + 4 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = bVar8 + 4 | 0x80;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          uVar16 = uVar16 + 5;
          bVar8 = bVar8 + 5;
        } while (uVar16 != 0x20);
        if ((local_10 & 1) != 0) {
          param_4[uVar4] = 0x80;
          uVar16 = uVar4 + 2;
          if (!bVar3) {
            bVar3 = true;
          }
          uVar5 = uVar4 + 3;
          param_4[uVar4 + 1] = 0xc0;
          uVar4 = uVar4 + 4;
          param_4[uVar16] = 0x8a;
          param_4[uVar5] = 0xb0;
        }
        if ((local_10 >> 1 & 1) != 0) {
          if (bVar3) {
            param_4[uVar4] = 0x80;
            param_4[uVar4 + 1] = 0xc1;
          }
          else {
            param_4[uVar4] = 0x80;
            param_4[uVar4 + 1] = 0xc1;
            bVar3 = true;
          }
          uVar16 = uVar4 + 3;
          param_4[uVar4 + 2] = 0x8a;
          uVar4 = uVar4 + 4;
          param_4[uVar16] = 0xb0;
        }
        uVar16 = 2;
        do {
          if ((local_10 >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
            if (bVar3) {
              param_4[uVar4] = 0x80;
              param_4[uVar4 + 1] = (byte)uVar16 | 0xc0;
            }
            else {
              param_4[uVar4] = 0x80;
              bVar3 = true;
              param_4[uVar4 + 1] = (byte)uVar16 | 0xc0;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_10 >> (ulong)(uVar16 + 1 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = (byte)(uVar16 + 1) | 0xc0;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_10 >> (ulong)(uVar16 + 2 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = (byte)(uVar16 + 2) | 0xc0;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_10 >> (ulong)(uVar16 + 3 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = (byte)(uVar16 + 3) | 0xc0;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_10 >> (ulong)(uVar16 + 4 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = (byte)(uVar16 + 4) | 0xc0;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          uVar16 = uVar16 + 5;
        } while (uVar16 != 0x20);
        if ((local_c & 1) != 0) {
          param_4[uVar4] = 0x80;
          uVar16 = uVar4 + 2;
          if (!bVar3) {
            bVar3 = true;
          }
          uVar5 = uVar4 + 3;
          param_4[uVar4 + 1] = 0xe0;
          uVar4 = uVar4 + 4;
          param_4[uVar16] = 0x8a;
          param_4[uVar5] = 0xb0;
        }
        if ((local_c >> 1 & 1) != 0) {
          if (bVar3) {
            param_4[uVar4] = 0x80;
            param_4[uVar4 + 1] = 0xe1;
          }
          else {
            param_4[uVar4] = 0x80;
            param_4[uVar4 + 1] = 0xe1;
            bVar3 = true;
          }
          uVar16 = uVar4 + 3;
          param_4[uVar4 + 2] = 0x8a;
          uVar4 = uVar4 + 4;
          param_4[uVar16] = 0xb0;
        }
        uVar16 = 2;
        bVar8 = 0x22;
        do {
          if ((local_c >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
            if (bVar3) {
              param_4[uVar4] = 0x80;
              param_4[uVar4 + 1] = bVar8 | 0xc0;
            }
            else {
              param_4[uVar4] = 0x80;
              bVar3 = true;
              param_4[uVar4 + 1] = bVar8 | 0xc0;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_c >> (ulong)(uVar16 + 1 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = bVar8 + 1 | 0xc0;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_c >> (ulong)(uVar16 + 2 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = bVar8 + 2 | 0xc0;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_c >> (ulong)(uVar16 + 3 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = bVar8 + 3 | 0xc0;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          if ((local_c >> (ulong)(uVar16 + 4 & 0x1f) & 1) != 0) {
            param_4[uVar4] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar5 = uVar4 + 3;
            param_4[uVar4 + 1] = bVar8 + 4 | 0xc0;
            param_4[uVar4 + 2] = 0x8a;
            uVar4 = uVar4 + 4;
            param_4[uVar5] = 0xb0;
          }
          uVar16 = uVar16 + 5;
          bVar8 = bVar8 + 5;
        } while (uVar16 != 0x20);
      }
      else {
        if (param_2 < 0x80) {
          uVar4 = 1;
          uVar10 = 0;
        }
        else {
          lVar11 = 0;
          do {
            iVar9 = (int)lVar11;
            uVar16 = iVar9 + 1;
            bVar8 = (byte)param_2;
            param_2 = param_2 >> 7;
            param_4[lVar11] = bVar8 & 0x7f;
            if (1 < uVar16) break;
            lVar11 = 1;
          } while (0x7f < param_2);
          uVar10 = (ulong)uVar16;
          uVar4 = iVar9 + 2;
        }
        bVar2 = false;
        uVar16 = 0;
        param_4[uVar10] = (byte)param_2 | 0x80;
        do {
          if ((local_18 >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
            if (bVar2) {
              uVar5 = uVar4 + 1;
              param_4[uVar4] = 0x80;
              uVar13 = uVar4 + 3;
              param_4[uVar5] = 0x80;
              param_4[uVar4 + 2] = (byte)uVar16 | 0x80;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar13 = uVar4 + 2;
              param_4[uVar4 + 1] = (byte)uVar16 | 0x80;
              uVar5 = uVar4;
            }
            param_4[uVar13] = 0x80;
            bVar2 = true;
            uVar4 = uVar5 + 5;
            param_4[uVar5 + 3] = 0x8a;
            param_4[uVar5 + 4] = 0xb0;
          }
          if ((local_18 >> (ulong)(uVar16 + 1 & 0x1f) & 1) != 0) {
            bVar8 = (byte)(uVar16 + 1);
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 | 0x80;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              param_4[uVar4 + 1] = bVar8 | 0x80;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            bVar2 = true;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_18 >> (ulong)(uVar16 + 2 & 0x1f) & 1) != 0) {
            bVar8 = (byte)(uVar16 + 2);
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 | 0x80;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              param_4[uVar4 + 1] = bVar8 | 0x80;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            bVar2 = true;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_18 >> (ulong)(uVar16 + 3 & 0x1f) & 1) != 0) {
            bVar8 = (byte)(uVar16 + 3);
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 | 0x80;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              param_4[uVar4 + 1] = bVar8 | 0x80;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            bVar2 = true;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          uVar16 = uVar16 + 4;
        } while (uVar16 != 0x20);
        uVar16 = 0;
        bVar8 = 0x20;
        do {
          if ((local_14 >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
            if (bVar2) {
              uVar5 = uVar4 + 1;
              param_4[uVar4] = 0x80;
              uVar13 = uVar4 + 3;
              param_4[uVar5] = 0x80;
              param_4[uVar4 + 2] = bVar8 | 0x80;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar13 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 | 0x80;
              uVar5 = uVar4;
            }
            param_4[uVar13] = 0x80;
            uVar4 = uVar5 + 5;
            param_4[uVar5 + 3] = 0x8a;
            param_4[uVar5 + 4] = 0xb0;
          }
          if ((local_14 >> (ulong)(uVar16 + 1 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 + 1 | 0x80;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 + 1 | 0x80;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_14 >> (ulong)(uVar16 + 2 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 + 2 | 0x80;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 + 2 | 0x80;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_14 >> (ulong)(uVar16 + 3 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 + 3 | 0x80;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 + 3 | 0x80;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          uVar16 = uVar16 + 4;
          bVar8 = bVar8 + 4;
        } while (uVar16 != 0x20);
        uVar16 = 0;
        do {
          if ((local_10 >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
            if (bVar2) {
              uVar5 = uVar4 + 1;
              param_4[uVar4] = 0x80;
              uVar13 = uVar4 + 3;
              param_4[uVar5] = 0x80;
              param_4[uVar4 + 2] = (byte)uVar16 | 0xc0;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar13 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = (byte)uVar16 | 0xc0;
              uVar5 = uVar4;
            }
            param_4[uVar13] = 0x80;
            uVar4 = uVar5 + 5;
            param_4[uVar5 + 3] = 0x8a;
            param_4[uVar5 + 4] = 0xb0;
          }
          if ((local_10 >> (ulong)(uVar16 + 1 & 0x1f) & 1) != 0) {
            bVar8 = (byte)(uVar16 + 1);
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 | 0xc0;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 | 0xc0;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_10 >> (ulong)(uVar16 + 2 & 0x1f) & 1) != 0) {
            bVar8 = (byte)(uVar16 + 2);
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 | 0xc0;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 | 0xc0;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_10 >> (ulong)(uVar16 + 3 & 0x1f) & 1) != 0) {
            bVar8 = (byte)(uVar16 + 3);
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 | 0xc0;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 | 0xc0;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          uVar16 = uVar16 + 4;
        } while (uVar16 != 0x20);
        uVar16 = 0;
        bVar8 = 0x20;
        do {
          if ((local_c >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
            if (bVar2) {
              uVar5 = uVar4 + 1;
              param_4[uVar4] = 0x80;
              uVar13 = uVar4 + 3;
              param_4[uVar5] = 0x80;
              param_4[uVar4 + 2] = bVar8 | 0xc0;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar13 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 | 0xc0;
              uVar5 = uVar4;
            }
            param_4[uVar13] = 0x80;
            uVar4 = uVar5 + 5;
            param_4[uVar5 + 3] = 0x8a;
            param_4[uVar5 + 4] = 0xb0;
          }
          if ((local_c >> (ulong)(uVar16 + 1 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 + 1 | 0xc0;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 + 1 | 0xc0;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_c >> (ulong)(uVar16 + 2 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 + 2 | 0xc0;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 + 2 | 0xc0;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          if ((local_c >> (ulong)(uVar16 + 3 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 3;
              param_4[uVar4 + 1] = 0x80;
              param_4[uVar4 + 2] = bVar8 + 3 | 0xc0;
              uVar4 = uVar4 + 1;
            }
            else {
              param_4[uVar4] = 0x80;
              uVar5 = uVar4 + 2;
              bVar2 = true;
              param_4[uVar4 + 1] = bVar8 + 3 | 0xc0;
            }
            uVar13 = uVar4 + 3;
            uVar1 = uVar4 + 4;
            param_4[uVar5] = 0x80;
            uVar4 = uVar4 + 5;
            param_4[uVar13] = 0x8a;
            param_4[uVar1] = 0xb0;
          }
          uVar16 = uVar16 + 4;
          bVar8 = bVar8 + 4;
        } while (uVar16 != 0x20);
      }
      goto LAB_00236088;
    }
    if (param_2 < 0) {
      *param_4 = 0x80;
      uVar14 = 3;
      uVar4 = 4;
      uVar6 = 2;
      param_4[1] = (&DAT_0074a413)[lVar11] | 0x80;
    }
    else {
      if (param_2 < 0x80) {
        uVar4 = 6;
        uVar14 = 5;
        uVar6 = 4;
        uVar15 = 1;
        uVar17 = 2;
        uVar12 = 0;
        uVar7 = 3;
      }
      else {
        lVar11 = 0;
        do {
          iVar9 = (int)lVar11;
          bVar8 = (byte)param_2;
          param_2 = param_2 >> 7;
          param_4[lVar11] = bVar8 & 0x7f;
          if (1 < iVar9 + 1U) break;
          lVar11 = 1;
        } while (0x7f < param_2);
        uVar7 = (ulong)(iVar9 + 4);
        uVar17 = (ulong)(iVar9 + 3);
        uVar15 = (ulong)(iVar9 + 2);
        uVar6 = (ulong)(iVar9 + 5);
        uVar14 = (ulong)(iVar9 + 6);
        uVar12 = (ulong)(iVar9 + 1U);
        uVar4 = iVar9 + 7;
      }
      param_4[uVar12] = (byte)param_2 | 0x80;
      param_4[uVar15] = 0x80;
      param_4[uVar17] = (&DAT_0074a413)[(ulong)uVar16 * 0x1e + uVar10 * 0x65d0] | 0x80;
      param_4[uVar7] = 0x80;
    }
  }
  param_4[uVar6] = 0x8a;
  param_4[uVar14] = 0xb0;
LAB_00236088:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

