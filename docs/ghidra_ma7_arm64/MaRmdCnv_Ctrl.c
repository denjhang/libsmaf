/* MaRmdCnv_Ctrl @ 001fa948 6644B */


/* YAMAHA::MaRmdCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

void YAMAHA::MaRmdCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  ushort uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  uint uVar18;
  _MARMDCNV_INFO *p_Var19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  int iVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  char *pcVar29;
  byte *pbVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_48 [10];
  undefined6 local_3e;
  undefined8 local_38;
  undefined8 uStack_30;
  byte local_28;
  byte local_1f;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (p_Var19 = *(_MARMDCNV_INFO **)(param_1 + 8), param_4 == (void *)0x0)) ||
     (p_Var19 == (_MARMDCNV_INFO *)0x0)) {
LAB_001fb860:
    uVar15 = 0xfffffffe;
    goto LAB_001fa9a0;
  }
  if (param_2 == 0x36) {
    uVar15 = MaRmdCnv_ChannelMessage(p_Var19,param_3,param_4);
    goto LAB_001fa9a0;
  }
  if (param_2 != 0x37) {
    uVar15 = 0xffffffff;
    if (param_2 != 0x33) goto LAB_001fa9a0;
    bVar5 = *(byte *)param_4;
    if (bVar5 < 3) {
      if (bVar5 == 0) {
        *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)(p_Var19 + 4);
        uVar15 = 0;
        goto LAB_001fa9a0;
      }
      bVar6 = *(byte *)((long)param_4 + 1);
      if (bVar6 < 0x10) {
        if (bVar5 == 2) {
          uVar15 = 0;
          *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)(p_Var19 + (ulong)bVar6 * 0x18 + 0xc);
        }
        else {
          uVar15 = 0;
          *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)(p_Var19 + (ulong)bVar6 * 0x18 + 8);
        }
        goto LAB_001fa9a0;
      }
    }
    goto LAB_001fb860;
  }
  pcVar29 = (char *)**(undefined8 **)param_4;
  if ((pcVar29 == (char *)0x0) || (uVar18 = *(uint *)(*(undefined8 **)param_4 + 1), uVar18 == 0)) {
    uVar15 = 0xfffffffe;
LAB_001faa00:
    *(undefined4 *)((long)param_4 + 0xc) = 0;
    *(undefined4 *)((long)param_4 + 8) = 0x1b;
    *(undefined4 *)((long)param_4 + 0x10) = 0;
    *(undefined8 *)((long)param_4 + 0x18) = 0;
    *(undefined4 *)((long)param_4 + 0x20) = 0;
    goto LAB_001fa9a0;
  }
  if (*pcVar29 != -0x10) {
LAB_001fac54:
    uVar15 = 0xffffffe8;
    goto LAB_001faa00;
  }
  uVar15 = 0xffffffe8;
  if (pcVar29[uVar18 - 1] != -9) goto LAB_001faa00;
  cVar7 = pcVar29[1];
  if (1 < uVar18 - 1) {
    if (-1 < cVar7) {
      uVar14 = uVar18 - 3;
      uVar15 = (ulong)uVar14 & 0xf;
      pcVar17 = pcVar29;
      if ((uVar14 & 0xf) == 0) goto LAB_001fabc0;
      pcVar17 = pcVar29 + 1;
      if (-1 < pcVar29[2]) {
        if (uVar15 == 1) goto LAB_001fabc0;
        if ((uVar15 == 2) ||
           (((uVar15 == 3 ||
             (((uVar15 == 4 ||
               (((uVar15 == 5 ||
                 (((uVar15 == 6 ||
                   (((uVar15 == 7 ||
                     (((uVar15 == 8 ||
                       (((uVar15 == 9 ||
                         (((uVar15 == 10 ||
                           (((uVar15 == 0xb ||
                             (((uVar15 == 0xc ||
                               (((uVar15 == 0xd ||
                                 (((uVar15 == 0xe || (pcVar17 = pcVar29 + 2, -1 < pcVar29[3])) &&
                                  (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
                                (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
                              (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
                            (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
                          (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
                        (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
                      (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
                    (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
                  (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
                (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
              (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) &&
            (pcVar1 = pcVar17 + 2, pcVar17 = pcVar17 + 1, -1 < *pcVar1)))) {
          pcVar1 = pcVar17 + 2;
          pcVar17 = pcVar17 + 1;
          cVar8 = *pcVar1;
          while (-1 < cVar8) {
LAB_001fabc0:
            if (pcVar17 == pcVar29 + uVar14) goto LAB_001fac5c;
            if (((((((pcVar17[2] < '\0') || (pcVar17[3] < '\0')) || (pcVar17[4] < '\0')) ||
                  ((pcVar17[5] < '\0' || (pcVar17[6] < '\0')))) || (pcVar17[7] < '\0')) ||
                ((pcVar17[8] < '\0' || (pcVar17[9] < '\0')))) ||
               (((pcVar17[10] < '\0' ||
                 (((pcVar17[0xb] < '\0' || (pcVar17[0xc] < '\0')) || (pcVar17[0xd] < '\0')))) ||
                (((pcVar17[0xe] < '\0' || (pcVar17[0xf] < '\0')) || (pcVar17[0x10] < '\0'))))))
            break;
            pcVar1 = pcVar17 + 0x11;
            pcVar17 = pcVar17 + 0x10;
            cVar8 = *pcVar1;
          }
        }
      }
    }
    goto LAB_001fac54;
  }
LAB_001fac5c:
  if (cVar7 == '~') {
    if (((pcVar29[2] == '\x7f') && (pcVar29[3] == '\t')) &&
       (((byte)(pcVar29[4] - 1U) < 3 && ((pcVar29[5] == -9 && (uVar18 == 6)))))) {
      *(undefined4 *)((long)param_4 + 0xc) = 0;
      uVar10 = DAT_001fc340;
      *(undefined4 *)((long)param_4 + 0x10) = 0;
      uVar11 = DAT_001fc348;
      *(undefined8 *)((long)param_4 + 0x18) = 0;
      *(undefined4 *)((long)param_4 + 0x20) = 0;
      uVar12 = DAT_001fc350;
      *(undefined4 *)((long)param_4 + 8) = 0x1a;
      *(undefined4 *)(p_Var19 + 4) = 0x7f;
      *(undefined4 *)(p_Var19 + 0xc) = 0x7f;
      *(undefined4 *)(p_Var19 + 0x10) = 0x7900;
      *(undefined4 *)(p_Var19 + 0x14) = 0x7f7f;
      *(undefined4 *)(p_Var19 + 8) = 100;
      *(undefined4 *)(p_Var19 + 0x18) = 0x2000;
      *(undefined4 *)(p_Var19 + 0x1c) = 0;
      *(undefined8 *)(p_Var19 + 0x20) = uVar10;
      *(undefined8 *)(p_Var19 + 0x28) = uVar11;
      *(undefined8 *)(p_Var19 + 0x30) = uVar12;
      *(undefined8 *)(p_Var19 + 0x38) = uVar10;
      *(undefined8 *)(p_Var19 + 0x40) = uVar11;
      *(undefined8 *)(p_Var19 + 0x48) = uVar12;
      *(undefined8 *)(p_Var19 + 0x50) = uVar10;
      *(undefined8 *)(p_Var19 + 0x58) = uVar11;
      *(undefined8 *)(p_Var19 + 0x60) = uVar12;
      *(undefined8 *)(p_Var19 + 0x68) = uVar10;
      *(undefined8 *)(p_Var19 + 0x70) = uVar11;
      *(undefined8 *)(p_Var19 + 0x78) = uVar12;
      *(undefined8 *)(p_Var19 + 0x80) = uVar10;
      *(undefined8 *)(p_Var19 + 0x88) = uVar11;
      *(undefined8 *)(p_Var19 + 0x90) = uVar12;
      *(undefined8 *)(p_Var19 + 0x98) = uVar10;
      *(undefined8 *)(p_Var19 + 0xa0) = uVar11;
      *(undefined8 *)(p_Var19 + 0xa8) = uVar12;
      *(undefined8 *)(p_Var19 + 0xb0) = uVar10;
      *(undefined8 *)(p_Var19 + 0xb8) = uVar11;
      *(undefined8 *)(p_Var19 + 0xc0) = uVar12;
      *(undefined8 *)(p_Var19 + 200) = uVar10;
      uVar13 = DAT_001fc358;
      *(undefined8 *)(p_Var19 + 0xd0) = uVar11;
      *(undefined8 *)(p_Var19 + 0xd8) = uVar12;
      *(undefined8 *)(p_Var19 + 0xe0) = uVar10;
      *(undefined8 *)(p_Var19 + 0xe8) = uVar13;
      *(undefined8 *)(p_Var19 + 0xf0) = uVar12;
      *(undefined8 *)(p_Var19 + 0xf8) = uVar10;
      *(undefined8 *)(p_Var19 + 0x100) = uVar11;
      *(undefined8 *)(p_Var19 + 0x108) = uVar12;
      *(undefined8 *)(p_Var19 + 0x110) = uVar10;
      *(undefined8 *)(p_Var19 + 0x118) = uVar11;
      *(undefined8 *)(p_Var19 + 0x120) = uVar12;
      *(undefined8 *)(p_Var19 + 0x128) = uVar10;
      *(undefined8 *)(p_Var19 + 0x130) = uVar11;
      *(undefined8 *)(p_Var19 + 0x138) = uVar12;
      *(undefined8 *)(p_Var19 + 0x140) = uVar10;
      *(undefined8 *)(p_Var19 + 0x148) = uVar11;
      *(undefined8 *)(p_Var19 + 0x150) = uVar12;
      *(undefined8 *)(p_Var19 + 0x158) = uVar10;
      *(undefined8 *)(p_Var19 + 0x160) = uVar11;
      uVar15 = 0;
      *(undefined8 *)(p_Var19 + 0x168) = uVar12;
      *(undefined8 *)(p_Var19 + 0x170) = uVar10;
      *(undefined8 *)(p_Var19 + 0x178) = uVar11;
      *(undefined8 *)(p_Var19 + 0x180) = uVar12;
      goto LAB_001fa9a0;
    }
    goto switchD_001fb964_caseD_2;
  }
  if (cVar7 == '\x7f') {
    cVar7 = pcVar29[4];
    if (cVar7 == '\x03') {
      if (((((pcVar29[2] == '\x7f') && (pcVar29[3] == '\x04')) && (-1 < pcVar29[5])) &&
          ((-1 < pcVar29[6] && (pcVar29[7] == -9)))) && (uVar18 == 8)) {
        *(ulong *)((long)param_4 + 0x18) =
             (ulong)((uint)(byte)pcVar29[5] | (uint)(byte)pcVar29[6] << 7);
        uVar15 = 0;
        *(undefined4 *)((long)param_4 + 8) = 0x18;
        *(undefined4 *)((long)param_4 + 0xc) = 0;
        *(undefined4 *)((long)param_4 + 0x10) = 0;
        *(undefined4 *)((long)param_4 + 0x20) = 0;
        goto LAB_001fa9a0;
      }
    }
    else if (cVar7 == '\x04') {
      if (((pcVar29[2] == '\x7f') && (pcVar29[3] == '\x04')) &&
         ((-1 < pcVar29[6] && ((pcVar29[7] == -9 && (uVar18 == 8)))))) {
        *(ulong *)((long)param_4 + 0x18) = (ulong)(byte)pcVar29[6];
        uVar15 = 0;
        *(undefined4 *)((long)param_4 + 8) = 0x17;
        *(undefined4 *)((long)param_4 + 0xc) = 0;
        *(undefined4 *)((long)param_4 + 0x10) = 0;
        *(undefined4 *)((long)param_4 + 0x20) = 0;
        goto LAB_001fa9a0;
      }
    }
    else if (((cVar7 == '\x01') && (pcVar29[2] == '\x7f')) && (pcVar29[3] == '\x04')) {
      bVar5 = pcVar29[6];
      if (((-1 < (char)bVar5) && (pcVar29[7] == -9)) && (uVar18 == 8)) {
        *(uint *)(p_Var19 + 4) = (uint)bVar5;
        *(undefined4 *)((long)param_4 + 0xc) = 0;
        *(undefined4 *)((long)param_4 + 8) = 0x16;
        uVar15 = 0;
        *(undefined4 *)((long)param_4 + 0x10) = 0;
        *(ulong *)((long)param_4 + 0x18) = (ulong)bVar5;
        *(undefined4 *)((long)param_4 + 0x20) = 0;
        goto LAB_001fa9a0;
      }
    }
    goto switchD_001fb964_caseD_2;
  }
  if (((cVar7 != 'C') || (pcVar29[2] != 'y')) || ((pcVar29[4] != '\x7f' || (uVar18 < 8))))
  goto switchD_001fb964_caseD_2;
  if (pcVar29[3] != '\x06') {
    if ((pcVar29[3] == '\b') && (pcVar29[5] == '!')) {
      if (0x20 < uVar18) {
        bVar5 = pcVar29[0xb];
        if (pcVar29[6] == '|') {
          if ((byte)pcVar29[7] < 10) {
            bVar6 = pcVar29[8];
            uVar14 = (byte)pcVar29[7] + 1;
            goto LAB_001fad2c;
          }
        }
        else if (((pcVar29[6] == '}') && (pcVar29[7] == '\0')) && ((byte)pcVar29[8] < 10)) {
          bVar6 = pcVar29[9];
          uVar14 = (byte)pcVar29[8] + 0x81;
LAB_001fad2c:
          if (uVar18 - 0x21 < 0x31) {
            uVar31 = (uint)bVar5;
            switch(uVar18) {
            case 0x21:
              if (((bVar5 & 1) != 0) && ((bVar5 & 6) == 0)) {
                pbVar20 = (byte *)(pcVar29 + 0x20);
                pbVar21 = (byte *)(pcVar29 + 0xc);
                uVar18 = uVar31 & 6;
                do {
                  do {
                    uVar31 = uVar18;
                    pbVar25 = pbVar21;
                    if ((0x10 < uVar31) || (pbVar20 <= pbVar25 + 1)) goto LAB_001fb4f8;
                    uVar32 = (*pbVar25 & 0x7f) << 1;
                    pbVar2 = pbVar25 + 2;
                    local_48[uVar31] = (byte)uVar32 & 0x80 | pbVar25[1];
                    uVar33 = uVar31 + 1;
                    pbVar21 = pbVar2;
                    uVar18 = uVar33;
                  } while (pbVar20 <= pbVar2);
                  if (uVar33 == 0x11) goto LAB_001fb4f8;
                  pbVar3 = pbVar25 + 9;
                  pbVar30 = pbVar25 + 3;
                  pbVar22 = pbVar25 + 7;
                  pbVar28 = pbVar25 + 6;
                  pbVar26 = pbVar25 + 5;
                  pbVar27 = pbVar25 + 4;
                  pbVar23 = pbVar2;
                  while( true ) {
                    uVar31 = uVar31 + 7;
                    pbVar25 = pbVar25 + 8;
                    local_48[uVar33] = (byte)(uVar32 << 1) & 0x80 | *pbVar23;
                    pbVar21 = pbVar30;
                    uVar18 = uVar33 + 1;
                    if (pbVar20 <= pbVar30) break;
                    if (uVar33 == 0x10) goto LAB_001fb4f8;
                    local_48[uVar33 + 1] = (byte)((uVar32 & 0x3fffffe0) << 2) | *pbVar30;
                    pbVar21 = pbVar27;
                    uVar18 = uVar33 + 2;
                    if (pbVar20 <= pbVar27) break;
                    if (uVar33 == 0xf) goto LAB_001fb4f8;
                    local_48[uVar33 + 2] = (byte)((uVar32 & 0x1ffffff0) << 3) | *pbVar27;
                    pbVar21 = pbVar26;
                    uVar18 = uVar33 + 3;
                    if (pbVar20 <= pbVar26) break;
                    if (uVar33 == 0xe) goto LAB_001fb4f8;
                    local_48[uVar33 + 3] = (byte)(uVar32 << 4) & 0x80 | *pbVar26;
                    pbVar21 = pbVar28;
                    uVar18 = uVar33 + 4;
                    if (pbVar20 <= pbVar28) break;
                    if (uVar33 == 0xd) goto LAB_001fb4f8;
                    local_48[uVar33 + 4] = (byte)(uVar32 << 5) & 0x80 | *pbVar28;
                    pbVar21 = pbVar22;
                    uVar18 = uVar33 + 5;
                    if (pbVar20 <= pbVar22) break;
                    if (uVar33 == 0xc) goto LAB_001fb4f8;
                    local_48[uVar33 + 5] = (byte)(uVar32 << 6) | *pbVar22;
                    pbVar21 = pbVar25;
                    uVar18 = uVar31;
                    if (pbVar20 <= pbVar25) break;
                    if (((uVar33 == 0xb) || (0x10 < uVar31)) ||
                       (pbVar30 ==
                        pbVar2 + ((ulong)(pcVar29 + (0x27 - (long)pbVar3)) & 0xfffffffffffffff8) + 1
                       )) goto LAB_001fb4f8;
                    pbVar21 = pbVar23 + 8;
                    uVar32 = (*pbVar25 & 0x7f) << 1;
                    local_48[uVar31] = (byte)uVar32 & 0x80 | pbVar23[7];
                    uVar33 = uVar33 + 7;
                    uVar18 = uVar33;
                    if (pbVar20 <= pbVar21) break;
                    pbVar30 = pbVar30 + 8;
                    pbVar22 = pbVar22 + 8;
                    pbVar28 = pbVar28 + 8;
                    pbVar26 = pbVar26 + 8;
                    pbVar27 = pbVar27 + 8;
                    pbVar23 = pbVar21;
                    if (uVar33 == 0x11) goto LAB_001fb4f8;
                  }
                } while( true );
              }
              break;
            case 0x28:
              if ((bVar5 & 3) == 0) {
                pbVar20 = (byte *)(pcVar29 + 0x27);
                pbVar21 = (byte *)(pcVar29 + 0xc);
                uVar18 = uVar31 & 3;
                do {
                  do {
                    uVar31 = uVar18;
                    pbVar25 = pbVar21;
                    if ((0x16 < uVar31) || (pbVar20 <= pbVar25 + 1)) goto LAB_001fb2b8;
                    uVar32 = (*pbVar25 & 0x7f) << 1;
                    pbVar2 = pbVar25 + 2;
                    local_48[uVar31] = (byte)uVar32 & 0x80 | pbVar25[1];
                    uVar33 = uVar31 + 1;
                    pbVar21 = pbVar2;
                    uVar18 = uVar33;
                  } while (pbVar20 <= pbVar2);
                  if (uVar33 == 0x17) goto LAB_001fb2b8;
                  pbVar3 = pbVar25 + 9;
                  pbVar30 = pbVar25 + 3;
                  pbVar22 = pbVar25 + 7;
                  pbVar28 = pbVar25 + 6;
                  pbVar26 = pbVar25 + 5;
                  pbVar27 = pbVar25 + 4;
                  pbVar23 = pbVar2;
                  while( true ) {
                    uVar31 = uVar31 + 7;
                    pbVar25 = pbVar25 + 8;
                    local_48[uVar33] = (byte)((uVar32 & 0x7fffffc0) << 1) | *pbVar23;
                    pbVar21 = pbVar30;
                    uVar18 = uVar33 + 1;
                    if (pbVar20 <= pbVar30) break;
                    if (uVar33 == 0x16) goto LAB_001fb2b8;
                    local_48[uVar33 + 1] = (byte)((uVar32 & 0x3fffffe0) << 2) | *pbVar30;
                    pbVar21 = pbVar27;
                    uVar18 = uVar33 + 2;
                    if (pbVar20 <= pbVar27) break;
                    if (uVar33 == 0x15) goto LAB_001fb2b8;
                    local_48[uVar33 + 2] = (byte)((uVar32 & 0x1ffffff0) << 3) | *pbVar27;
                    pbVar21 = pbVar26;
                    uVar18 = uVar33 + 3;
                    if (pbVar20 <= pbVar26) break;
                    if (uVar33 == 0x14) goto LAB_001fb2b8;
                    local_48[uVar33 + 3] = (byte)((uVar32 & 0xffffff8) << 4) | *pbVar26;
                    pbVar21 = pbVar28;
                    uVar18 = uVar33 + 4;
                    if (pbVar20 <= pbVar28) break;
                    if (uVar33 == 0x13) goto LAB_001fb2b8;
                    local_48[uVar33 + 4] = (byte)(uVar32 << 5) & 0x80 | *pbVar28;
                    pbVar21 = pbVar22;
                    uVar18 = uVar33 + 5;
                    if (pbVar20 <= pbVar22) break;
                    if (uVar33 == 0x12) goto LAB_001fb2b8;
                    local_48[uVar33 + 5] = (byte)(uVar32 << 6) | *pbVar22;
                    pbVar21 = pbVar25;
                    uVar18 = uVar31;
                    if (pbVar20 <= pbVar25) break;
                    if (((uVar33 == 0x11) || (0x16 < uVar31)) ||
                       (pbVar30 ==
                        pbVar2 + ((ulong)(pcVar29 + (0x2e - (long)pbVar3)) & 0xfffffffffffffff8) + 1
                       )) goto LAB_001fb2b8;
                    pbVar21 = pbVar23 + 8;
                    uVar32 = (*pbVar25 & 0x7f) << 1;
                    local_48[uVar31] = (byte)uVar32 & 0x80 | pbVar23[7];
                    uVar33 = uVar33 + 7;
                    uVar18 = uVar33;
                    if (pbVar20 <= pbVar21) break;
                    pbVar30 = pbVar30 + 8;
                    pbVar22 = pbVar22 + 8;
                    pbVar28 = pbVar28 + 8;
                    pbVar26 = pbVar26 + 8;
                    pbVar27 = pbVar27 + 8;
                    pbVar23 = pbVar21;
                    if (uVar33 == 0x17) goto LAB_001fb2b8;
                  }
                } while( true );
              }
              break;
            case 0x33:
              if (((bVar5 & 1) != 0) && ((uVar31 & 6) == 2)) {
                FUN_001f9a34(pcVar29 + 0xc,0x26,local_48,0x21);
                uVar18 = local_28 | 0x80;
                uVar31 = (uint)CONCAT11(local_48[0],local_48[1]);
                if (((char)local_28 < '\0') && (uVar18 = local_28 & 0x7f, 0x1c < uVar18)) {
                  uVar14 = 0xffffffe8;
                  goto LAB_001fadb8;
                }
                uVar33 = 0x1e;
                goto LAB_001fb584;
              }
              break;
            case 0x3a:
              uVar31 = bVar5 & 1;
              if (((bVar5 & 1) == 0) && ((bVar5 >> 1 & 1) != 0)) {
                FUN_001f9a34(pcVar29 + 0xc,0x2d,local_48,0x27);
                uVar18 = (uint)local_48[0];
                uVar33 = 0x26;
LAB_001fad9c:
                local_48[2] = local_48[2] & 0xef;
                uVar14 = MaSndDrv_SetVoice(param_1,uVar14,bVar6 & 0x7f,uVar31,uVar18,uVar31,uVar31,
                                           uVar31,local_48 + 1,uVar33);
                goto LAB_001fadb8;
              }
              break;
            case 0x3d:
              if ((bVar5 & 5) == 5) {
                pbVar20 = (byte *)(pcVar29 + 0x3c);
                pbVar21 = (byte *)(pcVar29 + 0xc);
                uVar18 = 0;
                do {
                  do {
                    uVar31 = uVar18;
                    pbVar25 = pbVar21;
                    if ((0x29 < uVar31) || (pbVar20 <= pbVar25 + 1)) goto LAB_001fb030;
                    uVar32 = (*pbVar25 & 0x7f) << 1;
                    pbVar2 = pbVar25 + 2;
                    local_48[uVar31] = (byte)uVar32 & 0x80 | pbVar25[1];
                    uVar33 = uVar31 + 1;
                    pbVar21 = pbVar2;
                    uVar18 = uVar33;
                  } while (pbVar20 <= pbVar2);
                  if (uVar33 == 0x2a) goto LAB_001fb030;
                  pbVar3 = pbVar25 + 9;
                  pbVar30 = pbVar25 + 3;
                  pbVar22 = pbVar25 + 7;
                  pbVar28 = pbVar25 + 6;
                  pbVar26 = pbVar25 + 5;
                  pbVar27 = pbVar25 + 4;
                  pbVar23 = pbVar2;
                  while( true ) {
                    uVar31 = uVar31 + 7;
                    pbVar25 = pbVar25 + 8;
                    local_48[uVar33] = (byte)((uVar32 & 0x7fffffc0) << 1) | *pbVar23;
                    pbVar21 = pbVar30;
                    uVar18 = uVar33 + 1;
                    if (pbVar20 <= pbVar30) break;
                    if (uVar33 == 0x29) goto LAB_001fb030;
                    local_48[uVar33 + 1] = (byte)((uVar32 & 0x3fffffe0) << 2) | *pbVar30;
                    pbVar21 = pbVar27;
                    uVar18 = uVar33 + 2;
                    if (pbVar20 <= pbVar27) break;
                    if (uVar33 == 0x28) goto LAB_001fb030;
                    local_48[uVar33 + 2] = (byte)((uVar32 & 0x1ffffff0) << 3) | *pbVar27;
                    pbVar21 = pbVar26;
                    uVar18 = uVar33 + 3;
                    if (pbVar20 <= pbVar26) break;
                    if (uVar33 == 0x27) goto LAB_001fb030;
                    local_48[uVar33 + 3] = (byte)((uVar32 & 0xffffff8) << 4) | *pbVar26;
                    pbVar21 = pbVar28;
                    uVar18 = uVar33 + 4;
                    if (pbVar20 <= pbVar28) break;
                    if (uVar33 == 0x26) goto LAB_001fb030;
                    local_48[uVar33 + 4] = (byte)(uVar32 << 5) & 0x80 | *pbVar28;
                    pbVar21 = pbVar22;
                    uVar18 = uVar33 + 5;
                    if (pbVar20 <= pbVar22) break;
                    if (uVar33 == 0x25) goto LAB_001fb030;
                    local_48[uVar33 + 5] = (byte)(uVar32 << 6) | *pbVar22;
                    pbVar21 = pbVar25;
                    uVar18 = uVar31;
                    if (pbVar20 <= pbVar25) break;
                    if (((uVar33 == 0x24) || (0x29 < uVar31)) ||
                       (pbVar30 ==
                        pbVar2 + ((ulong)(pcVar29 + (0x43 - (long)pbVar3)) & 0xfffffffffffffff8) + 1
                       )) goto LAB_001fb030;
                    pbVar21 = pbVar23 + 8;
                    uVar32 = (*pbVar25 & 0x7f) << 1;
                    local_48[uVar31] = (byte)uVar32 & 0x80 | pbVar23[7];
                    uVar33 = uVar33 + 7;
                    uVar18 = uVar33;
                    if (pbVar20 <= pbVar21) break;
                    pbVar30 = pbVar30 + 8;
                    pbVar22 = pbVar22 + 8;
                    pbVar28 = pbVar28 + 8;
                    pbVar26 = pbVar26 + 8;
                    pbVar27 = pbVar27 + 8;
                    pbVar23 = pbVar21;
                    if (uVar33 == 0x2a) goto LAB_001fb030;
                  }
                } while( true );
              }
              break;
            case 0x3f:
              uVar31 = uVar31 & 3;
              if ((bVar5 & 3) == 0) {
                FUN_001f9a34(pcVar29 + 0xc,0x32,local_48,0x2b);
                uVar18 = (uint)local_48[0];
                uVar33 = 0x2a;
                goto LAB_001fad9c;
              }
              break;
            case 0x51:
              uVar31 = bVar5 & 1;
              if (((bVar5 & 1) == 0) && ((bVar5 >> 1 & 1) != 0)) {
                FUN_001f9a34(pcVar29 + 0xc,0x44,local_48,0x3b);
                uVar18 = (uint)local_48[0];
                uVar33 = 0x3a;
                goto LAB_001fad9c;
              }
            }
          }
        }
      }
      goto switchD_001fad4c_caseD_22;
    }
    goto switchD_001fb964_caseD_2;
  }
  switch(pcVar29[5]) {
  case '\0':
    if (uVar18 == 8) {
      bVar5 = pcVar29[6];
      *(undefined4 *)((long)param_4 + 0xc) = 0;
      uVar15 = 0;
      *(undefined4 *)((long)param_4 + 8) = 0x19;
      *(ulong *)((long)param_4 + 0x18) = (ulong)bVar5 & 0x7f;
      *(undefined4 *)((long)param_4 + 0x10) = 0;
      *(undefined4 *)((long)param_4 + 0x20) = 0;
      goto LAB_001fa9a0;
    }
    break;
  case '\x01':
    if (0x1e < uVar18) {
      cVar7 = pcVar29[10];
      if (pcVar29[6] == '|') {
        if ((byte)pcVar29[7] < 10) {
          bVar5 = pcVar29[8];
          uVar14 = (byte)pcVar29[7] + 1;
          goto LAB_001fba0c;
        }
      }
      else if (((pcVar29[6] == '}') && (pcVar29[7] == '\0')) && ((byte)pcVar29[8] < 10)) {
        bVar5 = pcVar29[9];
        uVar14 = (byte)pcVar29[8] + 0x81;
LAB_001fba0c:
        if (uVar18 == 0x20) {
          if (cVar7 == '\0') {
            pbVar20 = (byte *)(pcVar29 + 0x1f);
            pbVar21 = (byte *)(pcVar29 + 0xb);
            uVar18 = 0;
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        do {
                          uVar31 = uVar18;
                          pbVar25 = pbVar21;
                          if ((0x10 < uVar31) || (bVar6 = *pbVar25, pbVar20 <= pbVar25 + 1))
                          goto LAB_001fbf04;
                          *(byte *)((long)&local_78 + (ulong)uVar31) =
                               (bVar6 & 0xc0) << 1 | pbVar25[1];
                          pbVar21 = pbVar25 + 2;
                          uVar18 = uVar31 + 1;
                        } while (pbVar20 <= pbVar25 + 2);
                        if (uVar31 == 0x10) goto LAB_001fbf04;
                        *(byte *)((long)&local_78 + (ulong)(uVar31 + 1)) =
                             (bVar6 & 0xe0) << 2 | pbVar25[2];
                        pbVar21 = pbVar25 + 3;
                        uVar18 = uVar31 + 2;
                      } while (pbVar20 <= pbVar25 + 3);
                      if (uVar31 == 0xf) goto LAB_001fbf04;
                      *(byte *)((long)&local_78 + (ulong)(uVar31 + 2)) =
                           (bVar6 & 0xf0) << 3 | pbVar25[3];
                      pbVar21 = pbVar25 + 4;
                      uVar18 = uVar31 + 3;
                    } while (pbVar20 <= pbVar25 + 4);
                    if (uVar31 == 0xe) goto LAB_001fbf04;
                    uVar33 = (uint)bVar6;
                    *(byte *)((long)&local_78 + (ulong)(uVar31 + 3)) =
                         (byte)((uVar33 & 0xffffff8) << 4) | pbVar25[4];
                    pbVar21 = pbVar25 + 5;
                    uVar18 = uVar31 + 4;
                  } while (pbVar20 <= pbVar25 + 5);
                  if (uVar31 == 0xd) goto LAB_001fbf04;
                  *(byte *)((long)&local_78 + (ulong)(uVar31 + 4)) =
                       (byte)((uVar33 & 0x7fffffc) << 5) | pbVar25[5];
                  pbVar21 = pbVar25 + 6;
                  uVar18 = uVar31 + 5;
                } while (pbVar20 <= pbVar25 + 6);
                if (uVar31 == 0xc) goto LAB_001fbf04;
                *(byte *)((long)&local_78 + (ulong)(uVar31 + 5)) =
                     (byte)((uVar33 & 0x3fffffe) << 6) | pbVar25[6];
                pbVar21 = pbVar25 + 7;
                uVar18 = uVar31 + 6;
              } while (pbVar20 <= pbVar25 + 7);
              if (uVar31 == 0xb) break;
              pbVar21 = pbVar25 + 8;
              *(byte *)((long)&local_78 + (ulong)(uVar31 + 6)) = bVar6 << 7 | pbVar25[7];
              uVar18 = uVar31 + 7;
            } while ((pbVar20 <= pbVar21) || (uVar18 != 0x11));
LAB_001fbf04:
            uVar15 = local_78;
            local_48[0] = (byte)local_78;
            if ((local_78._2_1_ >> 4 & 1) == 0) {
              if ((local_78._2_1_ >> 5 & 1) == 0) {
                local_48[2] = local_78._2_1_;
                local_48[1] = (local_78._1_1_ & 3) + 0x80;
              }
              else {
                local_48[1] = local_78._1_1_;
                local_48[2] = local_78._2_1_;
              }
            }
            else {
              local_48[1] = local_78._1_1_;
              local_48[2] = local_78._2_1_ | 0x30;
            }
            iVar24 = 2;
            pbVar20 = (byte *)&local_78;
            pbVar21 = local_48;
            while( true ) {
              pbVar21[3] = pbVar20[3];
              pbVar21[4] = pbVar20[4];
              pbVar21[5] = pbVar20[5];
              pbVar21[6] = pbVar20[6];
              pbVar21[7] = pbVar20[7];
              pbVar21[8] = 0;
              bVar6 = pbVar20[8];
              pbVar21[9] = pbVar20[9];
              pbVar21[10] = 0;
              pbVar21[0xb] = 0;
              pbVar21[0xc] = bVar6;
              if (iVar24 == 1) break;
              iVar24 = 1;
              pbVar20 = pbVar20 + 7;
              pbVar21 = pbVar21 + 10;
            }
            local_68 = local_38;
            local_78 = CONCAT17(local_48[7],
                                CONCAT16(local_48[6],
                                         CONCAT15(local_48[5],
                                                  CONCAT14(local_48[4],
                                                           CONCAT13(local_48[3],
                                                                    CONCAT12(local_48[2],
                                                                             CONCAT11(local_48[1],
                                                                                      (byte)local_78
                                                                                     )))))));
            local_70 = CONCAT62(local_3e,CONCAT11(local_48[9],local_48[8]));
            MaSndDrv_MultiCnv((uchar *)((long)&local_78 + 1),0x16);
            uVar18 = 0x16;
LAB_001fbfd4:
            uVar14 = MaSndDrv_SetVoice(param_1,uVar14,bVar5 & 0x7f,0,(uint)uVar15 & 0xff,0,0,0,
                                       (uchar *)((long)&local_78 + 1),uVar18);
            goto LAB_001fadb8;
          }
        }
        else if (uVar18 == 0x30) {
          if (cVar7 == '\0') {
            pbVar20 = (byte *)(pcVar29 + 0x2f);
            pbVar21 = (byte *)(pcVar29 + 0xb);
            uVar18 = 0;
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        do {
                          uVar31 = uVar18;
                          pbVar25 = pbVar21;
                          if ((0x1e < uVar31) || (bVar6 = *pbVar25, pbVar20 <= pbVar25 + 1))
                          goto LAB_001fc17c;
                          *(byte *)((long)&local_78 + (ulong)uVar31) =
                               (bVar6 & 0xc0) << 1 | pbVar25[1];
                          pbVar21 = pbVar25 + 2;
                          uVar18 = uVar31 + 1;
                        } while (pbVar20 <= pbVar25 + 2);
                        if (uVar31 == 0x1e) goto LAB_001fc17c;
                        *(byte *)((long)&local_78 + (ulong)(uVar31 + 1)) =
                             (bVar6 & 0xe0) << 2 | pbVar25[2];
                        pbVar21 = pbVar25 + 3;
                        uVar18 = uVar31 + 2;
                      } while (pbVar20 <= pbVar25 + 3);
                      if (uVar31 == 0x1d) goto LAB_001fc17c;
                      *(byte *)((long)&local_78 + (ulong)(uVar31 + 2)) =
                           (bVar6 & 0xf0) << 3 | pbVar25[3];
                      pbVar21 = pbVar25 + 4;
                      uVar18 = uVar31 + 3;
                    } while (pbVar20 <= pbVar25 + 4);
                    if (uVar31 == 0x1c) goto LAB_001fc17c;
                    uVar33 = (uint)bVar6;
                    *(byte *)((long)&local_78 + (ulong)(uVar31 + 3)) =
                         (byte)((uVar33 & 0xffffff8) << 4) | pbVar25[4];
                    pbVar21 = pbVar25 + 5;
                    uVar18 = uVar31 + 4;
                  } while (pbVar20 <= pbVar25 + 5);
                  if (uVar31 == 0x1b) goto LAB_001fc17c;
                  *(byte *)((long)&local_78 + (ulong)(uVar31 + 4)) =
                       (byte)((uVar33 & 0x7fffffc) << 5) | pbVar25[5];
                  pbVar21 = pbVar25 + 6;
                  uVar18 = uVar31 + 5;
                } while (pbVar20 <= pbVar25 + 6);
                if (uVar31 == 0x1a) goto LAB_001fc17c;
                *(byte *)((long)&local_78 + (ulong)(uVar31 + 5)) =
                     (byte)((uVar33 & 0x3fffffe) << 6) | pbVar25[6];
                pbVar21 = pbVar25 + 7;
                uVar18 = uVar31 + 6;
              } while (pbVar20 <= pbVar25 + 7);
              if (uVar31 == 0x19) break;
              pbVar21 = pbVar25 + 8;
              *(byte *)((long)&local_78 + (ulong)(uVar31 + 6)) = bVar6 << 7 | pbVar25[7];
              uVar18 = uVar31 + 7;
            } while ((pbVar20 <= pbVar21) || (uVar18 != 0x1f));
LAB_001fc17c:
            uVar15 = local_78;
            local_48[0] = (byte)local_78;
            if ((local_78._2_1_ >> 4 & 1) == 0) {
              if ((local_78._2_1_ >> 5 & 1) == 0) {
                local_48[2] = local_78._2_1_;
                local_48[1] = (local_78._1_1_ & 3) + 0x80;
              }
              else {
                local_48[1] = local_78._1_1_;
                local_48[2] = local_78._2_1_;
              }
            }
            else {
              local_48[1] = local_78._1_1_;
              local_48[2] = local_78._2_1_ | 0x30;
            }
            iVar24 = 4;
            pbVar20 = local_48;
            pbVar21 = (byte *)&local_78;
            do {
              pbVar20[3] = pbVar21[3];
              iVar24 = iVar24 + -1;
              pbVar20[4] = pbVar21[4];
              pbVar20[5] = pbVar21[5];
              pbVar20[6] = pbVar21[6];
              pbVar20[7] = pbVar21[7];
              pbVar20[8] = 0;
              bVar6 = pbVar21[8];
              pbVar20[9] = pbVar21[9];
              pbVar20[10] = 0;
              pbVar20[0xb] = 0;
              pbVar20[0xc] = bVar6;
              pbVar20 = pbVar20 + 10;
              pbVar21 = pbVar21 + 7;
            } while (iVar24 != 0);
            memcpy(&local_78,local_48,0x2c);
            MaSndDrv_MultiCnv((uchar *)((long)&local_78 + 1),0x2a);
            uVar18 = 0x2a;
            goto LAB_001fbfd4;
          }
        }
        else if ((uVar18 == 0x1f) && (cVar7 == '\x01')) {
          pbVar20 = (byte *)(pcVar29 + 0x1e);
          pbVar21 = (byte *)(pcVar29 + 0xb);
          uVar18 = 0;
          do {
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        uVar31 = uVar18;
                        pbVar25 = pbVar21;
                        if ((0xf < uVar31) || (bVar6 = *pbVar25, pbVar20 <= pbVar25 + 1))
                        goto LAB_001fbbb8;
                        *(byte *)((long)&local_78 + (ulong)uVar31) =
                             (bVar6 & 0xc0) << 1 | pbVar25[1];
                        pbVar21 = pbVar25 + 2;
                        uVar18 = uVar31 + 1;
                      } while (pbVar20 <= pbVar25 + 2);
                      if (uVar31 == 0xf) goto LAB_001fbbb8;
                      *(byte *)((long)&local_78 + (ulong)(uVar31 + 1)) =
                           (bVar6 & 0xe0) << 2 | pbVar25[2];
                      pbVar21 = pbVar25 + 3;
                      uVar18 = uVar31 + 2;
                    } while (pbVar20 <= pbVar25 + 3);
                    if (uVar31 == 0xe) goto LAB_001fbbb8;
                    *(byte *)((long)&local_78 + (ulong)(uVar31 + 2)) =
                         (bVar6 & 0xf0) << 3 | pbVar25[3];
                    pbVar21 = pbVar25 + 4;
                    uVar18 = uVar31 + 3;
                  } while (pbVar20 <= pbVar25 + 4);
                  if (uVar31 == 0xd) goto LAB_001fbbb8;
                  uVar33 = (uint)bVar6;
                  *(byte *)((long)&local_78 + (ulong)(uVar31 + 3)) =
                       (byte)((uVar33 & 0xffffff8) << 4) | pbVar25[4];
                  pbVar21 = pbVar25 + 5;
                  uVar18 = uVar31 + 4;
                } while (pbVar20 <= pbVar25 + 5);
                if (uVar31 == 0xc) goto LAB_001fbbb8;
                *(byte *)((long)&local_78 + (ulong)(uVar31 + 4)) =
                     (byte)((uVar33 & 0x7fffffc) << 5) | pbVar25[5];
                pbVar21 = pbVar25 + 6;
                uVar18 = uVar31 + 5;
              } while (pbVar20 <= pbVar25 + 6);
              if (uVar31 == 0xb) goto LAB_001fbbb8;
              *(byte *)((long)&local_78 + (ulong)(uVar31 + 5)) =
                   (byte)((uVar33 & 0x3fffffe) << 6) | pbVar25[6];
              pbVar21 = pbVar25 + 7;
              uVar18 = uVar31 + 6;
            } while (pbVar20 <= pbVar25 + 7);
            if (uVar31 == 10) break;
            pbVar21 = pbVar25 + 8;
            *(byte *)((long)&local_78 + (ulong)(uVar31 + 6)) = bVar6 << 7 | pbVar25[7];
            uVar18 = uVar31 + 7;
          } while ((pbVar20 <= pbVar21) || (uVar18 != 0x10));
LAB_001fbbb8:
          uVar18 = local_70._7_1_ | 0x80;
          uVar9 = CONCAT11((byte)local_78,local_78._1_1_);
          if ((local_70 < 0) && (uVar18 = local_70._7_1_ & 0x7f, 0x1c < uVar18)) {
            uVar14 = 0xffffffe8;
          }
          else {
            local_48[0] = (byte)local_78;
            local_48[1] = local_78._1_1_;
            local_48[2] = local_78._2_1_ & 0xf8;
            if ((local_78._3_1_ >> 2 & 1) == 0) {
              if ((local_78 & 0x10000) == 0) {
                local_48[2] = 0x80;
              }
              local_48[3] = (local_78._3_1_ & 0xc3) + (local_78._2_1_ & 1) * ' ';
            }
            else {
              local_48[3] = (local_78._3_1_ & 0xc3) + 0x30;
            }
            local_48[4] = local_78._4_1_;
            local_48[5] = local_78._5_1_;
            local_48[6] = local_78._6_1_;
            local_48[7] = local_78._7_1_;
            local_48[8] = (byte)local_70;
            local_48[9] = 0;
            lVar16 = 0;
            do {
              lVar4 = lVar16 + 1;
              *(undefined1 *)((long)&local_3e + lVar16) =
                   *(undefined1 *)((long)&local_70 + lVar16 + 1);
              lVar16 = lVar4;
            } while (lVar4 != 6);
            local_78 = CONCAT17(local_78._7_1_,
                                CONCAT16(local_78._6_1_,
                                         CONCAT15(local_78._5_1_,
                                                  CONCAT14(local_78._4_1_,
                                                           CONCAT13(local_48[3],
                                                                    CONCAT12(local_48[2],
                                                                             (short)local_78))))));
            local_38 = CONCAT71(local_38._1_7_,local_70._7_1_);
            local_68 = CONCAT71(local_68._1_7_,local_70._7_1_);
            local_70 = CONCAT62(local_3e,(ushort)(byte)local_70);
            uVar14 = MaSndDrv_SetVoice(param_1,uVar14,bVar5 & 0x7f,1,(uint)uVar9,uVar18,0,0,
                                       (uchar *)((long)&local_78 + 2),0xe);
          }
          goto LAB_001fadb8;
        }
      }
    }
    goto switchD_001fad4c_caseD_22;
  case '\x03':
    if (9 < uVar18) {
      uVar14 = 0xffffffe8;
      if ((byte)pcVar29[6] < 0x80) {
        uVar14 = MaSndDrv_SetWtWave(param_1,(uint)(byte)pcVar29[6],1,(uchar *)(pcVar29 + 8),
                                    uVar18 - 9);
      }
      goto LAB_001fadb8;
    }
switchD_001fad4c_caseD_22:
    uVar14 = 0xffffffe8;
    goto LAB_001fadb8;
  case '\x10':
    if (uVar18 == 8) {
      bVar5 = pcVar29[6];
      *(undefined4 *)((long)param_4 + 0xc) = 0;
      uVar15 = 0;
      *(undefined4 *)((long)param_4 + 8) = 0x25;
      *(ulong *)((long)param_4 + 0x18) = (ulong)bVar5 & 0xf;
      *(undefined4 *)((long)param_4 + 0x10) = 0;
      *(undefined4 *)((long)param_4 + 0x20) = 0;
      goto LAB_001fa9a0;
    }
  }
  goto switchD_001fb964_caseD_2;
LAB_001fb030:
  uVar18 = local_1f | 0x80;
  uVar31 = (uint)CONCAT11(local_48[0],local_48[1]);
  if ((-1 < (char)local_1f) || (uVar18 = local_1f & 0x7f, uVar18 < 0x1d)) {
    if ((bVar5 >> 1 & 1) == 0) {
      local_38 = 0;
      uStack_30 = 0;
    }
    uVar33 = 0x27;
    goto LAB_001fb584;
  }
  uVar14 = 0xffffffe8;
  goto LAB_001fadb8;
LAB_001fb2b8:
  uVar18 = (uint)local_48[0];
  uVar31 = 0;
  uVar33 = 0x16;
  goto LAB_001fad9c;
LAB_001fb4f8:
  uVar18 = (byte)local_38 | 0x80;
  uVar31 = (uint)CONCAT11(local_48[0],local_48[1]);
  if (((char)(byte)local_38 < '\0') && (uVar18 = (byte)local_38 & 0x7f, 0x1c < uVar18))
  goto switchD_001fad4c_caseD_22;
  uVar33 = 0xe;
LAB_001fb584:
  local_48[3] = local_48[3] & 0xef;
  uVar14 = MaSndDrv_SetVoice(param_1,uVar14,bVar6 & 0x7f,1,uVar31,uVar18,0,0,local_48 + 2,uVar33);
LAB_001fadb8:
  *(undefined4 *)((long)param_4 + 0xc) = 0;
  *(undefined4 *)((long)param_4 + 8) = 0x1b;
  *(undefined4 *)((long)param_4 + 0x10) = 0;
  *(undefined8 *)((long)param_4 + 0x18) = 0;
  *(undefined4 *)((long)param_4 + 0x20) = 0;
  if ((int)uVar14 < 0) {
switchD_001fb964_caseD_2:
    uVar15 = 0;
    *(undefined4 *)((long)param_4 + 0xc) = 0;
    *(undefined4 *)((long)param_4 + 8) = 0x1b;
    *(undefined4 *)((long)param_4 + 0x10) = 0;
    *(undefined8 *)((long)param_4 + 0x18) = 0;
    *(undefined4 *)((long)param_4 + 0x20) = 0;
  }
  else {
    uVar15 = (ulong)uVar14;
  }
LAB_001fa9a0:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar15);
  }
  return;
}

