/* MaDsp_3DEngGetCurPos @ 00117034 24038B */


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* YAMAHA::MaDsp_3DEngGetCurPos(_MASMW_P3DASNDSRCMOVE*, unsigned int, _MASMW_P3DAVECTOR*) */

void YAMAHA::MaDsp_3DEngGetCurPos
               (_MASMW_P3DASNDSRCMOVE *param_1,uint param_2,_MASMW_P3DAVECTOR *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int local_48;
  int local_44;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar7 = DAT_00117b94 + 0x117048;
  if (*(uint *)(param_1 + 0x10) != 0) {
    if (2 < *(uint *)(param_1 + 0x10)) {
      return;
    }
    if (param_2 < 2) goto LAB_001171dc;
    if (param_2 != 2) {
      return;
    }
    uVar8 = *(uint *)(param_1 + 0x2c);
    if (uVar8 == 0) {
      uVar9 = *(uint *)(param_1 + 0x30);
      uVar12 = *(uint *)(param_1 + 0x34);
      if ((uVar9 != 0) || (uVar12 != 0)) goto LAB_00117276;
      uVar4 = *(undefined4 *)(param_1 + 0x30);
      uVar5 = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_3 + 4) = uVar4;
      *(undefined4 *)(param_3 + 8) = uVar5;
LAB_0011707c:
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x30);
      uVar12 = *(uint *)(param_1 + 0x34);
      if ((uVar8 & 0x80000000) == 0x80000000) {
        if ((uVar8 & 0xffffc000) == 0xffffc000) {
LAB_00117276:
          uVar14 = 0;
        }
        else if ((int)(uVar8 << 1) < 0) {
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
                                      if ((int)(uVar8 << 0x10) < 0) {
                                        if ((int)(uVar8 << 0x11) < 0) goto LAB_00117276;
LAB_00117506:
                                        uVar14 = 1;
                                      }
                                      else {
LAB_0011bff4:
                                        uVar14 = 2;
                                      }
                                    }
                                    else {
LAB_0011bffc:
                                      uVar14 = 3;
                                    }
                                  }
                                  else {
LAB_0011c004:
                                    uVar14 = 4;
                                  }
                                }
                                else {
LAB_0011bdac:
                                  uVar14 = 5;
                                }
                              }
                              else {
LAB_0011bd9c:
                                uVar14 = 6;
                              }
                            }
                            else {
LAB_0011bda4:
                              uVar14 = 7;
                            }
                          }
                          else {
LAB_0011bc9e:
                            uVar14 = 8;
                          }
                        }
                        else {
LAB_0011bbb2:
                          uVar14 = 9;
                        }
                      }
                      else {
LAB_0011bba2:
                        uVar14 = 10;
                      }
                    }
                    else {
LAB_0011bbaa:
                      uVar14 = 0xb;
                    }
                  }
                  else {
LAB_0011bb20:
                    uVar14 = 0xc;
                  }
                }
                else {
LAB_0011bb28:
                  uVar14 = 0xd;
                }
              }
              else {
LAB_0011ba18:
                uVar14 = 0xe;
              }
            }
            else {
LAB_0011ba00:
              uVar14 = 0xf;
            }
          }
          else {
LAB_0011ba08:
            uVar14 = 0x10;
          }
        }
        else {
LAB_0011b9c8:
          uVar14 = 0x11;
        }
      }
      else {
        uVar14 = 0;
        if ((uVar8 & 0xffffc000) != 0) {
          if ((int)(uVar8 << 1) < 0) goto LAB_0011b9c8;
          if ((int)(uVar8 << 2) < 0) goto LAB_0011ba08;
          if ((int)(uVar8 << 3) < 0) goto LAB_0011ba00;
          if ((int)(uVar8 << 4) < 0) goto LAB_0011ba18;
          if ((int)(uVar8 << 5) < 0) goto LAB_0011bb28;
          if ((int)(uVar8 << 6) < 0) goto LAB_0011bb20;
          if ((int)(uVar8 << 7) < 0) goto LAB_0011bbaa;
          if ((int)(uVar8 << 8) < 0) goto LAB_0011bba2;
          if ((int)(uVar8 << 9) < 0) goto LAB_0011bbb2;
          if ((int)(uVar8 << 10) < 0) goto LAB_0011bc9e;
          if ((int)(uVar8 << 0xb) < 0) goto LAB_0011bda4;
          if ((int)(uVar8 << 0xc) < 0) goto LAB_0011bd9c;
          if ((int)(uVar8 << 0xd) < 0) goto LAB_0011bdac;
          if ((int)(uVar8 << 0xe) < 0) goto LAB_0011c004;
          if ((int)(uVar8 << 0xf) < 0) goto LAB_0011bffc;
          if ((int)(uVar8 << 0x10) < 0) goto LAB_0011bff4;
          if ((int)(uVar8 << 0x11) < 0) goto LAB_00117506;
          goto LAB_00117276;
        }
      }
      uVar15 = 0;
      if (uVar9 != 0) {
        if ((uVar9 & 0x80000000) == 0x80000000) {
          if ((uVar9 & 0xffffc000) != 0xffffc000) {
            if (-1 < (int)(uVar9 << 1)) goto LAB_0011b9d8;
            if (-1 < (int)(uVar9 << 2)) goto LAB_0011b9f0;
            if (-1 < (int)(uVar9 << 3)) goto LAB_0011b9f8;
            if (-1 < (int)(uVar9 << 4)) goto LAB_0011ba28;
            if (-1 < (int)(uVar9 << 5)) goto LAB_0011bb48;
            if (-1 < (int)(uVar9 << 6)) goto LAB_0011bb40;
            if (-1 < (int)(uVar9 << 7)) goto LAB_0011bbd2;
            if (-1 < (int)(uVar9 << 8)) goto LAB_0011bbca;
            if (-1 < (int)(uVar9 << 9)) goto LAB_0011bb8a;
            if (-1 < (int)(uVar9 << 10)) goto LAB_0011bca6;
            if (-1 < (int)(uVar9 << 0xb)) goto LAB_0011bd84;
            if (-1 < (int)(uVar9 << 0xc)) goto LAB_0011bd7c;
            if (-1 < (int)(uVar9 << 0xd)) goto LAB_0011bd8c;
            if (-1 < (int)(uVar9 << 0xe)) goto LAB_0011bfec;
            if (-1 < (int)(uVar9 << 0xf)) goto LAB_0011bfc0;
            if (-1 < (int)(uVar9 << 0x10)) goto LAB_0011bfb8;
            if (-1 < (int)(uVar9 << 0x11)) goto LAB_00117582;
          }
LAB_001172fc:
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          if ((uVar9 & 0xffffc000) != 0) {
            if ((int)(uVar9 << 1) < 0) {
LAB_0011b9d8:
              uVar15 = 0x11;
            }
            else if ((int)(uVar9 << 2) < 0) {
LAB_0011b9f0:
              uVar15 = 0x10;
            }
            else if ((int)(uVar9 << 3) < 0) {
LAB_0011b9f8:
              uVar15 = 0xf;
            }
            else if ((int)(uVar9 << 4) < 0) {
LAB_0011ba28:
              uVar15 = 0xe;
            }
            else if ((int)(uVar9 << 5) < 0) {
LAB_0011bb48:
              uVar15 = 0xd;
            }
            else if ((int)(uVar9 << 6) < 0) {
LAB_0011bb40:
              uVar15 = 0xc;
            }
            else if ((int)(uVar9 << 7) < 0) {
LAB_0011bbd2:
              uVar15 = 0xb;
            }
            else if ((int)(uVar9 << 8) < 0) {
LAB_0011bbca:
              uVar15 = 10;
            }
            else if ((int)(uVar9 << 9) < 0) {
LAB_0011bb8a:
              uVar15 = 9;
            }
            else if ((int)(uVar9 << 10) < 0) {
LAB_0011bca6:
              uVar15 = 8;
            }
            else if ((int)(uVar9 << 0xb) < 0) {
LAB_0011bd84:
              uVar15 = 7;
            }
            else if ((int)(uVar9 << 0xc) < 0) {
LAB_0011bd7c:
              uVar15 = 6;
            }
            else if ((int)(uVar9 << 0xd) < 0) {
LAB_0011bd8c:
              uVar15 = 5;
            }
            else if ((int)(uVar9 << 0xe) < 0) {
LAB_0011bfec:
              uVar15 = 4;
            }
            else if ((int)(uVar9 << 0xf) < 0) {
LAB_0011bfc0:
              uVar15 = 3;
            }
            else if ((int)(uVar9 << 0x10) < 0) {
LAB_0011bfb8:
              uVar15 = 2;
            }
            else {
              if (-1 < (int)(uVar9 << 0x11)) goto LAB_001172fc;
LAB_00117582:
              uVar15 = 1;
            }
          }
        }
      }
      uVar13 = 0;
      if (uVar12 != 0) {
        if ((uVar12 & 0x80000000) == 0x80000000) {
          if ((uVar12 & 0xffffc000) != 0xffffc000) {
            if (-1 < (int)(uVar12 << 1)) goto LAB_0011b9d0;
            if (-1 < (int)(uVar12 << 2)) goto LAB_0011b9e8;
            if (-1 < (int)(uVar12 << 3)) goto LAB_0011b9e0;
            if (-1 < (int)(uVar12 << 4)) goto LAB_0011ba20;
            if (-1 < (int)(uVar12 << 5)) goto LAB_0011bb38;
            if (-1 < (int)(uVar12 << 6)) goto LAB_0011bb30;
            if (-1 < (int)(uVar12 << 7)) goto LAB_0011bbc2;
            if (-1 < (int)(uVar12 << 8)) goto LAB_0011bbba;
            if (-1 < (int)(uVar12 << 9)) goto LAB_0011bc14;
            if (-1 < (int)(uVar12 << 10)) goto LAB_0011bc7e;
            if (-1 < (int)(uVar12 << 0xb)) goto LAB_0011bdfe;
            if (-1 < (int)(uVar12 << 0xc)) goto LAB_0011bdf6;
            if (-1 < (int)(uVar12 << 0xd)) goto LAB_0011bdb4;
            if (-1 < (int)(uVar12 << 0xe)) goto LAB_0011c00c;
            if (-1 < (int)(uVar12 << 0xf)) goto LAB_0011c01c;
            if (-1 < (int)(uVar12 << 0x10)) goto LAB_0011c014;
            if (-1 < (int)(uVar12 << 0x11)) goto LAB_001175fa;
          }
LAB_00117382:
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          if ((uVar12 & 0xffffc000) != 0) {
            if ((int)(uVar12 << 1) < 0) {
LAB_0011b9d0:
              uVar13 = 0x11;
            }
            else if ((int)(uVar12 << 2) < 0) {
LAB_0011b9e8:
              uVar13 = 0x10;
            }
            else if ((int)(uVar12 << 3) < 0) {
LAB_0011b9e0:
              uVar13 = 0xf;
            }
            else if ((int)(uVar12 << 4) < 0) {
LAB_0011ba20:
              uVar13 = 0xe;
            }
            else if ((int)(uVar12 << 5) < 0) {
LAB_0011bb38:
              uVar13 = 0xd;
            }
            else if ((int)(uVar12 << 6) < 0) {
LAB_0011bb30:
              uVar13 = 0xc;
            }
            else if ((int)(uVar12 << 7) < 0) {
LAB_0011bbc2:
              uVar13 = 0xb;
            }
            else if ((int)(uVar12 << 8) < 0) {
LAB_0011bbba:
              uVar13 = 10;
            }
            else if ((int)(uVar12 << 9) < 0) {
LAB_0011bc14:
              uVar13 = 9;
            }
            else if ((int)(uVar12 << 10) < 0) {
LAB_0011bc7e:
              uVar13 = 8;
            }
            else if ((int)(uVar12 << 0xb) < 0) {
LAB_0011bdfe:
              uVar13 = 7;
            }
            else if ((int)(uVar12 << 0xc) < 0) {
LAB_0011bdf6:
              uVar13 = 6;
            }
            else if ((int)(uVar12 << 0xd) < 0) {
LAB_0011bdb4:
              uVar13 = 5;
            }
            else if ((int)(uVar12 << 0xe) < 0) {
LAB_0011c00c:
              uVar13 = 4;
            }
            else if ((int)(uVar12 << 0xf) < 0) {
LAB_0011c01c:
              uVar13 = 3;
            }
            else if ((int)(uVar12 << 0x10) < 0) {
LAB_0011c014:
              uVar13 = 2;
            }
            else {
              if (-1 < (int)(uVar12 << 0x11)) goto LAB_00117382;
LAB_001175fa:
              uVar13 = 1;
            }
          }
        }
      }
      if (uVar14 <= uVar15) {
        uVar14 = uVar15;
      }
      if (uVar14 < uVar13) {
        uVar14 = uVar13;
      }
      switch(uVar14) {
      case 0:
        iVar10 = 1;
        break;
      case 1:
        iVar10 = 2;
        break;
      case 2:
        iVar10 = 4;
        break;
      case 3:
        iVar10 = 8;
        break;
      case 4:
        iVar10 = 0x10;
        break;
      case 5:
        iVar10 = 0x20;
        break;
      case 6:
        iVar10 = 0x40;
        break;
      case 7:
        iVar10 = 0x80;
        break;
      case 8:
        iVar10 = 0x100;
        break;
      case 9:
        iVar10 = 0x200;
        break;
      case 10:
        iVar10 = 0x400;
        break;
      case 0xb:
        iVar10 = 0x800;
        break;
      case 0xc:
        iVar10 = 0x1000;
        break;
      case 0xd:
        iVar10 = 0x2000;
        break;
      case 0xe:
        iVar10 = 0x4000;
        break;
      case 0xf:
        iVar10 = 0x8000;
        break;
      case 0x10:
        iVar10 = 0x10000;
        break;
      case 0x11:
        iVar10 = 0x20000;
        break;
      case 0x12:
        iVar10 = 0x40000;
        break;
      case 0x13:
        iVar10 = 0x80000;
        break;
      case 0x14:
        iVar10 = 0x100000;
        break;
      case 0x15:
        iVar10 = 0x200000;
        break;
      case 0x16:
        iVar10 = 0x400000;
        break;
      case 0x17:
        iVar10 = 0x800000;
        break;
      case 0x18:
        iVar10 = 0x1000000;
        break;
      case 0x19:
        iVar10 = 0x2000000;
        break;
      case 0x1a:
        iVar10 = 0x4000000;
        break;
      case 0x1b:
        iVar10 = 0x8000000;
        break;
      case 0x1c:
        iVar10 = 0x10000000;
        break;
      case 0x1d:
        iVar10 = 0x20000000;
        break;
      default:
        iVar10 = 0x40000000;
      }
      iVar1 = __divsi3(uVar8,iVar10);
      iVar2 = __divsi3(uVar9,iVar10);
      iVar3 = __divsi3(uVar12,iVar10);
      iVar1 = iVar3 * iVar3 + iVar1 * iVar1 + iVar2 * iVar2;
      if (iVar1 < 1) {
        uVar14 = 0;
      }
      else {
        iVar2 = iVar1;
        if (iVar1 == 0x7fffffff) {
          iVar1 = 0x7ffffffe;
          iVar2 = 0x7ffffffe;
        }
        do {
          iVar3 = __divsi3(iVar2,iVar1);
          iVar6 = (iVar1 + iVar3) / 2;
          iVar3 = iVar1;
          if (iVar1 <= iVar6) break;
          iVar1 = __divsi3(iVar2,iVar6);
          iVar1 = (iVar6 + iVar1) / 2;
          iVar3 = iVar6;
          if (iVar6 <= iVar1) break;
          iVar3 = __divsi3(iVar2,iVar1);
          iVar6 = (iVar1 + iVar3) / 2;
          iVar3 = iVar1;
          if (iVar1 <= iVar6) break;
          iVar1 = __divsi3(iVar2);
          iVar1 = (iVar6 + iVar1) / 2;
          iVar3 = iVar6;
          if (iVar6 <= iVar1) break;
          iVar3 = __divsi3(iVar2,iVar1);
          iVar6 = (iVar1 + iVar3) / 2;
          iVar3 = iVar1;
          if (iVar1 <= iVar6) break;
          iVar1 = __divsi3(iVar2,iVar6);
          iVar1 = (iVar6 + iVar1) / 2;
          iVar3 = iVar6;
          if (iVar6 <= iVar1) break;
          iVar3 = __divsi3(iVar2,iVar1);
          iVar6 = (iVar1 + iVar3) / 2;
          iVar3 = iVar1;
          if (iVar1 <= iVar6) break;
          iVar1 = __divsi3(iVar2);
          iVar1 = (iVar1 + iVar6) / 2;
          iVar3 = iVar6;
        } while (iVar1 < iVar6);
        uVar14 = iVar10 * iVar3;
      }
      if ((int)uVar9 < (int)uVar12) {
        uVar9 = uVar12;
      }
      if ((int)uVar9 < (int)uVar8) {
        uVar9 = uVar8;
      }
      uVar4 = *(undefined4 *)(param_1 + 0x30);
      uVar5 = *(undefined4 *)(param_1 + 0x34);
      if ((int)uVar9 < (int)uVar14) {
        uVar9 = uVar14;
      }
      *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_3 + 4) = uVar4;
      *(undefined4 *)(param_3 + 8) = uVar5;
      if (uVar9 == 0) goto LAB_0011707c;
      uVar12 = 0;
      if (uVar8 != 0) {
        if ((uVar8 & 0x80000000) == 0x80000000) {
          if ((uVar8 & 0xffff8000) != 0xffff8000) {
            if (-1 < (int)(uVar8 << 1)) goto LAB_0011c288;
            if (-1 < (int)(uVar8 << 2)) goto LAB_0011c3a0;
            if (-1 < (int)(uVar8 << 3)) goto LAB_0011c398;
            if (-1 < (int)(uVar8 << 4)) goto LAB_0011c3b0;
            if (-1 < (int)(uVar8 << 5)) goto LAB_0011c3a8;
            if (-1 < (int)(uVar8 << 6)) goto LAB_0011c3c0;
            if (-1 < (int)(uVar8 << 7)) goto LAB_0011c3b8;
            if (-1 < (int)(uVar8 << 8)) goto LAB_0011c3d0;
            if (-1 < (int)(uVar8 << 9)) goto LAB_0011c3c8;
            if (-1 < (int)(uVar8 << 10)) goto LAB_0011c5ce;
            if (-1 < (int)(uVar8 << 0xb)) goto LAB_0011c5c6;
            if (-1 < (int)(uVar8 << 0xc)) goto LAB_0011c5e2;
            if (-1 < (int)(uVar8 << 0xd)) goto LAB_0011cb0c;
            if (-1 < (int)(uVar8 << 0xe)) goto LAB_0011cb1c;
            if (-1 < (int)(uVar8 << 0xf)) goto LAB_0011cb14;
            if (-1 < (int)(uVar8 << 0x10)) goto LAB_0011adac;
          }
LAB_00117a4c:
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          if ((uVar8 & 0xffff8000) != 0) {
            if ((int)(uVar8 << 1) < 0) {
LAB_0011c288:
              uVar12 = 0x10;
            }
            else if ((int)(uVar8 << 2) < 0) {
LAB_0011c3a0:
              uVar12 = 0xf;
            }
            else if ((int)(uVar8 << 3) < 0) {
LAB_0011c398:
              uVar12 = 0xe;
            }
            else if ((int)(uVar8 << 4) < 0) {
LAB_0011c3b0:
              uVar12 = 0xd;
            }
            else if ((int)(uVar8 << 5) < 0) {
LAB_0011c3a8:
              uVar12 = 0xc;
            }
            else if ((int)(uVar8 << 6) < 0) {
LAB_0011c3c0:
              uVar12 = 0xb;
            }
            else if ((int)(uVar8 << 7) < 0) {
LAB_0011c3b8:
              uVar12 = 10;
            }
            else if ((int)(uVar8 << 8) < 0) {
LAB_0011c3d0:
              uVar12 = 9;
            }
            else if ((int)(uVar8 << 9) < 0) {
LAB_0011c3c8:
              uVar12 = 8;
            }
            else if ((int)(uVar8 << 10) < 0) {
LAB_0011c5ce:
              uVar12 = 7;
            }
            else if ((int)(uVar8 << 0xb) < 0) {
LAB_0011c5c6:
              uVar12 = 6;
            }
            else if ((int)(uVar8 << 0xc) < 0) {
LAB_0011c5e2:
              uVar12 = 5;
            }
            else if ((int)(uVar8 << 0xd) < 0) {
LAB_0011cb0c:
              uVar12 = 4;
            }
            else if ((int)(uVar8 << 0xe) < 0) {
LAB_0011cb1c:
              uVar12 = 3;
            }
            else if ((int)(uVar8 << 0xf) < 0) {
LAB_0011cb14:
              uVar12 = 2;
            }
            else {
              if (-1 < (int)(uVar8 << 0x10)) goto LAB_00117a4c;
LAB_0011adac:
              uVar12 = 1;
            }
          }
        }
      }
      uVar15 = *(uint *)(param_3 + 4);
      uVar14 = 0;
      if (uVar15 != 0) {
        if ((uVar15 & 0x80000000) == 0x80000000) {
          if ((uVar15 & 0xffff8000) != 0xffff8000) {
            if (-1 < (int)(uVar15 << 1)) goto LAB_0011c1a0;
            if (-1 < (int)(uVar15 << 2)) goto LAB_0011c390;
            if (-1 < (int)(uVar15 << 3)) goto LAB_0011c388;
            if (-1 < (int)(uVar15 << 4)) goto LAB_0011c1d8;
            if (-1 < (int)(uVar15 << 5)) goto LAB_0011c1d0;
            if (-1 < (int)(uVar15 << 6)) goto LAB_0011c51e;
            if (-1 < (int)(uVar15 << 7)) goto LAB_0011c516;
            if (-1 < (int)(uVar15 << 8)) goto LAB_0011c54e;
            if (-1 < (int)(uVar15 << 9)) goto LAB_0011c546;
            if (-1 < (int)(uVar15 << 10)) goto LAB_0011c612;
            if (-1 < (int)(uVar15 << 0xb)) goto LAB_0011c60a;
            if (-1 < (int)(uVar15 << 0xc)) goto LAB_0011c61a;
            if (-1 < (int)(uVar15 << 0xd)) goto LAB_0011cab4;
            if (-1 < (int)(uVar15 << 0xe)) goto LAB_0011caec;
            if (-1 < (int)(uVar15 << 0xf)) goto LAB_0011cae4;
            if (-1 < (int)(uVar15 << 0x10)) goto LAB_0011acc4;
          }
LAB_00117ad0:
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          if ((uVar15 & 0xffff8000) != 0) {
            if ((int)(uVar15 << 1) < 0) {
LAB_0011c1a0:
              uVar14 = 0x10;
            }
            else if ((int)(uVar15 << 2) < 0) {
LAB_0011c390:
              uVar14 = 0xf;
            }
            else if ((int)(uVar15 << 3) < 0) {
LAB_0011c388:
              uVar14 = 0xe;
            }
            else if ((int)(uVar15 << 4) < 0) {
LAB_0011c1d8:
              uVar14 = 0xd;
            }
            else if ((int)(uVar15 << 5) < 0) {
LAB_0011c1d0:
              uVar14 = 0xc;
            }
            else if ((int)(uVar15 << 6) < 0) {
LAB_0011c51e:
              uVar14 = 0xb;
            }
            else if ((int)(uVar15 << 7) < 0) {
LAB_0011c516:
              uVar14 = 10;
            }
            else if ((int)(uVar15 << 8) < 0) {
LAB_0011c54e:
              uVar14 = 9;
            }
            else if ((int)(uVar15 << 9) < 0) {
LAB_0011c546:
              uVar14 = 8;
            }
            else if ((int)(uVar15 << 10) < 0) {
LAB_0011c612:
              uVar14 = 7;
            }
            else if ((int)(uVar15 << 0xb) < 0) {
LAB_0011c60a:
              uVar14 = 6;
            }
            else if ((int)(uVar15 << 0xc) < 0) {
LAB_0011c61a:
              uVar14 = 5;
            }
            else if ((int)(uVar15 << 0xd) < 0) {
LAB_0011cab4:
              uVar14 = 4;
            }
            else if ((int)(uVar15 << 0xe) < 0) {
LAB_0011caec:
              uVar14 = 3;
            }
            else if ((int)(uVar15 << 0xf) < 0) {
LAB_0011cae4:
              uVar14 = 2;
            }
            else {
              if (-1 < (int)(uVar15 << 0x10)) goto LAB_00117ad0;
LAB_0011acc4:
              uVar14 = 1;
            }
          }
        }
      }
      uVar11 = *(uint *)(param_3 + 8);
      uVar13 = 0;
      if (uVar11 != 0) {
        if ((uVar11 & 0x80000000) == 0x80000000) {
          if ((uVar11 & 0xffff8000) != 0xffff8000) {
            if (-1 < (int)(uVar11 << 1)) goto LAB_0011c1a8;
            if (-1 < (int)(uVar11 << 2)) goto LAB_0011c1b8;
            if (-1 < (int)(uVar11 << 3)) goto LAB_0011c1b0;
            if (-1 < (int)(uVar11 << 4)) goto LAB_0011c1c8;
            if (-1 < (int)(uVar11 << 5)) goto LAB_0011c1c0;
            if (-1 < (int)(uVar11 << 6)) goto LAB_0011c4dc;
            if (-1 < (int)(uVar11 << 7)) goto LAB_0011c450;
            if (-1 < (int)(uVar11 << 8)) goto LAB_0011c53e;
            if (-1 < (int)(uVar11 << 9)) goto LAB_0011c536;
            if (-1 < (int)(uVar11 << 10)) goto LAB_0011c602;
            if (-1 < (int)(uVar11 << 0xb)) goto LAB_0011c5fa;
            if (-1 < (int)(uVar11 << 0xc)) goto LAB_0011c632;
            if (-1 < (int)(uVar11 << 0xd)) goto LAB_0011cabc;
            if (-1 < (int)(uVar11 << 0xe)) goto LAB_0011cacc;
            if (-1 < (int)(uVar11 << 0xf)) goto LAB_0011cac4;
            if (-1 < (int)(uVar11 << 0x10)) goto LAB_0011ad38;
          }
LAB_00117b54:
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          if ((uVar11 & 0xffff8000) != 0) {
            if ((int)(uVar11 << 1) < 0) {
LAB_0011c1a8:
              uVar13 = 0x10;
            }
            else if ((int)(uVar11 << 2) < 0) {
LAB_0011c1b8:
              uVar13 = 0xf;
            }
            else if ((int)(uVar11 << 3) < 0) {
LAB_0011c1b0:
              uVar13 = 0xe;
            }
            else if ((int)(uVar11 << 4) < 0) {
LAB_0011c1c8:
              uVar13 = 0xd;
            }
            else if ((int)(uVar11 << 5) < 0) {
LAB_0011c1c0:
              uVar13 = 0xc;
            }
            else if ((int)(uVar11 << 6) < 0) {
LAB_0011c4dc:
              uVar13 = 0xb;
            }
            else if ((int)(uVar11 << 7) < 0) {
LAB_0011c450:
              uVar13 = 10;
            }
            else if ((int)(uVar11 << 8) < 0) {
LAB_0011c53e:
              uVar13 = 9;
            }
            else if ((int)(uVar11 << 9) < 0) {
LAB_0011c536:
              uVar13 = 8;
            }
            else if ((int)(uVar11 << 10) < 0) {
LAB_0011c602:
              uVar13 = 7;
            }
            else if ((int)(uVar11 << 0xb) < 0) {
LAB_0011c5fa:
              uVar13 = 6;
            }
            else if ((int)(uVar11 << 0xc) < 0) {
LAB_0011c632:
              uVar13 = 5;
            }
            else if ((int)(uVar11 << 0xd) < 0) {
LAB_0011cabc:
              uVar13 = 4;
            }
            else if ((int)(uVar11 << 0xe) < 0) {
LAB_0011cacc:
              uVar13 = 3;
            }
            else if ((int)(uVar11 << 0xf) < 0) {
LAB_0011cac4:
              uVar13 = 2;
            }
            else {
              if (-1 < (int)(uVar11 << 0x10)) goto LAB_00117b54;
LAB_0011ad38:
              uVar13 = 1;
            }
          }
        }
      }
      if (uVar14 < uVar12) {
        uVar14 = uVar12;
      }
      if (uVar14 < uVar13) {
        uVar14 = uVar13;
      }
      switch(uVar14) {
      case 1:
        uVar4 = 2;
        break;
      case 2:
        uVar4 = 4;
        break;
      case 3:
        uVar4 = 8;
        break;
      case 4:
        uVar4 = 0x10;
        break;
      case 5:
        uVar4 = 0x20;
        break;
      case 6:
        uVar4 = 0x40;
        break;
      case 7:
        uVar4 = 0x80;
        break;
      case 8:
        uVar4 = 0x100;
        break;
      case 9:
        uVar4 = 0x200;
        break;
      case 10:
        uVar4 = 0x400;
        break;
      case 0xb:
        uVar4 = 0x800;
        break;
      case 0xc:
        uVar4 = 0x1000;
        break;
      case 0xd:
        uVar4 = 0x2000;
        break;
      case 0xe:
        uVar4 = 0x4000;
        break;
      case 0xf:
        uVar4 = 0x8000;
        break;
      case 0x10:
        uVar4 = 0x10000;
        break;
      default:
        uVar4 = 1;
        uVar12 = uVar9;
        goto LAB_00117bac;
      }
      uVar12 = __divsi3(uVar9,uVar4);
      if (uVar12 != 0) {
LAB_00117bac:
        if (uVar8 != 0) {
          iVar10 = __divsi3(uVar8,uVar4);
          uVar5 = __divsi3(iVar10 * 0x7fff,uVar12);
          *(undefined4 *)param_3 = uVar5;
        }
        uVar8 = 0;
        if (uVar15 != 0) {
          iVar10 = __divsi3(uVar15,uVar4);
          uVar8 = __divsi3(iVar10 * 0x7fff,uVar12);
          *(uint *)(param_3 + 4) = uVar8;
        }
        if (uVar11 == 0) {
          uVar12 = *(uint *)param_3;
          if (uVar12 == 0) {
LAB_0011a010:
            if (uVar8 == 0) goto LAB_0011707e;
            local_48 = 0;
LAB_00119c8c:
            if ((int)uVar8 < 0) {
              iVar10 = -0x5a;
            }
            else {
              iVar10 = 0x5a;
            }
            goto LAB_00117084;
          }
LAB_00117c10:
          if ((int)uVar12 < 0) {
            local_48 = -0x5a;
          }
          else {
            local_48 = 0x5a;
          }
          if (uVar8 != 0) {
            uVar14 = 0;
            goto LAB_00118bc2;
          }
          uVar14 = 0;
LAB_00117c24:
          if (uVar12 == 0) {
            uVar8 = 0;
            iVar10 = 0;
            if (uVar14 == 0) goto LAB_00117084;
            goto LAB_00117c32;
          }
LAB_00118bc2:
          if ((uVar12 & 0x80000000) == 0x80000000) {
            if ((uVar12 & 0xffffc000) != 0xffffc000) {
              if (-1 < (int)(uVar12 << 1)) goto LAB_0011bc66;
              if (-1 < (int)(uVar12 << 2)) goto LAB_0011be1e;
              if (-1 < (int)(uVar12 << 3)) goto LAB_0011be4e;
              if (-1 < (int)(uVar12 << 4)) goto LAB_0011be46;
              if (-1 < (int)(uVar12 << 5)) goto LAB_0011be56;
              if (-1 < (int)(uVar12 << 6)) goto LAB_0011bea8;
              if (-1 < (int)(uVar12 << 7)) goto LAB_0011beb0;
              if (-1 < (int)(uVar12 << 8)) goto LAB_0011c07c;
              if (-1 < (int)(uVar12 << 9)) goto LAB_0011c0ac;
              if (-1 < (int)(uVar12 << 10)) goto LAB_0011c2f6;
              if (-1 < (int)(uVar12 << 0xb)) goto LAB_0011c1f8;
              if (-1 < (int)(uVar12 << 0xc)) goto LAB_0011c1f0;
              if (-1 < (int)(uVar12 << 0xd)) goto LAB_0011c210;
              if (-1 < (int)(uVar12 << 0xe)) goto LAB_0011c208;
              if (-1 < (int)(uVar12 << 0xf)) goto LAB_0011c200;
              if (-1 < (int)(uVar12 << 0x10)) goto LAB_0011c526;
              if (-1 < (int)(uVar12 << 0x11)) goto LAB_0011a39c;
            }
LAB_00118c3e:
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            if ((uVar12 & 0xffffc000) != 0) {
              if ((int)(uVar12 << 1) < 0) {
LAB_0011bc66:
                uVar15 = 0x11;
              }
              else if ((int)(uVar12 << 2) < 0) {
LAB_0011be1e:
                uVar15 = 0x10;
              }
              else if ((int)(uVar12 << 3) < 0) {
LAB_0011be4e:
                uVar15 = 0xf;
              }
              else if ((int)(uVar12 << 4) < 0) {
LAB_0011be46:
                uVar15 = 0xe;
              }
              else if ((int)(uVar12 << 5) < 0) {
LAB_0011be56:
                uVar15 = 0xd;
              }
              else if ((int)(uVar12 << 6) < 0) {
LAB_0011bea8:
                uVar15 = 0xc;
              }
              else if ((int)(uVar12 << 7) < 0) {
LAB_0011beb0:
                uVar15 = 0xb;
              }
              else if ((int)(uVar12 << 8) < 0) {
LAB_0011c07c:
                uVar15 = 10;
              }
              else if ((int)(uVar12 << 9) < 0) {
LAB_0011c0ac:
                uVar15 = 9;
              }
              else if ((int)(uVar12 << 10) < 0) {
LAB_0011c2f6:
                uVar15 = 8;
              }
              else if ((int)(uVar12 << 0xb) < 0) {
LAB_0011c1f8:
                uVar15 = 7;
              }
              else if ((int)(uVar12 << 0xc) < 0) {
LAB_0011c1f0:
                uVar15 = 6;
              }
              else if ((int)(uVar12 << 0xd) < 0) {
LAB_0011c210:
                uVar15 = 5;
              }
              else if ((int)(uVar12 << 0xe) < 0) {
LAB_0011c208:
                uVar15 = 4;
              }
              else if ((int)(uVar12 << 0xf) < 0) {
LAB_0011c200:
                uVar15 = 3;
              }
              else if ((int)(uVar12 << 0x10) < 0) {
LAB_0011c526:
                uVar15 = 2;
              }
              else {
                if (-1 < (int)(uVar12 << 0x11)) goto LAB_00118c3e;
LAB_0011a39c:
                uVar15 = 1;
              }
            }
          }
          uVar13 = 0;
          if (uVar14 != 0) goto LAB_00117c36;
        }
        else {
          iVar10 = __divsi3(uVar11,uVar4);
          uVar14 = __divsi3(iVar10 * 0x7fff,uVar12);
          uVar12 = *(uint *)param_3;
          uVar8 = *(uint *)(param_3 + 4);
          *(uint *)(param_3 + 8) = uVar14;
          if (uVar12 == 0) {
            if (uVar14 == 0) goto LAB_0011a010;
          }
          else if (uVar14 == 0) goto LAB_00117c10;
          if (uVar14 == 0 && uVar12 == 0) {
            local_48 = 0;
          }
          else {
            if ((uVar14 & 0x80000000) == 0x80000000) {
              if ((uVar14 & 0xffff8000) != 0xffff8000) {
                if ((uVar14 & 0x40000000) == 0) goto LAB_0011c946;
                if ((uVar14 & 0x20000000) == 0) goto LAB_0011c93e;
                if ((uVar14 & 0x10000000) == 0) goto LAB_0011c936;
                if ((uVar14 & 0x8000000) == 0) goto LAB_0011c92e;
                if ((uVar14 & 0x4000000) == 0) goto LAB_0011c926;
                if ((uVar14 & 0x2000000) == 0) goto LAB_0011c91e;
                if ((uVar14 & 0x1000000) == 0) goto LAB_0011c916;
                if ((uVar14 & 0x800000) == 0) goto LAB_0011c90e;
                if ((uVar14 & 0x400000) == 0) goto LAB_0011cd6c;
                if ((uVar14 & 0x200000) == 0) goto LAB_0011cd64;
                if ((uVar14 & 0x100000) == 0) goto LAB_0011cd5c;
                if ((uVar14 & 0x80000) == 0) goto LAB_0011cd54;
                if ((uVar14 & 0x40000) == 0) goto LAB_0011cc52;
                if ((uVar14 & 0x20000) == 0) goto LAB_0011cc4a;
                if ((uVar14 & 0x10000) == 0) goto LAB_0011cc42;
                if ((uVar14 & 0x8000) == 0) goto LAB_0011b518;
              }
LAB_00119b7c:
              uVar15 = 0;
            }
            else {
              uVar15 = 0;
              if ((uVar14 & 0xffff8000) != 0) {
                if ((uVar14 & 0x40000000) == 0) {
                  if ((uVar14 & 0x20000000) == 0) {
                    if ((uVar14 & 0x10000000) == 0) {
                      if ((uVar14 & 0x8000000) == 0) {
                        if ((uVar14 & 0x4000000) == 0) {
                          if ((uVar14 & 0x2000000) == 0) {
                            if ((uVar14 & 0x1000000) == 0) {
                              if ((uVar14 & 0x800000) == 0) {
                                if ((uVar14 & 0x400000) == 0) {
                                  if ((uVar14 & 0x200000) == 0) {
                                    if ((uVar14 & 0x100000) == 0) {
                                      if ((uVar14 & 0x80000) == 0) {
                                        if ((uVar14 & 0x40000) == 0) {
                                          if ((uVar14 & 0x20000) == 0) {
                                            if ((uVar14 & 0x10000) == 0) {
                                              if ((uVar14 & 0x8000) == 0) goto LAB_00119b7c;
LAB_0011b518:
                                              uVar15 = 1;
                                            }
                                            else {
LAB_0011cc42:
                                              uVar15 = 2;
                                            }
                                          }
                                          else {
LAB_0011cc4a:
                                            uVar15 = 3;
                                          }
                                        }
                                        else {
LAB_0011cc52:
                                          uVar15 = 4;
                                        }
                                      }
                                      else {
LAB_0011cd54:
                                        uVar15 = 5;
                                      }
                                    }
                                    else {
LAB_0011cd5c:
                                      uVar15 = 6;
                                    }
                                  }
                                  else {
LAB_0011cd64:
                                    uVar15 = 7;
                                  }
                                }
                                else {
LAB_0011cd6c:
                                  uVar15 = 8;
                                }
                              }
                              else {
LAB_0011c90e:
                                uVar15 = 9;
                              }
                            }
                            else {
LAB_0011c916:
                              uVar15 = 10;
                            }
                          }
                          else {
LAB_0011c91e:
                            uVar15 = 0xb;
                          }
                        }
                        else {
LAB_0011c926:
                          uVar15 = 0xc;
                        }
                      }
                      else {
LAB_0011c92e:
                        uVar15 = 0xd;
                      }
                    }
                    else {
LAB_0011c936:
                      uVar15 = 0xe;
                    }
                  }
                  else {
LAB_0011c93e:
                    uVar15 = 0xf;
                  }
                }
                else {
LAB_0011c946:
                  uVar15 = 0x10;
                }
              }
            }
            if (uVar12 != 0) {
              if ((uVar12 & 0x80000000) == 0x80000000) {
                if ((uVar12 & 0xffff8000) != 0xffff8000) {
                  if (-1 < (int)(uVar12 << 1)) goto LAB_0011c8de;
                  if (-1 < (int)(uVar12 << 2)) goto LAB_0011c8ea;
                  if (-1 < (int)(uVar12 << 3)) goto LAB_0011c8e4;
                  if (-1 < (int)(uVar12 << 4)) goto LAB_0011c902;
                  if (-1 < (int)(uVar12 << 5)) goto LAB_0011c8fc;
                  if (-1 < (int)(uVar12 << 6)) goto LAB_0011c8f6;
                  if (-1 < (int)(uVar12 << 7)) goto LAB_0011c8f0;
                  if (-1 < (int)(uVar12 << 8)) goto LAB_0011c908;
                  if (-1 < (int)(uVar12 << 9)) goto LAB_0011ccda;
                  if (-1 < (int)(uVar12 << 10)) goto LAB_0011cce6;
                  if (-1 < (int)(uVar12 << 0xb)) goto LAB_0011cce0;
                  if (-1 < (int)(uVar12 << 0xc)) goto LAB_0011ccfe;
                  if (-1 < (int)(uVar12 << 0xd)) goto LAB_0011ccf8;
                  if (-1 < (int)(uVar12 << 0xe)) goto LAB_0011ccf2;
                  if (-1 < (int)(uVar12 << 0xf)) goto LAB_0011ccec;
                  if (-1 < (int)(uVar12 << 0x10)) goto LAB_0011b588;
LAB_00119bfc:
                  uVar13 = 0;
                  goto LAB_00119bfe;
                }
              }
              else if ((uVar12 & 0xffff8000) != 0) {
                if ((int)(uVar12 << 1) < 0) {
LAB_0011c8de:
                  uVar13 = 0x10;
                }
                else if ((int)(uVar12 << 2) < 0) {
LAB_0011c8ea:
                  uVar13 = 0xf;
                }
                else if ((int)(uVar12 << 3) < 0) {
LAB_0011c8e4:
                  uVar13 = 0xe;
                }
                else if ((int)(uVar12 << 4) < 0) {
LAB_0011c902:
                  uVar13 = 0xd;
                }
                else if ((int)(uVar12 << 5) < 0) {
LAB_0011c8fc:
                  uVar13 = 0xc;
                }
                else if ((int)(uVar12 << 6) < 0) {
LAB_0011c8f6:
                  uVar13 = 0xb;
                }
                else if ((int)(uVar12 << 7) < 0) {
LAB_0011c8f0:
                  uVar13 = 10;
                }
                else if ((int)(uVar12 << 8) < 0) {
LAB_0011c908:
                  uVar13 = 9;
                }
                else if ((int)(uVar12 << 9) < 0) {
LAB_0011ccda:
                  uVar13 = 8;
                }
                else if ((int)(uVar12 << 10) < 0) {
LAB_0011cce6:
                  uVar13 = 7;
                }
                else if ((int)(uVar12 << 0xb) < 0) {
LAB_0011cce0:
                  uVar13 = 6;
                }
                else if ((int)(uVar12 << 0xc) < 0) {
LAB_0011ccfe:
                  uVar13 = 5;
                }
                else if ((int)(uVar12 << 0xd) < 0) {
LAB_0011ccf8:
                  uVar13 = 4;
                }
                else if ((int)(uVar12 << 0xe) < 0) {
LAB_0011ccf2:
                  uVar13 = 3;
                }
                else if ((int)(uVar12 << 0xf) < 0) {
LAB_0011ccec:
                  uVar13 = 2;
                }
                else {
                  if (-1 < (int)(uVar12 << 0x10)) goto LAB_00119bfc;
LAB_0011b588:
                  uVar13 = 1;
                }
LAB_00119bfe:
                if (uVar15 < uVar13) {
                  uVar15 = uVar13;
                }
              }
            }
            switch(uVar15) {
            case 0:
              uVar4 = 1;
              break;
            case 1:
              uVar4 = 2;
              break;
            case 2:
              uVar4 = 4;
              break;
            case 3:
              uVar4 = 8;
              break;
            case 4:
              uVar4 = 0x10;
              break;
            case 5:
              uVar4 = 0x20;
              break;
            case 6:
              uVar4 = 0x40;
              break;
            case 7:
              uVar4 = 0x80;
              break;
            case 8:
              uVar4 = 0x100;
              break;
            case 9:
              uVar4 = 0x200;
              break;
            case 10:
              uVar4 = 0x400;
              break;
            case 0xb:
              uVar4 = 0x800;
              break;
            case 0xc:
              uVar4 = 0x1000;
              break;
            case 0xd:
              uVar4 = 0x2000;
              break;
            case 0xe:
              uVar4 = 0x4000;
              break;
            case 0xf:
              uVar4 = 0x8000;
              break;
            case 0x10:
              uVar4 = 0x10000;
              break;
            case 0x11:
              uVar4 = 0x20000;
              break;
            case 0x12:
              uVar4 = 0x40000;
              break;
            case 0x13:
              uVar4 = 0x80000;
              break;
            case 0x14:
              uVar4 = 0x100000;
              break;
            case 0x15:
              uVar4 = 0x200000;
              break;
            case 0x16:
              uVar4 = 0x400000;
              break;
            case 0x17:
              uVar4 = 0x800000;
              break;
            case 0x18:
              uVar4 = 0x1000000;
              break;
            case 0x19:
              uVar4 = 0x2000000;
              break;
            case 0x1a:
              uVar4 = 0x4000000;
              break;
            case 0x1b:
              uVar4 = 0x8000000;
              break;
            case 0x1c:
              uVar4 = 0x10000000;
              break;
            case 0x1d:
              uVar4 = 0x20000000;
              break;
            default:
              uVar4 = 0x40000000;
            }
            iVar10 = __divsi3(uVar14,uVar4);
            iVar1 = __divsi3(uVar12,uVar4);
            if (iVar10 < 0) {
              if (iVar1 < 0) {
                if (-iVar10 < -iVar1) {
                  iVar2 = *(int *)(iVar7 + DAT_0011c64c);
                  uVar15 = __divsi3(iVar10 * 0x7fff,iVar1);
                  if ((int)uVar15 < 0) {
                    uVar15 = uVar15 + 0x1ff;
                  }
                  local_48 = -0x5a - *(int *)(iVar2 + ((uVar15 & 0x7fff) >> 9) * 4);
                }
                else {
                  iVar2 = *(int *)(iVar7 + DAT_0011c64c);
                  uVar15 = __divsi3(iVar1 * 0x7fff,iVar10);
                  if ((int)uVar15 < 0) {
                    uVar15 = uVar15 + 0x1ff;
                  }
                  local_48 = *(int *)(iVar2 + ((uVar15 & 0x7fff) >> 9) * 4) + -0xb4;
                }
              }
              else if (-iVar10 < iVar1) {
                iVar2 = *(int *)(iVar7 + DAT_0011b780);
                uVar13 = __divsi3(iVar10 * -0x7fff,iVar1);
                uVar15 = uVar13 & ~((int)uVar13 >> 0x20);
                if ((int)uVar13 < 0) {
                  uVar15 = uVar13 + 0x1ff;
                }
                local_48 = *(int *)(iVar2 + ((uVar15 & 0x7fff) >> 9) * 4) + 0x5a;
              }
              else {
                iVar2 = *(int *)(iVar7 + DAT_0011b780);
                uVar13 = __divsi3(iVar1 * -0x7fff,iVar10);
                uVar15 = uVar13 & ~((int)uVar13 >> 0x20);
                if ((int)uVar13 < 0) {
                  uVar15 = uVar13 + 0x1ff;
                }
                local_48 = 0xb4 - *(int *)(iVar2 + ((uVar15 & 0x7fff) >> 9) * 4);
              }
            }
            else if (iVar1 < 0) {
              if (iVar10 < -iVar1) {
                iVar2 = *(int *)(iVar7 + DAT_0011b780);
                uVar13 = __divsi3(iVar10 * -0x7fff,iVar1);
                uVar15 = uVar13 & ~((int)uVar13 >> 0x20);
                if ((int)uVar13 < 0) {
                  uVar15 = uVar13 + 0x1ff;
                }
                local_48 = *(int *)(iVar2 + ((uVar15 & 0x7fff) >> 9) * 4) + -0x5a;
              }
              else {
                iVar2 = *(int *)(iVar7 + DAT_0011b780);
                uVar13 = __divsi3(iVar1 * -0x7fff,iVar10);
                uVar15 = uVar13 & ~((int)uVar13 >> 0x20);
                if ((int)uVar13 < 0) {
                  uVar15 = uVar13 + 0x1ff;
                }
                local_48 = -*(int *)(iVar2 + ((uVar15 & 0x7fff) >> 9) * 4);
              }
            }
            else if (iVar10 < iVar1) {
              iVar2 = *(int *)(iVar7 + DAT_0011a81c);
              uVar13 = __divsi3(iVar10 * 0x7fff,iVar1);
              uVar15 = uVar13 & ~((int)uVar13 >> 0x20);
              if ((int)uVar13 < 0) {
                uVar15 = uVar13 + 0x1ff;
              }
              local_48 = 0x5a - *(int *)(iVar2 + ((uVar15 & 0x7fff) >> 9) * 4);
            }
            else {
              iVar2 = *(int *)(iVar7 + DAT_0011a81c);
              uVar15 = __divsi3(iVar1 * 0x7fff,iVar10);
              local_48 = *(int *)(iVar2 + ((uVar15 & 0x7fff) >> 9) * 4);
            }
          }
          if (uVar8 == 0) goto LAB_00117c24;
          if (uVar12 != 0) goto LAB_00118bc2;
          if (uVar14 == 0) goto LAB_00119c8c;
LAB_00117c32:
          uVar15 = 0;
LAB_00117c36:
          if ((uVar14 & 0x80000000) == 0x80000000) {
            if ((uVar14 & 0xffffc000) != 0xffffc000) {
              if (-1 < (int)(uVar14 << 1)) goto LAB_0011bc86;
              if (-1 < (int)(uVar14 << 2)) goto LAB_0011bd6c;
              if (-1 < (int)(uVar14 << 3)) goto LAB_0011be0e;
              if (-1 < (int)(uVar14 << 4)) goto LAB_0011be06;
              if (-1 < (int)(uVar14 << 5)) goto LAB_0011be16;
              if (-1 < (int)(uVar14 << 6)) goto LAB_0011bf80;
              if (-1 < (int)(uVar14 << 7)) goto LAB_0011bf88;
              if (-1 < (int)(uVar14 << 8)) goto LAB_0011c0bc;
              if (-1 < (int)(uVar14 << 9)) goto LAB_0011c0a4;
              if (-1 < (int)(uVar14 << 10)) goto LAB_0011c258;
              if (-1 < (int)(uVar14 << 0xb)) goto LAB_0011c268;
              if (-1 < (int)(uVar14 << 0xc)) goto LAB_0011c260;
              if (-1 < (int)(uVar14 << 0xd)) goto LAB_0011c280;
              if (-1 < (int)(uVar14 << 0xe)) goto LAB_0011c278;
              if (-1 < (int)(uVar14 << 0xf)) goto LAB_0011c270;
              if (-1 < (int)(uVar14 << 0x10)) goto LAB_0011c52e;
              if (-1 < (int)(uVar14 << 0x11)) goto LAB_0011a416;
            }
LAB_00117cb2:
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            if ((uVar14 & 0xffffc000) != 0) {
              if ((int)(uVar14 << 1) < 0) {
LAB_0011bc86:
                uVar13 = 0x11;
              }
              else if ((int)(uVar14 << 2) < 0) {
LAB_0011bd6c:
                uVar13 = 0x10;
              }
              else if ((int)(uVar14 << 3) < 0) {
LAB_0011be0e:
                uVar13 = 0xf;
              }
              else if ((int)(uVar14 << 4) < 0) {
LAB_0011be06:
                uVar13 = 0xe;
              }
              else if ((int)(uVar14 << 5) < 0) {
LAB_0011be16:
                uVar13 = 0xd;
              }
              else if ((int)(uVar14 << 6) < 0) {
LAB_0011bf80:
                uVar13 = 0xc;
              }
              else if ((int)(uVar14 << 7) < 0) {
LAB_0011bf88:
                uVar13 = 0xb;
              }
              else if ((int)(uVar14 << 8) < 0) {
LAB_0011c0bc:
                uVar13 = 10;
              }
              else if ((int)(uVar14 << 9) < 0) {
LAB_0011c0a4:
                uVar13 = 9;
              }
              else if ((int)(uVar14 << 10) < 0) {
LAB_0011c258:
                uVar13 = 8;
              }
              else if ((int)(uVar14 << 0xb) < 0) {
LAB_0011c268:
                uVar13 = 7;
              }
              else if ((int)(uVar14 << 0xc) < 0) {
LAB_0011c260:
                uVar13 = 6;
              }
              else if ((int)(uVar14 << 0xd) < 0) {
LAB_0011c280:
                uVar13 = 5;
              }
              else if ((int)(uVar14 << 0xe) < 0) {
LAB_0011c278:
                uVar13 = 4;
              }
              else if ((int)(uVar14 << 0xf) < 0) {
LAB_0011c270:
                uVar13 = 3;
              }
              else if ((int)(uVar14 << 0x10) < 0) {
LAB_0011c52e:
                uVar13 = 2;
              }
              else {
                if (-1 < (int)(uVar14 << 0x11)) goto LAB_00117cb2;
LAB_0011a416:
                uVar13 = 1;
              }
            }
          }
        }
        if (uVar13 < uVar15) {
          uVar13 = uVar15;
        }
        switch(uVar13) {
        case 0:
          iVar10 = 1;
          break;
        case 1:
          iVar10 = 2;
          break;
        case 2:
          iVar10 = 4;
          break;
        case 3:
          iVar10 = 8;
          break;
        case 4:
          iVar10 = 0x10;
          break;
        case 5:
          iVar10 = 0x20;
          break;
        case 6:
          iVar10 = 0x40;
          break;
        case 7:
          iVar10 = 0x80;
          break;
        case 8:
          iVar10 = 0x100;
          break;
        case 9:
          iVar10 = 0x200;
          break;
        case 10:
          iVar10 = 0x400;
          break;
        case 0xb:
          iVar10 = 0x800;
          break;
        case 0xc:
          iVar10 = 0x1000;
          break;
        case 0xd:
          iVar10 = 0x2000;
          break;
        case 0xe:
          iVar10 = 0x4000;
          break;
        case 0xf:
          iVar10 = 0x8000;
          break;
        case 0x10:
          iVar10 = 0x10000;
          break;
        case 0x11:
          iVar10 = 0x20000;
          break;
        case 0x12:
          iVar10 = 0x40000;
          break;
        case 0x13:
          iVar10 = 0x80000;
          break;
        case 0x14:
          iVar10 = 0x100000;
          break;
        case 0x15:
          iVar10 = 0x200000;
          break;
        case 0x16:
          iVar10 = 0x400000;
          break;
        case 0x17:
          iVar10 = 0x800000;
          break;
        case 0x18:
          iVar10 = 0x1000000;
          break;
        case 0x19:
          iVar10 = 0x2000000;
          break;
        case 0x1a:
          iVar10 = 0x4000000;
          break;
        case 0x1b:
          iVar10 = 0x8000000;
          break;
        case 0x1c:
          iVar10 = 0x10000000;
          break;
        case 0x1d:
          iVar10 = 0x20000000;
          break;
        default:
          iVar10 = 0x40000000;
        }
        iVar1 = __divsi3(uVar12,iVar10);
        iVar2 = __divsi3(uVar14,iVar10);
        iVar1 = iVar1 * iVar1 + iVar2 * iVar2;
        if (iVar1 < 1) {
          uVar15 = 0;
        }
        else {
          iVar2 = iVar1;
          if (iVar1 == 0x7fffffff) {
            iVar1 = 0x7ffffffe;
            iVar2 = 0x7ffffffe;
          }
          do {
            iVar3 = __divsi3(iVar2,iVar1);
            iVar3 = (iVar1 + iVar3) / 2;
            iVar6 = iVar1;
            if (iVar1 <= iVar3) break;
            iVar1 = __divsi3(iVar2,iVar3);
            iVar1 = (iVar3 + iVar1) / 2;
            iVar6 = iVar3;
            if (iVar3 <= iVar1) break;
            iVar3 = __divsi3(iVar2);
            iVar3 = (iVar1 + iVar3) / 2;
            iVar6 = iVar1;
            if (iVar1 <= iVar3) break;
            iVar1 = __divsi3(iVar2,iVar3);
            iVar1 = (iVar3 + iVar1) / 2;
            iVar6 = iVar3;
            if (iVar3 <= iVar1) break;
            iVar3 = __divsi3(iVar2,iVar1);
            iVar3 = (iVar1 + iVar3) / 2;
            iVar6 = iVar1;
            if (iVar1 <= iVar3) break;
            iVar1 = __divsi3(iVar2,iVar3);
            iVar1 = (iVar3 + iVar1) / 2;
            iVar6 = iVar3;
            if (iVar3 <= iVar1) break;
            iVar3 = __divsi3(iVar2);
            iVar3 = (iVar1 + iVar3) / 2;
            iVar6 = iVar1;
            if (iVar1 <= iVar3) break;
            iVar1 = __divsi3(iVar2,iVar3);
            iVar1 = (iVar1 + iVar3) / 2;
            iVar6 = iVar3;
          } while (iVar1 < iVar3);
          uVar15 = iVar10 * iVar6;
        }
        uVar12 = uVar12 & ~((int)uVar12 >> 0x1f);
        if ((int)uVar15 <= (int)uVar12) {
          uVar15 = uVar12;
        }
        if ((int)uVar15 < (int)uVar14) {
          uVar15 = uVar14;
          if (uVar8 == 0 && uVar14 == 0) {
            iVar10 = 0;
            goto LAB_00117084;
          }
LAB_00118994:
          uVar12 = 0;
          if ((uVar15 & 0xffff8000) != 0) {
            if ((int)(uVar15 << 1) < 0) {
              uVar12 = 0x10;
            }
            else if ((int)(uVar15 << 2) < 0) {
              uVar12 = 0xf;
            }
            else if ((int)(uVar15 << 3) < 0) {
              uVar12 = 0xe;
            }
            else if ((int)(uVar15 << 4) < 0) {
              uVar12 = 0xd;
            }
            else if ((int)(uVar15 << 5) < 0) {
              uVar12 = 0xc;
            }
            else if ((int)(uVar15 << 6) < 0) {
              uVar12 = 0xb;
            }
            else if ((int)(uVar15 << 7) < 0) {
              uVar12 = 10;
            }
            else if ((int)(uVar15 << 8) < 0) {
              uVar12 = 9;
            }
            else if ((int)(uVar15 << 9) < 0) {
              uVar12 = 8;
            }
            else if ((int)(uVar15 << 10) < 0) {
              uVar12 = 7;
            }
            else if ((int)(uVar15 << 0xb) < 0) {
              uVar12 = 6;
            }
            else if ((int)(uVar15 << 0xc) < 0) {
              uVar12 = 5;
            }
            else if ((int)(uVar15 << 0xd) < 0) {
              uVar12 = 4;
            }
            else if ((int)(uVar15 << 0xe) < 0) {
              uVar12 = 3;
            }
            else if ((int)(uVar15 << 0xf) < 0) {
              uVar12 = 2;
            }
            else if ((int)(uVar15 << 0x10) < 0) {
              uVar12 = 1;
            }
            else {
              uVar12 = 0;
            }
          }
        }
        else {
          iVar10 = 0;
          if (uVar15 == 0 && uVar8 == 0) goto LAB_00117084;
          if (uVar15 != 0) goto LAB_00118994;
          uVar12 = 0;
        }
        if (uVar8 != 0) {
          if ((uVar8 & 0x80000000) == 0x80000000) {
            if ((uVar8 & 0xffff8000) != 0xffff8000) {
              if (-1 < (int)(uVar8 << 1)) goto LAB_0011c296;
              if (-1 < (int)(uVar8 << 2)) goto LAB_0011c29c;
              if (-1 < (int)(uVar8 << 3)) goto LAB_0011c4e4;
              if (-1 < (int)(uVar8 << 4)) goto LAB_0011c4d6;
              if (-1 < (int)(uVar8 << 5)) goto LAB_0011c4d0;
              if (-1 < (int)(uVar8 << 6)) goto LAB_0011c5dc;
              if (-1 < (int)(uVar8 << 7)) goto LAB_0011c5d6;
              if (-1 < (int)(uVar8 << 8)) goto LAB_0011c680;
              if (-1 < (int)(uVar8 << 9)) goto LAB_0011c67a;
              if (-1 < (int)(uVar8 << 10)) goto LAB_0011c6d8;
              if (-1 < (int)(uVar8 << 0xb)) goto LAB_0011c6d2;
              if (-1 < (int)(uVar8 << 0xc)) goto LAB_0011c6f0;
              if (-1 < (int)(uVar8 << 0xd)) goto LAB_0011c6ea;
              if (-1 < (int)(uVar8 << 0xe)) goto LAB_0011c6e4;
              if (-1 < (int)(uVar8 << 0xf)) goto LAB_0011c6de;
              if (-1 < (int)(uVar8 << 0x10)) goto LAB_0011ae96;
LAB_00118a82:
              uVar14 = 0;
              goto LAB_00118a84;
            }
          }
          else if ((uVar8 & 0xffff8000) != 0) {
            if ((int)(uVar8 << 1) < 0) {
LAB_0011c296:
              uVar14 = 0x10;
            }
            else if ((int)(uVar8 << 2) < 0) {
LAB_0011c29c:
              uVar14 = 0xf;
            }
            else if ((int)(uVar8 << 3) < 0) {
LAB_0011c4e4:
              uVar14 = 0xe;
            }
            else if ((int)(uVar8 << 4) < 0) {
LAB_0011c4d6:
              uVar14 = 0xd;
            }
            else if ((int)(uVar8 << 5) < 0) {
LAB_0011c4d0:
              uVar14 = 0xc;
            }
            else if ((int)(uVar8 << 6) < 0) {
LAB_0011c5dc:
              uVar14 = 0xb;
            }
            else if ((int)(uVar8 << 7) < 0) {
LAB_0011c5d6:
              uVar14 = 10;
            }
            else if ((int)(uVar8 << 8) < 0) {
LAB_0011c680:
              uVar14 = 9;
            }
            else if ((int)(uVar8 << 9) < 0) {
LAB_0011c67a:
              uVar14 = 8;
            }
            else if ((int)(uVar8 << 10) < 0) {
LAB_0011c6d8:
              uVar14 = 7;
            }
            else if ((int)(uVar8 << 0xb) < 0) {
LAB_0011c6d2:
              uVar14 = 6;
            }
            else if ((int)(uVar8 << 0xc) < 0) {
LAB_0011c6f0:
              uVar14 = 5;
            }
            else if ((int)(uVar8 << 0xd) < 0) {
LAB_0011c6ea:
              uVar14 = 4;
            }
            else if ((int)(uVar8 << 0xe) < 0) {
LAB_0011c6e4:
              uVar14 = 3;
            }
            else if ((int)(uVar8 << 0xf) < 0) {
LAB_0011c6de:
              uVar14 = 2;
            }
            else {
              if (-1 < (int)(uVar8 << 0x10)) goto LAB_00118a82;
LAB_0011ae96:
              uVar14 = 1;
            }
LAB_00118a84:
            if (uVar12 < uVar14) {
              uVar12 = uVar14;
            }
          }
        }
        switch(uVar12) {
        case 0:
          uVar4 = 1;
          break;
        case 1:
          uVar4 = 2;
          break;
        case 2:
          uVar4 = 4;
          break;
        case 3:
          uVar4 = 8;
          break;
        case 4:
          uVar4 = 0x10;
          break;
        case 5:
          uVar4 = 0x20;
          break;
        case 6:
          uVar4 = 0x40;
          break;
        case 7:
          uVar4 = 0x80;
          break;
        case 8:
          uVar4 = 0x100;
          break;
        case 9:
          uVar4 = 0x200;
          break;
        case 10:
          uVar4 = 0x400;
          break;
        case 0xb:
          uVar4 = 0x800;
          break;
        case 0xc:
          uVar4 = 0x1000;
          break;
        case 0xd:
          uVar4 = 0x2000;
          break;
        case 0xe:
          uVar4 = 0x4000;
          break;
        case 0xf:
          uVar4 = 0x8000;
          break;
        case 0x10:
          uVar4 = 0x10000;
          break;
        case 0x11:
          uVar4 = 0x20000;
          break;
        case 0x12:
          uVar4 = 0x40000;
          break;
        case 0x13:
          uVar4 = 0x80000;
          break;
        case 0x14:
          uVar4 = 0x100000;
          break;
        case 0x15:
          uVar4 = 0x200000;
          break;
        case 0x16:
          uVar4 = 0x400000;
          break;
        case 0x17:
          uVar4 = 0x800000;
          break;
        case 0x18:
          uVar4 = 0x1000000;
          break;
        case 0x19:
          uVar4 = 0x2000000;
          break;
        case 0x1a:
          uVar4 = 0x4000000;
          break;
        case 0x1b:
          uVar4 = 0x8000000;
          break;
        case 0x1c:
          uVar4 = 0x10000000;
          break;
        case 0x1d:
          uVar4 = 0x20000000;
          break;
        default:
          uVar4 = 0x40000000;
        }
        iVar2 = __divsi3(uVar15,uVar4);
        iVar3 = __divsi3(uVar8,uVar4);
        iVar1 = DAT_0011b780;
        iVar10 = DAT_001194d4;
        if (iVar3 < 0) {
          if (iVar2 < -iVar3) {
            uVar12 = __divsi3(iVar2 * -0x7fff);
            uVar8 = uVar12 & ~((int)uVar12 >> 0x20);
            if ((int)uVar12 < 0) {
              uVar8 = uVar12 + 0x1ff;
            }
            iVar10 = *(int *)(*(int *)(iVar7 + iVar1) + ((uVar8 & 0x7fff) >> 9) * 4) + -0x5a;
          }
          else {
            iVar7 = *(int *)(iVar7 + DAT_0011b780);
            uVar12 = __divsi3(iVar3 * -0x7fff,iVar2);
            uVar8 = uVar12 & ~((int)uVar12 >> 0x20);
            if ((int)uVar12 < 0) {
              uVar8 = uVar12 + 0x1ff;
            }
            iVar10 = -*(int *)(iVar7 + ((uVar8 & 0x7fff) >> 9) * 4);
          }
        }
        else if (iVar2 < iVar3) {
          uVar12 = __divsi3(iVar2 * 0x7fff);
          uVar8 = uVar12 & ~((int)uVar12 >> 0x20);
          if ((int)uVar12 < 0) {
            uVar8 = uVar12 + 0x1ff;
          }
          iVar10 = 0x5a - *(int *)(*(int *)(iVar7 + iVar10) + ((uVar8 & 0x7fff) >> 9) * 4);
        }
        else {
          iVar7 = *(int *)(iVar7 + DAT_001194d4);
          uVar8 = __divsi3(iVar3 * 0x7fff,iVar2);
          iVar10 = *(int *)(iVar7 + ((uVar8 & 0x7fff) >> 9) * 4);
        }
        goto LAB_00117084;
      }
    }
