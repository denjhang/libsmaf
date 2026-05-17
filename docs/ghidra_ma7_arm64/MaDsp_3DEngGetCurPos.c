/* MaDsp_3DEngGetCurPos @ 0026fdec 24488B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaDsp_3DEngGetCurPos(_MASMW_P3DASNDSRCMOVE*, unsigned int, _MASMW_P3DAVECTOR*) */

void YAMAHA::MaDsp_3DEngGetCurPos
               (_MASMW_P3DASNDSRCMOVE *param_1,uint param_2,_MASMW_P3DAVECTOR *param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    if (2 < *(uint *)(param_1 + 0x10)) {
      return;
    }
    if (param_2 < 2) goto LAB_00270038;
    if (param_2 != 2) {
      return;
    }
    uVar15 = *(uint *)(param_1 + 0x2c);
    if (uVar15 == 0) {
      uVar19 = *(uint *)(param_1 + 0x30);
      uVar14 = *(uint *)(param_1 + 0x34);
      if ((uVar19 != 0) || (uVar14 != 0)) {
LAB_002702fc:
        uVar24 = 0;
        goto LAB_002700f4;
      }
      *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x2c);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x34);
LAB_0026fe48:
      uVar14 = 0;
    }
    else {
      uVar19 = *(uint *)(param_1 + 0x30);
      uVar14 = *(uint *)(param_1 + 0x34);
      if ((int)uVar15 < 0) {
        if ((uVar15 & 0xffffc000) == 0xffffc000) goto LAB_002702fc;
        if ((uVar15 >> 0x1e & 1) == 0) goto LAB_00273e14;
        if ((uVar15 >> 0x1d & 1) == 0) goto LAB_00273e40;
        if ((uVar15 >> 0x1c & 1) == 0) goto LAB_00273e4c;
        if ((uVar15 >> 0x1b & 1) == 0) goto LAB_00273e68;
        if ((uVar15 >> 0x1a & 1) == 0) goto LAB_00274030;
        if ((uVar15 >> 0x19 & 1) == 0) goto LAB_00274024;
        if ((uVar15 >> 0x18 & 1) == 0) goto LAB_00274010;
        if ((uVar15 >> 0x17 & 1) == 0) goto LAB_0027406c;
        if ((uVar15 >> 0x16 & 1) == 0) goto LAB_00274078;
        if ((uVar15 >> 0x15 & 1) == 0) goto LAB_002741a8;
        if ((uVar15 >> 0x14 & 1) == 0) goto LAB_00274270;
        if ((uVar15 >> 0x13 & 1) == 0) goto LAB_00274264;
        if ((uVar15 >> 0x12 & 1) == 0) goto LAB_0027427c;
        if ((uVar15 >> 0x11 & 1) == 0) goto LAB_0027468c;
        if ((uVar15 >> 0x10 & 1) == 0) goto LAB_002746a4;
        if ((uVar15 >> 0xf & 1) == 0) goto LAB_00274698;
        uVar24 = 0;
        if ((uVar15 >> 0xe & 1) == 0) goto LAB_00270358;
      }
      else {
        uVar24 = 0;
        if ((uVar15 & 0xffffc000) != 0) {
          if ((uVar15 >> 0x1e & 1) == 0) {
            if ((uVar15 >> 0x1d & 1) == 0) {
              if ((uVar15 >> 0x1c & 1) == 0) {
                if ((uVar15 >> 0x1b & 1) == 0) {
                  if ((uVar15 >> 0x1a & 1) == 0) {
                    if ((uVar15 >> 0x19 & 1) == 0) {
                      if ((uVar15 >> 0x18 & 1) == 0) {
                        if ((uVar15 >> 0x17 & 1) == 0) {
                          if ((uVar15 >> 0x16 & 1) == 0) {
                            if ((uVar15 >> 0x15 & 1) == 0) {
                              if ((uVar15 >> 0x14 & 1) == 0) {
                                if ((uVar15 >> 0x13 & 1) == 0) {
                                  if ((uVar15 >> 0x12 & 1) == 0) {
                                    if ((uVar15 >> 0x11 & 1) == 0) {
                                      if ((uVar15 >> 0x10 & 1) == 0) {
                                        if ((uVar15 >> 0xf & 1) == 0) {
                                          if ((uVar15 >> 0xe & 1) != 0) {
LAB_00270358:
                                            uVar24 = 1;
                                          }
                                        }
                                        else {
LAB_00274698:
                                          uVar24 = 2;
                                        }
                                      }
                                      else {
LAB_002746a4:
                                        uVar24 = 3;
                                      }
                                    }
                                    else {
LAB_0027468c:
                                      uVar24 = 4;
                                    }
                                  }
                                  else {
LAB_0027427c:
                                    uVar24 = 5;
                                  }
                                }
                                else {
LAB_00274264:
                                  uVar24 = 6;
                                }
                              }
                              else {
LAB_00274270:
                                uVar24 = 7;
                              }
                            }
                            else {
LAB_002741a8:
                              uVar24 = 8;
                            }
                          }
                          else {
LAB_00274078:
                            uVar24 = 9;
                          }
                        }
                        else {
LAB_0027406c:
                          uVar24 = 10;
                        }
                      }
                      else {
LAB_00274010:
                        uVar24 = 0xb;
                      }
                    }
                    else {
LAB_00274024:
                      uVar24 = 0xc;
                    }
                  }
                  else {
LAB_00274030:
                    uVar24 = 0xd;
                  }
                }
                else {
LAB_00273e68:
                  uVar24 = 0xe;
                }
              }
              else {
LAB_00273e4c:
                uVar24 = 0xf;
              }
            }
            else {
LAB_00273e40:
              uVar24 = 0x10;
            }
          }
          else {
LAB_00273e14:
            uVar24 = 0x11;
          }
        }
      }
LAB_002700f4:
      uVar12 = 0;
      if (uVar19 != 0) {
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffffc000) != 0xffffc000) {
            if ((uVar19 >> 0x1e & 1) == 0) goto LAB_00273e00;
            if ((uVar19 >> 0x1d & 1) == 0) goto LAB_00273e2c;
            if ((uVar19 >> 0x1c & 1) == 0) goto LAB_00273e20;
            if ((uVar19 >> 0x1b & 1) == 0) goto LAB_00273ed8;
            if ((uVar19 >> 0x1a & 1) == 0) goto LAB_00273f98;
            if ((uVar19 >> 0x19 & 1) == 0) goto LAB_00273fb0;
            if ((uVar19 >> 0x18 & 1) == 0) goto LAB_00273fa4;
            if ((uVar19 >> 0x17 & 1) == 0) goto LAB_00274048;
            if ((uVar19 >> 0x16 & 1) == 0) goto LAB_0027403c;
            if ((uVar19 >> 0x15 & 1) == 0) goto LAB_00274194;
            if ((uVar19 >> 0x14 & 1) == 0) goto LAB_00274318;
            if ((uVar19 >> 0x13 & 1) == 0) goto LAB_00274348;
            if ((uVar19 >> 0x12 & 1) == 0) goto LAB_0027433c;
            if ((uVar19 >> 0x11 & 1) == 0) goto LAB_002744ac;
            if ((uVar19 >> 0x10 & 1) == 0) goto LAB_002744a0;
            if ((uVar19 >> 0xf & 1) == 0) goto LAB_002744e4;
            uVar12 = 0;
            if ((uVar19 >> 0xe & 1) == 0) goto LAB_00272424;
          }
        }
        else if ((uVar19 & 0xffffc000) != 0) {
          if ((uVar19 >> 0x1e & 1) == 0) {
            if ((uVar19 >> 0x1d & 1) == 0) {
              if ((uVar19 >> 0x1c & 1) == 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
                  if ((uVar19 >> 0x1a & 1) == 0) {
                    if ((uVar19 >> 0x19 & 1) == 0) {
                      if ((uVar19 >> 0x18 & 1) == 0) {
                        if ((uVar19 >> 0x17 & 1) == 0) {
                          if ((uVar19 >> 0x16 & 1) == 0) {
                            if ((uVar19 >> 0x15 & 1) == 0) {
                              if ((uVar19 >> 0x14 & 1) == 0) {
                                if ((uVar19 >> 0x13 & 1) == 0) {
                                  if ((uVar19 >> 0x12 & 1) == 0) {
                                    if ((uVar19 >> 0x11 & 1) == 0) {
                                      if ((uVar19 >> 0x10 & 1) == 0) {
                                        if ((uVar19 >> 0xf & 1) == 0) {
                                          if ((uVar19 >> 0xe & 1) != 0) {
LAB_00272424:
                                            uVar12 = 1;
                                          }
                                        }
                                        else {
LAB_002744e4:
                                          uVar12 = 2;
                                        }
                                      }
                                      else {
LAB_002744a0:
                                        uVar12 = 3;
                                      }
                                    }
                                    else {
LAB_002744ac:
                                      uVar12 = 4;
                                    }
                                  }
                                  else {
LAB_0027433c:
                                    uVar12 = 5;
                                  }
                                }
                                else {
LAB_00274348:
                                  uVar12 = 6;
                                }
                              }
                              else {
LAB_00274318:
                                uVar12 = 7;
                              }
                            }
                            else {
LAB_00274194:
                              uVar12 = 8;
                            }
                          }
                          else {
LAB_0027403c:
                            uVar12 = 9;
                          }
                        }
                        else {
LAB_00274048:
                          uVar12 = 10;
                        }
                      }
                      else {
LAB_00273fa4:
                        uVar12 = 0xb;
                      }
                    }
                    else {
LAB_00273fb0:
                      uVar12 = 0xc;
                    }
                  }
                  else {
LAB_00273f98:
                    uVar12 = 0xd;
                  }
                }
                else {
LAB_00273ed8:
                  uVar12 = 0xe;
                }
              }
              else {
LAB_00273e20:
                uVar12 = 0xf;
              }
            }
            else {
LAB_00273e2c:
              uVar12 = 0x10;
            }
          }
          else {
LAB_00273e00:
            uVar12 = 0x11;
          }
        }
      }
      uVar18 = 0;
      if (uVar14 != 0) {
        if ((int)uVar14 < 0) {
          if ((uVar14 & 0xffffc000) != 0xffffc000) {
            if ((uVar14 >> 0x1e & 1) == 0) goto LAB_00273e0c;
            if ((uVar14 >> 0x1d & 1) == 0) goto LAB_00273e60;
            if ((uVar14 >> 0x1c & 1) == 0) goto LAB_00273e58;
            if ((uVar14 >> 0x1b & 1) == 0) goto LAB_00273ed0;
            if ((uVar14 >> 0x1a & 1) == 0) goto LAB_00273fbc;
            if ((uVar14 >> 0x19 & 1) == 0) goto LAB_00273fcc;
            if ((uVar14 >> 0x18 & 1) == 0) goto LAB_00273fc4;
            if ((uVar14 >> 0x17 & 1) == 0) goto LAB_00274134;
            if ((uVar14 >> 0x16 & 1) == 0) goto LAB_0027412c;
            if ((uVar14 >> 0x15 & 1) == 0) goto LAB_00274148;
            if ((uVar14 >> 0x14 & 1) == 0) goto LAB_0027443c;
            if ((uVar14 >> 0x13 & 1) == 0) goto LAB_002741e8;
            if ((uVar14 >> 0x12 & 1) == 0) goto LAB_002741e0;
            if ((uVar14 >> 0x11 & 1) == 0) goto LAB_00274548;
            if ((uVar14 >> 0x10 & 1) == 0) goto LAB_00274540;
            if ((uVar14 >> 0xf & 1) == 0) goto LAB_002744ec;
            uVar18 = 0;
            if ((uVar14 >> 0xe & 1) == 0) goto LAB_00272484;
          }
        }
        else if ((uVar14 & 0xffffc000) != 0) {
          if ((uVar14 >> 0x1e & 1) == 0) {
            if ((uVar14 >> 0x1d & 1) == 0) {
              if ((uVar14 >> 0x1c & 1) == 0) {
                if ((uVar14 >> 0x1b & 1) == 0) {
                  if ((uVar14 >> 0x1a & 1) == 0) {
                    if ((uVar14 >> 0x19 & 1) == 0) {
                      if ((uVar14 >> 0x18 & 1) == 0) {
                        if ((uVar14 >> 0x17 & 1) == 0) {
                          if ((uVar14 >> 0x16 & 1) == 0) {
                            if ((uVar14 >> 0x15 & 1) == 0) {
                              if ((uVar14 >> 0x14 & 1) == 0) {
                                if ((uVar14 >> 0x13 & 1) == 0) {
                                  if ((uVar14 >> 0x12 & 1) == 0) {
                                    if ((uVar14 >> 0x11 & 1) == 0) {
                                      if ((uVar14 >> 0x10 & 1) == 0) {
                                        if ((uVar14 >> 0xf & 1) == 0) {
                                          uVar18 = 0;
                                          if ((uVar14 >> 0xe & 1) != 0) {
LAB_00272484:
                                            uVar18 = 1;
                                          }
                                        }
                                        else {
LAB_002744ec:
                                          uVar18 = 2;
                                        }
                                      }
                                      else {
LAB_00274540:
                                        uVar18 = 3;
                                      }
                                    }
                                    else {
LAB_00274548:
                                      uVar18 = 4;
                                    }
                                  }
                                  else {
LAB_002741e0:
                                    uVar18 = 5;
                                  }
                                }
                                else {
LAB_002741e8:
                                  uVar18 = 6;
                                }
                              }
                              else {
LAB_0027443c:
                                uVar18 = 7;
                              }
                            }
                            else {
LAB_00274148:
                              uVar18 = 8;
                            }
                          }
                          else {
LAB_0027412c:
                            uVar18 = 9;
                          }
                        }
                        else {
LAB_00274134:
                          uVar18 = 10;
                        }
                      }
                      else {
LAB_00273fc4:
                        uVar18 = 0xb;
                      }
                    }
                    else {
LAB_00273fcc:
                      uVar18 = 0xc;
                    }
                  }
                  else {
LAB_00273fbc:
                    uVar18 = 0xd;
                  }
                }
                else {
LAB_00273ed0:
                  uVar18 = 0xe;
                }
              }
              else {
LAB_00273e58:
                uVar18 = 0xf;
              }
            }
            else {
LAB_00273e60:
              uVar18 = 0x10;
            }
          }
          else {
LAB_00273e0c:
            uVar18 = 0x11;
          }
        }
      }
      iVar16 = 0x40000000;
      if (uVar12 < uVar24) {
        uVar12 = uVar24;
      }
      if (uVar12 < uVar18) {
        uVar12 = uVar18;
      }
      switch(uVar12) {
      case 0:
        iVar16 = 1;
        break;
      case 1:
        iVar16 = 2;
        break;
      case 2:
        iVar16 = 4;
        break;
      case 3:
        iVar16 = 8;
        break;
      case 4:
        iVar16 = 0x10;
        break;
      case 5:
        iVar16 = 0x20;
        break;
      case 6:
        iVar16 = 0x40;
        break;
      case 7:
        iVar16 = 0x80;
        break;
      case 8:
        iVar16 = 0x100;
        break;
      case 9:
        iVar16 = 0x200;
        break;
      case 10:
        iVar16 = 0x400;
        break;
      case 0xb:
        iVar16 = 0x800;
        break;
      case 0xc:
        iVar16 = 0x1000;
        break;
      case 0xd:
        iVar16 = 0x2000;
        break;
      case 0xe:
        iVar16 = 0x4000;
        break;
      case 0xf:
        iVar16 = 0x8000;
        break;
      case 0x10:
        iVar16 = 0x10000;
        break;
      case 0x11:
        iVar16 = 0x20000;
      }
      iVar20 = 0;
      if (iVar16 != 0) {
        iVar20 = (int)uVar19 / iVar16;
      }
      iVar25 = 0;
      if (iVar16 != 0) {
        iVar25 = (int)uVar15 / iVar16;
      }
      iVar11 = 0;
      if (iVar16 != 0) {
        iVar11 = (int)uVar14 / iVar16;
      }
      iVar20 = iVar20 * iVar20 + iVar25 * iVar25 + iVar11 * iVar11;
      uVar24 = 0;
      if (iVar20 != 0) {
        if (iVar20 == 0x7fffffff) {
          iVar20 = 0x7ffffffe;
        }
        iVar25 = 0;
        if (iVar20 != 0) {
          iVar25 = iVar20 / iVar20;
        }
        iVar25 = (iVar20 + iVar25) / 2;
        iVar11 = iVar20;
        if (iVar25 < iVar20) {
          do {
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
          } while (iVar25 < iVar17);
        }
        uVar24 = iVar11 * iVar16;
      }
      if ((int)uVar14 < (int)uVar19) {
        uVar14 = uVar19;
      }
      *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x2c);
      if ((int)uVar14 < (int)uVar15) {
        uVar14 = uVar15;
      }
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x34);
      if ((int)uVar14 < (int)uVar24) {
        uVar14 = uVar24;
      }
      if (uVar14 == 0) goto LAB_0026fe48;
      uVar19 = 0;
      if (uVar15 != 0) {
        if ((int)uVar15 < 0) {
          if ((uVar15 & 0xffff8000) != 0xffff8000) {
            if ((uVar15 >> 0x1e & 1) == 0) goto LAB_002749cc;
            if ((uVar15 >> 0x1d & 1) == 0) goto LAB_002749e4;
            if ((uVar15 >> 0x1c & 1) == 0) goto LAB_002749d8;
            if ((uVar15 >> 0x1b & 1) == 0) goto LAB_002749fc;
            if ((uVar15 >> 0x1a & 1) == 0) goto LAB_002749f0;
            if ((uVar15 >> 0x19 & 1) == 0) goto LAB_00274b28;
            if ((uVar15 >> 0x18 & 1) == 0) goto LAB_00274b1c;
            if ((uVar15 >> 0x17 & 1) == 0) goto LAB_00274cc4;
            if ((uVar15 >> 0x16 & 1) == 0) goto LAB_00274cb8;
            if ((uVar15 >> 0x15 & 1) == 0) goto LAB_00274ddc;
            if ((uVar15 >> 0x14 & 1) == 0) goto LAB_00274dd0;
            if ((uVar15 >> 0x13 & 1) == 0) goto LAB_00274de8;
            if ((uVar15 >> 0x12 & 1) == 0) goto LAB_00275244;
            if ((uVar15 >> 0x11 & 1) == 0) goto LAB_00274fc8;
            if ((uVar15 >> 0x10 & 1) == 0) goto LAB_00274fbc;
            uVar19 = 0;
            if ((uVar15 >> 0xf & 1) == 0) goto LAB_00273368;
          }
        }
        else if ((uVar15 & 0xffff8000) != 0) {
          if ((uVar15 >> 0x1e & 1) == 0) {
            if ((uVar15 >> 0x1d & 1) == 0) {
              if ((uVar15 >> 0x1c & 1) == 0) {
                if ((uVar15 >> 0x1b & 1) == 0) {
                  if ((uVar15 >> 0x1a & 1) == 0) {
                    if ((uVar15 >> 0x19 & 1) == 0) {
                      if ((uVar15 >> 0x18 & 1) == 0) {
                        if ((uVar15 >> 0x17 & 1) == 0) {
                          if ((uVar15 >> 0x16 & 1) == 0) {
                            if ((uVar15 >> 0x15 & 1) == 0) {
                              if ((uVar15 >> 0x14 & 1) == 0) {
                                if ((uVar15 >> 0x13 & 1) == 0) {
                                  if ((uVar15 >> 0x12 & 1) == 0) {
                                    if ((uVar15 >> 0x11 & 1) == 0) {
                                      if ((uVar15 >> 0x10 & 1) == 0) {
                                        if ((uVar15 >> 0xf & 1) != 0) {
LAB_00273368:
                                          uVar19 = 1;
                                        }
                                      }
                                      else {
LAB_00274fbc:
                                        uVar19 = 2;
                                      }
                                    }
                                    else {
LAB_00274fc8:
                                      uVar19 = 3;
                                    }
                                  }
                                  else {
LAB_00275244:
                                    uVar19 = 4;
                                  }
                                }
                                else {
LAB_00274de8:
                                  uVar19 = 5;
                                }
                              }
                              else {
LAB_00274dd0:
                                uVar19 = 6;
                              }
                            }
                            else {
LAB_00274ddc:
                              uVar19 = 7;
                            }
                          }
                          else {
LAB_00274cb8:
                            uVar19 = 8;
                          }
                        }
                        else {
LAB_00274cc4:
                          uVar19 = 9;
                        }
                      }
                      else {
LAB_00274b1c:
                        uVar19 = 10;
                      }
                    }
                    else {
LAB_00274b28:
                      uVar19 = 0xb;
                    }
                  }
                  else {
LAB_002749f0:
                    uVar19 = 0xc;
                  }
                }
                else {
LAB_002749fc:
                  uVar19 = 0xd;
                }
              }
              else {
LAB_002749d8:
                uVar19 = 0xe;
              }
            }
            else {
LAB_002749e4:
              uVar19 = 0xf;
            }
          }
          else {
LAB_002749cc:
            uVar19 = 0x10;
          }
        }
      }
      uVar12 = *(uint *)(param_3 + 4);
      uVar24 = 0;
      if (uVar12 != 0) {
        if ((int)uVar12 < 0) {
          if ((uVar12 & 0xffff8000) != 0xffff8000) {
            if ((uVar12 >> 0x1e & 1) == 0) goto LAB_00274a94;
            if ((uVar12 >> 0x1d & 1) == 0) goto LAB_00274aac;
            if ((uVar12 >> 0x1c & 1) == 0) goto LAB_00274aa0;
            if ((uVar12 >> 0x1b & 1) == 0) goto LAB_00274ac4;
            if ((uVar12 >> 0x1a & 1) == 0) goto LAB_00274ab8;
            if ((uVar12 >> 0x19 & 1) == 0) goto LAB_00274bd8;
            if ((uVar12 >> 0x18 & 1) == 0) goto LAB_00274bcc;
            if ((uVar12 >> 0x17 & 1) == 0) goto LAB_00274d2c;
            if ((uVar12 >> 0x16 & 1) == 0) goto LAB_00274d20;
            if ((uVar12 >> 0x15 & 1) == 0) goto LAB_00274d44;
            if ((uVar12 >> 0x14 & 1) == 0) goto LAB_00274d38;
            if ((uVar12 >> 0x13 & 1) == 0) goto LAB_00274d94;
            if ((uVar12 >> 0x12 & 1) == 0) goto LAB_00274fd4;
            if ((uVar12 >> 0x11 & 1) == 0) goto LAB_00275094;
            if ((uVar12 >> 0x10 & 1) == 0) goto LAB_00275088;
            uVar24 = 0;
            if ((uVar12 >> 0xf & 1) == 0) goto LAB_002733c4;
          }
        }
        else if ((uVar12 & 0xffff8000) != 0) {
          if ((uVar12 >> 0x1e & 1) == 0) {
            if ((uVar12 >> 0x1d & 1) == 0) {
              if ((uVar12 >> 0x1c & 1) == 0) {
                if ((uVar12 >> 0x1b & 1) == 0) {
                  if ((uVar12 >> 0x1a & 1) == 0) {
                    if ((uVar12 >> 0x19 & 1) == 0) {
                      if ((uVar12 >> 0x18 & 1) == 0) {
                        if ((uVar12 >> 0x17 & 1) == 0) {
                          if ((uVar12 >> 0x16 & 1) == 0) {
                            if ((uVar12 >> 0x15 & 1) == 0) {
                              if ((uVar12 >> 0x14 & 1) == 0) {
                                if ((uVar12 >> 0x13 & 1) == 0) {
                                  if ((uVar12 >> 0x12 & 1) == 0) {
                                    if ((uVar12 >> 0x11 & 1) == 0) {
                                      if ((uVar12 >> 0x10 & 1) == 0) {
                                        uVar24 = 0;
                                        if ((uVar12 >> 0xf & 1) != 0) {
LAB_002733c4:
                                          uVar24 = 1;
                                        }
                                      }
                                      else {
LAB_00275088:
                                        uVar24 = 2;
                                      }
                                    }
                                    else {
LAB_00275094:
                                      uVar24 = 3;
                                    }
                                  }
                                  else {
LAB_00274fd4:
                                    uVar24 = 4;
                                  }
                                }
                                else {
LAB_00274d94:
                                  uVar24 = 5;
                                }
                              }
                              else {
LAB_00274d38:
                                uVar24 = 6;
                              }
                            }
                            else {
LAB_00274d44:
                              uVar24 = 7;
                            }
                          }
                          else {
LAB_00274d20:
                            uVar24 = 8;
                          }
                        }
                        else {
LAB_00274d2c:
                          uVar24 = 9;
                        }
                      }
                      else {
LAB_00274bcc:
                        uVar24 = 10;
                      }
                    }
                    else {
LAB_00274bd8:
                      uVar24 = 0xb;
                    }
                  }
                  else {
LAB_00274ab8:
                    uVar24 = 0xc;
                  }
                }
                else {
LAB_00274ac4:
                  uVar24 = 0xd;
                }
              }
              else {
LAB_00274aa0:
                uVar24 = 0xe;
              }
            }
            else {
LAB_00274aac:
              uVar24 = 0xf;
            }
          }
          else {
LAB_00274a94:
            uVar24 = 0x10;
          }
        }
      }
      uVar18 = *(uint *)(param_3 + 8);
      uVar10 = 0;
      if (uVar18 != 0) {
        if ((int)uVar18 < 0) {
          if ((uVar18 & 0xffff8000) != 0xffff8000) {
            if ((uVar18 >> 0x1e & 1) == 0) goto LAB_0027493c;
            if ((uVar18 >> 0x1d & 1) == 0) goto LAB_00274a84;
            if ((uVar18 >> 0x1c & 1) == 0) goto LAB_00274a7c;
            if ((uVar18 >> 0x1b & 1) == 0) goto LAB_00274a74;
            if ((uVar18 >> 0x1a & 1) == 0) goto LAB_00274a6c;
            if ((uVar18 >> 0x19 & 1) == 0) goto LAB_00274b3c;
            if ((uVar18 >> 0x18 & 1) == 0) goto LAB_00274b34;
            if ((uVar18 >> 0x17 & 1) == 0) goto LAB_00274d18;
            if ((uVar18 >> 0x16 & 1) == 0) goto LAB_00274d10;
            if ((uVar18 >> 0x15 & 1) == 0) goto LAB_00274dc0;
            if ((uVar18 >> 0x14 & 1) == 0) goto LAB_00274db8;
            if ((uVar18 >> 0x13 & 1) == 0) goto LAB_00274dc8;
            if ((uVar18 >> 0x12 & 1) == 0) goto LAB_00274fe0;
            if ((uVar18 >> 0x11 & 1) == 0) goto LAB_00274ff0;
            if ((uVar18 >> 0x10 & 1) == 0) goto LAB_00274fe8;
            uVar10 = 0;
            if ((uVar18 >> 0xf & 1) == 0) goto LAB_00273420;
          }
        }
        else if ((uVar18 & 0xffff8000) != 0) {
          if ((uVar18 >> 0x1e & 1) == 0) {
            if ((uVar18 >> 0x1d & 1) == 0) {
              if ((uVar18 >> 0x1c & 1) == 0) {
                if ((uVar18 >> 0x1b & 1) == 0) {
                  if ((uVar18 >> 0x1a & 1) == 0) {
                    if ((uVar18 >> 0x19 & 1) == 0) {
                      if ((uVar18 >> 0x18 & 1) == 0) {
                        if ((uVar18 >> 0x17 & 1) == 0) {
                          if ((uVar18 >> 0x16 & 1) == 0) {
                            if ((uVar18 >> 0x15 & 1) == 0) {
                              if ((uVar18 >> 0x14 & 1) == 0) {
                                if ((uVar18 >> 0x13 & 1) == 0) {
                                  if ((uVar18 >> 0x12 & 1) == 0) {
                                    if ((uVar18 >> 0x11 & 1) == 0) {
                                      if ((uVar18 >> 0x10 & 1) == 0) {
                                        uVar10 = 0;
                                        if ((uVar18 >> 0xf & 1) != 0) {
LAB_00273420:
                                          uVar10 = 1;
                                        }
                                      }
                                      else {
LAB_00274fe8:
                                        uVar10 = 2;
                                      }
                                    }
                                    else {
LAB_00274ff0:
                                      uVar10 = 3;
                                    }
                                  }
                                  else {
LAB_00274fe0:
                                    uVar10 = 4;
                                  }
                                }
                                else {
LAB_00274dc8:
                                  uVar10 = 5;
                                }
                              }
                              else {
LAB_00274db8:
                                uVar10 = 6;
                              }
                            }
                            else {
LAB_00274dc0:
                              uVar10 = 7;
                            }
                          }
                          else {
LAB_00274d10:
                            uVar10 = 8;
                          }
                        }
                        else {
LAB_00274d18:
                          uVar10 = 9;
                        }
                      }
                      else {
LAB_00274b34:
                        uVar10 = 10;
                      }
                    }
                    else {
LAB_00274b3c:
                      uVar10 = 0xb;
                    }
                  }
                  else {
LAB_00274a6c:
                    uVar10 = 0xc;
                  }
                }
                else {
LAB_00274a74:
                  uVar10 = 0xd;
                }
              }
              else {
LAB_00274a7c:
                uVar10 = 0xe;
              }
            }
            else {
LAB_00274a84:
              uVar10 = 0xf;
            }
          }
          else {
LAB_0027493c:
            uVar10 = 0x10;
          }
        }
      }
      if (uVar24 < uVar19) {
        uVar24 = uVar19;
      }
      if (uVar24 < uVar10) {
        uVar24 = uVar10;
      }
      switch(uVar24) {
      case 1:
        iVar16 = 2;
        break;
      case 2:
        iVar16 = 4;
        break;
      case 3:
        iVar16 = 8;
        break;
      case 4:
        iVar16 = 0x10;
        break;
      case 5:
        iVar16 = 0x20;
        break;
      case 6:
        iVar16 = 0x40;
        break;
      case 7:
        iVar16 = 0x80;
        break;
      case 8:
        iVar16 = 0x100;
        break;
      case 9:
        iVar16 = 0x200;
        break;
      case 10:
        iVar16 = 0x400;
        break;
      case 0xb:
        iVar16 = 0x800;
        break;
      case 0xc:
        iVar16 = 0x1000;
        break;
      case 0xd:
        iVar16 = 0x2000;
        break;
      case 0xe:
        iVar16 = 0x4000;
        break;
      case 0xf:
        iVar16 = 0x8000;
        break;
      case 0x10:
        iVar16 = 0x10000;
        break;
      default:
        iVar16 = 1;
        uVar19 = uVar14;
        goto LAB_002705f0;
      }
      uVar19 = 0;
      if (iVar16 != 0) {
        uVar19 = (int)uVar14 / iVar16;
      }
      if (uVar19 != 0) {
LAB_002705f0:
        if (uVar15 == 0) {
          uVar13 = (ulong)*(uint *)param_3;
        }
        else {
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar15 / iVar16;
          }
          uVar13 = 0;
          if ((long)(int)uVar19 != 0) {
            uVar13 = ((long)iVar20 * 0x7fff) / (long)(int)uVar19;
          }
          *(int *)param_3 = (int)uVar13;
        }
        uVar15 = (uint)uVar13;
        uVar24 = 0;
        if (uVar12 != 0) {
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar12 / iVar16;
          }
          uVar24 = 0;
          if ((long)(int)uVar19 != 0) {
            uVar24 = (uint)(((long)iVar20 * 0x7fff) / (long)(int)uVar19);
          }
          *(uint *)(param_3 + 4) = uVar24;
        }
        if (uVar18 == 0) {
          if (uVar15 == 0) {
LAB_00270720:
            iVar16 = 0;
            if (uVar24 == 0) {
              iVar16 = 0;
              iVar20 = 0;
              goto LAB_0026fe54;
            }
LAB_00271a4c:
            iVar20 = 0x5a;
            if ((int)uVar24 < 0) {
              iVar20 = -0x5a;
            }
            goto LAB_0026fe54;
          }
LAB_0027156c:
          iVar16 = -0x5a;
          if (-1 < (int)uVar15) {
            iVar16 = 0x5a;
          }
          if (uVar24 == 0) {
            uVar21 = 0;
          }
          else {
            uVar21 = 0;
            if (uVar15 == 0) goto LAB_00271a4c;
          }
          goto LAB_00271504;
        }
        iVar20 = 0;
        if (iVar16 != 0) {
          iVar20 = (int)uVar18 / iVar16;
        }
        uVar21 = 0;
        if ((long)(int)uVar19 != 0) {
          uVar21 = ((long)iVar20 * 0x7fff) / (long)(int)uVar19;
        }
        uVar19 = (uint)uVar21;
        *(uint *)(param_3 + 8) = uVar19;
        if (uVar15 != 0) {
          if (uVar19 == 0) goto LAB_0027156c;
          iVar16 = 0;
          if (uVar15 != 0 || uVar19 != 0) goto LAB_00270644;
          goto LAB_00271020;
        }
        if (uVar19 == 0) goto LAB_00270720;
