/* MaSmw_Ctrl @ 00080274 11430B */


/* YAMAHA::MaSmw_Ctrl(unsigned int, unsigned int, unsigned int, void*) */

void YAMAHA::MaSmw_Ctrl(uint param_1,uint param_2,uint param_3,void *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  void *pvVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uchar uVar13;
  void *pvVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  void *pvVar22;
  int iVar23;
  code *pcVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  bool bVar31;
  bool bVar32;
  uint local_9c;
  int local_98 [2];
  byte local_90;
  undefined4 local_88;
  void *local_84;
  void *local_80;
  void *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uchar local_70;
  byte local_6f;
  undefined1 local_6e;
  byte local_6d;
  undefined1 local_6c;
  byte local_6b;
  undefined1 local_6a;
  byte local_69;
  undefined1 local_68;
  byte local_67;
  undefined1 local_66;
  byte local_65;
  undefined1 local_64;
  byte local_63;
  undefined1 local_62;
  byte local_61;
  undefined1 local_60;
  byte local_5f;
  undefined1 local_5e;
  byte local_5d;
  undefined1 local_5c;
  byte local_5b;
  undefined1 local_5a;
  byte local_59;
  undefined1 local_58;
  byte local_57;
  undefined1 local_56;
  byte local_55;
  undefined1 local_54;
  byte local_53;
  undefined1 local_52;
  byte local_51;
  undefined1 local_50;
  byte local_4f;
  undefined1 local_4e;
  byte local_4d;
  undefined1 local_4c;
  byte local_4b;
  undefined1 local_4a;
  byte local_49;
  undefined1 local_48;
  byte local_47;
  undefined1 local_46;
  byte local_45;
  undefined1 local_44;
  byte local_43;
  undefined1 local_42;
  byte local_41;
  undefined1 local_40;
  byte local_3f;
  undefined1 local_3e;
  byte local_3d;
  undefined1 local_3c;
  byte local_3b;
  undefined1 local_3a;
  byte local_39;
  undefined1 local_38;
  byte local_37;
  undefined1 local_36;
  byte local_35;
  undefined1 local_34;
  byte local_33;
  undefined1 local_32;
  byte local_31;
  int local_2c;
  
  uVar27 = param_1 & 0xff;
  uVar28 = (param_1 & 0xffff) >> 8;
  piVar20 = *(int **)(DAT_00080f88 + 0x8028c);
  local_2c = *piVar20;
  machdep_EnterCriticalSection();
  iVar7 = DAT_000830d0;
  iVar6 = DAT_00081cdc;
  iVar5 = DAT_00081cc0;
  iVar4 = DAT_00081c90;
  iVar3 = DAT_00080fdc;
  iVar12 = DAT_00080fc8;
  iVar11 = DAT_00080fc4;
  iVar30 = DAT_00080fc0;
  iVar17 = DAT_00080f94;
  bVar32 = 8 < uVar28;
  bVar31 = uVar28 == 9;
  if (uVar28 < 10) {
    bVar32 = 2 < uVar27;
    bVar31 = uVar27 == 3;
  }
  local_9c = param_3;
  if (((bVar32 && !bVar31) || (uVar27 != 0 && uVar28 == 3)) ||
     (uVar19 = (uint)*(byte *)(DAT_00080f8c + 0x802d0 + uVar27 + uVar28 * 4), uVar19 == 0xff))
  goto LAB_000804ea;
  bVar31 = 4 < param_2;
  if (param_2 != 5) {
    bVar31 = param_2 != 10;
  }
  iVar16 = *(int *)(DAT_00080f90 + 0x802ea);
  iVar29 = uVar19 * 0x98;
  iVar21 = iVar16 + iVar29;
  iVar23 = uVar19 * 0x228 + *(int *)(DAT_00080f90 + 0x802ee);
  if ((bVar31 && (param_2 != 5 && param_2 != 0xb)) && (param_2 != 0x51)) {
    if (param_2 != 0x70) {
      iVar29 = *(int *)(iVar16 + iVar29);
      if (2 < iVar29 - 2U) {
        uVar27 = 0xffffffff;
        goto LAB_000804ee;
      }
      goto LAB_00080310;
    }
LAB_000807a4:
    if (param_4 != (void *)0x0) {
      if (uVar28 == 6) {
        switch(*(undefined4 *)param_4) {
        case 1:
        case 2:
        case 3:
        case 4:
          if ((int)(param_3 << 0x1f) < 0) {
            uVar27 = 0xffffffff;
            break;
          }
          if (44000 < *(int *)((int)param_4 + 8) - 4000U) {
            uVar27 = 0xfffffffe;
            break;
          }
          goto LAB_00082b62;
        case 5:
        case 6:
          if (*(int *)(DAT_000830a8 + 0x82ad8) != 0x23) {
            uVar27 = 0xffffffff;
            break;
          }
          if (param_3 < 0x4000) {
            uVar27 = 0xffffffff;
            break;
          }
          uVar27 = *(uint *)((int)param_4 + 8);
          if (uVar27 != 0x5622) {
            if (uVar27 < 0x5623) {
              if (uVar27 != 0x2b11) {
                if (uVar27 < 0x2b12) {
                  if (uVar27 != 8000) goto LAB_00082e6e;
                }
                else if ((uVar27 != 12000) && (uVar27 != 16000)) {
LAB_00082e6e:
                  uVar27 = 0xfffffffe;
                  break;
                }
              }
            }
            else if (uVar27 != 32000) {
              if (uVar27 < 0x7d01) {
                if (uVar27 != 24000) goto LAB_00082e6e;
              }
              else if ((uVar27 != 0xac44) && (uVar27 != 48000)) goto LAB_00082e6e;
            }
          }
LAB_00082b62:
          if (*(uint *)((int)param_4 + 4) < 2) {
            uVar27 = 0;
          }
          else {
            uVar27 = 0xfffffffe;
          }
          break;
        case 7:
        case 8:
        case 9:
        case 10:
          if (*(int *)(DAT_000830a4 + 0x82ac0) != 0x23) {
            uVar27 = 0xffffffff;
            break;
          }
          if (param_3 < 0x4000) {
            uVar27 = 0xffffffff;
            break;
          }
          uVar27 = *(uint *)((int)param_4 + 8);
          if (uVar27 == 12000) {
LAB_00082eee:
            uVar27 = 0;
          }
          else {
            if (uVar27 < 0x2ee1) {
              if ((uVar27 == 8000) || (uVar27 == 0x2b11)) goto LAB_00082eee;
            }
            else if ((uVar27 == 0x5622) || ((uVar27 == 24000 || (uVar27 == 16000))))
            goto LAB_00082eee;
            uVar27 = 0xfffffffe;
          }
          if (*(int *)((int)param_4 + 4) != 0) {
            uVar27 = 0xfffffffe;
          }
          break;
        case 0xb:
          if (*(int *)(DAT_000830a0 + 0x82aaa) == 0x23) {
            if (param_3 < 0x4000) {
              uVar27 = 0xffffffff;
            }
            else if (*(int *)((int)param_4 + 8) == 8000) {
              uVar27 = 0;
              if (*(int *)((int)param_4 + 4) != 0) {
                uVar27 = 0xfffffffe;
              }
            }
            else {
              uVar27 = 0xfffffffe;
            }
          }
          else {
            uVar27 = 0xffffffff;
          }
          break;
        default:
          uVar27 = 0xfffffffe;
        }
        goto LAB_000804ee;
      }
      if (uVar28 != 7) goto LAB_000807bc;
      if (*(int *)(DAT_000830ac + 0x82b84) == 0x22) {
        if (2 < *(int *)param_4 - 2U) {
          uVar27 = 0xfffffffe;
          goto LAB_000804ee;
        }
        if (*(int *)((int)param_4 + 4) != 1) {
          uVar27 = 0xfffffffe;
          goto LAB_000804ee;
        }
      }
      else {
        if (1 < *(int *)(DAT_000830ac + 0x82b84) - 0x23U) {
          uVar27 = 0xffffffff;
          goto LAB_000804ee;
        }
        if (3 < *(int *)param_4 - 1U) {
          uVar27 = 0xfffffffe;
          goto LAB_000804ee;
        }
        if (1 < *(uint *)((int)param_4 + 4)) {
          uVar27 = 0xfffffffe;
          goto LAB_000804ee;
        }
      }
      uVar27 = *(uint *)((int)param_4 + 8);
      if (uVar27 != 0x5622) {
        if (uVar27 < 0x5623) {
          if (uVar27 != 0x2b11) {
            if (uVar27 < 0x2b12) {
              if (uVar27 != 8000) goto LAB_00082ea2;
            }
            else if ((uVar27 != 12000) && (uVar27 != 16000)) {
LAB_00082ea2:
              uVar27 = 0xfffffffe;
              goto LAB_000804ee;
            }
          }
        }
        else if (uVar27 != 32000) {
          if (uVar27 < 0x7d01) {
            if (uVar27 != 24000) goto LAB_00082ea2;
          }
          else if ((uVar27 != 0xac44) && (uVar27 != 48000)) goto LAB_00082ea2;
        }
      }
      uVar27 = 0;
      goto LAB_000804ee;
    }
    goto LAB_000804ea;
  }
  iVar29 = *(int *)(iVar16 + iVar29);
  if (iVar29 == 0) {
    uVar27 = 0xffffffff;
    goto LAB_000804ee;
  }
LAB_00080310:
  if (param_2 == 0x65) {
    if (param_4 != (void *)0x0) {
      *(uint *)param_4 = (uint)*(byte *)(iVar21 + 0x22);
      uVar27 = 0;
      goto LAB_000804ee;
    }
    goto LAB_000804ea;
  }
  bVar1 = (byte)param_3;
  if (0x65 < param_2) {
    if (param_2 == 0x90) goto LAB_000821ba;
    if (param_2 < 0x91) {
      if (param_2 == 0x77) {
        if (((param_4 != (void *)0x0 && uVar28 == 5) && (*(int *)param_4 - 0x14U < 0x1375)) &&
           (*(int *)((int)param_4 + 4) - 0x14U < 0x1375)) {
          MaDevDrv_WriteIntermediateReg(0x4d,(byte)*(undefined4 *)((int)param_4 + 8) & 0x7c);
          MaDevDrv_WriteIntermediateReg(0x50,(byte)*(undefined4 *)((int)param_4 + 0xc) & 0x7c);
          uVar28 = __udivsi3(*(int *)param_4 << 0x13,48000);
          uVar27 = 1;
          for (; uVar19 = uVar28, uVar26 = uVar27, 0x3ff < uVar28; uVar28 = uVar28 >> 0x10) {
            uVar19 = uVar28 >> 1;
            uVar26 = uVar27 + 1;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 2;
            uVar26 = uVar27 + 2;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 3;
            uVar26 = uVar27 + 3;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 4;
            uVar26 = uVar27 + 4;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 5;
            uVar26 = uVar27 + 5;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 6;
            uVar26 = uVar27 + 6;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 7;
            uVar26 = uVar27 + 7;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 8;
            uVar26 = uVar27 + 8;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 9;
            uVar26 = uVar27 + 9;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 10;
            uVar26 = uVar27 + 10;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 0xb;
            uVar26 = uVar27 + 0xb;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 0xc;
            uVar26 = uVar27 + 0xc;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 0xd;
            uVar26 = uVar27 + 0xd;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 0xe;
            uVar26 = uVar27 + 0xe;
            if (uVar19 < 0x400) break;
            uVar19 = uVar28 >> 0xf;
            uVar26 = uVar27 + 0xf;
            if (uVar19 < 0x400) break;
            uVar27 = uVar27 + 0x10;
          }
          if (6 < uVar26) {
            uVar26 = 7;
          }
          MaDevDrv_WriteIntermediateReg(0x4e,(byte)(uVar19 >> 7) | (byte)(uVar26 << 3));
          MaDevDrv_WriteIntermediateReg(0x4f,(byte)uVar19 & 0x7f);
          uVar28 = __udivsi3(*(int *)((int)param_4 + 4) << 0x13,48000);
          uVar27 = 1;
          for (; uVar19 = uVar27, uVar26 = uVar28, 0x3ff < uVar28; uVar28 = uVar28 >> 0x10) {
            uVar26 = uVar28 >> 1;
            uVar19 = uVar27 + 1;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 2;
            uVar19 = uVar27 + 2;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 3;
            uVar19 = uVar27 + 3;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 4;
            uVar19 = uVar27 + 4;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 5;
            uVar19 = uVar27 + 5;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 6;
            uVar19 = uVar27 + 6;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 7;
            uVar19 = uVar27 + 7;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 8;
            uVar19 = uVar27 + 8;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 9;
            uVar19 = uVar27 + 9;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 10;
            uVar19 = uVar27 + 10;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 0xb;
            uVar19 = uVar27 + 0xb;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 0xc;
            uVar19 = uVar27 + 0xc;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 0xd;
            uVar19 = uVar27 + 0xd;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 0xe;
            uVar19 = uVar27 + 0xe;
            if (uVar26 < 0x400) break;
            uVar26 = uVar28 >> 0xf;
            uVar19 = uVar27 + 0xf;
            if (uVar26 < 0x400) break;
            uVar27 = uVar27 + 0x10;
          }
          if (6 < uVar19) {
            uVar19 = 7;
          }
          MaDevDrv_WriteIntermediateReg(0x51,(byte)(uVar26 >> 7) | (byte)(uVar19 << 3));
          MaDevDrv_WriteIntermediateReg(0x52,(byte)uVar26 & 0x7f);
          MaDevDrv_WriteIntermediateReg(0x55,'@');
          uVar27 = 0;
          goto LAB_000804ee;
        }
      }
      else {
        if (0x77 < param_2) {
          if (param_2 != 0x81) {
            if (param_2 < 0x82) {
              if (param_2 == 0x7e) {
                uVar19 = (uint)*(byte *)(iVar21 + 0x27);
                if (((-1 < (int)(uVar19 << 0x18)) && (iVar29 - 2U < 2)) && (uVar28 == 1)) {
                  bVar2 = (byte)param_1;
                  if (uVar27 == 0) {
LAB_00080898:
                    if ((-1 < (int)(param_3 << 0x1e)) ||
                       (((*(int *)(iVar16 + 0x130) - 2U < 2 &&
                         (*(int *)(iVar16 + 0x178) == *(int *)(iVar21 + 0x48))) &&
                        ((*(byte *)(iVar16 + 0x157) == 2 ||
                         ((uint)*(byte *)(iVar16 + 0x157) == (uVar27 | 0x80))))))) {
                      if (uVar27 != 2) goto LAB_000808cc;
LAB_00080900:
                      if ((-1 < (int)(param_3 << 0x1c)) ||
                         (((*(int *)(iVar16 + 0x260) - 2U < 2 &&
                           (*(int *)(iVar16 + 0x2a8) == *(int *)(iVar21 + 0x48))) &&
                          ((*(byte *)(iVar16 + 0x287) == 8 ||
                           ((uint)*(byte *)(iVar16 + 0x287) == (uVar27 | 0x80))))))) {
                        if (uVar27 != 0) goto LAB_00080934;
LAB_0008094a:
                        if ((int)(uVar19 << 0x1e) < 0) {
                          *(undefined1 *)(iVar16 + 0x157) = 2;
                          uVar19 = (uint)*(byte *)(iVar21 + 0x27);
                        }
                        if (uVar27 != 2) goto LAB_00080960;
LAB_00080976:
                        if ((int)(uVar19 << 0x1c) < 0) {
                          *(undefined1 *)(iVar16 + 0x287) = 8;
                        }
                        if (uVar27 != 0) goto LAB_00080988;
LAB_000809a6:
                        if ((int)(param_3 << 0x1e) < 0) {
                          *(byte *)(iVar16 + 0x157) = bVar2 | 0x80;
                          *(undefined4 *)(iVar16 + 0x16c) = *(undefined4 *)(iVar21 + 0x3c);
                          *(undefined4 *)(iVar16 + 0x170) = *(undefined4 *)(iVar21 + 0x40);
                        }
                        if (uVar27 != 2) goto LAB_000809c4;
LAB_000809e2:
                        if ((int)(param_3 << 0x1c) < 0) {
                          *(byte *)(iVar16 + 0x287) = bVar2 | 0x80;
                          *(undefined4 *)(iVar16 + 0x29c) = *(undefined4 *)(iVar21 + 0x3c);
                          *(undefined4 *)(iVar16 + 0x2a0) = *(undefined4 *)(iVar21 + 0x40);
                        }
LAB_000809fa:
                        *(byte *)(iVar21 + 0x27) = (byte)(1 << uVar27) | bVar1 & 0xf;
                        uVar27 = 0;
                        goto LAB_000804ee;
                      }
                    }
                  }
                  else if ((-1 < (int)(param_3 << 0x1f)) ||
                          (((*(int *)(iVar16 + 0x98) - 2U < 2 &&
                            (*(int *)(iVar16 + 0xe0) == *(int *)(iVar21 + 0x48))) &&
                           ((*(byte *)(iVar16 + 0xbf) == 1 ||
                            ((uint)*(byte *)(iVar16 + 0xbf) == (uVar27 | 0x80))))))) {
                    if (uVar27 != 1) goto LAB_00080898;
LAB_000808cc:
                    if ((-1 < (int)(param_3 << 0x1d)) ||
                       (((*(int *)(iVar16 + 0x1c8) - 2U < 2 &&
                         (*(int *)(iVar16 + 0x210) == *(int *)(iVar21 + 0x48))) &&
                        ((*(byte *)(iVar16 + 0x1ef) == 4 ||
                         ((uint)*(byte *)(iVar16 + 0x1ef) == (uVar27 | 0x80))))))) {
                      if (uVar27 != 3) goto LAB_00080900;
LAB_00080934:
                      if ((int)(uVar19 << 0x1f) < 0) {
                        *(undefined1 *)(iVar16 + 0xbf) = 1;
                        uVar19 = (uint)*(byte *)(iVar21 + 0x27);
                      }
                      if (uVar27 != 1) goto LAB_0008094a;
LAB_00080960:
                      if ((int)(uVar19 << 0x1d) < 0) {
                        *(undefined1 *)(iVar16 + 0x1ef) = 4;
                      }
                      if (uVar27 != 3) {
                        uVar19 = (uint)*(byte *)(iVar21 + 0x27);
                        goto LAB_00080976;
                      }
LAB_00080988:
                      if ((int)(param_3 << 0x1f) < 0) {
                        *(byte *)(iVar16 + 0xbf) = bVar2 | 0x80;
                        *(undefined4 *)(iVar16 + 0xd4) = *(undefined4 *)(iVar21 + 0x3c);
                        *(undefined4 *)(iVar16 + 0xd8) = *(undefined4 *)(iVar21 + 0x40);
                      }
                      if (uVar27 != 1) goto LAB_000809a6;
LAB_000809c4:
                      if ((int)(param_3 << 0x1d) < 0) {
                        *(byte *)(iVar16 + 0x1ef) = bVar2 | 0x80;
                        *(undefined4 *)(iVar16 + 0x204) = *(undefined4 *)(iVar21 + 0x3c);
                        *(undefined4 *)(iVar16 + 0x208) = *(undefined4 *)(iVar21 + 0x40);
                      }
                      if (uVar27 != 3) goto LAB_000809e2;
                      goto LAB_000809fa;
                    }
                  }
                }
              }
              else if (param_2 < 0x7f) {
                if (param_2 != 0x78) goto LAB_00082662;
                if (uVar28 == 5) {
                  MaDevDrv_WriteIntermediateReg(0x55,'\0');
                  uVar27 = 0;
                  goto LAB_000804ee;
                }
              }
              else {
                if (param_2 != 0x7f) {
                  if (param_2 == 0x80) {
                    if ((int)((uint)*(byte *)(iVar21 + 0x34) << 0x18) < 0) {
                      uVar27 = MaDsp_3DCtrl(1,0x80,*(byte *)(iVar21 + 0x34) & 3,&local_9c);
                      if ((-1 < (int)uVar27) &&
                         (uVar27 = MaDsp_3DCtrl(1,0xa1,*(byte *)(iVar21 + 0x34) & 3,&local_88),
                         -1 < (int)uVar27)) {
                        *(char *)(iVar21 + 0x2e) = (char)local_88;
                      }
                    }
                    else {
                      uVar27 = 0xffffffff;
                    }
                    goto LAB_000804ee;
                  }
                  goto LAB_00082662;
                }
                if (((param_4 != (void *)0x0) &&
                    (-1 < (int)((uint)*(byte *)(iVar21 + 0x27) << 0x18))) && (uVar28 == 1)) {
                  *(uint *)param_4 = (uint)*(byte *)(iVar21 + 0x27) & ~(1 << uVar27);
                  uVar27 = 0;
                  goto LAB_000804ee;
                }
              }
              goto LAB_000804ea;
            }
            if (param_2 != 0x8e) goto LAB_0008254e;
          }
LAB_000821ba:
          if ((int)((uint)*(byte *)(iVar21 + 0x34) << 0x18) < 0) {
            uVar27 = MaDsp_3DCtrl(1,param_2,*(byte *)(iVar21 + 0x34) & 3,&local_9c);
          }
          else {
            uVar27 = 0xffffffff;
          }
          goto LAB_000804ee;
        }
        if (param_2 == 0x71) {
          if ((param_4 != (void *)0x0) && (uVar28 == 6)) {
            if (*(int *)(iVar23 + 0x24) == 0) goto LAB_000807bc;
            uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18);
            if (uVar27 < 4) {
              uVar27 = MaSrm_SetLastData(uVar27,param_4);
              if (-1 < (int)uVar27) {
                *(bool *)(iVar21 + 0x29) = *(int *)param_4 == 2;
              }
              goto LAB_000804ee;
            }
          }
        }
        else if (param_2 < 0x72) {
          if (param_2 == 0x67) {
            if (param_4 != (void *)0x0) {
              *(uint *)param_4 = (uint)*(byte *)(iVar21 + 0x23);
              uVar27 = 0;
              goto LAB_000804ee;
            }
          }
          else {
            if (0x66 < param_2) {
              if (param_2 == 0x70) goto LAB_000807a4;
              goto LAB_00082662;
            }
            if (-1 < (int)((uint)*(byte *)(iVar21 + 0x39) << 0x1e)) goto LAB_000807bc;
            if (param_3 < 0x80) {
              switch(uVar28) {
              case 0:
              case 1:
                iVar30 = DAT_00081cc4 + 0x816e2;
                bVar1 = (byte)(uVar27 << 4);
                local_5b = bVar1 + 5 | 0x80;
                local_6b = bVar1 + 1 | 0x80;
                local_67 = bVar1 + 2 | 0x80;
                local_47 = bVar1 + 10 | 0x80;
                local_6d = *(byte *)(iVar30 + param_3 + 0x28) | 0x80;
                local_63 = bVar1 + 3 | 0x80;
                local_5f = bVar1 + 4 | 0x80;
                local_57 = bVar1 + 6 | 0x80;
                local_53 = bVar1 + 7 | 0x80;
                local_6f = bVar1 | 0x80;
                local_43 = bVar1 + 0xb | 0x80;
                local_4b = bVar1 + 9 | 0x80;
                local_4f = bVar1 + 8 | 0x80;
                local_3f = bVar1 + 0xc | 0x80;
                local_70 = 0x8b;
                local_6c = 0x8b;
                local_68 = 0x8b;
                local_64 = 0x8b;
                local_60 = 0x8b;
                local_5c = 0x8b;
                local_58 = 0x8b;
                local_54 = 0x8b;
                local_6e = 0x96;
                local_6a = 0x96;
                local_66 = 0x96;
                local_62 = 0x96;
                local_5e = 0x96;
                local_5a = 0x96;
                local_56 = 0x96;
                local_50 = 0x8b;
                local_4c = 0x8b;
                local_48 = 0x8b;
                local_44 = 0x8b;
                local_40 = 0x8b;
                local_3c = 0x8b;
                local_38 = 0x8b;
                local_34 = 0x8b;
                local_3b = bVar1 + 0xd | 0x80;
                local_52 = 0x96;
                local_4e = 0x96;
                local_4a = 0x96;
                local_46 = 0x96;
                local_42 = 0x96;
                local_3e = 0x96;
                local_3a = 0x96;
                local_36 = 0x96;
                local_32 = 0x96;
                local_37 = bVar1 + 0xe | 0x80;
                local_33 = bVar1 + 0xf | 0x80;
                local_69 = local_6d;
                local_65 = local_6d;
                local_61 = local_6d;
                local_5d = local_6d;
                local_59 = local_6d;
                local_55 = local_6d;
                local_51 = local_6d;
                local_4d = local_6d;
                local_49 = local_6d;
                local_45 = local_6d;
                local_41 = local_6d;
                local_3d = local_6d;
                local_39 = local_6d;
                local_35 = local_6d;
                local_31 = local_6d;
                uVar27 = MaDevDrv_SendDirectPacket(&local_70,0x40);
                iVar17 = *(int *)(iVar23 + 0x24);
                if (iVar17 != 0) {
                  if ((*(byte *)(iVar17 + 0x18) < 4) && (*(byte *)(iVar17 + 0x10) == uVar19)) {
                    MaDevDrv_WriteIntermediateReg(0xa0,*(byte *)(iVar17 + 0x18));
                    MaDevDrv_WriteIntermediateReg
                              (0xa2,*(uchar *)(iVar30 + (local_9c & 0x7f) + 0x28));
                  }
                  iVar30 = DAT_000830d4;
                  if ((*(byte *)(iVar17 + 0x2c) < 4) && (*(byte *)(iVar17 + 0x24) == uVar19)) {
                    MaDevDrv_WriteIntermediateReg(0xa0,*(byte *)(iVar17 + 0x2c));
                    MaDevDrv_WriteIntermediateReg
                              (0xa2,*(uchar *)((local_9c & 0x7f) + iVar30 + 0x82f32));
                  }
                }
                *(byte *)(iVar21 + 0x23) = (byte)local_9c & 0x7f;
                break;
              case 2:
              case 6:
                if ((*(int *)(iVar23 + 0x24) != 0) &&
                   (bVar1 = *(byte *)(*(int *)(iVar23 + 0x24) + 0x18), bVar1 < 4)) {
                  MaDevDrv_WriteIntermediateReg(0xa0,bVar1);
                  MaDevDrv_WriteIntermediateReg
                            (0xa2,*(uchar *)((local_9c & 0x7f) + iVar5 + 0x816dc));
                  *(byte *)(iVar21 + 0x23) = (byte)local_9c & 0x7f;
                  uVar27 = 0;
                  break;
                }
                goto LAB_000804ea;
              case 3:
                MaDevDrv_WriteIntermediateReg(0xa6,*(uchar *)(param_3 + DAT_00081cbc + 0x816a6));
                *(byte *)(iVar21 + 0x23) = (byte)local_9c & 0x7f;
                uVar27 = 0;
                break;
              case 4:
                if (uVar27 == 0) {
                  MaDevDrv_WriteIntermediateReg(0x62,*(uchar *)(param_3 + DAT_00081cb8 + 0x81682));
                }
                else {
                  MaDevDrv_WriteIntermediateReg(0xeb,*(uchar *)(param_3 + DAT_000830c4 + 0x82d08));
                }
                *(byte *)(iVar21 + 0x23) = (byte)local_9c & 0x7f;
                uVar27 = 0;
                break;
              default:
                uVar27 = 0xfffffffe;
              }
              goto LAB_000804ee;
            }
          }
        }
        else if (param_2 == 0x73) {
          if (param_4 != (void *)0x0) {
            if (uVar28 == 6) {
              if ((*(int *)(iVar23 + 0x24) != 0) &&
                 (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), uVar27 < 4)) {
                uVar10 = MaSrm_GetWritePoint(uVar27);
                *(undefined4 *)param_4 = uVar10;
                uVar27 = 0;
                goto LAB_000804ee;
              }
            }
            else if (uVar28 == 7) {
              *(undefined4 *)param_4 = *(undefined4 *)(DAT_00080fa8 + 0x813fe);
              uVar27 = 0;
              goto LAB_000804ee;
            }
          }
        }
        else if (param_2 < 0x73) {
          if ((((param_4 != (void *)0x0) && (uVar28 == 6)) && (*(int *)(iVar23 + 0x24) != 0)) &&
             (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), uVar27 < 4)) {
            uVar10 = MaSrm_GetReadPoint(uVar27);
            *(undefined4 *)param_4 = uVar10;
            uVar27 = 0;
            goto LAB_000804ee;
          }
        }
        else if (param_2 == 0x74) {
          if ((iVar29 != 4) && (param_4 != (void *)0x0)) {
            if (uVar28 == 6) {
              if ((*(int *)(iVar23 + 0x24) != 0) &&
                 (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), uVar27 < 4)) {
                uVar27 = MaSrm_SetNotifyPosition(uVar27,param_4);
                goto LAB_000804ee;
              }
            }
            else if (uVar28 == 7) {
              uVar27 = *(uint *)param_4;
              if (uVar27 < 5) {
                local_88 = *(void **)((int)param_4 + 4);
                local_84 = *(void **)((int)param_4 + 8);
                pvVar22 = *(void **)((int)param_4 + 0xc);
                local_7c = *(void **)((int)param_4 + 0x10);
                *(undefined1 *)(DAT_00081cdc + 0x82724) = 0;
                *(undefined1 *)(iVar6 + 0x8272c) = 0;
                *(undefined1 *)(iVar6 + 0x82734) = 0;
                *(undefined1 *)(iVar6 + 0x8273c) = 0;
                iVar30 = DAT_000830e4;
                iVar17 = DAT_00081ce0;
                local_80 = pvVar22;
                if (uVar27 != 0) {
                  pvVar9 = *(void **)(iVar6 + 0x82714);
                  if (pvVar9 < local_88) goto LAB_00082d9c;
                  pvVar14 = local_88;
                  if (1 < uVar27) {
                    if ((pvVar9 < local_84) ||
                       ((2 < uVar27 && ((pvVar9 < pvVar22 || ((3 < uVar27 && (pvVar9 < local_7c)))))
                        ))) goto LAB_00082d9c;
                    pvVar9 = local_88;
                    if (local_84 < local_88) {
                      pvVar9 = local_84;
                      local_84 = local_88;
                    }
                    if (uVar27 < 3) {
                      *(void **)(DAT_000830e4 + 0x83c5c) = pvVar9;
                      *(undefined1 *)(iVar30 + 0x83c60) = 1;
                      pvVar14 = local_84;
                    }
                    else {
                      if (pvVar22 < pvVar9) {
                        local_80 = pvVar9;
                        pvVar9 = pvVar22;
                      }
                      pvVar22 = pvVar9;
                      if ((3 < uVar27) && (local_7c < pvVar9)) {
                        pvVar22 = local_7c;
                        local_7c = pvVar9;
                      }
                      *(void **)(DAT_00081ce0 + 0x827b0) = pvVar22;
                      *(undefined1 *)(iVar17 + 0x827b4) = 1;
                      iVar30 = DAT_000830e0;
                      iVar17 = DAT_00081ce4;
                      pvVar22 = local_84;
                      if (local_80 < local_84) {
                        pvVar22 = local_80;
                        local_80 = local_84;
                      }
                      if (uVar27 < 4) {
                        *(void **)(DAT_000830e0 + 0x83c4e) = pvVar22;
                        *(undefined1 *)(iVar30 + 0x83c52) = 1;
                        pvVar14 = local_80;
                      }
                      else {
                        pvVar9 = pvVar22;
                        if (local_7c < pvVar22) {
                          pvVar9 = local_7c;
                          local_7c = pvVar22;
                        }
                        *(void **)(DAT_00081ce4 + 0x827ea) = pvVar9;
                        *(undefined1 *)(iVar17 + 0x827ee) = 1;
                        iVar17 = DAT_00081ce8;
                        pvVar22 = local_80;
                        if (local_7c < local_80) {
                          pvVar22 = local_7c;
                          local_7c = local_80;
                        }
                        *(void **)(DAT_00081ce8 + 0x8280c) = pvVar22;
                        *(undefined1 *)(iVar17 + 0x82810) = 1;
                        pvVar14 = local_7c;
                      }
                    }
                  }
                  iVar17 = DAT_00081cec + 0x81c3a + (uVar27 + 1) * 8;
                  *(void **)(iVar17 + 0xbc4) = pvVar14;
                  *(undefined1 *)(iVar17 + 0xbc8) = 1;
                }
                *(undefined1 *)(DAT_00081cf0 + 0x82820) = 0;
                uVar27 = 0;
              }
              else {
LAB_00082d9c:
                uVar27 = 0xfffffffe;
              }
              goto LAB_000804ee;
            }
          }
        }
        else {
          if (param_2 != 0x75) goto LAB_00082662;
          if ((((param_4 != (void *)0x0 && param_1 == 0x400) && (*(uint *)param_4 < 2)) &&
              (*(uint *)((int)param_4 + 4) < 3)) &&
             (((*(uint *)((int)param_4 + 8) < 3 &&
               (uVar27 = *(uint *)((int)param_4 + 0xc), uVar27 < 0xb)) &&
              (((uVar27 & 0xfffffffb) != 3 &&
               ((*(uint *)((int)param_4 + 0x10) < 3 && (*(uint *)((int)param_4 + 0x14) < 2)))))))) {
            if (iVar29 != 2) {
              uVar27 = 0xffffffff;
              goto LAB_000804ee;
            }
            MaDevDrv_WriteIntermediateReg
                      (0x5a,(byte)((*(uint *)((int)param_4 + 8) & 3) << 4) | (byte)uVar27 |
                            (byte)((~*(uint *)param_4 & 1) << 6));
            MaDevDrv_WriteIntermediateReg(0x5c,(byte)*(undefined4 *)((int)param_4 + 4) & 3);
            MaDevDrv_WriteIntermediateReg
                      (0x56,(uchar)((ushort)*(undefined2 *)
                                             (iVar17 + 0x8045c + *(int *)((int)param_4 + 0xc) * 2 +
                                             -0x9c) >> 8));
            MaDevDrv_WriteIntermediateReg
                      (0x57,*(uchar *)(iVar17 + 0x8045c + *(int *)((int)param_4 + 0xc) * 2 + -0x9c))
            ;
            if (*(int *)(DAT_00080f98 + 0x80496) - 0x21U < 4) {
              uVar27 = MaDevDrv_ReadIntermediateReg(0xf4);
              local_88 = (void *)(uVar27 & 0x30 | *(uint *)((int)param_4 + 0x10));
              if (*(int *)((int)param_4 + 0x14) == 1) {
                local_88 = (void *)((uint)local_88 | 4);
              }
              MaDevDrv_WriteIntermediateReg(0xf4,(uchar)local_88);
              uVar27 = 0;
              goto LAB_000804ee;
            }
            goto LAB_00080498;
          }
        }
      }
    }
    else {
      if (param_2 == 0xa4) {
        if (*(char *)(iVar21 + 0x34) < '\0') {
          if (iVar29 == 4) {
            FUN_00075e28(uVar28,uVar27);
            uVar27 = MaDsp_3DCtrl(1,0xa4,*(byte *)(iVar21 + 0x34) & 3,(void *)0x0);
            *(undefined1 *)(iVar21 + 0x30) = 0;
          }
          else {
            *(undefined1 *)(iVar21 + 0x30) = 1;
            uVar27 = 0;
          }
        }
        else {
          uVar27 = 0xffffffff;
        }
        goto LAB_000804ee;
      }
      if (param_2 < 0xa5) {
        if (param_2 < 0xa0) {
          if ((param_2 < 0x93) && (param_2 != 0x91)) {
            if (param_2 == 0x92) goto LAB_000821ba;
            goto LAB_00082662;
          }
        }
        else if (param_2 != 0xa1) {
          if (param_2 < 0xa1) {
            if (-1 < (int)((uint)*(byte *)(iVar21 + 0x34) << 0x18)) {
              uVar27 = 0xffffffff;
              goto LAB_000804ee;
            }
            if (param_3 < 4) {
              uVar27 = MaDsp_3DCtrl(1,0xa0,*(byte *)(iVar21 + 0x34) & 3,&local_9c);
              if (-1 < (int)uVar27) {
                *(char *)(iVar21 + 0x2e) = (char)local_9c;
              }
              goto LAB_000804ee;
            }
          }
          else {
            if (param_2 != 0xa2) {
              if (param_2 != 0xa3) goto LAB_00082662;
              goto LAB_0008254e;
            }
            if (param_4 != (void *)0x0) {
              if ((int)((uint)*(byte *)(iVar21 + 0x34) << 0x18) < 0) {
                uVar27 = MaDsp_3DCtrl(1,0xa2,*(byte *)(iVar21 + 0x34) & 3,param_4);
                if (((-1 < (int)uVar27) && (*(int *)param_4 << 0x14 < 0)) &&
                   (*(uint *)((int)param_4 + 0x4c) < 4)) {
                  *(char *)(iVar21 + 0x2e) = (char)*(uint *)((int)param_4 + 0x4c);
                }
              }
              else {
                uVar27 = 0xffffffff;
              }
              goto LAB_000804ee;
            }
          }
          goto LAB_000804ea;
        }
      }
      else {
        if (param_2 == 0x10000000) {
          uVar27 = (**(code **)(DAT_00082990 + *(int *)(iVar21 + 4) * 0x28 + 0x82582))
                             (DAT_00082994 + 0x8253c + uVar19 * 8,0x10000000,param_3,param_4);
          goto LAB_000804ee;
        }
        if (0x10000000 < param_2) {
          if (param_2 == 0x30000000) {
            iVar21 = iVar21 + (*(uint *)param_4 & 3);
            uVar27 = MaDsp_3DCtrl(1,0x86,*(byte *)(iVar21 + 0x34) & 3,(void *)((int)param_4 + 8));
            if ((-1 < (int)uVar27) &&
               (uVar27 = MaDsp_3DCtrl(1,0x81,*(byte *)(iVar21 + 0x34) & 3,(void *)((int)param_4 + 4)
                                     ), -1 < (int)uVar27)) {
              uVar27 = MaDsp_3DCtrl(1,0xa4,*(byte *)(iVar21 + 0x34) & 3,(void *)0x0);
            }
            goto LAB_000804ee;
          }
          if (param_2 < 0x30000001) {
            if (param_2 == 0x20000000) {
              uVar28 = param_3 & 0xffff;
              if (uVar28 == 0) {
                uVar27 = MaCmd_3DResetChannel(uVar27,-1,param_3 >> 0x10,&local_70);
              }
              else {
                if (3 < uVar28 - 2) {
                  uVar27 = 0;
                  goto LAB_000804ee;
                }
                uVar27 = MaCmd_3DSetChannel(uVar27,-1,param_3 >> 0x10,
                                            *(byte *)(uVar28 + iVar21 + 0x32) & 3,&local_70);
              }
              if (0 < (int)uVar27) {
                uVar27 = MaDevDrv_SendDirectPacket(&local_70,uVar27);
              }
              goto LAB_000804ee;
            }
          }
          else {
            if (param_2 == 0x40000000) {
              uVar27 = FUN_00074728(param_1,0x23,0xffffffff,0,(param_3 & 0x1fff) >> 8,param_3 & 0xff
                                   );
              goto LAB_000804ee;
            }
            if (param_2 == 0x50000000) {
              uVar27 = MaSndDrv_SetHvVoice((_MACNV_SEQ_INFO *)(DAT_00080f9c + 0x805aa + uVar19 * 8),
                                           param_3,*(uchar **)param_4,*(uint *)((int)param_4 + 4));
              goto LAB_000804ee;
            }
          }
          goto LAB_00082662;
        }
        if (param_2 != 0xb2) {
          if (0xb2 < param_2) {
            if (param_2 == 0xc0) {
              if (param_4 != (void *)0x0) {
                uVar27 = MaDsp_3DCtrl(1,0xb0,*(byte *)(iVar21 + (param_3 & 3) + 0x34) & 3,param_4);
                goto LAB_000804ee;
              }
            }
            else {
              if (param_2 != 0x100) goto LAB_00082662;
              if (param_4 != (void *)0x0) {
                if (param_3 - 0x400 < 4) {
                  iVar17 = DAT_00081cb4 + 0x815d2 + uVar27 * 0x398 + (param_3 - 0x400) * 0x14;
                  uVar10 = *(undefined4 *)(iVar17 + 0x1188);
                  uVar15 = *(undefined4 *)(iVar17 + 0x118c);
                  uVar18 = *(undefined4 *)(iVar17 + 0x1190);
                  *(undefined4 *)param_4 = *(undefined4 *)(iVar17 + 0x1184);
                  *(undefined4 *)((int)param_4 + 4) = uVar10;
                  *(undefined4 *)((int)param_4 + 8) = uVar15;
                  *(undefined4 *)((int)param_4 + 0xc) = uVar18;
                  *(undefined4 *)((int)param_4 + 0x10) = *(undefined4 *)(iVar17 + 0x1194);
                  *(uint *)param_4 =
                       *(uint *)param_4 |
                       (*(byte *)(iVar21 + (*(uint *)(iVar17 + 0x1184) & 3) + 0x34) & 3) << 0x10;
                  uVar27 = 0;
                }
                else {
                  uVar27 = (**(code **)(DAT_00083098 + *(int *)(iVar21 + 4) * 0x28 + 0x82a84))
                                     (DAT_0008309c + 0x82a3e + uVar19 * 8,0x100,param_3 & 0x3ff,
                                      param_4);
                  *(uint *)param_4 =
                       *(uint *)param_4 |
                       (*(byte *)(iVar21 + (*(uint *)param_4 & 3) + 0x34) & 3) << 0x10;
                }
                goto LAB_000804ee;
              }
            }
            goto LAB_000804ea;
          }
          if (param_2 != 0xb0) goto LAB_00082662;
        }
      }
LAB_0008254e:
      if (param_4 != (void *)0x0) {
        if ((int)((uint)*(byte *)(iVar21 + 0x34) << 0x18) < 0) {
          uVar27 = MaDsp_3DCtrl(1,param_2,*(byte *)(iVar21 + 0x34) & 3,param_4);
        }
        else {
          uVar27 = 0xffffffff;
        }
        goto LAB_000804ee;
      }
    }
    goto LAB_000804ea;
  }
  if (param_2 == 0x2f) {
    if (param_4 != (void *)0x0) {
      if ((uVar28 & 0xfffffffb) != 2) {
        *(uint *)param_4 = (uint)*(byte *)(iVar21 + 0x1e);
        uVar27 = 0;
        goto LAB_000804ee;
      }
      if ((*(int *)(iVar23 + 0x24) != 0) &&
         (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), uVar27 < 4)) {
        uVar27 = MaSrm_GetPan(uVar27);
        if (-1 < (int)uVar27) {
          *(uint *)param_4 = uVar27;
          uVar27 = 0;
        }
        goto LAB_000804ee;
      }
    }
    goto LAB_000804ea;
  }
  if (0x2f < param_2) {
    if (param_2 == 0x38) {
      if ((*(int *)(iVar21 + 4) == 2) && (param_3 == 0 || param_3 == 0x14)) {
        *(byte *)(iVar21 + 0xc) = bVar1;
        uVar27 = 0;
        goto LAB_000804ee;
      }
      goto LAB_000804ea;
    }
    if (param_2 < 0x39) {
      if (param_2 < 0x34) {
        if (param_2 < 0x32) {
          if (param_2 == 0x30) {
            if ((int)param_3 < 0xd && -0xd < (int)param_3) {
              if (uVar28 < 2) {
                (**(code **)(DAT_000830b0 + *(int *)(iVar21 + 4) * 0x28 + 0x82c2a))
                          (DAT_000830b4 + 0x82be4 + uVar19 * 8,0x30,param_3,param_4);
                iVar17 = DAT_000830b8 + 0x82bfc + (local_9c + 0xc) * 2;
                uVar27 = MaCmd_SetKeyControl(uVar27,(uint)*(byte *)(iVar17 + -0xd0),
                                             (uint)*(byte *)(iVar17 + -0xcf),&local_70);
                if ((-1 < (int)uVar27) &&
                   (uVar27 = MaDevDrv_SendDirectPacket(&local_70,uVar27), uVar27 == 0)) {
                  *(char *)(iVar21 + 0x24) = (char)local_9c;
                }
              }
              else if (uVar28 == 3) {
                (**(code **)(DAT_00081ca0 + *(int *)(iVar21 + 4) * 0x28 + 0x814c8))
                          (DAT_00081ca4 + 0x81482 + uVar19 * 8,0x30,param_3,param_4);
                iVar17 = DAT_00081ca8 + 0x8149a + (local_9c + 0xc) * 2;
                uVar27 = MaCmd_SetKeyControl(8,(uint)*(byte *)(iVar17 + -0xd0),
                                             (uint)*(byte *)(iVar17 + -0xcf),&local_70);
                if ((-1 < (int)uVar27) &&
                   (uVar27 = MaDevDrv_SendDirectPacket(&local_70,uVar27), uVar27 == 0)) {
                  *(char *)(iVar21 + 0x24) = (char)local_9c;
                }
              }
              else {
                uVar27 = 0xfffffffe;
              }
              goto LAB_000804ee;
            }
          }
          else {
            if (param_2 != 0x31) goto LAB_00082662;
            if (param_4 != (void *)0x0) {
              *(int *)param_4 = (int)*(char *)(iVar21 + 0x24);
              uVar27 = 0;
              goto LAB_000804ee;
            }
          }
        }
        else if ((param_4 != (void *)0x0) &&
                (pcVar24 = *(code **)(DAT_00081cc8 + *(int *)(iVar21 + 4) * 0x28 + 0x8194e),
                pcVar24 != (code *)0x0)) {
          uVar27 = (*pcVar24)(DAT_00081ccc + 0x81920 + uVar19 * 8,param_2,0,param_4);
          goto LAB_000804ee;
        }
      }
      else {
        if (param_2 != 0x35) {
          if (0x34 < param_2) {
            if (param_2 == 0x36) {
              pcVar24 = *(code **)(DAT_00082968 + *(int *)(iVar21 + 4) * 0x28 + 0x81d56);
              if (pcVar24 != (code *)0x0) {
                uVar27 = (*pcVar24)(DAT_0008296c + 0x81d26 + uVar19 * 8,0x36,param_3,&local_88);
                if ((int)uVar27 < 0) goto LAB_000804ee;
                local_98[0] = 0;
                local_90 = 0;
                if (uVar28 != 0) {
                  uVar27 = FUN_00074728(param_1,local_88,0xffffffff,local_80,local_7c,local_78);
                  goto LAB_000804ee;
                }
                MaResMgr_AllocBuf((_MARESMGRALLOCBUF *)local_98);
                if (local_98[0] != 0) {
                  uVar27 = 0;
                  if (*(int *)(iVar21 + 0x70) != 0) {
                    do {
                      uVar28 = uVar27 + 1;
                      *(undefined1 *)(local_98[0] + uVar27) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar27);
                      if (*(uint *)(iVar21 + 0x70) <= uVar28) break;
                      uVar19 = uVar27 + 2;
                      *(undefined1 *)(local_98[0] + uVar28) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar28);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar28 = uVar27 + 3;
                      *(undefined1 *)(local_98[0] + uVar19) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar28) break;
                      uVar19 = uVar27 + 4;
                      *(undefined1 *)(local_98[0] + uVar28) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar28);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar28 = uVar27 + 5;
                      *(undefined1 *)(local_98[0] + uVar19) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar28) break;
                      uVar19 = uVar27 + 6;
                      *(undefined1 *)(local_98[0] + uVar28) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar28);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar28 = uVar27 + 7;
                      *(undefined1 *)(local_98[0] + uVar19) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar28) break;
                      uVar27 = uVar27 + 8;
                      *(undefined1 *)(local_98[0] + uVar28) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar28);
                    } while (uVar27 < *(uint *)(iVar21 + 0x70));
                  }
                  uVar27 = FUN_00074728(param_1,local_88,0xffffffff,local_80,local_7c,local_78);
                  if (*(int *)(iVar21 + 0x70) != 0) {
                    uVar28 = 0;
                    do {
                      uVar19 = uVar28 + 1;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar28) =
                           *(undefined1 *)(local_98[0] + uVar28);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar26 = uVar28 + 2;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19) =
                           *(undefined1 *)(local_98[0] + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar26) break;
                      uVar19 = uVar28 + 3;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar26) =
                           *(undefined1 *)(local_98[0] + uVar26);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar26 = uVar28 + 4;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19) =
                           *(undefined1 *)(local_98[0] + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar26) break;
                      uVar19 = uVar28 + 5;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar26) =
                           *(undefined1 *)(local_98[0] + uVar26);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar26 = uVar28 + 6;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19) =
                           *(undefined1 *)(local_98[0] + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar26) break;
                      uVar19 = uVar28 + 7;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar26) =
                           *(undefined1 *)(local_98[0] + uVar26);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar28 = uVar28 + 8;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19) =
                           *(undefined1 *)(local_98[0] + uVar19);
                    } while (uVar28 < *(uint *)(iVar21 + 0x70));
                  }
                  MaResMgr_FreeBuf((uint)local_90);
                  goto LAB_000804ee;
                }
              }
            }
            else {
              if (param_2 != 0x37) goto LAB_00082662;
              if (param_4 == (void *)0x0) goto LAB_000804ea;
              pcVar24 = *(code **)(DAT_00080fa0 + *(int *)(iVar21 + 4) * 0x28 + 0x8063c);
              if (pcVar24 != (code *)0x0) {
                local_88 = param_4;
                uVar27 = (*pcVar24)(DAT_00080fa4 + 0x8060e + uVar19 * 8,0x37,param_3,&local_88);
                if ((int)uVar27 < 0) goto LAB_000804ee;
                local_98[0] = 0;
                local_90 = 0;
                if (uVar28 != 0) {
                  uVar27 = FUN_00074728(param_1,local_84,0xffffffff,local_7c,local_78,local_74);
                  goto LAB_000804ee;
                }
                MaResMgr_AllocBuf((_MARESMGRALLOCBUF *)local_98);
                if (local_98[0] != 0) {
                  uVar27 = 0;
                  if (*(int *)(iVar21 + 0x70) != 0) {
                    do {
                      uVar28 = uVar27 + 1;
                      *(undefined1 *)(local_98[0] + uVar27) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar27);
                      if (*(uint *)(iVar21 + 0x70) <= uVar28) break;
                      uVar19 = uVar27 + 2;
                      *(undefined1 *)(local_98[0] + uVar28) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar28);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar28 = uVar27 + 3;
                      *(undefined1 *)(local_98[0] + uVar19) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar28) break;
                      uVar19 = uVar27 + 4;
                      *(undefined1 *)(local_98[0] + uVar28) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar28);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar28 = uVar27 + 5;
                      *(undefined1 *)(local_98[0] + uVar19) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar28) break;
                      uVar19 = uVar27 + 6;
                      *(undefined1 *)(local_98[0] + uVar28) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar28);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar28 = uVar27 + 7;
                      *(undefined1 *)(local_98[0] + uVar19) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar28) break;
                      uVar27 = uVar27 + 8;
                      *(undefined1 *)(local_98[0] + uVar28) =
                           *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar28);
                    } while (uVar27 < *(uint *)(iVar21 + 0x70));
                  }
                  uVar27 = FUN_00074728(param_1,local_84,0xffffffff,local_7c,local_78,local_74);
                  if (*(int *)(iVar21 + 0x70) != 0) {
                    uVar28 = 0;
                    do {
                      uVar19 = uVar28 + 1;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar28) =
                           *(undefined1 *)(local_98[0] + uVar28);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar26 = uVar28 + 2;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19) =
                           *(undefined1 *)(local_98[0] + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar26) break;
                      uVar19 = uVar28 + 3;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar26) =
                           *(undefined1 *)(local_98[0] + uVar26);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar26 = uVar28 + 4;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19) =
                           *(undefined1 *)(local_98[0] + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar26) break;
                      uVar19 = uVar28 + 5;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar26) =
                           *(undefined1 *)(local_98[0] + uVar26);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar26 = uVar28 + 6;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19) =
                           *(undefined1 *)(local_98[0] + uVar19);
                      if (*(uint *)(iVar21 + 0x70) <= uVar26) break;
                      uVar19 = uVar28 + 7;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar26) =
                           *(undefined1 *)(local_98[0] + uVar26);
                      if (*(uint *)(iVar21 + 0x70) <= uVar19) break;
                      uVar28 = uVar28 + 8;
                      *(undefined1 *)(*(int *)(iVar21 + 0x6c) + uVar19) =
                           *(undefined1 *)(local_98[0] + uVar19);
                    } while (uVar28 < *(uint *)(iVar21 + 0x70));
                  }
                  MaResMgr_FreeBuf((uint)local_90);
                  goto LAB_000804ee;
                }
              }
            }
