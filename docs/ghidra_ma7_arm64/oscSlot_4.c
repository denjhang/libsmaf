/* oscSlot_4 @ 0013d180 1756B */


/* ARM::CStmSynth::oscSlot_4(ARM::_tagSTSLOTINFO*, ARM::_tagSTEREOOUT*) */

void ARM::CStmSynth::oscSlot_4(_tagSTSLOTINFO *param_1,_tagSTEREOOUT *param_2)

{
  long lVar1;
  _tagSTSLOTINFO _Var2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  int local_28 [8];
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_2 == (_tagSTEREOOUT *)0x0) {
    if (*(int *)(param_1 + 0xdc) == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x10);
      _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
      uVar4 = (byte)_Var2 & 0xf;
      local_28[0] = 0x3980;
      local_28[1] = 0x3980;
      local_28[2] = 0x3980;
      local_28[3] = 0x3980;
      local_28[4] = 0x4cc0;
      local_28[5] = 0x6640;
      local_28[6] = 0x8000;
      local_28[7] = 0x9980;
      uVar8 = uVar9 * local_28[(int)((byte)_Var2 & 7)];
      uVar10 = uVar8 >> 0xe;
      iVar6 = ((uVar9 >> 3) + (uVar9 >> 2) * ((byte)_Var2 & 1) + (uVar4 >> 2 & 1) * uVar9 +
               (uVar4 >> 1 & 1) * (uVar9 >> 1) ^ -(uVar4 >> 3)) + (uVar4 >> 3) +
              *(int *)(param_1 + 0x14);
      *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + -1;
      *(uint *)(param_1 + 0x24) = (uint)(byte)_Var2;
      *(int *)(param_1 + 0x14) = iVar6;
      if (uVar10 < 0x7f) {
        uVar10 = 0x7f;
        uVar8 = 0xf;
        *(undefined4 *)(param_1 + 0x10) = 0x7f;
        uVar9 = 0x1f;
        uVar4 = 0x3f;
      }
      else if (uVar10 < 0x6001) {
        *(uint *)(param_1 + 0x10) = uVar10;
        uVar4 = uVar8 >> 0xf;
        uVar9 = uVar8 >> 0x10;
        uVar8 = uVar8 >> 0x11;
      }
      else {
        uVar10 = 0x6000;
        uVar8 = 0xc00;
        *(undefined4 *)(param_1 + 0x10) = 0x6000;
        uVar9 = 0x1800;
        uVar4 = 0x3000;
      }
      iVar5 = 0x7fff;
      if ((iVar6 < 0x8000) && (iVar5 = iVar6, iVar6 < -0x7fff)) {
        iVar5 = -0x8000;
      }
      local_28[0] = 0x3980;
      local_28[1] = 0x3980;
      local_28[2] = 0x3980;
      local_28[3] = 0x3980;
      local_28[4] = 0x4cc0;
      local_28[5] = 0x6640;
      local_28[6] = 0x8000;
      local_28[7] = 0x9980;
      iVar6 = local_28[(int)((byte)_Var2 >> 4 & 7)];
      *(int *)(param_1 + 0x28) = iVar5;
      uVar7 = uVar10 * iVar6 >> 0xe;
      iVar5 = (uVar4 * ((byte)_Var2 >> 5 & 1) + uVar10 * ((byte)_Var2 >> 6 & 1) + uVar8 +
               uVar9 * ((byte)_Var2 >> 4 & 1) ^ -(uint)((byte)_Var2 >> 7)) +
              (uint)((byte)_Var2 >> 7) + iVar5;
      *(int *)(param_1 + 0x14) = iVar5;
      if (uVar7 < 0x7f) {
        *(undefined4 *)(param_1 + 0x10) = 0x7f;
      }
      else {
        if (0x6000 < uVar7) {
          uVar7 = 0x6000;
        }
        *(uint *)(param_1 + 0x10) = uVar7;
      }
      if (iVar5 < 0x8000) {
        if (iVar5 < -0x8000) {
          iVar5 = -0x8000;
          *(undefined4 *)(param_1 + 0x14) = 0xffff8000;
        }
        *(int *)(param_1 + 0x2c) = iVar5;
      }
      else {
        *(undefined4 *)(param_1 + 0x14) = 0x7fff;
        *(undefined4 *)(param_1 + 0x2c) = 0x7fff;
      }
    }
  }
  else {
    uVar9 = *(uint *)(param_1 + 0xa0);
    uVar4 = uVar9 >> 0x10;
    uVar10 = uVar4 & 1;
    uVar12 = (ulong)uVar10;
    iVar6 = *(int *)(param_1 + (uVar12 + 8) * 4 + 8);
    if ((uVar9 & 0xffff) != 0) {
      iVar6 = iVar6 + (int)((long)(*(int *)(param_1 + (((ulong)(uVar4 + 1) & 1) + 8) * 4 + 8) -
                                  iVar6) * (ulong)(uVar9 & 0xffff) >> 0x10);
    }
    iVar5 = *(int *)(param_1 + 0x9c);
    *(int *)param_2 = iVar6;
    uVar9 = uVar9 + iVar5;
    *(int *)(param_2 + 4) = iVar6;
    uVar8 = uVar9 >> 0x10;
    *(uint *)(param_1 + 0xa0) = uVar9;
    if (uVar8 != uVar4) {
      if ((~uVar4 + uVar8 & 1) != 0) {
        if (uVar10 == 0) {
          iVar6 = *(int *)(param_1 + 0xdc);
          if (iVar6 != 0) {
            uVar7 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
            *(int *)(param_1 + 0xdc) = iVar6 + -1;
            *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
          }
          else {
            uVar7 = *(uint *)(param_1 + 0x40);
          }
          uVar11 = (uint)(iVar6 == 0);
          *(uint *)(param_1 + 0x20) = uVar11;
          uVar13 = (ulong)(uVar7 & 0xf);
          *(uint *)(param_1 + 0x24) = uVar7;
        }
        else {
          uVar11 = *(uint *)(param_1 + 0x20);
          uVar13 = (ulong)(*(uint *)(param_1 + 0x24) >> 4) & 0xf;
        }
        iVar6 = 0;
        if (uVar11 != 0) goto LAB_0013d2c8;
        uVar7 = *(uint *)(param_1 + 0x10);
        local_28[0] = 0x3980;
        local_28[1] = 0x3980;
        uVar11 = (uint)uVar13 >> 3;
        local_28[2] = 0x3980;
        local_28[3] = 0x3980;
        local_28[4] = 0x4cc0;
        local_28[5] = 0x6640;
        local_28[6] = 0x8000;
        local_28[7] = 0x9980;
        uVar3 = uVar7 * local_28[uVar13 & 7] >> 0xe;
        iVar6 = ((uVar7 >> 3) + ((uint)uVar13 & 1) * (uVar7 >> 2) +
                 ((uint)(uVar13 >> 2) & 1) * uVar7 + ((uint)(uVar13 >> 1) & 1) * (uVar7 >> 1) ^
                -uVar11) + uVar11 + *(int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = iVar6;
        if (uVar3 < 0x7f) {
          *(undefined4 *)(param_1 + 0x10) = 0x7f;
        }
        else {
          uVar7 = 0x6000;
          if (uVar3 < 0x6001) {
            uVar7 = uVar3;
          }
          *(uint *)(param_1 + 0x10) = uVar7;
        }
        if (iVar6 < 0x8000) {
          if (-0x8001 < iVar6) goto LAB_0013d2c8;
          *(undefined4 *)(param_1 + 0x14) = 0xffff8000;
          iVar6 = -0x8000;
          uVar12 = (ulong)uVar10;
          goto LAB_0013d2c8;
        }
        *(undefined4 *)(param_1 + 0x14) = 0x7fff;
        iVar6 = 0x7fff;
        uVar12 = (ulong)uVar10;
        goto LAB_0013d2c8;
      }
      if (uVar10 != 0) goto LAB_0013d2e0;
LAB_0013d220:
      if (*(int *)(param_1 + 0xdc) == 0) {
        uVar10 = *(uint *)(param_1 + 0x40);
        iVar6 = 1;
      }
      else {
        uVar10 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
        *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + -1;
        *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
        iVar6 = (int)uVar12;
      }
      *(int *)(param_1 + 0x20) = iVar6;
      uVar13 = (ulong)(uVar10 & 0xf);
      *(uint *)(param_1 + 0x24) = uVar10;
      iVar5 = 0;
      if (iVar6 == 0) goto LAB_0013d2f4;
LAB_0013d264:
      do {
        *(int *)(param_1 + (uVar12 + 8) * 4 + 8) = iVar5;
        while( true ) {
          uVar4 = uVar4 + 1;
          if (uVar4 == uVar8) goto LAB_0013d3a8;
          uVar10 = uVar4 & 1;
          uVar12 = (ulong)uVar10;
          if ((uVar4 & 1) == 0) {
            if (*(int *)(param_1 + 0xdc) == 0) {
              uVar7 = *(uint *)(param_1 + 0x40);
              uVar10 = 1;
            }
            else {
              uVar7 = (uint)(byte)param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
              *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + -1;
              *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
            }
            *(uint *)(param_1 + 0x20) = uVar10;
            uVar13 = (ulong)(uVar7 & 0xf);
            *(uint *)(param_1 + 0x24) = uVar7;
          }
          else {
            uVar10 = *(uint *)(param_1 + 0x20);
            uVar13 = (ulong)(*(uint *)(param_1 + 0x24) >> 4) & 0xf;
          }
          iVar6 = 0;
          if (uVar10 == 0) {
            uVar10 = *(uint *)(param_1 + 0x10);
            local_28[0] = 0x3980;
            local_28[1] = 0x3980;
            local_28[2] = 0x3980;
            iVar6 = (int)(uVar13 >> 3);
            local_28[3] = 0x3980;
            local_28[4] = 0x4cc0;
            local_28[5] = 0x6640;
            local_28[6] = 0x8000;
            local_28[7] = 0x9980;
            uVar7 = uVar10 * local_28[(int)((uint)uVar13 & 7)] >> 0xe;
            iVar6 = ((uVar10 >> 3) + ((uint)uVar13 & 1) * (uVar10 >> 2) +
                     ((uint)(uVar13 >> 2) & 1) * uVar10 + ((uint)(uVar13 >> 1) & 1) * (uVar10 >> 1)
                    ^ -iVar6) + iVar6 + *(int *)(param_1 + 0x14);
            *(int *)(param_1 + 0x14) = iVar6;
            if (uVar7 < 0x7f) {
              *(undefined4 *)(param_1 + 0x10) = 0x7f;
            }
            else {
              uVar10 = 0x6000;
              if (uVar7 < 0x6001) {
                uVar10 = uVar7;
              }
              *(uint *)(param_1 + 0x10) = uVar10;
            }
            if (iVar6 < 0x8000) {
              if (iVar6 < -0x8000) {
                *(undefined4 *)(param_1 + 0x14) = 0xffff8000;
                iVar6 = -0x8000;
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x14) = 0x7fff;
              iVar6 = 0x7fff;
            }
          }
LAB_0013d2c8:
          lVar1 = uVar12 + 8;
          uVar4 = uVar4 + 1;
          uVar12 = (ulong)(uVar4 & 1);
          *(int *)(param_1 + lVar1 * 4 + 8) = iVar6;
          if ((uVar4 & 1) == 0) goto LAB_0013d220;
LAB_0013d2e0:
          iVar5 = 0;
          uVar13 = (ulong)(*(uint *)(param_1 + 0x24) >> 4) & 0xf;
          if (*(int *)(param_1 + 0x20) != 0) goto LAB_0013d264;
LAB_0013d2f4:
          uVar10 = *(uint *)(param_1 + 0x10);
          local_28[0] = 0x3980;
          local_28[1] = 0x3980;
          local_28[2] = 0x3980;
          iVar6 = (int)(uVar13 >> 3);
          local_28[3] = 0x3980;
          local_28[4] = 0x4cc0;
          local_28[5] = 0x6640;
          local_28[6] = 0x8000;
          local_28[7] = 0x9980;
          uVar7 = uVar10 * local_28[(int)((uint)uVar13 & 7)] >> 0xe;
          iVar5 = ((uVar10 >> 3) + ((uint)uVar13 & 1) * (uVar10 >> 2) +
                   ((uint)(uVar13 >> 2) & 1) * uVar10 + ((uint)(uVar13 >> 1) & 1) * (uVar10 >> 1) ^
                  -iVar6) + iVar6 + *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar5;
          if (uVar7 < 0x7f) {
            *(undefined4 *)(param_1 + 0x10) = 0x7f;
          }
          else {
            uVar10 = 0x6000;
            if (uVar7 < 0x6001) {
              uVar10 = uVar7;
            }
            *(uint *)(param_1 + 0x10) = uVar10;
          }
          if (0x7fff < iVar5) break;
          if (-0x8001 < iVar5) goto LAB_0013d264;
          *(undefined4 *)(param_1 + 0x14) = 0xffff8000;
          *(undefined4 *)(param_1 + (uVar12 + 8) * 4 + 8) = 0xffff8000;
        }
        *(undefined4 *)(param_1 + 0x14) = 0x7fff;
        iVar5 = 0x7fff;
      } while( true );
    }
LAB_0013d3a8:
    *(uint *)(param_1 + 0xa0) = uVar9 & 0x1ffff;
  }
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