LAB_0011707e:
    iVar10 = 0;
    local_48 = 0;
LAB_00117084:
    *(int *)param_3 = local_48;
    *(int *)(param_3 + 4) = iVar10;
    *(uint *)(param_3 + 8) = uVar9;
    return;
  }
  if (param_2 == 1) {
    *(int *)param_3 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x74);
    *(int *)(param_3 + 4) = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x78);
    *(int *)(param_3 + 8) = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x7c);
    return;
  }
  if (param_2 == 0) {
LAB_001171dc:
    uVar4 = *(undefined4 *)(param_1 + 0x30);
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_3 + 4) = uVar4;
    *(undefined4 *)(param_3 + 8) = uVar5;
    return;
  }
  if (param_2 != 2) {
    return;
  }
  if (*(int *)(param_1 + 0xfc) == *(int *)(param_1 + 0x2c)) {
    iVar10 = *(int *)(param_1 + 0x100);
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar10 != iVar1) goto LAB_001170ae;
    iVar2 = *(int *)(param_1 + 0x104);
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar2 != iVar3) goto LAB_001170b2;
    iVar1 = *(int *)(param_1 + 0x74);
    if (((*(int *)(param_1 + 0x108) != iVar1) ||
        (*(int *)(param_1 + 0x10c) != *(int *)(param_1 + 0x78))) ||
       (iVar1 = *(int *)(param_1 + 0x108), *(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x7c)))
    goto LAB_001170ba;
    uVar9 = 2;
    uVar8 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