LAB_00270644:
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffff8000) == 0xffff8000) goto LAB_00273440;
          if ((uVar19 >> 0x1e & 1) == 0) {
LAB_0027546c:
            uVar12 = 0x10;
          }
          else if ((uVar19 >> 0x1d & 1) == 0) {
LAB_00275460:
            uVar12 = 0xf;
          }
          else if ((uVar19 >> 0x1c & 1) == 0) {
LAB_00275334:
            uVar12 = 0xe;
          }
          else if ((uVar19 >> 0x1b & 1) == 0) {
LAB_00275328:
            uVar12 = 0xd;
          }
          else if ((uVar19 >> 0x1a & 1) == 0) {
LAB_0027531c:
            uVar12 = 0xc;
          }
          else if ((uVar19 >> 0x19 & 1) == 0) {
LAB_00275310:
            uVar12 = 0xb;
          }
          else if ((uVar19 >> 0x18 & 1) == 0) {
LAB_00275064:
            uVar12 = 10;
          }
          else if ((uVar19 >> 0x17 & 1) == 0) {
LAB_00275058:
            uVar12 = 9;
          }
          else if ((uVar19 >> 0x16 & 1) == 0) {
LAB_002756f0:
            uVar12 = 8;
          }
          else if ((uVar19 >> 0x15 & 1) == 0) {
LAB_002756e4:
            uVar12 = 7;
          }
          else if ((uVar19 >> 0x14 & 1) == 0) {
LAB_002756d0:
            uVar12 = 6;
          }
          else if ((uVar19 >> 0x13 & 1) == 0) {
LAB_002756c4:
            uVar12 = 5;
          }
          else if ((uVar19 >> 0x12 & 1) == 0) {
LAB_002756b8:
            uVar12 = 4;
          }
          else if ((uVar19 >> 0x11 & 1) == 0) {
LAB_002756ac:
            uVar12 = 3;
          }
          else if ((uVar19 >> 0x10 & 1) == 0) {
LAB_002757d8:
            uVar12 = 2;
          }
          else {
            if ((uVar19 >> 0xf & 1) != 0) goto LAB_00270694;
LAB_002714d8:
            uVar12 = 1;
          }
joined_r0x002714dc:
          if (uVar15 != 0) goto LAB_00270698;
          goto LAB_002706f0;
        }
        if ((uVar21 & 0xffff8000) != 0) {
          if ((uVar19 >> 0x1e & 1) != 0) goto LAB_0027546c;
          if ((uVar19 >> 0x1d & 1) != 0) goto LAB_00275460;
          if ((uVar19 >> 0x1c & 1) != 0) goto LAB_00275334;
          if ((uVar19 >> 0x1b & 1) != 0) goto LAB_00275328;
          if ((uVar19 >> 0x1a & 1) != 0) goto LAB_0027531c;
          if ((uVar19 >> 0x19 & 1) != 0) goto LAB_00275310;
          if ((uVar19 >> 0x18 & 1) != 0) goto LAB_00275064;
          if ((uVar19 >> 0x17 & 1) != 0) goto LAB_00275058;
          if ((uVar19 >> 0x16 & 1) != 0) goto LAB_002756f0;
          if ((uVar19 >> 0x15 & 1) != 0) goto LAB_002756e4;
          if ((uVar19 >> 0x14 & 1) != 0) goto LAB_002756d0;
          if ((uVar19 >> 0x13 & 1) != 0) goto LAB_002756c4;
          if ((uVar19 >> 0x12 & 1) != 0) goto LAB_002756b8;
          if ((uVar19 >> 0x11 & 1) != 0) goto LAB_002756ac;
          if ((uVar19 >> 0x10 & 1) != 0) goto LAB_002757d8;
          if ((uVar19 >> 0xf & 1) != 0) goto LAB_002714d8;
LAB_00270694:
          uVar12 = 0;
          goto joined_r0x002714dc;
        }
LAB_00273440:
        uVar12 = 0;
        if (uVar15 == 0) {
          if ((int)uVar19 < 0) {
            iVar20 = 0;
LAB_002734dc:
            iVar16 = -uVar19;
            if (iVar16 < iVar20) {
              uVar3 = 0;
              if ((long)iVar20 != 0) {
                uVar3 = ((long)iVar16 * 0x7fff) / (long)iVar20;
              }
              iVar16 = *(int *)(PTR_gasdAtan_00567958 + (uVar3 >> 9 & 0x3f) * 4) + 0x5a;
            }
            else {
              uVar3 = 0;
              if ((long)iVar16 != 0) {
                uVar3 = ((long)iVar20 * 0x7fff) / (long)iVar16;
              }
              uVar2 = uVar3 + 0x1ff;
              if (-1 < (long)uVar3) {
                uVar2 = uVar3;
              }
              iVar16 = 0xb4 - *(int *)(PTR_gasdAtan_00567958 + (uVar2 >> 9 & 0x3f) * 4);
            }
          }
          else {
            iVar20 = 0;
LAB_00273454:
            uVar3 = 0;
            if ((long)(int)uVar19 != 0) {
              uVar3 = ((long)iVar20 * 0x7fff) / (long)(int)uVar19;
            }
            iVar16 = *(int *)(PTR_gasdAtan_00567958 + (uVar3 >> 9 & 0x3f) * 4);
          }
        }
        else {
LAB_00270698:
          if ((int)uVar15 < 0) {
            if ((uVar15 & 0xffff8000) != 0xffff8000) {
              if ((uVar15 >> 0x1e & 1) == 0) goto LAB_00275480;
              if ((uVar15 >> 0x1d & 1) == 0) goto LAB_00275490;
              if ((uVar15 >> 0x1c & 1) == 0) goto LAB_00275488;
              if ((uVar15 >> 0x1b & 1) == 0) goto LAB_002754b0;
              if ((uVar15 >> 0x1a & 1) == 0) goto LAB_002754a8;
              if ((uVar15 >> 0x19 & 1) == 0) goto LAB_002754a0;
              if ((uVar15 >> 0x18 & 1) == 0) goto LAB_00275498;
              if ((uVar15 >> 0x17 & 1) == 0) goto LAB_002754b8;
              if ((uVar15 >> 0x16 & 1) == 0) goto LAB_00275594;
              if ((uVar15 >> 0x15 & 1) == 0) goto LAB_0027575c;
              if ((uVar15 >> 0x14 & 1) == 0) goto LAB_00275754;
              if ((uVar15 >> 0x13 & 1) == 0) goto LAB_0027577c;
              if ((uVar15 >> 0x12 & 1) == 0) goto LAB_00275774;
              if ((uVar15 >> 0x11 & 1) == 0) goto LAB_0027576c;
              if ((uVar15 >> 0x10 & 1) == 0) goto LAB_00275764;
              uVar18 = 0;
              if ((uVar15 >> 0xf & 1) == 0) goto LAB_00273bb0;
              goto LAB_002706e8;
            }
LAB_002706f0:
            uVar18 = uVar12;
          }
          else {
            if ((uVar13 & 0xffff8000) == 0) goto LAB_002706f0;
            if ((uVar15 >> 0x1e & 1) == 0) {
              if ((uVar15 >> 0x1d & 1) == 0) {
                if ((uVar15 >> 0x1c & 1) == 0) {
                  if ((uVar15 >> 0x1b & 1) == 0) {
                    if ((uVar15 >> 0x1a & 1) == 0) {
                      if ((uVar15 >> 0x19 & 1) == 0) {
                        if ((uVar15 >> 0x18 & 1) == 0) {
                          if ((uVar15 >> 0x17 & 1) == 0) {
                            if ((uVar15 >> 0x16 & 1) == 0) {
                              if ((uVar15 >> 0x15 & 1) == 0) {
                                if ((uVar15 >> 0x14 & 1) == 0) {
                                  if ((uVar15 >> 0x13 & 1) == 0) {
                                    if ((uVar15 >> 0x12 & 1) == 0) {
                                      if ((uVar15 >> 0x11 & 1) == 0) {
                                        if ((uVar15 >> 0x10 & 1) == 0) {
                                          uVar18 = 0;
                                          if ((uVar15 >> 0xf & 1) != 0) {
LAB_00273bb0:
                                            uVar18 = 1;
                                          }
                                        }
                                        else {
LAB_00275764:
                                          uVar18 = 2;
                                        }
                                      }
                                      else {
LAB_0027576c:
                                        uVar18 = 3;
                                      }
                                    }
                                    else {
LAB_00275774:
                                      uVar18 = 4;
                                    }
                                  }
                                  else {
LAB_0027577c:
                                    uVar18 = 5;
                                  }
                                }
                                else {
LAB_00275754:
                                  uVar18 = 6;
                                }
                              }
                              else {
LAB_0027575c:
                                uVar18 = 7;
                              }
                            }
                            else {
LAB_00275594:
                              uVar18 = 8;
                            }
                          }
                          else {
LAB_002754b8:
                            uVar18 = 9;
                          }
                        }
                        else {
LAB_00275498:
                          uVar18 = 10;
                        }
                      }
                      else {
LAB_002754a0:
                        uVar18 = 0xb;
                      }
                    }
                    else {
LAB_002754a8:
                      uVar18 = 0xc;
                    }
                  }
                  else {
LAB_002754b0:
                    uVar18 = 0xd;
                  }
                }
                else {
LAB_00275488:
                  uVar18 = 0xe;
                }
              }
              else {
LAB_00275490:
                uVar18 = 0xf;
              }
            }
            else {
LAB_00275480:
              uVar18 = 0x10;
            }
LAB_002706e8:
            if (uVar18 <= uVar12) goto LAB_002706f0;
          }
          iVar16 = 1;
          switch(uVar18) {
          case 1:
            iVar16 = 2;
            break;
          case 2:
            iVar16 = 4;
            break;
          case 3:
            iVar16 = 8;
            break;
          case 4:
            iVar16 = 0x10;
            break;
          case 5:
            iVar16 = 0x20;
            break;
          case 6:
            iVar16 = 0x40;
            break;
          case 7:
            iVar16 = 0x80;
            break;
          case 8:
            iVar16 = 0x100;
            break;
          case 9:
            iVar16 = 0x200;
            break;
          case 10:
            iVar16 = 0x400;
            break;
          case 0xb:
            iVar16 = 0x800;
            break;
          case 0xc:
            iVar16 = 0x1000;
            break;
          case 0xd:
            iVar16 = 0x2000;
            break;
          case 0xe:
            iVar16 = 0x4000;
            break;
          case 0xf:
            iVar16 = 0x8000;
            break;
          case 0x10:
            iVar16 = 0x10000;
          }
          uVar12 = 0;
          if (iVar16 != 0) {
            uVar12 = (int)uVar19 / iVar16;
          }
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar15 / iVar16;
          }
          uVar19 = uVar12;
          if ((int)uVar12 < 0) {
            if (-1 < iVar20) goto LAB_002734dc;
            iVar20 = -iVar20;
            iVar16 = -uVar12;
            if (iVar16 < iVar20) {
              uVar3 = 0;
              if ((long)iVar20 != 0) {
                uVar3 = ((long)iVar16 * 0x7fff) / (long)iVar20;
              }
              iVar16 = -0x5a - *(int *)(PTR_gasdAtan_00567958 + (uVar3 >> 9 & 0x3f) * 4);
            }
            else {
              lVar4 = 0;
              if ((long)iVar16 != 0) {
                lVar4 = ((long)iVar20 * 0x7fff) / (long)iVar16;
              }
              iVar16 = *(int *)(PTR_gasdAtan_00567958 + (lVar4 / 0x200 & 0x3fU) * 4) + -0xb4;
            }
          }
          else if (iVar20 < 0) {
            iVar20 = -iVar20;
            if ((int)uVar12 < iVar20) {
              uVar3 = 0;
              if ((long)iVar20 != 0) {
                uVar3 = ((long)(int)uVar12 * 0x7fff) / (long)iVar20;
              }
              iVar16 = *(int *)(PTR_gasdAtan_00567958 + (uVar3 >> 9 & 0x3f) * 4) + -0x5a;
            }
            else {
              uVar3 = 0;
              if ((long)(int)uVar12 != 0) {
                uVar3 = ((long)iVar20 * 0x7fff) / (long)(int)uVar12;
              }
              uVar2 = uVar3 + 0x1ff;
              if (-1 < (long)uVar3) {
                uVar2 = uVar3;
              }
              iVar16 = -*(int *)(PTR_gasdAtan_00567958 + (uVar2 >> 9 & 0x3f) * 4);
            }
          }
          else {
            if (iVar20 <= (int)uVar12) goto LAB_00273454;
            uVar3 = 0;
            if ((long)iVar20 != 0) {
              uVar3 = ((long)(int)uVar12 * 0x7fff) / (long)iVar20;
            }
            iVar16 = 0x5a - *(int *)(PTR_gasdAtan_00567958 + (uVar3 >> 9 & 0x3f) * 4);
          }
        }
LAB_00271020:
        uVar21 = uVar21 & 0xffffffff;
        if (uVar24 == 0) {
          if (uVar15 != 0) goto LAB_00271504;
LAB_0027102c:
          uVar19 = 0;
          uVar15 = 0;
LAB_00271034:
          uVar18 = (uint)uVar21;
          if ((int)uVar18 < 0) {
            if ((uVar18 & 0xffffc000) == 0xffffc000) {
              uVar12 = 0;
            }
            else {
              if ((uVar18 >> 0x1e & 1) == 0) goto LAB_002741c4;
              if ((uVar18 >> 0x1d & 1) == 0) goto LAB_00274288;
              if ((uVar18 >> 0x1c & 1) == 0) goto LAB_002742a0;
              if ((uVar18 >> 0x1b & 1) == 0) goto LAB_00274294;
              if ((uVar18 >> 0x1a & 1) == 0) goto LAB_002742ac;
              if ((uVar18 >> 0x19 & 1) == 0) goto LAB_00274640;
              if ((uVar18 >> 0x18 & 1) == 0) goto LAB_0027464c;
              if ((uVar18 >> 0x17 & 1) == 0) goto LAB_00274710;
              if ((uVar18 >> 0x16 & 1) == 0) goto LAB_00274780;
              if ((uVar18 >> 0x15 & 1) == 0) goto LAB_002747ec;
              if ((uVar18 >> 0x14 & 1) == 0) goto LAB_00274884;
              if ((uVar18 >> 0x13 & 1) == 0) goto LAB_00274878;
              if ((uVar18 >> 0x12 & 1) == 0) goto LAB_00274848;
              if ((uVar18 >> 0x11 & 1) == 0) goto LAB_0027483c;
              if ((uVar18 >> 0x10 & 1) == 0) goto LAB_00274830;
              if ((uVar18 >> 0xf & 1) == 0) goto LAB_00274c0c;
              uVar12 = 0;
              if ((uVar18 >> 0xe & 1) == 0) goto LAB_00272b1c;
            }
          }
          else {
            uVar12 = 0;
            if ((uVar21 & 0xffffc000) != 0) {
              if ((uVar18 >> 0x1e & 1) == 0) {
                if ((uVar18 >> 0x1d & 1) == 0) {
                  if ((uVar18 >> 0x1c & 1) == 0) {
                    if ((uVar18 >> 0x1b & 1) == 0) {
                      if ((uVar18 >> 0x1a & 1) == 0) {
                        if ((uVar18 >> 0x19 & 1) == 0) {
                          if ((uVar18 >> 0x18 & 1) == 0) {
                            if ((uVar18 >> 0x17 & 1) == 0) {
                              if ((uVar18 >> 0x16 & 1) == 0) {
                                if ((uVar18 >> 0x15 & 1) == 0) {
                                  if ((uVar18 >> 0x14 & 1) == 0) {
                                    if ((uVar18 >> 0x13 & 1) == 0) {
                                      if ((uVar18 >> 0x12 & 1) == 0) {
                                        if ((uVar18 >> 0x11 & 1) == 0) {
                                          if ((uVar18 >> 0x10 & 1) == 0) {
                                            if ((uVar18 >> 0xf & 1) == 0) {
                                              if ((uVar18 >> 0xe & 1) != 0) {
LAB_00272b1c:
                                                uVar12 = 1;
                                              }
                                            }
                                            else {
LAB_00274c0c:
                                              uVar12 = 2;
                                            }
                                          }
                                          else {
LAB_00274830:
                                            uVar12 = 3;
                                          }
                                        }
                                        else {
LAB_0027483c:
                                          uVar12 = 4;
                                        }
                                      }
                                      else {
LAB_00274848:
                                        uVar12 = 5;
                                      }
                                    }
                                    else {
LAB_00274878:
                                      uVar12 = 6;
                                    }
                                  }
                                  else {
LAB_00274884:
                                    uVar12 = 7;
                                  }
                                }
                                else {
LAB_002747ec:
                                  uVar12 = 8;
                                }
                              }
                              else {
LAB_00274780:
                                uVar12 = 9;
                              }
                            }
                            else {
LAB_00274710:
                              uVar12 = 10;
                            }
                          }
                          else {
LAB_0027464c:
                            uVar12 = 0xb;
                          }
                        }
                        else {
LAB_00274640:
                          uVar12 = 0xc;
                        }
                      }
                      else {
LAB_002742ac:
                        uVar12 = 0xd;
                      }
                    }
                    else {
LAB_00274294:
                      uVar12 = 0xe;
                    }
                  }
                  else {
LAB_002742a0:
                    uVar12 = 0xf;
                  }
                }
                else {
LAB_00274288:
                  uVar12 = 0x10;
                }
              }
              else {
LAB_002741c4:
                uVar12 = 0x11;
              }
            }
          }
LAB_00271088:
          iVar20 = 1;
          if (uVar12 < uVar19) {
            uVar12 = uVar19;
          }
          switch(uVar12) {
          case 1:
            iVar20 = 2;
            break;
          case 2:
            iVar20 = 4;
            break;
          case 3:
            iVar20 = 8;
            break;
          case 4:
            iVar20 = 0x10;
            break;
          case 5:
            iVar20 = 0x20;
            break;
          case 6:
            iVar20 = 0x40;
            break;
          case 7:
            iVar20 = 0x80;
            break;
          case 8:
            iVar20 = 0x100;
            break;
          case 9:
            iVar20 = 0x200;
            break;
          case 10:
            iVar20 = 0x400;
            break;
          case 0xb:
            iVar20 = 0x800;
            break;
          case 0xc:
            iVar20 = 0x1000;
            break;
          case 0xd:
            iVar20 = 0x2000;
            break;
          case 0xe:
            iVar20 = 0x4000;
            break;
          case 0xf:
            iVar20 = 0x8000;
            break;
          case 0x10:
            iVar20 = 0x10000;
            break;
          case 0x11:
            iVar20 = 0x20000;
          }
        }
        else {
          if (uVar15 == 0) goto LAB_0027102c;
LAB_00271504:
          if (-1 < (int)uVar15) {
            if ((uVar13 & 0xffffc000) == 0) goto LAB_002725b4;
            if ((uVar15 >> 0x1e & 1) == 0) {
              if ((uVar15 >> 0x1d & 1) == 0) {
                if ((uVar15 >> 0x1c & 1) == 0) {
                  if ((uVar15 >> 0x1b & 1) == 0) {
                    if ((uVar15 >> 0x1a & 1) == 0) {
                      if ((uVar15 >> 0x19 & 1) == 0) {
                        if ((uVar15 >> 0x18 & 1) == 0) {
                          if ((uVar15 >> 0x17 & 1) == 0) {
                            if ((uVar15 >> 0x16 & 1) == 0) {
                              if ((uVar15 >> 0x15 & 1) == 0) {
                                if ((uVar15 >> 0x14 & 1) == 0) {
                                  if ((uVar15 >> 0x13 & 1) == 0) {
                                    if ((uVar15 >> 0x12 & 1) == 0) {
                                      if ((uVar15 >> 0x11 & 1) == 0) {
                                        if ((uVar15 >> 0x10 & 1) == 0) {
                                          if ((uVar15 >> 0xf & 1) == 0) {
                                            uVar19 = 0;
                                            if ((uVar15 >> 0xe & 1) != 0) {
LAB_00272b7c:
                                              uVar19 = 1;
                                            }
                                          }
                                          else {
LAB_00274cd0:
                                            uVar19 = 2;
                                          }
                                        }
                                        else {
LAB_00274a64:
                                          uVar19 = 3;
                                        }
                                      }
                                      else {
LAB_002748d4:
                                        uVar19 = 4;
                                      }
                                    }
                                    else {
LAB_002748dc:
                                      uVar19 = 5;
                                    }
                                  }
                                  else {
LAB_002748e4:
                                    uVar19 = 6;
                                  }
                                }
                                else {
LAB_002748ec:
                                  uVar19 = 7;
                                }
                              }
                              else {
LAB_00274864:
                                uVar19 = 8;
                              }
                            }
                            else {
LAB_002747d8:
                              uVar19 = 9;
                            }
                          }
                          else {
LAB_00274734:
                            uVar19 = 10;
                          }
                        }
                        else {
LAB_002744f4:
                          uVar19 = 0xb;
                        }
                      }
                      else {
LAB_00274474:
                        uVar19 = 0xc;
                      }
                    }
                    else {
LAB_00274424:
                      uVar19 = 0xd;
                    }
                  }
                  else {
LAB_0027442c:
                    uVar19 = 0xe;
                  }
                }
                else {
LAB_00274434:
                  uVar19 = 0xf;
                }
              }
              else {
LAB_0027441c:
                uVar19 = 0x10;
              }
            }
            else {
LAB_00274180:
              uVar19 = 0x11;
            }
LAB_00271558:
            uVar12 = 0;
            if ((int)uVar21 != 0) goto LAB_00271034;
            goto LAB_00271088;
          }
          if ((uVar15 & 0xffffc000) != 0xffffc000) {
            if ((uVar15 >> 0x1e & 1) == 0) goto LAB_00274180;
            if ((uVar15 >> 0x1d & 1) == 0) goto LAB_0027441c;
            if ((uVar15 >> 0x1c & 1) == 0) goto LAB_00274434;
            if ((uVar15 >> 0x1b & 1) == 0) goto LAB_0027442c;
            if ((uVar15 >> 0x1a & 1) == 0) goto LAB_00274424;
            if ((uVar15 >> 0x19 & 1) == 0) goto LAB_00274474;
            if ((uVar15 >> 0x18 & 1) == 0) goto LAB_002744f4;
            if ((uVar15 >> 0x17 & 1) == 0) goto LAB_00274734;
            if ((uVar15 >> 0x16 & 1) == 0) goto LAB_002747d8;
            if ((uVar15 >> 0x15 & 1) == 0) goto LAB_00274864;
            if ((uVar15 >> 0x14 & 1) == 0) goto LAB_002748ec;
            if ((uVar15 >> 0x13 & 1) == 0) goto LAB_002748e4;
            if ((uVar15 >> 0x12 & 1) == 0) goto LAB_002748dc;
            if ((uVar15 >> 0x11 & 1) == 0) goto LAB_002748d4;
            if ((uVar15 >> 0x10 & 1) == 0) goto LAB_00274a64;
            if ((uVar15 >> 0xf & 1) == 0) goto LAB_00274cd0;
            uVar19 = 0;
            if ((uVar15 >> 0xe & 1) == 0) goto LAB_00272b7c;
            goto LAB_00271558;
          }
LAB_002725b4:
          uVar19 = 0;
          if ((int)uVar21 != 0) goto LAB_00271034;
          iVar20 = 1;
        }
        iVar25 = 0;
        iVar11 = (int)uVar21;
        if (iVar20 != 0) {
          iVar25 = iVar11 / iVar20;
        }
        iVar17 = 0;
        if (iVar20 != 0) {
          iVar17 = (int)uVar15 / iVar20;
        }
        iVar25 = iVar25 * iVar25 + iVar17 * iVar17;
        uVar19 = 0;
        if (iVar25 != 0) {
          if (iVar25 == 0x7fffffff) {
            iVar25 = 0x7ffffffe;
          }
          iVar17 = 0;
          if (iVar25 != 0) {
            iVar17 = iVar25 / iVar25;
          }
          iVar17 = (iVar25 + iVar17) / 2;
          iVar9 = iVar25;
          if (iVar17 < iVar25) {
            do {
              iVar9 = 0;
              if (iVar17 != 0) {
                iVar9 = iVar25 / iVar17;
              }
              iVar1 = (iVar17 + iVar9) / 2;
              iVar9 = iVar17;
              if (iVar17 <= iVar1) break;
              iVar17 = 0;
              if (iVar1 != 0) {
                iVar17 = iVar25 / iVar1;
              }
              iVar17 = (iVar1 + iVar17) / 2;
              iVar9 = iVar1;
              if (iVar1 <= iVar17) break;
              iVar9 = 0;
              if (iVar17 != 0) {
                iVar9 = iVar25 / iVar17;
              }
              iVar1 = (iVar17 + iVar9) / 2;
              iVar9 = iVar17;
              if (iVar17 <= iVar1) break;
              iVar17 = 0;
              if (iVar1 != 0) {
                iVar17 = iVar25 / iVar1;
              }
              iVar17 = (iVar1 + iVar17) / 2;
              iVar9 = iVar1;
              if (iVar1 <= iVar17) break;
              iVar9 = 0;
              if (iVar17 != 0) {
                iVar9 = iVar25 / iVar17;
              }
              iVar1 = (iVar17 + iVar9) / 2;
              iVar9 = iVar17;
              if (iVar17 <= iVar1) break;
              iVar17 = 0;
              if (iVar1 != 0) {
                iVar17 = iVar25 / iVar1;
              }
              iVar17 = (iVar1 + iVar17) / 2;
              iVar9 = iVar1;
              if (iVar1 <= iVar17) break;
              iVar9 = 0;
              if (iVar17 != 0) {
                iVar9 = iVar25 / iVar17;
              }
              iVar1 = (iVar17 + iVar9) / 2;
              iVar9 = iVar17;
              if (iVar17 <= iVar1) break;
              iVar17 = 0;
              if (iVar1 != 0) {
                iVar17 = iVar25 / iVar1;
              }
              iVar17 = (iVar1 + iVar17) / 2;
              iVar9 = iVar1;
            } while (iVar17 < iVar1);
          }
          uVar19 = iVar9 * iVar20;
        }
        if ((int)uVar15 < 0) {
          uVar15 = 0;
        }
        if ((int)uVar15 < (int)uVar19) {
          uVar15 = uVar19;
        }
        if ((int)uVar15 < iVar11) {
          iVar20 = 0;
          if (uVar24 == 0 && iVar11 == 0) goto LAB_0026fe54;
LAB_00271204:
          uVar19 = (uint)uVar21;
          if ((uVar21 & 0xffff8000) == 0) goto LAB_00271a10;
          if ((uVar19 >> 0x1e & 1) == 0) {
            if ((uVar19 >> 0x1d & 1) == 0) {
              if ((uVar19 >> 0x1c & 1) == 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
                  if ((uVar19 >> 0x1a & 1) == 0) {
                    if ((uVar19 >> 0x19 & 1) == 0) {
                      if ((uVar19 >> 0x18 & 1) == 0) {
                        if ((uVar19 >> 0x17 & 1) == 0) {
                          if ((uVar19 >> 0x16 & 1) == 0) {
                            if ((uVar19 >> 0x15 & 1) == 0) {
                              if ((uVar19 >> 0x14 & 1) == 0) {
                                if ((uVar19 >> 0x13 & 1) == 0) {
                                  if ((uVar19 >> 0x12 & 1) == 0) {
                                    if ((uVar19 >> 0x11 & 1) == 0) {
                                      if ((uVar19 >> 0x10 & 1) == 0) {
                                        uVar15 = 0;
                                        if ((uVar19 >> 0xf & 1) != 0) {
                                          uVar15 = 1;
                                        }
                                      }
                                      else {
                                        uVar15 = 2;
                                      }
                                    }
                                    else {
                                      uVar15 = 3;
                                    }
                                  }
                                  else {
                                    uVar15 = 4;
                                  }
                                }
                                else {
                                  uVar15 = 5;
                                }
                              }
                              else {
                                uVar15 = 6;
                              }
                            }
                            else {
                              uVar15 = 7;
                            }
                          }
                          else {
                            uVar15 = 8;
                          }
                        }
                        else {
                          uVar15 = 9;
                        }
                      }
                      else {
                        uVar15 = 10;
                      }
                    }
                    else {
                      uVar15 = 0xb;
                    }
                  }
                  else {
                    uVar15 = 0xc;
                  }
                }
                else {
                  uVar15 = 0xd;
                }
              }
              else {
                uVar15 = 0xe;
              }
            }
            else {
              uVar15 = 0xf;
            }
          }
          else {
            uVar15 = 0x10;
          }
          uVar12 = uVar19;
          if (uVar24 != 0) goto LAB_00271280;
          goto LAB_00271254;
        }
        iVar20 = 0;
        if (uVar15 == 0 && uVar24 == 0) goto LAB_0026fe54;
        uVar19 = 0;
        if (uVar15 != 0) {
          uVar21 = (ulong)uVar15;
          goto LAB_00271204;
        }
