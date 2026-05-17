/* MaDsp_3DEngSet @ 0024f768 4576B */


/* YAMAHA::MaDsp_3DEngSet(_MASMW_P3DASNDSRCCTRL*, _MASMW_P3DASNDSRCCTRL*, _MASMW_P3DASNDSRCMOVE*) */

void YAMAHA::MaDsp_3DEngSet
               (_MASMW_P3DASNDSRCCTRL *param_1,_MASMW_P3DASNDSRCCTRL *param_2,
               _MASMW_P3DASNDSRCMOVE *param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  
  uVar4 = *(uint *)param_1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_3 + 0xf4) = 0;
  *(undefined4 *)(param_3 + 0xf0) = 0;
  *(undefined4 *)(param_3 + 0xec) = 0;
  if ((uVar4 & 1) == 0) goto LAB_0024f840;
  iVar9 = *(int *)(param_1 + 0x28);
  *(int *)(param_2 + 0x28) = iVar9;
  if (iVar9 < 1) {
switchD_0024f834_default:
    *(undefined4 *)(param_3 + 0xf8) = 1;
  }
  else {
    uVar6 = (iVar9 + 0x13) / 0x14 + 1;
    *(uint *)(param_3 + 0xec) = uVar6;
    if (uVar6 == 0) goto switchD_0024f834_default;
    if ((int)uVar6 < 0) {
      if ((uVar6 & 0xffff8000) != 0xffff8000) {
        if ((uVar6 >> 0x1e & 1) == 0) goto LAB_002505b0;
        if ((uVar6 >> 0x1d & 1) == 0) goto LAB_002505d8;
        if ((uVar6 >> 0x1c & 1) == 0) goto LAB_00250434;
        if ((uVar6 >> 0x1b & 1) == 0) goto LAB_0025060c;
        if ((uVar6 >> 0x1a & 1) == 0) goto LAB_002506b0;
        if ((uVar6 >> 0x19 & 1) == 0) goto LAB_002506c8;
        if ((uVar6 >> 0x18 & 1) == 0) goto LAB_0025073c;
        if ((uVar6 >> 0x17 & 1) == 0) goto LAB_00250774;
        if ((uVar6 >> 0x16 & 1) == 0) goto LAB_002507a4;
        if ((uVar6 >> 0x15 & 1) == 0) goto LAB_002507b0;
        if ((uVar6 >> 0x14 & 1) == 0) goto LAB_002507e0;
        if ((uVar6 >> 0x13 & 1) == 0) goto LAB_00250810;
        if ((uVar6 >> 0x12 & 1) == 0) goto LAB_0025081c;
        if ((uVar6 >> 0x11 & 1) == 0) goto LAB_00250858;
        if ((uVar6 >> 0x10 & 1) == 0) goto LAB_00250864;
        uVar3 = 0;
        if ((uVar6 >> 0xf & 1) == 0) goto LAB_0024feac;
        goto LAB_0024f810;
      }
      goto switchD_0024f834_default;
    }
    if ((uVar6 & 0xffff8000) == 0) goto switchD_0024f834_default;
    if ((uVar6 >> 0x1e & 1) == 0) {
      if ((uVar6 >> 0x1d & 1) == 0) {
        if ((uVar6 >> 0x1c & 1) == 0) {
          if ((uVar6 >> 0x1b & 1) == 0) {
            if ((uVar6 >> 0x1a & 1) == 0) {
              if ((uVar6 >> 0x19 & 1) == 0) {
                if ((uVar6 >> 0x18 & 1) == 0) {
                  if ((uVar6 >> 0x17 & 1) == 0) {
                    if ((uVar6 >> 0x16 & 1) == 0) {
                      if ((uVar6 >> 0x15 & 1) == 0) {
                        if ((uVar6 >> 0x14 & 1) == 0) {
                          if ((uVar6 >> 0x13 & 1) == 0) {
                            if ((uVar6 >> 0x12 & 1) == 0) {
                              if ((uVar6 >> 0x11 & 1) == 0) {
                                if ((uVar6 >> 0x10 & 1) == 0) {
                                  uVar3 = 0;
                                  if ((uVar6 >> 0xf & 1) != 0) {
LAB_0024feac:
                                    uVar3 = 1;
                                  }
                                }
                                else {
LAB_00250864:
                                  uVar3 = 2;
                                }
                              }
                              else {
LAB_00250858:
                                uVar3 = 3;
                              }
                            }
                            else {
LAB_0025081c:
                              uVar3 = 4;
                            }
                          }
                          else {
LAB_00250810:
                            uVar3 = 5;
                          }
                        }
                        else {
LAB_002507e0:
                          uVar3 = 6;
                        }
                      }
                      else {
LAB_002507b0:
                        uVar3 = 7;
                      }
                    }
                    else {
LAB_002507a4:
                      uVar3 = 8;
                    }
                  }
                  else {
LAB_00250774:
                    uVar3 = 9;
                  }
                }
                else {
LAB_0025073c:
                  uVar3 = 10;
                }
              }
              else {
LAB_002506c8:
                uVar3 = 0xb;
              }
            }
            else {
LAB_002506b0:
              uVar3 = 0xc;
            }
          }
          else {
LAB_0025060c:
            uVar3 = 0xd;
          }
        }
        else {
LAB_00250434:
          uVar3 = 0xe;
        }
      }
      else {
LAB_002505d8:
        uVar3 = 0xf;
      }
    }
    else {
LAB_002505b0:
      uVar3 = 0x10;
    }
LAB_0024f810:
    switch(uVar3) {
    case 1:
      *(undefined4 *)(param_3 + 0xf8) = 2;
      break;
    case 2:
      *(undefined4 *)(param_3 + 0xf8) = 4;
      break;
    case 3:
      *(undefined4 *)(param_3 + 0xf8) = 8;
      break;
    case 4:
      *(undefined4 *)(param_3 + 0xf8) = 0x10;
      break;
    case 5:
      *(undefined4 *)(param_3 + 0xf8) = 0x20;
      break;
    case 6:
      *(undefined4 *)(param_3 + 0xf8) = 0x40;
      break;
    case 7:
      *(undefined4 *)(param_3 + 0xf8) = 0x80;
      break;
    case 8:
      *(undefined4 *)(param_3 + 0xf8) = 0x100;
      break;
    case 9:
      *(undefined4 *)(param_3 + 0xf8) = 0x200;
      break;
    case 10:
      *(undefined4 *)(param_3 + 0xf8) = 0x400;
      break;
    case 0xb:
      *(undefined4 *)(param_3 + 0xf8) = 0x800;
      break;
    case 0xc:
      *(undefined4 *)(param_3 + 0xf8) = 0x1000;
      break;
    case 0xd:
      *(undefined4 *)(param_3 + 0xf8) = 0x2000;
      break;
    case 0xe:
      *(undefined4 *)(param_3 + 0xf8) = 0x4000;
      break;
    case 0xf:
      *(undefined4 *)(param_3 + 0xf8) = 0x8000;
      break;
    case 0x10:
      *(undefined4 *)(param_3 + 0xf8) = 0x10000;
      break;
    default:
      goto switchD_0024f834_default;
    }
  }
