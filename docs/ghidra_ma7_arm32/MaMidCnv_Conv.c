/* MaMidCnv_Conv @ 000ab8d4 2644B */


/* YAMAHA::MaMidCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

undefined4 YAMAHA::MaMidCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  byte *pbVar22;
  uint local_4c;
  
  iVar17 = DAT_000ac36c;
  iVar20 = DAT_000ac368;
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar21 = *(char **)(param_1 + 4), pcVar21 == (char *)0x0)) ||
     (param_2 == (_MASND_CMD_PARAM *)0x0)) {
    uVar5 = 0xfffffffe;
  }
  else if (*pcVar21 == '\x01') {
    if (pcVar21[0x71c] == '\0') {
      if (pcVar21[0xb0e] != '\x02') {
        if (pcVar21[0xb0e] == '\x03') {
          pcVar21[0xb0e] = '\0';
        }
        pcVar21[0x71d] = '\0';
        do {
          iVar13 = *(int *)(param_1 + 4);
          if (*(char *)(iVar13 + 1) == '\x01') {
            uVar16 = (uint)*(byte *)(iVar13 + 0x526);
            if (uVar16 != 2) {
              bVar2 = *(byte *)(iVar13 + 0x71c);
              *(byte *)(iVar13 + 0x71c) = bVar2 + 1;
              iVar18 = (uint)bVar2 * 0x14 + 0x720;
              iVar6 = iVar13 + iVar18;
              if (uVar16 < 0x19) {
                *(undefined4 *)(iVar13 + iVar18) = 0xd;
                *(undefined4 *)(iVar6 + 8) = 0;
                *(uint *)(iVar6 + 0xc) = uVar16;
              }
              else {
                *(undefined4 *)(iVar13 + iVar18) = 0x1b;
                *(undefined4 *)(iVar6 + 8) = 0;
                *(undefined4 *)(iVar6 + 0xc) = 0;
              }
              *(undefined4 *)(iVar6 + 4) = 0;
              *(undefined4 *)(iVar6 + 0x10) = 0;
            }
            iVar6 = 1;
            iVar18 = iVar13 + 0x10;
            do {
              uVar16 = (uint)*(byte *)(iVar18 + 0x526);
              if (uVar16 != 2) {
                bVar2 = *(byte *)(iVar13 + 0x71c);
                uVar19 = uVar16;
                if (0x18 < uVar16) {
                  uVar19 = 0x1b;
                }
                *(byte *)(iVar13 + 0x71c) = bVar2 + 1;
                iVar10 = (uint)bVar2 * 0x14 + 0x720;
                iVar7 = iVar13 + iVar10;
                if (uVar16 < 0x19) {
                  *(undefined4 *)(iVar13 + iVar10) = 0xd;
                  *(int *)(iVar7 + 8) = iVar6;
                  *(uint *)(iVar7 + 0xc) = uVar19;
                }
                else {
                  *(uint *)(iVar13 + iVar10) = uVar19;
                  *(undefined4 *)(iVar7 + 8) = 0;
                  *(undefined4 *)(iVar7 + 0xc) = 0;
                }
                *(undefined4 *)(iVar7 + 4) = 0;
                *(undefined4 *)(iVar7 + 0x10) = 0;
              }
              uVar16 = (uint)*(byte *)(iVar18 + 0x536);
              if (uVar16 != 2) {
                bVar2 = *(byte *)(iVar13 + 0x71c);
                *(byte *)(iVar13 + 0x71c) = bVar2 + 1;
                iVar10 = (uint)bVar2 * 0x14 + 0x720;
                iVar7 = iVar13 + iVar10;
                if (uVar16 < 0x19) {
                  *(undefined4 *)(iVar13 + iVar10) = 0xd;
                  *(int *)(iVar7 + 8) = iVar6 + 1;
                  *(uint *)(iVar7 + 0xc) = uVar16;
                }
                else {
                  *(undefined4 *)(iVar13 + iVar10) = 0x1b;
                  *(undefined4 *)(iVar7 + 8) = 0;
                  *(undefined4 *)(iVar7 + 0xc) = 0;
                }
                *(undefined4 *)(iVar7 + 4) = 0;
                *(undefined4 *)(iVar7 + 0x10) = 0;
              }
              uVar16 = (uint)*(byte *)(iVar18 + 0x546);
              if (uVar16 != 2) {
                bVar2 = *(byte *)(iVar13 + 0x71c);
                *(byte *)(iVar13 + 0x71c) = bVar2 + 1;
                iVar10 = (uint)bVar2 * 0x14 + 0x720;
                iVar7 = iVar13 + iVar10;
                if (uVar16 < 0x19) {
                  *(undefined4 *)(iVar13 + iVar10) = 0xd;
                  *(int *)(iVar7 + 8) = iVar6 + 2;
                  *(uint *)(iVar7 + 0xc) = uVar16;
                }
                else {
                  *(undefined4 *)(iVar13 + iVar10) = 0x1b;
                  *(undefined4 *)(iVar7 + 8) = 0;
                  *(undefined4 *)(iVar7 + 0xc) = 0;
                }
                *(undefined4 *)(iVar7 + 4) = 0;
                *(undefined4 *)(iVar7 + 0x10) = 0;
              }
              uVar16 = (uint)*(byte *)(iVar18 + 0x556);
              if (uVar16 != 2) {
                bVar2 = *(byte *)(iVar13 + 0x71c);
                *(byte *)(iVar13 + 0x71c) = bVar2 + 1;
                iVar10 = (uint)bVar2 * 0x14 + 0x720;
                iVar7 = iVar13 + iVar10;
                if (uVar16 < 0x19) {
                  *(undefined4 *)(iVar13 + iVar10) = 0xd;
                  *(int *)(iVar7 + 8) = iVar6 + 3;
                  *(uint *)(iVar7 + 0xc) = uVar16;
                }
                else {
                  *(undefined4 *)(iVar13 + iVar10) = 0x1b;
                  *(undefined4 *)(iVar7 + 8) = 0;
                  *(undefined4 *)(iVar7 + 0xc) = 0;
                }
                *(undefined4 *)(iVar7 + 4) = 0;
                *(undefined4 *)(iVar7 + 0x10) = 0;
              }
              uVar16 = (uint)*(byte *)(iVar18 + 0x566);
              if (uVar16 != 2) {
                bVar2 = *(byte *)(iVar13 + 0x71c);
                *(byte *)(iVar13 + 0x71c) = bVar2 + 1;
                iVar10 = (uint)bVar2 * 0x14 + 0x720;
                iVar7 = iVar13 + iVar10;
                if (uVar16 < 0x19) {
                  *(undefined4 *)(iVar13 + iVar10) = 0xd;
                  *(int *)(iVar7 + 8) = iVar6 + 4;
                  *(uint *)(iVar7 + 0xc) = uVar16;
                }
                else {
                  *(undefined4 *)(iVar13 + iVar10) = 0x1b;
                  *(undefined4 *)(iVar7 + 8) = 0;
                  *(undefined4 *)(iVar7 + 0xc) = 0;
                }
                *(undefined4 *)(iVar7 + 4) = 0;
                *(undefined4 *)(iVar7 + 0x10) = 0;
              }
              iVar6 = iVar6 + 5;
              iVar18 = iVar18 + 0x50;
            } while (iVar6 != 0x10);
            *(undefined1 *)(iVar13 + 1) = 0;
            goto LAB_000aba40;
          }
          local_4c = 0;
          if (*(int *)(iVar13 + 0x58) == 0) {
LAB_000abb6a:
            if (pcVar21[0xb0e] == '\0') {
              if (*(int *)(pcVar21 + 0x3c) < *(int *)(pcVar21 + 0x44)) {
                iVar20 = (*(int *)(pcVar21 + 0x44) - *(int *)(pcVar21 + 0x3c) >> 2) + 0x200 >> 10;
                if (-1 < iVar20) {
                  iVar17 = iVar20 << 0xc;
                  goto LAB_000abb84;
                }
              }
              else {
                iVar20 = 0;
                iVar17 = 0;
LAB_000abb84:
                pcVar21[0x71c] = (char)local_4c + '\x01';
                iVar13 = local_4c * 0x14;
                pcVar3 = pcVar21 + iVar13 + 0x720;
                pcVar3[0] = '\x10';
                pcVar3[1] = '\0';
                pcVar3[2] = '\0';
                pcVar3[3] = '\0';
                *(int *)(pcVar21 + iVar13 + 0x724) = iVar20;
                pcVar3 = pcVar21 + iVar13 + 0x728;
                pcVar3[0] = '\0';
                pcVar3[1] = '\0';
                pcVar3[2] = '\0';
                pcVar3[3] = '\0';
                pcVar3 = pcVar21 + iVar13 + 0x72c;
                pcVar3[0] = '\0';
                pcVar3[1] = '\0';
                pcVar3[2] = '\0';
                pcVar3[3] = '\0';
                pcVar3 = pcVar21 + iVar13 + 0x730;
                pcVar3[0] = '\0';
                pcVar3[1] = '\0';
                pcVar3[2] = '\0';
                pcVar3[3] = '\0';
                local_4c = (uint)(byte)pcVar21[0x71c];
                *(int *)(pcVar21 + 0x3c) = iVar17 + *(int *)(pcVar21 + 0x3c);
              }
              pcVar21[0x71c] = (char)local_4c + '\x01';
              iVar20 = local_4c * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\x01';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\x02';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\x03';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\x04';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\x05';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\x06';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\a';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\b';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\t';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\n';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\v';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\f';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\r';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\x0e';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              bVar2 = pcVar21[0x71c];
              pcVar21[0x71c] = bVar2 + 1;
              iVar20 = (uint)bVar2 * 0x14;
              pcVar3 = pcVar21 + iVar20 + 0x720;
              pcVar3[0] = '\x10';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x724;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x72c;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x730;
              pcVar3[0] = '\0';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              pcVar3 = pcVar21 + iVar20 + 0x728;
              pcVar3[0] = '\x0f';
              pcVar3[1] = '\0';
              pcVar3[2] = '\0';
              pcVar3[3] = '\0';
              local_4c = (uint)(byte)pcVar21[0x71c];
              pcVar21[0xb0e] = '\x01';
            }
            cVar15 = (char)local_4c;
            if (local_4c == 0) {
              return 0;
            }
            break;
          }
          if (*(char *)(iVar13 + 0x24) == '\x01') {
            uVar16 = 0;
          }
          else {
            iVar6 = *(int *)(*(int *)(iVar13 + 0x2dc) + 4);
            if (*(int *)(iVar13 + 0x2e4) == iVar6) goto LAB_000abb6a;
            uVar16 = (uint)*(byte *)(iVar6 + 8);
          }
          iVar6 = iVar13 + 0x10 + uVar16 * 0x14;
          iVar18 = *(int *)(iVar13 + 0x54) * (*(int *)(iVar6 + 0x5c) - *(int *)(iVar13 + 0x40)) +
                   *(int *)(iVar13 + 0x44);
          *(int *)(iVar13 + 0x44) = iVar18;
          *(undefined4 *)(iVar13 + 0x40) = *(undefined4 *)(iVar6 + 0x5c);
          if (*(int *)(iVar13 + 0x38) <= iVar18) {
            *(int *)(iVar13 + 0x44) = *(int *)(iVar13 + 0x38);
            local_4c = (uint)(byte)pcVar21[0x71c];
            goto LAB_000abb6a;
          }
          iVar10 = *(int *)(iVar6 + 0x54);
          iVar7 = *(int *)(iVar6 + 0x58);
          iVar18 = iVar7 + 1;
          pbVar11 = (byte *)(iVar10 + iVar7);
          *(int *)(iVar6 + 0x58) = iVar18;
          bVar2 = *(byte *)(iVar10 + iVar7);
          uVar19 = (uint)bVar2;
          if (uVar19 < 0xf0) {
            if ((bVar2 & 0x80) == 0) {
              uVar19 = (uint)*(byte *)(iVar6 + 0x4c);
              *(int *)(iVar6 + 0x58) = iVar7;
            }
            else {
              *(byte *)(iVar6 + 0x4c) = bVar2;
              pbVar11 = (byte *)(iVar10 + iVar18);
              iVar18 = iVar7 + 2;
            }
            iVar8 = *(int *)(iVar13 + 0x3c);
            iVar4 = *(int *)(iVar13 + 0x44);
            iVar7 = iVar8;
            if (iVar8 < iVar4) {
              iVar7 = iVar4 - iVar8;
            }
            if (iVar8 < iVar4) {
              iVar7 = (iVar7 >> 2) + 0x200;
            }
            else {
              iVar7 = 0;
            }
            if (iVar8 < iVar4) {
              iVar7 = iVar7 >> 10;
            }
            (**(code **)(iVar17 + 0xab934 + (uVar19 >> 4) * 4))
                      (iVar13,iVar7,uVar19 & 0xf,*pbVar11 & 0x7f,*(byte *)(iVar10 + iVar18) & 0x7f);
            *(int *)(iVar6 + 0x58) =
                 *(int *)(iVar6 + 0x58) + *(int *)(iVar20 + (uVar19 >> 4) * 4 + 0xab9ee);
            goto switchD_000ac04a_caseD_f4;
          }
          switch(uVar19) {
          case 0xf0:
            uVar19 = 0;
            iVar18 = -iVar10 + 2;
            do {
              pbVar9 = pbVar11 + iVar18;
              *(byte **)(iVar6 + 0x58) = pbVar9;
              uVar14 = (uint)pbVar11[1];
              uVar19 = (uVar14 & 0x7f) + uVar19 * 0x80;
              if (-1 < (int)(uVar14 << 0x18)) break;
              pbVar9 = pbVar11 + 1 + iVar18;
              *(byte **)(iVar6 + 0x58) = pbVar9;
              uVar14 = (uint)pbVar11[2];
              uVar19 = (uVar14 & 0x7f) + uVar19 * 0x80;
              if (-1 < (int)(uVar14 << 0x18)) break;
              pbVar9 = pbVar11 + 2 + iVar18;
              *(byte **)(iVar6 + 0x58) = pbVar9;
              uVar19 = (pbVar11[3] & 0x7f) + uVar19 * 0x80;
              if (-1 < (int)((uint)pbVar11[3] << 0x18)) break;
              pbVar9 = pbVar11 + -iVar10 + 5;
              *(byte **)(iVar6 + 0x58) = pbVar9;
              pbVar22 = pbVar11 + 4;
              uVar19 = (*pbVar22 & 0x7f) + uVar19 * 0x80;
              pbVar11 = pbVar11 + 4;
            } while ((int)((uint)*pbVar22 << 0x18) < 0);
            if (*(int *)(iVar13 + 0x3c) < *(int *)(iVar13 + 0x44)) {
              iVar18 = (*(int *)(iVar13 + 0x44) - *(int *)(iVar13 + 0x3c) >> 2) + 0x200 >> 10;
            }
            else {
              iVar18 = 0;
            }
            if (3 < uVar19 - 1) {
              FUN_000a8230(iVar13,iVar18,pbVar9 + iVar10);
              pbVar9 = *(byte **)(iVar6 + 0x58);
            }
            goto LAB_000ac134;
          case 0xf1:
          case 0xf3:
            *(int *)(iVar6 + 0x58) = iVar7 + 2;
            break;
          case 0xf2:
            *(int *)(iVar6 + 0x58) = iVar7 + 3;
            break;
          case 0xf7:
            uVar19 = 0;
            iVar18 = -iVar10 + 2;
            do {
              pbVar9 = pbVar11 + iVar18;
              *(byte **)(iVar6 + 0x58) = pbVar9;
              uVar14 = (uint)pbVar11[1];
              uVar19 = (uVar14 & 0x7f) + uVar19 * 0x80;
              if (-1 < (int)(uVar14 << 0x18)) break;
              pbVar9 = pbVar11 + 1 + iVar18;
              *(byte **)(iVar6 + 0x58) = pbVar9;
              uVar14 = (uint)pbVar11[2];
              uVar19 = (uVar14 & 0x7f) + uVar19 * 0x80;
              if (-1 < (int)(uVar14 << 0x18)) break;
              pbVar9 = pbVar11 + 2 + iVar18;
              *(byte **)(iVar6 + 0x58) = pbVar9;
              uVar19 = (pbVar11[3] & 0x7f) + uVar19 * 0x80;
              if (-1 < (int)((uint)pbVar11[3] << 0x18)) break;
              pbVar9 = pbVar11 + -iVar10 + 5;
              *(byte **)(iVar6 + 0x58) = pbVar9;
              pbVar22 = pbVar11 + 4;
              uVar19 = (*pbVar22 & 0x7f) + uVar19 * 0x80;
              pbVar11 = pbVar11 + 4;
            } while ((int)((uint)*pbVar22 << 0x18) < 0);
            if (*(int *)(iVar13 + 0x3c) < *(int *)(iVar13 + 0x44)) {
              iVar18 = (*(int *)(iVar13 + 0x44) - *(int *)(iVar13 + 0x3c) >> 2) + 0x200 >> 10;
            }
            else {
              iVar18 = 0;
            }
            if (3 < uVar19) {
              FUN_000a8230(iVar13,iVar18,pbVar9 + iVar10,uVar19);
              pbVar9 = *(byte **)(iVar6 + 0x58);
            }
LAB_000ac134:
            *(byte **)(iVar6 + 0x58) = pbVar9 + uVar19;
            break;
          case 0xff:
            iVar7 = iVar7 + 2;
            *(int *)(iVar6 + 0x58) = iVar7;
            iVar4 = 0;
            cVar15 = *(char *)(iVar10 + iVar18);
            pbVar11 = (byte *)(iVar10 + iVar7);
            do {
              iVar8 = iVar7 + 1;
              *(int *)(iVar6 + 0x58) = iVar8;
              pbVar22 = pbVar11 + 3;
              iVar4 = (*pbVar11 & 0x7f) + iVar4 * 0x80;
              iVar18 = iVar7;
              pbVar9 = pbVar11;
              if ((*pbVar11 & 0x80) == 0) break;
              iVar12 = iVar7 + 2;
              *(int *)(iVar6 + 0x58) = iVar12;
              iVar4 = (pbVar11[1] & 0x7f) + iVar4 * 0x80;
              iVar18 = iVar8;
              pbVar9 = pbVar11 + 1;
              iVar8 = iVar12;
              if ((pbVar11[1] & 0x80) == 0) break;
              iVar8 = iVar7 + 3;
              *(int *)(iVar6 + 0x58) = iVar8;
              iVar4 = (pbVar11[2] & 0x7f) + iVar4 * 0x80;
              iVar18 = iVar12;
              pbVar9 = pbVar11 + 2;
              if (-1 < (int)((uint)pbVar11[2] << 0x18)) break;
              iVar8 = iVar7 + 4;
              *(int *)(iVar6 + 0x58) = iVar8;
              pbVar1 = pbVar11 + 3;
              iVar18 = iVar7 + 3;
              pbVar11 = pbVar11 + 4;
              iVar4 = (*pbVar1 & 0x7f) + iVar4 * 0x80;
              iVar7 = iVar8;
              pbVar9 = pbVar22;
            } while ((int)((uint)*pbVar1 << 0x18) < 0);
            if (cVar15 == 'Q') {
              if (iVar4 - 3U < 2) {
                iVar18 = (uint)*(byte *)(iVar10 + iVar18 + 3) +
                         (uint)*(byte *)(iVar10 + iVar8) * 0x10000 +
                         (uint)*(byte *)(iVar10 + iVar18 + 2) * 0x100;
                iVar18 = __udivsi3((uint)(iVar18 * 0x100) / 0x7d,*(undefined2 *)(iVar13 + 0x10),
                                   iVar18 * 0x624dd300);
                *(uint *)(iVar13 + 0x54) = iVar18 + 1U >> 1;
                iVar8 = *(int *)(iVar6 + 0x58);
              }
            }
            else if (cVar15 == '\x7f') {
              *(int *)(iVar6 + 0x58) = iVar18;
              if (*(int *)(iVar13 + 0x3c) < *(int *)(iVar13 + 0x44)) {
                iVar18 = (*(int *)(iVar13 + 0x44) - *(int *)(iVar13 + 0x3c) >> 2) + 0x200 >> 10;
              }
              else {
                iVar18 = 0;
              }
              FUN_000a76f8(param_1,iVar18,pbVar9,iVar4);
              iVar8 = *(int *)(iVar6 + 0x58) + 1;
            }
            else if (cVar15 == '/') {
              *(uint *)(iVar13 + 0x58) = *(uint *)(iVar13 + 0x58) & ~(1 << uVar16);
              iVar8 = *(int *)(iVar6 + 0x58);
            }
            *(int *)(iVar6 + 0x58) = iVar8 + iVar4;
          }
switchD_000ac04a_caseD_f4:
          FUN_000a6010(iVar13 + 0x10,uVar16);
LAB_000aba40:
          cVar15 = pcVar21[0x71c];
        } while (cVar15 == '\0');
        pcVar21[0x71c] = cVar15 + -1;
        iVar20 = (uint)(byte)pcVar21[0x71d] * 0x14;
        *(undefined4 *)param_2 = *(undefined4 *)(pcVar21 + iVar20 + 0x720);
        uVar16 = *(int *)(pcVar21 + 0x50) *
                 (*(int *)(pcVar21 + 0x44) - *(int *)(pcVar21 + 0x48) >> 10) + 0x200;
        *(int *)(param_2 + 4) = (int)(uVar16 & ~((int)uVar16 >> 0x1f)) >> 10;
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pcVar21 + iVar20 + 0x728);
        *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pcVar21 + iVar20 + 0x72c);
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pcVar21 + iVar20 + 0x730);
        pcVar21[0x71d] = pcVar21[0x71d] + '\x01';
        *(int *)(pcVar21 + 0x48) =
             *(int *)(pcVar21 + 0x4c) * *(int *)(param_2 + 4) * 0x400 + *(int *)(pcVar21 + 0x48);
        return 1;
      }
      pcVar21[0xb0e] = '\x03';
      uVar5 = 0;
    }
    else {
      pcVar21[0x71c] = pcVar21[0x71c] + -1;
      iVar20 = (uint)(byte)pcVar21[0x71d] * 0x14;
      *(undefined4 *)param_2 = *(undefined4 *)(pcVar21 + iVar20 + 0x720);
      uVar16 = *(int *)(pcVar21 + 0x50) *
               (*(int *)(pcVar21 + 0x44) - *(int *)(pcVar21 + 0x48) >> 10) + 0x200;
      *(int *)(param_2 + 4) = (int)(uVar16 & ~((int)uVar16 >> 0x1f)) >> 10;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pcVar21 + iVar20 + 0x728);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pcVar21 + iVar20 + 0x72c);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pcVar21 + iVar20 + 0x730);
      pcVar21[0x71d] = pcVar21[0x71d] + '\x01';
      *(int *)(pcVar21 + 0x48) =
           *(int *)(pcVar21 + 0x4c) * *(int *)(param_2 + 4) * 0x400 + *(int *)(pcVar21 + 0x48);
      uVar5 = 1;
      if ((pcVar21[0x71c] == '\0') && (pcVar21[0xb0e] == '\x01')) {
        pcVar21[0xb0e] = '\x02';
        uVar5 = 1;
      }
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

