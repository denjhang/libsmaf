/* MaMmfCnv_Conv @ 000bd470 796B */


/* YAMAHA::MaMmfCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

undefined4 YAMAHA::MaMmfCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) || (iVar2 = *(int *)(param_1 + 4), iVar2 == 0)) ||
     (param_2 == (_MASND_CMD_PARAM *)0x0)) {
    return 0xfffffffe;
  }
  if (*(char *)(iVar2 + 8) != '\x02') {
    return 0xffffffff;
  }
  uVar7 = *(uint *)(iVar2 + 0xc44);
  if (uVar7 != 0) {
    if ((int)(uVar7 << 0x1a) < 0) {
      uVar7 = uVar7 & 0x1f;
      iVar9 = iVar2 + 0xc1c;
      iVar4 = *(int *)(iVar2 + 0xc2c);
      iVar10 = iVar9 + uVar7 * 0x20;
      if (iVar4 == 7) {
        uVar11 = 0x20;
      }
      else {
        uVar11 = 0x10;
      }
      uVar5 = (uint)*(byte *)(iVar10 + 0x1581);
      uVar12 = uVar7;
      if (*(byte *)(iVar10 + 0x1582) == uVar5) {
        uVar12 = uVar7 + 1;
        if (uVar12 < uVar11) {
          cVar1 = (char)(~uVar7 & 3);
          if (cVar1 != '\0') {
            if (cVar1 != '\x01') {
              if ((~uVar7 & 3) != 2) {
                iVar10 = iVar9 + uVar12 * 0x20;
                uVar5 = (uint)*(byte *)(iVar10 + 0x1581);
                if (*(byte *)(iVar10 + 0x1582) != uVar5) goto LAB_000bd738;
                uVar12 = uVar7 + 2;
              }
              iVar10 = iVar9 + uVar12 * 0x20;
              uVar5 = (uint)*(byte *)(iVar10 + 0x1581);
              if (*(byte *)(iVar10 + 0x1582) != uVar5) goto LAB_000bd738;
              uVar12 = uVar12 + 1;
            }
            iVar10 = iVar9 + uVar12 * 0x20;
            uVar5 = (uint)*(byte *)(iVar10 + 0x1581);
            if (*(byte *)(iVar10 + 0x1582) != uVar5) goto LAB_000bd738;
            uVar12 = uVar12 + 1;
            if (uVar11 <= uVar12) goto LAB_000bd63e;
          }
          do {
            iVar10 = iVar9 + uVar12 * 0x20;
            uVar5 = (uint)*(byte *)(iVar10 + 0x1581);
            if (*(byte *)(iVar10 + 0x1582) != uVar5) goto LAB_000bd738;
            uVar12 = uVar12 + 1 & 0xff;
            iVar10 = iVar9 + uVar12 * 0x20;
            uVar5 = (uint)*(byte *)(iVar10 + 0x1581);
            if (*(byte *)(iVar10 + 0x1582) != uVar5) goto LAB_000bd738;
            uVar12 = uVar12 + 1 & 0xff;
            iVar10 = iVar9 + uVar12 * 0x20;
            uVar5 = (uint)*(byte *)(iVar10 + 0x1581);
            if (*(byte *)(iVar10 + 0x1582) != uVar5) goto LAB_000bd738;
            uVar12 = uVar12 + 1 & 0xff;
            iVar10 = iVar9 + uVar12 * 0x20;
            uVar5 = (uint)*(byte *)(iVar10 + 0x1581);
            if (*(byte *)(iVar10 + 0x1582) != uVar5) goto LAB_000bd738;
            uVar12 = uVar12 + 1 & 0xff;
          } while (uVar12 < uVar11);
        }
      }
      else {
LAB_000bd738:
        *(uint *)(param_2 + 0xc) = uVar5;
        *(uint *)(param_2 + 8) = uVar12;
        uVar7 = uVar12 + 1 & 0xff;
        bVar13 = uVar7 < uVar11;
        *(undefined4 *)param_2 = 0xd;
        *(undefined4 *)(param_2 + 4) = 0;
        if (bVar13) {
          uVar7 = uVar7 + 0x20;
        }
        *(undefined4 *)(param_2 + 0x10) = 0;
        if (bVar13) {
          *(uint *)(iVar2 + 0xc44) = uVar7;
          return 1;
        }
        iVar4 = *(int *)(iVar2 + 0xc2c);
      }
LAB_000bd63e:
      uVar7 = 0;
      *(undefined4 *)(iVar2 + 0xc44) = 0x800;
    }
    else {
      if ((uVar7 & 0x800) == 0) {
        *(undefined4 *)(iVar2 + 0xc44) = 0;
        goto LAB_000bd496;
      }
      iVar4 = *(int *)(iVar2 + 0xc2c);
    }
    if ((iVar4 - 3U < 5) && ((1 << (iVar4 - 3U & 0xff) & 0x15U) != 0)) {
      uVar7 = (uVar7 & 0x7ff) >> 6;
      bVar8 = *(byte *)(uVar7 * 3 + iVar2 + 0x2092);
      *(uint *)(param_2 + 0xc) = uVar7;
      *(undefined4 *)param_2 = 0x23;
      *(uint *)(param_2 + 0x10) = (uint)bVar8;
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      if (uVar7 + 1 != 0x20) {
        *(uint *)(iVar2 + 0xc44) = (uVar7 + 1) * 0x40 + 0x800;
        return 1;
      }
      *(undefined4 *)(iVar2 + 0xc44) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 0xc44) = 0;
    }
  }
LAB_000bd496:
  uVar7 = (uint)*(byte *)(iVar2 + 0x1c6e);
  if (uVar7 == 0) {
    if (*(uint **)(iVar2 + 0xc1c) == (uint *)0x0) {
      uVar7 = *(int *)(iVar2 + 0xc38) + *(int *)(iVar2 + 0xc34);
    }
    else {
      uVar7 = **(uint **)(iVar2 + 0xc1c);
    }
    puVar6 = *(uint **)(iVar2 + 0xc24);
    uVar11 = 0xffffffff;
    if (puVar6 != (uint *)0x0) {
      uVar11 = *puVar6;
    }
    if (uVar7 < uVar11) {
      uVar3 = (**(code **)(*(int *)(DAT_000bd78c + 0xbd4ca) + *(int *)(iVar2 + 0xc2c) * 4))();
      return uVar3;
    }
    uVar7 = *puVar6;
    uVar11 = *(int *)(iVar2 + 0xc38) + *(int *)(iVar2 + 0xc34);
    if (uVar7 < uVar11) {
      iVar4 = *(int *)(iVar2 + 0xc48);
      iVar9 = *(int *)(iVar2 + 0xc30);
      uVar12 = puVar6[2];
      uVar11 = puVar6[3];
      *(uint *)param_2 = puVar6[1];
      *(uint *)(param_2 + 8) = uVar12;
      *(uint *)(param_2 + 0xc) = uVar11;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(uint *)(param_2 + 4) = iVar9 * (uVar7 - iVar4);
      *(uint *)(iVar2 + 0xc48) = *puVar6;
      *(uint *)(iVar2 + 0xc24) = puVar6[4];
      puVar6[4] = *(uint *)(iVar2 + 0xc28);
      *(uint **)(iVar2 + 0xc28) = puVar6;
    }
    else {
      iVar4 = uVar11 - *(int *)(iVar2 + 0xc48);
      if (*(char *)(iVar2 + 0x1c76) == '\x10') {
        iVar9 = *(int *)(iVar2 + 0xc30);
        *(undefined4 *)param_2 = 0x10;
        *(undefined4 *)(param_2 + 8) = 0;
        *(undefined4 *)(param_2 + 0xc) = 0;
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(int *)(param_2 + 4) = iVar9 * iVar4;
        *(undefined1 *)(iVar2 + 0x1c6e) = 2;
      }
      else {
        iVar9 = *(int *)(iVar2 + 0xc30);
        *(undefined4 *)(param_2 + 8) = 0;
        *(undefined4 *)param_2 = 0x2f;
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0xc) = 0x7f;
        *(int *)(param_2 + 4) = iVar9 * iVar4;
        *(undefined1 *)(iVar2 + 0x1c6e) = 1;
      }
      *(int *)(iVar2 + 0xc48) = *(int *)(iVar2 + 0xc48) + iVar4;
    }
  }
  else {
    if (uVar7 == 0xff) {
      return 0;
    }
    *(undefined4 *)(param_2 + 4) = 0;
    *(uint *)(param_2 + 8) = uVar7 - 1;
    *(undefined4 *)param_2 = 0x10;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    bVar8 = *(char *)(iVar2 + 0x1c6e) + 1;
    *(byte *)(iVar2 + 0x1c6e) = bVar8;
    if (*(int *)(iVar2 + 0xc2c) == 7) {
      if (0x20 < bVar8) goto LAB_000bd71c;
    }
    else if (0x10 < bVar8) {
LAB_000bd71c:
      *(undefined1 *)(iVar2 + 0x1c6e) = 0xff;
      return 1;
    }
  }
  return 1;
}

