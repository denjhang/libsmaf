/* SetVoice @ 0015a3d8 672B */


/* ARM::CLpf::SetVoice(ARM::_tagAlInfo*) */

void __thiscall ARM::CLpf::SetVoice(CLpf *this,_tagAlInfo *param_1)

{
  uint uVar1;
  _tagAlInfo _Var2;
  CLpf CVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  
  this[0x51] = *(CLpf *)param_1;
  this[0x52] = *(CLpf *)(param_1 + 1);
  if (param_1[2] == (_tagAlInfo)0x1) {
    CVar3 = (CLpf)0x1;
  }
  else {
    CVar3 = (CLpf)(param_1[3] == (_tagAlInfo)0x1);
  }
  this[0x53] = CVar3;
  _Var2 = param_1[4];
  uVar8 = *(uint *)(param_1 + 8);
  *(uint *)(this + 0x88) = (byte)_Var2 & 0x1f;
  iVar11 = ((byte)_Var2 & 0x1f) + *(int *)(this + 0x54);
  if (0x1f < iVar11) {
    iVar11 = 0x1f;
  }
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  uVar12 = *(uint *)(param_1 + 0x18);
  lVar10 = *(long *)(this + 0x18);
  uVar6 = *(uint *)(param_1 + 0xc) & 0x1fff;
  uVar4 = *(uint *)(param_1 + 0x10) & 0x1fff;
  uVar1 = *(uint *)(param_1 + 0x14) & 0x1fff;
  uVar8 = uVar8 & 0x1fff;
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(PTR_sdQTbl_00567650 + (long)iVar11 * 4);
  uVar12 = uVar12 & 0x1fff;
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(lVar10 + ((ulong)(byte)param_1[0x1c] & 0x1f) * 4);
  *(undefined4 *)(this + 100) = *(undefined4 *)(lVar10 + ((ulong)(byte)param_1[0x1d] & 0x1f) * 4);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(lVar10 + ((ulong)(byte)param_1[0x1e] & 0x1f) * 4);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(lVar10 + ((ulong)(byte)param_1[0x1f] & 0x1f) * 4);
  *(uint *)(this + 0x8c) = uVar8;
  *(uint *)(this + 0x90) = uVar6;
  *(uint *)(this + 0x94) = uVar4;
  *(uint *)(this + 0x98) = uVar1;
  *(uint *)(this + 0x9c) = uVar12;
  if ((bool)CVar3) {
    iVar9 = *(int *)(this + 0x5c);
    uVar8 = uVar8 + iVar9;
    uVar6 = uVar6 + iVar9;
    uVar4 = uVar4 + iVar9;
    iVar11 = uVar1 + iVar9 + *(int *)(this + 0x58);
    uVar12 = uVar12 + iVar9;
    *(uint *)(this + 0x74) = uVar8;
    *(uint *)(this + 0x78) = uVar6;
    *(uint *)(this + 0x7c) = uVar4;
    *(int *)(this + 0x80) = iVar11;
    *(uint *)(this + 0x84) = uVar12;
  }
  else {
    *(uint *)(this + 0x74) = uVar8;
    iVar11 = uVar1 + *(int *)(this + 0x58);
    *(uint *)(this + 0x78) = uVar6;
    *(uint *)(this + 0x7c) = uVar4;
    *(int *)(this + 0x80) = iVar11;
    *(uint *)(this + 0x84) = uVar12;
  }
  if ((int)uVar8 < 8) {
    iVar9 = 0x100000;
    *(undefined4 *)(this + 0x74) = 8;
  }
  else if ((int)uVar8 < 0x1ff9) {
    iVar9 = uVar8 << 0x11;
  }
  else {
    *(undefined4 *)(this + 0x74) = 0x1ff8;
    iVar9 = 0x3ff00000;
  }
  if ((int)uVar6 < 8) {
    iVar7 = 0x100000;
    *(undefined4 *)(this + 0x78) = 8;
  }
  else if ((int)uVar6 < 0x1ff9) {
    iVar7 = uVar6 << 0x11;
  }
  else {
    *(undefined4 *)(this + 0x78) = 0x1ff8;
    iVar7 = 0x3ff00000;
  }
  if ((int)uVar4 < 8) {
    iVar5 = 0x100000;
    *(undefined4 *)(this + 0x7c) = 8;
  }
  else if ((int)uVar4 < 0x1ff9) {
    iVar5 = uVar4 << 0x11;
  }
  else {
    *(undefined4 *)(this + 0x7c) = 0x1ff8;
    iVar5 = 0x3ff00000;
  }
  if (iVar11 < 8) {
    iVar11 = 0x100000;
    *(undefined4 *)(this + 0x80) = 8;
  }
  else if (iVar11 < 0x1ff9) {
    iVar11 = iVar11 << 0x11;
  }
  else {
    *(undefined4 *)(this + 0x80) = 0x1ff8;
    iVar11 = 0x3ff00000;
  }
  iVar13 = 0x100000;
  if ((7 < (int)uVar12) && (iVar13 = uVar12 << 0x11, 0x1ff8 < (int)uVar12)) {
    iVar13 = 0x3ff00000;
  }
  *(int *)(this + 0x74) = iVar9;
  *(int *)(this + 0x78) = iVar7;
  *(int *)(this + 0x7c) = iVar5;
  *(int *)(this + 0x80) = iVar11;
  *(int *)(this + 0x84) = iVar13;
  _Var2 = param_1[0x21];
  *(uint *)(this + 0xa8) = (byte)_Var2 & 1;
  iVar11 = *(int *)(*(long *)(this + 0x20) + ((ulong)(byte)param_1[0x22] & 7) * 4);
  if (((byte)_Var2 & 1) != 0) {
    iVar11 = iVar11 << 1;
  }
  *(int *)(this + 0x34) = iVar11;
  _Var2 = param_1[0x20];
  *(uint *)(this + 0xac) = (byte)_Var2 & 7;
  *(undefined8 *)(this + 0x28) =
       *(undefined8 *)(PTR_psdAlLfo_005676f0 + (ulong)((byte)_Var2 & 7) * 8);
  this[0x50] = (CLpf)((byte)param_1[0x23] & 1);
  return;
}

