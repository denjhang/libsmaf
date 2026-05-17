/* MaRmdCnv_Ctrl @ 000c11a0 5286B */


/* YAMAHA::MaRmdCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

void YAMAHA::MaRmdCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  char cVar9;
  uint uVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  undefined4 uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  int *piVar21;
  int iVar22;
  char *pcVar23;
  byte *pbVar24;
  byte bVar25;
  _MARMDCNV_INFO *p_Var26;
  bool bVar27;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [4];
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int local_2c;
  
  piVar21 = *(int **)(DAT_000c1e78 + 0xc11b2);
  local_2c = *piVar21;
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (p_Var26 = *(_MARMDCNV_INFO **)(param_1 + 4), p_Var26 == (_MARMDCNV_INFO *)0x0)) ||
     (param_4 == (void *)0x0)) {
LAB_000c140e:
    iVar4 = -2;
    goto LAB_000c11e0;
  }
  if (param_2 == 0x36) {
    iVar4 = MaRmdCnv_ChannelMessage(p_Var26,param_3,param_4);
    goto LAB_000c11e0;
  }
  if (param_2 != 0x37) {
    if (param_2 != 0x33) {
      iVar4 = -1;
      goto LAB_000c11e0;
    }
    bVar14 = *(byte *)param_4;
    if (bVar14 < 3) {
      if (bVar14 == 0) {
        *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(p_Var26 + 4);
        iVar4 = 0;
        goto LAB_000c11e0;
      }
      uVar15 = (uint)*(byte *)((int)param_4 + 1);
      if (uVar15 < 0x10) {
        if (bVar14 == 2) {
          iVar4 = 0;
          *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(p_Var26 + uVar15 * 0x18 + 0xc);
        }
        else {
          iVar4 = 0;
          *(undefined4 *)((int)param_4 + 4) = *(undefined4 *)(p_Var26 + uVar15 * 0x18 + 8);
        }
        goto LAB_000c11e0;
      }
    }
    goto LAB_000c140e;
  }
  pcVar23 = (char *)**(undefined4 **)param_4;
  if ((pcVar23 == (char *)0x0) || (uVar15 = (*(undefined4 **)param_4)[1], uVar15 == 0)) {
    iVar4 = -2;
LAB_000c1214:
    *(undefined4 *)((int)param_4 + 8) = 0;
    *(undefined4 *)((int)param_4 + 4) = 0x1b;
    *(undefined4 *)((int)param_4 + 0xc) = 0;
    *(undefined4 *)((int)param_4 + 0x10) = 0;
    *(undefined4 *)((int)param_4 + 0x14) = 0;
    goto LAB_000c11e0;
  }
  if ((*pcVar23 != -0x10) || (uVar5 = uVar15 - 1, pcVar23[uVar5] != -9)) {
LAB_000c1210:
    iVar4 = -0x18;
    goto LAB_000c1214;
  }
  bVar14 = pcVar23[1];
  if (1 < uVar5) {
    if ((bVar14 & 0x80) == 0) {
      iVar4 = 1;
      uVar10 = ~(1 - uVar5) & 0xf;
      if (uVar10 == 0) goto LAB_000c1340;
      iVar4 = 2;
      if (-1 < pcVar23[2]) {
        if (uVar10 == 1) goto LAB_000c1340;
        if ((uVar10 == 2) ||
           (((uVar10 == 3 ||
             (((uVar10 == 4 ||
               (((uVar10 == 5 ||
                 (((uVar10 == 6 ||
                   (((uVar10 == 7 ||
                     (((uVar10 == 8 ||
                       (((uVar10 == 9 ||
                         (((uVar10 == 10 ||
                           (((uVar10 == 0xb ||
                             (((uVar10 == 0xc ||
                               (((uVar10 == 0xd ||
                                 (((uVar10 == 0xe || (iVar4 = 3, -1 < pcVar23[3])) &&
                                  (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
                                (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
                              (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
                            (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
                          (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
                        (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
                      (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
                    (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
                  (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
                (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
              (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) &&
            (iVar4 = iVar4 + 1, -1 < pcVar23[iVar4])))) {
          iVar4 = iVar4 + 1;
          cVar9 = pcVar23[iVar4];
          while (-1 < cVar9) {
LAB_000c1340:
            if (uVar5 == iVar4 + 1U) goto LAB_000c1414;
            if ((((((pcVar23[iVar4 + 1U] < '\0') || (pcVar23[iVar4 + 2] < '\0')) ||
                  ((pcVar23[iVar4 + 3] < '\0' ||
                   ((pcVar23[iVar4 + 4] < '\0' || (pcVar23[iVar4 + 5] < '\0')))))) ||
                 (pcVar23[iVar4 + 6] < '\0')) ||
                (((((pcVar23[iVar4 + 7] < '\0' || (pcVar23[iVar4 + 8] < '\0')) ||
                   (pcVar23[iVar4 + 9] < '\0')) ||
                  ((pcVar23[iVar4 + 10] < '\0' || (pcVar23[iVar4 + 0xb] < '\0')))) ||
                 (pcVar23[iVar4 + 0xc] < '\0')))) ||
               (((pcVar23[iVar4 + 0xd] < '\0' || (pcVar23[iVar4 + 0xe] < '\0')) ||
                (pcVar23[iVar4 + 0xf] < '\0')))) break;
            iVar4 = iVar4 + 0x10;
            cVar9 = pcVar23[iVar4];
          }
        }
      }
    }
    goto LAB_000c1210;
  }
LAB_000c1414:
  if (bVar14 == 0x7e) {
    if ((((pcVar23[2] == '\x7f') && (pcVar23[3] == '\t')) && ((byte)pcVar23[4] - 1 < 3)) &&
       ((pcVar23[5] == -9 && (uVar15 == 6)))) {
      *(undefined4 *)((int)param_4 + 8) = 0;
      bVar14 = 0;
      *(undefined4 *)((int)param_4 + 0xc) = 0;
      *(undefined4 *)((int)param_4 + 0x10) = 0;
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(undefined4 *)((int)param_4 + 4) = 0x1a;
      cVar9 = '\x01';
      *(undefined4 *)(p_Var26 + 4) = 0x7f;
      do {
        uVar15 = (uint)bVar14;
        if (uVar15 == 9) {
          *(undefined4 *)(p_Var26 + 0xe8) = 0x7800;
          *(undefined4 *)(p_Var26 + 0xec) = 0x7f7f;
          *(undefined4 *)(p_Var26 + 0xe0) = 100;
          *(undefined4 *)(p_Var26 + 0xe4) = 0x7f;
          *(undefined4 *)(p_Var26 + 0xf0) = 0x2000;
          *(undefined4 *)(p_Var26 + 0xf4) = 0;
        }
        else {
          *(undefined4 *)(p_Var26 + uVar15 * 0x18 + 0x10) = 0x7900;
          *(undefined4 *)(p_Var26 + uVar15 * 0x18 + 0x14) = 0x7f7f;
          *(undefined4 *)(p_Var26 + uVar15 * 0x18 + 8) = 100;
          *(undefined4 *)(p_Var26 + uVar15 * 0x18 + 0xc) = 0x7f;
          *(undefined4 *)(p_Var26 + uVar15 * 0x18 + 0x18) = 0x2000;
          *(undefined4 *)(p_Var26 + uVar15 * 0x18 + 0x1c) = 0;
          if (cVar9 == '\x10') goto code_r0x000c14b4;
        }
        cVar9 = cVar9 + '\x01';
        bVar14 = bVar14 + 1;
      } while( true );
    }
    goto switchD_000c1dec_caseD_2;
  }
  if (bVar14 == 0x7f) {
    cVar9 = pcVar23[4];
    if (cVar9 == '\x03') {
      if (((pcVar23[2] == '\x7f') && (pcVar23[3] == '\x04')) &&
         ((bVar14 = pcVar23[5], -1 < (int)((uint)bVar14 << 0x18) &&
          (((bVar25 = pcVar23[6], -1 < (int)((uint)bVar25 << 0x18) && (pcVar23[7] == -9)) &&
           (uVar15 == 8)))))) {
        *(undefined4 *)((int)param_4 + 8) = 0;
        iVar4 = 0;
        *(uint *)((int)param_4 + 0x10) = (uint)bVar14 | (uint)bVar25 << 7;
        *(undefined4 *)((int)param_4 + 0xc) = 0;
        *(undefined4 *)((int)param_4 + 0x14) = 0;
        *(undefined4 *)((int)param_4 + 4) = 0x18;
        goto LAB_000c11e0;
      }
    }
    else if (cVar9 == '\x04') {
      if (((pcVar23[2] == '\x7f') && (pcVar23[3] == '\x04')) &&
         ((-1 < (int)((uint)(byte)pcVar23[6] << 0x18) && ((pcVar23[7] == -9 && (uVar15 == 8)))))) {
        *(uint *)((int)param_4 + 0x10) = (uint)(byte)pcVar23[6];
        iVar4 = 0;
        *(undefined4 *)((int)param_4 + 8) = 0;
        *(undefined4 *)((int)param_4 + 0xc) = 0;
        *(undefined4 *)((int)param_4 + 0x14) = 0;
        *(undefined4 *)((int)param_4 + 4) = 0x17;
        goto LAB_000c11e0;
      }
    }
    else if (((((cVar9 == '\x01') && (pcVar23[2] == '\x7f')) && (pcVar23[3] == '\x04')) &&
             ((-1 < (int)((uint)(byte)pcVar23[6] << 0x18) && (pcVar23[7] == -9)))) && (uVar15 == 8))
    {
      *(uint *)(p_Var26 + 4) = (uint)(byte)pcVar23[6];
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(undefined4 *)((int)param_4 + 4) = 0x16;
      iVar4 = 0;
      *(undefined4 *)((int)param_4 + 0xc) = 0;
      uVar18 = *(undefined4 *)(p_Var26 + 4);
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(undefined4 *)((int)param_4 + 0x10) = uVar18;
      goto LAB_000c11e0;
    }
    goto switchD_000c1dec_caseD_2;
  }
  if (((bVar14 != 0x43) || (pcVar23[2] != 'y')) || ((pcVar23[4] != '\x7f' || (uVar15 < 8))))
  goto switchD_000c1dec_caseD_2;
  if (pcVar23[3] != '\x06') {
    if ((pcVar23[3] == '\b') && (pcVar23[5] == '!')) {
      if (0x20 < uVar15) {
        bVar14 = pcVar23[0xb];
        uVar5 = (uint)bVar14;
        if (pcVar23[6] == '|') {
          if ((byte)pcVar23[7] < 10) {
            bVar25 = pcVar23[8];
            local_a8 = (byte)pcVar23[7] + 1;
            goto LAB_000c1516;
          }
        }
        else if (((pcVar23[6] == '}') && (pcVar23[7] == '\0')) && ((byte)pcVar23[8] < 10)) {
          bVar25 = pcVar23[9];
          local_a8 = (byte)pcVar23[8] + 0x81;
LAB_000c1516:
          local_a4 = bVar25 & 0x7f;
          switch(uVar15) {
          case 0x21:
            if (((int)(uVar5 << 0x1f) < 0) && (uVar5 = uVar5 & 6, (bVar14 & 6) == 0)) {
              pbVar24 = (byte *)(pcVar23 + 0x20);
              pbVar16 = (byte *)(pcVar23 + 0xc);
              do {
                do {
                  do {
                    do {
                      do {
                        pbVar8 = (byte *)((int)&local_68 + uVar5);
                        pbVar6 = pbVar16 + 2;
                        if ((int)((0x11 - uVar5) * 0x40000000) < 0) {
                          bVar14 = *pbVar16;
                          if (pbVar16 + 1 < pbVar24) {
                            iVar4 = uVar5 + 1;
                            *pbVar8 = (bVar14 & 0x40) << 1 | pbVar16[1];
                            if ((pbVar6 < pbVar24) && (iVar4 != 0x11)) {
                              bVar14 = bVar14 << 2;
                              pbVar8 = pbVar16 + 5;
                              iVar22 = uVar5 + 2;
                              *(byte *)((int)&local_68 + uVar5 + 1) = bVar14 & 0x80 | *pbVar6;
                              pbVar11 = pbVar6;
                              pbVar16 = pbVar16 + 3;
                              pbVar6 = pbVar8;
                              uVar5 = uVar5 + 2;
                              pbVar8 = (byte *)((int)&local_68 + iVar22);
                              goto joined_r0x000c1dbc;
                            }
                          }
                          goto LAB_000c1b80;
                        }
                        do {
                          if ((uVar5 == 0x11) || (bVar14 = pbVar6[-2], pbVar24 <= pbVar16 + 1))
                          goto LAB_000c1b80;
                          iVar4 = uVar5 + 1;
                          *pbVar8 = (bVar14 & 0x40) << 1 | pbVar16[1];
                          if ((pbVar24 <= pbVar6) || (iVar4 == 0x11)) goto LAB_000c1b80;
                          bVar14 = bVar14 << 2;
                          pbVar7 = pbVar6 + 3;
                          uVar15 = uVar5 + 2;
                          pbVar8[1] = bVar14 & 0x80 | *pbVar6;
                          pbVar11 = pbVar6;
                          if (pbVar16 + 3 < pbVar24) break;
                          bVar14 = pbVar6[1];
                          if (pbVar24 <= pbVar16 + 4) goto LAB_000c1b80;
                          iVar4 = uVar5 + 3;
                          pbVar8[2] = (bVar14 & 0x40) << 1 | pbVar16[4];
                          if ((pbVar24 <= pbVar7) || (iVar4 == 0x11)) goto LAB_000c1b80;
                          bVar14 = bVar14 << 2;
                          pbVar16 = pbVar16 + 6;
                          pbVar6 = pbVar6 + 6;
                          uVar5 = uVar5 + 4;
                          pbVar8[3] = bVar14 & 0x80 | *pbVar7;
                          pbVar11 = pbVar7;
                          pbVar8 = pbVar8 + 4;
joined_r0x000c1dbc:
                          pbVar7 = pbVar6;
                          uVar15 = uVar5;
                        } while (pbVar24 <= pbVar16);
                        if (uVar15 == 0x11) goto LAB_000c1b80;
                        *(byte *)((int)&local_68 + uVar15) = (bVar14 & 0x40) << 1 | pbVar11[1];
                        uVar5 = iVar4 + 2;
                        pbVar16 = pbVar11 + 2;
                      } while (pbVar24 <= pbVar11 + 2);
                      if (uVar5 == 0x11) goto LAB_000c1b80;
                      uVar5 = iVar4 + 3;
                      *(byte *)((int)&local_68 + iVar4 + 2) = (bVar14 & 0x20) << 2 | pbVar11[2];
                      pbVar16 = pbVar7;
                    } while (pbVar24 <= pbVar7);
                    if (uVar5 == 0x11) goto LAB_000c1b80;
                    pbVar16 = pbVar11 + 4;
                    *(byte *)((int)&local_68 + iVar4 + 3) = (bVar14 & 0x10) << 3 | pbVar11[3];
                    uVar5 = iVar4 + 4;
                  } while (pbVar24 <= pbVar16);
                  if (uVar5 == 0x11) goto LAB_000c1b80;
                  pbVar16 = pbVar11 + 5;
                  *(byte *)((int)&local_64 + iVar4) = (bVar14 & 8) << 4 | pbVar11[4];
                  uVar5 = iVar4 + 5;
                } while (pbVar24 <= pbVar16);
                if (uVar5 == 0x11) break;
                pbVar16 = pbVar11 + 6;
                uVar5 = iVar4 + 6;
                *(byte *)((int)&local_64 + iVar4 + 1) = bVar14 << 5 | pbVar11[5];
              } while ((pbVar24 <= pbVar16) || (uVar5 != 0x11));
LAB_000c1b80:
              uVar5 = (uint)CONCAT11((undefined1)local_68,local_68._1_1_);
              if ((int)(local_58 << 0x18) < 0) {
                uVar15 = local_58 & 0x7f;
                if (0x1c < uVar15) break;
              }
              else {
                uVar15 = local_58 & 0xff | 0x80;
              }
              uVar10 = 0xe;
LAB_000c19ca:
              local_68 = CONCAT13(local_68._3_1_,(uint3)local_68) & 0xefffffff;
              iVar4 = MaSndDrv_SetVoice(param_1,local_a8,local_a4,1,uVar5,uVar15,0,0,
                                        (uchar *)((int)&local_68 + 2),uVar10);
              goto LAB_000c15de;
            }
            break;
          case 0x28:
            uVar5 = uVar5 & 3;
            if ((bVar14 & 3) == 0) {
              FUN_000c0878(pcVar23 + 0xc,0x1b,&local_68,0x17);
              uVar10 = local_68 & 0xff;
              uVar15 = 0x16;
LAB_000c15c8:
              local_68 = CONCAT13(local_68._3_1_,CONCAT12(local_68._2_1_,(undefined2)local_68)) &
                         0xffefffff;
              iVar4 = MaSndDrv_SetVoice(param_1,local_a8,local_a4,uVar5,uVar10,uVar5,uVar5,uVar5,
                                        (uchar *)((int)&local_68 + 1),uVar15);
              goto LAB_000c15de;
            }
            break;
          case 0x33:
            if (((int)(uVar5 << 0x1f) < 0) && ((uVar5 & 6) == 2)) {
              FUN_000c0878(pcVar23 + 0xc,0x26,&local_68,0x21);
              uVar5 = (uint)CONCAT11((undefined1)local_68,local_68._1_1_);
              if ((int)(local_48 << 0x18) < 0) {
                uVar15 = local_48 & 0x7f;
                if (0x1c < uVar15) break;
              }
              else {
                uVar15 = local_48 & 0xff | 0x80;
              }
              uVar10 = 0x1e;
              goto LAB_000c19ca;
            }
            break;
          case 0x3a:
            uVar5 = uVar5 & 1;
            if (((bVar14 & 1) == 0) && ((bVar14 & 2) != 0)) {
              pbVar24 = (byte *)(pcVar23 + 0x39);
              pbVar16 = (byte *)(pcVar23 + 0xc);
              do {
                do {
                  do {
                    do {
                      do {
                        pbVar8 = (byte *)((int)&local_68 + uVar5);
                        pbVar6 = pbVar16 + 2;
                        if (-1 < (int)(uVar5 << 0x1e)) {
                          bVar14 = *pbVar16;
                          if (pbVar16 + 1 < pbVar24) {
                            iVar4 = uVar5 + 1;
                            *pbVar8 = (bVar14 & 0x40) << 1 | pbVar16[1];
                            if ((pbVar6 < pbVar24) && (iVar4 != 0x27)) {
                              bVar14 = bVar14 << 2;
                              pbVar8 = pbVar16 + 5;
                              iVar22 = uVar5 + 2;
                              *(byte *)((int)&local_68 + uVar5 + 1) = bVar14 & 0x80 | *pbVar6;
                              pbVar11 = pbVar6;
                              pbVar16 = pbVar16 + 3;
                              pbVar6 = pbVar8;
                              uVar5 = uVar5 + 2;
                              pbVar8 = (byte *)((int)&local_68 + iVar22);
                              goto joined_r0x000c1cf8;
                            }
                          }
                          goto LAB_000c1944;
                        }
                        do {
                          if ((uVar5 == 0x27) || (bVar14 = pbVar6[-2], pbVar24 <= pbVar16 + 1))
                          goto LAB_000c1944;
                          iVar4 = uVar5 + 1;
                          *pbVar8 = (bVar14 & 0x40) << 1 | pbVar16[1];
                          if ((pbVar24 <= pbVar6) || (iVar4 == 0x27)) goto LAB_000c1944;
                          bVar14 = bVar14 << 2;
                          pbVar7 = pbVar6 + 3;
                          uVar15 = uVar5 + 2;
                          pbVar8[1] = bVar14 & 0x80 | *pbVar6;
                          pbVar11 = pbVar6;
                          if (pbVar16 + 3 < pbVar24) break;
                          bVar14 = pbVar6[1];
                          if (pbVar24 <= pbVar16 + 4) goto LAB_000c1944;
                          iVar4 = uVar5 + 3;
                          pbVar8[2] = (bVar14 & 0x40) << 1 | pbVar16[4];
                          if ((pbVar24 <= pbVar7) || (iVar4 == 0x27)) goto LAB_000c1944;
                          bVar14 = bVar14 << 2;
                          pbVar16 = pbVar16 + 6;
                          pbVar6 = pbVar6 + 6;
                          uVar5 = uVar5 + 4;
                          pbVar8[3] = bVar14 & 0x80 | *pbVar7;
                          pbVar11 = pbVar7;
                          pbVar8 = pbVar8 + 4;
joined_r0x000c1cf8:
                          pbVar7 = pbVar6;
                          uVar15 = uVar5;
                        } while (pbVar24 <= pbVar16);
                        if (uVar15 == 0x27) goto LAB_000c1944;
                        *(byte *)((int)&local_68 + uVar15) = (bVar14 & 0x40) << 1 | pbVar11[1];
                        uVar5 = iVar4 + 2;
                        pbVar16 = pbVar11 + 2;
                      } while (pbVar24 <= pbVar11 + 2);
                      if (uVar5 == 0x27) goto LAB_000c1944;
                      uVar5 = iVar4 + 3;
                      *(byte *)((int)&local_68 + iVar4 + 2) = (bVar14 & 0x20) << 2 | pbVar11[2];
                      pbVar16 = pbVar7;
                    } while (pbVar24 <= pbVar7);
                    if (uVar5 == 0x27) goto LAB_000c1944;
                    pbVar16 = pbVar11 + 4;
                    *(byte *)((int)&local_68 + iVar4 + 3) = (bVar14 & 0x10) << 3 | pbVar11[3];
                    uVar5 = iVar4 + 4;
                  } while (pbVar24 <= pbVar16);
                  if (uVar5 == 0x27) goto LAB_000c1944;
                  pbVar16 = pbVar11 + 5;
                  *(byte *)((int)&local_64 + iVar4) = (bVar14 & 8) << 4 | pbVar11[4];
                  uVar5 = iVar4 + 5;
                } while (pbVar24 <= pbVar16);
                if (uVar5 == 0x27) break;
                pbVar16 = pbVar11 + 6;
                uVar5 = iVar4 + 6;
                *(byte *)((int)&local_64 + iVar4 + 1) = bVar14 << 5 | pbVar11[5];
              } while ((pbVar24 <= pbVar16) || (uVar5 != 0x27));
LAB_000c1944:
              uVar15 = local_68 & 0xff;
              local_68 = local_68 & 0xffefffff;
              iVar4 = MaSndDrv_SetVoice(param_1,local_a8,local_a4,0,uVar15,0,0,0,
                                        (uchar *)((int)&local_68 + 1),0x26);
              goto LAB_000c15de;
            }
            break;
          case 0x3d:
            if ((uVar5 & 5) == 5) {
              pbVar24 = (byte *)(pcVar23 + 0x3c);
              iVar4 = 0;
              pbVar16 = (byte *)(pcVar23 + 0xc);
              do {
                do {
                  do {
                    do {
                      do {
                        pbVar8 = (byte *)((int)&local_68 + iVar4);
                        pbVar6 = pbVar16 + 2;
                        if ((0x2a - iVar4) * 0x40000000 < 0) {
                          bVar25 = *pbVar16;
                          if (pbVar16 + 1 < pbVar24) {
                            iVar22 = iVar4 + 1;
                            *pbVar8 = (bVar25 & 0x40) << 1 | pbVar16[1];
                            if ((pbVar6 < pbVar24) && (iVar22 != 0x2a)) {
                              bVar25 = bVar25 << 2;
                              pbVar8 = pbVar16 + 5;
                              iVar17 = iVar4 + 2;
                              *(byte *)((int)&local_68 + iVar4 + 1) = bVar25 & 0x80 | *pbVar6;
                              pbVar11 = pbVar6;
                              pbVar16 = pbVar16 + 3;
                              pbVar6 = pbVar8;
                              iVar4 = iVar4 + 2;
                              pbVar8 = (byte *)((int)&local_68 + iVar17);
                              goto joined_r0x000c1d5a;
                            }
                          }
                          goto LAB_000c1792;
                        }
                        do {
                          if ((iVar4 == 0x2a) || (bVar25 = pbVar6[-2], pbVar24 <= pbVar16 + 1))
                          goto LAB_000c1792;
                          iVar22 = iVar4 + 1;
                          *pbVar8 = (bVar25 & 0x40) << 1 | pbVar16[1];
                          if ((pbVar24 <= pbVar6) || (iVar22 == 0x2a)) goto LAB_000c1792;
                          bVar25 = bVar25 << 2;
                          pbVar7 = pbVar6 + 3;
                          iVar17 = iVar4 + 2;
                          pbVar8[1] = bVar25 & 0x80 | *pbVar6;
                          pbVar11 = pbVar6;
                          if (pbVar16 + 3 < pbVar24) break;
                          bVar25 = pbVar6[1];
                          if (pbVar24 <= pbVar16 + 4) goto LAB_000c1792;
                          iVar22 = iVar4 + 3;
                          pbVar8[2] = (bVar25 & 0x40) << 1 | pbVar16[4];
                          if ((pbVar24 <= pbVar7) || (iVar22 == 0x2a)) goto LAB_000c1792;
                          bVar25 = bVar25 << 2;
                          pbVar16 = pbVar16 + 6;
                          pbVar6 = pbVar6 + 6;
                          iVar4 = iVar4 + 4;
                          pbVar8[3] = bVar25 & 0x80 | *pbVar7;
                          pbVar11 = pbVar7;
                          pbVar8 = pbVar8 + 4;
joined_r0x000c1d5a:
                          pbVar7 = pbVar6;
                          iVar17 = iVar4;
                        } while (pbVar24 <= pbVar16);
                        if (iVar17 == 0x2a) goto LAB_000c1792;
                        *(byte *)((int)&local_68 + iVar17) = (bVar25 & 0x40) << 1 | pbVar11[1];
                        iVar4 = iVar22 + 2;
                        pbVar16 = pbVar11 + 2;
                      } while (pbVar24 <= pbVar11 + 2);
                      if (iVar4 == 0x2a) goto LAB_000c1792;
                      iVar4 = iVar22 + 3;
                      *(byte *)((int)&local_68 + iVar22 + 2) = (bVar25 & 0x20) << 2 | pbVar11[2];
                      pbVar16 = pbVar7;
                    } while (pbVar24 <= pbVar7);
                    if (iVar4 == 0x2a) goto LAB_000c1792;
                    pbVar16 = pbVar11 + 4;
                    *(byte *)((int)&local_68 + iVar22 + 3) = (bVar25 & 0x10) << 3 | pbVar11[3];
                    iVar4 = iVar22 + 4;
                  } while (pbVar24 <= pbVar16);
                  if (iVar4 == 0x2a) goto LAB_000c1792;
                  pbVar16 = pbVar11 + 5;
                  *(byte *)((int)&local_64 + iVar22) = (bVar25 & 8) << 4 | pbVar11[4];
                  iVar4 = iVar22 + 5;
                } while (pbVar24 <= pbVar16);
                if (iVar4 == 0x2a) break;
                pbVar16 = pbVar11 + 6;
                iVar4 = iVar22 + 6;
                *(byte *)((int)&local_64 + iVar22 + 1) = bVar25 << 5 | pbVar11[5];
              } while ((pbVar24 <= pbVar16) || (iVar4 != 0x2a));
LAB_000c1792:
              uVar15 = (uint)uStack_40._1_1_;
              bVar27 = -1 < (int)(uVar15 << 0x18);
              if (bVar27) {
                uVar15 = uVar15 | 0x80;
              }
              uVar5 = (uint)CONCAT11((undefined1)local_68,local_68._1_1_);
              if ((bVar27) || (uVar15 = uVar15 & 0x7f, uVar15 < 0x1d)) {
                if ((bVar14 & 2) == 0) {
                  memset(&local_58,0,0x10);
                }
                uVar10 = 0x27;
                goto LAB_000c19ca;
              }
            }
            break;
          case 0x3f:
            uVar5 = uVar5 & 3;
            if ((bVar14 & 3) == 0) {
              FUN_000c0878(pcVar23 + 0xc,0x32,&local_68,0x2b);
              uVar10 = local_68 & 0xff;
              uVar15 = 0x2a;
              goto LAB_000c15c8;
            }
            break;
          case 0x51:
            uVar5 = uVar5 & 1;
            if (((bVar14 & 1) == 0) && ((bVar14 & 2) != 0)) {
              FUN_000c0878(pcVar23 + 0xc,0x44,&local_68,0x3b);
              uVar10 = local_68 & 0xff;
              uVar15 = 0x3a;
              goto LAB_000c15c8;
            }
          }
        }
      }
      goto switchD_000c151e_caseD_22;
    }
    goto switchD_000c1dec_caseD_2;
  }
  switch(pcVar23[5]) {
  case '\0':
    if (uVar15 == 8) {
      bVar14 = pcVar23[6];
      iVar4 = 0;
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(undefined4 *)((int)param_4 + 0xc) = 0;
      *(uint *)((int)param_4 + 0x10) = bVar14 & 0x7f;
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(undefined4 *)((int)param_4 + 4) = 0x19;
      goto LAB_000c11e0;
    }
    break;
  case '\x01':
    if (uVar15 < 0x1f) goto switchD_000c151e_caseD_22;
    cVar9 = pcVar23[10];
    if (pcVar23[6] == '|') {
      if ((byte)pcVar23[7] < 10) {
        bVar14 = pcVar23[8];
        uVar5 = (byte)pcVar23[7] + 1;
        goto LAB_000c1eb2;
      }
      goto switchD_000c151e_caseD_22;
    }
    if (((pcVar23[6] != '}') || (pcVar23[7] != '\0')) || (9 < (byte)pcVar23[8]))
    goto switchD_000c151e_caseD_22;
    bVar14 = pcVar23[9];
    uVar5 = (byte)pcVar23[8] + 0x81;
LAB_000c1eb2:
    local_ac = bVar14 & 0x7f;
    if (uVar15 != 0x20) {
      if (uVar15 == 0x30) {
        if (cVar9 == '\0') {
          pbVar24 = (byte *)(pcVar23 + 0x2f);
          iVar4 = 0;
          pbVar16 = (byte *)(pcVar23 + 0xb);
          do {
            do {
              do {
                do {
                  do {
                    do {
                      do {
                        pbVar6 = pbVar16;
                        iVar22 = iVar4;
                        if ((iVar22 == 0x1f) || (bVar14 = *pbVar6, pbVar24 <= pbVar6 + 1))
                        goto LAB_000c248a;
                        *(byte *)((int)&local_98 + iVar22) = (bVar14 & 0x40) << 1 | pbVar6[1];
                        iVar4 = iVar22 + 1;
                        pbVar16 = pbVar6 + 2;
                      } while (pbVar24 <= pbVar6 + 2);
                      if (iVar22 + 1 == 0x1f) goto LAB_000c248a;
                      *(byte *)((int)&local_98 + iVar22 + 1) = (bVar14 & 0x20) << 2 | pbVar6[2];
                      iVar4 = iVar22 + 2;
                      pbVar16 = pbVar6 + 3;
                    } while (pbVar24 <= pbVar6 + 3);
                    if (iVar22 + 2 == 0x1f) goto LAB_000c248a;
                    *(byte *)((int)&local_98 + iVar22 + 2) = (bVar14 & 0x10) << 3 | pbVar6[3];
                    iVar4 = iVar22 + 3;
                    pbVar16 = pbVar6 + 4;
                  } while (pbVar24 <= pbVar6 + 4);
                  if (iVar22 + 3 == 0x1f) goto LAB_000c248a;
                  *(byte *)((int)&local_98 + iVar22 + 3) = (bVar14 & 8) << 4 | pbVar6[4];
                  iVar4 = iVar22 + 4;
                  pbVar16 = pbVar6 + 5;
                } while (pbVar24 <= pbVar6 + 5);
                if (iVar22 + 4 == 0x1f) goto LAB_000c248a;
                *(byte *)((int)&local_94 + iVar22) = (bVar14 & 4) << 5 | pbVar6[5];
                iVar4 = iVar22 + 5;
                pbVar16 = pbVar6 + 6;
              } while (pbVar24 <= pbVar6 + 6);
              if (iVar22 + 5 == 0x1f) goto LAB_000c248a;
              *(byte *)((int)&local_94 + iVar22 + 1) = (bVar14 & 2) << 6 | pbVar6[6];
              iVar4 = iVar22 + 6;
              pbVar16 = pbVar6 + 7;
            } while (pbVar24 <= pbVar6 + 7);
            if (iVar22 + 6 == 0x1f) break;
            pbVar16 = pbVar6 + 8;
            iVar4 = iVar22 + 7;
            *(byte *)((int)&local_94 + iVar22 + 2) = pbVar6[7] | bVar14 << 7;
          } while ((pbVar24 <= pbVar16) || (iVar4 != 0x1f));
LAB_000c248a:
          uVar15 = local_98 & 0xff;
          if ((int)((uint)local_98._2_1_ << 0x1b) < 0) {
            local_68._0_2_ = (undefined2)local_98;
            local_68 = CONCAT22(CONCAT11(local_68._3_1_,local_98._2_1_),(undefined2)local_68) |
                       0x300000;
          }
          else {
            if (-1 < (int)((uint)local_98._2_1_ << 0x1a)) {
              local_98._1_1_ = (local_98._1_1_ & 3) + 0x80;
            }
            local_68 = CONCAT22(CONCAT11(local_68._3_1_,local_98._2_1_),
                                CONCAT11(local_98._1_1_,(undefined1)local_98));
          }
          iVar4 = (int)&uStack_5c + 1;
          puVar19 = local_90 + 2;
          do {
            puVar20 = puVar19 + 7;
            *(undefined1 *)(iVar4 + -10) = puVar19[-7];
            *(undefined1 *)(iVar4 + -9) = puVar19[-6];
            *(undefined1 *)(iVar4 + -8) = puVar19[-5];
            *(undefined1 *)(iVar4 + -7) = puVar19[-4];
            uVar1 = puVar19[-3];
            *(undefined1 *)(iVar4 + -5) = 0;
            *(undefined1 *)(iVar4 + -6) = uVar1;
            uVar1 = puVar19[-2];
            uVar2 = puVar19[-1];
            *(undefined1 *)(iVar4 + -3) = 0;
            *(undefined1 *)(iVar4 + -1) = uVar1;
            *(undefined1 *)(iVar4 + -4) = uVar2;
            *(undefined1 *)(iVar4 + -2) = 0;
            iVar4 = iVar4 + 10;
            puVar19 = puVar20;
          } while (puVar20 != (undefined1 *)((int)&uStack_74 + 2));
          local_98 = local_68;
          local_94 = local_64;
          local_90 = (undefined1  [4])local_60;
          uStack_8c = uStack_5c;
          local_88 = local_58;
          uStack_84 = uStack_54;
          uStack_80 = uStack_50;
          uStack_7c = uStack_4c;
          local_78 = local_48;
          uStack_74 = uStack_44;
          uStack_70 = uStack_40;
          MaSndDrv_MultiCnv((uchar *)((int)&local_98 + 1),0x2a);
          iVar4 = MaSndDrv_SetVoice(param_1,uVar5,local_ac,0,uVar15,0,0,0,
                                    (uchar *)((int)&local_98 + 1),0x2a);
          goto LAB_000c15de;
        }
      }
      else if ((uVar15 == 0x1f) && (cVar9 == '\x01')) {
        pbVar24 = (byte *)(pcVar23 + 0x1e);
        iVar4 = 0;
        pbVar16 = (byte *)(pcVar23 + 0xb);
        do {
          do {
            do {
              do {
                do {
                  do {
                    do {
                      pbVar6 = pbVar16;
                      iVar22 = iVar4;
                      if ((iVar22 == 0x10) || (bVar14 = *pbVar6, pbVar24 <= pbVar6 + 1))
                      goto LAB_000c200a;
                      *(byte *)((int)&local_98 + iVar22) = (bVar14 & 0x40) << 1 | pbVar6[1];
                      iVar4 = iVar22 + 1;
                      pbVar16 = pbVar6 + 2;
                    } while (pbVar24 <= pbVar6 + 2);
                    if (iVar22 + 1 == 0x10) goto LAB_000c200a;
                    *(byte *)((int)&local_98 + iVar22 + 1) = (bVar14 & 0x20) << 2 | pbVar6[2];
                    iVar4 = iVar22 + 2;
                    pbVar16 = pbVar6 + 3;
                  } while (pbVar24 <= pbVar6 + 3);
                  if (iVar22 + 2 == 0x10) goto LAB_000c200a;
                  *(byte *)((int)&local_98 + iVar22 + 2) = (bVar14 & 0x10) << 3 | pbVar6[3];
                  iVar4 = iVar22 + 3;
                  pbVar16 = pbVar6 + 4;
                } while (pbVar24 <= pbVar6 + 4);
                if (iVar22 + 3 == 0x10) goto LAB_000c200a;
                *(byte *)((int)&local_98 + iVar22 + 3) = (bVar14 & 8) << 4 | pbVar6[4];
                iVar4 = iVar22 + 4;
                pbVar16 = pbVar6 + 5;
              } while (pbVar24 <= pbVar6 + 5);
              if (iVar22 + 4 == 0x10) goto LAB_000c200a;
              *(byte *)((int)&local_94 + iVar22) = (bVar14 & 4) << 5 | pbVar6[5];
              iVar4 = iVar22 + 5;
              pbVar16 = pbVar6 + 6;
            } while (pbVar24 <= pbVar6 + 6);
            if (iVar22 + 5 == 0x10) goto LAB_000c200a;
            *(byte *)((int)&local_94 + iVar22 + 1) = (bVar14 & 2) << 6 | pbVar6[6];
            iVar4 = iVar22 + 6;
            pbVar16 = pbVar6 + 7;
          } while (pbVar24 <= pbVar6 + 7);
          if (iVar22 + 6 == 0x10) break;
          pbVar16 = pbVar6 + 8;
          iVar4 = iVar22 + 7;
          *(byte *)((int)&local_94 + iVar22 + 2) = pbVar6[7] | bVar14 << 7;
        } while ((pbVar24 <= pbVar16) || (iVar4 != 0x10));
LAB_000c200a:
        bVar14 = uStack_8c._3_1_;
        uVar15 = (uint)uStack_8c._3_1_;
        uVar3 = CONCAT11((undefined1)local_98,local_98._1_1_);
        if ((int)(uVar15 << 0x18) < 0) {
          uVar15 = uVar15 & 0x7f;
          if (0x1c < uVar15) goto switchD_000c151e_caseD_22;
        }
        else {
          uVar15 = uVar15 | 0x80;
        }
        local_68._0_3_ = (uint3)local_98 & 0xf8ffff;
        if ((int)((uint)local_98._3_1_ << 0x1d) < 0) {
          local_68 = CONCAT13((local_98._3_1_ & 0xc3) + 0x30,(uint3)local_98) & 0xfff8ffff;
        }
        else {
          if ((local_98 & 0x10000) == 0) {
            local_68._0_3_ = CONCAT12(0x80,(undefined2)local_68);
          }
          local_68 = CONCAT13((local_98._3_1_ & 0xc3) + (local_98._2_1_ & 1) * ' ',(uint3)local_68);
        }
        local_60._0_2_ = (ushort)local_90[0];
        iVar4 = 9;
        do {
          iVar22 = iVar4 + 1;
          *(undefined1 *)((int)&local_68 + iVar4 + 1) = *(undefined1 *)((int)&local_98 + iVar4);
          iVar4 = iVar22;
        } while (iVar22 != 0xf);
        local_58 = CONCAT31(local_58._1_3_,uStack_8c._3_1_);
        local_98 = local_68;
        local_90 = (undefined1  [4])local_60;
        uStack_8c = uStack_5c;
        local_88 = CONCAT31(local_88._1_3_,bVar14);
        iVar4 = MaSndDrv_SetVoice(param_1,uVar5,local_ac,1,(uint)uVar3,uVar15,0,0,
                                  (uchar *)((int)&local_98 + 2),0xe);
        goto LAB_000c15de;
      }
      goto switchD_000c151e_caseD_22;
    }
    if (cVar9 != '\0') goto switchD_000c151e_caseD_22;
    pbVar24 = (byte *)(pcVar23 + 0x1f);
    iVar4 = 0;
    pbVar16 = (byte *)(pcVar23 + 0xb);
    do {
      do {
        do {
          do {
            do {
              do {
                do {
                  pbVar6 = pbVar16;
                  iVar22 = iVar4;
                  if ((iVar22 == 0x11) || (bVar14 = *pbVar6, pbVar24 <= pbVar6 + 1))
                  goto LAB_000c227c;
                  *(byte *)((int)&local_98 + iVar22) = (bVar14 & 0x40) << 1 | pbVar6[1];
                  iVar4 = iVar22 + 1;
                  pbVar16 = pbVar6 + 2;
                } while (pbVar24 <= pbVar6 + 2);
                if (iVar22 + 1 == 0x11) goto LAB_000c227c;
                *(byte *)((int)&local_98 + iVar22 + 1) = (bVar14 & 0x20) << 2 | pbVar6[2];
                iVar4 = iVar22 + 2;
                pbVar16 = pbVar6 + 3;
              } while (pbVar24 <= pbVar6 + 3);
              if (iVar22 + 2 == 0x11) goto LAB_000c227c;
              *(byte *)((int)&local_98 + iVar22 + 2) = (bVar14 & 0x10) << 3 | pbVar6[3];
              iVar4 = iVar22 + 3;
              pbVar16 = pbVar6 + 4;
            } while (pbVar24 <= pbVar6 + 4);
            if (iVar22 + 3 == 0x11) goto LAB_000c227c;
            *(byte *)((int)&local_98 + iVar22 + 3) = (bVar14 & 8) << 4 | pbVar6[4];
            iVar4 = iVar22 + 4;
            pbVar16 = pbVar6 + 5;
          } while (pbVar24 <= pbVar6 + 5);
          if (iVar22 + 4 == 0x11) goto LAB_000c227c;
          *(byte *)((int)&local_94 + iVar22) = (bVar14 & 4) << 5 | pbVar6[5];
          iVar4 = iVar22 + 5;
          pbVar16 = pbVar6 + 6;
        } while (pbVar24 <= pbVar6 + 6);
        if (iVar22 + 5 == 0x11) goto LAB_000c227c;
        *(byte *)((int)&local_94 + iVar22 + 1) = (bVar14 & 2) << 6 | pbVar6[6];
        iVar4 = iVar22 + 6;
        pbVar16 = pbVar6 + 7;
      } while (pbVar24 <= pbVar6 + 7);
      if (iVar22 + 6 == 0x11) break;
      pbVar16 = pbVar6 + 8;
      iVar4 = iVar22 + 7;
      *(byte *)((int)&local_94 + iVar22 + 2) = pbVar6[7] | bVar14 << 7;
    } while ((pbVar24 <= pbVar16) || (iVar4 != 0x11));
LAB_000c227c:
    uVar15 = local_98 & 0xff;
    if ((int)((uint)local_98._2_1_ << 0x1b) < 0) {
      local_68._0_2_ = (undefined2)local_98;
      local_68 = CONCAT22(CONCAT11(local_68._3_1_,local_98._2_1_),(undefined2)local_68) | 0x300000;
    }
    else {
      if (-1 < (int)((uint)local_98._2_1_ << 0x1a)) {
        local_98._1_1_ = (local_98._1_1_ & 3) + 0x80;
      }
      local_68 = CONCAT22(CONCAT11(local_68._3_1_,local_98._2_1_),
                          CONCAT11(local_98._1_1_,(undefined1)local_98));
    }
    puVar12 = (undefined4 *)(local_90 + 2);
    iVar4 = (int)&uStack_5c + 1;
    do {
      puVar13 = (undefined4 *)((int)puVar12 + 7);
      *(undefined1 *)(iVar4 + -10) = *(undefined1 *)((int)puVar12 + -7);
      *(undefined1 *)(iVar4 + -9) = *(undefined1 *)((int)puVar12 + -6);
      *(undefined1 *)(iVar4 + -8) = *(undefined1 *)((int)puVar12 + -5);
      *(undefined1 *)(iVar4 + -7) = *(undefined1 *)(puVar12 + -1);
      uVar1 = *(undefined1 *)((int)puVar12 + -3);
      *(undefined1 *)(iVar4 + -5) = 0;
      *(undefined1 *)(iVar4 + -6) = uVar1;
      uVar1 = *(undefined1 *)((int)puVar12 + -2);
      uVar2 = *(undefined1 *)((int)puVar12 + -1);
      *(undefined1 *)(iVar4 + -3) = 0;
      *(undefined1 *)(iVar4 + -1) = uVar1;
      *(undefined1 *)(iVar4 + -4) = uVar2;
      *(undefined1 *)(iVar4 + -2) = 0;
      puVar12 = puVar13;
      iVar4 = iVar4 + 10;
    } while (puVar13 != &uStack_80);
    local_98 = local_68;
    local_94 = local_64;
    local_90 = (undefined1  [4])local_60;
    uStack_8c = uStack_5c;
    local_88 = local_58;
    uStack_84 = uStack_54;
    MaSndDrv_MultiCnv((uchar *)((int)&local_98 + 1),0x16);
    iVar4 = MaSndDrv_SetVoice(param_1,uVar5,local_ac,0,uVar15,0,0,0,(uchar *)((int)&local_98 + 1),
                              0x16);
    goto LAB_000c15de;
  case '\x03':
    if ((9 < uVar15) && ((byte)pcVar23[6] < 0x80)) {
      iVar4 = MaSndDrv_SetWtWave(param_1,(uint)(byte)pcVar23[6],1,(uchar *)(pcVar23 + 8),uVar15 - 9)
      ;
      goto LAB_000c15de;
    }
switchD_000c151e_caseD_22:
    iVar4 = -0x18;
LAB_000c15de:
    *(undefined4 *)((int)param_4 + 8) = 0;
    *(undefined4 *)((int)param_4 + 4) = 0x1b;
    *(undefined4 *)((int)param_4 + 0xc) = 0;
    *(undefined4 *)((int)param_4 + 0x10) = 0;
    *(undefined4 *)((int)param_4 + 0x14) = 0;
    if (-1 < iVar4) goto LAB_000c11e0;
    break;
  case '\x10':
    if (uVar15 == 8) {
      bVar14 = pcVar23[6];
      iVar4 = 0;
      *(undefined4 *)((int)param_4 + 8) = 0;
      *(undefined4 *)((int)param_4 + 0xc) = 0;
      *(uint *)((int)param_4 + 0x10) = bVar14 & 0xf;
      *(undefined4 *)((int)param_4 + 0x14) = 0;
      *(undefined4 *)((int)param_4 + 4) = 0x25;
      goto LAB_000c11e0;
    }
  }
switchD_000c1dec_caseD_2:
  iVar4 = 0;
  *(undefined4 *)((int)param_4 + 8) = 0;
  *(undefined4 *)((int)param_4 + 0xc) = 0;
  *(undefined4 *)((int)param_4 + 0x10) = 0;
  *(undefined4 *)((int)param_4 + 0x14) = 0;
  *(undefined4 *)((int)param_4 + 4) = 0x1b;
LAB_000c11e0:
  if (local_2c == *piVar21) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar4);
code_r0x000c14b4:
  iVar4 = 0;
  goto LAB_000c11e0;
}