LAB_0024f840:
  if ((uVar4 >> 2 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  if ((uVar4 >> 1 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    uVar6 = *(uint *)(param_1 + 0x24);
    *(uint *)(param_2 + 0x24) = uVar6;
    if (*(int *)(param_2 + 0x18) == 2) {
      if ((int)uVar6 < 1) {
        iVar10 = 0;
        iVar7 = 0;
        iVar9 = 0;
      }
      else {
        if ((uVar6 & 0xffff8000) == 0) {
          iVar10 = 1;
          iVar9 = 1;
        }
        else if ((uVar6 >> 0x1e & 1) == 0) {
          if ((uVar6 >> 0x1d & 1) == 0) {
            if ((uVar6 >> 0x1c & 1) == 0) {
              if ((uVar6 >> 0x1b & 1) == 0) {
                if ((uVar6 >> 0x1a & 1) == 0) {
                  if ((uVar6 >> 0x19 & 1) == 0) {
                    if ((uVar6 >> 0x18 & 1) == 0) {
                      if ((uVar6 >> 0x17 & 1) == 0) {
                        if ((uVar6 >> 0x16 & 1) == 0) {
                          if ((uVar6 >> 0x15 & 1) == 0) {
                            if ((uVar6 >> 0x14 & 1) == 0) {
                              if ((uVar6 >> 0x13 & 1) == 0) {
                                if ((uVar6 >> 0x12 & 1) == 0) {
                                  if ((uVar6 >> 0x11 & 1) == 0) {
                                    if ((uVar6 >> 0x10 & 1) == 0) {
                                      iVar10 = 1;
                                      iVar9 = 1;
                                      if ((uVar6 >> 0xf & 1) != 0) {
                                        iVar10 = 2;
                                        iVar9 = 2;
                                      }
                                    }
                                    else {
                                      iVar10 = 4;
                                      iVar9 = 4;
                                    }
                                  }
                                  else {
                                    iVar10 = 8;
                                    iVar9 = 8;
                                  }
                                }
                                else {
                                  iVar10 = 0x10;
                                  iVar9 = 0x10;
                                }
                              }
                              else {
                                iVar10 = 0x20;
                                iVar9 = 0x20;
                              }
                            }
                            else {
                              iVar10 = 0x40;
                              iVar9 = 0x40;
                            }
                          }
                          else {
                            iVar10 = 0x80;
                            iVar9 = 0x80;
                          }
                        }
                        else {
                          iVar10 = 0x100;
                          iVar9 = 0x100;
                        }
                      }
                      else {
                        iVar10 = 0x200;
                        iVar9 = 0x200;
                      }
                    }
                    else {
                      iVar10 = 0x400;
                      iVar9 = 0x400;
                    }
                  }
                  else {
                    iVar10 = 0x800;
                    iVar9 = 0x800;
                  }
                }
                else {
                  iVar10 = 0x1000;
                  iVar9 = 0x1000;
                }
              }
              else {
                iVar10 = 0x2000;
                iVar9 = 0x2000;
              }
            }
            else {
              iVar10 = 0x4000;
              iVar9 = 0x4000;
            }
          }
          else {
            iVar10 = 0x8000;
            iVar9 = 0x8000;
          }
        }
        else {
          iVar10 = 0x10000;
          iVar9 = 0x10000;
        }
        iVar7 = *(int *)(param_2 + 0x20);
        iVar13 = 0;
        if (iVar9 != 0) {
          iVar13 = (int)uVar6 / iVar9;
        }
        if ((iVar7 < 0xb5) && (-0xb5 < iVar7)) {
          iVar9 = iVar7 + 0x5a;
          if (0xb4 < iVar9) {
            iVar9 = iVar7 + -0x10e;
            iVar5 = 0;
            if (-0xb5 < iVar9) goto LAB_00250460;
            goto LAB_00250464;
          }
          if (iVar9 < -0x59) goto LAB_00250460;
          if (iVar9 < 0) {
            iVar9 = -(&DAT_0053bf90)[-iVar9];
          }
          else {
            if (0x5a < iVar9) {
              iVar9 = 0xb4 - iVar9;
            }
            iVar9 = (&DAT_0053bf90)[iVar9];
          }
        }
        else {
          iVar9 = -0x5a;
LAB_00250460:
          iVar5 = iVar9 + 0xb4;
LAB_00250464:
          iVar9 = -(&DAT_0053bf90)[iVar5];
        }
        iVar5 = *(int *)(param_2 + 0x1c);
        iVar1 = (iVar13 * iVar9) / 0x7fff;
        if (iVar5 < 0xb5) {
          if (iVar5 < -0xb4) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar5 + 0xb4;
            if (-0x5a < iVar5) {
              if (iVar5 < 0) {
                iVar9 = -(&DAT_0053bf90)[-iVar5];
              }
              else {
                if (0x5a < iVar5) {
                  iVar9 = 0xb4 - iVar5;
                  goto LAB_002504b4;
                }
                iVar9 = (&DAT_0053bf90)[iVar5];
              }
              goto LAB_0024ffb0;
            }
          }
          iVar9 = -(&DAT_0053bf90)[iVar9];
        }
        else {
          iVar9 = 0;
LAB_002504b4:
          iVar9 = (&DAT_0053bf90)[iVar9];
        }
LAB_0024ffb0:
        iVar9 = ((iVar1 * iVar9) / 0x7fff) * iVar10;
        if (iVar7 < 0xb5) {
          if (iVar7 < -0xb4) {
            iVar7 = 0;
          }
          else {
            if (-0x5a < iVar7) {
              if (-1 < iVar7) {
                if (0x5a < iVar7) {
                  iVar7 = 0xb4 - iVar7;
                }
                goto LAB_00250490;
              }
              iVar7 = -(&DAT_0053bf90)[-iVar7];
              goto LAB_00250000;
            }
            iVar7 = iVar7 + 0xb4;
          }
          iVar7 = -(&DAT_0053bf90)[iVar7];
        }
        else {
          iVar7 = 0;
LAB_00250490:
          iVar7 = (&DAT_0053bf90)[iVar7];
        }
LAB_00250000:
        iVar7 = ((iVar13 * iVar7) / 0x7fff) * iVar10;
        if ((iVar5 < 0xb5) && (-0xb5 < iVar5)) {
          iVar13 = iVar5 + 0x5a;
          if (0xb4 < iVar13) {
            iVar13 = iVar5 + -0x10e;
            iVar5 = 0;
            if (-0xb5 < iVar13) goto LAB_00250444;
            goto LAB_00250448;
          }
          if (iVar13 < -0x59) goto LAB_00250444;
          if (iVar13 < 0) {
            iVar13 = -(&DAT_0053bf90)[-iVar13];
          }
          else {
            if (0x5a < iVar13) {
              iVar13 = 0xb4 - iVar13;
            }
            iVar13 = (&DAT_0053bf90)[iVar13];
          }
        }
        else {
          iVar13 = -0x5a;
LAB_00250444:
          iVar5 = iVar13 + 0xb4;
LAB_00250448:
          iVar13 = -(&DAT_0053bf90)[iVar5];
        }
        iVar10 = ((iVar1 * iVar13) / 0x7fff) * iVar10;
      }
      *(int *)(param_2 + 0x1c) = iVar9;
      *(int *)(param_2 + 0x20) = iVar7;
      *(int *)(param_2 + 0x24) = iVar10;
    }
  }
  if ((uVar4 >> 3 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(uint *)param_2 = *(uint *)param_2 | 8;
  }
  if ((uVar4 >> 4 & 1) != 0) {
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
  }
  if ((uVar4 >> 5 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(uint *)param_2 = *(uint *)param_2 | 0x20;
  }
  if ((uVar4 >> 6 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(uint *)param_2 = *(uint *)param_2 | 0x40;
  }
  if ((uVar4 >> 7 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(uint *)param_2 = *(uint *)param_2 | 0x80;
  }
  if ((uVar4 >> 8 & 1) == 0) goto LAB_0024f9bc;
  uVar6 = *(uint *)(param_1 + 0x54);
  if (uVar6 < 100) {
    uVar6 = 0;
    *(undefined4 *)(param_2 + 0x54) = 100;
    *(uint *)param_2 = *(uint *)param_2 | 0x100;
LAB_0024f920:
    if ((uVar6 & 0xffff8000) == 0) goto switchD_0024f994_default;
    if ((uVar6 >> 0x1e & 1) == 0) {
      if ((uVar6 >> 0x1d & 1) == 0) {
        if ((uVar6 >> 0x1c & 1) == 0) {
          if ((uVar6 >> 0x1b & 1) == 0) {
            if ((uVar6 >> 0x1a & 1) == 0) {
              if ((uVar6 >> 0x19 & 1) == 0) {
                if ((uVar6 >> 0x18 & 1) == 0) {
                  if ((uVar6 >> 0x17 & 1) == 0) {
                    if ((uVar6 >> 0x16 & 1) == 0) {
                      if ((uVar6 >> 0x15 & 1) == 0) {
                        if ((uVar6 >> 0x14 & 1) == 0) {
                          if ((uVar6 >> 0x13 & 1) == 0) {
                            if ((uVar6 >> 0x12 & 1) == 0) {
                              if ((uVar6 >> 0x11 & 1) == 0) {
                                if ((uVar6 >> 0x10 & 1) == 0) {
                                  uVar3 = 0;
                                  if ((uVar6 >> 0xf & 1) != 0) {
LAB_002500e0:
                                    uVar3 = 1;
                                  }
                                }
                                else {
LAB_0025087c:
                                  uVar3 = 2;
                                }
                              }
                              else {
LAB_0025084c:
                                uVar3 = 3;
                              }
                            }
                            else {
LAB_00250828:
                              uVar3 = 4;
                            }
                          }
                          else {
LAB_002507f8:
                            uVar3 = 5;
                          }
                        }
                        else {
LAB_002507d4:
                          uVar3 = 6;
                        }
                      }
                      else {
LAB_002507c8:
                        uVar3 = 7;
                      }
                    }
                    else {
LAB_0025078c:
                      uVar3 = 8;
                    }
                  }
                  else {
LAB_00250780:
                    uVar3 = 9;
                  }
                }
                else {
LAB_0025075c:
                  uVar3 = 10;
                }
              }
              else {
LAB_002506e8:
                uVar3 = 0xb;
              }
            }
            else {
LAB_0025069c:
              uVar3 = 0xc;
            }
          }
          else {
LAB_00250618:
            uVar3 = 0xd;
          }
        }
        else {
LAB_00250420:
          uVar3 = 0xe;
        }
      }
      else {
LAB_002505f0:
        uVar3 = 0xf;
      }
    }
    else {
LAB_0025059c:
      uVar3 = 0x10;
    }
LAB_0024f970:
    switch(uVar3) {
    case 1:
      *(undefined4 *)(param_3 + 0x1fc) = 2;
      break;
    case 2:
      *(undefined4 *)(param_3 + 0x1fc) = 4;
      break;
    case 3:
      *(undefined4 *)(param_3 + 0x1fc) = 8;
      break;
    case 4:
      *(undefined4 *)(param_3 + 0x1fc) = 0x10;
      break;
    case 5:
      *(undefined4 *)(param_3 + 0x1fc) = 0x20;
      break;
    case 6:
      *(undefined4 *)(param_3 + 0x1fc) = 0x40;
      break;
    case 7:
      *(undefined4 *)(param_3 + 0x1fc) = 0x80;
      break;
    case 8:
      *(undefined4 *)(param_3 + 0x1fc) = 0x100;
      break;
    case 9:
      *(undefined4 *)(param_3 + 0x1fc) = 0x200;
      break;
    case 10:
      *(undefined4 *)(param_3 + 0x1fc) = 0x400;
      break;
    case 0xb:
      *(undefined4 *)(param_3 + 0x1fc) = 0x800;
      break;
    case 0xc:
      *(undefined4 *)(param_3 + 0x1fc) = 0x1000;
      break;
    case 0xd:
      *(undefined4 *)(param_3 + 0x1fc) = 0x2000;
      break;
    case 0xe:
      *(undefined4 *)(param_3 + 0x1fc) = 0x4000;
      break;
    case 0xf:
      *(undefined4 *)(param_3 + 0x1fc) = 0x8000;
      break;
    case 0x10:
      *(undefined4 *)(param_3 + 0x1fc) = 0x10000;
      break;
    default:
      goto switchD_0024f994_default;
    }
  }
  else {
    *(uint *)(param_2 + 0x54) = uVar6;
    *(uint *)param_2 = *(uint *)param_2 | 0x100;
    if (-1 < (int)uVar6) goto LAB_0024f920;
    if ((uVar6 & 0xffff8000) != 0xffff8000) {
      if ((uVar6 >> 0x1e & 1) == 0) goto LAB_0025059c;
      if ((uVar6 >> 0x1d & 1) == 0) goto LAB_002505f0;
      if ((uVar6 >> 0x1c & 1) == 0) goto LAB_00250420;
      if ((uVar6 >> 0x1b & 1) == 0) goto LAB_00250618;
      if ((uVar6 >> 0x1a & 1) == 0) goto LAB_0025069c;
      if ((uVar6 >> 0x19 & 1) == 0) goto LAB_002506e8;
      if ((uVar6 >> 0x18 & 1) == 0) goto LAB_0025075c;
      if ((uVar6 >> 0x17 & 1) == 0) goto LAB_00250780;
      if ((uVar6 >> 0x16 & 1) == 0) goto LAB_0025078c;
      if ((uVar6 >> 0x15 & 1) == 0) goto LAB_002507c8;
      if ((uVar6 >> 0x14 & 1) == 0) goto LAB_002507d4;
      if ((uVar6 >> 0x13 & 1) == 0) goto LAB_002507f8;
      if ((uVar6 >> 0x12 & 1) == 0) goto LAB_00250828;
      if ((uVar6 >> 0x11 & 1) == 0) goto LAB_0025084c;
      if ((uVar6 >> 0x10 & 1) == 0) goto LAB_0025087c;
      uVar3 = 0;
      if ((uVar6 >> 0xf & 1) == 0) goto LAB_002500e0;
      goto LAB_0024f970;
    }
switchD_0024f994_default:
    *(undefined4 *)(param_3 + 0x1fc) = 1;
  }
LAB_0024f9bc:
  if ((uVar4 >> 9 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(uint *)param_2 = *(uint *)param_2 | 0x200;
  }
  if ((uVar4 >> 10 & 1) != 0) {
    uVar3 = 1;
    uVar11 = *(ulong *)(param_1 + 0x58);
    *(ulong *)(param_2 + 0x58) = uVar11;
    *(uint *)param_2 = *(uint *)param_2 | 0x400;
    uVar6 = (uint)uVar11;
    if (uVar6 != 0) {
      if ((int)uVar6 < 0) {
        if ((uVar6 & 0xffff8000) != 0xffff8000) {
          if ((uVar6 >> 0x1e & 1) == 0) goto LAB_002505bc;
          if ((uVar6 >> 0x1d & 1) == 0) goto LAB_002505e4;
          if ((uVar6 >> 0x1c & 1) == 0) goto LAB_00250404;
          if ((uVar6 >> 0x1b & 1) == 0) goto LAB_0025066c;
          if ((uVar6 >> 0x1a & 1) == 0) goto LAB_002506bc;
          if ((uVar6 >> 0x19 & 1) == 0) goto LAB_002506dc;
          if ((uVar6 >> 0x18 & 1) == 0) goto LAB_00250750;
          if ((uVar6 >> 0x17 & 1) == 0) goto LAB_00250768;
          if ((uVar6 >> 0x16 & 1) == 0) goto LAB_00250798;
          if ((uVar6 >> 0x15 & 1) == 0) goto LAB_002507bc;
          if ((uVar6 >> 0x14 & 1) == 0) goto LAB_002507ec;
          if ((uVar6 >> 0x13 & 1) == 0) goto LAB_00250804;
          if ((uVar6 >> 0x12 & 1) == 0) goto LAB_00250834;
          if ((uVar6 >> 0x11 & 1) == 0) goto LAB_00250840;
          if ((uVar6 >> 0x10 & 1) == 0) goto LAB_00250870;
          uVar8 = 0;
          if ((uVar6 >> 0xf & 1) == 0) goto LAB_0024fe50;
          goto LAB_0024fdd8;
        }
      }
      else if ((uVar11 & 0xffff8000) != 0) {
        if ((uVar6 >> 0x1e & 1) == 0) {
          if ((uVar6 >> 0x1d & 1) == 0) {
            if ((uVar6 >> 0x1c & 1) == 0) {
              if ((uVar6 >> 0x1b & 1) == 0) {
                if ((uVar6 >> 0x1a & 1) == 0) {
                  if ((uVar6 >> 0x19 & 1) == 0) {
                    if ((uVar6 >> 0x18 & 1) == 0) {
                      if ((uVar6 >> 0x17 & 1) == 0) {
                        if ((uVar6 >> 0x16 & 1) == 0) {
                          if ((uVar6 >> 0x15 & 1) == 0) {
                            if ((uVar6 >> 0x14 & 1) == 0) {
                              if ((uVar6 >> 0x13 & 1) == 0) {
                                if ((uVar6 >> 0x12 & 1) == 0) {
                                  if ((uVar6 >> 0x11 & 1) == 0) {
                                    if ((uVar6 >> 0x10 & 1) == 0) {
                                      uVar8 = 0;
                                      if ((uVar6 >> 0xf & 1) != 0) {
LAB_0024fe50:
                                        uVar8 = 1;
                                      }
                                    }
                                    else {
LAB_00250870:
                                      uVar8 = 2;
                                    }
                                  }
                                  else {
LAB_00250840:
                                    uVar8 = 3;
                                  }
                                }
                                else {
LAB_00250834:
                                  uVar8 = 4;
                                }
                              }
                              else {
LAB_00250804:
                                uVar8 = 5;
                              }
                            }
                            else {
LAB_002507ec:
                              uVar8 = 6;
                            }
                          }
                          else {
LAB_002507bc:
                            uVar8 = 7;
                          }
                        }
                        else {
LAB_00250798:
                          uVar8 = 8;
                        }
                      }
                      else {
LAB_00250768:
                        uVar8 = 9;
                      }
                    }
                    else {
LAB_00250750:
                      uVar8 = 10;
                    }
                  }
                  else {
LAB_002506dc:
                    uVar8 = 0xb;
                  }
                }
                else {
LAB_002506bc:
                  uVar8 = 0xc;
                }
              }
              else {
LAB_0025066c:
                uVar8 = 0xd;
              }
            }
            else {
LAB_00250404:
              uVar8 = 0xe;
            }
          }
          else {
LAB_002505e4:
            uVar8 = 0xf;
          }
        }
        else {
LAB_002505bc:
          uVar8 = 0x10;
        }
LAB_0024fdd8:
        uVar3 = 1;
        switch(uVar8) {
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
        }
      }
    }
    *(undefined4 *)(param_3 + 0x200) = uVar3;
  }
  if ((uVar4 >> 0xb & 1) != 0) {
    *(undefined8 *)(param_2 + 100) = *(undefined8 *)(param_1 + 100);
    *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  }
  if ((uVar4 >> 0xc & 1) != 0) {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(uint *)param_2 = *(uint *)param_2 | 0x1000;
  }
  if ((uVar4 >> 0xd & 1) != 0) {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x78);
  }
  if ((uVar4 >> 0xe & 1) != 0) {
    *(undefined8 *)(param_2 + 0x7c) = *(undefined8 *)(param_1 + 0x7c);
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_1 + 0x84);
  }
  if ((uVar4 >> 0xf & 1) != 0) {
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_1 + 0x94);
    *(uint *)param_2 = *(uint *)param_2 | 0x8000;
  }
  if ((uVar4 >> 0x10 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(uint *)param_2 = *(uint *)param_2 | 0x10000;
  }
  if ((uVar4 & 4) != 0) {
    iVar9 = *(int *)(param_2 + 0x18);
    *(int *)(param_3 + 8) = iVar9;
    if (iVar9 != *(int *)(param_3 + 0x10)) {
      uVar6 = *(uint *)param_2;
      *(int *)(param_3 + 0x10) = iVar9;
      *(uint *)param_2 = uVar6 | 4;
    }
  }
  if ((uVar4 & 1) != 0) {
    if ((uVar4 & 2) == 0) {
      *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_3 + 0x2c);
      *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_3 + 0x34);
    }
    if ((uVar4 & 0x10) == 0) {
      *(undefined8 *)(param_3 + 0x44) = *(undefined8 *)(param_3 + 0x50);
      *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_3 + 0x58);
      *(undefined4 *)(param_3 + 0x178) = 0x7fffffff;
    }
    if ((uVar4 & 0x800) == 0) {
      *(undefined8 *)(param_3 + 0x68) = *(undefined8 *)(param_3 + 0x74);
      *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(param_3 + 0x7c);
    }
    if ((uVar4 & 0x2000) == 0) {
      *(undefined8 *)(param_3 + 0x8c) = *(undefined8 *)(param_3 + 0x98);
      *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(param_3 + 0xa0);
      *(undefined4 *)(param_3 + 0x1a4) = 0x7fffffff;
    }
    if ((uVar4 & 0x4000) == 0) {
      *(undefined8 *)(param_3 + 0xb0) = *(undefined8 *)(param_3 + 0xbc);
      *(undefined4 *)(param_3 + 0xb8) = *(undefined4 *)(param_3 + 0xc4);
      *(undefined4 *)(param_3 + 0x1d0) = 0x7fffffff;
    }
    if ((uVar4 & 0x1008) == 0) {
      *(undefined8 *)(param_3 + 0xd4) = *(undefined8 *)(param_3 + 0xe0);
      *(undefined4 *)(param_3 + 0xdc) = *(undefined4 *)(param_3 + 0xe8);
    }
  }
  if ((uVar4 & 2) != 0) {
    uVar6 = *(uint *)param_2;
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined4 *)(param_3 + 0x1c) = uVar3;
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)(param_3 + 0x2c);
    *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_3 + 0x34);
    *(uint *)param_2 = uVar6 | 2;
  }
  if ((uVar4 & 0x10) != 0) {
    uVar6 = *(uint *)param_2;
    uVar3 = *(undefined4 *)(param_2 + 0x40);
    *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined4 *)(param_3 + 0x40) = uVar3;
    *(undefined8 *)(param_3 + 0x44) = *(undefined8 *)(param_3 + 0x50);
    *(undefined4 *)(param_3 + 0x4c) = *(undefined4 *)(param_3 + 0x58);
    *(undefined4 *)(param_3 + 0x178) = 0x7fffffff;
    *(uint *)param_2 = uVar6 | 0x10;
  }
  if ((uVar4 & 0x800) != 0) {
    uVar6 = *(uint *)param_2;
    uVar3 = *(undefined4 *)(param_2 + 0x6c);
    *(undefined8 *)(param_3 + 0x5c) = *(undefined8 *)(param_2 + 100);
    *(undefined4 *)(param_3 + 100) = uVar3;
    *(undefined8 *)(param_3 + 0x68) = *(undefined8 *)(param_3 + 0x74);
    *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(param_3 + 0x7c);
    *(uint *)param_2 = uVar6 | 0x800;
  }
  if ((uVar4 & 0x2000) != 0) {
    uVar6 = *(uint *)param_2;
    uVar3 = *(undefined4 *)(param_2 + 0x78);
    *(undefined8 *)(param_3 + 0x80) = *(undefined8 *)(param_2 + 0x70);
    *(undefined4 *)(param_3 + 0x88) = uVar3;
    *(undefined8 *)(param_3 + 0x8c) = *(undefined8 *)(param_3 + 0x98);
    *(undefined4 *)(param_3 + 0x94) = *(undefined4 *)(param_3 + 0xa0);
    *(undefined4 *)(param_3 + 0x1a4) = 0x7fffffff;
    *(uint *)param_2 = uVar6 | 0x2000;
  }
  if ((uVar4 & 0x4000) != 0) {
    uVar6 = *(uint *)param_2;
    uVar3 = *(undefined4 *)(param_2 + 0x84);
    *(undefined8 *)(param_3 + 0xa4) = *(undefined8 *)(param_2 + 0x7c);
    *(undefined4 *)(param_3 + 0xac) = uVar3;
    *(undefined8 *)(param_3 + 0xb0) = *(undefined8 *)(param_3 + 0xbc);
    *(undefined4 *)(param_3 + 0xb8) = *(undefined4 *)(param_3 + 0xc4);
    *(undefined4 *)(param_3 + 0x1d0) = 0x7fffffff;
    *(uint *)param_2 = uVar6 | 0x4000;
  }
  if ((uVar4 & 0x1008) == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    uVar4 = *(int *)(param_2 + 0x2c) - *(int *)(param_2 + 8);
    uVar6 = *(int *)(param_2 + 0x30) - *(int *)(param_2 + 0xc);
    uVar12 = *(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x10);
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x2c);
    uVar6 = *(uint *)(param_2 + 0x30);
    uVar12 = *(uint *)(param_2 + 0x34);
  }
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
      if ((uVar4 & 0xfff80000) != 0xfff80000) {
        if ((uVar4 >> 0x1e & 1) == 0) goto LAB_00250534;
        if ((uVar4 >> 0x1d & 1) == 0) goto LAB_0025054c;
        if ((uVar4 >> 0x1c & 1) == 0) goto LAB_00250554;
        if ((uVar4 >> 0x1b & 1) == 0) goto LAB_00250574;
        if ((uVar4 >> 0x1a & 1) == 0) goto LAB_00250594;
        if ((uVar4 >> 0x19 & 1) == 0) goto LAB_002505a8;
        if ((uVar4 >> 0x18 & 1) == 0) goto LAB_002503fc;
        if ((uVar4 >> 0x17 & 1) == 0) goto LAB_0025042c;
        if ((uVar4 >> 0x16 & 1) == 0) goto LAB_0025068c;
        if ((uVar4 >> 0x15 & 1) == 0) goto LAB_00250724;
        if ((uVar4 >> 0x14 & 1) == 0) goto LAB_00250734;
        if ((uVar4 >> 0x13 & 1) == 0) goto LAB_002501f4;
      }
    }
    else if ((uVar4 & 0xfff80000) != 0) {
      if ((uVar4 >> 0x1e & 1) == 0) {
        if ((uVar4 >> 0x1d & 1) == 0) {
          if ((uVar4 >> 0x1c & 1) == 0) {
            if ((uVar4 >> 0x1b & 1) == 0) {
              if ((uVar4 >> 0x1a & 1) == 0) {
                if ((uVar4 >> 0x19 & 1) == 0) {
                  if ((uVar4 >> 0x18 & 1) == 0) {
                    if ((uVar4 >> 0x17 & 1) == 0) {
                      if ((uVar4 >> 0x16 & 1) == 0) {
                        if ((uVar4 >> 0x15 & 1) == 0) {
                          if ((uVar4 >> 0x14 & 1) == 0) {
                            if ((uVar4 >> 0x13 & 1) == 0) goto LAB_0024fc3c;
LAB_002501f4:
                            iVar9 = 1;
                          }
                          else {
LAB_00250734:
                            iVar9 = 2;
                          }
                        }
                        else {
LAB_00250724:
                          iVar9 = 3;
                        }
                      }
                      else {
LAB_0025068c:
                        iVar9 = 4;
                      }
                    }
                    else {
LAB_0025042c:
                      iVar9 = 5;
                    }
                  }
                  else {
LAB_002503fc:
                    iVar9 = 6;
                  }
                }
                else {
LAB_002505a8:
                  iVar9 = 7;
                }
              }
              else {
LAB_00250594:
                iVar9 = 8;
              }
            }
            else {
LAB_00250574:
              iVar9 = 9;
            }
          }
          else {
LAB_00250554:
            iVar9 = 10;
          }
        }
        else {
LAB_0025054c:
          iVar9 = 0xb;
        }
      }
      else {
LAB_00250534:
        iVar9 = 0xc;
      }
      if ((iVar9 != 0) && (bVar2 = (int)uVar4 < 0, uVar4 = 0x7ffff, bVar2)) {
        uVar4 = 0xfff80000;
      }
    }
  }
