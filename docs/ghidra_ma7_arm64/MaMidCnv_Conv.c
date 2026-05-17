/* MaMidCnv_Conv @ 001db9c8 6816B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaMidCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

void YAMAHA::MaMidCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  char cVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  long *plVar20;
  undefined8 uVar21;
  int iVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  char *pcVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  undefined8 *local_18;
  uint local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar30 = *(char **)(param_1 + 8), param_2 == (_MASND_CMD_PARAM *)0x0)) ||
     (pcVar30 == (char *)0x0)) {
    uVar9 = 0xfffffffe;
  }
  else if (*pcVar30 == '\x01') {
    if (pcVar30[0x8e0] == '\0') {
      if (pcVar30[0xcd2] == '\x02') {
        uVar9 = 0;
        pcVar30[0xcd2] = '\x03';
      }
      else {
        if (pcVar30[0xcd2] == '\x03') {
          pcVar30[0xcd2] = '\0';
        }
        pcVar30[0x8e1] = '\0';
        do {
          lVar29 = *(long *)(param_1 + 8);
          if (*(char *)(lVar29 + 1) == '\x01') {
            bVar7 = *(byte *)(lVar29 + 0x6e6);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x6f6);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 1;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x706);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 2;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x716);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 3;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x726);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 4;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x736);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 5;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x746);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 6;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x756);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 7;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x766);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 8;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x776);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 9;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x786);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 10;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x796);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 0xb;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x7a6);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 0xc;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x7b6);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(undefined4 *)(lVar27 + 0x8ec) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x7c6);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 0xe;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            bVar7 = *(byte *)(lVar29 + 0x7d6);
            if (bVar7 != 2) {
              bVar6 = *(byte *)(lVar29 + 0x8e0);
              *(byte *)(lVar29 + 0x8e0) = bVar6 + 1;
              lVar27 = lVar29 + (ulong)bVar6 * 0x14;
              if (bVar7 < 0x19) {
                *(undefined4 *)(lVar27 + 0x8e4) = 0xd;
                *(ulong *)(lVar27 + 0x8f4) = (ulong)bVar7;
                *(undefined4 *)(lVar27 + 0x8ec) = 0xf;
              }
              else {
                *(undefined4 *)(lVar27 + 0x8e4) = 0x1b;
                *(undefined4 *)(lVar27 + 0x8ec) = 0;
                *(undefined8 *)(lVar27 + 0x8f4) = 0;
              }
              *(undefined4 *)(lVar27 + 0x8e8) = 0;
              *(undefined4 *)(lVar27 + 0x8fc) = 0;
            }
            *(undefined1 *)(lVar29 + 1) = 0;
            goto LAB_001dbd68;
          }
          lVar27 = lVar29 + 0x18;
          uVar26 = *(uint *)(lVar29 + 0x70);
          if (uVar26 == 0) {
LAB_001dc748:
            uVar26 = 0;
            if (pcVar30[0xcd2] != '\0') {
              uVar9 = 0;
              goto LAB_001dbdf4;
            }
LAB_001dbee0:
            iVar2 = *(int *)(pcVar30 + 0x54);
            if (iVar2 < *(int *)(pcVar30 + 0x5c)) {
              iVar22 = (*(int *)(pcVar30 + 0x5c) - iVar2 >> 2) + 0x200 >> 10;
              iVar17 = iVar22 << 0xc;
              if (-1 < iVar22) goto LAB_001dbef8;
            }
            else {
              iVar17 = 0;
              iVar22 = 0;
LAB_001dbef8:
              pcVar30[0x8e0] = (char)uVar26 + '\x01';
              pcVar1 = pcVar30 + (long)(int)uVar26 * 0x14 + 0x8e4;
              pcVar1[0] = '\x10';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              *(int *)(pcVar30 + (long)(int)uVar26 * 0x14 + 0x8e8) = iVar22;
              pcVar1 = pcVar30 + (long)(int)uVar26 * 0x14 + 0x8ec;
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              pcVar1 = pcVar30 + (long)(int)uVar26 * 0x14 + 0x8f4;
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              pcVar1[4] = '\0';
              pcVar1[5] = '\0';
              pcVar1[6] = '\0';
              pcVar1[7] = '\0';
              pcVar1 = pcVar30 + (long)(int)uVar26 * 0x14 + 0x8fc;
              pcVar1[0] = '\0';
              pcVar1[1] = '\0';
              pcVar1[2] = '\0';
              pcVar1[3] = '\0';
              *(int *)(pcVar30 + 0x54) = iVar2 + iVar17;
              uVar26 = (uint)(byte)pcVar30[0x8e0];
            }
            pcVar30[0x8e0] = (char)uVar26 + '\x01';
            pcVar1 = pcVar30 + (long)(int)uVar26 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (long)(int)uVar26 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (long)(int)uVar26 * 0x14 + 0x8ec;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (long)(int)uVar26 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (long)(int)uVar26 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\x01';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\x02';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\x03';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\x04';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\x05';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\x06';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\a';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\b';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\t';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\n';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\v';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\f';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\r';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\x0e';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            bVar7 = pcVar30[0x8e0];
            pcVar30[0x8e0] = bVar7 + 1;
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4;
            pcVar1[0] = '\x10';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8e8;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec;
            pcVar1[0] = '\x0f';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
            pcVar1 = pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar30[0xcd2] = '\x01';
            uVar26 = (uint)(byte)pcVar30[0x8e0];
LAB_001dc23c:
            cVar15 = (char)uVar26;
            if (uVar26 == 0) {
              uVar9 = 0;
              goto LAB_001dbdf4;
            }
            break;
          }
          cVar15 = *(char *)(lVar29 + 0x3c);
          if (cVar15 == '\x01') {
            uVar31 = 0;
          }
          else {
            lVar23 = *(long *)(*(long *)(lVar29 + 0x378) + 8);
            if (*(long *)(lVar29 + 0x388) == lVar23) goto LAB_001dc748;
            uVar31 = (ulong)*(byte *)(lVar23 + 0x10);
          }
          lVar32 = (long)(int)(uint)uVar31;
          iVar2 = *(int *)(lVar29 + 0x58);
          lVar23 = lVar27 + lVar32 * 0x18;
          iVar22 = *(int *)(lVar23 + 0x74);
          *(int *)(lVar29 + 0x58) = iVar22;
          iVar2 = *(int *)(lVar29 + 0x5c) + (iVar22 - iVar2) * *(int *)(lVar29 + 0x6c);
          *(int *)(lVar29 + 0x5c) = iVar2;
          if (*(int *)(lVar29 + 0x50) <= iVar2) {
            *(int *)(lVar29 + 0x5c) = *(int *)(lVar29 + 0x50);
            uVar26 = (uint)(byte)pcVar30[0x8e0];
            if (pcVar30[0xcd2] == '\0') goto LAB_001dbee0;
            goto LAB_001dc23c;
          }
          uVar11 = *(uint *)(lVar23 + 0x70);
          uVar19 = uVar11 + 1;
          *(uint *)(lVar23 + 0x70) = uVar19;
          uVar16 = (ulong)uVar11;
          bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + uVar16);
          if (bVar7 < 0xf0) {
            if ((char)bVar7 < '\0') {
              *(byte *)(lVar23 + 0x60) = bVar7;
              uVar19 = *(uint *)(lVar23 + 0x70) + 1;
              uVar16 = (ulong)*(uint *)(lVar23 + 0x70);
            }
            else {
              bVar7 = *(byte *)(lVar23 + 0x60);
              *(uint *)(lVar23 + 0x70) = uVar11;
            }
            iVar22 = 0;
            lVar23 = *(long *)(lVar27 + lVar32 * 0x18 + 0x68);
            if (*(int *)(lVar29 + 0x54) < iVar2) {
              iVar22 = (iVar2 - *(int *)(lVar29 + 0x54) >> 2) + 0x200 >> 10;
            }
            (*(code *)(&PTR_FUN_00563410)[(uint)(bVar7 >> 4)])
                      (lVar29,iVar22,bVar7 & 0xf,*(byte *)(lVar23 + uVar16) & 0x7f,
                       *(byte *)(lVar23 + (ulong)uVar19) & 0x7f);
            lVar23 = lVar27 + lVar32 * 0x18;
            *(int *)(lVar23 + 0x70) =
                 *(int *)(&DAT_0048f0a0 + (ulong)(uint)(bVar7 >> 4) * 4) + *(int *)(lVar23 + 0x70);
            cVar15 = *(char *)(lVar29 + 0x3c);
            uVar26 = *(uint *)(lVar29 + 0x70);
            goto switchD_001dc77c_caseD_f4;
          }
          switch(bVar7) {
          case 0xf0:
            iVar22 = 0;
            lVar23 = lVar27 + lVar32 * 0x18;
            lVar25 = *(long *)(lVar23 + 0x68);
            do {
              uVar26 = uVar19 + 1;
              *(uint *)(lVar23 + 0x70) = uVar26;
              iVar22 = (*(byte *)(lVar25 + (ulong)uVar19) & 0x7f) + iVar22 * 0x80;
              uVar11 = uVar26;
              if (-1 < (char)*(byte *)(lVar25 + (ulong)uVar19)) break;
              *(uint *)(lVar23 + 0x70) = uVar19 + 2;
              iVar22 = (*(byte *)(lVar25 + (ulong)uVar26) & 0x7f) + iVar22 * 0x80;
              uVar11 = uVar19 + 2;
              if (-1 < (char)*(byte *)(lVar25 + (ulong)uVar26)) break;
              *(uint *)(lVar23 + 0x70) = uVar19 + 3;
              uVar26 = uVar19 + 3;
              bVar7 = *(byte *)(lVar25 + (ulong)(uVar19 + 2));
              iVar22 = (bVar7 & 0x7f) + iVar22 * 0x80;
              uVar11 = uVar19 + 3;
              if (-1 < (char)bVar7) break;
              uVar19 = uVar19 + 4;
              *(uint *)(lVar23 + 0x70) = uVar19;
              bVar7 = *(byte *)(lVar25 + (ulong)uVar26);
              iVar22 = (bVar7 & 0x7f) + iVar22 * 0x80;
              uVar11 = uVar19;
            } while ((char)bVar7 < '\0');
            iVar17 = 0;
            if (*(int *)(lVar29 + 0x54) < iVar2) {
              iVar17 = (iVar2 - *(int *)(lVar29 + 0x54) >> 2) + 0x200 >> 10;
            }
            iVar13 = iVar22 + -1;
            goto LAB_001dcb00;
          case 0xf1:
          case 0xf3:
            *(uint *)(lVar27 + lVar32 * 0x18 + 0x70) = uVar11 + 2;
            break;
          case 0xf2:
            *(uint *)(lVar27 + lVar32 * 0x18 + 0x70) = uVar11 + 3;
            break;
          case 0xf7:
            iVar22 = 0;
            lVar23 = lVar27 + lVar32 * 0x18;
            lVar25 = *(long *)(lVar23 + 0x68);
            do {
              uVar26 = uVar19 + 1;
              *(uint *)(lVar23 + 0x70) = uVar26;
              iVar22 = (*(byte *)(lVar25 + (ulong)uVar19) & 0x7f) + iVar22 * 0x80;
              uVar11 = uVar26;
              if (-1 < (char)*(byte *)(lVar25 + (ulong)uVar19)) break;
              *(uint *)(lVar23 + 0x70) = uVar19 + 2;
              iVar22 = (*(byte *)(lVar25 + (ulong)uVar26) & 0x7f) + iVar22 * 0x80;
              uVar11 = uVar19 + 2;
              if (-1 < (char)*(byte *)(lVar25 + (ulong)uVar26)) break;
              *(uint *)(lVar23 + 0x70) = uVar19 + 3;
              uVar26 = uVar19 + 3;
              bVar7 = *(byte *)(lVar25 + (ulong)(uVar19 + 2));
              iVar22 = (bVar7 & 0x7f) + iVar22 * 0x80;
              uVar11 = uVar19 + 3;
              if (-1 < (char)bVar7) break;
              uVar19 = uVar19 + 4;
              *(uint *)(lVar23 + 0x70) = uVar19;
              bVar7 = *(byte *)(lVar25 + (ulong)uVar26);
              iVar22 = (bVar7 & 0x7f) + iVar22 * 0x80;
              uVar11 = uVar19;
            } while ((char)bVar7 < '\0');
            iVar17 = 0;
            iVar13 = iVar22;
            if (*(int *)(lVar29 + 0x54) < iVar2) {
              iVar17 = (iVar2 - *(int *)(lVar29 + 0x54) >> 2) + 0x200 >> 10;
            }
LAB_001dcb00:
            lVar23 = lVar27 + lVar32 * 0x18;
            FUN_001d22d4(lVar29,iVar17,*(long *)(lVar23 + 0x68) + (ulong)uVar11,iVar13);
            *(int *)(lVar23 + 0x70) = iVar22 + *(int *)(lVar23 + 0x70);
            cVar15 = *(char *)(lVar29 + 0x3c);
            uVar26 = *(uint *)(lVar29 + 0x70);
            break;
          case 0xff:
            uVar14 = uVar11 + 2;
            uVar11 = uVar11 + 3;
            lVar23 = lVar27 + lVar32 * 0x18;
            uVar16 = (ulong)uVar14;
            lVar25 = *(long *)(lVar23 + 0x68);
            *(uint *)(lVar23 + 0x70) = uVar14;
            cVar8 = *(char *)(lVar25 + (ulong)uVar19);
            *(uint *)(lVar23 + 0x70) = uVar11;
            bVar7 = *(byte *)(lVar25 + uVar16);
            uVar19 = bVar7 & 0x7f;
            while (uVar18 = (ulong)uVar19, uVar10 = uVar11, (char)bVar7 < '\0') {
              uVar16 = (ulong)uVar11;
              uVar3 = uVar11 + 1;
              *(uint *)(lVar23 + 0x70) = uVar3;
              uVar19 = (*(byte *)(lVar25 + uVar16) & 0x7f) + uVar19 * 0x80;
              uVar18 = (ulong)uVar19;
              uVar10 = uVar3;
              uVar14 = uVar11;
              if (-1 < (char)*(byte *)(lVar25 + uVar16)) break;
              uVar16 = (ulong)uVar3;
              uVar10 = uVar11 + 2;
              *(uint *)(lVar23 + 0x70) = uVar10;
              uVar19 = (*(byte *)(lVar25 + uVar16) & 0x7f) + uVar19 * 0x80;
              uVar18 = (ulong)uVar19;
              uVar14 = uVar3;
              if (-1 < (char)*(byte *)(lVar25 + uVar16)) break;
              uVar14 = uVar11 + 2;
              uVar16 = (ulong)uVar14;
              uVar10 = uVar11 + 3;
              *(uint *)(lVar23 + 0x70) = uVar10;
              uVar19 = (*(byte *)(lVar25 + uVar16) & 0x7f) + uVar19 * 0x80;
              uVar18 = (ulong)uVar19;
              if (-1 < (char)*(byte *)(lVar25 + uVar16)) break;
              uVar11 = uVar11 + 4;
              *(uint *)(lVar23 + 0x70) = uVar11;
              uVar16 = (ulong)uVar10;
              bVar7 = *(byte *)(lVar25 + uVar16);
              uVar19 = (bVar7 & 0x7f) + uVar19 * 0x80;
              uVar14 = uVar10;
            }
            uVar19 = (uint)uVar18;
            if (cVar8 == 'Q') {
              if (uVar19 - 3 < 2) {
                lVar23 = *(long *)(lVar27 + lVar32 * 0x18 + 0x68);
                uVar11 = 0;
                if (*(ushort *)(lVar29 + 0x18) != 0) {
                  uVar11 = ((((uint)*(byte *)(lVar23 + (ulong)(uVar14 + 3)) +
                              (uint)*(byte *)(lVar23 + (ulong)uVar10) * 0x10000 +
                             (uint)*(byte *)(lVar23 + (ulong)(uVar10 + 1)) * 0x100) * 0x100) / 0x7d)
                           / (uint)*(ushort *)(lVar29 + 0x18);
                }
                *(uint *)(lVar29 + 0x6c) = uVar11 + 1 >> 1;
              }
            }
            else if (cVar8 == '\x7f') {
              iVar22 = 0;
              *(uint *)(lVar27 + lVar32 * 0x18 + 0x70) = uVar14;
              uVar9 = _DAT_005ddc70;
              if (*(int *)(lVar29 + 0x54) < iVar2) {
                iVar22 = (iVar2 - *(int *)(lVar29 + 0x54) >> 2) + 0x200 >> 10;
              }
              lVar25 = *(long *)(param_1 + 8);
              lVar23 = lVar27 + lVar32 * 0x18;
              local_18 = (undefined8 *)(*(long *)(lVar23 + 0x68) + uVar16);
              local_10 = uVar19;
              if (((3 < uVar19) && (*(char *)((long)local_18 + 1) == 'C')) &&
                 ((*(char *)((long)local_18 + 2) == '\x02' &&
                  (*(char *)((long)local_18 + 3) == '\x02')))) {
                cVar8 = *(char *)((long)local_18 + 4);
                if (cVar8 == '\b') {
                  if ((iVar22 == -2) && (uVar19 < 0x46)) {
                    uVar26 = uVar19 + 1;
                    if ((&DAT_005ddc70 < (undefined1 *)(*(long *)(lVar23 + 0x68) + uVar16 + 0x10) &&
                         local_18 < &DAT_005ddc80) || (uVar26 < 0x10)) {
                      lVar23 = uVar18 + 1;
                      lVar25 = 1;
                      _DAT_005ddc70 = CONCAT71(_DAT_005ddc71,*(undefined1 *)local_18);
                      uVar18 = uVar18 & 7;
                      if (lVar23 != 1) {
                        lVar33 = lVar25;
                        if (uVar18 != 0) {
                          if (uVar18 != 1) {
                            if (uVar18 != 2) {
                              if (uVar18 != 3) {
                                if (uVar18 != 4) {
                                  if (uVar18 != 5) {
                                    if (uVar18 != 6) {
                                      lVar25 = 2;
                                      _DAT_005ddc72 = SUB86(uVar9,2);
                                      _DAT_005ddc70 =
                                           CONCAT11(*(undefined1 *)((long)local_18 + 1),
                                                    *(undefined1 *)local_18);
                                    }
                                    (&DAT_005ddc70)[lVar25] =
                                         *(undefined1 *)((long)local_18 + lVar25);
                                    lVar25 = lVar25 + 1;
                                  }
                                  (&DAT_005ddc70)[lVar25] = *(undefined1 *)((long)local_18 + lVar25)
                                  ;
                                  lVar25 = lVar25 + 1;
                                }
                                (&DAT_005ddc70)[lVar25] = *(undefined1 *)((long)local_18 + lVar25);
                                lVar25 = lVar25 + 1;
                              }
                              (&DAT_005ddc70)[lVar25] = *(undefined1 *)((long)local_18 + lVar25);
                              lVar25 = lVar25 + 1;
                            }
                            (&DAT_005ddc70)[lVar25] = *(undefined1 *)((long)local_18 + lVar25);
                            lVar25 = lVar25 + 1;
                          }
                          (&DAT_005ddc70)[lVar25] = *(undefined1 *)((long)local_18 + lVar25);
                          lVar33 = lVar25 + 1;
                          if (lVar25 + 1 == lVar23) goto LAB_001dd314;
                        }
                        do {
                          (&DAT_005ddc70)[lVar33] = *(undefined1 *)((long)local_18 + lVar33);
                          (&DAT_005ddc71)[lVar33] = *(undefined1 *)((long)local_18 + lVar33 + 1);
                          lVar25 = lVar33 + 8;
                          (&DAT_005ddc72)[lVar33] = *(undefined1 *)((long)local_18 + lVar33 + 2);
                          (&DAT_005ddc73)[lVar33] = *(undefined1 *)((long)local_18 + lVar33 + 3);
                          (&DAT_005ddc74)[lVar33] = *(undefined1 *)((long)local_18 + lVar33 + 4);
                          (&DAT_005ddc75)[lVar33] = *(undefined1 *)((long)local_18 + lVar33 + 5);
                          (&DAT_005ddc76)[lVar33] = *(undefined1 *)((long)local_18 + lVar33 + 6);
                          (&DAT_005ddc77)[lVar33] = *(undefined1 *)((long)local_18 + lVar33 + 7);
                          lVar33 = lVar25;
                        } while (lVar25 != lVar23);
                      }
                    }
                    else {
                      _DAT_005ddc78 = local_18[1];
                      _DAT_005ddc70 = *local_18;
                      iVar2 = (uVar19 - 0xf >> 4) + 1;
                      uVar11 = iVar2 * 0x10;
                      if (iVar2 != 1) {
                        uRam00000000005ddc88 = local_18[3];
                        _DAT_005ddc80 = local_18[2];
                        if (iVar2 != 2) {
                          uRam00000000005ddc98 = local_18[5];
                          _DAT_005ddc90 = local_18[4];
                          if (iVar2 == 4) {
                            uRam00000000005ddca8 = local_18[7];
                            _DAT_005ddca0 = local_18[6];
                          }
                        }
                      }
                      uVar16 = (ulong)uVar11;
                      if (uVar26 != uVar11) {
                        (&DAT_005ddc70)[uVar16] = *(undefined1 *)((long)local_18 + uVar16);
                        if (uVar11 + 1 < uVar26) {
                          (&DAT_005ddc70)[uVar11 + 1] = *(undefined1 *)((long)local_18 + uVar16 + 1)
                          ;
                          if (uVar11 + 2 < uVar26) {
                            (&DAT_005ddc70)[uVar11 + 2] =
                                 *(undefined1 *)((long)local_18 + uVar16 + 2);
                            if (uVar11 + 3 < uVar26) {
                              (&DAT_005ddc70)[uVar11 + 3] =
                                   *(undefined1 *)((long)local_18 + uVar16 + 3);
                              if (uVar11 + 4 < uVar26) {
                                (&DAT_005ddc70)[uVar11 + 4] =
                                     *(undefined1 *)((long)local_18 + uVar16 + 4);
                                if (uVar11 + 5 < uVar26) {
                                  (&DAT_005ddc70)[uVar11 + 5] =
                                       *(undefined1 *)((long)local_18 + uVar16 + 5);
                                  if (uVar11 + 6 < uVar26) {
                                    (&DAT_005ddc70)[uVar11 + 6] =
                                         *(undefined1 *)((long)local_18 + uVar16 + 6);
                                    if (uVar11 + 7 < uVar26) {
                                      (&DAT_005ddc70)[uVar11 + 7] =
                                           *(undefined1 *)((long)local_18 + uVar16 + 7);
                                      if (uVar11 + 8 < uVar26) {
                                        (&DAT_005ddc70)[uVar11 + 8] =
                                             *(undefined1 *)((long)local_18 + uVar16 + 8);
                                        if (uVar11 + 9 < uVar26) {
                                          (&DAT_005ddc70)[uVar11 + 9] =
                                               *(undefined1 *)((long)local_18 + uVar16 + 9);
                                          if (uVar11 + 10 < uVar26) {
                                            (&DAT_005ddc70)[uVar11 + 10] =
                                                 *(undefined1 *)((long)local_18 + uVar16 + 10);
                                            if (uVar11 + 0xb < uVar26) {
                                              (&DAT_005ddc70)[uVar11 + 0xb] =
                                                   *(undefined1 *)((long)local_18 + uVar16 + 0xb);
                                              if (uVar11 + 0xc < uVar26) {
                                                (&DAT_005ddc70)[uVar11 + 0xc] =
                                                     *(undefined1 *)((long)local_18 + uVar16 + 0xc);
                                                if (uVar11 + 0xd < uVar26) {
                                                  (&DAT_005ddc70)[uVar11 + 0xd] =
                                                       *(undefined1 *)
                                                        ((long)local_18 + uVar16 + 0xd);
                                                  if (uVar11 + 0xe < uVar26) {
                                                    (&DAT_005ddc70)[uVar11 + 0xe] =
                                                         *(undefined1 *)
                                                          ((long)local_18 + uVar16 + 0xe);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
LAB_001dd314:
                    local_18 = (undefined8 *)&DAT_005ddc70;
                    FUN_0012871c(param_1,&local_18);
                    cVar15 = *(char *)(lVar29 + 0x3c);
                    uVar26 = *(uint *)(lVar29 + 0x70);
                    uVar10 = *(int *)(lVar27 + lVar32 * 0x18 + 0x70) + 1;
                  }
                }
                else if (cVar8 == '\n') {
                  if (((iVar22 == -2) && (6 < uVar19)) && (*(byte *)((long)local_18 + 5) < 0x80)) {
                    MaSndDrv_SetWtWave(param_1,(uint)*(byte *)((long)local_18 + 5),0,
                                       (uchar *)((long)local_18 + 7),uVar19 - 6);
                    cVar15 = *(char *)(lVar29 + 0x3c);
                    uVar26 = *(uint *)(lVar29 + 0x70);
                    uVar10 = *(int *)(lVar23 + 0x70) + 1;
                  }
                }
                else if (cVar8 == '\x03') {
                  if (iVar22 == -4) {
                    bVar7 = *(byte *)((long)local_18 + 5);
                    *(byte *)(lVar25 + 0x6e1) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x6e0) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x6df) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 6);
                    *(byte *)(lVar25 + 0x6f1) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x6f0) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x6ef) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 7);
                    *(byte *)(lVar25 + 0x701) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x700) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x6ff) = bVar7 >> 6;
                    bVar7 = *(byte *)(local_18 + 1);
                    *(byte *)(lVar25 + 0x711) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x710) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x70f) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 9);
                    *(byte *)(lVar25 + 0x721) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x720) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x71f) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 10);
                    *(byte *)(lVar25 + 0x731) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x730) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x72f) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 0xb);
                    *(byte *)(lVar25 + 0x741) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x740) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x73f) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 0xc);
                    *(byte *)(lVar25 + 0x751) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x750) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x74f) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 0xd);
                    *(byte *)(lVar25 + 0x75f) = bVar7 >> 6;
                    *(byte *)(lVar25 + 0x761) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x760) = bVar7 >> 2 & 7;
                    bVar7 = *(byte *)((long)local_18 + 0xe);
                    *(byte *)(lVar25 + 0x771) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x770) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x76f) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 0xf);
                    *(byte *)(lVar25 + 0x781) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x780) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x77f) = bVar7 >> 6;
                    bVar7 = *(byte *)(local_18 + 2);
                    *(byte *)(lVar25 + 0x791) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x790) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x78f) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 0x11);
                    *(byte *)(lVar25 + 0x7a1) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x7a0) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x79f) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 0x12);
                    *(byte *)(lVar25 + 0x7b1) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x7b0) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 0x7af) = bVar7 >> 6;
                    bVar7 = *(byte *)((long)local_18 + 0x13);
                    *(byte *)(lVar25 + 0x7bf) = bVar7 >> 6;
                    *(byte *)(lVar25 + 0x7c1) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 0x7c0) = bVar7 >> 2 & 7;
                    bVar7 = *(byte *)((long)local_18 + 0x14);
                    *(byte *)(lVar25 + 0x7d1) = bVar7 >> 5 & 1;
                    *(byte *)(lVar25 + 2000) = bVar7 >> 2 & 7;
                    *(byte *)(lVar25 + 1999) = bVar7 >> 6;
                    cVar15 = *(char *)(lVar29 + 0x3c);
                    uVar10 = *(int *)(lVar23 + 0x70) + 1;
                    uVar26 = *(uint *)(lVar29 + 0x70);
                  }
                }
                else if (0 < iVar22) {
                  bVar7 = *(byte *)(lVar25 + 0x8e0);
                  iVar2 = *(int *)(lVar25 + 0x54);
                  *(byte *)(lVar25 + 0x8e0) = bVar7 + 1;
                  uVar26 = *(uint *)(lVar29 + 0x70);
                  lVar33 = lVar25 + (ulong)bVar7 * 0x14;
                  *(undefined4 *)(lVar33 + 0x8e4) = 0x1b;
                  *(int *)(lVar33 + 0x8e8) = iVar22;
                  *(undefined4 *)(lVar33 + 0x8ec) = 0;
                  *(undefined8 *)(lVar33 + 0x8f4) = 0;
                  *(undefined4 *)(lVar33 + 0x8fc) = 0;
                  *(int *)(lVar25 + 0x54) = iVar2 + iVar22 * 0x1000;
                  cVar15 = *(char *)(lVar29 + 0x3c);
                  uVar10 = *(int *)(lVar23 + 0x70) + 1;
                }
              }
            }
            else if (cVar8 == '/') {
              uVar26 = uVar26 & ((uint)(1L << (uVar31 & 0x3f)) ^ 0xffffffff);
              *(uint *)(lVar29 + 0x70) = uVar26;
            }
            *(uint *)(lVar27 + lVar32 * 0x18 + 0x70) = uVar10 + uVar19;
          }
switchD_001dc77c_caseD_f4:
          uVar19 = uVar26 >> (ulong)((uint)uVar31 & 0x1f);
          if (cVar15 == '\x01') {
            if ((uVar19 & 1) != 0) {
              uVar11 = 0;
              lVar23 = lVar27 + uVar31 * 0x18;
              uVar10 = *(uint *)(lVar23 + 0x70);
              uVar3 = *(uint *)(lVar23 + 100);
              uVar14 = uVar3 - uVar10 & 3;
              uVar19 = uVar10;
              if (uVar14 == 0) goto LAB_001dc9bc;
              if (uVar10 < uVar3) {
                uVar19 = uVar10 + 1;
                *(uint *)(lVar23 + 0x70) = uVar19;
                bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)uVar10);
                uVar11 = bVar7 & 0x7f;
                if (0x7f < bVar7) {
                  if (uVar14 != 1) {
                    uVar12 = uVar19;
                    if (uVar14 != 2) {
                      uVar12 = uVar10 + 2;
                      *(uint *)(lVar23 + 0x70) = uVar12;
                      bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)uVar19);
                      uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                      if (bVar7 < 0x80) goto LAB_001dca4c;
                    }
                    uVar19 = uVar12 + 1;
                    *(uint *)(lVar23 + 0x70) = uVar19;
                    bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)uVar12);
                    uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                    if (bVar7 < 0x80) goto LAB_001dca4c;
                  }
LAB_001dc9bc:
                  do {
                    if (uVar3 <= uVar19) goto LAB_001dcd10;
                    *(uint *)(lVar23 + 0x70) = uVar19 + 1;
                    bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)uVar19);
                    uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                    if (bVar7 < 0x80) break;
                    *(uint *)(lVar23 + 0x70) = uVar19 + 2;
                    bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)(uVar19 + 1));
                    uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                    if (bVar7 < 0x80) break;
                    *(uint *)(lVar23 + 0x70) = uVar19 + 3;
                    bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)(uVar19 + 2));
                    uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                    if (bVar7 < 0x80) break;
                    uVar14 = uVar19 + 3;
                    uVar19 = uVar19 + 4;
                    *(uint *)(lVar23 + 0x70) = uVar19;
                    bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)uVar14);
                    uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                  } while (0x7f < bVar7);
                }
LAB_001dca4c:
                lVar27 = lVar27 + uVar31 * 0x18;
                *(uint *)(lVar27 + 0x74) = *(int *)(lVar27 + 0x74) + uVar11;
              }
              else {
LAB_001dcd10:
                *(uint *)(lVar29 + 0x70) = uVar26 & ((uint)(1L << (uVar31 & 0x3f)) ^ 0xffffffff);
              }
            }
          }
          else if ((uVar19 & 1) == 0) {
            plVar24 = *(long **)(lVar29 + 0x388);
            plVar20 = *(long **)(*(long *)(lVar29 + 0x378) + 8);
            lVar29 = *plVar20;
            *(long *)(lVar29 + 8) = plVar20[1];
            *(long *)plVar20[1] = lVar29;
            lVar29 = *plVar24;
            *(long **)(lVar29 + 8) = plVar20;
            *plVar20 = lVar29;
            *plVar24 = (long)plVar20;
            plVar20[1] = (long)plVar24;
          }
          else {
            uVar11 = 0;
            lVar23 = lVar27 + uVar31 * 0x18;
            uVar10 = *(uint *)(lVar23 + 0x70);
            uVar3 = *(uint *)(lVar23 + 100);
            uVar14 = uVar3 - uVar10 & 3;
            uVar19 = uVar10;
            if ((uVar3 - uVar10 & 3) == 0) goto LAB_001dbc4c;
            if (uVar10 < uVar3) {
              uVar19 = uVar10 + 1;
              *(uint *)(lVar23 + 0x70) = uVar19;
              bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)uVar10);
              uVar11 = bVar7 & 0x7f;
              if (0x7f < bVar7) {
                if (uVar14 != 1) {
                  uVar12 = uVar19;
                  if (uVar14 != 2) {
                    uVar12 = uVar10 + 2;
                    *(uint *)(lVar23 + 0x70) = uVar12;
                    bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)uVar19);
                    uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                    if (bVar7 < 0x80) goto LAB_001dbcdc;
                  }
                  uVar19 = uVar12 + 1;
                  *(uint *)(lVar23 + 0x70) = uVar19;
                  bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)uVar12);
                  uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                  if (bVar7 < 0x80) goto LAB_001dbcdc;
                }
LAB_001dbc4c:
                do {
                  if (uVar3 <= uVar19) goto LAB_001dc780;
                  *(uint *)(lVar23 + 0x70) = uVar19 + 1;
                  bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)uVar19);
                  uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                  if (bVar7 < 0x80) break;
                  *(uint *)(lVar23 + 0x70) = uVar19 + 2;
                  bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)(uVar19 + 1));
                  uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                  if (bVar7 < 0x80) break;
                  *(uint *)(lVar23 + 0x70) = uVar19 + 3;
                  bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)(uVar19 + 2));
                  uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                  if (bVar7 < 0x80) break;
                  uVar14 = uVar19 + 3;
                  uVar19 = uVar19 + 4;
                  *(uint *)(lVar23 + 0x70) = uVar19;
                  bVar7 = *(byte *)(*(long *)(lVar23 + 0x68) + (ulong)uVar14);
                  uVar11 = (bVar7 & 0x7f) + uVar11 * 0x80;
                } while (0x7f < bVar7);
              }
LAB_001dbcdc:
              lVar23 = lVar27 + uVar31 * 0x18;
              *(uint *)(lVar23 + 0x74) = *(int *)(lVar23 + 0x74) + uVar11;
              plVar28 = *(long **)(lVar29 + 0x380);
              plVar24 = *(long **)(*(long *)(lVar29 + 0x378) + 8);
              lVar29 = *plVar24;
              *(long *)(lVar29 + 8) = plVar24[1];
              plVar20 = (long *)plVar24[1];
              *plVar20 = lVar29;
              uVar26 = (uint)*(byte *)(plVar24 + 2) +
                       *(int *)(lVar27 + (ulong)*(byte *)(plVar24 + 2) * 0x18 + 0x74) * 0x20;
              *(uint *)((long)plVar24 + 0x14) = uVar26;
              if ((plVar28 != plVar20) && (*(uint *)((long)plVar20 + 0x14) < uVar26)) {
                do {
                  plVar20 = (long *)plVar20[1];
                  if (plVar28 == plVar20) break;
                } while (*(uint *)((long)plVar20 + 0x14) < uVar26);
                lVar29 = *plVar20;
              }
              *(long **)(lVar29 + 8) = plVar24;
              *plVar24 = lVar29;
              *plVar20 = (long)plVar24;
              plVar24[1] = (long)plVar20;
            }
            else {
LAB_001dc780:
              plVar24 = *(long **)(lVar29 + 0x388);
              plVar20 = *(long **)(*(long *)(lVar29 + 0x378) + 8);
              lVar27 = *plVar20;
              lVar23 = plVar20[1];
              *(uint *)(lVar29 + 0x70) = uVar26 & ((uint)(1L << (uVar31 & 0x3f)) ^ 0xffffffff);
              *(long *)(lVar27 + 8) = lVar23;
              *(long *)plVar20[1] = lVar27;
              lVar29 = *plVar24;
              *(long **)(lVar29 + 8) = plVar20;
              *plVar20 = lVar29;
              *plVar24 = (long)plVar20;
              plVar20[1] = (long)plVar24;
            }
          }
LAB_001dbd68:
          cVar15 = pcVar30[0x8e0];
        } while (cVar15 == '\0');
        bVar7 = pcVar30[0x8e1];
        iVar22 = *(int *)(pcVar30 + 0x60);
        uVar9 = 1;
        pcVar30[0x8e0] = cVar15 + -1;
        iVar17 = *(int *)(pcVar30 + 100);
        iVar2 = (*(int *)(pcVar30 + 0x5c) - iVar22 >> 10) * *(int *)(pcVar30 + 0x68) + 0x200;
        uVar4 = *(undefined4 *)(pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec);
        uVar21 = *(undefined8 *)(pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4);
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        uVar5 = *(undefined4 *)(pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc);
        *(undefined4 *)param_2 = *(undefined4 *)(pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4);
        *(undefined4 *)(param_2 + 8) = uVar4;
        *(undefined8 *)(param_2 + 0x10) = uVar21;
        *(undefined4 *)(param_2 + 0x18) = uVar5;
        *(int *)(param_2 + 4) = iVar2 >> 10;
        pcVar30[0x8e1] = pcVar30[0x8e1] + '\x01';
        *(int *)(pcVar30 + 0x60) = iVar22 + *(int *)(param_2 + 4) * 0x400 * iVar17;
      }
    }
    else {
      bVar7 = pcVar30[0x8e1];
      iVar22 = *(int *)(pcVar30 + 0x60);
      pcVar30[0x8e0] = pcVar30[0x8e0] + -1;
      iVar17 = *(int *)(pcVar30 + 100);
      iVar2 = (*(int *)(pcVar30 + 0x5c) - iVar22 >> 10) * *(int *)(pcVar30 + 0x68) + 0x200;
      uVar4 = *(undefined4 *)(pcVar30 + (ulong)bVar7 * 0x14 + 0x8ec);
      uVar9 = *(undefined8 *)(pcVar30 + (ulong)bVar7 * 0x14 + 0x8f4);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      uVar5 = *(undefined4 *)(pcVar30 + (ulong)bVar7 * 0x14 + 0x8fc);
      *(undefined4 *)param_2 = *(undefined4 *)(pcVar30 + (ulong)bVar7 * 0x14 + 0x8e4);
      *(int *)(param_2 + 4) = iVar2 >> 10;
      *(undefined4 *)(param_2 + 8) = uVar4;
      *(undefined8 *)(param_2 + 0x10) = uVar9;
      *(undefined4 *)(param_2 + 0x18) = uVar5;
      pcVar30[0x8e1] = pcVar30[0x8e1] + '\x01';
      *(int *)(pcVar30 + 0x60) = iVar22 + *(int *)(param_2 + 4) * 0x400 * iVar17;
      uVar9 = 1;
      if ((pcVar30[0x8e0] == '\0') && (pcVar30[0xcd2] == '\x01')) {
        pcVar30[0xcd2] = '\x02';
      }
    }
  }
  else {
    uVar9 = 0xffffffff;
  }
LAB_001dbdf4:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

