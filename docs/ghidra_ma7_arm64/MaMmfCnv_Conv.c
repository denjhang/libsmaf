/* MaMmfCnv_Conv @ 001f4580 1104B */


/* YAMAHA::MaMmfCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

undefined8 YAMAHA::MaMmfCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (lVar5 = *(long *)(param_1 + 8), param_2 == (_MASND_CMD_PARAM *)0x0)) || (lVar5 == 0)) {
    return 0xfffffffe;
  }
  if (*(char *)(lVar5 + 0xc) != '\x02') {
    return 0xffffffff;
  }
  uVar12 = *(uint *)(lVar5 + 0xe10);
  uVar8 = (ulong)uVar12;
  if (uVar12 != 0) {
    if ((uVar12 >> 5 & 1) == 0) {
      if ((uVar12 >> 0xb & 1) == 0) {
        *(uint *)(lVar5 + 0xe10) = uVar12 & 0x800;
        bVar7 = *(byte *)(lVar5 + 0x2e4e);
        goto joined_r0x001f4820;
      }
      iVar9 = *(int *)(lVar5 + 0xdf8);
    }
    else {
      uVar12 = uVar12 & 0x1f;
      uVar8 = (ulong)uVar12;
      iVar9 = *(int *)(lVar5 + 0xdf8);
      lVar1 = lVar5 + uVar8 * 0x20;
      uVar10 = 0x20;
      if (iVar9 != 7) {
        uVar10 = 0x10;
      }
      bVar7 = *(byte *)(lVar1 + 0x3585);
      if (*(byte *)(lVar1 + 0x3586) == bVar7) {
        uVar8 = (ulong)(byte)(uVar12 + 1);
        if (uVar12 + 1 < uVar10) {
          cVar4 = (char)(~uVar12 & 3);
          if (cVar4 != '\0') {
            if (cVar4 != '\x01') {
              if ((~uVar12 & 3) != 2) {
                lVar1 = lVar5 + uVar8 * 0x20;
                bVar7 = *(byte *)(lVar1 + 0x3585);
                if (*(byte *)(lVar1 + 0x3586) != bVar7) goto LAB_001f4944;
                uVar8 = (ulong)(byte)((char)uVar12 + 2);
              }
              lVar1 = lVar5 + uVar8 * 0x20;
              bVar7 = *(byte *)(lVar1 + 0x3585);
              if (*(byte *)(lVar1 + 0x3586) != bVar7) goto LAB_001f4944;
              uVar8 = (ulong)(byte)((char)uVar8 + 1);
            }
            lVar1 = lVar5 + uVar8 * 0x20;
            bVar7 = *(byte *)(lVar1 + 0x3585);
            if (*(byte *)(lVar1 + 0x3586) != bVar7) goto LAB_001f4944;
            uVar12 = (int)uVar8 + 1;
            uVar8 = (ulong)(byte)uVar12;
            if (uVar10 <= uVar12) goto LAB_001f47e4;
          }
          do {
            uVar12 = (int)uVar8 + 1;
            lVar1 = lVar5 + uVar8 * 0x20;
            bVar7 = *(byte *)(lVar1 + 0x3585);
            if (*(byte *)(lVar1 + 0x3586) != bVar7) goto LAB_001f4944;
            uVar8 = (ulong)(byte)uVar12;
            uVar12 = (uVar12 & 0xff) + 1;
            lVar1 = lVar5 + uVar8 * 0x20;
            bVar7 = *(byte *)(lVar1 + 0x3585);
            if (*(byte *)(lVar1 + 0x3586) != bVar7) goto LAB_001f4944;
            uVar8 = (ulong)(byte)uVar12;
            uVar12 = (uVar12 & 0xff) + 1;
            lVar1 = lVar5 + uVar8 * 0x20;
            bVar7 = *(byte *)(lVar1 + 0x3585);
            if (*(byte *)(lVar1 + 0x3586) != bVar7) goto LAB_001f4944;
            uVar8 = (ulong)(byte)uVar12;
            uVar12 = (uVar12 & 0xff) + 1;
            lVar1 = lVar5 + uVar8 * 0x20;
            bVar7 = *(byte *)(lVar1 + 0x3585);
            if (*(byte *)(lVar1 + 0x3586) != bVar7) goto LAB_001f4944;
            uVar8 = (ulong)(byte)uVar12;
          } while ((uVar12 & 0xff) < uVar10);
        }
      }
      else {
LAB_001f4944:
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined4 *)param_2 = 0xd;
        *(int *)(param_2 + 8) = (int)uVar8;
        uVar12 = (int)uVar8 + 1U & 0xff;
        *(ulong *)(param_2 + 0x10) = (ulong)bVar7;
        *(undefined4 *)(param_2 + 0x18) = 0;
        if (uVar12 < uVar10) {
          *(uint *)(lVar5 + 0xe10) = uVar12 + 0x20;
          return 1;
        }
      }
LAB_001f47e4:
      uVar8 = 0;
      *(undefined4 *)(lVar5 + 0xe10) = 0x800;
    }
    if (((iVar9 == 5) || (iVar9 == 7)) || (iVar9 == 3)) {
      uVar12 = (uint)(uVar8 >> 6) & 0x1f;
      *(uint *)(param_2 + 0x18) = (uint)*(byte *)(lVar5 + (ulong)uVar12 * 3 + 0x347a);
      *(undefined4 *)param_2 = 0x23;
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(ulong *)(param_2 + 0x10) = (ulong)uVar12;
      if (uVar12 + 1 != 0x20) {
        *(uint *)(lVar5 + 0xe10) = (uVar12 + 1) * 0x40 + 0x800;
        return 1;
      }
    }
    *(undefined4 *)(lVar5 + 0xe10) = 0;
  }
  bVar7 = *(byte *)(lVar5 + 0x2e4e);
joined_r0x001f4820:
  if (bVar7 == 0) {
    if (*(uint **)(lVar5 + 0xdd8) == (uint *)0x0) {
      uVar12 = *(int *)(lVar5 + 0xe04) + *(int *)(lVar5 + 0xe00);
    }
    else {
      uVar12 = **(uint **)(lVar5 + 0xdd8);
    }
    puVar11 = *(uint **)(lVar5 + 0xde8);
    if (puVar11 == (uint *)0x0) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = *puVar11;
    }
    if (uVar12 < uVar10) {
      uVar6 = (**(code **)(PTR_abPlayGetEvent_005679d8 + (ulong)*(uint *)(lVar5 + 0xdf8) * 8))();
    }
    else {
      uVar10 = *puVar11;
      uVar12 = *(int *)(lVar5 + 0xe00) + *(int *)(lVar5 + 0xe04);
      if (uVar10 < uVar12) {
        iVar9 = *(int *)(lVar5 + 0xe14);
        iVar2 = *(int *)(lVar5 + 0xdfc);
        uVar12 = puVar11[3];
        uVar3 = puVar11[2];
        *(uint *)param_2 = puVar11[1];
        *(uint *)(param_2 + 4) = (uVar10 - iVar9) * iVar2;
        *(uint *)(param_2 + 8) = uVar3;
        *(ulong *)(param_2 + 0x10) = (ulong)uVar12;
        *(undefined4 *)(param_2 + 0x18) = 0;
        uVar6 = *(undefined8 *)(puVar11 + 4);
        *(uint *)(lVar5 + 0xe14) = uVar10;
        *(undefined8 *)(lVar5 + 0xde8) = uVar6;
        *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(lVar5 + 0xdf0);
        *(uint **)(lVar5 + 0xdf0) = puVar11;
        return 1;
      }
      iVar9 = uVar12 - *(int *)(lVar5 + 0xe14);
      if (*(char *)(lVar5 + 0x2e56) == '\x10') {
        iVar2 = *(int *)(lVar5 + 0xdfc);
        *(undefined4 *)param_2 = 0x10;
        *(undefined4 *)(param_2 + 8) = 0;
        *(int *)(param_2 + 4) = iVar9 * iVar2;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x18) = 0;
        *(undefined1 *)(lVar5 + 0x2e4e) = 2;
      }
      else {
        iVar2 = *(int *)(lVar5 + 0xdfc);
        *(undefined4 *)(param_2 + 8) = 0;
        *(undefined4 *)param_2 = 0x2f;
        *(int *)(param_2 + 4) = iVar9 * iVar2;
        *(undefined8 *)(param_2 + 0x10) = 0x7f;
        *(undefined4 *)(param_2 + 0x18) = 0;
        *(undefined1 *)(lVar5 + 0x2e4e) = 1;
      }
      uVar6 = 1;
      *(int *)(lVar5 + 0xe14) = iVar9 + *(int *)(lVar5 + 0xe14);
    }
  }
  else if (bVar7 == 0xff) {
    uVar6 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(uint *)(param_2 + 8) = bVar7 - 1;
    *(undefined4 *)param_2 = 0x10;
    *(undefined4 *)(param_2 + 0x18) = 0;
    bVar7 = *(char *)(lVar5 + 0x2e4e) + 1;
    *(byte *)(lVar5 + 0x2e4e) = bVar7;
    if (*(int *)(lVar5 + 0xdf8) == 7) {
      if (bVar7 < 0x21) {
        return 1;
      }
    }
    else if (bVar7 < 0x11) {
      return 1;
    }
    uVar6 = 1;
    *(undefined1 *)(lVar5 + 0x2e4e) = 0xff;
  }
  return uVar6;
}