LAB_0024fc3c:
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
      if ((uVar6 & 0xfff80000) != 0xfff80000) {
        if ((uVar6 >> 0x1e & 1) == 0) goto LAB_0025052c;
        if ((uVar6 >> 0x1d & 1) == 0) goto LAB_0025053c;
        if ((uVar6 >> 0x1c & 1) == 0) goto LAB_0025055c;
        if ((uVar6 >> 0x1b & 1) == 0) goto LAB_0025057c;
        if ((uVar6 >> 0x1a & 1) == 0) goto LAB_00250584;
        if ((uVar6 >> 0x19 & 1) == 0) goto LAB_002505d0;
        if ((uVar6 >> 0x18 & 1) == 0) goto LAB_00250604;
        if ((uVar6 >> 0x17 & 1) == 0) goto LAB_00250418;
        if ((uVar6 >> 0x16 & 1) == 0) goto LAB_002506a8;
        if ((uVar6 >> 0x15 & 1) == 0) goto LAB_0025071c;
        if ((uVar6 >> 0x14 & 1) == 0) goto LAB_0025072c;
        if ((uVar6 >> 0x13 & 1) == 0) goto LAB_0025019c;
      }
    }
    else if ((uVar6 & 0xfff80000) != 0) {
      if ((uVar6 >> 0x1e & 1) == 0) {
        if ((uVar6 >> 0x1d & 1) == 0) {
          if ((uVar6 >> 0x1c & 1) == 0) {
            if ((uVar6 >> 0x1b & 1) == 0) {
              if ((uVar6 >> 0x1a & 1) == 0) {
                if ((uVar6 >> 0x19 & 1) == 0) {
                  if ((uVar6 >> 0x18 & 1) == 0) {
                    if ((uVar6 >> 0x17 & 1) == 0) {
                      if ((uVar6 >> 0x16 & 1) == 0) {
                        if ((uVar6 >> 0x15 & 1) == 0) {
                          if ((uVar6 >> 0x14 & 1) == 0) {
                            if ((uVar6 >> 0x13 & 1) == 0) goto LAB_0024fc7c;
LAB_0025019c:
                            iVar9 = 1;
                          }
                          else {
LAB_0025072c:
                            iVar9 = 2;
                          }
                        }
                        else {
LAB_0025071c:
                          iVar9 = 3;
                        }
                      }
                      else {
LAB_002506a8:
                        iVar9 = 4;
                      }
                    }
                    else {
LAB_00250418:
                      iVar9 = 5;
                    }
                  }
                  else {
LAB_00250604:
                    iVar9 = 6;
                  }
                }
                else {
LAB_002505d0:
                  iVar9 = 7;
                }
              }
              else {
LAB_00250584:
                iVar9 = 8;
              }
            }
            else {
LAB_0025057c:
              iVar9 = 9;
            }
          }
          else {
LAB_0025055c:
            iVar9 = 10;
          }
        }
        else {
LAB_0025053c:
          iVar9 = 0xb;
        }
      }
      else {
LAB_0025052c:
        iVar9 = 0xc;
      }
      if ((iVar9 != 0) && (bVar2 = (int)uVar6 < 0, uVar6 = 0x7ffff, bVar2)) {
        uVar6 = 0xfff80000;
      }
    }
  }