LAB_00271a10:
        uVar15 = 0;
        uVar12 = uVar19;
        if (uVar24 != 0) {
LAB_00271280:
          if ((int)uVar24 < 0) {
            if ((uVar24 & 0xffff8000) != 0xffff8000) {
              if ((uVar24 >> 0x1e & 1) == 0) goto LAB_00274854;
              if ((uVar24 >> 0x1d & 1) == 0) goto LAB_0027485c;
              if ((uVar24 >> 0x1c & 1) == 0) goto LAB_00274c04;
              if ((uVar24 >> 0x1b & 1) == 0) goto LAB_00274c24;
              if ((uVar24 >> 0x1a & 1) == 0) goto LAB_00274c1c;
              if ((uVar24 >> 0x19 & 1) == 0) goto LAB_00274c14;
              if ((uVar24 >> 0x18 & 1) == 0) goto LAB_00274e28;
              if ((uVar24 >> 0x17 & 1) == 0) goto LAB_00274eac;
              if ((uVar24 >> 0x16 & 1) == 0) goto LAB_00274ea4;
              if ((uVar24 >> 0x15 & 1) == 0) goto LAB_00274ebc;
              if ((uVar24 >> 0x14 & 1) == 0) goto LAB_00274eb4;
              if ((uVar24 >> 0x13 & 1) == 0) goto LAB_00274edc;
              if ((uVar24 >> 0x12 & 1) == 0) goto LAB_00274ed4;
              if ((uVar24 >> 0x11 & 1) == 0) goto LAB_00274ecc;
              if ((uVar24 >> 0x10 & 1) == 0) goto LAB_00274ec4;
              uVar19 = 0;
              if ((uVar24 >> 0xf & 1) == 0) goto LAB_002734d0;
              goto LAB_002712d0;
            }
LAB_00271254:
            uVar19 = uVar15;
          }
          else {
            if ((uVar24 & 0xffff8000) == 0) goto LAB_00271254;
            if ((uVar24 >> 0x1e & 1) == 0) {
              if ((uVar24 >> 0x1d & 1) == 0) {
                if ((uVar24 >> 0x1c & 1) == 0) {
                  if ((uVar24 >> 0x1b & 1) == 0) {
                    if ((uVar24 >> 0x1a & 1) == 0) {
                      if ((uVar24 >> 0x19 & 1) == 0) {
                        if ((uVar24 >> 0x18 & 1) == 0) {
                          if ((uVar24 >> 0x17 & 1) == 0) {
                            if ((uVar24 >> 0x16 & 1) == 0) {
                              if ((uVar24 >> 0x15 & 1) == 0) {
                                if ((uVar24 >> 0x14 & 1) == 0) {
                                  if ((uVar24 >> 0x13 & 1) == 0) {
                                    if ((uVar24 >> 0x12 & 1) == 0) {
                                      if ((uVar24 >> 0x11 & 1) == 0) {
                                        if ((uVar24 >> 0x10 & 1) == 0) {
                                          uVar19 = 0;
                                          if ((uVar24 >> 0xf & 1) != 0) {
LAB_002734d0:
                                            uVar19 = 1;
                                          }
                                        }
                                        else {
LAB_00274ec4:
                                          uVar19 = 2;
                                        }
                                      }
                                      else {
LAB_00274ecc:
                                        uVar19 = 3;
                                      }
                                    }
                                    else {
LAB_00274ed4:
                                      uVar19 = 4;
                                    }
                                  }
                                  else {
LAB_00274edc:
                                    uVar19 = 5;
                                  }
                                }
                                else {
LAB_00274eb4:
                                  uVar19 = 6;
                                }
                              }
                              else {
LAB_00274ebc:
                                uVar19 = 7;
                              }
                            }
                            else {
LAB_00274ea4:
                              uVar19 = 8;
                            }
                          }
                          else {
LAB_00274eac:
                            uVar19 = 9;
                          }
                        }
                        else {
LAB_00274e28:
                          uVar19 = 10;
                        }
                      }
                      else {
LAB_00274c14:
                        uVar19 = 0xb;
                      }
                    }
                    else {
LAB_00274c1c:
                      uVar19 = 0xc;
                    }
                  }
                  else {
LAB_00274c24:
                    uVar19 = 0xd;
                  }
                }
                else {
LAB_00274c04:
                  uVar19 = 0xe;
                }
              }
              else {
LAB_0027485c:
                uVar19 = 0xf;
              }
            }
            else {
LAB_00274854:
              uVar19 = 0x10;
            }
LAB_002712d0:
            if (uVar19 <= uVar15) goto LAB_00271254;
          }
          iVar20 = 1;
          switch(uVar19) {
          case 1:
            iVar20 = 2;
            break;
          case 2:
            iVar20 = 4;
            break;
          case 3:
            iVar20 = 8;
            break;
          case 4:
            iVar20 = 0x10;
            break;
          case 5:
            iVar20 = 0x20;
            break;
          case 6:
            iVar20 = 0x40;
            break;
          case 7:
            iVar20 = 0x80;
            break;
          case 8:
            iVar20 = 0x100;
            break;
          case 9:
            iVar20 = 0x200;
            break;
          case 10:
            iVar20 = 0x400;
            break;
          case 0xb:
            iVar20 = 0x800;
            break;
          case 0xc:
            iVar20 = 0x1000;
            break;
          case 0xd:
            iVar20 = 0x2000;
            break;
          case 0xe:
            iVar20 = 0x4000;
            break;
          case 0xf:
            iVar20 = 0x8000;
            break;
          case 0x10:
            iVar20 = 0x10000;
          }
          uVar15 = 0;
          if (iVar20 != 0) {
            uVar15 = (int)uVar24 / iVar20;
          }
          uVar19 = 0;
          if (iVar20 != 0) {
            uVar19 = (int)uVar12 / iVar20;
          }
          if ((int)uVar15 < 0) {
            iVar20 = -uVar15;
            if ((int)uVar19 < iVar20) {
              uVar13 = 0;
              if ((long)iVar20 != 0) {
                uVar13 = ((long)(int)uVar19 * 0x7fff) / (long)iVar20;
              }
              iVar20 = *(int *)(PTR_gasdAtan_00567958 + (uVar13 >> 9 & 0x3f) * 4) + -0x5a;
            }
            else {
              uVar13 = 0;
              if ((long)(int)uVar19 != 0) {
                uVar13 = ((long)iVar20 * 0x7fff) / (long)(int)uVar19;
              }
              uVar21 = uVar13 + 0x1ff;
              if (-1 < (long)uVar13) {
                uVar21 = uVar13;
              }
              iVar20 = -*(int *)(PTR_gasdAtan_00567958 + (uVar21 >> 9 & 0x3f) * 4);
            }
            goto LAB_0026fe54;
          }
          if ((int)uVar19 < (int)uVar15) {
            uVar13 = 0;
            if ((long)(int)uVar15 != 0) {
              uVar13 = ((long)(int)uVar19 * 0x7fff) / (long)(int)uVar15;
            }
            iVar20 = 0x5a - *(int *)(PTR_gasdAtan_00567958 + (uVar13 >> 9 & 0x3f) * 4);
            goto LAB_0026fe54;
          }
        }
        uVar13 = 0;
        if ((long)(int)uVar19 != 0) {
          uVar13 = ((long)(int)uVar15 * 0x7fff) / (long)(int)uVar19;
        }
        iVar20 = *(int *)(PTR_gasdAtan_00567958 + (uVar13 >> 9 & 0x3f) * 4);
        goto LAB_0026fe54;
      }
    }
    iVar16 = 0;
    iVar20 = 0;
LAB_0026fe54:
    *(int *)param_3 = iVar16;
    *(int *)(param_3 + 4) = iVar20;
    *(uint *)(param_3 + 8) = uVar14;
    return;
  }
  if (param_2 == 1) {
    iVar16 = *(int *)(param_1 + 0x30);
    iVar20 = *(int *)(param_1 + 0x78);
    iVar25 = *(int *)(param_1 + 0x34);
    iVar11 = *(int *)(param_1 + 0x7c);
    *(int *)param_3 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x74);
    *(int *)(param_3 + 4) = iVar16 - iVar20;
    *(int *)(param_3 + 8) = iVar25 - iVar11;
    return;
  }
  if (param_2 == 0) {
LAB_00270038:
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x2c);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x34);
    return;
  }
  if (param_2 != 2) {
    return;
  }
  if (((*(int *)(param_1 + 0xfc) == *(int *)(param_1 + 0x2c)) &&
      (iVar16 = *(int *)(param_1 + 0x100), iVar16 == *(int *)(param_1 + 0x30))) &&
     (iVar20 = *(int *)(param_1 + 0x104), iVar20 == *(int *)(param_1 + 0x34))) {
    iVar25 = *(int *)(param_1 + 0x74);
    if (((*(int *)(param_1 + 0x108) != iVar25) ||
        (*(int *)(param_1 + 0x10c) != *(int *)(param_1 + 0x78))) ||
       (iVar25 = *(int *)(param_1 + 0x108), *(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x7c)))
    goto LAB_0026feb0;
    uVar14 = 2;
    uVar15 = 0;
  }
  else {
    iVar16 = *(int *)(param_1 + 0x30);
    iVar20 = *(int *)(param_1 + 0x34);
    iVar25 = *(int *)(param_1 + 0x74);
LAB_0026feb0:
    *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_1 + 0x2c);
    uVar15 = *(int *)(param_1 + 0x2c) - iVar25;
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x34);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x114) = uVar15;
    uVar14 = iVar16 - *(int *)(param_1 + 0x78);
    uVar19 = iVar20 - *(int *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x118) = uVar14;
    *(uint *)(param_1 + 0x11c) = uVar19;
    if (uVar15 == 0) {
      uVar24 = 0;
      if (uVar19 != 0 || uVar14 != 0) goto LAB_0026ff4c;
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    else {
      if ((int)uVar15 < 0) {
        if ((uVar15 & 0xffffc000) == 0xffffc000) {
          uVar24 = 0;
        }
        else {
          if ((uVar15 >> 0x1e & 1) == 0) goto LAB_00274120;
          if ((uVar15 >> 0x1d & 1) == 0) goto LAB_00274114;
          if ((uVar15 >> 0x1c & 1) == 0) goto LAB_00274188;
          if ((uVar15 >> 0x1b & 1) == 0) goto LAB_0027430c;
          if ((uVar15 >> 0x1a & 1) == 0) goto LAB_002742d0;
          if ((uVar15 >> 0x19 & 1) == 0) goto LAB_002742c4;
          if ((uVar15 >> 0x18 & 1) == 0) goto LAB_002742b8;
          if ((uVar15 >> 0x17 & 1) == 0) goto LAB_00274608;
          if ((uVar15 >> 0x16 & 1) == 0) goto LAB_002746d0;
          if ((uVar15 >> 0x15 & 1) == 0) goto LAB_002746c4;
          if ((uVar15 >> 0x14 & 1) == 0) goto LAB_002746f4;
          if ((uVar15 >> 0x13 & 1) == 0) goto LAB_002746e8;
          if ((uVar15 >> 0x12 & 1) == 0) goto LAB_00274b08;
          if ((uVar15 >> 0x11 & 1) == 0) goto LAB_00274afc;
          if ((uVar15 >> 0x10 & 1) == 0) goto LAB_00274b14;
          if ((uVar15 >> 0xf & 1) == 0) goto LAB_002749c0;
          uVar24 = 0;
          if ((uVar15 >> 0xe & 1) == 0) goto LAB_00272648;
        }
      }
      else {
        uVar24 = 0;
        if ((uVar15 & 0xffffc000) != 0) {
          if ((uVar15 >> 0x1e & 1) == 0) {
            if ((uVar15 >> 0x1d & 1) == 0) {
              if ((uVar15 >> 0x1c & 1) == 0) {
                if ((uVar15 >> 0x1b & 1) == 0) {
                  if ((uVar15 >> 0x1a & 1) == 0) {
                    if ((uVar15 >> 0x19 & 1) == 0) {
                      if ((uVar15 >> 0x18 & 1) == 0) {
                        if ((uVar15 >> 0x17 & 1) == 0) {
                          if ((uVar15 >> 0x16 & 1) == 0) {
                            if ((uVar15 >> 0x15 & 1) == 0) {
                              if ((uVar15 >> 0x14 & 1) == 0) {
                                if ((uVar15 >> 0x13 & 1) == 0) {
                                  if ((uVar15 >> 0x12 & 1) == 0) {
                                    if ((uVar15 >> 0x11 & 1) == 0) {
                                      if ((uVar15 >> 0x10 & 1) == 0) {
                                        if ((uVar15 >> 0xf & 1) == 0) {
                                          if ((uVar15 >> 0xe & 1) != 0) {
LAB_00272648:
                                            uVar24 = 1;
                                          }
                                        }
                                        else {
LAB_002749c0:
                                          uVar24 = 2;
                                        }
                                      }
                                      else {
LAB_00274b14:
                                        uVar24 = 3;
                                      }
                                    }
                                    else {
LAB_00274afc:
                                      uVar24 = 4;
                                    }
                                  }
                                  else {
LAB_00274b08:
                                    uVar24 = 5;
                                  }
                                }
                                else {
LAB_002746e8:
                                  uVar24 = 6;
                                }
                              }
                              else {
LAB_002746f4:
                                uVar24 = 7;
                              }
                            }
                            else {
LAB_002746c4:
                              uVar24 = 8;
                            }
                          }
                          else {
LAB_002746d0:
                            uVar24 = 9;
                          }
                        }
                        else {
LAB_00274608:
                          uVar24 = 10;
                        }
                      }
                      else {
LAB_002742b8:
                        uVar24 = 0xb;
                      }
                    }
                    else {
LAB_002742c4:
                      uVar24 = 0xc;
                    }
                  }
                  else {
LAB_002742d0:
                    uVar24 = 0xd;
                  }
                }
                else {
LAB_0027430c:
                  uVar24 = 0xe;
                }
              }
              else {
LAB_00274188:
                uVar24 = 0xf;
              }
            }
            else {
LAB_00274114:
              uVar24 = 0x10;
            }
          }
          else {
LAB_00274120:
            uVar24 = 0x11;
          }
        }
      }
LAB_0026ff4c:
      uVar12 = 0;
      if (uVar14 != 0) {
        if ((int)uVar14 < 0) {
          if ((uVar14 & 0xffffc000) != 0xffffc000) {
            if ((uVar14 >> 0x1e & 1) == 0) goto LAB_002740fc;
            if ((uVar14 >> 0x1d & 1) == 0) goto LAB_00274108;
            if ((uVar14 >> 0x1c & 1) == 0) goto LAB_0027413c;
            if ((uVar14 >> 0x1b & 1) == 0) goto LAB_002743bc;
            if ((uVar14 >> 0x1a & 1) == 0) goto LAB_002743b0;
            if ((uVar14 >> 0x19 & 1) == 0) goto LAB_002743a4;
            if ((uVar14 >> 0x18 & 1) == 0) goto LAB_00274398;
            if ((uVar14 >> 0x17 & 1) == 0) goto LAB_002744d0;
            if ((uVar14 >> 0x16 & 1) == 0) goto LAB_002744c4;
            if ((uVar14 >> 0x15 & 1) == 0) goto LAB_002744b8;
            if ((uVar14 >> 0x14 & 1) == 0) goto LAB_00274748;
            if ((uVar14 >> 0x13 & 1) == 0) goto LAB_0027473c;
            if ((uVar14 >> 0x12 & 1) == 0) goto LAB_00274944;
            if ((uVar14 >> 0x11 & 1) == 0) goto LAB_00274a20;
            if ((uVar14 >> 0x10 & 1) == 0) goto LAB_00274a14;
            if ((uVar14 >> 0xf & 1) == 0) goto LAB_00274a08;
            uVar12 = 0;
            if ((uVar14 >> 0xe & 1) == 0) goto LAB_002726a8;
          }
        }
        else if ((uVar14 & 0xffffc000) != 0) {
          if ((uVar14 >> 0x1e & 1) == 0) {
            if ((uVar14 >> 0x1d & 1) == 0) {
              if ((uVar14 >> 0x1c & 1) == 0) {
                if ((uVar14 >> 0x1b & 1) == 0) {
                  if ((uVar14 >> 0x1a & 1) == 0) {
                    if ((uVar14 >> 0x19 & 1) == 0) {
                      if ((uVar14 >> 0x18 & 1) == 0) {
                        if ((uVar14 >> 0x17 & 1) == 0) {
                          if ((uVar14 >> 0x16 & 1) == 0) {
                            if ((uVar14 >> 0x15 & 1) == 0) {
                              if ((uVar14 >> 0x14 & 1) == 0) {
                                if ((uVar14 >> 0x13 & 1) == 0) {
                                  if ((uVar14 >> 0x12 & 1) == 0) {
                                    if ((uVar14 >> 0x11 & 1) == 0) {
                                      if ((uVar14 >> 0x10 & 1) == 0) {
                                        if ((uVar14 >> 0xf & 1) == 0) {
                                          if ((uVar14 >> 0xe & 1) != 0) {
LAB_002726a8:
                                            uVar12 = 1;
                                          }
                                        }
                                        else {
LAB_00274a08:
                                          uVar12 = 2;
                                        }
                                      }
                                      else {
LAB_00274a14:
                                        uVar12 = 3;
                                      }
                                    }
                                    else {
LAB_00274a20:
                                      uVar12 = 4;
                                    }
                                  }
                                  else {
LAB_00274944:
                                    uVar12 = 5;
                                  }
                                }
                                else {
LAB_0027473c:
                                  uVar12 = 6;
                                }
                              }
                              else {
LAB_00274748:
                                uVar12 = 7;
                              }
                            }
                            else {
LAB_002744b8:
                              uVar12 = 8;
                            }
                          }
                          else {
LAB_002744c4:
                            uVar12 = 9;
                          }
                        }
                        else {
LAB_002744d0:
                          uVar12 = 10;
                        }
                      }
                      else {
LAB_00274398:
                        uVar12 = 0xb;
                      }
                    }
                    else {
LAB_002743a4:
                      uVar12 = 0xc;
                    }
                  }
                  else {
LAB_002743b0:
                    uVar12 = 0xd;
                  }
                }
                else {
LAB_002743bc:
                  uVar12 = 0xe;
                }
              }
              else {
LAB_0027413c:
                uVar12 = 0xf;
              }
            }
            else {
LAB_00274108:
              uVar12 = 0x10;
            }
          }
          else {
LAB_002740fc:
            uVar12 = 0x11;
          }
        }
      }
      uVar18 = 0;
      if (uVar19 != 0) {
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffffc000) != 0xffffc000) {
            if ((uVar19 >> 0x1e & 1) == 0) goto LAB_0027405c;
            if ((uVar19 >> 0x1d & 1) == 0) goto LAB_00274064;
            if ((uVar19 >> 0x1c & 1) == 0) goto LAB_002741d8;
            if ((uVar19 >> 0x1b & 1) == 0) goto LAB_0027436c;
            if ((uVar19 >> 0x1a & 1) == 0) goto LAB_00274364;
            if ((uVar19 >> 0x19 & 1) == 0) goto LAB_0027435c;
            if ((uVar19 >> 0x18 & 1) == 0) goto LAB_00274354;
            if ((uVar19 >> 0x17 & 1) == 0) goto LAB_00274578;
            if ((uVar19 >> 0x16 & 1) == 0) goto LAB_00274570;
            if ((uVar19 >> 0x15 & 1) == 0) goto LAB_00274568;
            if ((uVar19 >> 0x14 & 1) == 0) goto LAB_002747c0;
            if ((uVar19 >> 0x13 & 1) == 0) goto LAB_002747c8;
            if ((uVar19 >> 0x12 & 1) == 0) goto LAB_00274890;
            if ((uVar19 >> 0x11 & 1) == 0) goto LAB_002748a0;
            if ((uVar19 >> 0x10 & 1) == 0) goto LAB_00274898;
            if ((uVar19 >> 0xf & 1) == 0) goto LAB_00274a5c;
            uVar18 = 0;
            if ((uVar19 >> 0xe & 1) == 0) goto LAB_00272708;
          }
        }
        else if ((uVar19 & 0xffffc000) != 0) {
          if ((uVar19 >> 0x1e & 1) == 0) {
            if ((uVar19 >> 0x1d & 1) == 0) {
              if ((uVar19 >> 0x1c & 1) == 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
                  if ((uVar19 >> 0x1a & 1) == 0) {
                    if ((uVar19 >> 0x19 & 1) == 0) {
                      if ((uVar19 >> 0x18 & 1) == 0) {
                        if ((uVar19 >> 0x17 & 1) == 0) {
                          if ((uVar19 >> 0x16 & 1) == 0) {
                            if ((uVar19 >> 0x15 & 1) == 0) {
                              if ((uVar19 >> 0x14 & 1) == 0) {
                                if ((uVar19 >> 0x13 & 1) == 0) {
                                  if ((uVar19 >> 0x12 & 1) == 0) {
                                    if ((uVar19 >> 0x11 & 1) == 0) {
                                      if ((uVar19 >> 0x10 & 1) == 0) {
                                        if ((uVar19 >> 0xf & 1) == 0) {
                                          uVar18 = 0;
                                          if ((uVar19 >> 0xe & 1) != 0) {
LAB_00272708:
                                            uVar18 = 1;
                                          }
                                        }
                                        else {
LAB_00274a5c:
                                          uVar18 = 2;
                                        }
                                      }
                                      else {
LAB_00274898:
                                        uVar18 = 3;
                                      }
                                    }
                                    else {
LAB_002748a0:
                                      uVar18 = 4;
                                    }
                                  }
                                  else {
LAB_00274890:
                                    uVar18 = 5;
                                  }
                                }
                                else {
LAB_002747c8:
                                  uVar18 = 6;
                                }
                              }
                              else {
LAB_002747c0:
                                uVar18 = 7;
                              }
                            }
                            else {
LAB_00274568:
                              uVar18 = 8;
                            }
                          }
                          else {
LAB_00274570:
                            uVar18 = 9;
                          }
                        }
                        else {
LAB_00274578:
                          uVar18 = 10;
                        }
                      }
                      else {
LAB_00274354:
                        uVar18 = 0xb;
                      }
                    }
                    else {
LAB_0027435c:
                      uVar18 = 0xc;
                    }
                  }
                  else {
LAB_00274364:
                    uVar18 = 0xd;
                  }
                }
                else {
LAB_0027436c:
                  uVar18 = 0xe;
                }
              }
              else {
LAB_002741d8:
                uVar18 = 0xf;
              }
            }
            else {
LAB_00274064:
              uVar18 = 0x10;
            }
          }
          else {
LAB_0027405c:
            uVar18 = 0x11;
          }
        }
      }
      iVar16 = 1;
      if (uVar12 < uVar24) {
        uVar12 = uVar24;
      }
      if (uVar12 < uVar18) {
        uVar12 = uVar18;
      }
      switch(uVar12) {
      case 1:
        iVar16 = 2;
        break;
      case 2:
        iVar16 = 4;
        break;
      case 3:
        iVar16 = 8;
        break;
      case 4:
        iVar16 = 0x10;
        break;
      case 5:
        iVar16 = 0x20;
        break;
      case 6:
        iVar16 = 0x40;
        break;
      case 7:
        iVar16 = 0x80;
        break;
      case 8:
        iVar16 = 0x100;
        break;
      case 9:
        iVar16 = 0x200;
        break;
      case 10:
        iVar16 = 0x400;
        break;
      case 0xb:
        iVar16 = 0x800;
        break;
      case 0xc:
        iVar16 = 0x1000;
        break;
      case 0xd:
        iVar16 = 0x2000;
        break;
      case 0xe:
        iVar16 = 0x4000;
        break;
      case 0xf:
        iVar16 = 0x8000;
        break;
      case 0x10:
        iVar16 = 0x10000;
        break;
      case 0x11:
        iVar16 = 0x20000;
      }
      iVar20 = 0;
      if (iVar16 != 0) {
        iVar20 = (int)uVar14 / iVar16;
      }
      iVar25 = 0;
      if (iVar16 != 0) {
        iVar25 = (int)uVar15 / iVar16;
      }
      iVar11 = 0;
      if (iVar16 != 0) {
        iVar11 = (int)uVar19 / iVar16;
      }
      iVar20 = iVar20 * iVar20 + iVar25 * iVar25 + iVar11 * iVar11;
      uVar24 = 0;
      if (iVar20 != 0) {
        if (iVar20 == 0x7fffffff) {
          iVar20 = 0x7ffffffe;
        }
        iVar25 = 0;
        if (iVar20 != 0) {
          iVar25 = iVar20 / iVar20;
        }
        iVar25 = (iVar20 + iVar25) / 2;
        iVar11 = iVar20;
        if (iVar25 < iVar20) {
          do {
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
          } while (iVar25 < iVar17);
        }
        uVar24 = iVar11 * iVar16;
      }
      uVar12 = uVar14;
      if ((int)uVar14 < (int)uVar15) {
        uVar12 = uVar15;
      }
      if ((int)uVar12 < (int)uVar19) {
        uVar12 = uVar19;
      }
      if ((int)uVar12 < (int)uVar24) {
        uVar12 = uVar24;
      }
      *(uint *)(param_1 + 0x120) = uVar12;
      if (uVar12 == 0) goto LAB_002701ec;
      uVar24 = 0;
      if (uVar15 != 0) {
        if ((int)uVar15 < 0) {
          if ((uVar15 & 0xffff8000) != 0xffff8000) {
            if ((uVar15 >> 0x1e & 1) == 0) goto LAB_002754c0;
            if ((uVar15 >> 0x1d & 1) == 0) goto LAB_002754d8;
            if ((uVar15 >> 0x1c & 1) == 0) goto LAB_002754cc;
            if ((uVar15 >> 0x1b & 1) == 0) goto LAB_00275508;
            if ((uVar15 >> 0x1a & 1) == 0) goto LAB_002754fc;
            if ((uVar15 >> 0x19 & 1) == 0) goto LAB_002754f0;
            if ((uVar15 >> 0x18 & 1) == 0) goto LAB_002754e4;
            if ((uVar15 >> 0x17 & 1) == 0) goto LAB_00275538;
            if ((uVar15 >> 0x16 & 1) == 0) goto LAB_0027552c;
            if ((uVar15 >> 0x15 & 1) == 0) goto LAB_00275520;
            if ((uVar15 >> 0x14 & 1) == 0) goto LAB_00275514;
            if ((uVar15 >> 0x13 & 1) == 0) goto LAB_00275614;
            if ((uVar15 >> 0x12 & 1) == 0) goto LAB_00275608;
            if ((uVar15 >> 0x11 & 1) == 0) goto LAB_002755fc;
            if ((uVar15 >> 0x10 & 1) == 0) goto LAB_002755f0;
            uVar24 = 0;
            if ((uVar15 >> 0xf & 1) == 0) goto LAB_00273988;
          }
        }
        else if ((uVar15 & 0xffff8000) != 0) {
          if ((uVar15 >> 0x1e & 1) == 0) {
            if ((uVar15 >> 0x1d & 1) == 0) {
              if ((uVar15 >> 0x1c & 1) == 0) {
                if ((uVar15 >> 0x1b & 1) == 0) {
                  if ((uVar15 >> 0x1a & 1) == 0) {
                    if ((uVar15 >> 0x19 & 1) == 0) {
                      if ((uVar15 >> 0x18 & 1) == 0) {
                        if ((uVar15 >> 0x17 & 1) == 0) {
                          if ((uVar15 >> 0x16 & 1) == 0) {
                            if ((uVar15 >> 0x15 & 1) == 0) {
                              if ((uVar15 >> 0x14 & 1) == 0) {
                                if ((uVar15 >> 0x13 & 1) == 0) {
                                  if ((uVar15 >> 0x12 & 1) == 0) {
                                    if ((uVar15 >> 0x11 & 1) == 0) {
                                      if ((uVar15 >> 0x10 & 1) == 0) {
                                        if ((uVar15 >> 0xf & 1) != 0) {
LAB_00273988:
                                          uVar24 = 1;
                                        }
                                      }
                                      else {
LAB_002755f0:
                                        uVar24 = 2;
                                      }
                                    }
                                    else {
LAB_002755fc:
                                      uVar24 = 3;
                                    }
                                  }
                                  else {
LAB_00275608:
                                    uVar24 = 4;
                                  }
                                }
                                else {
LAB_00275614:
                                  uVar24 = 5;
                                }
                              }
                              else {
LAB_00275514:
                                uVar24 = 6;
                              }
                            }
                            else {
LAB_00275520:
                              uVar24 = 7;
                            }
                          }
                          else {
LAB_0027552c:
                            uVar24 = 8;
                          }
                        }
                        else {
LAB_00275538:
                          uVar24 = 9;
                        }
                      }
                      else {
LAB_002754e4:
                        uVar24 = 10;
                      }
                    }
                    else {
LAB_002754f0:
                      uVar24 = 0xb;
                    }
                  }
                  else {
LAB_002754fc:
                    uVar24 = 0xc;
                  }
                }
                else {
LAB_00275508:
                  uVar24 = 0xd;
                }
              }
              else {
LAB_002754cc:
                uVar24 = 0xe;
              }
            }
            else {
LAB_002754d8:
              uVar24 = 0xf;
            }
          }
          else {
LAB_002754c0:
            uVar24 = 0x10;
          }
        }
      }
      uVar18 = 0;
      if (uVar14 != 0) {
        if ((int)uVar14 < 0) {
          if ((uVar14 & 0xffff8000) != 0xffff8000) {
            if ((uVar14 >> 0x1e & 1) == 0) goto LAB_0027540c;
            if ((uVar14 >> 0x1d & 1) == 0) goto LAB_00275424;
            if ((uVar14 >> 0x1c & 1) == 0) goto LAB_00275418;
            if ((uVar14 >> 0x1b & 1) == 0) goto LAB_00275454;
            if ((uVar14 >> 0x1a & 1) == 0) goto LAB_00275448;
            if ((uVar14 >> 0x19 & 1) == 0) goto LAB_0027543c;
            if ((uVar14 >> 0x18 & 1) == 0) goto LAB_00275430;
            if ((uVar14 >> 0x17 & 1) == 0) goto LAB_00275588;
            if ((uVar14 >> 0x16 & 1) == 0) goto LAB_0027557c;
            if ((uVar14 >> 0x15 & 1) == 0) goto LAB_00275570;
            if ((uVar14 >> 0x14 & 1) == 0) goto LAB_00275564;
            if ((uVar14 >> 0x13 & 1) == 0) goto LAB_002755e8;
            if ((uVar14 >> 0x12 & 1) == 0) goto LAB_002755dc;
            if ((uVar14 >> 0x11 & 1) == 0) goto LAB_002755d0;
            if ((uVar14 >> 0x10 & 1) == 0) goto LAB_002755c4;
            uVar18 = 0;
            if ((uVar14 >> 0xf & 1) == 0) goto LAB_002739e4;
          }
        }
        else if ((uVar14 & 0xffff8000) != 0) {
          if ((uVar14 >> 0x1e & 1) == 0) {
            if ((uVar14 >> 0x1d & 1) == 0) {
              if ((uVar14 >> 0x1c & 1) == 0) {
                if ((uVar14 >> 0x1b & 1) == 0) {
                  if ((uVar14 >> 0x1a & 1) == 0) {
                    if ((uVar14 >> 0x19 & 1) == 0) {
                      if ((uVar14 >> 0x18 & 1) == 0) {
                        if ((uVar14 >> 0x17 & 1) == 0) {
                          if ((uVar14 >> 0x16 & 1) == 0) {
                            if ((uVar14 >> 0x15 & 1) == 0) {
                              if ((uVar14 >> 0x14 & 1) == 0) {
                                if ((uVar14 >> 0x13 & 1) == 0) {
                                  if ((uVar14 >> 0x12 & 1) == 0) {
                                    if ((uVar14 >> 0x11 & 1) == 0) {
                                      if ((uVar14 >> 0x10 & 1) == 0) {
                                        uVar18 = 0;
                                        if ((uVar14 >> 0xf & 1) != 0) {
LAB_002739e4:
                                          uVar18 = 1;
                                        }
                                      }
                                      else {
LAB_002755c4:
                                        uVar18 = 2;
                                      }
                                    }
                                    else {
LAB_002755d0:
                                      uVar18 = 3;
                                    }
                                  }
                                  else {
LAB_002755dc:
                                    uVar18 = 4;
                                  }
                                }
                                else {
LAB_002755e8:
                                  uVar18 = 5;
                                }
                              }
                              else {
LAB_00275564:
                                uVar18 = 6;
                              }
                            }
                            else {
LAB_00275570:
                              uVar18 = 7;
                            }
                          }
                          else {
LAB_0027557c:
                            uVar18 = 8;
                          }
                        }
                        else {
LAB_00275588:
                          uVar18 = 9;
                        }
                      }
                      else {
LAB_00275430:
                        uVar18 = 10;
                      }
                    }
                    else {
LAB_0027543c:
                      uVar18 = 0xb;
                    }
                  }
                  else {
LAB_00275448:
                    uVar18 = 0xc;
                  }
                }
                else {
LAB_00275454:
                  uVar18 = 0xd;
                }
              }
              else {
LAB_00275418:
                uVar18 = 0xe;
              }
            }
            else {
LAB_00275424:
              uVar18 = 0xf;
            }
          }
          else {
LAB_0027540c:
            uVar18 = 0x10;
          }
        }
      }
      uVar10 = 0;
      if (uVar19 != 0) {
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffff8000) != 0xffff8000) {
            if ((uVar19 >> 0x1e & 1) == 0) goto LAB_00275380;
            if ((uVar19 >> 0x1d & 1) == 0) goto LAB_00275388;
            if ((uVar19 >> 0x1c & 1) == 0) goto LAB_00275378;
            if ((uVar19 >> 0x1b & 1) == 0) goto LAB_00275370;
            if ((uVar19 >> 0x1a & 1) == 0) goto LAB_00275368;
            if ((uVar19 >> 0x19 & 1) == 0) goto LAB_00275360;
            if ((uVar19 >> 0x18 & 1) == 0) goto LAB_00275358;
            if ((uVar19 >> 0x17 & 1) == 0) goto LAB_0027555c;
            if ((uVar19 >> 0x16 & 1) == 0) goto LAB_00275554;
            if ((uVar19 >> 0x15 & 1) == 0) goto LAB_0027554c;
            if ((uVar19 >> 0x14 & 1) == 0) goto LAB_00275544;
            if ((uVar19 >> 0x13 & 1) == 0) goto LAB_002755bc;
            if ((uVar19 >> 0x12 & 1) == 0) goto LAB_002755b4;
            if ((uVar19 >> 0x11 & 1) == 0) goto LAB_002755ac;
            if ((uVar19 >> 0x10 & 1) == 0) goto LAB_002755a4;
            uVar10 = 0;
            if ((uVar19 >> 0xf & 1) == 0) goto LAB_00273a40;
          }
        }
        else if ((uVar19 & 0xffff8000) != 0) {
          if ((uVar19 >> 0x1e & 1) == 0) {
            if ((uVar19 >> 0x1d & 1) == 0) {
              if ((uVar19 >> 0x1c & 1) == 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
                  if ((uVar19 >> 0x1a & 1) == 0) {
                    if ((uVar19 >> 0x19 & 1) == 0) {
                      if ((uVar19 >> 0x18 & 1) == 0) {
                        if ((uVar19 >> 0x17 & 1) == 0) {
                          if ((uVar19 >> 0x16 & 1) == 0) {
                            if ((uVar19 >> 0x15 & 1) == 0) {
                              if ((uVar19 >> 0x14 & 1) == 0) {
                                if ((uVar19 >> 0x13 & 1) == 0) {
                                  if ((uVar19 >> 0x12 & 1) == 0) {
                                    if ((uVar19 >> 0x11 & 1) == 0) {
                                      if ((uVar19 >> 0x10 & 1) == 0) {
                                        uVar10 = 0;
                                        if ((uVar19 >> 0xf & 1) != 0) {
LAB_00273a40:
                                          uVar10 = 1;
                                        }
                                      }
                                      else {
LAB_002755a4:
                                        uVar10 = 2;
                                      }
                                    }
                                    else {
LAB_002755ac:
                                      uVar10 = 3;
                                    }
                                  }
                                  else {
LAB_002755b4:
                                    uVar10 = 4;
                                  }
                                }
                                else {
LAB_002755bc:
                                  uVar10 = 5;
                                }
                              }
                              else {
LAB_00275544:
                                uVar10 = 6;
                              }
                            }
                            else {
LAB_0027554c:
                              uVar10 = 7;
                            }
                          }
                          else {
LAB_00275554:
                            uVar10 = 8;
                          }
                        }
                        else {
LAB_0027555c:
                          uVar10 = 9;
                        }
                      }
                      else {
LAB_00275358:
                        uVar10 = 10;
                      }
                    }
                    else {
LAB_00275360:
                      uVar10 = 0xb;
                    }
                  }
                  else {
LAB_00275368:
                    uVar10 = 0xc;
                  }
                }
                else {
LAB_00275370:
                  uVar10 = 0xd;
                }
              }
              else {
LAB_00275378:
                uVar10 = 0xe;
              }
            }
            else {
LAB_00275388:
              uVar10 = 0xf;
            }
          }
          else {
LAB_00275380:
            uVar10 = 0x10;
          }
        }
      }
      if (uVar18 < uVar24) {
        uVar18 = uVar24;
      }
      if (uVar18 < uVar10) {
        uVar18 = uVar10;
      }
      switch(uVar18) {
      case 1:
        iVar16 = 2;
        break;
      case 2:
        iVar16 = 4;
        break;
      case 3:
        iVar16 = 8;
        break;
      case 4:
        iVar16 = 0x10;
        break;
      case 5:
        iVar16 = 0x20;
        break;
      case 6:
        iVar16 = 0x40;
        break;
      case 7:
        iVar16 = 0x80;
        break;
      case 8:
        iVar16 = 0x100;
        break;
      case 9:
        iVar16 = 0x200;
        break;
      case 10:
        iVar16 = 0x400;
        break;
      case 0xb:
        iVar16 = 0x800;
        break;
      case 0xc:
        iVar16 = 0x1000;
        break;
      case 0xd:
        iVar16 = 0x2000;
        break;
      case 0xe:
        iVar16 = 0x4000;
        break;
      case 0xf:
        iVar16 = 0x8000;
        break;
      case 0x10:
        iVar16 = 0x10000;
        break;
      default:
        iVar16 = 1;
        uVar24 = uVar12;
        goto LAB_00270a34;
      }
      uVar24 = 0;
      if (iVar16 != 0) {
        uVar24 = (int)uVar12 / iVar16;
      }
      if (uVar24 != 0) {
LAB_00270a34:
        if (uVar15 != 0) {
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar15 / iVar16;
          }
          uVar22 = 0;
          if ((long)(int)uVar24 != 0) {
            uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar24);
          }
          *(undefined4 *)(param_1 + 0x114) = uVar22;
        }
        if (uVar14 != 0) {
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar14 / iVar16;
          }
          uVar22 = 0;
          if ((long)(int)uVar24 != 0) {
            uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar24);
          }
          *(undefined4 *)(param_1 + 0x118) = uVar22;
        }
        if (uVar19 == 0) {
          uVar14 = 3;
          uVar15 = 1;
        }
        else {
          uVar14 = 3;
          uVar15 = 1;
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar19 / iVar16;
          }
          uVar22 = 0;
          if ((long)(int)uVar24 != 0) {
            uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar24);
          }
          *(undefined4 *)(param_1 + 0x11c) = uVar22;
        }
        goto LAB_00270200;
      }
    }
