/* MaSmw_XMF_GetInfo @ 001abcb4 9008B */


/* YAMAHA::MaSmw_XMF_GetInfo(YAMAHA::_tagmaXMF_Info*, unsigned int, unsigned int, void*) */

void YAMAHA::MaSmw_XMF_GetInfo(_tagmaXMF_Info *param_1,uint param_2,uint param_3,void *param_4)

{
  _tagmaXMF_Info *p_Var1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  _tagmaXMF_Info *p_Var8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  _tagmaXMF_Info *p_Var18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  byte *local_18;
  uint local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 == (_tagmaXMF_Info *)0x0) goto LAB_001ac3d8;
  if (*(int *)param_1 != 1) {
LAB_001abe28:
    uVar7 = 0xffffffff;
    goto switchD_001abd1c_default;
  }
  uVar7 = 0xfffffffe;
  switch(param_2) {
  case 0:
    uVar7 = 0xfffffffe;
    switch(param_3) {
    case 0:
      uVar7 = *(int *)(param_1 + 4) + 1;
      break;
    case 1:
      uVar7 = 0xffffffff;
      if (*(int *)(param_1 + 4) == 1) {
        uVar7 = *(uint *)(param_1 + 8);
      }
      break;
    case 2:
      uVar7 = 0xffffffff;
      if (*(int *)(param_1 + 4) == 1) {
        uVar7 = *(uint *)(param_1 + 0xc);
      }
      break;
    case 3:
      uVar7 = (int)*(undefined8 *)(param_1 + 0x28) - (int)*(undefined8 *)(param_1 + 0x18);
    }
    break;
  case 1:
    uVar24 = *(ulong *)(param_1 + 0x58);
    uVar7 = *(uint *)(param_1 + 0x60);
    if (param_3 != 8) {
      if (param_3 == 9) {
        if (param_4 != (void *)0x0) {
          if (uVar24 != 0) {
            if (uVar7 == 0) break;
            uVar20 = 0;
            do {
              iVar11 = 0;
              uVar9 = 0;
              do {
                if ((3 < uVar9) || (uVar7 - uVar20 <= uVar9)) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                uVar9 = uVar9 + 1;
                iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar9 = uVar9 + uVar20;
              if (iVar11 == 0) {
                iVar11 = 0;
                uVar20 = 0;
                do {
                  if (3 < uVar20) {
                    uVar7 = 0xffffffff;
                    goto switchD_001abd1c_default;
                  }
                  if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
                  bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar20);
                  uVar20 = uVar20 + 1;
                  iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
                } while ((char)bVar3 < '\0');
                uVar20 = uVar20 + uVar9;
                iVar12 = 0;
                uVar9 = 0;
                do {
                  if (3 < uVar9) {
                    uVar7 = 0xffffffff;
                    goto switchD_001abd1c_default;
                  }
                  if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
                  bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                  uVar9 = uVar9 + 1;
                  iVar12 = (bVar3 & 0x7f) + iVar12 * 0x80;
                } while ((char)bVar3 < '\0');
                uVar9 = uVar9 + uVar20;
                if (iVar12 != 0) goto LAB_001ad3fc;
                uVar14 = 0;
                uVar22 = 0;
                do {
                  if (3 < uVar22) {
                    uVar7 = 0xffffffff;
                    goto switchD_001abd1c_default;
                  }
                  if (uVar7 - uVar9 <= uVar22) goto LAB_001abe28;
                  bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar22);
                  uVar22 = uVar22 + 1;
                  uVar14 = (bVar3 & 0x7f) + uVar14 * 0x80;
                } while ((char)bVar3 < '\0');
                uVar22 = uVar22 + uVar9;
                uVar20 = uVar22 + uVar14;
                if (uVar7 < uVar20) goto LAB_001abe28;
                if (iVar11 == 9) {
                  uVar9 = 0;
                  uVar20 = 0;
                  goto LAB_001ad368;
                }
              }
              else {
                uVar9 = uVar9 + iVar11;
                uVar20 = 0;
                do {
                  if (3 < uVar20) {
                    uVar7 = 0xffffffff;
                    goto switchD_001abd1c_default;
                  }
                  if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
                  uVar21 = (ulong)uVar20;
                  uVar20 = uVar20 + 1;
                } while (*(char *)(uVar24 + uVar9 + uVar21) < '\0');
                uVar20 = uVar20 + uVar9;
                iVar11 = 0;
                uVar9 = 0;
                do {
                  if (3 < uVar9) {
                    uVar7 = 0xffffffff;
                    goto switchD_001abd1c_default;
                  }
                  if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
                  bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                  uVar9 = uVar9 + 1;
                  iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
                } while ((char)bVar3 < '\0');
                uVar20 = uVar9 + iVar11 + uVar20;
              }
            } while (uVar20 < uVar7);
            goto LAB_001ad2f4;
          }
          goto LAB_001ac450;
        }
      }
      else {
        uVar10 = 0;
        if (param_3 == 0) {
LAB_001ac424:
          uVar7 = FUN_001ab21c(uVar24,uVar7,uVar10,8,0x10);
          if (uVar7 != 6) {
            if ((int)uVar7 < 0) {
              uVar7 = 0xffffffff;
            }
            break;
          }
          goto LAB_001abe28;
        }
      }
      goto LAB_001ac3d8;
    }
    if (param_4 == (void *)0x0) goto LAB_001ac3d8;
    if (uVar24 != 0) {
      if (uVar7 == 0) break;
      uVar20 = 0;
      do {
        iVar11 = 0;
        uVar9 = 0;
        do {
          if ((3 < uVar9) || (uVar7 - uVar20 <= uVar9)) goto LAB_001abe28;
          bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
          uVar9 = uVar9 + 1;
          iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
        } while ((char)bVar3 < '\0');
        uVar9 = uVar9 + uVar20;
        if (iVar11 == 0) {
          iVar11 = 0;
          uVar20 = 0;
          do {
            if (3 < uVar20) {
              uVar7 = 0xffffffff;
              goto switchD_001abd1c_default;
            }
            if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
            bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar20);
            uVar20 = uVar20 + 1;
            iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
          } while ((char)bVar3 < '\0');
          uVar20 = uVar20 + uVar9;
          iVar12 = 0;
          uVar9 = 0;
          do {
            if (3 < uVar9) {
              uVar7 = 0xffffffff;
              goto switchD_001abd1c_default;
            }
            if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
            bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
            uVar9 = uVar9 + 1;
            iVar12 = (bVar3 & 0x7f) + iVar12 * 0x80;
          } while ((char)bVar3 < '\0');
          uVar9 = uVar9 + uVar20;
          if (iVar12 != 0) goto LAB_001ad3fc;
          uVar14 = 0;
          uVar22 = 0;
          do {
            if (3 < uVar22) {
              uVar7 = 0xffffffff;
              goto switchD_001abd1c_default;
            }
            if (uVar7 - uVar9 <= uVar22) goto LAB_001abe28;
            bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar22);
            uVar22 = uVar22 + 1;
            uVar14 = (bVar3 & 0x7f) + uVar14 * 0x80;
          } while ((char)bVar3 < '\0');
          uVar22 = uVar22 + uVar9;
          uVar20 = uVar22 + uVar14;
          if (uVar7 < uVar20) goto LAB_001abe28;
          if (iVar11 == 8) {
            uVar9 = 0;
            uVar20 = 0;
            goto LAB_001ada24;
          }
        }
        else {
          uVar9 = uVar9 + iVar11;
          uVar20 = 0;
          do {
            if ((3 < uVar20) || (uVar7 - uVar9 <= uVar20)) goto LAB_001abe28;
            uVar21 = (ulong)uVar20;
            uVar20 = uVar20 + 1;
          } while (*(char *)(uVar24 + uVar9 + uVar21) < '\0');
          uVar20 = uVar20 + uVar9;
          iVar11 = 0;
          uVar9 = 0;
          do {
            if (3 < uVar9) {
              uVar7 = 0xffffffff;
              goto switchD_001abd1c_default;
            }
            if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
            bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
            uVar9 = uVar9 + 1;
            iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
          } while ((char)bVar3 < '\0');
          uVar20 = uVar9 + iVar11 + uVar20;
        }
      } while (uVar20 < uVar7);
      goto LAB_001ad2f4;
    }
    goto LAB_001ac450;
  case 2:
    uVar24 = *(ulong *)(param_1 + 0x78);
    uVar7 = *(uint *)(param_1 + 0x80);
    if (param_3 == 8) {
      if (param_4 != (void *)0x0) {
        if (uVar24 != 0) {
          if (uVar7 == 0) break;
          uVar20 = 0;
          do {
            iVar11 = 0;
            uVar9 = 0;
            do {
              if ((3 < uVar9) || (uVar7 - uVar20 <= uVar9)) goto LAB_001abe28;
              bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
              uVar9 = uVar9 + 1;
              iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
            } while ((char)bVar3 < '\0');
            uVar9 = uVar9 + uVar20;
            if (iVar11 == 0) {
              iVar11 = 0;
              uVar20 = 0;
              do {
                if (3 < uVar20) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar20);
                uVar20 = uVar20 + 1;
                iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar20 = uVar20 + uVar9;
              iVar12 = 0;
              uVar9 = 0;
              do {
                if (3 < uVar9) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                uVar9 = uVar9 + 1;
                iVar12 = (bVar3 & 0x7f) + iVar12 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar9 = uVar9 + uVar20;
              if (iVar12 != 0) goto LAB_001ad3fc;
              uVar14 = 0;
              uVar22 = 0;
              do {
                if (3 < uVar22) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar22) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar22);
                uVar22 = uVar22 + 1;
                uVar14 = (bVar3 & 0x7f) + uVar14 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar22 = uVar22 + uVar9;
              uVar20 = uVar22 + uVar14;
              if (uVar7 < uVar20) goto LAB_001abe28;
              if (iVar11 == 8) {
                uVar9 = 0;
                uVar20 = 0;
                goto LAB_001adf48;
              }
            }
            else {
              uVar9 = uVar9 + iVar11;
              uVar20 = 0;
              do {
                if (3 < uVar20) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
                uVar21 = (ulong)uVar20;
                uVar20 = uVar20 + 1;
              } while (*(char *)(uVar24 + uVar9 + uVar21) < '\0');
              uVar20 = uVar20 + uVar9;
              iVar11 = 0;
              uVar9 = 0;
              do {
                if (3 < uVar9) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                uVar9 = uVar9 + 1;
                iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar20 = uVar9 + iVar11 + uVar20;
            }
          } while (uVar20 < uVar7);
          goto LAB_001ad2f4;
        }
        goto LAB_001ac450;
      }
    }
    else if (param_3 == 9) {
      if (param_4 != (void *)0x0) {
        if (uVar24 != 0) {
          if (uVar7 == 0) break;
          uVar20 = 0;
          do {
            iVar11 = 0;
            uVar9 = 0;
            do {
              if ((3 < uVar9) || (uVar7 - uVar20 <= uVar9)) goto LAB_001abe28;
              bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
              uVar9 = uVar9 + 1;
              iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
            } while ((char)bVar3 < '\0');
            uVar9 = uVar9 + uVar20;
            if (iVar11 == 0) {
              iVar11 = 0;
              uVar20 = 0;
              do {
                if (3 < uVar20) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar20);
                uVar20 = uVar20 + 1;
                iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar20 = uVar20 + uVar9;
              iVar12 = 0;
              uVar9 = 0;
              do {
                if (3 < uVar9) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                uVar9 = uVar9 + 1;
                iVar12 = (bVar3 & 0x7f) + iVar12 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar9 = uVar9 + uVar20;
              if (iVar12 != 0) goto LAB_001ad3fc;
              uVar14 = 0;
              uVar22 = 0;
              do {
                if (3 < uVar22) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar22) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar22);
                uVar22 = uVar22 + 1;
                uVar14 = (bVar3 & 0x7f) + uVar14 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar22 = uVar22 + uVar9;
              uVar20 = uVar22 + uVar14;
              if (uVar7 < uVar20) goto LAB_001abe28;
              if (iVar11 == 9) {
                uVar9 = 0;
                uVar20 = 0;
                goto LAB_001adce0;
              }
            }
            else {
              uVar9 = uVar9 + iVar11;
              uVar20 = 0;
              do {
                if (3 < uVar20) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
                uVar21 = (ulong)uVar20;
                uVar20 = uVar20 + 1;
              } while (*(char *)(uVar24 + uVar9 + uVar21) < '\0');
              uVar20 = uVar20 + uVar9;
              iVar11 = 0;
              uVar9 = 0;
              do {
                if (3 < uVar9) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                uVar9 = uVar9 + 1;
                iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar20 = uVar9 + iVar11 + uVar20;
            }
          } while (uVar20 < uVar7);
          goto LAB_001ad2f4;
        }
        goto LAB_001ac450;
      }
    }
    else if (param_3 == 0) {
      uVar10 = 3;
      goto LAB_001ac424;
    }
    goto LAB_001ac3d8;
  case 3:
    lVar23 = *(long *)(param_1 + 0x38);
    goto joined_r0x001ac3ec;
  case 4:
    uVar7 = *(uint *)(param_1 + 0x40);
    break;
  case 5:
    uVar24 = *(ulong *)(param_1 + 0x68);
    uVar7 = *(uint *)(param_1 + 0x70);
    if (param_3 == 8) {
      if (param_4 != (void *)0x0) {
        if (uVar24 != 0) {
          if (uVar7 == 0) break;
          uVar20 = 0;
          do {
            iVar11 = 0;
            uVar9 = 0;
            do {
              if ((3 < uVar9) || (uVar7 - uVar20 <= uVar9)) goto LAB_001abe28;
              bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
              uVar9 = uVar9 + 1;
              iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
            } while ((char)bVar3 < '\0');
            uVar9 = uVar9 + uVar20;
            if (iVar11 == 0) {
              iVar11 = 0;
              uVar20 = 0;
              do {
                if (3 < uVar20) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar20);
                uVar20 = uVar20 + 1;
                iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar20 = uVar20 + uVar9;
              iVar12 = 0;
              uVar9 = 0;
              do {
                if (3 < uVar9) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                uVar9 = uVar9 + 1;
                iVar12 = (bVar3 & 0x7f) + iVar12 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar9 = uVar9 + uVar20;
              if (iVar12 != 0) goto LAB_001ad3fc;
              uVar14 = 0;
              uVar22 = 0;
              do {
                if (3 < uVar22) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar22) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar22);
                uVar22 = uVar22 + 1;
                uVar14 = (bVar3 & 0x7f) + uVar14 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar22 = uVar22 + uVar9;
              uVar20 = uVar22 + uVar14;
              if (uVar7 < uVar20) goto LAB_001abe28;
              if (iVar11 == 8) {
                uVar9 = 0;
                uVar20 = 0;
                goto LAB_001ad848;
              }
            }
            else {
              uVar9 = uVar9 + iVar11;
              uVar20 = 0;
              do {
                if (3 < uVar20) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
                uVar21 = (ulong)uVar20;
                uVar20 = uVar20 + 1;
              } while (*(char *)(uVar24 + uVar9 + uVar21) < '\0');
              uVar20 = uVar20 + uVar9;
              iVar11 = 0;
              uVar9 = 0;
              do {
                if (3 < uVar9) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                uVar9 = uVar9 + 1;
                iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar20 = uVar9 + iVar11 + uVar20;
            }
          } while (uVar20 < uVar7);
          goto LAB_001ad2f4;
        }
        goto LAB_001ac450;
      }
    }
    else if (param_3 == 9) {
      if (param_4 != (void *)0x0) {
        if (uVar24 != 0) {
          if (uVar7 == 0) break;
          uVar20 = 0;
          do {
            iVar11 = 0;
            uVar9 = 0;
            do {
              if ((3 < uVar9) || (uVar7 - uVar20 <= uVar9)) goto LAB_001abe28;
              bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
              uVar9 = uVar9 + 1;
              iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
            } while ((char)bVar3 < '\0');
            uVar9 = uVar9 + uVar20;
            if (iVar11 == 0) {
              iVar11 = 0;
              uVar20 = 0;
              do {
                if (3 < uVar20) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar20);
                uVar20 = uVar20 + 1;
                iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar20 = uVar20 + uVar9;
              iVar12 = 0;
              uVar9 = 0;
              do {
                if (3 < uVar9) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                uVar9 = uVar9 + 1;
                iVar12 = (bVar3 & 0x7f) + iVar12 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar9 = uVar9 + uVar20;
              if (iVar12 != 0) goto LAB_001ad3fc;
              uVar14 = 0;
              uVar22 = 0;
              do {
                if (3 < uVar22) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar22) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar9 + (ulong)uVar22);
                uVar22 = uVar22 + 1;
                uVar14 = (bVar3 & 0x7f) + uVar14 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar22 = uVar22 + uVar9;
              uVar20 = uVar22 + uVar14;
              if (uVar7 < uVar20) goto LAB_001abe28;
              if (iVar11 == 9) {
                uVar9 = 0;
                uVar20 = 0;
                goto LAB_001ad5e0;
              }
            }
            else {
              uVar9 = uVar9 + iVar11;
              uVar20 = 0;
              do {
                if (3 < uVar20) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar9 <= uVar20) goto LAB_001abe28;
                uVar21 = (ulong)uVar20;
                uVar20 = uVar20 + 1;
              } while (*(char *)(uVar24 + uVar9 + uVar21) < '\0');
              uVar20 = uVar20 + uVar9;
              iVar11 = 0;
              uVar9 = 0;
              do {
                if (3 < uVar9) {
                  uVar7 = 0xffffffff;
                  goto switchD_001abd1c_default;
                }
                if (uVar7 - uVar20 <= uVar9) goto LAB_001abe28;
                bVar3 = *(byte *)(uVar24 + uVar20 + (ulong)uVar9);
                uVar9 = uVar9 + 1;
                iVar11 = (bVar3 & 0x7f) + iVar11 * 0x80;
              } while ((char)bVar3 < '\0');
              uVar20 = uVar9 + iVar11 + uVar20;
            }
          } while (uVar20 < uVar7);
          goto LAB_001ad2f4;
        }
        goto LAB_001ac450;
      }
    }
    else if (param_3 == 0) {
      uVar7 = FUN_001ab21c(uVar24,uVar7,3,8,0x10);
      if ((uVar7 != 6) && (-1 < (int)uVar7)) {
        if (3 < uVar7 - 2) {
          uVar7 = 0xffffffff;
        }
        break;
      }
      goto LAB_001abe28;
    }
    goto LAB_001ac3d8;
  case 6:
    lVar23 = *(long *)(param_1 + 0x48);
joined_r0x001ac3ec:
    uVar24 = 0;
    if (lVar23 == 0) {
LAB_001ac450:
      uVar7 = (uint)uVar24;
    }
    else {
      uVar7 = (int)lVar23 - (int)*(undefined8 *)(param_1 + 0x18);
    }
    break;
  case 7:
    uVar7 = *(uint *)(param_1 + 0x50);
    break;
  case 8:
    if (param_4 != (void *)0x0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar7 = *(uint *)(param_1 + 0xa0);
LAB_001ac45c:
        uVar9 = *(uint *)(param_1 + 0x94);
        uVar21 = (ulong)uVar9;
        uVar20 = uVar7 - uVar9 & 3;
        uVar24 = uVar21;
        if (uVar20 == 0) goto LAB_001ac550;
        if (uVar7 <= uVar9) goto LAB_001ac558;
        uVar24 = (ulong)(uVar9 + 1);
        *(uint *)(param_1 + 0x94) = uVar9 + 1;
        p_Var18 = param_1 + uVar21 * 0x20 + 0xb0;
        lVar23 = *(long *)(param_1 + uVar21 * 0x20 + 0xb8);
        if (lVar23 != 0) {
LAB_001ad0fc:
          iVar11 = *(int *)(param_1 + 0x98);
          *(long *)param_4 = lVar23;
          *(int *)(p_Var18 + 0x14) = iVar11;
          uVar7 = *(uint *)(p_Var18 + 0x10);
          *(int *)(param_1 + 0x98) = iVar11 + 1;
          break;
        }
        if (uVar20 != 1) {
          uVar21 = uVar24;
          if (uVar20 != 2) {
            uVar21 = (ulong)(uVar9 + 2);
            *(uint *)(param_1 + 0x94) = uVar9 + 2;
            p_Var18 = param_1 + uVar24 * 0x20 + 0xb0;
            lVar23 = *(long *)(param_1 + uVar24 * 0x20 + 0xb8);
            if (lVar23 != 0) goto LAB_001ad0fc;
          }
          uVar20 = (int)uVar21 + 1;
          uVar24 = (ulong)uVar20;
          *(uint *)(param_1 + 0x94) = uVar20;
          p_Var18 = param_1 + uVar21 * 0x20 + 0xb0;
          lVar23 = *(long *)(param_1 + uVar21 * 0x20 + 0xb8);
          if (lVar23 != 0) goto LAB_001ad0fc;
        }
LAB_001ac550:
        while (uVar20 = (uint)uVar24, uVar20 < uVar7) {
          uVar9 = uVar20 + 1;
          *(uint *)(param_1 + 0x94) = uVar9;
          p_Var18 = param_1 + uVar24 * 0x20 + 0xb0;
          lVar23 = *(long *)(param_1 + uVar24 * 0x20 + 0xb8);
          if (lVar23 != 0) goto LAB_001ad0fc;
          uVar22 = uVar20 + 2;
          *(uint *)(param_1 + 0x94) = uVar22;
          p_Var18 = param_1 + (ulong)uVar9 * 0x20 + 0xb0;
          lVar23 = *(long *)(param_1 + (ulong)uVar9 * 0x20 + 0xb8);
          if (lVar23 != 0) goto LAB_001ad0fc;
          *(uint *)(param_1 + 0x94) = uVar20 + 3;
          p_Var18 = param_1 + (ulong)uVar22 * 0x20 + 0xb0;
          lVar23 = *(long *)(param_1 + (ulong)uVar22 * 0x20 + 0xb8);
          if (lVar23 != 0) goto LAB_001ad0fc;
          *(uint *)(param_1 + 0x94) = uVar20 + 4;
          p_Var18 = param_1 + (ulong)(uVar20 + 3) * 0x20 + 0xb0;
          lVar23 = *(long *)(param_1 + (ulong)(uVar20 + 3) * 0x20 + 0xb8);
          if (lVar23 != 0) goto LAB_001ad0fc;
          uVar24 = (ulong)(uVar20 + 4);
        }
LAB_001ac558:
        uVar7 = 0x7fffffff;
        break;
      }
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x10a8) = 1;
      memset(param_1 + 0x10d0,0,0x800);
      p_Var18 = param_1 + 0xa8;
      do {
        *(undefined8 *)p_Var18 = 0;
        *(undefined8 *)(p_Var18 + 8) = 0;
        *(undefined8 *)(p_Var18 + 0x10) = 0;
        *(undefined4 *)(p_Var18 + 0x18) = 0;
        *(undefined4 *)(p_Var18 + 0x1c) = 0xffffffff;
        *(undefined8 *)(p_Var18 + 0x20) = 0;
        *(undefined8 *)(p_Var18 + 0x28) = 0;
        p_Var8 = p_Var18 + 0x100;
        *(undefined8 *)(p_Var18 + 0x30) = 0;
        *(undefined4 *)(p_Var18 + 0x38) = 0;
        *(undefined4 *)(p_Var18 + 0x3c) = 0xffffffff;
        *(undefined8 *)(p_Var18 + 0x40) = 0;
        *(undefined8 *)(p_Var18 + 0x48) = 0;
        *(undefined8 *)(p_Var18 + 0x50) = 0;
        *(undefined4 *)(p_Var18 + 0x58) = 0;
        *(undefined4 *)(p_Var18 + 0x5c) = 0xffffffff;
        *(undefined8 *)(p_Var18 + 0x60) = 0;
        *(undefined8 *)(p_Var18 + 0x68) = 0;
        *(undefined8 *)(p_Var18 + 0x70) = 0;
        *(undefined4 *)(p_Var18 + 0x78) = 0;
        *(undefined4 *)(p_Var18 + 0x7c) = 0xffffffff;
        *(undefined8 *)(p_Var18 + 0x80) = 0;
        *(undefined8 *)(p_Var18 + 0x88) = 0;
        *(undefined8 *)(p_Var18 + 0x90) = 0;
        *(undefined4 *)(p_Var18 + 0x98) = 0;
        *(undefined4 *)(p_Var18 + 0x9c) = 0xffffffff;
        *(undefined8 *)(p_Var18 + 0xa0) = 0;
        *(undefined8 *)(p_Var18 + 0xa8) = 0;
        *(undefined8 *)(p_Var18 + 0xb0) = 0;
        *(undefined4 *)(p_Var18 + 0xb8) = 0;
        *(undefined4 *)(p_Var18 + 0xbc) = 0xffffffff;
        *(undefined8 *)(p_Var18 + 0xc0) = 0;
        *(undefined8 *)(p_Var18 + 200) = 0;
        *(undefined8 *)(p_Var18 + 0xd0) = 0;
        *(undefined4 *)(p_Var18 + 0xd8) = 0;
        *(undefined4 *)(p_Var18 + 0xdc) = 0xffffffff;
        *(undefined8 *)(p_Var18 + 0xe0) = 0;
        *(undefined8 *)(p_Var18 + 0xe8) = 0;
        *(undefined8 *)(p_Var18 + 0xf0) = 0;
        *(undefined4 *)(p_Var18 + 0xf8) = 0;
        *(undefined4 *)(p_Var18 + 0xfc) = 0xffffffff;
        p_Var18 = p_Var8;
      } while (p_Var8 != param_1 + 0x10a8);
      pbVar16 = *(byte **)(param_1 + 0x48);
      uVar7 = *(uint *)(param_1 + 0x50);
      if ((pbVar16 != (byte *)0x0) && (uVar7 != 0)) {
        if (((uint)pbVar16[1] << 0x10 | (uint)*pbVar16 << 0x18 | (uint)pbVar16[3] |
            (uint)pbVar16[2] << 8) == 0x52494646) {
          uVar20 = (uint)pbVar16[6] << 0x10 | (uint)pbVar16[7] << 0x18 | (uint)pbVar16[4] |
                   (uint)pbVar16[5] << 8;
          if ((uVar20 == 0) || (uVar7 < uVar20)) {
LAB_001adab8:
            uVar7 = 0xffffffed;
            break;
          }
          if (((uint)pbVar16[9] << 0x10 | (uint)pbVar16[8] << 0x18 | (uint)pbVar16[0xb] |
              (uint)pbVar16[10] << 8) == 0x444c5320) {
            if (uVar20 < 4) goto LAB_001adab8;
            uVar20 = uVar20 - 4;
            pbVar16 = pbVar16 + 0xc;
            if (8 < uVar20) {
              do {
                uVar9 = (uint)pbVar16[6] << 0x10 | (uint)pbVar16[7] << 0x18 | (uint)pbVar16[4] |
                        (uint)pbVar16[5] << 8;
                uVar22 = (uint)pbVar16[1] << 0x10 | (uint)*pbVar16 << 0x18 | (uint)pbVar16[3] |
                         (uint)pbVar16[2] << 8;
                if (((uVar7 < uVar9) || (uVar9 < 4)) || (uVar20 < uVar9 + 8)) goto LAB_001adab8;
                if (uVar22 == 0x636f6c68) {
                  uVar22 = (uint)pbVar16[10] << 0x10 | (uint)pbVar16[0xb] << 0x18 | (uint)pbVar16[8]
                           | (uint)pbVar16[9] << 8;
                  if (0x100 < uVar22) {
                    uVar22 = 0x100;
                  }
                  *(uint *)(param_1 + 0x88) = uVar22;
                }
                else if (uVar22 == 0x7074626c) {
                  *(uint *)(param_1 + 0xa0) =
                       (uint)pbVar16[0xe] << 0x10 | (uint)pbVar16[0xf] << 0x18 | (uint)pbVar16[0xc]
                       | (uint)pbVar16[0xd] << 8;
                }
                else if ((uVar22 == 0x4c495354) &&
                        (uVar24 = FUN_001aa934(param_1,pbVar16 + 8,uVar9), (int)uVar24 < 0))
                goto LAB_001ac450;
                uVar20 = uVar20 + (-8 - uVar9);
                pbVar16 = pbVar16 + 8 + ((ulong)uVar9 & 1) + (ulong)uVar9;
              } while (8 < uVar20);
              if (*(int *)(param_1 + 0x8c) + 1 != *(int *)(param_1 + 0x88)) goto LAB_001adfdc;
            }
            uVar7 = *(uint *)(param_1 + 0x98);
            if (uVar7 == *(uint *)(param_1 + 0xa0)) {
              *(undefined4 *)(param_1 + 0x98) = 0;
              *(undefined4 *)(param_1 + 0x10) = 1;
              goto LAB_001ac45c;
            }
          }
        }
LAB_001adfdc:
        uVar7 = 0xfffffff0;
        break;
      }
    }
    goto LAB_001ac3d8;
  case 9:
    if (param_4 != (void *)0x0) {
      p_Var18 = param_1 + 0x88;
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar7 = *(uint *)(param_1 + 0x88);
        uVar20 = *(uint *)(param_1 + 0x8c);
LAB_001ac5d4:
        if (uVar20 < uVar7) {
          if (*(int *)(param_1 + 0x10a8) == 0) {
            lVar23 = *(long *)(param_1 + 0x10b8);
            goto LAB_001ac7dc;
          }
          do {
            pbVar16 = *(byte **)(p_Var18 + (ulong)uVar20 * 8 + 0x1048);
            *(undefined8 *)(param_1 + 0x10b8) = 0;
            *(undefined8 *)(param_1 + 0x10c0) = 0;
            *(undefined8 *)(param_1 + 0x10c8) = 0;
            *(undefined4 *)(param_1 + 0x10ac) = 0;
            *(undefined4 *)(param_1 + 0x10b0) = 0xffffffff;
            *(undefined4 *)(param_1 + 0x90) = 0;
            if (pbVar16 != (byte *)0x0) {
              pbVar17 = pbVar16 + 8;
              uVar9 = (uint)pbVar16[2] << 0x10 | (uint)pbVar16[3] << 0x18 | (uint)*pbVar16 |
                      (uint)pbVar16[1] << 8;
              if (uVar9 < 8) {
                lVar23 = 0;
                *(undefined4 *)(param_1 + 0x10a8) = 0;
              }
              else {
                do {
                  uVar22 = (uint)pbVar17[1] << 0x10 | (uint)*pbVar17 << 0x18 | (uint)pbVar17[3] |
                           (uint)pbVar17[2] << 8;
                  uVar14 = (uint)pbVar17[6] << 0x10 | (uint)pbVar17[7] << 0x18 | (uint)pbVar17[4] |
                           (uint)pbVar17[5] << 8;
                  if (uVar22 == 0x4c495354) {
                    pbVar16 = pbVar17 + 4;
                    uVar22 = (uint)pbVar17[9] << 0x10 | (uint)pbVar17[8] << 0x18 |
                             (uint)pbVar17[0xb] | (uint)pbVar17[10] << 8;
                    if (uVar22 == 0x6c617274) {
                      *(byte **)(param_1 + 0x10c0) = pbVar16;
                    }
                    else if (uVar22 == 0x6c72676e) {
                      *(byte **)(param_1 + 0x10b8) = pbVar16;
                    }
                    else if (uVar22 == 0x6c617232) {
                      *(byte **)(param_1 + 0x10c8) = pbVar16;
                    }
                  }
                  else if (uVar22 == 0x696e7368) {
                    uVar4 = (uint)pbVar17[10] << 0x10 | (uint)pbVar17[0xb] << 0x18 |
                            (uint)pbVar17[8] | (uint)pbVar17[9] << 8;
                    uVar22 = 0x80;
                    if (uVar4 < 0x80) {
                      uVar22 = uVar4;
                    }
                    *(uint *)(param_1 + 0x10ac) = uVar22;
                    *(uint *)(param_1 + 0x10b0) =
                         (uint)pbVar17[0xe] << 0x10 | (pbVar17[0xf] & 0x7f) << 0x18 |
                         (uint)pbVar17[0xc] | (uint)pbVar17[0xd] << 8;
                    *(uint *)(param_1 + 0x10b4) =
                         (uint)pbVar17[0x12] << 0x10 | (uint)pbVar17[0x13] << 0x18 |
                         (uint)pbVar17[0x10] | (uint)pbVar17[0x11] << 8;
                  }
                  uVar9 = uVar9 + (-8 - uVar14);
                  pbVar17 = pbVar17 + ((ulong)uVar14 & 1) + (ulong)uVar14 + 8;
                } while (7 < uVar9);
                lVar23 = *(long *)(param_1 + 0x10b8);
                *(undefined4 *)(param_1 + 0x10a8) = 0;
              }
LAB_001ac7dc:
              if (lVar23 != 0) {
LAB_001ac7e0:
                do {
                  uVar20 = *(uint *)(param_1 + 0x10ac);
                  uVar7 = *(uint *)(param_1 + 0x90);
                  uVar9 = uVar20 - 1;
LAB_001ac7f0:
                  do {
                    do {
                      do {
                        do {
                          do {
                            uVar22 = uVar7;
                            do {
                              if (uVar20 <= uVar22) {
                                uVar20 = *(uint *)(param_1 + 0x8c);
                                uVar7 = *(uint *)p_Var18;
                                goto LAB_001ac7b8;
                              }
                              uVar7 = uVar22 + 1;
                              *(uint *)(param_1 + 0x90) = uVar7;
                              if (uVar22 == 0) {
                                if (uVar20 != 0) {
                                  memset(param_1 + 0x18f8,0,((ulong)uVar9 + 1) * 8);
                                }
                                pbVar17 = *(byte **)(param_1 + 0x10b8);
                                uVar14 = 0;
                                pbVar16 = pbVar17 + 8;
                                for (uVar4 = (uint)pbVar17[2] << 0x10 | (uint)pbVar17[3] << 0x18 |
                                             (uint)*pbVar17 | (uint)pbVar17[1] << 8; 7 < uVar4;
                                    uVar4 = uVar4 + (-8 - uVar5)) {
                                  uVar5 = (uint)pbVar16[6] << 0x10 | (uint)pbVar16[7] << 0x18 |
                                          (uint)pbVar16[4] | (uint)pbVar16[5] << 8;
                                  if (((((uint)pbVar16[1] << 0x10 | (uint)*pbVar16 << 0x18 |
                                         (uint)pbVar16[3] | (uint)pbVar16[2] << 8) == 0x4c495354) &&
                                      ((uVar6 = (uint)pbVar16[9] << 0x10 | (uint)pbVar16[8] << 0x18
                                                | (uint)pbVar16[0xb] | (uint)pbVar16[10] << 8,
                                       uVar6 == 0x72676e20 || (uVar6 == 0x72676e32)))) &&
                                     (uVar14 != 0x80)) {
                                    uVar24 = (ulong)uVar14;
                                    uVar14 = uVar14 + 1;
                                    *(byte **)(p_Var18 + uVar24 * 8 + 0x1870) = pbVar16 + 4;
                                  }
                                  pbVar16 = pbVar16 + ((ulong)uVar5 & 1) + (ulong)uVar5 + 8;
                                }
                              }
                              pbVar16 = *(byte **)(p_Var18 + (ulong)uVar22 * 8 + 0x1870);
                              uVar22 = uVar7;
                            } while (pbVar16 == (byte *)0x0);
                            *(undefined8 *)(param_1 + 0x18e8) = 0;
                            *(undefined8 *)(param_1 + 0x18f0) = 0;
                            *(undefined8 *)(param_1 + 0x18e0) = 0;
                            pbVar17 = pbVar16 + 8;
                            *(undefined4 *)(param_1 + 0x18d0) = 0;
                            *(undefined4 *)(param_1 + 0x18d4) = 0x7f;
                            *(undefined4 *)(param_1 + 0x18d8) = 0xffffffff;
                            uVar22 = (uint)pbVar16[2] << 0x10 | (uint)pbVar16[3] << 0x18 |
                                     (uint)*pbVar16 | (uint)pbVar16[1] << 8;
joined_r0x001ac994:
                            if (7 < uVar22) {
                              do {
                                pbVar16 = pbVar17 + 8;
                                uVar14 = (uint)pbVar17[1] << 0x10 | (uint)*pbVar17 << 0x18 |
                                         (uint)pbVar17[3] | (uint)pbVar17[2] << 8;
                                uVar4 = (uint)pbVar17[6] << 0x10 | (uint)pbVar17[7] << 0x18 |
                                        (uint)pbVar17[4] | (uint)pbVar17[5] << 8;
                                if (uVar14 == 0x72676e68) {
                                  *(uint *)(param_1 + 0x18d0) = (uint)*(ushort *)(pbVar17 + 8);
                                  *(uint *)(param_1 + 0x18d4) = (uint)*(ushort *)(pbVar17 + 10);
                                }
                                else if (uVar14 < 0x72676e69) {
                                  if (uVar14 == 0x4c495354) {
                                    uVar14 = (uint)pbVar17[9] << 0x10 | (uint)pbVar17[8] << 0x18 |
                                             (uint)pbVar17[0xb] | (uint)pbVar17[10] << 8;
                                    if (uVar14 == 0x6c617232) {
                                      *(byte **)(param_1 + 0x18f0) = pbVar17 + 4;
                                    }
                                    else if (uVar14 == 0x6c617274) goto code_r0x001aca94;
                                  }
                                }
                                else if (uVar14 == 0x776c6e6b) {
                                  *(uint *)(param_1 + 0x18d8) =
                                       (uint)pbVar17[0x12] << 0x10 | (uint)pbVar17[0x13] << 0x18 |
                                       (uint)pbVar17[0x10] | (uint)pbVar17[0x11] << 8;
                                }
                                else if (uVar14 == 0x77736d70) {
                                  *(byte **)(param_1 + 0x18e0) = pbVar16;
                                }
                                uVar22 = uVar22 + (-8 - uVar4);
                                pbVar17 = pbVar16 + ((ulong)uVar4 & 1) + (ulong)uVar4;
                                if (uVar22 < 8) break;
                              } while( true );
                            }
                            iVar11 = *(int *)(param_1 + 0x10b0);
                          } while ((iVar11 == -1) || (*(uint *)(param_1 + 0x18d8) == 0xffffffff));
                          lVar23 = *(long *)(param_1 + 0x18e0);
                          uVar24 = (ulong)*(uint *)(param_1 + 0x18d8);
                        } while (((lVar23 == 0) && (*(long *)(p_Var18 + uVar24 * 0x20 + 0x28) == 0))
                                || ((lVar19 = uVar24 * 0x20, *(int *)(p_Var18 + lVar19 + 0x3c) == -1
                                    || (pbVar16 = *(byte **)(param_1 + lVar19 + 0xa8),
                                       pbVar16 == (byte *)0x0))));
                        iVar12 = (uint)pbVar16[1] * 0x100 + (uint)*pbVar16;
                        if ((iVar12 != 1) && ((iVar12 == 0 || (1 < iVar12 - 6U))))
                        goto LAB_001ac7e0;
                      } while ((uint)pbVar16[3] * 0x100 + (uint)pbVar16[2] != 1);
                      iVar12 = (uint)pbVar16[0xf] * 0x100 + (uint)pbVar16[0xe];
                      if ((iVar12 != 8) && (iVar12 != 0x10)) goto LAB_001ac7e0;
                    } while (48000 < ((uint)pbVar16[6] << 0x10 | (uint)pbVar16[7] << 0x18 |
                                      (uint)pbVar16[4] | (uint)pbVar16[5] << 8));
                    if (lVar23 == 0) {
                      lVar23 = *(long *)(param_1 + lVar19 + 0xb0);
                    }
                    local_38 = *(undefined4 *)(param_1 + 0x18d0);
                    local_34 = *(undefined4 *)(param_1 + 0x18d4);
                    pbVar17 = *(byte **)(param_1 + 0x10c8);
                    local_1c = 1;
                    if (pbVar17 == (byte *)0x0) {
LAB_001acc5c:
                      pbVar17 = *(byte **)(param_1 + 0x10c0);
                      local_1c = 0;
                      if (pbVar17 == (byte *)0x0) {
                        pbVar17 = (byte *)0x0;
                      }
                      else {
                        pbVar15 = pbVar17 + 8;
                        for (uVar22 = (uint)pbVar17[2] << 0x10 | (uint)pbVar17[3] << 0x18 |
                                      (uint)*pbVar17 | (uint)pbVar17[1] << 8; 7 < uVar22;
                            uVar22 = uVar22 + (-8 - uVar14)) {
                          pbVar17 = pbVar15 + 8;
                          if (((uint)pbVar15[1] << 0x10 | (uint)*pbVar15 << 0x18 | (uint)pbVar15[3]
                              | (uint)pbVar15[2] << 8) + 0x9e8d8bcf < 2) goto LAB_001acd7c;
                          uVar14 = (uint)pbVar15[7] << 0x18 | (uint)pbVar15[6] << 0x10 |
                                   (uint)pbVar15[4] | (uint)pbVar15[5] << 8;
                          pbVar15 = pbVar17 + ((ulong)uVar14 & 1) + (ulong)uVar14;
                        }
                        pbVar17 = (byte *)0x0;
                      }
                    }
                    else {
                      pbVar15 = pbVar17 + 8;
                      uVar22 = (uint)pbVar17[2] << 0x10 | (uint)pbVar17[3] << 0x18 | (uint)*pbVar17
                               | (uint)pbVar17[1] << 8;
                      while( true ) {
                        if (uVar22 < 8) goto LAB_001acc5c;
                        pbVar17 = pbVar15 + 8;
                        if (((uint)pbVar15[1] << 0x10 | (uint)*pbVar15 << 0x18 | (uint)pbVar15[3] |
                            (uint)pbVar15[2] << 8) == 0x61727432) break;
                        uVar14 = (uint)pbVar15[7] << 0x18 | (uint)pbVar15[6] << 0x10 |
                                 (uint)pbVar15[4] | (uint)pbVar15[5] << 8;
                        uVar22 = uVar22 + (-8 - uVar14);
                        pbVar15 = pbVar17 + ((ulong)uVar14 & 1) + (ulong)uVar14;
                      }
                      if (pbVar17 == (byte *)0x0) goto LAB_001acc5c;
                    }
LAB_001acd7c:
                    pbVar15 = *(byte **)(param_1 + 0x18f0);
                    if (pbVar15 == (byte *)0x0) {
                      pbVar15 = *(byte **)(param_1 + 0x18e8);
                      if (pbVar15 != (byte *)0x0) {
                        local_1c = 0;
                        pbVar2 = pbVar15 + 8;
                        uVar22 = (uint)pbVar15[2] << 0x10 | (uint)pbVar15[3] << 0x18 |
                                 (uint)*pbVar15 | (uint)pbVar15[1] << 8;
                        while( true ) {
                          if (uVar22 < 8) goto LAB_001ace2c;
                          pbVar17 = pbVar2 + 8;
                          if (((uint)pbVar2[1] << 0x10 | (uint)*pbVar2 << 0x18 | (uint)pbVar2[3] |
                              (uint)pbVar2[2] << 8) + 0x9e8d8bcf < 2) break;
                          uVar14 = (uint)pbVar2[7] << 0x18 | (uint)pbVar2[6] << 0x10 |
                                   (uint)pbVar2[4] | (uint)pbVar2[5] << 8;
                          uVar22 = uVar22 + (-8 - uVar14);
                          pbVar2 = pbVar17 + ((ulong)uVar14 & 1) + (ulong)uVar14;
                        }
                      }
                    }
                    else {
                      local_1c = 1;
                      pbVar2 = pbVar15 + 8;
                      for (uVar22 = (uint)pbVar15[2] << 0x10 | (uint)pbVar15[3] << 0x18 |
                                    (uint)*pbVar15 | (uint)pbVar15[1] << 8; 7 < uVar22;
                          uVar22 = uVar22 + (-8 - uVar14)) {
                        pbVar17 = pbVar2 + 8;
                        if (((uint)pbVar2[1] << 0x10 | (uint)*pbVar2 << 0x18 | (uint)pbVar2[3] |
                            (uint)pbVar2[2] << 8) == 0x61727432) goto LAB_001ace30;
                        uVar14 = (uint)pbVar2[7] << 0x18 | (uint)pbVar2[6] << 0x10 | (uint)pbVar2[4]
                                 | (uint)pbVar2[5] << 8;
                        pbVar2 = pbVar17 + ((ulong)uVar14 & 1) + (ulong)uVar14;
                      }
LAB_001ace2c:
                      pbVar17 = (byte *)0x0;
                    }
LAB_001ace30:
                    local_3c = *(undefined4 *)(param_1 + 0x10b4);
                    uVar22 = *(uint *)(p_Var18 + uVar24 * 0x20 + 0x38);
                    local_30 = *(undefined4 *)(p_Var18 + uVar24 * 0x20 + 0x3c);
                    local_40 = iVar11;
                  } while (uVar22 < 3);
                  uVar7 = (uint)*(byte *)(lVar23 + 0x22) << 0x10 |
                          (uint)*(byte *)(lVar23 + 0x23) << 0x18 | (uint)*(byte *)(lVar23 + 0x20) |
                          (uint)*(byte *)(lVar23 + 0x21) << 8;
                  if (uVar7 < 2) {
                    local_2c = uVar22;
                    local_28 = uVar22;
                    if ((uint)pbVar16[0xf] * 0x100 + (uint)pbVar16[0xe] == 0x10) {
                      local_2c = uVar22 >> 1;
                      local_28 = local_2c;
                    }
                  }
                  else {
                    local_2c = (uint)*(byte *)(lVar23 + 0x1e) << 0x10 |
                               (uint)*(byte *)(lVar23 + 0x1f) << 0x18 |
                               (uint)*(byte *)(lVar23 + 0x1c) | (uint)*(byte *)(lVar23 + 0x1d) << 8;
                    local_28 = local_2c + uVar7;
                  }
                  if (((uint)pbVar16[1] * 0x100 + (uint)*pbVar16) - 6 < 2) {
                    local_24 = 0x10;
                  }
                  else {
                    local_24 = (uint)*(ushort *)(pbVar16 + 0xe);
                  }
                  local_20 = (uint)pbVar16[6] << 0x10 | (uint)pbVar16[7] << 0x18 | (uint)pbVar16[4]
                             | (uint)pbVar16[5] << 8;
                  uVar7 = (uint)*(byte *)(lVar23 + 5) * 0x100 + (uint)*(byte *)(lVar23 + 4);
                  if (0x7f < uVar7) {
LAB_001acd60:
                    uVar20 = *(uint *)(param_1 + 0x10ac);
                    uVar7 = *(uint *)(param_1 + 0x90);
                    uVar9 = uVar20 - 1;
                    goto LAB_001ac7f0;
                  }
                  *(char *)((long)param_4 + 0x30) = (char)uVar7;
                  if (pbVar17 == (byte *)0x0) {
                    local_10 = 0;
                    local_18 = (byte *)0x0;
                  }
                  else {
                    uVar7 = (uint)pbVar17[2] << 0x10 | (uint)pbVar17[3] << 0x18 | (uint)*pbVar17 |
                            (uint)pbVar17[1] << 8;
                    if (uVar7 < 8) goto LAB_001acd60;
                    local_18 = pbVar17 + uVar7;
                    local_10 = ((uint)pbVar17[6] << 0x10 | (uint)pbVar17[7] << 0x18 |
                                (uint)pbVar17[4] | (uint)pbVar17[5] << 8) * 0xc;
                    if (0xbff < local_10) {
                      local_10 = 0xc00;
                    }
                  }
                  uVar7 = xmf_SetVoiceBuffer(param_4,(_MAXMFCNV_PRM *)&local_40);
                  if (-1 < (int)uVar7) goto switchD_001abd1c_default;
                } while( true );
              }
            }
LAB_001ac7b8:
            uVar20 = uVar20 + 1;
            *(uint *)(param_1 + 0x8c) = uVar20;
            *(undefined4 *)(param_1 + 0x10a8) = 1;
          } while (uVar20 < uVar7);
        }
        goto LAB_001ac558;
      }
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x10a8) = 1;
      memset(param_1 + 0x10d0,0,0x800);
      p_Var8 = param_1 + 0xa8;
      do {
        *(undefined8 *)p_Var8 = 0;
        *(undefined8 *)(p_Var8 + 8) = 0;
        *(undefined8 *)(p_Var8 + 0x10) = 0;
        *(undefined4 *)(p_Var8 + 0x18) = 0;
        *(undefined4 *)(p_Var8 + 0x1c) = 0xffffffff;
        *(undefined8 *)(p_Var8 + 0x20) = 0;
        *(undefined8 *)(p_Var8 + 0x28) = 0;
        p_Var1 = p_Var8 + 0x100;
        *(undefined8 *)(p_Var8 + 0x30) = 0;
        *(undefined4 *)(p_Var8 + 0x38) = 0;
        *(undefined4 *)(p_Var8 + 0x3c) = 0xffffffff;
        *(undefined8 *)(p_Var8 + 0x40) = 0;
        *(undefined8 *)(p_Var8 + 0x48) = 0;
        *(undefined8 *)(p_Var8 + 0x50) = 0;
        *(undefined4 *)(p_Var8 + 0x58) = 0;
        *(undefined4 *)(p_Var8 + 0x5c) = 0xffffffff;
        *(undefined8 *)(p_Var8 + 0x60) = 0;
        *(undefined8 *)(p_Var8 + 0x68) = 0;
        *(undefined8 *)(p_Var8 + 0x70) = 0;
        *(undefined4 *)(p_Var8 + 0x78) = 0;
        *(undefined4 *)(p_Var8 + 0x7c) = 0xffffffff;
        *(undefined8 *)(p_Var8 + 0x80) = 0;
        *(undefined8 *)(p_Var8 + 0x88) = 0;
        *(undefined8 *)(p_Var8 + 0x90) = 0;
        *(undefined4 *)(p_Var8 + 0x98) = 0;
        *(undefined4 *)(p_Var8 + 0x9c) = 0xffffffff;
        *(undefined8 *)(p_Var8 + 0xa0) = 0;
        *(undefined8 *)(p_Var8 + 0xa8) = 0;
        *(undefined8 *)(p_Var8 + 0xb0) = 0;
        *(undefined4 *)(p_Var8 + 0xb8) = 0;
        *(undefined4 *)(p_Var8 + 0xbc) = 0xffffffff;
        *(undefined8 *)(p_Var8 + 0xc0) = 0;
        *(undefined8 *)(p_Var8 + 200) = 0;
        *(undefined8 *)(p_Var8 + 0xd0) = 0;
        *(undefined4 *)(p_Var8 + 0xd8) = 0;
        *(undefined4 *)(p_Var8 + 0xdc) = 0xffffffff;
        *(undefined8 *)(p_Var8 + 0xe0) = 0;
        *(undefined8 *)(p_Var8 + 0xe8) = 0;
        *(undefined8 *)(p_Var8 + 0xf0) = 0;
        *(undefined4 *)(p_Var8 + 0xf8) = 0;
        *(undefined4 *)(p_Var8 + 0xfc) = 0xffffffff;
        p_Var8 = p_Var1;
      } while (p_Var1 != param_1 + 0x10a8);
      pbVar16 = *(byte **)(param_1 + 0x48);
      uVar20 = *(uint *)(param_1 + 0x50);
      if ((pbVar16 != (byte *)0x0) && (uVar20 != 0)) {
        if (((uint)pbVar16[1] << 0x10 | (uint)*pbVar16 << 0x18 | (uint)pbVar16[3] |
            (uint)pbVar16[2] << 8) == 0x52494646) {
          uVar9 = (uint)pbVar16[6] << 0x10 | (uint)pbVar16[7] << 0x18 | (uint)pbVar16[4] |
                  (uint)pbVar16[5] << 8;
          if ((uVar9 == 0) || (uVar20 < uVar9)) goto LAB_001adab8;
          if (((uint)pbVar16[9] << 0x10 | (uint)pbVar16[8] << 0x18 | (uint)pbVar16[0xb] |
              (uint)pbVar16[10] << 8) == 0x444c5320) {
            if (uVar9 < 4) goto LAB_001adab8;
            uVar9 = uVar9 - 4;
            pbVar16 = pbVar16 + 0xc;
            uVar7 = 0;
            if (8 < uVar9) {
              do {
                uVar22 = (uint)pbVar16[6] << 0x10 | (uint)pbVar16[7] << 0x18 | (uint)pbVar16[4] |
                         (uint)pbVar16[5] << 8;
                uVar7 = (uint)pbVar16[1] << 0x10 | (uint)*pbVar16 << 0x18 | (uint)pbVar16[3] |
                        (uint)pbVar16[2] << 8;
                if (((uVar22 < 4) || (uVar20 < uVar22)) || (uVar9 < uVar22 + 8)) goto LAB_001adab8;
                if (uVar7 == 0x636f6c68) {
                  uVar7 = (uint)pbVar16[10] << 0x10 | (uint)pbVar16[0xb] << 0x18 | (uint)pbVar16[8]
                          | (uint)pbVar16[9] << 8;
                  if (0x100 < uVar7) {
                    uVar7 = 0x100;
                  }
                  *(uint *)(param_1 + 0x88) = uVar7;
                }
                else if (uVar7 == 0x7074626c) {
                  *(uint *)(param_1 + 0xa0) =
                       (uint)pbVar16[0xe] << 0x10 | (uint)pbVar16[0xf] << 0x18 | (uint)pbVar16[0xc]
                       | (uint)pbVar16[0xd] << 8;
                }
                else if ((uVar7 == 0x4c495354) &&
                        (uVar7 = FUN_001aa934(param_1,pbVar16 + 8,uVar22), (int)uVar7 < 0))
                goto switchD_001abd1c_default;
                uVar9 = uVar9 + (-8 - uVar22);
                pbVar16 = pbVar16 + 8 + ((ulong)uVar22 & 1) + (ulong)uVar22;
              } while (8 < uVar9);
              uVar7 = *(int *)(param_1 + 0x8c) + 1;
              if (uVar7 != *(uint *)(param_1 + 0x88)) goto LAB_001adfdc;
            }
            if (*(int *)(param_1 + 0x98) == *(int *)(param_1 + 0xa0)) {
              *(undefined4 *)(param_1 + 0x8c) = 0;
              *(undefined4 *)(param_1 + 0x10) = 1;
              uVar20 = 0;
              goto LAB_001ac5d4;
            }
          }
        }
        goto LAB_001adfdc;
      }
    }
