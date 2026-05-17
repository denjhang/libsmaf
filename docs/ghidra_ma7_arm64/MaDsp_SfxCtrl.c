/* MaDsp_SfxCtrl @ 00216620 5544B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaDsp_SfxCtrl(unsigned int, unsigned int, unsigned int, void*) */

void YAMAHA::MaDsp_SfxCtrl(uint param_1,uint param_2,uint param_3,void *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  short sVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined8 uVar13;
  uchar local_20;
  undefined1 local_1f;
  uchar local_18;
  undefined1 local_17;
  uchar local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  long local_8;
  
  puVar5 = PTR_lprm_00567530;
  local_20 = 0xff;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_1f = 0xff;
  if (param_1 == 0) {
    if (param_4 != (void *)0x0) {
      if (param_2 == 0x2013e) {
        if ((param_3 & 3) != 3) {
LAB_00216c54:
          if ((int)param_3 < 0) {
            lup_calc('\x02',0xfd);
            puVar5 = PTR_lprm_00567530;
            *(undefined2 *)(PTR_lprm_00567530 + 0x34a) = 0x7f;
            *(undefined2 *)(puVar5 + 0x34c) = 0x40;
            *(undefined2 *)(puVar5 + 0x34e) = 0;
            lup_calc('\x05','\x02');
            lup_calc('\x05','\x04');
          }
          else {
            if ((param_3 >> 2 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 0x306) = (ushort)*(byte *)((long)param_4 + 2);
              uVar7 = lup_calc('\x02','\0');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 3 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x308) = (ushort)*(byte *)((long)param_4 + 3);
              uVar7 = lup_calc('\x02','\x01');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 4 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x30a) = (ushort)*(byte *)((long)param_4 + 4);
              uVar7 = lup_calc('\x02','\x02');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 5 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x30c) = (ushort)*(byte *)((long)param_4 + 5);
              uVar7 = lup_calc('\x02','\x03');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 6 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x30e) = (ushort)*(byte *)((long)param_4 + 6);
              uVar7 = lup_calc('\x02','\x04');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 7 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x310) = (ushort)*(byte *)((long)param_4 + 7);
              uVar7 = lup_calc('\x02','\x05');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 8 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x312) = (ushort)*(byte *)((long)param_4 + 8);
              uVar7 = lup_calc('\x02','\x06');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 9 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x314) = (ushort)*(byte *)((long)param_4 + 9);
              uVar7 = lup_calc('\x02','\a');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 10 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x316) = (ushort)*(byte *)((long)param_4 + 10);
              uVar7 = lup_calc('\x02','\b');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0xb & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x318) = (ushort)*(byte *)((long)param_4 + 0xb);
              uVar7 = lup_calc('\x02','\t');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0xc & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x34a) = (ushort)*(byte *)((long)param_4 + 0xc);
              lup_calc('\x05','\x02');
            }
            if ((param_3 >> 0xd & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x34c) = (ushort)*(byte *)((long)param_4 + 0xd);
              lup_calc('\x05','\x03');
            }
            if ((param_3 >> 0xe & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x34e) = (ushort)*(byte *)((long)param_4 + 0xe);
              lup_calc('\x05','\x04');
            }
            if ((param_3 >> 0x10 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x31a) = (ushort)*(byte *)((long)param_4 + 0x10)
              ;
              uVar7 = lup_calc('\x02','\n');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0x11 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 0x31c) = (ushort)*(byte *)((long)param_4 + 0x11);
              uVar7 = lup_calc('\x02','\v');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0x12 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 0x31e) = (ushort)*(byte *)((long)param_4 + 0x12);
              uVar7 = lup_calc('\x02','\f');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0x13 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 800) = (ushort)*(byte *)((long)param_4 + 0x13);
              uVar7 = lup_calc('\x02','\r');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0x14 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 0x322) = (ushort)*(byte *)((long)param_4 + 0x14);
              uVar7 = lup_calc('\x02','\x0e');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0x15 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 0x324) = (ushort)*(byte *)((long)param_4 + 0x15);
              uVar7 = lup_calc('\x02','\x0f');
              iVar6 = (int)uVar7;