LAB_002701ec:
    *(undefined4 *)(param_1 + 0x114) = 0;
    uVar14 = 3;
    *(undefined4 *)(param_1 + 0x118) = 0;
    uVar15 = 1;
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
LAB_00270200:
  if (((*(int *)(param_1 + 0x124) != *(int *)(param_1 + 0x98)) ||
      (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x9c))) ||
     (*(int *)(param_1 + 300) != *(int *)(param_1 + 0xa0))) {
    *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_1 + 0x98);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(param_1 + 0x98);
    uVar19 = *(uint *)(param_1 + 0xa0);
    uVar24 = *(uint *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x144) = uVar19;
    uVar12 = *(uint *)(param_1 + 0x140);
    uVar15 = uVar14;
    if (uVar24 == 0) {
      if (uVar12 != 0) {
        uVar14 = 0;
        goto LAB_00271694;
      }
      if (uVar19 != 0) {
        uVar18 = 0;
        uVar14 = 0;
        goto LAB_00270268;
      }
    }
    else {
      if ((int)uVar24 < 0) {
        if ((uVar24 & 0xffffc000) == 0xffffc000) {
          uVar14 = 0;
        }
        else {
          if ((uVar24 >> 0x1e & 1) == 0) goto LAB_002740dc;
          if ((uVar24 >> 0x1d & 1) == 0) goto LAB_002740d0;
          if ((uVar24 >> 0x1c & 1) == 0) goto LAB_0027415c;
          if ((uVar24 >> 0x1b & 1) == 0) goto LAB_00274410;
          if ((uVar24 >> 0x1a & 1) == 0) goto LAB_002741fc;
          if ((uVar24 >> 0x19 & 1) == 0) goto LAB_002741f0;
          if ((uVar24 >> 0x18 & 1) == 0) goto LAB_002746b8;
          if ((uVar24 >> 0x17 & 1) == 0) goto LAB_002746ac;
          if ((uVar24 >> 0x16 & 1) == 0) goto LAB_002746dc;
          if ((uVar24 >> 0x15 & 1) == 0) goto LAB_0027471c;
          if ((uVar24 >> 0x14 & 1) == 0) goto LAB_00274728;
          if ((uVar24 >> 0x13 & 1) == 0) goto LAB_00274950;
          if ((uVar24 >> 0x12 & 1) == 0) goto LAB_00274af4;
          if ((uVar24 >> 0x11 & 1) == 0) goto LAB_00274ae8;
          if ((uVar24 >> 0x10 & 1) == 0) goto LAB_00274adc;
          if ((uVar24 >> 0xf & 1) == 0) goto LAB_00274ad0;
          uVar14 = 0;
          if ((uVar24 >> 0xe & 1) == 0) goto LAB_002728d8;
        }
      }
      else {
        uVar14 = 0;
        if ((uVar24 & 0xffffc000) != 0) {
          if ((uVar24 >> 0x1e & 1) == 0) {
            if ((uVar24 >> 0x1d & 1) == 0) {
              if ((uVar24 >> 0x1c & 1) == 0) {
                if ((uVar24 >> 0x1b & 1) == 0) {
                  if ((uVar24 >> 0x1a & 1) == 0) {
                    if ((uVar24 >> 0x19 & 1) == 0) {
                      if ((uVar24 >> 0x18 & 1) == 0) {
                        if ((uVar24 >> 0x17 & 1) == 0) {
                          if ((uVar24 >> 0x16 & 1) == 0) {
                            if ((uVar24 >> 0x15 & 1) == 0) {
                              if ((uVar24 >> 0x14 & 1) == 0) {
                                if ((uVar24 >> 0x13 & 1) == 0) {
                                  if ((uVar24 >> 0x12 & 1) == 0) {
                                    if ((uVar24 >> 0x11 & 1) == 0) {
                                      if ((uVar24 >> 0x10 & 1) == 0) {
                                        if ((uVar24 >> 0xf & 1) == 0) {
                                          if ((uVar24 >> 0xe & 1) != 0) {
LAB_002728d8:
                                            uVar14 = 1;
                                          }
                                        }
                                        else {
LAB_00274ad0:
                                          uVar14 = 2;
                                        }
                                      }
                                      else {
LAB_00274adc:
                                        uVar14 = 3;
                                      }
                                    }
                                    else {
LAB_00274ae8:
                                      uVar14 = 4;
                                    }
                                  }
                                  else {
LAB_00274af4:
                                    uVar14 = 5;
                                  }
                                }
                                else {
LAB_00274950:
                                  uVar14 = 6;
                                }
                              }
                              else {
LAB_00274728:
                                uVar14 = 7;
                              }
                            }
                            else {
LAB_0027471c:
                              uVar14 = 8;
                            }
                          }
                          else {
LAB_002746dc:
                            uVar14 = 9;
                          }
                        }
                        else {
LAB_002746ac:
                          uVar14 = 10;
                        }
                      }
                      else {
LAB_002746b8:
                        uVar14 = 0xb;
                      }
                    }
                    else {
LAB_002741f0:
                      uVar14 = 0xc;
                    }
                  }
                  else {
LAB_002741fc:
                    uVar14 = 0xd;
                  }
                }
                else {
LAB_00274410:
                  uVar14 = 0xe;
                }
              }
              else {
LAB_0027415c:
                uVar14 = 0xf;
              }
            }
            else {
LAB_002740d0:
              uVar14 = 0x10;
            }
          }
          else {
LAB_002740dc:
            uVar14 = 0x11;
          }
        }
      }
LAB_00271694:
      uVar18 = 0;
      if (uVar12 != 0) {
        if ((int)uVar12 < 0) {
          if ((uVar12 & 0xffffc000) != 0xffffc000) {
            if ((uVar12 >> 0x1e & 1) == 0) goto LAB_002740e8;
            if ((uVar12 >> 0x1d & 1) == 0) goto LAB_002740c4;
            if ((uVar12 >> 0x1c & 1) == 0) goto LAB_00274174;
            if ((uVar12 >> 0x1b & 1) == 0) goto LAB_0027445c;
            if ((uVar12 >> 0x1a & 1) == 0) goto LAB_00274450;
            if ((uVar12 >> 0x19 & 1) == 0) goto LAB_00274468;
            if ((uVar12 >> 0x18 & 1) == 0) goto LAB_0027447c;
            if ((uVar12 >> 0x17 & 1) == 0) goto LAB_00274494;
            if ((uVar12 >> 0x16 & 1) == 0) goto LAB_00274488;
            if ((uVar12 >> 0x15 & 1) == 0) goto LAB_002747a4;
            if ((uVar12 >> 0x14 & 1) == 0) goto LAB_00274798;
            if ((uVar12 >> 0x13 & 1) == 0) goto LAB_002748cc;
            if ((uVar12 >> 0x12 & 1) == 0) goto LAB_002748c0;
            if ((uVar12 >> 0x11 & 1) == 0) goto LAB_002748b4;
            if ((uVar12 >> 0x10 & 1) == 0) goto LAB_002748a8;
            if ((uVar12 >> 0xf & 1) == 0) goto LAB_002747e0;
            uVar18 = 0;
            if ((uVar12 >> 0xe & 1) == 0) {
              uVar18 = 1;
            }
          }
        }
        else if ((uVar12 & 0xffffc000) != 0) {
          if ((uVar12 >> 0x1e & 1) == 0) {
            if ((uVar12 >> 0x1d & 1) == 0) {
              if ((uVar12 >> 0x1c & 1) == 0) {
                if ((uVar12 >> 0x1b & 1) == 0) {
                  if ((uVar12 >> 0x1a & 1) == 0) {
                    if ((uVar12 >> 0x19 & 1) == 0) {
                      if ((uVar12 >> 0x18 & 1) == 0) {
                        if ((uVar12 >> 0x17 & 1) == 0) {
                          if ((uVar12 >> 0x16 & 1) == 0) {
                            if ((uVar12 >> 0x15 & 1) == 0) {
                              if ((uVar12 >> 0x14 & 1) == 0) {
                                if ((uVar12 >> 0x13 & 1) == 0) {
                                  if ((uVar12 >> 0x12 & 1) == 0) {
                                    if ((uVar12 >> 0x11 & 1) == 0) {
                                      if ((uVar12 >> 0x10 & 1) == 0) {
                                        if ((uVar12 >> 0xf & 1) == 0) {
                                          if ((uVar12 >> 0xe & 1) != 0) {
                                            uVar18 = 1;
                                          }
                                        }
                                        else {
LAB_002747e0:
                                          uVar18 = 2;
                                        }
                                      }
                                      else {
LAB_002748a8:
                                        uVar18 = 3;
                                      }
                                    }
                                    else {
LAB_002748b4:
                                      uVar18 = 4;
                                    }
                                  }
                                  else {
LAB_002748c0:
                                    uVar18 = 5;
                                  }
                                }
                                else {
LAB_002748cc:
                                  uVar18 = 6;
                                }
                              }
                              else {
LAB_00274798:
                                uVar18 = 7;
                              }
                            }
                            else {
LAB_002747a4:
                              uVar18 = 8;
                            }
                          }
                          else {
LAB_00274488:
                            uVar18 = 9;
                          }
                        }
                        else {
LAB_00274494:
                          uVar18 = 10;
                        }
                      }
                      else {
LAB_0027447c:
                        uVar18 = 0xb;
                      }
                    }
                    else {
LAB_00274468:
                      uVar18 = 0xc;
                    }
                  }
                  else {
LAB_00274450:
                    uVar18 = 0xd;
                  }
                }
                else {
LAB_0027445c:
                  uVar18 = 0xe;
                }
              }
              else {
LAB_00274174:
                uVar18 = 0xf;
              }
            }
            else {
LAB_002740c4:
              uVar18 = 0x10;
            }
          }
          else {
LAB_002740e8:
            uVar18 = 0x11;
          }
        }
      }
LAB_00270268:
      uVar10 = 0;
      if (uVar19 != 0) {
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffffc000) != 0xffffc000) {
            if ((uVar19 >> 0x1e & 1) == 0) goto LAB_00274090;
            if ((uVar19 >> 0x1d & 1) == 0) goto LAB_00274098;
            if ((uVar19 >> 0x1c & 1) == 0) goto LAB_002741b4;
            if ((uVar19 >> 0x1b & 1) == 0) goto LAB_002742ec;
            if ((uVar19 >> 0x1a & 1) == 0) goto LAB_002742e4;
            if ((uVar19 >> 0x19 & 1) == 0) goto LAB_002742dc;
            if ((uVar19 >> 0x18 & 1) == 0) goto LAB_00274614;
            if ((uVar19 >> 0x17 & 1) == 0) goto LAB_00274678;
            if ((uVar19 >> 0x16 & 1) == 0) goto LAB_00274670;
            if ((uVar19 >> 0x15 & 1) == 0) goto LAB_00274708;
            if ((uVar19 >> 0x14 & 1) == 0) goto LAB_00274700;
            if ((uVar19 >> 0x13 & 1) == 0) goto LAB_00274934;
            if ((uVar19 >> 0x12 & 1) == 0) goto LAB_0027492c;
            if ((uVar19 >> 0x11 & 1) == 0) goto LAB_00274924;
            if ((uVar19 >> 0x10 & 1) == 0) goto LAB_0027491c;
            if ((uVar19 >> 0xf & 1) == 0) goto LAB_00274914;
            uVar10 = 0;
            if ((uVar19 >> 0xe & 1) == 0) goto LAB_00272938;
          }
        }
        else if ((uVar19 & 0xffffc000) != 0) {
          if ((uVar19 >> 0x1e & 1) == 0) {
            if ((uVar19 >> 0x1d & 1) == 0) {
              if ((uVar19 >> 0x1c & 1) == 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
                  if ((uVar19 >> 0x1a & 1) == 0) {
                    if ((uVar19 >> 0x19 & 1) == 0) {
                      if ((uVar19 >> 0x18 & 1) == 0) {
                        if ((uVar19 >> 0x17 & 1) == 0) {
                          if ((uVar19 >> 0x16 & 1) == 0) {
                            if ((uVar19 >> 0x15 & 1) == 0) {
                              if ((uVar19 >> 0x14 & 1) == 0) {
                                if ((uVar19 >> 0x13 & 1) == 0) {
                                  if ((uVar19 >> 0x12 & 1) == 0) {
                                    if ((uVar19 >> 0x11 & 1) == 0) {
                                      if ((uVar19 >> 0x10 & 1) == 0) {
                                        if ((uVar19 >> 0xf & 1) == 0) {
                                          uVar10 = 0;
                                          if ((uVar19 >> 0xe & 1) != 0) {
LAB_00272938:
                                            uVar10 = 1;
                                          }
                                        }
                                        else {
LAB_00274914:
                                          uVar10 = 2;
                                        }
                                      }
                                      else {
LAB_0027491c:
                                        uVar10 = 3;
                                      }
                                    }
                                    else {
LAB_00274924:
                                      uVar10 = 4;
                                    }
                                  }
                                  else {
LAB_0027492c:
                                    uVar10 = 5;
                                  }
                                }
                                else {
LAB_00274934:
                                  uVar10 = 6;
                                }
                              }
                              else {
LAB_00274700:
                                uVar10 = 7;
                              }
                            }
                            else {
LAB_00274708:
                              uVar10 = 8;
                            }
                          }
                          else {
LAB_00274670:
                            uVar10 = 9;
                          }
                        }
                        else {
LAB_00274678:
                          uVar10 = 10;
                        }
                      }
                      else {
LAB_00274614:
                        uVar10 = 0xb;
                      }
                    }
                    else {
LAB_002742dc:
                      uVar10 = 0xc;
                    }
                  }
                  else {
LAB_002742e4:
                    uVar10 = 0xd;
                  }
                }
                else {
LAB_002742ec:
                  uVar10 = 0xe;
                }
              }
              else {
LAB_002741b4:
                uVar10 = 0xf;
              }
            }
            else {
LAB_00274098:
              uVar10 = 0x10;
            }
          }
          else {
LAB_00274090:
            uVar10 = 0x11;
          }
        }
      }
      iVar16 = 1;
      if (uVar18 < uVar14) {
        uVar18 = uVar14;
      }
      if (uVar18 < uVar10) {
        uVar18 = uVar10;
      }
      switch(uVar18) {
      case 1:
        iVar16 = 2;
        break;
      case 2:
        iVar16 = 4;
        break;
      case 3:
        iVar16 = 8;
        break;
      case 4:
        iVar16 = 0x10;
        break;
      case 5:
        iVar16 = 0x20;
        break;
      case 6:
        iVar16 = 0x40;
        break;
      case 7:
        iVar16 = 0x80;
        break;
      case 8:
        iVar16 = 0x100;
        break;
      case 9:
        iVar16 = 0x200;
        break;
      case 10:
        iVar16 = 0x400;
        break;
      case 0xb:
        iVar16 = 0x800;
        break;
      case 0xc:
        iVar16 = 0x1000;
        break;
      case 0xd:
        iVar16 = 0x2000;
        break;
      case 0xe:
        iVar16 = 0x4000;
        break;
      case 0xf:
        iVar16 = 0x8000;
        break;
      case 0x10:
        iVar16 = 0x10000;
        break;
      case 0x11:
        iVar16 = 0x20000;
      }
      iVar20 = 0;
      if (iVar16 != 0) {
        iVar20 = (int)uVar12 / iVar16;
      }
      iVar25 = 0;
      if (iVar16 != 0) {
        iVar25 = (int)uVar24 / iVar16;
      }
      iVar11 = 0;
      if (iVar16 != 0) {
        iVar11 = (int)uVar19 / iVar16;
      }
      iVar20 = iVar20 * iVar20 + iVar25 * iVar25 + iVar11 * iVar11;
      uVar14 = 0;
      if (iVar20 != 0) {
        if (iVar20 == 0x7fffffff) {
          iVar20 = 0x7ffffffe;
        }
        iVar25 = 0;
        if (iVar20 != 0) {
          iVar25 = iVar20 / iVar20;
        }
        iVar25 = (iVar20 + iVar25) / 2;
        iVar11 = iVar20;
        if (iVar25 < iVar20) {
          do {
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
          } while (iVar25 < iVar17);
        }
        uVar14 = iVar11 * iVar16;
      }
      uVar18 = uVar12;
      if ((int)uVar12 < (int)uVar19) {
        uVar18 = uVar19;
      }
      if ((int)uVar18 < (int)uVar24) {
        uVar18 = uVar24;
      }
      if ((int)uVar18 < (int)uVar14) {
        uVar18 = uVar14;
      }
      if (uVar18 == 0) goto LAB_00270c64;
      uVar14 = 0;
      if (uVar24 != 0) {
        if ((int)uVar24 < 0) {
          if ((uVar24 & 0xffff8000) != 0xffff8000) {
            if ((uVar24 >> 0x1e & 1) == 0) goto LAB_00274cf8;
            if ((uVar24 >> 0x1d & 1) == 0) goto LAB_00274d04;
            if ((uVar24 >> 0x1c & 1) == 0) goto LAB_00274dac;
            if ((uVar24 >> 0x1b & 1) == 0) goto LAB_00274d88;
            if ((uVar24 >> 0x1a & 1) == 0) goto LAB_00274d7c;
            if ((uVar24 >> 0x19 & 1) == 0) goto LAB_0027507c;
            if ((uVar24 >> 0x18 & 1) == 0) goto LAB_00275070;
            if ((uVar24 >> 0x17 & 1) == 0) goto LAB_0027504c;
            if ((uVar24 >> 0x16 & 1) == 0) goto LAB_00275040;
            if ((uVar24 >> 0x15 & 1) == 0) goto LAB_00275034;
            if ((uVar24 >> 0x14 & 1) == 0) goto LAB_00275028;
            if ((uVar24 >> 0x13 & 1) == 0) goto LAB_0027501c;
            if ((uVar24 >> 0x12 & 1) == 0) goto LAB_00275010;
            if ((uVar24 >> 0x11 & 1) == 0) goto LAB_00275004;
            if ((uVar24 >> 0x10 & 1) == 0) goto LAB_00274ff8;
            uVar14 = 0;
            if ((uVar24 >> 0xf & 1) == 0) goto LAB_0027374c;
          }
        }
        else if ((uVar24 & 0xffff8000) != 0) {
          if ((uVar24 >> 0x1e & 1) == 0) {
            if ((uVar24 >> 0x1d & 1) == 0) {
              if ((uVar24 >> 0x1c & 1) == 0) {
                if ((uVar24 >> 0x1b & 1) == 0) {
                  if ((uVar24 >> 0x1a & 1) == 0) {
                    if ((uVar24 >> 0x19 & 1) == 0) {
                      if ((uVar24 >> 0x18 & 1) == 0) {
                        if ((uVar24 >> 0x17 & 1) == 0) {
                          if ((uVar24 >> 0x16 & 1) == 0) {
                            if ((uVar24 >> 0x15 & 1) == 0) {
                              if ((uVar24 >> 0x14 & 1) == 0) {
                                if ((uVar24 >> 0x13 & 1) == 0) {
                                  if ((uVar24 >> 0x12 & 1) == 0) {
                                    if ((uVar24 >> 0x11 & 1) == 0) {
                                      if ((uVar24 >> 0x10 & 1) == 0) {
                                        if ((uVar24 >> 0xf & 1) != 0) {
LAB_0027374c:
                                          uVar14 = 1;
                                        }
                                      }
                                      else {
LAB_00274ff8:
                                        uVar14 = 2;
                                      }
                                    }
                                    else {
LAB_00275004:
                                      uVar14 = 3;
                                    }
                                  }
                                  else {
LAB_00275010:
                                    uVar14 = 4;
                                  }
                                }
                                else {
LAB_0027501c:
                                  uVar14 = 5;
                                }
                              }
                              else {
LAB_00275028:
                                uVar14 = 6;
                              }
                            }
                            else {
LAB_00275034:
                              uVar14 = 7;
                            }
                          }
                          else {
LAB_00275040:
                            uVar14 = 8;
                          }
                        }
                        else {
LAB_0027504c:
                          uVar14 = 9;
                        }
                      }
                      else {
LAB_00275070:
                        uVar14 = 10;
                      }
                    }
                    else {
LAB_0027507c:
                      uVar14 = 0xb;
                    }
                  }
                  else {
LAB_00274d7c:
                    uVar14 = 0xc;
                  }
                }
                else {
LAB_00274d88:
                  uVar14 = 0xd;
                }
              }
              else {
LAB_00274dac:
                uVar14 = 0xe;
              }
            }
            else {
LAB_00274d04:
              uVar14 = 0xf;
            }
          }
          else {
LAB_00274cf8:
            uVar14 = 0x10;
          }
        }
      }
      uVar10 = 0;
      if (uVar12 != 0) {
        if ((int)uVar12 < 0) {
          if ((uVar12 & 0xffff8000) != 0xffff8000) {
            if ((uVar12 >> 0x1e & 1) == 0) goto LAB_00274ce4;
            if ((uVar12 >> 0x1d & 1) == 0) goto LAB_00274cd8;
            if ((uVar12 >> 0x1c & 1) == 0) goto LAB_00274da0;
            if ((uVar12 >> 0x1b & 1) == 0) goto LAB_00274e80;
            if ((uVar12 >> 0x1a & 1) == 0) goto LAB_00274e74;
            if ((uVar12 >> 0x19 & 1) == 0) goto LAB_00274ef0;
            if ((uVar12 >> 0x18 & 1) == 0) goto LAB_00274ee4;
            if ((uVar12 >> 0x17 & 1) == 0) goto LAB_002751f8;
            if ((uVar12 >> 0x16 & 1) == 0) goto LAB_002751ec;
            if ((uVar12 >> 0x15 & 1) == 0) goto LAB_002751e0;
            if ((uVar12 >> 0x14 & 1) == 0) goto LAB_002751d4;
            if ((uVar12 >> 0x13 & 1) == 0) goto LAB_002751c8;
            if ((uVar12 >> 0x12 & 1) == 0) goto LAB_002751bc;
            if ((uVar12 >> 0x11 & 1) == 0) goto LAB_002751b0;
            if ((uVar12 >> 0x10 & 1) == 0) goto LAB_002751a4;
            uVar10 = 0;
            if ((uVar12 >> 0xf & 1) == 0) goto LAB_002737a8;
          }
        }
        else if ((uVar12 & 0xffff8000) != 0) {
          if ((uVar12 >> 0x1e & 1) == 0) {
            if ((uVar12 >> 0x1d & 1) == 0) {
              if ((uVar12 >> 0x1c & 1) == 0) {
                if ((uVar12 >> 0x1b & 1) == 0) {
                  if ((uVar12 >> 0x1a & 1) == 0) {
                    if ((uVar12 >> 0x19 & 1) == 0) {
                      if ((uVar12 >> 0x18 & 1) == 0) {
                        if ((uVar12 >> 0x17 & 1) == 0) {
                          if ((uVar12 >> 0x16 & 1) == 0) {
                            if ((uVar12 >> 0x15 & 1) == 0) {
                              if ((uVar12 >> 0x14 & 1) == 0) {
                                if ((uVar12 >> 0x13 & 1) == 0) {
                                  if ((uVar12 >> 0x12 & 1) == 0) {
                                    if ((uVar12 >> 0x11 & 1) == 0) {
                                      if ((uVar12 >> 0x10 & 1) == 0) {
                                        uVar10 = 0;
                                        if ((uVar12 >> 0xf & 1) != 0) {
LAB_002737a8:
                                          uVar10 = 1;
                                        }
                                      }
                                      else {
LAB_002751a4:
                                        uVar10 = 2;
                                      }
                                    }
                                    else {
LAB_002751b0:
                                      uVar10 = 3;
                                    }
                                  }
                                  else {
LAB_002751bc:
                                    uVar10 = 4;
                                  }
                                }
                                else {
LAB_002751c8:
                                  uVar10 = 5;
                                }
                              }
                              else {
LAB_002751d4:
                                uVar10 = 6;
                              }
                            }
                            else {
LAB_002751e0:
                              uVar10 = 7;
                            }
                          }
                          else {
LAB_002751ec:
                            uVar10 = 8;
                          }
                        }
                        else {
LAB_002751f8:
                          uVar10 = 9;
                        }
                      }
                      else {
LAB_00274ee4:
                        uVar10 = 10;
                      }
                    }
                    else {
LAB_00274ef0:
                      uVar10 = 0xb;
                    }
                  }
                  else {
LAB_00274e74:
                    uVar10 = 0xc;
                  }
                }
                else {
LAB_00274e80:
                  uVar10 = 0xd;
                }
              }
              else {
LAB_00274da0:
                uVar10 = 0xe;
              }
            }
            else {
LAB_00274cd8:
              uVar10 = 0xf;
            }
          }
          else {
LAB_00274ce4:
            uVar10 = 0x10;
          }
        }
      }
      uVar23 = 0;
      if (uVar19 != 0) {
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffff8000) != 0xffff8000) {
            if ((uVar19 >> 0x1e & 1) == 0) goto LAB_00274bfc;
            if ((uVar19 >> 0x1d & 1) == 0) goto LAB_00274bc4;
            if ((uVar19 >> 0x1c & 1) == 0) goto LAB_00274e14;
            if ((uVar19 >> 0x1b & 1) == 0) goto LAB_00274dfc;
            if ((uVar19 >> 0x1a & 1) == 0) goto LAB_00274df4;
            if ((uVar19 >> 0x19 & 1) == 0) goto LAB_002752f8;
            if ((uVar19 >> 0x18 & 1) == 0) goto LAB_002752f0;
            if ((uVar19 >> 0x17 & 1) == 0) goto LAB_00275288;
            if ((uVar19 >> 0x16 & 1) == 0) goto LAB_00275280;
            if ((uVar19 >> 0x15 & 1) == 0) goto LAB_00275278;
            if ((uVar19 >> 0x14 & 1) == 0) goto LAB_00275270;
            if ((uVar19 >> 0x13 & 1) == 0) goto LAB_00275268;
            if ((uVar19 >> 0x12 & 1) == 0) goto LAB_00275260;
            if ((uVar19 >> 0x11 & 1) == 0) goto LAB_00275258;
            if ((uVar19 >> 0x10 & 1) == 0) goto LAB_00275250;
            uVar23 = 0;
            if ((uVar19 >> 0xf & 1) == 0) goto LAB_00273804;
          }
        }
        else if ((uVar19 & 0xffff8000) != 0) {
          if ((uVar19 >> 0x1e & 1) == 0) {
            if ((uVar19 >> 0x1d & 1) == 0) {
              if ((uVar19 >> 0x1c & 1) == 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
                  if ((uVar19 >> 0x1a & 1) == 0) {
                    if ((uVar19 >> 0x19 & 1) == 0) {
                      if ((uVar19 >> 0x18 & 1) == 0) {
                        if ((uVar19 >> 0x17 & 1) == 0) {
                          if ((uVar19 >> 0x16 & 1) == 0) {
                            if ((uVar19 >> 0x15 & 1) == 0) {
                              if ((uVar19 >> 0x14 & 1) == 0) {
                                if ((uVar19 >> 0x13 & 1) == 0) {
                                  if ((uVar19 >> 0x12 & 1) == 0) {
                                    if ((uVar19 >> 0x11 & 1) == 0) {
                                      if ((uVar19 >> 0x10 & 1) == 0) {
                                        uVar23 = 0;
                                        if ((uVar19 >> 0xf & 1) != 0) {
LAB_00273804:
                                          uVar23 = 1;
                                        }
                                      }
                                      else {
LAB_00275250:
                                        uVar23 = 2;
                                      }
                                    }
                                    else {
LAB_00275258:
                                      uVar23 = 3;
                                    }
                                  }
                                  else {
LAB_00275260:
                                    uVar23 = 4;
                                  }
                                }
                                else {
LAB_00275268:
                                  uVar23 = 5;
                                }
                              }
                              else {
LAB_00275270:
                                uVar23 = 6;
                              }
                            }
                            else {
LAB_00275278:
                              uVar23 = 7;
                            }
                          }
                          else {
LAB_00275280:
                            uVar23 = 8;
                          }
                        }
                        else {
LAB_00275288:
                          uVar23 = 9;
                        }
                      }
                      else {
LAB_002752f0:
                        uVar23 = 10;
                      }
                    }
                    else {
LAB_002752f8:
                      uVar23 = 0xb;
                    }
                  }
                  else {
LAB_00274df4:
                    uVar23 = 0xc;
                  }
                }
                else {
LAB_00274dfc:
                  uVar23 = 0xd;
                }
              }
              else {
LAB_00274e14:
                uVar23 = 0xe;
              }
            }
            else {
LAB_00274bc4:
              uVar23 = 0xf;
            }
          }
          else {
LAB_00274bfc:
            uVar23 = 0x10;
          }
        }
      }
      if (uVar10 < uVar14) {
        uVar10 = uVar14;
      }
      if (uVar10 < uVar23) {
        uVar10 = uVar23;
      }
      switch(uVar10) {
      case 1:
        iVar16 = 2;
        break;
      case 2:
        iVar16 = 4;
        break;
      case 3:
        iVar16 = 8;
        break;
      case 4:
        iVar16 = 0x10;
        break;
      case 5:
        iVar16 = 0x20;
        break;
      case 6:
        iVar16 = 0x40;
        break;
      case 7:
        iVar16 = 0x80;
        break;
      case 8:
        iVar16 = 0x100;
        break;
      case 9:
        iVar16 = 0x200;
        break;
      case 10:
        iVar16 = 0x400;
        break;
      case 0xb:
        iVar16 = 0x800;
        break;
      case 0xc:
        iVar16 = 0x1000;
        break;
      case 0xd:
        iVar16 = 0x2000;
        break;
      case 0xe:
        iVar16 = 0x4000;
        break;
      case 0xf:
        iVar16 = 0x8000;
        break;
      case 0x10:
        iVar16 = 0x10000;
        break;
      default:
        iVar16 = 1;
        uVar14 = uVar18;
        goto LAB_002719a8;
      }
      uVar14 = 0;
      if (iVar16 != 0) {
        uVar14 = (int)uVar18 / iVar16;
      }
      if (uVar14 != 0) {
LAB_002719a8:
        if (uVar24 != 0) {
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar24 / iVar16;
          }
          uVar22 = 0;
          if ((long)(int)uVar14 != 0) {
            uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar14);
          }
          *(undefined4 *)(param_1 + 0x13c) = uVar22;
        }
        if (uVar12 != 0) {
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar12 / iVar16;
          }
          uVar22 = 0;
          if ((long)(int)uVar14 != 0) {
            uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar14);
          }
          *(undefined4 *)(param_1 + 0x140) = uVar22;
        }
        if (uVar19 != 0) {
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar19 / iVar16;
          }
          uVar22 = 0;
          if ((long)(int)uVar14 != 0) {
            uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar14);
          }
          *(undefined4 *)(param_1 + 0x144) = uVar22;
        }
        goto LAB_00270c70;
      }
    }
