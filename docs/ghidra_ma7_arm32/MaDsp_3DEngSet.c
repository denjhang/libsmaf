/* MaDsp_3DEngSet @ 001043e8 4060B */


/* WARNING: Removing unreachable block (ram,0x00104eba) */
/* WARNING: Removing unreachable block (ram,0x00104f30) */
/* WARNING: Removing unreachable block (ram,0x00104e42) */
/* YAMAHA::MaDsp_3DEngSet(_MASMW_P3DASNDSRCCTRL*, _MASMW_P3DASNDSRCCTRL*, _MASMW_P3DASNDSRCMOVE*) */

void YAMAHA::MaDsp_3DEngSet
               (_MASMW_P3DASNDSRCCTRL *param_1,_MASMW_P3DASNDSRCCTRL *param_2,
               _MASMW_P3DASNDSRCMOVE *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  uVar12 = *(uint *)param_1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_3 + 0xf4) = 0;
  *(undefined4 *)(param_3 + 0xf0) = 0;
  *(undefined4 *)(param_3 + 0xec) = 0;
  if ((uVar12 & 1) != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    *(int *)(param_2 + 0x28) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(param_3 + 0xec) = 0;
switchD_001044b6_default:
      uVar3 = 1;
    }
    else {
      uVar7 = (iVar4 + 0x13) / 0x14 + 1;
      *(uint *)(param_3 + 0xec) = uVar7;
      if (uVar7 == 0) goto switchD_001044b6_default;
      if ((uVar7 & 0x80000000) == 0x80000000) {
        if ((uVar7 & 0xffff8000) != 0xffff8000) {
          if (-1 < (int)(uVar7 * 2)) goto LAB_001051c4;
          if (-1 < (int)(uVar7 * 4)) goto LAB_001051de;
          if (-1 < (int)(uVar7 * 8)) goto LAB_00105082;
          if (-1 < (int)(uVar7 * 0x10)) goto LAB_001051e8;
          if (-1 < (int)(uVar7 * 0x20)) goto LAB_00105250;
          if (-1 < (int)(uVar7 * 0x40)) goto LAB_00105266;
          if (-1 < (int)(uVar7 * 0x80)) goto LAB_00105334;
          if (-1 < (int)(uVar7 * 0x100)) goto LAB_0010533a;
          if (-1 < (int)(uVar7 * 0x200)) goto LAB_00105354;
          if (-1 < (int)(uVar7 * 0x400)) goto LAB_00105362;
          if (-1 < (int)(uVar7 * 0x800)) goto LAB_00105384;
          if (-1 < (int)(uVar7 * 0x1000)) goto LAB_00105396;
          if (-1 < (int)(uVar7 * 0x2000)) goto LAB_0010539c;
          if (-1 < (int)(uVar7 * 0x4000)) goto LAB_001053ba;
          if (-1 < (int)(uVar7 * 0x8000)) goto LAB_001053d4;
          if (-1 < (int)(uVar7 * 0x10000)) goto LAB_00104bf8;
LAB_001044ae:
          uVar3 = 0;
          goto LAB_001044b0;
        }
        goto switchD_001044b6_default;
      }
      if ((uVar7 & 0xffff8000) == 0) goto switchD_001044b6_default;
      if ((int)(uVar7 * 2) < 0) {
LAB_001051c4:
        uVar3 = 0x10;
      }
      else if ((int)(uVar7 * 4) < 0) {
LAB_001051de:
        uVar3 = 0xf;
      }
      else if ((int)(uVar7 * 8) < 0) {
LAB_00105082:
        uVar3 = 0xe;
      }
      else if ((int)(uVar7 * 0x10) < 0) {
LAB_001051e8:
        uVar3 = 0xd;
      }
      else if ((int)(uVar7 * 0x20) < 0) {
LAB_00105250:
        uVar3 = 0xc;
      }
      else if ((int)(uVar7 * 0x40) < 0) {
LAB_00105266:
        uVar3 = 0xb;
      }
      else if ((int)(uVar7 * 0x80) < 0) {
LAB_00105334:
        uVar3 = 10;
      }
      else if ((int)(uVar7 * 0x100) < 0) {
LAB_0010533a:
        uVar3 = 9;
      }
      else if ((int)(uVar7 * 0x200) < 0) {
LAB_00105354:
        uVar3 = 8;
      }
      else if ((int)(uVar7 * 0x400) < 0) {
LAB_00105362:
        uVar3 = 7;
      }
      else if ((int)(uVar7 * 0x800) < 0) {
LAB_00105384:
        uVar3 = 6;
      }
      else if ((int)(uVar7 * 0x1000) < 0) {
LAB_00105396:
        uVar3 = 5;
      }
      else if ((int)(uVar7 * 0x2000) < 0) {
LAB_0010539c:
        uVar3 = 4;
      }
      else if ((int)(uVar7 * 0x4000) < 0) {
LAB_001053ba:
        uVar3 = 3;
      }
      else if ((int)(uVar7 * 0x8000) < 0) {
LAB_001053d4:
        uVar3 = 2;
      }
      else {
        if (-1 < (int)(uVar7 * 0x10000)) goto LAB_001044ae;
LAB_00104bf8:
        uVar3 = 1;
      }
LAB_001044b0:
      switch(uVar3) {
      case 1:
        uVar3 = 2;
        break;
      case 2:
        uVar3 = 4;
        break;
      case 3:
        uVar3 = 8;
        break;
      case 4:
        uVar3 = 0x10;
        break;
      case 5:
        uVar3 = 0x20;
        break;
      case 6:
        uVar3 = 0x40;
        break;
      case 7:
        uVar3 = 0x80;
        break;
      case 8:
        uVar3 = 0x100;
        break;
      case 9:
        uVar3 = 0x200;
        break;
      case 10:
        uVar3 = 0x400;
        break;
      case 0xb:
        uVar3 = 0x800;
        break;
      case 0xc:
        uVar3 = 0x1000;
        break;
      case 0xd:
        uVar3 = 0x2000;
        break;
      case 0xe:
        uVar3 = 0x4000;
        break;
      case 0xf:
        uVar3 = 0x8000;
        break;
      case 0x10:
        uVar3 = 0x10000;
        break;
      default:
        goto switchD_001044b6_default;
      }
    }
    *(undefined4 *)(param_3 + 0xf8) = uVar3;
  }
  if ((uVar12 & 4) != 0) {
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  uVar7 = uVar12 & 2;
  if (uVar7 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    uVar5 = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_2 + 0x20) = uVar3;
    *(undefined4 *)(param_2 + 0x24) = uVar5;
    if (*(int *)(param_2 + 0x18) == 2) {
      uVar14 = *(uint *)(param_2 + 0x24);
      if ((int)uVar14 < 1) {
        iVar10 = 0;
        iVar4 = iVar10;
        iVar13 = iVar10;
      }
      else {
        if ((uVar14 & 0xffff8000) == 0) {
switchD_0010529a_default:
          iVar13 = 1;
        }
        else {
          if ((int)(uVar14 << 1) < 0) {
            uVar3 = 0x10;
          }
          else if ((int)(uVar14 << 2) < 0) {
            uVar3 = 0xf;
          }
          else if ((int)(uVar14 << 3) < 0) {
            uVar3 = 0xe;
          }
          else if ((int)(uVar14 << 4) < 0) {
            uVar3 = 0xd;
          }
          else if ((int)(uVar14 << 5) < 0) {
            uVar3 = 0xc;
          }
          else if ((int)(uVar14 << 6) < 0) {
            uVar3 = 0xb;
          }
          else if ((int)(uVar14 << 7) < 0) {
            uVar3 = 10;
          }
          else if ((int)(uVar14 << 8) < 0) {
            uVar3 = 9;
          }
          else if ((int)(uVar14 << 9) < 0) {
            uVar3 = 8;
          }
          else if ((int)(uVar14 << 10) < 0) {
            uVar3 = 7;
          }
          else if ((int)(uVar14 << 0xb) < 0) {
            uVar3 = 6;
          }
          else if ((int)(uVar14 << 0xc) < 0) {
            uVar3 = 5;
          }
          else if ((int)(uVar14 << 0xd) < 0) {
            uVar3 = 4;
          }
          else if ((int)(uVar14 << 0xe) < 0) {
            uVar3 = 3;
          }
          else if ((int)(uVar14 << 0xf) < 0) {
            uVar3 = 2;
          }
          else {
            if (-1 < (int)(uVar14 << 0x10)) goto switchD_0010529a_default;
            uVar3 = 1;
          }
          switch(uVar3) {
          case 1:
            iVar13 = 2;
            break;
          case 2:
            iVar13 = 4;
            break;
          case 3:
            iVar13 = 8;
            break;
          case 4:
            iVar13 = 0x10;
            break;
          case 5:
            iVar13 = 0x20;
            break;
          case 6:
            iVar13 = 0x40;
            break;
          case 7:
            iVar13 = 0x80;
            break;
          case 8:
            iVar13 = 0x100;
            break;
          case 9:
            iVar13 = 0x200;
            break;
          case 10:
            iVar13 = 0x400;
            break;
          case 0xb:
            iVar13 = 0x800;
            break;
          case 0xc:
            iVar13 = 0x1000;
            break;
          case 0xd:
            iVar13 = 0x2000;
            break;
          case 0xe:
            iVar13 = 0x4000;
            break;
          case 0xf:
            iVar13 = 0x8000;
            break;
          case 0x10:
            iVar13 = 0x10000;
            break;
          default:
            goto switchD_0010529a_default;
          }
        }
        iVar4 = __divsi3(uVar14,iVar13);
        iVar6 = *(int *)(param_2 + 0x20);
        if ((iVar6 < 0xb5) && (-0xb5 < iVar6)) {
          iVar10 = iVar6 + 0x5a;
          if ((0xb4 < iVar10) && (iVar10 = iVar6 + -0x10e, iVar10 < -0xb4)) {
            iVar10 = 0;
            goto LAB_001050b6;
          }
          if (iVar10 < -0x59) goto LAB_001050b4;
          if (iVar10 < 0) {
            iVar10 = -*(int *)(DAT_00105470 + iVar10 * -4 + 0x105aae);
          }
          else if (iVar10 < 0x5b) {
            iVar10 = *(int *)(DAT_00105454 + iVar10 * 4 + 0x1059c0);
          }
          else {
            iVar10 = *(int *)(DAT_00105434 + (0xb4 - iVar10) * 4 + 0x10553c);
          }
        }
        else {
          iVar10 = -0x5a;
LAB_001050b4:
          iVar10 = iVar10 + 0xb4;
LAB_001050b6:
          iVar10 = -*(int *)(DAT_00105448 + iVar10 * 4 + 0x10593c);
        }
        iVar11 = *(int *)(param_2 + 0x1c);
        iVar1 = (iVar10 * iVar4) / 0x7fff;
        if (iVar11 < 0xb5) {
          if (iVar11 < -0xb4) {
            iVar10 = 0;
          }
          else {
            if (-0x5a < iVar11) {
              if (iVar11 < 0) {
                iVar10 = -*(int *)(DAT_0010546c + iVar11 * -4 + 0x105a9e);
              }
              else {
                if (0x5a < iVar11) {
                  iVar10 = 0xb4 - iVar11;
                  goto LAB_001050f6;
                }
                iVar10 = *(int *)(&UNK_001059f0 + DAT_00105460 + iVar11 * 4);
              }
              goto LAB_00104d08;
            }
            iVar10 = iVar11 + 0xb4;
          }
          iVar10 = -*(int *)(DAT_00105438 + iVar10 * 4 + 0x105580);
        }
        else {
          iVar10 = 0;
LAB_001050f6:
          iVar10 = *(int *)(DAT_00105450 + iVar10 * 4 + 0x10597e);
        }
LAB_00104d08:
        iVar10 = iVar13 * ((iVar10 * iVar1) / 0x7fff);
        if (iVar6 < 0xb5) {
          if (iVar6 < -0xb4) {
            iVar6 = 0;
          }
          else {
            if (-0x5a < iVar6) {
              if (iVar6 < 0) {
                iVar6 = -*(int *)(DAT_00105464 + iVar6 * -4 + 0x105a76);
              }
              else {
                if (0x5a < iVar6) {
                  iVar6 = 0xb4 - iVar6;
                  goto LAB_001050d6;
                }
                iVar6 = *(int *)(DAT_00105458 + iVar6 * 4 + 0x1059d0);
              }
              goto LAB_00104d4e;
            }
            iVar6 = iVar6 + 0xb4;
          }
          iVar6 = -*(int *)(DAT_0010543c + iVar6 * 4 + 0x1055c6);
        }
        else {
          iVar6 = 0;
LAB_001050d6:
          iVar6 = *(int *)(DAT_0010544c + iVar6 * 4 + 0x10595e);
        }
LAB_00104d4e:
        if ((iVar11 < 0xb5) && (-0xb5 < iVar11)) {
          iVar2 = iVar11 + 0x5a;
          if ((0xb4 < iVar2) && (iVar2 = iVar11 + -0x10e, iVar2 < -0xb4)) {
            iVar2 = 0;
            goto LAB_0010509e;
          }
          if (iVar2 < -0x59) goto LAB_0010509c;
          if (iVar2 < 0) {
            iVar11 = -*(int *)(DAT_00105468 + iVar2 * -4 + 0x105a8e);
          }
          else if (iVar2 < 0x5b) {
            iVar11 = *(int *)(DAT_0010545c + iVar2 * 4 + 0x1059e0);
          }
          else {
            iVar11 = *(int *)(DAT_00105440 + (0xb4 - iVar2) * 4 + 0x105622);
          }
        }
        else {
          iVar2 = -0x5a;
LAB_0010509c:
          iVar2 = iVar2 + 0xb4;
LAB_0010509e:
          iVar11 = -*(int *)(DAT_00105444 + iVar2 * 4 + 0x105926);
        }
        iVar4 = iVar13 * ((iVar6 * iVar4) / 0x7fff);
        iVar13 = iVar13 * ((iVar11 * iVar1) / 0x7fff);
      }
      *(int *)(param_2 + 0x1c) = iVar10;
      *(int *)(param_2 + 0x20) = iVar4;
      *(int *)(param_2 + 0x24) = iVar13;
    }
  }
  if ((int)(uVar12 << 0x1c) < 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 0x30) = uVar3;
    *(undefined4 *)(param_2 + 0x34) = uVar5;
    *(uint *)param_2 = *(uint *)param_2 | 8;
  }
  uVar14 = uVar12 & 0x10;
  if (uVar14 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0x3c) = uVar3;
    *(undefined4 *)(param_2 + 0x40) = uVar5;
  }
  if ((int)(uVar12 << 0x1a) < 0) {
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(uint *)param_2 = *(uint *)param_2 | 0x20;
  }
  if ((int)(uVar12 << 0x19) < 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x48);
    *(uint *)param_2 = *(uint *)param_2 | 0x40;
    *(undefined4 *)(param_2 + 0x48) = uVar3;
  }
  if ((int)(uVar12 << 0x18) < 0) {
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(uint *)param_2 = *(uint *)param_2 | 0x80;
  }
  if ((int)(uVar12 << 0x17) < 0) {
    uVar8 = *(uint *)(param_1 + 0x54);
    if (uVar8 < 100) {
      uVar8 = 100;
      *(undefined4 *)(param_2 + 0x54) = 100;
      *(uint *)param_2 = *(uint *)param_2 | 0x100;
LAB_0010458e:
      if ((uVar8 & 0xffff8000) == 0) goto switchD_00104606_default;
      if ((int)(uVar8 << 1) < 0) {
LAB_001051ca:
        uVar3 = 0x10;
      }
      else if ((int)(uVar8 << 2) < 0) {
LAB_001051d2:
        uVar3 = 0xf;
      }
      else if ((int)(uVar8 << 3) < 0) {
LAB_00105090:
        uVar3 = 0xe;
      }
      else if ((int)(uVar8 << 4) < 0) {
LAB_00105200:
        uVar3 = 0xd;
      }
      else if ((int)(uVar8 << 5) < 0) {
LAB_00105244:
        uVar3 = 0xc;
      }
      else if ((int)(uVar8 << 6) < 0) {
LAB_00105270:
        uVar3 = 0xb;
      }
      else if ((int)(uVar8 << 7) < 0) {
LAB_0010532c:
        uVar3 = 10;
      }
      else if ((int)(uVar8 << 8) < 0) {
LAB_00105340:
        uVar3 = 9;
      }
      else if ((int)(uVar8 << 9) < 0) {
LAB_0010535a:
        uVar3 = 8;
      }
      else if ((int)(uVar8 << 10) < 0) {
LAB_00105368:
        uVar3 = 7;
      }
      else if ((int)(uVar8 << 0xb) < 0) {
LAB_00105376:
        uVar3 = 6;
      }
      else if ((int)(uVar8 << 0xc) < 0) {
LAB_001053aa:
        uVar3 = 5;
      }
      else if ((int)(uVar8 << 0xd) < 0) {
LAB_001053a2:
        uVar3 = 4;
      }
      else if ((int)(uVar8 << 0xe) < 0) {
LAB_001053b2:
        uVar3 = 3;
      }
      else if ((int)(uVar8 << 0xf) < 0) {
LAB_001053cc:
        uVar3 = 2;
      }
      else if ((int)(uVar8 << 0x10) < 0) {
LAB_00104b1e:
        uVar3 = 1;
      }
      else {
LAB_001045fa:
        uVar3 = 0;
      }
      switch(uVar3) {
      case 1:
        uVar3 = 2;
        break;
      case 2:
        uVar3 = 4;
        break;
      case 3:
        uVar3 = 8;
        break;
      case 4:
        uVar3 = 0x10;
        break;
      case 5:
        uVar3 = 0x20;
        break;
      case 6:
        uVar3 = 0x40;
        break;
      case 7:
        uVar3 = 0x80;
        break;
      case 8:
        uVar3 = 0x100;
        break;
      case 9:
        uVar3 = 0x200;
        break;
      case 10:
        uVar3 = 0x400;
        break;
      case 0xb:
        uVar3 = 0x800;
        break;
      case 0xc:
        uVar3 = 0x1000;
        break;
      case 0xd:
        uVar3 = 0x2000;
        break;
      case 0xe:
        uVar3 = 0x4000;
        break;
      case 0xf:
        uVar3 = 0x8000;
        break;
      case 0x10:
        uVar3 = 0x10000;
        break;
      default:
        goto switchD_00104606_default;
      }
    }
    else {
      *(uint *)(param_2 + 0x54) = uVar8;
      *(uint *)param_2 = *(uint *)param_2 | 0x100;
      if ((uVar8 & 0x80000000) != 0x80000000) goto LAB_0010458e;
      if ((uVar8 & 0xffff8000) != 0xffff8000) {
        if ((int)(uVar8 << 1) < 0) {
          if ((int)(uVar8 << 2) < 0) {
            if ((int)(uVar8 << 3) < 0) {
              if ((int)(uVar8 << 4) < 0) {
                if ((int)(uVar8 << 5) < 0) {
                  if ((int)(uVar8 << 6) < 0) {
                    if ((int)(uVar8 << 7) < 0) {
                      if ((int)(uVar8 << 8) < 0) {
                        if ((int)(uVar8 << 9) < 0) {
                          if ((int)(uVar8 << 10) < 0) {
                            if ((int)(uVar8 << 0xb) < 0) {
                              if ((int)(uVar8 << 0xc) < 0) {
                                if ((int)(uVar8 << 0xd) < 0) {
                                  if ((int)(uVar8 << 0xe) < 0) {
                                    if ((int)(uVar8 << 0xf) < 0) {
                                      if (-1 < (int)(uVar8 << 0x10)) goto LAB_00104b1e;
                                      goto LAB_001045fa;
                                    }
                                    goto LAB_001053cc;
                                  }
                                  goto LAB_001053b2;
                                }
                                goto LAB_001053a2;
                              }
                              goto LAB_001053aa;
                            }
                            goto LAB_00105376;
                          }
                          goto LAB_00105368;
                        }
                        goto LAB_0010535a;
                      }
                      goto LAB_00105340;
                    }
                    goto LAB_0010532c;
                  }
                  goto LAB_00105270;
                }
                goto LAB_00105244;
              }
              goto LAB_00105200;
            }
            goto LAB_00105090;
          }
          goto LAB_001051d2;
        }
        goto LAB_001051ca;
      }
switchD_00104606_default:
      uVar3 = 1;
    }
    *(undefined4 *)(param_3 + 0x1fc) = uVar3;
  }
  if ((int)(uVar12 << 0x16) < 0) {
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(uint *)param_2 = *(uint *)param_2 | 0x200;
  }
  if ((int)(uVar12 << 0x15) < 0) {
    uVar8 = *(uint *)(param_1 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    *(uint *)(param_2 + 0x58) = uVar8;
    *(undefined4 *)(param_2 + 0x5c) = uVar3;
    *(uint *)param_2 = *(uint *)param_2 | 0x400;
    if (uVar8 == 0) {
switchD_00104a74_default:
      uVar3 = 1;
    }
    else {
      if ((uVar8 & 0x80000000) == 0x80000000) {
        if ((uVar8 & 0xffff8000) != 0xffff8000) {
          if (-1 < (int)(uVar8 << 1)) goto LAB_001051b8;
          if (-1 < (int)(uVar8 << 2)) goto LAB_001051da;
          if (-1 < (int)(uVar8 << 3)) goto LAB_00105072;
          if (-1 < (int)(uVar8 << 4)) goto LAB_00105238;
          if (-1 < (int)(uVar8 << 5)) goto LAB_0010524c;
          if (-1 < (int)(uVar8 << 6)) goto LAB_00105262;
          if (-1 < (int)(uVar8 << 7)) goto LAB_00105326;
          if (-1 < (int)(uVar8 << 8)) goto LAB_00105348;
          if (-1 < (int)(uVar8 << 9)) goto LAB_0010534e;
          if (-1 < (int)(uVar8 << 10)) goto LAB_00105370;
          if (-1 < (int)(uVar8 << 0xb)) goto LAB_0010537e;
          if (-1 < (int)(uVar8 << 0xc)) goto LAB_00105390;
          if (-1 < (int)(uVar8 << 0xd)) goto LAB_0010538a;
          if (-1 < (int)(uVar8 << 0xe)) goto LAB_001053c0;
          if (-1 < (int)(uVar8 << 0xf)) goto LAB_001053c6;
          if (-1 < (int)(uVar8 << 0x10)) goto LAB_00104b8c;
LAB_00104a6a:
          uVar3 = 0;
          goto LAB_00104a6c;
        }
        goto switchD_00104a74_default;
      }
      if ((uVar8 & 0xffff8000) == 0) goto switchD_00104a74_default;
      if ((int)(uVar8 << 1) < 0) {
LAB_001051b8:
        uVar3 = 0x10;
      }
      else if ((int)(uVar8 << 2) < 0) {
LAB_001051da:
        uVar3 = 0xf;
      }
      else if ((int)(uVar8 << 3) < 0) {
LAB_00105072:
        uVar3 = 0xe;
      }
      else if ((int)(uVar8 << 4) < 0) {
LAB_00105238:
        uVar3 = 0xd;
      }
      else if ((int)(uVar8 << 5) < 0) {
LAB_0010524c:
        uVar3 = 0xc;
      }
      else if ((int)(uVar8 << 6) < 0) {
LAB_00105262:
        uVar3 = 0xb;
      }
      else if ((int)(uVar8 << 7) < 0) {
LAB_00105326:
        uVar3 = 10;
      }
      else if ((int)(uVar8 << 8) < 0) {
LAB_00105348:
        uVar3 = 9;
      }
      else if ((int)(uVar8 << 9) < 0) {
LAB_0010534e:
        uVar3 = 8;
      }
      else if ((int)(uVar8 << 10) < 0) {
LAB_00105370:
        uVar3 = 7;
      }
      else if ((int)(uVar8 << 0xb) < 0) {
LAB_0010537e:
        uVar3 = 6;
      }
      else if ((int)(uVar8 << 0xc) < 0) {
LAB_00105390:
        uVar3 = 5;
      }
      else if ((int)(uVar8 << 0xd) < 0) {
LAB_0010538a:
        uVar3 = 4;
      }
      else if ((int)(uVar8 << 0xe) < 0) {
LAB_001053c0:
        uVar3 = 3;
      }
      else if ((int)(uVar8 << 0xf) < 0) {
LAB_001053c6:
        uVar3 = 2;
      }
      else {
        if (-1 < (int)(uVar8 << 0x10)) goto LAB_00104a6a;
LAB_00104b8c:
        uVar3 = 1;
      }
LAB_00104a6c:
      switch(uVar3) {
      case 1:
        uVar3 = 2;
        break;
      case 2:
        uVar3 = 4;
        break;
      case 3:
        uVar3 = 8;
        break;
      case 4:
        uVar3 = 0x10;
        break;
      case 5:
        uVar3 = 0x20;
        break;
      case 6:
        uVar3 = 0x40;
        break;
      case 7:
        uVar3 = 0x80;
        break;
      case 8:
        uVar3 = 0x100;
        break;
      case 9:
        uVar3 = 0x200;
        break;
      case 10:
        uVar3 = 0x400;
        break;
      case 0xb:
        uVar3 = 0x800;
        break;
      case 0xc:
        uVar3 = 0x1000;
        break;
      case 0xd:
        uVar3 = 0x2000;
        break;
      case 0xe:
        uVar3 = 0x4000;
        break;
      case 0xf:
        uVar3 = 0x8000;
        break;
      case 0x10:
        uVar3 = 0x10000;
        break;
      default:
        goto switchD_00104a74_default;
      }
    }
    *(undefined4 *)(param_3 + 0x200) = uVar3;
  }
  uVar8 = uVar12 & 0x800;
  if (uVar8 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x68);
    uVar5 = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_2 + 0x68) = uVar3;
    *(undefined4 *)(param_2 + 0x6c) = uVar5;
  }
  if ((int)(uVar12 << 0x13) < 0) {
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0xc) = uVar3;
    *(undefined4 *)(param_2 + 0x10) = uVar5;
    *(uint *)param_2 = *(uint *)param_2 | 0x1000;
  }
  uVar15 = uVar12 & 0x2000;
  if (uVar15 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x74);
    uVar5 = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_2 + 0x74) = uVar3;
    *(undefined4 *)(param_2 + 0x78) = uVar5;
  }
  uVar9 = uVar12 & 0x4000;
  if (uVar9 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x80);
    uVar5 = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_2 + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_2 + 0x80) = uVar3;
    *(undefined4 *)(param_2 + 0x84) = uVar5;
  }
  if ((int)(uVar12 << 0x10) < 0) {
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_1 + 0x94);
    *(uint *)param_2 = *(uint *)param_2 | 0x8000;
  }
  if ((int)(uVar12 << 0xf) < 0) {
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(uint *)param_2 = *(uint *)param_2 | 0x10000;
  }
  if ((uVar12 & 4) != 0) {
    iVar4 = *(int *)(param_2 + 0x18);
    *(int *)(param_3 + 8) = iVar4;
    if (iVar4 != *(int *)(param_3 + 0x10)) {
      *(int *)(param_3 + 0x10) = iVar4;
      *(uint *)param_2 = *(uint *)param_2 | 4;
    }
  }
  if ((uVar12 & 1) != 0) {
    if (uVar7 == 0) {
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_3 + 0x34);
    }
    if (uVar14 == 0) {
      *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_3 + 0x50);
      *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_3 + 0x54);
      *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_3 + 0x58);
      *(undefined4 *)(param_3 + 0x178) = 0x7fffffff;
    }
    if (uVar8 == 0) {
      *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_3 + 0x74);
      *(undefined4 *)(param_3 + 0x6c) = *(undefined4 *)(param_3 + 0x78);
      *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(param_3 + 0x7c);
    }
    if (uVar15 == 0) {
      *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(param_3 + 0x98);
      *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(param_3 + 0x9c);
      *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(param_3 + 0xa0);
      *(undefined4 *)(param_3 + 0x1a4) = 0x7fffffff;
    }
    if (uVar9 == 0) {
      *(undefined4 *)(param_3 + 0xb0) = *(undefined4 *)(param_3 + 0xbc);
      *(undefined4 *)(param_3 + 0xb4) = *(undefined4 *)(param_3 + 0xc0);
      *(undefined4 *)(param_3 + 0xb8) = *(undefined4 *)(param_3 + 0xc4);
      *(undefined4 *)(param_3 + 0x1d0) = 0x7fffffff;
    }
    if ((uVar12 & 0x1008) == 0) {
      *(undefined4 *)(param_3 + 0xd4) = *(undefined4 *)(param_3 + 0xe0);
      *(undefined4 *)(param_3 + 0xd8) = *(undefined4 *)(param_3 + 0xe4);
      *(undefined4 *)(param_3 + 0xdc) = *(undefined4 *)(param_3 + 0xe8);
    }
  }
  if (uVar7 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    uVar5 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_3 + 0x18) = uVar3;
    *(undefined4 *)(param_3 + 0x1c) = uVar5;
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_3 + 0x34);
    *(uint *)param_2 = *(uint *)param_2 | 2;
  }
  if (uVar14 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x3c);
    uVar5 = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_3 + 0x3c) = uVar3;
    *(undefined4 *)(param_3 + 0x40) = uVar5;
    *(undefined4 *)(param_3 + 0x44) = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(param_3 + 0x54);
    *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_3 + 0x178) = 0x7fffffff;
    *(uint *)param_2 = *(uint *)param_2 | 0x10;
  }
  if (uVar8 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x68);
    uVar5 = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)(param_3 + 0x5c) = *(undefined4 *)(param_2 + 100);
    *(undefined4 *)(param_3 + 0x60) = uVar3;
    *(undefined4 *)(param_3 + 100) = uVar5;
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_3 + 0x74);
    *(undefined4 *)(param_3 + 0x6c) = *(undefined4 *)(param_3 + 0x78);
    *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(param_3 + 0x7c);
    *(uint *)param_2 = *(uint *)param_2 | 0x800;
  }
  if (uVar15 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x74);
    uVar5 = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)(param_3 + 0x80) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)(param_3 + 0x84) = uVar3;
    *(undefined4 *)(param_3 + 0x88) = uVar5;
    *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(param_3 + 0x98);
    *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(param_3 + 0x9c);
    *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(param_3 + 0xa0);
    *(undefined4 *)(param_3 + 0x1a4) = 0x7fffffff;
    *(uint *)param_2 = *(uint *)param_2 | 0x2000;
  }
  if (uVar9 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x80);
    uVar5 = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_3 + 0xa4) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
    *(undefined4 *)(param_3 + 0xac) = uVar5;
    *(undefined4 *)(param_3 + 0xb0) = *(undefined4 *)(param_3 + 0xbc);
    *(undefined4 *)(param_3 + 0xb4) = *(undefined4 *)(param_3 + 0xc0);
    *(undefined4 *)(param_3 + 0xb8) = *(undefined4 *)(param_3 + 0xc4);
    *(undefined4 *)(param_3 + 0x1d0) = 0x7fffffff;
    *(uint *)param_2 = *(uint *)param_2 | 0x4000;
  }
  if ((uVar12 & 0x1008) == 0) {
    return;
  }
  uVar12 = *(uint *)(param_2 + 0x2c);
  if (*(int *)(param_3 + 0x10) == 0) {
    uVar12 = uVar12 - *(int *)(param_2 + 8);
    uVar14 = *(int *)(param_2 + 0x30) - *(int *)(param_2 + 0xc);
    uVar7 = *(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x10);
  }
  else {
    uVar14 = *(uint *)(param_2 + 0x30);
    uVar7 = *(uint *)(param_2 + 0x34);
  }
  if (uVar12 != 0) {
    if ((uVar12 & 0x80000000) == 0x80000000) {
      if ((uVar12 & 0xfff80000) != 0xfff80000) {
        if (-1 < (int)(uVar12 << 1)) goto LAB_00105180;
        if (-1 < (int)(uVar12 << 2)) goto LAB_00105184;
        if (-1 < (int)(uVar12 << 3)) goto LAB_00105190;
        if (-1 < (int)(uVar12 << 4)) goto LAB_001051a0;
        if (-1 < (int)(uVar12 << 5)) goto LAB_001051b0;
        if (-1 < (int)(uVar12 << 6)) goto LAB_001051b4;
        if (-1 < (int)(uVar12 << 7)) goto LAB_0010507a;
        if (-1 < (int)(uVar12 << 8)) goto LAB_001051e4;
        if (-1 < (int)(uVar12 << 9)) goto LAB_0010523c;
        if (-1 < (int)(uVar12 << 10)) goto LAB_0010525a;
        if (-1 < (int)(uVar12 << 0xb)) goto LAB_00105322;
        if (-1 < (int)(uVar12 << 0xc)) goto LAB_00104f14;
      }
    }
    else if (uVar12 >> 0x13 != 0) {
      if ((int)(uVar12 << 1) < 0) {
LAB_00105180:
        iVar4 = 0xc;
      }
      else if ((int)(uVar12 << 2) < 0) {
LAB_00105184:
        iVar4 = 0xb;
      }
      else if ((int)(uVar12 << 3) < 0) {
LAB_00105190:
        iVar4 = 10;
      }
      else if ((int)(uVar12 << 4) < 0) {
LAB_001051a0:
        iVar4 = 9;
      }
      else if ((int)(uVar12 << 5) < 0) {
LAB_001051b0:
        iVar4 = 8;
      }
      else if ((int)(uVar12 << 6) < 0) {
LAB_001051b4:
        iVar4 = 7;
      }
      else if ((int)(uVar12 << 7) < 0) {
LAB_0010507a:
        iVar4 = 6;
      }
      else if ((int)(uVar12 << 8) < 0) {
LAB_001051e4:
        iVar4 = 5;
      }
      else if ((int)(uVar12 << 9) < 0) {
LAB_0010523c:
        iVar4 = 4;
      }
      else if ((int)(uVar12 << 10) < 0) {
LAB_0010525a:
        iVar4 = 3;
      }
      else if ((int)(uVar12 << 0xb) < 0) {
LAB_00105322:
        iVar4 = 2;
      }
      else {
        if (-1 < (int)(uVar12 << 0xc)) goto LAB_00104904;
LAB_00104f14:
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        uVar12 = (int)uVar12 >> 0x20 & 0xfff80000;
      }
    }
  }
