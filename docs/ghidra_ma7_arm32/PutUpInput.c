/* PutUpInput @ 00049618 936B */


/* ARM::CSrc::PutUpInput(unsigned int, ARM::_genbuf*) */

void __thiscall ARM::CSrc::PutUpInput(CSrc *this,uint param_1,_genbuf *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  
  if (param_2 == (_genbuf *)0x0) {
    local_4c = (undefined4 *)0x0;
    puVar3 = (undefined4 *)0x0;
    puVar4 = (undefined4 *)0x0;
    puVar5 = (undefined4 *)0x0;
    puVar6 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
    puVar9 = (undefined4 *)0x0;
    local_48 = (undefined4 *)0x0;
    local_44 = (undefined4 *)0x0;
    local_40 = (undefined4 *)0x0;
    local_3c = (undefined4 *)0x0;
    local_38 = (undefined4 *)0x0;
    local_34 = (undefined4 *)0x0;
  }
  else {
    local_40 = *(undefined4 **)(param_2 + 0x10);
    local_3c = *(undefined4 **)(param_2 + 0x14);
    local_38 = *(undefined4 **)(param_2 + 0x18);
    local_34 = *(undefined4 **)(param_2 + 0x1c);
    local_4c = *(undefined4 **)(param_2 + 0x20);
    puVar3 = *(undefined4 **)(param_2 + 0x24);
    puVar4 = *(undefined4 **)(param_2 + 0x28);
    puVar5 = *(undefined4 **)(param_2 + 0x2c);
    local_48 = *(undefined4 **)(param_2 + 8);
    local_44 = *(undefined4 **)(param_2 + 0xc);
    puVar6 = *(undefined4 **)param_2;
    puVar7 = *(undefined4 **)(param_2 + 4);
    puVar9 = *(undefined4 **)(param_2 + 0x30);
  }
  if (param_1 != 0) {
    uVar1 = 0;
    iVar2 = *(int *)(this + 0x33380);
    do {
      if (param_2 == (_genbuf *)0x0) {
        *(undefined4 *)(this + iVar2 * 4 + 0x2c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0x272c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0x4e2c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0x752c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0x9c2c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0xc32c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0xea2c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0x1112c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0x1382c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0x15f2c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0x1862c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0x1ad2c) = 0;
        *(undefined4 *)(this + iVar2 * 4 + 0x1d42c) = 0;
      }
      else {
        if (puVar6 == (undefined4 *)0x0) {
          *(undefined4 *)(this + iVar2 * 4 + 0x2c) = 0;
          if (puVar7 == (undefined4 *)0x0) goto LAB_00049898;
LAB_00049696:
          puVar8 = puVar7 + 1;
          *(undefined4 *)(this + (iVar2 + 0x9ca) * 4 + 4) = *puVar7;
          puVar7 = puVar8;
          if (local_48 != (undefined4 *)0x0) goto LAB_000496ae;
LAB_000498ac:
          *(undefined4 **)(this + (iVar2 + 0x138a) * 4 + 4) = local_48;
          if (local_44 == (undefined4 *)0x0) goto LAB_000498c4;
LAB_000496cc:
          puVar8 = local_44 + 1;
          *(undefined4 *)(this + (iVar2 + 0x1d4a) * 4 + 4) = *local_44;
          local_44 = puVar8;
          if (local_40 != (undefined4 *)0x0) goto LAB_000496ea;
LAB_000498dc:
          *(undefined4 **)(this + (iVar2 + 0x270a) * 4 + 4) = local_40;
          if (local_3c == (undefined4 *)0x0) goto LAB_000498f4;
LAB_00049708:
          puVar8 = local_3c + 1;
          *(undefined4 *)(this + (iVar2 + 0x30ca) * 4 + 4) = *local_3c;
          local_3c = puVar8;
          if (local_38 != (undefined4 *)0x0) goto LAB_00049726;
LAB_0004990c:
          *(undefined4 **)(this + (iVar2 + 0x3a8a) * 4 + 4) = local_38;
          if (local_34 == (undefined4 *)0x0) goto LAB_00049924;
LAB_00049744:
          puVar8 = local_34 + 1;
          *(undefined4 *)(this + (iVar2 + 0x444a) * 4 + 4) = *local_34;
          local_34 = puVar8;
          if (local_4c != (undefined4 *)0x0) goto LAB_00049762;
LAB_0004993c:
          *(undefined4 **)(this + (iVar2 + 0x4e0a) * 4 + 4) = local_4c;
          if (puVar3 == (undefined4 *)0x0) goto LAB_00049952;
LAB_0004977e:
          puVar8 = puVar3 + 1;
          *(undefined4 *)(this + (iVar2 + 0x57ca) * 4 + 4) = *puVar3;
          puVar3 = puVar8;
          if (puVar4 != (undefined4 *)0x0) goto LAB_00049798;
LAB_00049968:
          *(undefined4 **)(this + (iVar2 + 0x618a) * 4 + 4) = puVar4;
          if (puVar5 == (undefined4 *)0x0) goto LAB_0004997e;
LAB_000497b2:
          *(undefined4 *)(this + (iVar2 + 0x6b4a) * 4 + 4) = *puVar5;
          puVar5 = puVar5 + 1;
        }
        else {
          puVar8 = puVar6 + 1;
          *(undefined4 *)(this + iVar2 * 4 + 0x2c) = *puVar6;
          puVar6 = puVar8;
          if (puVar7 != (undefined4 *)0x0) goto LAB_00049696;
LAB_00049898:
          *(undefined4 **)(this + (iVar2 + 0x9ca) * 4 + 4) = puVar7;
          if (local_48 == (undefined4 *)0x0) goto LAB_000498ac;
LAB_000496ae:
          puVar8 = local_48 + 1;
          *(undefined4 *)(this + (iVar2 + 0x138a) * 4 + 4) = *local_48;
          local_48 = puVar8;
          if (local_44 != (undefined4 *)0x0) goto LAB_000496cc;
LAB_000498c4:
          *(undefined4 **)(this + (iVar2 + 0x1d4a) * 4 + 4) = local_44;
          if (local_40 == (undefined4 *)0x0) goto LAB_000498dc;
LAB_000496ea:
          puVar8 = local_40 + 1;
          *(undefined4 *)(this + (iVar2 + 0x270a) * 4 + 4) = *local_40;
          local_40 = puVar8;
          if (local_3c != (undefined4 *)0x0) goto LAB_00049708;
LAB_000498f4:
          *(undefined4 **)(this + (iVar2 + 0x30ca) * 4 + 4) = local_3c;
          if (local_38 == (undefined4 *)0x0) goto LAB_0004990c;
LAB_00049726:
          puVar8 = local_38 + 1;
          *(undefined4 *)(this + (iVar2 + 0x3a8a) * 4 + 4) = *local_38;
          local_38 = puVar8;
          if (local_34 != (undefined4 *)0x0) goto LAB_00049744;
LAB_00049924:
          *(undefined4 **)(this + (iVar2 + 0x444a) * 4 + 4) = local_34;
          if (local_4c == (undefined4 *)0x0) goto LAB_0004993c;
LAB_00049762:
          puVar8 = local_4c + 1;
          *(undefined4 *)(this + (iVar2 + 0x4e0a) * 4 + 4) = *local_4c;
          local_4c = puVar8;
          if (puVar3 != (undefined4 *)0x0) goto LAB_0004977e;
LAB_00049952:
          *(undefined4 **)(this + (iVar2 + 0x57ca) * 4 + 4) = puVar3;
          if (puVar4 == (undefined4 *)0x0) goto LAB_00049968;
LAB_00049798:
          puVar8 = puVar4 + 1;
          *(undefined4 *)(this + (iVar2 + 0x618a) * 4 + 4) = *puVar4;
          puVar4 = puVar8;
          if (puVar5 != (undefined4 *)0x0) goto LAB_000497b2;
LAB_0004997e:
          *(undefined4 **)(this + (iVar2 + 0x6b4a) * 4 + 4) = puVar5;
        }
        if (puVar9 == (undefined4 *)0x0) {
          *(undefined4 *)(this + (iVar2 + 0x750a) * 4 + 4) = 0;
        }
        else {
          *(undefined4 *)(this + (iVar2 + 0x750a) * 4 + 4) = *puVar9;
          puVar9 = puVar9 + 1;
        }
      }
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 + 1;
      if (iVar2 == 0x9c0) {
        iVar2 = 0;
        *(undefined4 *)(this + 0x33380) = 0;
      }
      else {
        *(int *)(this + 0x33380) = iVar2;
      }
    } while (uVar1 != param_1);
  }
  return;
}