LAB_001170ae:
    iVar3 = *(int *)(param_1 + 0x34);
LAB_001170b2:
    iVar2 = iVar3;
    iVar10 = iVar1;
    iVar1 = *(int *)(param_1 + 0x74);
LAB_001170ba:
    uVar9 = *(int *)(param_1 + 0x2c) - iVar1;
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x7c);
    uVar12 = iVar10 - *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x114) = uVar9;
    uVar8 = iVar2 - *(int *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x118) = uVar12;
    *(uint *)(param_1 + 0x11c) = uVar8;
    if (uVar9 == 0) {
      if (uVar12 != 0) {
        uVar14 = 0;
        goto LAB_00118c50;
      }
      uVar15 = 0;
      if (uVar8 != 0) goto LAB_00117412;
      *(undefined4 *)(param_1 + 0x120) = 0;
LAB_00117d8c:
      uVar9 = 3;
      uVar8 = 1;
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      goto LAB_00117d9e;
    }
    if ((uVar9 & 0x80000000) == 0x80000000) {
      if ((uVar9 & 0xffffc000) != 0xffffc000) {
        if (-1 < (int)(uVar9 * 2)) goto LAB_0011bb9a;
        if (-1 < (int)(uVar9 * 4)) goto LAB_0011bb92;
        if (-1 < (int)(uVar9 * 8)) goto LAB_0011bcae;
        if (-1 < (int)(uVar9 * 0x10)) goto LAB_0011bd1e;
        if (-1 < (int)(uVar9 * 0x20)) goto LAB_0011bd64;
        if (-1 < (int)(uVar9 * 0x40)) goto LAB_0011bd5c;
        if (-1 < (int)(uVar9 * 0x80)) goto LAB_0011bd54;
        if (-1 < (int)(uVar9 * 0x100)) goto LAB_0011bfb0;
        if (-1 < (int)(uVar9 * 0x200)) goto LAB_0011c05c;
        if (-1 < (int)(uVar9 * 0x400)) goto LAB_0011c054;
        if (-1 < (int)(uVar9 * 0x800)) goto LAB_0011c0e0;
        if (-1 < (int)(uVar9 * 0x1000)) goto LAB_0011c108;
        if (-1 < (int)(uVar9 * 0x2000)) goto LAB_0011c128;
        if (-1 < (int)(uVar9 * 0x4000)) goto LAB_0011c120;
        if (-1 < (int)(uVar9 * 0x8000)) goto LAB_0011c118;
        if (-1 < (int)(uVar9 * 0x10000)) goto LAB_0011c110;
        if (-1 < (int)(uVar9 * 0x20000)) goto LAB_00119f0c;
      }
LAB_00117178:
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      if ((uVar9 & 0xffffc000) != 0) {
        if ((int)(uVar9 * 2) < 0) {
LAB_0011bb9a:
          uVar14 = 0x11;
        }
        else if ((int)(uVar9 * 4) < 0) {
LAB_0011bb92:
          uVar14 = 0x10;
        }
        else if ((int)(uVar9 * 8) < 0) {
LAB_0011bcae:
          uVar14 = 0xf;
        }
        else if ((int)(uVar9 * 0x10) < 0) {
LAB_0011bd1e:
          uVar14 = 0xe;
        }
        else if ((int)(uVar9 * 0x20) < 0) {
LAB_0011bd64:
          uVar14 = 0xd;
        }
        else if ((int)(uVar9 * 0x40) < 0) {
LAB_0011bd5c:
          uVar14 = 0xc;
        }
        else if ((int)(uVar9 * 0x80) < 0) {
LAB_0011bd54:
          uVar14 = 0xb;
        }
        else if ((int)(uVar9 * 0x100) < 0) {
LAB_0011bfb0:
          uVar14 = 10;
        }
        else if ((int)(uVar9 * 0x200) < 0) {
LAB_0011c05c:
          uVar14 = 9;
        }
        else if ((int)(uVar9 * 0x400) < 0) {
LAB_0011c054:
          uVar14 = 8;
        }
        else if ((int)(uVar9 * 0x800) < 0) {
LAB_0011c0e0:
          uVar14 = 7;
        }
        else if ((int)(uVar9 * 0x1000) < 0) {
LAB_0011c108:
          uVar14 = 6;
        }
        else if ((int)(uVar9 * 0x2000) < 0) {
LAB_0011c128:
          uVar14 = 5;
        }
        else if ((int)(uVar9 * 0x4000) < 0) {
LAB_0011c120:
          uVar14 = 4;
        }
        else if ((int)(uVar9 * 0x8000) < 0) {
LAB_0011c118:
          uVar14 = 3;
        }
        else if ((int)(uVar9 * 0x10000) < 0) {
LAB_0011c110:
          uVar14 = 2;
        }
        else {
          if (-1 < (int)(uVar9 * 0x20000)) goto LAB_00117178;
LAB_00119f0c:
          uVar14 = 1;
        }
      }
    }
    uVar15 = uVar14;
    if (uVar12 != 0) {
LAB_00118c50:
      if ((uVar12 & 0x80000000) == 0x80000000) {
        if ((uVar12 & 0xffffc000) != 0xffffc000) {
          if (-1 < (int)(uVar12 * 2)) goto LAB_0011bc2a;
          if (-1 < (int)(uVar12 * 4)) goto LAB_0011bc22;
          if (-1 < (int)(uVar12 * 8)) goto LAB_0011bc6e;
          if (-1 < (int)(uVar12 * 0x10)) goto LAB_0011be26;
          if (-1 < (int)(uVar12 * 0x20)) goto LAB_0011be3e;
          if (-1 < (int)(uVar12 * 0x40)) goto LAB_0011be36;
          if (-1 < (int)(uVar12 * 0x80)) goto LAB_0011be2e;
          if (-1 < (int)(uVar12 * 0x100)) goto LAB_0011bea0;
          if (-1 < (int)(uVar12 * 0x200)) goto LAB_0011bfa8;
          if (-1 < (int)(uVar12 * 0x400)) goto LAB_0011bfa0;
          if (-1 < (int)(uVar12 * 0x800)) goto LAB_0011c0b4;
          if (-1 < (int)(uVar12 * 0x1000)) goto LAB_0011c2fe;
          if (-1 < (int)(uVar12 * 0x2000)) goto LAB_0011c380;
          if (-1 < (int)(uVar12 * 0x4000)) goto LAB_0011c378;
          if (-1 < (int)(uVar12 * 0x8000)) goto LAB_0011c370;
          if (-1 < (int)(uVar12 * 0x10000)) goto LAB_0011c368;
          if (-1 < (int)(uVar12 * 0x20000)) goto LAB_00119f86;
        }
LAB_00118ccc:
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        if ((uVar12 & 0xffffc000) != 0) {
          if ((int)(uVar12 * 2) < 0) {
LAB_0011bc2a:
            uVar15 = 0x11;
          }
          else if ((int)(uVar12 * 4) < 0) {
LAB_0011bc22:
            uVar15 = 0x10;
          }
          else if ((int)(uVar12 * 8) < 0) {
LAB_0011bc6e:
            uVar15 = 0xf;
          }
          else if ((int)(uVar12 * 0x10) < 0) {
LAB_0011be26:
            uVar15 = 0xe;
          }
          else if ((int)(uVar12 * 0x20) < 0) {
LAB_0011be3e:
            uVar15 = 0xd;
          }
          else if ((int)(uVar12 * 0x40) < 0) {
LAB_0011be36:
            uVar15 = 0xc;
          }
          else if ((int)(uVar12 * 0x80) < 0) {
LAB_0011be2e:
            uVar15 = 0xb;
          }
          else if ((int)(uVar12 * 0x100) < 0) {
LAB_0011bea0:
            uVar15 = 10;
          }
          else if ((int)(uVar12 * 0x200) < 0) {
LAB_0011bfa8:
            uVar15 = 9;
          }
          else if ((int)(uVar12 * 0x400) < 0) {
LAB_0011bfa0:
            uVar15 = 8;
          }
          else if ((int)(uVar12 * 0x800) < 0) {
LAB_0011c0b4:
            uVar15 = 7;
          }
          else if ((int)(uVar12 * 0x1000) < 0) {
LAB_0011c2fe:
            uVar15 = 6;
          }
          else if ((int)(uVar12 * 0x2000) < 0) {
LAB_0011c380:
            uVar15 = 5;
          }
          else if ((int)(uVar12 * 0x4000) < 0) {
LAB_0011c378:
            uVar15 = 4;
          }
          else if ((int)(uVar12 * 0x8000) < 0) {
LAB_0011c370:
            uVar15 = 3;
          }
          else if ((int)(uVar12 * 0x10000) < 0) {
LAB_0011c368:
            uVar15 = 2;
          }
          else {
            if (-1 < (int)(uVar12 * 0x20000)) goto LAB_00118ccc;
LAB_00119f86:
            uVar15 = 1;
          }
        }
      }
      if (uVar15 < uVar14) {
        uVar15 = uVar14;
      }
    }
    uVar14 = 0;
    if (uVar8 != 0) {
LAB_00117412:
      if ((uVar8 & 0x80000000) == 0x80000000) {
        if ((uVar8 & 0xffffc000) != 0xffffc000) {
          if (-1 < (int)(uVar8 * 2)) goto LAB_0011bc1c;
          if (-1 < (int)(uVar8 * 4)) goto LAB_0011bbe8;
          if (-1 < (int)(uVar8 * 8)) goto LAB_0011bc4a;
          if (-1 < (int)(uVar8 * 0x10)) goto LAB_0011bdde;
          if (-1 < (int)(uVar8 * 0x20)) goto LAB_0011bdd8;
          if (-1 < (int)(uVar8 * 0x40)) goto LAB_0011bdd2;
          if (-1 < (int)(uVar8 * 0x80)) goto LAB_0011bdcc;
          if (-1 < (int)(uVar8 * 0x100)) goto LAB_0011c070;
          if (-1 < (int)(uVar8 * 0x200)) goto LAB_0011c06a;
          if (-1 < (int)(uVar8 * 0x400)) goto LAB_0011c064;
          if (-1 < (int)(uVar8 * 0x800)) goto LAB_0011c076;
          if (-1 < (int)(uVar8 * 0x1000)) goto LAB_0011c2b4;
          if (-1 < (int)(uVar8 * 0x2000)) goto LAB_0011c2ae;
          if (-1 < (int)(uVar8 * 0x4000)) goto LAB_0011c2a8;
          if (-1 < (int)(uVar8 * 0x8000)) goto LAB_0011c2a2;
          if (-1 < (int)(uVar8 * 0x10000)) goto LAB_0011c2da;
          if (-1 < (int)(uVar8 * 0x20000)) goto LAB_0011a000;
        }
LAB_00117490:
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        if ((uVar8 & 0xffffc000) != 0) {
          if ((int)(uVar8 * 2) < 0) {
LAB_0011bc1c:
            uVar14 = 0x11;
          }
          else if ((int)(uVar8 * 4) < 0) {
LAB_0011bbe8:
            uVar14 = 0x10;
          }
          else if ((int)(uVar8 * 8) < 0) {
LAB_0011bc4a:
            uVar14 = 0xf;
          }
          else if ((int)(uVar8 * 0x10) < 0) {
LAB_0011bdde:
            uVar14 = 0xe;
          }
          else if ((int)(uVar8 * 0x20) < 0) {
LAB_0011bdd8:
            uVar14 = 0xd;
          }
          else if ((int)(uVar8 * 0x40) < 0) {
LAB_0011bdd2:
            uVar14 = 0xc;
          }
          else if ((int)(uVar8 * 0x80) < 0) {
LAB_0011bdcc:
            uVar14 = 0xb;
          }
          else if ((int)(uVar8 * 0x100) < 0) {
LAB_0011c070:
            uVar14 = 10;
          }
          else if ((int)(uVar8 * 0x200) < 0) {
LAB_0011c06a:
            uVar14 = 9;
          }
          else if ((int)(uVar8 * 0x400) < 0) {
LAB_0011c064:
            uVar14 = 8;
          }
          else if ((int)(uVar8 * 0x800) < 0) {
LAB_0011c076:
            uVar14 = 7;
          }
          else if ((int)(uVar8 * 0x1000) < 0) {
LAB_0011c2b4:
            uVar14 = 6;
          }
          else if ((int)(uVar8 * 0x2000) < 0) {
LAB_0011c2ae:
            uVar14 = 5;
          }
          else if ((int)(uVar8 * 0x4000) < 0) {
LAB_0011c2a8:
            uVar14 = 4;
          }
          else if ((int)(uVar8 * 0x8000) < 0) {
LAB_0011c2a2:
            uVar14 = 3;
          }
          else if ((int)(uVar8 * 0x10000) < 0) {
LAB_0011c2da:
            uVar14 = 2;
          }
          else {
            if (-1 < (int)(uVar8 * 0x20000)) goto LAB_00117490;
LAB_0011a000:
            uVar14 = 1;
          }
        }
      }
    }
    if (uVar14 < uVar15) {
      uVar14 = uVar15;
    }
    switch(uVar14) {
    case 0:
      iVar10 = 1;
      break;
    case 1:
      iVar10 = 2;
      break;
    case 2:
      iVar10 = 4;
      break;
    case 3:
      iVar10 = 8;
      break;
    case 4:
      iVar10 = 0x10;
      break;
    case 5:
      iVar10 = 0x20;
      break;
    case 6:
      iVar10 = 0x40;
      break;
    case 7:
      iVar10 = 0x80;
      break;
    case 8:
      iVar10 = 0x100;
      break;
    case 9:
      iVar10 = 0x200;
      break;
    case 10:
      iVar10 = 0x400;
      break;
    case 0xb:
      iVar10 = 0x800;
      break;
    case 0xc:
      iVar10 = 0x1000;
      break;
    case 0xd:
      iVar10 = 0x2000;
      break;
    case 0xe:
      iVar10 = 0x4000;
      break;
    case 0xf:
      iVar10 = 0x8000;
      break;
    case 0x10:
      iVar10 = 0x10000;
      break;
    case 0x11:
      iVar10 = 0x20000;
      break;
    case 0x12:
      iVar10 = 0x40000;
      break;
    case 0x13:
      iVar10 = 0x80000;
      break;
    case 0x14:
      iVar10 = 0x100000;
      break;
    case 0x15:
      iVar10 = 0x200000;
      break;
    case 0x16:
      iVar10 = 0x400000;
      break;
    case 0x17:
      iVar10 = 0x800000;
      break;
    case 0x18:
      iVar10 = 0x1000000;
      break;
    case 0x19:
      iVar10 = 0x2000000;
      break;
    case 0x1a:
      iVar10 = 0x4000000;
      break;
    case 0x1b:
      iVar10 = 0x8000000;
      break;
    case 0x1c:
      iVar10 = 0x10000000;
      break;
    case 0x1d:
      iVar10 = 0x20000000;
      break;
    default:
      iVar10 = 0x40000000;
    }
    iVar1 = __divsi3(uVar9,iVar10);
    iVar2 = __divsi3(uVar12,iVar10);
    iVar3 = __divsi3(uVar8,iVar10);
    iVar1 = iVar3 * iVar3 + iVar1 * iVar1 + iVar2 * iVar2;
    if (iVar1 < 1) {
      uVar14 = 0;
    }
    else {
      iVar2 = iVar1;
      if (iVar1 == 0x7fffffff) {
        iVar1 = 0x7ffffffe;
        iVar2 = 0x7ffffffe;
      }
      do {
        iVar3 = __divsi3(iVar2,iVar1);
        iVar3 = (iVar1 + iVar3) / 2;
        iVar6 = iVar1;
        if (iVar1 <= iVar3) break;
        iVar1 = __divsi3(iVar2,iVar3);
        iVar1 = (iVar3 + iVar1) / 2;
        iVar6 = iVar3;
        if (iVar3 <= iVar1) break;
        iVar3 = __divsi3(iVar2,iVar1);
        iVar3 = (iVar1 + iVar3) / 2;
        iVar6 = iVar1;
        if (iVar1 <= iVar3) break;
        iVar1 = __divsi3(iVar2);
        iVar1 = (iVar3 + iVar1) / 2;
        iVar6 = iVar3;
        if (iVar3 <= iVar1) break;
        iVar3 = __divsi3(iVar2,iVar1);
        iVar3 = (iVar1 + iVar3) / 2;
        iVar6 = iVar1;
        if (iVar1 <= iVar3) break;
        iVar1 = __divsi3(iVar2,iVar3);
        iVar1 = (iVar3 + iVar1) / 2;
        iVar6 = iVar3;
        if (iVar3 <= iVar1) break;
        iVar3 = __divsi3(iVar2,iVar1);
        iVar3 = (iVar1 + iVar3) / 2;
        iVar6 = iVar1;
        if (iVar1 <= iVar3) break;
        iVar1 = __divsi3(iVar2);
        iVar1 = (iVar1 + iVar3) / 2;
        iVar6 = iVar3;
      } while (iVar1 < iVar3);
      uVar14 = iVar10 * iVar6;
    }
    uVar15 = uVar12;
    if ((int)uVar12 < (int)uVar9) {
      uVar15 = uVar9;
    }
    if ((int)uVar15 < (int)uVar8) {
      uVar15 = uVar8;
    }
    if ((int)uVar14 <= (int)uVar15) {
      uVar14 = uVar15;
    }
    *(uint *)(param_1 + 0x120) = uVar14;
    if (uVar14 == 0) goto LAB_00117d8c;
    uVar15 = 0;
    if (uVar9 != 0) {
      if ((uVar9 & 0x80000000) == 0x80000000) {
        if ((uVar9 & 0xffff8000) != 0xffff8000) {
          if (-1 < (int)(uVar9 * 2)) goto LAB_0011cba4;
          if (-1 < (int)(uVar9 * 4)) goto LAB_0011ca56;
          if (-1 < (int)(uVar9 * 8)) goto LAB_0011ca50;
          if (-1 < (int)(uVar9 * 0x10)) goto LAB_0011c9e0;
          if (-1 < (int)(uVar9 * 0x20)) goto LAB_0011c9da;
          if (-1 < (int)(uVar9 * 0x40)) goto LAB_0011c9d4;
          if (-1 < (int)(uVar9 * 0x80)) goto LAB_0011c9ce;
          if (-1 < (int)(uVar9 * 0x100)) goto LAB_0011ca6e;
          if (-1 < (int)(uVar9 * 0x200)) goto LAB_0011ca68;
          if (-1 < (int)(uVar9 * 0x400)) goto LAB_0011ca62;
          if (-1 < (int)(uVar9 * 0x800)) goto LAB_0011ca5c;
          if (-1 < (int)(uVar9 * 0x1000)) goto LAB_0011cbbc;
          if (-1 < (int)(uVar9 * 0x2000)) goto LAB_0011cbb6;
          if (-1 < (int)(uVar9 * 0x4000)) goto LAB_0011cbb0;
          if (-1 < (int)(uVar9 * 0x8000)) goto LAB_0011cbaa;
          if (-1 < (int)(uVar9 * 0x10000)) goto LAB_0011b226;
        }
LAB_0011966e:
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        if ((uVar9 & 0xffff8000) != 0) {
          if ((int)(uVar9 * 2) < 0) {
LAB_0011cba4:
            uVar15 = 0x10;
          }
          else if ((int)(uVar9 * 4) < 0) {
LAB_0011ca56:
            uVar15 = 0xf;
          }
          else if ((int)(uVar9 * 8) < 0) {
LAB_0011ca50:
            uVar15 = 0xe;
          }
          else if ((int)(uVar9 * 0x10) < 0) {
LAB_0011c9e0:
            uVar15 = 0xd;
          }
          else if ((int)(uVar9 * 0x20) < 0) {
LAB_0011c9da:
            uVar15 = 0xc;
          }
          else if ((int)(uVar9 * 0x40) < 0) {
LAB_0011c9d4:
            uVar15 = 0xb;
          }
          else if ((int)(uVar9 * 0x80) < 0) {
LAB_0011c9ce:
            uVar15 = 10;
          }
          else if ((int)(uVar9 * 0x100) < 0) {
LAB_0011ca6e:
            uVar15 = 9;
          }
          else if ((int)(uVar9 * 0x200) < 0) {
LAB_0011ca68:
            uVar15 = 8;
          }
          else if ((int)(uVar9 * 0x400) < 0) {
LAB_0011ca62:
            uVar15 = 7;
          }
          else if ((int)(uVar9 * 0x800) < 0) {
LAB_0011ca5c:
            uVar15 = 6;
          }
          else if ((int)(uVar9 * 0x1000) < 0) {
LAB_0011cbbc:
            uVar15 = 5;
          }
          else if ((int)(uVar9 * 0x2000) < 0) {
LAB_0011cbb6:
            uVar15 = 4;
          }
          else if ((int)(uVar9 * 0x4000) < 0) {
LAB_0011cbb0:
            uVar15 = 3;
          }
          else if ((int)(uVar9 * 0x8000) < 0) {
LAB_0011cbaa:
            uVar15 = 2;
          }
          else {
            if (-1 < (int)(uVar9 * 0x10000)) goto LAB_0011966e;
LAB_0011b226:
            uVar15 = 1;
          }
        }
      }
    }
    uVar13 = 0;
    if (uVar12 != 0) {
      if ((uVar12 & 0x80000000) == 0x80000000) {
        if ((uVar12 & 0xffff8000) != 0xffff8000) {
          if (-1 < (int)(uVar12 * 2)) goto LAB_0011c77e;
          if (-1 < (int)(uVar12 * 4)) goto LAB_0011c806;
          if (-1 < (int)(uVar12 * 8)) goto LAB_0011c7fe;
          if (-1 < (int)(uVar12 * 0x10)) goto LAB_0011c7f6;
          if (-1 < (int)(uVar12 * 0x20)) goto LAB_0011c7ee;
          if (-1 < (int)(uVar12 * 0x40)) goto LAB_0011c7e6;
          if (-1 < (int)(uVar12 * 0x80)) goto LAB_0011c7de;
          if (-1 < (int)(uVar12 * 0x100)) goto LAB_0011c776;
          if (-1 < (int)(uVar12 * 0x200)) goto LAB_0011c76e;
          if (-1 < (int)(uVar12 * 0x400)) goto LAB_0011c766;
          if (-1 < (int)(uVar12 * 0x800)) goto LAB_0011c75e;
          if (-1 < (int)(uVar12 * 0x1000)) goto LAB_0011cd1c;
          if (-1 < (int)(uVar12 * 0x2000)) goto LAB_0011cd14;
          if (-1 < (int)(uVar12 * 0x4000)) goto LAB_0011cd0c;
          if (-1 < (int)(uVar12 * 0x8000)) goto LAB_0011cd04;
          if (-1 < (int)(uVar12 * 0x10000)) goto LAB_0011b298;
        }
LAB_001196ec:
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if ((uVar12 & 0xffff8000) != 0) {
          if ((int)(uVar12 * 2) < 0) {
LAB_0011c77e:
            uVar13 = 0x10;
          }
          else if ((int)(uVar12 * 4) < 0) {
LAB_0011c806:
            uVar13 = 0xf;
          }
          else if ((int)(uVar12 * 8) < 0) {
LAB_0011c7fe:
            uVar13 = 0xe;
          }
          else if ((int)(uVar12 * 0x10) < 0) {
LAB_0011c7f6:
            uVar13 = 0xd;
          }
          else if ((int)(uVar12 * 0x20) < 0) {
LAB_0011c7ee:
            uVar13 = 0xc;
          }
          else if ((int)(uVar12 * 0x40) < 0) {
LAB_0011c7e6:
            uVar13 = 0xb;
          }
          else if ((int)(uVar12 * 0x80) < 0) {
LAB_0011c7de:
            uVar13 = 10;
          }
          else if ((int)(uVar12 * 0x100) < 0) {
LAB_0011c776:
            uVar13 = 9;
          }
          else if ((int)(uVar12 * 0x200) < 0) {
LAB_0011c76e:
            uVar13 = 8;
          }
          else if ((int)(uVar12 * 0x400) < 0) {
LAB_0011c766:
            uVar13 = 7;
          }
          else if ((int)(uVar12 * 0x800) < 0) {
LAB_0011c75e:
            uVar13 = 6;
          }
          else if ((int)(uVar12 * 0x1000) < 0) {
LAB_0011cd1c:
            uVar13 = 5;
          }
          else if ((int)(uVar12 * 0x2000) < 0) {
LAB_0011cd14:
            uVar13 = 4;
          }
          else if ((int)(uVar12 * 0x4000) < 0) {
LAB_0011cd0c:
            uVar13 = 3;
          }
          else if ((int)(uVar12 * 0x8000) < 0) {
LAB_0011cd04:
            uVar13 = 2;
          }
          else {
            if (-1 < (int)(uVar12 * 0x10000)) goto LAB_001196ec;
LAB_0011b298:
            uVar13 = 1;
          }
        }
      }
    }
    uVar11 = 0;
    if (uVar8 != 0) {
      if ((uVar8 & 0x80000000) == 0x80000000) {
        if ((uVar8 & 0xffff8000) != 0xffff8000) {
          if (-1 < (int)(uVar8 * 2)) goto LAB_0011c786;
          if (-1 < (int)(uVar8 * 4)) goto LAB_0011c796;
          if (-1 < (int)(uVar8 * 8)) goto LAB_0011c78e;
          if (-1 < (int)(uVar8 * 0x10)) goto LAB_0011c7b6;
          if (-1 < (int)(uVar8 * 0x20)) goto LAB_0011c7ae;
          if (-1 < (int)(uVar8 * 0x40)) goto LAB_0011c7a6;
          if (-1 < (int)(uVar8 * 0x80)) goto LAB_0011c79e;
          if (-1 < (int)(uVar8 * 0x100)) goto LAB_0011c7d6;
          if (-1 < (int)(uVar8 * 0x200)) goto LAB_0011c7ce;
          if (-1 < (int)(uVar8 * 0x400)) goto LAB_0011c7c6;
          if (-1 < (int)(uVar8 * 0x800)) goto LAB_0011c7be;
          if (-1 < (int)(uVar8 * 0x1000)) goto LAB_0011cd3c;
          if (-1 < (int)(uVar8 * 0x2000)) goto LAB_0011cd34;
          if (-1 < (int)(uVar8 * 0x4000)) goto LAB_0011cd2c;
          if (-1 < (int)(uVar8 * 0x8000)) goto LAB_0011cd24;
          if (-1 < (int)(uVar8 * 0x10000)) goto LAB_0011b30c;
        }
LAB_0011976c:
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        if ((uVar8 & 0xffff8000) != 0) {
          if ((int)(uVar8 * 2) < 0) {
LAB_0011c786:
            uVar11 = 0x10;
          }
          else if ((int)(uVar8 * 4) < 0) {
LAB_0011c796:
            uVar11 = 0xf;
          }
          else if ((int)(uVar8 * 8) < 0) {
LAB_0011c78e:
            uVar11 = 0xe;
          }
          else if ((int)(uVar8 * 0x10) < 0) {
LAB_0011c7b6:
            uVar11 = 0xd;
          }
          else if ((int)(uVar8 * 0x20) < 0) {
LAB_0011c7ae:
            uVar11 = 0xc;
          }
          else if ((int)(uVar8 * 0x40) < 0) {
LAB_0011c7a6:
            uVar11 = 0xb;
          }
          else if ((int)(uVar8 * 0x80) < 0) {
LAB_0011c79e:
            uVar11 = 10;
          }
          else if ((int)(uVar8 * 0x100) < 0) {
LAB_0011c7d6:
            uVar11 = 9;
          }
          else if ((int)(uVar8 * 0x200) < 0) {
LAB_0011c7ce:
            uVar11 = 8;
          }
          else if ((int)(uVar8 * 0x400) < 0) {
LAB_0011c7c6:
            uVar11 = 7;
          }
          else if ((int)(uVar8 * 0x800) < 0) {
LAB_0011c7be:
            uVar11 = 6;
          }
          else if ((int)(uVar8 * 0x1000) < 0) {
LAB_0011cd3c:
            uVar11 = 5;
          }
          else if ((int)(uVar8 * 0x2000) < 0) {
LAB_0011cd34:
            uVar11 = 4;
          }
          else if ((int)(uVar8 * 0x4000) < 0) {
LAB_0011cd2c:
            uVar11 = 3;
          }
          else if ((int)(uVar8 * 0x8000) < 0) {
LAB_0011cd24:
            uVar11 = 2;
          }
          else {
            if (-1 < (int)(uVar8 * 0x10000)) goto LAB_0011976c;
LAB_0011b30c:
            uVar11 = 1;
          }
        }
      }
    }
    if (uVar13 < uVar15) {
      uVar13 = uVar15;
    }
    if (uVar13 < uVar11) {
      uVar13 = uVar11;
    }
    switch(uVar13) {
    case 0:
      uVar4 = 1;
      goto LAB_001197b6;
    case 1:
      uVar4 = 2;
      break;
    case 2:
      uVar4 = 4;
      break;
    case 3:
      uVar4 = 8;
      break;
    case 4:
      uVar4 = 0x10;
      break;
    case 5:
      uVar4 = 0x20;
      break;
    case 6:
      uVar4 = 0x40;
      break;
    case 7:
      uVar4 = 0x80;
      break;
    case 8:
      uVar4 = 0x100;
      break;
    case 9:
      uVar4 = 0x200;
      break;
    case 10:
      uVar4 = 0x400;
      break;
    case 0xb:
      uVar4 = 0x800;
      break;
    case 0xc:
      uVar4 = 0x1000;
      break;
    case 0xd:
      uVar4 = 0x2000;
      break;
    case 0xe:
      uVar4 = 0x4000;
      break;
    case 0xf:
      uVar4 = 0x8000;
      break;
    case 0x10:
      uVar4 = 0x10000;
      break;
    case 0x11:
      uVar4 = 0x20000;
      break;
    case 0x12:
      uVar4 = 0x40000;
      break;
    case 0x13:
      uVar4 = 0x80000;
      break;
    case 0x14:
      uVar4 = 0x100000;
      break;
    case 0x15:
      uVar4 = 0x200000;
      break;
    case 0x16:
      uVar4 = 0x400000;
      break;
    case 0x17:
      uVar4 = 0x800000;
      break;
    case 0x18:
      uVar4 = 0x1000000;
      break;
    case 0x19:
      uVar4 = 0x2000000;
      break;
    case 0x1a:
      uVar4 = 0x4000000;
      break;
    case 0x1b:
      uVar4 = 0x8000000;
      break;
    case 0x1c:
      uVar4 = 0x10000000;
      break;
    case 0x1d:
      uVar4 = 0x20000000;
      break;
    default:
      uVar4 = 0x40000000;
    }
    uVar14 = __divsi3(uVar14,uVar4);
    if (uVar14 == 0) {
      *(undefined4 *)(param_1 + 0x114) = 0;
      uVar9 = 3;
      *(undefined4 *)(param_1 + 0x118) = 0;
      uVar8 = 1;
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    else {
LAB_001197b6:
      if (uVar9 != 0) {
        iVar10 = __divsi3(uVar9,uVar4);
        uVar5 = __divsi3(iVar10 * 0x7fff,uVar14);
        *(undefined4 *)(param_1 + 0x114) = uVar5;
      }
      if (uVar12 != 0) {
        iVar10 = __divsi3(uVar12,uVar4);
        uVar5 = __divsi3(iVar10 * 0x7fff,uVar14);
        *(undefined4 *)(param_1 + 0x118) = uVar5;
      }
      if (uVar8 == 0) {
        uVar9 = 3;
        uVar8 = 1;
      }
      else {
        iVar10 = __divsi3(uVar8,uVar4);
        uVar9 = 3;
        uVar8 = 1;
        uVar4 = __divsi3(iVar10 * 0x7fff,uVar14);
        *(undefined4 *)(param_1 + 0x11c) = uVar4;
      }
    }
  }