LAB_00104904:
  if (uVar14 != 0) {
    if ((uVar14 & 0x80000000) == 0x80000000) {
      if ((uVar14 & 0xfff80000) != 0xfff80000) {
        if (-1 < (int)(uVar14 << 1)) goto LAB_0010517c;
        if (-1 < (int)(uVar14 << 2)) goto LAB_0010518c;
        if (-1 < (int)(uVar14 << 3)) goto LAB_00105194;
        if (-1 < (int)(uVar14 << 4)) goto LAB_001051a4;
        if (-1 < (int)(uVar14 << 5)) goto LAB_001051a8;
        if (-1 < (int)(uVar14 << 6)) goto LAB_001051bc;
        if (-1 < (int)(uVar14 << 7)) goto LAB_00105076;
        if (-1 < (int)(uVar14 << 8)) goto LAB_0010508c;
        if (-1 < (int)(uVar14 << 9)) goto LAB_00105256;
        if (-1 < (int)(uVar14 << 10)) goto LAB_0010526c;
        if (-1 < (int)(uVar14 << 0xb)) goto LAB_0010531a;
        if (-1 < (int)(uVar14 << 0xc)) goto LAB_00104e9e;
      }
    }
    else if (uVar14 >> 0x13 != 0) {
      if ((int)(uVar14 << 1) < 0) {
LAB_0010517c:
        iVar4 = 0xc;
      }
      else if ((int)(uVar14 << 2) < 0) {
LAB_0010518c:
        iVar4 = 0xb;
      }
      else if ((int)(uVar14 << 3) < 0) {
LAB_00105194:
        iVar4 = 10;
      }
      else if ((int)(uVar14 << 4) < 0) {
LAB_001051a4:
        iVar4 = 9;
      }
      else if ((int)(uVar14 << 5) < 0) {
LAB_001051a8:
        iVar4 = 8;
      }
      else if ((int)(uVar14 << 6) < 0) {
LAB_001051bc:
        iVar4 = 7;
      }
      else if ((int)(uVar14 << 7) < 0) {
LAB_00105076:
        iVar4 = 6;
      }
      else if ((int)(uVar14 << 8) < 0) {
LAB_0010508c:
        iVar4 = 5;
      }
      else if ((int)(uVar14 << 9) < 0) {
LAB_00105256:
        iVar4 = 4;
      }
      else if ((int)(uVar14 << 10) < 0) {
LAB_0010526c:
        iVar4 = 3;
      }
      else if ((int)(uVar14 << 0xb) < 0) {
LAB_0010531a:
        iVar4 = 2;
      }
      else {
        if (-1 < (int)(uVar14 << 0xc)) goto LAB_0010495e;
LAB_00104e9e:
        iVar4 = 1;
      }
      if (iVar4 != 0) {
        uVar14 = (int)uVar14 >> 0x20 & 0xfff80000;
      }
    }
  }