LAB_0024fc7c:
  if (uVar12 == 0) goto LAB_0024fcbc;
  if ((int)uVar12 < 0) {
    if ((uVar12 & 0xfff80000) == 0xfff80000) goto LAB_0024fcbc;
    if ((uVar12 >> 0x1e & 1) == 0) goto LAB_00250524;
    if ((uVar12 >> 0x1d & 1) == 0) goto LAB_00250544;
    if ((uVar12 >> 0x1c & 1) == 0) goto LAB_00250564;
    if ((uVar12 >> 0x1b & 1) == 0) goto LAB_0025056c;
    if ((uVar12 >> 0x1a & 1) == 0) goto LAB_0025058c;
    if ((uVar12 >> 0x19 & 1) == 0) goto LAB_002505c8;
    if ((uVar12 >> 0x18 & 1) == 0) goto LAB_002505fc;
    if ((uVar12 >> 0x17 & 1) == 0) goto LAB_00250410;
    if ((uVar12 >> 0x16 & 1) == 0) goto LAB_00250694;
    if ((uVar12 >> 0x15 & 1) == 0) goto LAB_002506d4;
    if ((uVar12 >> 0x14 & 1) == 0) goto LAB_00250748;
    if ((uVar12 >> 0x13 & 1) != 0) goto LAB_0024fcbc;
LAB_00250128:
    iVar9 = 1;
  }
  else {
    if ((uVar12 & 0xfff80000) == 0) goto LAB_0024fcbc;
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
                          if ((uVar12 >> 0x13 & 1) == 0) goto LAB_0024fcbc;
                          goto LAB_00250128;
                        }