LAB_000807bc:
            uVar27 = 0xffffffff;
            goto LAB_000804ee;
          }
          if (*(char *)(iVar21 + 0x27) < '\0') {
            if (uVar28 != 1) {
              *(uint *)(iVar21 + 0x3c) = param_3;
              *(uint *)(iVar21 + 0x40) = param_3;
              uVar27 = 0;
              goto LAB_000804ee;
            }
            goto LAB_000804ea;
          }
          *(uint *)(iVar21 + 0x3c) = param_3;
          *(uint *)(iVar21 + 0x40) = param_3;
          if (uVar28 == 1) {
            uVar28 = (uint)*(byte *)(iVar21 + 0x27);
            if (uVar27 == 0) {
LAB_00081e38:
              if ((int)(uVar28 << 0x1e) < 0) {
                *(undefined4 *)(iVar16 + 0x16c) = *(undefined4 *)(iVar21 + 0x3c);
                *(undefined4 *)(iVar16 + 0x170) = *(undefined4 *)(iVar21 + 0x40);
                uVar28 = (uint)*(byte *)(iVar21 + 0x27);
              }
              if (uVar27 != 2) goto LAB_00081e54;
            }
            else {
              if ((int)(uVar28 << 0x1f) < 0) {
                *(uint *)(iVar16 + 0xd4) = param_3;
                *(undefined4 *)(iVar16 + 0xd8) = *(undefined4 *)(iVar21 + 0x40);
                uVar28 = (uint)*(byte *)(iVar21 + 0x27);
              }
              if (uVar27 != 1) goto LAB_00081e38;
LAB_00081e54:
              if ((int)(uVar28 << 0x1d) < 0) {
                *(undefined4 *)(iVar16 + 0x204) = *(undefined4 *)(iVar21 + 0x3c);
                *(undefined4 *)(iVar16 + 0x208) = *(undefined4 *)(iVar21 + 0x40);
              }
              if (uVar27 == 3) goto LAB_00080498;
              uVar28 = (uint)*(byte *)(iVar21 + 0x27);
            }
            if ((int)(uVar28 << 0x1c) < 0) {
              *(undefined4 *)(iVar16 + 0x29c) = *(undefined4 *)(iVar21 + 0x3c);
              *(undefined4 *)(iVar16 + 0x2a0) = *(undefined4 *)(iVar21 + 0x40);
            }
          }
