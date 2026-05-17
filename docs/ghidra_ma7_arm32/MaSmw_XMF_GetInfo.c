/* MaSmw_XMF_GetInfo @ 0008d184 5264B */


/* YAMAHA::MaSmw_XMF_GetInfo(YAMAHA::_tagmaXMF_Info*, unsigned int, unsigned int, void*) */

uint YAMAHA::MaSmw_XMF_GetInfo(_tagmaXMF_Info *param_1,uint param_2,uint param_3,void *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  _tagmaXMF_Info *p_Var6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint local_80;
  _tagmaXMF_Info *local_7c;
  size_t local_78;
  int local_58;
  undefined1 *local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  byte *local_34;
  byte *local_30;
  uint local_2c;
  
  if (param_1 == (_tagmaXMF_Info *)0x0) {
    return 0xfffffffe;
  }
  if (*(int *)param_1 != 1) {
    return 0xffffffff;
  }
  switch(param_2) {
  case 0:
    switch(param_3) {
    case 0:
      return *(int *)(param_1 + 4) + 1;
    case 1:
      if (*(int *)(param_1 + 4) == 1) {
        return *(uint *)(param_1 + 8);
      }
      break;
    case 2:
      if (*(int *)(param_1 + 4) == 1) {
        return *(uint *)(param_1 + 0xc);
      }
      break;
    case 3:
      return *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14);
    default:
      return 0xfffffffe;
    }
    return 0xffffffff;
  case 1:
    uVar4 = *(undefined4 *)(param_1 + 0x34);
    local_54 = (undefined1 *)0x0;
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    if (param_3 == 8) {
      if (param_4 != (void *)0x0) {
        iVar12 = FUN_0008c9d8(uVar4,uVar5,8,&local_54,&local_50);
        if (iVar12 < 0) {
          return 0xffffffff;
        }
        puVar7 = *(undefined1 **)((int)param_4 + 4);
        if (local_54 == (undefined1 *)0x0) {
          return 0;
        }
        if (*(int *)((int)param_4 + 8) == 0) {
          return 0;
        }
        if (local_50 == 0) {
          return 0;
        }
        uVar2 = local_50 - 1 & 7;
        uVar3 = 1;
        *puVar7 = *local_54;
        if (*(uint *)((int)param_4 + 8) < 2) {
          return 1;
        }
        if (local_50 == 1) {
          return 1;
        }
        if (uVar2 == 0) goto LAB_0008df70;
        if (uVar2 != 1) {
          if (uVar2 != 2) {
            if (uVar2 != 3) {
              if (uVar2 != 4) {
                if (uVar2 != 5) {
                  if (uVar2 != 6) {
                    uVar3 = 2;
                    puVar7[1] = local_54[1];
                    if (*(uint *)((int)param_4 + 8) < 3) {
                      return 2;
                    }
                  }
                  puVar7[uVar3] = local_54[uVar3];
                  uVar3 = uVar3 + 1;
                  if (*(uint *)((int)param_4 + 8) <= uVar3) {
                    return uVar3;
                  }
                }
                puVar7[uVar3] = local_54[uVar3];
                uVar3 = uVar3 + 1;
                if (*(uint *)((int)param_4 + 8) <= uVar3) {
                  return uVar3;
                }
              }
              puVar7[uVar3] = local_54[uVar3];
              uVar3 = uVar3 + 1;
              if (*(uint *)((int)param_4 + 8) <= uVar3) {
                return uVar3;
              }
            }
            puVar7[uVar3] = local_54[uVar3];
            uVar3 = uVar3 + 1;
            if (*(uint *)((int)param_4 + 8) <= uVar3) {
              return uVar3;
            }
          }
          puVar7[uVar3] = local_54[uVar3];
          uVar3 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        puVar7[uVar3] = local_54[uVar3];
        uVar3 = uVar3 + 1;
        if (*(uint *)((int)param_4 + 8) <= uVar3) {
          return uVar3;
        }
        while( true ) {
          if (uVar3 == local_50) {
            return uVar3;
          }
LAB_0008df70:
          puVar7[uVar3] = local_54[uVar3];
          uVar2 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 2;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 3;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 4;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 5;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 6;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 7;
          if (*(uint *)((int)param_4 + 8) <= uVar2) break;
          puVar7[uVar2] = local_54[uVar2];
          uVar3 = uVar3 + 8;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        return uVar2;
      }
    }
    else if (param_3 == 9) {
      if (param_4 != (void *)0x0) {
        iVar12 = FUN_0008c9d8(uVar4,uVar5,9,&local_54,&local_50);
        if (iVar12 < 0) {
          return 0xffffffff;
        }
        puVar7 = *(undefined1 **)((int)param_4 + 4);
        if (local_54 == (undefined1 *)0x0) {
          return 0;
        }
        if (*(int *)((int)param_4 + 8) == 0) {
          return 0;
        }
        if (local_50 == 0) {
          return 0;
        }
        uVar2 = local_50 - 1 & 7;
        uVar3 = 1;
        *puVar7 = *local_54;
        if (*(uint *)((int)param_4 + 8) < 2) {
          return 1;
        }
        if (local_50 == 1) {
          return 1;
        }
        if (uVar2 == 0) goto LAB_0008ddf4;
        if (uVar2 != 1) {
          if (uVar2 != 2) {
            if (uVar2 != 3) {
              if (uVar2 != 4) {
                if (uVar2 != 5) {
                  if (uVar2 != 6) {
                    uVar3 = 2;
                    puVar7[1] = local_54[1];
                    if (*(uint *)((int)param_4 + 8) < 3) {
                      return 2;
                    }
                  }
                  puVar7[uVar3] = local_54[uVar3];
                  uVar3 = uVar3 + 1;
                  if (*(uint *)((int)param_4 + 8) <= uVar3) {
                    return uVar3;
                  }
                }
                puVar7[uVar3] = local_54[uVar3];
                uVar3 = uVar3 + 1;
                if (*(uint *)((int)param_4 + 8) <= uVar3) {
                  return uVar3;
                }
              }
              puVar7[uVar3] = local_54[uVar3];
              uVar3 = uVar3 + 1;
              if (*(uint *)((int)param_4 + 8) <= uVar3) {
                return uVar3;
              }
            }
            puVar7[uVar3] = local_54[uVar3];
            uVar3 = uVar3 + 1;
            if (*(uint *)((int)param_4 + 8) <= uVar3) {
              return uVar3;
            }
          }
          puVar7[uVar3] = local_54[uVar3];
          uVar3 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        puVar7[uVar3] = local_54[uVar3];
        uVar3 = uVar3 + 1;
        if (*(uint *)((int)param_4 + 8) <= uVar3) {
          return uVar3;
        }
        while( true ) {
          if (uVar3 == local_50) {
            return uVar3;
          }
LAB_0008ddf4:
          puVar7[uVar3] = local_54[uVar3];
          uVar2 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 2;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 3;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 4;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 5;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 6;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 7;
          if (*(uint *)((int)param_4 + 8) <= uVar2) break;
          puVar7[uVar2] = local_54[uVar2];
          uVar3 = uVar3 + 8;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        return uVar2;
      }
    }
    else if (param_3 == 0) {
      uVar9 = 0;
LAB_0008d7cc:
      local_54 = (undefined1 *)0x0;
      uVar2 = FUN_0008c9d8(uVar4,uVar5,uVar9,4,8);
      if (uVar2 == 6 || (int)uVar2 < 0) {
        return 0xffffffff;
      }
      return uVar2;
    }
    break;
  case 2:
    uVar4 = *(undefined4 *)(param_1 + 0x44);
    local_54 = (undefined1 *)0x0;
    uVar5 = *(undefined4 *)(param_1 + 0x48);
    if (param_3 == 8) {
      if (param_4 != (void *)0x0) {
        iVar12 = FUN_0008c9d8(uVar4,uVar5,8,&local_54,&local_50);
        if (iVar12 < 0) {
          return 0xffffffff;
        }
        puVar7 = *(undefined1 **)((int)param_4 + 4);
        if (local_54 == (undefined1 *)0x0) {
          return 0;
        }
        if (*(int *)((int)param_4 + 8) == 0) {
          return 0;
        }
        if (local_50 == 0) {
          return 0;
        }
        uVar2 = local_50 - 1 & 7;
        uVar3 = 1;
        *puVar7 = *local_54;
        if (*(uint *)((int)param_4 + 8) < 2) {
          return 1;
        }
        if (local_50 == 1) {
          return 1;
        }
        if (uVar2 == 0) goto LAB_0008e5a0;
        if (uVar2 != 1) {
          if (uVar2 != 2) {
            if (uVar2 != 3) {
              if (uVar2 != 4) {
                if (uVar2 != 5) {
                  if (uVar2 != 6) {
                    uVar3 = 2;
                    puVar7[1] = local_54[1];
                    if (*(uint *)((int)param_4 + 8) < 3) {
                      return 2;
                    }
                  }
                  puVar7[uVar3] = local_54[uVar3];
                  uVar3 = uVar3 + 1;
                  if (*(uint *)((int)param_4 + 8) <= uVar3) {
                    return uVar3;
                  }
                }
                puVar7[uVar3] = local_54[uVar3];
                uVar3 = uVar3 + 1;
                if (*(uint *)((int)param_4 + 8) <= uVar3) {
                  return uVar3;
                }
              }
              puVar7[uVar3] = local_54[uVar3];
              uVar3 = uVar3 + 1;
              if (*(uint *)((int)param_4 + 8) <= uVar3) {
                return uVar3;
              }
            }
            puVar7[uVar3] = local_54[uVar3];
            uVar3 = uVar3 + 1;
            if (*(uint *)((int)param_4 + 8) <= uVar3) {
              return uVar3;
            }
          }
          puVar7[uVar3] = local_54[uVar3];
          uVar3 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        puVar7[uVar3] = local_54[uVar3];
        uVar3 = uVar3 + 1;
        if (*(uint *)((int)param_4 + 8) <= uVar3) {
          return uVar3;
        }
        while( true ) {
          if (uVar3 == local_50) {
            return uVar3;
          }
LAB_0008e5a0:
          puVar7[uVar3] = local_54[uVar3];
          uVar2 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 2;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 3;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 4;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 5;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 6;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 7;
          if (*(uint *)((int)param_4 + 8) <= uVar2) break;
          puVar7[uVar2] = local_54[uVar2];
          uVar3 = uVar3 + 8;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        return uVar2;
      }
    }
    else if (param_3 == 9) {
      if (param_4 != (void *)0x0) {
        iVar12 = FUN_0008c9d8(uVar4,uVar5,9,&local_54,&local_50);
        if (iVar12 < 0) {
          return 0xffffffff;
        }
        puVar7 = *(undefined1 **)((int)param_4 + 4);
        if (local_54 == (undefined1 *)0x0) {
          return 0;
        }
        if (*(int *)((int)param_4 + 8) == 0) {
          return 0;
        }
        if (local_50 == 0) {
          return 0;
        }
        uVar3 = 1;
        uVar2 = local_50 - 1 & 7;
        *puVar7 = *local_54;
        if (*(uint *)((int)param_4 + 8) < 2) {
          return 1;
        }
        if (local_50 == 1) {
          return 1;
        }
        if (uVar2 == 0) goto LAB_0008e42c;
        if (uVar2 != 1) {
          if (uVar2 != 2) {
            if (uVar2 != 3) {
              if (uVar2 != 4) {
                if (uVar2 != 5) {
                  if (uVar2 != 6) {
                    uVar3 = 2;
                    puVar7[1] = local_54[1];
                    if (*(uint *)((int)param_4 + 8) < 3) {
                      return 2;
                    }
                  }
                  puVar7[uVar3] = local_54[uVar3];
                  uVar3 = uVar3 + 1;
                  if (*(uint *)((int)param_4 + 8) <= uVar3) {
                    return uVar3;
                  }
                }
                puVar7[uVar3] = local_54[uVar3];
                uVar3 = uVar3 + 1;
                if (*(uint *)((int)param_4 + 8) <= uVar3) {
                  return uVar3;
                }
              }
              puVar7[uVar3] = local_54[uVar3];
              uVar3 = uVar3 + 1;
              if (*(uint *)((int)param_4 + 8) <= uVar3) {
                return uVar3;
              }
            }
            puVar7[uVar3] = local_54[uVar3];
            uVar3 = uVar3 + 1;
            if (*(uint *)((int)param_4 + 8) <= uVar3) {
              return uVar3;
            }
          }
          puVar7[uVar3] = local_54[uVar3];
          uVar3 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        puVar7[uVar3] = local_54[uVar3];
        uVar3 = uVar3 + 1;
        if (*(uint *)((int)param_4 + 8) <= uVar3) {
          return uVar3;
        }
        while( true ) {
          if (uVar3 == local_50) {
            return uVar3;
          }
LAB_0008e42c:
          puVar7[uVar3] = local_54[uVar3];
          uVar2 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 2;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 3;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 4;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 5;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 6;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 7;
          if (*(uint *)((int)param_4 + 8) <= uVar2) break;
          puVar7[uVar2] = local_54[uVar2];
          uVar3 = uVar3 + 8;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        return uVar2;
      }
    }
    else if (param_3 == 0) {
      uVar9 = 3;
      goto LAB_0008d7cc;
    }
    break;
  case 3:
    iVar12 = *(int *)(param_1 + 0x24);
    goto joined_r0x0008d500;
  case 4:
    return *(uint *)(param_1 + 0x28);
  case 5:
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    local_54 = (undefined1 *)0x0;
    uVar5 = *(undefined4 *)(param_1 + 0x40);
    if (param_3 == 8) {
      if (param_4 != (void *)0x0) {
        iVar12 = FUN_0008c9d8(uVar4,uVar5,8,&local_54,&local_50);
        if (iVar12 < 0) {
          return 0xffffffff;
        }
        puVar7 = *(undefined1 **)((int)param_4 + 4);
        if (local_54 == (undefined1 *)0x0) {
          return 0;
        }
        if (*(int *)((int)param_4 + 8) == 0) {
          return 0;
        }
        if (local_50 == 0) {
          return 0;
        }
        uVar3 = 1;
        uVar2 = local_50 - 1 & 7;
        *puVar7 = *local_54;
        if (*(uint *)((int)param_4 + 8) < 2) {
          return 1;
        }
        if (local_50 == 1) {
          return 1;
        }
        if (uVar2 == 0) goto LAB_0008e25a;
        if (uVar2 != 1) {
          if (uVar2 != 2) {
            if (uVar2 != 3) {
              if (uVar2 != 4) {
                if (uVar2 != 5) {
                  if (uVar2 != 6) {
                    uVar3 = 2;
                    puVar7[1] = local_54[1];
                    if (*(uint *)((int)param_4 + 8) < 3) {
                      return 2;
                    }
                  }
                  puVar7[uVar3] = local_54[uVar3];
                  uVar3 = uVar3 + 1;
                  if (*(uint *)((int)param_4 + 8) <= uVar3) {
                    return uVar3;
                  }
                }
                puVar7[uVar3] = local_54[uVar3];
                uVar3 = uVar3 + 1;
                if (*(uint *)((int)param_4 + 8) <= uVar3) {
                  return uVar3;
                }
              }
              puVar7[uVar3] = local_54[uVar3];
              uVar3 = uVar3 + 1;
              if (*(uint *)((int)param_4 + 8) <= uVar3) {
                return uVar3;
              }
            }
            puVar7[uVar3] = local_54[uVar3];
            uVar3 = uVar3 + 1;
            if (*(uint *)((int)param_4 + 8) <= uVar3) {
              return uVar3;
            }
          }
          puVar7[uVar3] = local_54[uVar3];
          uVar3 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        puVar7[uVar3] = local_54[uVar3];
        uVar3 = uVar3 + 1;
        if (*(uint *)((int)param_4 + 8) <= uVar3) {
          return uVar3;
        }
        while( true ) {
          if (uVar3 == local_50) {
            return uVar3;
          }
LAB_0008e25a:
          puVar7[uVar3] = local_54[uVar3];
          uVar2 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 2;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 3;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 4;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 5;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 6;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 7;
          if (*(uint *)((int)param_4 + 8) <= uVar2) break;
          puVar7[uVar2] = local_54[uVar2];
          uVar3 = uVar3 + 8;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        return uVar2;
      }
    }
    else if (param_3 == 9) {
      if (param_4 != (void *)0x0) {
        iVar12 = FUN_0008c9d8(uVar4,uVar5,9,&local_54,&local_50);
        if (iVar12 < 0) {
          return 0xffffffff;
        }
        puVar7 = *(undefined1 **)((int)param_4 + 4);
        if (local_54 == (undefined1 *)0x0) {
          return 0;
        }
        if (*(int *)((int)param_4 + 8) == 0) {
          return 0;
        }
        if (local_50 == 0) {
          return 0;
        }
        uVar2 = local_50 - 1 & 7;
        uVar3 = 1;
        *puVar7 = *local_54;
        if (*(uint *)((int)param_4 + 8) < 2) {
          return 1;
        }
        if (local_50 == 1) {
          return 1;
        }
        if (uVar2 == 0) goto LAB_0008e0e4;
        if (uVar2 != 1) {
          if (uVar2 != 2) {
            if (uVar2 != 3) {
              if (uVar2 != 4) {
                if (uVar2 != 5) {
                  if (uVar2 != 6) {
                    uVar3 = 2;
                    puVar7[1] = local_54[1];
                    if (*(uint *)((int)param_4 + 8) < 3) {
                      return 2;
                    }
                  }
                  puVar7[uVar3] = local_54[uVar3];
                  uVar3 = uVar3 + 1;
                  if (*(uint *)((int)param_4 + 8) <= uVar3) {
                    return uVar3;
                  }
                }
                puVar7[uVar3] = local_54[uVar3];
                uVar3 = uVar3 + 1;
                if (*(uint *)((int)param_4 + 8) <= uVar3) {
                  return uVar3;
                }
              }
              puVar7[uVar3] = local_54[uVar3];
              uVar3 = uVar3 + 1;
              if (*(uint *)((int)param_4 + 8) <= uVar3) {
                return uVar3;
              }
            }
            puVar7[uVar3] = local_54[uVar3];
            uVar3 = uVar3 + 1;
            if (*(uint *)((int)param_4 + 8) <= uVar3) {
              return uVar3;
            }
          }
          puVar7[uVar3] = local_54[uVar3];
          uVar3 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        puVar7[uVar3] = local_54[uVar3];
        uVar3 = uVar3 + 1;
        if (*(uint *)((int)param_4 + 8) <= uVar3) {
          return uVar3;
        }
        while( true ) {
          if (uVar3 == local_50) {
            return uVar3;
          }
LAB_0008e0e4:
          puVar7[uVar3] = local_54[uVar3];
          uVar2 = uVar3 + 1;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 2;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 3;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 4;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 5;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 6;
          if (*(uint *)((int)param_4 + 8) <= uVar2) {
            return uVar2;
          }
          puVar7[uVar2] = local_54[uVar2];
          uVar2 = uVar3 + 7;
          if (*(uint *)((int)param_4 + 8) <= uVar2) break;
          puVar7[uVar2] = local_54[uVar2];
          uVar3 = uVar3 + 8;
          if (*(uint *)((int)param_4 + 8) <= uVar3) {
            return uVar3;
          }
        }
        return uVar2;
      }
    }
    else if (param_3 == 0) {
      uVar2 = FUN_0008c9d8(uVar4,uVar5,3,4,8);
      if (uVar2 == 6 || (int)uVar2 < 0) {
        return 0xffffffff;
      }
      if (3 < uVar2 - 2) {
        return 0xffffffff;
      }
      return uVar2;
    }
    break;
  case 6:
    iVar12 = *(int *)(param_1 + 0x2c);
joined_r0x0008d500:
    if (iVar12 != 0) {
      return iVar12 - *(int *)(param_1 + 0x14);
    }
    return 0;
  case 7:
    return *(uint *)(param_1 + 0x30);
  case 8:
    if (param_4 == (void *)0x0) {
      return 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      iVar12 = 0x80;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xa68) = 1;
      memset(param_1 + 0xa84,0,0x400);
      p_Var6 = param_1 + 0x78;
      do {
        iVar12 = iVar12 + -8;
        *(undefined4 *)(p_Var6 + -0x10) = 0;
        *(undefined4 *)(p_Var6 + -0xc) = 0;
        *(undefined4 *)(p_Var6 + -8) = 0;
        *(undefined4 *)(p_Var6 + -4) = 0;
        *(undefined4 *)p_Var6 = 0xffffffff;
        *(undefined4 *)(p_Var6 + 4) = 0;
        *(undefined4 *)(p_Var6 + 8) = 0;
        *(undefined4 *)(p_Var6 + 0xc) = 0;
        *(undefined4 *)(p_Var6 + 0x10) = 0;
        *(undefined4 *)(p_Var6 + 0x14) = 0xffffffff;
        *(undefined4 *)(p_Var6 + 0x18) = 0;
        *(undefined4 *)(p_Var6 + 0x1c) = 0;
        *(undefined4 *)(p_Var6 + 0x20) = 0;
        *(undefined4 *)(p_Var6 + 0x24) = 0;
        *(undefined4 *)(p_Var6 + 0x28) = 0xffffffff;
        *(undefined4 *)(p_Var6 + 0x2c) = 0;
        *(undefined4 *)(p_Var6 + 0x30) = 0;
        *(undefined4 *)(p_Var6 + 0x34) = 0;
        *(undefined4 *)(p_Var6 + 0x38) = 0;
        *(undefined4 *)(p_Var6 + 0x3c) = 0xffffffff;
        *(undefined4 *)(p_Var6 + 0x40) = 0;
        *(undefined4 *)(p_Var6 + 0x44) = 0;
        *(undefined4 *)(p_Var6 + 0x48) = 0;
        *(undefined4 *)(p_Var6 + 0x4c) = 0;
        *(undefined4 *)(p_Var6 + 0x50) = 0xffffffff;
        *(undefined4 *)(p_Var6 + 0x54) = 0;
        *(undefined4 *)(p_Var6 + 0x58) = 0;
        *(undefined4 *)(p_Var6 + 0x5c) = 0;
        *(undefined4 *)(p_Var6 + 0x60) = 0;
        *(undefined4 *)(p_Var6 + 100) = 0xffffffff;
        *(undefined4 *)(p_Var6 + 0x68) = 0;
        *(undefined4 *)(p_Var6 + 0x6c) = 0;
        *(undefined4 *)(p_Var6 + 0x70) = 0;
        *(undefined4 *)(p_Var6 + 0x74) = 0;
        *(undefined4 *)(p_Var6 + 0x78) = 0xffffffff;
        *(undefined4 *)(p_Var6 + 0x7c) = 0;
        *(undefined4 *)(p_Var6 + 0x80) = 0;
        *(undefined4 *)(p_Var6 + 0x84) = 0;
        *(undefined4 *)(p_Var6 + 0x88) = 0;
        *(undefined4 *)(p_Var6 + 0x8c) = 0xffffffff;
        p_Var6 = p_Var6 + 0xa0;
      } while (iVar12 != 0);
      uVar2 = FUN_0008c468(param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    uVar3 = *(uint *)(param_1 + 0x58);
    uVar17 = *(uint *)(param_1 + 100);
    uVar8 = uVar17 - uVar3 & 7;
    p_Var6 = param_1 + uVar3 * 0x14 + 0x68;
    uVar2 = uVar3;
    if (uVar8 != 0) {
      if (uVar17 <= uVar3) {
        return 0x7fffffff;
      }
      p_Var6 = param_1 + uVar3 * 0x14 + 0x7c;
      uVar2 = uVar3 + 1;
      *(uint *)(param_1 + 0x58) = uVar2;
      iVar12 = *(int *)(param_1 + uVar3 * 0x14 + 0x70);
      if (iVar12 != 0) goto LAB_0008e324;
      if (uVar8 != 1) {
        uVar15 = uVar2;
        if (uVar8 != 2) {
          if (uVar8 != 3) {
            if (uVar8 != 4) {
              if (uVar8 != 5) {
                if (uVar8 != 6) {
                  uVar15 = uVar3 + 2;
                  *(uint *)(param_1 + 0x58) = uVar15;
                  iVar12 = *(int *)(param_1 + uVar3 * 0x14 + 0x84);
                  p_Var6 = param_1 + uVar3 * 0x14 + 0x90;
                  uVar3 = uVar2;
                  if (iVar12 != 0) goto LAB_0008e324;
                }
                uVar2 = uVar15 + 1;
                *(uint *)(param_1 + 0x58) = uVar2;
                iVar12 = *(int *)(p_Var6 + 8);
                p_Var6 = p_Var6 + 0x14;
                uVar3 = uVar15;
                if (iVar12 != 0) goto LAB_0008e324;
              }
              uVar15 = uVar2 + 1;
              *(uint *)(param_1 + 0x58) = uVar15;
              iVar12 = *(int *)(p_Var6 + 8);
              p_Var6 = p_Var6 + 0x14;
              uVar3 = uVar2;
              if (iVar12 != 0) goto LAB_0008e324;
            }
            uVar2 = uVar15 + 1;
            *(uint *)(param_1 + 0x58) = uVar2;
            iVar12 = *(int *)(p_Var6 + 8);
            p_Var6 = p_Var6 + 0x14;
            uVar3 = uVar15;
            if (iVar12 != 0) goto LAB_0008e324;
          }
          uVar15 = uVar2 + 1;
          *(uint *)(param_1 + 0x58) = uVar15;
          iVar12 = *(int *)(p_Var6 + 8);
          p_Var6 = p_Var6 + 0x14;
          uVar3 = uVar2;
          if (iVar12 != 0) goto LAB_0008e324;
        }
        *(uint *)(param_1 + 0x58) = uVar15 + 1;
        iVar12 = *(int *)(p_Var6 + 8);
        p_Var6 = p_Var6 + 0x14;
        uVar2 = uVar15 + 1;
        uVar3 = uVar15;
        if (iVar12 != 0) goto LAB_0008e324;
      }
    }
    do {
      uVar8 = uVar2 + 7;
      if (uVar17 <= uVar2) {
        return 0x7fffffff;
      }
      *(uint *)(param_1 + 0x58) = uVar2 + 1;
      iVar12 = *(int *)(p_Var6 + 8);
      uVar3 = uVar2;
      if (iVar12 != 0) break;
      *(uint *)(param_1 + 0x58) = uVar2 + 2;
      iVar12 = *(int *)(p_Var6 + 0x1c);
      uVar3 = uVar2 + 1;
      if (iVar12 != 0) break;
      *(uint *)(param_1 + 0x58) = uVar2 + 3;
      iVar12 = *(int *)(p_Var6 + 0x30);
      uVar3 = uVar2 + 2;
      if (iVar12 != 0) break;
      *(uint *)(param_1 + 0x58) = uVar2 + 4;
      iVar12 = *(int *)(p_Var6 + 0x44);
      uVar3 = uVar2 + 3;
      if (iVar12 != 0) break;
      *(uint *)(param_1 + 0x58) = uVar2 + 5;
      iVar12 = *(int *)(p_Var6 + 0x58);
      uVar3 = uVar2 + 4;
      if (iVar12 != 0) break;
      *(uint *)(param_1 + 0x58) = uVar2 + 6;
      iVar12 = *(int *)(p_Var6 + 0x6c);
      uVar3 = uVar2 + 5;
      if (iVar12 != 0) break;
      *(uint *)(param_1 + 0x58) = uVar8;
      iVar12 = *(int *)(p_Var6 + 0x80);
      uVar3 = uVar2 + 6;
      if (iVar12 != 0) break;
      *(uint *)(param_1 + 0x58) = uVar2 + 8;
      iVar12 = *(int *)(p_Var6 + 0x94);
      p_Var6 = p_Var6 + 0xa0;
      uVar2 = uVar2 + 8;
      uVar3 = uVar8;
    } while (iVar12 == 0);
LAB_0008e324:
    *(int *)param_4 = iVar12;
    iVar12 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + uVar3 * 0x14 + 0x78) = iVar12;
    *(int *)(param_1 + 0x5c) = iVar12 + 1;
    return *(uint *)(param_1 + uVar3 * 0x14 + 0x74);
  case 9:
    if (param_4 != (void *)0x0) {
      if (*(int *)(param_1 + 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x58) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xa68) = 1;
        memset(param_1 + 0xa84,0,0x400);
        iVar12 = 0;
        p_Var6 = param_1 + 0x78;
        do {
          iVar12 = iVar12 + 8;
          *(undefined4 *)(p_Var6 + -0x10) = 0;
          *(undefined4 *)(p_Var6 + -0xc) = 0;
          *(undefined4 *)(p_Var6 + -8) = 0;
          *(undefined4 *)(p_Var6 + -4) = 0;
          *(undefined4 *)p_Var6 = 0xffffffff;
          *(undefined4 *)(p_Var6 + 4) = 0;
          *(undefined4 *)(p_Var6 + 8) = 0;
          *(undefined4 *)(p_Var6 + 0xc) = 0;
          *(undefined4 *)(p_Var6 + 0x10) = 0;
          *(undefined4 *)(p_Var6 + 0x14) = 0xffffffff;
          *(undefined4 *)(p_Var6 + 0x18) = 0;
          *(undefined4 *)(p_Var6 + 0x1c) = 0;
          *(undefined4 *)(p_Var6 + 0x20) = 0;
          *(undefined4 *)(p_Var6 + 0x24) = 0;
          *(undefined4 *)(p_Var6 + 0x28) = 0xffffffff;
          *(undefined4 *)(p_Var6 + 0x2c) = 0;
          *(undefined4 *)(p_Var6 + 0x30) = 0;
          *(undefined4 *)(p_Var6 + 0x34) = 0;
          *(undefined4 *)(p_Var6 + 0x38) = 0;
          *(undefined4 *)(p_Var6 + 0x3c) = 0xffffffff;
          *(undefined4 *)(p_Var6 + 0x40) = 0;
          *(undefined4 *)(p_Var6 + 0x44) = 0;
          *(undefined4 *)(p_Var6 + 0x48) = 0;
          *(undefined4 *)(p_Var6 + 0x4c) = 0;
          *(undefined4 *)(p_Var6 + 0x50) = 0xffffffff;
          *(undefined4 *)(p_Var6 + 0x54) = 0;
          *(undefined4 *)(p_Var6 + 0x58) = 0;
          *(undefined4 *)(p_Var6 + 0x5c) = 0;
          *(undefined4 *)(p_Var6 + 0x60) = 0;
          *(undefined4 *)(p_Var6 + 100) = 0xffffffff;
          *(undefined4 *)(p_Var6 + 0x68) = 0;
          *(undefined4 *)(p_Var6 + 0x6c) = 0;
          *(undefined4 *)(p_Var6 + 0x70) = 0;
          *(undefined4 *)(p_Var6 + 0x74) = 0;
          *(undefined4 *)(p_Var6 + 0x78) = 0xffffffff;
          *(undefined4 *)(p_Var6 + 0x7c) = 0;
          *(undefined4 *)(p_Var6 + 0x80) = 0;
          *(undefined4 *)(p_Var6 + 0x84) = 0;
          *(undefined4 *)(p_Var6 + 0x88) = 0;
          *(undefined4 *)(p_Var6 + 0x8c) = 0xffffffff;
          p_Var6 = p_Var6 + 0xa0;
        } while (iVar12 != 0x80);
        uVar2 = FUN_0008c468(param_1,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30)
                            );
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar2 = 0;
        *(undefined4 *)(param_1 + 0x50) = 0;
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x50);
      }
      local_80 = *(uint *)(param_1 + 0x4c);
      if (uVar2 < local_80) {
        if (*(int *)(param_1 + 0xa68) == 0) {
          iVar12 = *(int *)(param_1 + 0xa78);
          goto LAB_0008d822;
        }
        do {
          iVar12 = 0;
          *(undefined4 *)(param_1 + 0xa78) = 0;
          *(undefined4 *)(param_1 + 0xa7c) = 0;
          *(undefined4 *)(param_1 + 0xa80) = 0;
          *(undefined4 *)(param_1 + 0xa6c) = 0;
          *(undefined4 *)(param_1 + 0x54) = 0;
          *(undefined4 *)(param_1 + 0xa70) = 0xffffffff;
          pbVar14 = *(byte **)(param_1 + uVar2 * 4 + 0xa84);
          if (pbVar14 != (byte *)0x0) {
            pbVar11 = pbVar14 + 8;
            uVar2 = (uint)pbVar14[2] << 0x10 | (uint)pbVar14[3] << 0x18 | (uint)*pbVar14 |
                    (uint)pbVar14[1] << 8;
            if (7 < uVar2) {
              do {
                bVar1 = pbVar11[4];
                uVar8 = (uint)pbVar11[1] << 0x10 | (uint)*pbVar11 << 0x18 | (uint)pbVar11[3] |
                        (uint)pbVar11[2] << 8;
                uVar3 = (uint)pbVar11[6] << 0x10 | (uint)pbVar11[7] << 0x18 | (uint)bVar1 |
                        (uint)pbVar11[5] << 8;
                if (uVar8 == 0x4c495354) {
                  pbVar14 = pbVar11 + 4;
                  uVar8 = (uint)pbVar11[0xb] | (uint)pbVar11[9] << 0x10 | (uint)pbVar11[8] << 0x18 |
                          (uint)pbVar11[10] << 8;
                  if (uVar8 == 0x6c617274) {
                    *(byte **)(param_1 + 0xa7c) = pbVar14;
                  }
                  else if (uVar8 == 0x6c72676e) {
                    *(byte **)(param_1 + 0xa78) = pbVar14;
                  }
                  else if (uVar8 == 0x6c617232) {
                    *(byte **)(param_1 + 0xa80) = pbVar14;
                  }
                }
                else if (uVar8 == 0x696e7368) {
                  uVar8 = (uint)pbVar11[8] | (uint)pbVar11[10] << 0x10 | (uint)pbVar11[0xb] << 0x18
                          | (uint)pbVar11[9] << 8;
                  if (0x7f < uVar8) {
                    uVar8 = 0x80;
                  }
                  *(uint *)(param_1 + 0xa6c) = uVar8;
                  *(uint *)(param_1 + 0xa70) =
                       (uint)pbVar11[0xc] |
                       (uint)pbVar11[0xe] << 0x10 | (pbVar11[0xf] & 0x7f) << 0x18 |
                       (uint)pbVar11[0xd] << 8;
                  *(uint *)(param_1 + 0xa74) =
                       (uint)pbVar11[0x12] << 0x10 | (uint)pbVar11[0x13] << 0x18 |
                       (uint)pbVar11[0x10] | (uint)pbVar11[0x11] << 8;
                }
                pbVar11 = pbVar11 + uVar3 + 8;
                if ((int)((uint)bVar1 << 0x1f) < 0) {
                  pbVar11 = pbVar11 + 1;
                }
                uVar2 = uVar2 + (-8 - uVar3);
              } while (7 < uVar2);
              iVar12 = *(int *)(param_1 + 0xa78);
            }
            *(undefined4 *)(param_1 + 0xa68) = 0;
LAB_0008d822:
            if (iVar12 != 0) {
              local_80 = *(uint *)(param_1 + 0xa6c);
              uVar2 = *(uint *)(param_1 + 0x54);
              local_78 = local_80 << 2;
              do {
                while( true ) {
                  do {
                    do {
                      local_7c = param_1 + (uVar2 + 0x393) * 4 + 0x4c;
                      uVar3 = uVar2;
                      do {
                        if (local_80 <= uVar3) {
                          local_80 = *(uint *)(param_1 + 0x4c);
                          goto LAB_0008d7fe;
                        }
                        uVar2 = uVar3 + 1;
                        *(uint *)(param_1 + 0x54) = uVar2;
                        if (uVar3 == 0) {
                          if (local_80 != 0) {
                            memset(param_1 + 0xe9c,0,local_78);
                          }
                          pbVar14 = *(byte **)(param_1 + 0xa78);
                          pbVar11 = pbVar14 + 8;
                          uVar3 = (uint)pbVar14[2] << 0x10 | (uint)pbVar14[3] << 0x18 |
                                  (uint)*pbVar14 | (uint)pbVar14[1] << 8;
                          if (7 < uVar3) {
                            iVar12 = 0;
                            do {
                              bVar1 = pbVar11[4];
                              uVar8 = (uint)pbVar11[6] << 0x10 | (uint)pbVar11[7] << 0x18 |
                                      (uint)bVar1 | (uint)pbVar11[5] << 8;
                              uVar3 = uVar3 + (-8 - uVar8);
                              if ((((uint)pbVar11[1] << 0x10 | (uint)*pbVar11 << 0x18 |
                                    (uint)pbVar11[3] | (uint)pbVar11[2] << 8) == 0x4c495354) &&
                                 ((uVar17 = (uint)pbVar11[9] << 0x10 | (uint)pbVar11[8] << 0x18 |
                                            (uint)pbVar11[0xb] | (uint)pbVar11[10] << 8,
                                  uVar17 == 0x72676e20 || (uVar17 == 0x72676e32)))) {
                                iVar16 = iVar12 * 4;
                                if (iVar12 != 0x80) {
                                  iVar12 = iVar12 + 1;
                                  *(byte **)(param_1 + iVar16 + 0xe9c) = pbVar11 + 4;
                                }
                              }
                              pbVar11 = pbVar11 + uVar8 + 8;
                              if ((int)((uint)bVar1 << 0x1f) < 0) {
                                pbVar11 = pbVar11 + 1;
                              }
                            } while (7 < uVar3);
                          }
                        }
                        local_7c = local_7c + 4;
                        pbVar14 = *(byte **)local_7c;
                        uVar3 = uVar2;
                      } while (pbVar14 == (byte *)0x0);
                      *(undefined4 *)(param_1 + 0xe94) = 0;
                      *(undefined4 *)(param_1 + 0xe88) = 0x7f;
                      pbVar11 = pbVar14 + 8;
                      *(undefined4 *)(param_1 + 0xe8c) = 0xffffffff;
                      *(undefined4 *)(param_1 + 0xe98) = 0;
                      *(undefined4 *)(param_1 + 0xe90) = 0;
                      *(undefined4 *)(param_1 + 0xe84) = 0;
                      for (uVar3 = (uint)pbVar14[2] << 0x10 | (uint)pbVar14[3] << 0x18 |
                                   (uint)*pbVar14 | (uint)pbVar14[1] << 8; 7 < uVar3;
                          uVar3 = uVar3 + (-8 - uVar8)) {
                        bVar1 = pbVar11[4];
                        uVar17 = (uint)pbVar11[1] << 0x10 | (uint)*pbVar11 << 0x18 |
                                 (uint)pbVar11[3] | (uint)pbVar11[2] << 8;
                        uVar8 = (uint)pbVar11[6] << 0x10 | (uint)pbVar11[7] << 0x18 | (uint)bVar1 |
                                (uint)pbVar11[5] << 8;
                        if (uVar17 == 0x72676e68) {
                          *(uint *)(param_1 + 0xe84) = (uint)*(ushort *)(pbVar11 + 8);
                          *(uint *)(param_1 + 0xe88) = (uint)*(ushort *)(pbVar11 + 10);
                        }
                        else if (uVar17 < 0x72676e68) {
                          if (uVar17 == 0x4c495354) {
                            uVar17 = (uint)pbVar11[9] << 0x10 | (uint)pbVar11[8] << 0x18 |
                                     (uint)pbVar11[0xb] | (uint)pbVar11[10] << 8;
                            if (uVar17 == 0x6c617232) {
                              *(byte **)(param_1 + 0xe98) = pbVar11 + 4;
                            }
                            else if (uVar17 == 0x6c617274) {
                              *(byte **)(param_1 + 0xe94) = pbVar11 + 4;
                            }
                          }
                        }
                        else if (uVar17 == 0x776c6e6b) {
                          *(uint *)(param_1 + 0xe8c) =
                               (uint)pbVar11[0x12] << 0x10 | (uint)pbVar11[0x13] << 0x18 |
                               (uint)pbVar11[0x10] | (uint)pbVar11[0x11] << 8;
                        }
                        else if (uVar17 == 0x77736d70) {
                          *(byte **)(param_1 + 0xe90) = pbVar11 + 8;
                        }
                        pbVar11 = pbVar11 + 8 + uVar8;
                        if ((int)((uint)bVar1 << 0x1f) < 0) {
                          pbVar11 = pbVar11 + 1;
                        }
                      }
                      iVar12 = *(int *)(param_1 + 0xa70);
                    } while ((((((iVar12 == -1) ||
                                (iVar16 = *(int *)(param_1 + 0xe8c), iVar16 == -1)) ||
                               ((iVar13 = *(int *)(param_1 + 0xe90), iVar13 == 0 &&
                                (*(int *)(param_1 + iVar16 * 0x14 + 0x6c) == 0)))) ||
                              ((((*(int *)(param_1 + iVar16 * 0x14 + 0x78) == -1 ||
                                 (pbVar14 = *(byte **)(param_1 + iVar16 * 0x14 + 0x68),
                                 pbVar14 == (byte *)0x0)) ||
                                (uVar3 = (uint)(ushort)((*pbVar14 - 1) + (ushort)pbVar14[1] * 0x100)
                                , 6 < uVar3)) ||
                               (((1 << (uVar3 & 0xff) & 0x61U) == 0 ||
                                (*(short *)(pbVar14 + 2) != 1)))))) ||
                             ((*(short *)(pbVar14 + 0xe) != 8 && (*(short *)(pbVar14 + 0xe) != 0x10)
                              ))) || (48000 < ((uint)pbVar14[4] |
                                               (uint)pbVar14[6] << 0x10 | (uint)pbVar14[7] << 0x18 |
                                              (uint)pbVar14[5] << 8)));
                    if (iVar13 == 0) {
                      iVar13 = *(int *)(param_1 + iVar16 * 0x14 + 0x6c);
                    }
                    local_4c = *(undefined4 *)(param_1 + 0xe88);
                    local_50 = *(uint *)(param_1 + 0xe84);
                    local_34 = (byte *)0x1;
                    pbVar11 = (byte *)FUN_0008c60c(*(undefined4 *)(param_1 + 0xa80),1);
                    if (pbVar11 == (byte *)0x0) {
                      local_34 = pbVar11;
                      pbVar11 = (byte *)FUN_0008c60c(*(undefined4 *)(param_1 + 0xa7c),0);
                    }
                    pbVar10 = *(byte **)(param_1 + 0xe98);
                    if (pbVar10 == (byte *)0x0) {
                      if (*(int *)(param_1 + 0xe94) != 0) {
                        local_34 = pbVar10;
                        pbVar11 = (byte *)FUN_0008c60c(*(int *)(param_1 + 0xe94),0);
                      }
                    }
                    else {
                      local_34 = (byte *)0x1;
                      pbVar11 = (byte *)FUN_0008c60c(pbVar10,1);
                    }
                    local_54 = *(undefined1 **)(param_1 + 0xa74);
                    uVar3 = *(uint *)(param_1 + iVar16 * 0x14 + 0x74);
                    local_48 = *(undefined4 *)(param_1 + iVar16 * 0x14 + 0x78);
                    local_58 = iVar12;
                  } while (uVar3 < 3);
                  uVar2 = (uint)*(byte *)(iVar13 + 0x20) |
                          (uint)*(byte *)(iVar13 + 0x22) << 0x10 |
                          (uint)*(byte *)(iVar13 + 0x23) << 0x18 |
                          (uint)*(byte *)(iVar13 + 0x21) << 8;
                  if (uVar2 < 2) {
                    local_44 = uVar3;
                    local_40 = uVar3;
                    if (*(short *)(pbVar14 + 0xe) == 0x10) {
                      local_44 = uVar3 >> 1;
                      local_40 = local_44;
                    }
                  }
                  else {
                    local_44 = (uint)*(byte *)(iVar13 + 0x1e) << 0x10 |
                               (uint)*(byte *)(iVar13 + 0x1f) << 0x18 |
                               (uint)*(byte *)(iVar13 + 0x1c) | (uint)*(byte *)(iVar13 + 0x1d) << 8;
                    local_40 = local_44 + uVar2;
                  }
                  if (((uint)*pbVar14 + (uint)pbVar14[1] * 0x100) - 6 < 2) {
                    local_3c = 0x10;
                  }
                  else {
                    local_3c = (uint)*(ushort *)(pbVar14 + 0xe);
                  }
                  local_38 = (uint)pbVar14[6] << 0x10 | (uint)pbVar14[7] << 0x18 | (uint)pbVar14[4]
                             | (uint)pbVar14[5] << 8;
                  if (*(ushort *)(iVar13 + 4) < 0x80) break;
LAB_0008dce2:
                  local_80 = *(uint *)(param_1 + 0xa6c);
                  uVar2 = *(uint *)(param_1 + 0x54);
                  local_78 = local_80 << 2;
                }
                *(char *)((int)param_4 + 0x30) = (char)*(ushort *)(iVar13 + 4);
                if (pbVar11 == (byte *)0x0) {
                  local_2c = 0;
                  local_30 = (byte *)0x0;
                }
                else {
                  uVar2 = (uint)pbVar11[2] << 0x10 | (uint)pbVar11[3] << 0x18 | (uint)*pbVar11 |
                          (uint)pbVar11[1] << 8;
                  if (uVar2 < 8) goto LAB_0008dce2;
                  local_30 = pbVar11 + uVar2;
                  local_2c = ((uint)pbVar11[6] << 0x10 | (uint)pbVar11[7] << 0x18 | (uint)pbVar11[4]
                             | (uint)pbVar11[5] << 8) * 0xc;
                  if (0xbff < local_2c) {
                    local_2c = 0xc00;
                  }
                }
                uVar2 = xmf_SetVoiceBuffer(param_4,(_MAXMFCNV_PRM *)&local_58);
                if (-1 < (int)uVar2) {
                  return uVar2;
                }
                local_80 = *(uint *)(param_1 + 0xa6c);
                uVar2 = *(uint *)(param_1 + 0x54);
                local_78 = local_80 << 2;
              } while( true );
            }
          }
LAB_0008d7fe:
          uVar2 = *(int *)(param_1 + 0x50) + 1;
          *(undefined4 *)(param_1 + 0xa68) = 1;
          *(uint *)(param_1 + 0x50) = uVar2;
        } while (uVar2 < local_80);
      }
      return 0x7fffffff;
    }
  }
  return 0xfffffffe;
}

