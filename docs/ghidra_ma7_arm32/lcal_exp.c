/* lcal_exp @ 000f6744 2538B */


/* YAMAHA::lcal_exp(int, unsigned int, int*, int*, int*, int) */

void YAMAHA::lcal_exp(int param_1,uint param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined4 *puVar15;
  int local_cc [7];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_94 [5];
  undefined1 auStack_80 [4];
  uint local_7c;
  uint local_78 [4];
  int local_68;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  iVar2 = DAT_000f7130;
  local_cc[6] = *(undefined4 *)(DAT_000f7130 + 0xf6758);
  uStack_b0 = *(undefined4 *)(DAT_000f7130 + 0xf675c);
  uStack_ac = *(undefined4 *)(DAT_000f7130 + 0xf6760);
  uStack_a8 = *(undefined4 *)(DAT_000f7130 + 0xf6764);
  puVar15 = (undefined4 *)(DAT_000f7130 + 0xf6768);
  *param_4 = 0x80;
  iVar6 = param_6 + 1;
  local_9c = 0;
  local_a4 = *puVar15;
  uStack_a0 = *(undefined4 *)(iVar2 + 0xf676c);
  *param_3 = 0;
  local_98 = 0;
  local_94[0] = 0;
  local_94[1] = 0;
  local_94[2] = 0;
  local_94[3] = 0;
  local_94[4] = 0;
  if (((((0 < iVar6) && (local_98 = 1, 1 < iVar6)) && (local_94[0] = 1, 2 < iVar6)) &&
      ((local_94[1] = 1, 3 < iVar6 && (local_94[2] = 1, 4 < iVar6)))) &&
     (local_94[3] = 1, 5 < iVar6)) {
    local_94[4] = 1;
  }
  local_cc[1] = -0x18;
  if (param_6 < 2) {
LAB_000f6e3e:
    iVar2 = local_cc[param_6];
    local_cc[param_6 + 1] = iVar2;
    if (iVar6 != 5) {
      local_cc[param_6 + 2] = iVar2;
      if (param_6 != 3) {
        local_cc[param_6 + 3] = iVar2;
        if (param_6 != 2) {
          local_cc[param_6 + 4] = iVar2;
          if (param_6 != 1) {
            local_cc[param_6 + 5] = iVar2;
          }
        }
      }
    }
    if (0 < param_6) goto LAB_000f67f4;
  }
  else {
    local_cc[2] = -0x1e;
    if ((param_6 < 3) || (local_cc[3] = -0x24, param_6 < 4)) {
      if (param_6 < 5) goto LAB_000f6e3e;
    }
    else {
      local_cc[4] = -0x2a;
      if (param_6 < 5) goto LAB_000f6e3e;
      local_cc[5] = -0x30;
    }
LAB_000f67f4:
    iVar2 = (int)(short)(local_cc[1] * 100);
    if (iVar2 < 0) {
      if (iVar2 < -0x25e4) {
        local_98 = 0;
      }
      else {
        uVar3 = -(local_cc[1] * 100 & 0xffffU) & 0x3f;
        if ((-iVar2 & 0x3fffffU) >> 6 == 0) {
          local_98 = (uint)((int)((short)uVar3 * 0x76e8 + (0x40 - uVar3) * 0x8000) >> 5) >> 1;
        }
        else {
          iVar2 = DAT_000f7158 + 0xf7090 + (short)((uint)(iVar2 * -0x400) >> 0x10) * 2;
          local_98 = (uint)((int)((0x40 - uVar3) * (int)*(short *)(iVar2 + 0x18) +
                                 (int)(short)uVar3 * (int)*(short *)(iVar2 + 0x1a)) >> 5) >> 1;
        }
      }
    }
    else {
      local_98 = 0x8000;
    }
    if (1 < param_6) {
      iVar2 = (int)(short)(local_cc[2] * 100);
      if (iVar2 < 0) {
        if (iVar2 < -0x25e4) {
          local_94[0] = 0;
        }
        else {
          uVar3 = -(local_cc[2] * 100 & 0xffffU) & 0x3f;
          if ((-iVar2 & 0x3fffffU) >> 6 == 0) {
            local_94[0] = (uint)((int)((short)uVar3 * 0x76e8 + (0x40 - uVar3) * 0x8000) >> 5) >> 1;
          }
          else {
            iVar2 = DAT_000f7148 + 0xf6f6a + (short)((uint)(iVar2 * -0x400) >> 0x10) * 2;
            local_94[0] = (uint)((int)((0x40 - uVar3) * (int)*(short *)(iVar2 + 0x18) +
                                      (int)(short)uVar3 * (int)*(short *)(iVar2 + 0x1a)) >> 5) >> 1;
          }
        }
      }
      else {
        local_94[0] = 0x8000;
      }
      if (2 < param_6) {
        iVar2 = (int)(short)(local_cc[3] * 100);
        if (iVar2 < 0) {
          if (iVar2 < -0x25e4) {
            local_94[1] = 0;
          }
          else {
            uVar3 = -(local_cc[3] * 100 & 0xffffU) & 0x3f;
            if ((-iVar2 & 0x3fffffU) >> 6 == 0) {
              local_94[1] = (uint)((int)((short)uVar3 * 0x76e8 + (0x40 - uVar3) * 0x8000) >> 5) >> 1
              ;
            }
            else {
              iVar2 = DAT_000f714c + 0xf6fb6 + (short)((uint)(iVar2 * -0x400) >> 0x10) * 2;
              local_94[1] = (uint)((int)((0x40 - uVar3) * (int)*(short *)(iVar2 + 0x18) +
                                        (int)(short)uVar3 * (int)*(short *)(iVar2 + 0x1a)) >> 5) >>
                            1;
            }
          }
        }
        else {
          local_94[1] = 0x8000;
        }
        if (3 < param_6) {
          iVar2 = (int)(short)(local_cc[4] * 100);
          if (iVar2 < 0) {
            if (iVar2 < -0x25e4) {
              local_94[2] = 0;
            }
            else {
              uVar3 = -(local_cc[4] * 100 & 0xffffU) & 0x3f;
              if ((-iVar2 & 0x3fffffU) >> 6 == 0) {
                local_94[2] = (uint)((int)((short)uVar3 * 0x76e8 + (0x40 - uVar3) * 0x8000) >> 5) >>
                              1;
              }
              else {
                iVar2 = DAT_000f7150 + 0xf7000 + (short)((uint)(iVar2 * -0x400) >> 0x10) * 2;
                local_94[2] = (uint)((int)((0x40 - uVar3) * (int)*(short *)(iVar2 + 0x18) +
                                          (int)(short)uVar3 * (int)*(short *)(iVar2 + 0x1a)) >> 5)
                              >> 1;
              }
            }
          }
          else {
            local_94[2] = 0x8000;
          }
          if (4 < param_6) {
            iVar2 = (int)(short)(local_cc[5] * 100);
            if (iVar2 < 0) {
              if (iVar2 < -0x25e4) {
                local_94[3] = 0;
              }
              else {
                uVar3 = -(local_cc[5] * 100 & 0xffffU) & 0x3f;
                if ((-iVar2 & 0x3fffffU) >> 6 == 0) {
                  local_94[3] = (uint)((int)((short)uVar3 * 0x76e8 + (0x40 - uVar3) * 0x8000) >> 5)
                                >> 1;
                }
                else {
                  iVar2 = DAT_000f7154 + 0xf704a + (short)((uint)(iVar2 * -0x400) >> 0x10) * 2;
                  local_94[3] = (uint)((int)((0x40 - uVar3) * (int)*(short *)(iVar2 + 0x18) +
                                            (int)(short)uVar3 * (int)*(short *)(iVar2 + 0x1a)) >> 5)
                                >> 1;
                }
              }
            }
            else {
              local_94[3] = 0x8000;
            }
          }
        }
      }
    }
  }
  local_7c = local_98;
  if (param_2 == 10) {
    if (1 < iVar6) {
      memcpy(local_78,local_94,param_6 << 2);
      goto LAB_000f69d8;
    }
  }
  else {
    uVar3 = local_98 + 0x7f & (int)local_98 >> 0x20;
    if (param_2 < 10) {
      uVar3 = local_98;
    }
    uVar3 = (uVar3 & 0x7fffff) >> 7;
    uVar9 = (local_98 + uVar3 * -0x80) * 2 & 0xffff;
    if (1 < iVar6) {
      puVar1 = auStack_80;
      puVar7 = puVar1 + param_6 * 4;
      iVar2 = DAT_000f7134 + 0xf68e2 + uVar3 * 2;
      iVar4 = (int)*(short *)(iVar2 + 0x14a);
      iVar10 = (int)*(short *)(iVar2 + 0x14c) * uVar9;
      local_cc[0] = DAT_000f713c + 0xf690c;
      iVar2 = iVar4 * (uVar9 - 0x100) - iVar10;
      iVar4 = ((int)(iVar4 * (0x100 - uVar9) + iVar10) >> 8) * 10;
      puVar8 = &local_98;
      bVar14 = (iVar2 >> 7 & 1U) != 0;
      iVar2 = iVar2 >> 8;
      do {
        puVar8 = puVar8 + 1;
        uVar9 = *puVar8;
        uVar3 = uVar9 + 0x7f & (int)uVar9 >> 0x20;
        if (!bVar14) {
          uVar3 = uVar9;
        }
        uVar3 = (uVar3 & 0x7fffff) >> 7;
        if (uVar3 == 0) {
          uVar3 = (uVar9 & 0xffff) >> 7;
          uVar9 = uVar9 & 0x7f;
          if (uVar3 == 0) {
            uVar3 = (uint)*(ushort *)(DAT_000f7140 + uVar9 * 2 + 0xf6e82);
          }
          else {
            iVar10 = DAT_000f7144 + 0xf6936 + uVar3 * 2;
            uVar3 = (uVar9 * (int)*(short *)(iVar10 + 0x352) +
                     (int)*(short *)(iVar10 + 0x350) * (0x80 - uVar9) & 0x7fffff) >> 7;
          }
          iVar10 = (int)(param_2 * (uVar3 * 5 + iVar2) + iVar4) / 0x32;
          if (-0x8001 < iVar10) {
            if ((0x7fff < iVar10) || (-1 < (short)iVar10)) goto LAB_000f69c6;
            if (-0x25e5 < (short)iVar10) {
              uVar3 = -iVar10 & 0x3f;
              if ((-iVar10 & 0x3fffffU) >> 6 == 0) goto LAB_000f6f1a;
              iVar10 = DAT_000f713c + 0xf690c + (short)((uint)(iVar10 * -0x400) >> 0x10) * 2;
              uVar3 = (uint)((int)((0x40 - uVar3) * (int)*(short *)(iVar10 + 0x18) +
                                  (int)(short)uVar3 * (int)*(short *)(iVar10 + 0x1a)) >> 5) >> 1;
              goto LAB_000f69ca;
            }
          }
LAB_000f6e26:
          uVar3 = 0;
        }
        else {
          iVar10 = DAT_000f7138 + 0xf68fc + uVar3 * 2;
          uVar3 = (uVar9 + uVar3 * -0x80) * 2 & 0xffff;
          iVar10 = (int)(param_2 * (iVar2 + ((int)((0x100 - uVar3) * (int)*(short *)(iVar10 + 0x14a)
                                                  + (int)*(short *)(iVar10 + 0x14c) * uVar3) >> 8))
                        + iVar4) / 0x32;
          iVar11 = (int)(short)iVar10;
          if (iVar11 < 0) {
            if (iVar11 < -0x25e4) goto LAB_000f6e26;
            uVar3 = -iVar10 & 0x3f;
            if ((-iVar11 & 0x3fffffU) >> 6 == 0) {
LAB_000f6f1a:
              uVar3 = (uint)((int)((short)uVar3 * 0x76e8 + (0x40 - uVar3) * 0x8000) >> 5) >> 1;
            }
            else {
              iVar10 = DAT_000f7138 + 0xf68fc + (short)((uint)(iVar11 * -0x400) >> 0x10) * 2;
              uVar3 = (uint)((int)((0x40 - uVar3) * (int)*(short *)(iVar10 + 0x18) +
                                  (int)(short)uVar3 * (int)*(short *)(iVar10 + 0x1a)) >> 5) >> 1;
            }
          }
          else {
LAB_000f69c6:
            uVar3 = 0x8000;
          }
        }
LAB_000f69ca:
        *(uint *)(puVar1 + 8) = uVar3;
        puVar1 = puVar1 + 4;
        bVar14 = puVar7 <= puVar1;
      } while (puVar1 != puVar7);
LAB_000f69d8:
      uVar9 = local_94[0];
      uVar3 = local_98;
      local_50 = 0;
      if (local_98 != local_94[0]) {
        iVar2 = __divsi3(local_78[0] << 0xf,local_94[0]);
        iVar4 = __divsi3(local_7c << 0xf,uVar3);
        local_50 = __divsi3((iVar2 - iVar4) * 0x8000,uVar3 - uVar9);
      }
      uVar5 = local_94[1];
      if (2 < iVar6) {
        local_4c = 0;
        if (local_94[1] != uVar9) {
          iVar2 = __divsi3(local_78[1] << 0xf,local_94[1]);
          iVar4 = __divsi3(local_78[0] << 0xf,uVar9);
          local_4c = __divsi3((iVar2 - iVar4) * 0x8000,uVar9 - uVar5);
        }
        uVar13 = local_94[2];
        if (3 < iVar6) {
          local_48 = 0;
          if (local_94[2] != uVar5) {
            iVar2 = __divsi3(local_78[2] << 0xf,local_94[2]);
            iVar4 = __divsi3(local_78[1] << 0xf,uVar5);
            local_48 = __divsi3((iVar2 - iVar4) * 0x8000,uVar5 - uVar13);
          }
          uVar5 = local_94[3];
          if (4 < iVar6) {
            local_44 = 0;
            if (local_94[3] != uVar13) {
              iVar2 = __divsi3(local_78[3] << 0xf,local_94[3]);
              iVar4 = __divsi3(local_78[2] << 0xf,uVar13);
              local_44 = __divsi3((iVar2 - iVar4) * 0x8000,uVar13 - uVar5);
            }
            uVar13 = local_94[4];
            if ((5 < iVar6) && (local_40 = 0, local_94[4] != uVar5)) {
              iVar2 = __divsi3(local_68 << 0xf,local_94[4]);
              iVar4 = __divsi3(local_78[3] << 0xf,uVar5);
              local_40 = __divsi3((iVar2 - iVar4) * 0x8000,uVar5 - uVar13);
            }
          }
        }
      }
      iVar2 = local_50 + 0xbff;
      if (-1 < local_50 + 0x400) {
        iVar2 = local_50 + 0x400;
      }
      iVar2 = (iVar2 >> 0xb) * 0x800;
      iVar4 = iVar2 + 0x80;
      iVar2 = iVar2 + 0x17f;
      if (-1 < iVar4) {
        iVar2 = iVar4;
      }
      uVar5 = iVar2 >> 8;
      if (0x7ffe < (int)uVar5) {
        uVar5 = 0x7fff;
      }
      if ((int)uVar5 < -0x8000) {
        uVar5 = 0xffff8000;
      }
      param_4[1] = uVar5;
      uVar12 = uVar5 * 0x100;
      uVar13 = uVar12 & ~((int)uVar12 >> 0x20);
      if ((char)((uVar5 & 0xffffff) >> 0x17) != '\0') {
        uVar13 = uVar12 + 0x7ff;
      }
      if (0x7fff < (int)uVar3) {
        local_98 = 0x7fff;
        uVar3 = 0x7fff;
      }
      param_3[1] = uVar3;
      if (2 < iVar6) {
        iVar2 = local_4c + 0xbff;
        if (-1 < local_4c + 0x400) {
          iVar2 = local_4c + 0x400;
        }
        iVar2 = ((iVar2 >> 0xb) - ((int)uVar13 >> 0xb)) * 0x800;
        iVar4 = iVar2 + 0x80;
        iVar2 = iVar2 + 0x17f;
        if (-1 < iVar4) {
          iVar2 = iVar4;
        }
        uVar3 = iVar2 >> 8;
        if (0x7ffe < (int)uVar3) {
          uVar3 = 0x7fff;
        }
        if ((int)uVar3 < -0x8000) {
          uVar3 = 0xffff8000;
        }
        param_4[2] = uVar3;
        uVar12 = uVar3 * 0x100;
        uVar5 = uVar12 & ~((int)uVar12 >> 0x20);
        if ((char)((uVar3 & 0xffffff) >> 0x17) != '\0') {
          uVar5 = uVar12 + 0x7ff;
        }
        if (0x7fff < (int)uVar9) {
          local_94[0] = 0x7fff;
          uVar9 = 0x7fff;
        }
        iVar2 = ((int)uVar13 >> 0xb) + ((int)uVar5 >> 0xb);
        param_3[2] = uVar9;
        if (3 < iVar6) {
          iVar4 = local_48 + 0xbff;
          if (-1 < local_48 + 0x400) {
            iVar4 = local_48 + 0x400;
          }
          iVar4 = ((iVar4 >> 0xb) - iVar2) * 0x800;
          iVar10 = iVar4 + 0x80;
          iVar4 = iVar4 + 0x17f;
          if (-1 < iVar10) {
            iVar4 = iVar10;
          }
          uVar3 = iVar4 >> 8;
          if (0x7ffe < (int)uVar3) {
            uVar3 = 0x7fff;
          }
          if ((int)uVar3 < -0x8000) {
            uVar3 = 0xffff8000;
          }
          param_4[3] = uVar3;
          uVar5 = uVar3 * 0x100;
          uVar9 = uVar5 & ~((int)uVar5 >> 0x20);
          if ((char)((uVar3 & 0xffffff) >> 0x17) != '\0') {
            uVar9 = uVar5 + 0x7ff;
          }
          if (0x7fff < (int)local_94[1]) {
            local_94[1] = 0x7fff;
            local_94[1] = 0x7fff;
          }
          iVar2 = iVar2 + ((int)uVar9 >> 0xb);
          param_3[3] = local_94[1];
          if (4 < iVar6) {
            iVar4 = local_44 + 0xbff;
            if (-1 < local_44 + 0x400) {
              iVar4 = local_44 + 0x400;
            }
            iVar4 = ((iVar4 >> 0xb) - iVar2) * 0x800;
            iVar10 = iVar4 + 0x80;
            iVar4 = iVar4 + 0x17f;
            if (-1 < iVar10) {
              iVar4 = iVar10;
            }
            uVar3 = iVar4 >> 8;
            if (0x7ffe < (int)uVar3) {
              uVar3 = 0x7fff;
            }
            if ((int)uVar3 < -0x8000) {
              uVar3 = 0xffff8000;
            }
            param_4[4] = uVar3;
            uVar5 = uVar3 * 0x100;
            uVar9 = uVar5 & ~((int)uVar5 >> 0x20);
            if ((char)((uVar3 & 0xffffff) >> 0x17) != '\0') {
              uVar9 = uVar5 + 0x7ff;
            }
            if (0x7fff < (int)local_94[2]) {
              local_94[2] = 0x7fff;
              local_94[2] = 0x7fff;
            }
            iVar2 = iVar2 + ((int)uVar9 >> 0xb);
            param_3[4] = local_94[2];
            if (5 < iVar6) {
              iVar4 = local_40 + 0xbff;
              if (-1 < local_40 + 0x400) {
                iVar4 = local_40 + 0x400;
              }
              iVar4 = ((iVar4 >> 0xb) - iVar2) * 0x800;
              iVar10 = iVar4 + 0x80;
              iVar4 = iVar4 + 0x17f;
              if (-1 < iVar10) {
                iVar4 = iVar10;
              }
              uVar3 = iVar4 >> 8;
              if (0x7ffe < (int)uVar3) {
                uVar3 = 0x7fff;
              }
              if ((int)uVar3 < -0x8000) {
                uVar3 = 0xffff8000;
              }
              param_4[5] = uVar3;
              uVar5 = uVar3 * 0x100;
              uVar9 = uVar5 & ~((int)uVar5 >> 0x20);
              if ((char)((uVar3 & 0xffffff) >> 0x17) != '\0') {
                uVar9 = uVar5 + 0x7ff;
              }
              if (0x7fff < (int)local_94[3]) {
                local_94[3] = 0x7fff;
                local_94[3] = 0x7fff;
              }
              param_3[5] = local_94[3];
              if (6 < iVar6) {
                iVar6 = local_3c + 0x400;
                if (local_3c + 0x400 < 0) {
                  iVar6 = local_3c + 0xbff;
                }
                iVar6 = ((iVar6 >> 0xb) - (iVar2 + ((int)uVar9 >> 0xb))) * 0x800;
                iVar2 = iVar6 + 0x80;
                if (iVar2 < 0) {
                  iVar2 = iVar6 + 0x17f;
                }
                iVar2 = iVar2 >> 8;
                if (0x7ffe < iVar2) {
                  iVar2 = 0x7fff;
                }
                if (iVar2 < -0x8000) {
                  param_4[6] = -0x8000;
                }
                else {
                  param_4[6] = iVar2;
                }
                if ((int)local_94[4] < 0x8000) {
                  param_3[6] = local_94[4];
                }
                else {
                  param_3[6] = 0x7fff;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar3 = -(param_1 / 6) - 4;
  if (uVar3 == 6) {
    iVar2 = (local_cc[6 - param_1 % 6] << 0xf) >> 0xf;
    param_5[1] = iVar2;
  }
  else {
    if ((int)uVar3 < 2) {
      iVar2 = 0x1000;
    }
    else {
      uVar3 = -(param_1 / 6) - 6;
      iVar2 = 0x4000;
    }
    iVar6 = local_cc[6 - param_1 % 6];
    iVar4 = 0x1000 << (uVar3 & 0xff);
    *param_5 = iVar4;
    iVar2 = iVar6 * iVar2 >> 0xf;
    param_5[1] = iVar2;
    if (iVar4 < 0x8000) goto LAB_000f6d86;
  }
  *param_5 = 0x7fff;
LAB_000f6d86:
  if (0x7fff < iVar2) {
    param_5[1] = 0x7fff;
  }
  return;
}

