/* malib_GetContentsData @ 001b950c 1380B */


/* YAMAHA::malib_GetContentsData(_MALIBGETCINFO*) */

void YAMAHA::malib_GetContentsData(_MALIBGETCINFO *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  bool bVar13;
  ushort uVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  uint local_10;
  uint local_c;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  puVar11 = *(undefined1 **)(param_1 + 0x20);
  if (((puVar11 == (undefined1 *)0x0) || (*(int *)(param_1 + 0x28) == 0)) ||
     (puVar12 = *(undefined1 **)param_1, puVar12 == (undefined1 *)0x0)) {
    uVar10 = 0xfffffffe;
  }
  else {
    switch((uint)(byte)param_1[0x1e] * 0x100 + (uint)(byte)param_1[0x1f]) {
    case 0x4330:
      uVar10 = 1;
      *puVar11 = *puVar12;
      break;
    case 0x4331:
      uVar10 = 1;
      *puVar11 = puVar12[1];
      break;
    case 0x4332:
      uVar10 = 1;
      *puVar11 = puVar12[3];
      break;
    case 0x4333:
      uVar10 = 1;
      *puVar11 = puVar12[4];
      break;
    default:
      if ((byte)puVar12[1] < 0x30) {
        puVar11 = puVar12 + 5;
        uVar17 = *(int *)(param_1 + 8) - 5;
        if ((3 < uVar17) &&
           (uVar15 = (uint)(puVar11 == (undefined1 *)0x0), puVar11 != (undefined1 *)0x0)) {
          uVar14 = (ushort)(byte)puVar12[2];
          if ((*(ushort *)(param_1 + 0x1c) == 0xff) || (*(ushort *)(param_1 + 0x1c) == uVar14)) {
            while (uVar15 + 4 <= uVar17) {
              bVar9 = false;
              if ((*(_MALIBGETCINFO *)(puVar11 + uVar15) == param_1[0x1e]) &&
                 (*(_MALIBGETCINFO *)(puVar11 + (uVar15 + 1)) == param_1[0x1f])) {
                if ((ushort)(*(short *)(param_1 + 0x1e) + 0xcdb4U) < 2) {
                  uVar10 = 1;
                  **(undefined1 **)(param_1 + 0x20) = puVar11[uVar15 + 3];
                  goto LAB_001b967c;
                }
                bVar9 = true;
              }
              uVar10 = 0;
              cVar16 = '\0';
              bVar13 = false;
              uVar15 = uVar15 + 3;
              while ((uVar19 = uVar15 + 1, uVar19 <= uVar17 && (!bVar13))) {
                cVar8 = puVar11[uVar15];
                uVar15 = uVar19;
                if (cVar16 == '\0') {
                  if (cVar8 == ',') {
                    if (bVar9) goto LAB_001b967c;
                    bVar13 = true;
                  }
                  else if (cVar8 == '\\') {
                    bVar13 = false;
                    cVar16 = puVar11[uVar19] == ',' || puVar11[uVar19] == '\\';
                  }
                  else {
                    if (uVar14 == 0) {
                      if (((byte)(cVar8 + 0x20U) < 0x1d) || ((byte)(cVar8 + 0x7fU) < 0x1f)) {
                        cVar16 = '\x02';
                      }
LAB_001b9638:
                      if (bVar9) goto LAB_001b9714;
                      goto LAB_001b963c;
                    }
                    if (uVar14 == 0x23) {
                      cVar16 = '\0';
                      if ((byte)(cVar8 + 0x40U) < 0x20) {
                        cVar16 = '\x02';
                      }
                      if ((byte)(cVar8 + 0x20U) < 0x1d) {
                        cVar16 = '\x03';
                        goto LAB_001b9710;
                      }
                      goto LAB_001b9638;
                    }
                    if (!bVar9) goto LAB_001b9650;
                    *(char *)(*(long *)(param_1 + 0x20) + (long)(int)uVar10) = cVar8;
                    uVar10 = uVar10 + 1;
                    if (*(uint *)(param_1 + 0x28) == uVar10) goto LAB_001b967c;
                    bVar13 = false;
                  }
                }
                else {
LAB_001b9710:
                  if (bVar9) {
LAB_001b9714:
                    *(char *)(*(long *)(param_1 + 0x20) + (long)(int)uVar10) = cVar8;
                    uVar10 = uVar10 + 1;
                    if (*(uint *)(param_1 + 0x28) == uVar10) goto LAB_001b967c;
LAB_001b963c:
                    if (cVar16 == '\0') goto LAB_001b9650;
                  }
                  cVar16 = cVar16 + -1;
LAB_001b9650:
                  bVar13 = false;
                }
              }
            }
          }
        }
      }
      else {
        lVar20 = *(long *)(param_1 + 0x10);
        uVar10 = *(uint *)(param_1 + 0x18);
        if ((lVar20 != 0) && (0xb < uVar10)) {
          lVar18 = 0;
          uVar19 = 0;
          uVar17 = 8;
          uVar15 = 0;
          do {
            uVar15 = malib_NextChunk((uchar *)(lVar20 + (ulong)uVar15),uVar10 - uVar15,5,&local_10,
                                     &local_c);
            if ((int)uVar15 < 0) goto LAB_001b9848;
            if ((local_10 == 0x20) && (*(ushort *)(param_1 + 0x1c) == local_c)) {
              lVar18 = lVar20 + (ulong)uVar17;
              uVar19 = uVar15;
            }
            uVar15 = uVar15 + uVar17;
            uVar17 = uVar15 + 8;
          } while (uVar17 < uVar10);
          if ((3 < uVar19) && (lVar18 != 0)) {
            puVar11 = (undefined1 *)0x0;
            uVar10 = 0;
            uVar17 = (uint)(lVar18 == 0);
            while (uVar15 = uVar17, uVar15 + 4 <= uVar19) {
              uVar7 = (uint)*(byte *)(lVar18 + (ulong)(uVar15 + 3)) +
                      (uint)*(byte *)(lVar18 + (ulong)(uVar15 + 2)) * 0x100;
              uVar17 = uVar7 + 4 + uVar15;
              if (uVar19 < uVar17) goto LAB_001b9848;
              if ((*(_MALIBGETCINFO *)(lVar18 + (ulong)uVar15) == param_1[0x1e]) &&
                 (*(_MALIBGETCINFO *)(lVar18 + (ulong)(uVar15 + 1)) == param_1[0x1f])) {
                puVar11 = (undefined1 *)(lVar18 + (ulong)(uVar15 + 4));
                uVar10 = uVar7;
              }
            }
            if (puVar11 != (undefined1 *)0x0) {
              if (*(uint *)(param_1 + 0x28) < uVar10) {
                uVar10 = *(uint *)(param_1 + 0x28);
              }
              if (uVar10 != 0) {
                lVar20 = 1;
                **(undefined1 **)(param_1 + 0x20) = *puVar11;
                uVar17 = uVar10 - 1 & 7;
                if (1 < uVar10) {
                  if (uVar17 != 0) {
                    if (uVar17 != 1) {
                      if (uVar17 != 2) {
                        if (uVar17 != 3) {
                          if (uVar17 != 4) {
                            if (uVar17 != 5) {
                              if (uVar17 != 6) {
                                *(undefined1 *)(*(long *)(param_1 + 0x20) + 1) = puVar11[1];
                                lVar20 = 2;
                              }
                              *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar20) = puVar11[lVar20];
                              lVar20 = lVar20 + 1;
                            }
                            *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar20) = puVar11[lVar20];
                            lVar20 = lVar20 + 1;
                          }
                          *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar20) = puVar11[lVar20];
                          lVar20 = lVar20 + 1;
                        }
                        *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar20) = puVar11[lVar20];
                        lVar20 = lVar20 + 1;
                      }
                      *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar20) = puVar11[lVar20];
                      lVar20 = lVar20 + 1;
                    }
                    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar20) = puVar11[lVar20];
                    lVar20 = lVar20 + 1;
                    if (uVar10 <= (uint)lVar20) break;
                  }
                  do {
                    lVar18 = lVar20 + 1;
                    lVar1 = lVar20 + 2;
                    lVar2 = lVar20 + 3;
                    lVar3 = lVar20 + 4;
                    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar20) = puVar11[lVar20];
                    lVar4 = lVar20 + 5;
                    lVar5 = lVar20 + 6;
                    lVar6 = lVar20 + 7;
                    lVar20 = lVar20 + 8;
                    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar18) = puVar11[lVar18];
                    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar1) = puVar11[lVar1];
                    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar2) = puVar11[lVar2];
                    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar3) = puVar11[lVar3];
                    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar4) = puVar11[lVar4];
                    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar5) = puVar11[lVar5];
                    *(undefined1 *)(*(long *)(param_1 + 0x20) + lVar6) = puVar11[lVar6];
                  } while ((uint)lVar20 < uVar10);
                }
              }
              break;
            }
          }
        }
      }
      uVar10 = 0xffffffeb;
    }
  }
LAB_001b967c:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
LAB_001b9848:
  uVar10 = 0xffffffff;
  goto LAB_001b967c;
}