LAB_00117d9e:
  if (((*(int *)(param_1 + 0x124) != *(int *)(param_1 + 0x98)) ||
      (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x9c))) ||
     (*(int *)(param_1 + 300) != *(int *)(param_1 + 0xa0))) {
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0xa0);
    uVar12 = *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x13c) = uVar12;
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0xa0);
    uVar14 = *(uint *)(param_1 + 0x140);
    uVar15 = *(uint *)(param_1 + 0x144);
    uVar8 = uVar9;
    uVar9 = uVar14;
    if ((uVar12 == 0) && (uVar14 == 0)) {
      uVar13 = uVar14;
      if (uVar15 != 0) goto LAB_00117df4;
    }
    else {
      if (uVar12 == 0) {
        uVar13 = 0;
      }
      else if ((uVar12 & 0x80000000) == 0x80000000) {
        if ((uVar12 & 0xffffc000) != 0xffffc000) {
          if (-1 < (int)(uVar12 << 1)) goto LAB_0011bbfc;
          if (-1 < (int)(uVar12 << 2)) goto LAB_0011bc76;
          if (-1 < (int)(uVar12 << 3)) goto LAB_0011bc8e;
          if (-1 < (int)(uVar12 << 4)) goto LAB_0011bd74;
          if (-1 < (int)(uVar12 << 5)) goto LAB_0011bd16;
          if (-1 < (int)(uVar12 << 6)) goto LAB_0011bd0e;
          if (-1 < (int)(uVar12 << 7)) goto LAB_0011bfd0;
          if (-1 < (int)(uVar12 << 8)) goto LAB_0011bfc8;
          if (-1 < (int)(uVar12 << 9)) goto LAB_0011c04c;
          if (-1 < (int)(uVar12 << 10)) goto LAB_0011c0f0;
          if (-1 < (int)(uVar12 << 0xb)) goto LAB_0011c0f8;
          if (-1 < (int)(uVar12 << 0xc)) goto LAB_0011c150;
          if (-1 < (int)(uVar12 << 0xd)) goto LAB_0011c148;
          if (-1 < (int)(uVar12 << 0xe)) goto LAB_0011c140;
          if (-1 < (int)(uVar12 << 0xf)) goto LAB_0011c138;
          if (-1 < (int)(uVar12 << 0x10)) goto LAB_0011c130;
          if (-1 < (int)(uVar12 << 0x11)) goto LAB_0011a202;
        }
LAB_001186cc:
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if ((uVar12 & 0xffffc000) != 0) {
          if ((int)(uVar12 << 1) < 0) {
LAB_0011bbfc:
            uVar13 = 0x11;
          }
          else if ((int)(uVar12 << 2) < 0) {
LAB_0011bc76:
            uVar13 = 0x10;
          }
          else if ((int)(uVar12 << 3) < 0) {
LAB_0011bc8e:
            uVar13 = 0xf;
          }
          else if ((int)(uVar12 << 4) < 0) {
LAB_0011bd74:
            uVar13 = 0xe;
          }
          else if ((int)(uVar12 << 5) < 0) {
LAB_0011bd16:
            uVar13 = 0xd;
          }
          else if ((int)(uVar12 << 6) < 0) {
LAB_0011bd0e:
            uVar13 = 0xc;
          }
          else if ((int)(uVar12 << 7) < 0) {
LAB_0011bfd0:
            uVar13 = 0xb;
          }
          else if ((int)(uVar12 << 8) < 0) {
LAB_0011bfc8:
            uVar13 = 10;
          }
          else if ((int)(uVar12 << 9) < 0) {
LAB_0011c04c:
            uVar13 = 9;
          }
          else if ((int)(uVar12 << 10) < 0) {
LAB_0011c0f0:
            uVar13 = 8;
          }
          else if ((int)(uVar12 << 0xb) < 0) {
LAB_0011c0f8:
            uVar13 = 7;
          }
          else if ((int)(uVar12 << 0xc) < 0) {
LAB_0011c150:
            uVar13 = 6;
          }
          else if ((int)(uVar12 << 0xd) < 0) {
LAB_0011c148:
            uVar13 = 5;
          }
          else if ((int)(uVar12 << 0xe) < 0) {
LAB_0011c140:
            uVar13 = 4;
          }
          else if ((int)(uVar12 << 0xf) < 0) {
LAB_0011c138:
            uVar13 = 3;
          }
          else if ((int)(uVar12 << 0x10) < 0) {
LAB_0011c130:
            uVar13 = 2;
          }
          else {
            if (-1 < (int)(uVar12 << 0x11)) goto LAB_001186cc;
LAB_0011a202:
            uVar13 = 1;
          }
        }
      }
      if (uVar14 != 0) {
        if ((uVar14 & 0x80000000) == 0x80000000) {
          if ((uVar14 & 0xffffc000) != 0xffffc000) {
            if (-1 < (int)(uVar14 << 1)) goto LAB_0011bbda;
            if (-1 < (int)(uVar14 << 2)) goto LAB_0011bcbe;
            if (-1 < (int)(uVar14 << 3)) goto LAB_0011bcb6;
            if (-1 < (int)(uVar14 << 4)) goto LAB_0011bd06;
            if (-1 < (int)(uVar14 << 5)) goto LAB_0011bcfe;
            if (-1 < (int)(uVar14 << 6)) goto LAB_0011bcf6;
            if (-1 < (int)(uVar14 << 7)) goto LAB_0011bfd8;
            if (-1 < (int)(uVar14 << 8)) goto LAB_0011bec0;
            if (-1 < (int)(uVar14 << 9)) goto LAB_0011beb8;
            if (-1 < (int)(uVar14 << 10)) goto LAB_0011c08c;
            if (-1 < (int)(uVar14 << 0xb)) goto LAB_0011c084;
            if (-1 < (int)(uVar14 << 0xc)) goto LAB_0011c2d2;
            if (-1 < (int)(uVar14 << 0xd)) goto LAB_0011c2ca;
            if (-1 < (int)(uVar14 << 0xe)) goto LAB_0011c2c2;
            if (-1 < (int)(uVar14 << 0xf)) goto LAB_0011c2ba;
            if (-1 < (int)(uVar14 << 0x10)) goto LAB_0011c2e0;
            if (-1 < (int)(uVar14 << 0x11)) goto LAB_0011a31e;
          }
LAB_00118756:
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          if ((uVar14 & 0xffffc000) != 0) {
            if ((int)(uVar14 << 1) < 0) {
LAB_0011bbda:
              uVar9 = 0x11;
            }
            else if ((int)(uVar14 << 2) < 0) {
LAB_0011bcbe:
              uVar9 = 0x10;
            }
            else if ((int)(uVar14 << 3) < 0) {
LAB_0011bcb6:
              uVar9 = 0xf;
            }
            else if ((int)(uVar14 << 4) < 0) {
LAB_0011bd06:
              uVar9 = 0xe;
            }
            else if ((int)(uVar14 << 5) < 0) {
LAB_0011bcfe:
              uVar9 = 0xd;
            }
            else if ((int)(uVar14 << 6) < 0) {
LAB_0011bcf6:
              uVar9 = 0xc;
            }
            else if ((int)(uVar14 << 7) < 0) {
LAB_0011bfd8:
              uVar9 = 0xb;
            }
            else if ((int)(uVar14 << 8) < 0) {
LAB_0011bec0:
              uVar9 = 10;
            }
            else if ((int)(uVar14 << 9) < 0) {
LAB_0011beb8:
              uVar9 = 9;
            }
            else if ((int)(uVar14 << 10) < 0) {
LAB_0011c08c:
              uVar9 = 8;
            }
            else if ((int)(uVar14 << 0xb) < 0) {
LAB_0011c084:
              uVar9 = 7;
            }
            else if ((int)(uVar14 << 0xc) < 0) {
LAB_0011c2d2:
              uVar9 = 6;
            }
            else if ((int)(uVar14 << 0xd) < 0) {
LAB_0011c2ca:
              uVar9 = 5;
            }
            else if ((int)(uVar14 << 0xe) < 0) {
LAB_0011c2c2:
              uVar9 = 4;
            }
            else if ((int)(uVar14 << 0xf) < 0) {
LAB_0011c2ba:
              uVar9 = 3;
            }
            else if ((int)(uVar14 << 0x10) < 0) {
LAB_0011c2e0:
              uVar9 = 2;
            }
            else {
              if (-1 < (int)(uVar14 << 0x11)) goto LAB_00118756;
LAB_0011a31e:
              uVar9 = 1;
            }
          }
        }
      }
LAB_00117df4:
      uVar11 = 0;
      if (uVar15 != 0) {
        if ((uVar15 & 0x80000000) == 0x80000000) {
          if ((uVar15 & 0xffffc000) != 0xffffc000) {
            if (-1 < (int)(uVar15 << 1)) goto LAB_0011bbf4;
            if (-1 < (int)(uVar15 << 2)) goto LAB_0011bc5e;
            if (-1 < (int)(uVar15 << 3)) goto LAB_0011bc56;
            if (-1 < (int)(uVar15 << 4)) goto LAB_0011bcee;
            if (-1 < (int)(uVar15 << 5)) goto LAB_0011bce6;
            if (-1 < (int)(uVar15 << 6)) goto LAB_0011bcde;
            if (-1 < (int)(uVar15 << 7)) goto LAB_0011c034;
            if (-1 < (int)(uVar15 << 8)) goto LAB_0011c044;
            if (-1 < (int)(uVar15 << 9)) goto LAB_0011c03c;
            if (-1 < (int)(uVar15 << 10)) goto LAB_0011c0d8;
            if (-1 < (int)(uVar15 << 0xb)) goto LAB_0011c0d0;
            if (-1 < (int)(uVar15 << 0xc)) goto LAB_0011c198;
            if (-1 < (int)(uVar15 << 0xd)) goto LAB_0011c190;
            if (-1 < (int)(uVar15 << 0xe)) goto LAB_0011c188;
            if (-1 < (int)(uVar15 << 0xf)) goto LAB_0011c180;
            if (-1 < (int)(uVar15 << 0x10)) goto LAB_0011c1e0;
            if (-1 < (int)(uVar15 << 0x11)) goto LAB_0011a2a4;
          }
LAB_00117e76:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((uVar15 & 0xffffc000) != 0) {
            if ((int)(uVar15 << 1) < 0) {
LAB_0011bbf4:
              uVar11 = 0x11;
            }
            else if ((int)(uVar15 << 2) < 0) {
LAB_0011bc5e:
              uVar11 = 0x10;
            }
            else if ((int)(uVar15 << 3) < 0) {
LAB_0011bc56:
              uVar11 = 0xf;
            }
            else if ((int)(uVar15 << 4) < 0) {
LAB_0011bcee:
              uVar11 = 0xe;
            }
            else if ((int)(uVar15 << 5) < 0) {
LAB_0011bce6:
              uVar11 = 0xd;
            }
            else if ((int)(uVar15 << 6) < 0) {
LAB_0011bcde:
              uVar11 = 0xc;
            }
            else if ((int)(uVar15 << 7) < 0) {
LAB_0011c034:
              uVar11 = 0xb;
            }
            else if ((int)(uVar15 << 8) < 0) {
LAB_0011c044:
              uVar11 = 10;
            }
            else if ((int)(uVar15 << 9) < 0) {
LAB_0011c03c:
              uVar11 = 9;
            }
            else if ((int)(uVar15 << 10) < 0) {
LAB_0011c0d8:
              uVar11 = 8;
            }
            else if ((int)(uVar15 << 0xb) < 0) {
LAB_0011c0d0:
              uVar11 = 7;
            }
            else if ((int)(uVar15 << 0xc) < 0) {
LAB_0011c198:
              uVar11 = 6;
            }
            else if ((int)(uVar15 << 0xd) < 0) {
LAB_0011c190:
              uVar11 = 5;
            }
            else if ((int)(uVar15 << 0xe) < 0) {
LAB_0011c188:
              uVar11 = 4;
            }
            else if ((int)(uVar15 << 0xf) < 0) {
LAB_0011c180:
              uVar11 = 3;
            }
            else if ((int)(uVar15 << 0x10) < 0) {
LAB_0011c1e0:
              uVar11 = 2;
            }
            else {
              if (-1 < (int)(uVar15 << 0x11)) goto LAB_00117e76;
LAB_0011a2a4:
              uVar11 = 1;
            }
          }
        }
      }
      if ((int)uVar9 < (int)uVar13) {
        uVar9 = uVar13;
      }
      if ((int)uVar9 < (int)uVar11) {
        uVar9 = uVar11;
      }
      switch(uVar9) {
      case 0:
        uVar4 = 1;
        local_48 = 1;
        break;
      case 1:
        local_48 = 2;
        uVar4 = 2;
        break;
      case 2:
        local_48 = 4;
        uVar4 = 4;
        break;
      case 3:
        local_48 = 8;
        uVar4 = 8;
        break;
      case 4:
        local_48 = 0x10;
        uVar4 = 0x10;
        break;
      case 5:
        local_48 = 0x20;
        uVar4 = 0x20;
        break;
      case 6:
        local_48 = 0x40;
        uVar4 = 0x40;
        break;
      case 7:
        local_48 = 0x80;
        uVar4 = 0x80;
        break;
      case 8:
        uVar4 = 0x100;
        local_48 = 0x100;
        break;
      case 9:
        local_48 = 0x200;
        uVar4 = 0x200;
        break;
      case 10:
        local_48 = 0x400;
        uVar4 = 0x400;
        break;
      case 0xb:
        local_48 = 0x800;
        uVar4 = 0x800;
        break;
      case 0xc:
        local_48 = 0x1000;
        uVar4 = 0x1000;
        break;
      case 0xd:
        local_48 = 0x2000;
        uVar4 = 0x2000;
        break;
      case 0xe:
        local_48 = 0x4000;
        uVar4 = 0x4000;
        break;
      case 0xf:
        local_48 = 0x8000;
        uVar4 = 0x8000;
        break;
      case 0x10:
        uVar4 = 0x10000;
        local_48 = 0x10000;
        break;
      case 0x11:
        local_48 = 0x20000;
        uVar4 = 0x20000;
        break;
      case 0x12:
        local_48 = 0x40000;
        uVar4 = 0x40000;
        break;
      case 0x13:
        local_48 = 0x80000;
        uVar4 = 0x80000;
        break;
      case 0x14:
        local_48 = 0x100000;
        uVar4 = 0x100000;
        break;
      case 0x15:
        local_48 = 0x200000;
        uVar4 = 0x200000;
        break;
      case 0x16:
        local_48 = 0x400000;
        uVar4 = 0x400000;
        break;
      case 0x17:
        local_48 = 0x800000;
        uVar4 = 0x800000;
        break;
      case 0x18:
        uVar4 = 0x1000000;
        local_48 = 0x1000000;
        break;
      case 0x19:
        local_48 = 0x2000000;
        uVar4 = 0x2000000;
        break;
      case 0x1a:
        local_48 = 0x4000000;
        uVar4 = 0x4000000;
        break;
      case 0x1b:
        local_48 = 0x8000000;
        uVar4 = 0x8000000;
        break;
      case 0x1c:
        local_48 = 0x10000000;
        uVar4 = 0x10000000;
        break;
      case 0x1d:
        local_48 = 0x20000000;
        uVar4 = 0x20000000;
        break;
      case 0x1e:
        local_48 = 0x40000000;
        uVar4 = 0x40000000;
        break;
      default:
        uVar4 = 0x40000000;
        local_48 = 0x40000000;
      }
      iVar10 = __divsi3(uVar12,uVar4);
      iVar1 = __divsi3(uVar14,local_48);
      iVar2 = __divsi3(uVar15,local_48);
      iVar10 = iVar2 * iVar2 + iVar10 * iVar10 + iVar1 * iVar1;
      if (iVar10 < 1) {
        uVar9 = 0;
      }
      else {
        iVar1 = iVar10;
        if (iVar10 == 0x7fffffff) {
          iVar10 = 0x7ffffffe;
          iVar1 = 0x7ffffffe;
        }
        do {
          iVar2 = __divsi3(iVar1,iVar10);
          iVar3 = (iVar10 + iVar2) / 2;
          iVar2 = iVar10;
          if (iVar10 <= iVar3) break;
          iVar10 = __divsi3(iVar1);
          iVar10 = (iVar3 + iVar10) / 2;
          iVar2 = iVar3;
          if (iVar3 <= iVar10) break;
          iVar2 = __divsi3(iVar1,iVar10);
          iVar3 = (iVar10 + iVar2) / 2;
          iVar2 = iVar10;
          if (iVar10 <= iVar3) break;
          iVar10 = __divsi3(iVar1,iVar3);
          iVar10 = (iVar3 + iVar10) / 2;
          iVar2 = iVar3;
          if (iVar3 <= iVar10) break;
          iVar2 = __divsi3(iVar1,iVar10);
          iVar3 = (iVar10 + iVar2) / 2;
          iVar2 = iVar10;
          if (iVar10 <= iVar3) break;
          iVar10 = __divsi3(iVar1);
          iVar10 = (iVar3 + iVar10) / 2;
          iVar2 = iVar3;
          if (iVar3 <= iVar10) break;
          iVar2 = __divsi3(iVar1,iVar10);
          iVar3 = (iVar10 + iVar2) / 2;
          iVar2 = iVar10;
          if (iVar10 <= iVar3) break;
          iVar10 = __divsi3(iVar1,iVar3);
          iVar10 = (iVar10 + iVar3) / 2;
          iVar2 = iVar3;
        } while (iVar10 < iVar3);
        uVar9 = local_48 * iVar2;
      }
      uVar13 = uVar14;
      if ((int)uVar14 < (int)uVar15) {
        uVar13 = uVar15;
      }
      if ((int)uVar13 < (int)uVar12) {
        uVar13 = uVar12;
      }
      if ((int)uVar9 <= (int)uVar13) {
        uVar9 = uVar13;
      }
      if (uVar9 == 0) goto LAB_00118150;
      uVar13 = 0;
      if (uVar12 != 0) {
        if ((uVar12 & 0x80000000) == 0x80000000) {
          if ((uVar12 & 0xffff8000) != 0xffff8000) {
            if (-1 < (int)(uVar12 << 1)) goto LAB_0011c57e;
            if (-1 < (int)(uVar12 << 2)) goto LAB_0011c5a6;
            if (-1 < (int)(uVar12 << 3)) goto LAB_0011c59e;
            if (-1 < (int)(uVar12 << 4)) goto LAB_0011c5b6;
            if (-1 < (int)(uVar12 << 5)) goto LAB_0011c5ae;
            if (-1 < (int)(uVar12 << 6)) goto LAB_0011cafc;
            if (-1 < (int)(uVar12 << 7)) goto LAB_0011caf4;
            if (-1 < (int)(uVar12 << 8)) goto LAB_0011c8d6;
            if (-1 < (int)(uVar12 << 9)) goto LAB_0011c8ce;
            if (-1 < (int)(uVar12 << 10)) goto LAB_0011c8c6;
            if (-1 < (int)(uVar12 << 0xb)) goto LAB_0011c8be;
            if (-1 < (int)(uVar12 << 0xc)) goto LAB_0011c8b6;
            if (-1 < (int)(uVar12 << 0xd)) goto LAB_0011c8ae;
            if (-1 < (int)(uVar12 << 0xe)) goto LAB_0011c8a6;
            if (-1 < (int)(uVar12 << 0xf)) goto LAB_0011c89e;
            if (-1 < (int)(uVar12 << 0x10)) goto LAB_0011b062;
          }
LAB_00119020:
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          if ((uVar12 & 0xffff8000) != 0) {
            if ((int)(uVar12 << 1) < 0) {
LAB_0011c57e:
              uVar13 = 0x10;
            }
            else if ((int)(uVar12 << 2) < 0) {
LAB_0011c5a6:
              uVar13 = 0xf;
            }
            else if ((int)(uVar12 << 3) < 0) {
LAB_0011c59e:
              uVar13 = 0xe;
            }
            else if ((int)(uVar12 << 4) < 0) {
LAB_0011c5b6:
              uVar13 = 0xd;
            }
            else if ((int)(uVar12 << 5) < 0) {
LAB_0011c5ae:
              uVar13 = 0xc;
            }
            else if ((int)(uVar12 << 6) < 0) {
LAB_0011cafc:
              uVar13 = 0xb;
            }
            else if ((int)(uVar12 << 7) < 0) {
LAB_0011caf4:
              uVar13 = 10;
            }
            else if ((int)(uVar12 << 8) < 0) {
LAB_0011c8d6:
              uVar13 = 9;
            }
            else if ((int)(uVar12 << 9) < 0) {
LAB_0011c8ce:
              uVar13 = 8;
            }
            else if ((int)(uVar12 << 10) < 0) {
LAB_0011c8c6:
              uVar13 = 7;
            }
            else if ((int)(uVar12 << 0xb) < 0) {
LAB_0011c8be:
              uVar13 = 6;
            }
            else if ((int)(uVar12 << 0xc) < 0) {
LAB_0011c8b6:
              uVar13 = 5;
            }
            else if ((int)(uVar12 << 0xd) < 0) {
LAB_0011c8ae:
              uVar13 = 4;
            }
            else if ((int)(uVar12 << 0xe) < 0) {
LAB_0011c8a6:
              uVar13 = 3;
            }
            else if ((int)(uVar12 << 0xf) < 0) {
LAB_0011c89e:
              uVar13 = 2;
            }
            else {
              if (-1 < (int)(uVar12 << 0x10)) goto LAB_00119020;
LAB_0011b062:
              uVar13 = 1;
            }
          }
        }
      }
      uVar11 = 0;
      if (uVar14 != 0) {
        if ((uVar14 & 0x80000000) == 0x80000000) {
          if ((uVar14 & 0xffff8000) != 0xffff8000) {
            if (-1 < (int)(uVar14 << 1)) goto LAB_0011c56e;
            if (-1 < (int)(uVar14 << 2)) goto LAB_0011c68e;
            if (-1 < (int)(uVar14 << 3)) goto LAB_0011c686;
            if (-1 < (int)(uVar14 << 4)) goto LAB_0011c5f2;
            if (-1 < (int)(uVar14 << 5)) goto LAB_0011c5ea;
            if (-1 < (int)(uVar14 << 6)) goto LAB_0011cadc;
            if (-1 < (int)(uVar14 << 7)) goto LAB_0011cad4;
            if (-1 < (int)(uVar14 << 8)) goto LAB_0011c856;
            if (-1 < (int)(uVar14 << 9)) goto LAB_0011c84e;
            if (-1 < (int)(uVar14 << 10)) goto LAB_0011c846;
            if (-1 < (int)(uVar14 << 0xb)) goto LAB_0011c83e;
            if (-1 < (int)(uVar14 << 0xc)) goto LAB_0011c836;
            if (-1 < (int)(uVar14 << 0xd)) goto LAB_0011c82e;
            if (-1 < (int)(uVar14 << 0xe)) goto LAB_0011c826;
            if (-1 < (int)(uVar14 << 0xf)) goto LAB_0011c81e;
            if (-1 < (int)(uVar14 << 0x10)) goto LAB_0011b0d6;
          }
LAB_001190a0:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((uVar14 & 0xffff8000) != 0) {
            if ((int)(uVar14 << 1) < 0) {
LAB_0011c56e:
              uVar11 = 0x10;
            }
            else if ((int)(uVar14 << 2) < 0) {
LAB_0011c68e:
              uVar11 = 0xf;
            }
            else if ((int)(uVar14 << 3) < 0) {
LAB_0011c686:
              uVar11 = 0xe;
            }
            else if ((int)(uVar14 << 4) < 0) {
LAB_0011c5f2:
              uVar11 = 0xd;
            }
            else if ((int)(uVar14 << 5) < 0) {
LAB_0011c5ea:
              uVar11 = 0xc;
            }
            else if ((int)(uVar14 << 6) < 0) {
LAB_0011cadc:
              uVar11 = 0xb;
            }
            else if ((int)(uVar14 << 7) < 0) {
LAB_0011cad4:
              uVar11 = 10;
            }
            else if ((int)(uVar14 << 8) < 0) {
LAB_0011c856:
              uVar11 = 9;
            }
            else if ((int)(uVar14 << 9) < 0) {
LAB_0011c84e:
              uVar11 = 8;
            }
            else if ((int)(uVar14 << 10) < 0) {
LAB_0011c846:
              uVar11 = 7;
            }
            else if ((int)(uVar14 << 0xb) < 0) {
LAB_0011c83e:
              uVar11 = 6;
            }
            else if ((int)(uVar14 << 0xc) < 0) {
LAB_0011c836:
              uVar11 = 5;
            }
            else if ((int)(uVar14 << 0xd) < 0) {
LAB_0011c82e:
              uVar11 = 4;
            }
            else if ((int)(uVar14 << 0xe) < 0) {
LAB_0011c826:
              uVar11 = 3;
            }
            else if ((int)(uVar14 << 0xf) < 0) {
LAB_0011c81e:
              uVar11 = 2;
            }
            else {
              if (-1 < (int)(uVar14 << 0x10)) goto LAB_001190a0;
LAB_0011b0d6:
              uVar11 = 1;
            }
          }
        }
      }
      uVar16 = 0;
      if (uVar15 != 0) {
        if ((uVar15 & 0x80000000) == 0x80000000) {
          if ((uVar15 & 0xffff8000) != 0xffff8000) {
            if (-1 < (int)(uVar15 << 1)) goto LAB_0011c576;
            if (-1 < (int)(uVar15 << 2)) goto LAB_0011c596;
            if (-1 < (int)(uVar15 << 3)) goto LAB_0011c58e;
            if (-1 < (int)(uVar15 << 4)) goto LAB_0011c6ae;
            if (-1 < (int)(uVar15 << 5)) goto LAB_0011c6a6;
            if (-1 < (int)(uVar15 << 6)) goto LAB_0011c6be;
            if (-1 < (int)(uVar15 << 7)) goto LAB_0011c6b6;
            if (-1 < (int)(uVar15 << 8)) goto LAB_0011c896;
            if (-1 < (int)(uVar15 << 9)) goto LAB_0011c88e;
            if (-1 < (int)(uVar15 << 10)) goto LAB_0011c886;
            if (-1 < (int)(uVar15 << 0xb)) goto LAB_0011c87e;
            if (-1 < (int)(uVar15 << 0xc)) goto LAB_0011c876;
            if (-1 < (int)(uVar15 << 0xd)) goto LAB_0011c86e;
            if (-1 < (int)(uVar15 << 0xe)) goto LAB_0011c866;
            if (-1 < (int)(uVar15 << 0xf)) goto LAB_0011c85e;
            if (-1 < (int)(uVar15 << 0x10)) goto LAB_0011b14a;
          }
LAB_00119120:
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if ((uVar15 & 0xffff8000) != 0) {
            if ((int)(uVar15 << 1) < 0) {
LAB_0011c576:
              uVar16 = 0x10;
            }
            else if ((int)(uVar15 << 2) < 0) {
LAB_0011c596:
              uVar16 = 0xf;
            }
            else if ((int)(uVar15 << 3) < 0) {
LAB_0011c58e:
              uVar16 = 0xe;
            }
            else if ((int)(uVar15 << 4) < 0) {
LAB_0011c6ae:
              uVar16 = 0xd;
            }
            else if ((int)(uVar15 << 5) < 0) {
LAB_0011c6a6:
              uVar16 = 0xc;
            }
            else if ((int)(uVar15 << 6) < 0) {
LAB_0011c6be:
              uVar16 = 0xb;
            }
            else if ((int)(uVar15 << 7) < 0) {
LAB_0011c6b6:
              uVar16 = 10;
            }
            else if ((int)(uVar15 << 8) < 0) {
LAB_0011c896:
              uVar16 = 9;
            }
            else if ((int)(uVar15 << 9) < 0) {
LAB_0011c88e:
              uVar16 = 8;
            }
            else if ((int)(uVar15 << 10) < 0) {
LAB_0011c886:
              uVar16 = 7;
            }
            else if ((int)(uVar15 << 0xb) < 0) {
LAB_0011c87e:
              uVar16 = 6;
            }
            else if ((int)(uVar15 << 0xc) < 0) {
LAB_0011c876:
              uVar16 = 5;
            }
            else if ((int)(uVar15 << 0xd) < 0) {
LAB_0011c86e:
              uVar16 = 4;
            }
            else if ((int)(uVar15 << 0xe) < 0) {
LAB_0011c866:
              uVar16 = 3;
            }
            else if ((int)(uVar15 << 0xf) < 0) {
LAB_0011c85e:
              uVar16 = 2;
            }
            else {
              if (-1 < (int)(uVar15 << 0x10)) goto LAB_00119120;
LAB_0011b14a:
              uVar16 = 1;
            }
          }
        }
      }
      if (uVar11 < uVar13) {
        uVar11 = uVar13;
      }
      if (uVar11 < uVar16) {
        uVar11 = uVar16;
      }
      switch(uVar11) {
      case 0:
        uVar4 = 1;
        goto LAB_0011916e;
      case 1:
        uVar4 = 2;
        break;
      case 2:
        uVar4 = 4;
        break;
      case 3:
        uVar4 = 8;
        break;
      case 4:
        uVar4 = 0x10;
        break;
      case 5:
        uVar4 = 0x20;
        break;
      case 6:
        uVar4 = 0x40;
        break;
      case 7:
        uVar4 = 0x80;
        break;
      case 8:
        uVar4 = 0x100;
        break;
      case 9:
        uVar4 = 0x200;
        break;
      case 10:
        uVar4 = 0x400;
        break;
      case 0xb:
        uVar4 = 0x800;
        break;
      case 0xc:
        uVar4 = 0x1000;
        break;
      case 0xd:
        uVar4 = 0x2000;
        break;
      case 0xe:
        uVar4 = 0x4000;
        break;
      case 0xf:
        uVar4 = 0x8000;
        break;
      case 0x10:
        uVar4 = 0x10000;
        break;
      case 0x11:
        uVar4 = 0x20000;
        break;
      case 0x12:
        uVar4 = 0x40000;
        break;
      case 0x13:
        uVar4 = 0x80000;
        break;
      case 0x14:
        uVar4 = 0x100000;
        break;
      case 0x15:
        uVar4 = 0x200000;
        break;
      case 0x16:
        uVar4 = 0x400000;
        break;
      case 0x17:
        uVar4 = 0x800000;
        break;
      case 0x18:
        uVar4 = 0x1000000;
        break;
      case 0x19:
        uVar4 = 0x2000000;
        break;
      case 0x1a:
        uVar4 = 0x4000000;
        break;
      case 0x1b:
        uVar4 = 0x8000000;
        break;
      case 0x1c:
        uVar4 = 0x10000000;
        break;
      case 0x1d:
        uVar4 = 0x20000000;
        break;
      default:
        uVar4 = 0x40000000;
      }
      uVar9 = __divsi3(uVar9,uVar4);
      if (uVar9 != 0) {
LAB_0011916e:
        if (uVar12 != 0) {
          iVar10 = __divsi3(uVar12,uVar4);
          uVar5 = __divsi3(iVar10 * 0x7fff,uVar9);
          *(undefined4 *)(param_1 + 0x13c) = uVar5;
        }
        if (uVar14 != 0) {
          iVar10 = __divsi3(uVar14,uVar4);
          uVar5 = __divsi3(iVar10 * 0x7fff,uVar9);
          *(undefined4 *)(param_1 + 0x140) = uVar5;
        }
        if (uVar15 != 0) {
          iVar10 = __divsi3(uVar15,uVar4);
          uVar4 = __divsi3(iVar10 * 0x7fff,uVar9);
          *(undefined4 *)(param_1 + 0x144) = uVar4;
        }
        goto LAB_0011815e;
      }
    }