joined_r0x00216cc0:
              if (iVar6 < 0) goto LAB_00216690;
            }
          }
          goto LAB_002168d8;
        }
        uVar12 = (uint)CONCAT11(*(undefined1 *)param_4,*(undefined1 *)((long)param_4 + 1));
        lVar8 = 0;
        do {
          iVar6 = (int)lVar8;
          lVar9 = lVar8;
          if (uVar12 == (&DAT_00496210)[lVar8]) {
LAB_002178c8:
            if (iVar6 == 0) {
              PTR_lprm_00567530[9] = 0xff;
              *(int *)(puVar5 + 0xc) = (int)lVar9;
            }
            else if (iVar6 == 1) {
              PTR_lprm_00567530[9] = 0xfe;
              *(undefined4 *)(puVar5 + 0xc) = 0;
            }
            else if (iVar6 < 0x10) {
              PTR_lprm_00567530[9] = 0;
              *(int *)(puVar5 + 0xc) = iVar6 + -1;
            }
            else if (iVar6 < 0x15) {
              PTR_lprm_00567530[9] = 1;
              *(int *)(puVar5 + 0xc) = iVar6 + -0x10;
            }
            else if (iVar6 < 0x17) {
              PTR_lprm_00567530[9] = 2;
              *(int *)(puVar5 + 0xc) = iVar6 + -0x15;
            }
            else if (iVar6 < 0x1c) {
              PTR_lprm_00567530[9] = 3;
              *(int *)(puVar5 + 0xc) = iVar6 + -0x17;
            }
            else if (iVar6 < 0x1f) {
              PTR_lprm_00567530[9] = 4;
              *(int *)(puVar5 + 0xc) = iVar6 + -0x1c;
            }
            else if (iVar6 < 0x22) {
              PTR_lprm_00567530[9] = 5;
              *(int *)(puVar5 + 0xc) = iVar6 + -0x1f;
            }
            else if (iVar6 < 0x24) {
              PTR_lprm_00567530[9] = 6;
              *(int *)(puVar5 + 0xc) = iVar6 + -0x22;
            }
            else if (iVar6 != 0x26) {
              PTR_lprm_00567530[9] = 7;
              *(int *)(puVar5 + 0xc) = iVar6 + -0x24;
            }
            uVar7 = lup_calc('\x02',0xfd);
            if ((int)uVar7 < 0) goto LAB_00216690;
            lup_calc('\x05','\x10');
            goto LAB_00216c54;
          }
          lVar9 = lVar8 + 1;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 2;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 3;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 4;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 5;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 6;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 7;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 8;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 9;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 10;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 0xb;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar9 = lVar8 + 0xc;
          iVar6 = (int)lVar9;
          if (uVar12 == (&DAT_00496210)[lVar9]) goto LAB_002178c8;
          lVar8 = lVar8 + 0xd;
        } while (lVar8 != 0x27);
      }
      else if (param_2 < 0x2013f) {
        if (param_2 == 0x2011e) {
          if ((param_3 & 3) == 3) {
            sVar4 = CONCAT11(*(undefined1 *)param_4,*(undefined1 *)((long)param_4 + 1));
            if (sVar4 == 0) {
              PTR_lprm_00567530[8] = 0xff;
              *(undefined4 *)puVar5 = 0;
            }
            else if (sVar4 == 1) {
              PTR_lprm_00567530[8] = 0xfe;
              *(undefined4 *)puVar5 = 0;
            }
            else {
              if (sVar4 == 0x200) {
                iVar6 = 4;
              }
              else if (sVar4 == 0x201) {
                iVar6 = 5;
              }
              else if (sVar4 == 0x202) {
                iVar6 = 6;
              }
              else if (sVar4 == 0x400) {
                iVar6 = 9;
              }
              else if (sVar4 == 0x1000) {
                iVar6 = 10;
              }
              else if (sVar4 == 0x1100) {
                iVar6 = 0xb;
              }
              else {
                if (sVar4 != 0x1300) {
                  if (sVar4 == 0x1400) {
                    iVar6 = 0xf;
                  }
                  else if (sVar4 == 0x1401) {
                    iVar6 = 0x10;
                  }
                  else {
                    if (sVar4 != 0x1402) goto LAB_0021668c;
                    iVar6 = 0x11;
                  }
                  PTR_lprm_00567530[8] = 1;
                  *(int *)puVar5 = iVar6 + -0xd;
                  goto LAB_00216e14;
                }
                iVar6 = 0xc;
              }
              PTR_lprm_00567530[8] = 0;
              *(int *)puVar5 = iVar6 + -1;
            }
LAB_00216e14:
            uVar7 = lup_calc('\v',0xfd);
            if ((int)uVar7 < 0) goto LAB_00216690;
          }
          if ((int)param_3 < 0) {
            lup_calc('\v',0xfd);
            puVar5 = PTR_lprm_00567530;
            *(undefined2 *)(PTR_lprm_00567530 + 0x346) = 0x7f;
            *(undefined2 *)(puVar5 + 0x348) = 0x40;
            lup_calc('\x05','\0');
          }
          else {
            if ((param_3 >> 2 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 0x2e6) = (ushort)*(byte *)((long)param_4 + 2);
              uVar7 = lup_calc('\v','\0');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 3 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2e8) = (ushort)*(byte *)((long)param_4 + 3);
              uVar7 = lup_calc('\v','\x01');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 4 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2ea) = (ushort)*(byte *)((long)param_4 + 4);
              uVar7 = lup_calc('\v','\x02');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 5 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2ec) = (ushort)*(byte *)((long)param_4 + 5);
              uVar7 = lup_calc('\v','\x03');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 6 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2ee) = (ushort)*(byte *)((long)param_4 + 6);
              uVar7 = lup_calc('\v','\x04');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 7 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2f0) = (ushort)*(byte *)((long)param_4 + 7);
              uVar7 = lup_calc('\v','\x05');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 8 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2f2) = (ushort)*(byte *)((long)param_4 + 8);
              uVar7 = lup_calc('\v','\x06');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 9 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2f4) = (ushort)*(byte *)((long)param_4 + 9);
              uVar7 = lup_calc('\v','\a');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 10 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2f6) = (ushort)*(byte *)((long)param_4 + 10);
              uVar7 = lup_calc('\v','\b');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0xb & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2f8) = (ushort)*(byte *)((long)param_4 + 0xb);
              uVar7 = lup_calc('\v','\t');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0xc & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x346) = (ushort)*(byte *)((long)param_4 + 0xc);
              lup_calc('\x05','\0');
            }
            if ((param_3 >> 0xd & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x348) = (ushort)*(byte *)((long)param_4 + 0xd);
              lup_calc('\x05','\x01');
            }
            if ((param_3 >> 0x10 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2fa) = (ushort)*(byte *)((long)param_4 + 0x10)
              ;
              uVar7 = lup_calc('\v','\n');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0x11 & 1) != 0) {
              *(ushort *)((long)PTR_lprm_00567530 + 0x2fc) = (ushort)*(byte *)((long)param_4 + 0x11)
              ;
              uVar7 = lup_calc('\v','\v');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0x12 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 0x2fe) = (ushort)*(byte *)((long)param_4 + 0x12);
              uVar7 = lup_calc('\v','\f');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0x13 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 0x300) = (ushort)*(byte *)((long)param_4 + 0x13);
              uVar7 = lup_calc('\v','\r');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0x14 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 0x302) = (ushort)*(byte *)((long)param_4 + 0x14);
              uVar7 = lup_calc('\v','\x0e');
              if ((int)uVar7 < 0) goto LAB_00216690;
            }
            if ((param_3 >> 0x15 & 1) != 0) {
              *(ushort *)(PTR_lprm_00567530 + 0x304) = (ushort)*(byte *)((long)param_4 + 0x15);
              uVar7 = lup_calc('\v','\x0f');
              iVar6 = (int)uVar7;
              goto joined_r0x00216cc0;
            }
          }
          goto LAB_002168d8;
        }
      }
      else {
        if (param_2 == 0x20160) {
          uVar12 = DAT_005e2b90 - 0x23;
          PTR_lprm_00567530[0x10] = 0;
          *(undefined4 *)(puVar5 + 0x14) = 0;
          if (1 < uVar12) {
            param_3 = param_3 & 0xfffffbff;
            *(undefined1 *)((long)param_4 + 10) = 0;
          }
          if ((param_3 >> 2 & 1) != 0) {
            *(ushort *)(PTR_lprm_00567530 + 0x326) = (ushort)*(byte *)((long)param_4 + 2);
            uVar7 = lup_calc('\x0e','\0');
            if ((int)uVar7 < 0) goto LAB_00216690;
          }
          if ((param_3 >> 3 & 1) != 0) {
            *(ushort *)((long)PTR_lprm_00567530 + 0x328) = (ushort)*(byte *)((long)param_4 + 3);
            uVar7 = lup_calc('\x0e','\x01');
            if ((int)uVar7 < 0) goto LAB_00216690;
          }
          if ((param_3 >> 4 & 1) != 0) {
            *(ushort *)((long)PTR_lprm_00567530 + 0x32a) = (ushort)*(byte *)((long)param_4 + 4);
            uVar7 = lup_calc('\x0e','\x02');
            if ((int)uVar7 < 0) goto LAB_00216690;
          }
          if ((param_3 >> 5 & 1) != 0) {
            *(ushort *)((long)PTR_lprm_00567530 + 0x32c) = (ushort)*(byte *)((long)param_4 + 5);
            uVar7 = lup_calc('\x0e','\x03');
            if ((int)uVar7 < 0) goto LAB_00216690;
          }
          if ((param_3 >> 6 & 1) != 0) {
            *(ushort *)((long)PTR_lprm_00567530 + 0x32e) = (ushort)*(byte *)((long)param_4 + 6);
            uVar7 = lup_calc('\x0e','\x04');
            if ((int)uVar7 < 0) goto LAB_00216690;
          }
          if ((param_3 >> 7 & 1) != 0) {
            *(ushort *)(PTR_lprm_00567530 + 0x330) = (ushort)*(byte *)((long)param_4 + 7);
            uVar7 = lup_calc('\x0e','\x05');
            if ((int)uVar7 < 0) goto LAB_00216690;
          }
          if ((param_3 >> 8 & 1) != 0) {
            *(ushort *)(PTR_lprm_00567530 + 0x332) = (ushort)*(byte *)((long)param_4 + 8);
            uVar7 = lup_calc('\x0e','\x06');
            if ((int)uVar7 < 0) goto LAB_00216690;
          }
          if ((param_3 >> 9 & 1) != 0) {
            *(ushort *)(PTR_lprm_00567530 + 0x334) = (ushort)*(byte *)((long)param_4 + 9);
            uVar7 = lup_calc('\x0e','\a');
            if ((int)uVar7 < 0) goto LAB_00216690;
          }
          if ((param_3 >> 10 & 1) != 0) {
            *(ushort *)(PTR_lprm_00567530 + 0x336) = (ushort)*(byte *)((long)param_4 + 10);
            uVar7 = lup_calc('\x0e','\b');
            if ((int)uVar7 < 0) goto LAB_00216690;
          }
          if ((param_3 & 0x300) != 0) {
            if (DAT_005e1d84 != 0) {
              if (DAT_005e20d4 < 0x7fff) {
                local_e = (undefined1)(DAT_005e20d4 >> 10);
                local_d = (undefined1)(DAT_005e20d4 >> 2);
              }
              else {
                local_d = 0;
                local_e = 0x20;
              }
              local_10 = '\0';
              local_f = 0;
              MaDevDrv_SendDspCoef(0x1a,&local_10,4);
              uVar12 = (uint)((int)DAT_005e2ad0 * *(int *)(PTR_lprm_00567530 + 0x20)) >> 0xd;
              local_17 = (undefined1)uVar12;
              local_18 = (uchar)(uVar12 >> 8);
              MaDevDrv_SendDspCoef(0x16,&local_18,2);
            }
            if (DAT_005e1d84 != 0) {
              if (DAT_005e2174 < 0x7fff) {
                local_e = (undefined1)(DAT_005e2174 >> 10);
                local_d = (undefined1)(DAT_005e2174 >> 2);
              }
              else {
                local_d = 0;
                local_e = 0x20;
              }
              local_10 = '\0';
              local_f = 0;
              MaDevDrv_SendDspCoef(0x1c,&local_10,4);
              uVar12 = (uint)((int)DAT_005e2b00 * *(int *)(PTR_lprm_00567530 + 0x20)) >> 0xd;
              local_17 = (undefined1)uVar12;
              local_18 = (uchar)(uVar12 >> 8);
              MaDevDrv_SendDspCoef(0x17,&local_18,2);
            }
            if (DAT_005e1d84 != 0) {
              if (DAT_005e2214 < 0x7fff) {
                local_e = (undefined1)(DAT_005e2214 >> 10);
                local_d = (undefined1)(DAT_005e2214 >> 2);
              }
              else {
                local_d = 0;
                local_e = 0x20;
              }
              local_10 = '\0';
              local_f = 0;
              MaDevDrv_SendDspCoef(0x1e,&local_10,4);
              uVar12 = (uint)((int)DAT_005e2b30 * *(int *)(PTR_lprm_00567530 + 0x20)) >> 0xd;
              local_17 = (undefined1)uVar12;
              local_18 = (uchar)(uVar12 >> 8);
              MaDevDrv_SendDspCoef(0x18,&local_18,2);
            }
            if (DAT_005e1d84 != 0) {
              if (DAT_005e22b4 < 0x7fff) {
                local_e = (undefined1)(DAT_005e22b4 >> 10);
                local_d = (undefined1)(DAT_005e22b4 >> 2);
              }
              else {
                local_d = 0;
                local_e = 0x20;
              }
              local_10 = '\0';
              local_f = 0;
              MaDevDrv_SendDspCoef(0x20,&local_10,4);
              uVar12 = (uint)((int)DAT_005e2b60 * *(int *)(PTR_lprm_00567530 + 0x20)) >> 0xd;
              local_17 = (undefined1)uVar12;
              local_18 = (uchar)(uVar12 >> 8);
              MaDevDrv_SendDspCoef(0x19,&local_18,2);
            }
          }
LAB_002168d8:
          MaDevDrv_SendDspCoef(0,&local_20,2);
          uVar7 = 0;
          goto LAB_00216690;
        }
        if ((param_2 == 0x20180) && (param_3 < 6)) {
          *(short *)(PTR_lprm_00567530 + 0x18) = (short)param_3;
          lup_calc('\x05','\x05');
          uVar7 = 0;
          goto LAB_00216690;
        }
      }
    }
  }
  else if ((param_1 == 1) && (param_4 != (void *)0x0)) {
    if (param_2 == 0x2011e) {
      if (PTR_lprm_00567530[8] == -2) {
        uVar10 = 0;
        uVar11 = 1;
      }
      else {
        if (PTR_lprm_00567530[8] == '\0') {
          uVar12 = *(int *)PTR_lprm_00567530 + 1;
        }
        else {
          uVar12 = *(int *)PTR_lprm_00567530 + 0xd;
        }
        uVar10 = (undefined1)((uint)*(undefined4 *)(&DAT_004962b0 + (ulong)uVar12 * 4) >> 8);
        uVar11 = (undefined1)*(undefined4 *)(&DAT_004962b0 + (ulong)uVar12 * 4);
      }
      *(undefined1 *)param_4 = uVar10;
      *(undefined1 *)((long)param_4 + 1) = uVar11;
      puVar5 = PTR_lprm_00567530;
      if ((PTR_lprm_00567530 + 0x2e6 < (undefined *)((long)param_4 + 0xcU)) &&
         ((undefined *)((long)param_4 + 2U) < PTR_lprm_00567530 + 0x2fa)) {
        *(char *)((long)param_4 + 2) = (char)*(undefined2 *)(PTR_lprm_00567530 + 0x2e6);
        *(char *)((long)param_4 + 3) = (char)*(undefined2 *)(puVar5 + 0x2e8);
        *(char *)((long)param_4 + 4) = (char)*(undefined2 *)(puVar5 + 0x2ea);
        *(char *)((long)param_4 + 5) = (char)*(undefined2 *)(puVar5 + 0x2ec);
        *(char *)((long)param_4 + 6) = (char)*(undefined2 *)(puVar5 + 0x2ee);
        *(char *)((long)param_4 + 7) = (char)*(undefined2 *)(puVar5 + 0x2f0);
        *(char *)((long)param_4 + 8) = (char)*(undefined2 *)(puVar5 + 0x2f2);
        *(char *)((long)param_4 + 9) = (char)*(undefined2 *)(puVar5 + 0x2f4);
        *(char *)((long)param_4 + 10) = (char)*(undefined2 *)(puVar5 + 0x2f6);
        *(char *)((long)param_4 + 0xb) = (char)*(undefined2 *)(puVar5 + 0x2f8);
      }
      else {
        puVar1 = (undefined8 *)(PTR_lprm_00567530 + 0x2e8);
        puVar2 = (undefined8 *)(PTR_lprm_00567530 + 0x2f0);
        *(char *)((long)param_4 + 2) = (char)*(undefined2 *)(PTR_lprm_00567530 + 0x2e6);
        uVar7 = *puVar1;
        uVar13 = *puVar2;
        *(ulong *)((long)param_4 + 3) =
             CONCAT17((char)((ulong)uVar13 >> 0x30),
                      CONCAT16((char)((ulong)uVar13 >> 0x20),
                               CONCAT15((char)((ulong)uVar13 >> 0x10),
                                        CONCAT14((char)uVar13,
                                                 CONCAT13((char)((ulong)uVar7 >> 0x30),
                                                          CONCAT12((char)((ulong)uVar7 >> 0x20),
                                                                   CONCAT11((char)((ulong)uVar7 >>
                                                                                  0x10),(char)uVar7)
                                                                  ))))));
        *(char *)((long)param_4 + 0xb) = (char)*(undefined2 *)(puVar5 + 0x2f8);
      }
      puVar5 = PTR_lprm_00567530;
      uVar7 = 0;
      *(char *)((long)param_4 + 0xc) = (char)*(undefined2 *)(PTR_lprm_00567530 + 0x346);
      *(char *)((long)param_4 + 0xd) = (char)*(undefined2 *)(puVar5 + 0x348);
      *(char *)((long)param_4 + 0x10) = (char)*(undefined2 *)(puVar5 + 0x2fa);
      *(char *)((long)param_4 + 0x11) = (char)*(undefined2 *)(puVar5 + 0x2fc);
      *(char *)((long)param_4 + 0x12) = (char)*(undefined2 *)(puVar5 + 0x2fe);
      *(char *)((long)param_4 + 0x13) = (char)*(undefined2 *)(puVar5 + 0x300);
      *(char *)((long)param_4 + 0x14) = (char)*(undefined2 *)(puVar5 + 0x302);
      *(char *)((long)param_4 + 0x15) = (char)*(undefined2 *)(puVar5 + 0x304);
      goto LAB_00216690;
    }
    if (param_2 == 0x2013e) {
      cVar3 = PTR_lprm_00567530[9];
      if (cVar3 == -2) {
        uVar10 = 0;
        uVar11 = 1;
      }
      else {
        if (cVar3 == '\0') {
          uVar12 = *(int *)(PTR_lprm_00567530 + 0xc) + 1;
        }
        else if (cVar3 == '\x01') {
          uVar12 = *(int *)(PTR_lprm_00567530 + 0xc) + 0x10;
        }
        else if (cVar3 == '\x02') {
          uVar12 = *(int *)(PTR_lprm_00567530 + 0xc) + 0x15;
        }
        else if (cVar3 == '\x03') {
          uVar12 = *(int *)(PTR_lprm_00567530 + 0xc) + 0x17;
        }
        else if (cVar3 == '\x04') {
          uVar12 = *(int *)(PTR_lprm_00567530 + 0xc) + 0x1c;
        }
        else if (cVar3 == '\x05') {
          uVar12 = *(int *)(PTR_lprm_00567530 + 0xc) + 0x1f;
        }
        else if (cVar3 == '\x06') {
          uVar12 = *(int *)(PTR_lprm_00567530 + 0xc) + 0x22;
        }
        else {
          if (cVar3 != '\a') {
            uVar11 = 0;
            uVar10 = 0;
            goto LAB_00216788;
          }
          uVar12 = *(int *)(PTR_lprm_00567530 + 0xc) + 0x24;
        }
        uVar10 = (undefined1)((uint)(&DAT_00496210)[uVar12] >> 8);
        uVar11 = (undefined1)(&DAT_00496210)[uVar12];
      }
LAB_00216788:
      *(undefined1 *)param_4 = uVar10;
      *(undefined1 *)((long)param_4 + 1) = uVar11;
      puVar5 = PTR_lprm_00567530;
      if ((PTR_lprm_00567530 + 0x306 < (undefined *)((long)param_4 + 0xcU)) &&
         ((undefined *)((long)param_4 + 2U) < PTR_lprm_00567530 + 0x31a)) {
        *(char *)((long)param_4 + 2) = (char)*(undefined2 *)(PTR_lprm_00567530 + 0x306);
        *(char *)((long)param_4 + 3) = (char)*(undefined2 *)(puVar5 + 0x308);
        *(char *)((long)param_4 + 4) = (char)*(undefined2 *)(puVar5 + 0x30a);
        *(char *)((long)param_4 + 5) = (char)*(undefined2 *)(puVar5 + 0x30c);
        *(char *)((long)param_4 + 6) = (char)*(undefined2 *)(puVar5 + 0x30e);
        *(char *)((long)param_4 + 7) = (char)*(undefined2 *)(puVar5 + 0x310);
        *(char *)((long)param_4 + 8) = (char)*(undefined2 *)(puVar5 + 0x312);
        *(char *)((long)param_4 + 9) = (char)*(undefined2 *)(puVar5 + 0x314);
        *(char *)((long)param_4 + 10) = (char)*(undefined2 *)(puVar5 + 0x316);
        *(char *)((long)param_4 + 0xb) = (char)*(undefined2 *)(puVar5 + 0x318);
      }
      else {
        puVar1 = (undefined8 *)(PTR_lprm_00567530 + 0x308);
        puVar2 = (undefined8 *)(PTR_lprm_00567530 + 0x310);
        *(char *)((long)param_4 + 2) = (char)*(undefined2 *)(PTR_lprm_00567530 + 0x306);
        uVar13 = *puVar1;
        uVar7 = *puVar2;
        *(ulong *)((long)param_4 + 3) =
             CONCAT17((char)((ulong)uVar7 >> 0x30),
                      CONCAT16((char)((ulong)uVar7 >> 0x20),
                               CONCAT15((char)((ulong)uVar7 >> 0x10),
                                        CONCAT14((char)uVar7,
                                                 CONCAT13((char)((ulong)uVar13 >> 0x30),
                                                          CONCAT12((char)((ulong)uVar13 >> 0x20),
                                                                   CONCAT11((char)((ulong)uVar13 >>
                                                                                  0x10),(char)uVar13
                                                                           )))))));
        *(char *)((long)param_4 + 0xb) = (char)*(undefined2 *)(puVar5 + 0x318);
      }
      puVar5 = PTR_lprm_00567530;
      *(char *)((long)param_4 + 0xc) = (char)*(undefined2 *)(PTR_lprm_00567530 + 0x34a);
      *(char *)((long)param_4 + 0xd) = (char)*(undefined2 *)(puVar5 + 0x34c);
      *(char *)((long)param_4 + 0xe) = (char)*(undefined2 *)(puVar5 + 0x34e);
      *(char *)((long)param_4 + 0xf) = (char)*(undefined2 *)(puVar5 + 0x350);
      *(char *)((long)param_4 + 0x10) = (char)*(undefined2 *)(puVar5 + 0x31a);
      *(char *)((long)param_4 + 0x11) = (char)*(undefined2 *)(puVar5 + 0x31c);
      *(char *)((long)param_4 + 0x12) = (char)*(undefined2 *)(puVar5 + 0x31e);
      *(char *)((long)param_4 + 0x13) = (char)*(undefined2 *)(puVar5 + 800);
      uVar7 = 0;
      *(char *)((long)param_4 + 0x14) = (char)*(undefined2 *)(puVar5 + 0x322);
      *(char *)((long)param_4 + 0x15) = (char)*(undefined2 *)(puVar5 + 0x324);
      goto LAB_00216690;
    }
  }
LAB_0021668c:
  uVar7 = 0xfffffffe;
LAB_00216690:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