LAB_00080498:
          uVar27 = 0;
          goto LAB_000804ee;
        }
        if (uVar28 < 2) {
          if ((param_3 <= *(uint *)(iVar21 + 0x48)) &&
             (pcVar24 = *(code **)(DAT_000829a0 + *(int *)(iVar21 + 4) * 0x28 + 0x828ac),
             pcVar24 != (code *)0x0)) {
            uVar27 = (*pcVar24)(DAT_000829a4 + 0x8287c + uVar19 * 8,0x35,param_3,0);
            goto LAB_000804ee;
          }
        }
        else {
          if (uVar28 != 2) {
            uVar27 = 0xfffffffe;
            goto LAB_000804ee;
          }
          if (((param_3 <= *(uint *)(iVar21 + 0x48)) && (*(int *)(iVar23 + 0x24) != 0)) &&
             (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), uVar27 < 4)) {
            MaSrm_SetEndPoint(uVar27,param_3);
            uVar27 = 0;
            goto LAB_000804ee;
          }
        }
      }
    }
    else if (param_2 == 0x60) {
      if (param_4 != (void *)0x0) {
        if (*(char *)(iVar21 + 0x38) != '\x02') goto LAB_000807bc;
        if (*(int *)param_4 == 0) {
          uVar27 = MaDsp_SfxCtrl(0,0x2011e,*(uint *)((int)param_4 + 4),*(void **)((int)param_4 + 8))
          ;
          goto LAB_000804ee;
        }
        if (*(int *)param_4 == 1) {
          uVar27 = MaDsp_SfxCtrl(0,0x2013e,*(uint *)((int)param_4 + 4),*(void **)((int)param_4 + 8))
          ;
          goto LAB_000804ee;
        }
      }
    }
    else if (param_2 < 0x61) {
      if (param_2 == 0x50) {
        if ((param_4 != (void *)0x0) &&
           (pcVar24 = *(code **)(DAT_00081cd4 + *(int *)(iVar21 + 4) * 0x28 + 0x81ac6),
           pcVar24 != (code *)0x0)) {
          uVar27 = (*pcVar24)(DAT_00081cd8 + 0x81a96 + uVar19 * 8,0x50,param_3,param_4);
          goto LAB_000804ee;
        }
      }
      else if (param_2 < 0x51) {
        if (1 < param_2 - 0x40) {
LAB_00082662:
          uVar27 = 0xfffffffe;
          goto LAB_000804ee;
        }
        if ((param_4 != (void *)0x0) &&
           (pcVar24 = *(code **)(DAT_00081cac + *(int *)(iVar21 + 4) * 0x28 + 0x8154c),
           pcVar24 != (code *)0x0)) {
          uVar27 = (*pcVar24)(DAT_00081cb0 + 0x8151c + uVar19 * 8,param_2,param_3,param_4);
          goto LAB_000804ee;
        }
      }
      else {
        if (param_2 != 0x51) goto LAB_00082662;
        if ((param_4 != (void *)0x0) &&
           (pcVar24 = *(code **)(DAT_00082998 + *(int *)(iVar21 + 4) * 0x28 + 0x825ec),
           pcVar24 != (code *)0x0)) {
          uVar27 = (*pcVar24)(DAT_0008299c + 0x825bc + uVar19 * 8,0x51,param_3,param_4);
          goto LAB_000804ee;
        }
      }
    }
    else if (param_2 == 0x62) {
      if ((-1 < (int)((uint)*(byte *)(iVar21 + 0x38) << 0x1e)) &&
         (-1 < (int)((uint)*(byte *)(iVar21 + 0x39) << 0x1e))) goto LAB_000807bc;
      if (param_3 < 0x80) {
        switch(uVar28) {
        case 0:
        case 1:
          iVar30 = DAT_00080fd8 + 0x80d74;
          bVar1 = (byte)(uVar27 << 4);
          local_5b = bVar1 + 5 | 0x80;
          local_6b = bVar1 + 1 | 0x80;
          local_67 = bVar1 + 2 | 0x80;
          local_47 = bVar1 + 10 | 0x80;
          local_6d = *(byte *)(iVar30 + param_3 + 0x28) | 0x80;
          local_63 = bVar1 + 3 | 0x80;
          local_5f = bVar1 + 4 | 0x80;
          local_57 = bVar1 + 6 | 0x80;
          local_53 = bVar1 + 7 | 0x80;
          local_6f = bVar1 | 0x80;
          local_43 = bVar1 + 0xb | 0x80;
          local_4b = bVar1 + 9 | 0x80;
          local_4f = bVar1 + 8 | 0x80;
          local_3f = bVar1 + 0xc | 0x80;
          local_70 = 0x8b;
          local_6c = 0x8b;
          local_68 = 0x8b;
          local_64 = 0x8b;
          local_60 = 0x8b;
          local_5c = 0x8b;
          local_58 = 0x8b;
          local_54 = 0x8b;
          local_6e = 0x97;
          local_6a = 0x97;
          local_66 = 0x97;
          local_62 = 0x97;
          local_5e = 0x97;
          local_5a = 0x97;
          local_56 = 0x97;
          local_50 = 0x8b;
          local_4c = 0x8b;
          local_48 = 0x8b;
          local_44 = 0x8b;
          local_40 = 0x8b;
          local_3c = 0x8b;
          local_38 = 0x8b;
          local_34 = 0x8b;
          local_3b = bVar1 + 0xd | 0x80;
          local_52 = 0x97;
          local_4e = 0x97;
          local_4a = 0x97;
          local_46 = 0x97;
          local_42 = 0x97;
          local_3e = 0x97;
          local_3a = 0x97;
          local_36 = 0x97;
          local_32 = 0x97;
          local_37 = bVar1 + 0xe | 0x80;
          local_33 = bVar1 + 0xf | 0x80;
          local_69 = local_6d;
          local_65 = local_6d;
          local_61 = local_6d;
          local_5d = local_6d;
          local_59 = local_6d;
          local_55 = local_6d;
          local_51 = local_6d;
          local_4d = local_6d;
          local_49 = local_6d;
          local_45 = local_6d;
          local_41 = local_6d;
          local_3d = local_6d;
          local_39 = local_6d;
          local_35 = local_6d;
          local_31 = local_6d;
          uVar27 = MaDevDrv_SendDirectPacket(&local_70,0x40);
          iVar17 = *(int *)(iVar23 + 0x24);
          if (iVar17 != 0) {
            if ((*(byte *)(iVar17 + 0x18) < 4) && (*(byte *)(iVar17 + 0x10) == uVar19)) {
              MaDevDrv_WriteIntermediateReg(0xa0,*(byte *)(iVar17 + 0x18));
              MaDevDrv_WriteIntermediateReg(0xa3,*(uchar *)(iVar30 + (local_9c & 0x7f) + 0x28));
            }
            iVar30 = DAT_000830d8;
            if ((*(byte *)(iVar17 + 0x2c) < 4) && (*(byte *)(iVar17 + 0x24) == uVar19)) {
              MaDevDrv_WriteIntermediateReg(0xa0,*(byte *)(iVar17 + 0x2c));
              MaDevDrv_WriteIntermediateReg(0xa3,*(uchar *)((local_9c & 0x7f) + iVar30 + 0x82f54));
            }
          }
          *(byte *)(iVar21 + 0x21) = (byte)local_9c & 0x7f;
          break;
        case 2:
        case 6:
          if ((*(int *)(iVar23 + 0x24) != 0) &&
             (bVar1 = *(byte *)(*(int *)(iVar23 + 0x24) + 0x18), bVar1 < 4)) {
            MaDevDrv_WriteIntermediateReg(0xa0,bVar1);
            MaDevDrv_WriteIntermediateReg
                      (0xa3,*(uchar *)((int)&DAT_00080f90 + (local_9c & 0x7f) + iVar3));
            *(byte *)(iVar21 + 0x21) = (byte)local_9c & 0x7f;
            uVar27 = 0;
            break;
          }
          goto LAB_000804ea;
        case 3:
          MaDevDrv_WriteIntermediateReg(0xa7,*(uchar *)(param_3 + DAT_00080fd4 + 0x80d76));
          *(byte *)(iVar21 + 0x21) = (byte)local_9c & 0x7f;
          uVar27 = 0;
          break;
        case 4:
          if (uVar27 == 0) {
            MaDevDrv_WriteIntermediateReg(99,*(uchar *)(param_3 + DAT_00080fd0 + 0x80d52));
          }
          else {
            MaDevDrv_WriteIntermediateReg(0xec,*(uchar *)(param_3 + DAT_000830c0 + 0x82cf2));
          }
          *(byte *)(iVar21 + 0x21) = (byte)local_9c & 0x7f;
          uVar27 = 0;
          break;
        default:
          uVar27 = 0xfffffffe;
        }
        goto LAB_000804ee;
      }
    }
    else if (param_2 < 0x62) {
      if (param_4 != (void *)0x0) {
        if (*(char *)(iVar21 + 0x38) != '\x02') goto LAB_000807bc;
        if (*(int *)param_4 == 0) {
          uVar27 = MaDsp_SfxCtrl(1,0x2011e,*(uint *)((int)param_4 + 4),*(void **)((int)param_4 + 8))
          ;
          goto LAB_000804ee;
        }
        if (*(int *)param_4 == 1) {
          uVar27 = MaDsp_SfxCtrl(1,0x2013e,*(uint *)((int)param_4 + 4),*(void **)((int)param_4 + 8))
          ;
          goto LAB_000804ee;
        }
      }
    }
    else if (param_2 == 99) {
      if (param_4 != (void *)0x0) {
        *(uint *)param_4 = (uint)*(byte *)(iVar21 + 0x21);
        uVar27 = 0;
        goto LAB_000804ee;
      }
    }
    else {
      if (param_2 != 100) goto LAB_00082662;
      if (-1 < (int)((uint)*(byte *)(iVar21 + 0x38) << 0x1e)) goto LAB_000807bc;
      if (param_3 < 0x80) {
        switch(uVar28) {
        case 0:
        case 1:
          iVar30 = DAT_00081c8c + 0x8103c;
          bVar1 = (byte)(uVar27 << 4);
          local_5b = bVar1 + 5 | 0x80;
          local_6b = bVar1 + 1 | 0x80;
          local_67 = bVar1 + 2 | 0x80;
          local_47 = bVar1 + 10 | 0x80;
          local_6d = *(byte *)(iVar30 + param_3 + 0x28) | 0x80;
          local_63 = bVar1 + 3 | 0x80;
          local_5f = bVar1 + 4 | 0x80;
          local_57 = bVar1 + 6 | 0x80;
          local_53 = bVar1 + 7 | 0x80;
          local_6f = bVar1 | 0x80;
          local_43 = bVar1 + 0xb | 0x80;
          local_4b = bVar1 + 9 | 0x80;
          local_4f = bVar1 + 8 | 0x80;
          local_3f = bVar1 + 0xc | 0x80;
          local_70 = 0x8b;
          local_6c = 0x8b;
          local_68 = 0x8b;
          local_64 = 0x8b;
          local_60 = 0x8b;
          local_5c = 0x8b;
          local_58 = 0x8b;
          local_54 = 0x8b;
          local_6e = 0x95;
          local_6a = 0x95;
          local_66 = 0x95;
          local_62 = 0x95;
          local_5e = 0x95;
          local_5a = 0x95;
          local_56 = 0x95;
          local_50 = 0x8b;
          local_4c = 0x8b;
          local_48 = 0x8b;
          local_44 = 0x8b;
          local_40 = 0x8b;
          local_3c = 0x8b;
          local_38 = 0x8b;
          local_34 = 0x8b;
          local_3b = bVar1 + 0xd | 0x80;
          local_52 = 0x95;
          local_4e = 0x95;
          local_4a = 0x95;
          local_46 = 0x95;
          local_42 = 0x95;
          local_3e = 0x95;
          local_3a = 0x95;
          local_36 = 0x95;
          local_32 = 0x95;
          local_37 = bVar1 + 0xe | 0x80;
          local_33 = bVar1 + 0xf | 0x80;
          local_69 = local_6d;
          local_65 = local_6d;
          local_61 = local_6d;
          local_5d = local_6d;
          local_59 = local_6d;
          local_55 = local_6d;
          local_51 = local_6d;
          local_4d = local_6d;
          local_49 = local_6d;
          local_45 = local_6d;
          local_41 = local_6d;
          local_3d = local_6d;
          local_39 = local_6d;
          local_35 = local_6d;
          local_31 = local_6d;
          uVar27 = MaDevDrv_SendDirectPacket(&local_70,0x40);
          iVar17 = *(int *)(iVar23 + 0x24);
          if (iVar17 != 0) {
            if ((*(byte *)(iVar17 + 0x18) < 4) && (*(byte *)(iVar17 + 0x10) == uVar19)) {
              MaDevDrv_WriteIntermediateReg(0xa0,*(byte *)(iVar17 + 0x18));
              MaDevDrv_WriteIntermediateReg(0xa1,*(uchar *)(iVar30 + (local_9c & 0x7f) + 0x28));
            }
            iVar30 = DAT_000830dc;
            if ((*(byte *)(iVar17 + 0x2c) < 4) && (*(byte *)(iVar17 + 0x24) == uVar19)) {
              MaDevDrv_WriteIntermediateReg(0xa0,*(byte *)(iVar17 + 0x2c));
              MaDevDrv_WriteIntermediateReg(0xa1,*(uchar *)((local_9c & 0x7f) + iVar30 + 0x82fec));
            }
          }
          *(byte *)(iVar21 + 0x22) = (byte)local_9c & 0x7f;
          break;
        case 2:
        case 6:
          if ((*(int *)(iVar23 + 0x24) != 0) &&
             (bVar1 = *(byte *)(*(int *)(iVar23 + 0x24) + 0x18), bVar1 < 4)) {
            MaDevDrv_WriteIntermediateReg(0xa0,bVar1);
            MaDevDrv_WriteIntermediateReg(0xa1,*(uchar *)((local_9c & 0x7f) + iVar4 + 0x81258));
            *(byte *)(iVar21 + 0x22) = (byte)local_9c & 0x7f;
            uVar27 = 0;
            break;
          }
          goto LAB_000804ea;
        case 3:
          MaDevDrv_WriteIntermediateReg(0xa5,*(uchar *)(param_3 + DAT_00081c88 + 0x8103e));
          *(byte *)(iVar21 + 0x22) = (byte)local_9c & 0x7f;
          uVar27 = 0;
          break;
        case 4:
          if (uVar27 == 0) {
            MaDevDrv_WriteIntermediateReg(0x61,*(uchar *)(param_3 + DAT_00081c84 + 0x8101a));
          }
          else {
            MaDevDrv_WriteIntermediateReg(0xea,*(uchar *)(param_3 + DAT_000830bc + 0x82cc2));
          }
          *(byte *)(iVar21 + 0x22) = (byte)local_9c & 0x7f;
          uVar27 = 0;
          break;
        default:
          uVar27 = 0xfffffffe;
        }
        goto LAB_000804ee;
      }
    }
    goto LAB_000804ea;
  }
  if (param_2 == 0x25) {
    if (param_4 != (void *)0x0) {
      if (uVar28 == 0) {
        if ((*(byte *)param_4 < 0x10) && (-1 < *(char *)((int)param_4 + 1))) {
          *(undefined1 *)((uint)*(byte *)param_4 + iVar21 + 0xd) = 1;
          uVar27 = MaCmd_SetChannelVolume
                             (uVar27,0,(uint)*(byte *)param_4,(uint)*(byte *)((int)param_4 + 1),
                              &local_70);
          goto LAB_000804ee;
        }
      }
      else {
        if (uVar28 != 1) {
          uVar27 = 0xfffffffe;
          goto LAB_000804ee;
        }
        if ((*(byte *)param_4 < 0x10) && (-1 < (int)((uint)*(byte *)((int)param_4 + 1) << 0x18))) {
          uVar27 = MaCmd_SetChannelVolume
                             (uVar27,-1,(uint)*(byte *)param_4,(uint)*(byte *)((int)param_4 + 1),
                              &local_70);
          if (-1 < (int)uVar27) {
            uVar27 = MaDevDrv_SendDirectPacket(&local_70,uVar27);
          }
          goto LAB_000804ee;
        }
      }
    }
    goto LAB_000804ea;
  }
  if (param_2 < 0x26) {
    if (param_2 == 0x11) {
      if (param_4 != (void *)0x0) {
        *(undefined4 *)param_4 = *(undefined4 *)(iVar21 + 0x3c);
        uVar27 = 0;
        goto LAB_000804ee;
      }
    }
    else if (param_2 < 0x12) {
      if (param_2 == 10) {
        if (((4 < uVar28 - 4) && (param_4 != (void *)0x0)) && (*(int *)((int)param_4 + 8) != 0)) {
          uVar27 = (**(code **)(DAT_00082988 + *(int *)(iVar21 + 4) * 0x28 + 0x82130))
                             (DAT_0008298c + 0x820ea + uVar19 * 8,10,param_3,param_4);
          goto LAB_000804ee;
        }
      }
      else if (param_2 == 0xb) {
        if ((4 < uVar28 - 4) && (param_4 != (void *)0x0)) {
          uVar27 = (**(code **)(DAT_00082980 + *(int *)(iVar21 + 4) * 0x28 + 0x820ea))
                             (DAT_00082984 + 0x820a4 + uVar19 * 8,0xb,param_3,param_4);
          goto LAB_000804ee;
        }
      }
      else {
        if (param_2 != 5) goto LAB_00082662;
        if ((5 < uVar28 - 3) && (param_4 != (void *)0x0)) {
          *(undefined4 *)param_4 = *(undefined4 *)(iVar21 + 0x48);
          uVar27 = 0;
          goto LAB_000804ee;
        }
      }
    }
    else if (param_2 == 0x22) {
      if (((param_4 != (void *)0x0) && (*(char *)(iVar23 + 0x1d) != -1)) && (uVar28 < 2)) {
        *(uint *)param_4 = (uint)*(byte *)(iVar21 + 0x1f);
        uVar27 = 0;
        goto LAB_000804ee;
      }
    }
    else if (param_2 < 0x23) {
      if (param_2 != 0x21) goto LAB_00082662;
      if (((param_3 < 0x80) && (*(char *)(iVar23 + 0x1d) != -1)) && (uVar28 < 2)) {
        MaDevDrv_WriteIntermediateReg(0x1d,bVar1 & 0x7c | 3);
        *(char *)(iVar21 + 0x1f) = (char)local_9c;
        uVar27 = 0;
        goto LAB_000804ee;
      }
    }
    else if (param_2 == 0x23) {
      if (((param_3 < 0x80) && (uVar28 == 0)) && (iVar17 = *(int *)(iVar23 + 0x24), iVar17 != 0)) {
        if ((*(byte *)(iVar17 + 0x18) < 4) && (*(byte *)(iVar17 + 0x10) == uVar19)) {
          uVar26 = *(byte *)(iVar17 + 0x18) + 0xa8;
          *(byte *)(iVar21 + 0x20) = bVar1;
          iVar30 = iVar7 + 0x82d4c;
          uVar27 = (uint)*(byte *)((*(byte *)(iVar21 + 0x1d) & 0x7f) + iVar30 + 0xa8) +
                   (uint)*(byte *)(param_3 + iVar30 + 0xa8);
          if (uVar27 < 0xc1) {
            iVar30 = iVar30 + uVar27;
          }
          else {
            iVar30 = iVar7 + 0x82e0c;
          }
          bVar1 = *(byte *)(iVar30 + 0x128);
          local_88 = (void *)MaDevDrv_ReadIntermediateReg(uVar26);
          MaDevDrv_WriteIntermediateReg(uVar26,(byte)local_88 & 3 | bVar1 & 0x7c);
        }
        else {
          uVar28 = 0xfffffffe;
        }
        iVar30 = DAT_00081cd0;
        uVar27 = uVar28;
        if ((*(byte *)(iVar17 + 0x2c) < 4) && (*(byte *)(iVar17 + 0x24) == uVar19)) {
          uVar19 = *(byte *)(iVar17 + 0x2c) + 0xa8;
          *(undefined1 *)(iVar21 + 0x20) = (undefined1)local_9c;
          iVar17 = iVar30 + 0x81a20;
          uVar28 = (uint)*(byte *)((*(byte *)(iVar21 + 0x1d) & 0x7f) + iVar17 + 0xa8) +
                   (uint)*(byte *)(iVar17 + (local_9c & 0x7f) + 0xa8);
          if (uVar28 < 0xc1) {
            iVar17 = iVar17 + uVar28;
          }
          else {
            iVar17 = iVar30 + 0x81ae0;
          }
          bVar1 = *(byte *)(iVar17 + 0x128);
          local_88 = (void *)MaDevDrv_ReadIntermediateReg(uVar19);
          MaDevDrv_WriteIntermediateReg(uVar19,(byte)local_88 & 3 | bVar1 & 0x7c);
        }
        goto LAB_000804ee;
      }
    }
    else {
      if (param_2 != 0x24) goto LAB_00082662;
      if (param_4 != (void *)0x0) {
        if (uVar28 == 0) {
          iVar17 = *(int *)(iVar23 + 0x24);
          if (((iVar17 != 0) && (*(byte *)(iVar17 + 0x18) < 4)) &&
             (*(byte *)(iVar17 + 0x10) == uVar19)) {
            *(uint *)param_4 = (uint)*(byte *)(iVar21 + 0x20);
            uVar27 = uVar28;
            goto LAB_000804ee;
          }
        }
        else if (uVar28 == 8) {
          *(uint *)param_4 = (uint)*(byte *)(iVar21 + 0x20);
          uVar27 = 0;
          goto LAB_000804ee;
        }
      }
    }
    goto LAB_000804ea;
  }
  if (param_2 == 0x2a) {
    if ((param_4 != (void *)0x0) && (uVar28 != 8)) {
      *(undefined4 *)param_4 = *(undefined4 *)(iVar21 + 0x58);
      uVar27 = 0;
      goto LAB_000804ee;
    }
    goto LAB_000804ea;
  }
  if (param_2 < 0x2b) {
    if (param_2 == 0x27) {
      if ((*(uint *)(iVar21 + 0x48) == 0) || (param_3 <= *(uint *)(iVar21 + 0x48))) {
        if (param_3 == 0) {
          if (uVar28 == 0) {
            uVar13 = (uchar)(param_1 >> 8);
            MaDevDrv_WriteIntermediateReg(0xc,uVar13);
            MaDevDrv_WriteIntermediateReg(0xd,uVar13);
            MaDevDrv_WriteIntermediateReg(0xe,uVar13);
            MaDevDrv_WriteIntermediateReg(0xf,uVar13);
          }
          *(uint *)(iVar21 + 0x54) = local_9c;
          *(undefined1 *)(iVar21 + 0x28) = 0;
          uVar27 = 0;
          goto LAB_000804ee;
        }
        uVar27 = (uint)*(byte *)(iVar21 + 0x28);
        *(uint *)(iVar21 + 0x54) = param_3;
        if (-1 < (int)(uVar27 << 0x1e)) {
          uVar27 = 3;
          *(undefined1 *)(iVar21 + 0x28) = 3;
        }
        switch(uVar28) {
        case 0:
          if ((uVar27 & 1) == 0) {
            uVar27 = 0;
          }
          else {
            MaDevDrv_WriteIntermediateReg(0x14,'\x01');
            if (*(uint *)(iVar21 + 0x4c) < local_9c) {
              local_88 = (void *)__udivsi3(local_9c - *(uint *)(iVar21 + 0x4c),
                                           *(undefined4 *)(iVar21 + 0x44));
            }
            else {
              local_88 = (void *)0x1;
            }
            MaDevDrv_WriteIntermediateReg(0xc,(uchar)((uint)local_88 >> 0x18));
            MaDevDrv_WriteIntermediateReg(0xd,local_88._2_1_);
            MaDevDrv_WriteIntermediateReg(0xe,local_88._1_1_);
            MaDevDrv_WriteIntermediateReg(0xf,(uchar)local_88);
            uVar27 = 0;
          }
          break;
        case 1:
          uVar27 = 0;
          break;
        case 2:
        case 6:
          if ((*(int *)(iVar23 + 0x24) != 0) &&
             (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), uVar27 < 4)) {
            MaSrm_SetStopTime(uVar27,param_3);
            uVar27 = 0;
            break;
          }
          goto LAB_000804ea;
        default:
          uVar27 = 0xfffffffe;
        }
        goto LAB_000804ee;
      }
      goto LAB_000804ea;
    }
    if (param_2 < 0x27) {
      if ((param_4 != (void *)0x0) && (*(byte *)param_4 < 0x10)) {
        if (uVar28 < 2) {
          uVar8 = MaCmd_GetChannelVolume(uVar27,(uint)*(byte *)param_4);
          *(undefined1 *)((int)param_4 + 1) = uVar8;
          uVar27 = 0;
        }
        else {
          uVar27 = 0xfffffffe;
        }
        goto LAB_000804ee;
      }
      goto LAB_000804ea;
    }
    if (param_2 == 0x28) {
      if (param_4 != (void *)0x0) {
        *(undefined4 *)param_4 = *(undefined4 *)(iVar21 + 0x54);
        uVar27 = 0;
        goto LAB_000804ee;
      }
      goto LAB_000804ea;
    }
    if (param_2 != 0x29) goto LAB_00082662;
    if (0x177 < param_3 - 0x19) goto LAB_000804ea;
    switch(uVar28) {
    case 0:
      (**(code **)(DAT_00080fac + *(int *)(iVar21 + 4) * 0x28 + 0x80c22))
                (DAT_00080fb0 + 0x80bdc + uVar19 * 8,0x29,param_3,param_4);
      MaDevDrv_WriteIntermediateReg(8,'\x04');
      if (*(int *)(iVar21 + 0x44) == 4) {
        local_88 = (void *)(uint)*(ushort *)(DAT_000830cc + local_9c * 2 + 0x8323a);
      }
      else if (*(int *)(iVar21 + 0x44) == 5) {
        local_88 = (void *)(uint)*(ushort *)(DAT_00080fb4 + local_9c * 2 + 0x81420);
      }
      else {
        local_88 = (void *)(uint)*(ushort *)(DAT_000830c8 + local_9c * 2 + 0x83804);
      }
      MaDevDrv_WriteIntermediateReg(9,local_88._1_1_);
      MaDevDrv_WriteIntermediateReg(10,(uchar)local_88);
      *(uint *)(iVar21 + 0x58) = local_9c;
      uVar27 = 0;
      goto LAB_000804ee;
    case 1:
      if (-1 < *(char *)(iVar21 + 0x27)) {
        uVar27 = 0;
        piVar25 = (int *)(DAT_00080fc0 + 0x80c86);
        (**(code **)(*(int *)(iVar21 + 4) * 0x28 + DAT_00080fb8 + 0x80cb6))
                  (DAT_00080fbc + 0x80c7a + uVar19 * 8,0x29,param_3,param_4);
        local_88 = (void *)(uint)*(byte *)(local_9c + DAT_00080fcc + 0x81aaf);
        MaDevDrv_ResetIrqCtrl(' ','\0');
        do {
          if (((int)(uint)*(byte *)(iVar21 + 0x27) >> (uVar27 & 0xff)) << 0x1f < 0) {
            uVar28 = (uint)*(byte *)(iVar12 + uVar27 + 0x80c92);
            iVar17 = *piVar25 + uVar28 * 0x98;
            pcVar24 = *(code **)(iVar11 + *(int *)(iVar17 + 4) * 0x28 + 0x80cd8);
            if (pcVar24 != (code *)0x0) {
              (*pcVar24)(iVar30 + 0x80c92 + uVar28 * 8,local_88);
              pvVar22 = local_88;
              uVar10 = __udivsi3(*(int *)(iVar17 + 0x88) * *(int *)(iVar17 + 0x44),local_88);
              *(void **)(iVar17 + 0x44) = pvVar22;
              *(uint *)(iVar17 + 0x58) = local_9c;
              *(undefined4 *)(iVar17 + 0x88) = uVar10;
            }
          }
          uVar27 = uVar27 + 1;
        } while (uVar27 != 4);
        MaDevDrv_SetIrqCtrl(' ','\0');
        uVar27 = 0;
        goto LAB_000804ee;
      }
      break;
    case 2:
    case 6:
      if ((*(int *)(iVar23 + 0x24) != 0) &&
         (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), uVar27 < 4)) {
        uVar27 = MaSrm_SetSpeed(uVar27,param_3);
        if (-1 < (int)uVar27) {
          *(uint *)(iVar21 + 0x58) = local_9c;
        }
        goto LAB_000804ee;
      }
      break;
    default:
      uVar27 = 0xfffffffe;
      goto LAB_000804ee;
    }