LAB_00270c64:
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
LAB_00270c70:
  if (((*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0xbc)) ||
      (*(int *)(param_1 + 0x134) != *(int *)(param_1 + 0xc0))) ||
     (*(int *)(param_1 + 0x138) != *(int *)(param_1 + 0xc4))) {
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0xbc);
    uVar14 = *(uint *)(param_1 + 0xc4);
    uVar19 = *(uint *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x150) = uVar14;
    uVar24 = *(uint *)(param_1 + 0x14c);
    if (uVar19 == 0) {
      if (uVar24 != 0) {
        uVar12 = 0;
        goto LAB_002715dc;
      }
      if (uVar14 != 0) {
        uVar18 = 0;
        uVar12 = 0;
        goto LAB_00270cd0;
      }
LAB_00270eb0:
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    else {
      if ((int)uVar19 < 0) {
        if ((uVar19 & 0xffffc000) == 0xffffc000) {
          uVar12 = 0;
        }
        else {
          if ((uVar19 >> 0x1e & 1) == 0) goto LAB_002740b8;
          if ((uVar19 >> 0x1d & 1) == 0) goto LAB_002740ac;
          if ((uVar19 >> 0x1c & 1) == 0) goto LAB_00274150;
          if ((uVar19 >> 0x1b & 1) == 0) goto LAB_00274444;
          if ((uVar19 >> 0x1a & 1) == 0) goto LAB_00274300;
          if ((uVar19 >> 0x19 & 1) == 0) goto LAB_002742f4;
          if ((uVar19 >> 0x18 & 1) == 0) goto LAB_00274628;
          if ((uVar19 >> 0x17 & 1) == 0) goto LAB_0027461c;
          if ((uVar19 >> 0x16 & 1) == 0) goto LAB_00274634;
          if ((uVar19 >> 0x15 & 1) == 0) goto LAB_00274754;
          if ((uVar19 >> 0x14 & 1) == 0) goto LAB_0027478c;
          if ((uVar19 >> 0x13 & 1) == 0) goto LAB_002747f8;
          if ((uVar19 >> 0x12 & 1) == 0) goto LAB_00274828;
          if ((uVar19 >> 0x11 & 1) == 0) goto LAB_0027481c;
          if ((uVar19 >> 0x10 & 1) == 0) goto LAB_00274810;
          if ((uVar19 >> 0xf & 1) == 0) goto LAB_00274804;
          uVar12 = 0;
          if ((uVar19 >> 0xe & 1) == 0) goto LAB_002727c0;
        }
      }
      else {
        uVar12 = 0;
        if ((uVar19 & 0xffffc000) != 0) {
          if ((uVar19 >> 0x1e & 1) == 0) {
            if ((uVar19 >> 0x1d & 1) == 0) {
              if ((uVar19 >> 0x1c & 1) == 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
                  if ((uVar19 >> 0x1a & 1) == 0) {
                    if ((uVar19 >> 0x19 & 1) == 0) {
                      if ((uVar19 >> 0x18 & 1) == 0) {
                        if ((uVar19 >> 0x17 & 1) == 0) {
                          if ((uVar19 >> 0x16 & 1) == 0) {
                            if ((uVar19 >> 0x15 & 1) == 0) {
                              if ((uVar19 >> 0x14 & 1) == 0) {
                                if ((uVar19 >> 0x13 & 1) == 0) {
                                  if ((uVar19 >> 0x12 & 1) == 0) {
                                    if ((uVar19 >> 0x11 & 1) == 0) {
                                      if ((uVar19 >> 0x10 & 1) == 0) {
                                        if ((uVar19 >> 0xf & 1) == 0) {
                                          if ((uVar19 >> 0xe & 1) != 0) {
LAB_002727c0:
                                            uVar12 = 1;
                                          }
                                        }
                                        else {
LAB_00274804:
                                          uVar12 = 2;
                                        }
                                      }
                                      else {
LAB_00274810:
                                        uVar12 = 3;
                                      }
                                    }
                                    else {
LAB_0027481c:
                                      uVar12 = 4;
                                    }
                                  }
                                  else {
LAB_00274828:
                                    uVar12 = 5;
                                  }
                                }
                                else {
LAB_002747f8:
                                  uVar12 = 6;
                                }
                              }
                              else {
LAB_0027478c:
                                uVar12 = 7;
                              }
                            }
                            else {
LAB_00274754:
                              uVar12 = 8;
                            }
                          }
                          else {
LAB_00274634:
                            uVar12 = 9;
                          }
                        }
                        else {
LAB_0027461c:
                          uVar12 = 10;
                        }
                      }
                      else {
LAB_00274628:
                        uVar12 = 0xb;
                      }
                    }
                    else {
LAB_002742f4:
                      uVar12 = 0xc;
                    }
                  }
                  else {
LAB_00274300:
                    uVar12 = 0xd;
                  }
                }
                else {
LAB_00274444:
                  uVar12 = 0xe;
                }
              }
              else {
LAB_00274150:
                uVar12 = 0xf;
              }
            }
            else {
LAB_002740ac:
              uVar12 = 0x10;
            }
          }
          else {
LAB_002740b8:
            uVar12 = 0x11;
          }
        }
      }
LAB_002715dc:
      uVar18 = 0;
      if (uVar24 != 0) {
        if ((int)uVar24 < 0) {
          if ((uVar24 & 0xffffc000) != 0xffffc000) {
            if ((uVar24 >> 0x1e & 1) == 0) goto LAB_00274084;
            if ((uVar24 >> 0x1d & 1) == 0) goto LAB_002740a0;
            if ((uVar24 >> 0x1c & 1) == 0) goto LAB_00274168;
            if ((uVar24 >> 0x1b & 1) == 0) goto LAB_00274258;
            if ((uVar24 >> 0x1a & 1) == 0) goto LAB_0027424c;
            if ((uVar24 >> 0x19 & 1) == 0) goto LAB_00274240;
            if ((uVar24 >> 0x18 & 1) == 0) goto LAB_00274680;
            if ((uVar24 >> 0x17 & 1) == 0) goto LAB_00274664;
            if ((uVar24 >> 0x16 & 1) == 0) goto LAB_00274658;
            if ((uVar24 >> 0x15 & 1) == 0) goto LAB_0027476c;
            if ((uVar24 >> 0x14 & 1) == 0) goto LAB_00274760;
            if ((uVar24 >> 0x13 & 1) == 0) goto LAB_00274a4c;
            if ((uVar24 >> 0x12 & 1) == 0) goto LAB_00274a40;
            if ((uVar24 >> 0x11 & 1) == 0) goto LAB_00274a34;
            if ((uVar24 >> 0x10 & 1) == 0) goto LAB_00274a28;
            if ((uVar24 >> 0xf & 1) == 0) goto LAB_0027486c;
            uVar18 = 0;
            if ((uVar24 >> 0xe & 1) == 0) {
              uVar18 = 1;
            }
          }
        }
        else if ((uVar24 & 0xffffc000) != 0) {
          if ((uVar24 >> 0x1e & 1) == 0) {
            if ((uVar24 >> 0x1d & 1) == 0) {
              if ((uVar24 >> 0x1c & 1) == 0) {
                if ((uVar24 >> 0x1b & 1) == 0) {
                  if ((uVar24 >> 0x1a & 1) == 0) {
                    if ((uVar24 >> 0x19 & 1) == 0) {
                      if ((uVar24 >> 0x18 & 1) == 0) {
                        if ((uVar24 >> 0x17 & 1) == 0) {
                          if ((uVar24 >> 0x16 & 1) == 0) {
                            if ((uVar24 >> 0x15 & 1) == 0) {
                              if ((uVar24 >> 0x14 & 1) == 0) {
                                if ((uVar24 >> 0x13 & 1) == 0) {
                                  if ((uVar24 >> 0x12 & 1) == 0) {
                                    if ((uVar24 >> 0x11 & 1) == 0) {
                                      if ((uVar24 >> 0x10 & 1) == 0) {
                                        if ((uVar24 >> 0xf & 1) == 0) {
                                          if ((uVar24 >> 0xe & 1) != 0) {
                                            uVar18 = 1;
                                          }
                                        }
                                        else {
LAB_0027486c:
                                          uVar18 = 2;
                                        }
                                      }
                                      else {
LAB_00274a28:
                                        uVar18 = 3;
                                      }
                                    }
                                    else {
LAB_00274a34:
                                      uVar18 = 4;
                                    }
                                  }
                                  else {
LAB_00274a40:
                                    uVar18 = 5;
                                  }
                                }
                                else {
LAB_00274a4c:
                                  uVar18 = 6;
                                }
                              }
                              else {
LAB_00274760:
                                uVar18 = 7;
                              }
                            }
                            else {
LAB_0027476c:
                              uVar18 = 8;
                            }
                          }
                          else {
LAB_00274658:
                            uVar18 = 9;
                          }
                        }
                        else {
LAB_00274664:
                          uVar18 = 10;
                        }
                      }
                      else {
LAB_00274680:
                        uVar18 = 0xb;
                      }
                    }
                    else {
LAB_00274240:
                      uVar18 = 0xc;
                    }
                  }
                  else {
LAB_0027424c:
                    uVar18 = 0xd;
                  }
                }
                else {
LAB_00274258:
                  uVar18 = 0xe;
                }
              }
              else {
LAB_00274168:
                uVar18 = 0xf;
              }
            }
            else {
LAB_002740a0:
              uVar18 = 0x10;
            }
          }
          else {
LAB_00274084:
            uVar18 = 0x11;
          }
        }
      }
LAB_00270cd0:
      uVar10 = 0;
      if (uVar14 != 0) {
        if ((int)uVar14 < 0) {
          if ((uVar14 & 0xffffc000) != 0xffffc000) {
            if ((uVar14 >> 0x1e & 1) == 0) goto LAB_002740f4;
            if ((uVar14 >> 0x1d & 1) == 0) goto LAB_00274054;
            if ((uVar14 >> 0x1c & 1) == 0) goto LAB_002741a0;
            if ((uVar14 >> 0x1b & 1) == 0) goto LAB_00274334;
            if ((uVar14 >> 0x1a & 1) == 0) goto LAB_0027432c;
            if ((uVar14 >> 0x19 & 1) == 0) goto LAB_00274324;
            if ((uVar14 >> 0x18 & 1) == 0) goto LAB_00274550;
            if ((uVar14 >> 0x17 & 1) == 0) goto LAB_00274560;
            if ((uVar14 >> 0x16 & 1) == 0) goto LAB_00274558;
            if ((uVar14 >> 0x15 & 1) == 0) goto LAB_002747b8;
            if ((uVar14 >> 0x14 & 1) == 0) goto LAB_002747b0;
            if ((uVar14 >> 0x13 & 1) == 0) goto LAB_0027490c;
            if ((uVar14 >> 0x12 & 1) == 0) goto LAB_00274904;
            if ((uVar14 >> 0x11 & 1) == 0) goto LAB_002748fc;
            if ((uVar14 >> 0x10 & 1) == 0) goto LAB_002748f4;
            if ((uVar14 >> 0xf & 1) == 0) goto LAB_00274a54;
            uVar10 = 0;
            if ((uVar14 >> 0xe & 1) == 0) goto LAB_00272764;
          }
        }
        else if ((uVar14 & 0xffffc000) != 0) {
          if ((uVar14 >> 0x1e & 1) == 0) {
            if ((uVar14 >> 0x1d & 1) == 0) {
              if ((uVar14 >> 0x1c & 1) == 0) {
                if ((uVar14 >> 0x1b & 1) == 0) {
                  if ((uVar14 >> 0x1a & 1) == 0) {
                    if ((uVar14 >> 0x19 & 1) == 0) {
                      if ((uVar14 >> 0x18 & 1) == 0) {
                        if ((uVar14 >> 0x17 & 1) == 0) {
                          if ((uVar14 >> 0x16 & 1) == 0) {
                            if ((uVar14 >> 0x15 & 1) == 0) {
                              if ((uVar14 >> 0x14 & 1) == 0) {
                                if ((uVar14 >> 0x13 & 1) == 0) {
                                  if ((uVar14 >> 0x12 & 1) == 0) {
                                    if ((uVar14 >> 0x11 & 1) == 0) {
                                      if ((uVar14 >> 0x10 & 1) == 0) {
                                        if ((uVar14 >> 0xf & 1) == 0) {
                                          uVar10 = 0;
                                          if ((uVar14 >> 0xe & 1) != 0) {
LAB_00272764:
                                            uVar10 = 1;
                                          }
                                        }
                                        else {
LAB_00274a54:
                                          uVar10 = 2;
                                        }
                                      }
                                      else {
LAB_002748f4:
                                        uVar10 = 3;
                                      }
                                    }
                                    else {
LAB_002748fc:
                                      uVar10 = 4;
                                    }
                                  }
                                  else {
LAB_00274904:
                                    uVar10 = 5;
                                  }
                                }
                                else {
LAB_0027490c:
                                  uVar10 = 6;
                                }
                              }
                              else {
LAB_002747b0:
                                uVar10 = 7;
                              }
                            }
                            else {
LAB_002747b8:
                              uVar10 = 8;
                            }
                          }
                          else {
LAB_00274558:
                            uVar10 = 9;
                          }
                        }
                        else {
LAB_00274560:
                          uVar10 = 10;
                        }
                      }
                      else {
LAB_00274550:
                        uVar10 = 0xb;
                      }
                    }
                    else {
LAB_00274324:
                      uVar10 = 0xc;
                    }
                  }
                  else {
LAB_0027432c:
                    uVar10 = 0xd;
                  }
                }
                else {
LAB_00274334:
                  uVar10 = 0xe;
                }
              }
              else {
LAB_002741a0:
                uVar10 = 0xf;
              }
            }
            else {
LAB_00274054:
              uVar10 = 0x10;
            }
          }
          else {
LAB_002740f4:
            uVar10 = 0x11;
          }
        }
      }
      iVar16 = 1;
      if (uVar18 < uVar12) {
        uVar18 = uVar12;
      }
      if (uVar18 < uVar10) {
        uVar18 = uVar10;
      }
      switch(uVar18) {
      case 1:
        iVar16 = 2;
        break;
      case 2:
        iVar16 = 4;
        break;
      case 3:
        iVar16 = 8;
        break;
      case 4:
        iVar16 = 0x10;
        break;
      case 5:
        iVar16 = 0x20;
        break;
      case 6:
        iVar16 = 0x40;
        break;
      case 7:
        iVar16 = 0x80;
        break;
      case 8:
        iVar16 = 0x100;
        break;
      case 9:
        iVar16 = 0x200;
        break;
      case 10:
        iVar16 = 0x400;
        break;
      case 0xb:
        iVar16 = 0x800;
        break;
      case 0xc:
        iVar16 = 0x1000;
        break;
      case 0xd:
        iVar16 = 0x2000;
        break;
      case 0xe:
        iVar16 = 0x4000;
        break;
      case 0xf:
        iVar16 = 0x8000;
        break;
      case 0x10:
        iVar16 = 0x10000;
        break;
      case 0x11:
        iVar16 = 0x20000;
      }
      iVar20 = 0;
      if (iVar16 != 0) {
        iVar20 = (int)uVar24 / iVar16;
      }
      iVar25 = 0;
      if (iVar16 != 0) {
        iVar25 = (int)uVar19 / iVar16;
      }
      iVar11 = 0;
      if (iVar16 != 0) {
        iVar11 = (int)uVar14 / iVar16;
      }
      iVar20 = iVar20 * iVar20 + iVar25 * iVar25 + iVar11 * iVar11;
      uVar12 = 0;
      if (iVar20 != 0) {
        if (iVar20 == 0x7fffffff) {
          iVar20 = 0x7ffffffe;
        }
        iVar25 = 0;
        if (iVar20 != 0) {
          iVar25 = iVar20 / iVar20;
        }
        iVar25 = (iVar20 + iVar25) / 2;
        iVar11 = iVar20;
        if (iVar25 < iVar20) {
          do {
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
          } while (iVar25 < iVar17);
        }
        uVar12 = iVar11 * iVar16;
      }
      uVar18 = uVar24;
      if ((int)uVar24 < (int)uVar14) {
        uVar18 = uVar14;
      }
      if ((int)uVar18 < (int)uVar19) {
        uVar18 = uVar19;
      }
      if ((int)uVar18 < (int)uVar12) {
        uVar18 = uVar12;
      }
      if (uVar18 == 0) goto LAB_00270eb0;
      uVar12 = 0;
      if (uVar19 != 0) {
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffff8000) != 0xffff8000) {
            if ((uVar19 >> 0x1e & 1) == 0) goto LAB_00274bb8;
            if ((uVar19 >> 0x1d & 1) == 0) goto LAB_00274bac;
            if ((uVar19 >> 0x1c & 1) == 0) goto LAB_00274d50;
            if ((uVar19 >> 0x1b & 1) == 0) goto LAB_00274d70;
            if ((uVar19 >> 0x1a & 1) == 0) goto LAB_00274d64;
            if ((uVar19 >> 0x19 & 1) == 0) goto LAB_002753a8;
            if ((uVar19 >> 0x18 & 1) == 0) goto LAB_0027539c;
            if ((uVar19 >> 0x17 & 1) == 0) goto LAB_002752e4;
            if ((uVar19 >> 0x16 & 1) == 0) goto LAB_002752d8;
            if ((uVar19 >> 0x15 & 1) == 0) goto LAB_002752cc;
            if ((uVar19 >> 0x14 & 1) == 0) goto LAB_002752c0;
            if ((uVar19 >> 0x13 & 1) == 0) goto LAB_002752b4;
            if ((uVar19 >> 0x12 & 1) == 0) goto LAB_002752a8;
            if ((uVar19 >> 0x11 & 1) == 0) goto LAB_0027529c;
            if ((uVar19 >> 0x10 & 1) == 0) goto LAB_00275290;
            uVar12 = 0;
            if ((uVar19 >> 0xf & 1) == 0) goto LAB_0027363c;
          }
        }
        else if ((uVar19 & 0xffff8000) != 0) {
          if ((uVar19 >> 0x1e & 1) == 0) {
            if ((uVar19 >> 0x1d & 1) == 0) {
              if ((uVar19 >> 0x1c & 1) == 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
                  if ((uVar19 >> 0x1a & 1) == 0) {
                    if ((uVar19 >> 0x19 & 1) == 0) {
                      if ((uVar19 >> 0x18 & 1) == 0) {
                        if ((uVar19 >> 0x17 & 1) == 0) {
                          if ((uVar19 >> 0x16 & 1) == 0) {
                            if ((uVar19 >> 0x15 & 1) == 0) {
                              if ((uVar19 >> 0x14 & 1) == 0) {
                                if ((uVar19 >> 0x13 & 1) == 0) {
                                  if ((uVar19 >> 0x12 & 1) == 0) {
                                    if ((uVar19 >> 0x11 & 1) == 0) {
                                      if ((uVar19 >> 0x10 & 1) == 0) {
                                        if ((uVar19 >> 0xf & 1) != 0) {
LAB_0027363c:
                                          uVar12 = 1;
                                        }
                                      }
                                      else {
LAB_00275290:
                                        uVar12 = 2;
                                      }
                                    }
                                    else {
LAB_0027529c:
                                      uVar12 = 3;
                                    }
                                  }
                                  else {
LAB_002752a8:
                                    uVar12 = 4;
                                  }
                                }
                                else {
LAB_002752b4:
                                  uVar12 = 5;
                                }
                              }
                              else {
LAB_002752c0:
                                uVar12 = 6;
                              }
                            }
                            else {
LAB_002752cc:
                              uVar12 = 7;
                            }
                          }
                          else {
LAB_002752d8:
                            uVar12 = 8;
                          }
                        }
                        else {
LAB_002752e4:
                          uVar12 = 9;
                        }
                      }
                      else {
LAB_0027539c:
                        uVar12 = 10;
                      }
                    }
                    else {
LAB_002753a8:
                      uVar12 = 0xb;
                    }
                  }
                  else {
LAB_00274d64:
                    uVar12 = 0xc;
                  }
                }
                else {
LAB_00274d70:
                  uVar12 = 0xd;
                }
              }
              else {
LAB_00274d50:
                uVar12 = 0xe;
              }
            }
            else {
LAB_00274bac:
              uVar12 = 0xf;
            }
          }
          else {
LAB_00274bb8:
            uVar12 = 0x10;
          }
        }
      }
      uVar10 = 0;
      if (uVar24 != 0) {
        if ((int)uVar24 < 0) {
          if ((uVar24 & 0xffff8000) != 0xffff8000) {
            if ((uVar24 >> 0x1e & 1) == 0) goto LAB_00274be4;
            if ((uVar24 >> 0x1d & 1) == 0) goto LAB_00274bf0;
            if ((uVar24 >> 0x1c & 1) == 0) goto LAB_00274e1c;
            if ((uVar24 >> 0x1b & 1) == 0) goto LAB_00274e98;
            if ((uVar24 >> 0x1a & 1) == 0) goto LAB_00274e8c;
            if ((uVar24 >> 0x19 & 1) == 0) goto LAB_00274f08;
            if ((uVar24 >> 0x18 & 1) == 0) goto LAB_00274efc;
            if ((uVar24 >> 0x17 & 1) == 0) goto LAB_0027518c;
            if ((uVar24 >> 0x16 & 1) == 0) goto LAB_00275180;
            if ((uVar24 >> 0x15 & 1) == 0) goto LAB_00275174;
            if ((uVar24 >> 0x14 & 1) == 0) goto LAB_00275168;
            if ((uVar24 >> 0x13 & 1) == 0) goto LAB_0027515c;
            if ((uVar24 >> 0x12 & 1) == 0) goto LAB_00275150;
            if ((uVar24 >> 0x11 & 1) == 0) goto LAB_00275144;
            if ((uVar24 >> 0x10 & 1) == 0) goto LAB_00275138;
            uVar10 = 0;
            if ((uVar24 >> 0xf & 1) == 0) goto LAB_00273698;
          }
        }
        else if ((uVar24 & 0xffff8000) != 0) {
          if ((uVar24 >> 0x1e & 1) == 0) {
            if ((uVar24 >> 0x1d & 1) == 0) {
              if ((uVar24 >> 0x1c & 1) == 0) {
                if ((uVar24 >> 0x1b & 1) == 0) {
                  if ((uVar24 >> 0x1a & 1) == 0) {
                    if ((uVar24 >> 0x19 & 1) == 0) {
                      if ((uVar24 >> 0x18 & 1) == 0) {
                        if ((uVar24 >> 0x17 & 1) == 0) {
                          if ((uVar24 >> 0x16 & 1) == 0) {
                            if ((uVar24 >> 0x15 & 1) == 0) {
                              if ((uVar24 >> 0x14 & 1) == 0) {
                                if ((uVar24 >> 0x13 & 1) == 0) {
                                  if ((uVar24 >> 0x12 & 1) == 0) {
                                    if ((uVar24 >> 0x11 & 1) == 0) {
                                      if ((uVar24 >> 0x10 & 1) == 0) {
                                        uVar10 = 0;
                                        if ((uVar24 >> 0xf & 1) != 0) {
LAB_00273698:
                                          uVar10 = 1;
                                        }
                                      }
                                      else {
LAB_00275138:
                                        uVar10 = 2;
                                      }
                                    }
                                    else {
LAB_00275144:
                                      uVar10 = 3;
                                    }
                                  }
                                  else {
LAB_00275150:
                                    uVar10 = 4;
                                  }
                                }
                                else {
LAB_0027515c:
                                  uVar10 = 5;
                                }
                              }
                              else {
LAB_00275168:
                                uVar10 = 6;
                              }
                            }
                            else {
LAB_00275174:
                              uVar10 = 7;
                            }
                          }
                          else {
LAB_00275180:
                            uVar10 = 8;
                          }
                        }
                        else {
LAB_0027518c:
                          uVar10 = 9;
                        }
                      }
                      else {
LAB_00274efc:
                        uVar10 = 10;
                      }
                    }
                    else {
LAB_00274f08:
                      uVar10 = 0xb;
                    }
                  }
                  else {
LAB_00274e8c:
                    uVar10 = 0xc;
                  }
                }
                else {
LAB_00274e98:
                  uVar10 = 0xd;
                }
              }
              else {
LAB_00274e1c:
                uVar10 = 0xe;
              }
            }
            else {
LAB_00274bf0:
              uVar10 = 0xf;
            }
          }
          else {
LAB_00274be4:
            uVar10 = 0x10;
          }
        }
      }
      uVar23 = 0;
      if (uVar14 != 0) {
        if ((int)uVar14 < 0) {
          if ((uVar14 & 0xffff8000) != 0xffff8000) {
            if ((uVar14 >> 0x1e & 1) == 0) goto LAB_00274cf0;
            if ((uVar14 >> 0x1d & 1) == 0) goto LAB_00274ba4;
            if ((uVar14 >> 0x1c & 1) == 0) goto LAB_00274d5c;
            if ((uVar14 >> 0x1b & 1) == 0) goto LAB_00274e0c;
            if ((uVar14 >> 0x1a & 1) == 0) goto LAB_00274e04;
            if ((uVar14 >> 0x19 & 1) == 0) goto LAB_00275308;
            if ((uVar14 >> 0x18 & 1) == 0) goto LAB_00275300;
            if ((uVar14 >> 0x17 & 1) == 0) goto LAB_002753ec;
            if ((uVar14 >> 0x16 & 1) == 0) goto LAB_002753e4;
            if ((uVar14 >> 0x15 & 1) == 0) goto LAB_002753dc;
            if ((uVar14 >> 0x14 & 1) == 0) goto LAB_002753d4;
            if ((uVar14 >> 0x13 & 1) == 0) goto LAB_002753cc;
            if ((uVar14 >> 0x12 & 1) == 0) goto LAB_002753c4;
            if ((uVar14 >> 0x11 & 1) == 0) goto LAB_002753bc;
            if ((uVar14 >> 0x10 & 1) == 0) goto LAB_002753b4;
            uVar23 = 0;
            if ((uVar14 >> 0xf & 1) == 0) goto LAB_002736f4;
          }
        }
        else if ((uVar14 & 0xffff8000) != 0) {
          if ((uVar14 >> 0x1e & 1) == 0) {
            if ((uVar14 >> 0x1d & 1) == 0) {
              if ((uVar14 >> 0x1c & 1) == 0) {
                if ((uVar14 >> 0x1b & 1) == 0) {
                  if ((uVar14 >> 0x1a & 1) == 0) {
                    if ((uVar14 >> 0x19 & 1) == 0) {
                      if ((uVar14 >> 0x18 & 1) == 0) {
                        if ((uVar14 >> 0x17 & 1) == 0) {
                          if ((uVar14 >> 0x16 & 1) == 0) {
                            if ((uVar14 >> 0x15 & 1) == 0) {
                              if ((uVar14 >> 0x14 & 1) == 0) {
                                if ((uVar14 >> 0x13 & 1) == 0) {
                                  if ((uVar14 >> 0x12 & 1) == 0) {
                                    if ((uVar14 >> 0x11 & 1) == 0) {
                                      if ((uVar14 >> 0x10 & 1) == 0) {
                                        uVar23 = 0;
                                        if ((uVar14 >> 0xf & 1) != 0) {
LAB_002736f4:
                                          uVar23 = 1;
                                        }
                                      }
                                      else {
LAB_002753b4:
                                        uVar23 = 2;
                                      }
                                    }
                                    else {
LAB_002753bc:
                                      uVar23 = 3;
                                    }
                                  }
                                  else {
LAB_002753c4:
                                    uVar23 = 4;
                                  }
                                }
                                else {
LAB_002753cc:
                                  uVar23 = 5;
                                }
                              }
                              else {
LAB_002753d4:
                                uVar23 = 6;
                              }
                            }
                            else {
LAB_002753dc:
                              uVar23 = 7;
                            }
                          }
                          else {
LAB_002753e4:
                            uVar23 = 8;
                          }
                        }
                        else {
LAB_002753ec:
                          uVar23 = 9;
                        }
                      }
                      else {
LAB_00275300:
                        uVar23 = 10;
                      }
                    }
                    else {
LAB_00275308:
                      uVar23 = 0xb;
                    }
                  }
                  else {
LAB_00274e04:
                    uVar23 = 0xc;
                  }
                }
                else {
LAB_00274e0c:
                  uVar23 = 0xd;
                }
              }
              else {
LAB_00274d5c:
                uVar23 = 0xe;
              }
            }
            else {
LAB_00274ba4:
              uVar23 = 0xf;
            }
          }
          else {
LAB_00274cf0:
            uVar23 = 0x10;
          }
        }
      }
      if (uVar10 < uVar12) {
        uVar10 = uVar12;
      }
      if (uVar10 < uVar23) {
        uVar10 = uVar23;
      }
      switch(uVar10) {
      case 1:
        iVar16 = 2;
        break;
      case 2:
        iVar16 = 4;
        break;
      case 3:
        iVar16 = 8;
        break;
      case 4:
        iVar16 = 0x10;
        break;
      case 5:
        iVar16 = 0x20;
        break;
      case 6:
        iVar16 = 0x40;
        break;
      case 7:
        iVar16 = 0x80;
        break;
      case 8:
        iVar16 = 0x100;
        break;
      case 9:
        iVar16 = 0x200;
        break;
      case 10:
        iVar16 = 0x400;
        break;
      case 0xb:
        iVar16 = 0x800;
        break;
      case 0xc:
        iVar16 = 0x1000;
        break;
      case 0xd:
        iVar16 = 0x2000;
        break;
      case 0xe:
        iVar16 = 0x4000;
        break;
      case 0xf:
        iVar16 = 0x8000;
        break;
      case 0x10:
        iVar16 = 0x10000;
        break;
      default:
        iVar16 = 1;
        uVar12 = uVar18;
        goto LAB_0027181c;
      }
      uVar12 = 0;
      if (iVar16 != 0) {
        uVar12 = (int)uVar18 / iVar16;
      }
      if (uVar12 == 0) goto LAB_00270eb0;
