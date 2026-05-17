/* PutDownInput @ 0014eb34 412B */


/* ARM::CSrc::PutDownInput(unsigned int, ARM::_genbuf*) */

void __thiscall ARM::CSrc::PutDownInput(CSrc *this,uint param_1,_genbuf *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  
  iVar1 = *(int *)(&DAT_003bf7e0 + *(long *)this);
  if (param_2 == (_genbuf *)0x0) {
    puVar2 = (undefined4 *)0x0;
    puVar5 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar8 = (undefined4 *)0x0;
    puVar9 = (undefined4 *)0x0;
    puVar10 = (undefined4 *)0x0;
    puVar11 = (undefined4 *)0x0;
  }
  else {
    puVar5 = *(undefined4 **)param_2;
    puVar6 = *(undefined4 **)(param_2 + 8);
    puVar7 = *(undefined4 **)(param_2 + 0x28);
    puVar8 = *(undefined4 **)(param_2 + 0x30);
    puVar9 = *(undefined4 **)(param_2 + 0x38);
    puVar10 = *(undefined4 **)(param_2 + 0x40);
    puVar11 = *(undefined4 **)(param_2 + 0x58);
    puVar2 = *(undefined4 **)(param_2 + 0x60);
  }
  if (param_1 != 0) {
    uVar4 = 0;
    uVar3 = *(uint *)(this + 0x333ec);
    do {
      uVar12 = (ulong)uVar3;
      if (puVar5 == (undefined4 *)0x0) {
        *(undefined4 *)(this + (uVar12 + 0x7000) * 4 + 0x3ba8) = 0;
      }
      else {
        *(undefined4 *)(this + (uVar12 + 0x7000) * 4 + 0x3ba8) = *puVar5;
        puVar5 = puVar5 + 1;
      }
      if (puVar6 == (undefined4 *)0x0) {
        *(undefined4 *)(this + (uVar12 + 0x8000) * 4 + 0x22a8) = 0;
      }
      else {
        *(undefined4 *)(this + (uVar12 + 0x8000) * 4 + 0x22a8) = *puVar6;
        puVar6 = puVar6 + 1;
      }
      if (iVar1 != 0) {
        if (puVar7 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (uVar12 + 0x9000) * 4 + 0x9a8) = 0;
        }
        else {
          *(undefined4 *)(this + (uVar12 + 0x9000) * 4 + 0x9a8) = *puVar7;
          puVar7 = puVar7 + 1;
        }
        if (puVar8 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (uVar12 + 0x9000) * 4 + 0x30a8) = 0;
        }
        else {
          *(undefined4 *)(this + (uVar12 + 0x9000) * 4 + 0x30a8) = *puVar8;
          puVar8 = puVar8 + 1;
        }
        if (puVar9 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (uVar12 + 0xa000) * 4 + 0x17a8) = 0;
        }
        else {
          *(undefined4 *)(this + (uVar12 + 0xa000) * 4 + 0x17a8) = *puVar9;
          puVar9 = puVar9 + 1;
        }
        if (puVar10 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (uVar12 + 0xa000) * 4 + 0x3ea8) = 0;
        }
        else {
          *(undefined4 *)(this + (uVar12 + 0xa000) * 4 + 0x3ea8) = *puVar10;
          puVar10 = puVar10 + 1;
        }
        if (puVar11 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (uVar12 + 0xb000) * 4 + 0x25a8) = 0;
        }
        else {
          *(undefined4 *)(this + (uVar12 + 0xb000) * 4 + 0x25a8) = *puVar11;
          puVar11 = puVar11 + 1;
        }
        if (puVar2 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (uVar12 + 0xc000) * 4 + 0xca8) = 0;
        }
        else {
          *(undefined4 *)(this + (uVar12 + 0xc000) * 4 + 0xca8) = *puVar2;
          puVar2 = puVar2 + 1;
        }
      }
      uVar3 = uVar3 + 1;
      if (uVar3 == 0x9c0) {
        *(int *)(this + 0x333ec) = 0;
        uVar3 = 0;
      }
      else {
        *(uint *)(this + 0x333ec) = uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_1);
  }
  return;
}