LAB_00250748:
                        iVar9 = 2;
                      }
                      else {
LAB_002506d4:
                        iVar9 = 3;
                      }
                    }
                    else {
LAB_00250694:
                      iVar9 = 4;
                    }
                  }
                  else {
LAB_00250410:
                    iVar9 = 5;
                  }
                }
                else {
LAB_002505fc:
                  iVar9 = 6;
                }
              }
              else {
LAB_002505c8:
                iVar9 = 7;
              }
            }
            else {
LAB_0025058c:
              iVar9 = 8;
            }
          }
          else {
LAB_0025056c:
            iVar9 = 9;
          }
        }
        else {
LAB_00250564:
          iVar9 = 10;
        }
      }
      else {
LAB_00250544:
        iVar9 = 0xb;
      }
    }
    else {
LAB_00250524:
      iVar9 = 0xc;
    }
  }
  if (iVar9 != 0) {
    uVar3 = 0x7ffff;
    if ((int)uVar12 < 0) {
      uVar3 = 0xfff80000;
    }
    *(undefined8 *)(param_3 + 0xd4) = *(undefined8 *)(param_3 + 0xe0);
    *(undefined4 *)(param_3 + 0xdc) = *(undefined4 *)(param_3 + 0xe8);
    *(uint *)(param_3 + 200) = uVar4;
    *(uint *)(param_3 + 0xcc) = uVar6;
    *(undefined4 *)(param_3 + 0xd0) = uVar3;
    return;
  }
LAB_0024fcbc:
  *(undefined8 *)(param_3 + 0xd4) = *(undefined8 *)(param_3 + 0xe0);
  *(undefined4 *)(param_3 + 0xdc) = *(undefined4 *)(param_3 + 0xe8);
  *(uint *)(param_3 + 200) = uVar4;
  *(uint *)(param_3 + 0xcc) = uVar6;
  *(uint *)(param_3 + 0xd0) = uVar12;
  return;
}

