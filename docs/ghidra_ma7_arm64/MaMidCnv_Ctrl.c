/* MaMidCnv_Ctrl @ 001d9cc4 7428B */


/* YAMAHA::MaMidCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

void YAMAHA::MaMidCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  char cVar11;
  byte bVar12;
  short sVar13;
  ushort uVar14;
  char cVar15;
  uint uVar16;
  ushort uVar17;
  bool bVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  uint uVar25;
  char *pcVar26;
  uint uVar27;
  byte *pbVar28;
  byte bVar29;
  byte *pbVar30;
  short sVar31;
  long lVar32;
  byte bVar33;
  char *pcVar34;
  char *pcVar35;
  uint uVar36;
  ulong uVar37;
  long lVar38;
  byte *pbVar39;
  char *pcVar40;
  char *pcVar41;
  byte *pbVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  long lVar46;
  undefined8 uVar47;
  _MARMDCNV_INFO a_Stack_190 [8];
  uint auStack_188 [96];
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar35 = *(char **)(param_1 + 8), pcVar35 == (char *)0x0)) ||
     ((bVar18 = param_4 == (void *)0x0, param_2 != 0x35 && (bVar18)))) {
LAB_001d9dc0:
    uVar20 = 0xfffffffe;
    goto LAB_001d9d80;
  }
  if (param_2 == 5) {
switchD_001d9d6c_caseD_5:
    uVar20 = 0;
    *(int *)param_4 = *(int *)(pcVar35 + 0x4c) >> 10;
    goto LAB_001d9d80;
  }
  if (param_2 == 10) {
    if (((!bVar18) && (uVar27 = *(uint *)((long)param_4 + 0x10), uVar27 != 0)) &&
       (pcVar35[0x7d8] != '\0')) {
      pcVar22 = *(char **)((long)param_4 + 8);
      uVar43 = (uint)*(byte *)((long)param_4 + 3) + (uint)*(byte *)((long)param_4 + 2) * 0x100;
      if (uVar43 == 0x4c44) {
        *pcVar22 = '\0';
        if ((((pcVar35[0x6e0] == '\0') && (pcVar35[0x6f0] == '\0')) &&
            (((pcVar35[0x700] == '\0' && ((pcVar35[0x710] == '\0' && (pcVar35[0x720] == '\0')))) &&
             (pcVar35[0x730] == '\0')))) &&
           ((((((pcVar35[0x740] == '\0' && (pcVar35[0x750] == '\0')) && (pcVar35[0x760] == '\0')) &&
              ((pcVar35[0x770] == '\0' && (pcVar35[0x780] == '\0')))) &&
             ((pcVar35[0x790] == '\0' && ((pcVar35[0x7a0] == '\0' && (pcVar35[0x7b0] == '\0'))))))
            && (pcVar35[0x7c0] == '\0')))) {
          cVar11 = pcVar35[2000];
joined_r0x001da30c:
          if (cVar11 != '\0') goto LAB_001da310;
        }
        else {
LAB_001da310:
          *pcVar22 = '\x01';
        }
LAB_001da21c:
        *(undefined4 *)((long)param_4 + 0x14) = 1;
        uVar20 = 1;
        goto LAB_001d9d80;
      }
      if (uVar43 < 0x4c45) {
        if (uVar43 == 0x4352) {
          pcVar34 = *(char **)(pcVar35 + 0x30);
          uVar43 = *(uint *)(pcVar35 + 0x38);
LAB_001dab0c:
          if ((pcVar34 != (char *)0x0) && (uVar43 != 0)) {
            if (uVar27 < uVar43) {
              uVar43 = uVar27;
            }
            uVar20 = (ulong)uVar43;
            *(uint *)((long)param_4 + 0x14) = uVar43;
            if ((pcVar22 < pcVar34 + 0x10 && pcVar34 < pcVar22 + 0x10) || (uVar43 < 0x16)) {
              *pcVar22 = *pcVar34;
              uVar27 = uVar43 - 1 & 0xf;
              lVar21 = 1;
              if (1 < uVar43) {
                if (uVar27 != 0) {
                  if (uVar27 != 1) {
                    if (uVar27 != 2) {
                      if (uVar27 != 3) {
                        if (uVar27 != 4) {
                          if (uVar27 != 5) {
                            if (uVar27 != 6) {
                              if (uVar27 != 7) {
                                if (uVar27 != 8) {
                                  if (uVar27 != 9) {
                                    if (uVar27 != 10) {
                                      if (uVar27 != 0xb) {
                                        if (uVar27 != 0xc) {
                                          if (uVar27 != 0xd) {
                                            if (uVar27 != 0xe) {
                                              lVar21 = 2;
                                              pcVar22[1] = pcVar34[1];
                                            }
                                            pcVar22[lVar21] = pcVar34[lVar21];
                                            lVar21 = lVar21 + 1;
                                          }
                                          pcVar22[lVar21] = pcVar34[lVar21];
                                          lVar21 = lVar21 + 1;
                                        }
                                        pcVar22[lVar21] = pcVar34[lVar21];
                                        lVar21 = lVar21 + 1;
                                      }
                                      pcVar22[lVar21] = pcVar34[lVar21];
                                      lVar21 = lVar21 + 1;
                                    }
                                    pcVar22[lVar21] = pcVar34[lVar21];
                                    lVar21 = lVar21 + 1;
                                  }
                                  pcVar22[lVar21] = pcVar34[lVar21];
                                  lVar21 = lVar21 + 1;
                                }
                                pcVar22[lVar21] = pcVar34[lVar21];
                                lVar21 = lVar21 + 1;
                              }
                              pcVar22[lVar21] = pcVar34[lVar21];
                              lVar21 = lVar21 + 1;
                            }
                            pcVar22[lVar21] = pcVar34[lVar21];
                            lVar21 = lVar21 + 1;
                          }
                          pcVar22[lVar21] = pcVar34[lVar21];
                          lVar21 = lVar21 + 1;
                        }
                        pcVar22[lVar21] = pcVar34[lVar21];
                        lVar21 = lVar21 + 1;
                      }
                      pcVar22[lVar21] = pcVar34[lVar21];
                      lVar21 = lVar21 + 1;
                    }
                    pcVar22[lVar21] = pcVar34[lVar21];
                    lVar21 = lVar21 + 1;
                  }
                  pcVar22[lVar21] = pcVar34[lVar21];
                  lVar21 = lVar21 + 1;
                  if (uVar43 <= (uint)lVar21) goto LAB_001d9d80;
                }
                do {
                  pcVar22[lVar21] = pcVar34[lVar21];
                  lVar46 = lVar21 + 4;
                  lVar38 = lVar21 + 5;
                  pcVar22[lVar21 + 1] = pcVar34[lVar21 + 1];
                  lVar32 = lVar21 + 6;
                  lVar1 = lVar21 + 7;
                  lVar2 = lVar21 + 8;
                  lVar3 = lVar21 + 9;
                  pcVar22[lVar21 + 2] = pcVar34[lVar21 + 2];
                  lVar4 = lVar21 + 10;
                  lVar5 = lVar21 + 0xb;
                  lVar6 = lVar21 + 0xc;
                  lVar7 = lVar21 + 0xd;
                  pcVar22[lVar21 + 3] = pcVar34[lVar21 + 3];
                  lVar8 = lVar21 + 0xe;
                  lVar9 = lVar21 + 0xf;
                  lVar21 = lVar21 + 0x10;
                  pcVar22[lVar46] = pcVar34[lVar46];
                  pcVar22[lVar38] = pcVar34[lVar38];
                  pcVar22[lVar32] = pcVar34[lVar32];
                  pcVar22[lVar1] = pcVar34[lVar1];
                  pcVar22[lVar2] = pcVar34[lVar2];
                  pcVar22[lVar3] = pcVar34[lVar3];
                  pcVar22[lVar4] = pcVar34[lVar4];
                  pcVar22[lVar5] = pcVar34[lVar5];
                  pcVar22[lVar6] = pcVar34[lVar6];
                  pcVar22[lVar7] = pcVar34[lVar7];
                  pcVar22[lVar8] = pcVar34[lVar8];
                  pcVar22[lVar9] = pcVar34[lVar9];
                } while ((uint)lVar21 < uVar43);
              }
              goto LAB_001d9d80;
            }
            uVar27 = -(int)pcVar34 & 0xf;
            if (uVar43 < uVar27) {
              uVar27 = uVar43;
            }
            pcVar26 = pcVar34;
            pcVar35 = pcVar22;
            uVar45 = uVar27;
            if (uVar27 != 0) {
              *pcVar22 = *pcVar34;
              pcVar26 = pcVar34 + 1;
              pcVar35 = pcVar22 + 1;
              if (uVar27 != 1) {
                pcVar22[1] = pcVar34[1];
                pcVar26 = pcVar34 + 2;
                pcVar35 = pcVar22 + 2;
                if (uVar27 != 2) {
                  pcVar22[2] = pcVar34[2];
                  pcVar26 = pcVar34 + 3;
                  pcVar35 = pcVar22 + 3;
                  if (uVar27 != 3) {
                    pcVar22[3] = pcVar34[3];
                    pcVar26 = pcVar34 + 4;
                    pcVar35 = pcVar22 + 4;
                    if (uVar27 != 4) {
                      pcVar22[4] = pcVar34[4];
                      if (uVar27 == 5) {
                        pcVar26 = pcVar34 + 5;
                        pcVar35 = pcVar22 + 5;
                        uVar45 = 5;
                      }
                      else {
                        pcVar22[5] = pcVar34[5];
                        pcVar26 = pcVar34 + 6;
                        pcVar35 = pcVar22 + 6;
                        if (uVar27 != 6) {
                          pcVar22[6] = pcVar34[6];
                          pcVar26 = pcVar34 + 7;
                          pcVar35 = pcVar22 + 7;
                          if (uVar27 != 7) {
                            pcVar22[7] = pcVar34[7];
                            pcVar26 = pcVar34 + 8;
                            pcVar35 = pcVar22 + 8;
                            if (uVar27 != 8) {
                              pcVar22[8] = pcVar34[8];
                              pcVar26 = pcVar34 + 9;
                              pcVar35 = pcVar22 + 9;
                              if (uVar27 != 9) {
                                pcVar22[9] = pcVar34[9];
                                pcVar26 = pcVar34 + 10;
                                pcVar35 = pcVar22 + 10;
                                if (uVar27 != 10) {
                                  pcVar22[10] = pcVar34[10];
                                  pcVar26 = pcVar34 + 0xb;
                                  pcVar35 = pcVar22 + 0xb;
                                  if (uVar27 != 0xb) {
                                    pcVar22[0xb] = pcVar34[0xb];
                                    pcVar26 = pcVar34 + 0xc;
                                    pcVar35 = pcVar22 + 0xc;
                                    if (uVar27 != 0xc) {
                                      pcVar22[0xc] = pcVar34[0xc];
                                      pcVar26 = pcVar34 + 0xd;
                                      pcVar35 = pcVar22 + 0xd;
                                      if (uVar27 != 0xd) {
                                        pcVar22[0xd] = pcVar34[0xd];
                                        if (uVar27 == 0xf) {
                                          pcVar22[0xe] = pcVar34[0xe];
                                          pcVar26 = pcVar34 + 0xf;
                                          pcVar35 = pcVar22 + 0xf;
                                        }
                                        else {
                                          pcVar26 = pcVar34 + 0xe;
                                          pcVar35 = pcVar22 + 0xe;
                                          uVar45 = 0xe;
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
            uVar36 = (uVar43 - uVar27) - 0x10 >> 4;
            uVar44 = uVar36 + 1;
            uVar16 = uVar44 * 0x10;
            if (0xe < (uVar43 - 1) - uVar27) {
              pcVar34 = pcVar34 + uVar27;
              pcVar22 = pcVar22 + uVar27;
              uVar36 = uVar36 & 7;
              pcVar40 = pcVar34 + 0x10;
              uVar47 = *(undefined8 *)pcVar34;
              uVar25 = 1;
              pcVar23 = pcVar22 + 0x10;
              *(undefined8 *)(pcVar22 + 8) = *(undefined8 *)(pcVar34 + 8);
              *(undefined8 *)pcVar22 = uVar47;
              if (1 < uVar44) {
                if (uVar36 != 0) {
                  if (uVar36 != 1) {
                    pcVar24 = pcVar23;
                    pcVar41 = pcVar40;
                    if (uVar36 != 2) {
                      if (uVar36 != 3) {
                        if (uVar36 != 4) {
                          if (uVar36 != 5) {
                            if (uVar36 != 6) {
                              pcVar41 = pcVar34 + 0x20;
                              uVar47 = *(undefined8 *)pcVar40;
                              uVar25 = 2;
                              pcVar24 = pcVar22 + 0x20;
                              *(undefined8 *)(pcVar22 + 0x18) = *(undefined8 *)(pcVar34 + 0x18);
                              *(undefined8 *)pcVar23 = uVar47;
                            }
                            pcVar40 = pcVar41 + 0x10;
                            uVar47 = *(undefined8 *)pcVar41;
                            uVar25 = uVar25 + 1;
                            pcVar23 = pcVar24 + 0x10;
                            *(undefined8 *)(pcVar24 + 8) = *(undefined8 *)(pcVar41 + 8);
                            *(undefined8 *)pcVar24 = uVar47;
                          }
                          pcVar41 = pcVar40 + 0x10;
                          uVar47 = *(undefined8 *)pcVar40;
                          uVar25 = uVar25 + 1;
                          pcVar24 = pcVar23 + 0x10;
                          *(undefined8 *)(pcVar23 + 8) = *(undefined8 *)(pcVar40 + 8);
                          *(undefined8 *)pcVar23 = uVar47;
                        }
                        pcVar40 = pcVar41 + 0x10;
                        uVar47 = *(undefined8 *)pcVar41;
                        uVar25 = uVar25 + 1;
                        pcVar23 = pcVar24 + 0x10;
                        *(undefined8 *)(pcVar24 + 8) = *(undefined8 *)(pcVar41 + 8);
                        *(undefined8 *)pcVar24 = uVar47;
                      }
                      pcVar41 = pcVar40 + 0x10;
                      uVar47 = *(undefined8 *)pcVar40;
                      uVar25 = uVar25 + 1;
                      pcVar24 = pcVar23 + 0x10;
                      *(undefined8 *)(pcVar23 + 8) = *(undefined8 *)(pcVar40 + 8);
                      *(undefined8 *)pcVar23 = uVar47;
                    }
                    pcVar40 = pcVar41 + 0x10;
                    uVar47 = *(undefined8 *)pcVar41;
                    uVar25 = uVar25 + 1;
                    pcVar23 = pcVar24 + 0x10;
                    *(undefined8 *)(pcVar24 + 8) = *(undefined8 *)(pcVar41 + 8);
                    *(undefined8 *)pcVar24 = uVar47;
                  }
                  uVar47 = *(undefined8 *)pcVar40;
                  uVar25 = uVar25 + 1;
                  *(undefined8 *)(pcVar23 + 8) = *(undefined8 *)(pcVar40 + 8);
                  *(undefined8 *)pcVar23 = uVar47;
                  pcVar23 = pcVar23 + 0x10;
                  pcVar40 = pcVar40 + 0x10;
                  if (uVar44 <= uVar25) goto LAB_001dae1c;
                }
                do {
                  uVar47 = *(undefined8 *)pcVar40;
                  uVar25 = uVar25 + 8;
                  *(undefined8 *)(pcVar23 + 8) = *(undefined8 *)(pcVar40 + 8);
                  *(undefined8 *)pcVar23 = uVar47;
                  uVar47 = *(undefined8 *)(pcVar40 + 0x10);
                  *(undefined8 *)(pcVar23 + 0x18) = *(undefined8 *)(pcVar40 + 0x18);
                  *(undefined8 *)(pcVar23 + 0x10) = uVar47;
                  uVar47 = *(undefined8 *)(pcVar40 + 0x20);
                  *(undefined8 *)(pcVar23 + 0x28) = *(undefined8 *)(pcVar40 + 0x28);
                  *(undefined8 *)(pcVar23 + 0x20) = uVar47;
                  uVar47 = *(undefined8 *)(pcVar40 + 0x30);
                  *(undefined8 *)(pcVar23 + 0x38) = *(undefined8 *)(pcVar40 + 0x38);
                  *(undefined8 *)(pcVar23 + 0x30) = uVar47;
                  uVar47 = *(undefined8 *)(pcVar40 + 0x40);
                  *(undefined8 *)(pcVar23 + 0x48) = *(undefined8 *)(pcVar40 + 0x48);
                  *(undefined8 *)(pcVar23 + 0x40) = uVar47;
                  uVar47 = *(undefined8 *)(pcVar40 + 0x50);
                  *(undefined8 *)(pcVar23 + 0x58) = *(undefined8 *)(pcVar40 + 0x58);
                  *(undefined8 *)(pcVar23 + 0x50) = uVar47;
                  uVar47 = *(undefined8 *)(pcVar40 + 0x60);
                  *(undefined8 *)(pcVar23 + 0x68) = *(undefined8 *)(pcVar40 + 0x68);
                  *(undefined8 *)(pcVar23 + 0x60) = uVar47;
                  uVar47 = *(undefined8 *)(pcVar40 + 0x70);
                  *(undefined8 *)(pcVar23 + 0x78) = *(undefined8 *)(pcVar40 + 0x78);
                  *(undefined8 *)(pcVar23 + 0x70) = uVar47;
                  pcVar23 = pcVar23 + 0x80;
                  pcVar40 = pcVar40 + 0x80;
                } while (uVar25 < uVar44);
              }
LAB_001dae1c:
              pcVar35 = pcVar35 + uVar16;
              pcVar26 = pcVar26 + uVar16;
              uVar45 = uVar45 + uVar16;
              if (uVar16 == uVar43 - uVar27) goto LAB_001d9d80;
            }
            *pcVar35 = *pcVar26;
            if ((((((uVar45 + 1 < uVar43) && (pcVar35[1] = pcVar26[1], uVar45 + 2 < uVar43)) &&
                  (pcVar35[2] = pcVar26[2], uVar45 + 3 < uVar43)) &&
                 ((pcVar35[3] = pcVar26[3], uVar45 + 4 < uVar43 &&
                  (pcVar35[4] = pcVar26[4], uVar45 + 5 < uVar43)))) &&
                ((pcVar35[5] = pcVar26[5], uVar45 + 6 < uVar43 &&
                 ((pcVar35[6] = pcVar26[6], uVar45 + 7 < uVar43 &&
                  (pcVar35[7] = pcVar26[7], uVar45 + 8 < uVar43)))))) &&
               ((pcVar35[8] = pcVar26[8], uVar45 + 9 < uVar43 &&
                ((((pcVar35[9] = pcVar26[9], uVar45 + 10 < uVar43 &&
                   (pcVar35[10] = pcVar26[10], uVar45 + 0xb < uVar43)) &&
                  (pcVar35[0xb] = pcVar26[0xb], uVar45 + 0xc < uVar43)) &&
                 ((pcVar35[0xc] = pcVar26[0xc], uVar45 + 0xd < uVar43 &&
                  (pcVar35[0xd] = pcVar26[0xd], uVar45 + 0xe < uVar43)))))))) {
              pcVar35[0xe] = pcVar26[0xe];
            }
            goto LAB_001d9d80;
          }
        }
        else if (uVar43 == 0x4b43) {
          *pcVar22 = '\0';
          if ((((((pcVar35[0x6df] == '\x01') && (pcVar35[0x6ef] == '\x01')) &&
                ((pcVar35[0x6ff] == '\x01' &&
                 (((pcVar35[0x70f] == '\x01' && (pcVar35[0x71f] == '\x01')) &&
                  (pcVar35[0x72f] == '\x01')))))) &&
               ((pcVar35[0x73f] == '\x01' && (pcVar35[0x74f] == '\x01')))) &&
              (pcVar35[0x75f] == '\x01')) &&
             (((pcVar35[0x76f] == '\x01' && (pcVar35[0x77f] == '\x01')) &&
              ((pcVar35[0x78f] == '\x01' &&
               ((((pcVar35[0x79f] == '\x01' && (pcVar35[0x7af] == '\x01')) &&
                 (pcVar35[0x7bf] == '\x01')) && (pcVar35[1999] == '\x01')))))))) goto LAB_001da21c;
          goto LAB_001da310;
        }
      }
      else {
        if (uVar43 == 0x5354) {
          pcVar34 = *(char **)(pcVar35 + 0x20);
          uVar43 = *(uint *)(pcVar35 + 0x28);
          goto LAB_001dab0c;
        }
        if (uVar43 == 0x5642) {
          *pcVar22 = pcVar35[0x44];
          if (((((((pcVar35[0x6e1] == '\0') && (pcVar35[0x6f1] == '\0')) && (pcVar35[0x701] == '\0')
                 ) && (((pcVar35[0x711] == '\0' && (pcVar35[0x721] == '\0')) &&
                       ((pcVar35[0x731] == '\0' &&
                        ((pcVar35[0x741] == '\0' && (pcVar35[0x751] == '\0')))))))) &&
               ((pcVar35[0x761] == '\0' &&
                (((pcVar35[0x771] == '\0' && (pcVar35[0x781] == '\0')) && (pcVar35[0x791] == '\0')))
                ))) && ((pcVar35[0x7a1] == '\0' && (pcVar35[0x7b1] == '\0')))) &&
             (pcVar35[0x7c1] == '\0')) {
            cVar11 = pcVar35[0x7d1];
            goto joined_r0x001da30c;
          }
          goto LAB_001da310;
        }
      }
    }
    goto switchD_001d9d6c_caseD_6;
  }
  if (*pcVar35 != '\x01') goto switchD_001d9d6c_caseD_6;
  switch(param_2) {
  case 5:
    goto switchD_001d9d6c_caseD_5;
  case 0x32:
    uVar20 = 0;
    pcVar35[0xcd5] = *(char *)param_4;
    pcVar35[0xcd6] = *(char *)((long)param_4 + 1);
    goto LAB_001d9d80;
  case 0x33:
    if ((!bVar18) && (bVar33 = *(byte *)param_4, bVar33 < 3)) {
      if (bVar33 == 0) {
        uVar20 = 0;
        *(uint *)((long)param_4 + 4) = (uint)(byte)pcVar35[0xccd];
        goto LAB_001d9d80;
      }
      bVar12 = *(byte *)((long)param_4 + 1);
      if (bVar12 < 0x10) {
        if (bVar33 == 2) {
          *(uint *)((long)param_4 + 4) = (uint)(byte)pcVar35[(long)(int)(uint)bVar12 * 0x10 + 0x6de]
          ;
          uVar20 = 0;
        }
        else {
          *(uint *)((long)param_4 + 4) = (uint)(byte)pcVar35[(long)(int)(uint)bVar12 * 0x10 + 0x6dd]
          ;
          uVar20 = 0;
        }
        goto LAB_001d9d80;
      }
    }
    goto LAB_001d9dc0;
  case 0x35:
    iVar19 = param_3 * 0x400;
    if (iVar19 == 0) {
      uVar20 = 0;
      *(int *)(pcVar35 + 0x50) = *(int *)(pcVar35 + 0x4c) + 1;
      goto LAB_001d9d80;
    }
    if (iVar19 <= *(int *)(pcVar35 + 0x4c)) {
      *(int *)(pcVar35 + 0x50) = iVar19;
      uVar20 = 0;
      goto LAB_001d9d80;
    }
    goto LAB_001d9df0;
  case 0x36:
    uVar37 = (ulong)param_3 & 0xf;
    bVar33 = pcVar35[uVar37 * 0x10 + 0x6dd];
    bVar12 = pcVar35[uVar37 * 0x10 + 0x6de];
    uVar17 = *(ushort *)(pcVar35 + uVar37 * 0x10 + 0x6e2);
    uVar14 = *(ushort *)(pcVar35 + uVar37 * 0x10 + 0x6e4);
    auStack_188[uVar37 * 6 + 2] = (uint)*(ushort *)(pcVar35 + uVar37 * 0x10 + 0x6d8);
    auStack_188[uVar37 * 6] = (uint)bVar33;
    auStack_188[uVar37 * 6 + 1] = (uint)bVar12;
    auStack_188[uVar37 * 6 + 3] = (uint)uVar17;
    auStack_188[uVar37 * 6 + 4] = (uint)uVar14;
    uVar20 = MaRmdCnv_ChannelMessage(a_Stack_190,param_3,param_4);
    if ((int)uVar20 == 0) {
      if ((param_3 & 0xf0) == 0xc0) {
        pcVar35[uVar37 * 0x10 + 0x6dc] = (byte)(param_3 >> 8) & 0x7f;
      }
      else {
        uVar27 = auStack_188[uVar37 * 6];
        uVar43 = auStack_188[uVar37 * 6 + 1];
        uVar45 = auStack_188[uVar37 * 6 + 3];
        uVar44 = auStack_188[uVar37 * 6 + 4];
        *(short *)(pcVar35 + uVar37 * 0x10 + 0x6d8) = (short)auStack_188[uVar37 * 6 + 2];
        pcVar35[uVar37 * 0x10 + 0x6dd] = (char)uVar27;
        pcVar35[uVar37 * 0x10 + 0x6de] = (char)uVar43;
        *(short *)(pcVar35 + uVar37 * 0x10 + 0x6e2) = (short)uVar45;
        *(short *)(pcVar35 + uVar37 * 0x10 + 0x6e4) = (short)uVar44;
      }
    }
    goto LAB_001d9d80;
  case 0x37:
    pcVar22 = (char *)**(undefined8 **)param_4;
    if ((pcVar22 == (char *)0x0) || (uVar27 = *(uint *)(*(undefined8 **)param_4 + 1), uVar27 == 0))
    {
      uVar20 = 0xfffffffe;
    }
    else if (*pcVar22 == -0x10) {
      uVar20 = 0xffffffe8;
      if (pcVar22[uVar27 - 1] == -9) {
        cVar11 = pcVar22[1];
        if (uVar27 - 1 < 2) {
LAB_001da52c:
          if (cVar11 == '~') {
            if (((pcVar22[2] == '\x7f') && (pcVar22[3] == '\t')) &&
               (((byte)(pcVar22[4] - 1U) < 3 && ((pcVar22[5] == -9 && (uVar27 == 6)))))) {
              *(undefined4 *)((long)param_4 + 0xc) = 0;
              *(undefined4 *)((long)param_4 + 0x10) = 0;
              *(undefined4 *)((long)param_4 + 8) = 0x1a;
              *(undefined8 *)((long)param_4 + 0x18) = 0;
              *(undefined4 *)((long)param_4 + 0x20) = 0;
              pcVar35[0xccd] = '\x7f';
              pcVar35[0xccc] = 'L';
              pcVar35[0xcce] = '@';
              uVar20 = 0;
              pcVar35[0xcd0] = '\0';
              pcVar35[0xcd1] = ' ';
              pcVar35[0xcd7] = '\0';
              pcVar35[0x6da] = '\0';
              pcVar35[0x6db] = 'y';
              pcVar35[0x6d8] = '\0';
              pcVar35[0x6d9] = 'y';
              pcVar35[0x6dc] = '\0';
              pcVar35[0x6dd] = 'd';
              pcVar35[0x6de] = '\x7f';
              pcVar35[0x6e2] = '\x7f';
              pcVar35[0x6e3] = '\x7f';
              pcVar35[0x6e4] = '\0';
              pcVar35[0x6e5] = ' ';
              pcVar35[0x6e6] = '\x02';
              pcVar35[0x6ea] = '\0';
              pcVar35[0x6eb] = 'y';
              pcVar35[0x6e8] = '\0';
              pcVar35[0x6e9] = 'y';
              pcVar35[0x6ec] = '\0';
              pcVar35[0x6ed] = 'd';
              pcVar35[0x6ee] = '\x7f';
              pcVar35[0x6f2] = '\x7f';
              pcVar35[0x6f3] = '\x7f';
              pcVar35[0x6f4] = '\0';
              pcVar35[0x6f5] = ' ';
              pcVar35[0x6f6] = '\x02';
              pcVar35[0x6fa] = '\0';
              pcVar35[0x6fb] = 'y';
              pcVar35[0x6f8] = '\0';
              pcVar35[0x6f9] = 'y';
              pcVar35[0x6fc] = '\0';
              pcVar35[0x6fd] = 'd';
              pcVar35[0x6fe] = '\x7f';
              pcVar35[0x702] = '\x7f';
              pcVar35[0x703] = '\x7f';
              pcVar35[0x704] = '\0';
              pcVar35[0x705] = ' ';
              pcVar35[0x706] = '\x02';
              pcVar35[0x70a] = '\0';
              pcVar35[0x70b] = 'y';
              pcVar35[0x708] = '\0';
              pcVar35[0x709] = 'y';
              pcVar35[0x70c] = '\0';
              pcVar35[0x70d] = 'd';
              pcVar35[0x70e] = '\x7f';
              pcVar35[0x712] = '\x7f';
              pcVar35[0x713] = '\x7f';
              pcVar35[0x714] = '\0';
              pcVar35[0x715] = ' ';
              pcVar35[0x716] = '\x02';
              pcVar35[0x71a] = '\0';
              pcVar35[0x71b] = 'y';
              pcVar35[0x718] = '\0';
              pcVar35[0x719] = 'y';
              pcVar35[0x71c] = '\0';
              pcVar35[0x71d] = 'd';
              pcVar35[0x71e] = '\x7f';
              pcVar35[0x722] = '\x7f';
              pcVar35[0x723] = '\x7f';
              pcVar35[0x724] = '\0';
              pcVar35[0x725] = ' ';
              pcVar35[0x726] = '\x02';
              pcVar35[0x72a] = '\0';
              pcVar35[0x72b] = 'y';
              pcVar35[0x728] = '\0';
              pcVar35[0x729] = 'y';
              pcVar35[0x72c] = '\0';
              pcVar35[0x72d] = 'd';
              pcVar35[0x72e] = '\x7f';
              pcVar35[0x732] = '\x7f';
              pcVar35[0x733] = '\x7f';
              pcVar35[0x734] = '\0';
              pcVar35[0x735] = ' ';
              pcVar35[0x736] = '\x02';
              pcVar35[0x73a] = '\0';
              pcVar35[0x73b] = 'y';
              pcVar35[0x738] = '\0';
              pcVar35[0x739] = 'y';
              pcVar35[0x73c] = '\0';
              pcVar35[0x73d] = 'd';
              pcVar35[0x73e] = '\x7f';
              pcVar35[0x742] = '\x7f';
              pcVar35[0x743] = '\x7f';
              pcVar35[0x744] = '\0';
              pcVar35[0x745] = ' ';
              pcVar35[0x746] = '\x02';
              pcVar35[0x74a] = '\0';
              pcVar35[0x74b] = 'y';
              pcVar35[0x748] = '\0';
              pcVar35[0x749] = 'y';
              pcVar35[0x74c] = '\0';
              pcVar35[0x74d] = 'd';
              pcVar35[0x74e] = '\x7f';
              pcVar35[0x752] = '\x7f';
              pcVar35[0x753] = '\x7f';
              pcVar35[0x754] = '\0';
              pcVar35[0x755] = ' ';
              pcVar35[0x756] = '\x02';
              pcVar35[0x75a] = '\0';
              pcVar35[0x75b] = 'y';
              pcVar35[0x758] = '\0';
              pcVar35[0x759] = 'y';
              pcVar35[0x75c] = '\0';
              pcVar35[0x75d] = 'd';
              pcVar35[0x75e] = '\x7f';
              pcVar35[0x762] = '\x7f';
              pcVar35[0x763] = '\x7f';
              pcVar35[0x764] = '\0';
              pcVar35[0x765] = ' ';
              pcVar35[0x766] = '\x02';
              pcVar35[0x76a] = '\0';
              pcVar35[0x76b] = 'x';
              pcVar35[0x768] = '\0';
              pcVar35[0x769] = 'x';
              pcVar35[0x76c] = '\0';
              pcVar35[0x76d] = 'd';
              pcVar35[0x76e] = '\x7f';
              pcVar35[0x772] = '\x7f';
              pcVar35[0x773] = '\x7f';
              pcVar35[0x774] = '\0';
              pcVar35[0x775] = ' ';
              pcVar35[0x776] = '\x02';
              pcVar35[0x77a] = '\0';
              pcVar35[0x77b] = 'y';
              pcVar35[0x778] = '\0';
              pcVar35[0x779] = 'y';
              pcVar35[0x77c] = '\0';
              pcVar35[0x77d] = 'd';
              pcVar35[0x77e] = '\x7f';
              pcVar35[0x782] = '\x7f';
              pcVar35[0x783] = '\x7f';
              pcVar35[0x784] = '\0';
              pcVar35[0x785] = ' ';
              pcVar35[0x786] = '\x02';
              pcVar35[0x78a] = '\0';
              pcVar35[0x78b] = 'y';
              pcVar35[0x788] = '\0';
              pcVar35[0x789] = 'y';
              pcVar35[0x78c] = '\0';
              pcVar35[0x78d] = 'd';
              pcVar35[0x78e] = '\x7f';
              pcVar35[0x792] = '\x7f';
              pcVar35[0x793] = '\x7f';
              pcVar35[0x794] = '\0';
              pcVar35[0x795] = ' ';
              pcVar35[0x796] = '\x02';
              pcVar35[0x79a] = '\0';
              pcVar35[0x79b] = 'y';
              pcVar35[0x798] = '\0';
              pcVar35[0x799] = 'y';
              pcVar35[0x79c] = '\0';
              pcVar35[0x79d] = 'd';
              pcVar35[0x79e] = '\x7f';
              pcVar35[0x7a2] = '\x7f';
              pcVar35[0x7a3] = '\x7f';
              pcVar35[0x7a4] = '\0';
              pcVar35[0x7a5] = ' ';
              pcVar35[0x7a6] = '\x02';
              pcVar35[0x7aa] = '\0';
              pcVar35[0x7ab] = 'y';
              pcVar35[0x7a8] = '\0';
              pcVar35[0x7a9] = 'y';
              pcVar35[0x7ac] = '\0';
              pcVar35[0x7ad] = 'd';
              pcVar35[0x7ae] = '\x7f';
              pcVar35[0x7b2] = '\x7f';
              pcVar35[0x7b3] = '\x7f';
              pcVar35[0x7b4] = '\0';
              pcVar35[0x7b5] = ' ';
              pcVar35[0x7b6] = '\x02';
              pcVar35[0x7ba] = '\0';
              pcVar35[0x7bb] = 'y';
              pcVar35[0x7b8] = '\0';
              pcVar35[0x7b9] = 'y';
              pcVar35[0x7bc] = '\0';
              pcVar35[0x7bd] = 'd';
              pcVar35[0x7be] = '\x7f';
              pcVar35[0x7c2] = '\x7f';
              pcVar35[0x7c3] = '\x7f';
              pcVar35[0x7c4] = '\0';
              pcVar35[0x7c5] = ' ';
              pcVar35[0x7c6] = '\x02';
              pcVar35[0x7ca] = '\0';
              pcVar35[0x7cb] = 'y';
              pcVar35[0x7c8] = '\0';
              pcVar35[0x7c9] = 'y';
              pcVar35[0x7cc] = '\0';
              pcVar35[0x7cd] = 'd';
              pcVar35[0x7ce] = '\x7f';
              pcVar35[0x7d2] = '\x7f';
              pcVar35[0x7d3] = '\x7f';
              pcVar35[0x7d4] = '\0';
              pcVar35[0x7d5] = ' ';
              pcVar35[0x7d6] = '\x02';
              goto LAB_001d9d80;
            }
          }
          else if (cVar11 == '\x7f') {
            cVar11 = pcVar22[4];
            if (cVar11 == '\x03') {
              if ((((pcVar22[2] == '\x7f') && (pcVar22[3] == '\x04')) && (-1 < pcVar22[5])) &&
                 (((-1 < pcVar22[6] && (pcVar22[7] == -9)) && (uVar27 == 8)))) {
                uVar17 = (ushort)(byte)pcVar22[5] + (ushort)(byte)pcVar22[6] * 0x80;
                uVar20 = 0;
                *(ushort *)(pcVar35 + 0xcd0) = uVar17;
                *(undefined4 *)((long)param_4 + 8) = 0x18;
                *(undefined4 *)((long)param_4 + 0xc) = 0;
                *(undefined4 *)((long)param_4 + 0x10) = 0;
                *(ulong *)((long)param_4 + 0x18) = (ulong)uVar17;
                *(undefined4 *)((long)param_4 + 0x20) = 0;
                goto LAB_001d9d80;
              }
            }
            else if (cVar11 == '\x04') {
              if (((pcVar22[2] == '\x7f') && (pcVar22[3] == '\x04')) &&
                 ((-1 < pcVar22[6] && ((pcVar22[7] == -9 && (uVar27 == 8)))))) {
                pcVar35[0xcce] = pcVar22[6];
                *(undefined4 *)((long)param_4 + 0xc) = 0;
                uVar20 = 0;
                *(undefined4 *)((long)param_4 + 8) = 0x17;
                *(undefined4 *)((long)param_4 + 0x10) = 0;
                *(ulong *)((long)param_4 + 0x18) = (ulong)(byte)pcVar35[0xcce];
                *(undefined4 *)((long)param_4 + 0x20) = 0;
                goto LAB_001d9d80;
              }
            }
            else if (((((cVar11 == '\x01') && (pcVar22[2] == '\x7f')) && (pcVar22[3] == '\x04')) &&
                     ((-1 < pcVar22[6] && (pcVar22[7] == -9)))) && (uVar27 == 8)) {
              pcVar35[0xccd] = pcVar22[6];
              *(undefined4 *)((long)param_4 + 0xc) = 0;
              uVar20 = 0;
              *(undefined4 *)((long)param_4 + 8) = 0x16;
              *(undefined4 *)((long)param_4 + 0x10) = 0;
              *(ulong *)((long)param_4 + 0x18) = (ulong)(byte)pcVar35[0xccd];
              *(undefined4 *)((long)param_4 + 0x20) = 0;
              goto LAB_001d9d80;
            }
          }
          else if (cVar11 == 'C') {
            uVar20 = 0;
            if (pcVar22[2] != 'y') goto LAB_001d9d80;
            if (pcVar22[3] == '\x06') {
              if ((pcVar22[4] == '\x7f') && (7 < uVar27)) {
                cVar11 = pcVar22[5];
                if (cVar11 != '\x03') {
                  if (cVar11 == '\x10') {
                    if (uVar27 == 8) {
                      *(undefined4 *)((long)param_4 + 0xc) = 0;
                      *(undefined4 *)((long)param_4 + 8) = 0x25;
                      uVar20 = 0;
                      *(undefined4 *)((long)param_4 + 0x10) = 0;
                      bVar33 = pcVar22[6];
                      *(undefined4 *)((long)param_4 + 0x20) = 0;
                      *(ulong *)((long)param_4 + 0x18) = (ulong)bVar33 & 0x7f;
                      goto LAB_001d9d80;
                    }
                  }
                  else if ((cVar11 == '\0') && (uVar27 == 8)) {
                    uVar20 = 0;
                    pcVar35[0xccc] = pcVar22[6] & 0x7f;
                    *(undefined4 *)((long)param_4 + 8) = 0x19;
                    *(undefined4 *)((long)param_4 + 0xc) = 0;
                    *(undefined4 *)((long)param_4 + 0x10) = 0;
                    *(ulong *)((long)param_4 + 0x18) = (ulong)(byte)pcVar35[0xccc];
                    *(undefined4 *)((long)param_4 + 0x20) = 0;
                    goto LAB_001d9d80;
                  }
                  goto LAB_001da544;
                }
                if (uVar27 < 10) goto LAB_001da7d0;
                uVar20 = 0xffffffe8;
                if ((byte)pcVar22[6] < 0x80) {
                  uVar20 = MaSndDrv_SetWtWave(param_1,(uint)(byte)pcVar22[6],1,
                                              (uchar *)(pcVar22 + 8),uVar27 - 9);
                }
                goto LAB_001da7d4;
              }
            }
            else if (((pcVar22[3] == '\b') && (pcVar22[4] == '\x7f')) && (7 < uVar27)) {
              if (pcVar22[5] != '!') goto LAB_001da544;
              if (0x20 < uVar27) {
                bVar33 = pcVar22[0xb];
                if (pcVar22[6] == '|') {
                  if ((byte)pcVar22[7] < 10) {
                    bVar12 = pcVar22[8];
                    uVar43 = (byte)pcVar22[7] + 1;
                    goto LAB_001da7ac;
                  }
                }
                else if (((pcVar22[6] == '}') && (pcVar22[7] == '\0')) && ((byte)pcVar22[8] < 10)) {
                  bVar12 = pcVar22[9];
                  uVar43 = (byte)pcVar22[8] + 0x81;
LAB_001da7ac:
                  uVar44 = (uint)bVar33;
                  uVar45 = (uint)bVar33;
                  if (uVar27 == 0x3a) {
                    uVar45 = uVar45 & 1;
                    if (((bVar33 & 1) == 0) && ((bVar33 >> 1 & 1) != 0)) {
                      pbVar39 = (byte *)(pcVar22 + 0x39);
                      pbVar28 = (byte *)(pcVar22 + 0xc);
LAB_001db4f8:
                      if (uVar45 < 0x27) {
                        bVar33 = *pbVar28;
                        if (pbVar39 <= pbVar28 + 1) goto LAB_001db5a8;
                        pbVar10 = pbVar28 + 8;
                        pbVar30 = pbVar28 + 1;
                        uVar27 = uVar45;
                        do {
                          pbVar42 = pbVar30 + 1;
                          bVar33 = bVar33 << 1;
                          uVar45 = uVar27 + 1;
                          (&DAT_005ddd00)[uVar27] = bVar33 & 0x80 | *pbVar30;
                          pbVar28 = pbVar39;
                          if (pbVar42 == pbVar39) break;
                          if (uVar45 == 0x27) goto LAB_001db5a8;
                          pbVar28 = pbVar10;
                          pbVar30 = pbVar42;
                          uVar27 = uVar45;
                        } while (pbVar42 != pbVar10);
                        goto LAB_001db4f8;
                      }
LAB_001db5a8:
                      uVar45 = 0x26;
                      uVar27 = (uint)DAT_005ddd00;
                      goto LAB_001db580;
                    }
                  }
                  else if (uVar27 < 0x3b) {
                    if (uVar27 == 0x28) {
                      uVar27 = uVar44 & 3;
                      if ((bVar33 & 3) == 0) {
                        pbVar39 = (byte *)(pcVar22 + 0x27);
                        pbVar28 = (byte *)(pcVar22 + 0xc);
LAB_001db484:
                        if (uVar27 < 0x17) {
                          bVar33 = *pbVar28;
                          if (pbVar39 <= pbVar28 + 1) goto LAB_001db55c;
                          pbVar10 = pbVar28 + 8;
                          pbVar30 = pbVar28 + 1;
                          uVar45 = uVar27;
                          do {
                            pbVar42 = pbVar30 + 1;
                            bVar33 = bVar33 << 1;
                            uVar27 = uVar45 + 1;
                            (&DAT_005ddd00)[uVar45] = bVar33 & 0x80 | *pbVar30;
                            pbVar28 = pbVar39;
                            if (pbVar42 == pbVar39) break;
                            if (uVar27 == 0x17) goto LAB_001db55c;
                            pbVar30 = pbVar42;
                            pbVar28 = pbVar10;
                            uVar45 = uVar27;
                          } while (pbVar42 != pbVar10);
                          goto LAB_001db484;
                        }
LAB_001db55c:
                        uVar45 = 0x16;
                        uVar27 = (uint)DAT_005ddd00;
                        goto LAB_001db580;
                      }
                    }
                    else if (uVar27 == 0x33) {
                      if (((bVar33 & 1) != 0) && ((uVar45 & 6) == 2)) {
                        pbVar39 = (byte *)(pcVar22 + 0x32);
                        uVar27 = 0;
                        pbVar28 = (byte *)(pcVar22 + 0xc);
LAB_001db848:
                        if (uVar27 < 0x21) {
                          bVar33 = *pbVar28;
                          if (pbVar39 <= pbVar28 + 1) goto LAB_001db8fc;
                          pbVar10 = pbVar28 + 8;
                          pbVar30 = pbVar28 + 1;
                          uVar45 = uVar27;
                          do {
                            pbVar42 = pbVar30 + 1;
                            bVar33 = bVar33 << 1;
                            uVar27 = uVar45 + 1;
                            (&DAT_005ddd00)[uVar45] = bVar33 & 0x80 | *pbVar30;
                            pbVar28 = pbVar39;
                            if (pbVar42 == pbVar39) break;
                            if (uVar27 == 0x21) goto LAB_001db8fc;
                            pbVar30 = pbVar42;
                            pbVar28 = pbVar10;
                            uVar45 = uVar27;
                          } while (pbVar42 != pbVar10);
                          goto LAB_001db848;
                        }
LAB_001db8fc:
                        uVar27 = (uint)CONCAT11(DAT_005ddd00,DAT_005ddd01);
                        if ((char)DAT_005ddd20 < '\0') {
                          uVar45 = DAT_005ddd20 & 0x7f;
                          if (0x1c < uVar45) goto LAB_001da7d0;
                        }
                        else {
                          uVar45 = DAT_005ddd20 | 0x80;
                        }
                        uVar36 = 0x1e;
                        goto LAB_001db620;
                      }
                    }
                    else if (((uVar27 == 0x21) && ((bVar33 & 1) != 0)) &&
                            (uVar45 = uVar45 & 6, (bVar33 & 6) == 0)) {
                      pbVar39 = (byte *)(pcVar22 + 0x20);
                      pbVar28 = (byte *)(pcVar22 + 0xc);
LAB_001db7cc:
                      if (uVar45 < 0x11) {
                        bVar33 = *pbVar28;
                        if (pbVar39 <= pbVar28 + 1) goto LAB_001db8ac;
                        pbVar10 = pbVar28 + 8;
                        pbVar30 = pbVar28 + 1;
                        uVar27 = uVar45;
                        do {
                          pbVar42 = pbVar30 + 1;
                          bVar33 = bVar33 << 1;
                          uVar45 = uVar27 + 1;
                          (&DAT_005ddd00)[uVar27] = bVar33 & 0x80 | *pbVar30;
                          pbVar28 = pbVar39;
                          if (pbVar42 == pbVar39) break;
                          if (uVar45 == 0x11) goto LAB_001db8ac;
                          pbVar28 = pbVar10;
                          pbVar30 = pbVar42;
                          uVar27 = uVar45;
                        } while (pbVar42 != pbVar10);
                        goto LAB_001db7cc;
                      }
LAB_001db8ac:
                      uVar27 = (uint)CONCAT11(DAT_005ddd00,DAT_005ddd01);
                      if ((char)DAT_005ddd10 < '\0') {
                        uVar45 = DAT_005ddd10 & 0x7f;
                        if (0x1c < uVar45) goto LAB_001da7d0;
                      }
                      else {
                        uVar45 = DAT_005ddd10 | 0x80;
                      }
                      uVar36 = 0xe;
LAB_001db620:
                      DAT_005ddd03 = DAT_005ddd03 & 0xef;
                      uVar20 = MaSndDrv_SetVoice(param_1,uVar43,bVar12 & 0x7f,uVar44,uVar27,uVar45,0
                                                 ,0,&DAT_005ddd02,uVar36);
                      goto LAB_001da7d4;
                    }
                  }
                  else if (uVar27 == 0x3f) {
                    uVar27 = uVar44 & 3;
                    if ((bVar33 & 3) == 0) {
                      pbVar39 = (byte *)(pcVar22 + 0x3e);
                      pbVar28 = (byte *)(pcVar22 + 0xc);
LAB_001db6c4:
                      if (uVar27 < 0x2b) {
                        bVar33 = *pbVar28;
                        if (pbVar39 <= pbVar28 + 1) goto LAB_001db9a0;
                        pbVar10 = pbVar28 + 8;
                        pbVar30 = pbVar28 + 1;
                        uVar45 = uVar27;
                        do {
                          pbVar42 = pbVar30 + 1;
                          bVar33 = bVar33 << 1;
                          uVar27 = uVar45 + 1;
                          (&DAT_005ddd00)[uVar45] = bVar33 & 0x80 | *pbVar30;
                          pbVar28 = pbVar39;
                          if (pbVar42 == pbVar39) break;
                          if (uVar27 == 0x2b) goto LAB_001db9a0;
                          pbVar28 = pbVar10;
                          pbVar30 = pbVar42;
                          uVar45 = uVar27;
                        } while (pbVar42 != pbVar10);
                        goto LAB_001db6c4;
                      }
LAB_001db9a0:
                      uVar45 = 0x2a;
                      uVar27 = (uint)DAT_005ddd00;
LAB_001db580:
                      DAT_005ddd02 = DAT_005ddd02 & 0xef;
                      uVar20 = MaSndDrv_SetVoice(param_1,uVar43,bVar12 & 0x7f,uVar44,uVar27,0,0,0,
                                                 &DAT_005ddd01,uVar45);
                      goto LAB_001da7d4;
                    }
                  }
                  else if (uVar27 == 0x51) {
                    uVar45 = uVar45 & 1;
                    if (((bVar33 & 1) == 0) && ((bVar33 >> 1 & 1) != 0)) {
                      pbVar39 = (byte *)(pcVar22 + 0x50);
                      pbVar28 = (byte *)(pcVar22 + 0xc);
LAB_001db654:
                      if (uVar45 < 0x3b) {
                        bVar33 = *pbVar28;
                        if (pbVar39 <= pbVar28 + 1) goto LAB_001db728;
                        pbVar10 = pbVar28 + 8;
                        pbVar30 = pbVar28 + 1;
                        uVar27 = uVar45;
                        do {
                          pbVar42 = pbVar30 + 1;
                          bVar33 = bVar33 << 1;
                          uVar45 = uVar27 + 1;
                          (&DAT_005ddd00)[uVar27] = bVar33 & 0x80 | *pbVar30;
                          pbVar28 = pbVar39;
                          if (pbVar42 == pbVar39) break;
                          if (uVar45 == 0x3b) goto LAB_001db728;
                          pbVar28 = pbVar10;
                          pbVar30 = pbVar42;
                          uVar27 = uVar45;
                        } while (pbVar42 != pbVar10);
                        goto LAB_001db654;
                      }
LAB_001db728:
                      uVar45 = 0x3a;
                      uVar27 = (uint)DAT_005ddd00;
                      goto LAB_001db580;
                    }
                  }
                  else if ((uVar27 == 0x3d) && ((uVar44 & 5) == 5)) {
                    pbVar39 = (byte *)(pcVar22 + 0x3c);
                    uVar27 = 0;
                    pbVar28 = (byte *)(pcVar22 + 0xc);
LAB_001db3f8:
                    if (uVar27 < 0x2a) {
                      bVar29 = *pbVar28;
                      if (pbVar39 <= pbVar28 + 1) goto LAB_001db5dc;
                      pbVar10 = pbVar28 + 8;
                      pbVar30 = pbVar28 + 1;
                      uVar45 = uVar27;
                      do {
                        pbVar42 = pbVar30 + 1;
                        bVar29 = bVar29 << 1;
                        uVar27 = uVar45 + 1;
                        (&DAT_005ddd00)[uVar45] = bVar29 & 0x80 | *pbVar30;
                        pbVar28 = pbVar39;
                        if (pbVar42 == pbVar39) break;
                        if (uVar27 == 0x2a) goto LAB_001db5dc;
                        pbVar28 = pbVar10;
                        pbVar30 = pbVar42;
                        uVar45 = uVar27;
                      } while (pbVar42 != pbVar10);
                      goto LAB_001db3f8;
                    }
LAB_001db5dc:
                    uVar27 = (uint)CONCAT11(DAT_005ddd00,DAT_005ddd01);
                    if ((char)DAT_005ddd29 < '\0') {
                      uVar45 = DAT_005ddd29 & 0x7f;
                      if (0x1c < uVar45) goto LAB_001da7d0;
                    }
                    else {
                      uVar45 = DAT_005ddd29 | 0x80;
                    }
                    if ((bVar33 >> 1 & 1) == 0) {
                      lVar21 = 0;
                      do {
                        lVar46 = lVar21 + 1;
                        (&DAT_005ddd10)[lVar21] = 0;
                        lVar21 = lVar46;
                      } while (lVar46 != 0x10);
                    }
                    uVar36 = 0x27;
                    goto LAB_001db620;
                  }
                }
              }
LAB_001da7d0:
              uVar20 = 0xffffffe8;
LAB_001da7d4:
              *(undefined4 *)((long)param_4 + 8) = 0x1b;
              *(undefined4 *)((long)param_4 + 0xc) = 0;
              *(undefined4 *)((long)param_4 + 0x10) = 0;
              *(undefined8 *)((long)param_4 + 0x18) = 0;
              *(undefined4 *)((long)param_4 + 0x20) = 0;
              if (-1 < (int)uVar20) goto LAB_001d9d80;
              goto LAB_001da544;
            }
LAB_001d9df0:
            uVar20 = 0;
            goto LAB_001d9d80;
          }
LAB_001da544:
          uVar20 = 0;
          *(undefined4 *)((long)param_4 + 0xc) = 0;
          *(undefined4 *)((long)param_4 + 8) = 0x1b;
          *(undefined4 *)((long)param_4 + 0x10) = 0;
          *(undefined8 *)((long)param_4 + 0x18) = 0;
          *(undefined4 *)((long)param_4 + 0x20) = 0;
          goto LAB_001d9d80;
        }
        if (-1 < cVar11) {
          uVar43 = uVar27 - 3;
          uVar20 = (ulong)uVar43 & 0xf;
          pcVar34 = pcVar22;
          if ((uVar43 & 0xf) == 0) goto LAB_001da480;
          pcVar34 = pcVar22 + 1;
          if (-1 < pcVar22[2]) {
            if (uVar20 == 1) goto LAB_001da480;
            if ((uVar20 == 2) ||
               (((uVar20 == 3 ||
                 (((uVar20 == 4 ||
                   (((uVar20 == 5 ||
                     (((uVar20 == 6 ||
                       (((uVar20 == 7 ||
                         (((uVar20 == 8 ||
                           (((uVar20 == 9 ||
                             (((uVar20 == 10 ||
                               (((uVar20 == 0xb ||
                                 (((uVar20 == 0xc ||
                                   (((uVar20 == 0xd ||
                                     (((uVar20 == 0xe || (pcVar34 = pcVar22 + 2, -1 < pcVar22[3]))
                                      && (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1,
                                         -1 < *pcVar26)))) &&
                                    (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26))))
                                  && (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26)))
                                 ) && (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26))
                               )) && (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26)))
                             ) && (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26))))
                          && (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26)))) &&
                        (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26)))) &&
                      (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26)))) &&
                    (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26)))) &&
                  (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26)))) &&
                (pcVar26 = pcVar34 + 2, pcVar34 = pcVar34 + 1, -1 < *pcVar26)))) {
              pcVar26 = pcVar34 + 2;
              pcVar34 = pcVar34 + 1;
              cVar15 = *pcVar26;
              while (-1 < cVar15) {
LAB_001da480:
                if (pcVar34 == pcVar22 + uVar43) goto LAB_001da52c;
                if ((((((pcVar34[2] < '\0') || (pcVar34[3] < '\0')) ||
                      ((pcVar34[4] < '\0' || ((pcVar34[5] < '\0' || (pcVar34[6] < '\0')))))) ||
                     (pcVar34[7] < '\0')) ||
                    (((((pcVar34[8] < '\0' || (pcVar34[9] < '\0')) || (pcVar34[10] < '\0')) ||
                      ((pcVar34[0xb] < '\0' || (pcVar34[0xc] < '\0')))) ||
                     ((pcVar34[0xd] < '\0' || ((pcVar34[0xe] < '\0' || (pcVar34[0xf] < '\0'))))))))
                   || (pcVar34[0x10] < '\0')) break;
                pcVar26 = pcVar34 + 0x11;
                pcVar34 = pcVar34 + 0x10;
                cVar15 = *pcVar26;
              }
            }
          }
          goto LAB_001da514;
        }
      }
    }
    else {
LAB_001da514:
      uVar20 = 0xffffffe8;
    }
    *(undefined4 *)((long)param_4 + 0xc) = 0;
    *(undefined4 *)((long)param_4 + 8) = 0x1b;
    *(undefined4 *)((long)param_4 + 0x10) = 0;
    *(undefined8 *)((long)param_4 + 0x18) = 0;
    *(undefined4 *)((long)param_4 + 0x20) = 0;
    goto LAB_001d9d80;
  case 0x40:
    if (pcVar35[0xcd3] != '\x01') {
      cVar11 = *(char *)((long)param_4 + 1);
      if (cVar11 == '\x06') {
        uVar27 = 2;
      }
      else if (cVar11 == '\a') {
        uVar27 = 4;
      }
      else {
        if (cVar11 != '\x01') goto LAB_001d9df0;
        uVar27 = 0;
      }
      uVar20 = MaSndDrv_SetWtWave(param_1,(uint)*(byte *)param_4,uVar27,
                                  *(uchar **)((long)param_4 + 8),*(uint *)((long)param_4 + 0x10));
      goto LAB_001d9d80;
    }
    break;
  case 0x41:
    if (pcVar35[0xcd3] != '\x01') {
      pbVar39 = *(byte **)param_4;
      bVar33 = pbVar39[2];
      uVar17 = (ushort)pbVar39[1] + (ushort)*pbVar39 * 0x100;
      uVar43 = (uint)(*pbVar39 == 0x78);
      lVar21 = (long)(int)uVar43;
      sVar13 = *(short *)(pcVar35 + lVar21 * 0x504 + 0x11da);
      uVar27 = (uint)bVar33;
      do {
        lVar38 = (long)(int)uVar27;
        lVar46 = lVar38 * 10 + lVar21 * 0x504;
        uVar14 = *(ushort *)(pcVar35 + lVar46 + 0xce0);
        if (uVar14 == 0xfffe) break;
        if (uVar14 == 0xffff) {
          lVar32 = lVar21 * 0x504;
          lVar46 = lVar38 * 10 + lVar32;
          *(ushort *)(pcVar35 + lVar46 + 0xcd8) = uVar17;
          if ((uVar17 & 0xff00) == 0x7800) {
            sVar31 = *(short *)(pcVar35 + lVar32 + 0x11d8);
            if (sVar31 == 0x80) break;
            *(short *)(pcVar35 + lVar46 + 0xcdc) = sVar31;
            *(short *)(pcVar35 + lVar32 + 0x11d8) = sVar31 + -1;
          }
          lVar32 = lVar21 * 0x504;
          lVar46 = lVar32 + lVar38 * 10;
          pcVar35[lVar46 + 0xcda] = bVar33;
          sVar31 = *(short *)(pcVar35 + lVar32 + 0x11da);
          pcVar35[lVar46 + 0xcde] = (char)sVar31;
          sVar31 = sVar31 + 1;
          *(short *)(pcVar35 + lVar32 + 0x11da) = sVar31;
          if (sVar31 == 0x80) {
            (pcVar35 + lVar46 + 0xce0)[0] = -2;
            (pcVar35 + lVar46 + 0xce0)[1] = -1;
            pbVar39 = *(byte **)param_4;
          }
          else {
            if (uVar27 == 0x7f) {
              sVar31 = 0;
            }
            else {
              sVar31 = (short)uVar27 + 1;
            }
            *(short *)(pcVar35 + lVar21 * 0x504 + lVar38 * 10 + 0xce0) = sVar31;
            pbVar39 = *(byte **)param_4;
          }
LAB_001d9f6c:
          pbVar39[9] = pbVar39[9] & 0xdf;
          if (uVar43 == 0) {
            lVar46 = *(long *)param_4;
            if ((*(byte *)(lVar46 + 3) == 0) && (*(byte *)(lVar46 + 4) == 0x7f)) {
              uVar27 = 1;
            }
            else {
              uVar27 = 3;
            }
            uVar20 = MaSndDrv_SetVoice(param_1,(uint)*(ushort *)(pcVar35 + lVar38 * 10 + 0xcdc),
                                       (uint)(byte)pcVar35[lVar38 * 10 + 0xcde],uVar27,
                                       (uint)*(byte *)(lVar46 + 7) +
                                       (uint)*(byte *)(lVar46 + 6) * 0x100,
                                       (uint)*(byte *)(lVar46 + 0x2f),(uint)*(byte *)(lVar46 + 3),
                                       (uint)*(byte *)(lVar46 + 4),(uchar *)(lVar46 + 8),
                                       *(uint *)((long)param_4 + 8));
            uVar37 = uVar20 & 0xffffffff;
            if (-1 < (int)uVar20) goto LAB_001d9d80;
          }
          else {
            bVar33 = *(byte *)(*(long *)param_4 + 3);
            bVar12 = *(byte *)(*(long *)param_4 + 4);
            uVar27 = (uint)bVar12;
            uVar43 = (uint)bVar33;
            if (bVar12 < bVar33) {
              uVar27 = (uint)bVar33;
              uVar43 = (uint)bVar12;
            }
            bVar18 = false;
            lVar46 = lVar21 * 0x504 + lVar38 * 10;
            if (uVar43 >> 7 == 0) {
              lVar32 = *(long *)param_4;
              iVar19 = MaSndDrv_SetVoice(param_1,(uint)*(ushort *)(pcVar35 + lVar46 + 0xcdc),uVar43,
                                         1,(uint)*(byte *)(lVar32 + 7) +
                                           (uint)*(byte *)(lVar32 + 6) * 0x100,
                                         (uint)*(byte *)(lVar32 + 0x2f),(uint)*(byte *)(lVar32 + 3),
                                         (uint)*(byte *)(lVar32 + 4),(uchar *)(lVar32 + 8),
                                         *(uint *)((long)param_4 + 8));
              bVar18 = iVar19 == 0;
            }
            uVar45 = uVar43 + 1;
            uVar44 = uVar45 & 0xff;
            if ((uVar45 & 0xff) <= uVar27) {
              if ((uVar27 - uVar43 & 1) == 0) goto LAB_001da674;
              while( true ) {
                uVar45 = uVar45 & 0xff;
                if (uVar45 >> 7 == 0) {
                  lVar32 = *(long *)param_4;
                  iVar19 = MaSndDrv_SetVoice(param_1,(uint)*(ushort *)(pcVar35 + lVar46 + 0xcdc),
                                             uVar45,1,(uint)*(byte *)(lVar32 + 7) +
                                                      (uint)*(byte *)(lVar32 + 6) * 0x100,
                                             (uint)*(byte *)(lVar32 + 0x2f),
                                             (uint)*(byte *)(lVar32 + 3),(uint)*(byte *)(lVar32 + 4)
                                             ,(uchar *)(lVar32 + 8),*(uint *)((long)param_4 + 8));
                  if (iVar19 == 0) {
                    bVar18 = true;
                  }
                }
                uVar44 = uVar45 + 1 & 0xff;
                if (uVar27 < uVar44) break;
LAB_001da674:
                if (uVar44 >> 7 == 0) {
                  lVar32 = *(long *)param_4;
                  iVar19 = MaSndDrv_SetVoice(param_1,(uint)*(ushort *)(pcVar35 + lVar46 + 0xcdc),
                                             uVar44,1,(uint)*(byte *)(lVar32 + 7) +
                                                      (uint)*(byte *)(lVar32 + 6) * 0x100,
                                             (uint)*(byte *)(lVar32 + 0x2f),
                                             (uint)*(byte *)(lVar32 + 3),(uint)*(byte *)(lVar32 + 4)
                                             ,(uchar *)(lVar32 + 8),*(uint *)((long)param_4 + 8));
                  if (iVar19 == 0) {
                    bVar18 = true;
                  }
                }
                uVar45 = uVar44 + 1;
              }
            }
            if (bVar18) goto LAB_001d9df0;
            uVar37 = 0xffffffff;
          }
          uVar20 = uVar37;
          lVar21 = lVar21 * 0x504;
          if (sVar13 != *(short *)(pcVar35 + lVar21 + 0x11da)) {
            *(short *)(pcVar35 + lVar21 + 0x11da) = *(short *)(pcVar35 + lVar21 + 0x11da) + -1;
            (pcVar35 + lVar21 + lVar38 * 10 + 0xce0)[0] = -1;
            (pcVar35 + lVar21 + lVar38 * 10 + 0xce0)[1] = -1;
          }
          goto LAB_001d9d80;
        }
        if ((*(ushort *)(pcVar35 + lVar46 + 0xcd8) == uVar17) &&
           ((uint)(byte)pcVar35[lVar46 + 0xcda] == (uint)bVar33)) goto LAB_001d9f6c;
        uVar27 = (uint)uVar14;
      } while (uVar27 != 0xfffe);
      uVar20 = 0xfffffffd;
      goto LAB_001d9d80;
    }
  }
switchD_001d9d6c_caseD_6:
  uVar20 = 0xffffffff;
LAB_001d9d80:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar20);
  }
  return;
}

