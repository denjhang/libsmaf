/* MaDsp_3DEngProc4Doppler @ 0026f358 2708B */


/* YAMAHA::MaDsp_3DEngProc4Doppler(_MASMW_P3DASNDSRCCTRL*, _MASMW_P3DASNDSRCMOVE*,
   _MASMW_P3DACALCRESULT*) */

undefined8
YAMAHA::MaDsp_3DEngProc4Doppler
          (_MASMW_P3DASNDSRCCTRL *param_1,_MASMW_P3DASNDSRCMOVE *param_2,
          _MASMW_P3DACALCRESULT *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  uVar1 = *(uint *)param_1;
  if (((uVar1 & 6) == 0) &&
     (((*(int *)(param_2 + 0x10) != 0 || ((uVar1 & 0x6800) == 0)) && ((uVar1 & 0x11008) == 0)))) {
    if (*(int *)(param_3 + 8) == 0x400) {
      return 0;
    }
LAB_0026f394:
    *(undefined4 *)(param_3 + 8) = 0x400;
    return 4;
  }
  if (1 < *(uint *)(param_1 + 0x60)) goto LAB_0026f394;
  uVar1 = *(uint *)(param_2 + 0xe0);
  uVar11 = 0;
  uVar2 = *(uint *)(param_2 + 0xe4);
  uVar8 = *(uint *)(param_2 + 0xe8);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      if ((uVar1 & 0xffffc000) != 0xffffc000) {
        if ((uVar1 >> 0x1e & 1) == 0) goto LAB_0026fb44;
        if ((uVar1 >> 0x1d & 1) == 0) goto LAB_0026fb68;
        if ((uVar1 >> 0x1c & 1) == 0) goto LAB_0026fb5c;
        if ((uVar1 >> 0x1b & 1) == 0) goto LAB_0026fb50;
        if ((uVar1 >> 0x1a & 1) == 0) goto LAB_0026fbc4;
        if ((uVar1 >> 0x19 & 1) == 0) goto LAB_0026fc38;
        if ((uVar1 >> 0x18 & 1) == 0) goto LAB_0026fc2c;
        if ((uVar1 >> 0x17 & 1) == 0) goto LAB_0026fc70;
        if ((uVar1 >> 0x16 & 1) == 0) goto LAB_0026fc64;
        if ((uVar1 >> 0x15 & 1) == 0) goto LAB_0026fd78;
        if ((uVar1 >> 0x14 & 1) == 0) goto LAB_0026fd6c;
        if ((uVar1 >> 0x13 & 1) == 0) goto LAB_0026fd60;
        if ((uVar1 >> 0x12 & 1) == 0) goto LAB_0026fd54;
        if ((uVar1 >> 0x11 & 1) == 0) goto LAB_0026fd48;
        if ((uVar1 >> 0x10 & 1) == 0) goto LAB_0026fdac;
        if ((uVar1 >> 0xf & 1) == 0) goto LAB_0026fddc;
        uVar11 = 0;
        if ((uVar1 >> 0xe & 1) == 0) goto LAB_0026f998;
      }
    }
    else if ((uVar1 & 0xffffc000) != 0) {
      if ((uVar1 >> 0x1e & 1) == 0) {
        if ((uVar1 >> 0x1d & 1) == 0) {
          if ((uVar1 >> 0x1c & 1) == 0) {
            if ((uVar1 >> 0x1b & 1) == 0) {
              if ((uVar1 >> 0x1a & 1) == 0) {
                if ((uVar1 >> 0x19 & 1) == 0) {
                  if ((uVar1 >> 0x18 & 1) == 0) {
                    if ((uVar1 >> 0x17 & 1) == 0) {
                      if ((uVar1 >> 0x16 & 1) == 0) {
                        if ((uVar1 >> 0x15 & 1) == 0) {
                          if ((uVar1 >> 0x14 & 1) == 0) {
                            if ((uVar1 >> 0x13 & 1) == 0) {
                              if ((uVar1 >> 0x12 & 1) == 0) {
                                if ((uVar1 >> 0x11 & 1) == 0) {
                                  if ((uVar1 >> 0x10 & 1) == 0) {
                                    if ((uVar1 >> 0xf & 1) == 0) {
                                      if ((uVar1 >> 0xe & 1) != 0) {
LAB_0026f998:
                                        uVar11 = 1;
                                      }
                                    }
                                    else {
LAB_0026fddc:
                                      uVar11 = 2;
                                    }
                                  }
                                  else {
LAB_0026fdac:
                                    uVar11 = 3;
                                  }
                                }
                                else {
LAB_0026fd48:
                                  uVar11 = 4;
                                }
                              }
                              else {
LAB_0026fd54:
                                uVar11 = 5;
                              }
                            }
                            else {
LAB_0026fd60:
                              uVar11 = 6;
                            }
                          }
                          else {
LAB_0026fd6c:
                            uVar11 = 7;
                          }
                        }
                        else {
LAB_0026fd78:
                          uVar11 = 8;
                        }
                      }
                      else {
LAB_0026fc64:
                        uVar11 = 9;
                      }
                    }
                    else {
LAB_0026fc70:
                      uVar11 = 10;
                    }
                  }
                  else {
LAB_0026fc2c:
                    uVar11 = 0xb;
                  }
                }
                else {
LAB_0026fc38:
                  uVar11 = 0xc;
                }
              }
              else {
LAB_0026fbc4:
                uVar11 = 0xd;
              }
            }
            else {
LAB_0026fb50:
              uVar11 = 0xe;
            }
          }
          else {
LAB_0026fb5c:
            uVar11 = 0xf;
          }
        }
        else {
LAB_0026fb68:
          uVar11 = 0x10;
        }
      }
      else {
LAB_0026fb44:
        uVar11 = 0x11;
      }
    }
  }
  uVar13 = 0;
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      if ((uVar2 & 0xffffc000) != 0xffffc000) {
        if ((uVar2 >> 0x1e & 1) == 0) goto LAB_0026fb90;
        if ((uVar2 >> 0x1d & 1) == 0) goto LAB_0026fba8;
        if ((uVar2 >> 0x1c & 1) == 0) goto LAB_0026fb9c;
        if ((uVar2 >> 0x1b & 1) == 0) goto LAB_0026fb84;
        if ((uVar2 >> 0x1a & 1) == 0) goto LAB_0026fbf8;
        if ((uVar2 >> 0x19 & 1) == 0) goto LAB_0026fbec;
        if ((uVar2 >> 0x18 & 1) == 0) goto LAB_0026fbe0;
        if ((uVar2 >> 0x17 & 1) == 0) goto LAB_0026fc88;
        if ((uVar2 >> 0x16 & 1) == 0) goto LAB_0026fc7c;
        if ((uVar2 >> 0x15 & 1) == 0) goto LAB_0026fd3c;
        if ((uVar2 >> 0x14 & 1) == 0) goto LAB_0026fd30;
        if ((uVar2 >> 0x13 & 1) == 0) goto LAB_0026fd0c;
        if ((uVar2 >> 0x12 & 1) == 0) goto LAB_0026fd00;
        if ((uVar2 >> 0x11 & 1) == 0) goto LAB_0026fcf4;
        if ((uVar2 >> 0x10 & 1) == 0) goto LAB_0026fdd0;
        if ((uVar2 >> 0xf & 1) == 0) goto LAB_0026fde4;
        uVar13 = 0;
        if ((uVar2 >> 0xe & 1) == 0) goto LAB_0026f9f8;
      }
    }
    else if ((uVar2 & 0xffffc000) != 0) {
      if ((uVar2 >> 0x1e & 1) == 0) {
        if ((uVar2 >> 0x1d & 1) == 0) {
          if ((uVar2 >> 0x1c & 1) == 0) {
            if ((uVar2 >> 0x1b & 1) == 0) {
              if ((uVar2 >> 0x1a & 1) == 0) {
                if ((uVar2 >> 0x19 & 1) == 0) {
                  if ((uVar2 >> 0x18 & 1) == 0) {
                    if ((uVar2 >> 0x17 & 1) == 0) {
                      if ((uVar2 >> 0x16 & 1) == 0) {
                        if ((uVar2 >> 0x15 & 1) == 0) {
                          if ((uVar2 >> 0x14 & 1) == 0) {
                            if ((uVar2 >> 0x13 & 1) == 0) {
                              if ((uVar2 >> 0x12 & 1) == 0) {
                                if ((uVar2 >> 0x11 & 1) == 0) {
                                  if ((uVar2 >> 0x10 & 1) == 0) {
                                    if ((uVar2 >> 0xf & 1) == 0) {
                                      uVar13 = 0;
                                      if ((uVar2 >> 0xe & 1) != 0) {
LAB_0026f9f8:
                                        uVar13 = 1;
                                      }
                                    }
                                    else {
LAB_0026fde4:
                                      uVar13 = 2;
                                    }
                                  }
                                  else {
LAB_0026fdd0:
                                    uVar13 = 3;
                                  }
                                }
                                else {
LAB_0026fcf4:
                                  uVar13 = 4;
                                }
                              }
                              else {
LAB_0026fd00:
                                uVar13 = 5;
                              }
                            }
                            else {
LAB_0026fd0c:
                              uVar13 = 6;
                            }
                          }
                          else {
LAB_0026fd30:
                            uVar13 = 7;
                          }
                        }
                        else {
LAB_0026fd3c:
                          uVar13 = 8;
                        }
                      }
                      else {
LAB_0026fc7c:
                        uVar13 = 9;
                      }
                    }
                    else {
LAB_0026fc88:
                      uVar13 = 10;
                    }
                  }
                  else {
LAB_0026fbe0:
                    uVar13 = 0xb;
                  }
                }
                else {
LAB_0026fbec:
                  uVar13 = 0xc;
                }
              }
              else {
LAB_0026fbf8:
                uVar13 = 0xd;
              }
            }
            else {
LAB_0026fb84:
              uVar13 = 0xe;
            }
          }
          else {
LAB_0026fb9c:
            uVar13 = 0xf;
          }
        }
        else {
LAB_0026fba8:
          uVar13 = 0x10;
        }
      }
      else {
LAB_0026fb90:
        uVar13 = 0x11;
      }
    }
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) {
      if ((uVar8 & 0xffffc000) != 0xffffc000) {
        if ((uVar8 >> 0x1e & 1) == 0) goto LAB_0026fb0c;
        if ((uVar8 >> 0x1d & 1) == 0) goto LAB_0026fb34;
        if ((uVar8 >> 0x1c & 1) == 0) goto LAB_0026fb2c;
        if ((uVar8 >> 0x1b & 1) == 0) goto LAB_0026fb3c;
        if ((uVar8 >> 0x1a & 1) == 0) goto LAB_0026fc14;
        if ((uVar8 >> 0x19 & 1) == 0) goto LAB_0026fc24;
        if ((uVar8 >> 0x18 & 1) == 0) goto LAB_0026fc1c;
        if ((uVar8 >> 0x17 & 1) == 0) goto LAB_0026fcac;
        if ((uVar8 >> 0x16 & 1) == 0) goto LAB_0026fca4;
        if ((uVar8 >> 0x15 & 1) == 0) goto LAB_0026fcd4;
        if ((uVar8 >> 0x14 & 1) == 0) goto LAB_0026fccc;
        if ((uVar8 >> 0x13 & 1) == 0) goto LAB_0026fcec;
        if ((uVar8 >> 0x12 & 1) == 0) goto LAB_0026fce4;
        if ((uVar8 >> 0x11 & 1) == 0) goto LAB_0026fcdc;
        if ((uVar8 >> 0x10 & 1) == 0) goto LAB_0026fdc8;
        if ((uVar8 >> 0xf & 1) == 0) goto LAB_0026fdc0;
        uVar7 = 0;
        if ((uVar8 >> 0xe & 1) == 0) goto LAB_0026f93c;
      }
    }
    else if ((uVar8 & 0xffffc000) != 0) {
      if ((uVar8 >> 0x1e & 1) == 0) {
        if ((uVar8 >> 0x1d & 1) == 0) {
          if ((uVar8 >> 0x1c & 1) == 0) {
            if ((uVar8 >> 0x1b & 1) == 0) {
              if ((uVar8 >> 0x1a & 1) == 0) {
                if ((uVar8 >> 0x19 & 1) == 0) {
                  if ((uVar8 >> 0x18 & 1) == 0) {
                    if ((uVar8 >> 0x17 & 1) == 0) {
                      if ((uVar8 >> 0x16 & 1) == 0) {
                        if ((uVar8 >> 0x15 & 1) == 0) {
                          if ((uVar8 >> 0x14 & 1) == 0) {
                            if ((uVar8 >> 0x13 & 1) == 0) {
                              if ((uVar8 >> 0x12 & 1) == 0) {
                                if ((uVar8 >> 0x11 & 1) == 0) {
                                  if ((uVar8 >> 0x10 & 1) == 0) {
                                    if ((uVar8 >> 0xf & 1) == 0) {
                                      uVar7 = 0;
                                      if ((uVar8 >> 0xe & 1) != 0) {
LAB_0026f93c:
                                        uVar7 = 1;
                                      }
                                    }
                                    else {
LAB_0026fdc0:
                                      uVar7 = 2;
                                    }
                                  }
                                  else {
LAB_0026fdc8:
                                    uVar7 = 3;
                                  }
                                }
                                else {
LAB_0026fcdc:
                                  uVar7 = 4;
                                }
                              }
                              else {
LAB_0026fce4:
                                uVar7 = 5;
                              }
                            }
                            else {
LAB_0026fcec:
                              uVar7 = 6;
                            }
                          }
                          else {
LAB_0026fccc:
                            uVar7 = 7;
                          }
                        }
                        else {
LAB_0026fcd4:
                          uVar7 = 8;
                        }
                      }
                      else {
LAB_0026fca4:
                        uVar7 = 9;
                      }
                    }
                    else {
LAB_0026fcac:
                      uVar7 = 10;
                    }
                  }
                  else {
LAB_0026fc1c:
                    uVar7 = 0xb;
                  }
                }
                else {
LAB_0026fc24:
                  uVar7 = 0xc;
                }
              }
              else {
LAB_0026fc14:
                uVar7 = 0xd;
              }
            }
            else {
LAB_0026fb3c:
              uVar7 = 0xe;
            }
          }
          else {
LAB_0026fb2c:
            uVar7 = 0xf;
          }
        }
        else {
LAB_0026fb34:
          uVar7 = 0x10;
        }
      }
      else {
LAB_0026fb0c:
        uVar7 = 0x11;
      }
    }
  }
  if (uVar13 < uVar11) {
    uVar13 = uVar11;
  }
  if (uVar13 < uVar7) {
    uVar13 = uVar7;
  }
  switch(uVar13) {
  case 0:
    iVar12 = 1;
    iVar6 = 1;
    break;
  case 1:
    iVar12 = 2;
    iVar6 = 2;
    break;
  case 2:
    iVar12 = 4;
    iVar6 = 4;
    break;
  case 3:
    iVar12 = 8;
    iVar6 = 8;
    break;
  case 4:
    iVar12 = 0x10;
    iVar6 = 0x10;
    break;
  case 5:
    iVar12 = 0x20;
    iVar6 = 0x20;
    break;
  case 6:
    iVar12 = 0x40;
    iVar6 = 0x40;
    break;
  case 7:
    iVar12 = 0x80;
    iVar6 = 0x80;
    break;
  case 8:
    iVar12 = 0x100;
    iVar6 = 0x100;
    break;
  case 9:
    iVar12 = 0x200;
    iVar6 = 0x200;
    break;
  case 10:
    iVar12 = 0x400;
    iVar6 = 0x400;
    break;
  case 0xb:
    iVar12 = 0x800;
    iVar6 = 0x800;
    break;
  case 0xc:
    iVar12 = 0x1000;
    iVar6 = 0x1000;
    break;
  case 0xd:
    iVar12 = 0x2000;
    iVar6 = 0x2000;
    break;
  case 0xe:
    iVar12 = 0x4000;
    iVar6 = 0x4000;
    break;
  case 0xf:
    iVar12 = 0x8000;
    iVar6 = 0x8000;
    break;
  case 0x10:
    iVar12 = 0x10000;
    iVar6 = 0x10000;
    break;
  case 0x11:
    iVar12 = 0x20000;
    iVar6 = 0x20000;
    break;
  default:
    iVar12 = 0x40000000;
    iVar6 = 0x40000000;
  }
  iVar3 = 0;
  if (iVar6 != 0) {
    iVar3 = (int)uVar2 / iVar6;
  }
  iVar9 = 1;
  iVar4 = 0;
  if (iVar6 != 0) {
    iVar4 = (int)uVar1 / iVar6;
  }
  iVar5 = 0;
  if (iVar6 != 0) {
    iVar5 = (int)uVar8 / iVar6;
  }
  uVar1 = iVar12 * ((iVar3 * *(int *)(param_3 + 0x1c)) / 0x7fff +
                    (iVar4 * *(int *)(param_3 + 0x18)) / 0x7fff +
                   (iVar5 * *(int *)(param_3 + 0x20)) / 0x7fff);
  if (uVar1 != 0) {
    if ((int)uVar1 < 0) {
      if ((uVar1 & 0xffff8000) != 0xffff8000) {
        if ((uVar1 >> 0x1e & 1) == 0) goto LAB_0026fb24;
        if ((uVar1 >> 0x1d & 1) == 0) goto LAB_0026fb1c;
        if ((uVar1 >> 0x1c & 1) == 0) goto LAB_0026fb7c;
        if ((uVar1 >> 0x1b & 1) == 0) goto LAB_0026fb74;
        if ((uVar1 >> 0x1a & 1) == 0) goto LAB_0026fbd8;
        if ((uVar1 >> 0x19 & 1) == 0) goto LAB_0026fbd0;
        if ((uVar1 >> 0x18 & 1) == 0) goto LAB_0026fc04;
        if ((uVar1 >> 0x17 & 1) == 0) goto LAB_0026fc54;
        if ((uVar1 >> 0x16 & 1) == 0) goto LAB_0026fc5c;
        if ((uVar1 >> 0x15 & 1) == 0) goto LAB_0026fcb4;
        if ((uVar1 >> 0x14 & 1) == 0) goto LAB_0026fd9c;
        if ((uVar1 >> 0x13 & 1) == 0) goto LAB_0026fd94;
        if ((uVar1 >> 0x12 & 1) == 0) goto LAB_0026fd8c;
        if ((uVar1 >> 0x11 & 1) == 0) goto LAB_0026fd84;
        if ((uVar1 >> 0x10 & 1) == 0) goto LAB_0026fdb8;
        uVar10 = 0;
        if ((uVar1 >> 0xf & 1) == 0) goto LAB_0026fae8;
        goto LAB_0026f5cc;
      }
    }
    else if ((uVar1 & 0xffff8000) != 0) {
      if ((uVar1 >> 0x1e & 1) == 0) {
        if ((uVar1 >> 0x1d & 1) == 0) {
          if ((uVar1 >> 0x1c & 1) == 0) {
            if ((uVar1 >> 0x1b & 1) == 0) {
              if ((uVar1 >> 0x1a & 1) == 0) {
                if ((uVar1 >> 0x19 & 1) == 0) {
                  if ((uVar1 >> 0x18 & 1) == 0) {
                    if ((uVar1 >> 0x17 & 1) == 0) {
                      if ((uVar1 >> 0x16 & 1) == 0) {
                        if ((uVar1 >> 0x15 & 1) == 0) {
                          if ((uVar1 >> 0x14 & 1) == 0) {
                            if ((uVar1 >> 0x13 & 1) == 0) {
                              if ((uVar1 >> 0x12 & 1) == 0) {
                                if ((uVar1 >> 0x11 & 1) == 0) {
                                  if ((uVar1 >> 0x10 & 1) == 0) {
                                    uVar10 = 0;
                                    if ((uVar1 >> 0xf & 1) != 0) {
LAB_0026fae8:
                                      uVar10 = 1;
                                    }
                                  }
                                  else {
LAB_0026fdb8:
                                    uVar10 = 2;
                                  }
                                }
                                else {
LAB_0026fd84:
                                  uVar10 = 3;
                                }
                              }
                              else {
LAB_0026fd8c:
                                uVar10 = 4;
                              }
                            }
                            else {
LAB_0026fd94:
                              uVar10 = 5;
                            }
                          }
                          else {
LAB_0026fd9c:
                            uVar10 = 6;
                          }
                        }
                        else {
LAB_0026fcb4:
                          uVar10 = 7;
                        }
                      }
                      else {
LAB_0026fc5c:
                        uVar10 = 8;
                      }
                    }
                    else {
LAB_0026fc54:
                      uVar10 = 9;
                    }
                  }
                  else {
LAB_0026fc04:
                    uVar10 = 10;
                  }
                }
                else {
LAB_0026fbd0:
                  uVar10 = 0xb;
                }
              }
              else {
LAB_0026fbd8:
                uVar10 = 0xc;
              }
            }
            else {
LAB_0026fb74:
              uVar10 = 0xd;
            }
          }
          else {
LAB_0026fb7c:
            uVar10 = 0xe;
          }
        }
        else {
LAB_0026fb1c:
          uVar10 = 0xf;
        }
      }
      else {
LAB_0026fb24:
        uVar10 = 0x10;
      }
LAB_0026f5cc:
      iVar9 = 1;
      switch(uVar10) {
      case 1:
        iVar9 = 2;
        break;
      case 2:
        iVar9 = 4;
        break;
      case 3:
        iVar9 = 8;
        break;
      case 4:
        iVar9 = 0x10;
        break;
      case 5:
        iVar9 = 0x20;
        break;
      case 6:
        iVar9 = 0x40;
        break;
      case 7:
        iVar9 = 0x80;
        break;
      case 8:
        iVar9 = 0x100;
        break;
      case 9:
        iVar9 = 0x200;
        break;
      case 10:
        iVar9 = 0x400;
        break;
      case 0xb:
        iVar9 = 0x800;
        break;
      case 0xc:
        iVar9 = 0x1000;
        break;
      case 0xd:
        iVar9 = 0x2000;
        break;
      case 0xe:
        iVar9 = 0x4000;
        break;
      case 0xf:
        iVar9 = 0x8000;
        break;
      case 0x10:
        iVar9 = 0x10000;
      }
    }
  }
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar2 == 0) {
    *(undefined4 *)(param_3 + 8) = 0x400;
    return 4;
  }
  if ((int)uVar2 < 0) {
    if ((uVar2 & 0xffff8000) != 0xffff8000) {
      if ((uVar2 >> 0x1e & 1) == 0) goto LAB_0026fb04;
      if ((uVar2 >> 0x1d & 1) == 0) goto LAB_0026fbbc;
      if ((uVar2 >> 0x1c & 1) == 0) goto LAB_0026fbb4;
      if ((uVar2 >> 0x1b & 1) == 0) goto LAB_0026fb14;
      if ((uVar2 >> 0x1a & 1) == 0) goto LAB_0026fc0c;
      if ((uVar2 >> 0x19 & 1) == 0) goto LAB_0026fc4c;
      if ((uVar2 >> 0x18 & 1) == 0) goto LAB_0026fc44;
      if ((uVar2 >> 0x17 & 1) == 0) goto LAB_0026fc9c;
      if ((uVar2 >> 0x16 & 1) == 0) goto LAB_0026fc94;
      if ((uVar2 >> 0x15 & 1) == 0) goto LAB_0026fcc4;
      if ((uVar2 >> 0x14 & 1) == 0) goto LAB_0026fcbc;
      if ((uVar2 >> 0x13 & 1) == 0) goto LAB_0026fd28;
      if ((uVar2 >> 0x12 & 1) == 0) goto LAB_0026fd20;
      if ((uVar2 >> 0x11 & 1) == 0) goto LAB_0026fd18;
      if ((uVar2 >> 0x10 & 1) == 0) goto LAB_0026fda4;
      uVar10 = 0;
      if ((uVar2 >> 0xf & 1) == 0) goto LAB_0026fa90;
      goto LAB_0026f748;
    }
  }
  else if ((uVar2 & 0xffff8000) != 0) {
    if ((uVar2 >> 0x1e & 1) == 0) {
      if ((uVar2 >> 0x1d & 1) == 0) {
        if ((uVar2 >> 0x1c & 1) == 0) {
          if ((uVar2 >> 0x1b & 1) == 0) {
            if ((uVar2 >> 0x1a & 1) == 0) {
              if ((uVar2 >> 0x19 & 1) == 0) {
                if ((uVar2 >> 0x18 & 1) == 0) {
                  if ((uVar2 >> 0x17 & 1) == 0) {
                    if ((uVar2 >> 0x16 & 1) == 0) {
                      if ((uVar2 >> 0x15 & 1) == 0) {
                        if ((uVar2 >> 0x14 & 1) == 0) {
                          if ((uVar2 >> 0x13 & 1) == 0) {
                            if ((uVar2 >> 0x12 & 1) == 0) {
                              if ((uVar2 >> 0x11 & 1) == 0) {
                                if ((uVar2 >> 0x10 & 1) == 0) {
                                  uVar10 = 0;
                                  if ((uVar2 >> 0xf & 1) != 0) {
LAB_0026fa90:
                                    uVar10 = 1;
                                  }
                                }
                                else {
LAB_0026fda4:
                                  uVar10 = 2;
                                }
                              }
                              else {
LAB_0026fd18:
                                uVar10 = 3;
                              }
                            }
                            else {
LAB_0026fd20:
                              uVar10 = 4;
                            }
                          }
                          else {
LAB_0026fd28:
                            uVar10 = 5;
                          }
                        }
                        else {
LAB_0026fcbc:
                          uVar10 = 6;
                        }
                      }
                      else {
LAB_0026fcc4:
                        uVar10 = 7;
                      }
                    }
                    else {
LAB_0026fc94:
                      uVar10 = 8;
                    }
                  }
                  else {
LAB_0026fc9c:
                    uVar10 = 9;
                  }
                }
                else {
LAB_0026fc44:
                  uVar10 = 10;
                }
              }
              else {
LAB_0026fc4c:
                uVar10 = 0xb;
              }
            }
            else {
LAB_0026fc0c:
              uVar10 = 0xc;
            }
          }
          else {
LAB_0026fb14:
            uVar10 = 0xd;
          }
        }
        else {
LAB_0026fbb4:
          uVar10 = 0xe;
        }
      }
      else {
LAB_0026fbbc:
        uVar10 = 0xf;
      }
    }
    else {
LAB_0026fb04:
      uVar10 = 0x10;
    }
LAB_0026f748:
    switch(uVar10) {
    case 1:
      uVar8 = 2;
      iVar6 = 2;
      break;
    case 2:
      uVar8 = 4;
      iVar6 = 4;
      break;
    case 3:
      uVar8 = 8;
      iVar6 = 8;
      break;
    case 4:
      uVar8 = 0x10;
      iVar6 = 0x10;
      break;
    case 5:
      uVar8 = 0x20;
      iVar6 = 0x20;
      break;
    case 6:
      uVar8 = 0x40;
      iVar6 = 0x40;
      break;
    case 7:
      uVar8 = 0x80;
      iVar6 = 0x80;
      break;
    case 8:
      uVar8 = 0x100;
      iVar6 = 0x100;
      break;
    case 9:
      uVar8 = 0x200;
      iVar6 = 0x200;
      break;
    case 10:
      uVar8 = 0x400;
      iVar6 = 0x400;
      break;
    case 0xb:
      uVar8 = 0x800;
      iVar6 = 0x800;
      break;
    case 0xc:
      uVar8 = 0x1000;
      iVar6 = 0x1000;
      break;
    case 0xd:
      uVar8 = 0x2000;
      iVar6 = 0x2000;
      break;
    case 0xe:
      uVar8 = 0x4000;
      iVar6 = 0x4000;
      break;
    case 0xf:
      uVar8 = 0x8000;
      iVar6 = 0x8000;
      break;
    case 0x10:
      uVar8 = 0x10000;
      iVar6 = 0x10000;
      break;
    default:
      goto switchD_0026f768_default;
    }
    goto LAB_0026f774;
  }
switchD_0026f768_default:
  uVar8 = 1;
  iVar6 = 1;
LAB_0026f774:
  iVar12 = 0;
  if (iVar9 != 0) {
    iVar12 = (int)uVar1 / iVar9;
  }
  uVar1 = 0;
  if (uVar8 != 0) {
    uVar1 = uVar2 / uVar8;
  }
  iVar12 = uVar1 * iVar12;
  iVar3 = iVar12 + 0xffff;
  if (-1 < iVar12) {
    iVar3 = iVar12;
  }
  iVar6 = 0x400 - ((iVar3 >> 0x10) * iVar9 * iVar6) / 0x14e;
  if (iVar6 < 0x801) {
    if (iVar6 < 1) {
      *(undefined4 *)(param_3 + 8) = 1;
    }
    else {
      *(int *)(param_3 + 8) = iVar6;
    }
  }
  else {
    *(undefined4 *)(param_3 + 8) = 0x800;
  }
  return 4;
}