LAB_0027181c:
      if (uVar19 != 0) {
        iVar20 = 0;
        if (iVar16 != 0) {
          iVar20 = (int)uVar19 / iVar16;
        }
        uVar22 = 0;
        if ((long)(int)uVar12 != 0) {
          uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar12);
        }
        *(undefined4 *)(param_1 + 0x148) = uVar22;
      }
      if (uVar24 != 0) {
        iVar20 = 0;
        if (iVar16 != 0) {
          iVar20 = (int)uVar24 / iVar16;
        }
        uVar22 = 0;
        if ((long)(int)uVar12 != 0) {
          uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar12);
        }
        *(undefined4 *)(param_1 + 0x14c) = uVar22;
      }
      if (uVar14 != 0) {
        uVar15 = uVar15 | 2;
        iVar20 = 0;
        if (iVar16 != 0) {
          iVar20 = (int)uVar14 / iVar16;
        }
        uVar22 = 0;
        if ((long)(int)uVar12 != 0) {
          uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar12);
        }
        *(undefined4 *)(param_1 + 0x150) = uVar22;
        goto LAB_00270ec0;
      }
    }
    uVar15 = uVar15 | 2;
  }
LAB_00270ec0:
  if (uVar15 >> 1 != 0) {
    uVar14 = *(int *)(param_1 + 0x14c) * *(int *)(param_1 + 0x144) -
             *(int *)(param_1 + 0x140) * *(int *)(param_1 + 0x150);
    uVar19 = *(int *)(param_1 + 0x150) * *(int *)(param_1 + 0x13c) -
             *(int *)(param_1 + 0x144) * *(int *)(param_1 + 0x148);
    uVar24 = *(int *)(param_1 + 0x140) * *(int *)(param_1 + 0x148) -
             *(int *)(param_1 + 0x14c) * *(int *)(param_1 + 0x13c);
    *(uint *)(param_1 + 0x154) = uVar14;
    *(uint *)(param_1 + 0x158) = uVar19;
    *(uint *)(param_1 + 0x15c) = uVar24;
    if (uVar14 == 0) {
      uVar12 = 0;
      if (uVar24 != 0 || uVar19 != 0) goto LAB_00271ab0;
    }
    else {
      if ((int)uVar14 < 0) {
        if ((uVar14 & 0xffffc000) == 0xffffc000) {
          uVar12 = 0;
        }
        else {
          if ((uVar14 >> 0x1e & 1) == 0) goto LAB_00275400;
          if ((uVar14 >> 0x1d & 1) == 0) goto LAB_002753f4;
          if ((uVar14 >> 0x1c & 1) == 0) goto LAB_002750c4;
          if ((uVar14 >> 0x1b & 1) == 0) goto LAB_002750b8;
          if ((uVar14 >> 0x1a & 1) == 0) goto LAB_002750ac;
          if ((uVar14 >> 0x19 & 1) == 0) goto LAB_002750a0;
          if ((uVar14 >> 0x18 & 1) == 0) goto LAB_0027534c;
          if ((uVar14 >> 0x17 & 1) == 0) goto LAB_00275340;
          if ((uVar14 >> 0x16 & 1) == 0) goto LAB_00275790;
          if ((uVar14 >> 0x15 & 1) == 0) goto LAB_00275784;
          if ((uVar14 >> 0x14 & 1) == 0) goto LAB_002757bc;
          if ((uVar14 >> 0x13 & 1) == 0) goto LAB_002757b4;
          if ((uVar14 >> 0x12 & 1) == 0) goto LAB_002757a8;
          if ((uVar14 >> 0x11 & 1) == 0) goto LAB_0027579c;
          if ((uVar14 >> 0x10 & 1) == 0) goto LAB_00275748;
          if ((uVar14 >> 0xf & 1) == 0) goto LAB_0027573c;
          uVar12 = 0;
          if ((uVar14 >> 0xe & 1) == 0) {
            uVar12 = 1;
          }
        }
      }
      else {
        uVar12 = 0;
        if ((uVar14 & 0xffffc000) != 0) {
          if ((uVar14 >> 0x1e & 1) == 0) {
            if ((uVar14 >> 0x1d & 1) == 0) {
              if ((uVar14 >> 0x1c & 1) == 0) {
                if ((uVar14 >> 0x1b & 1) == 0) {
                  if ((uVar14 >> 0x1a & 1) == 0) {
                    if ((uVar14 >> 0x19 & 1) == 0) {
                      if ((uVar14 >> 0x18 & 1) == 0) {
                        if ((uVar14 >> 0x17 & 1) == 0) {
                          if ((uVar14 >> 0x16 & 1) == 0) {
                            if ((uVar14 >> 0x15 & 1) == 0) {
                              if ((uVar14 >> 0x14 & 1) == 0) {
                                if ((uVar14 >> 0x13 & 1) == 0) {
                                  if ((uVar14 >> 0x12 & 1) == 0) {
                                    if ((uVar14 >> 0x11 & 1) == 0) {
                                      if ((uVar14 >> 0x10 & 1) == 0) {
                                        if ((uVar14 >> 0xf & 1) == 0) {
                                          if ((uVar14 >> 0xe & 1) != 0) {
                                            uVar12 = 1;
                                          }
                                        }
                                        else {
LAB_0027573c:
                                          uVar12 = 2;
                                        }
                                      }
                                      else {
LAB_00275748:
                                        uVar12 = 3;
                                      }
                                    }
                                    else {
LAB_0027579c:
                                      uVar12 = 4;
                                    }
                                  }
                                  else {
LAB_002757a8:
                                    uVar12 = 5;
                                  }
                                }
                                else {
LAB_002757b4:
                                  uVar12 = 6;
                                }
                              }
                              else {
LAB_002757bc:
                                uVar12 = 7;
                              }
                            }
                            else {
LAB_00275784:
                              uVar12 = 8;
                            }
                          }
                          else {
LAB_00275790:
                            uVar12 = 9;
                          }
                        }
                        else {
LAB_00275340:
                          uVar12 = 10;
                        }
                      }
                      else {
LAB_0027534c:
                        uVar12 = 0xb;
                      }
                    }
                    else {
LAB_002750a0:
                      uVar12 = 0xc;
                    }
                  }
                  else {
LAB_002750ac:
                    uVar12 = 0xd;
                  }
                }
                else {
LAB_002750b8:
                  uVar12 = 0xe;
                }
              }
              else {
LAB_002750c4:
                uVar12 = 0xf;
              }
            }
            else {
LAB_002753f4:
              uVar12 = 0x10;
            }
          }
          else {
LAB_00275400:
            uVar12 = 0x11;
          }
        }
      }
LAB_00271ab0:
      uVar18 = 0;
      if (uVar19 != 0) {
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffffc000) != 0xffffc000) {
            if ((uVar19 >> 0x1e & 1) == 0) goto LAB_00274f1c;
            if ((uVar19 >> 0x1d & 1) == 0) goto LAB_00274f34;
            if ((uVar19 >> 0x1c & 1) == 0) goto LAB_00274f28;
            if ((uVar19 >> 0x1b & 1) == 0) goto LAB_00274f64;
            if ((uVar19 >> 0x1a & 1) == 0) goto LAB_00274f58;
            if ((uVar19 >> 0x19 & 1) == 0) goto LAB_00274f4c;
            if ((uVar19 >> 0x18 & 1) == 0) goto LAB_00274f40;
            if ((uVar19 >> 0x17 & 1) == 0) goto LAB_00274f70;
            if ((uVar19 >> 0x16 & 1) == 0) goto LAB_00275634;
            if ((uVar19 >> 0x15 & 1) == 0) goto LAB_00275628;
            if ((uVar19 >> 0x14 & 1) == 0) goto LAB_0027561c;
            if ((uVar19 >> 0x13 & 1) == 0) goto LAB_0027568c;
            if ((uVar19 >> 0x12 & 1) == 0) goto LAB_00275684;
            if ((uVar19 >> 0x11 & 1) == 0) goto LAB_00275678;
            if ((uVar19 >> 0x10 & 1) == 0) goto LAB_0027566c;
            if ((uVar19 >> 0xf & 1) == 0) goto LAB_00275640;
            uVar18 = 0;
            if ((uVar19 >> 0xe & 1) == 0) goto LAB_00273af8;
          }
        }
        else if ((uVar19 & 0xffffc000) != 0) {
          if ((uVar19 >> 0x1e & 1) == 0) {
            if ((uVar19 >> 0x1d & 1) == 0) {
              if ((uVar19 >> 0x1c & 1) == 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
                  if ((uVar19 >> 0x1a & 1) == 0) {
                    if ((uVar19 >> 0x19 & 1) == 0) {
                      if ((uVar19 >> 0x18 & 1) == 0) {
                        if ((uVar19 >> 0x17 & 1) == 0) {
                          if ((uVar19 >> 0x16 & 1) == 0) {
                            if ((uVar19 >> 0x15 & 1) == 0) {
                              if ((uVar19 >> 0x14 & 1) == 0) {
                                if ((uVar19 >> 0x13 & 1) == 0) {
                                  if ((uVar19 >> 0x12 & 1) == 0) {
                                    if ((uVar19 >> 0x11 & 1) == 0) {
                                      if ((uVar19 >> 0x10 & 1) == 0) {
                                        if ((uVar19 >> 0xf & 1) == 0) {
                                          if ((uVar19 >> 0xe & 1) != 0) {
LAB_00273af8:
                                            uVar18 = 1;
                                          }
                                        }
                                        else {
LAB_00275640:
                                          uVar18 = 2;
                                        }
                                      }
                                      else {
LAB_0027566c:
                                        uVar18 = 3;
                                      }
                                    }
                                    else {
LAB_00275678:
                                      uVar18 = 4;
                                    }
                                  }
                                  else {
LAB_00275684:
                                    uVar18 = 5;
                                  }
                                }
                                else {
LAB_0027568c:
                                  uVar18 = 6;
                                }
                              }
                              else {
LAB_0027561c:
                                uVar18 = 7;
                              }
                            }
                            else {
LAB_00275628:
                              uVar18 = 8;
                            }
                          }
                          else {
LAB_00275634:
                            uVar18 = 9;
                          }
                        }
                        else {
LAB_00274f70:
                          uVar18 = 10;
                        }
                      }
                      else {
LAB_00274f40:
                        uVar18 = 0xb;
                      }
                    }
                    else {
LAB_00274f4c:
                      uVar18 = 0xc;
                    }
                  }
                  else {
LAB_00274f58:
                    uVar18 = 0xd;
                  }
                }
                else {
LAB_00274f64:
                  uVar18 = 0xe;
                }
              }
              else {
LAB_00274f28:
                uVar18 = 0xf;
              }
            }
            else {
LAB_00274f34:
              uVar18 = 0x10;
            }
          }
          else {
LAB_00274f1c:
            uVar18 = 0x11;
          }
        }
      }
      uVar10 = 0;
      if (uVar24 != 0) {
        if ((int)uVar24 < 0) {
          if ((uVar24 & 0xffffc000) != 0xffffc000) {
            if ((uVar24 >> 0x1e & 1) == 0) goto LAB_00274f7c;
            if ((uVar24 >> 0x1d & 1) == 0) goto LAB_00274f8c;
            if ((uVar24 >> 0x1c & 1) == 0) goto LAB_00274f84;
            if ((uVar24 >> 0x1b & 1) == 0) goto LAB_00274fac;
            if ((uVar24 >> 0x1a & 1) == 0) goto LAB_00274fa4;
            if ((uVar24 >> 0x19 & 1) == 0) goto LAB_00274f9c;
            if ((uVar24 >> 0x18 & 1) == 0) goto LAB_00274f94;
            if ((uVar24 >> 0x17 & 1) == 0) goto LAB_00274fb4;
            if ((uVar24 >> 0x16 & 1) == 0) goto LAB_002756dc;
            if ((uVar24 >> 0x15 & 1) == 0) goto LAB_0027569c;
            if ((uVar24 >> 0x14 & 1) == 0) goto LAB_00275694;
            if ((uVar24 >> 0x13 & 1) == 0) goto LAB_00275664;
            if ((uVar24 >> 0x12 & 1) == 0) goto LAB_0027565c;
            if ((uVar24 >> 0x11 & 1) == 0) goto LAB_00275654;
            if ((uVar24 >> 0x10 & 1) == 0) goto LAB_0027564c;
            if ((uVar24 >> 0xf & 1) == 0) goto LAB_002757d0;
            uVar10 = 0;
            if ((uVar24 >> 0xe & 1) == 0) goto LAB_00273b58;
          }
        }
        else if ((uVar24 & 0xffffc000) != 0) {
          if ((uVar24 >> 0x1e & 1) == 0) {
            if ((uVar24 >> 0x1d & 1) == 0) {
              if ((uVar24 >> 0x1c & 1) == 0) {
                if ((uVar24 >> 0x1b & 1) == 0) {
                  if ((uVar24 >> 0x1a & 1) == 0) {
                    if ((uVar24 >> 0x19 & 1) == 0) {
                      if ((uVar24 >> 0x18 & 1) == 0) {
                        if ((uVar24 >> 0x17 & 1) == 0) {
                          if ((uVar24 >> 0x16 & 1) == 0) {
                            if ((uVar24 >> 0x15 & 1) == 0) {
                              if ((uVar24 >> 0x14 & 1) == 0) {
                                if ((uVar24 >> 0x13 & 1) == 0) {
                                  if ((uVar24 >> 0x12 & 1) == 0) {
                                    if ((uVar24 >> 0x11 & 1) == 0) {
                                      if ((uVar24 >> 0x10 & 1) == 0) {
                                        if ((uVar24 >> 0xf & 1) == 0) {
                                          uVar10 = 0;
                                          if ((uVar24 >> 0xe & 1) != 0) {
LAB_00273b58:
                                            uVar10 = 1;
                                          }
                                        }
                                        else {
LAB_002757d0:
                                          uVar10 = 2;
                                        }
                                      }
                                      else {
LAB_0027564c:
                                        uVar10 = 3;
                                      }
                                    }
                                    else {
LAB_00275654:
                                      uVar10 = 4;
                                    }
                                  }
                                  else {
LAB_0027565c:
                                    uVar10 = 5;
                                  }
                                }
                                else {
LAB_00275664:
                                  uVar10 = 6;
                                }
                              }
                              else {
LAB_00275694:
                                uVar10 = 7;
                              }
                            }
                            else {
LAB_0027569c:
                              uVar10 = 8;
                            }
                          }
                          else {
LAB_002756dc:
                            uVar10 = 9;
                          }
                        }
                        else {
LAB_00274fb4:
                          uVar10 = 10;
                        }
                      }
                      else {
LAB_00274f94:
                        uVar10 = 0xb;
                      }
                    }
                    else {
LAB_00274f9c:
                      uVar10 = 0xc;
                    }
                  }
                  else {
LAB_00274fa4:
                    uVar10 = 0xd;
                  }
                }
                else {
LAB_00274fac:
                  uVar10 = 0xe;
                }
              }
              else {
LAB_00274f84:
                uVar10 = 0xf;
              }
            }
            else {
LAB_00274f8c:
              uVar10 = 0x10;
            }
          }
          else {
LAB_00274f7c:
            uVar10 = 0x11;
          }
        }
      }
      iVar16 = 1;
      if (uVar18 < uVar12) {
        uVar18 = uVar12;
      }
      if (uVar18 < uVar10) {
        uVar18 = uVar10;
      }
      switch(uVar18) {
      case 1:
        iVar16 = 2;
        break;
      case 2:
        iVar16 = 4;
        break;
      case 3:
        iVar16 = 8;
        break;
      case 4:
        iVar16 = 0x10;
        break;
      case 5:
        iVar16 = 0x20;
        break;
      case 6:
        iVar16 = 0x40;
        break;
      case 7:
        iVar16 = 0x80;
        break;
      case 8:
        iVar16 = 0x100;
        break;
      case 9:
        iVar16 = 0x200;
        break;
      case 10:
        iVar16 = 0x400;
        break;
      case 0xb:
        iVar16 = 0x800;
        break;
      case 0xc:
        iVar16 = 0x1000;
        break;
      case 0xd:
        iVar16 = 0x2000;
        break;
      case 0xe:
        iVar16 = 0x4000;
        break;
      case 0xf:
        iVar16 = 0x8000;
        break;
      case 0x10:
        iVar16 = 0x10000;
        break;
      case 0x11:
        iVar16 = 0x20000;
      }
      iVar20 = 0;
      if (iVar16 != 0) {
        iVar20 = (int)uVar19 / iVar16;
      }
      iVar25 = 0;
      if (iVar16 != 0) {
        iVar25 = (int)uVar14 / iVar16;
      }
      iVar11 = 0;
      if (iVar16 != 0) {
        iVar11 = (int)uVar24 / iVar16;
      }
      iVar20 = iVar20 * iVar20 + iVar25 * iVar25 + iVar11 * iVar11;
      uVar12 = 0;
      if (iVar20 != 0) {
        if (iVar20 == 0x7fffffff) {
          iVar20 = 0x7ffffffe;
        }
        iVar25 = 0;
        if (iVar20 != 0) {
          iVar25 = iVar20 / iVar20;
        }
        iVar25 = (iVar20 + iVar25) / 2;
        iVar11 = iVar20;
        if (iVar25 < iVar20) {
          do {
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
            if (iVar17 <= iVar25) break;
            iVar11 = 0;
            if (iVar25 != 0) {
              iVar11 = iVar20 / iVar25;
            }
            iVar17 = (iVar25 + iVar11) / 2;
            iVar11 = iVar25;
            if (iVar25 <= iVar17) break;
            iVar25 = 0;
            if (iVar17 != 0) {
              iVar25 = iVar20 / iVar17;
            }
            iVar25 = (iVar17 + iVar25) / 2;
            iVar11 = iVar17;
          } while (iVar25 < iVar17);
        }
        uVar12 = iVar11 * iVar16;
      }
      uVar18 = uVar19;
      if ((int)uVar19 < (int)uVar14) {
        uVar18 = uVar14;
      }
      if ((int)uVar18 < (int)uVar24) {
        uVar18 = uVar24;
      }
      if ((int)uVar18 < (int)uVar12) {
        uVar18 = uVar12;
      }
      if (uVar18 == 0) goto LAB_00271ce8;
      bVar7 = 0;
      if (uVar14 != 0) {
        if ((int)uVar14 < 0) {
          if ((uVar14 & 0xffff8000) != 0xffff8000) {
            if ((uVar14 >> 0x1e & 1) == 0) goto LAB_00275a08;
            if ((uVar14 >> 0x1d & 1) == 0) goto LAB_00275a5c;
            if ((uVar14 >> 0x1c & 1) == 0) goto LAB_00275a50;
            if ((uVar14 >> 0x1b & 1) == 0) goto LAB_00275bb0;
            if ((uVar14 >> 0x1a & 1) == 0) goto LAB_00275ba4;
            if ((uVar14 >> 0x19 & 1) == 0) goto LAB_00275b98;
            if ((uVar14 >> 0x18 & 1) == 0) goto LAB_00275b8c;
            if ((uVar14 >> 0x17 & 1) == 0) goto LAB_002759d0;
            if ((uVar14 >> 0x16 & 1) == 0) goto LAB_002759c4;
            if ((uVar14 >> 0x15 & 1) == 0) goto LAB_002759b8;
            if ((uVar14 >> 0x14 & 1) == 0) goto LAB_002759ac;
            if ((uVar14 >> 0x13 & 1) == 0) goto LAB_002759a0;
            if ((uVar14 >> 0x12 & 1) == 0) goto LAB_00275994;
            if ((uVar14 >> 0x11 & 1) == 0) goto LAB_00275988;
            if ((uVar14 >> 0x10 & 1) == 0) goto LAB_00275cb0;
            bVar7 = (uVar14 & 0x8000) != 0x8000;
          }
        }
        else if ((uVar14 & 0xffff8000) != 0) {
          if ((uVar14 >> 0x1e & 1) == 0) {
            if ((uVar14 >> 0x1d & 1) == 0) {
              if ((uVar14 >> 0x1c & 1) == 0) {
                if ((uVar14 >> 0x1b & 1) == 0) {
                  if ((uVar14 >> 0x1a & 1) == 0) {
                    if ((uVar14 >> 0x19 & 1) == 0) {
                      if ((uVar14 >> 0x18 & 1) == 0) {
                        if ((uVar14 >> 0x17 & 1) == 0) {
                          if ((uVar14 >> 0x16 & 1) == 0) {
                            if ((uVar14 >> 0x15 & 1) == 0) {
                              if ((uVar14 >> 0x14 & 1) == 0) {
                                if ((uVar14 >> 0x13 & 1) == 0) {
                                  if ((uVar14 >> 0x12 & 1) == 0) {
                                    if ((uVar14 >> 0x11 & 1) == 0) {
                                      if ((uVar14 >> 0x10 & 1) == 0) {
                                        if ((uVar14 >> 0xf & 1) != 0) {
                                          bVar7 = 1;
                                        }
                                      }
                                      else {
LAB_00275cb0:
                                        bVar7 = 2;
                                      }
                                    }
                                    else {
LAB_00275988:
                                      bVar7 = 3;
                                    }
                                  }
                                  else {
LAB_00275994:
                                    bVar7 = 4;
                                  }
                                }
                                else {
LAB_002759a0:
                                  bVar7 = 5;
                                }
                              }
                              else {
LAB_002759ac:
                                bVar7 = 6;
                              }
                            }
                            else {
LAB_002759b8:
                              bVar7 = 7;
                            }
                          }
                          else {
LAB_002759c4:
                            bVar7 = 8;
                          }
                        }
                        else {
LAB_002759d0:
                          bVar7 = 9;
                        }
                      }
                      else {
LAB_00275b8c:
                        bVar7 = 10;
                      }
                    }
                    else {
LAB_00275b98:
                      bVar7 = 0xb;
                    }
                  }
                  else {
LAB_00275ba4:
                    bVar7 = 0xc;
                  }
                }
                else {
LAB_00275bb0:
                  bVar7 = 0xd;
                }
              }
              else {
LAB_00275a50:
                bVar7 = 0xe;
              }
            }
            else {
LAB_00275a5c:
              bVar7 = 0xf;
            }
          }
          else {
LAB_00275a08:
            bVar7 = 0x10;
          }
        }
      }
      bVar6 = 0;
      if (uVar19 != 0) {
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffff8000) != 0xffff8000) {
            if ((uVar19 >> 0x1e & 1) == 0) goto LAB_00275ae4;
            if ((uVar19 >> 0x1d & 1) == 0) goto LAB_00275afc;
            if ((uVar19 >> 0x1c & 1) == 0) goto LAB_00275af0;
            if ((uVar19 >> 0x1b & 1) == 0) goto LAB_00275b2c;
            if ((uVar19 >> 0x1a & 1) == 0) goto LAB_00275b20;
            if ((uVar19 >> 0x19 & 1) == 0) goto LAB_00275b14;
            if ((uVar19 >> 0x18 & 1) == 0) goto LAB_00275b08;
            if ((uVar19 >> 0x17 & 1) == 0) goto LAB_00275b80;
            if ((uVar19 >> 0x16 & 1) == 0) goto LAB_00275b74;
            if ((uVar19 >> 0x15 & 1) == 0) goto LAB_00275b68;
            if ((uVar19 >> 0x14 & 1) == 0) goto LAB_00275b5c;
            if ((uVar19 >> 0x13 & 1) == 0) goto LAB_00275b50;
            if ((uVar19 >> 0x12 & 1) == 0) goto LAB_00275b44;
            if ((uVar19 >> 0x11 & 1) == 0) goto LAB_00275b38;
            if ((uVar19 >> 0x10 & 1) == 0) goto LAB_00275c14;
            bVar6 = (uVar19 & 0x8000) != 0x8000;
          }
        }
        else if ((uVar19 & 0xffff8000) != 0) {
          if ((uVar19 >> 0x1e & 1) == 0) {
            if ((uVar19 >> 0x1d & 1) == 0) {
              if ((uVar19 >> 0x1c & 1) == 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
                  if ((uVar19 >> 0x1a & 1) == 0) {
                    if ((uVar19 >> 0x19 & 1) == 0) {
                      if ((uVar19 >> 0x18 & 1) == 0) {
                        if ((uVar19 >> 0x17 & 1) == 0) {
                          if ((uVar19 >> 0x16 & 1) == 0) {
                            if ((uVar19 >> 0x15 & 1) == 0) {
                              if ((uVar19 >> 0x14 & 1) == 0) {
                                if ((uVar19 >> 0x13 & 1) == 0) {
                                  if ((uVar19 >> 0x12 & 1) == 0) {
                                    if ((uVar19 >> 0x11 & 1) == 0) {
                                      if ((uVar19 >> 0x10 & 1) == 0) {
                                        bVar6 = 0;
                                        if ((uVar19 >> 0xf & 1) != 0) {
                                          bVar6 = 1;
                                        }
                                      }
                                      else {
LAB_00275c14:
                                        bVar6 = 2;
                                      }
                                    }
                                    else {
LAB_00275b38:
                                      bVar6 = 3;
                                    }
                                  }
                                  else {
LAB_00275b44:
                                    bVar6 = 4;
                                  }
                                }
                                else {
LAB_00275b50:
                                  bVar6 = 5;
                                }
                              }
                              else {
LAB_00275b5c:
                                bVar6 = 6;
                              }
                            }
                            else {
LAB_00275b68:
                              bVar6 = 7;
                            }
                          }
                          else {
LAB_00275b74:
                            bVar6 = 8;
                          }
                        }
                        else {
LAB_00275b80:
                          bVar6 = 9;
                        }
                      }
                      else {
LAB_00275b08:
                        bVar6 = 10;
                      }
                    }
                    else {
LAB_00275b14:
                      bVar6 = 0xb;
                    }
                  }
                  else {
LAB_00275b20:
                    bVar6 = 0xc;
                  }
                }
                else {
LAB_00275b2c:
                  bVar6 = 0xd;
                }
              }
              else {
LAB_00275af0:
                bVar6 = 0xe;
              }
            }
            else {
LAB_00275afc:
              bVar6 = 0xf;
            }
          }
          else {
LAB_00275ae4:
            bVar6 = 0x10;
          }
        }
      }
      bVar8 = 0;
      if (uVar24 != 0) {
        if ((int)uVar24 < 0) {
          if ((uVar24 & 0xffff8000) != 0xffff8000) {
            if ((uVar24 >> 0x1e & 1) == 0) goto LAB_00275adc;
            if ((uVar24 >> 0x1d & 1) == 0) goto LAB_00275a48;
            if ((uVar24 >> 0x1c & 1) == 0) goto LAB_00275a40;
            if ((uVar24 >> 0x1b & 1) == 0) goto LAB_00275bd4;
            if ((uVar24 >> 0x1a & 1) == 0) goto LAB_00275bcc;
            if ((uVar24 >> 0x19 & 1) == 0) goto LAB_00275bc4;
            if ((uVar24 >> 0x18 & 1) == 0) goto LAB_00275bbc;
            if ((uVar24 >> 0x17 & 1) == 0) goto LAB_00275c0c;
            if ((uVar24 >> 0x16 & 1) == 0) goto LAB_00275c04;
            if ((uVar24 >> 0x15 & 1) == 0) goto LAB_00275bfc;
            if ((uVar24 >> 0x14 & 1) == 0) goto LAB_00275bf4;
            if ((uVar24 >> 0x13 & 1) == 0) goto LAB_00275bec;
            if ((uVar24 >> 0x12 & 1) == 0) goto LAB_00275be4;
            if ((uVar24 >> 0x11 & 1) == 0) goto LAB_00275bdc;
            if ((uVar24 >> 0x10 & 1) == 0) goto LAB_00275c20;
            bVar8 = (uVar24 & 0x8000) != 0x8000;
          }
        }
        else if ((uVar24 & 0xffff8000) != 0) {
          if ((uVar24 >> 0x1e & 1) == 0) {
            if ((uVar24 >> 0x1d & 1) == 0) {
              if ((uVar24 >> 0x1c & 1) == 0) {
                if ((uVar24 >> 0x1b & 1) == 0) {
                  if ((uVar24 >> 0x1a & 1) == 0) {
                    if ((uVar24 >> 0x19 & 1) == 0) {
                      if ((uVar24 >> 0x18 & 1) == 0) {
                        if ((uVar24 >> 0x17 & 1) == 0) {
                          if ((uVar24 >> 0x16 & 1) == 0) {
                            if ((uVar24 >> 0x15 & 1) == 0) {
                              if ((uVar24 >> 0x14 & 1) == 0) {
                                if ((uVar24 >> 0x13 & 1) == 0) {
                                  if ((uVar24 >> 0x12 & 1) == 0) {
                                    if ((uVar24 >> 0x11 & 1) == 0) {
                                      if ((uVar24 >> 0x10 & 1) == 0) {
                                        bVar8 = 0;
                                        if ((uVar24 >> 0xf & 1) != 0) {
                                          bVar8 = 1;
                                        }
                                      }
                                      else {
LAB_00275c20:
                                        bVar8 = 2;
                                      }
                                    }
                                    else {
LAB_00275bdc:
                                      bVar8 = 3;
                                    }
                                  }
                                  else {
LAB_00275be4:
                                    bVar8 = 4;
                                  }
                                }
                                else {
LAB_00275bec:
                                  bVar8 = 5;
                                }
                              }
                              else {
LAB_00275bf4:
                                bVar8 = 6;
                              }
                            }
                            else {
LAB_00275bfc:
                              bVar8 = 7;
                            }
                          }
                          else {
LAB_00275c04:
                            bVar8 = 8;
                          }
                        }
                        else {
LAB_00275c0c:
                          bVar8 = 9;
                        }
                      }
                      else {
LAB_00275bbc:
                        bVar8 = 10;
                      }
                    }
                    else {
LAB_00275bc4:
                      bVar8 = 0xb;
                    }
                  }
                  else {
LAB_00275bcc:
                    bVar8 = 0xc;
                  }
                }
                else {
LAB_00275bd4:
                  bVar8 = 0xd;
                }
              }
              else {
LAB_00275a40:
                bVar8 = 0xe;
              }
            }
            else {
LAB_00275a48:
              bVar8 = 0xf;
            }
          }
          else {
LAB_00275adc:
            bVar8 = 0x10;
          }
        }
      }
      if (bVar6 < bVar7) {
        bVar6 = bVar7;
      }
      if (bVar6 < bVar8) {
        bVar6 = bVar8;
      }
      switch(bVar6) {
      case 1:
        iVar16 = 2;
        break;
      case 2:
        iVar16 = 4;
        break;
      case 3:
        iVar16 = 8;
        break;
      case 4:
        iVar16 = 0x10;
        break;
      case 5:
        iVar16 = 0x20;
        break;
      case 6:
        iVar16 = 0x40;
        break;
      case 7:
        iVar16 = 0x80;
        break;
      case 8:
        iVar16 = 0x100;
        break;
      case 9:
        iVar16 = 0x200;
        break;
      case 10:
        iVar16 = 0x400;
        break;
      case 0xb:
        iVar16 = 0x800;
        break;
      case 0xc:
        iVar16 = 0x1000;
        break;
      case 0xd:
        iVar16 = 0x2000;
        break;
      case 0xe:
        iVar16 = 0x4000;
        break;
      case 0xf:
        iVar16 = 0x8000;
        break;
      case 0x10:
        iVar16 = 0x10000;
        break;
      default:
        iVar16 = 1;
        uVar12 = uVar18;
        goto LAB_00272a64;
      }
      uVar12 = 0;
      if (iVar16 != 0) {
        uVar12 = (int)uVar18 / iVar16;
      }
      if (uVar12 != 0) {
LAB_00272a64:
        if (uVar14 != 0) {
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar14 / iVar16;
          }
          uVar22 = 0;
          if ((long)(int)uVar12 != 0) {
            uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar12);
          }
          *(undefined4 *)(param_1 + 0x154) = uVar22;
        }
        if (uVar19 != 0) {
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar19 / iVar16;
          }
          uVar22 = 0;
          if ((long)(int)uVar12 != 0) {
            uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar12);
          }
          *(undefined4 *)(param_1 + 0x158) = uVar22;
        }
        if (uVar24 != 0) {
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar24 / iVar16;
          }
          uVar22 = 0;
          if ((long)(int)uVar12 != 0) {
            uVar22 = (undefined4)(((long)iVar20 * 0x7fff) / (long)(int)uVar12);
          }
          *(undefined4 *)(param_1 + 0x15c) = uVar22;
        }
        goto LAB_00270ec4;
      }
    }
