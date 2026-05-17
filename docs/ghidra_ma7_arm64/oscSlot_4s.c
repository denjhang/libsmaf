/* oscSlot_4s @ 0013d85c 1832B */


/* ARM::CStmSynth::oscSlot_4s(ARM::_tagSTSLOTINFO*, ARM::_tagSTEREOOUT*) */

void ARM::CStmSynth::oscSlot_4s(_tagSTSLOTINFO *param_1,_tagSTEREOOUT *param_2)

{
  uint uVar1;
  _tagSTSLOTINFO _Var2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int local_28 [8];
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_2 == (_tagSTEREOOUT *)0x0) {
    iVar7 = *(int *)(param_1 + 0xdc);
    if (iVar7 == 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x10);
      _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
      uVar11 = (byte)_Var2 & 0xf;
      local_28[0] = 0x3980;
      local_28[1] = 0x3980;
      local_28[2] = 0x3980;
      local_28[3] = 0x3980;
      local_28[6] = 0x8000;
      local_28[4] = 0x4cc0;
      local_28[5] = 0x6640;
      local_28[7] = 0x9980;
      uVar14 = uVar12 * local_28[(int)((byte)_Var2 & 7)];
      uVar6 = uVar14 >> 0xe;
      uVar1 = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
      iVar8 = ((uVar12 >> 3) + (uVar12 >> 2) * ((byte)_Var2 & 1) + (uVar11 >> 2 & 1) * uVar12 +
               (uVar11 >> 1 & 1) * (uVar12 >> 1) ^ -(uVar11 >> 3)) + (uVar11 >> 3) +
              *(int *)(param_1 + 0x14);
      *(uint *)(param_1 + 0xd4) = uVar1;
      *(int *)(param_1 + 0xdc) = iVar7 + -1;
      *(uint *)(param_1 + 0x24) = (uint)(byte)_Var2;
      *(int *)(param_1 + 0x14) = iVar8;
      if (uVar6 < 0x7f) {
        uVar6 = 0x7f;
        uVar14 = 0xf;
        *(undefined4 *)(param_1 + 0x10) = 0x7f;
        uVar12 = 0x1f;
        uVar11 = 0x3f;
      }
      else if (uVar6 < 0x6001) {
        *(uint *)(param_1 + 0x10) = uVar6;
        uVar11 = uVar14 >> 0xf;
        uVar12 = uVar14 >> 0x10;
        uVar14 = uVar14 >> 0x11;
      }
      else {
        uVar6 = 0x6000;
        uVar14 = 0xc00;
        *(undefined4 *)(param_1 + 0x10) = 0x6000;
        uVar12 = 0x1800;
        uVar11 = 0x3000;
      }
      if (iVar8 < 0x8000) {
        if (iVar8 < -0x8000) {
          iVar8 = -0x8000;
          *(undefined4 *)(param_1 + 0x14) = 0xffff8000;
        }
      }
      else {
        iVar8 = 0x7fff;
        *(undefined4 *)(param_1 + 0x14) = 0x7fff;
      }
      uVar13 = *(uint *)(param_1 + 0x18);
      local_28[0] = 0x3980;
      local_28[1] = 0x3980;
      local_28[2] = 0x3980;
      local_28[3] = 0x3980;
      local_28[4] = 0x4cc0;
      local_28[5] = 0x6640;
      local_28[6] = 0x8000;
      local_28[7] = 0x9980;
      uVar16 = uVar13 * local_28[(int)((byte)_Var2 >> 4 & 7)];
      *(int *)(param_1 + 0x28) = iVar8;
      uVar15 = uVar16 >> 0xe;
      iVar10 = ((uVar13 >> 3) + ((byte)_Var2 >> 4 & 1) * (uVar13 >> 2) +
                ((byte)_Var2 >> 6 & 1) * uVar13 + ((byte)_Var2 >> 5 & 1) * (uVar13 >> 1) ^
               -(uint)((byte)_Var2 >> 7)) + (uint)((byte)_Var2 >> 7) + *(int *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x1c) = iVar10;
      if (uVar15 < 0x7f) {
        uVar15 = 0x7f;
        uVar16 = 0xf;
        *(undefined4 *)(param_1 + 0x18) = 0x7f;
        uVar17 = 0x1f;
        uVar13 = 0x3f;
      }
      else if (uVar15 < 0x6001) {
        *(uint *)(param_1 + 0x18) = uVar15;
        uVar13 = uVar16 >> 0xf;
        uVar17 = uVar16 >> 0x10;
        uVar16 = uVar16 >> 0x11;
      }
      else {
        uVar15 = 0x6000;
        uVar16 = 0xc00;
        *(undefined4 *)(param_1 + 0x18) = 0x6000;
        uVar17 = 0x1800;
        uVar13 = 0x3000;
      }
      if (iVar10 < 0x8000) {
        if (iVar10 < -0x8000) {
          iVar10 = -0x8000;
          *(undefined4 *)(param_1 + 0x1c) = 0xffff8000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1c) = 0x7fff;
        iVar10 = 0x7fff;
      }
      *(int *)(param_1 + 0x30) = iVar10;
      if (iVar7 + -1 == 0) {
        uVar9 = (ulong)*(uint *)(param_1 + 0x40);
      }
      else {
        uVar9 = (ulong)(byte)param_1[(ulong)uVar1 + 0xe8];
        *(int *)(param_1 + 0xdc) = iVar7 + -2;
        *(uint *)(param_1 + 0xd4) = uVar1 + 1 & *(uint *)(param_1 + 0xe0);
      }
      uVar5 = (uint)uVar9;
      uVar1 = uVar5 & 0xf;
      local_28[0] = 0x3980;
      local_28[4] = 0x4cc0;
      local_28[1] = 0x3980;
      local_28[2] = 0x3980;
      local_28[3] = 0x3980;
      local_28[5] = 0x6640;
      local_28[6] = 0x8000;
      local_28[7] = 0x9980;
      iVar7 = local_28[(int)(uVar5 & 7)];
      *(uint *)(param_1 + 0x24) = uVar5;
      uVar4 = uVar6 * iVar7 >> 0xe;
      iVar8 = (uVar14 + (uVar5 & 1) * uVar12 + (uVar1 >> 2 & 1) * uVar6 + (uVar1 >> 1 & 1) * uVar11
              ^ -(uVar1 >> 3)) + (uVar1 >> 3) + iVar8;
      *(int *)(param_1 + 0x14) = iVar8;
      if (uVar4 < 0x7f) {
        *(undefined4 *)(param_1 + 0x10) = 0x7f;
      }
      else {
        if (0x6000 < uVar4) {
          uVar4 = 0x6000;
        }
        *(uint *)(param_1 + 0x10) = uVar4;
      }
      if (iVar8 < 0x8000) {
        if (iVar8 < -0x8000) {
          iVar8 = -0x8000;
          *(undefined4 *)(param_1 + 0x14) = 0xffff8000;
        }
      }
      else {
        iVar8 = 0x7fff;
        *(undefined4 *)(param_1 + 0x14) = 0x7fff;
      }
      uVar1 = (uint)(uVar9 >> 4);
      local_28[0] = 0x3980;
      local_28[1] = 0x3980;
      local_28[2] = 0x3980;
      local_28[3] = 0x3980;
      local_28[4] = 0x4cc0;
      uVar12 = (uint)(uVar9 >> 7) & 1;
      local_28[5] = 0x6640;
      local_28[6] = 0x8000;
      local_28[7] = 0x9980;
      iVar7 = local_28[(int)(uVar1 & 7)];
      *(int *)(param_1 + 0x2c) = iVar8;
      uVar11 = uVar15 * iVar7 >> 0xe;
      iVar10 = (uVar16 + (uVar1 & 1) * uVar17 + ((uint)(uVar9 >> 6) & 1) * uVar15 +
                ((uint)(uVar9 >> 5) & 1) * uVar13 ^ -uVar12) + uVar12 + iVar10;
      *(int *)(param_1 + 0x1c) = iVar10;
      if (uVar11 < 0x7f) {
        *(undefined4 *)(param_1 + 0x18) = 0x7f;
      }
      else if (uVar11 < 0x6001) {
        *(uint *)(param_1 + 0x18) = uVar11;
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0x6000;
      }
      if (iVar10 < 0x8000) {
        if (iVar10 < -0x8000) {
          iVar10 = -0x8000;
          *(undefined4 *)(param_1 + 0x1c) = 0xffff8000;
        }
        *(int *)(param_1 + 0x34) = iVar10;
      }
      else {
        *(undefined4 *)(param_1 + 0x1c) = 0x7fff;
        *(undefined4 *)(param_1 + 0x34) = 0x7fff;
      }
    }
    goto LAB_0013dae8;
  }
  uVar11 = *(uint *)(param_1 + 0xa0);
  uVar12 = uVar11 >> 0x10;
  uVar1 = uVar11 & 0xffff;
  uVar9 = (ulong)(uVar12 & 1);
  iVar7 = *(int *)(param_1 + uVar9 * 4 + 0x28);
  iVar8 = *(int *)(param_1 + uVar9 * 4 + 0x30);
  if (uVar1 != 0) {
    uVar3 = (ulong)(uVar12 + 1) & 1;
    iVar7 = iVar7 + (int)((long)(*(int *)(param_1 + uVar3 * 4 + 0x28) - iVar7) * (ulong)uVar1 >>
                         0x10);
    iVar8 = iVar8 + (int)((ulong)uVar1 * (long)(*(int *)(param_1 + uVar3 * 4 + 0x30) - iVar8) >>
                         0x10);
  }
  iVar10 = *(int *)(param_1 + 0x9c);
  *(int *)(param_2 + 4) = iVar8;
  uVar11 = uVar11 + iVar10;
  *(int *)param_2 = iVar7;
  *(uint *)(param_1 + 0xa0) = uVar11;
  iVar7 = (uVar11 >> 0x10) - uVar12;
  if (iVar7 != 0) {
    iVar8 = *(int *)(param_1 + 0xdc);
    do {
      if (iVar8 == 0) {
        *(undefined4 *)(param_1 + uVar9 * 4 + 0x28) = 0;
        *(undefined4 *)(param_1 + uVar9 * 4 + 0x30) = 0;
      }
      else {
        uVar1 = *(uint *)(param_1 + 0x10);
        _Var2 = param_1[(ulong)*(uint *)(param_1 + 0xd4) + 0xe8];
        local_28[0] = 0x3980;
        uVar11 = (byte)_Var2 & 0xf;
        local_28[1] = 0x3980;
        local_28[2] = 0x3980;
        local_28[3] = 0x3980;
        local_28[4] = 0x4cc0;
        local_28[5] = 0x6640;
        local_28[6] = 0x8000;
        iVar8 = iVar8 + -1;
        local_28[7] = 0x9980;
        uVar12 = uVar1 * local_28[(int)((byte)_Var2 & 7)] >> 0xe;
        iVar10 = ((uVar1 >> 3) + (uVar1 >> 2) * ((byte)_Var2 & 1) + (uVar11 >> 2 & 1) * uVar1 +
                  (uVar11 >> 1 & 1) * (uVar1 >> 1) ^ -(uVar11 >> 3)) + (uVar11 >> 3) +
                 *(int *)(param_1 + 0x14);
        *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) + 1 & *(uint *)(param_1 + 0xe0);
        *(int *)(param_1 + 0xdc) = iVar8;
        *(uint *)(param_1 + 0x24) = (uint)(byte)_Var2;
        *(int *)(param_1 + 0x14) = iVar10;
        if (uVar12 < 0x7f) {
          *(undefined4 *)(param_1 + 0x10) = 0x7f;
          if (iVar10 < 0x8000) goto LAB_0013d9f0;
LAB_0013db54:
          *(undefined4 *)(param_1 + 0x14) = 0x7fff;
          iVar10 = 0x7fff;
        }
        else {
          uVar11 = 0x6000;
          if (uVar12 < 0x6001) {
            uVar11 = uVar12;
          }
          *(uint *)(param_1 + 0x10) = uVar11;
          if (0x7fff < iVar10) goto LAB_0013db54;
LAB_0013d9f0:
          if (iVar10 < -0x8000) {
            *(undefined4 *)(param_1 + 0x14) = 0xffff8000;
            iVar10 = -0x8000;
          }
        }
        local_28[0] = 0x3980;
        *(int *)(param_1 + uVar9 * 4 + 0x28) = iVar10;
        local_28[1] = 0x3980;
        uVar11 = *(uint *)(param_1 + 0x18);
        local_28[2] = 0x3980;
        local_28[3] = 0x3980;
        local_28[4] = 0x4cc0;
        local_28[5] = 0x6640;
        local_28[6] = 0x8000;
        local_28[7] = 0x9980;
        uVar1 = uVar11 * local_28[(int)((byte)_Var2 >> 4 & 7)] >> 0xe;
        iVar10 = ((uVar11 >> 3) + ((byte)_Var2 >> 4 & 1) * (uVar11 >> 2) +
                  ((byte)_Var2 >> 6 & 1) * uVar11 + ((byte)_Var2 >> 5 & 1) * (uVar11 >> 1) ^
                 -(uint)((byte)_Var2 >> 7)) + (uint)((byte)_Var2 >> 7) + *(int *)(param_1 + 0x1c);
        *(int *)(param_1 + 0x1c) = iVar10;
        if (uVar1 < 0x7f) {
          *(undefined4 *)(param_1 + 0x18) = 0x7f;
          if (iVar10 < 0x8000) goto LAB_0013da98;
LAB_0013db34:
          *(undefined4 *)(param_1 + 0x1c) = 0x7fff;
          iVar10 = 0x7fff;
        }
        else {
          uVar11 = 0x6000;
          if (uVar1 < 0x6001) {
            uVar11 = uVar1;
          }
          *(uint *)(param_1 + 0x18) = uVar11;
          if (0x7fff < iVar10) goto LAB_0013db34;
LAB_0013da98:
          if (iVar10 < -0x8000) {
            *(undefined4 *)(param_1 + 0x1c) = 0xffff8000;
            iVar10 = -0x8000;
          }
        }
        *(int *)(param_1 + uVar9 * 4 + 0x30) = iVar10;
      }
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) goto LAB_0013dadc;
      uVar9 = (ulong)((int)uVar9 + 1U & 1);
    } while( true );
  }
  goto LAB_0013dae0;
LAB_0013dadc:
  uVar11 = *(uint *)(param_1 + 0xa0);
LAB_0013dae0:
  *(uint *)(param_1 + 0xa0) = uVar11 & 0x1ffff;
LAB_0013dae8:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

