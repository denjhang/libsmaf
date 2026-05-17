/* PutDownInput @ 000499c0 368B */


/* ARM::CSrc::PutDownInput(unsigned int, ARM::_genbuf*) */

void __thiscall ARM::CSrc::PutDownInput(CSrc *this,uint param_1,_genbuf *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  iVar1 = *(int *)(&DAT_003bf708 + *(int *)this);
  if (param_2 == (_genbuf *)0x0) {
    puVar2 = (undefined4 *)0x0;
    puVar5 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar9 = (undefined4 *)0x0;
    puVar10 = (undefined4 *)0x0;
    puVar11 = (undefined4 *)0x0;
    puVar12 = (undefined4 *)0x0;
    puVar13 = (undefined4 *)0x0;
  }
  else {
    puVar5 = *(undefined4 **)param_2;
    puVar7 = *(undefined4 **)(param_2 + 4);
    puVar9 = *(undefined4 **)(param_2 + 0x14);
    puVar13 = *(undefined4 **)(param_2 + 0x18);
    puVar10 = *(undefined4 **)(param_2 + 0x1c);
    puVar11 = *(undefined4 **)(param_2 + 0x20);
    puVar12 = *(undefined4 **)(param_2 + 0x2c);
    puVar2 = *(undefined4 **)(param_2 + 0x30);
  }
  if (param_1 != 0) {
    uVar4 = 0;
    iVar3 = *(int *)(this + 0x33384);
    do {
      if (puVar5 == (undefined4 *)0x0) {
        *(undefined4 *)(this + (iVar3 + 0x7ed8) * 4) = 0;
        puVar6 = puVar5;
        if (puVar7 == (undefined4 *)0x0) goto LAB_00049ae0;
LAB_00049a26:
        puVar8 = puVar7 + 1;
        *(undefined4 *)(this + (iVar3 + 0x8898) * 4) = *puVar7;
      }
      else {
        puVar6 = puVar5 + 1;
        *(undefined4 *)(this + (iVar3 + 0x7ed8) * 4) = *puVar5;
        if (puVar7 != (undefined4 *)0x0) goto LAB_00049a26;
LAB_00049ae0:
        *(undefined4 **)(this + (iVar3 + 0x8898) * 4) = puVar7;
        puVar8 = puVar7;
      }
      if (iVar1 != 0) {
        if (puVar9 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (iVar3 + 0x9258) * 4) = 0;
        }
        else {
          *(undefined4 *)(this + (iVar3 + 0x9258) * 4) = *puVar9;
          puVar9 = puVar9 + 1;
        }
        if (puVar13 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (iVar3 + 0x9c18) * 4) = 0;
        }
        else {
          *(undefined4 *)(this + (iVar3 + 0x9c18) * 4) = *puVar13;
          puVar13 = puVar13 + 1;
        }
        if (puVar10 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (iVar3 + 0xa5d8) * 4) = 0;
        }
        else {
          *(undefined4 *)(this + (iVar3 + 0xa5d8) * 4) = *puVar10;
          puVar10 = puVar10 + 1;
        }
        if (puVar11 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (iVar3 + 0xaf98) * 4) = 0;
        }
        else {
          *(undefined4 *)(this + (iVar3 + 0xaf98) * 4) = *puVar11;
          puVar11 = puVar11 + 1;
        }
        if (puVar12 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (iVar3 + 0xb958) * 4) = 0;
        }
        else {
          *(undefined4 *)(this + (iVar3 + 0xb958) * 4) = *puVar12;
          puVar12 = puVar12 + 1;
        }
        if (puVar2 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (iVar3 + 0xc318) * 4) = 0;
        }
        else {
          *(undefined4 *)(this + (iVar3 + 0xc318) * 4) = *puVar2;
          puVar2 = puVar2 + 1;
        }
      }
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + 1;
      if (iVar3 == 0x9c0) {
        iVar3 = 0;
        *(undefined4 *)(this + 0x33384) = 0;
      }
      else {
        *(int *)(this + 0x33384) = iVar3;
      }
      puVar5 = puVar6;
      puVar7 = puVar8;
    } while (uVar4 != param_1);
  }
  return;
}