LAB_001ac3d8:
    uVar7 = 0xfffffffe;
  }
  goto switchD_001abd1c_default;
code_r0x001aca94:
  *(byte **)(param_1 + 0x18e8) = pbVar17 + 4;
  uVar22 = uVar22 + (-8 - uVar4);
  pbVar17 = pbVar16 + ((ulong)uVar4 & 1) + (ulong)uVar4;
  goto joined_r0x001ac994;
  while( true ) {
    bVar3 = *(byte *)(uVar24 + uVar22 + (ulong)uVar20);
    uVar20 = uVar20 + 1;
    uVar9 = (bVar3 & 0x7f) + uVar9 * 0x80;
    if (-1 < (char)bVar3) break;
LAB_001ad848:
    if ((3 < uVar20) || (uVar7 - uVar22 <= uVar20)) goto LAB_001abe28;
  }
  if ((uVar20 <= uVar14) && (uVar9 != 6)) {
    uVar7 = 0;
    if ((uVar9 & 1) != 0) goto switchD_001abd1c_default;
    lVar19 = *(long *)((long)param_4 + 8);
    lVar23 = uVar24 + (uVar20 + uVar22);
    if (lVar23 == 0) goto switchD_001abd1c_default;
    if ((uVar14 != uVar20) && (*(int *)((long)param_4 + 0x10) != 0)) {
      lVar13 = 0;
      uVar24 = 0;
      do {
        uVar7 = (int)uVar24 + 1;
        uVar24 = (ulong)uVar7;
        *(undefined1 *)(lVar19 + lVar13) = *(undefined1 *)(lVar23 + lVar13);
        lVar13 = lVar13 + 1;
        if (uVar14 - uVar20 <= uVar7) break;
      } while (uVar7 < *(uint *)((long)param_4 + 0x10));
      goto LAB_001ac450;
    }
  }
  goto LAB_001ad2f4;
  while( true ) {
    bVar3 = *(byte *)(uVar24 + uVar22 + (ulong)uVar20);
    uVar20 = uVar20 + 1;
    uVar9 = (bVar3 & 0x7f) + uVar9 * 0x80;
    if (-1 < (char)bVar3) break;
LAB_001ad5e0:
    if ((3 < uVar20) || (uVar7 - uVar22 <= uVar20)) goto LAB_001abe28;
  }
  if ((uVar20 <= uVar14) && (uVar9 != 6)) {
    uVar7 = 0;
    if ((uVar9 & 1) != 0) goto switchD_001abd1c_default;
    lVar19 = *(long *)((long)param_4 + 8);
    lVar23 = uVar24 + (uVar20 + uVar22);
    if (lVar23 == 0) goto switchD_001abd1c_default;
    if ((uVar14 != uVar20) && (*(int *)((long)param_4 + 0x10) != 0)) {
      lVar13 = 0;
      uVar24 = 0;
      do {
        uVar7 = (int)uVar24 + 1;
        uVar24 = (ulong)uVar7;
        *(undefined1 *)(lVar19 + lVar13) = *(undefined1 *)(lVar23 + lVar13);
        lVar13 = lVar13 + 1;
        if (uVar14 - uVar20 <= uVar7) break;
      } while (uVar7 < *(uint *)((long)param_4 + 0x10));
      goto LAB_001ac450;
    }
  }
  goto LAB_001ad2f4;
  while( true ) {
    bVar3 = *(byte *)(uVar24 + uVar22 + (ulong)uVar20);
    uVar20 = uVar20 + 1;
    uVar9 = (bVar3 & 0x7f) + uVar9 * 0x80;
    if (-1 < (char)bVar3) break;
LAB_001adf48:
    if ((3 < uVar20) || (uVar7 - uVar22 <= uVar20)) goto LAB_001abe28;
  }
  if ((uVar9 != 6) && (uVar20 <= uVar14)) {
    uVar7 = 0;
    if ((uVar9 & 1) != 0) goto switchD_001abd1c_default;
    lVar19 = *(long *)((long)param_4 + 8);
    lVar23 = uVar24 + (uVar20 + uVar22);
    if (lVar23 == 0) goto switchD_001abd1c_default;
    if ((uVar14 != uVar20) && (*(int *)((long)param_4 + 0x10) != 0)) {
      lVar13 = 0;
      uVar24 = 0;
      do {
        uVar7 = (int)uVar24 + 1;
        uVar24 = (ulong)uVar7;
        *(undefined1 *)(lVar19 + lVar13) = *(undefined1 *)(lVar23 + lVar13);
        lVar13 = lVar13 + 1;
        if (uVar14 - uVar20 <= uVar7) break;
      } while (uVar7 < *(uint *)((long)param_4 + 0x10));
      goto LAB_001ac450;
    }
  }
  goto LAB_001ad2f4;
  while( true ) {
    bVar3 = *(byte *)(uVar24 + uVar22 + (ulong)uVar20);
    uVar20 = uVar20 + 1;
    uVar9 = (bVar3 & 0x7f) + uVar9 * 0x80;
    if (-1 < (char)bVar3) break;
LAB_001adce0:
    if ((3 < uVar20) || (uVar7 - uVar22 <= uVar20)) goto LAB_001abe28;
  }
  if ((uVar9 != 6) && (uVar20 <= uVar14)) {
    uVar7 = 0;
    if ((uVar9 & 1) != 0) goto switchD_001abd1c_default;
    lVar19 = *(long *)((long)param_4 + 8);
    lVar23 = uVar24 + (uVar20 + uVar22);
    if (lVar23 == 0) goto switchD_001abd1c_default;
    if ((uVar14 != uVar20) && (*(int *)((long)param_4 + 0x10) != 0)) {
      lVar13 = 0;
      uVar24 = 0;
      do {
        uVar7 = (int)uVar24 + 1;
        uVar24 = (ulong)uVar7;
        *(undefined1 *)(lVar19 + lVar13) = *(undefined1 *)(lVar23 + lVar13);
        lVar13 = lVar13 + 1;
        if (uVar14 - uVar20 <= uVar7) break;
      } while (uVar7 < *(uint *)((long)param_4 + 0x10));
      goto LAB_001ac450;
    }
  }
  goto LAB_001ad2f4;
  while( true ) {
    bVar3 = *(byte *)(uVar24 + uVar22 + (ulong)uVar20);
    uVar20 = uVar20 + 1;
    uVar9 = (bVar3 & 0x7f) + uVar9 * 0x80;
    if (-1 < (char)bVar3) break;
LAB_001ad368:
    if ((3 < uVar20) || (uVar7 - uVar22 <= uVar20)) goto LAB_001abe28;
  }
  if ((uVar9 != 6) && (uVar20 <= uVar14)) {
    uVar7 = 0;
    if ((uVar9 & 1) != 0) goto switchD_001abd1c_default;
    lVar19 = *(long *)((long)param_4 + 8);
    lVar23 = uVar24 + (uVar20 + uVar22);
    if (lVar23 == 0) goto switchD_001abd1c_default;
    if ((uVar14 != uVar20) && (*(int *)((long)param_4 + 0x10) != 0)) {
      lVar13 = 0;
      uVar24 = 0;
      do {
        uVar7 = (int)uVar24 + 1;
        uVar24 = (ulong)uVar7;
        *(undefined1 *)(lVar19 + lVar13) = *(undefined1 *)(lVar23 + lVar13);
        lVar13 = lVar13 + 1;
        if (uVar14 - uVar20 <= uVar7) break;
      } while (uVar7 < *(uint *)((long)param_4 + 0x10));
      goto LAB_001ac450;
    }
  }
  goto LAB_001ad2f4;