LAB_000804ea:
    uVar27 = 0xfffffffe;
    goto LAB_000804ee;
  }
  if (param_2 != 0x2c) {
    if (param_2 < 0x2c) {
      if (param_4 != (void *)0x0) {
        if (iVar29 == 2) {
          *(undefined4 *)param_4 = 0;
          uVar27 = 0;
          goto LAB_000804ee;
        }
        switch(uVar28) {
        case 0:
          uVar27 = (**(code **)(DAT_00082978 + *(int *)(iVar21 + 4) * 0x28 + 0x81fca))
                             (DAT_0008297c + 0x81f84 + uVar19 * 8,5,1,param_4);
          if (-1 < (int)uVar27) {
            iVar17 = MaDevDrv_ReadIntermediateReg(0x10);
            iVar30 = MaDevDrv_ReadIntermediateReg(0x11);
            iVar11 = MaDevDrv_ReadIntermediateReg(0x12);
            iVar12 = MaDevDrv_ReadIntermediateReg(0x13);
            uVar28 = *(int *)(iVar21 + 0x44) *
                     (iVar12 + iVar17 * 0x1000000 + iVar30 * 0x10000 + iVar11 * 0x100) +
                     *(int *)(iVar21 + 0x4c);
            if (uVar28 < *(uint *)param_4) {
              *(uint *)param_4 = uVar28;
            }
          }
          break;
        case 1:
          uVar27 = (**(code **)(DAT_00082970 + *(int *)(iVar21 + 4) * 0x28 + 0x81f7e))
                             (DAT_00082974 + 0x81f38 + uVar19 * 8,5,1,param_4);
          if ((-1 < (int)uVar27) && (*(uint *)(iVar21 + 0x4c) < *(uint *)param_4)) {
            *(uint *)param_4 = *(uint *)(iVar21 + 0x4c);
          }
          break;
        case 2:
        case 6:
          if ((*(int *)(iVar23 + 0x24) != 0) &&
             (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), uVar27 < 4)) {
            uVar27 = MaSrm_GetPos(uVar27);
            if (-1 < (int)uVar27) {
              *(uint *)param_4 = uVar27;
              uVar27 = 0;
            }
            break;
          }
          goto LAB_000804ea;
        case 3:
        case 7:
          *(undefined4 *)param_4 = *(undefined4 *)(iVar21 + 0x4c);
          uVar27 = 0;
          break;
        default:
          uVar27 = 0xfffffffe;
        }
        goto LAB_000804ee;
      }
    }
    else if (param_2 == 0x2d) {
      if (param_4 != (void *)0x0) {
        if ((uVar28 & 0xfffffffb) != 2) {
          *(uint *)param_4 = (uint)*(byte *)(iVar21 + 0x1d);
          uVar27 = 0;
          goto LAB_000804ee;
        }
        if ((*(int *)(iVar23 + 0x24) != 0) &&
           (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), uVar27 < 4)) {
          uVar27 = MaSrm_GetVol(uVar27);
          if (-1 < (int)uVar27) {
            *(uint *)param_4 = uVar27;
            uVar27 = 0;
          }
          goto LAB_000804ee;
        }
      }
    }
    else {
      if (param_2 != 0x2e) goto LAB_00082662;
      switch(uVar28) {
      case 0:
      case 1:
        if (param_3 < 0x80) {
          uVar28 = MaCmd_SetPanpot(uVar27,param_3,&local_70);
          uVar27 = uVar28;
          if (-1 < (int)uVar28) {
            iVar17 = *(int *)(iVar23 + 0x24);
            if (iVar17 != 0) {
              if ((*(byte *)(iVar17 + 0x18) < 4) && (*(byte *)(iVar17 + 0x10) == uVar19)) {
                uVar27 = MaCmd_SetPanpot(*(byte *)(iVar17 + 0x18) + 4,local_9c,&local_70 + uVar28);
                if ((int)uVar27 < 0) goto LAB_000804ee;
                uVar28 = uVar28 + uVar27;
              }
              if ((*(byte *)(iVar17 + 0x2c) < 4) && (*(byte *)(iVar17 + 0x24) == uVar19)) {
                uVar27 = MaCmd_SetPanpot(*(byte *)(iVar17 + 0x2c) + 4,local_9c,&local_70 + uVar28);
                if ((int)uVar27 < 0) goto LAB_000804ee;
                uVar28 = uVar28 + uVar27;
              }
            }
            if ((uVar28 != 0) && (uVar27 = MaDevDrv_SendDirectPacket(&local_70,uVar28), uVar27 == 0)
               ) {
              *(char *)(iVar21 + 0x1e) = (char)local_9c;
            }
          }
          goto LAB_000804ee;
        }
        break;
      case 2:
      case 6:
        bVar31 = 0xfe < param_3;
        if (param_3 != 0xff) {
          bVar31 = 0x7e < param_3;
        }
        if (((!bVar31 || (param_3 == 0xff || param_3 == 0x7f)) && (*(int *)(iVar23 + 0x24) != 0)) &&
           (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), uVar27 < 4)) {
          uVar27 = MaSrm_SetPan(uVar27,param_3);
          goto LAB_000804ee;
        }
        break;
      case 3:
        if (param_3 < 0x80) {
          uVar27 = MaCmd_SetPanpot(8,param_3,&local_70);
          if ((-1 < (int)uVar27) &&
             (uVar27 = MaDevDrv_SendDirectPacket(&local_70,uVar27), uVar27 == 0)) {
            *(char *)(iVar21 + 0x1e) = (char)local_9c;
          }
          goto LAB_000804ee;
        }
        break;
      case 4:
        bVar31 = 0xfe < param_3;
        if (param_3 != 0xff) {
          bVar31 = 0x7e < param_3;
        }
        if (!bVar31 || (param_3 == 0xff || param_3 == 0x7f)) {
          if (uVar27 == 0) {
            MaDevDrv_WriteIntermediateReg(0x5f,bVar1 & 0xfc);
          }
          else {
            MaDevDrv_WriteIntermediateReg(0xe8,bVar1 & 0xfc);
          }
          *(char *)(iVar21 + 0x1e) = (char)local_9c;
          uVar27 = 0;
          goto LAB_000804ee;
        }
        break;
      case 5:
        bVar31 = 0xfe < param_3;
        if (param_3 != 0xff) {
          bVar31 = 0x7e < param_3;
        }
        if (!bVar31 || (param_3 == 0xff || param_3 == 0x7f)) {
          MaDevDrv_WriteIntermediateReg(0x53,bVar1 & 0xfc);
          *(char *)(iVar21 + 0x1e) = (char)local_9c;
          uVar27 = 0;
          goto LAB_000804ee;
        }
        break;
      default:
        uVar27 = 0xfffffffe;
        goto LAB_000804ee;
      }
    }
    goto LAB_000804ea;
  }
  if (0x7f < param_3) goto LAB_000804ea;
  switch(uVar28) {
  case 0:
  case 1:
    uVar27 = MaCmd_SetVolume(uVar27,-1,param_3,&local_70);
    if ((int)uVar27 < 0) goto LAB_000804ee;
    uVar27 = MaDevDrv_SendDirectPacket(&local_70,uVar27);
    if (uVar27 == 0) {
      *(char *)(iVar21 + 0x1d) = (char)local_9c;
    }
    iVar17 = *(int *)(iVar23 + 0x24);
    if (iVar17 != 0) {
      if ((*(byte *)(iVar17 + 0x18) < 4) && (*(byte *)(iVar17 + 0x10) == uVar19)) {
        uVar28 = *(byte *)(iVar17 + 0x18) + 0xa8;
        iVar30 = DAT_00081c98 + 0x81332;
        uVar26 = (uint)*(byte *)((*(byte *)(iVar21 + 0x20) & 0x7f) + iVar30 + 0xa8) +
                 (uint)*(byte *)((*(byte *)(iVar21 + 0x1d) & 0x7f) + iVar30 + 0xa8);
        if (uVar26 < 0xc1) {
          iVar30 = iVar30 + uVar26;
        }
        else {
          iVar30 = DAT_00081c98 + 0x813f2;
        }
        bVar1 = *(byte *)(iVar30 + 0x128);
        local_88 = (void *)MaDevDrv_ReadIntermediateReg(uVar28);
        MaDevDrv_WriteIntermediateReg(uVar28,bVar1 & 0x7c | (byte)local_88 & 3);
      }
      if ((*(byte *)(iVar17 + 0x2c) < 4) && (*(byte *)(iVar17 + 0x24) == uVar19)) {
        uVar19 = *(byte *)(iVar17 + 0x2c) + 0xa8;
        iVar17 = DAT_00081c9c + 0x813ba;
        uVar28 = (uint)*(byte *)((*(byte *)(iVar21 + 0x20) & 0x7f) + iVar17 + 0xa8) +
                 (uint)*(byte *)((*(byte *)(iVar21 + 0x1d) & 0x7f) + iVar17 + 0xa8);
        if (uVar28 < 0xc1) {
          iVar17 = iVar17 + uVar28;
        }
        else {
          iVar17 = DAT_00081c9c + 0x8147a;
        }
        bVar1 = *(byte *)(iVar17 + 0x128);
        local_88 = (void *)MaDevDrv_ReadIntermediateReg(uVar19);
        MaDevDrv_WriteIntermediateReg(uVar19,(byte)local_88 & 3 | bVar1 & 0x7c);
      }
    }
    break;
  case 2:
  case 6:
    if ((*(int *)(iVar23 + 0x24) == 0) ||
       (uVar27 = (uint)*(byte *)(*(int *)(iVar23 + 0x24) + 0x18), 3 < uVar27))
    goto switchD_000807d0_default;
    uVar27 = MaSrm_SetVol(uVar27,param_3);
    break;
  case 3:
    uVar27 = MaCmd_SetVolume(8,-1,param_3,&local_70);
    goto joined_r0x000812a6;
  case 4:
    if (uVar27 == 0) {
      uVar27 = MaCmd_SetVolume(9,-1,param_3,&local_70);
    }
    else {
      uVar27 = MaCmd_SetVolume(0xb,-1,param_3,&local_70);
    }
joined_r0x000812a6:
    if (((int)uVar27 < 0) || (uVar27 = MaDevDrv_SendDirectPacket(&local_70,uVar27), uVar27 != 0))
    goto LAB_000804ee;
LAB_00081258:
    *(char *)(iVar21 + 0x1d) = (char)local_9c;
    goto LAB_0008125c;
  case 5:
    MaDevDrv_WriteIntermediateReg(0x54,bVar1 & 0x7c);
    goto LAB_00081258;
  default:
switchD_000807d0_default:
    uVar27 = 0xfffffffe;
    goto LAB_000804ee;
  }
  if (uVar27 == 0) {
LAB_0008125c:
    if (*(byte *)(iVar21 + 0x39) - 1 < 2) {
      local_88 = (void *)(uint)*(byte *)(local_9c + DAT_00081c94 + 0x82222);
      uVar27 = MaDsp_VolCtrl(0,&local_88);
    }
    else {
      uVar27 = 0;
    }
  }
LAB_000804ee:
  machdep_LeaveCriticalSection();
  if (local_2c == *piVar20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar27);
}

