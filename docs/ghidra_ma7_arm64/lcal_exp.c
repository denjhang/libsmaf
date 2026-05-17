/* lcal_exp @ 00241618 3108B */


/* YAMAHA::lcal_exp(int, unsigned int, int*, int*, int*, int) */

void YAMAHA::lcal_exp(int param_1,uint param_2,int *param_3,int *param_4,int *param_5,int param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  size_t __n;
  int aiStack_bc [7];
  uint local_a0 [14];
  uint auStack_68 [6];
  int local_50;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  long local_8;
  
  iVar13 = param_6 + 1;
  local_a0[7] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[10] = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  *param_4 = 0x80;
  local_a0[6] = 0;
  local_a0[0] = 0x8000;
  local_a0[1] = 0x8f9e;
  local_a0[2] = 0xa124;
  local_a0[3] = 0xb4ce;
  local_a0[4] = 0xcade;
  local_a0[5] = 0xe39f;
  *param_3 = 0;
  local_a0[0xb] = 0;
  local_a0[0xc] = 0;
  if (((0 < iVar13) && (local_a0[7] = 1, local_a0[8] = 0, iVar13 != 1)) &&
     (local_a0[7] = 1, local_a0[8] = 1, iVar13 != 2)) {
    local_a0[9] = 1;
    local_a0[10] = 0;
    if (iVar13 != 3) {
      local_a0[9] = 1;
      local_a0[10] = 1;
      if (iVar13 != 4) {
        local_a0[0xb] = 1;
        local_a0[0xc] = 0;
        if (iVar13 != 5) {
          local_a0[0xb] = 1;
          local_a0[0xc] = 1;
        }
      }
    }
  }
  aiStack_bc[1] = 0xffffffe8;
  if (((param_6 < 2) || (aiStack_bc[2] = -0x1e, param_6 == 2)) ||
     ((aiStack_bc[3] = -0x24, param_6 == 3 || (aiStack_bc[4] = -0x2a, param_6 == 4)))) {
    iVar11 = aiStack_bc[param_6];
    aiStack_bc[(long)param_6 + 1] = iVar11;
    if (iVar13 < 5) {
      aiStack_bc[(long)iVar13 + 1] = iVar11;
      if (param_6 + 2 != 5) {
        aiStack_bc[(long)(param_6 + 2) + 1] = iVar11;
        if (param_6 + 3 != 5) {
          aiStack_bc[(long)(param_6 + 3) + 1] = iVar11;
          if (param_6 + 4 != 5) {
            aiStack_bc[(long)(param_6 + 4) + 1] = iVar11;
          }
        }
      }
    }
    if (0 < param_6) {
      uVar12 = 0x8000;
      uVar5 = (short)aiStack_bc[1] * 100;
      iVar11 = (int)(short)uVar5;
      if (iVar11 < 0) goto LAB_00241f28;
      goto LAB_00241758;
    }
  }
  else {
    aiStack_bc[5] = -0x30;
    uVar5 = 0xf6a0;
    iVar11 = -0x960;
LAB_00241f28:
    uVar12 = 0;
    if (-0x25e5 < iVar11) {
      iVar11 = -iVar11 >> 6;
      uVar12 = -(uint)uVar5 & 0x3f;
      if (iVar11 == 0) {
        uVar12 = (uint)((int)(uVar12 * -0x918 + 0x200000) >> 5) >> 1;
      }
      else {
        uVar12 = (uint)((int)(uVar12 * (int)*(short *)(&DAT_00535910 + (long)(iVar11 + 1) * 2) +
                             (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) * (0x40 - uVar12)) >>
                       5) >> 1;
      }
    }
LAB_00241758:
    local_a0[7] = uVar12;
    if (1 < param_6) {
      local_a0[8] = 0x8000;
      iVar11 = (int)(short)(aiStack_bc[2] * 100);
      if ((iVar11 < 0) && (local_a0[8] = 0, -0x25e5 < iVar11)) {
        iVar11 = -iVar11 >> 6;
        uVar8 = -(aiStack_bc[2] * 100 & 0xffffU) & 0x3f;
        if (iVar11 == 0) {
          local_a0[8] = (uint)((int)(uVar8 * -0x918 + 0x200000) >> 5) >> 1;
        }
        else {
          local_a0[8] = (uint)((int)(uVar8 * (int)*(short *)(&DAT_00535910 + (long)(iVar11 + 1) * 2)
                                    + (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) *
                                      (0x40 - uVar8)) >> 5) >> 1;
        }
      }
      if (param_6 != 2) {
        local_a0[9] = 0x8000;
        iVar11 = (int)(short)(aiStack_bc[3] * 100);
        if ((iVar11 < 0) && (local_a0[9] = 0, -0x25e5 < iVar11)) {
          iVar11 = -iVar11 >> 6;
          uVar12 = -(aiStack_bc[3] * 100 & 0xffffU) & 0x3f;
          if (iVar11 == 0) {
            local_a0[9] = (uint)((int)(uVar12 * -0x918 + 0x200000) >> 5) >> 1;
          }
          else {
            local_a0[9] = (uint)((int)(uVar12 * (int)*(short *)(&DAT_00535910 +
                                                               (long)(iVar11 + 1) * 2) +
                                      (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) *
                                      (0x40 - uVar12)) >> 5) >> 1;
          }
        }
        if (param_6 != 3) {
          local_a0[10] = 0x8000;
          iVar11 = (int)(short)(aiStack_bc[4] * 100);
          if ((iVar11 < 0) && (local_a0[10] = 0, -0x25e5 < iVar11)) {
            iVar11 = -iVar11 >> 6;
            uVar12 = -(aiStack_bc[4] * 100 & 0xffffU) & 0x3f;
            if (iVar11 == 0) {
              local_a0[10] = (uint)((int)(uVar12 * -0x918 + 0x200000) >> 5) >> 1;
            }
            else {
              local_a0[10] = (uint)((int)(uVar12 * (int)*(short *)(&DAT_00535910 +
                                                                  (long)(iVar11 + 1) * 2) +
                                         (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) *
                                         (0x40 - uVar12)) >> 5) >> 1;
            }
          }
          if (param_6 != 4) {
            local_a0[0xb] = 0x8000;
            iVar11 = (int)(short)(aiStack_bc[5] * 100);
            if ((iVar11 < 0) && (local_a0[0xb] = 0, -0x25e5 < iVar11)) {
              iVar11 = -iVar11 >> 6;
              uVar12 = -(aiStack_bc[5] * 100 & 0xffffU) & 0x3f;
              if (iVar11 == 0) {
                local_a0[0xb] = (uint)((int)(uVar12 * -0x918 + 0x200000) >> 5) >> 1;
              }
              else {
                local_a0[0xb] =
                     (uint)((int)(uVar12 * (int)*(short *)(&DAT_00535910 + (long)(iVar11 + 1) * 2) +
                                 (int)*(short *)(&DAT_00535910 + (long)iVar11 * 2) * (0x40 - uVar12)
                                 ) >> 5) >> 1;
              }
            }
          }
        }
      }
    }
  }
  auStack_68[1] = local_a0[7];
  if (param_2 == 10) {
    if (1 < iVar13) {
      uVar9 = (ulong)(param_6 - 1);
      memcpy(auStack_68 + 2,local_a0 + 8,(uVar9 + 1) * 4);
      goto LAB_00241970;
    }
  }
  else {
    uVar12 = local_a0[7] + 0x7f;
    if (-1 < (int)local_a0[7]) {
      uVar12 = local_a0[7];
    }
    uVar8 = uVar12 >> 7 & 0xffff;
    uVar12 = local_a0[7] + uVar8 * -0x80 & 0x7fff;
    iVar11 = uVar12 * 2;
    if (1 < iVar13) {
      puVar7 = local_a0 + 8;
      uVar9 = (ulong)(param_6 - 1);
      iVar3 = iVar11 * *(short *)(&UNK_00535a50 + (long)(int)uVar8 * 2);
      iVar11 = (iVar11 + -0x100) * (int)*(short *)(&UNK_00535a50 + (long)(int)(uVar8 - 1) * 2) -
               iVar3 >> 8;
      iVar3 = ((int)(iVar3 + (uVar12 * -2 + 0x100) *
                             (int)*(short *)(&UNK_00535a50 + (long)(int)(uVar8 - 1) * 2)) >> 8) * 10
      ;
      puVar10 = auStack_68 + 2;
      do {
        while( true ) {
          uVar12 = *puVar7;
          uVar8 = uVar12 + 0x7f;
          if (-1 < (int)uVar12) {
            uVar8 = uVar12;
          }
          if (((int)uVar8 >> 7 & 0xffffU) != 0) break;
          uVar8 = uVar12 >> 7 & 0x1ff;
          uVar12 = uVar12 & 0x7f;
          if (uVar8 == 0) {
            uVar8 = (uint)*(ushort *)(&UNK_00535e70 + (long)(int)uVar12 * 2);
          }
          else {
            uVar8 = (0x80 - uVar12) * (int)*(short *)(&UNK_00535c60 + (long)(int)uVar8 * 2) +
                    (int)*(short *)(&UNK_00535c60 + (long)(int)(uVar8 + 1) * 2) * uVar12 >> 7 &
                    0xffff;
          }
          uVar12 = 0;
          iVar4 = (int)(iVar3 + (uVar8 * 5 + iVar11) * param_2) / 0x32;
          if (((-0x8001 < iVar4) && (uVar12 = 0x8000, iVar4 < 0)) &&
             (uVar12 = 0, -0x25e5 < (short)iVar4)) {
            iVar2 = -iVar4 >> 6;
            uVar12 = -iVar4 & 0x3f;
            if (iVar2 == 0) {
              uVar12 = (uint)((int)(uVar12 * -0x918 + 0x200000) >> 5) >> 1;
            }
            else {
              iVar4 = (int)(short)iVar2;
              uVar12 = (uint)((int)(uVar12 * (int)*(short *)(&DAT_00535910 + (long)(iVar4 + 1) * 2)
                                   + (int)*(short *)(&DAT_00535910 + (long)iVar4 * 2) *
                                     (0x40 - uVar12)) >> 5) >> 1;
            }
          }
LAB_0024195c:
          *puVar10 = uVar12;
          puVar10 = puVar10 + 1;
          puVar7 = puVar7 + 1;
          if (puVar10 == auStack_68 + uVar9 + 3) goto LAB_00241970;
        }
        uVar8 = (int)uVar8 >> 7 & 0xffff;
        uVar6 = uVar12 + uVar8 * -0x80 & 0x7fff;
        uVar12 = 0x8000;
        iVar2 = (int)(iVar3 + (iVar11 + ((int)(uVar6 * 2 *
                                               (int)*(short *)(&UNK_00535a50 + (long)(int)uVar8 * 2)
                                              + (int)*(short *)(&UNK_00535a50 +
                                                               (long)(int)(uVar8 - 1) * 2) *
                                                (uVar6 * -2 + 0x100)) >> 8)) * param_2) / 0x32;
        iVar4 = (int)(short)iVar2;
        if ((-1 < iVar4) || (uVar12 = 0, iVar4 < -0x25e4)) goto LAB_0024195c;
        iVar4 = -iVar4 >> 6;
        uVar12 = -iVar2 & 0x3f;
        if (iVar4 == 0) {
          uVar12 = (uint)((int)(uVar12 * -0x918 + 0x200000) >> 5) >> 1;
          goto LAB_0024195c;
        }
        puVar1 = puVar10 + 1;
        puVar7 = puVar7 + 1;
        *puVar10 = (uint)((int)(uVar12 * (int)*(short *)(&DAT_00535910 + (long)(iVar4 + 1) * 2) +
                               (int)*(short *)(&DAT_00535910 + (long)iVar4 * 2) * (0x40 - uVar12))
                         >> 5) >> 1;
        puVar10 = puVar1;
      } while (puVar1 != auStack_68 + uVar9 + 3);
LAB_00241970:
      __n = (uVar9 + 1) * 4;
      if (param_6 < 1) {
        __n = 4;
      }
      local_38 = 0;
      memset(&local_34,0,__n);
      uVar12 = local_a0[8];
      if (local_a0[7] != local_a0[8]) {
        iVar11 = 0;
        if (local_a0[8] != 0) {
          iVar11 = (int)(auStack_68[2] << 0xf) / (int)local_a0[8];
        }
        iVar3 = 0;
        if (local_a0[7] != 0) {
          iVar3 = (int)(auStack_68[1] << 0xf) / (int)local_a0[7];
        }
        local_34 = 0;
        if (local_a0[7] - local_a0[8] != 0) {
          local_34 = ((iVar11 - iVar3) * 0x8000) / (int)(local_a0[7] - local_a0[8]);
        }
      }
      if (2 < iVar13) {
        if (local_a0[9] != local_a0[8]) {
          iVar11 = 0;
          if (local_a0[9] != 0) {
            iVar11 = (int)(auStack_68[3] << 0xf) / (int)local_a0[9];
          }
          iVar3 = 0;
          if (local_a0[8] != 0) {
            iVar3 = (int)(auStack_68[2] << 0xf) / (int)local_a0[8];
          }
          local_30 = 0;
          if (local_a0[8] - local_a0[9] != 0) {
            local_30 = ((iVar11 - iVar3) * 0x8000) / (int)(local_a0[8] - local_a0[9]);
          }
        }
        if (iVar13 != 3) {
          if (local_a0[10] != local_a0[9]) {
            iVar11 = 0;
            if (local_a0[10] != 0) {
              iVar11 = (int)(auStack_68[4] << 0xf) / (int)local_a0[10];
            }
            iVar3 = 0;
            if (local_a0[9] != 0) {
              iVar3 = (int)(auStack_68[3] << 0xf) / (int)local_a0[9];
            }
            local_2c = 0;
            if (local_a0[9] - local_a0[10] != 0) {
              local_2c = ((iVar11 - iVar3) * 0x8000) / (int)(local_a0[9] - local_a0[10]);
            }
          }
          if (iVar13 != 4) {
            if (local_a0[0xb] != local_a0[10]) {
              iVar11 = 0;
              if (local_a0[0xb] != 0) {
                iVar11 = (int)(auStack_68[5] << 0xf) / (int)local_a0[0xb];
              }
              iVar3 = 0;
              if (local_a0[10] != 0) {
                iVar3 = (int)(auStack_68[4] << 0xf) / (int)local_a0[10];
              }
              local_28 = 0;
              if (local_a0[10] - local_a0[0xb] != 0) {
                local_28 = ((iVar11 - iVar3) * 0x8000) / (int)(local_a0[10] - local_a0[0xb]);
              }
            }
            if ((iVar13 != 5) && (local_a0[0xc] != local_a0[0xb])) {
              iVar11 = 0;
              if (local_a0[0xc] != 0) {
                iVar11 = (local_50 << 0xf) / (int)local_a0[0xc];
              }
              iVar3 = 0;
              if (local_a0[0xb] != 0) {
                iVar3 = (int)(auStack_68[5] << 0xf) / (int)local_a0[0xb];
              }
              local_24 = 0;
              if (local_a0[0xb] - local_a0[0xc] != 0) {
                local_24 = ((iVar11 - iVar3) * 0x8000) / (int)(local_a0[0xb] - local_a0[0xc]);
              }
            }
          }
        }
      }
      uVar8 = local_34 + 0xbff;
      if (-1 < (int)(local_34 + 0x400U)) {
        uVar8 = local_34 + 0x400U;
      }
      iVar11 = (uVar8 & 0xfffff800) + 0x80;
      iVar3 = (uVar8 & 0xfffff800) + 0x17f;
      if (-1 < iVar11) {
        iVar3 = iVar11;
      }
      iVar3 = iVar3 >> 8;
      if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      param_4[1] = iVar3;
      iVar3 = iVar3 * 0x100;
      iVar11 = iVar3 + 0x7ff;
      if (-1 < iVar3) {
        iVar11 = iVar3;
      }
      uVar8 = local_a0[7];
      if (0x7fff < (int)local_a0[7]) {
        local_a0[7] = 0x7fff;
        uVar8 = 0x7fff;
      }
      param_3[1] = uVar8;
      if (2 < iVar13) {
        iVar3 = local_30 + 0xbff;
        if (-1 < local_30 + 0x400) {
          iVar3 = local_30 + 0x400;
        }
        iVar4 = ((iVar3 >> 0xb) - (iVar11 >> 0xb)) * 0x800;
        iVar3 = iVar4 + 0x80;
        iVar4 = iVar4 + 0x17f;
        if (-1 < iVar3) {
          iVar4 = iVar3;
        }
        iVar4 = iVar4 >> 8;
        if (0x7fff < iVar4) {
          iVar4 = 0x7fff;
        }
        if (iVar4 < -0x8000) {
          iVar4 = -0x8000;
        }
        param_4[2] = iVar4;
        iVar4 = iVar4 * 0x100;
        iVar3 = iVar4 + 0x7ff;
        if (-1 < iVar4) {
          iVar3 = iVar4;
        }
        iVar11 = (iVar11 >> 0xb) + (iVar3 >> 0xb);
        if (0x7fff < (int)uVar12) {
          local_a0[8] = 0x7fff;
          uVar12 = 0x7fff;
        }
        param_3[2] = uVar12;
        if (iVar13 != 3) {
          iVar3 = local_2c + 0xbff;
          if (-1 < local_2c + 0x400) {
            iVar3 = local_2c + 0x400;
          }
          iVar4 = ((iVar3 >> 0xb) - iVar11) * 0x800;
          iVar3 = iVar4 + 0x80;
          iVar4 = iVar4 + 0x17f;
          if (-1 < iVar3) {
            iVar4 = iVar3;
          }
          iVar4 = iVar4 >> 8;
          if (0x7fff < iVar4) {
            iVar4 = 0x7fff;
          }
          if (iVar4 < -0x8000) {
            iVar4 = -0x8000;
          }
          param_4[3] = iVar4;
          iVar4 = iVar4 * 0x100;
          iVar3 = iVar4 + 0x7ff;
          if (-1 < iVar4) {
            iVar3 = iVar4;
          }
          iVar11 = iVar11 + (iVar3 >> 0xb);
          if (0x7fff < (int)local_a0[9]) {
            local_a0[9] = 0x7fff;
          }
          param_3[3] = local_a0[9];
          if (iVar13 != 4) {
            iVar3 = local_28 + 0xbff;
            if (-1 < local_28 + 0x400) {
              iVar3 = local_28 + 0x400;
            }
            iVar4 = ((iVar3 >> 0xb) - iVar11) * 0x800;
            iVar3 = iVar4 + 0x80;
            iVar4 = iVar4 + 0x17f;
            if (-1 < iVar3) {
              iVar4 = iVar3;
            }
            iVar4 = iVar4 >> 8;
            if (0x7fff < iVar4) {
              iVar4 = 0x7fff;
            }
            if (iVar4 < -0x8000) {
              iVar4 = -0x8000;
            }
            param_4[4] = iVar4;
            iVar4 = iVar4 * 0x100;
            iVar3 = iVar4 + 0x7ff;
            if (-1 < iVar4) {
              iVar3 = iVar4;
            }
            iVar11 = iVar11 + (iVar3 >> 0xb);
            if (0x7fff < (int)local_a0[10]) {
              local_a0[10] = 0x7fff;
            }
            param_3[4] = local_a0[10];
            if (iVar13 != 5) {
              iVar3 = local_24 + 0xbff;
              if (-1 < local_24 + 0x400) {
                iVar3 = local_24 + 0x400;
              }
              iVar4 = ((iVar3 >> 0xb) - iVar11) * 0x800;
              iVar3 = iVar4 + 0x80;
              iVar4 = iVar4 + 0x17f;
              if (-1 < iVar3) {
                iVar4 = iVar3;
              }
              iVar4 = iVar4 >> 8;
              if (0x7fff < iVar4) {
                iVar4 = 0x7fff;
              }
              if (iVar4 < -0x8000) {
                iVar4 = -0x8000;
              }
              param_4[5] = iVar4;
              iVar4 = iVar4 * 0x100;
              iVar3 = iVar4 + 0x7ff;
              if (-1 < iVar4) {
                iVar3 = iVar4;
              }
              if (0x7fff < (int)local_a0[0xb]) {
                local_a0[0xb] = 0x7fff;
              }
              param_3[5] = local_a0[0xb];
              if (iVar13 != 6) {
                iVar13 = local_20 + 0xbff;
                if (-1 < local_20 + 0x400) {
                  iVar13 = local_20 + 0x400;
                }
                iVar11 = ((iVar13 >> 0xb) - (iVar11 + (iVar3 >> 0xb))) * 0x800;
                iVar13 = iVar11 + 0x80;
                iVar11 = iVar11 + 0x17f;
                if (-1 < iVar13) {
                  iVar11 = iVar13;
                }
                iVar11 = iVar11 >> 8;
                if (0x7fff < iVar11) {
                  iVar11 = 0x7fff;
                }
                if (iVar11 < -0x8000) {
                  iVar11 = -0x8000;
                }
                param_4[6] = iVar11;
                uVar12 = local_a0[0xc];
                if (0x7ffe < (int)local_a0[0xc]) {
                  uVar12 = 0x7fff;
                }
                param_3[6] = uVar12;
              }
            }
          }
        }
      }
    }
  }
  uVar12 = -(param_1 / 6) - 4;
  if (uVar12 == 6) {
    iVar13 = (int)((long)((ulong)local_a0[-(param_1 % 6)] << 0x2f) >> 0x2f);
    param_5[1] = iVar13;
  }
  else {
    if ((int)uVar12 < 2) {
      iVar13 = 0x1000;
    }
    else {
      uVar12 = -(param_1 / 6) - 6;
      iVar13 = 0x4000;
    }
    iVar11 = 0x1000 << (ulong)(uVar12 & 0x1f);
    *param_5 = iVar11;
    iVar13 = (int)(iVar13 * local_a0[-(param_1 % 6)]) >> 0xf;
    param_5[1] = iVar13;
    if (iVar11 < 0x8000) goto LAB_00241dcc;
  }
  *param_5 = 0x7fff;
LAB_00241dcc:
  if (0x7fff < iVar13) {
    param_5[1] = 0x7fff;
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

