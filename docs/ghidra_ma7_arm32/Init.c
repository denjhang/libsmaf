/* Init @ 000494b4 274B */


/* ARM::CSrc::Init(ARM::CDsp*, unsigned int) */

undefined4 __thiscall ARM::CSrc::Init(CSrc *this,CDsp *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  
  *(CDsp **)this = param_1;
  *(uint *)(this + 4) = param_2;
  iVar4 = DAT_000495e8;
  iVar3 = DAT_000495e4;
  iVar2 = DAT_000495d8;
  iVar1 = DAT_000495d4;
  iVar8 = DAT_000495d0;
  if (param_2 == 0x5622) {
    uVar5 = 0x93;
    uVar6 = 0x140;
    iVar8 = DAT_000495ec + 0x495c4;
    puVar10 = &UNK_000495c6 + DAT_000495f0;
  }
  else {
    if (0x5622 < param_2) {
      if (param_2 != 32000) {
        if (param_2 == 0xac44) {
          *(undefined4 *)(this + 8) = 0x93;
          *(undefined4 *)(this + 0x14) = 0x93;
          *(int *)(this + 0x24) = iVar4 + 0x495ce;
          *(undefined4 *)(this + 0xc) = 0xa0;
          *(undefined4 *)(this + 0x10) = 0xa0;
          *(int *)(this + 0x20) = iVar3 + 0x4a0b2;
          *(undefined4 *)(this + 0x18) = 0x10;
          *(undefined4 *)(this + 0x1c) = 0xf;
          return 0;
        }
        if (param_2 == 24000) {
          *(undefined4 *)(this + 8) = 0x10;
          *(undefined4 *)(this + 0x18) = 0x10;
          *(int *)(this + 0x20) = iVar1 + 0x4a034;
          *(int *)(this + 0x24) = iVar2 + 0x49740;
          *(undefined4 *)(this + 0x14) = 0x10;
          *(undefined4 *)(this + 0x1c) = 0x10;
          *(undefined4 *)(this + 0xc) = 0x20;
          *(undefined4 *)(this + 0x10) = 0x20;
          return 0;
        }
LAB_000494da:
        *(undefined4 *)(this + 8) = 1;
        *(undefined4 *)(this + 0xc) = 1;
        *(undefined4 *)(this + 0x10) = 1;
        *(undefined4 *)(this + 0x14) = 1;
        *(undefined4 *)(this + 0x18) = 0;
        *(undefined4 *)(this + 0x1c) = 0;
        return 0;
      }
      uVar5 = 2;
      uVar6 = 3;
      *(undefined4 *)(this + 8) = 2;
      uVar7 = 0xd;
      *(int *)(this + 0x20) = iVar8 + 0x49f1e;
      uVar9 = 0x14;
      *(int *)(this + 0x24) = iVar8 + 0x49fba;
      goto LAB_0004951c;
    }
    if (param_2 == 0x2b11) {
      iVar8 = DAT_000495dc + 0x49582;
      puVar10 = (undefined *)(DAT_000495e0 + 0x49584);
    }
    else {
      if (param_2 != 16000) goto LAB_000494da;
      iVar8 = DAT_000495c8 + 0x4950a;
      puVar10 = (undefined *)(DAT_000495cc + 0x4950c);
    }
    uVar5 = 0x6a;
    uVar6 = 0x13e;
  }
  *(int *)(this + 0x20) = iVar8;
  uVar7 = 0x10;
  uVar9 = 0x1d;
  *(undefined4 *)(this + 8) = uVar5;
  *(undefined **)(this + 0x24) = puVar10 + 0xc20;
LAB_0004951c:
  *(undefined4 *)(this + 0x14) = uVar5;
  *(undefined4 *)(this + 0xc) = uVar6;
  *(undefined4 *)(this + 0x10) = uVar6;
  *(undefined4 *)(this + 0x18) = uVar7;
  *(undefined4 *)(this + 0x1c) = uVar9;
  return 0;
}