LAB_00118150:
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
LAB_0011815e:
  if (((*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0xbc)) ||
      (*(int *)(param_1 + 0x134) != *(int *)(param_1 + 0xc0))) ||
     (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0xc4))) {
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0xc4);
    uVar12 = *(uint *)(param_1 + 0xbc);
    *(uint *)(param_1 + 0x148) = uVar12;
    *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0xc4);
    uVar14 = *(uint *)(param_1 + 0x14c);
    uVar15 = *(uint *)(param_1 + 0x150);
    uVar9 = uVar14;
    if ((uVar12 == 0) && (uVar14 == 0)) {
      uVar13 = uVar14;
      if (uVar15 != 0) goto LAB_001181b4;
LAB_0011850a:
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    else {
      if (uVar12 == 0) {
        uVar13 = 0;
      }
      else if ((uVar12 & 0x80000000) == 0x80000000) {
        if ((uVar12 & 0xffffc000) != 0xffffc000) {
          if (-1 < (int)(uVar12 << 1)) goto LAB_0011bc0c;
          if (-1 < (int)(uVar12 << 2)) goto LAB_0011bc04;
          if (-1 < (int)(uVar12 << 3)) goto LAB_0011bc96;
          if (-1 < (int)(uVar12 << 4)) goto LAB_0011bd94;
          if (-1 < (int)(uVar12 << 5)) goto LAB_0011bdc4;
          if (-1 < (int)(uVar12 << 6)) goto LAB_0011bdbc;
          if (-1 < (int)(uVar12 << 7)) goto LAB_0011bf98;
          if (-1 < (int)(uVar12 << 8)) goto LAB_0011bf90;
          if (-1 < (int)(uVar12 << 9)) goto LAB_0011c024;
          if (-1 < (int)(uVar12 << 10)) goto LAB_0011c0e8;
          if (-1 < (int)(uVar12 << 0xb)) goto LAB_0011c100;
          if (-1 < (int)(uVar12 << 0xc)) goto LAB_0011c158;
          if (-1 < (int)(uVar12 << 0xd)) goto LAB_0011c178;
          if (-1 < (int)(uVar12 << 0xe)) goto LAB_0011c170;
          if (-1 < (int)(uVar12 << 0xf)) goto LAB_0011c168;
          if (-1 < (int)(uVar12 << 0x10)) goto LAB_0011c160;
          if (-1 < (int)(uVar12 << 0x11)) goto LAB_0011a184;
        }
LAB_001185ba:
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if ((uVar12 & 0xffffc000) != 0) {
          if ((int)(uVar12 << 1) < 0) {
LAB_0011bc0c:
            uVar13 = 0x11;
          }
          else if ((int)(uVar12 << 2) < 0) {
LAB_0011bc04:
            uVar13 = 0x10;
          }
          else if ((int)(uVar12 << 3) < 0) {
LAB_0011bc96:
            uVar13 = 0xf;
          }
          else if ((int)(uVar12 << 4) < 0) {
LAB_0011bd94:
            uVar13 = 0xe;
          }
          else if ((int)(uVar12 << 5) < 0) {
LAB_0011bdc4:
            uVar13 = 0xd;
          }
          else if ((int)(uVar12 << 6) < 0) {
LAB_0011bdbc:
            uVar13 = 0xc;
          }
          else if ((int)(uVar12 << 7) < 0) {
LAB_0011bf98:
            uVar13 = 0xb;
          }
          else if ((int)(uVar12 << 8) < 0) {
LAB_0011bf90:
            uVar13 = 10;
          }
          else if ((int)(uVar12 << 9) < 0) {
LAB_0011c024:
            uVar13 = 9;
          }
          else if ((int)(uVar12 << 10) < 0) {
LAB_0011c0e8:
            uVar13 = 8;
          }
          else if ((int)(uVar12 << 0xb) < 0) {
LAB_0011c100:
            uVar13 = 7;
          }
          else if ((int)(uVar12 << 0xc) < 0) {
LAB_0011c158:
            uVar13 = 6;
          }
          else if ((int)(uVar12 << 0xd) < 0) {
LAB_0011c178:
            uVar13 = 5;
          }
          else if ((int)(uVar12 << 0xe) < 0) {
LAB_0011c170:
            uVar13 = 4;
          }
          else if ((int)(uVar12 << 0xf) < 0) {
LAB_0011c168:
            uVar13 = 3;
          }
          else if ((int)(uVar12 << 0x10) < 0) {
LAB_0011c160:
            uVar13 = 2;
          }
          else {
            if (-1 < (int)(uVar12 << 0x11)) goto LAB_001185ba;
LAB_0011a184:
            uVar13 = 1;
          }
        }
      }
      if (uVar14 != 0) {
        if ((uVar14 & 0x80000000) == 0x80000000) {
          if ((uVar14 & 0xffffc000) != 0xffffc000) {
            if (-1 < (int)(uVar14 << 1)) goto LAB_0011bc32;
            if (-1 < (int)(uVar14 << 2)) goto LAB_0011bc3a;
            if (-1 < (int)(uVar14 << 3)) goto LAB_0011bc42;
            if (-1 < (int)(uVar14 << 4)) goto LAB_0011bcd6;
            if (-1 < (int)(uVar14 << 5)) goto LAB_0011bcce;
            if (-1 < (int)(uVar14 << 6)) goto LAB_0011bcc6;
            if (-1 < (int)(uVar14 << 7)) goto LAB_0011c02c;
            if (-1 < (int)(uVar14 << 8)) goto LAB_0011bf02;
            if (-1 < (int)(uVar14 << 9)) goto LAB_0011befa;
            if (-1 < (int)(uVar14 << 10)) goto LAB_0011c09c;
            if (-1 < (int)(uVar14 << 0xb)) goto LAB_0011c094;
            if (-1 < (int)(uVar14 << 0xc)) goto LAB_0011c360;
            if (-1 < (int)(uVar14 << 0xd)) goto LAB_0011c358;
            if (-1 < (int)(uVar14 << 0xe)) goto LAB_0011c350;
            if (-1 < (int)(uVar14 << 0xf)) goto LAB_0011c348;
            if (-1 < (int)(uVar14 << 0x10)) goto LAB_0011c1e8;
            if (-1 < (int)(uVar14 << 0x11)) goto LAB_0011a08e;
          }
LAB_00118644:
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          if ((uVar14 & 0xffffc000) != 0) {
            if ((int)(uVar14 << 1) < 0) {
LAB_0011bc32:
              uVar9 = 0x11;
            }
            else if ((int)(uVar14 << 2) < 0) {
LAB_0011bc3a:
              uVar9 = 0x10;
            }
            else if ((int)(uVar14 << 3) < 0) {
LAB_0011bc42:
              uVar9 = 0xf;
            }
            else if ((int)(uVar14 << 4) < 0) {
LAB_0011bcd6:
              uVar9 = 0xe;
            }
            else if ((int)(uVar14 << 5) < 0) {
LAB_0011bcce:
              uVar9 = 0xd;
            }
            else if ((int)(uVar14 << 6) < 0) {
LAB_0011bcc6:
              uVar9 = 0xc;
            }
            else if ((int)(uVar14 << 7) < 0) {
LAB_0011c02c:
              uVar9 = 0xb;
            }
            else if ((int)(uVar14 << 8) < 0) {
LAB_0011bf02:
              uVar9 = 10;
            }
            else if ((int)(uVar14 << 9) < 0) {
LAB_0011befa:
              uVar9 = 9;
            }
            else if ((int)(uVar14 << 10) < 0) {
LAB_0011c09c:
              uVar9 = 8;
            }
            else if ((int)(uVar14 << 0xb) < 0) {
LAB_0011c094:
              uVar9 = 7;
            }
            else if ((int)(uVar14 << 0xc) < 0) {
LAB_0011c360:
              uVar9 = 6;
            }
            else if ((int)(uVar14 << 0xd) < 0) {
LAB_0011c358:
              uVar9 = 5;
            }
            else if ((int)(uVar14 << 0xe) < 0) {
LAB_0011c350:
              uVar9 = 4;
            }
            else if ((int)(uVar14 << 0xf) < 0) {
LAB_0011c348:
              uVar9 = 3;
            }
            else if ((int)(uVar14 << 0x10) < 0) {
LAB_0011c1e8:
              uVar9 = 2;
            }
            else {
              if (-1 < (int)(uVar14 << 0x11)) goto LAB_00118644;
LAB_0011a08e:
              uVar9 = 1;
            }
          }
        }
      }
LAB_001181b4:
      uVar11 = 0;
      if (uVar15 != 0) {
        if ((uVar15 & 0x80000000) == 0x80000000) {
          if ((uVar15 & 0xffffc000) != 0xffffc000) {
            if (-1 < (int)(uVar15 << 1)) goto LAB_0011bbe2;
            if (-1 < (int)(uVar15 << 2)) goto LAB_0011bbee;
            if (-1 < (int)(uVar15 << 3)) goto LAB_0011bc50;
            if (-1 < (int)(uVar15 << 4)) goto LAB_0011bdf0;
            if (-1 < (int)(uVar15 << 5)) goto LAB_0011bdea;
            if (-1 < (int)(uVar15 << 6)) goto LAB_0011bde4;
            if (-1 < (int)(uVar15 << 7)) goto LAB_0011bf7a;
            if (-1 < (int)(uVar15 << 8)) goto LAB_0011bfe6;
            if (-1 < (int)(uVar15 << 9)) goto LAB_0011bfe0;
            if (-1 < (int)(uVar15 << 10)) goto LAB_0011c0ca;
            if (-1 < (int)(uVar15 << 0xb)) goto LAB_0011c0c4;
            if (-1 < (int)(uVar15 << 0xc)) goto LAB_0011c342;
            if (-1 < (int)(uVar15 << 0xd)) goto LAB_0011c33c;
            if (-1 < (int)(uVar15 << 0xe)) goto LAB_0011c336;
            if (-1 < (int)(uVar15 << 0xf)) goto LAB_0011c330;
            if (-1 < (int)(uVar15 << 0x10)) goto LAB_0011c290;
            if (-1 < (int)(uVar15 << 0x11)) goto LAB_0011a108;
          }
LAB_00118236:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((uVar15 & 0xffffc000) != 0) {
            if ((int)(uVar15 << 1) < 0) {
LAB_0011bbe2:
              uVar11 = 0x11;
            }
            else if ((int)(uVar15 << 2) < 0) {
LAB_0011bbee:
              uVar11 = 0x10;
            }
            else if ((int)(uVar15 << 3) < 0) {
LAB_0011bc50:
              uVar11 = 0xf;
            }
            else if ((int)(uVar15 << 4) < 0) {
LAB_0011bdf0:
              uVar11 = 0xe;
            }
            else if ((int)(uVar15 << 5) < 0) {
LAB_0011bdea:
              uVar11 = 0xd;
            }
            else if ((int)(uVar15 << 6) < 0) {
LAB_0011bde4:
              uVar11 = 0xc;
            }
            else if ((int)(uVar15 << 7) < 0) {
LAB_0011bf7a:
              uVar11 = 0xb;
            }
            else if ((int)(uVar15 << 8) < 0) {
LAB_0011bfe6:
              uVar11 = 10;
            }
            else if ((int)(uVar15 << 9) < 0) {
LAB_0011bfe0:
              uVar11 = 9;
            }
            else if ((int)(uVar15 << 10) < 0) {
LAB_0011c0ca:
              uVar11 = 8;
            }
            else if ((int)(uVar15 << 0xb) < 0) {
LAB_0011c0c4:
              uVar11 = 7;
            }
            else if ((int)(uVar15 << 0xc) < 0) {
LAB_0011c342:
              uVar11 = 6;
            }
            else if ((int)(uVar15 << 0xd) < 0) {
LAB_0011c33c:
              uVar11 = 5;
            }
            else if ((int)(uVar15 << 0xe) < 0) {
LAB_0011c336:
              uVar11 = 4;
            }
            else if ((int)(uVar15 << 0xf) < 0) {
LAB_0011c330:
              uVar11 = 3;
            }
            else if ((int)(uVar15 << 0x10) < 0) {
LAB_0011c290:
              uVar11 = 2;
            }
            else {
              if (-1 < (int)(uVar15 << 0x11)) goto LAB_00118236;
LAB_0011a108:
              uVar11 = 1;
            }
          }
        }
      }
      if ((int)uVar9 < (int)uVar13) {
        uVar9 = uVar13;
      }
      if ((int)uVar9 < (int)uVar11) {
        uVar9 = uVar11;
      }
      switch(uVar9) {
      case 0:
        local_48 = 1;
        uVar4 = 1;
        break;
      case 1:
        local_48 = 2;
        uVar4 = 2;
        break;
      case 2:
        local_48 = 4;
        uVar4 = 4;
        break;
      case 3:
        local_48 = 8;
        uVar4 = 8;
        break;
      case 4:
        local_48 = 0x10;
        uVar4 = 0x10;
        break;
      case 5:
        uVar4 = 0x20;
        local_48 = 0x20;
        break;
      case 6:
        local_48 = 0x40;
        uVar4 = 0x40;
        break;
      case 7:
        local_48 = 0x80;
        uVar4 = 0x80;
        break;
      case 8:
        local_48 = 0x100;
        uVar4 = 0x100;
        break;
      case 9:
        local_48 = 0x200;
        uVar4 = 0x200;
        break;
      case 10:
        local_48 = 0x400;
        uVar4 = 0x400;
        break;
      case 0xb:
        local_48 = 0x800;
        uVar4 = 0x800;
        break;
      case 0xc:
        local_48 = 0x1000;
        uVar4 = 0x1000;
        break;
      case 0xd:
        uVar4 = 0x2000;
        local_48 = 0x2000;
        break;
      case 0xe:
        local_48 = 0x4000;
        uVar4 = 0x4000;
        break;
      case 0xf:
        local_48 = 0x8000;
        uVar4 = 0x8000;
        break;
      case 0x10:
        local_48 = 0x10000;
        uVar4 = 0x10000;
        break;
      case 0x11:
        local_48 = 0x20000;
        uVar4 = 0x20000;
        break;
      case 0x12:
        local_48 = 0x40000;
        uVar4 = 0x40000;
        break;
      case 0x13:
        local_48 = 0x80000;
        uVar4 = 0x80000;
        break;
      case 0x14:
        local_48 = 0x100000;
        uVar4 = 0x100000;
        break;
      case 0x15:
        uVar4 = 0x200000;
        local_48 = 0x200000;
        break;
      case 0x16:
        local_48 = 0x400000;
        uVar4 = 0x400000;
        break;
      case 0x17:
        local_48 = 0x800000;
        uVar4 = 0x800000;
        break;
      case 0x18:
        local_48 = 0x1000000;
        uVar4 = 0x1000000;
        break;
      case 0x19:
        local_48 = 0x2000000;
        uVar4 = 0x2000000;
        break;
      case 0x1a:
        local_48 = 0x4000000;
        uVar4 = 0x4000000;
        break;
      case 0x1b:
        local_48 = 0x8000000;
        uVar4 = 0x8000000;
        break;
      case 0x1c:
        local_48 = 0x10000000;
        uVar4 = 0x10000000;
        break;
      case 0x1d:
        uVar4 = 0x20000000;
        local_48 = 0x20000000;
        break;
      case 0x1e:
        local_48 = 0x40000000;
        uVar4 = 0x40000000;
        break;
      default:
        uVar4 = 0x40000000;
        local_48 = 0x40000000;
      }
      iVar10 = __divsi3(uVar12,uVar4);
      iVar1 = __divsi3(uVar14,local_48);
      iVar2 = __divsi3(uVar15,local_48);
      iVar10 = iVar2 * iVar2 + iVar10 * iVar10 + iVar1 * iVar1;
      if (iVar10 < 1) {
        uVar9 = 0;
      }
      else {
        iVar1 = iVar10;
        if (iVar10 == 0x7fffffff) {
          iVar10 = 0x7ffffffe;
          iVar1 = 0x7ffffffe;
        }
        do {
          iVar2 = __divsi3(iVar1,iVar10);
          iVar2 = (iVar10 + iVar2) / 2;
          iVar3 = iVar10;
          if (iVar10 <= iVar2) break;
          iVar10 = __divsi3(iVar1,iVar2);
          iVar10 = (iVar2 + iVar10) / 2;
          iVar3 = iVar2;
          if (iVar2 <= iVar10) break;
          iVar2 = __divsi3(iVar1);
          iVar2 = (iVar10 + iVar2) / 2;
          iVar3 = iVar10;
          if (iVar10 <= iVar2) break;
          iVar10 = __divsi3(iVar1,iVar2);
          iVar10 = (iVar2 + iVar10) / 2;
          iVar3 = iVar2;
          if (iVar2 <= iVar10) break;
          iVar2 = __divsi3(iVar1,iVar10);
          iVar2 = (iVar10 + iVar2) / 2;
          iVar3 = iVar10;
          if (iVar10 <= iVar2) break;
          iVar10 = __divsi3(iVar1,iVar2);
          iVar10 = (iVar2 + iVar10) / 2;
          iVar3 = iVar2;
          if (iVar2 <= iVar10) break;
          iVar2 = __divsi3(iVar1);
          iVar2 = (iVar10 + iVar2) / 2;
          iVar3 = iVar10;
          if (iVar10 <= iVar2) break;
          iVar10 = __divsi3(iVar1,iVar2);
          iVar10 = (iVar10 + iVar2) / 2;
          iVar3 = iVar2;
        } while (iVar10 < iVar2);
        uVar9 = local_48 * iVar3;
      }
      uVar13 = uVar14;
      if ((int)uVar14 < (int)uVar15) {
        uVar13 = uVar15;
      }
      if ((int)uVar13 < (int)uVar12) {
        uVar13 = uVar12;
      }
      if ((int)uVar13 < (int)uVar9) {
        uVar13 = uVar9;
      }
      if (uVar13 == 0) goto LAB_0011850a;
      uVar9 = 0;
      if (uVar12 != 0) {
        if ((uVar12 & 0x80000000) == 0x80000000) {
          if ((uVar12 & 0xffff8000) != 0xffff8000) {
            if (-1 < (int)(uVar12 << 1)) goto LAB_0011c556;
            if (-1 < (int)(uVar12 << 2)) goto LAB_0011c4c8;
            if (-1 < (int)(uVar12 << 3)) goto LAB_0011c5be;
            if (-1 < (int)(uVar12 << 4)) goto LAB_0011c62a;
            if (-1 < (int)(uVar12 << 5)) goto LAB_0011c622;
            if (-1 < (int)(uVar12 << 6)) goto LAB_0011c6fe;
            if (-1 < (int)(uVar12 << 7)) goto LAB_0011c6f6;
            if (-1 < (int)(uVar12 << 8)) goto LAB_0011cb5c;
            if (-1 < (int)(uVar12 << 9)) goto LAB_0011cb54;
            if (-1 < (int)(uVar12 << 10)) goto LAB_0011cb4c;
            if (-1 < (int)(uVar12 << 0xb)) goto LAB_0011cb44;
            if (-1 < (int)(uVar12 << 0xc)) goto LAB_0011cb3c;
            if (-1 < (int)(uVar12 << 0xd)) goto LAB_0011cb34;
            if (-1 < (int)(uVar12 << 0xe)) goto LAB_0011cb2c;
            if (-1 < (int)(uVar12 << 0xf)) goto LAB_0011cb24;
            if (-1 < (int)(uVar12 << 0x10)) goto LAB_0011af7a;
          }
LAB_00118d56:
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          if ((uVar12 & 0xffff8000) != 0) {
            if ((int)(uVar12 << 1) < 0) {
LAB_0011c556:
              uVar9 = 0x10;
            }
            else if ((int)(uVar12 << 2) < 0) {
LAB_0011c4c8:
              uVar9 = 0xf;
            }
            else if ((int)(uVar12 << 3) < 0) {
LAB_0011c5be:
              uVar9 = 0xe;
            }
            else if ((int)(uVar12 << 4) < 0) {
LAB_0011c62a:
              uVar9 = 0xd;
            }
            else if ((int)(uVar12 << 5) < 0) {
LAB_0011c622:
              uVar9 = 0xc;
            }
            else if ((int)(uVar12 << 6) < 0) {
LAB_0011c6fe:
              uVar9 = 0xb;
            }
            else if ((int)(uVar12 << 7) < 0) {
LAB_0011c6f6:
              uVar9 = 10;
            }
            else if ((int)(uVar12 << 8) < 0) {
LAB_0011cb5c:
              uVar9 = 9;
            }
            else if ((int)(uVar12 << 9) < 0) {
LAB_0011cb54:
              uVar9 = 8;
            }
            else if ((int)(uVar12 << 10) < 0) {
LAB_0011cb4c:
              uVar9 = 7;
            }
            else if ((int)(uVar12 << 0xb) < 0) {
LAB_0011cb44:
              uVar9 = 6;
            }
            else if ((int)(uVar12 << 0xc) < 0) {
LAB_0011cb3c:
              uVar9 = 5;
            }
            else if ((int)(uVar12 << 0xd) < 0) {
LAB_0011cb34:
              uVar9 = 4;
            }
            else if ((int)(uVar12 << 0xe) < 0) {
LAB_0011cb2c:
              uVar9 = 3;
            }
            else if ((int)(uVar12 << 0xf) < 0) {
LAB_0011cb24:
              uVar9 = 2;
            }
            else {
              if (-1 < (int)(uVar12 << 0x10)) goto LAB_00118d56;
LAB_0011af7a:
              uVar9 = 1;
            }
          }
        }
      }
      uVar11 = 0;
      if (uVar14 != 0) {
        if ((uVar14 & 0x80000000) == 0x80000000) {
          if ((uVar14 & 0xffff8000) != 0xffff8000) {
            if (-1 < (int)(uVar14 << 1)) goto LAB_0011c4ea;
            if (-1 < (int)(uVar14 << 2)) goto LAB_0011c4f0;
            if (-1 < (int)(uVar14 << 3)) goto LAB_0011c668;
            if (-1 < (int)(uVar14 << 4)) goto LAB_0011c674;
            if (-1 < (int)(uVar14 << 5)) goto LAB_0011c66e;
            if (-1 < (int)(uVar14 << 6)) goto LAB_0011c6cc;
            if (-1 < (int)(uVar14 << 7)) goto LAB_0011c6c6;
            if (-1 < (int)(uVar14 << 8)) goto LAB_0011c758;
            if (-1 < (int)(uVar14 << 9)) goto LAB_0011c752;
            if (-1 < (int)(uVar14 << 10)) goto LAB_0011c74c;
            if (-1 < (int)(uVar14 << 0xb)) goto LAB_0011c746;
            if (-1 < (int)(uVar14 << 0xc)) goto LAB_0011c740;
            if (-1 < (int)(uVar14 << 0xd)) goto LAB_0011c73a;
            if (-1 < (int)(uVar14 << 0xe)) goto LAB_0011c734;
            if (-1 < (int)(uVar14 << 0xf)) goto LAB_0011c72e;
            if (-1 < (int)(uVar14 << 0x10)) goto LAB_0011af08;
          }
LAB_00118dd6:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((uVar14 & 0xffff8000) != 0) {
            if ((int)(uVar14 << 1) < 0) {
LAB_0011c4ea:
              uVar11 = 0x10;
            }
            else if ((int)(uVar14 << 2) < 0) {
LAB_0011c4f0:
              uVar11 = 0xf;
            }
            else if ((int)(uVar14 << 3) < 0) {
LAB_0011c668:
              uVar11 = 0xe;
            }
            else if ((int)(uVar14 << 4) < 0) {
LAB_0011c674:
              uVar11 = 0xd;
            }
            else if ((int)(uVar14 << 5) < 0) {
LAB_0011c66e:
              uVar11 = 0xc;
            }
            else if ((int)(uVar14 << 6) < 0) {
LAB_0011c6cc:
              uVar11 = 0xb;
            }
            else if ((int)(uVar14 << 7) < 0) {
LAB_0011c6c6:
              uVar11 = 10;
            }
            else if ((int)(uVar14 << 8) < 0) {
LAB_0011c758:
              uVar11 = 9;
            }
            else if ((int)(uVar14 << 9) < 0) {
LAB_0011c752:
              uVar11 = 8;
            }
            else if ((int)(uVar14 << 10) < 0) {
LAB_0011c74c:
              uVar11 = 7;
            }
            else if ((int)(uVar14 << 0xb) < 0) {
LAB_0011c746:
              uVar11 = 6;
            }
            else if ((int)(uVar14 << 0xc) < 0) {
LAB_0011c740:
              uVar11 = 5;
            }
            else if ((int)(uVar14 << 0xd) < 0) {
LAB_0011c73a:
              uVar11 = 4;
            }
            else if ((int)(uVar14 << 0xe) < 0) {
LAB_0011c734:
              uVar11 = 3;
            }
            else if ((int)(uVar14 << 0xf) < 0) {
LAB_0011c72e:
              uVar11 = 2;
            }
            else {
              if (-1 < (int)(uVar14 << 0x10)) goto LAB_00118dd6;
LAB_0011af08:
              uVar11 = 1;
            }
          }
        }
      }
      uVar16 = 0;
      if (uVar15 != 0) {
        if ((uVar15 & 0x80000000) == 0x80000000) {
          if ((uVar15 & 0xffff8000) != 0xffff8000) {
            if (-1 < (int)(uVar15 << 1)) goto LAB_0011c55e;
            if (-1 < (int)(uVar15 << 2)) goto LAB_0011c566;
            if (-1 < (int)(uVar15 << 3)) goto LAB_0011c586;
            if (-1 < (int)(uVar15 << 4)) goto LAB_0011c69e;
            if (-1 < (int)(uVar15 << 5)) goto LAB_0011c696;
            if (-1 < (int)(uVar15 << 6)) goto LAB_0011c816;
            if (-1 < (int)(uVar15 << 7)) goto LAB_0011c80e;
            if (-1 < (int)(uVar15 << 8)) goto LAB_0011cb9c;
            if (-1 < (int)(uVar15 << 9)) goto LAB_0011cb94;
            if (-1 < (int)(uVar15 << 10)) goto LAB_0011cb8c;
            if (-1 < (int)(uVar15 << 0xb)) goto LAB_0011cb84;
            if (-1 < (int)(uVar15 << 0xc)) goto LAB_0011cb7c;
            if (-1 < (int)(uVar15 << 0xd)) goto LAB_0011cb74;
            if (-1 < (int)(uVar15 << 0xe)) goto LAB_0011cb6c;
            if (-1 < (int)(uVar15 << 0xf)) goto LAB_0011cb64;
            if (-1 < (int)(uVar15 << 0x10)) goto LAB_0011afee;
          }
LAB_00118e54:
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if ((uVar15 & 0xffff8000) != 0) {
            if ((int)(uVar15 << 1) < 0) {
LAB_0011c55e:
              uVar16 = 0x10;
            }
            else if ((int)(uVar15 << 2) < 0) {
LAB_0011c566:
              uVar16 = 0xf;
            }
            else if ((int)(uVar15 << 3) < 0) {
LAB_0011c586:
              uVar16 = 0xe;
            }
            else if ((int)(uVar15 << 4) < 0) {
LAB_0011c69e:
              uVar16 = 0xd;
            }
            else if ((int)(uVar15 << 5) < 0) {
LAB_0011c696:
              uVar16 = 0xc;
            }
            else if ((int)(uVar15 << 6) < 0) {
LAB_0011c816:
              uVar16 = 0xb;
            }
            else if ((int)(uVar15 << 7) < 0) {
LAB_0011c80e:
              uVar16 = 10;
            }
            else if ((int)(uVar15 << 8) < 0) {
LAB_0011cb9c:
              uVar16 = 9;
            }
            else if ((int)(uVar15 << 9) < 0) {
LAB_0011cb94:
              uVar16 = 8;
            }
            else if ((int)(uVar15 << 10) < 0) {
LAB_0011cb8c:
              uVar16 = 7;
            }
            else if ((int)(uVar15 << 0xb) < 0) {
LAB_0011cb84:
              uVar16 = 6;
            }
            else if ((int)(uVar15 << 0xc) < 0) {
LAB_0011cb7c:
              uVar16 = 5;
            }
            else if ((int)(uVar15 << 0xd) < 0) {
LAB_0011cb74:
              uVar16 = 4;
            }
            else if ((int)(uVar15 << 0xe) < 0) {
LAB_0011cb6c:
              uVar16 = 3;
            }
            else if ((int)(uVar15 << 0xf) < 0) {
LAB_0011cb64:
              uVar16 = 2;
            }
            else {
              if (-1 < (int)(uVar15 << 0x10)) goto LAB_00118e54;
LAB_0011afee:
              uVar16 = 1;
            }
          }
        }
      }
      if (uVar11 < uVar9) {
        uVar11 = uVar9;
      }
      if (uVar11 < uVar16) {
        uVar11 = uVar16;
      }
      switch(uVar11) {
      case 0:
        uVar4 = 1;
        goto LAB_00118ea0;
      case 1:
        uVar4 = 2;
        break;
      case 2:
        uVar4 = 4;
        break;
      case 3:
        uVar4 = 8;
        break;
      case 4:
        uVar4 = 0x10;
        break;
      case 5:
        uVar4 = 0x20;
        break;
      case 6:
        uVar4 = 0x40;
        break;
      case 7:
        uVar4 = 0x80;
        break;
      case 8:
        uVar4 = 0x100;
        break;
      case 9:
        uVar4 = 0x200;
        break;
      case 10:
        uVar4 = 0x400;
        break;
      case 0xb:
        uVar4 = 0x800;
        break;
      case 0xc:
        uVar4 = 0x1000;
        break;
      case 0xd:
        uVar4 = 0x2000;
        break;
      case 0xe:
        uVar4 = 0x4000;
        break;
      case 0xf:
        uVar4 = 0x8000;
        break;
      case 0x10:
        uVar4 = 0x10000;
        break;
      case 0x11:
        uVar4 = 0x20000;
        break;
      case 0x12:
        uVar4 = 0x40000;
        break;
      case 0x13:
        uVar4 = 0x80000;
        break;
      case 0x14:
        uVar4 = 0x100000;
        break;
      case 0x15:
        uVar4 = 0x200000;
        break;
      case 0x16:
        uVar4 = 0x400000;
        break;
      case 0x17:
        uVar4 = 0x800000;
        break;
      case 0x18:
        uVar4 = 0x1000000;
        break;
      case 0x19:
        uVar4 = 0x2000000;
        break;
      case 0x1a:
        uVar4 = 0x4000000;
        break;
      case 0x1b:
        uVar4 = 0x8000000;
        break;
      case 0x1c:
        uVar4 = 0x10000000;
        break;
      case 0x1d:
        uVar4 = 0x20000000;
        break;
      default:
        uVar4 = 0x40000000;
      }
      uVar13 = __divsi3(uVar13,uVar4);
      if (uVar13 == 0) goto LAB_0011850a;
LAB_00118ea0:
      if (uVar12 != 0) {
        iVar10 = __divsi3(uVar12,uVar4);
        uVar5 = __divsi3(iVar10 * 0x7fff,uVar13);
        *(undefined4 *)(param_1 + 0x148) = uVar5;
      }
      if (uVar14 != 0) {
        iVar10 = __divsi3(uVar14,uVar4);
        uVar5 = __divsi3(iVar10 * 0x7fff,uVar13);
        *(undefined4 *)(param_1 + 0x14c) = uVar5;
      }
      if (uVar15 != 0) {
        iVar10 = __divsi3(uVar15,uVar4);
        uVar4 = __divsi3(iVar10 * 0x7fff,uVar13);
        *(undefined4 *)(param_1 + 0x150) = uVar4;
      }
    }
    uVar8 = uVar8 | 2;
  }
  if ((int)(uVar8 << 0x1e) < 0) {
    uVar12 = *(int *)(param_1 + 0x144) * *(int *)(param_1 + 0x14c) -
             *(int *)(param_1 + 0x150) * *(int *)(param_1 + 0x140);
    uVar14 = *(int *)(param_1 + 0x13c) * *(int *)(param_1 + 0x150) -
             *(int *)(param_1 + 0x148) * *(int *)(param_1 + 0x144);
    uVar9 = *(int *)(param_1 + 0x148) * *(int *)(param_1 + 0x140) -
            *(int *)(param_1 + 0x13c) * *(int *)(param_1 + 0x14c);
    *(uint *)(param_1 + 0x154) = uVar12;
    *(uint *)(param_1 + 0x158) = uVar14;
    *(uint *)(param_1 + 0x15c) = uVar9;
    if (uVar12 == 0) {
      if (uVar14 != 0) {
        uVar15 = 0;
        goto LAB_00119e0e;
      }
      uVar13 = 0;
      if (uVar9 != 0) goto LAB_001192c2;
LAB_00119938:
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      goto LAB_00118522;
    }
    if ((uVar12 & 0x80000000) == 0x80000000) {
      if ((uVar12 & 0xffffc000) != 0xffffc000) {
        if (-1 < (int)(uVar12 * 2)) goto LAB_0011c986;
        if (-1 < (int)(uVar12 * 4)) goto LAB_0011c97e;
        if (-1 < (int)(uVar12 * 8)) goto LAB_0011c976;
        if (-1 < (int)(uVar12 * 0x10)) goto LAB_0011c96e;
        if (-1 < (int)(uVar12 * 0x20)) goto LAB_0011c966;
        if (-1 < (int)(uVar12 * 0x40)) goto LAB_0011c95e;
        if (-1 < (int)(uVar12 * 0x80)) goto LAB_0011c956;
        if (-1 < (int)(uVar12 * 0x100)) goto LAB_0011c94e;
        if (-1 < (int)(uVar12 * 0x200)) goto LAB_0011cc92;
        if (-1 < (int)(uVar12 * 0x400)) goto LAB_0011cc8a;
        if (-1 < (int)(uVar12 * 0x800)) goto LAB_0011cc82;
        if (-1 < (int)(uVar12 * 0x1000)) goto LAB_0011cc7a;
        if (-1 < (int)(uVar12 * 0x2000)) goto LAB_0011cc72;
        if (-1 < (int)(uVar12 * 0x4000)) goto LAB_0011cc6a;
        if (-1 < (int)(uVar12 * 0x8000)) goto LAB_0011cc62;
        if (-1 < (int)(uVar12 * 0x10000)) goto LAB_0011cc5a;
        if (-1 < (int)(uVar12 * 0x20000)) goto LAB_0011b47e;
      }
LAB_00119dce:
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      if ((uVar12 & 0xffffc000) != 0) {
        if ((int)(uVar12 * 2) < 0) {
LAB_0011c986:
          uVar15 = 0x11;
        }
        else if ((int)(uVar12 * 4) < 0) {
LAB_0011c97e:
          uVar15 = 0x10;
        }
        else if ((int)(uVar12 * 8) < 0) {
LAB_0011c976:
          uVar15 = 0xf;
        }
        else if ((int)(uVar12 * 0x10) < 0) {
LAB_0011c96e:
          uVar15 = 0xe;
        }
        else if ((int)(uVar12 * 0x20) < 0) {
LAB_0011c966:
          uVar15 = 0xd;
        }
        else if ((int)(uVar12 * 0x40) < 0) {
LAB_0011c95e:
          uVar15 = 0xc;
        }
        else if ((int)(uVar12 * 0x80) < 0) {
LAB_0011c956:
          uVar15 = 0xb;
        }
        else if ((int)(uVar12 * 0x100) < 0) {
LAB_0011c94e:
          uVar15 = 10;
        }
        else if ((int)(uVar12 * 0x200) < 0) {
LAB_0011cc92:
          uVar15 = 9;
        }
        else if ((int)(uVar12 * 0x400) < 0) {
LAB_0011cc8a:
          uVar15 = 8;
        }
        else if ((int)(uVar12 * 0x800) < 0) {
LAB_0011cc82:
          uVar15 = 7;
        }
        else if ((int)(uVar12 * 0x1000) < 0) {
LAB_0011cc7a:
          uVar15 = 6;
        }
        else if ((int)(uVar12 * 0x2000) < 0) {
LAB_0011cc72:
          uVar15 = 5;
        }
        else if ((int)(uVar12 * 0x4000) < 0) {
LAB_0011cc6a:
          uVar15 = 4;
        }
        else if ((int)(uVar12 * 0x8000) < 0) {
LAB_0011cc62:
          uVar15 = 3;
        }
        else if ((int)(uVar12 * 0x10000) < 0) {
LAB_0011cc5a:
          uVar15 = 2;
        }
        else {
          if (-1 < (int)(uVar12 * 0x20000)) goto LAB_00119dce;
LAB_0011b47e:
          uVar15 = 1;
        }
      }
    }
    uVar13 = uVar15;
    if (uVar14 != 0) {
LAB_00119e0e:
      if ((uVar14 & 0x80000000) == 0x80000000) {
        if ((uVar14 & 0xffffc000) != 0xffffc000) {
          if (-1 < (int)(uVar14 * 2)) goto LAB_0011c9c6;
          if (-1 < (int)(uVar14 * 4)) goto LAB_0011c9be;
          if (-1 < (int)(uVar14 * 8)) goto LAB_0011c9b6;
          if (-1 < (int)(uVar14 * 0x10)) goto LAB_0011c9ae;
          if (-1 < (int)(uVar14 * 0x20)) goto LAB_0011c9a6;
          if (-1 < (int)(uVar14 * 0x40)) goto LAB_0011c99e;
          if (-1 < (int)(uVar14 * 0x80)) goto LAB_0011c996;
          if (-1 < (int)(uVar14 * 0x100)) goto LAB_0011c98e;
          if (-1 < (int)(uVar14 * 0x200)) goto LAB_0011ccd2;
          if (-1 < (int)(uVar14 * 0x400)) goto LAB_0011ccca;
          if (-1 < (int)(uVar14 * 0x800)) goto LAB_0011ccc2;
          if (-1 < (int)(uVar14 * 0x1000)) goto LAB_0011ccba;
          if (-1 < (int)(uVar14 * 0x2000)) goto LAB_0011ccb2;
          if (-1 < (int)(uVar14 * 0x4000)) goto LAB_0011ccaa;
          if (-1 < (int)(uVar14 * 0x8000)) goto LAB_0011cca2;
          if (-1 < (int)(uVar14 * 0x10000)) goto LAB_0011cc9a;
          if (-1 < (int)(uVar14 * 0x20000)) goto LAB_0011b400;
        }
LAB_00119e8a:
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        if ((uVar14 & 0xffffc000) != 0) {
          if ((int)(uVar14 * 2) < 0) {
LAB_0011c9c6:
            uVar13 = 0x11;
          }
          else if ((int)(uVar14 * 4) < 0) {
LAB_0011c9be:
            uVar13 = 0x10;
          }
          else if ((int)(uVar14 * 8) < 0) {
LAB_0011c9b6:
            uVar13 = 0xf;
          }
          else if ((int)(uVar14 * 0x10) < 0) {
LAB_0011c9ae:
            uVar13 = 0xe;
          }
          else if ((int)(uVar14 * 0x20) < 0) {
LAB_0011c9a6:
            uVar13 = 0xd;
          }
          else if ((int)(uVar14 * 0x40) < 0) {
LAB_0011c99e:
            uVar13 = 0xc;
          }
          else if ((int)(uVar14 * 0x80) < 0) {
LAB_0011c996:
            uVar13 = 0xb;
          }
          else if ((int)(uVar14 * 0x100) < 0) {
LAB_0011c98e:
            uVar13 = 10;
          }
          else if ((int)(uVar14 * 0x200) < 0) {
LAB_0011ccd2:
            uVar13 = 9;
          }
          else if ((int)(uVar14 * 0x400) < 0) {
LAB_0011ccca:
            uVar13 = 8;
          }
          else if ((int)(uVar14 * 0x800) < 0) {
LAB_0011ccc2:
            uVar13 = 7;
          }
          else if ((int)(uVar14 * 0x1000) < 0) {
LAB_0011ccba:
            uVar13 = 6;
          }
          else if ((int)(uVar14 * 0x2000) < 0) {
LAB_0011ccb2:
            uVar13 = 5;
          }
          else if ((int)(uVar14 * 0x4000) < 0) {
LAB_0011ccaa:
            uVar13 = 4;
          }
          else if ((int)(uVar14 * 0x8000) < 0) {
LAB_0011cca2:
            uVar13 = 3;
          }
          else if ((int)(uVar14 * 0x10000) < 0) {
LAB_0011cc9a:
            uVar13 = 2;
          }
          else {
            if (-1 < (int)(uVar14 * 0x20000)) goto LAB_00119e8a;
LAB_0011b400:
            uVar13 = 1;
          }
        }
      }
      if (uVar13 < uVar15) {
        uVar13 = uVar15;
      }
    }
    uVar15 = 0;
    if (uVar9 != 0) {
LAB_001192c2:
      if ((uVar9 & 0x80000000) == 0x80000000) {
        if ((uVar9 & 0xffffc000) != 0xffffc000) {
          if (-1 < (int)(uVar9 * 2)) goto LAB_0011caac;
          if (-1 < (int)(uVar9 * 4)) goto LAB_0011caa4;
          if (-1 < (int)(uVar9 * 8)) goto LAB_0011ca9c;
          if (-1 < (int)(uVar9 * 0x10)) goto LAB_0011ca94;
          if (-1 < (int)(uVar9 * 0x20)) goto LAB_0011ca8c;
          if (-1 < (int)(uVar9 * 0x40)) goto LAB_0011ca84;
          if (-1 < (int)(uVar9 * 0x80)) goto LAB_0011ca7c;
          if (-1 < (int)(uVar9 * 0x100)) goto LAB_0011ca74;
          if (-1 < (int)(uVar9 * 0x200)) goto LAB_0011cc22;
          if (-1 < (int)(uVar9 * 0x400)) goto LAB_0011cc1a;
          if (-1 < (int)(uVar9 * 0x800)) goto LAB_0011cc12;
          if (-1 < (int)(uVar9 * 0x1000)) goto LAB_0011cc0a;
          if (-1 < (int)(uVar9 * 0x2000)) goto LAB_0011cc32;
          if (-1 < (int)(uVar9 * 0x4000)) goto LAB_0011cc2a;
          if (-1 < (int)(uVar9 * 0x8000)) goto LAB_0011cc3a;
          if (-1 < (int)(uVar9 * 0x10000)) goto LAB_0011cc02;
          if (-1 < (int)(uVar9 * 0x20000)) goto LAB_0011b386;
        }
LAB_0011933e:
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        if ((uVar9 & 0xffffc000) != 0) {
          if ((int)(uVar9 * 2) < 0) {
LAB_0011caac:
            uVar15 = 0x11;
          }
          else if ((int)(uVar9 * 4) < 0) {
LAB_0011caa4:
            uVar15 = 0x10;
          }
          else if ((int)(uVar9 * 8) < 0) {
LAB_0011ca9c:
            uVar15 = 0xf;
          }
          else if ((int)(uVar9 * 0x10) < 0) {
LAB_0011ca94:
            uVar15 = 0xe;
          }
          else if ((int)(uVar9 * 0x20) < 0) {
LAB_0011ca8c:
            uVar15 = 0xd;
          }
          else if ((int)(uVar9 * 0x40) < 0) {
LAB_0011ca84:
            uVar15 = 0xc;
          }
          else if ((int)(uVar9 * 0x80) < 0) {
LAB_0011ca7c:
            uVar15 = 0xb;
          }
          else if ((int)(uVar9 * 0x100) < 0) {
LAB_0011ca74:
            uVar15 = 10;
          }
          else if ((int)(uVar9 * 0x200) < 0) {
LAB_0011cc22:
            uVar15 = 9;
          }
          else if ((int)(uVar9 * 0x400) < 0) {
LAB_0011cc1a:
            uVar15 = 8;
          }
          else if ((int)(uVar9 * 0x800) < 0) {
LAB_0011cc12:
            uVar15 = 7;
          }
          else if ((int)(uVar9 * 0x1000) < 0) {
LAB_0011cc0a:
            uVar15 = 6;
          }
          else if ((int)(uVar9 * 0x2000) < 0) {
LAB_0011cc32:
            uVar15 = 5;
          }
          else if ((int)(uVar9 * 0x4000) < 0) {
LAB_0011cc2a:
            uVar15 = 4;
          }
          else if ((int)(uVar9 * 0x8000) < 0) {
LAB_0011cc3a:
            uVar15 = 3;
          }
          else if ((int)(uVar9 * 0x10000) < 0) {
LAB_0011cc02:
            uVar15 = 2;
          }
          else {
            if (-1 < (int)(uVar9 * 0x20000)) goto LAB_0011933e;
LAB_0011b386:
            uVar15 = 1;
          }
        }
      }
    }
    if (uVar15 < uVar13) {
      uVar15 = uVar13;
    }
    switch(uVar15) {
    case 0:
      local_48 = 1;
      uVar4 = 1;
      break;
    case 1:
      local_48 = 2;
      uVar4 = 2;
      break;
    case 2:
      local_48 = 4;
      uVar4 = 4;
      break;
    case 3:
      local_48 = 8;
      uVar4 = 8;
      break;
    case 4:
      local_48 = 0x10;
      uVar4 = 0x10;
      break;
    case 5:
      uVar4 = 0x20;
      local_48 = 0x20;
      break;
    case 6:
      local_48 = 0x40;
      uVar4 = 0x40;
      break;
    case 7:
      local_48 = 0x80;
      uVar4 = 0x80;
      break;
    case 8:
      local_48 = 0x100;
      uVar4 = 0x100;
      break;
    case 9:
      local_48 = 0x200;
      uVar4 = 0x200;
      break;
    case 10:
      local_48 = 0x400;
      uVar4 = 0x400;
      break;
    case 0xb:
      local_48 = 0x800;
      uVar4 = 0x800;
      break;
    case 0xc:
      local_48 = 0x1000;
      uVar4 = 0x1000;
      break;
    case 0xd:
      uVar4 = 0x2000;
      local_48 = 0x2000;
      break;
    case 0xe:
      local_48 = 0x4000;
      uVar4 = 0x4000;
      break;
    case 0xf:
      local_48 = 0x8000;
      uVar4 = 0x8000;
      break;
    case 0x10:
      local_48 = 0x10000;
      uVar4 = 0x10000;
      break;
    case 0x11:
      local_48 = 0x20000;
      uVar4 = 0x20000;
      break;
    case 0x12:
      local_48 = 0x40000;
      uVar4 = 0x40000;
      break;
    case 0x13:
      local_48 = 0x80000;
      uVar4 = 0x80000;
      break;
    case 0x14:
      local_48 = 0x100000;
      uVar4 = 0x100000;
      break;
    case 0x15:
      uVar4 = 0x200000;
      local_48 = 0x200000;
      break;
    case 0x16:
      local_48 = 0x400000;
      uVar4 = 0x400000;
      break;
    case 0x17:
      local_48 = 0x800000;
      uVar4 = 0x800000;
      break;
    case 0x18:
      local_48 = 0x1000000;
      uVar4 = 0x1000000;
      break;
    case 0x19:
      local_48 = 0x2000000;
      uVar4 = 0x2000000;
      break;
    case 0x1a:
      local_48 = 0x4000000;
      uVar4 = 0x4000000;
      break;
    case 0x1b:
      local_48 = 0x8000000;
      uVar4 = 0x8000000;
      break;
    case 0x1c:
      local_48 = 0x10000000;
      uVar4 = 0x10000000;
      break;
    case 0x1d:
      uVar4 = 0x20000000;
      local_48 = 0x20000000;
      break;
    case 0x1e:
      local_48 = 0x40000000;
      uVar4 = 0x40000000;
      break;
    default:
      uVar4 = 0x40000000;
      local_48 = 0x40000000;
    }
    iVar10 = __divsi3(uVar12,uVar4);
    iVar1 = __divsi3(uVar14,local_48);
    iVar2 = __divsi3(uVar9,local_48);
    iVar10 = iVar2 * iVar2 + iVar10 * iVar10 + iVar1 * iVar1;
    if (iVar10 < 1) {
      uVar15 = 0;
    }
    else {
      iVar1 = iVar10;
      if (iVar10 == 0x7fffffff) {
        iVar10 = 0x7ffffffe;
        iVar1 = 0x7ffffffe;
      }
      do {
        iVar2 = __divsi3(iVar1,iVar10);
        iVar3 = (iVar10 + iVar2) / 2;
        iVar2 = iVar10;
        if (iVar10 <= iVar3) break;
        iVar10 = __divsi3(iVar1,iVar3);
        iVar10 = (iVar3 + iVar10) / 2;
        iVar2 = iVar3;
        if (iVar3 <= iVar10) break;
        iVar2 = __divsi3(iVar1,iVar10);
        iVar3 = (iVar10 + iVar2) / 2;
        iVar2 = iVar10;
        if (iVar10 <= iVar3) break;
        iVar10 = __divsi3(iVar1);
        iVar10 = (iVar3 + iVar10) / 2;
        iVar2 = iVar3;
        if (iVar3 <= iVar10) break;
        iVar2 = __divsi3(iVar1,iVar10);
        iVar3 = (iVar10 + iVar2) / 2;
        iVar2 = iVar10;
        if (iVar10 <= iVar3) break;
        iVar10 = __divsi3(iVar1,iVar3);
        iVar10 = (iVar3 + iVar10) / 2;
        iVar2 = iVar3;
        if (iVar3 <= iVar10) break;
        iVar2 = __divsi3(iVar1,iVar10);
        iVar3 = (iVar10 + iVar2) / 2;
        iVar2 = iVar10;
        if (iVar10 <= iVar3) break;
        iVar10 = __divsi3(iVar1);
        iVar10 = (iVar10 + iVar3) / 2;
        iVar2 = iVar3;
      } while (iVar10 < iVar3);
      uVar15 = local_48 * iVar2;
    }
    uVar13 = uVar14;
    if ((int)uVar14 < (int)uVar12) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 < (int)uVar9) {
      uVar13 = uVar9;
    }
    if ((int)uVar15 <= (int)uVar13) {
      uVar15 = uVar13;
    }
    if (uVar15 == 0) goto LAB_00119938;
    uVar13 = 0;
    if (uVar12 != 0) {
      if ((uVar12 & 0x80000000) == 0x80000000) {
        if ((uVar12 & 0xffff8000) == 0xffff8000) {
LAB_0011a4a2:
          uVar13 = 0;
        }
        else {
          if (-1 < (int)(uVar12 * 2)) goto LAB_0011cde4;
          if (-1 < (int)(uVar12 * 4)) goto LAB_0011ce9c;
          if (-1 < (int)(uVar12 * 8)) goto LAB_0011ce94;
          if (-1 < (int)(uVar12 * 0x10)) goto LAB_0011cda4;
          if (-1 < (int)(uVar12 * 0x20)) goto LAB_0011cd9c;
          if (-1 < (int)(uVar12 * 0x40)) goto LAB_0011cd94;
          if (-1 < (int)(uVar12 * 0x80)) goto LAB_0011cd8c;
          if (-1 < (int)(uVar12 * 0x100)) goto LAB_0011cddc;
          if (-1 < (int)(uVar12 * 0x200)) goto LAB_0011cdd4;
          if (-1 < (int)(uVar12 * 0x400)) goto LAB_0011cdcc;
          if (-1 < (int)(uVar12 * 0x800)) goto LAB_0011cdc4;
          if (-1 < (int)(uVar12 * 0x1000)) goto LAB_0011cdbc;
          if (-1 < (int)(uVar12 * 0x2000)) goto LAB_0011cdb4;
          if (-1 < (int)(uVar12 * 0x4000)) goto LAB_0011cdac;
          if (-1 < (int)(uVar12 * 0x8000)) goto LAB_0011d018;
          uVar13 = (uint)((uVar12 & 0x8000) == 0);
        }
      }
      else if ((uVar12 & 0xffff8000) == 0) {
        uVar13 = 0;
      }
      else if ((int)(uVar12 * 2) < 0) {
LAB_0011cde4:
        uVar13 = 0x10;
      }
      else if ((int)(uVar12 * 4) < 0) {
LAB_0011ce9c:
        uVar13 = 0xf;
      }
      else if ((int)(uVar12 * 8) < 0) {
LAB_0011ce94:
        uVar13 = 0xe;
      }
      else if ((int)(uVar12 * 0x10) < 0) {
LAB_0011cda4:
        uVar13 = 0xd;
      }
      else if ((int)(uVar12 * 0x20) < 0) {
LAB_0011cd9c:
        uVar13 = 0xc;
      }
      else if ((int)(uVar12 * 0x40) < 0) {
LAB_0011cd94:
        uVar13 = 0xb;
      }
      else if ((int)(uVar12 * 0x80) < 0) {
LAB_0011cd8c:
        uVar13 = 10;
      }
      else if ((int)(uVar12 * 0x100) < 0) {
LAB_0011cddc:
        uVar13 = 9;
      }
      else if ((int)(uVar12 * 0x200) < 0) {
LAB_0011cdd4:
        uVar13 = 8;
      }
      else if ((int)(uVar12 * 0x400) < 0) {
LAB_0011cdcc:
        uVar13 = 7;
      }
      else if ((int)(uVar12 * 0x800) < 0) {
LAB_0011cdc4:
        uVar13 = 6;
      }
      else if ((int)(uVar12 * 0x1000) < 0) {
LAB_0011cdbc:
        uVar13 = 5;
      }
      else if ((int)(uVar12 * 0x2000) < 0) {
LAB_0011cdb4:
        uVar13 = 4;
      }
      else if ((int)(uVar12 * 0x4000) < 0) {
LAB_0011cdac:
        uVar13 = 3;
      }
      else if ((int)(uVar12 * 0x8000) < 0) {
LAB_0011d018:
        uVar13 = 2;
      }
      else {
        if (-1 < (int)(uVar12 * 0x10000)) goto LAB_0011a4a2;
        uVar13 = 1;
      }
    }
    uVar11 = 0;
    if (uVar14 != 0) {
      uVar11 = FUN_00100a74();
    }
    uVar16 = 0;
    if (uVar9 != 0) {
      if ((uVar9 & 0x80000000) == 0x80000000) {
        if ((uVar9 & 0xffff8000) == 0xffff8000) {
LAB_0011a52e:
          uVar16 = 0;
        }
        else {
          if (-1 < (int)(uVar9 * 2)) goto LAB_0011cdec;
          if (-1 < (int)(uVar9 * 4)) goto LAB_0011cdfc;
          if (-1 < (int)(uVar9 * 8)) goto LAB_0011cdf4;
          if (-1 < (int)(uVar9 * 0x10)) goto LAB_0011ce1c;
          if (-1 < (int)(uVar9 * 0x20)) goto LAB_0011ce14;
          if (-1 < (int)(uVar9 * 0x40)) goto LAB_0011ce0c;
          if (-1 < (int)(uVar9 * 0x80)) goto LAB_0011ce04;
          if (-1 < (int)(uVar9 * 0x100)) goto LAB_0011ce54;
          if (-1 < (int)(uVar9 * 0x200)) goto LAB_0011ce4c;
          if (-1 < (int)(uVar9 * 0x400)) goto LAB_0011ce44;
          if (-1 < (int)(uVar9 * 0x800)) goto LAB_0011ce3c;
          if (-1 < (int)(uVar9 * 0x1000)) goto LAB_0011ce34;
          if (-1 < (int)(uVar9 * 0x2000)) goto LAB_0011ce2c;
          if (-1 < (int)(uVar9 * 0x4000)) goto LAB_0011ce24;
          if (-1 < (int)(uVar9 * 0x8000)) goto LAB_0011d020;
          uVar16 = (uint)((uVar9 & 0x8000) == 0);
        }
      }
      else {
        uVar16 = 0;
        if ((uVar9 & 0xffff8000) != 0) {
          if ((int)(uVar9 * 2) < 0) {
LAB_0011cdec:
            uVar16 = 0x10;
          }
          else if ((int)(uVar9 * 4) < 0) {
LAB_0011cdfc:
            uVar16 = 0xf;
          }
          else if ((int)(uVar9 * 8) < 0) {
LAB_0011cdf4:
            uVar16 = 0xe;
          }
          else if ((int)(uVar9 * 0x10) < 0) {
LAB_0011ce1c:
            uVar16 = 0xd;
          }
          else if ((int)(uVar9 * 0x20) < 0) {
LAB_0011ce14:
            uVar16 = 0xc;
          }
          else if ((int)(uVar9 * 0x40) < 0) {
LAB_0011ce0c:
            uVar16 = 0xb;
          }
          else if ((int)(uVar9 * 0x80) < 0) {
LAB_0011ce04:
            uVar16 = 10;
          }
          else if ((int)(uVar9 * 0x100) < 0) {
LAB_0011ce54:
            uVar16 = 9;
          }
          else if ((int)(uVar9 * 0x200) < 0) {
LAB_0011ce4c:
            uVar16 = 8;
          }
          else if ((int)(uVar9 * 0x400) < 0) {
LAB_0011ce44:
            uVar16 = 7;
          }
          else if ((int)(uVar9 * 0x800) < 0) {
LAB_0011ce3c:
            uVar16 = 6;
          }
          else if ((int)(uVar9 * 0x1000) < 0) {
LAB_0011ce34:
            uVar16 = 5;
          }
          else if ((int)(uVar9 * 0x2000) < 0) {
LAB_0011ce2c:
            uVar16 = 4;
          }
          else if ((int)(uVar9 * 0x4000) < 0) {
LAB_0011ce24:
            uVar16 = 3;
          }
          else if ((int)(uVar9 * 0x8000) < 0) {
LAB_0011d020:
            uVar16 = 2;
          }
          else {
            if (-1 < (int)(uVar9 * 0x10000)) goto LAB_0011a52e;
            uVar16 = 1;
          }
        }
      }
    }
    if ((int)uVar13 <= (int)uVar11) {
      uVar13 = uVar11;
    }
    if ((int)uVar16 <= (int)uVar13) {
      uVar16 = uVar13;
    }
    switch(uVar16) {
    case 0:
      uVar4 = 1;
      goto LAB_0011a578;
    case 1:
      uVar4 = 2;
      break;
    case 2:
      uVar4 = 4;
      break;
    case 3:
      uVar4 = 8;
      break;
    case 4:
      uVar4 = 0x10;
      break;
    case 5:
      uVar4 = 0x20;
      break;
    case 6:
      uVar4 = 0x40;
      break;
    case 7:
      uVar4 = 0x80;
      break;
    case 8:
      uVar4 = 0x100;
      break;
    case 9:
      uVar4 = 0x200;
      break;
    case 10:
      uVar4 = 0x400;
      break;
    case 0xb:
      uVar4 = 0x800;
      break;
    case 0xc:
      uVar4 = 0x1000;
      break;
    case 0xd:
      uVar4 = 0x2000;
      break;
    case 0xe:
      uVar4 = 0x4000;
      break;
    case 0xf:
      uVar4 = 0x8000;
      break;
    case 0x10:
      uVar4 = 0x10000;
      break;
    case 0x11:
      uVar4 = 0x20000;
      break;
    case 0x12:
      uVar4 = 0x40000;
      break;
    case 0x13:
      uVar4 = 0x80000;
      break;
    case 0x14:
      uVar4 = 0x100000;
      break;
    case 0x15:
      uVar4 = 0x200000;
      break;
    case 0x16:
      uVar4 = 0x400000;
      break;
    case 0x17:
      uVar4 = 0x800000;
      break;
    case 0x18:
      uVar4 = 0x1000000;
      break;
    case 0x19:
      uVar4 = 0x2000000;
      break;
    case 0x1a:
      uVar4 = 0x4000000;
      break;
    case 0x1b:
      uVar4 = 0x8000000;
      break;
    case 0x1c:
      uVar4 = 0x10000000;
      break;
    case 0x1d:
      uVar4 = 0x20000000;
      break;
    default:
      uVar4 = 0x40000000;
    }
    uVar15 = __divsi3(uVar15,uVar4);
    if (uVar15 == 0) {
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
    else {
LAB_0011a578:
      if (uVar12 != 0) {
        iVar10 = __divsi3(uVar12,uVar4);
        uVar5 = __divsi3(iVar10 * 0x7fff,uVar15);
        *(undefined4 *)(param_1 + 0x154) = uVar5;
      }
      if (uVar14 != 0) {
        iVar10 = __divsi3(uVar14,uVar4);
        uVar5 = __divsi3(iVar10 * 0x7fff,uVar15);
        *(undefined4 *)(param_1 + 0x158) = uVar5;
      }
      if (uVar9 != 0) {
        iVar10 = __divsi3(uVar9,uVar4);
        uVar4 = __divsi3(iVar10 * 0x7fff,uVar15);
        *(undefined4 *)(param_1 + 0x15c) = uVar4;
      }
    }
  }