LAB_001ad3fc:
  uVar7 = 0;
  goto switchD_001abd1c_default;
  while( true ) {
    bVar3 = *(byte *)(uVar24 + uVar22 + (ulong)uVar20);
    uVar20 = uVar20 + 1;
    uVar9 = (bVar3 & 0x7f) + uVar9 * 0x80;
    if (-1 < (char)bVar3) break;
LAB_001ada24:
    if ((3 < uVar20) || (uVar7 - uVar22 <= uVar20)) goto LAB_001abe28;
  }
  if ((uVar9 != 6) && (uVar20 <= uVar14)) {
    uVar7 = 0;
    if ((uVar9 & 1) != 0) goto switchD_001abd1c_default;
    lVar19 = *(long *)((long)param_4 + 8);
    lVar23 = uVar24 + (uVar20 + uVar22);
    if (lVar23 == 0) goto switchD_001abd1c_default;
    if ((uVar14 != uVar20) && (*(int *)((long)param_4 + 0x10) != 0)) {
      lVar13 = 0;
      uVar24 = 0;
      do {
        uVar7 = (int)uVar24 + 1;
        uVar24 = (ulong)uVar7;
        *(undefined1 *)(lVar19 + lVar13) = *(undefined1 *)(lVar23 + lVar13);
        lVar13 = lVar13 + 1;
        if (uVar14 - uVar20 <= uVar7) break;
      } while (uVar7 < *(uint *)((long)param_4 + 0x10));
      goto LAB_001ac450;
    }
  }
LAB_001ad2f4:
  uVar7 = 0;
switchD_001abd1c_default:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