LAB_00271ce8:
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
LAB_00270ec4:
  if (uVar15 == 0) {
    *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0x16c);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x174);
    return;
  }
  iVar16 = *(int *)(param_1 + 0x114);
  iVar20 = *(int *)(param_1 + 0x118);
  iVar25 = *(int *)(param_1 + 0x11c);
  uVar15 = (iVar20 * *(int *)(param_1 + 0x158)) / 0x7fff +
           (iVar16 * *(int *)(param_1 + 0x154)) / 0x7fff +
           (iVar25 * *(int *)(param_1 + 0x15c)) / 0x7fff;
  uVar13 = (ulong)uVar15;
  uVar14 = (iVar20 * *(int *)(param_1 + 0x14c)) / 0x7fff +
           (iVar16 * *(int *)(param_1 + 0x148)) / 0x7fff +
           (iVar25 * *(int *)(param_1 + 0x150)) / 0x7fff;
  uVar21 = (ulong)uVar14;
  uVar19 = (iVar20 * *(int *)(param_1 + 0x140)) / 0x7fff +
           (iVar16 * *(int *)(param_1 + 0x13c)) / 0x7fff +
           (iVar25 * *(int *)(param_1 + 0x144)) / 0x7fff;
  if (uVar15 == 0) {
    uVar24 = 0;
    if (uVar19 != 0 || uVar14 != 0) goto LAB_00271ff8;
  }
  else {
    if ((int)uVar15 < 0) {
      if ((uVar15 & 0xffffc000) == 0xffffc000) {
        uVar24 = 0;
      }
      else {
        if ((uVar15 >> 0x11 & 1) == 0) goto LAB_00275390;
        if ((uVar15 >> 0x10 & 1) == 0) goto LAB_002759fc;
        if ((uVar15 >> 0xf & 1) == 0) goto LAB_0027594c;
        uVar24 = 0;
        if ((uVar15 >> 0xe & 1) == 0) goto LAB_00272ba8;
      }
    }
    else {
      uVar24 = 0;
      if ((uVar15 & 0xffffc000) != 0) {
        if ((uVar15 >> 0x11 & 1) == 0) {
          if ((uVar15 >> 0x10 & 1) == 0) {
            if ((uVar15 >> 0xf & 1) == 0) {
              if ((uVar15 >> 0xe & 1) != 0) {
LAB_00272ba8:
                uVar24 = 1;
              }
            }
            else {
LAB_0027594c:
              uVar24 = 2;
            }
          }
          else {
LAB_002759fc:
            uVar24 = 3;
          }
        }
        else {
LAB_00275390:
          uVar24 = 4;
        }
      }
    }
LAB_00271ff8:
    uVar12 = 0;
    if (uVar14 != 0) {
      if ((int)uVar14 < 0) {
        if ((uVar14 & 0xffffc000) != 0xffffc000) {
          if ((uVar14 >> 0x11 & 1) == 0) goto LAB_00275214;
          if ((uVar14 >> 0x10 & 1) == 0) goto LAB_00275838;
          if ((uVar14 >> 0xf & 1) == 0) goto LAB_0027582c;
          if ((uVar14 >> 0xe & 1) == 0) goto LAB_00273c84;
        }
      }
      else if ((uVar14 & 0xffffc000) != 0) {
        if ((uVar14 >> 0x11 & 1) == 0) {
          if ((uVar14 >> 0x10 & 1) == 0) {
            if ((uVar14 >> 0xf & 1) == 0) {
              if ((uVar14 >> 0xe & 1) != 0) {
LAB_00273c84:
                uVar12 = 1;
              }
            }
            else {
LAB_0027582c:
              uVar12 = 2;
            }
          }
          else {
LAB_00275838:
            uVar12 = 3;
          }
        }
        else {
LAB_00275214:
          uVar12 = 4;
        }
      }
    }
    uVar18 = 0;
    if (uVar19 != 0) {
      if ((int)uVar19 < 0) {
        if ((uVar19 & 0xffffc000) != 0xffffc000) {
          if ((uVar19 >> 0x11 & 1) == 0) goto LAB_0027520c;
          if ((uVar19 >> 0x10 & 1) == 0) goto LAB_00275824;
          if ((uVar19 >> 0xf & 1) == 0) goto LAB_0027581c;
          if ((uVar19 >> 0xe & 1) == 0) goto LAB_00273cac;
        }
      }
      else if ((uVar19 & 0xffffc000) != 0) {
        if ((uVar19 >> 0x11 & 1) == 0) {
          if ((uVar19 >> 0x10 & 1) == 0) {
            if ((uVar19 >> 0xf & 1) == 0) {
              if ((uVar19 >> 0xe & 1) != 0) {
LAB_00273cac:
                uVar18 = 1;
              }
            }
            else {
LAB_0027581c:
              uVar18 = 2;
            }
          }
          else {
LAB_00275824:
            uVar18 = 3;
          }
        }
        else {
LAB_0027520c:
          uVar18 = 4;
        }
      }
    }
    uVar10 = 0;
    if (uVar12 < uVar24) {
      uVar12 = uVar24;
    }
    if (uVar12 < uVar18) {
      uVar12 = uVar18;
    }
    switch(uVar12) {
    case 0:
      iVar16 = 1;
      break;
    case 1:
      iVar16 = 2;
      break;
    case 2:
      iVar16 = 4;
      break;
    case 3:
      iVar16 = 8;
      break;
    case 4:
      iVar16 = 0x10;
      break;
    case 5:
      iVar16 = 0x20;
      break;
    case 6:
      iVar16 = 0x40;
      break;
    case 7:
      iVar16 = 0x80;
      break;
    default:
      goto switchD_00272070_default;
    }
    iVar20 = 0;
    if (iVar16 != 0) {
      iVar20 = (int)uVar14 / iVar16;
    }
    uVar10 = 0;
    iVar25 = 0;
    if (iVar16 != 0) {
      iVar25 = (int)uVar15 / iVar16;
    }
    iVar11 = 0;
    if (iVar16 != 0) {
      iVar11 = (int)uVar19 / iVar16;
    }
    iVar20 = iVar20 * iVar20 + iVar25 * iVar25 + iVar11 * iVar11;
    if (iVar20 != 0) {
      if (iVar20 == 0x7fffffff) {
        iVar20 = 0x7ffffffe;
      }
      iVar25 = 0;
      if (iVar20 != 0) {
        iVar25 = iVar20 / iVar20;
      }
      iVar25 = (iVar20 + iVar25) / 2;
      iVar11 = iVar20;
      if (iVar25 < iVar20) {
        do {
          iVar11 = 0;
          if (iVar25 != 0) {
            iVar11 = iVar20 / iVar25;
          }
          iVar17 = (iVar25 + iVar11) / 2;
          iVar11 = iVar25;
          if (iVar25 <= iVar17) break;
          iVar25 = 0;
          if (iVar17 != 0) {
            iVar25 = iVar20 / iVar17;
          }
          iVar25 = (iVar17 + iVar25) / 2;
          iVar11 = iVar17;
          if (iVar17 <= iVar25) break;
          iVar11 = 0;
          if (iVar25 != 0) {
            iVar11 = iVar20 / iVar25;
          }
          iVar17 = (iVar25 + iVar11) / 2;
          iVar11 = iVar25;
          if (iVar25 <= iVar17) break;
          iVar25 = 0;
          if (iVar17 != 0) {
            iVar25 = iVar20 / iVar17;
          }
          iVar25 = (iVar17 + iVar25) / 2;
          iVar11 = iVar17;
          if (iVar17 <= iVar25) break;
          iVar11 = 0;
          if (iVar25 != 0) {
            iVar11 = iVar20 / iVar25;
          }
          iVar17 = (iVar25 + iVar11) / 2;
          iVar11 = iVar25;
          if (iVar25 <= iVar17) break;
          iVar25 = 0;
          if (iVar17 != 0) {
            iVar25 = iVar20 / iVar17;
          }
          iVar25 = (iVar17 + iVar25) / 2;
          iVar11 = iVar17;
          if (iVar17 <= iVar25) break;
          iVar11 = 0;
          if (iVar25 != 0) {
            iVar11 = iVar20 / iVar25;
          }
          iVar17 = (iVar25 + iVar11) / 2;
          iVar11 = iVar25;
          if (iVar25 <= iVar17) break;
          iVar25 = 0;
          if (iVar17 != 0) {
            iVar25 = iVar20 / iVar17;
          }
          iVar25 = (iVar17 + iVar25) / 2;
          iVar11 = iVar17;
        } while (iVar25 < iVar17);
      }
      uVar10 = iVar11 * iVar16;
    }
switchD_00272070_default:
    uVar24 = uVar14;
    if ((int)uVar14 < (int)uVar15) {
      uVar24 = uVar15;
    }
    if ((int)uVar24 < (int)uVar19) {
      uVar24 = uVar19;
    }
    if ((int)uVar24 < (int)uVar10) {
      uVar24 = uVar10;
    }
    if (uVar24 == 0) goto LAB_002721c4;
    uVar12 = 0;
    if (uVar15 != 0) {
      if ((int)uVar15 < 0) {
        if ((uVar15 & 0xffff8000) != 0xffff8000) {
          if ((uVar15 >> 0x11 & 1) == 0) goto LAB_002759e8;
          if ((uVar15 >> 0x10 & 1) == 0) goto LAB_00275d04;
          uVar12 = (uint)((uVar15 & 0x8000) != 0x8000);
        }
      }
      else if ((uVar15 & 0xffff8000) != 0) {
        if ((uVar15 >> 0x11 & 1) == 0) {
          if ((uVar15 >> 0x10 & 1) == 0) {
            uVar12 = uVar15 >> 0xf & 1;
          }
          else {
LAB_00275d04:
            uVar12 = 2;
          }
        }
        else {
LAB_002759e8:
          uVar12 = 3;
        }
      }
    }
    uVar18 = 0;
    if (uVar14 != 0) {
      if ((int)uVar14 < 0) {
        if ((uVar14 & 0xffff8000) != 0xffff8000) {
          if ((uVar14 >> 0x11 & 1) == 0) goto LAB_00275958;
          if ((uVar14 >> 0x10 & 1) == 0) goto LAB_00275d0c;
          uVar18 = (uint)((uVar14 & 0x8000) != 0x8000);
        }
      }
      else if ((uVar14 & 0xffff8000) != 0) {
        if ((uVar14 >> 0x11 & 1) == 0) {
          if ((uVar14 >> 0x10 & 1) == 0) {
            uVar18 = uVar14 >> 0xf & 1;
          }
          else {
LAB_00275d0c:
            uVar18 = 2;
          }
        }
        else {
LAB_00275958:
          uVar18 = 3;
        }
      }
    }
    uVar10 = 0;
    if (uVar19 != 0) {
      if ((int)uVar19 < 0) {
        if ((uVar19 & 0xffff8000) != 0xffff8000) {
          if ((uVar19 >> 0x11 & 1) == 0) goto LAB_00275aac;
          if ((uVar19 >> 0x10 & 1) == 0) goto LAB_00275c70;
          uVar10 = (uint)((uVar19 & 0x8000) != 0x8000);
        }
      }
      else if ((uVar19 & 0xffff8000) != 0) {
        if ((uVar19 >> 0x11 & 1) == 0) {
          if ((uVar19 >> 0x10 & 1) == 0) {
            uVar10 = uVar19 >> 0xf & 1;
          }
          else {
LAB_00275c70:
            uVar10 = 2;
          }
        }
        else {
LAB_00275aac:
          uVar10 = 3;
        }
      }
    }
    if (uVar18 < uVar12) {
      uVar18 = uVar12;
    }
    if (uVar18 < uVar10) {
      uVar18 = uVar10;
    }
    switch(uVar18) {
    case 1:
      iVar16 = 2;
      break;
    case 2:
      iVar16 = 4;
      break;
    case 3:
      iVar16 = 8;
      break;
    default:
      iVar16 = 1;
      uVar12 = uVar24;
      goto LAB_00272c7c;
    }
    uVar12 = 0;
    if (iVar16 != 0) {
      uVar12 = (int)uVar24 / iVar16;
    }
    if (uVar12 != 0) {
LAB_00272c7c:
      if (uVar15 != 0) {
        iVar20 = 0;
        if (iVar16 != 0) {
          iVar20 = (int)uVar15 / iVar16;
        }
        uVar13 = 0;
        if ((long)(int)uVar12 != 0) {
          uVar13 = ((long)iVar20 * 0x7fff) / (long)(int)uVar12;
        }
      }
      uVar15 = (uint)uVar13;
      if (uVar14 != 0) {
        iVar20 = 0;
        if (iVar16 != 0) {
          iVar20 = (int)uVar14 / iVar16;
        }
        uVar21 = 0;
        if ((long)(int)uVar12 != 0) {
          uVar21 = ((long)iVar20 * 0x7fff) / (long)(int)uVar12;
        }
      }
      uVar14 = (uint)uVar21;
      if (uVar19 == 0) {
        *(uint *)param_3 = uVar15;
        *(uint *)(param_3 + 4) = uVar14;
        *(undefined4 *)(param_3 + 8) = 0;
        uVar22 = *(undefined4 *)(param_1 + 0x120);
        if (uVar15 == 0) {
LAB_002735d4:
          iVar16 = 0;
          if (uVar14 == 0) {
            iVar16 = 0;
            iVar20 = 0;
            uVar19 = uVar14;
            goto LAB_002721e8;
          }
        }
        else {
LAB_00272cec:
          iVar16 = 0x5a;
          if ((int)uVar15 < 0) {
            iVar16 = -0x5a;
          }
          uVar19 = uVar14;
          if ((uVar14 == 0) || (uVar19 = 0, uVar15 != 0)) goto LAB_00272d04;
        }
        uVar19 = 0;
        iVar20 = -0x5a;
        if (-1 < (int)uVar14) {
          iVar20 = 0x5a;
        }
        goto LAB_002721e8;
      }
      *(uint *)param_3 = uVar15;
      *(uint *)(param_3 + 4) = uVar14;
      iVar20 = 0;
      if (iVar16 != 0) {
        iVar20 = (int)uVar19 / iVar16;
      }
      uVar3 = 0;
      if ((long)(int)uVar12 != 0) {
        uVar3 = ((long)iVar20 * 0x7fff) / (long)(int)uVar12;
      }
      uVar19 = (uint)uVar3;
      *(uint *)(param_3 + 8) = uVar19;
      uVar22 = *(undefined4 *)(param_1 + 0x120);
      if (uVar15 == 0) {
        if (uVar19 == 0) goto LAB_002735d4;
LAB_00273120:
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffff8000) != 0xffff8000) {
            if ((uVar19 >> 0x1e & 1) == 0) {
LAB_00275d38:
              uVar24 = 0x10;
              goto joined_r0x00275e04;
            }
            if ((uVar19 >> 0x1d & 1) == 0) {
LAB_00275d50:
              uVar24 = 0xf;
              uVar12 = 0xf;
            }
            else {
              if ((uVar19 >> 0x1c & 1) != 0) {
                if ((uVar19 >> 0x1b & 1) == 0) {
LAB_00275db0:
                  uVar24 = 0xd;
                }
                else if ((uVar19 >> 0x1a & 1) == 0) {
LAB_00275da4:
                  uVar24 = 0xc;
                }
                else if ((uVar19 >> 0x19 & 1) == 0) {
LAB_00275d98:
                  uVar24 = 0xb;
                }
                else if ((uVar19 >> 0x18 & 1) == 0) {
LAB_00275d8c:
                  uVar24 = 10;
                }
                else if ((uVar19 >> 0x17 & 1) == 0) {
LAB_00275d80:
                  uVar24 = 9;
                }
                else if ((uVar19 >> 0x16 & 1) == 0) {
LAB_00275d74:
                  uVar24 = 8;
                }
                else if ((uVar19 >> 0x15 & 1) == 0) {
LAB_00275d68:
                  uVar24 = 7;
                }
                else if ((uVar19 >> 0x14 & 1) == 0) {
LAB_00275d5c:
                  uVar24 = 6;
                }
                else if ((uVar19 >> 0x13 & 1) == 0) {
LAB_00275e00:
                  uVar24 = 5;
                }
                else if ((uVar19 >> 0x12 & 1) == 0) {
LAB_00275df4:
                  uVar24 = 4;
                }
                else if ((uVar19 >> 0x11 & 1) == 0) {
LAB_00275de8:
                  uVar24 = 3;
                }
                else if ((uVar19 >> 0x10 & 1) == 0) {
LAB_00275ddc:
                  uVar24 = 2;
                }
                else {
                  uVar24 = (uint)((uVar19 & 0x8000) != 0x8000);
                }
                goto joined_r0x00275e04;
              }
LAB_00275d44:
              uVar24 = 0xe;
              uVar12 = 0xe;
            }
            if (uVar15 != 0) goto LAB_00273174;
            goto LAB_002731c8;
          }
LAB_00274208:
          uVar24 = 0;
          if (uVar15 != 0) goto LAB_00273174;
          uVar24 = uVar19;
          if ((int)uVar19 < 0) {
            iVar20 = 0;
            goto LAB_00274500;
          }
          iVar20 = 0;
LAB_00274218:
          uVar3 = 0;
          if ((long)(int)uVar24 != 0) {
            uVar3 = ((long)iVar20 * 0x7fff) / (long)(int)uVar24;
          }
          iVar16 = *(int *)(PTR_gasdAtan_00567958 + (uVar3 >> 9 & 0x3f) * 4);
        }
        else {
          if ((uVar3 & 0xffff8000) == 0) goto LAB_00274208;
          if ((uVar19 >> 0x1e & 1) != 0) goto LAB_00275d38;
          if ((uVar19 >> 0x1d & 1) != 0) goto LAB_00275d50;
          if ((uVar19 >> 0x1c & 1) != 0) goto LAB_00275d44;
          if ((uVar19 >> 0x1b & 1) != 0) goto LAB_00275db0;
          if ((uVar19 >> 0x1a & 1) != 0) goto LAB_00275da4;
          if ((uVar19 >> 0x19 & 1) != 0) goto LAB_00275d98;
          if ((uVar19 >> 0x18 & 1) != 0) goto LAB_00275d8c;
          if ((uVar19 >> 0x17 & 1) != 0) goto LAB_00275d80;
          if ((uVar19 >> 0x16 & 1) != 0) goto LAB_00275d74;
          if ((uVar19 >> 0x15 & 1) != 0) goto LAB_00275d68;
          if ((uVar19 >> 0x14 & 1) != 0) goto LAB_00275d5c;
          if ((uVar19 >> 0x13 & 1) != 0) goto LAB_00275e00;
          if ((uVar19 >> 0x12 & 1) != 0) goto LAB_00275df4;
          if ((uVar19 >> 0x11 & 1) != 0) goto LAB_00275de8;
          if ((uVar19 >> 0x10 & 1) != 0) goto LAB_00275ddc;
          uVar24 = (uint)((uVar3 & 0xffffffff) >> 0xf) & 1;
joined_r0x00275e04:
          uVar12 = uVar24;
          if (uVar15 == 0) goto LAB_002731c8;
LAB_00273174:
          uVar12 = uVar24;
          if ((int)uVar15 < 0) {
            if ((uVar15 & 0xffff8000) != 0xffff8000) {
              if ((uVar15 >> 0x1e & 1) == 0) goto LAB_00275c68;
              if ((uVar15 >> 0x1d & 1) == 0) goto LAB_00275cfc;
              if ((uVar15 >> 0x1c & 1) == 0) goto LAB_00275cf4;
              if ((uVar15 >> 0x1b & 1) == 0) goto LAB_00275e44;
              if ((uVar15 >> 0x1a & 1) == 0) goto LAB_00275e3c;
              if ((uVar15 >> 0x19 & 1) == 0) goto LAB_00275e34;
              if ((uVar15 >> 0x18 & 1) == 0) goto LAB_00275e2c;
              if ((uVar15 >> 0x17 & 1) == 0) goto LAB_00275e24;
              if ((uVar15 >> 0x16 & 1) == 0) goto LAB_00275e1c;
              if ((uVar15 >> 0x15 & 1) == 0) goto LAB_00275e14;
              if ((uVar15 >> 0x14 & 1) == 0) goto LAB_00275e0c;
              if ((uVar15 >> 0x13 & 1) == 0) goto LAB_00275ca8;
              if ((uVar15 >> 0x12 & 1) == 0) goto LAB_00275ca0;
              if ((uVar15 >> 0x11 & 1) == 0) goto LAB_00275c98;
              if ((uVar15 >> 0x10 & 1) == 0) goto LAB_00275c90;
              uVar18 = (uint)((uVar15 & 0x8000) != 0x8000);
              goto LAB_002731c0;
            }
LAB_002731c8:
            uVar18 = uVar12;
          }
          else {
            if ((uVar13 & 0xffff8000) == 0) goto LAB_002731c8;
            if ((uVar15 >> 0x1e & 1) == 0) {
              if ((uVar15 >> 0x1d & 1) == 0) {
                if ((uVar15 >> 0x1c & 1) == 0) {
                  if ((uVar15 >> 0x1b & 1) == 0) {
                    if ((uVar15 >> 0x1a & 1) == 0) {
                      if ((uVar15 >> 0x19 & 1) == 0) {
                        if ((uVar15 >> 0x18 & 1) == 0) {
                          if ((uVar15 >> 0x17 & 1) == 0) {
                            if ((uVar15 >> 0x16 & 1) == 0) {
                              if ((uVar15 >> 0x15 & 1) == 0) {
                                if ((uVar15 >> 0x14 & 1) == 0) {
                                  if ((uVar15 >> 0x13 & 1) == 0) {
                                    if ((uVar15 >> 0x12 & 1) == 0) {
                                      if ((uVar15 >> 0x11 & 1) == 0) {
                                        if ((uVar15 >> 0x10 & 1) == 0) {
                                          uVar18 = (uint)(uVar13 >> 0xf) & 1;
                                        }
                                        else {
LAB_00275c90:
                                          uVar18 = 2;
                                        }
                                      }
                                      else {
LAB_00275c98:
                                        uVar18 = 3;
                                      }
                                    }
                                    else {
LAB_00275ca0:
                                      uVar18 = 4;
                                    }
                                  }
                                  else {
LAB_00275ca8:
                                    uVar18 = 5;
                                  }
                                }
                                else {
LAB_00275e0c:
                                  uVar18 = 6;
                                }
                              }
                              else {
LAB_00275e14:
                                uVar18 = 7;
                              }
                            }
                            else {
LAB_00275e1c:
                              uVar18 = 8;
                            }
                          }
                          else {
LAB_00275e24:
                            uVar18 = 9;
                          }
                        }
                        else {
LAB_00275e2c:
                          uVar18 = 10;
                        }
                      }
                      else {
LAB_00275e34:
                        uVar18 = 0xb;
                      }
                    }
                    else {
LAB_00275e3c:
                      uVar18 = 0xc;
                    }
                  }
                  else {
LAB_00275e44:
                    uVar18 = 0xd;
                  }
                }
                else {
LAB_00275cf4:
                  uVar18 = 0xe;
                }
              }
              else {
LAB_00275cfc:
                uVar18 = 0xf;
              }
            }
            else {
LAB_00275c68:
              uVar18 = 0x10;
            }
LAB_002731c0:
            if (uVar18 <= uVar24) goto LAB_002731c8;
          }
          iVar16 = 1;
          switch(uVar18) {
          case 1:
            iVar16 = 2;
            break;
          case 2:
            iVar16 = 4;
            break;
          case 3:
            iVar16 = 8;
            break;
          case 4:
            iVar16 = 0x10;
            break;
          case 5:
            iVar16 = 0x20;
            break;
          case 6:
            iVar16 = 0x40;
            break;
          case 7:
            iVar16 = 0x80;
            break;
          case 8:
            iVar16 = 0x100;
            break;
          case 9:
            iVar16 = 0x200;
            break;
          case 10:
            iVar16 = 0x400;
            break;
          case 0xb:
            iVar16 = 0x800;
            break;
          case 0xc:
            iVar16 = 0x1000;
            break;
          case 0xd:
            iVar16 = 0x2000;
            break;
          case 0xe:
            iVar16 = 0x4000;
            break;
          case 0xf:
            iVar16 = 0x8000;
            break;
          case 0x10:
            iVar16 = 0x10000;
          }
          uVar24 = 0;
          if (iVar16 != 0) {
            uVar24 = (int)uVar19 / iVar16;
          }
          iVar20 = 0;
          if (iVar16 != 0) {
            iVar20 = (int)uVar15 / iVar16;
          }
          if ((int)uVar24 < 0) {
            if (iVar20 < 0) {
              iVar20 = -iVar20;
              iVar16 = -uVar24;
              if (iVar16 < iVar20) {
                uVar3 = 0;
                if ((long)iVar20 != 0) {
                  uVar3 = ((long)iVar16 * 0x7fff) / (long)iVar20;
                }
                iVar16 = -0x5a - *(int *)(PTR_gasdAtan_00567958 + (uVar3 >> 9 & 0x3f) * 4);
              }
              else {
                lVar4 = 0;
                if ((long)iVar16 != 0) {
                  lVar4 = ((long)iVar20 * 0x7fff) / (long)iVar16;
                }
                iVar16 = *(int *)(PTR_gasdAtan_00567958 + (lVar4 / 0x200 & 0x3fU) * 4) + -0xb4;
              }
            }
            else {
LAB_00274500:
              iVar16 = -uVar24;
              if (iVar16 < iVar20) {
                uVar3 = 0;
                if ((long)iVar20 != 0) {
                  uVar3 = ((long)iVar16 * 0x7fff) / (long)iVar20;
                }
                iVar16 = *(int *)(PTR_gasdAtan_00567958 + (uVar3 >> 9 & 0x3f) * 4) + 0x5a;
              }
              else {
                lVar4 = 0;
                if ((long)iVar16 != 0) {
                  lVar4 = ((long)iVar20 * 0x7fff) / (long)iVar16;
                }
                iVar16 = 0xb4 - *(int *)(PTR_gasdAtan_00567958 + (lVar4 / 0x200 & 0x3fU) * 4);
              }
            }
          }
          else if (iVar20 < 0) {
            iVar20 = -iVar20;
            if ((int)uVar24 < iVar20) {
              uVar3 = 0;
              if ((long)iVar20 != 0) {
                uVar3 = ((long)(int)uVar24 * 0x7fff) / (long)iVar20;
              }
              iVar16 = *(int *)(PTR_gasdAtan_00567958 + (uVar3 >> 9 & 0x3f) * 4) + -0x5a;
            }
            else {
              lVar4 = 0;
              if ((long)(int)uVar24 != 0) {
                lVar4 = ((long)iVar20 * 0x7fff) / (long)(int)uVar24;
              }
              iVar16 = -*(int *)(PTR_gasdAtan_00567958 + (lVar4 / 0x200 & 0x3fU) * 4);
            }
          }
          else {
            if (iVar20 <= (int)uVar24) goto LAB_00274218;
            uVar3 = 0;
            if ((long)iVar20 != 0) {
              uVar3 = ((long)(int)uVar24 * 0x7fff) / (long)iVar20;
            }
            iVar16 = 0x5a - *(int *)(PTR_gasdAtan_00567958 + (uVar3 >> 9 & 0x3f) * 4);
          }
        }
      }
      else {
        if (uVar19 == 0) goto LAB_00272cec;
        iVar16 = 0;
        if (uVar15 != 0 || uVar19 != 0) goto LAB_00273120;
      }
      if (uVar15 == 0) {
        uVar15 = 0;
        bVar7 = 0;
LAB_00273248:
        if ((int)uVar19 < 0) {
          if ((uVar19 & 0xffffc000) == 0xffffc000) {
            bVar6 = 0;
          }
          else {
            if ((uVar19 >> 0x1e & 1) == 0) goto LAB_002757f0;
            if ((uVar19 >> 0x1d & 1) == 0) goto LAB_002757fc;
            if ((uVar19 >> 0x1c & 1) == 0) goto LAB_00275810;
            if ((uVar19 >> 0x1b & 1) == 0) goto LAB_002758c8;
            if ((uVar19 >> 0x1a & 1) == 0) goto LAB_002758bc;
            if ((uVar19 >> 0x19 & 1) == 0) goto LAB_002758b0;
            if ((uVar19 >> 0x18 & 1) == 0) goto LAB_002758a4;
            if ((uVar19 >> 0x17 & 1) == 0) goto LAB_00275914;
            if ((uVar19 >> 0x16 & 1) == 0) goto LAB_0027590c;
            if ((uVar19 >> 0x15 & 1) == 0) goto LAB_00275904;
            if ((uVar19 >> 0x14 & 1) == 0) goto LAB_002758fc;
            if ((uVar19 >> 0x13 & 1) == 0) goto LAB_002758f4;
            if ((uVar19 >> 0x12 & 1) == 0) goto LAB_002758ec;
            if ((uVar19 >> 0x11 & 1) == 0) goto LAB_002758e0;
            if ((uVar19 >> 0x10 & 1) == 0) goto LAB_002758d4;
            if ((uVar19 >> 0xf & 1) == 0) goto LAB_00275ab4;
            bVar6 = (uVar19 & 0x4000) != 0x4000;
          }
        }
        else {
          bVar6 = 0;
          if ((uVar19 & 0xffffc000) != 0) {
            if ((uVar19 >> 0x1e & 1) == 0) {
              if ((uVar19 >> 0x1d & 1) == 0) {
                if ((uVar19 >> 0x1c & 1) == 0) {
                  if ((uVar19 >> 0x1b & 1) == 0) {
                    if ((uVar19 >> 0x1a & 1) == 0) {
                      if ((uVar19 >> 0x19 & 1) == 0) {
                        if ((uVar19 >> 0x18 & 1) == 0) {
                          if ((uVar19 >> 0x17 & 1) == 0) {
                            if ((uVar19 >> 0x16 & 1) == 0) {
                              if ((uVar19 >> 0x15 & 1) == 0) {
                                if ((uVar19 >> 0x14 & 1) == 0) {
                                  if ((uVar19 >> 0x13 & 1) == 0) {
                                    if ((uVar19 >> 0x12 & 1) == 0) {
                                      if ((uVar19 >> 0x11 & 1) == 0) {
                                        if ((uVar19 >> 0x10 & 1) == 0) {
                                          if ((uVar19 >> 0xf & 1) == 0) {
                                            if ((uVar19 >> 0xe & 1) != 0) {
                                              bVar6 = 1;
                                            }
                                          }
                                          else {
LAB_00275ab4:
                                            bVar6 = 2;
                                          }
                                        }
                                        else {
LAB_002758d4:
                                          bVar6 = 3;
                                        }
                                      }
                                      else {
LAB_002758e0:
                                        bVar6 = 4;
                                      }
                                    }
                                    else {
LAB_002758ec:
                                      bVar6 = 5;
                                    }
                                  }
                                  else {
LAB_002758f4:
                                    bVar6 = 6;
                                  }
                                }
                                else {
LAB_002758fc:
                                  bVar6 = 7;
                                }
                              }
                              else {
LAB_00275904:
                                bVar6 = 8;
                              }
                            }
                            else {
LAB_0027590c:
                              bVar6 = 9;
                            }
                          }
                          else {
LAB_00275914:
                            bVar6 = 10;
                          }
                        }
                        else {
LAB_002758a4:
                          bVar6 = 0xb;
                        }
                      }
                      else {
LAB_002758b0:
                        bVar6 = 0xc;
                      }
                    }
                    else {
LAB_002758bc:
                      bVar6 = 0xd;
                    }
                  }
                  else {
LAB_002758c8:
                    bVar6 = 0xe;
                  }
                }
                else {
LAB_00275810:
                  bVar6 = 0xf;
                }
              }
              else {
LAB_002757fc:
                bVar6 = 0x10;
              }
            }
            else {
LAB_002757f0:
              bVar6 = 0x11;
            }
          }
        }
LAB_00272d64:
        iVar20 = 1;
        if (bVar6 < bVar7) {
          bVar6 = bVar7;
        }
        switch(bVar6) {
        case 1:
          iVar20 = 2;
          break;
        case 2:
          iVar20 = 4;
          break;
        case 3:
          iVar20 = 8;
          break;
        case 4:
          iVar20 = 0x10;
          break;
        case 5:
          iVar20 = 0x20;
          break;
        case 6:
          iVar20 = 0x40;
          break;
        case 7:
          iVar20 = 0x80;
          break;
        case 8:
          iVar20 = 0x100;
          break;
        case 9:
          iVar20 = 0x200;
          break;
        case 10:
          iVar20 = 0x400;
          break;
        case 0xb:
          iVar20 = 0x800;
          break;
        case 0xc:
          iVar20 = 0x1000;
          break;
        case 0xd:
          iVar20 = 0x2000;
          break;
        case 0xe:
          iVar20 = 0x4000;
          break;
        case 0xf:
          iVar20 = 0x8000;
          break;
        case 0x10:
          iVar20 = 0x10000;
          break;
        case 0x11:
          iVar20 = 0x20000;
        }
      }
      else {
LAB_00272d04:
        if (-1 < (int)uVar15) {
          if ((uVar13 & 0xffffc000) == 0) goto LAB_00273d4c;
          if ((uVar15 >> 0x1e & 1) == 0) {
            if ((uVar15 >> 0x1d & 1) == 0) {
              if ((uVar15 >> 0x1c & 1) == 0) {
                if ((uVar15 >> 0x1b & 1) == 0) {
                  if ((uVar15 >> 0x1a & 1) == 0) {
                    if ((uVar15 >> 0x19 & 1) == 0) {
                      if ((uVar15 >> 0x18 & 1) == 0) {
                        if ((uVar15 >> 0x17 & 1) == 0) {
                          if ((uVar15 >> 0x16 & 1) == 0) {
                            if ((uVar15 >> 0x15 & 1) == 0) {
                              if ((uVar15 >> 0x14 & 1) == 0) {
                                if ((uVar15 >> 0x13 & 1) == 0) {
                                  if ((uVar15 >> 0x12 & 1) == 0) {
                                    if ((uVar15 >> 0x11 & 1) == 0) {
                                      if ((uVar15 >> 0x10 & 1) == 0) {
                                        if ((uVar15 >> 0xf & 1) == 0) {
                                          bVar5 = true;
                                          bVar7 = 0;
                                          if ((uVar15 >> 0xe & 1) != 0) goto LAB_00273c28;
                                        }
                                        else {
LAB_002759f0:
                                          bVar7 = 2;
                                        }
                                      }
                                      else {
LAB_00275ac4:
                                        bVar7 = 3;
                                      }
                                    }
                                    else {
LAB_00275ad0:
                                      bVar7 = 4;
                                    }
                                  }
                                  else {
LAB_00275844:
                                    bVar7 = 5;
                                  }
                                }
                                else {
LAB_00275850:
                                  bVar7 = 6;
                                }
                              }
                              else {
LAB_0027585c:
                                bVar7 = 7;
                              }
                            }
                            else {
LAB_00275868:
                              bVar7 = 8;
                            }
                          }
                          else {
LAB_00275874:
                            bVar7 = 9;
                          }
                        }
                        else {
LAB_00275880:
                          bVar7 = 10;
                        }
                      }
                      else {
LAB_0027588c:
                        bVar7 = 0xb;
                      }
                    }
                    else {
LAB_00275898:
                      bVar7 = 0xc;
                    }
                  }
                  else {
LAB_00275960:
                    bVar7 = 0xd;
                  }
                }
                else {
LAB_0027596c:
                  bVar7 = 0xe;
                }
              }
              else {
LAB_002759dc:
                bVar7 = 0xf;
              }
            }
            else {
LAB_002757c4:
              bVar7 = 0x10;
            }
          }
          else {
LAB_002757e4:
            bVar7 = 0x11;
          }
LAB_00272d5c:
          bVar6 = 0;
          if (uVar19 != 0) goto LAB_00273248;
          goto LAB_00272d64;
        }
        if ((uVar15 & 0xffffc000) != 0xffffc000) {
          if ((uVar15 >> 0x1e & 1) == 0) goto LAB_002757e4;
          if ((uVar15 >> 0x1d & 1) == 0) goto LAB_002757c4;
          if ((uVar15 >> 0x1c & 1) == 0) goto LAB_002759dc;
          if ((uVar15 >> 0x1b & 1) == 0) goto LAB_0027596c;
          if ((uVar15 >> 0x1a & 1) == 0) goto LAB_00275960;
          if ((uVar15 >> 0x19 & 1) == 0) goto LAB_00275898;
          if ((uVar15 >> 0x18 & 1) == 0) goto LAB_0027588c;
          if ((uVar15 >> 0x17 & 1) == 0) goto LAB_00275880;
          if ((uVar15 >> 0x16 & 1) == 0) goto LAB_00275874;
          if ((uVar15 >> 0x15 & 1) == 0) goto LAB_00275868;
          if ((uVar15 >> 0x14 & 1) == 0) goto LAB_0027585c;
          if ((uVar15 >> 0x13 & 1) == 0) goto LAB_00275850;
          if ((uVar15 >> 0x12 & 1) == 0) goto LAB_00275844;
          if ((uVar15 >> 0x11 & 1) == 0) goto LAB_00275ad0;
          if ((uVar15 >> 0x10 & 1) == 0) goto LAB_00275ac4;
          if ((uVar15 >> 0xf & 1) == 0) goto LAB_002759f0;
          bVar5 = (uVar15 & 0x4000) != 0x4000;
LAB_00273c28:
          bVar7 = bVar5;
          goto LAB_00272d5c;
        }
LAB_00273d4c:
        iVar20 = 1;
        bVar7 = 0;
        if (uVar19 != 0) goto LAB_00273248;
      }
      iVar25 = 0;
      if (iVar20 != 0) {
        iVar25 = (int)uVar19 / iVar20;
      }
      iVar11 = 0;
      if (iVar20 != 0) {
        iVar11 = (int)uVar15 / iVar20;
      }
      iVar25 = iVar25 * iVar25 + iVar11 * iVar11;
      uVar24 = 0;
      if (iVar25 != 0) {
        if (iVar25 == 0x7fffffff) {
          iVar25 = 0x7ffffffe;
        }
        iVar11 = 0;
        if (iVar25 != 0) {
          iVar11 = iVar25 / iVar25;
        }
        iVar11 = (iVar25 + iVar11) / 2;
        iVar17 = iVar25;
        if (iVar11 < iVar25) {
          do {
            iVar17 = 0;
            if (iVar11 != 0) {
              iVar17 = iVar25 / iVar11;
            }
            iVar9 = (iVar11 + iVar17) / 2;
            iVar17 = iVar11;
            if (iVar11 <= iVar9) break;
            iVar11 = 0;
            if (iVar9 != 0) {
              iVar11 = iVar25 / iVar9;
            }
            iVar11 = (iVar9 + iVar11) / 2;
            iVar17 = iVar9;
            if (iVar9 <= iVar11) break;
            iVar17 = 0;
            if (iVar11 != 0) {
              iVar17 = iVar25 / iVar11;
            }
            iVar9 = (iVar11 + iVar17) / 2;
            iVar17 = iVar11;
            if (iVar11 <= iVar9) break;
            iVar11 = 0;
            if (iVar9 != 0) {
              iVar11 = iVar25 / iVar9;
            }
            iVar11 = (iVar9 + iVar11) / 2;
            iVar17 = iVar9;
            if (iVar9 <= iVar11) break;
            iVar17 = 0;
            if (iVar11 != 0) {
              iVar17 = iVar25 / iVar11;
            }
            iVar9 = (iVar11 + iVar17) / 2;
            iVar17 = iVar11;
            if (iVar11 <= iVar9) break;
            iVar11 = 0;
            if (iVar9 != 0) {
              iVar11 = iVar25 / iVar9;
            }
            iVar11 = (iVar9 + iVar11) / 2;
            iVar17 = iVar9;
            if (iVar9 <= iVar11) break;
            iVar17 = 0;
            if (iVar11 != 0) {
              iVar17 = iVar25 / iVar11;
            }
            iVar9 = (iVar11 + iVar17) / 2;
            iVar17 = iVar11;
            if (iVar11 <= iVar9) break;
            iVar11 = 0;
            if (iVar9 != 0) {
              iVar11 = iVar25 / iVar9;
            }
            iVar11 = (iVar9 + iVar11) / 2;
            iVar17 = iVar9;
          } while (iVar11 < iVar9);
        }
        uVar24 = iVar17 * iVar20;
      }
      uVar12 = uVar15;
      if ((int)uVar15 < 0) {
        uVar12 = 0;
      }
      if ((int)uVar12 < (int)uVar24) {
        uVar12 = uVar24;
      }
      if ((int)uVar12 < (int)uVar19) {
        uVar24 = uVar19;
        if (uVar19 == 0 && uVar14 == 0) {
          uVar14 = 0;
          iVar20 = 0;
          uVar19 = 0;
          goto LAB_002721e8;
        }
LAB_00272ee0:
        uVar12 = uVar24;
        if ((uVar24 & 0xffff8000) == 0) goto LAB_002730ec;
        if ((uVar24 >> 0x1e & 1) == 0) {
          if ((uVar24 >> 0x1d & 1) == 0) {
            if ((uVar24 >> 0x1c & 1) == 0) {
              if ((uVar24 >> 0x1b & 1) == 0) {
                if ((uVar24 >> 0x1a & 1) == 0) {
                  if ((uVar24 >> 0x19 & 1) == 0) {
                    if ((uVar24 >> 0x18 & 1) == 0) {
                      if ((uVar24 >> 0x17 & 1) == 0) {
                        if ((uVar24 >> 0x16 & 1) == 0) {
                          if ((uVar24 >> 0x15 & 1) == 0) {
                            if ((uVar24 >> 0x14 & 1) == 0) {
                              if ((uVar24 >> 0x13 & 1) == 0) {
                                if ((uVar24 >> 0x12 & 1) == 0) {
                                  if ((uVar24 >> 0x11 & 1) == 0) {
                                    if ((uVar24 >> 0x10 & 1) == 0) {
                                      uVar18 = uVar24 >> 0xf & 1;
                                    }
                                    else {
                                      uVar18 = 2;
                                    }
                                  }
                                  else {
                                    uVar18 = 3;
                                  }
                                }
                                else {
                                  uVar18 = 4;
                                }
                              }
                              else {
                                uVar18 = 5;
                              }
                            }
                            else {
                              uVar18 = 6;
                            }
                          }
                          else {
                            uVar18 = 7;
                          }
                        }
                        else {
                          uVar18 = 8;
                        }
                      }
                      else {
                        uVar18 = 9;
                      }
                    }
                    else {
                      uVar18 = 10;
                    }
                  }
                  else {
                    uVar18 = 0xb;
                  }
                }
                else {
                  uVar18 = 0xc;
                }
              }
              else {
                uVar18 = 0xd;
              }
            }
            else {
              uVar18 = 0xe;
            }
          }
          else {
            uVar18 = 0xf;
          }
        }
        else {
          uVar18 = 0x10;
        }
        if (uVar14 != 0) goto LAB_00272f58;
        goto LAB_00272f2c;
      }
      if (uVar12 == 0 && uVar14 == 0) {
        uVar14 = 0;
        iVar20 = 0;
        goto LAB_002721e8;
      }
      uVar24 = uVar12;
      if (uVar12 != 0) goto LAB_00272ee0;
