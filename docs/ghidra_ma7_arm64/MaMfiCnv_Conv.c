/* MaMfiCnv_Conv @ 001caec8 25800B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaMfiCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

void YAMAHA::MaMfiCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  long lVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  undefined8 *puVar15;
  byte bVar16;
  char cVar17;
  undefined8 uVar18;
  long lVar19;
  byte *pbVar20;
  long *plVar21;
  byte *pbVar22;
  byte bVar23;
  char *pcVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  ulong uVar29;
  char *pcVar30;
  uint uVar31;
  ulong uVar32;
  byte bVar33;
  undefined1 uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined8 *puVar37;
  uint uVar38;
  long lVar39;
  int iVar40;
  uint uVar41;
  long lVar42;
  char *pcVar43;
  _MASNDVOICE a_Stack_18 [6];
  char local_12;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar43 = *(char **)(param_1 + 8), param_2 == (_MASND_CMD_PARAM *)0x0)) ||
     (pcVar43 == (char *)0x0)) {
    uVar8 = 0xfffffffe;
  }
  else if (*pcVar43 == '\x01') {
    if (pcVar43[0x1b7] == '\0') {
      if (pcVar43[0x15] == '\x02') {
        pcVar43[0x15] = '\0';
      }
      pcVar43[0x1b8] = '\0';
      uVar41 = 0;
LAB_001cb024:
      cVar17 = (char)uVar41;
      if (uVar41 == 0) {
        do {
          lVar42 = *(long *)(param_1 + 8);
          if (*(char *)(lVar42 + 3) < '\0') {
            bVar16 = *(char *)(lVar42 + 3) + 0x80;
            puVar9 = (undefined1 *)(lVar42 + 0x7370);
            *(byte *)(lVar42 + 3) = bVar16;
            lVar27 = lVar42;
            while( true ) {
              bVar23 = *(byte *)(lVar27 + 0x77);
              iVar6 = (int)lVar42;
              uVar32 = (ulong)bVar23 << 1;
              if (bVar16 != 0x40) {
                if (bVar23 == 0x20) {
                  uVar32 = (ulong)(uint)bVar16;
                }
                else {
                  uVar32 = (ulong)(byte)(&DAT_0048e740)
                                        [(ulong)(bVar23 >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                }
              }
              *puVar9 = (char)uVar32;
              bVar16 = *(byte *)(lVar42 + 0x1b7);
              if (bVar16 < 0x88) {
                *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar39 + 4) = 5;
                *(undefined4 *)(lVar39 + 8) = 0;
                *(int *)(lVar39 + 0xc) = (int)lVar27 - iVar6;
                *(ulong *)(lVar39 + 0x14) = uVar32;
                *(undefined4 *)(lVar39 + 0x1c) = 0;
              }
              if (lVar27 + 1 == lVar42 + 0x10) break;
              bVar16 = *(byte *)(lVar42 + 3);
              iVar40 = (int)(lVar27 + 1);
              bVar23 = *(byte *)(lVar27 + 0x78);
              uVar32 = (ulong)bVar23 << 1;
              if (bVar16 != 0x40) {
                if (bVar23 == 0x20) {
                  uVar32 = (ulong)(uint)bVar16;
                }
                else {
                  uVar32 = (ulong)(byte)(&DAT_0048e740)
                                        [(ulong)(bVar23 >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                }
              }
              puVar9[0x14] = (char)uVar32;
              bVar16 = *(byte *)(lVar42 + 0x1b7);
              if (bVar16 < 0x88) {
                *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar39 + 4) = 5;
                *(undefined4 *)(lVar39 + 8) = 0;
                *(int *)(lVar39 + 0xc) = iVar40 - iVar6;
                *(ulong *)(lVar39 + 0x14) = uVar32;
                *(undefined4 *)(lVar39 + 0x1c) = 0;
              }
              bVar16 = *(byte *)(lVar42 + 3);
              bVar23 = *(byte *)(lVar27 + 0x79);
              uVar32 = (ulong)bVar23 << 1;
              if (bVar16 != 0x40) {
                if (bVar23 == 0x20) {
                  uVar32 = (ulong)(uint)bVar16;
                }
                else {
                  uVar32 = (ulong)(byte)(&DAT_0048e740)
                                        [(ulong)(bVar23 >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                }
              }
              puVar9[0x28] = (char)uVar32;
              bVar16 = *(byte *)(lVar42 + 0x1b7);
              if (bVar16 < 0x88) {
                *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar39 + 4) = 5;
                *(undefined4 *)(lVar39 + 8) = 0;
                *(int *)(lVar39 + 0xc) = (iVar40 + 1) - iVar6;
                *(ulong *)(lVar39 + 0x14) = uVar32;
                *(undefined4 *)(lVar39 + 0x1c) = 0;
              }
              bVar16 = *(byte *)(lVar42 + 3);
              lVar27 = lVar27 + 3;
              puVar9 = puVar9 + 0x3c;
            }
          }
          if (*(char *)(lVar42 + 0x14) == '\x01') {
            bVar16 = *(byte *)(lVar42 + 0x137);
            uVar41 = (uint)bVar16;
            *(undefined1 *)(lVar42 + 0x14) = 0;
            if (bVar16 < 0x40) {
              uVar41 = (uint)bVar16 << 1;
LAB_001cb6e4:
              if ((*(byte *)(lVar42 + 0xc) < 4) &&
                 (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar27 + 4) = 0x23;
                *(undefined4 *)(lVar27 + 8) = 0;
                *(undefined4 *)(lVar27 + 0xc) = 0;
                *(undefined8 *)(lVar27 + 0x14) = 0;
                *(uint *)(lVar27 + 0x1c) = uVar41;
              }
              uVar41 = (uint)*(byte *)(lVar42 + 0x138);
              if (*(byte *)(lVar42 + 0x138) < 0x40) goto LAB_001cb740;
LAB_001cc190:
              if (uVar41 != 0xff) goto LAB_001cb744;
            }
            else {
              if (bVar16 != 0xff) goto LAB_001cb6e4;
              uVar41 = (uint)*(byte *)(lVar42 + 0x138);
              if (0x3f < uVar41) goto LAB_001cc190;
LAB_001cb740:
              uVar41 = uVar41 << 1;
LAB_001cb744:
              if ((*(byte *)(lVar42 + 0xc) < 4) &&
                 (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar27 + 4) = 0x23;
                *(undefined4 *)(lVar27 + 8) = 0;
                *(undefined4 *)(lVar27 + 0xc) = 0;
                *(undefined8 *)(lVar27 + 0x14) = 1;
                *(uint *)(lVar27 + 0x1c) = uVar41;
              }
            }
            lVar27 = 2;
LAB_001cb984:
            do {
              uVar41 = (uint)*(byte *)(lVar42 + lVar27 + 0x137);
              if (uVar41 < 0x40) {
                uVar41 = uVar41 << 1;
LAB_001cb79c:
                if ((*(byte *)(lVar42 + 0xc) < 4) &&
                   (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x23;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(long *)(lVar39 + 0x14) = lVar27;
                  *(uint *)(lVar39 + 0x1c) = uVar41;
                }
                bVar16 = *(byte *)(lVar42 + lVar27 + 0x138);
                uVar41 = (uint)bVar16;
                if (0x3f < bVar16) goto LAB_001cb9b0;
LAB_001cb7fc:
                uVar41 = uVar41 << 1;
LAB_001cb800:
                if ((*(byte *)(lVar42 + 0xc) < 4) &&
                   (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x23;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(long *)(lVar39 + 0x14) = lVar27 + 1;
                  *(uint *)(lVar39 + 0x1c) = uVar41;
                }
                bVar16 = *(byte *)(lVar42 + lVar27 + 0x139);
                uVar41 = (uint)bVar16;
                if (0x3f < bVar16) goto LAB_001cb9cc;
LAB_001cb860:
                uVar41 = uVar41 << 1;
LAB_001cb864:
                if ((*(byte *)(lVar42 + 0xc) < 4) &&
                   (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x23;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(long *)(lVar39 + 0x14) = lVar27 + 2;
                  *(uint *)(lVar39 + 0x1c) = uVar41;
                }
                bVar16 = *(byte *)(lVar42 + lVar27 + 0x13a);
                uVar41 = (uint)bVar16;
                if (0x3f < bVar16) goto LAB_001cb9e8;
LAB_001cb8c4:
                uVar41 = uVar41 << 1;
LAB_001cb8c8:
                if ((*(byte *)(lVar42 + 0xc) < 4) &&
                   (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x23;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(long *)(lVar39 + 0x14) = lVar27 + 3;
                  *(uint *)(lVar39 + 0x1c) = uVar41;
                }
                bVar16 = *(byte *)(lVar42 + lVar27 + 0x13b);
                uVar41 = (uint)bVar16;
                if (0x3f < bVar16) goto LAB_001cba04;
LAB_001cb928:
                uVar41 = uVar41 << 1;
              }
              else {
                if (uVar41 != 0xff) goto LAB_001cb79c;
                uVar41 = (uint)*(byte *)(lVar42 + lVar27 + 0x138);
                if (uVar41 < 0x40) goto LAB_001cb7fc;
LAB_001cb9b0:
                if (uVar41 != 0xff) goto LAB_001cb800;
                uVar41 = (uint)*(byte *)(lVar42 + lVar27 + 0x139);
                if (uVar41 < 0x40) goto LAB_001cb860;
LAB_001cb9cc:
                if (uVar41 != 0xff) goto LAB_001cb864;
                uVar41 = (uint)*(byte *)(lVar42 + lVar27 + 0x13a);
                if (uVar41 < 0x40) goto LAB_001cb8c4;
LAB_001cb9e8:
                if (uVar41 != 0xff) goto LAB_001cb8c8;
                uVar41 = (uint)*(byte *)(lVar42 + lVar27 + 0x13b);
                if (uVar41 < 0x40) goto LAB_001cb928;
LAB_001cba04:
                if (uVar41 == 0xff) {
                  lVar27 = lVar27 + 5;
                  if (lVar27 == 0x20) break;
                  goto LAB_001cb984;
                }
              }
              if ((*(byte *)(lVar42 + 0xc) < 4) &&
                 (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar39 + 4) = 0x23;
                *(undefined4 *)(lVar39 + 8) = 0;
                *(undefined4 *)(lVar39 + 0xc) = 0;
                *(long *)(lVar39 + 0x14) = lVar27 + 4;
                *(uint *)(lVar39 + 0x1c) = uVar41;
              }
              lVar27 = lVar27 + 5;
            } while (lVar27 != 0x20);
            pbVar22 = (byte *)(lVar42 + 0x736e);
            uVar41 = 0;
            pbVar20 = (byte *)(lVar42 + 0x8646);
            do {
              bVar16 = pbVar22[1];
              if (*pbVar22 == bVar16) {
LAB_001cba70:
                if ((2 < *(byte *)(lVar42 + 0xc)) && (uVar41 != *pbVar20)) goto LAB_001cba88;
LAB_001cbb08:
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                if (0x87 < bVar16) goto LAB_001cba88;
                *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                *(uint *)(lVar27 + 0xc) = uVar41;
                *(undefined4 *)(lVar27 + 4) = 0x13;
                *(undefined4 *)(lVar27 + 8) = 0;
                *(undefined8 *)(lVar27 + 0x14) = 0;
                *(undefined4 *)(lVar27 + 0x1c) = 0;
                bVar16 = pbVar22[0x15];
                if (pbVar22[0x14] != bVar16) goto LAB_001cbaa0;
LAB_001cbb60:
                if (2 < *(byte *)(lVar42 + 0xc)) {
LAB_001cbab8:
                  if (uVar41 + 1 != (uint)*pbVar20) goto LAB_001cbac4;
                }
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                if (bVar16 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar27 + 4) = 0x13;
                  *(undefined4 *)(lVar27 + 8) = 0;
                  *(uint *)(lVar27 + 0xc) = uVar41 + 1;
                  *(undefined8 *)(lVar27 + 0x14) = 0;
                  *(undefined4 *)(lVar27 + 0x1c) = 0;
                }
              }
              else {
                bVar23 = *(byte *)(lVar42 + 0x1b7);
                if (bVar23 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar23 + 1;
                  lVar27 = lVar42 + (long)(int)(uint)bVar23 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar27 + 4) = 0xd;
                  *(undefined4 *)(lVar27 + 8) = 0;
                  *(uint *)(lVar27 + 0xc) = uVar41;
                  *(ulong *)(lVar27 + 0x14) = (ulong)bVar16;
                  *(undefined4 *)(lVar27 + 0x1c) = 0;
                  goto LAB_001cba70;
                }
                if ((2 < *(byte *)(lVar42 + 0xc)) && (uVar41 == *pbVar20)) goto LAB_001cbb08;
LAB_001cba88:
                bVar16 = pbVar22[0x15];
                if (pbVar22[0x14] == bVar16) goto LAB_001cbb60;
LAB_001cbaa0:
                bVar23 = *(byte *)(lVar42 + 0x1b7);
                if (bVar23 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar23 + 1;
                  lVar27 = lVar42 + (long)(int)(uint)bVar23 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar27 + 4) = 0xd;
                  *(undefined4 *)(lVar27 + 8) = 0;
                  *(uint *)(lVar27 + 0xc) = uVar41 + 1;
                  *(ulong *)(lVar27 + 0x14) = (ulong)bVar16;
                  *(undefined4 *)(lVar27 + 0x1c) = 0;
                  goto LAB_001cbb60;
                }
                if (2 < *(byte *)(lVar42 + 0xc)) goto LAB_001cbab8;
              }
LAB_001cbac4:
              uVar41 = uVar41 + 2;
              pbVar22 = pbVar22 + 0x28;
            } while (uVar41 != 0x10);
          }
          uVar41 = *(uint *)(lVar42 + 0x1d8);
          if (uVar41 == 0) {
            iVar6 = *(int *)(lVar42 + 0x208);
            if (iVar6 < 1) {
              iVar6 = *(int *)(lVar42 + 0x1fc);
              if (*(int *)(lVar42 + 0x1f0) < iVar6) {
                iVar40 = *(int *)(lVar42 + 500);
                *(int *)(lVar42 + 0x1f0) = iVar6;
                if (iVar40 < iVar6) {
                  iVar28 = 0;
                  if (*(byte *)(lVar42 + 1) != 0) {
                    iVar28 = (iVar6 - iVar40) / (int)(uint)*(byte *)(lVar42 + 1);
                  }
                  iVar6 = iVar28 + 0x200 >> 10;
                  if ((0 < iVar6) && (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar27 + 4) = 0x1b;
                    *(int *)(lVar27 + 8) = iVar6;
                    *(undefined4 *)(lVar27 + 0xc) = 0;
                    *(undefined8 *)(lVar27 + 0x14) = 0;
                    *(undefined4 *)(lVar27 + 0x1c) = 0;
                    *(uint *)(lVar42 + 500) = iVar40 + iVar6 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                    cVar17 = pcVar43[0x1b7];
                    goto LAB_001cb648;
                  }
                }
                goto LAB_001cb644;
              }
            }
            else if (*(char *)(lVar42 + 0x13) != '\x01') {
              plVar21 = *(long **)(lVar42 + 0x5b50);
              iVar40 = *(int *)(lVar42 + 0x1e0);
              iVar28 = *(int *)(lVar42 + 0x1f0);
              iVar5 = (int)plVar21[1];
              if (iVar40 < iVar5) {
                *(int *)(lVar42 + 0x1e0) = iVar5;
                iVar28 = iVar28 + (iVar5 - iVar40) * *(int *)(lVar42 + 0x1ec);
                *(int *)(lVar42 + 0x1f0) = iVar28;
              }
              iVar40 = *(int *)(lVar42 + 0x1fc);
              if (iVar40 <= iVar28) {
                *(int *)(lVar42 + 0x1f0) = iVar40;
                iVar28 = iVar40;
              }
              uVar41 = *(uint *)((long)plVar21 + 0xc);
              if (uVar41 < 0x80) {
                iVar40 = *(int *)(lVar42 + 500);
                if (iVar40 < iVar28) {
                  uVar14 = *(uint *)(plVar21 + 2);
                  iVar5 = 0;
                  if (*(byte *)(lVar42 + 1) != 0) {
                    iVar5 = (iVar28 - iVar40) / (int)(uint)*(byte *)(lVar42 + 1);
                  }
                  iVar28 = iVar5 + 0x200 >> 10;
                  if (iVar28 < 0) goto LAB_001cb0d8;
                }
                else {
                  uVar14 = *(uint *)(plVar21 + 2);
                  iVar28 = 0;
                }
                uVar32 = (ulong)uVar41;
                cVar17 = *(char *)(lVar42 + uVar32 + 0xf7);
                if (cVar17 != '\0') {
                  *(char *)(lVar42 + uVar32 + 0xf7) = cVar17 + -1;
                }
                if (*(char *)(lVar42 + 0xd) != '\0') {
                  bVar16 = *(byte *)(lVar42 + 0x1b7);
                  if (bVar16 < 0x88) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar27 + 4) = 1;
                    *(int *)(lVar27 + 8) = iVar28;
                    *(uint *)(lVar27 + 0xc) = uVar41;
                    *(ulong *)(lVar27 + 0x14) = (ulong)uVar14;
                    *(undefined4 *)(lVar27 + 0x1c) = 0;
                    *(uint *)(lVar42 + 500) = iVar40 + iVar28 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                  }
                  goto LAB_001cb0d8;
                }
                if ((*(char *)(lVar42 + uVar32 + 0xf7) != '\0') ||
                   (bVar16 = *(byte *)(lVar42 + 0x1b7), 0x87 < bVar16)) goto LAB_001cb0d8;
                *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar27 + 4) = 0x1e;
                *(int *)(lVar27 + 8) = iVar28;
                *(uint *)(lVar27 + 0xc) = uVar41;
                if (*(char *)(lVar42 + uVar32 * 0x14 + 0x736b) != -0x67) {
                  uVar14 = *(uint *)(&DAT_0048dfb0 +
                                    (ulong)(uVar14 + *(int *)(lVar42 + uVar32 * 4 + 0x20c)) * 4);
                }
                *(ulong *)(lVar27 + 0x14) = (ulong)uVar14;
                *(undefined4 *)(lVar27 + 0x1c) = 0;
                lVar27 = *plVar21;
                *(long *)(lVar42 + 0x5b50) = lVar27;
                *(uint *)(lVar42 + 500) = iVar40 + iVar28 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                *plVar21 = *(long *)(lVar42 + 0x5b60);
                *(long **)(lVar42 + 0x5b60) = plVar21;
              }
              else {
                iVar40 = *(int *)(lVar42 + 500);
                if (iVar40 < iVar28) {
                  uVar14 = *(uint *)(plVar21 + 2);
                  iVar5 = 0;
                  if (*(byte *)(lVar42 + 1) != 0) {
                    iVar5 = (iVar28 - iVar40) / (int)(uint)*(byte *)(lVar42 + 1);
                  }
                  iVar28 = iVar5 + 0x200 >> 10;
                  if (iVar28 < 0) goto LAB_001cb0d8;
                }
                else {
                  uVar14 = *(uint *)(plVar21 + 2);
                  iVar28 = 0;
                }
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                if (bVar16 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar27 + 4) = 0x21;
                  *(int *)(lVar27 + 8) = iVar28;
                  *(uint *)(lVar27 + 0xc) = (uint)(byte)((char)uVar41 + 0x80);
                  *(ulong *)(lVar27 + 0x14) = (ulong)uVar14;
                  *(undefined4 *)(lVar27 + 0x1c) = 0;
                  *(uint *)(lVar42 + 500) = iVar40 + iVar28 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                }
LAB_001cb0d8:
                lVar27 = *plVar21;
                *(long *)(lVar42 + 0x5b50) = lVar27;
                *plVar21 = *(long *)(lVar42 + 0x5b60);
                *(long **)(lVar42 + 0x5b60) = plVar21;
              }
              if (lVar27 == 0) {
                *(undefined8 *)(lVar42 + 0x5b58) = 0;
              }
              *(int *)(lVar42 + 0x208) = iVar6 + -1;
            }
            goto LAB_001cb0f8;
          }
          iVar6 = *(int *)(lVar42 + 0x1fc);
          if (iVar6 <= *(int *)(lVar42 + 0x1f0)) goto LAB_001cb0f8;
          if (*(byte *)(lVar42 + 0x8648) == 0) {
            uVar32 = 0;
          }
          else {
            uVar31 = (uint)*(byte *)(lVar42 + 0x8648);
            uVar32 = 0;
            uVar14 = uVar31 - 1 & 3;
            iVar40 = 0x7fffffff;
            if ((uVar41 & 1) != 0) {
              iVar40 = 0x7fffffff;
              if (*(int *)(lVar42 + 0x8f30) < 0x7fffffff) {
                iVar40 = *(int *)(lVar42 + 0x8f30);
              }
            }
            uVar7 = 1;
            piVar13 = (int *)(lVar42 + 0x8f50);
            if (uVar31 != 1) {
              if (uVar14 != 0) {
                if (uVar14 != 1) {
                  if (uVar14 != 2) {
                    if (((uVar41 >> 1 & 1) != 0) && (*(int *)(lVar42 + 0x8f50) < iVar40)) {
                      uVar32 = 1;
                      iVar40 = *(int *)(lVar42 + 0x8f50);
                    }
                    uVar7 = 2;
                    piVar13 = (int *)(lVar42 + 0x8f70);
                  }
                  if (((1 << (ulong)uVar7 & uVar41) != 0) && (*piVar13 < iVar40)) {
                    uVar32 = (ulong)uVar7;
                    iVar40 = *piVar13;
                  }
                  uVar7 = uVar7 + 1;
                  piVar13 = piVar13 + 8;
                }
                if (((1 << (ulong)uVar7 & uVar41) != 0) && (*piVar13 < iVar40)) {
                  uVar32 = (ulong)uVar7;
                  iVar40 = *piVar13;
                }
                uVar7 = uVar7 + 1;
                piVar13 = piVar13 + 8;
                if (uVar7 == uVar31) goto LAB_001cb554;
              }
              do {
                if (((1 << (ulong)(uVar7 & 0x1f) & uVar41) != 0) && (*piVar13 < iVar40)) {
                  uVar32 = (ulong)uVar7;
                  iVar40 = *piVar13;
                }
                if (((1 << (ulong)(uVar7 + 1 & 0x1f) & uVar41) != 0) && (piVar13[8] < iVar40)) {
                  uVar32 = (ulong)(uVar7 + 1);
                  iVar40 = piVar13[8];
                }
                if (((1 << (ulong)(uVar7 + 2 & 0x1f) & uVar41) != 0) && (piVar13[0x10] < iVar40)) {
                  uVar32 = (ulong)(uVar7 + 2);
                  iVar40 = piVar13[0x10];
                }
                if (((1 << (ulong)(uVar7 + 3 & 0x1f) & uVar41) != 0) && (piVar13[0x18] < iVar40)) {
                  uVar32 = (ulong)(uVar7 + 3);
                  iVar40 = piVar13[0x18];
                }
                uVar7 = uVar7 + 4;
                piVar13 = piVar13 + 0x20;
              } while (uVar7 != uVar31);
            }
          }
LAB_001cb554:
          iVar40 = *(int *)(lVar42 + 0x208);
          lVar27 = lVar42 + uVar32 * 0x20;
          iVar28 = *(int *)(lVar27 + 0x8f2c);
          if (0 < iVar40) {
            plVar21 = *(long **)(lVar42 + 0x5b50);
            iVar5 = (int)plVar21[1];
            if (iVar5 <= iVar28) {
              iVar4 = *(int *)(lVar42 + 0x1f0) +
                      (iVar5 - *(int *)(lVar42 + 0x1e0)) * *(int *)(lVar42 + 0x1ec);
              *(int *)(lVar42 + 0x1f0) = iVar4;
              if (iVar4 < iVar6) {
                uVar41 = *(uint *)((long)plVar21 + 0xc);
                *(int *)(lVar42 + 0x1e0) = iVar5;
                if (uVar41 < 0x80) {
                  iVar6 = *(int *)(lVar42 + 500);
                  if (iVar6 < iVar4) {
                    uVar14 = *(uint *)(plVar21 + 2);
                    iVar28 = 0;
                    if (*(byte *)(lVar42 + 1) != 0) {
                      iVar28 = (iVar4 - iVar6) / (int)(uint)*(byte *)(lVar42 + 1);
                    }
                    iVar28 = iVar28 + 0x200 >> 10;
                    if (iVar28 < 0) goto LAB_001cb624;
                  }
                  else {
                    uVar14 = *(uint *)(plVar21 + 2);
                    iVar28 = 0;
                  }
                  uVar32 = (ulong)uVar41;
                  lVar27 = lVar42 + uVar32;
                  if (*(char *)(lVar27 + 0xf7) == '\0') {
                    if (*(char *)(lVar42 + 0xd) != '\0') {
LAB_001cc920:
                      bVar16 = *(byte *)(lVar42 + 0x1b7);
                      if (bVar16 < 0x88) {
                        *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                        lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                        *(int *)(lVar27 + 8) = iVar28;
                        *(undefined4 *)(lVar27 + 4) = 1;
                        *(uint *)(lVar27 + 0xc) = uVar41;
                        *(ulong *)(lVar27 + 0x14) = (ulong)uVar14;
                        *(undefined4 *)(lVar27 + 0x1c) = 0;
                        *(uint *)(lVar42 + 500) =
                             iVar6 + iVar28 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                      }
                      goto LAB_001cb624;
                    }
                  }
                  else {
                    *(char *)(lVar27 + 0xf7) = *(char *)(lVar27 + 0xf7) + -1;
                    if (*(char *)(lVar42 + 0xd) != '\0') goto LAB_001cc920;
                    if (*(char *)(lVar27 + 0xf7) != '\0') goto LAB_001cb624;
                  }
                  bVar16 = *(byte *)(lVar42 + 0x1b7);
                  if (bVar16 < 0x88) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar27 + 4) = 0x1e;
                    *(int *)(lVar27 + 8) = iVar28;
                    *(uint *)(lVar27 + 0xc) = uVar41;
                    if (*(char *)(lVar42 + uVar32 * 0x14 + 0x736b) != -0x67) {
                      uVar14 = *(uint *)(&DAT_0048dfb0 +
                                        (ulong)(uVar14 + *(int *)(lVar42 + uVar32 * 4 + 0x20c)) * 4)
                      ;
                    }
                    *(ulong *)(lVar27 + 0x14) = (ulong)uVar14;
                    *(undefined4 *)(lVar27 + 0x1c) = 0;
                    *(uint *)(lVar42 + 500) = iVar6 + iVar28 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                  }
                }
                else {
                  iVar6 = *(int *)(lVar42 + 500);
                  if (iVar6 < iVar4) {
                    uVar14 = *(uint *)(plVar21 + 2);
                    iVar28 = 0;
                    if (*(byte *)(lVar42 + 1) != 0) {
                      iVar28 = (iVar4 - iVar6) / (int)(uint)*(byte *)(lVar42 + 1);
                    }
                    iVar28 = iVar28 + 0x200 >> 10;
                    if (iVar28 < 0) goto LAB_001cb624;
                  }
                  else {
                    uVar14 = *(uint *)(plVar21 + 2);
                    iVar28 = 0;
                  }
                  bVar16 = *(byte *)(lVar42 + 0x1b7);
                  if (bVar16 < 0x88) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar27 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar27 + 4) = 0x21;
                    *(int *)(lVar27 + 8) = iVar28;
                    *(uint *)(lVar27 + 0xc) = (uint)(byte)((char)uVar41 + 0x80);
                    *(ulong *)(lVar27 + 0x14) = (ulong)uVar14;
                    *(undefined4 *)(lVar27 + 0x1c) = 0;
                    *(uint *)(lVar42 + 500) = iVar6 + iVar28 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                  }
                }
LAB_001cb624:
                lVar27 = *plVar21;
                *(long *)(lVar42 + 0x5b50) = lVar27;
                *plVar21 = *(long *)(lVar42 + 0x5b60);
                *(long **)(lVar42 + 0x5b60) = plVar21;
                if (lVar27 == 0) {
                  *(undefined8 *)(lVar42 + 0x5b58) = 0;
                }
                *(int *)(lVar42 + 0x208) = iVar40 + -1;
                goto LAB_001cb644;
              }
            }
          }
          *(int *)(lVar42 + 0x1e0) = iVar28;
          iVar5 = *(int *)(lVar27 + 0x8f30);
          *(int *)(lVar42 + 0x1f0) = iVar5;
          if (iVar6 <= iVar5) {
            *(int *)(lVar42 + 0x1f0) = iVar6;
            *(undefined4 *)(lVar42 + 0x1d8) = 0;
            cVar17 = pcVar43[0x1b7];
            goto LAB_001cb648;
          }
          uVar14 = *(uint *)(lVar27 + 0x8f28);
          bVar16 = *(byte *)(lVar42 + 0x8710) & 0x40;
          lVar39 = *(long *)(lVar42 + uVar32 * 0x20 + 0x8f20) + (ulong)uVar14;
          bVar23 = *(byte *)(lVar39 + 1);
          uVar31 = (uint)uVar32;
          if ((*(byte *)(lVar42 + 0x8710) & 0x40) != 0) goto switchD_001cc5a8_caseD_b2;
          uVar7 = (uint)bVar23;
          if ((bVar23 & 0x7f) == 0x3f) {
            if (bVar23 == 0x7f) goto LAB_001cc800;
            if (uVar7 == 0xff) goto LAB_001cc554;
            goto switchD_001cc5a8_caseD_b2;
          }
          if (bVar23 == 0x7f) {
LAB_001cc800:
            bVar16 = *(byte *)(lVar39 + 2);
            if (bVar16 < 0xf0) {
              if (*(short *)(lVar42 + 0x8632) == 3) {
                if (bVar16 == 0) {
                  *(undefined1 *)
                   (lVar42 + (ulong)((uint)(*(byte *)(lVar39 + 3) >> 6) + uVar31 * 4) + 0x157) =
                       0x3f;
                }
              }
              else if (bVar16 == 0) {
                *(byte *)(lVar42 + (ulong)((uint)(*(byte *)(lVar39 + 3) >> 6) + uVar31 * 4) + 0x157)
                     = *(byte *)(lVar39 + 4) & 0x3f;
              }
              iVar6 = 0;
              if (*(int *)(lVar42 + 500) < iVar5) {
                iVar6 = 0;
                if (*(byte *)(lVar42 + 1) != 0) {
                  iVar6 = (iVar5 - *(int *)(lVar42 + 500)) / (int)(uint)*(byte *)(lVar42 + 1);
                }
                iVar6 = iVar6 + 0x200 >> 10;
              }
              lVar19 = *(long *)(param_1 + 8);
              bVar23 = *(byte *)(lVar39 + 3);
              lVar39 = lVar19 + 0x8568;
              if ((*(char *)(lVar19 + 0x8640) == '\x04') &&
                 ((*(byte *)(lVar19 + 0x8710) & 0x40) == 0)) {
                uVar14 = (uint)bVar23;
                if (bVar16 == 0x80) {
                  uVar7 = (uint)(bVar23 >> 6) + uVar31 * 4;
                  *(char *)(lVar19 + (ulong)uVar7 + 0x177) = (char)(uVar14 & 0x3f);
                  if ((-1 < iVar6) && (bVar16 = *(byte *)(lVar19 + 0x1b7), bVar16 < 0x88)) {
                    *(byte *)(lVar19 + 0x1b7) = bVar16 + 1;
                    iVar40 = *(int *)(lVar19 + 500);
                    uVar41 = *(uint *)(lVar42 + 0x1d8);
                    lVar39 = lVar19 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(int *)(lVar39 + 8) = iVar6;
                    *(uint *)(lVar39 + 0xc) = uVar7 + 0x10;
                    *(undefined4 *)(lVar39 + 4) = 0x24;
                    iVar28 = *(int *)(&DAT_0048d870 + (ulong)((uVar14 & 0x3f) << 1) * 4);
                    bVar16 = *(byte *)(lVar19 + 7);
                    bVar23 = *(byte *)(lVar19 + 2);
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                    uVar14 = *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar16 * 4) +
                             *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar23 * 4) + iVar28;
                    if (0xc0 < uVar14) {
                      uVar14 = 0xc0;
                    }
                    *(ulong *)(lVar39 + 0x14) = (ulong)(uint)(&DAT_0048dc70)[uVar14];
                    *(uint *)(lVar19 + 500) = iVar40 + iVar6 * (uint)*(byte *)(lVar19 + 1) * 0x400;
                    goto joined_r0x001cd090;
                  }
                }
                else {
                  if (bVar16 < 0x81) {
                    if (bVar16 == 0) {
                      uVar14 = uVar14 & 0x3f;
                      uVar7 = (uint)(bVar23 >> 6) + uVar31 * 4;
                      uVar29 = (ulong)uVar7;
                      bVar16 = (byte)uVar14;
                      *(byte *)(lVar19 + uVar29 + 0x197) = bVar16;
                      if (iVar6 == -4) {
                        *(byte *)(lVar39 + uVar29 + 0x143) = *(byte *)(lVar39 + uVar29 + 0x143) | 2;
                        *(undefined1 *)(lVar19 + 0x8644) = 1;
                        uVar41 = *(uint *)(lVar42 + 0x1d8);
                      }
                      else {
                        if (iVar6 != -3) {
                          if (-1 < iVar6) {
                            if (*(int *)(lVar39 + (ulong)uVar14 * 0x20 + 0x1bc) != 2) {
                              uVar14 = *(uint *)(&DAT_0048d870 +
                                                (long)(int)((uint)*(byte *)(lVar19 + uVar29 + 0x157)
                                                           << 1) * 4);
                              if (*(char *)(lVar19 + 0x8642) == '\x01') {
                                bVar23 = *(byte *)(lVar19 + 0x1b7);
                                bVar33 = *(byte *)(lVar19 + 0x117);
                                bVar3 = *(byte *)(lVar19 + 0x118);
                                if (bVar23 < 0x88) {
                                  *(byte *)(lVar19 + 0x1b7) = bVar23 + 1;
                                  iVar40 = *(int *)(lVar19 + 500);
                                  lVar39 = lVar19 + (long)(int)(uint)bVar23 * 0x14 + 0x7ac0;
                                  *(int *)(lVar39 + 8) = iVar6;
                                  *(uint *)(lVar39 + 0xc) = (uint)bVar33;
                                  *(undefined4 *)(lVar39 + 4) = 0x21;
                                  *(ulong *)(lVar39 + 0x14) = (ulong)bVar3;
                                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                                  iVar28 = iVar6 * (uint)*(byte *)(lVar19 + 1);
                                  iVar6 = 0;
                                  *(int *)(lVar19 + 500) = iVar40 + iVar28 * 0x400;
                                  goto LAB_001cd1b4;
                                }
                              }
                              else {
LAB_001cd1b4:
                                uVar41 = uVar7 + 0x10;
                                bVar23 = *(byte *)(lVar19 + 0x1b7);
                                if (bVar23 < 0x88) {
                                  uVar29 = (ulong)uVar41;
                                  bVar33 = *(byte *)(lVar19 + uVar29 + 0xb7);
                                  if ((bVar33 == 0xff) || (*(byte *)(lVar19 + 0x8642) < 2)) {
                                    iVar40 = *(int *)(lVar19 + 500);
                                  }
                                  else {
                                    if ((*(char *)(lVar19 + 0xd) == '\0') ||
                                       (*(char *)(lVar19 + 0x8647) == '\x01')) {
                                      iVar40 = *(int *)(&DAT_0048d870 +
                                                       (long)(int)(*(byte *)(lVar19 + uVar29 + 0xd7)
                                                                  & 0x7f) * 4);
                                    }
                                    else {
                                      iVar40 = *(int *)(&DAT_0048da70 +
                                                       (long)(int)(*(byte *)(lVar19 + uVar29 + 0xd7)
                                                                  & 0x7f) * 4);
                                    }
                                    *(byte *)(lVar19 + 0x1b7) = bVar23 + 1;
                                    iVar28 = *(int *)(&DAT_0048d870 +
                                                     (long)(int)(uint)*(byte *)(lVar19 + 7) * 4);
                                    iVar5 = *(int *)(&DAT_0048d870 +
                                                    (long)(int)(uint)*(byte *)(lVar19 + 2) * 4);
                                    lVar39 = lVar19 + (long)(int)(uint)bVar23 * 0x14 + 0x7ac0;
                                    *(undefined4 *)(lVar39 + 4) = 0x22;
                                    uVar38 = iVar28 + iVar5 + iVar40;
                                    *(int *)(lVar39 + 8) = iVar6;
                                    *(uint *)(lVar39 + 0xc) = uVar41;
                                    if (0xc0 < uVar38) {
                                      uVar38 = 0xc0;
                                    }
                                    *(ulong *)(lVar39 + 0x14) = (ulong)bVar33;
                                    if (((*(char *)(lVar19 + 0x10) == '\x01') && (uVar38 < 0x19)) &&
                                       (*(char *)(lVar19 + 0x870f) == '\x01')) {
                                      uVar38 = 0x19;
                                    }
                                    iVar40 = *(int *)(lVar19 + 500);
                                    *(undefined4 *)(lVar39 + 0x1c) = (&DAT_0048dc70)[uVar38];
                                    bVar23 = *(byte *)(lVar19 + 1);
                                    *(undefined1 *)(lVar19 + uVar29 + 0xb7) = 0xff;
                                    *(undefined1 *)(lVar19 + uVar29 + 0xd7) = 0;
                                    iVar28 = iVar6 * (uint)bVar23;
                                    bVar23 = *(byte *)(lVar19 + 0x1b7);
                                    iVar6 = 0;
                                    iVar40 = iVar40 + iVar28 * 0x400;
                                  }
                                  if (0xc0 < uVar14) {
                                    uVar14 = 0xc0;
                                  }
                                  *(byte *)(lVar19 + 0x1b7) = bVar23 + 1;
                                  lVar39 = lVar19 + (long)(int)(uint)bVar23 * 0x14 + 0x7ac0;
                                  *(undefined4 *)(lVar39 + 4) = 0x20;
                                  *(int *)(lVar39 + 8) = iVar6;
                                  *(uint *)(lVar39 + 0xc) = uVar41;
                                  *(ulong *)(lVar39 + 0x14) = (ulong)bVar16;
                                  if (((*(char *)(lVar19 + 0x10) == '\x01') && (uVar14 < 0x19)) &&
                                     (*(char *)(lVar19 + 0x870f) == '\x01')) {
                                    uVar14 = 0x19;
                                  }
                                  uVar41 = *(uint *)(lVar42 + 0x1d8);
                                  *(undefined4 *)(lVar39 + 0x1c) = (&DAT_0048dc70)[uVar14];
                                  *(uint *)(lVar19 + 500) =
                                       iVar40 + iVar6 * (uint)*(byte *)(lVar19 + 1) * 0x400;
                                }
                                else {
                                  uVar41 = *(uint *)(lVar42 + 0x1d8);
                                }
                              }
                              *(char *)(lVar19 + 0x117) = (char)uVar7 + '\x10';
                              *(byte *)(lVar19 + 0x118) = bVar16;
                              goto joined_r0x001cd090;
                            }
                            if (*(char *)(lVar19 + 0x8642) != '\x01') {
                              uVar14 = *(uint *)(&DAT_0048d870 +
                                                (long)(int)((uint)*(byte *)(lVar19 + uVar29 + 0x157)
                                                           << 1) * 4);
                              goto LAB_001cd1b4;
                            }
                          }
                          goto switchD_001cc5a8_caseD_b2;
                        }
                        iVar6 = *(int *)(lVar39 + (ulong)uVar14 * 0x20 + 0x1bc);
                        if (iVar6 == 1) {
                          DAT_005ddc61 = 0x80;
                          uVar34 = 0;
                        }
                        else if (iVar6 == 2) {
                          uVar34 = 0x40;
                          DAT_005ddc61 = 0xc0;
                        }
                        else {
                          uVar34 = 0xff;
                          DAT_005ddc61 = 0xff;
                        }
                        lVar39 = lVar19 + 0x8568 + (ulong)uVar14 * 0x20;
                        if ((*(uint *)(lVar39 + 0x1b0) & 4) == 0) {
                          DAT_005ddc61 = uVar34;
                        }
                        DAT_005ddc60 = bVar16;
                        FUN_001b9cb4(param_1,0xd,uVar7 + 0x10,&DAT_005ddc60,
                                     *(undefined4 *)(lVar39 + 0x1c0));
                        uVar41 = *(uint *)(lVar42 + 0x1d8);
                      }
                    }
                    else {
                      if (((bVar16 != 1) || (iVar6 < 0)) ||
                         (bVar16 = *(byte *)(lVar19 + 0x1b7), 0x87 < bVar16))
                      goto switchD_001cc5a8_caseD_b2;
                      *(byte *)(lVar19 + 0x1b7) = bVar16 + 1;
                      iVar40 = *(int *)(lVar19 + 500);
                      uVar41 = *(uint *)(lVar42 + 0x1d8);
                      lVar39 = lVar19 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                      *(int *)(lVar39 + 8) = iVar6;
                      *(undefined4 *)(lVar39 + 4) = 0x21;
                      *(uint *)(lVar39 + 0xc) = (bVar23 >> 6) + 0x10 + uVar31 * 4;
                      *(ulong *)(lVar39 + 0x14) = (ulong)bVar23 & 0x3f;
                      *(undefined4 *)(lVar39 + 0x1c) = 0;
                      *(uint *)(lVar19 + 500) = iVar40 + iVar6 * (uint)*(byte *)(lVar19 + 1) * 0x400
                      ;
                    }
                    goto joined_r0x001cd090;
                  }
                  if (bVar16 == 0x81) {
                    uVar7 = (uint)(bVar23 >> 6) + uVar31 * 4;
                    if ((((*(byte *)(lVar39 + (ulong)uVar7 + 0x143) >> 1 & 1) != 0) &&
                        (bVar16 = *(byte *)(lVar19 + (ulong)uVar7 + 0x197), bVar16 < 0x40)) &&
                       (*(int *)(lVar39 + (ulong)bVar16 * 0x20 + 0x1bc) != 2)) {
                      uVar14 = uVar14 & 0x3f;
                      uVar29 = (ulong)(uVar14 << 1);
                      *(char *)(lVar19 + (ulong)bVar16 + 0x137) = (char)uVar14;
                      bVar16 = *(byte *)(lVar19 + 3);
                      if ((bVar16 != 0x40) && (uVar29 = (ulong)bVar16, uVar14 != 0x20)) {
                        uVar29 = (ulong)(byte)(&DAT_0048e740)
                                              [(ulong)(uVar14 >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                      }
                      *(char *)(lVar19 + (ulong)(uVar7 + 0x10) * 0x14 + 0x7370) = (char)uVar29;
                      if ((-1 < iVar6) && (bVar16 = *(byte *)(lVar19 + 0x1b7), bVar16 < 0x88)) {
                        *(byte *)(lVar19 + 0x1b7) = bVar16 + 1;
                        iVar40 = *(int *)(lVar19 + 500);
                        uVar41 = *(uint *)(lVar42 + 0x1d8);
                        lVar39 = lVar19 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                        *(int *)(lVar39 + 8) = iVar6;
                        *(undefined4 *)(lVar39 + 4) = 5;
                        *(uint *)(lVar39 + 0xc) = uVar7 + 0x10;
                        *(ulong *)(lVar39 + 0x14) = uVar29;
                        *(undefined4 *)(lVar39 + 0x1c) = 0;
                        *(uint *)(lVar19 + 500) =
                             iVar40 + iVar6 * (uint)*(byte *)(lVar19 + 1) * 0x400;
                        goto joined_r0x001cd090;
                      }
                    }
                  }
                  else if (bVar16 == 0x90) {
                    uVar14 = uVar14 & 0x1f;
                    uVar7 = (uint)*(byte *)(lVar19 + (ulong)((uint)(bVar23 >> 6) + uVar31 * 4) +
                                           0x27);
                    uVar41 = uVar7 + 0x10;
                    if ((bVar23 & 0x20) == 0) {
                      uVar41 = uVar7;
                    }
                    *(char *)(lVar39 + (ulong)uVar41 + 0x163) = (char)uVar14;
                    if (uVar14 < 4) {
                      *(byte *)(lVar19 + 0xb) =
                           (&DAT_0048e730)[(int)uVar14] | *(byte *)(lVar19 + 0xb);
                      if (*(char *)(lVar19 + 0x870c) == '\x01') {
                        if (((&DAT_0048e730)[uVar14] & *(byte *)(lVar19 + 10)) == 0) {
                          uVar41 = *(uint *)(lVar42 + 0x1d8);
                          goto joined_r0x001cd090;
                        }
LAB_001ccf24:
                        if ((-1 < iVar6) && (*(byte *)(lVar19 + 0x1b7) < 0x88)) {
                          FUN_00128664(lVar19,iVar6,(ulong)uVar41);
                          bVar16 = *(byte *)(lVar19 + 0x1b7);
                          *(byte *)(lVar19 + 0x1b7) = bVar16 + 1;
                          lVar19 = lVar19 + (ulong)bVar16 * 0x14 + 0x7ac0;
                          *(undefined4 *)(lVar19 + 4) = 0x32;
                          *(undefined4 *)(lVar19 + 8) = 0;
                          *(uint *)(lVar19 + 0xc) = uVar41;
                          if (uVar14 == 0x1f) {
                            uVar29 = 0;
                          }
                          else {
                            uVar29 = (ulong)(uVar14 + 2);
                          }
                          uVar41 = *(uint *)(lVar42 + 0x1d8);
                          *(ulong *)(lVar19 + 0x14) = uVar29;
                          *(undefined4 *)(lVar19 + 0x1c) = 0;
                          goto joined_r0x001cd090;
                        }
                      }
                    }
                    else if (*(char *)(lVar19 + 0x870c) == '\x01') goto LAB_001ccf24;
LAB_001cc168:
                    uVar41 = *(uint *)(lVar42 + 0x1d8);
                    goto joined_r0x001cd090;
                  }
                }
              }
            }
            else {
              iVar6 = 0;
              if (*(int *)(lVar42 + 500) < iVar5) {
                iVar6 = 0;
                if (*(byte *)(lVar42 + 1) != 0) {
                  iVar6 = (iVar5 - *(int *)(lVar42 + 500)) / (int)(uint)*(byte *)(lVar42 + 1);
                }
                iVar6 = iVar6 + 0x200 >> 10;
              }
              lVar19 = *(long *)(param_1 + 8);
              if ((((*(char *)(lVar19 + 0x8640) == '\x04') &&
                   ((*(byte *)(lVar19 + 0x8710) >> 6 & 1) == 0)) && (bVar16 == 0xf0)) &&
                 (((uVar31 == 0 &&
                    5 < (uint)*(byte *)(lVar39 + 4) + (uint)*(byte *)(lVar39 + 3) * 0x100 &&
                   (-3 < iVar6)) && (*(char *)(lVar19 + 0x870c) != '\0')))) {
                uVar14 = *(uint *)(lVar19 + 0xb0c);
                uVar29 = (ulong)uVar14;
                uVar41 = *(byte *)(lVar39 + 5) & 0x1f;
                lVar1 = lVar19 + uVar29 * 0x14;
                *(uint *)(lVar19 + ((ulong)uVar41 + 0x2c4) * 4) = uVar14;
                *(uint *)(lVar1 + 0xb50) = uVar41;
                *(uint *)(lVar1 + 0xb54) = (uint)*(byte *)(lVar39 + 6);
                bVar16 = *(byte *)(lVar39 + 7);
                if (bVar16 < 0x44) {
                  *(undefined4 *)(lVar1 + 0xb58) = 0x44;
                }
                else if (bVar16 < 0xbc) {
                  *(uint *)(lVar1 + 0xb58) = (uint)bVar16;
                }
                else {
                  *(undefined4 *)(lVar1 + 0xb58) = 0xbb;
                }
                bVar16 = *(byte *)(lVar39 + 8);
                lVar1 = lVar19 + uVar29 * 0x14;
                if (bVar16 < 0x62) {
                  *(undefined4 *)(lVar1 + 0xb5c) = 0x62;
                }
                else if (bVar16 < 0x9f) {
                  *(uint *)(lVar1 + 0xb5c) = (uint)bVar16;
                }
                else {
                  *(undefined4 *)(lVar1 + 0xb5c) = 0x9e;
                }
                iVar40 = (uint)*(byte *)(lVar39 + 9) * 0x100 + (uint)*(byte *)(lVar39 + 10);
                *(uint *)(lVar19 + uVar29 * 0x14 + 0xb60) =
                     ((int)*(uint *)(lVar19 + 0x1ec) >> 10) * iVar40 +
                     (iVar40 * (*(uint *)(lVar19 + 0x1ec) & 0x3ff) + 0x200 >> 10);
                if ((-1 < iVar6) && (bVar16 = *(byte *)(lVar19 + 0x1b7), bVar16 < 0x88)) {
                  *(byte *)(lVar19 + 0x1b7) = bVar16 + 1;
                  iVar40 = *(int *)(lVar19 + 500);
                  lVar39 = lVar19 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(int *)(lVar39 + 8) = iVar6;
                  *(undefined4 *)(lVar39 + 4) = 0x30;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(ulong *)(lVar39 + 0x14) = (ulong)(byte)uVar41;
                  *(uint *)(lVar39 + 0x1c) = uVar14;
                  *(uint *)(lVar19 + 500) = iVar40 + iVar6 * (uint)*(byte *)(lVar19 + 1) * 0x400;
                }
                uVar41 = *(uint *)(lVar42 + 0x1d8);
                *(uint *)(lVar19 + 0xb0c) = uVar14 + 1 & 0x3ff;
                goto joined_r0x001cd090;
              }
            }
            goto switchD_001cc5a8_caseD_b2;
          }
          if (uVar7 != 0xff) {
            uVar7 = uVar7 & 0x3f;
            bVar16 = *(byte *)(lVar39 + 2);
            bVar23 = *(byte *)(lVar42 + (ulong)((uint)(bVar23 >> 6) + uVar31 * 4) + 0x27);
            uVar29 = (ulong)bVar23;
            if (*(short *)(lVar42 + 0x8630) == 2) {
              bVar33 = 0x7f;
              uVar35 = 0x7f;
            }
            else {
              bVar33 = *(byte *)(lVar39 + 3) >> 1;
              uVar35 = (ulong)bVar33;
              uVar7 = uVar7 + *(int *)(&DAT_0048ec80 + (long)(int)(*(byte *)(lVar39 + 3) & 3) * 4);
            }
            lVar39 = lVar42 + uVar29 * 0x14;
            *(byte *)(lVar42 + uVar29 + 0xa7) = bVar33;
            bVar33 = *(byte *)(lVar39 + 0x736b);
            if ((char)bVar33 < '\0') {
              bVar3 = *(byte *)(lVar39 + 0x736a);
              if ((uint)bVar3 + (uint)bVar33 * 2 < 0x133) {
                if (*(byte *)(lVar42 + 0xc) < 2) {
                  uVar7 = uVar7 + 0x23;
                  goto LAB_001cbf10;
                }
                if (uVar7 < 0x3f) {
                  if (bVar33 == 0x99) {
                    if ((int)uVar7 < 0x20) goto LAB_001cbf10;
                  }
                  else if (bVar33 < 0x9a) {
                    uVar7 = *(uint *)(&DAT_0048e260 + ((ulong)bVar3 * 0x40 + (long)(int)uVar7) * 4);
LAB_001cbf10:
                    uVar14 = uVar7 & 0xff;
                    uVar36 = (ulong)uVar14;
                    if (((uVar7 >> 7 & 1) == 0) && (bVar16 != 0)) {
                      if (iVar40 == 0) {
LAB_001cbf20:
                        if (*(int *)(lVar42 + 500) < iVar5) {
                          lVar39 = *(long *)(param_1 + 8);
                          iVar6 = 0;
                          if (*(byte *)(lVar42 + 1) != 0) {
                            iVar6 = (iVar5 - *(int *)(lVar42 + 500)) /
                                    (int)(uint)*(byte *)(lVar42 + 1);
                          }
                          iVar6 = iVar6 + 0x200 >> 10;
                          if (-1 < iVar6) goto LAB_001ccd60;
                        }
                        else {
                          lVar39 = *(long *)(param_1 + 8);
                          iVar6 = 0;
LAB_001ccd60:
                          lVar19 = lVar39 + uVar29;
                          if (*(byte *)(lVar19 + 0x37) < 2) {
                            *(char *)(lVar19 + 0xf7) = *(char *)(lVar19 + 0xf7) + '\x01';
                            bVar33 = *(byte *)(lVar39 + 0x1b7);
                            if (bVar33 < 0x88) {
                              uVar41 = (uint)bVar23;
                              if (*(char *)(lVar39 + 0xd) == '\0') {
                                *(byte *)(lVar39 + 0x1b7) = bVar33 + 1;
                                lVar19 = lVar39 + (long)(int)(uint)bVar33 * 0x14 + 0x7ac0;
                                *(undefined4 *)(lVar19 + 4) = 0x1c;
                                *(int *)(lVar19 + 8) = iVar6;
                                *(uint *)(lVar19 + 0xc) = uVar41;
                                uVar41 = uVar14;
                                if (*(char *)(lVar39 + uVar29 * 0x14 + 0x736b) != -0x67) {
                                  uVar41 = *(uint *)(&DAT_0048dfb0 +
                                                    (ulong)(uVar14 + *(int *)(lVar39 + uVar29 * 4 +
                                                                             0x20c)) * 4);
                                }
                                *(ulong *)(lVar19 + 0x14) = (ulong)uVar41;
                                iVar40 = *(int *)(lVar39 + 500);
                                uVar26 = (ulong)((uint)(byte)(&DAT_0048e460)[uVar35] +
                                                (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar39 + 7)]);
                                if (0xc0 < (uint)(byte)(&DAT_0048e460)[uVar35] +
                                           (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar39 + 7)]) {
                                  uVar26 = 0xc0;
                                }
                                *(uint *)(lVar19 + 0x1c) = (uint)(byte)(&DAT_0048e4e0)[uVar26];
                                *(uint *)(lVar39 + 500) =
                                     iVar40 + iVar6 * (uint)*(byte *)(lVar39 + 1) * 0x400;
                              }
                              else {
                                *(byte *)(lVar39 + 0x1b7) = bVar33 + 1;
                                bVar3 = (&DAT_0048e460)[uVar35];
                                lVar19 = lVar39 + (long)(int)(uint)bVar33 * 0x14 + 0x7ac0;
                                *(ulong *)(lVar19 + 0x14) = uVar36;
                                *(undefined4 *)(lVar19 + 4) = 0;
                                *(int *)(lVar19 + 8) = iVar6;
                                *(uint *)(lVar19 + 0xc) = uVar41;
                                uVar35 = (ulong)((uint)bVar3 +
                                                (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar39 + 7)]);
                                if (0xc0 < (uint)bVar3 +
                                           (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar39 + 7)]) {
                                  uVar35 = 0xc0;
                                }
                                *(uint *)(lVar19 + 0x1c) = (uint)(byte)(&DAT_0048e4e0)[uVar35];
                                if ((((*(char *)(lVar39 + 0x10) == '\x01') &&
                                     (*(char *)(lVar39 + 0x870f) == '\x01')) &&
                                    (MaSndDrv_GetVoiceInfo(param_1,uVar41,uVar14,a_Stack_18),
                                    local_12 == '\x01')) && (0x3e < *(uint *)(lVar19 + 0x1c))) {
                                  *(undefined4 *)(lVar19 + 0x1c) = 0x3e;
                                }
                                *(uint *)(lVar39 + 500) =
                                     *(int *)(lVar39 + 500) +
                                     iVar6 * (uint)*(byte *)(lVar39 + 1) * 0x400;
                              }
                            }
                          }
                        }
                        if (((bVar23 == *(byte *)(lVar39 + 0x7368)) &&
                            (uVar14 == *(byte *)(lVar39 + 0x7369))) &&
                           (bVar33 = *(byte *)(lVar39 + 0x1b7), bVar33 < 0x88)) {
                          *(byte *)(lVar39 + 0x1b7) = bVar33 + 1;
                          lVar39 = lVar39 + (long)(int)(uint)bVar33 * 0x14 + 0x7ac0;
                          *(undefined4 *)(lVar39 + 4) = 0x25;
                          *(undefined4 *)(lVar39 + 8) = 0;
                          *(undefined4 *)(lVar39 + 0xc) = 0;
                          *(undefined8 *)(lVar39 + 0x14) = 0x11;
                          *(undefined4 *)(lVar39 + 0x1c) = 0;
                        }
                      }
                      else {
                        iVar6 = FUN_0012809c(lVar42,(uint)bVar16 + iVar28,uVar29,uVar36);
                        if (iVar6 == 0) {
                          iVar5 = *(int *)(lVar42 + 0x1f0);
                          goto LAB_001cbf20;
                        }
                      }
                      puVar15 = *(undefined8 **)(lVar42 + 0x5b60);
                      iVar6 = (uint)bVar16 + *(int *)(lVar42 + 0x1e0);
                      if (puVar15 == (undefined8 *)0x0) {
                        FUN_0012812c(lVar42,0,uVar29,uVar36);
                        uVar41 = *(uint *)(lVar42 + 0x1d8);
                      }
                      else {
                        iVar40 = *(int *)(lVar42 + 0x208);
                        *(undefined8 *)(lVar42 + 0x5b60) = *puVar15;
                        *(int *)(puVar15 + 1) = iVar6;
                        *(uint *)((long)puVar15 + 0xc) = (uint)bVar23;
                        *(uint *)(puVar15 + 2) = uVar14;
                        *(int *)(lVar42 + 0x208) = iVar40 + 1;
                        if (iVar40 + 1 == 1) {
                          *(undefined8 **)(lVar42 + 0x5b50) = puVar15;
                          *puVar15 = 0;
                          *(undefined8 **)(lVar42 + 0x5b58) = puVar15;
                          uVar41 = *(uint *)(lVar42 + 0x1d8);
                        }
                        else {
                          puVar37 = *(undefined8 **)(lVar42 + 0x5b58);
                          if (iVar6 < *(int *)(puVar37 + 1)) {
                            puVar37 = *(undefined8 **)(lVar42 + 0x5b50);
                            if (*(int *)(puVar37 + 1) < iVar6) {
                              puVar10 = (undefined8 *)*puVar37;
                              puVar12 = puVar10;
                              if ((1 < iVar40) && (*(int *)(puVar10 + 1) < iVar6)) {
                                uVar41 = iVar40 - 2U & 7;
                                iVar28 = 1;
                                puVar11 = puVar10;
                                if (uVar41 == 0) goto LAB_001cc0b4;
                                puVar11 = (undefined8 *)*puVar10;
                                iVar28 = 2;
                                puVar12 = puVar11;
                                puVar37 = puVar10;
                                if (*(int *)(puVar11 + 1) < iVar6) {
                                  if (uVar41 == 1) goto LAB_001cc0b4;
                                  if (uVar41 != 2) {
                                    if (uVar41 != 3) {
                                      puVar10 = puVar11;
                                      if (uVar41 != 4) {
                                        if (uVar41 != 5) {
                                          if (uVar41 != 6) {
                                            puVar10 = (undefined8 *)*puVar11;
                                            iVar28 = 3;
                                            puVar12 = puVar10;
                                            puVar37 = puVar11;
                                            if (iVar6 <= *(int *)(puVar10 + 1)) goto LAB_001cc160;
                                          }
                                          puVar11 = (undefined8 *)*puVar10;
                                          iVar28 = iVar28 + 1;
                                          puVar12 = puVar11;
                                          puVar37 = puVar10;
                                          if (iVar6 <= *(int *)(puVar11 + 1)) goto LAB_001cc160;
                                        }
                                        puVar10 = (undefined8 *)*puVar11;
                                        iVar28 = iVar28 + 1;
                                        puVar12 = puVar10;
                                        puVar37 = puVar11;
                                        if (iVar6 <= *(int *)(puVar10 + 1)) goto LAB_001cc160;
                                      }
                                      puVar11 = (undefined8 *)*puVar10;
                                      iVar28 = iVar28 + 1;
                                      puVar12 = puVar11;
                                      puVar37 = puVar10;
                                      if (iVar6 <= *(int *)(puVar11 + 1)) goto LAB_001cc160;
                                    }
                                    puVar12 = (undefined8 *)*puVar11;
                                    iVar28 = iVar28 + 1;
                                    puVar37 = puVar11;
                                    if (iVar6 <= *(int *)(puVar12 + 1)) goto LAB_001cc160;
                                  }
                                  puVar11 = (undefined8 *)*puVar12;
                                  iVar28 = iVar28 + 1;
                                  iVar5 = *(int *)(puVar11 + 1);
                                  puVar37 = puVar12;
                                  while (puVar12 = puVar11, iVar5 < iVar6) {
LAB_001cc0b4:
                                    puVar10 = (undefined8 *)*puVar11;
                                    puVar12 = puVar10;
                                    puVar37 = puVar11;
                                    if (((((iVar28 + 1 == iVar40) ||
                                          (iVar6 <= *(int *)(puVar10 + 1))) ||
                                         (puVar11 = (undefined8 *)*puVar10, puVar12 = puVar11,
                                         puVar37 = puVar10, iVar6 <= *(int *)(puVar11 + 1))) ||
                                        ((puVar10 = (undefined8 *)*puVar11, puVar12 = puVar10,
                                         puVar37 = puVar11, iVar6 <= *(int *)(puVar10 + 1) ||
                                         (puVar11 = (undefined8 *)*puVar10, puVar12 = puVar11,
                                         puVar37 = puVar10, iVar6 <= *(int *)(puVar11 + 1))))) ||
                                       ((puVar10 = (undefined8 *)*puVar11, puVar12 = puVar10,
                                        puVar37 = puVar11, iVar6 <= *(int *)(puVar10 + 1) ||
                                        ((puVar11 = (undefined8 *)*puVar10, puVar12 = puVar11,
                                         puVar37 = puVar10, iVar6 <= *(int *)(puVar11 + 1) ||
                                         (puVar12 = (undefined8 *)*puVar11, puVar37 = puVar11,
                                         iVar6 <= *(int *)(puVar12 + 1))))))) break;
                                    puVar11 = (undefined8 *)*puVar12;
                                    iVar28 = iVar28 + 8;
                                    puVar37 = puVar12;
                                    iVar5 = *(int *)(puVar11 + 1);
                                  }
                                }
                              }
LAB_001cc160:
                              *puVar15 = puVar12;
                              *puVar37 = puVar15;
                              goto LAB_001cc168;
                            }
                            *puVar15 = puVar37;
                            *(undefined8 **)(lVar42 + 0x5b50) = puVar15;
                            uVar41 = *(uint *)(lVar42 + 0x1d8);
                          }
                          else {
                            *puVar15 = 0;
                            *puVar37 = puVar15;
                            *(undefined8 **)(lVar42 + 0x5b58) = puVar15;
                            uVar41 = *(uint *)(lVar42 + 0x1d8);
                          }
                        }
                      }
                      goto joined_r0x001cd090;
                    }
                  }
                }
              }
            }
            else {
              uVar7 = uVar7 + 0x2d;
              if (bVar33 < 0x19) goto LAB_001cbf10;
            }
            goto switchD_001cc5a8_caseD_b2;
          }
LAB_001cc554:
          bVar23 = *(byte *)(lVar39 + 2);
          if (0xef < bVar23) {
            iVar6 = 0;
            if (*(int *)(lVar42 + 500) < iVar5) {
              iVar6 = 0;
              if (*(byte *)(lVar42 + 1) != 0) {
                iVar6 = (iVar5 - *(int *)(lVar42 + 500)) / (int)(uint)*(byte *)(lVar42 + 1);
              }
              iVar6 = iVar6 + 0x200 >> 10;
            }
            FUN_001bb5b0(param_1,iVar6,uVar32,bVar23,lVar39 + 5,
                         (uint)*(byte *)(lVar39 + 4) + (uint)*(byte *)(lVar39 + 3) * 0x100);
            uVar41 = *(uint *)(lVar42 + 0x1d8);
            goto joined_r0x001cd090;
          }
          iVar40 = *(int *)(lVar42 + 500);
          iVar6 = 0;
          if (iVar40 < iVar5) {
            iVar6 = 0;
            if (*(byte *)(lVar42 + 1) != 0) {
              iVar6 = (iVar5 - iVar40) / (int)(uint)*(byte *)(lVar42 + 1);
            }
            iVar6 = iVar6 + 0x200 >> 10;
          }
          bVar33 = *(byte *)(lVar39 + 3);
          uVar29 = (ulong)bVar33;
          if (0x3a < bVar23 - 0xb0) goto switchD_001cc5a8_caseD_b2;
          uVar38 = (uint)bVar33;
          uVar7 = (uint)bVar33;
          uVar34 = (undefined1)uVar32;
          switch((uint)bVar23) {
          case 0xb0:
            if (((uVar31 == 0) && (uVar7 < 0x80)) && (*(byte *)(lVar42 + 2) = bVar33, -1 < iVar6)) {
              bVar16 = *(byte *)(lVar42 + 0x1b7);
              uVar7 = (uint)bVar16;
              uVar38 = (uint)(byte)(&DAT_0048e460)[uVar29];
              uVar14 = (uint)(byte)(&DAT_0048e460)[uVar29] +
                       (uint)(byte)(&DAT_0048e460)[(ulong)*(byte *)(lVar42 + 0x67) * 2];
              uVar29 = (ulong)uVar14;
              if (0xc0 < uVar14) {
                uVar29 = 0xc0;
              }
              bVar23 = (&DAT_0048e4e0)[uVar29];
              if (bVar16 < 0x88) {
                *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                *(int *)(lVar39 + 8) = iVar6;
                *(undefined4 *)(lVar39 + 4) = 4;
                *(undefined4 *)(lVar39 + 0xc) = 0;
                *(ulong *)(lVar39 + 0x14) = (ulong)bVar23;
                *(undefined4 *)(lVar39 + 0x1c) = 0;
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                uVar7 = (uint)bVar16;
                *(uint *)(lVar42 + 500) = iVar40 + iVar6 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                if (bVar16 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  iVar6 = *(int *)(&DAT_0048d870 + (ulong)*(byte *)(lVar42 + 0x177) * 8);
                  *(undefined4 *)(lVar39 + 4) = 0x24;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(undefined4 *)(lVar39 + 0xc) = 0x10;
                  bVar16 = *(byte *)(lVar42 + 7);
                  bVar23 = *(byte *)(lVar42 + 2);
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  uVar14 = *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar16 * 4) +
                           *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar23 * 4) + iVar6;
                  if (0xc0 < uVar14) {
                    uVar14 = 0xc0;
                  }
                  *(ulong *)(lVar39 + 0x14) = (ulong)(uint)(&DAT_0048dc70)[uVar14];
                  uVar7 = (uint)*(byte *)(lVar42 + 0x1b7);
                  uVar38 = (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar42 + 2)];
                }
                else {
                  uVar38 = (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar42 + 2)];
                }
              }
              pbVar22 = (byte *)(lVar42 + 0x68);
              iVar6 = 1;
              while( true ) {
                uVar29 = (ulong)((byte)(&DAT_0048e460)[(ulong)*pbVar22 * 2] + uVar38);
                if (0xc0 < (byte)(&DAT_0048e460)[(ulong)*pbVar22 * 2] + uVar38) {
                  uVar29 = 0xc0;
                }
                bVar16 = (&DAT_0048e4e0)[uVar29];
                if (uVar7 < 0x88) {
                  *(char *)(lVar42 + 0x1b7) = (char)uVar7 + '\x01';
                  lVar39 = lVar42 + (long)(int)uVar7 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 4;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(int *)(lVar39 + 0xc) = iVar6;
                  *(ulong *)(lVar39 + 0x14) = (ulong)bVar16;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  bVar16 = *(byte *)(lVar42 + 0x1b7);
                  bVar23 = pbVar22[0x110];
                  if (bVar16 < 0x88) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    iVar40 = *(int *)(&DAT_0048d870 + (ulong)bVar23 * 8);
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 0x24;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(int *)(lVar39 + 0xc) = iVar6 + 0x10;
                    bVar16 = *(byte *)(lVar42 + 7);
                    bVar23 = *(byte *)(lVar42 + 2);
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                    uVar14 = *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar16 * 4) +
                             *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar23 * 4) + iVar40;
                    if (0xc0 < uVar14) {
                      uVar14 = 0xc0;
                    }
                    *(ulong *)(lVar39 + 0x14) = (ulong)(uint)(&DAT_0048dc70)[uVar14];
                  }
                }
                iVar6 = iVar6 + 1;
                pbVar22 = pbVar22 + 1;
                if (iVar6 == 0x10) break;
                uVar7 = (uint)*(byte *)(lVar42 + 0x1b7);
                uVar38 = (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar42 + 2)];
              }
              goto joined_r0x001cd090;
            }
            break;
          case 0xb1:
            if ((uVar31 == 0) && (uVar7 < 0x80)) {
              *(byte *)(lVar42 + 3) = bVar33;
              uVar14 = *(byte *)(lVar42 + 0x77) & 0x7f;
              uVar41 = uVar14 << 1;
              if (uVar7 != 0x40) {
                if (uVar14 == 0x20) {
                  uVar41 = (uint)bVar33;
                }
                else {
                  uVar41 = (uint)(byte)(&DAT_0048e740)
                                       [(ulong)((*(byte *)(lVar42 + 0x77) & 0x7f) >> 1) +
                                        (ulong)(bVar33 >> 2) * 0x20];
                }
              }
              *(char *)(lVar42 + 0x7370) = (char)uVar41;
              if (iVar6 < 0) {
                uVar41 = *(byte *)(lVar42 + 0x78) & 0x7f;
                bVar16 = (byte)(uVar41 << 1);
                if ((uVar7 != 0x40) && (bVar16 = bVar33, uVar41 != 0x20)) {
                  bVar16 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x78) & 0x7f) >> 1) +
                            (ulong)(bVar33 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x7384) = bVar16;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x79) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x79) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x7398) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x7a) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x7a) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x73ac) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x7b) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x7b) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x73c0) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x7c) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x7c) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x73d4) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x7d) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x7d) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x73e8) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x7e) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x7e) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x73fc) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x7f) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x7f) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x7410) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x80) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x80) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x7424) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x81) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x81) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x7438) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x82) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x82) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x744c) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x83) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x83) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x7460) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x84) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x84) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x7474) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x85) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x85) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x7488) = bVar23;
                bVar16 = *(byte *)(lVar42 + 3);
                uVar41 = *(byte *)(lVar42 + 0x86) & 0x7f;
                bVar23 = (byte)(uVar41 << 1);
                if ((bVar16 != 0x40) && (bVar23 = bVar16, uVar41 != 0x20)) {
                  bVar23 = (&DAT_0048e740)
                           [(ulong)((*(byte *)(lVar42 + 0x86) & 0x7f) >> 1) +
                            (ulong)(bVar16 >> 2) * 0x20];
                }
                *(byte *)(lVar42 + 0x749c) = bVar23;
                if (*(byte *)(lVar42 + 0x197) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x197) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x74b0) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x74b0) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x198) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x198) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x74c4) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x74c4) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x199) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x199) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x74d8) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x74d8) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x19a) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x19a) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x74ec) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x74ec) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x19b) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x19b) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x7500) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x7500) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x19c) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x19c) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x7514) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x7514) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x19d) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x19d) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x7528) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x7528) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x19e) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x19e) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x753c) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x753c) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x19f) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x19f) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x7550) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x7550) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x1a0) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x1a0) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x7564) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x7564) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x1a1) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x1a1) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x7578) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x7578) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x1a2) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x1a2) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x758c) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x758c) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x1a3) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x1a3) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x75a0) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x75a0) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x1a4) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x1a4) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x75b4) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x75b4) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x1a5) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x1a5) + 0x137);
                  if (uVar41 == 0xff) {
                    *(undefined1 *)(lVar42 + 0x75c8) = *(undefined1 *)(lVar42 + 3);
                  }
                  else {
                    bVar16 = *(byte *)(lVar42 + 3);
                    bVar23 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar16 != 0x40) && (bVar23 = bVar16, (uVar41 & 0x7f) != 0x20)) {
                      bVar23 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar16 >> 2) * 0x20];
                    }
                    *(byte *)(lVar42 + 0x75c8) = bVar23;
                  }
                }
                if (*(byte *)(lVar42 + 0x1a6) < 0x40) {
                  uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*(byte *)(lVar42 + 0x1a6) + 0x137);
                  if (uVar41 == 0xff) {
                    bVar16 = *(byte *)(lVar42 + 3);
                  }
                  else {
                    bVar23 = *(byte *)(lVar42 + 3);
                    bVar16 = (byte)((uVar41 & 0x7f) << 1);
                    if ((bVar23 != 0x40) && (bVar16 = bVar23, (uVar41 & 0x7f) != 0x20)) {
                      bVar16 = (&DAT_0048e740)
                               [(ulong)((uVar41 & 0x7f) >> 1) + (ulong)(bVar23 >> 2) * 0x20];
                    }
                  }
                  *(byte *)(lVar42 + 0x75dc) = bVar16;
                  uVar41 = *(uint *)(lVar42 + 0x1d8);
                  goto joined_r0x001cd090;
                }
              }
              else {
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                if (bVar16 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(int *)(lVar39 + 8) = iVar6;
                  *(undefined4 *)(lVar39 + 4) = 5;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(ulong *)(lVar39 + 0x14) = (ulong)uVar41;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  uVar29 = (ulong)*(byte *)(lVar42 + 3);
                  *(uint *)(lVar42 + 500) = iVar40 + iVar6 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                }
                pbVar22 = (byte *)(lVar42 + 0x78);
                puVar9 = (undefined1 *)(lVar42 + 0x7384);
                iVar6 = 1;
                while( true ) {
                  uVar41 = *pbVar22 & 0x7f;
                  if ((int)uVar29 == 0x40) {
                    uVar29 = (ulong)(uVar41 << 1);
                  }
                  else if (uVar41 != 0x20) {
                    uVar29 = (ulong)(byte)(&DAT_0048e740)
                                          [(ulong)((*pbVar22 & 0x7f) >> 1) + (uVar29 >> 2) * 0x20];
                  }
                  *puVar9 = (char)uVar29;
                  bVar16 = *(byte *)(lVar42 + 0x1b7);
                  if (bVar16 < 0x88) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 5;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(int *)(lVar39 + 0xc) = iVar6;
                    *(ulong *)(lVar39 + 0x14) = uVar29;
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                  }
                  if (iVar6 + 1 == 0x10) break;
                  bVar16 = *(byte *)(lVar42 + 3);
                  uVar41 = pbVar22[1] & 0x7f;
                  uVar29 = (ulong)(uVar41 << 1);
                  if ((bVar16 != 0x40) && (uVar29 = (ulong)bVar16, uVar41 != 0x20)) {
                    uVar29 = (ulong)(byte)(&DAT_0048e740)
                                          [(ulong)((pbVar22[1] & 0x7f) >> 1) +
                                           (ulong)(bVar16 >> 2) * 0x20];
                  }
                  puVar9[0x14] = (char)uVar29;
                  bVar16 = *(byte *)(lVar42 + 0x1b7);
                  if (bVar16 < 0x88) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 5;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(int *)(lVar39 + 0xc) = iVar6 + 1;
                    *(ulong *)(lVar39 + 0x14) = uVar29;
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                  }
                  puVar9 = puVar9 + 0x28;
                  uVar29 = (ulong)*(byte *)(lVar42 + 3);
                  iVar6 = iVar6 + 2;
                  pbVar22 = pbVar22 + 2;
                }
                pbVar22 = (byte *)(lVar42 + 0x197);
                pbVar20 = (byte *)(lVar42 + 0x74b0);
                iVar6 = 0x10;
                do {
                  if (*pbVar22 < 0x40) {
                    uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)*pbVar22 + 0x137);
                    if (uVar41 == 0xff) {
                      bVar16 = *(byte *)(lVar42 + 3);
                      *pbVar20 = bVar16;
                      bVar23 = *(byte *)(lVar42 + 0x1b7);
                      if (bVar23 < 0x88) {
                        *(byte *)(lVar42 + 0x1b7) = bVar23 + 1;
                        lVar39 = lVar42 + (long)(int)(uint)bVar23 * 0x14 + 0x7ac0;
                        *(undefined4 *)(lVar39 + 4) = 5;
                        *(undefined4 *)(lVar39 + 8) = 0;
                        *(int *)(lVar39 + 0xc) = iVar6;
                        *(ulong *)(lVar39 + 0x14) = (ulong)bVar16;
                        *(undefined4 *)(lVar39 + 0x1c) = 0;
                      }
                    }
                    else {
                      bVar16 = *(byte *)(lVar42 + 3);
                      uVar29 = (ulong)((uVar41 & 0x7f) << 1);
                      if ((bVar16 != 0x40) && (uVar29 = (ulong)bVar16, (uVar41 & 0x7f) != 0x20)) {
                        uVar29 = (ulong)(byte)(&DAT_0048e740)
                                              [(ulong)((uVar41 & 0x7f) >> 1) +
                                               (ulong)(bVar16 >> 2) * 0x20];
                      }
                      *pbVar20 = (byte)uVar29;
                      bVar16 = *(byte *)(lVar42 + 0x1b7);
                      if (bVar16 < 0x88) {
                        *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                        lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                        *(undefined4 *)(lVar39 + 4) = 5;
                        *(undefined4 *)(lVar39 + 8) = 0;
                        *(int *)(lVar39 + 0xc) = iVar6;
                        *(ulong *)(lVar39 + 0x14) = uVar29;
                        *(undefined4 *)(lVar39 + 0x1c) = 0;
                      }
                    }
                  }
                  if (pbVar22[1] < 0x40) {
                    uVar41 = (uint)*(byte *)(lVar42 + (int)(uint)pbVar22[1] + 0x137);
                    if (uVar41 == 0xff) {
                      bVar16 = *(byte *)(lVar42 + 3);
                      pbVar20[0x14] = bVar16;
                      bVar23 = *(byte *)(lVar42 + 0x1b7);
                      if (bVar23 < 0x88) {
                        *(byte *)(lVar42 + 0x1b7) = bVar23 + 1;
                        lVar39 = lVar42 + (long)(int)(uint)bVar23 * 0x14 + 0x7ac0;
                        *(undefined4 *)(lVar39 + 4) = 5;
                        *(undefined4 *)(lVar39 + 8) = 0;
                        *(int *)(lVar39 + 0xc) = iVar6 + 1;
                        *(ulong *)(lVar39 + 0x14) = (ulong)bVar16;
                        *(undefined4 *)(lVar39 + 0x1c) = 0;
                      }
                    }
                    else {
                      bVar16 = *(byte *)(lVar42 + 3);
                      uVar29 = (ulong)((uVar41 & 0x7f) << 1);
                      if ((bVar16 != 0x40) && (uVar29 = (ulong)bVar16, (uVar41 & 0x7f) != 0x20)) {
                        uVar29 = (ulong)(byte)(&DAT_0048e740)
                                              [(ulong)((uVar41 & 0x7f) >> 1) +
                                               (ulong)(bVar16 >> 2) * 0x20];
                      }
                      pbVar20[0x14] = (byte)uVar29;
                      bVar16 = *(byte *)(lVar42 + 0x1b7);
                      if (bVar16 < 0x88) {
                        *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                        lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                        *(undefined4 *)(lVar39 + 4) = 5;
                        *(undefined4 *)(lVar39 + 8) = 0;
                        *(int *)(lVar39 + 0xc) = iVar6 + 1;
                        *(ulong *)(lVar39 + 0x14) = uVar29;
                        *(undefined4 *)(lVar39 + 0x1c) = 0;
                      }
                    }
                  }
                  iVar6 = iVar6 + 2;
                  pbVar22 = pbVar22 + 2;
                  pbVar20 = pbVar20 + 0x28;
                } while (iVar6 != 0x20);
              }
              goto LAB_001cc168;
            }
            break;
          case 0xba:
            if ((uVar31 == 0) && (-1 < (char)bVar33)) {
              uVar29 = (ulong)(bVar33 >> 3) & 0xf;
              *(char *)(lVar42 + uVar29 + 0x37) = (char)(uVar7 & 7);
              if (((uVar7 & 7) == 1) || (*(byte *)(lVar42 + 0xc) < 3)) goto LAB_001cdae4;
            }
            break;
          case 0xbc:
            if ((uVar31 == 0) && (uVar38 < 0x80)) {
              FUN_00127de4(lVar42);
              iVar6 = (bVar33 - 0x40) + *(int *)(lVar42 + 0x1e4);
              *(int *)(lVar42 + 0x1e4) = iVar6;
              if (iVar6 < 0x14) {
                iVar6 = 0x14;
                *(undefined4 *)(lVar42 + 0x1e4) = 0x14;
              }
              else if (0xff < iVar6) {
                iVar6 = 0xff;
                *(undefined4 *)(lVar42 + 0x1e4) = 0xff;
              }
              uVar41 = *(uint *)(lVar42 + 0x1d8);
              lVar39 = (long)(iVar6 * *(int *)(lVar42 + 0x1e8));
              iVar6 = 0;
              if (lVar39 != 0) {
                iVar6 = (int)(0x3a98000 / lVar39);
              }
              *(int *)(lVar42 + 0x1ec) = iVar6;
              bVar16 = *(byte *)(lVar42 + 0x8648);
              if (bVar16 != 0) {
                bVar23 = bVar16 - 1 & 3;
                if (((uVar41 & 1) != 0) &&
                   (iVar40 = *(int *)(lVar42 + 0x1f0), iVar40 < *(int *)(lVar42 + 0x8f30))) {
                  *(int *)(lVar42 + 0x8f30) = iVar40;
                  *(int *)(lVar42 + 0x8f30) =
                       iVar40 + iVar6 * (*(int *)(lVar42 + 0x8f2c) - *(int *)(lVar42 + 0x1e0));
                }
                uVar29 = 1;
                piVar13 = (int *)(lVar42 + 0x8f50);
                uVar14 = (uint)bVar16;
                if (uVar14 != 1) {
                  if (bVar23 != 0) {
                    if (bVar23 != 1) {
                      if (bVar23 != 2) {
                        if (((uVar41 >> 1 & 1) != 0) &&
                           (iVar40 = *(int *)(lVar42 + 0x1f0), iVar40 < *(int *)(lVar42 + 0x8f50)))
                        {
                          *(int *)(lVar42 + 0x8f50) = iVar40;
                          *(int *)(lVar42 + 0x8f50) =
                               iVar40 + iVar6 * (*(int *)(lVar42 + 0x8f4c) -
                                                *(int *)(lVar42 + 0x1e0));
                        }
                        uVar29 = 2;
                        piVar13 = (int *)(lVar42 + 0x8f70);
                      }
                      if (((1 << uVar29 & uVar41) != 0) &&
                         (iVar40 = *(int *)(lVar42 + 0x1f0), iVar40 < *piVar13)) {
                        *piVar13 = iVar40;
                        *piVar13 = iVar40 + iVar6 * (piVar13[-1] - *(int *)(lVar42 + 0x1e0));
                      }
                      uVar29 = (ulong)((int)uVar29 + 1);
                      piVar13 = piVar13 + 8;
                    }
                    if (((1 << uVar29 & uVar41) != 0) &&
                       (iVar40 = *(int *)(lVar42 + 0x1f0), iVar40 < *piVar13)) {
                      *piVar13 = iVar40;
                      *piVar13 = iVar40 + iVar6 * (piVar13[-1] - *(int *)(lVar42 + 0x1e0));
                    }
                    uVar7 = (int)uVar29 + 1;
                    uVar29 = (ulong)uVar7;
                    piVar13 = piVar13 + 8;
                    if (uVar7 == uVar14) goto joined_r0x001cd090;
                  }
                  do {
                    uVar7 = (uint)uVar29;
                    if (((1 << (ulong)(uVar7 & 0x1f) & uVar41) != 0) &&
                       (iVar40 = *(int *)(lVar42 + 0x1f0), iVar40 < *piVar13)) {
                      *piVar13 = iVar40;
                      *piVar13 = iVar40 + iVar6 * (piVar13[-1] - *(int *)(lVar42 + 0x1e0));
                    }
                    if (((1 << (ulong)(uVar7 + 1 & 0x1f) & uVar41) != 0) &&
                       (iVar40 = *(int *)(lVar42 + 0x1f0), iVar40 < piVar13[8])) {
                      piVar13[8] = iVar40;
                      piVar13[8] = iVar40 + iVar6 * (piVar13[7] - *(int *)(lVar42 + 0x1e0));
                    }
                    if (((1 << (ulong)(uVar7 + 2 & 0x1f) & uVar41) != 0) &&
                       (iVar40 = *(int *)(lVar42 + 0x1f0), iVar40 < piVar13[0x10])) {
                      piVar13[0x10] = iVar40;
                      piVar13[0x10] = iVar40 + iVar6 * (piVar13[0xf] - *(int *)(lVar42 + 0x1e0));
                    }
                    if (((1 << (ulong)(uVar7 + 3 & 0x1f) & uVar41) != 0) &&
                       (iVar40 = *(int *)(lVar42 + 0x1f0), iVar40 < piVar13[0x18])) {
                      piVar13[0x18] = iVar40;
                      piVar13[0x18] = iVar40 + iVar6 * (piVar13[0x17] - *(int *)(lVar42 + 0x1e0));
                    }
                    uVar29 = (ulong)(uVar7 + 4);
                    piVar13 = piVar13 + 0x20;
                  } while (uVar7 + 4 != uVar14);
                }
              }
              goto joined_r0x001cd090;
            }
            break;
          case 0xbd:
            if ((uVar31 == 0) && (uVar7 < 0x80)) {
              uVar14 = (uint)*(byte *)(lVar42 + 2) + (uVar38 - 0x40);
              if (0x7f < (int)uVar14) {
                uVar14 = 0x7f;
              }
              if ((int)uVar14 < 0) {
                uVar14 = 0;
              }
              uVar29 = (ulong)(byte)uVar14;
              *(byte *)(lVar42 + 2) = (byte)uVar14;
              if (-1 < iVar6) {
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                uVar7 = (uint)bVar16;
                uVar35 = (ulong)((uint)(byte)(&DAT_0048e460)[uVar14] +
                                (uint)(byte)(&DAT_0048e460)[(ulong)*(byte *)(lVar42 + 0x67) * 2]);
                if (0xc0 < (uint)(byte)(&DAT_0048e460)[uVar14] +
                           (uint)(byte)(&DAT_0048e460)[(ulong)*(byte *)(lVar42 + 0x67) * 2]) {
                  uVar35 = 0xc0;
                }
                bVar23 = (&DAT_0048e4e0)[uVar35];
                if (bVar16 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(int *)(lVar39 + 8) = iVar6;
                  *(undefined4 *)(lVar39 + 4) = 4;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(ulong *)(lVar39 + 0x14) = (ulong)bVar23;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  bVar16 = *(byte *)(lVar42 + 0x1b7);
                  uVar7 = (uint)bVar16;
                  *(uint *)(lVar42 + 500) = iVar40 + iVar6 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                  if (bVar16 < 0x88) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    iVar6 = *(int *)(&DAT_0048d870 + (ulong)*(byte *)(lVar42 + 0x177) * 8);
                    *(undefined4 *)(lVar39 + 4) = 0x24;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(undefined4 *)(lVar39 + 0xc) = 0x10;
                    bVar16 = *(byte *)(lVar42 + 7);
                    bVar23 = *(byte *)(lVar42 + 2);
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                    uVar14 = *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar16 * 4) +
                             *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar23 * 4) + iVar6;
                    if (0xc0 < uVar14) {
                      uVar14 = 0xc0;
                    }
                    *(ulong *)(lVar39 + 0x14) = (ulong)(uint)(&DAT_0048dc70)[uVar14];
                    uVar29 = (ulong)*(byte *)(lVar42 + 2);
                    uVar7 = (uint)*(byte *)(lVar42 + 0x1b7);
                  }
                  else {
                    uVar29 = (ulong)*(byte *)(lVar42 + 2);
                  }
                }
                pbVar22 = (byte *)(lVar42 + 0x68);
                iVar6 = 1;
                while( true ) {
                  uVar35 = (ulong)((uint)(byte)(&DAT_0048e460)[(ulong)*pbVar22 * 2] +
                                  (uint)(byte)(&DAT_0048e460)[uVar29]);
                  if (0xc0 < (uint)(byte)(&DAT_0048e460)[(ulong)*pbVar22 * 2] +
                             (uint)(byte)(&DAT_0048e460)[uVar29]) {
                    uVar35 = 0xc0;
                  }
                  bVar16 = (&DAT_0048e4e0)[uVar35];
                  if (uVar7 < 0x88) {
                    *(char *)(lVar42 + 0x1b7) = (char)uVar7 + '\x01';
                    lVar39 = lVar42 + (long)(int)uVar7 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 4;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(int *)(lVar39 + 0xc) = iVar6;
                    *(ulong *)(lVar39 + 0x14) = (ulong)bVar16;
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                    bVar16 = *(byte *)(lVar42 + 0x1b7);
                    bVar23 = pbVar22[0x110];
                    if (bVar16 < 0x88) {
                      *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                      iVar40 = *(int *)(&DAT_0048d870 + (ulong)bVar23 * 8);
                      lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                      *(undefined4 *)(lVar39 + 4) = 0x24;
                      *(undefined4 *)(lVar39 + 8) = 0;
                      *(int *)(lVar39 + 0xc) = iVar6 + 0x10;
                      bVar16 = *(byte *)(lVar42 + 7);
                      bVar23 = *(byte *)(lVar42 + 2);
                      *(undefined4 *)(lVar39 + 0x1c) = 0;
                      uVar14 = *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar16 * 4) +
                               *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar23 * 4) + iVar40;
                      if (0xc0 < uVar14) {
                        uVar14 = 0xc0;
                      }
                      *(ulong *)(lVar39 + 0x14) = (ulong)(uint)(&DAT_0048dc70)[uVar14];
                    }
                  }
                  iVar6 = iVar6 + 1;
                  pbVar22 = pbVar22 + 1;
                  if (iVar6 == 0x10) break;
                  uVar29 = (ulong)*(byte *)(lVar42 + 2);
                  uVar7 = (uint)*(byte *)(lVar42 + 0x1b7);
                }
                goto joined_r0x001cd090;
              }
            }
            break;
          case 0xbe:
            if ((-1 < iVar6) && (uVar31 == 0 && uVar38 == 0)) {
              FUN_00128664(lVar42,iVar6,0);
              bVar16 = *(byte *)(lVar42 + 0x1b7);
              if (bVar16 < 0x88) {
                *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar39 + 4) = 0x10;
                *(undefined4 *)(lVar39 + 8) = 0;
                *(undefined4 *)(lVar39 + 0xc) = 1;
                *(undefined8 *)(lVar39 + 0x14) = 0;
                *(undefined4 *)(lVar39 + 0x1c) = 0;
                if ((*(char *)(lVar42 + 0x8649) == '\x01') &&
                   (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x2f;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(undefined8 *)(lVar39 + 0x14) = 0x7f;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                }
              }
              uVar41 = 2;
              do {
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                if (bVar16 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x10;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(uint *)(lVar39 + 0xc) = uVar41;
                  *(undefined8 *)(lVar39 + 0x14) = 0;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  if ((uVar41 == *(byte *)(lVar42 + 0x8649)) &&
                     (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 0x2f;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(undefined4 *)(lVar39 + 0xc) = 0;
                    *(undefined8 *)(lVar39 + 0x14) = 0x7f;
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                  }
                }
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                if (bVar16 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x10;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(uint *)(lVar39 + 0xc) = uVar41 + 1;
                  *(undefined8 *)(lVar39 + 0x14) = 0;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  if ((uVar41 + 1 == (uint)*(byte *)(lVar42 + 0x8649)) &&
                     (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 0x2f;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(undefined4 *)(lVar39 + 0xc) = 0;
                    *(undefined8 *)(lVar39 + 0x14) = 0x7f;
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                  }
                }
                uVar41 = uVar41 + 2;
              } while (uVar41 != 0x20);
              goto LAB_001cc168;
            }
            break;
          case 0xbf:
            if (uVar31 == 0) {
              *(undefined1 *)(lVar42 + 4) = 0x7f;
              *(undefined1 *)(lVar42 + 0x57) = 2;
              *(undefined1 *)(lVar42 + 0x67) = 0x3f;
              *(undefined1 *)(lVar42 + 0xa7) = 0x7f;
              puVar15 = (undefined8 *)(lVar42 + 0x20c);
              *(undefined1 *)(lVar42 + 0x58) = 2;
              *(undefined1 *)(lVar42 + 0x68) = 0x3f;
              *(undefined1 *)(lVar42 + 0xa8) = 0x7f;
              *(undefined1 *)(lVar42 + 0x28) = 1;
              *(undefined1 *)(lVar42 + 0x59) = 2;
              *(undefined1 *)(lVar42 + 0x69) = 0x3f;
              *(undefined1 *)(lVar42 + 0xa9) = 0x7f;
              *(undefined1 *)(lVar42 + 0x29) = 2;
              *(undefined1 *)(lVar42 + 0x5a) = 2;
              *(undefined1 *)(lVar42 + 0x6a) = 0x3f;
              *(undefined1 *)(lVar42 + 3) = 0x40;
              *(undefined1 *)(lVar42 + 0x37) = uVar34;
              *(undefined1 *)(lVar42 + 0x47) = uVar34;
              *(undefined1 *)(lVar42 + 0x77) = 0x20;
              *(undefined1 *)(lVar42 + 0x27) = uVar34;
              *(undefined1 *)(lVar42 + 0x97) = 0x20;
              pcVar24 = (char *)(lVar42 + 0x736b);
              *(undefined1 *)(lVar42 + 0x87) = 0x20;
              *(undefined1 *)(lVar42 + 0x38) = uVar34;
              *(undefined1 *)(lVar42 + 0x48) = uVar34;
              *(undefined1 *)(lVar42 + 0x78) = 0x20;
              *(undefined1 *)(lVar42 + 0x98) = 0x20;
              *(undefined1 *)(lVar42 + 0x88) = 0x20;
              *(undefined1 *)(lVar42 + 0x39) = uVar34;
              *(undefined1 *)(lVar42 + 0x49) = uVar34;
              *(undefined1 *)(lVar42 + 0x79) = 0x20;
              *(undefined1 *)(lVar42 + 0x99) = 0x20;
              *(undefined1 *)(lVar42 + 0x89) = 0x20;
              *(undefined1 *)(lVar42 + 0x3a) = uVar34;
              *(undefined1 *)(lVar42 + 0x4a) = uVar34;
              *(undefined1 *)(lVar42 + 0x7a) = 0x20;
              *(undefined1 *)(lVar42 + 0xaa) = 0x7f;
              *(undefined1 *)(lVar42 + 0x5b) = 2;
              *(undefined1 *)(lVar42 + 0x6b) = 0x3f;
              *(undefined1 *)(lVar42 + 0xab) = 0x7f;
              *(undefined1 *)(lVar42 + 0x2b) = 4;
              *(undefined1 *)(lVar42 + 0x5c) = 2;
              *(undefined1 *)(lVar42 + 0x6c) = 0x3f;
              *(undefined1 *)(lVar42 + 0xac) = 0x7f;
              *(undefined1 *)(lVar42 + 0x2c) = 5;
              *(undefined1 *)(lVar42 + 0x5d) = 2;
              *(undefined1 *)(lVar42 + 0x6d) = 0x3f;
              *(undefined1 *)(lVar42 + 0xad) = 0x7f;
              *(undefined1 *)(lVar42 + 0x2d) = 6;
              *(undefined1 *)(lVar42 + 0x2a) = 3;
              *(undefined1 *)(lVar42 + 0x9a) = 0x20;
              *(undefined1 *)(lVar42 + 0x8a) = 0x20;
              *(undefined1 *)(lVar42 + 0x3b) = uVar34;
              *(undefined1 *)(lVar42 + 0x4b) = uVar34;
              *(undefined1 *)(lVar42 + 0x7b) = 0x20;
              *(undefined1 *)(lVar42 + 0x9b) = 0x20;
              *(undefined1 *)(lVar42 + 0x8b) = 0x20;
              *(undefined1 *)(lVar42 + 0x3c) = uVar34;
              *(undefined1 *)(lVar42 + 0x4c) = uVar34;
              *(undefined1 *)(lVar42 + 0x7c) = 0x20;
              *(undefined1 *)(lVar42 + 0x9c) = 0x20;
              *(undefined1 *)(lVar42 + 0x8c) = 0x20;
              *(undefined1 *)(lVar42 + 0x3d) = uVar34;
              *(undefined1 *)(lVar42 + 0x4d) = uVar34;
              *(undefined1 *)(lVar42 + 0x7d) = 0x20;
              *(undefined1 *)(lVar42 + 0x9d) = 0x20;
              *(undefined1 *)(lVar42 + 0x8d) = 0x20;
              *(undefined1 *)(lVar42 + 0x3e) = uVar34;
              *(undefined1 *)(lVar42 + 0x4e) = uVar34;
              *(undefined1 *)(lVar42 + 0x5e) = 2;
              *(undefined1 *)(lVar42 + 0x6e) = 0x3f;
              *(undefined1 *)(lVar42 + 0xae) = 0x7f;
              *(undefined1 *)(lVar42 + 0x5f) = 2;
              *(undefined1 *)(lVar42 + 0x6f) = 0x3f;
              *(undefined1 *)(lVar42 + 0xaf) = 0x7f;
              *(bool *)(lVar42 + 0x40) = 1 < *(byte *)(lVar42 + 0xc);
              *(undefined1 *)(lVar42 + 0x60) = 2;
              *(undefined1 *)(lVar42 + 0x70) = 0x3f;
              *(undefined1 *)(lVar42 + 0xb0) = 0x7f;
              *(undefined1 *)(lVar42 + 0x30) = 9;
              *(undefined1 *)(lVar42 + 0x61) = 2;
              *(undefined1 *)(lVar42 + 0x71) = 0x3f;
              *(undefined1 *)(lVar42 + 0xb1) = 0x7f;
              *(undefined1 *)(lVar42 + 0x31) = 10;
              *(undefined1 *)(lVar42 + 0x7e) = 0x20;
              *(undefined1 *)(lVar42 + 0x2e) = 7;
              *(undefined1 *)(lVar42 + 0x9e) = 0x20;
              *(undefined1 *)(lVar42 + 0x8e) = 0x20;
              *(undefined1 *)(lVar42 + 0x3f) = uVar34;
              *(undefined1 *)(lVar42 + 0x4f) = uVar34;
              *(undefined1 *)(lVar42 + 0x7f) = 0x20;
              *(undefined1 *)(lVar42 + 0x2f) = 8;
              *(undefined1 *)(lVar42 + 0x9f) = 0x20;
              *(undefined1 *)(lVar42 + 0x8f) = 0x20;
              *(undefined1 *)(lVar42 + 0x50) = uVar34;
              *(undefined1 *)(lVar42 + 0x80) = 0x20;
              *(undefined1 *)(lVar42 + 0xa0) = 0x20;
              *(undefined1 *)(lVar42 + 0x90) = 0x20;
              *(undefined1 *)(lVar42 + 0x41) = uVar34;
              *(undefined1 *)(lVar42 + 0x51) = uVar34;
              *(undefined1 *)(lVar42 + 0x81) = 0x20;
              *(undefined1 *)(lVar42 + 0xa1) = 0x20;
              *(undefined1 *)(lVar42 + 0x91) = 0x20;
              *(undefined1 *)(lVar42 + 0x62) = 2;
              *(undefined1 *)(lVar42 + 0x72) = 0x3f;
              *(undefined1 *)(lVar42 + 0xb2) = 0x7f;
              *(undefined1 *)(lVar42 + 0x32) = 0xb;
              *(undefined1 *)(lVar42 + 99) = 2;
              *(undefined1 *)(lVar42 + 0x73) = 0x3f;
              *(undefined1 *)(lVar42 + 0xb3) = 0x7f;
              *(undefined1 *)(lVar42 + 0x33) = 0xc;
              *(undefined1 *)(lVar42 + 100) = 2;
              *(undefined1 *)(lVar42 + 0x74) = 0x3f;
              *(undefined1 *)(lVar42 + 0xb4) = 0x7f;
              *(undefined1 *)(lVar42 + 0x65) = 2;
              *(undefined1 *)(lVar42 + 0x75) = 0x3f;
              *(undefined1 *)(lVar42 + 0xb5) = 0x7f;
              *(undefined1 *)(lVar42 + 0x42) = uVar34;
              *(undefined1 *)(lVar42 + 0x52) = uVar34;
              *(undefined1 *)(lVar42 + 0x82) = 0x20;
              *(undefined1 *)(lVar42 + 0xa2) = 0x20;
              *(undefined1 *)(lVar42 + 0x92) = 0x20;
              *(undefined1 *)(lVar42 + 0x43) = uVar34;
              *(undefined1 *)(lVar42 + 0x53) = uVar34;
              *(undefined1 *)(lVar42 + 0x83) = 0x20;
              *(undefined1 *)(lVar42 + 0xa3) = 0x20;
              *(undefined1 *)(lVar42 + 0x93) = 0x20;
              *(undefined1 *)(lVar42 + 0x44) = uVar34;
              *(undefined1 *)(lVar42 + 0x54) = uVar34;
              *(undefined1 *)(lVar42 + 0x84) = 0x20;
              *(undefined1 *)(lVar42 + 0x34) = 0xd;
              *(undefined1 *)(lVar42 + 0xa4) = 0x20;
              *(undefined1 *)(lVar42 + 0x94) = 0x20;
              *(undefined1 *)(lVar42 + 0x45) = uVar34;
              *(undefined1 *)(lVar42 + 0x55) = uVar34;
              *(undefined1 *)(lVar42 + 0x85) = 0x20;
              *(undefined1 *)(lVar42 + 0x35) = 0xe;
              *(undefined1 *)(lVar42 + 0x66) = 2;
              *(undefined1 *)(lVar42 + 0x76) = 0x3f;
              *(undefined1 *)(lVar42 + 0xb6) = 0x7f;
              *(undefined1 *)(lVar42 + 0xa5) = 0x20;
              *(undefined1 *)(lVar42 + 0x95) = 0x20;
              *(undefined1 *)(lVar42 + 0x46) = uVar34;
              *(undefined1 *)(lVar42 + 0x56) = uVar34;
              *(undefined1 *)(lVar42 + 0x86) = 0x20;
              *(undefined1 *)(lVar42 + 0x36) = 0xf;
              *(undefined8 *)(lVar42 + 0x214) = 0x1800000018;
              *puVar15 = 0x1800000018;
              *(undefined8 *)(lVar42 + 0x224) = 0x1800000018;
              *(undefined8 *)(lVar42 + 0x21c) = 0x1800000018;
              *(undefined8 *)(lVar42 + 0x234) = 0x1800000018;
              *(undefined8 *)(lVar42 + 0x22c) = 0x1800000018;
              *(undefined8 *)(lVar42 + 0x244) = 0x1800000018;
              *(undefined8 *)(lVar42 + 0x23c) = 0x1800000018;
              *(undefined8 *)(lVar42 + 0x254) = 0x200000002;
              *(undefined8 *)(lVar42 + 0x24c) = 0x200000002;
              *(undefined8 *)(lVar42 + 0x264) = 0x200000002;
              *(undefined8 *)(lVar42 + 0x25c) = 0x200000002;
              *(undefined8 *)(lVar42 + 0x274) = 0x200000002;
              *(undefined8 *)(lVar42 + 0x26c) = 0x200000002;
              *(undefined8 *)(lVar42 + 0x284) = 0x200000002;
              *(undefined8 *)(lVar42 + 0x27c) = 0x200000002;
              *(undefined1 *)(lVar42 + 0x157) = 0x3f;
              *(undefined1 *)(lVar42 + 0x177) = 0x3f;
              *(undefined1 *)(lVar42 + 0x158) = 0x3f;
              *(undefined1 *)(lVar42 + 0x178) = 0x3f;
              *(undefined1 *)(lVar42 + 0x159) = 0x3f;
              *(undefined1 *)(lVar42 + 0x179) = 0x3f;
              *(undefined1 *)(lVar42 + 0x15a) = 0x3f;
              *(undefined1 *)(lVar42 + 0x17a) = 0x3f;
              *(undefined1 *)(lVar42 + 0xa6) = 0x20;
              *(undefined1 *)(lVar42 + 0x96) = 0x20;
              *(undefined1 *)(lVar42 + 0xb7) = 0xff;
              *(undefined1 *)(lVar42 + 0xd7) = uVar34;
              *(undefined1 *)(lVar42 + 0xb8) = 0xff;
              *(undefined1 *)(lVar42 + 0xd8) = uVar34;
              *(undefined1 *)(lVar42 + 0xb9) = 0xff;
              *(undefined1 *)(lVar42 + 0xd9) = uVar34;
              *(undefined1 *)(lVar42 + 0xba) = 0xff;
              *(undefined1 *)(lVar42 + 0x15b) = 0x3f;
              *(undefined1 *)(lVar42 + 0x17b) = 0x3f;
              *(undefined1 *)(lVar42 + 0x15c) = 0x3f;
              *(undefined1 *)(lVar42 + 0x17c) = 0x3f;
              *(undefined1 *)(lVar42 + 0x15d) = 0x3f;
              *(undefined1 *)(lVar42 + 0x17d) = 0x3f;
              *(undefined1 *)(lVar42 + 0x15e) = 0x3f;
              *(undefined1 *)(lVar42 + 0x17e) = 0x3f;
              *(undefined1 *)(lVar42 + 0x15f) = 0x3f;
              *(undefined1 *)(lVar42 + 0x17f) = 0x3f;
              *(undefined1 *)(lVar42 + 0x160) = 0x3f;
              *(undefined1 *)(lVar42 + 0x180) = 0x3f;
              *(undefined1 *)(lVar42 + 0x161) = 0x3f;
              *(undefined1 *)(lVar42 + 0x181) = 0x3f;
              *(undefined1 *)(lVar42 + 0x162) = 0x3f;
              *(undefined1 *)(lVar42 + 0x182) = 0x3f;
              *(undefined1 *)(lVar42 + 0xda) = uVar34;
              *(undefined1 *)(lVar42 + 0xbb) = 0xff;
              *(undefined1 *)(lVar42 + 0xdb) = uVar34;
              *(undefined1 *)(lVar42 + 0xbc) = 0xff;
              *(undefined1 *)(lVar42 + 0xdc) = uVar34;
              *(undefined1 *)(lVar42 + 0xbd) = 0xff;
              *(undefined1 *)(lVar42 + 0xdd) = uVar34;
              *(undefined1 *)(lVar42 + 0xbe) = 0xff;
              *(undefined1 *)(lVar42 + 0xde) = uVar34;
              *(undefined1 *)(lVar42 + 0xbf) = 0xff;
              *(undefined1 *)(lVar42 + 0xdf) = uVar34;
              *(undefined1 *)(lVar42 + 0xc0) = 0xff;
              *(undefined1 *)(lVar42 + 0xe0) = uVar34;
              *(undefined1 *)(lVar42 + 0xc1) = 0xff;
              *(undefined1 *)(lVar42 + 0xe1) = uVar34;
              *(undefined1 *)(lVar42 + 0xc2) = 0xff;
              *(undefined1 *)(lVar42 + 0xe2) = uVar34;
              *(undefined1 *)(lVar42 + 0x163) = 0x3f;
              *(undefined1 *)(lVar42 + 0x183) = 0x3f;
              *(undefined1 *)(lVar42 + 0x164) = 0x3f;
              *(undefined1 *)(lVar42 + 0x184) = 0x3f;
              *(undefined1 *)(lVar42 + 0x165) = 0x3f;
              *(undefined1 *)(lVar42 + 0x185) = 0x3f;
              *(undefined1 *)(lVar42 + 0x166) = 0x3f;
              *(undefined1 *)(lVar42 + 0x186) = 0x3f;
              *(undefined1 *)(lVar42 + 0x167) = 0x3f;
              *(undefined1 *)(lVar42 + 0x187) = 0x3f;
              *(undefined1 *)(lVar42 + 0x168) = 0x3f;
              *(undefined1 *)(lVar42 + 0x188) = 0x3f;
              *(undefined1 *)(lVar42 + 0x169) = 0x3f;
              *(undefined1 *)(lVar42 + 0x189) = 0x3f;
              *(undefined1 *)(lVar42 + 0x16a) = 0x3f;
              *(undefined1 *)(lVar42 + 0x18a) = 0x3f;
              *(undefined1 *)(lVar42 + 0x16b) = 0x3f;
              *(undefined1 *)(lVar42 + 0x18b) = 0x3f;
              *(undefined1 *)(lVar42 + 0xc3) = 0xff;
              *(undefined1 *)(lVar42 + 0xe3) = uVar34;
              *(undefined1 *)(lVar42 + 0xc4) = 0xff;
              *(undefined1 *)(lVar42 + 0xe4) = uVar34;
              *(undefined1 *)(lVar42 + 0xc5) = 0xff;
              *(undefined1 *)(lVar42 + 0xe5) = uVar34;
              *(undefined1 *)(lVar42 + 0xc6) = 0xff;
              *(undefined1 *)(lVar42 + 0xe6) = uVar34;
              *(undefined1 *)(lVar42 + 199) = 0xff;
              *(undefined1 *)(lVar42 + 0xe7) = uVar34;
              *(undefined1 *)(lVar42 + 200) = 0xff;
              *(undefined1 *)(lVar42 + 0xe8) = uVar34;
              *(undefined1 *)(lVar42 + 0xc9) = 0xff;
              *(undefined1 *)(lVar42 + 0xe9) = uVar34;
              *(undefined1 *)(lVar42 + 0xca) = 0xff;
              *(undefined1 *)(lVar42 + 0xea) = uVar34;
              *(undefined1 *)(lVar42 + 0xcb) = 0xff;
              *(undefined1 *)(lVar42 + 0x16c) = 0x3f;
              *(undefined1 *)(lVar42 + 0x18c) = 0x3f;
              *(undefined1 *)(lVar42 + 0x16d) = 0x3f;
              *(undefined1 *)(lVar42 + 0x18d) = 0x3f;
              *(undefined1 *)(lVar42 + 0x16e) = 0x3f;
              *(undefined1 *)(lVar42 + 0x18e) = 0x3f;
              *(undefined1 *)(lVar42 + 0x16f) = 0x3f;
              *(undefined1 *)(lVar42 + 399) = 0x3f;
              *(undefined1 *)(lVar42 + 0x170) = 0x3f;
              *(undefined1 *)(lVar42 + 400) = 0x3f;
              *(undefined1 *)(lVar42 + 0x171) = 0x3f;
              *(undefined1 *)(lVar42 + 0x191) = 0x3f;
              *(undefined1 *)(lVar42 + 0x172) = 0x3f;
              *(undefined1 *)(lVar42 + 0x192) = 0x3f;
              *(undefined1 *)(lVar42 + 0x173) = 0x3f;
              *(undefined1 *)(lVar42 + 0x193) = 0x3f;
              *(undefined1 *)(lVar42 + 0xeb) = uVar34;
              *(undefined1 *)(lVar42 + 0xcc) = 0xff;
              *(undefined1 *)(lVar42 + 0xec) = uVar34;
              *(undefined1 *)(lVar42 + 0xcd) = 0xff;
              *(undefined1 *)(lVar42 + 0xed) = uVar34;
              *(undefined1 *)(lVar42 + 0xce) = 0xff;
              *(undefined1 *)(lVar42 + 0xee) = uVar34;
              *(undefined1 *)(lVar42 + 0xcf) = 0xff;
              *(undefined1 *)(lVar42 + 0xef) = uVar34;
              *(undefined1 *)(lVar42 + 0xd0) = 0xff;
              *(undefined1 *)(lVar42 + 0xf0) = uVar34;
              *(undefined1 *)(lVar42 + 0xd1) = 0xff;
              *(undefined1 *)(lVar42 + 0xf1) = uVar34;
              *(undefined1 *)(lVar42 + 0xd2) = 0xff;
              *(undefined1 *)(lVar42 + 0xf2) = uVar34;
              *(undefined1 *)(lVar42 + 0xd3) = 0xff;
              *(undefined1 *)(lVar42 + 0xf3) = uVar34;
              *(undefined1 *)(lVar42 + 0x174) = 0x3f;
              *(undefined1 *)(lVar42 + 0x194) = 0x3f;
              *(undefined1 *)(lVar42 + 0x175) = 0x3f;
              *(undefined1 *)(lVar42 + 0x195) = 0x3f;
              *(undefined1 *)(lVar42 + 0x176) = 0x3f;
              *(undefined1 *)(lVar42 + 0x196) = 0x3f;
              *(undefined1 *)(lVar42 + 0xd4) = 0xff;
              *(undefined1 *)(lVar42 + 0xf4) = uVar34;
              *(undefined1 *)(lVar42 + 0xd5) = 0xff;
              *(undefined1 *)(lVar42 + 0xf5) = uVar34;
              *(undefined1 *)(lVar42 + 0xd6) = 0xff;
              *(undefined1 *)(lVar42 + 0xf6) = uVar34;
              *(undefined1 *)(lVar42 + 2) = 100;
              *(undefined1 *)(lVar42 + 6) = 0x40;
              *(undefined2 *)(lVar42 + 0x1be) = 0x2000;
              uVar29 = uVar32;
              pcVar30 = pcVar24;
              do {
                iVar28 = (int)uVar29;
                if (iVar28 == 9) {
                  *(undefined1 *)(lVar42 + 0x741f) = 0x80;
                }
                else {
                  *pcVar30 = '\0';
                }
                lVar39 = lVar42 + (long)iVar28 * 0x14;
                *(undefined1 *)(lVar39 + 0x736a) = 0;
                *(undefined1 *)(lVar39 + 0x736d) = 0;
                *(undefined1 *)(lVar39 + 0x736c) = 0x3f;
                *(undefined1 *)(lVar39 + 0x7370) = 0x40;
                *(undefined1 *)(lVar39 + 0x7371) = 0x7f;
                *(undefined1 *)(lVar39 + 0x7372) = 0;
                *(undefined2 *)(lVar39 + 0x737a) = 0x2000;
                *(undefined1 *)(lVar39 + 0x736e) = 2;
                *(undefined1 *)(lVar39 + 0x736f) = 2;
                *(undefined1 *)(lVar39 + 0x7373) = 1;
                *(undefined1 *)(lVar39 + 0x7374) = 0x40;
                *(undefined2 *)(lVar39 + 0x737c) = 0x2000;
                *(undefined1 *)(lVar39 + 0x7376) = 0x40;
                *(undefined1 *)(lVar39 + 0x7375) = 0x40;
                *(undefined1 *)(lVar39 + 0x7377) = 0x7f;
                *(undefined1 *)(lVar39 + 0x7378) = 0x28;
                *(undefined1 *)(lVar39 + 0x7379) = 0;
                if (iVar28 + 1 == 9) {
                  *(undefined1 *)(lVar42 + 0x741f) = 0x80;
                }
                else {
                  pcVar30[0x14] = '\0';
                }
                uVar29 = (ulong)(iVar28 + 2U);
                pcVar30 = pcVar30 + 0x28;
                lVar39 = lVar42 + (long)(iVar28 + 1) * 0x14;
                *(undefined1 *)(lVar39 + 0x736a) = 0;
                *(undefined1 *)(lVar39 + 0x736d) = 0;
                *(undefined1 *)(lVar39 + 0x736c) = 0x3f;
                *(undefined1 *)(lVar39 + 0x7370) = 0x40;
                *(undefined1 *)(lVar39 + 0x7371) = 0x7f;
                *(undefined1 *)(lVar39 + 0x7372) = 0;
                *(undefined2 *)(lVar39 + 0x737a) = 0x2000;
                *(undefined1 *)(lVar39 + 0x736e) = 2;
                *(undefined1 *)(lVar39 + 0x736f) = 2;
                *(undefined1 *)(lVar39 + 0x7373) = 1;
                *(undefined1 *)(lVar39 + 0x7374) = 0x40;
                *(undefined2 *)(lVar39 + 0x737c) = 0x2000;
                *(undefined1 *)(lVar39 + 0x7376) = 0x40;
                *(undefined1 *)(lVar39 + 0x7375) = 0x40;
                *(undefined1 *)(lVar39 + 0x7377) = 0x7f;
                *(undefined1 *)(lVar39 + 0x7378) = 0x28;
                *(undefined1 *)(lVar39 + 0x7379) = 0;
              } while (iVar28 + 2U != 0x20);
              if (iVar6 < 0) {
                uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                if (uVar41 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = *(byte *)(lVar42 + 0x1b7) + 1;
                  lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x10;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(undefined8 *)(lVar39 + 0x14) = 0;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                  if (*(char *)(lVar42 + 0x8649) == '\0') goto joined_r0x001d12bc;
                }
              }
              else {
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                uVar41 = (uint)bVar16;
                if (bVar16 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x10;
                  *(int *)(lVar39 + 8) = iVar6;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(undefined8 *)(lVar39 + 0x14) = 0;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  *(uint *)(lVar42 + 500) = iVar40 + iVar6 * (uint)*(byte *)(lVar42 + 1) * 0x400;
                  if (*(char *)(lVar42 + 0x8649) == '\0') {
                    uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
joined_r0x001d12bc:
                    if (0x87 < uVar41) goto LAB_001cffa0;
                    *(char *)(lVar42 + 0x1b7) = (char)uVar41 + '\x01';
                    lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 0x2f;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(undefined4 *)(lVar39 + 0xc) = 0;
                    *(undefined8 *)(lVar39 + 0x14) = 0x7f;
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                  }
                  uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                }
              }
LAB_001cffa0:
              uVar14 = 1;
              while( true ) {
                if (uVar41 < 0x88) {
                  *(char *)(lVar42 + 0x1b7) = (char)uVar41 + '\x01';
                  lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x10;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(uint *)(lVar39 + 0xc) = uVar14;
                  *(undefined8 *)(lVar39 + 0x14) = 0;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  if ((uVar14 == *(byte *)(lVar42 + 0x8649)) &&
                     (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 0x2f;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(undefined4 *)(lVar39 + 0xc) = 0;
                    *(undefined8 *)(lVar39 + 0x14) = 0x7f;
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                  }
                }
                uVar41 = uVar14 + 1;
                if (uVar41 == 0x20) break;
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                if (bVar16 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x10;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(uint *)(lVar39 + 0xc) = uVar41;
                  *(undefined8 *)(lVar39 + 0x14) = 0;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  if ((uVar41 == *(byte *)(lVar42 + 0x8649)) &&
                     (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 0x2f;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(undefined4 *)(lVar39 + 0xc) = 0;
                    *(undefined8 *)(lVar39 + 0x14) = 0x7f;
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                  }
                }
                uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                uVar14 = uVar14 + 2;
              }
              *(undefined1 *)(lVar42 + 0xf7) = 0;
              *(undefined1 *)(lVar42 + 0x117) = 0;
              *(byte *)(lVar42 + 0x86cb) = *(byte *)(lVar42 + 0x86eb) & 0x1f;
              *(undefined1 *)(lVar42 + 0xf8) = 0;
              *(undefined1 *)(lVar42 + 0x118) = 0;
              *(byte *)(lVar42 + 0x86cc) = *(byte *)(lVar42 + 0x86ec) & 0x1f;
              *(undefined1 *)(lVar42 + 0xf9) = 0;
              *(undefined1 *)(lVar42 + 0x119) = 0;
              *(byte *)(lVar42 + 0x86cd) = *(byte *)(lVar42 + 0x86ed) & 0x1f;
              *(undefined1 *)(lVar42 + 0xfa) = 0;
              *(undefined1 *)(lVar42 + 0x11a) = 0;
              *(byte *)(lVar42 + 0x86ce) = *(byte *)(lVar42 + 0x86ee) & 0x1f;
              *(undefined1 *)(lVar42 + 0xfb) = 0;
              *(undefined1 *)(lVar42 + 0x11b) = 0;
              *(byte *)(lVar42 + 0x86cf) = *(byte *)(lVar42 + 0x86ef) & 0x1f;
              *(undefined1 *)(lVar42 + 0xfc) = 0;
              *(undefined1 *)(lVar42 + 0x11c) = 0;
              *(byte *)(lVar42 + 0x86d0) = *(byte *)(lVar42 + 0x86f0) & 0x1f;
              *(undefined1 *)(lVar42 + 0xfd) = 0;
              *(undefined1 *)(lVar42 + 0x11d) = 0;
              *(byte *)(lVar42 + 0x86d1) = *(byte *)(lVar42 + 0x86f1) & 0x1f;
              *(undefined1 *)(lVar42 + 0xfe) = 0;
              *(undefined1 *)(lVar42 + 0x11e) = 0;
              *(byte *)(lVar42 + 0x86d2) = *(byte *)(lVar42 + 0x86f2) & 0x1f;
              *(undefined1 *)(lVar42 + 0xff) = 0;
              *(undefined1 *)(lVar42 + 0x11f) = 0;
              *(byte *)(lVar42 + 0x86d3) = *(byte *)(lVar42 + 0x86f3) & 0x1f;
              *(undefined1 *)(lVar42 + 0x100) = 0;
              *(undefined1 *)(lVar42 + 0x120) = 0;
              *(byte *)(lVar42 + 0x86d4) = *(byte *)(lVar42 + 0x86f4) & 0x1f;
              *(undefined1 *)(lVar42 + 0x101) = 0;
              *(undefined1 *)(lVar42 + 0x121) = 0;
              *(byte *)(lVar42 + 0x86d5) = *(byte *)(lVar42 + 0x86f5) & 0x1f;
              *(undefined1 *)(lVar42 + 0x102) = 0;
              *(undefined1 *)(lVar42 + 0x122) = 0;
              *(byte *)(lVar42 + 0x86d6) = *(byte *)(lVar42 + 0x86f6) & 0x1f;
              *(undefined1 *)(lVar42 + 0x103) = 0;
              *(undefined1 *)(lVar42 + 0x123) = 0;
              *(byte *)(lVar42 + 0x86d7) = *(byte *)(lVar42 + 0x86f7) & 0x1f;
              *(undefined1 *)(lVar42 + 0x104) = 0;
              *(undefined1 *)(lVar42 + 0x124) = 0;
              *(byte *)(lVar42 + 0x86d8) = *(byte *)(lVar42 + 0x86f8) & 0x1f;
              *(undefined1 *)(lVar42 + 0x105) = 0;
              *(undefined1 *)(lVar42 + 0x125) = 0;
              *(byte *)(lVar42 + 0x86d9) = *(byte *)(lVar42 + 0x86f9) & 0x1f;
              *(undefined1 *)(lVar42 + 0x106) = 0;
              *(undefined1 *)(lVar42 + 0x126) = 0;
              *(byte *)(lVar42 + 0x86da) = *(byte *)(lVar42 + 0x86fa) & 0x1f;
              *(undefined1 *)(lVar42 + 0x107) = 0;
              *(undefined1 *)(lVar42 + 0x127) = 0;
              *(byte *)(lVar42 + 0x86db) = *(byte *)(lVar42 + 0x86fb) & 0x1f;
              *(undefined1 *)(lVar42 + 0x108) = 0;
              *(undefined1 *)(lVar42 + 0x128) = 0;
              *(byte *)(lVar42 + 0x86dc) = *(byte *)(lVar42 + 0x86fc) & 0x1f;
              *(undefined1 *)(lVar42 + 0x109) = 0;
              *(undefined1 *)(lVar42 + 0x129) = 0;
              *(byte *)(lVar42 + 0x86dd) = *(byte *)(lVar42 + 0x86fd) & 0x1f;
              *(undefined1 *)(lVar42 + 0x10a) = 0;
              *(undefined1 *)(lVar42 + 0x12a) = 0;
              *(byte *)(lVar42 + 0x86de) = *(byte *)(lVar42 + 0x86fe) & 0x1f;
              *(undefined1 *)(lVar42 + 0x10b) = 0;
              *(undefined1 *)(lVar42 + 299) = 0;
              *(byte *)(lVar42 + 0x86df) = *(byte *)(lVar42 + 0x86ff) & 0x1f;
              *(undefined1 *)(lVar42 + 0x10c) = 0;
              *(undefined1 *)(lVar42 + 300) = 0;
              *(byte *)(lVar42 + 0x86e0) = *(byte *)(lVar42 + 0x8700) & 0x1f;
              *(undefined1 *)(lVar42 + 0x10d) = 0;
              *(undefined1 *)(lVar42 + 0x12d) = 0;
              *(byte *)(lVar42 + 0x86e1) = *(byte *)(lVar42 + 0x8701) & 0x1f;
              *(undefined1 *)(lVar42 + 0x10e) = 0;
              *(undefined1 *)(lVar42 + 0x12e) = 0;
              *(byte *)(lVar42 + 0x86e2) = *(byte *)(lVar42 + 0x8702) & 0x1f;
              *(undefined1 *)(lVar42 + 0x10f) = 0;
              *(undefined1 *)(lVar42 + 0x12f) = 0;
              *(byte *)(lVar42 + 0x86e3) = *(byte *)(lVar42 + 0x8703) & 0x1f;
              *(undefined1 *)(lVar42 + 0x110) = 0;
              *(undefined1 *)(lVar42 + 0x130) = 0;
              *(byte *)(lVar42 + 0x86e4) = *(byte *)(lVar42 + 0x8704) & 0x1f;
              *(undefined1 *)(lVar42 + 0x111) = 0;
              *(undefined1 *)(lVar42 + 0x131) = 0;
              *(byte *)(lVar42 + 0x86e5) = *(byte *)(lVar42 + 0x8705) & 0x1f;
              *(undefined1 *)(lVar42 + 0x112) = 0;
              *(undefined1 *)(lVar42 + 0x132) = 0;
              *(byte *)(lVar42 + 0x86e6) = *(byte *)(lVar42 + 0x8706) & 0x1f;
              *(undefined1 *)(lVar42 + 0x113) = 0;
              *(undefined1 *)(lVar42 + 0x133) = 0;
              *(byte *)(lVar42 + 0x86e7) = *(byte *)(lVar42 + 0x8707) & 0x1f;
              *(undefined1 *)(lVar42 + 0x114) = 0;
              *(undefined1 *)(lVar42 + 0x134) = 0;
              *(byte *)(lVar42 + 0x86e8) = *(byte *)(lVar42 + 0x8708) & 0x1f;
              *(undefined1 *)(lVar42 + 0x115) = 0;
              *(undefined1 *)(lVar42 + 0x135) = 0;
              *(byte *)(lVar42 + 0x86e9) = *(byte *)(lVar42 + 0x8709) & 0x1f;
              *(undefined1 *)(lVar42 + 0x116) = 0;
              *(undefined1 *)(lVar42 + 0x136) = 0;
              *(byte *)(lVar42 + 0x86ea) = *(byte *)(lVar42 + 0x870a) & 0x1f;
              if (iVar6 < 0) {
                *(undefined1 *)(lVar42 + 0x137) = 0xff;
                uVar34 = 0x60;
                if (*(char *)(lVar42 + 0xc) != '\x01') {
                  uVar34 = 0x7f;
                }
                *(undefined1 *)(lVar42 + 0x138) = 0xff;
                *(undefined1 *)(lVar42 + 5) = uVar34;
                *(undefined1 *)(lVar42 + 0x139) = 0xff;
                *(undefined1 *)(lVar42 + 0x13a) = 0xff;
                *(undefined1 *)(lVar42 + 0x13b) = 0xff;
                *(undefined1 *)(lVar42 + 0x13c) = 0xff;
                *(undefined1 *)(lVar42 + 0x13d) = 0xff;
                *(undefined1 *)(lVar42 + 0x13e) = 0xff;
                *(undefined1 *)(lVar42 + 0x13f) = 0xff;
                *(undefined1 *)(lVar42 + 0x140) = 0xff;
                *(undefined1 *)(lVar42 + 0x141) = 0xff;
                *(undefined1 *)(lVar42 + 0x142) = 0xff;
                *(undefined1 *)(lVar42 + 0x143) = 0xff;
                *(undefined1 *)(lVar42 + 0x144) = 0xff;
                *(undefined1 *)(lVar42 + 0x145) = 0xff;
                *(undefined1 *)(lVar42 + 0x146) = 0xff;
                *(undefined1 *)(lVar42 + 0x147) = 0xff;
                *(undefined1 *)(lVar42 + 0x148) = 0xff;
                *(undefined1 *)(lVar42 + 0x149) = 0xff;
                *(undefined1 *)(lVar42 + 0x14a) = 0xff;
                *(undefined1 *)(lVar42 + 0x14b) = 0xff;
                *(undefined1 *)(lVar42 + 0x14c) = 0xff;
                *(undefined1 *)(lVar42 + 0x14d) = 0xff;
                *(undefined1 *)(lVar42 + 0x14e) = 0xff;
                *(undefined1 *)(lVar42 + 0x14f) = 0xff;
                *(undefined1 *)(lVar42 + 0x150) = 0xff;
                *(undefined1 *)(lVar42 + 0x151) = 0xff;
                *(undefined1 *)(lVar42 + 0x152) = 0xff;
                *(undefined1 *)(lVar42 + 0x153) = 0xff;
                *(undefined1 *)(lVar42 + 0x154) = 0xff;
                *(undefined1 *)(lVar42 + 0x155) = 0xff;
                *(undefined1 *)(lVar42 + 0x156) = 0xff;
              }
              else {
                bVar16 = *(byte *)(lVar42 + 0x1b7);
                uVar41 = (uint)bVar16;
                if (bVar16 < 0x88) {
                  *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                  lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                  uVar29 = 100;
                  *(undefined4 *)(lVar39 + 4) = 0x1a;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(undefined8 *)(lVar39 + 0x14) = 0;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  *(undefined1 *)(lVar42 + 2) = 100;
                  bVar16 = *(byte *)(lVar42 + 0x1b7);
                  uVar41 = (uint)bVar16;
                  uVar35 = (ulong)((byte)(&DAT_0048e460)[(ulong)*(byte *)(lVar42 + 0x67) * 2] + 8);
                  if (0xc0 < (byte)(&DAT_0048e460)[(ulong)*(byte *)(lVar42 + 0x67) * 2] + 8) {
                    uVar35 = 0xc0;
                  }
                  bVar23 = (&DAT_0048e4e0)[uVar35];
                  if (bVar16 < 0x88) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 4;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(undefined4 *)(lVar39 + 0xc) = 0;
                    *(ulong *)(lVar39 + 0x14) = (ulong)bVar23;
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                    bVar16 = *(byte *)(lVar42 + 0x1b7);
                    uVar41 = (uint)bVar16;
                    if (bVar16 < 0x88) {
                      *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                      lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                      iVar6 = *(int *)(&DAT_0048d870 + (ulong)*(byte *)(lVar42 + 0x177) * 8);
                      *(undefined4 *)(lVar39 + 4) = 0x24;
                      *(undefined4 *)(lVar39 + 8) = 0;
                      *(undefined4 *)(lVar39 + 0xc) = 0x10;
                      bVar16 = *(byte *)(lVar42 + 7);
                      bVar23 = *(byte *)(lVar42 + 2);
                      *(undefined4 *)(lVar39 + 0x1c) = 0;
                      uVar41 = *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar16 * 4) +
                               *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar23 * 4) + iVar6;
                      if (0xc0 < uVar41) {
                        uVar41 = 0xc0;
                      }
                      *(ulong *)(lVar39 + 0x14) = (ulong)(uint)(&DAT_0048dc70)[uVar41];
                      uVar29 = (ulong)*(byte *)(lVar42 + 2);
                      uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                    }
                    else {
                      uVar29 = (ulong)*(byte *)(lVar42 + 2);
                    }
                  }
                }
                else {
                  uVar29 = 100;
                  *(undefined1 *)(lVar42 + 2) = 100;
                }
                pbVar22 = (byte *)(lVar42 + 0x68);
                iVar6 = 1;
                while( true ) {
                  uVar35 = (ulong)((uint)(byte)(&DAT_0048e460)[(ulong)*pbVar22 * 2] +
                                  (uint)(byte)(&DAT_0048e460)[uVar29]);
                  if (0xc0 < (uint)(byte)(&DAT_0048e460)[(ulong)*pbVar22 * 2] +
                             (uint)(byte)(&DAT_0048e460)[uVar29]) {
                    uVar35 = 0xc0;
                  }
                  bVar16 = (&DAT_0048e4e0)[uVar35];
                  if (uVar41 < 0x88) {
                    *(char *)(lVar42 + 0x1b7) = (char)uVar41 + '\x01';
                    lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 4;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(int *)(lVar39 + 0xc) = iVar6;
                    *(ulong *)(lVar39 + 0x14) = (ulong)bVar16;
                    *(undefined4 *)(lVar39 + 0x1c) = 0;
                    uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                    bVar16 = pbVar22[0x110];
                    if (uVar41 < 0x88) {
                      *(byte *)(lVar42 + 0x1b7) = *(byte *)(lVar42 + 0x1b7) + 1;
                      iVar40 = *(int *)(&DAT_0048d870 + (ulong)bVar16 * 8);
                      lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                      *(undefined4 *)(lVar39 + 4) = 0x24;
                      *(undefined4 *)(lVar39 + 8) = 0;
                      *(int *)(lVar39 + 0xc) = iVar6 + 0x10;
                      bVar16 = *(byte *)(lVar42 + 7);
                      bVar23 = *(byte *)(lVar42 + 2);
                      *(undefined4 *)(lVar39 + 0x1c) = 0;
                      uVar41 = *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar16 * 4) +
                               *(int *)(&DAT_0048d870 + (long)(int)(uint)bVar23 * 4) + iVar40;
                      if (0xc0 < uVar41) {
                        uVar41 = 0xc0;
                      }
                      *(ulong *)(lVar39 + 0x14) = (ulong)(uint)(&DAT_0048dc70)[uVar41];
                      uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                    }
                  }
                  iVar6 = iVar6 + 1;
                  pbVar22 = pbVar22 + 1;
                  if (iVar6 == 0x10) break;
                  uVar29 = (ulong)*(byte *)(lVar42 + 2);
                }
                if (uVar41 < 0x88) {
                  *(char *)(lVar42 + 0x1b7) = (char)uVar41 + '\x01';
                  lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar39 + 4) = 0x19;
                  *(undefined4 *)(lVar39 + 8) = 0;
                  *(undefined4 *)(lVar39 + 0xc) = 0;
                  *(undefined8 *)(lVar39 + 0x14) = 0x7f;
                  *(undefined4 *)(lVar39 + 0x1c) = 0;
                  uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                }
                if (*(char *)(lVar42 + 0x870c) == '\x01') {
                  pbVar22 = (byte *)(lVar42 + 0x86cb);
                  uVar14 = 0;
                  do {
                    uVar7 = *pbVar22 & 0x1f;
                    if (((((&DAT_0048e730)[uVar7] & *(byte *)(lVar42 + 10)) != 0) || (3 < uVar7)) &&
                       (uVar41 < 0x88)) {
                      *(char *)(lVar42 + 0x1b7) = (char)uVar41 + '\x01';
                      lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                      *(undefined4 *)(lVar39 + 4) = 0x10;
                      *(undefined4 *)(lVar39 + 8) = 0;
                      *(uint *)(lVar39 + 0xc) = uVar14;
                      *(undefined8 *)(lVar39 + 0x14) = 0;
                      *(undefined4 *)(lVar39 + 0x1c) = 0;
                      if (uVar14 == *(byte *)(lVar42 + 0x8649)) {
                        bVar16 = *(byte *)(lVar42 + 0x1b7);
                        uVar41 = (uint)bVar16;
                        if (uVar41 < 0x88) {
                          *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                          lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                          *(undefined4 *)(lVar39 + 4) = 0x2f;
                          *(undefined4 *)(lVar39 + 8) = 0;
                          *(undefined4 *)(lVar39 + 0xc) = 0;
                          *(undefined8 *)(lVar39 + 0x14) = 0x7f;
                          *(undefined4 *)(lVar39 + 0x1c) = 0;
                          goto LAB_001d109c;
                        }
                      }
                      else {
LAB_001d109c:
                        uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                      }
                      *(char *)(lVar42 + 0x1b7) = (char)uVar41 + '\x01';
                      lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                      *(undefined4 *)(lVar39 + 4) = 0x32;
                      *(undefined4 *)(lVar39 + 8) = 0;
                      *(uint *)(lVar39 + 0xc) = uVar14;
                      if (uVar7 == 0x1f) {
                        uVar29 = 0;
                      }
                      else {
                        uVar29 = (ulong)(uVar7 + 2);
                      }
                      *(ulong *)(lVar39 + 0x14) = uVar29;
                      *(undefined4 *)(lVar39 + 0x1c) = 0;
                      uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                    }
                    uVar7 = uVar14 + 1;
                    uVar38 = pbVar22[1] & 0x1f;
                    if (((((&DAT_0048e730)[uVar38] & *(byte *)(lVar42 + 10)) != 0) || (3 < uVar38))
                       && (uVar41 < 0x88)) {
                      *(char *)(lVar42 + 0x1b7) = (char)uVar41 + '\x01';
                      lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                      *(undefined4 *)(lVar39 + 4) = 0x10;
                      *(undefined4 *)(lVar39 + 8) = 0;
                      *(uint *)(lVar39 + 0xc) = uVar7;
                      *(undefined8 *)(lVar39 + 0x14) = 0;
                      *(undefined4 *)(lVar39 + 0x1c) = 0;
                      bVar16 = *(byte *)(lVar42 + 0x1b7);
                      uVar41 = (uint)bVar16;
                      if ((uVar7 == *(byte *)(lVar42 + 0x8649)) && (bVar16 < 0x88)) {
                        *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                        lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                        *(undefined4 *)(lVar39 + 4) = 0x2f;
                        *(undefined4 *)(lVar39 + 8) = 0;
                        *(undefined4 *)(lVar39 + 0xc) = 0;
                        *(undefined8 *)(lVar39 + 0x14) = 0x7f;
                        *(undefined4 *)(lVar39 + 0x1c) = 0;
                        uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                      }
                      *(char *)(lVar42 + 0x1b7) = (char)uVar41 + '\x01';
                      lVar39 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                      *(undefined4 *)(lVar39 + 4) = 0x32;
                      *(undefined4 *)(lVar39 + 8) = 0;
                      *(uint *)(lVar39 + 0xc) = uVar7;
                      if (uVar38 == 0x1f) {
                        uVar29 = 0;
                      }
                      else {
                        uVar29 = (ulong)(uVar38 + 2);
                      }
                      *(ulong *)(lVar39 + 0x14) = uVar29;
                      *(undefined4 *)(lVar39 + 0x1c) = 0;
                      uVar41 = (uint)*(byte *)(lVar42 + 0x1b7);
                    }
                    uVar14 = uVar14 + 2;
                    pbVar22 = pbVar22 + 2;
                  } while (uVar14 != 0x20);
                }
                uVar14 = *(uint *)(lVar42 + 0xb0c);
                *(uint *)(lVar42 + 0xb10) = uVar14;
                local_10 = 0;
                local_f = 0xff;
                local_e = 0x80;
                local_d = 0x80;
                lVar39 = lVar42 + (ulong)uVar14 * 0x14;
                local_c = 0;
                local_b = 0;
                *(undefined4 *)(lVar39 + 0xb50) = 0;
                *(undefined4 *)(lVar39 + 0xb54) = 0xff;
                *(undefined4 *)(lVar39 + 0xb58) = 0x80;
                *(undefined4 *)(lVar39 + 0xb5c) = 0x80;
                *(undefined4 *)(lVar39 + 0xb60) = 0;
                if (uVar41 < 0x88) {
                  uVar7 = uVar14 + 1 & 0x3ff;
                  *(char *)(lVar42 + 0x1b7) = (char)uVar41 + '\x01';
                  lVar39 = lVar42 + (ulong)uVar7 * 0x14;
                  lVar19 = lVar42 + (long)(int)uVar41 * 0x14 + 0x7ac0;
                  local_10 = 1;
                  *(undefined4 *)(lVar19 + 4) = 0x30;
                  *(undefined4 *)(lVar19 + 8) = 0;
                  *(undefined4 *)(lVar19 + 0xc) = 0;
                  *(undefined8 *)(lVar19 + 0x14) = 0;
                  *(uint *)(lVar19 + 0x1c) = uVar14;
                  *(uint *)(lVar42 + 0xb0c) = uVar7;
                  bVar16 = *(byte *)(lVar42 + 0x1b7);
                  *(uint *)(lVar42 + 0xb14) = uVar7;
                  *(undefined4 *)(lVar39 + 0xb50) = 1;
                  *(undefined4 *)(lVar39 + 0xb54) = 0xff;
                  *(undefined4 *)(lVar39 + 0xb58) = 0x80;
                  *(undefined4 *)(lVar39 + 0xb5c) = 0x80;
                  *(undefined4 *)(lVar39 + 0xb60) = 0;
                  if (bVar16 < 0x88) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    uVar41 = uVar7 + 1 & 0x3ff;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    local_10 = 2;
                    lVar19 = lVar42 + (ulong)uVar41 * 0x14;
                    *(undefined4 *)(lVar39 + 4) = 0x30;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(undefined4 *)(lVar39 + 0xc) = 0;
                    *(uint *)(lVar39 + 0x1c) = uVar7;
                    *(undefined8 *)(lVar39 + 0x14) = 1;
                    *(uint *)(lVar42 + 0xb0c) = uVar41;
                    bVar16 = *(byte *)(lVar42 + 0x1b7);
                    *(uint *)(lVar42 + 0xb18) = uVar41;
                    *(undefined4 *)(lVar19 + 0xb50) = 2;
                    *(undefined4 *)(lVar19 + 0xb54) = 0xff;
                    *(undefined4 *)(lVar19 + 0xb58) = 0x80;
                    *(undefined4 *)(lVar19 + 0xb5c) = 0x80;
                    *(undefined4 *)(lVar19 + 0xb60) = 0;
                    if (0x87 < bVar16) goto LAB_001d0f24;
                    uVar14 = uVar41 + 1 & 0x3ff;
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    lVar19 = lVar42 + (ulong)uVar14 * 0x14;
                    local_10 = 3;
                    *(undefined4 *)(lVar39 + 4) = 0x30;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(undefined4 *)(lVar39 + 0xc) = 0;
                    *(undefined8 *)(lVar39 + 0x14) = 2;
                    *(uint *)(lVar39 + 0x1c) = uVar41;
                    *(uint *)(lVar42 + 0xb0c) = uVar14;
                    bVar16 = *(byte *)(lVar42 + 0x1b7);
                    *(uint *)(lVar42 + 0xb1c) = uVar14;
                    *(undefined4 *)(lVar19 + 0xb50) = 3;
                    *(undefined4 *)(lVar19 + 0xb54) = 0xff;
                    *(undefined4 *)(lVar19 + 0xb58) = 0x80;
                    *(undefined4 *)(lVar19 + 0xb5c) = 0x80;
                    *(undefined4 *)(lVar19 + 0xb60) = 0;
                    if (bVar16 < 0x88) {
                      *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                      lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                      *(undefined4 *)(lVar39 + 4) = 0x30;
                      *(undefined4 *)(lVar39 + 8) = 0;
                      *(undefined4 *)(lVar39 + 0xc) = 0;
                      *(undefined8 *)(lVar39 + 0x14) = 3;
                      *(uint *)(lVar39 + 0x1c) = uVar14;
                    }
                  }
                  else {
                    uVar41 = uVar7 + 1 & 0x3ff;
                    *(uint *)(lVar42 + 0xb18) = uVar41;
                    uVar14 = uVar41 + 1 & 0x3ff;
                    lVar39 = lVar42 + (ulong)uVar41 * 0x14;
                    lVar19 = lVar42 + (ulong)uVar14 * 0x14;
                    *(undefined4 *)(lVar39 + 0xb50) = 2;
                    *(undefined4 *)(lVar39 + 0xb54) = 0xff;
                    *(undefined4 *)(lVar39 + 0xb58) = 0x80;
                    *(undefined4 *)(lVar39 + 0xb5c) = 0x80;
                    *(undefined4 *)(lVar39 + 0xb60) = 0;
                    *(uint *)(lVar42 + 0xb1c) = uVar14;
                    *(undefined4 *)(lVar19 + 0xb50) = 3;
                    *(undefined4 *)(lVar19 + 0xb54) = 0xff;
                    *(undefined4 *)(lVar19 + 0xb58) = 0x80;
                    *(undefined4 *)(lVar19 + 0xb5c) = 0x80;
                    *(undefined4 *)(lVar19 + 0xb60) = 0;
                  }
                }
                else {
                  uVar14 = uVar14 + 1 & 0x3ff;
                  *(uint *)(lVar42 + 0xb14) = uVar14;
                  uVar41 = uVar14 + 1 & 0x3ff;
                  lVar39 = lVar42 + (ulong)uVar14 * 0x14;
                  lVar19 = lVar42 + (ulong)uVar41 * 0x14;
                  *(undefined4 *)(lVar39 + 0xb50) = 1;
                  *(undefined4 *)(lVar39 + 0xb54) = 0xff;
                  *(undefined4 *)(lVar39 + 0xb58) = 0x80;
                  *(undefined4 *)(lVar39 + 0xb5c) = 0x80;
                  *(undefined4 *)(lVar39 + 0xb60) = 0;
                  *(uint *)(lVar42 + 0xb18) = uVar41;
                  *(undefined4 *)(lVar19 + 0xb50) = 2;
                  *(undefined4 *)(lVar19 + 0xb54) = 0xff;
                  *(undefined4 *)(lVar19 + 0xb58) = 0x80;
                  *(undefined4 *)(lVar19 + 0xb5c) = 0x80;
                  *(undefined4 *)(lVar19 + 0xb60) = 0;
LAB_001d0f24:
                  uVar14 = uVar41 + 1 & 0x3ff;
                  *(uint *)(lVar42 + 0xb1c) = uVar14;
                  lVar39 = lVar42 + (ulong)uVar14 * 0x14;
                  *(undefined4 *)(lVar39 + 0xb50) = 3;
                  *(undefined4 *)(lVar39 + 0xb54) = 0xff;
                  *(undefined4 *)(lVar39 + 0xb58) = 0x80;
                  *(undefined4 *)(lVar39 + 0xb5c) = 0x80;
                  *(undefined4 *)(lVar39 + 0xb60) = 0;
                }
                pcVar30 = (char *)(lVar42 + 0x37);
                *(uint *)(lVar42 + 0xb0c) = uVar14 + 1 & 0x3ff;
                uVar41 = 0;
                do {
                  if ((*(char *)(lVar42 + 0xc) == '\x01') && (pcVar30[-0x20] == '\x01')) {
                    uVar38 = uVar41 << 1;
                    uVar7 = uVar41 & 0xff;
                    uVar25 = 8;
                    uVar29 = 1;
                    cVar17 = '\x01';
                    uVar14 = uVar41;
LAB_001d0860:
                    *pcVar24 = cVar17;
                    pcVar24[-1] = (char)uVar7;
                    uVar7 = *(uint *)(lVar42 + (ulong)uVar25 * 4 + 0x28c) >> (ulong)(uVar38 & 0x1f)
                            & 3;
                    uVar2 = *(undefined4 *)(&DAT_0048df90 + (ulong)uVar7 * 4);
                    *(undefined4 *)puVar15 = *(undefined4 *)(&DAT_0048df80 + (ulong)uVar7 * 4);
                    *(undefined4 *)(puVar15 + 8) = uVar2;
                  }
                  else {
                    bVar16 = pcVar30[0x20];
                    uVar14 = (uint)bVar16;
                    if (bVar16 < 2) {
                      if (*pcVar30 != '\0') {
                        *pcVar24 = -0x80;
                        uVar29 = 0x80;
                        pcVar24[-1] = bVar16;
                        goto LAB_001d0940;
                      }
                      uVar38 = 0;
                      uVar29 = 0;
                      uVar7 = 0;
                      cVar17 = '\0';
                      uVar25 = uVar38;
                      uVar14 = uVar38;
                      goto LAB_001d0860;
                    }
                    bVar23 = (bVar16 >> 1) - 1;
                    uVar29 = (ulong)bVar23;
                    cVar17 = (bVar16 >> 1) - 1;
                    if (*pcVar30 == '\0') {
                      uVar14 = (uint)(byte)pcVar30[0x10] + (bVar16 & 1) * 0x40;
                      uVar7 = uVar14 & 0x7f;
                      uVar38 = (uVar14 & 0xf) << 1;
                      uVar25 = (uint)bVar23 * 8 + (uVar7 >> 4);
                      uVar14 = uVar7;
                      goto LAB_001d0860;
                    }
                    uVar7 = bVar23 + 0x80;
                    uVar29 = (ulong)uVar7;
                    uVar14 = bVar16 & 1;
                    *pcVar24 = (char)uVar7;
                    pcVar24[-1] = (char)uVar14;
                    if (uVar7 < 0x99) {
                      if (*(char *)(lVar42 + 0x16) == '\0') {
                        uVar29 = 0x80;
                      }
                      else if (uVar7 == 0x8f) {
                        uVar29 = 0x99;
                      }
                    }
                    else if (uVar7 == 0x99) {
                      uVar29 = 0x8f;
                    }
LAB_001d0940:
                    *(undefined4 *)puVar15 = 0x18;
                    *(undefined4 *)(puVar15 + 8) = 2;
                  }
                  bVar16 = *(byte *)(lVar42 + 0x1b7);
                  if (bVar16 < 0x88) {
                    *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                    lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                    *(undefined4 *)(lVar39 + 4) = 2;
                    *(undefined4 *)(lVar39 + 8) = 0;
                    *(uint *)(lVar39 + 0xc) = uVar41;
                    *(ulong *)(lVar39 + 0x14) = uVar29;
                    *(uint *)(lVar39 + 0x1c) = uVar14;
                  }
                  uVar41 = uVar41 + 1;
                  pcVar24 = pcVar24 + 0x14;
                  puVar15 = (undefined8 *)((long)puVar15 + 4);
                  pcVar30 = pcVar30 + 1;
                } while (uVar41 != 0x10);
              }
              *(undefined4 *)(lVar42 + 0x1e8) = 0x30;
              *(undefined4 *)(lVar42 + 0x1e4) = 0x7d;
              *(undefined4 *)(lVar42 + 0x1ec) = 0x2800;
              uVar41 = *(uint *)(lVar42 + 0x1d8);
              bVar16 = *(byte *)(lVar42 + 0x8648);
              if (bVar16 != 0) {
                bVar23 = bVar16 - 1 & 7;
                if (((uVar41 & 1) != 0) &&
                   (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *(int *)(lVar42 + 0x8f30))) {
                  *(int *)(lVar42 + 0x8f30) = iVar6;
                  *(int *)(lVar42 + 0x8f30) =
                       iVar6 + (*(int *)(lVar42 + 0x8f2c) - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                }
                uVar29 = 1;
                piVar13 = (int *)(lVar42 + 0x8f50);
                uVar14 = (uint)bVar16;
                if (uVar14 != 1) {
                  if (bVar23 != 0) {
                    if (bVar23 != 1) {
                      if (bVar23 != 2) {
                        if (bVar23 != 3) {
                          if (bVar23 != 4) {
                            if (bVar23 != 5) {
                              if (bVar23 != 6) {
                                if (((uVar41 >> 1 & 1) != 0) &&
                                   (iVar6 = *(int *)(lVar42 + 0x1f0),
                                   iVar6 < *(int *)(lVar42 + 0x8f50))) {
                                  *(int *)(lVar42 + 0x8f50) = iVar6;
                                  *(int *)(lVar42 + 0x8f50) =
                                       iVar6 + (*(int *)(lVar42 + 0x8f4c) - *(int *)(lVar42 + 0x1e0)
                                               ) * 0x2800;
                                }
                                uVar29 = 2;
                                piVar13 = (int *)(lVar42 + 0x8f70);
                              }
                              if (((1 << uVar29 & uVar41) != 0) &&
                                 (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *piVar13)) {
                                *piVar13 = iVar6;
                                *piVar13 = iVar6 + (piVar13[-1] - *(int *)(lVar42 + 0x1e0)) * 0x2800
                                ;
                              }
                              uVar29 = (ulong)((int)uVar29 + 1);
                              piVar13 = piVar13 + 8;
                            }
                            if (((1 << uVar29 & uVar41) != 0) &&
                               (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *piVar13)) {
                              *piVar13 = iVar6;
                              *piVar13 = iVar6 + (piVar13[-1] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                            }
                            uVar29 = (ulong)((int)uVar29 + 1);
                            piVar13 = piVar13 + 8;
                          }
                          if (((1 << uVar29 & uVar41) != 0) &&
                             (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *piVar13)) {
                            *piVar13 = iVar6;
                            *piVar13 = iVar6 + (piVar13[-1] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                          }
                          uVar29 = (ulong)((int)uVar29 + 1);
                          piVar13 = piVar13 + 8;
                        }
                        if (((1 << uVar29 & uVar41) != 0) &&
                           (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *piVar13)) {
                          *piVar13 = iVar6;
                          *piVar13 = iVar6 + (piVar13[-1] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                        }
                        uVar29 = (ulong)((int)uVar29 + 1);
                        piVar13 = piVar13 + 8;
                      }
                      if (((1 << (ulong)((uint)uVar29 & 0x1f) & uVar41) != 0) &&
                         (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *piVar13)) {
                        *piVar13 = iVar6;
                        *piVar13 = iVar6 + (piVar13[-1] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                      }
                      uVar29 = (ulong)((uint)uVar29 + 1);
                      piVar13 = piVar13 + 8;
                    }
                    if (((1 << (ulong)((uint)uVar29 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *piVar13)) {
                      *piVar13 = iVar6;
                      *piVar13 = iVar6 + (piVar13[-1] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                    }
                    uVar7 = (uint)uVar29 + 1;
                    uVar29 = (ulong)uVar7;
                    piVar13 = piVar13 + 8;
                    if (uVar7 == uVar14) goto joined_r0x001cd090;
                  }
                  do {
                    uVar7 = (uint)uVar29;
                    if (((1 << (ulong)(uVar7 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *piVar13)) {
                      *piVar13 = iVar6;
                      *piVar13 = iVar6 + (piVar13[-1] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                    }
                    if (((1 << (ulong)(uVar7 + 1 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < piVar13[8])) {
                      piVar13[8] = iVar6;
                      piVar13[8] = iVar6 + (piVar13[7] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                    }
                    if (((1 << (ulong)(uVar7 + 2 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < piVar13[0x10])) {
                      piVar13[0x10] = iVar6;
                      piVar13[0x10] = iVar6 + (piVar13[0xf] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                    }
                    if (((1 << (ulong)(uVar7 + 3 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < piVar13[0x18])) {
                      piVar13[0x18] = iVar6;
                      piVar13[0x18] = iVar6 + (piVar13[0x17] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                    }
                    if (((1 << (ulong)(uVar7 + 4 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < piVar13[0x20])) {
                      piVar13[0x20] = iVar6;
                      piVar13[0x20] = iVar6 + (piVar13[0x1f] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                    }
                    if (((1 << (ulong)(uVar7 + 5 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < piVar13[0x28])) {
                      piVar13[0x28] = iVar6;
                      piVar13[0x28] = iVar6 + (piVar13[0x27] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                    }
                    if (((1 << (ulong)(uVar7 + 6 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < piVar13[0x30])) {
                      piVar13[0x30] = iVar6;
                      piVar13[0x30] = iVar6 + (piVar13[0x2f] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                    }
                    if (((1 << (ulong)(uVar7 + 7 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < piVar13[0x38])) {
                      piVar13[0x38] = iVar6;
                      piVar13[0x38] = iVar6 + (piVar13[0x37] - *(int *)(lVar42 + 0x1e0)) * 0x2800;
                    }
                    uVar29 = (ulong)(uVar7 + 8);
                    piVar13 = piVar13 + 0x40;
                  } while (uVar7 + 8 != uVar14);
                }
              }
              goto joined_r0x001cd090;
            }
            break;
          case 0xc0:
          case 0xc1:
          case 0xc2:
          case 0xc3:
          case 0xc4:
          case 0xc5:
          case 0xc6:
          case 199:
          case 200:
          case 0xc9:
          case 0xca:
          case 0xcb:
          case 0xcc:
          case 0xcd:
          case 0xce:
          case 0xcf:
            if (uVar31 == 0) {
              FUN_00127de4(lVar42);
              uVar14 = (uint)bVar33;
              iVar6 = *(int *)(&DAT_0048eb40 + (ulong)(bVar23 & 0xf) * 4);
              if (iVar6 == 0) goto LAB_001cc168;
              *(int *)(lVar42 + 0x1e8) = iVar6;
              *(uint *)(lVar42 + 0x1e4) = uVar14;
              if (bVar33 < 0x14) {
                uVar14 = 0x14;
                *(undefined4 *)(lVar42 + 0x1e4) = 0x14;
              }
              uVar41 = *(uint *)(lVar42 + 0x1d8);
              iVar40 = 0;
              if ((long)(int)(iVar6 * uVar14) != 0) {
                iVar40 = (int)(0x3a98000 / (long)(int)(iVar6 * uVar14));
              }
              *(int *)(lVar42 + 0x1ec) = iVar40;
              bVar16 = *(byte *)(lVar42 + 0x8648);
              if (bVar16 != 0) {
                bVar23 = bVar16 - 1 & 3;
                if (((uVar41 & 1) != 0) &&
                   (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *(int *)(lVar42 + 0x8f30))) {
                  *(int *)(lVar42 + 0x8f30) = iVar6;
                  *(int *)(lVar42 + 0x8f30) =
                       iVar6 + iVar40 * (*(int *)(lVar42 + 0x8f2c) - *(int *)(lVar42 + 0x1e0));
                }
                uVar29 = 1;
                piVar13 = (int *)(lVar42 + 0x8f50);
                uVar14 = (uint)bVar16;
                if (uVar14 != 1) {
                  if (bVar23 != 0) {
                    if (bVar23 != 1) {
                      if (bVar23 != 2) {
                        if (((uVar41 >> 1 & 1) != 0) &&
                           (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *(int *)(lVar42 + 0x8f50))) {
                          *(int *)(lVar42 + 0x8f50) = iVar6;
                          *(int *)(lVar42 + 0x8f50) =
                               iVar6 + iVar40 * (*(int *)(lVar42 + 0x8f4c) -
                                                *(int *)(lVar42 + 0x1e0));
                        }
                        uVar29 = 2;
                        piVar13 = (int *)(lVar42 + 0x8f70);
                      }
                      if (((1 << uVar29 & uVar41) != 0) &&
                         (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *piVar13)) {
                        *piVar13 = iVar6;
                        *piVar13 = iVar6 + iVar40 * (piVar13[-1] - *(int *)(lVar42 + 0x1e0));
                      }
                      uVar29 = (ulong)((int)uVar29 + 1);
                      piVar13 = piVar13 + 8;
                    }
                    if (((1 << uVar29 & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *piVar13)) {
                      *piVar13 = iVar6;
                      *piVar13 = iVar6 + iVar40 * (piVar13[-1] - *(int *)(lVar42 + 0x1e0));
                    }
                    uVar7 = (int)uVar29 + 1;
                    uVar29 = (ulong)uVar7;
                    piVar13 = piVar13 + 8;
                    if (uVar7 == uVar14) goto joined_r0x001cd090;
                  }
                  do {
                    uVar7 = (uint)uVar29;
                    if (((1 << (ulong)(uVar7 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < *piVar13)) {
                      *piVar13 = iVar6;
                      *piVar13 = iVar6 + iVar40 * (piVar13[-1] - *(int *)(lVar42 + 0x1e0));
                    }
                    if (((1 << (ulong)(uVar7 + 1 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < piVar13[8])) {
                      piVar13[8] = iVar6;
                      piVar13[8] = iVar6 + iVar40 * (piVar13[7] - *(int *)(lVar42 + 0x1e0));
                    }
                    if (((1 << (ulong)(uVar7 + 2 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < piVar13[0x10])) {
                      piVar13[0x10] = iVar6;
                      piVar13[0x10] = iVar6 + iVar40 * (piVar13[0xf] - *(int *)(lVar42 + 0x1e0));
                    }
                    if (((1 << (ulong)(uVar7 + 3 & 0x1f) & uVar41) != 0) &&
                       (iVar6 = *(int *)(lVar42 + 0x1f0), iVar6 < piVar13[0x18])) {
                      piVar13[0x18] = iVar6;
                      piVar13[0x18] = iVar6 + iVar40 * (piVar13[0x17] - *(int *)(lVar42 + 0x1e0));
                    }
                    uVar29 = (ulong)(uVar7 + 4);
                    piVar13 = piVar13 + 0x20;
                  } while (uVar7 + 4 != uVar14);
                }
              }
              goto joined_r0x001cd090;
            }
            break;
          case 0xd0:
            if (uVar31 == 0) {
              if (uVar38 == 0) {
                FUN_00127de4(lVar42);
                *(undefined1 *)(lVar42 + 0x1b9) = uVar34;
                uVar41 = *(uint *)(lVar42 + 0x1d8);
                *(undefined1 *)(lVar42 + 0x1ba) = uVar34;
                *(undefined1 *)(lVar42 + 0x1bb) = uVar34;
                *(undefined1 *)(lVar42 + 0x1bc) = uVar34;
                goto joined_r0x001cd090;
              }
              if (uVar38 == 1) {
                FUN_00127de4(lVar42);
                if (*(char *)(lVar42 + 0x864a) != '\0') goto LAB_001cc168;
                *(undefined4 *)(lVar42 + 0x1d8) = 0;
                *(byte *)(lVar42 + 0x13) = bVar33;
                cVar17 = pcVar43[0x1b7];
                goto LAB_001cb648;
              }
            }
            break;
          case 0xdc:
            iVar6 = uVar38 << 8;
            if (*(byte *)(lVar42 + 0xc) < 3) {
              iVar6 = 0;
            }
            *(int *)(lVar27 + 0x8f2c) = iVar28 + iVar6;
            *(int *)(lVar27 + 0x8f30) = *(int *)(lVar27 + 0x8f30) + iVar6 * *(int *)(lVar42 + 0x1ec)
            ;
            break;
          case 0xdd:
            if ((-2 < iVar6) && (uVar31 == 0)) {
              uVar29 = (ulong)(bVar33 >> 6);
              if ((bVar33 & 3) == 0) {
                if ((iVar5 != *(int *)(lVar42 + 0x8000 + uVar29 * 4 + 0x5c8)) ||
                   (*(char *)(lVar42 + 0x11) == '\0')) goto LAB_001cdea0;
                if (iVar6 != -1) {
                  FUN_00127de4(lVar42);
                  lVar39 = lVar42 + uVar29 * 0x120;
                  *(undefined4 *)(lVar39 + 0x75f0) = 1;
                  *(undefined4 *)(lVar39 + 0x75f4) = 0xffffffff;
                  uVar41 = *(uint *)(lVar42 + 0x1d8);
                  *(uint *)(lVar39 + 0x75f8) = uVar41;
                  *(undefined4 *)(lVar39 + 0x75fc) = *(undefined4 *)(lVar42 + 0x1f0);
                  *(undefined4 *)(lVar39 + 0x7600) = *(undefined4 *)(lVar42 + 500);
                  *(undefined4 *)(lVar39 + 0x7604) = *(undefined4 *)(lVar42 + 0x1f8);
                  *(undefined4 *)(lVar39 + 0x7608) = *(undefined4 *)(lVar42 + 0x1e4);
                  *(undefined4 *)(lVar39 + 0x760c) = *(undefined4 *)(lVar42 + 0x1ec);
                  *(undefined4 *)(lVar39 + 0x7620) = *(undefined4 *)(lVar42 + 0x8f28);
                  *(undefined4 *)(lVar39 + 0x7624) = *(undefined4 *)(lVar42 + 0x8f2c);
                  *(undefined4 *)(lVar39 + 0x7628) = *(undefined4 *)(lVar42 + 0x8f30);
                  *(undefined4 *)(lVar39 + 0x7640) = *(undefined4 *)(lVar42 + 0x8f48);
                  *(undefined4 *)(lVar39 + 0x7644) = *(undefined4 *)(lVar42 + 0x8f4c);
                  *(undefined4 *)(lVar39 + 0x7648) = *(undefined4 *)(lVar42 + 0x8f50);
                  *(undefined4 *)(lVar39 + 0x7660) = *(undefined4 *)(lVar42 + 0x8f68);
                  *(undefined4 *)(lVar39 + 0x7664) = *(undefined4 *)(lVar42 + 0x8f6c);
                  *(undefined4 *)(lVar39 + 0x7668) = *(undefined4 *)(lVar42 + 0x8f70);
                  *(undefined4 *)(lVar39 + 0x7680) = *(undefined4 *)(lVar42 + 0x8f88);
                  *(undefined4 *)(lVar39 + 0x7684) = *(undefined4 *)(lVar42 + 0x8f8c);
                  *(undefined4 *)(lVar39 + 0x7688) = *(undefined4 *)(lVar42 + 0x8f90);
                  *(undefined4 *)(lVar39 + 0x76a0) = *(undefined4 *)(lVar42 + 0x8fa8);
                  *(undefined4 *)(lVar39 + 0x76a4) = *(undefined4 *)(lVar42 + 0x8fac);
                  *(undefined4 *)(lVar39 + 0x76a8) = *(undefined4 *)(lVar42 + 0x8fb0);
                  *(undefined4 *)(lVar39 + 0x76c0) = *(undefined4 *)(lVar42 + 0x8fc8);
                  *(undefined4 *)(lVar39 + 0x76c4) = *(undefined4 *)(lVar42 + 0x8fcc);
                  *(undefined4 *)(lVar39 + 0x76c8) = *(undefined4 *)(lVar42 + 0x8fd0);
                  *(undefined4 *)(lVar39 + 0x76e0) = *(undefined4 *)(lVar42 + 0x8fe8);
                  *(undefined4 *)(lVar39 + 0x76e4) = *(undefined4 *)(lVar42 + 0x8fec);
                  *(undefined4 *)(lVar39 + 0x76e8) = *(undefined4 *)(lVar42 + 0x8ff0);
                  *(undefined4 *)(lVar39 + 0x7700) = *(undefined4 *)(lVar42 + 0x9008);
                  *(undefined4 *)(lVar39 + 0x7704) = *(undefined4 *)(lVar42 + 0x900c);
                  *(undefined4 *)(lVar39 + 0x7708) = *(undefined4 *)(lVar42 + 0x9010);
                  goto joined_r0x001cd090;
                }
              }
              else if ((uVar7 & 3) == 1) {
                if (iVar6 == 0) {
                  iVar6 = *(int *)(lVar42 + 0x8000 + uVar29 * 4 + 0x5c8);
                  if ((iVar5 == iVar6) && (-1 < iVar6)) {
                    *(undefined4 *)(lVar42 + 0x1d8) = 0;
                    *(undefined1 *)(lVar42 + 0x13) = 1;
                  }
                  if (*(char *)(lVar42 + 0x11) != '\0') {
LAB_001cdc14:
                    FUN_00127de4(lVar42);
                    lVar39 = lVar42 + uVar29 * 0x120;
                    if ((*(int *)(lVar39 + 0x75f0) == 0) ||
                       (*(int *)(lVar42 + 0x1f0) < *(int *)(lVar39 + 0x75fc))) {
LAB_001cde98:
                      uVar41 = *(uint *)(lVar42 + 0x1d8);
                    }
                    else {
                      if (*(int *)(lVar39 + 0x75fc) != *(int *)(lVar42 + 0x1f0)) {
                        iVar6 = *(int *)(lVar39 + 0x75f4);
                        if (iVar6 < 0) {
                          *(uint *)(lVar39 + 0x75f4) = bVar33 >> 2 & 0xf;
                        }
                        else if (iVar6 != 0) {
                          if (iVar6 == 1) goto LAB_001cde98;
                          *(int *)(lVar39 + 0x75f4) = iVar6 + -1;
                        }
                        iVar6 = *(int *)(lVar42 + 0x208);
                        while (0 < iVar6) {
                          plVar21 = *(long **)(lVar42 + 0x5b50);
                          uVar41 = *(uint *)((long)plVar21 + 0xc);
                          if (uVar41 < 0x80) {
                            FUN_0012812c(lVar42,0,uVar41,(int)plVar21[2]);
                            iVar6 = *(int *)(lVar42 + 0x208);
LAB_001cdcf0:
                            if (iVar6 == 0) break;
                            plVar21 = *(long **)(lVar42 + 0x5b50);
                          }
                          else {
                            bVar16 = *(byte *)(lVar42 + 0x1b7);
                            uVar14 = *(uint *)(plVar21 + 2);
                            if (bVar16 < 0x88) {
                              *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                              iVar6 = *(int *)(lVar42 + 0x208);
                              lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                              *(undefined4 *)(lVar39 + 4) = 0x21;
                              *(undefined4 *)(lVar39 + 8) = 0;
                              *(uint *)(lVar39 + 0xc) = uVar41 - 0x80 & 0xff;
                              *(ulong *)(lVar39 + 0x14) = (ulong)uVar14;
                              *(undefined4 *)(lVar39 + 0x1c) = 0;
                              goto LAB_001cdcf0;
                            }
                          }
                          lVar39 = *plVar21;
                          *(long *)(lVar42 + 0x5b50) = lVar39;
                          *plVar21 = *(long *)(lVar42 + 0x5b60);
                          *(long **)(lVar42 + 0x5b60) = plVar21;
                          if (lVar39 == 0) {
                            *(undefined8 *)(lVar42 + 0x5b58) = 0;
                          }
                          iVar6 = iVar6 + -1;
                          *(int *)(lVar42 + 0x208) = iVar6;
                        }
                        if ((*(char *)(lVar42 + 0x8649) != ' ') &&
                           (bVar16 = *(byte *)(lVar42 + 0x1b7), bVar16 < 0x88)) {
                          *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
                          lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
                          *(undefined4 *)(lVar39 + 4) = 0x2f;
                          *(undefined4 *)(lVar39 + 8) = 0;
                          *(undefined4 *)(lVar39 + 0xc) = 0;
                          *(undefined8 *)(lVar39 + 0x14) = 0x7f;
                          *(undefined4 *)(lVar39 + 0x1c) = 0;
                        }
                        iVar6 = *(int *)(lVar42 + 0x1f0);
                        lVar39 = lVar42 + uVar29 * 0x120;
                        iVar40 = *(int *)(lVar39 + 0x75fc);
                        *(int *)(lVar42 + 0x1f0) = iVar40;
                        *(undefined4 *)(lVar42 + 0x200) = 1;
                        *(int *)(lVar42 + 0x204) = iVar40 - (iVar6 - *(int *)(lVar42 + 0x1f8));
                        *(undefined4 *)(lVar42 + 500) = *(undefined4 *)(lVar39 + 0x7600);
                        *(undefined4 *)(lVar42 + 0x1f8) = *(undefined4 *)(lVar39 + 0x7604);
                        uVar41 = *(uint *)(lVar39 + 0x75f8);
                        *(uint *)(lVar42 + 0x1d8) = uVar41;
                        *(undefined4 *)(lVar42 + 0x1e4) = *(undefined4 *)(lVar39 + 0x7608);
                        *(undefined4 *)(lVar42 + 0x1ec) = *(undefined4 *)(lVar39 + 0x760c);
                        *(undefined4 *)(lVar42 + 0x8f28) = *(undefined4 *)(lVar39 + 0x7620);
                        *(undefined4 *)(lVar42 + 0x8f2c) = *(undefined4 *)(lVar39 + 0x7624);
                        *(undefined4 *)(lVar42 + 0x8f30) = *(undefined4 *)(lVar39 + 0x7628);
                        *(undefined4 *)(lVar42 + 0x8f48) = *(undefined4 *)(lVar39 + 0x7640);
                        *(undefined4 *)(lVar42 + 0x8f4c) = *(undefined4 *)(lVar39 + 0x7644);
                        *(undefined4 *)(lVar42 + 0x8f50) = *(undefined4 *)(lVar39 + 0x7648);
                        *(undefined4 *)(lVar42 + 0x8f68) = *(undefined4 *)(lVar39 + 0x7660);
                        *(undefined4 *)(lVar42 + 0x8f6c) = *(undefined4 *)(lVar39 + 0x7664);
                        *(undefined4 *)(lVar42 + 0x8f70) = *(undefined4 *)(lVar39 + 0x7668);
                        *(undefined4 *)(lVar42 + 0x8f88) = *(undefined4 *)(lVar39 + 0x7680);
                        *(undefined4 *)(lVar42 + 0x8f8c) = *(undefined4 *)(lVar39 + 0x7684);
                        *(undefined4 *)(lVar42 + 0x8f90) = *(undefined4 *)(lVar39 + 0x7688);
                        goto joined_r0x001cd090;
                      }
                      *(undefined4 *)(lVar42 + 0x1d8) = 0;
                      uVar41 = 0;
                    }
                    *(undefined1 *)(lVar42 + uVar29 + 0x1b9) = 1;
                    *(undefined4 *)(lVar42 + uVar29 * 0x120 + 0x75f0) = 0;
                    goto joined_r0x001cd090;
                  }
                }
                else if (*(char *)(lVar42 + 0x11) != '\0') {
                  if (iVar6 != -1) goto LAB_001cdc14;
                  break;
                }
LAB_001cdea0:
                FUN_00127de4(lVar42);
                uVar41 = *(uint *)(lVar42 + 0x1d8);
                goto joined_r0x001cd090;
              }
            }
            break;
          case 0xdf:
            uVar41 = uVar41 & (1 << (ulong)(uVar31 & 0x1f) ^ 0xffffffffU);
            *(uint *)(lVar42 + 0x1d8) = uVar41;
            if (uVar41 == 0) {
              *(undefined1 *)(lVar42 + 0x13) = 1;
              cVar17 = pcVar43[0x1b7];
              goto LAB_001cb648;
            }
            goto LAB_001cbde0;
          case 0xe0:
            bVar16 = *(byte *)(lVar42 + (ulong)((uint)(bVar33 >> 6) + uVar31 * 4) + 0x27);
            *(char *)(lVar42 + (ulong)bVar16 + 0x47) = (char)(uVar7 & 0x3f);
            FUN_001b9adc(lVar42,iVar6,bVar16,uVar7 & 0x3f);
            uVar41 = *(uint *)(lVar42 + 0x1d8);
            goto joined_r0x001cd090;
          case 0xe1:
            uVar29 = (ulong)*(byte *)(lVar42 + (ulong)((uint)(bVar33 >> 6) + uVar31 * 4) + 0x27);
            *(byte *)(lVar42 + uVar29 + 0x57) = bVar33 & 0x3f;
            if ((*(char *)(lVar42 + 0xc) == '\x01') || (*(char *)(lVar42 + uVar29 + 0x37) == '\x01')
               ) {
LAB_001cdae4:
              FUN_001b9adc(lVar42,iVar6,uVar29,*(undefined1 *)(lVar42 + uVar29 + 0x47));
              uVar41 = *(uint *)(lVar42 + 0x1d8);
              goto joined_r0x001cd090;
            }
            break;
          case 0xe2:
            bVar16 = *(byte *)(lVar42 + (ulong)((uint)(bVar33 >> 6) + uVar31 * 4) + 0x27);
            *(char *)(lVar42 + (ulong)bVar16 + 0x67) = (char)(uVar7 & 0x3f);
            uVar29 = (ulong)((uint)(byte)(&DAT_0048e460)[(ulong)(uVar7 & 0x3f) * 2] +
                            (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar42 + 2)]);
            if (0xc0 < (uint)(byte)(&DAT_0048e460)[(ulong)(uVar7 & 0x3f) * 2] +
                       (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar42 + 2)]) {
              uVar29 = 0xc0;
            }
            bVar23 = (&DAT_0048e4e0)[uVar29];
            if ((-1 < iVar6) && (bVar33 = *(byte *)(lVar42 + 0x1b7), bVar33 < 0x88)) {
              *(byte *)(lVar42 + 0x1b7) = bVar33 + 1;
              uVar41 = *(uint *)(lVar42 + 0x1d8);
              lVar39 = lVar42 + (long)(int)(uint)bVar33 * 0x14 + 0x7ac0;
              *(undefined4 *)(lVar39 + 4) = 4;
              *(int *)(lVar39 + 8) = iVar6;
              *(uint *)(lVar39 + 0xc) = (uint)bVar16;
              *(ulong *)(lVar39 + 0x14) = (ulong)bVar23;
LAB_001cd808:
              *(undefined4 *)(lVar39 + 0x1c) = 0;
              *(uint *)(lVar42 + 500) = iVar40 + iVar6 * (uint)*(byte *)(lVar42 + 1) * 0x400;
              goto joined_r0x001cd090;
            }
            break;
          case 0xe3:
            uVar7 = uVar7 & 0x3f;
            bVar16 = *(byte *)(lVar42 + (ulong)((uint)(bVar33 >> 6) + uVar31 * 4) + 0x27);
            uVar29 = (ulong)(uVar7 << 1);
            *(char *)(lVar42 + (ulong)bVar16 + 0x77) = (char)uVar7;
            bVar23 = *(byte *)(lVar42 + 3);
            if ((bVar23 != 0x40) && (uVar29 = (ulong)bVar23, uVar7 != 0x20)) {
              uVar29 = (ulong)(byte)(&DAT_0048e740)
                                    [(ulong)(uVar7 >> 1) + (ulong)(bVar23 >> 2) * 0x20];
            }
            *(char *)(lVar42 + (ulong)bVar16 * 0x14 + 0x7370) = (char)uVar29;
            if ((-1 < iVar6) && (bVar23 = *(byte *)(lVar42 + 0x1b7), bVar23 < 0x88)) {
              *(byte *)(lVar42 + 0x1b7) = bVar23 + 1;
              uVar41 = *(uint *)(lVar42 + 0x1d8);
              lVar39 = lVar42 + (long)(int)(uint)bVar23 * 0x14 + 0x7ac0;
              *(undefined4 *)(lVar39 + 4) = 5;
              *(int *)(lVar39 + 8) = iVar6;
              *(uint *)(lVar39 + 0xc) = (uint)bVar16;
              *(ulong *)(lVar39 + 0x14) = uVar29;
              goto LAB_001cd808;
            }
            break;
          case 0xe4:
            uVar29 = (ulong)*(byte *)(lVar42 + (ulong)((uint)(bVar33 >> 6) + uVar31 * 4) + 0x27);
            *(char *)(lVar42 + uVar29 + 0x87) = (char)(uVar7 & 0x3f);
            iVar28 = *(int *)(&DAT_0048eb80 + (ulong)*(byte *)(lVar42 + uVar29 + 0x97) * 4) +
                     (uVar7 & 0x3f) * 2;
            if (iVar28 < 0) {
LAB_001cd784:
              iVar28 = 0;
            }
            else if (0x7f < iVar28) {
              iVar28 = 0x7f;
            }
            goto LAB_001cd6dc;
          case 0xe5:
            if (((bVar33 & 0x30) == 0) && (1 < *(byte *)(lVar42 + 0xc))) {
              *(byte *)(lVar42 + (ulong)(byte)((bVar33 >> 6) + (char)(uVar31 << 2)) + 0x27) =
                   bVar33 & 0xf;
            }
            break;
          case 0xe6:
            bVar23 = *(byte *)(lVar42 + (ulong)((uint)(bVar33 >> 6) + uVar31 * 4) + 0x27);
            bVar33 = ((bVar33 & 0x3f) - 0x20) + *(char *)(lVar42 + (ulong)bVar23 + 0x67);
            iVar28 = (int)(char)bVar33;
            if (iVar28 < 0) {
              uVar29 = 0;
            }
            else if (iVar28 < 0x40) {
              uVar29 = (ulong)(uint)(iVar28 << 1);
              bVar16 = bVar33;
            }
            else {
              uVar29 = 0x7e;
              bVar16 = 0x3f;
            }
            *(byte *)(lVar42 + (ulong)bVar23 + 0x67) = bVar16;
            uVar35 = (ulong)((uint)(byte)(&DAT_0048e460)[uVar29] +
                            (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar42 + 2)]);
            if (0xc0 < (uint)(byte)(&DAT_0048e460)[uVar29] +
                       (uint)(byte)(&DAT_0048e460)[*(byte *)(lVar42 + 2)]) {
              uVar35 = 0xc0;
            }
            bVar16 = (&DAT_0048e4e0)[uVar35];
            if ((-1 < iVar6) && (bVar33 = *(byte *)(lVar42 + 0x1b7), bVar33 < 0x88)) {
              *(byte *)(lVar42 + 0x1b7) = bVar33 + 1;
              uVar41 = *(uint *)(lVar42 + 0x1d8);
              lVar39 = lVar42 + (long)(int)(uint)bVar33 * 0x14 + 0x7ac0;
              *(undefined4 *)(lVar39 + 4) = 4;
              *(int *)(lVar39 + 8) = iVar6;
              *(uint *)(lVar39 + 0xc) = (uint)bVar23;
              *(ulong *)(lVar39 + 0x14) = (ulong)bVar16;
              goto LAB_001cd808;
            }
            break;
          case 0xe7:
            bVar16 = *(byte *)(lVar42 + (ulong)((uint)(bVar33 >> 6) + uVar31 * 4) + 0x27);
            if ((uVar38 & 0x3f) < 0x19) {
              bVar33 = (byte)(uVar38 & 0x3f);
              *(byte *)(lVar42 + (ulong)bVar16 * 0x14 + 0x736f) = bVar33;
              if ((-1 < iVar6) && (bVar23 = *(byte *)(lVar42 + 0x1b7), bVar23 < 0x88)) {
                *(byte *)(lVar42 + 0x1b7) = bVar23 + 1;
                uVar41 = *(uint *)(lVar42 + 0x1d8);
                lVar39 = lVar42 + (long)(int)(uint)bVar23 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar39 + 4) = 0xd;
                *(int *)(lVar39 + 8) = iVar6;
                *(uint *)(lVar39 + 0xc) = (uint)bVar16;
LAB_001cd804:
                *(ulong *)(lVar39 + 0x14) = (ulong)bVar33;
                goto LAB_001cd808;
              }
            }
            break;
          case 0xe8:
            uVar29 = (ulong)*(byte *)(lVar42 + (ulong)((uint)(bVar33 >> 6) + uVar31 * 4) + 0x27);
            iVar28 = *(int *)(&DAT_0048eb80 + (ulong)(uVar38 & 0x3f) * 4);
            *(char *)(lVar42 + uVar29 + 0x97) = (char)(uVar38 & 0x3f);
            iVar28 = iVar28 + (uint)*(byte *)(lVar42 + uVar29 + 0x87) * 2;
            if (iVar28 < 0) goto LAB_001cd784;
            if (0x7f < iVar28) {
              iVar28 = 0x7f;
            }
LAB_001cd6dc:
            if (iVar6 < 0) {
              lVar39 = lVar42 + uVar29 * 0x14;
              *(undefined1 *)(lVar39 + 0x736e) = *(undefined1 *)(lVar39 + 0x736f);
              *(short *)(lVar39 + 0x737a) = (short)(iVar28 << 7);
              break;
            }
            bVar16 = *(byte *)(lVar42 + 0x1b7);
            if (0x87 < bVar16) break;
            *(byte *)(lVar42 + 0x1b7) = bVar16 + 1;
            lVar19 = 0;
            lVar39 = lVar42 + (long)(int)(uint)bVar16 * 0x14 + 0x7ac0;
            *(undefined4 *)(lVar39 + 4) = 0x15;
            *(int *)(lVar39 + 8) = iVar6;
            *(int *)(lVar39 + 0xc) = (int)uVar29;
            if (*(char *)(lVar42 + uVar29 * 0x14 + 0x736f) != '\0') {
              lVar19 = (long)(iVar28 << 7);
            }
            *(undefined4 *)(lVar39 + 0x1c) = 0;
            *(long *)(lVar39 + 0x14) = lVar19;
            uVar41 = *(uint *)(lVar42 + 0x1d8);
            *(uint *)(lVar42 + 500) = iVar40 + iVar6 * (uint)*(byte *)(lVar42 + 1) * 0x400;
joined_r0x001cd090:
            if (uVar41 != 0) break;
            cVar17 = pcVar43[0x1b7];
            goto LAB_001cb648;
          case 0xe9:
            *(byte *)(lVar42 + (ulong)*(byte *)(lVar42 + (ulong)((uint)(bVar33 >> 6) + uVar31 * 4) +
                                               0x27) + 0x97) = bVar33 & 0x3f;
            break;
          case 0xea:
            bVar16 = *(byte *)(lVar42 + (ulong)((uint)(bVar33 >> 6) + uVar31 * 4) + 0x27);
            uVar14 = (uVar7 & 0x3f) << 1;
            if ((uint)bVar16 == (uint)*(byte *)(lVar42 + 0x8649)) {
              uVar14 = 0;
            }
            if (iVar6 < 0) {
              *(undefined1 *)(lVar42 + (ulong)bVar16 * 0x14 + 0x736d) = (&DAT_0048e680)[uVar14];
            }
            else {
              bVar23 = *(byte *)(lVar42 + 0x1b7);
              if (bVar23 < 0x88) {
                *(byte *)(lVar42 + 0x1b7) = bVar23 + 1;
                bVar33 = (&DAT_0048e680)[uVar14];
                lVar39 = lVar42 + (long)(int)(uint)bVar23 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar39 + 4) = 3;
                *(int *)(lVar39 + 8) = iVar6;
                *(uint *)(lVar39 + 0xc) = (uint)bVar16;
                goto LAB_001cd804;
              }
            }
          }
switchD_001cc5a8_caseD_b2:
          uVar14 = *(uint *)(lVar27 + 0x8f28);
LAB_001cbde0:
          uVar7 = uVar14 + 1;
          lVar39 = lVar42 + 0x8568 + uVar32 * 0x20;
          uVar38 = *(uint *)(lVar39 + 0x9b0);
          if (uVar7 < uVar38) {
            lVar19 = *(long *)(lVar39 + 0x9b8);
            lVar39 = lVar19 + (ulong)uVar7;
            if ((*(byte *)(lVar19 + (ulong)uVar7) & 0x3f) == 0x3f) {
              if ((char)*(byte *)(lVar39 + 1) < '\0') {
                if (*(byte *)(lVar39 + 1) < 0xf0) {
                  uVar7 = uVar14 + 4;
                }
                else {
                  uVar7 = uVar14 + 5 +
                          (uint)*(byte *)(lVar39 + 2) * 0x100 + (uint)*(byte *)(lVar39 + 3);
                }
              }
              else {
                uVar7 = uVar7 + *(ushort *)(lVar42 + 0x8632);
              }
            }
            else {
              uVar7 = uVar7 + *(ushort *)(lVar42 + 0x8630);
            }
            if (uVar38 < uVar7) goto LAB_001cbe68;
            *(uint *)(lVar27 + 0x8f28) = uVar7;
            lVar39 = lVar42 + 0x8568 + uVar32 * 0x20;
            uVar14 = (uint)*(byte *)(*(long *)(lVar39 + 0x9b8) + (ulong)uVar7);
            *(uint *)(lVar27 + 0x8f2c) = *(int *)(lVar27 + 0x8f2c) + uVar14;
            *(uint *)(lVar27 + 0x8f30) =
                 *(int *)(lVar27 + 0x8f30) + uVar14 * *(int *)(lVar42 + 0x1ec);
            if (*(uint *)(lVar39 + 0x9b0) <= uVar7) goto LAB_001cbe68;
LAB_001cb644:
            cVar17 = pcVar43[0x1b7];
          }
          else {
LAB_001cbe68:
            *(uint *)(lVar42 + 0x1d8) = uVar41 & (1 << (ulong)(uVar31 & 0x1f) ^ 0xffffffffU);
            cVar17 = pcVar43[0x1b7];
          }
LAB_001cb648:
          if (cVar17 != '\0') break;
        } while( true );
      }
      pcVar43[0x1b7] = cVar17 + -1;
      lVar42 = (ulong)(byte)pcVar43[0x1b8] * 0x14;
      *(undefined4 *)param_2 = *(undefined4 *)(pcVar43 + lVar42 + 0x7ac4);
      if (pcVar43[0x10] == '\x01') {
        if (*(int *)(pcVar43 + 0x200) == 0) {
          iVar40 = *(int *)(pcVar43 + 0x1f8);
          iVar6 = (*(int *)(pcVar43 + 0x1f0) - iVar40 >> 10) * *(int *)(pcVar43 + 0x1d0);
        }
        else {
          iVar40 = *(int *)(pcVar43 + 0x204);
          pcVar43[0x200] = '\0';
          pcVar43[0x201] = '\0';
          pcVar43[0x202] = '\0';
          pcVar43[0x203] = '\0';
          iVar6 = (*(int *)(pcVar43 + 0x1f0) - iVar40 >> 10) * *(int *)(pcVar43 + 0x1d0);
        }
        iVar6 = iVar6 + 0x200;
        uVar18 = *(undefined8 *)(pcVar43 + lVar42 + 0x7ad4);
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        uVar2 = *(undefined4 *)(pcVar43 + lVar42 + 0x7adc);
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pcVar43 + lVar42 + 0x7acc);
        uVar8 = 1;
        *(undefined8 *)(param_2 + 0x10) = uVar18;
        *(undefined4 *)(param_2 + 0x18) = uVar2;
        iVar28 = *(int *)(pcVar43 + 0x1cc);
        *(int *)(param_2 + 4) = iVar6 >> 10;
        pcVar43[0x1b8] = pcVar43[0x1b8] + '\x01';
        *(int *)(pcVar43 + 0x1f8) = iVar40 + *(int *)(param_2 + 4) * 0x400 * iVar28;
      }
      else {
        iVar6 = *(int *)(pcVar43 + lVar42 + 0x7ac8);
        uVar8 = 1;
        iVar40 = *(int *)(pcVar43 + 0x1d0);
        bVar16 = pcVar43[1];
        uVar18 = *(undefined8 *)(pcVar43 + lVar42 + 0x7ad4);
        uVar2 = *(undefined4 *)(pcVar43 + lVar42 + 0x7adc);
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pcVar43 + lVar42 + 0x7acc);
        *(undefined8 *)(param_2 + 0x10) = uVar18;
        *(undefined4 *)(param_2 + 0x18) = uVar2;
        *(int *)(param_2 + 4) = (int)(iVar40 * iVar6 * (uint)bVar16) >> 10;
        pcVar43[0x1b8] = pcVar43[0x1b8] + '\x01';
      }
      goto LAB_001cafac;
    }
    pcVar43[0x1b7] = pcVar43[0x1b7] + -1;
    lVar42 = (ulong)(byte)pcVar43[0x1b8] * 0x14;
    *(undefined4 *)param_2 = *(undefined4 *)(pcVar43 + lVar42 + 0x7ac4);
    if (pcVar43[0x10] == '\x01') {
      if (*(int *)(pcVar43 + 0x200) == 0) {
        iVar40 = *(int *)(pcVar43 + 0x1f8);
        iVar6 = (*(int *)(pcVar43 + 0x1f0) - iVar40 >> 10) * *(int *)(pcVar43 + 0x1d0);
      }
      else {
        iVar40 = *(int *)(pcVar43 + 0x204);
        pcVar43[0x200] = '\0';
        pcVar43[0x201] = '\0';
        pcVar43[0x202] = '\0';
        pcVar43[0x203] = '\0';
        iVar6 = (*(int *)(pcVar43 + 0x1f0) - iVar40 >> 10) * *(int *)(pcVar43 + 0x1d0);
      }
      iVar6 = iVar6 + 0x200;
      uVar18 = *(undefined8 *)(pcVar43 + lVar42 + 0x7ad4);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      uVar2 = *(undefined4 *)(pcVar43 + lVar42 + 0x7adc);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pcVar43 + lVar42 + 0x7acc);
      uVar8 = 1;
      *(undefined8 *)(param_2 + 0x10) = uVar18;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      iVar28 = *(int *)(pcVar43 + 0x1cc);
      *(int *)(param_2 + 4) = iVar6 >> 10;
      pcVar43[0x1b8] = pcVar43[0x1b8] + '\x01';
      *(int *)(pcVar43 + 0x1f8) = iVar40 + *(int *)(param_2 + 4) * 0x400 * iVar28;
    }
    else {
      iVar6 = *(int *)(pcVar43 + lVar42 + 0x7ac8);
      uVar8 = 1;
      iVar40 = *(int *)(pcVar43 + 0x1d0);
      bVar16 = pcVar43[1];
      uVar18 = *(undefined8 *)(pcVar43 + lVar42 + 0x7ad4);
      uVar2 = *(undefined4 *)(pcVar43 + lVar42 + 0x7adc);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pcVar43 + lVar42 + 0x7acc);
      *(undefined8 *)(param_2 + 0x10) = uVar18;
      *(undefined4 *)(param_2 + 0x18) = uVar2;
      *(int *)(param_2 + 4) = (int)(iVar40 * iVar6 * (uint)bVar16) >> 10;
      pcVar43[0x1b8] = pcVar43[0x1b8] + '\x01';
    }
  }
  else {
    uVar8 = 0xffffffff;
  }
LAB_001cafac:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
LAB_001cb0f8:
  if (pcVar43[0x15] != '\0') {
    uVar8 = 0;
    pcVar43[0x15] = '\x02';
    goto LAB_001cafac;
  }
  iVar6 = *(int *)(pcVar43 + 500);
  if (iVar6 < *(int *)(pcVar43 + 0x1f0)) {
    iVar40 = 0;
    if ((byte)pcVar43[1] != 0) {
      iVar40 = (*(int *)(pcVar43 + 0x1f0) - iVar6) / (int)(uint)(byte)pcVar43[1];
    }
    iVar40 = iVar40 + 0x200 >> 10;
    if (-1 < iVar40) {
      bVar16 = pcVar43[0x1b7];
      goto joined_r0x001cc680;
    }
  }
  else {
    bVar16 = pcVar43[0x1b7];
    iVar40 = 0;
joined_r0x001cc680:
    uVar41 = (uint)bVar16;
    if (0x87 < uVar41) goto LAB_001cb18c;
    pcVar43[0x1b7] = bVar16 + 1;
    lVar42 = (long)(int)uVar41 * 0x14;
    pcVar24 = pcVar43 + lVar42 + 0x7ac4;
    pcVar24[0] = '\x10';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    *(int *)(pcVar43 + lVar42 + 0x7ac8) = iVar40;
    pcVar24 = pcVar43 + lVar42 + 0x7acc;
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = pcVar43 + lVar42 + 0x7ad4;
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = pcVar43 + lVar42 + 0x7adc;
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    uVar41 = (uint)(byte)pcVar43[0x1b7];
    *(uint *)(pcVar43 + 500) = iVar6 + iVar40 * (uint)(byte)pcVar43[1] * 0x400;
    if ((pcVar43[0x8649] != '\0') || (0x87 < uVar41)) goto LAB_001cb18c;
    pcVar43[0x1b7] = pcVar43[0x1b7] + 1;
    lVar42 = (long)(int)uVar41 * 0x14;
    pcVar24 = pcVar43 + lVar42 + 0x7ac4;
    pcVar24[0] = '/';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = pcVar43 + lVar42 + 0x7ac8;
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = pcVar43 + lVar42 + 0x7acc;
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = pcVar43 + lVar42 + 0x7ad4;
    pcVar24[0] = '\x7f';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = pcVar43 + lVar42 + 0x7adc;
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
  }
  uVar41 = (uint)(byte)pcVar43[0x1b7];
LAB_001cb18c:
  pbVar22 = (byte *)(pcVar43 + 0x8649);
  if (uVar41 < 0x88) {
    pcVar43[0x1b7] = (char)uVar41 + '\x01';
    lVar42 = (long)(int)uVar41 * 0x14;
    pcVar24 = pcVar43 + lVar42 + 0x7ac4;
    pcVar24[0] = '\x10';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = pcVar43 + lVar42 + 0x7ac8;
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = pcVar43 + lVar42 + 0x7acc;
    pcVar24[0] = '\x01';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24 = pcVar43 + lVar42 + 0x7ad4;
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    pcVar24[4] = '\0';
    pcVar24[5] = '\0';
    pcVar24[6] = '\0';
    pcVar24[7] = '\0';
    pcVar24 = pcVar43 + lVar42 + 0x7adc;
    pcVar24[0] = '\0';
    pcVar24[1] = '\0';
    pcVar24[2] = '\0';
    pcVar24[3] = '\0';
    uVar41 = (uint)(byte)pcVar43[0x1b7];
    if ((pcVar43[0x8649] == '\x01') && (uVar41 < 0x88)) {
      pcVar43[0x1b7] = pcVar43[0x1b7] + 1;
      lVar42 = (long)(int)uVar41 * 0x14;
      pcVar24 = pcVar43 + lVar42 + 0x7ac4;
      pcVar24[0] = '/';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7ac8;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7acc;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7ad4;
      pcVar24[0] = '\x7f';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24[4] = '\0';
      pcVar24[5] = '\0';
      pcVar24[6] = '\0';
      pcVar24[7] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7adc;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      uVar41 = (uint)(byte)pcVar43[0x1b7];
    }
  }
  uVar14 = 2;
  do {
    if (uVar41 < 0x88) {
      pcVar43[0x1b7] = (char)uVar41 + '\x01';
      lVar42 = (long)(int)uVar41 * 0x14;
      pcVar24 = pcVar43 + lVar42 + 0x7ac4;
      pcVar24[0] = '\x10';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7ac8;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      *(uint *)(pcVar43 + lVar42 + 0x7acc) = uVar14;
      pcVar24 = pcVar43 + lVar42 + 0x7ad4;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24[4] = '\0';
      pcVar24[5] = '\0';
      pcVar24[6] = '\0';
      pcVar24[7] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7adc;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      uVar41 = (uint)(byte)pcVar43[0x1b7];
      if ((uVar14 == *pbVar22) && (uVar41 < 0x88)) {
        pcVar43[0x1b7] = pcVar43[0x1b7] + 1;
        lVar42 = (long)(int)uVar41 * 0x14;
        pcVar24 = pcVar43 + lVar42 + 0x7ac4;
        pcVar24[0] = '/';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7ac8;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7acc;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7ad4;
        pcVar24[0] = '\x7f';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24[4] = '\0';
        pcVar24[5] = '\0';
        pcVar24[6] = '\0';
        pcVar24[7] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7adc;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        uVar41 = (uint)(byte)pcVar43[0x1b7];
      }
    }
    if (uVar41 < 0x88) {
      pcVar43[0x1b7] = (char)uVar41 + '\x01';
      lVar42 = (long)(int)uVar41 * 0x14;
      pcVar24 = pcVar43 + lVar42 + 0x7ac4;
      pcVar24[0] = '\x10';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7ac8;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      *(uint *)(pcVar43 + lVar42 + 0x7acc) = uVar14 + 1;
      pcVar24 = pcVar43 + lVar42 + 0x7ad4;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24[4] = '\0';
      pcVar24[5] = '\0';
      pcVar24[6] = '\0';
      pcVar24[7] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7adc;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      uVar41 = (uint)(byte)pcVar43[0x1b7];
      if ((uVar14 + 1 == (uint)*pbVar22) && (uVar41 < 0x88)) {
        pcVar43[0x1b7] = pcVar43[0x1b7] + 1;
        lVar42 = (long)(int)uVar41 * 0x14;
        pcVar24 = pcVar43 + lVar42 + 0x7ac4;
        pcVar24[0] = '/';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7ac8;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7acc;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7ad4;
        pcVar24[0] = '\x7f';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24[4] = '\0';
        pcVar24[5] = '\0';
        pcVar24[6] = '\0';
        pcVar24[7] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7adc;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        uVar41 = (uint)(byte)pcVar43[0x1b7];
      }
    }
    if (uVar41 < 0x88) {
      pcVar43[0x1b7] = (char)uVar41 + '\x01';
      lVar42 = (long)(int)uVar41 * 0x14;
      pcVar24 = pcVar43 + lVar42 + 0x7ac4;
      pcVar24[0] = '\x10';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7ac8;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      *(uint *)(pcVar43 + lVar42 + 0x7acc) = uVar14 + 2;
      pcVar24 = pcVar43 + lVar42 + 0x7ad4;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24[4] = '\0';
      pcVar24[5] = '\0';
      pcVar24[6] = '\0';
      pcVar24[7] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7adc;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      uVar41 = (uint)(byte)pcVar43[0x1b7];
      if ((uVar14 + 2 == (uint)*pbVar22) && (uVar41 < 0x88)) {
        pcVar43[0x1b7] = pcVar43[0x1b7] + 1;
        lVar42 = (long)(int)uVar41 * 0x14;
        pcVar24 = pcVar43 + lVar42 + 0x7ac4;
        pcVar24[0] = '/';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7ac8;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7acc;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7ad4;
        pcVar24[0] = '\x7f';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24[4] = '\0';
        pcVar24[5] = '\0';
        pcVar24[6] = '\0';
        pcVar24[7] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7adc;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        uVar41 = (uint)(byte)pcVar43[0x1b7];
      }
    }
    if (uVar41 < 0x88) {
      pcVar43[0x1b7] = (char)uVar41 + '\x01';
      lVar42 = (long)(int)uVar41 * 0x14;
      pcVar24 = pcVar43 + lVar42 + 0x7ac4;
      pcVar24[0] = '\x10';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7ac8;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      *(uint *)(pcVar43 + lVar42 + 0x7acc) = uVar14 + 3;
      pcVar24 = pcVar43 + lVar42 + 0x7ad4;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24[4] = '\0';
      pcVar24[5] = '\0';
      pcVar24[6] = '\0';
      pcVar24[7] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7adc;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      uVar41 = (uint)(byte)pcVar43[0x1b7];
      if ((uVar14 + 3 == (uint)*pbVar22) && (uVar41 < 0x88)) {
        pcVar43[0x1b7] = pcVar43[0x1b7] + 1;
        lVar42 = (long)(int)uVar41 * 0x14;
        pcVar24 = pcVar43 + lVar42 + 0x7ac4;
        pcVar24[0] = '/';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7ac8;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7acc;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7ad4;
        pcVar24[0] = '\x7f';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24[4] = '\0';
        pcVar24[5] = '\0';
        pcVar24[6] = '\0';
        pcVar24[7] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7adc;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        uVar41 = (uint)(byte)pcVar43[0x1b7];
      }
    }
    if (uVar41 < 0x88) {
      pcVar43[0x1b7] = (char)uVar41 + '\x01';
      lVar42 = (long)(int)uVar41 * 0x14;
      pcVar24 = pcVar43 + lVar42 + 0x7ac4;
      pcVar24[0] = '\x10';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7ac8;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      *(uint *)(pcVar43 + lVar42 + 0x7acc) = uVar14 + 4;
      pcVar24 = pcVar43 + lVar42 + 0x7ad4;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      pcVar24[4] = '\0';
      pcVar24[5] = '\0';
      pcVar24[6] = '\0';
      pcVar24[7] = '\0';
      pcVar24 = pcVar43 + lVar42 + 0x7adc;
      pcVar24[0] = '\0';
      pcVar24[1] = '\0';
      pcVar24[2] = '\0';
      pcVar24[3] = '\0';
      uVar41 = (uint)(byte)pcVar43[0x1b7];
      if ((uVar14 + 4 == (uint)*pbVar22) && (uVar41 < 0x88)) {
        pcVar43[0x1b7] = pcVar43[0x1b7] + 1;
        lVar42 = (long)(int)uVar41 * 0x14;
        pcVar24 = pcVar43 + lVar42 + 0x7ac4;
        pcVar24[0] = '/';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7ac8;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7acc;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7ad4;
        pcVar24[0] = '\x7f';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        pcVar24[4] = '\0';
        pcVar24[5] = '\0';
        pcVar24[6] = '\0';
        pcVar24[7] = '\0';
        pcVar24 = pcVar43 + lVar42 + 0x7adc;
        pcVar24[0] = '\0';
        pcVar24[1] = '\0';
        pcVar24[2] = '\0';
        pcVar24[3] = '\0';
        uVar41 = (uint)(byte)pcVar43[0x1b7];
      }
    }
    uVar14 = uVar14 + 5;
  } while (uVar14 != 0x20);
  pcVar43[0x15] = '\x01';
  goto LAB_001cb024;
}

