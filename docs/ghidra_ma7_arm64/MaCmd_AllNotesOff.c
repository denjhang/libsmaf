/* MaCmd_AllNotesOff @ 00238230 4432B */


/* YAMAHA::MaCmd_AllNotesOff(unsigned int, int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_AllNotesOff(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  ulong uVar16;
  ulong uVar17;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  long local_8;
  
  uVar8 = (ulong)param_1;
  lVar9 = uVar8 * 0x65d0;
  uVar7 = param_3 & 0xf;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (((&DAT_0074a7d5)[lVar9] == '\x03') && ((byte)(&DAT_0074a7d9)[lVar9] == uVar7)) {
    (&DAT_0074a412)[(ulong)(byte)(&DAT_0074a7d9)[lVar9] * 0x1e + lVar9] = 0;
    if (param_2 < 0) {
      *param_4 = 0x80;
      uVar14 = 3;
      uVar5 = 4;
      uVar17 = 2;
      param_4[1] = (&DAT_0074a7da)[lVar9] | 0x80;
    }
    else {
      if (param_2 < 0x80) {
        uVar5 = 6;
        uVar14 = 5;
        uVar17 = 4;
        uVar10 = 2;
        uVar13 = 1;
        uVar12 = 0;
        uVar16 = 3;
      }
      else {
        lVar9 = 0;
        do {
          iVar6 = (int)lVar9;
          bVar15 = (byte)param_2;
          param_2 = param_2 >> 7;
          param_4[lVar9] = bVar15 & 0x7f;
          if (1 < iVar6 + 1U) break;
          lVar9 = 1;
        } while (0x7f < param_2);
        uVar16 = (ulong)(iVar6 + 4);
        uVar13 = (ulong)(iVar6 + 2);
        uVar10 = (ulong)(iVar6 + 3);
        uVar17 = (ulong)(iVar6 + 5);
        uVar14 = (ulong)(iVar6 + 6);
        uVar12 = (ulong)(iVar6 + 1U);
        uVar5 = iVar6 + 7;
      }
      param_4[uVar12] = (byte)param_2 | 0x80;
      param_4[uVar13] = 0x80;
      param_4[uVar10] = (&DAT_0074a7da)[uVar8 * 0x65d0] | 0x80;
      param_4[uVar16] = 0x80;
    }
  }
  else {
    lVar9 = (ulong)uVar7 * 0x1e + uVar8 * 0x65d0;
    if ((&DAT_0074a412)[lVar9] == '\0') {
      MaDva_ReleaseFmOnSlot(param_1,uVar7,(_MADVA_SLOTMAP *)&local_18);
      MaDva_ReleaseWtOnSlot(param_1,uVar7,(_MADVA_SLOTMAP *)&local_10);
      if ((((local_18 == 0) && (local_14 == 0)) && (local_10 == 0)) && (local_c == 0)) {
        uVar5 = 0;
        if (0 < param_2) {
          uVar5 = MaCmd_Nop(param_2,0,param_4);
        }
      }
      else if (param_2 < 0) {
        uVar5 = 0;
        bVar2 = (local_18 & 1) != 0;
        if (bVar2) {
          *param_4 = 0x80;
          param_4[2] = 0x8a;
          uVar5 = 4;
          param_4[1] = 0x80;
          param_4[3] = 0x80;
        }
        bVar3 = (local_18 >> 1 & 1) != 0;
        if (bVar3) {
          param_4[uVar5] = 0x80;
          uVar7 = uVar5 + 3;
          param_4[uVar5 + 1] = 0x81;
          param_4[uVar5 + 2] = 0x8a;
          uVar5 = uVar5 + 4;
          param_4[uVar7] = 0x80;
        }
        bVar3 = bVar3 || bVar2;
        uVar7 = 2;
        do {
          if ((local_18 >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
            uVar4 = uVar5 + 1;
            uVar11 = uVar5 + 2;
            param_4[uVar5] = 0x80;
            uVar1 = uVar5 + 3;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = (byte)uVar7 | 0x80;
            param_4[uVar11] = 0x8a;
            bVar3 = true;
            param_4[uVar1] = 0x80;
          }
          if ((local_18 >> (ulong)(uVar7 + 1 & 0x1f) & 1) != 0) {
            uVar4 = uVar5 + 1;
            uVar11 = uVar5 + 2;
            param_4[uVar5] = 0x80;
            uVar1 = uVar5 + 3;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = (byte)(uVar7 + 1) | 0x80;
            bVar3 = true;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          if ((local_18 >> (ulong)(uVar7 + 2 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            uVar4 = uVar5 + 3;
            bVar3 = true;
            param_4[uVar5 + 1] = (byte)(uVar7 + 2) | 0x80;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_18 >> (ulong)(uVar7 + 3 & 0x1f) & 1) != 0) {
            uVar4 = uVar5 + 1;
            uVar11 = uVar5 + 2;
            param_4[uVar5] = 0x80;
            uVar1 = uVar5 + 3;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = (byte)(uVar7 + 3) | 0x80;
            bVar3 = true;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          if ((local_18 >> (ulong)(uVar7 + 4 & 0x1f) & 1) != 0) {
            uVar4 = uVar5 + 1;
            uVar11 = uVar5 + 2;
            param_4[uVar5] = 0x80;
            uVar1 = uVar5 + 3;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = (byte)(uVar7 + 4) | 0x80;
            bVar3 = true;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          uVar7 = uVar7 + 5;
        } while (uVar7 != 0x20);
        if ((local_14 & 1) != 0) {
          param_4[uVar5] = 0x80;
          uVar7 = uVar5 + 2;
          if (!bVar3) {
            bVar3 = true;
          }
          uVar4 = uVar5 + 3;
          param_4[uVar5 + 1] = 0xa0;
          uVar5 = uVar5 + 4;
          param_4[uVar7] = 0x8a;
          param_4[uVar4] = 0x80;
        }
        if ((local_14 >> 1 & 1) != 0) {
          if (bVar3) {
            param_4[uVar5] = 0x80;
            param_4[uVar5 + 1] = 0xa1;
          }
          else {
            param_4[uVar5] = 0x80;
            param_4[uVar5 + 1] = 0xa1;
            bVar3 = true;
          }
          uVar7 = uVar5 + 3;
          param_4[uVar5 + 2] = 0x8a;
          uVar5 = uVar5 + 4;
          param_4[uVar7] = 0x80;
        }
        uVar7 = 2;
        bVar15 = 0x22;
        do {
          if ((local_14 >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
            if (bVar3) {
              param_4[uVar5] = 0x80;
              param_4[uVar5 + 1] = bVar15 | 0x80;
            }
            else {
              param_4[uVar5] = 0x80;
              bVar3 = true;
              param_4[uVar5 + 1] = bVar15 | 0x80;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_14 >> (ulong)(uVar7 + 1 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = bVar15 + 1 | 0x80;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_14 >> (ulong)(uVar7 + 2 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = bVar15 + 2 | 0x80;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_14 >> (ulong)(uVar7 + 3 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = bVar15 + 3 | 0x80;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_14 >> (ulong)(uVar7 + 4 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = bVar15 + 4 | 0x80;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          uVar7 = uVar7 + 5;
          bVar15 = bVar15 + 5;
        } while (uVar7 != 0x20);
        if ((local_10 & 1) != 0) {
          param_4[uVar5] = 0x80;
          uVar7 = uVar5 + 2;
          if (!bVar3) {
            bVar3 = true;
          }
          uVar4 = uVar5 + 3;
          param_4[uVar5 + 1] = 0xc0;
          uVar5 = uVar5 + 4;
          param_4[uVar7] = 0x8a;
          param_4[uVar4] = 0x80;
        }
        if ((local_10 >> 1 & 1) != 0) {
          if (bVar3) {
            param_4[uVar5] = 0x80;
            param_4[uVar5 + 1] = 0xc1;
          }
          else {
            param_4[uVar5] = 0x80;
            param_4[uVar5 + 1] = 0xc1;
            bVar3 = true;
          }
          uVar7 = uVar5 + 3;
          param_4[uVar5 + 2] = 0x8a;
          uVar5 = uVar5 + 4;
          param_4[uVar7] = 0x80;
        }
        uVar7 = 2;
        do {
          if ((local_10 >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
            if (bVar3) {
              param_4[uVar5] = 0x80;
              param_4[uVar5 + 1] = (byte)uVar7 | 0xc0;
            }
            else {
              param_4[uVar5] = 0x80;
              bVar3 = true;
              param_4[uVar5 + 1] = (byte)uVar7 | 0xc0;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_10 >> (ulong)(uVar7 + 1 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = (byte)(uVar7 + 1) | 0xc0;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_10 >> (ulong)(uVar7 + 2 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = (byte)(uVar7 + 2) | 0xc0;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_10 >> (ulong)(uVar7 + 3 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = (byte)(uVar7 + 3) | 0xc0;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_10 >> (ulong)(uVar7 + 4 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = (byte)(uVar7 + 4) | 0xc0;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          uVar7 = uVar7 + 5;
        } while (uVar7 != 0x20);
        if ((local_c & 1) != 0) {
          param_4[uVar5] = 0x80;
          uVar7 = uVar5 + 2;
          if (!bVar3) {
            bVar3 = true;
          }
          uVar4 = uVar5 + 3;
          param_4[uVar5 + 1] = 0xe0;
          uVar5 = uVar5 + 4;
          param_4[uVar7] = 0x8a;
          param_4[uVar4] = 0x80;
        }
        if ((local_c >> 1 & 1) != 0) {
          if (bVar3) {
            param_4[uVar5] = 0x80;
            param_4[uVar5 + 1] = 0xe1;
          }
          else {
            param_4[uVar5] = 0x80;
            param_4[uVar5 + 1] = 0xe1;
            bVar3 = true;
          }
          uVar7 = uVar5 + 3;
          param_4[uVar5 + 2] = 0x8a;
          uVar5 = uVar5 + 4;
          param_4[uVar7] = 0x80;
        }
        uVar7 = 2;
        bVar15 = 0x22;
        do {
          if ((local_c >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
            if (bVar3) {
              param_4[uVar5] = 0x80;
              param_4[uVar5 + 1] = bVar15 | 0xc0;
            }
            else {
              param_4[uVar5] = 0x80;
              bVar3 = true;
              param_4[uVar5 + 1] = bVar15 | 0xc0;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_c >> (ulong)(uVar7 + 1 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = bVar15 + 1 | 0xc0;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_c >> (ulong)(uVar7 + 2 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = bVar15 + 2 | 0xc0;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_c >> (ulong)(uVar7 + 3 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = bVar15 + 3 | 0xc0;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          if ((local_c >> (ulong)(uVar7 + 4 & 0x1f) & 1) != 0) {
            param_4[uVar5] = 0x80;
            if (!bVar3) {
              bVar3 = true;
            }
            uVar4 = uVar5 + 3;
            param_4[uVar5 + 1] = bVar15 + 4 | 0xc0;
            param_4[uVar5 + 2] = 0x8a;
            uVar5 = uVar5 + 4;
            param_4[uVar4] = 0x80;
          }
          uVar7 = uVar7 + 5;
          bVar15 = bVar15 + 5;
        } while (uVar7 != 0x20);
      }
      else {
        if (param_2 < 0x80) {
          uVar5 = 1;
          uVar8 = 0;
        }
        else {
          lVar9 = 0;
          do {
            iVar6 = (int)lVar9;
            uVar7 = iVar6 + 1;
            bVar15 = (byte)param_2;
            param_2 = param_2 >> 7;
            param_4[lVar9] = bVar15 & 0x7f;
            if (1 < uVar7) break;
            lVar9 = 1;
          } while (0x7f < param_2);
          uVar8 = (ulong)uVar7;
          uVar5 = iVar6 + 2;
        }
        bVar2 = false;
        uVar7 = 0;
        param_4[uVar8] = (byte)param_2 | 0x80;
        do {
          if ((local_18 >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
            if (bVar2) {
              uVar4 = uVar5 + 1;
              param_4[uVar5] = 0x80;
              uVar11 = uVar5 + 3;
              param_4[uVar4] = 0x80;
              param_4[uVar5 + 2] = (byte)uVar7 | 0x80;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar11 = uVar5 + 2;
              param_4[uVar5 + 1] = (byte)uVar7 | 0x80;
              uVar4 = uVar5;
            }
            param_4[uVar11] = 0x80;
            bVar2 = true;
            uVar5 = uVar4 + 5;
            param_4[uVar4 + 3] = 0x8a;
            param_4[uVar4 + 4] = 0x80;
          }
          if ((local_18 >> (ulong)(uVar7 + 1 & 0x1f) & 1) != 0) {
            bVar15 = (byte)(uVar7 + 1);
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 | 0x80;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              param_4[uVar5 + 1] = bVar15 | 0x80;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            bVar2 = true;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          if ((local_18 >> (ulong)(uVar7 + 2 & 0x1f) & 1) != 0) {
            bVar15 = (byte)(uVar7 + 2);
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 | 0x80;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              param_4[uVar5 + 1] = bVar15 | 0x80;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            bVar2 = true;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          if ((local_18 >> (ulong)(uVar7 + 3 & 0x1f) & 1) != 0) {
            bVar15 = (byte)(uVar7 + 3);
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 | 0x80;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              param_4[uVar5 + 1] = bVar15 | 0x80;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            bVar2 = true;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          uVar7 = uVar7 + 4;
        } while (uVar7 != 0x20);
        uVar7 = 0;
        bVar15 = 0x20;
        do {
          if ((local_14 >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
            if (bVar2) {
              uVar4 = uVar5 + 1;
              param_4[uVar5] = 0x80;
              uVar11 = uVar5 + 3;
              param_4[uVar4] = 0x80;
              param_4[uVar5 + 2] = bVar15 | 0x80;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar11 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 | 0x80;
              uVar4 = uVar5;
            }
            param_4[uVar11] = 0x80;
            uVar5 = uVar4 + 5;
            param_4[uVar4 + 3] = 0x8a;
            param_4[uVar4 + 4] = 0x80;
          }
          if ((local_14 >> (ulong)(uVar7 + 1 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 + 1 | 0x80;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 + 1 | 0x80;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          if ((local_14 >> (ulong)(uVar7 + 2 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 + 2 | 0x80;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 + 2 | 0x80;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          if ((local_14 >> (ulong)(uVar7 + 3 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 + 3 | 0x80;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 + 3 | 0x80;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          uVar7 = uVar7 + 4;
          bVar15 = bVar15 + 4;
        } while (uVar7 != 0x20);
        uVar7 = 0;
        do {
          if ((local_10 >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
            if (bVar2) {
              uVar4 = uVar5 + 1;
              param_4[uVar5] = 0x80;
              uVar11 = uVar5 + 3;
              param_4[uVar4] = 0x80;
              param_4[uVar5 + 2] = (byte)uVar7 | 0xc0;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar11 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = (byte)uVar7 | 0xc0;
              uVar4 = uVar5;
            }
            param_4[uVar11] = 0x80;
            uVar5 = uVar4 + 5;
            param_4[uVar4 + 3] = 0x8a;
            param_4[uVar4 + 4] = 0x80;
          }
          if ((local_10 >> (ulong)(uVar7 + 1 & 0x1f) & 1) != 0) {
            bVar15 = (byte)(uVar7 + 1);
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 | 0xc0;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 | 0xc0;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          if ((local_10 >> (ulong)(uVar7 + 2 & 0x1f) & 1) != 0) {
            bVar15 = (byte)(uVar7 + 2);
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 | 0xc0;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 | 0xc0;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          if ((local_10 >> (ulong)(uVar7 + 3 & 0x1f) & 1) != 0) {
            bVar15 = (byte)(uVar7 + 3);
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 | 0xc0;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 | 0xc0;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          uVar7 = uVar7 + 4;
        } while (uVar7 != 0x20);
        uVar7 = 0;
        bVar15 = 0x20;
        do {
          if ((local_c >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
            if (bVar2) {
              uVar4 = uVar5 + 1;
              param_4[uVar5] = 0x80;
              uVar11 = uVar5 + 3;
              param_4[uVar4] = 0x80;
              param_4[uVar5 + 2] = bVar15 | 0xc0;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar11 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 | 0xc0;
              uVar4 = uVar5;
            }
            param_4[uVar11] = 0x80;
            uVar5 = uVar4 + 5;
            param_4[uVar4 + 3] = 0x8a;
            param_4[uVar4 + 4] = 0x80;
          }
          if ((local_c >> (ulong)(uVar7 + 1 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 + 1 | 0xc0;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 + 1 | 0xc0;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          if ((local_c >> (ulong)(uVar7 + 2 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 + 2 | 0xc0;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 + 2 | 0xc0;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          if ((local_c >> (ulong)(uVar7 + 3 & 0x1f) & 1) != 0) {
            if (bVar2) {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 3;
              param_4[uVar5 + 1] = 0x80;
              param_4[uVar5 + 2] = bVar15 + 3 | 0xc0;
              uVar5 = uVar5 + 1;
            }
            else {
              param_4[uVar5] = 0x80;
              uVar4 = uVar5 + 2;
              bVar2 = true;
              param_4[uVar5 + 1] = bVar15 + 3 | 0xc0;
            }
            uVar11 = uVar5 + 3;
            uVar1 = uVar5 + 4;
            param_4[uVar4] = 0x80;
            uVar5 = uVar5 + 5;
            param_4[uVar11] = 0x8a;
            param_4[uVar1] = 0x80;
          }
          uVar7 = uVar7 + 4;
          bVar15 = bVar15 + 4;
        } while (uVar7 != 0x20);
      }
      goto LAB_0023834c;
    }
    if (param_2 < 0) {
      *param_4 = 0x80;
      uVar14 = 3;
      uVar5 = 4;
      uVar17 = 2;
      param_4[1] = (&DAT_0074a413)[lVar9] | 0x80;
    }
    else {
      if (param_2 < 0x80) {
        uVar5 = 6;
        uVar14 = 5;
        uVar17 = 4;
        uVar13 = 1;
        uVar16 = 2;
        uVar10 = 0;
        uVar12 = 3;
      }
      else {
        lVar9 = 0;
        do {
          iVar6 = (int)lVar9;
          bVar15 = (byte)param_2;
          param_2 = param_2 >> 7;
          param_4[lVar9] = bVar15 & 0x7f;
          if (1 < iVar6 + 1U) break;
          lVar9 = 1;
        } while (0x7f < param_2);
        uVar12 = (ulong)(iVar6 + 4);
        uVar16 = (ulong)(iVar6 + 3);
        uVar13 = (ulong)(iVar6 + 2);
        uVar17 = (ulong)(iVar6 + 5);
        uVar14 = (ulong)(iVar6 + 6);
        uVar10 = (ulong)(iVar6 + 1U);
        uVar5 = iVar6 + 7;
      }
      param_4[uVar10] = (byte)param_2 | 0x80;
      param_4[uVar13] = 0x80;
      param_4[uVar16] = (&DAT_0074a413)[(ulong)uVar7 * 0x1e + uVar8 * 0x65d0] | 0x80;
      param_4[uVar12] = 0x80;
    }
  }
  param_4[uVar17] = 0x8a;
  param_4[uVar14] = 0x80;
LAB_0023834c:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