LAB_00118522:
  if (uVar8 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x170);
    uVar5 = *(undefined4 *)(param_1 + 0x174);
    *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x16c);
    *(undefined4 *)(param_3 + 4) = uVar4;
    *(undefined4 *)(param_3 + 8) = uVar5;
    return;
  }
  iVar10 = *(int *)(param_1 + 0x114);
  iVar1 = *(int *)(param_1 + 0x118);
  iVar2 = *(int *)(param_1 + 0x11c);
  local_2c = (*(int *)(param_1 + 0x144) * iVar2) / 0x7fff +
             (*(int *)(param_1 + 0x140) * iVar1) / 0x7fff +
             (*(int *)(param_1 + 0x13c) * iVar10) / 0x7fff;
  local_34 = (*(int *)(param_1 + 0x158) * iVar1) / 0x7fff +
             (*(int *)(param_1 + 0x154) * iVar10) / 0x7fff +
             (*(int *)(param_1 + 0x15c) * iVar2) / 0x7fff;
  local_30 = (*(int *)(param_1 + 0x14c) * iVar1) / 0x7fff +
             (*(int *)(param_1 + 0x148) * iVar10) / 0x7fff +
             (*(int *)(param_1 + 0x150) * iVar2) / 0x7fff;
  iVar10 = FUN_00101094();
  if (iVar10 == 0) {
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
  }
  else {
    FUN_00100b5c(&local_34,iVar10);
  }
  uVar9 = local_2c;
  uVar8 = local_34;
  *(uint *)param_3 = local_34;
  *(uint *)(param_3 + 4) = local_30;
  *(uint *)(param_3 + 8) = local_2c;
  uVar4 = *(undefined4 *)(param_1 + 0x120);
  if (local_34 == 0) {
    if (local_2c == 0) {
      if (local_30 == 0) {
        iVar10 = 0;
        local_44 = 0;
        goto LAB_00119aa6;
      }
      local_44 = 0;
      uVar12 = local_30;
    }
    else {
LAB_0011b65c:
      if ((local_2c & 0x80000000) == 0x80000000) {
        if ((local_2c & 0xffff8000) == 0xffff8000) {
          uVar12 = 0;
        }
        else {
          if (-1 < (int)(local_2c << 1)) goto LAB_0011d15e;
          if (-1 < (int)(local_2c << 2)) goto LAB_0011d156;
          if (-1 < (int)(local_2c << 3)) goto LAB_0011d14e;
          if (-1 < (int)(local_2c << 4)) goto LAB_0011d146;
          if (-1 < (int)(local_2c << 5)) goto LAB_0011d13e;
          if (-1 < (int)(local_2c << 6)) goto LAB_0011d136;
          if (-1 < (int)(local_2c << 7)) goto LAB_0011d12e;
          if (-1 < (int)(local_2c << 8)) goto LAB_0011d126;
          if (-1 < (int)(local_2c << 9)) goto LAB_0011d11e;
          if (-1 < (int)(local_2c << 10)) goto LAB_0011d116;
          if (-1 < (int)(local_2c << 0xb)) goto LAB_0011d10e;
          if (-1 < (int)(local_2c << 0xc)) goto LAB_0011d106;
          if (-1 < (int)(local_2c << 0xd)) goto LAB_0011d0fe;
          if (-1 < (int)(local_2c << 0xe)) goto LAB_0011d0f6;
          if (-1 < (int)(local_2c << 0xf)) goto LAB_0011d0ee;
          uVar12 = (uint)((local_2c & 0x8000) == 0);
        }
      }
      else {
        uVar12 = 0;
        if ((local_2c & 0xffff8000) != 0) {
          if ((int)(local_2c << 1) < 0) {
LAB_0011d15e:
            uVar12 = 0x10;
          }
          else if ((int)(local_2c << 2) < 0) {
LAB_0011d156:
            uVar12 = 0xf;
          }
          else if ((int)(local_2c << 3) < 0) {
LAB_0011d14e:
            uVar12 = 0xe;
          }
          else if ((int)(local_2c << 4) < 0) {
LAB_0011d146:
            uVar12 = 0xd;
          }
          else if ((int)(local_2c << 5) < 0) {
LAB_0011d13e:
            uVar12 = 0xc;
          }
          else if ((int)(local_2c << 6) < 0) {
LAB_0011d136:
            uVar12 = 0xb;
          }
          else if ((int)(local_2c << 7) < 0) {
LAB_0011d12e:
            uVar12 = 10;
          }
          else if ((int)(local_2c << 8) < 0) {
LAB_0011d126:
            uVar12 = 9;
          }
          else if ((int)(local_2c << 9) < 0) {
LAB_0011d11e:
            uVar12 = 8;
          }
          else if ((int)(local_2c << 10) < 0) {
LAB_0011d116:
            uVar12 = 7;
          }
          else if ((int)(local_2c << 0xb) < 0) {
LAB_0011d10e:
            uVar12 = 6;
          }
          else if ((int)(local_2c << 0xc) < 0) {
LAB_0011d106:
            uVar12 = 5;
          }
          else if ((int)(local_2c << 0xd) < 0) {
LAB_0011d0fe:
            uVar12 = 4;
          }
          else if ((int)(local_2c << 0xe) < 0) {
LAB_0011d0f6:
            uVar12 = 3;
          }
          else if ((int)(local_2c << 0xf) < 0) {
LAB_0011d0ee:
            uVar12 = 2;
          }
          else {
            uVar12 = (local_2c & 0xffff) >> 0xf;
          }
        }
      }
      if (local_34 != 0) {
        if ((local_34 & 0x80000000) == 0x80000000) {
          if ((local_34 & 0xffff8000) != 0xffff8000) {
            if (-1 < (int)(local_34 << 1)) goto LAB_0011d08c;
            if (-1 < (int)(local_34 << 2)) goto LAB_0011d098;
            if (-1 < (int)(local_34 << 3)) goto LAB_0011d092;
            if (-1 < (int)(local_34 << 4)) goto LAB_0011d0b0;
            if (-1 < (int)(local_34 << 5)) goto LAB_0011d0aa;
            if (-1 < (int)(local_34 << 6)) goto LAB_0011d0a4;
            if (-1 < (int)(local_34 << 7)) goto LAB_0011d09e;
            if (-1 < (int)(local_34 << 8)) goto LAB_0011d0e0;
            if (-1 < (int)(local_34 << 9)) goto LAB_0011d0da;
            if (-1 < (int)(local_34 << 10)) goto LAB_0011d0d4;
            if (-1 < (int)(local_34 << 0xb)) goto LAB_0011d0ce;
            if (-1 < (int)(local_34 << 0xc)) goto LAB_0011d0c8;
            if (-1 < (int)(local_34 << 0xd)) goto LAB_0011d0c2;
            if (-1 < (int)(local_34 << 0xe)) goto LAB_0011d0bc;
            if (-1 < (int)(local_34 << 0xf)) goto LAB_0011d0b6;
            uVar14 = (uint)((local_34 & 0x8000) == 0);
            goto LAB_0011b74c;
          }
        }
        else if ((local_34 & 0xffff8000) != 0) {
          if ((int)(local_34 << 1) < 0) {
LAB_0011d08c:
            uVar14 = 0x10;
          }
          else if ((int)(local_34 << 2) < 0) {
LAB_0011d098:
            uVar14 = 0xf;
          }
          else if ((int)(local_34 << 3) < 0) {
LAB_0011d092:
            uVar14 = 0xe;
          }
          else if ((int)(local_34 << 4) < 0) {
LAB_0011d0b0:
            uVar14 = 0xd;
          }
          else if ((int)(local_34 << 5) < 0) {
LAB_0011d0aa:
            uVar14 = 0xc;
          }
          else if ((int)(local_34 << 6) < 0) {
LAB_0011d0a4:
            uVar14 = 0xb;
          }
          else if ((int)(local_34 << 7) < 0) {
LAB_0011d09e:
            uVar14 = 10;
          }
          else if ((int)(local_34 << 8) < 0) {
LAB_0011d0e0:
            uVar14 = 9;
          }
          else if ((int)(local_34 << 9) < 0) {
LAB_0011d0da:
            uVar14 = 8;
          }
          else if ((int)(local_34 << 10) < 0) {
LAB_0011d0d4:
            uVar14 = 7;
          }
          else if ((int)(local_34 << 0xb) < 0) {
LAB_0011d0ce:
            uVar14 = 6;
          }
          else if ((int)(local_34 << 0xc) < 0) {
LAB_0011d0c8:
            uVar14 = 5;
          }
          else if ((int)(local_34 << 0xd) < 0) {
LAB_0011d0c2:
            uVar14 = 4;
          }
          else if ((int)(local_34 << 0xe) < 0) {
LAB_0011d0bc:
            uVar14 = 3;
          }
          else if ((int)(local_34 << 0xf) < 0) {
LAB_0011d0b6:
            uVar14 = 2;
          }
          else {
            uVar14 = (local_34 & 0xffff) >> 0xf;
          }
LAB_0011b74c:
          if (uVar12 < uVar14) {
            uVar12 = uVar14;
          }
        }
      }
      switch(uVar12) {
      case 0:
        uVar5 = 1;
        break;
      case 1:
        uVar5 = 2;
        break;
      case 2:
        uVar5 = 4;
        break;
      case 3:
        uVar5 = 8;
        break;
      case 4:
        uVar5 = 0x10;
        break;
      case 5:
        uVar5 = 0x20;
        break;
      case 6:
        uVar5 = 0x40;
        break;
      case 7:
        uVar5 = 0x80;
        break;
      case 8:
        uVar5 = 0x100;
        break;
      case 9:
        uVar5 = 0x200;
        break;
      case 10:
        uVar5 = 0x400;
        break;
      case 0xb:
        uVar5 = 0x800;
        break;
      case 0xc:
        uVar5 = 0x1000;
        break;
      case 0xd:
        uVar5 = 0x2000;
        break;
      case 0xe:
        uVar5 = 0x4000;
        break;
      case 0xf:
        uVar5 = 0x8000;
        break;
      case 0x10:
        uVar5 = 0x10000;
        break;
      case 0x11:
        uVar5 = 0x20000;
        break;
      case 0x12:
        uVar5 = 0x40000;
        break;
      case 0x13:
        uVar5 = 0x80000;
        break;
      case 0x14:
        uVar5 = 0x100000;
        break;
      case 0x15:
        uVar5 = 0x200000;
        break;
      case 0x16:
        uVar5 = 0x400000;
        break;
      case 0x17:
        uVar5 = 0x800000;
        break;
      case 0x18:
        uVar5 = 0x1000000;
        break;
      case 0x19:
        uVar5 = 0x2000000;
        break;
      case 0x1a:
        uVar5 = 0x4000000;
        break;
      case 0x1b:
        uVar5 = 0x8000000;
        break;
      case 0x1c:
        uVar5 = 0x10000000;
        break;
      case 0x1d:
        uVar5 = 0x20000000;
        break;
      case 0x1e:
        uVar5 = 0x40000000;
        break;
      default:
        if ((int)uVar12 < 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = 0x40000000;
        }
      }
      iVar1 = __divsi3(local_2c,uVar5);
      iVar2 = __divsi3(uVar8,uVar5);
      iVar10 = DAT_0011c64c;
      if (iVar1 < 0) {
        if (iVar2 < 0) {
          if (-iVar1 < -iVar2) {
            iVar10 = *(int *)(iVar7 + DAT_0011d168);
            uVar12 = __divsi3(iVar1 * 0x7fff,iVar2);
            if ((int)uVar12 < 0) {
              uVar12 = uVar12 + 0x1ff;
            }
            local_44 = -0x5a - *(int *)(iVar10 + ((uVar12 & 0x7fff) >> 9) * 4);
          }
          else {
            iVar10 = *(int *)(iVar7 + DAT_0011d168);
            uVar12 = __divsi3(iVar2 * 0x7fff,iVar1);
            if ((int)uVar12 < 0) {
              uVar12 = uVar12 + 0x1ff;
            }
            local_44 = *(int *)(iVar10 + ((uVar12 & 0x7fff) >> 9) * 4) + -0xb4;
          }
        }
        else if (-iVar1 < iVar2) {
          iVar10 = *(int *)(iVar7 + DAT_0011c64c);
          uVar12 = __divsi3(iVar1 * -0x7fff,iVar2);
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + 0x1ff;
          }
          local_44 = *(int *)(iVar10 + ((uVar12 & 0x7fff) >> 9) * 4) + 0x5a;
        }
        else {
          iVar10 = *(int *)(iVar7 + DAT_0011c64c);
          uVar12 = __divsi3(iVar2 * -0x7fff,iVar1);
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + 0x1ff;
          }
          local_44 = 0xb4 - *(int *)(iVar10 + ((uVar12 & 0x7fff) >> 9) * 4);
        }
      }
      else if (iVar2 < 0) {
        if (iVar1 < -iVar2) {
          iVar10 = *(int *)(iVar7 + DAT_0011c64c);
          uVar12 = __divsi3(iVar1 * -0x7fff,iVar2);
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + 0x1ff;
          }
          local_44 = *(int *)(iVar10 + ((uVar12 & 0x7fff) >> 9) * 4) + -0x5a;
        }
        else {
          uVar12 = __divsi3(iVar2 * -0x7fff,iVar1);
          if ((int)uVar12 < 0) {
            uVar12 = uVar12 + 0x1ff;
          }
          local_44 = -*(int *)(*(int *)(iVar7 + iVar10) + ((uVar12 & 0x7fff) >> 9) * 4);
        }
      }
      else if (iVar1 < iVar2) {
        iVar10 = *(int *)(iVar7 + DAT_0011c64c);
        uVar14 = __divsi3(iVar1 * 0x7fff,iVar2);
        uVar12 = uVar14 & ~((int)uVar14 >> 0x20);
        if ((int)uVar14 < 0) {
          uVar12 = uVar14 + 0x1ff;
        }
        local_44 = 0x5a - *(int *)(iVar10 + ((uVar12 & 0x7fff) >> 9) * 4);
      }
      else {
        iVar10 = *(int *)(iVar7 + DAT_0011c64c);
        uVar12 = __divsi3(iVar2 * 0x7fff,iVar1);
        local_44 = *(int *)(iVar10 + ((uVar12 & 0x7fff) >> 9) * 4);
      }