LAB_0010495e:
  if (uVar7 == 0) goto LAB_001049b8;
  if ((uVar7 & 0x80000000) == 0x80000000) {
    if ((uVar7 & 0xfff80000) == 0xfff80000) goto LAB_001049b8;
    if (-1 < (int)(uVar7 << 1)) goto LAB_00105178;
    if (-1 < (int)(uVar7 << 2)) goto LAB_00105188;
    if (-1 < (int)(uVar7 << 3)) goto LAB_00105198;
    if (-1 < (int)(uVar7 << 4)) goto LAB_0010519c;
    if (-1 < (int)(uVar7 << 5)) goto LAB_001051ac;
    if (-1 < (int)(uVar7 << 6)) goto LAB_001051c0;
    if (-1 < (int)(uVar7 << 7)) goto LAB_0010507e;
    if (-1 < (int)(uVar7 << 8)) goto LAB_00105088;
    if (-1 < (int)(uVar7 << 9)) goto LAB_00105240;
    if (-1 < (int)(uVar7 << 10)) goto LAB_0010525e;
    if (-1 < (int)(uVar7 << 0xb)) goto LAB_0010531e;
    if ((int)(uVar7 << 0xc) < 0) goto LAB_001049b8;
LAB_00104e26:
    iVar4 = 1;
  }
  else {
    if (uVar7 >> 0x13 == 0) goto LAB_001049b8;
    if ((int)(uVar7 << 1) < 0) {
LAB_00105178:
      iVar4 = 0xc;
    }
    else if ((int)(uVar7 << 2) < 0) {
LAB_00105188:
      iVar4 = 0xb;
    }
    else if ((int)(uVar7 << 3) < 0) {
LAB_00105198:
      iVar4 = 10;
    }
    else if ((int)(uVar7 << 4) < 0) {
LAB_0010519c:
      iVar4 = 9;
    }
    else if ((int)(uVar7 << 5) < 0) {
LAB_001051ac:
      iVar4 = 8;
    }
    else if ((int)(uVar7 << 6) < 0) {
LAB_001051c0:
      iVar4 = 7;
    }
    else if ((int)(uVar7 << 7) < 0) {
LAB_0010507e:
      iVar4 = 6;
    }
    else if ((int)(uVar7 << 8) < 0) {
LAB_00105088:
      iVar4 = 5;
    }
    else if ((int)(uVar7 << 9) < 0) {
LAB_00105240:
      iVar4 = 4;
    }
    else if ((int)(uVar7 << 10) < 0) {
LAB_0010525e:
      iVar4 = 3;
    }
    else {
      if (-1 < (int)(uVar7 << 0xb)) {
        if (-1 < (int)(uVar7 << 0xc)) goto LAB_001049b8;
        goto LAB_00104e26;
      }
LAB_0010531e:
      iVar4 = 2;
    }
  }
  if (iVar4 != 0) {
    uVar7 = (int)uVar7 >> 0x20 & 0xfff80000;
  }
LAB_001049b8:
  *(undefined4 *)(param_3 + 0xd4) = *(undefined4 *)(param_3 + 0xe0);
  *(undefined4 *)(param_3 + 0xd8) = *(undefined4 *)(param_3 + 0xe4);
  *(undefined4 *)(param_3 + 0xdc) = *(undefined4 *)(param_3 + 0xe8);
  *(uint *)(param_3 + 200) = uVar12;
  *(uint *)(param_3 + 0xcc) = uVar14;
  *(uint *)(param_3 + 0xd0) = uVar7;
  return;
}

