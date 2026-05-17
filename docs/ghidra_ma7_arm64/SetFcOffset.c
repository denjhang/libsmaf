/* SetFcOffset @ 0015a708 400B */


/* ARM::CLpf::SetFcOffset(unsigned int) */

void __thiscall ARM::CLpf::SetFcOffset(CLpf *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = param_1 & 0x1ff8;
  *(uint *)(this + 0x5c) = uVar1;
  if (this[0x53] == (CLpf)0x0) {
    iVar3 = *(int *)(this + 0x8c);
    iVar2 = *(int *)(this + 0x90);
    iVar4 = *(int *)(this + 0x98) + *(int *)(this + 0x58);
    iVar5 = *(int *)(this + 0x94);
    iVar6 = *(int *)(this + 0x9c);
    *(int *)(this + 0x74) = iVar3;
    *(int *)(this + 0x78) = iVar2;
    *(int *)(this + 0x7c) = iVar5;
    *(int *)(this + 0x80) = iVar4;
    *(int *)(this + 0x84) = iVar6;
  }
  else {
    iVar3 = uVar1 + *(int *)(this + 0x8c);
    iVar2 = uVar1 + *(int *)(this + 0x90);
    iVar5 = uVar1 + *(int *)(this + 0x94);
    iVar4 = uVar1 + *(int *)(this + 0x98) + *(int *)(this + 0x58);
    *(int *)(this + 0x74) = iVar3;
    iVar6 = uVar1 + *(int *)(this + 0x9c);
    *(int *)(this + 0x78) = iVar2;
    *(int *)(this + 0x7c) = iVar5;
    *(int *)(this + 0x80) = iVar4;
    *(int *)(this + 0x84) = iVar6;
  }
  if (iVar3 < 8) {
    iVar3 = 0x100000;
    *(undefined4 *)(this + 0x74) = 8;
  }
  else if (iVar3 < 0x1ff9) {
    iVar3 = iVar3 << 0x11;
  }
  else {
    *(undefined4 *)(this + 0x74) = 0x1ff8;
    iVar3 = 0x3ff00000;
  }
  if (iVar2 < 8) {
    iVar2 = 0x100000;
    *(undefined4 *)(this + 0x78) = 8;
  }
  else if (iVar2 < 0x1ff9) {
    iVar2 = iVar2 << 0x11;
  }
  else {
    *(undefined4 *)(this + 0x78) = 0x1ff8;
    iVar2 = 0x3ff00000;
  }
  if (iVar5 < 8) {
    iVar5 = 0x100000;
    *(undefined4 *)(this + 0x7c) = 8;
  }
  else if (iVar5 < 0x1ff9) {
    iVar5 = iVar5 << 0x11;
  }
  else {
    *(undefined4 *)(this + 0x7c) = 0x1ff8;
    iVar5 = 0x3ff00000;
  }
  if (iVar4 < 8) {
    iVar4 = 0x100000;
    *(undefined4 *)(this + 0x80) = 8;
  }
  else if (iVar4 < 0x1ff9) {
    iVar4 = iVar4 << 0x11;
  }
  else {
    *(undefined4 *)(this + 0x80) = 0x1ff8;
    iVar4 = 0x3ff00000;
  }
  iVar7 = 0x100000;
  if ((7 < iVar6) && (iVar7 = iVar6 << 0x11, 0x1ff8 < iVar6)) {
    iVar7 = 0x3ff00000;
  }
  *(int *)(this + 0x74) = iVar3;
  *(int *)(this + 0x78) = iVar2;
  *(int *)(this + 0x7c) = iVar5;
  *(int *)(this + 0x80) = iVar4;
  *(int *)(this + 0x84) = iVar7;
  return;
}