LAB_0011b59a:
      uVar12 = *(uint *)(param_3 + 4);
      if (uVar12 == 0) {
LAB_0011a6a6:
        if (uVar8 != 0) {
          uVar12 = 0;
          goto LAB_0011a790;
        }
        uVar12 = 0;
        iVar10 = 0;
        if (uVar9 == 0) goto LAB_00119aa6;
LAB_0011a6b2:
        uVar14 = 0;
        goto LAB_0011a6b6;
      }
      if (uVar8 != 0) goto LAB_0011a790;
      if (uVar9 != 0) goto LAB_0011a6b2;
    }
    if ((int)uVar12 < 0) {
      iVar10 = -0x5a;
    }
    else {
      iVar10 = 0x5a;
    }
    goto LAB_00119aa6;
  }
  if (local_2c != 0) {
    if (local_34 != 0 || local_2c != 0) goto LAB_0011b65c;
    local_44 = 0;
    goto LAB_0011b59a;
  }
  uVar12 = *(uint *)(param_3 + 4);
  if ((int)local_34 < 0) {
    local_44 = -0x5a;
  }
  else {
    local_44 = 0x5a;
  }
  if (uVar12 == 0) goto LAB_0011a6a6;
LAB_0011a790:
  if ((uVar8 & 0x80000000) == 0x80000000) {
    if ((uVar8 & 0xffffc000) == 0xffffc000) {
LAB_0011a810:
      uVar14 = 0;
    }
    else {
      if (-1 < (int)(uVar8 << 1)) goto LAB_0011cd44;
      if (-1 < (int)(uVar8 << 2)) goto LAB_0011cefc;
      if (-1 < (int)(uVar8 << 3)) goto LAB_0011cf0c;
      if (-1 < (int)(uVar8 << 4)) goto LAB_0011cf04;
      if (-1 < (int)(uVar8 << 5)) goto LAB_0011cf2c;
      if (-1 < (int)(uVar8 << 6)) goto LAB_0011cf24;
      if (-1 < (int)(uVar8 << 7)) goto LAB_0011cf1c;
      if (-1 < (int)(uVar8 << 8)) goto LAB_0011cf14;
      if (-1 < (int)(uVar8 << 9)) goto LAB_0011cf64;
      if (-1 < (int)(uVar8 << 10)) goto LAB_0011cf5c;
      if (-1 < (int)(uVar8 << 0xb)) goto LAB_0011cf54;
      if (-1 < (int)(uVar8 << 0xc)) goto LAB_0011cf4c;
      if (-1 < (int)(uVar8 << 0xd)) goto LAB_0011cf44;
      if (-1 < (int)(uVar8 << 0xe)) goto LAB_0011cf3c;
      if (-1 < (int)(uVar8 << 0xf)) goto LAB_0011cf34;
      if (-1 < (int)(uVar8 << 0x10)) goto LAB_0011cff0;
      uVar14 = (uint)((uVar8 & 0x4000) == 0);
    }
  }
  else {
    uVar14 = 0;
    if ((uVar8 & 0xffffc000) != 0) {
      if ((int)(uVar8 << 1) < 0) {
LAB_0011cd44:
        uVar14 = 0x11;
      }
      else if ((int)(uVar8 << 2) < 0) {
LAB_0011cefc:
        uVar14 = 0x10;
      }
      else if ((int)(uVar8 << 3) < 0) {
LAB_0011cf0c:
        uVar14 = 0xf;
      }
      else if ((int)(uVar8 << 4) < 0) {
LAB_0011cf04:
        uVar14 = 0xe;
      }
      else if ((int)(uVar8 << 5) < 0) {
LAB_0011cf2c:
        uVar14 = 0xd;
      }
      else if ((int)(uVar8 << 6) < 0) {
LAB_0011cf24:
        uVar14 = 0xc;
      }
      else if ((int)(uVar8 << 7) < 0) {
LAB_0011cf1c:
        uVar14 = 0xb;
      }
      else if ((int)(uVar8 << 8) < 0) {
LAB_0011cf14:
        uVar14 = 10;
      }
      else if ((int)(uVar8 << 9) < 0) {
LAB_0011cf64:
        uVar14 = 9;
      }
      else if ((int)(uVar8 << 10) < 0) {
LAB_0011cf5c:
        uVar14 = 8;
      }
      else if ((int)(uVar8 << 0xb) < 0) {
LAB_0011cf54:
        uVar14 = 7;
      }
      else if ((int)(uVar8 << 0xc) < 0) {
LAB_0011cf4c:
        uVar14 = 6;
      }
      else if ((int)(uVar8 << 0xd) < 0) {
LAB_0011cf44:
        uVar14 = 5;
      }
      else if ((int)(uVar8 << 0xe) < 0) {
LAB_0011cf3c:
        uVar14 = 4;
      }
      else if ((int)(uVar8 << 0xf) < 0) {
LAB_0011cf34:
        uVar14 = 3;
      }
      else if ((int)(uVar8 << 0x10) < 0) {
LAB_0011cff0:
        uVar14 = 2;
      }
      else {
        if (-1 < (int)(uVar8 << 0x11)) goto LAB_0011a810;
        uVar14 = 1;
      }
    }
  }
  uVar15 = 0;
  if (uVar9 != 0) {
LAB_0011a6b6:
    if ((uVar9 & 0x80000000) == 0x80000000) {
      if ((uVar9 & 0xffffc000) == 0xffffc000) {
LAB_0011a73a:
        uVar15 = 0;
      }
      else {
        if (-1 < (int)(uVar9 << 1)) goto LAB_0011cd4c;
        if (-1 < (int)(uVar9 << 2)) goto LAB_0011cd74;
        if (-1 < (int)(uVar9 << 3)) goto LAB_0011cd84;
        if (-1 < (int)(uVar9 << 4)) goto LAB_0011cd7c;
        if (-1 < (int)(uVar9 << 5)) goto LAB_0011cebc;
        if (-1 < (int)(uVar9 << 6)) goto LAB_0011ceb4;
        if (-1 < (int)(uVar9 << 7)) goto LAB_0011ceac;
        if (-1 < (int)(uVar9 << 8)) goto LAB_0011cea4;
        if (-1 < (int)(uVar9 << 9)) goto LAB_0011cef4;
        if (-1 < (int)(uVar9 << 10)) goto LAB_0011ceec;
        if (-1 < (int)(uVar9 << 0xb)) goto LAB_0011cee4;
        if (-1 < (int)(uVar9 << 0xc)) goto LAB_0011cedc;
        if (-1 < (int)(uVar9 << 0xd)) goto LAB_0011ced4;
        if (-1 < (int)(uVar9 << 0xe)) goto LAB_0011cecc;
        if (-1 < (int)(uVar9 << 0xf)) goto LAB_0011cec4;
        if (-1 < (int)(uVar9 << 0x10)) goto LAB_0011d034;
        uVar15 = (uint)((uVar9 & 0x4000) == 0);
      }
    }
    else if ((uVar9 & 0xffffc000) == 0) {
      uVar15 = 0;
    }
    else if ((int)(uVar9 << 1) < 0) {
LAB_0011cd4c:
      uVar15 = 0x11;
    }
    else if ((int)(uVar9 << 2) < 0) {
LAB_0011cd74:
      uVar15 = 0x10;
    }
    else if ((int)(uVar9 << 3) < 0) {
LAB_0011cd84:
      uVar15 = 0xf;
    }
    else if ((int)(uVar9 << 4) < 0) {
LAB_0011cd7c:
      uVar15 = 0xe;
    }
    else if ((int)(uVar9 << 5) < 0) {
LAB_0011cebc:
      uVar15 = 0xd;
    }
    else if ((int)(uVar9 << 6) < 0) {
LAB_0011ceb4:
      uVar15 = 0xc;
    }
    else if ((int)(uVar9 << 7) < 0) {
LAB_0011ceac:
      uVar15 = 0xb;
    }
    else if ((int)(uVar9 << 8) < 0) {
LAB_0011cea4:
      uVar15 = 10;
    }
    else if ((int)(uVar9 << 9) < 0) {
LAB_0011cef4:
      uVar15 = 9;
    }
    else if ((int)(uVar9 << 10) < 0) {
LAB_0011ceec:
      uVar15 = 8;
    }
    else if ((int)(uVar9 << 0xb) < 0) {
LAB_0011cee4:
      uVar15 = 7;
    }
    else if ((int)(uVar9 << 0xc) < 0) {
LAB_0011cedc:
      uVar15 = 6;
    }
    else if ((int)(uVar9 << 0xd) < 0) {
LAB_0011ced4:
      uVar15 = 5;
    }
    else if ((int)(uVar9 << 0xe) < 0) {
LAB_0011cecc:
      uVar15 = 4;
    }
    else if ((int)(uVar9 << 0xf) < 0) {
LAB_0011cec4:
      uVar15 = 3;
    }
    else if ((int)(uVar9 << 0x10) < 0) {
LAB_0011d034:
      uVar15 = 2;
    }
    else {
      if (-1 < (int)(uVar9 << 0x11)) goto LAB_0011a73a;
      uVar15 = 1;
    }
  }
  if (uVar15 <= uVar14) {
    uVar15 = uVar14;
  }
  switch(uVar15) {
  case 0:
    iVar10 = 1;
    break;
  case 1:
    iVar10 = 2;
    break;
  case 2:
    iVar10 = 4;
    break;
  case 3:
    iVar10 = 8;
    break;
  case 4:
    iVar10 = 0x10;
    break;
  case 5:
    iVar10 = 0x20;
    break;
  case 6:
    iVar10 = 0x40;
    break;
  case 7:
    iVar10 = 0x80;
    break;
  case 8:
    iVar10 = 0x100;
    break;
  case 9:
    iVar10 = 0x200;
    break;
  case 10:
    iVar10 = 0x400;
    break;
  case 0xb:
    iVar10 = 0x800;
    break;
  case 0xc:
    iVar10 = 0x1000;
    break;
  case 0xd:
    iVar10 = 0x2000;
    break;
  case 0xe:
    iVar10 = 0x4000;
    break;
  case 0xf:
    iVar10 = 0x8000;
    break;
  case 0x10:
    iVar10 = 0x10000;
    break;
  case 0x11:
    iVar10 = 0x20000;
    break;
  case 0x12:
    iVar10 = 0x40000;
    break;
  case 0x13:
    iVar10 = 0x80000;
    break;
  case 0x14:
    iVar10 = 0x100000;
    break;
  case 0x15:
    iVar10 = 0x200000;
    break;
  case 0x16:
    iVar10 = 0x400000;
    break;
  case 0x17:
    iVar10 = 0x800000;
    break;
  case 0x18:
    iVar10 = 0x1000000;
    break;
  case 0x19:
    iVar10 = 0x2000000;
    break;
  case 0x1a:
    iVar10 = 0x4000000;
    break;
  case 0x1b:
    iVar10 = 0x8000000;
    break;
  case 0x1c:
    iVar10 = 0x10000000;
    break;
  case 0x1d:
    iVar10 = 0x20000000;
    break;
  case 0x1e:
    iVar10 = 0x40000000;
    break;
  default:
    if ((int)uVar15 < 0) {
      iVar10 = 1;
    }
    else {
      iVar10 = 0x40000000;
    }
  }
  iVar1 = __divsi3(uVar8,iVar10);
  iVar2 = __divsi3(uVar9,iVar10);
  iVar1 = iVar1 * iVar1 + iVar2 * iVar2;
  if (iVar1 < 1) {
    uVar14 = 0;
  }
  else {
    iVar2 = iVar1;
    if (iVar1 == 0x7fffffff) {
      iVar1 = 0x7ffffffe;
      iVar2 = 0x7ffffffe;
    }
    do {
      iVar3 = __divsi3(iVar2,iVar1);
      iVar6 = (iVar1 + iVar3) / 2;
      iVar3 = iVar1;
      if (iVar1 <= iVar6) break;
      iVar1 = __divsi3(iVar2);
      iVar1 = (iVar6 + iVar1) / 2;
      iVar3 = iVar6;
      if (iVar6 <= iVar1) break;
      iVar3 = __divsi3(iVar2,iVar1);
      iVar6 = (iVar1 + iVar3) / 2;
      iVar3 = iVar1;
      if (iVar1 <= iVar6) break;
      iVar1 = __divsi3(iVar2,iVar6);
      iVar1 = (iVar6 + iVar1) / 2;
      iVar3 = iVar6;
      if (iVar6 <= iVar1) break;
      iVar3 = __divsi3(iVar2,iVar1);
      iVar6 = (iVar1 + iVar3) / 2;
      iVar3 = iVar1;
      if (iVar1 <= iVar6) break;
      iVar1 = __divsi3(iVar2);
      iVar1 = (iVar6 + iVar1) / 2;
      iVar3 = iVar6;
      if (iVar6 <= iVar1) break;
      iVar3 = __divsi3(iVar2,iVar1);
      iVar6 = (iVar1 + iVar3) / 2;
      iVar3 = iVar1;
      if (iVar1 <= iVar6) break;
      iVar1 = __divsi3(iVar2,iVar6);
      iVar1 = (iVar1 + iVar6) / 2;
      iVar3 = iVar6;
    } while (iVar1 < iVar6);
    uVar14 = iVar10 * iVar3;
  }
  uVar8 = uVar8 & ~((int)uVar8 >> 0x1f);
  if ((int)uVar14 <= (int)uVar8) {
    uVar14 = uVar8;
  }
  if ((int)uVar14 < (int)uVar9) {
    uVar14 = uVar9;
    if (uVar9 == 0 && uVar12 == 0) {
      iVar10 = 0;
      goto LAB_00119aa6;
    }
LAB_0011aa08:
    uVar8 = 0;
    if ((uVar14 & 0xffff8000) != 0) {
      if ((int)(uVar14 << 1) < 0) {
        uVar8 = 0x10;
      }
      else if ((int)(uVar14 << 2) < 0) {
        uVar8 = 0xf;
      }
      else if ((int)(uVar14 << 3) < 0) {
        uVar8 = 0xe;
      }
      else if ((int)(uVar14 << 4) < 0) {
        uVar8 = 0xd;
      }
      else if ((int)(uVar14 << 5) < 0) {
        uVar8 = 0xc;
      }
      else if ((int)(uVar14 << 6) < 0) {
        uVar8 = 0xb;
      }
      else if ((int)(uVar14 << 7) < 0) {
        uVar8 = 10;
      }
      else if ((int)(uVar14 << 8) < 0) {
        uVar8 = 9;
      }
      else if ((int)(uVar14 << 9) < 0) {
        uVar8 = 8;
      }
      else if ((int)(uVar14 << 10) < 0) {
        uVar8 = 7;
      }
      else if ((int)(uVar14 << 0xb) < 0) {
        uVar8 = 6;
      }
      else if ((int)(uVar14 << 0xc) < 0) {
        uVar8 = 5;
      }
      else if ((int)(uVar14 << 0xd) < 0) {
        uVar8 = 4;
      }
      else if ((int)(uVar14 << 0xe) < 0) {
        uVar8 = 3;
      }
      else if ((int)(uVar14 << 0xf) < 0) {
        uVar8 = 2;
      }
      else {
        uVar8 = (uVar14 & 0xffff) >> 0xf;
      }
    }
  }
  else {
    iVar10 = 0;
    if (uVar14 == 0 && uVar12 == 0) goto LAB_00119aa6;
    if (uVar14 != 0) goto LAB_0011aa08;
    uVar8 = 0;
  }
  if (uVar12 != 0) {
    if ((uVar12 & 0x80000000) == 0x80000000) {
      if ((uVar12 & 0xffff8000) != 0xffff8000) {
        if (-1 < (int)(uVar12 << 1)) goto LAB_0011cf74;
        if (-1 < (int)(uVar12 << 2)) goto LAB_0011cf80;
        if (-1 < (int)(uVar12 << 3)) goto LAB_0011cf7a;
        if (-1 < (int)(uVar12 << 4)) goto LAB_0011d04e;
        if (-1 < (int)(uVar12 << 5)) goto LAB_0011d048;
        if (-1 < (int)(uVar12 << 6)) goto LAB_0011d042;
        if (-1 < (int)(uVar12 << 7)) goto LAB_0011d03c;
        if (-1 < (int)(uVar12 << 8)) goto LAB_0011d07e;
        if (-1 < (int)(uVar12 << 9)) goto LAB_0011d078;
        if (-1 < (int)(uVar12 << 10)) goto LAB_0011d072;
        if (-1 < (int)(uVar12 << 0xb)) goto LAB_0011d06c;
        if (-1 < (int)(uVar12 << 0xc)) goto LAB_0011d066;
        if (-1 < (int)(uVar12 << 0xd)) goto LAB_0011d060;
        if (-1 < (int)(uVar12 << 0xe)) goto LAB_0011d05a;
        if (-1 < (int)(uVar12 << 0xf)) goto LAB_0011d054;
        uVar9 = (uint)((uVar12 & 0x8000) == 0);
        goto LAB_0011aaea;
      }
    }
    else if ((uVar12 & 0xffff8000) != 0) {
      if ((int)(uVar12 << 1) < 0) {
LAB_0011cf74:
        uVar9 = 0x10;
      }
      else if ((int)(uVar12 << 2) < 0) {
LAB_0011cf80:
        uVar9 = 0xf;
      }
      else if ((int)(uVar12 << 3) < 0) {
LAB_0011cf7a:
        uVar9 = 0xe;
      }
      else if ((int)(uVar12 << 4) < 0) {
LAB_0011d04e:
        uVar9 = 0xd;
      }
      else if ((int)(uVar12 << 5) < 0) {
LAB_0011d048:
        uVar9 = 0xc;
      }
      else if ((int)(uVar12 << 6) < 0) {
LAB_0011d042:
        uVar9 = 0xb;
      }
      else if ((int)(uVar12 << 7) < 0) {
LAB_0011d03c:
        uVar9 = 10;
      }
      else if ((int)(uVar12 << 8) < 0) {
LAB_0011d07e:
        uVar9 = 9;
      }
      else if ((int)(uVar12 << 9) < 0) {
LAB_0011d078:
        uVar9 = 8;
      }
      else if ((int)(uVar12 << 10) < 0) {
LAB_0011d072:
        uVar9 = 7;
      }
      else if ((int)(uVar12 << 0xb) < 0) {
LAB_0011d06c:
        uVar9 = 6;
      }
      else if ((int)(uVar12 << 0xc) < 0) {
LAB_0011d066:
        uVar9 = 5;
      }
      else if ((int)(uVar12 << 0xd) < 0) {
LAB_0011d060:
        uVar9 = 4;
      }
      else if ((int)(uVar12 << 0xe) < 0) {
LAB_0011d05a:
        uVar9 = 3;
      }
      else if ((int)(uVar12 << 0xf) < 0) {
LAB_0011d054:
        uVar9 = 2;
      }
      else {
        uVar9 = (uVar12 & 0xffff) >> 0xf;
      }
LAB_0011aaea:
      if (uVar8 < uVar9) {
        uVar8 = uVar9;
      }
    }
  }
  switch(uVar8) {
  case 0:
    uVar5 = 1;
    break;
  case 1:
    uVar5 = 2;
    break;
  case 2:
    uVar5 = 4;
    break;
  case 3:
    uVar5 = 8;
    break;
  case 4:
    uVar5 = 0x10;
    break;
  case 5:
    uVar5 = 0x20;
    break;
  case 6:
    uVar5 = 0x40;
    break;
  case 7:
    uVar5 = 0x80;
    break;
  case 8:
    uVar5 = 0x100;
    break;
  case 9:
    uVar5 = 0x200;
    break;
  case 10:
    uVar5 = 0x400;
    break;
  case 0xb:
    uVar5 = 0x800;
    break;
  case 0xc:
    uVar5 = 0x1000;
    break;
  case 0xd:
    uVar5 = 0x2000;
    break;
  case 0xe:
    uVar5 = 0x4000;
    break;
  case 0xf:
    uVar5 = 0x8000;
    break;
  case 0x10:
    uVar5 = 0x10000;
    break;
  case 0x11:
    uVar5 = 0x20000;
    break;
  case 0x12:
    uVar5 = 0x40000;
    break;
  case 0x13:
    uVar5 = 0x80000;
    break;
  case 0x14:
    uVar5 = 0x100000;
    break;
  case 0x15:
    uVar5 = 0x200000;
    break;
  case 0x16:
    uVar5 = 0x400000;
    break;
  case 0x17:
    uVar5 = 0x800000;
    break;
  case 0x18:
    uVar5 = 0x1000000;
    break;
  case 0x19:
    uVar5 = 0x2000000;
    break;
  case 0x1a:
    uVar5 = 0x4000000;
    break;
  case 0x1b:
    uVar5 = 0x8000000;
    break;
  case 0x1c:
    uVar5 = 0x10000000;
    break;
  case 0x1d:
    uVar5 = 0x20000000;
    break;
  default:
    uVar5 = 0x40000000;
  }
  iVar1 = __divsi3(uVar14,uVar5);
  iVar2 = __divsi3(uVar12,uVar5);
  iVar10 = DAT_0011b780;
  if (iVar2 < 0) {
    if (iVar1 < -iVar2) {
      iVar7 = *(int *)(iVar7 + DAT_0011c64c);
      uVar8 = __divsi3(iVar1 * -0x7fff,iVar2);
      if ((int)uVar8 < 0) {
        uVar8 = uVar8 + 0x1ff;
      }
      iVar10 = *(int *)(iVar7 + ((uVar8 & 0x7fff) >> 9) * 4) + -0x5a;
    }
    else {
      iVar7 = *(int *)(iVar7 + DAT_0011c64c);
      uVar8 = __divsi3(iVar2 * -0x7fff,iVar1);
      if ((int)uVar8 < 0) {
        uVar8 = uVar8 + 0x1ff;
      }
      iVar10 = -*(int *)(iVar7 + ((uVar8 & 0x7fff) >> 9) * 4);
    }
  }
  else if (iVar1 < iVar2) {
    uVar9 = __divsi3(iVar1 * 0x7fff,iVar2);
    uVar8 = uVar9 & ~((int)uVar9 >> 0x20);
    if ((int)uVar9 < 0) {
      uVar8 = uVar9 + 0x1ff;
    }
    iVar10 = 0x5a - *(int *)(*(int *)(iVar7 + iVar10) + ((uVar8 & 0x7fff) >> 9) * 4);
  }
  else {
    uVar8 = __divsi3(iVar2 * 0x7fff,iVar1);
    iVar10 = *(int *)(*(int *)(iVar7 + iVar10) + ((uVar8 & 0x7fff) >> 9) * 4);
  }
LAB_00119aa6:
  *(int *)param_3 = local_44;
  *(int *)(param_3 + 4) = iVar10;
  *(undefined4 *)(param_3 + 8) = uVar4;
  *(uint *)(param_1 + 0x160) = local_34;
  *(uint *)(param_1 + 0x164) = local_30;
  *(uint *)(param_1 + 0x168) = local_2c;
  uVar4 = *(undefined4 *)(param_3 + 4);
  uVar5 = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)param_3;
  *(undefined4 *)(param_1 + 0x170) = uVar4;
  *(undefined4 *)(param_1 + 0x174) = uVar5;
  return;
}

