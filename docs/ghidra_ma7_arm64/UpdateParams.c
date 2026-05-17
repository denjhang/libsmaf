/* UpdateParams @ 00147de0 1336B */


/* ARM::CCsmSynth::UpdateParams(ARM::_tagCSMSLOTINFO*) */

void __thiscall ARM::CCsmSynth::UpdateParams(CCsmSynth *this,_tagCSMSLOTINFO *param_1)

{
  uint uVar1;
  int iVar2;
  _tagCSMSLOTINFO _Var3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined *local_108 [4];
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  CCsmSynth *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  CCsmSynth *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  CCsmSynth *local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  memset(local_108,0,0x100);
  local_90 = this;
  local_108[0] = &DAT_00321a60;
  local_108[1] = &DAT_00322260;
  local_b8 = &DAT_00326a60;
  local_108[2] = &DAT_00322a60;
  local_b0 = &DAT_00327260;
  local_108[3] = &DAT_00323260;
  local_e8 = &DAT_00323a60;
  local_e0 = &DAT_00324260;
  local_d8 = &DAT_00324a60;
  local_d0 = &DAT_00325260;
  local_c8 = &DAT_00325a60;
  local_c0 = &DAT_00326260;
  local_a8 = &DAT_00327a60;
  local_a0 = &DAT_00328260;
  local_98 = &DAT_00328a60;
  local_88 = &DAT_00329260;
  local_80 = &DAT_00329a60;
  local_78 = &DAT_0032a260;
  local_70 = &DAT_0032aa60;
  local_68 = &DAT_0032b260;
  local_60 = &DAT_0032ba60;
  local_58 = &DAT_0032c260;
  local_48 = &DAT_0032ca60;
  local_40 = &DAT_0032d260;
  local_38 = &DAT_0032da60;
  local_30 = &DAT_0032e260;
  local_28 = &DAT_0032ea60;
  local_20 = &DAT_0032f260;
  local_18 = &DAT_0032fa60;
  local_50 = this + 0x800;
  local_10 = this + 0x1000;
  param_1[0x116] = param_1[0x105];
  _Var3 = param_1[0x106];
  param_1[0x120] = _Var3;
  if (_Var3 == (_tagCSMSLOTINFO)0x0) {
    uVar9 = (*(undefined4 **)(this + 0x19f0))[0x2c];
  }
  else {
    uVar9 = **(undefined4 **)(this + 0x19f0);
  }
  *(undefined4 *)(param_1 + 0x124) = uVar9;
  lVar7 = (((ulong)*(uint *)(param_1 + 0x11c) << ((ulong)*(uint *)(param_1 + 0x118) & 0x3f)) * 48000
           >> 0x14 & 0xffffffff) * (ulong)*(uint *)(param_1 + 0x134);
  uVar6 = (uint)((ulong)lVar7 >> 0x10);
  if (param_1[0x101] == (_tagCSMSLOTINFO)0x0) {
    lVar7 = (lVar7 >> 0x10 & 0xffffffffU) * (ulong)*(uint *)(param_1 + 300);
    uVar6 = (uint)((ulong)lVar7 >> 0x10);
    if (param_1[0x102] == (_tagCSMSLOTINFO)0x1) {
      uVar6 = (uint)((lVar7 >> 0x10 & 0xffffffffU) * (ulong)*(uint *)(param_1 + 0x130) >> 0x10);
    }
  }
  uVar1 = *(uint *)(this + 0x19d8);
  if (uVar6 == 0) {
    uVar6 = 1;
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = 0xbb80000 / uVar1;
  }
  uVar5 = 0;
  if (uVar6 != 0) {
    uVar5 = uVar1 / uVar6;
  }
  *(uint *)(param_1 + 0x140) = uVar5;
  *(uint *)(param_1 + 0x48) =
       (*(int *)(param_1 + 0x20) << (ulong)((byte)param_1[0x18] & 0x1f)) * uVar4;
  iVar2 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)param_1[0x10] & 0x7f) * 4);
  *(int *)(param_1 + 0x50) = iVar2;
  if (param_1[8] == (_tagCSMSLOTINFO)0x1) {
    *(int *)(param_1 + 0x50) = -iVar2;
  }
  puVar8 = &DAT_00321a60;
  if (_Var3 == (_tagCSMSLOTINFO)0x0) {
    puVar8 = local_108[(int)((byte)*param_1 & 0x1f)];
  }
  *(undefined **)(param_1 + 0x40) = puVar8;
  *(uint *)(param_1 + 0x60) =
       (*(int *)(param_1 + 0x24) << (ulong)((byte)param_1[0x19] & 0x1f)) * uVar4;
  iVar2 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)param_1[0x11] & 0x7f) * 4);
  *(int *)(param_1 + 0x68) = iVar2;
  if (param_1[9] == (_tagCSMSLOTINFO)0x1) {
    *(int *)(param_1 + 0x68) = -iVar2;
  }
  puVar8 = &DAT_00321a60;
  if (_Var3 == (_tagCSMSLOTINFO)0x0) {
    puVar8 = local_108[(int)((byte)param_1[1] & 0x1f)];
  }
  *(undefined **)(param_1 + 0x58) = puVar8;
  *(uint *)(param_1 + 0x78) =
       (*(int *)(param_1 + 0x28) << (ulong)((byte)param_1[0x1a] & 0x1f)) * uVar4;
  iVar2 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)param_1[0x12] & 0x7f) * 4);
  *(int *)(param_1 + 0x80) = iVar2;
  if (param_1[10] == (_tagCSMSLOTINFO)0x1) {
    *(int *)(param_1 + 0x80) = -iVar2;
  }
  puVar8 = &DAT_00321a60;
  if (_Var3 == (_tagCSMSLOTINFO)0x0) {
    puVar8 = local_108[(int)((byte)param_1[2] & 0x1f)];
  }
  *(undefined **)(param_1 + 0x70) = puVar8;
  *(uint *)(param_1 + 0x90) =
       (*(int *)(param_1 + 0x2c) << (ulong)((byte)param_1[0x1b] & 0x1f)) * uVar4;
  iVar2 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)param_1[0x13] & 0x7f) * 4);
  *(int *)(param_1 + 0x98) = iVar2;
  if (param_1[0xb] == (_tagCSMSLOTINFO)0x1) {
    *(int *)(param_1 + 0x98) = -iVar2;
  }
  puVar8 = &DAT_00321a60;
  if (_Var3 == (_tagCSMSLOTINFO)0x0) {
    puVar8 = local_108[(int)((byte)param_1[3] & 0x1f)];
  }
  *(undefined **)(param_1 + 0x88) = puVar8;
  *(uint *)(param_1 + 0xa8) =
       (*(int *)(param_1 + 0x30) << (ulong)((byte)param_1[0x1c] & 0x1f)) * uVar4;
  iVar2 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)param_1[0x14] & 0x7f) * 4);
  *(int *)(param_1 + 0xb0) = iVar2;
  if (param_1[0xc] == (_tagCSMSLOTINFO)0x1) {
    *(int *)(param_1 + 0xb0) = -iVar2;
  }
  puVar8 = &DAT_00321a60;
  if (_Var3 == (_tagCSMSLOTINFO)0x0) {
    puVar8 = local_108[(int)((byte)param_1[4] & 0x1f)];
  }
  *(undefined **)(param_1 + 0xa0) = puVar8;
  *(uint *)(param_1 + 0xc0) =
       (*(int *)(param_1 + 0x34) << (ulong)((byte)param_1[0x1d] & 0x1f)) * uVar4;
  iVar2 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)param_1[0x15] & 0x7f) * 4);
  *(int *)(param_1 + 200) = iVar2;
  if (param_1[0xd] == (_tagCSMSLOTINFO)0x1) {
    *(int *)(param_1 + 200) = -iVar2;
  }
  puVar8 = &DAT_00321a60;
  if (_Var3 == (_tagCSMSLOTINFO)0x0) {
    puVar8 = local_108[(int)((byte)param_1[5] & 0x1f)];
  }
  *(undefined **)(param_1 + 0xb8) = puVar8;
  *(uint *)(param_1 + 0xd8) =
       (*(int *)(param_1 + 0x38) << (ulong)((byte)param_1[0x1e] & 0x1f)) * uVar4;
  iVar2 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)param_1[0x16] & 0x7f) * 4);
  *(int *)(param_1 + 0xe0) = iVar2;
  if (param_1[0xe] == (_tagCSMSLOTINFO)0x1) {
    *(int *)(param_1 + 0xe0) = -iVar2;
  }
  puVar8 = &DAT_00321a60;
  if (_Var3 == (_tagCSMSLOTINFO)0x0) {
    puVar8 = local_108[(int)((byte)param_1[6] & 0x1f)];
  }
  *(undefined **)(param_1 + 0xd0) = puVar8;
  *(uint *)(param_1 + 0xf0) =
       (*(int *)(param_1 + 0x3c) << (ulong)((byte)param_1[0x1f] & 0x1f)) * uVar4;
  iVar2 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)param_1[0x17] & 0x7f) * 4);
  *(int *)(param_1 + 0xf8) = iVar2;
  if (param_1[0xf] == (_tagCSMSLOTINFO)0x1) {
    *(int *)(param_1 + 0xf8) = -iVar2;
  }
  puVar8 = &DAT_00321a60;
  if (_Var3 == (_tagCSMSLOTINFO)0x0) {
    puVar8 = local_108[(int)((byte)param_1[7] & 0x1f)];
  }
  *(undefined **)(param_1 + 0xe8) = puVar8;
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