LAB_002730ec:
      uVar18 = 0;
      iVar20 = 0;
      uVar24 = uVar12;
      if (uVar14 != 0) {
LAB_00272f58:
        if ((int)uVar14 < 0) {
          if ((uVar14 & 0xffff8000) != 0xffff8000) {
            if ((uVar14 >> 0x1e & 1) == 0) goto LAB_00275808;
            if ((uVar14 >> 0x1d & 1) == 0) goto LAB_00275980;
            if ((uVar14 >> 0x1c & 1) == 0) goto LAB_00275978;
            if ((uVar14 >> 0x1b & 1) == 0) goto LAB_00275dd4;
            if ((uVar14 >> 0x1a & 1) == 0) goto LAB_00275dcc;
            if ((uVar14 >> 0x19 & 1) == 0) goto LAB_00275dc4;
            if ((uVar14 >> 0x18 & 1) == 0) goto LAB_00275dbc;
            if ((uVar14 >> 0x17 & 1) == 0) goto LAB_00275c60;
            if ((uVar14 >> 0x16 & 1) == 0) goto LAB_00275c58;
            if ((uVar14 >> 0x15 & 1) == 0) goto LAB_00275c50;
            if ((uVar14 >> 0x14 & 1) == 0) goto LAB_00275c48;
            if ((uVar14 >> 0x13 & 1) == 0) goto LAB_00275c40;
            if ((uVar14 >> 0x12 & 1) == 0) goto LAB_00275c38;
            if ((uVar14 >> 0x11 & 1) == 0) goto LAB_00275c30;
            if ((uVar14 >> 0x10 & 1) == 0) goto LAB_00275c28;
            uVar12 = (uint)((uVar14 & 0x8000) != 0x8000);
            goto LAB_00272fa4;
          }
LAB_00272f2c:
          uVar12 = uVar18;
        }
        else {
          if ((uVar21 & 0xffff8000) == 0) goto LAB_00272f2c;
          if ((uVar14 >> 0x1e & 1) == 0) {
            if ((uVar14 >> 0x1d & 1) == 0) {
              if ((uVar14 >> 0x1c & 1) == 0) {
                if ((uVar14 >> 0x1b & 1) == 0) {
                  if ((uVar14 >> 0x1a & 1) == 0) {
                    if ((uVar14 >> 0x19 & 1) == 0) {
                      if ((uVar14 >> 0x18 & 1) == 0) {
                        if ((uVar14 >> 0x17 & 1) == 0) {
                          if ((uVar14 >> 0x16 & 1) == 0) {
                            if ((uVar14 >> 0x15 & 1) == 0) {
                              if ((uVar14 >> 0x14 & 1) == 0) {
                                if ((uVar14 >> 0x13 & 1) == 0) {
                                  if ((uVar14 >> 0x12 & 1) == 0) {
                                    if ((uVar14 >> 0x11 & 1) == 0) {
                                      if ((uVar14 >> 0x10 & 1) == 0) {
                                        uVar12 = (uint)(uVar21 >> 0xf) & 1;
                                      }
                                      else {
LAB_00275c28:
                                        uVar12 = 2;
                                      }
                                    }
                                    else {
LAB_00275c30:
                                      uVar12 = 3;
                                    }
                                  }
                                  else {
LAB_00275c38:
                                    uVar12 = 4;
                                  }
                                }
                                else {
LAB_00275c40:
                                  uVar12 = 5;
                                }
                              }
                              else {
LAB_00275c48:
                                uVar12 = 6;
                              }
                            }
                            else {
LAB_00275c50:
                              uVar12 = 7;
                            }
                          }
                          else {
LAB_00275c58:
                            uVar12 = 8;
                          }
                        }
                        else {
LAB_00275c60:
                          uVar12 = 9;
                        }
                      }
                      else {
LAB_00275dbc:
                        uVar12 = 10;
                      }
                    }
                    else {
LAB_00275dc4:
                      uVar12 = 0xb;
                    }
                  }
                  else {
LAB_00275dcc:
                    uVar12 = 0xc;
                  }
                }
                else {
LAB_00275dd4:
                  uVar12 = 0xd;
                }
              }
              else {
LAB_00275978:
                uVar12 = 0xe;
              }
            }
            else {
LAB_00275980:
              uVar12 = 0xf;
            }
          }
          else {
LAB_00275808:
            uVar12 = 0x10;
          }
LAB_00272fa4:
          if (uVar12 <= uVar18) goto LAB_00272f2c;
        }
        iVar25 = 1;
        switch(uVar12) {
        case 1:
          iVar25 = 2;
          break;
        case 2:
          iVar25 = 4;
          break;
        case 3:
          iVar25 = 8;
          break;
        case 4:
          iVar25 = 0x10;
          break;
        case 5:
          iVar25 = 0x20;
          break;
        case 6:
          iVar25 = 0x40;
          break;
        case 7:
          iVar25 = 0x80;
          break;
        case 8:
          iVar25 = 0x100;
          break;
        case 9:
          iVar25 = 0x200;
          break;
        case 10:
          iVar25 = 0x400;
          break;
        case 0xb:
          iVar25 = 0x800;
          break;
        case 0xc:
          iVar25 = 0x1000;
          break;
        case 0xd:
          iVar25 = 0x2000;
          break;
        case 0xe:
          iVar25 = 0x4000;
          break;
        case 0xf:
          iVar25 = 0x8000;
          break;
        case 0x10:
          iVar25 = 0x10000;
        }
        iVar20 = 0;
        if (iVar25 != 0) {
          iVar20 = (int)uVar14 / iVar25;
        }
        uVar12 = 0;
        if (iVar25 != 0) {
          uVar12 = (int)uVar24 / iVar25;
        }
        if (iVar20 < 0) {
          iVar20 = -iVar20;
          if ((int)uVar12 < iVar20) {
            uVar13 = 0;
            if ((long)iVar20 != 0) {
              uVar13 = ((long)(int)uVar12 * 0x7fff) / (long)iVar20;
            }
            iVar20 = *(int *)(PTR_gasdAtan_00567958 + (uVar13 >> 9 & 0x3f) * 4) + -0x5a;
          }
          else {
            lVar4 = 0;
            if ((long)(int)uVar12 != 0) {
              lVar4 = ((long)iVar20 * 0x7fff) / (long)(int)uVar12;
            }
            iVar20 = -*(int *)(PTR_gasdAtan_00567958 + (lVar4 / 0x200 & 0x3fU) * 4);
          }
          goto LAB_002721e8;
        }
        if ((int)uVar12 < iVar20) {
          uVar13 = 0;
          if ((long)iVar20 != 0) {
            uVar13 = ((long)(int)uVar12 * 0x7fff) / (long)iVar20;
          }
          iVar20 = 0x5a - *(int *)(PTR_gasdAtan_00567958 + (uVar13 >> 9 & 0x3f) * 4);
          goto LAB_002721e8;
        }
      }
      uVar13 = 0;
      if ((long)(int)uVar12 != 0) {
        uVar13 = ((long)iVar20 * 0x7fff) / (long)(int)uVar12;
      }
      iVar20 = *(int *)(PTR_gasdAtan_00567958 + (uVar13 >> 9 & 0x3f) * 4);
      goto LAB_002721e8;
    }
  }
LAB_002721c4:
  uVar15 = 0;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  iVar16 = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  uVar14 = 0;
  uVar22 = *(undefined4 *)(param_1 + 0x120);
  uVar19 = 0;
  iVar20 = iVar16;
LAB_002721e8:
  *(int *)param_3 = iVar16;
  *(int *)(param_3 + 4) = iVar20;
  *(undefined4 *)(param_3 + 8) = uVar22;
  *(uint *)(param_1 + 0x160) = uVar15;
  *(uint *)(param_1 + 0x164) = uVar14;
  *(uint *)(param_1 + 0x168) = uVar19;
  *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)param_3;
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_3 + 8);
  return;
}

