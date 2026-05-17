/* MaMmfCnv_Ctrl @ 001f3910 3184B */


/* YAMAHA::MaMmfCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

void YAMAHA::MaMmfCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  byte *pbVar9;
  int iVar10;
  long lVar11;
  byte bVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  short local_1a;
  byte *local_18;
  int local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (lVar14 = *(long *)(param_1 + 8), lVar14 == 0)) {
LAB_001f42b4:
    uVar8 = 0xfffffffe;
    goto LAB_001f39cc;
  }
  if (param_2 == 0x35) {
    if (param_3 == 0) {
      uVar8 = 0;
      *(int *)(lVar14 + 0xe00) = *(int *)(lVar14 + 0x24);
      *(int *)(lVar14 + 0xe18) = *(int *)(lVar14 + 0x2c) * *(int *)(lVar14 + 0x24);
    }
    else {
      uVar3 = *(uint *)(lVar14 + 0x2c);
      uVar8 = 0;
      if (param_3 <= uVar3 * *(int *)(lVar14 + 0x24)) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = param_3 / uVar3;
        }
        *(uint *)(lVar14 + 0xe18) = param_3;
        *(uint *)(lVar14 + 0xe00) = uVar6;
      }
    }
    goto LAB_001f39cc;
  }
  if (0x35 < param_2) {
    if (param_2 == 0x100) {
      if ((param_3 < 0x400) &&
         (pbVar9 = *(byte **)(lVar14 + (ulong)param_3 * 8 + 0xe20), pbVar9 != (byte *)0x0)) {
        uVar8 = 0;
        *(uint *)param_4 = *pbVar9 & 0x7f;
        *(uint *)((long)param_4 + 0x10) =
             (pbVar9[1] & 0x7f) * 0x200000 + (pbVar9[2] & 0x7f) * 0x4000 + (pbVar9[4] & 0x7f) +
             (pbVar9[3] & 0x7f) * 0x80;
        *(uint *)((long)param_4 + 8) = ((pbVar9[5] & 0x7f) - 0x40) * 3;
        *(uint *)((long)param_4 + 0xc) = ((pbVar9[6] & 0x7f) - 0x40) * 3;
        *(uint *)((long)param_4 + 4) =
             (pbVar9[7] & 0x7f) * 0x200000 + (pbVar9[8] & 0x7f) * 0x4000 + (pbVar9[10] & 0x7f) +
             (pbVar9[9] & 0x7f) * 0x80;
        goto LAB_001f39cc;
      }
    }
    else if (param_2 == 0x101) {
      if ((param_3 & 0xff) < 0x20) {
        if ((param_3 & 0xff) < (uint)*(byte *)(lVar14 + 0x2e88)) {
          uVar8 = 0;
          *(long *)param_4 = *(long *)(lVar14 + 0x2e80) + (long)(int)((param_3 & 0xff) << 5);
          goto LAB_001f39cc;
        }
      }
      else if ((((param_3 & 0xff) - 0x40 & 0xff) < 0x20) &&
              ((int)((param_3 & 0xff) - 0x3f) <= (int)(uint)*(byte *)(lVar14 + 0x2ea0))) {
        uVar8 = 0;
        *(long *)param_4 =
             *(long *)(lVar14 + 0x2e98) + (long)(int)(((param_3 & 0xff) - 0x40) * 0x20);
        goto LAB_001f39cc;
      }
    }
    else if (param_2 == 0x51) {
      if (param_4 != (void *)0x0) {
        if (*(byte *)(lVar14 + 0x2e56) < 0x10) {
          *(uint *)param_4 = (uint)*(byte *)(lVar14 + 0x2e56);
          uVar8 = 0;
        }
        else {
          uVar8 = 0xffffffe7;
        }
        goto LAB_001f39cc;
      }
      goto LAB_001f42b4;
    }
LAB_001f395c:
    uVar8 = 0xffffffff;
    goto LAB_001f39cc;
  }
  if (param_2 == 10) {
    if (((*(long *)(lVar14 + 0x10) == 0) ||
        (pbVar9 = *(byte **)((long)param_4 + 8), pbVar9 == (byte *)0x0)) ||
       (iVar10 = *(int *)((long)param_4 + 0x10), iVar10 == 0)) goto LAB_001f42b4;
    local_1a = *(short *)((long)param_4 + 2);
    local_38 = *(undefined8 *)(lVar14 + 0x38);
    local_30 = *(undefined4 *)(lVar14 + 0x40);
    local_28 = *(undefined8 *)(lVar14 + 0x48);
    local_20 = *(undefined4 *)(lVar14 + 0x50);
    local_1c = *(undefined2 *)param_4;
    local_18 = pbVar9;
    local_10 = iVar10;
    if (local_1a == 0x444c) {
      if (*(int *)(lVar14 + 0x24) != 0) {
        *pbVar9 = 0;
        if ((((((*(byte *)(lVar14 + 0x358b) & 7) != 0) || ((*(byte *)(lVar14 + 0x35ab) & 7) != 0))
             || (((*(byte *)(lVar14 + 0x35cb) & 7) != 0 ||
                 (((*(byte *)(lVar14 + 0x35eb) & 7) != 0 || ((*(byte *)(lVar14 + 0x360b) & 7) != 0))
                 )))) ||
            ((((*(byte *)(lVar14 + 0x362b) & 7) != 0 ||
              (((((((*(byte *)(lVar14 + 0x364b) & 7) != 0 || ((*(byte *)(lVar14 + 0x366b) & 7) != 0)
                   ) || ((*(byte *)(lVar14 + 0x368b) & 7) != 0)) ||
                 (((*(byte *)(lVar14 + 0x36ab) & 7) != 0 || ((*(byte *)(lVar14 + 0x36cb) & 7) != 0))
                 )) || ((*(byte *)(lVar14 + 0x36eb) & 7) != 0)) ||
               (((*(byte *)(lVar14 + 0x370b) & 7) != 0 || ((*(byte *)(lVar14 + 0x372b) & 7) != 0))))
              )) || (((((*(byte *)(lVar14 + 0x374b) & 7) != 0 ||
                       ((((*(byte *)(lVar14 + 0x376b) & 7) != 0 ||
                         ((*(byte *)(lVar14 + 0x378b) & 7) != 0)) ||
                        ((*(byte *)(lVar14 + 0x37ab) & 7) != 0)))) ||
                      ((((*(byte *)(lVar14 + 0x37cb) & 7) != 0 ||
                        ((*(byte *)(lVar14 + 0x37eb) & 7) != 0)) ||
                       ((*(byte *)(lVar14 + 0x380b) & 7) != 0)))) ||
                     ((((*(byte *)(lVar14 + 0x382b) & 7) != 0 ||
                       ((*(byte *)(lVar14 + 0x384b) & 7) != 0)) ||
                      (((*(byte *)(lVar14 + 0x386b) & 7) != 0 ||
                       ((((*(byte *)(lVar14 + 0x388b) & 7) != 0 ||
                         ((*(byte *)(lVar14 + 0x38ab) & 7) != 0)) ||
                        ((*(byte *)(lVar14 + 0x38cb) & 7) != 0)))))))))))) ||
           ((((*(byte *)(lVar14 + 0x38eb) & 7) != 0 || ((*(byte *)(lVar14 + 0x390b) & 7) != 0)) ||
            (((*(byte *)(lVar14 + 0x392b) & 7) != 0 ||
             (((*(byte *)(lVar14 + 0x394b) & 7) != 0 || ((*(byte *)(lVar14 + 0x396b) & 7) != 0))))))
           )) {
LAB_001f3be8:
          *pbVar9 = 1;
        }
LAB_001f3bf4:
        uVar8 = 0;
        *(undefined4 *)((long)param_4 + 0x14) = 1;
        goto LAB_001f39cc;
      }
    }
    else if (local_1a == 0x4256) {
      if (*(int *)(lVar14 + 0x24) != 0) {
        *pbVar9 = 0;
        if ((((((*(char *)(lVar14 + 0x358c) == '\x01') || (*(char *)(lVar14 + 0x35ac) == '\x01')) ||
              (*(char *)(lVar14 + 0x35cc) == '\x01')) ||
             ((*(char *)(lVar14 + 0x35ec) == '\x01' || (*(char *)(lVar14 + 0x360c) == '\x01')))) ||
            ((((*(char *)(lVar14 + 0x362c) == '\x01' ||
               ((*(char *)(lVar14 + 0x364c) == '\x01' || (*(char *)(lVar14 + 0x366c) == '\x01'))))
              || (*(char *)(lVar14 + 0x368c) == '\x01')) ||
             ((((*(char *)(lVar14 + 0x36ac) == '\x01' || (*(char *)(lVar14 + 0x36cc) == '\x01')) ||
               (*(char *)(lVar14 + 0x36ec) == '\x01')) ||
              (((*(char *)(lVar14 + 0x370c) == '\x01' || (*(char *)(lVar14 + 0x372c) == '\x01')) ||
               ((*(char *)(lVar14 + 0x374c) == '\x01' ||
                ((*(char *)(lVar14 + 0x376c) == '\x01' || (*(char *)(lVar14 + 0x378c) == '\x01')))))
               ))))))) ||
           ((((*(char *)(lVar14 + 0x37ac) == '\x01' ||
              (((*(char *)(lVar14 + 0x37cc) == '\x01' || (*(char *)(lVar14 + 0x37ec) == '\x01')) ||
               (*(char *)(lVar14 + 0x380c) == '\x01')))) ||
             (((*(char *)(lVar14 + 0x382c) == '\x01' || (*(char *)(lVar14 + 0x384c) == '\x01')) ||
              ((*(char *)(lVar14 + 0x386c) == '\x01' ||
               ((*(char *)(lVar14 + 0x388c) == '\x01' || (*(char *)(lVar14 + 0x38ac) == '\x01'))))))
             )) || ((*(char *)(lVar14 + 0x38cc) == '\x01' ||
                    ((((*(char *)(lVar14 + 0x38ec) == '\x01' ||
                       (*(char *)(lVar14 + 0x390c) == '\x01')) ||
                      (*(char *)(lVar14 + 0x392c) == '\x01')) ||
                     ((*(char *)(lVar14 + 0x394c) == '\x01' ||
                      (*(char *)(lVar14 + 0x396c) == '\x01')))))))))) goto LAB_001f3be8;
        goto LAB_001f3bf4;
      }
    }
    else {
      if (local_1a == 0x434b) {
        if (*(int *)(lVar14 + 0x24) == 0) goto LAB_001f395c;
        iVar10 = *(int *)(lVar14 + 0x20);
        if (iVar10 == 1) {
          bVar7 = true;
          if (((*(char *)(lVar14 + 0x358d) != '\x02') && (*(char *)(lVar14 + 0x35ad) != '\x02')) &&
             (*(char *)(lVar14 + 0x35cd) != '\x02')) {
            bVar7 = *(char *)(lVar14 + 0x35ed) == '\x02';
          }
        }
        else if (iVar10 == 2) {
          if ((((((((*(char *)(lVar14 + 0x358d) == '\x02') || (*(char *)(lVar14 + 0x35ad) == '\x02')
                   ) || (*(char *)(lVar14 + 0x35cd) == '\x02')) ||
                 ((*(char *)(lVar14 + 0x35ed) == '\x02' || (*(char *)(lVar14 + 0x360d) == '\x02'))))
                || ((*(char *)(lVar14 + 0x362d) == '\x02' ||
                    ((*(char *)(lVar14 + 0x364d) == '\x02' || (*(char *)(lVar14 + 0x366d) == '\x02')
                     ))))) || (*(char *)(lVar14 + 0x368d) == '\x02')) ||
              ((((*(char *)(lVar14 + 0x36ad) == '\x02' || (*(char *)(lVar14 + 0x36cd) == '\x02')) ||
                (*(char *)(lVar14 + 0x36ed) == '\x02')) ||
               ((*(char *)(lVar14 + 0x370d) == '\x02' || (*(char *)(lVar14 + 0x372d) == '\x02'))))))
             || (*(char *)(lVar14 + 0x374d) == '\x02')) goto LAB_001f42e0;
          bVar7 = *(char *)(lVar14 + 0x376d) == '\x02';
        }
        else {
          if (iVar10 != 3) {
            if (iVar10 == 5) {
              if ((*(byte *)(lVar14 + 0x358d) & 1) != 0) {
                iVar10 = 0x10;
                goto LAB_001f3ca8;
              }
            }
            else if ((*(byte *)(lVar14 + 0x358d) & 1) != 0) {
              iVar10 = 0x20;
LAB_001f3ca8:
              if ((((((*(byte *)(lVar14 + 0x35ad) & 1) != 0) &&
                    ((*(byte *)(lVar14 + 0x35cd) & 1) != 0)) &&
                   (((*(byte *)(lVar14 + 0x35ed) & 1) != 0 &&
                    ((((((*(byte *)(lVar14 + 0x360d) & 1) != 0 &&
                        ((*(byte *)(lVar14 + 0x362d) & 1) != 0)) &&
                       ((*(byte *)(lVar14 + 0x364d) & 1) != 0)) &&
                      (((*(byte *)(lVar14 + 0x366d) & 1) != 0 &&
                       ((*(byte *)(lVar14 + 0x368d) & 1) != 0)))) &&
                     ((*(byte *)(lVar14 + 0x36ad) & 1) != 0)))))) &&
                  (((*(byte *)(lVar14 + 0x36cd) & 1) != 0 && ((*(byte *)(lVar14 + 0x36ed) & 1) != 0)
                   ))) && (((*(byte *)(lVar14 + 0x370d) & 1) != 0 &&
                           ((((*(byte *)(lVar14 + 0x372d) & 1) != 0 &&
                             ((*(byte *)(lVar14 + 0x374d) & 1) != 0)) &&
                            ((*(byte *)(lVar14 + 0x376d) & 1) != 0)))))) {
                if (iVar10 != 0x10) {
                  if ((*(byte *)(lVar14 + 0x378d) & 1) == 0) goto LAB_001f42e0;
                  if (iVar10 != 0x11) {
                    if ((*(byte *)(lVar14 + 0x37ad) & 1) == 0) goto LAB_001f42e0;
                    if (iVar10 != 0x12) {
                      if ((*(byte *)(lVar14 + 0x37cd) & 1) == 0) goto LAB_001f42e0;
                      if (iVar10 != 0x13) {
                        if ((*(byte *)(lVar14 + 0x37ed) & 1) == 0) goto LAB_001f42e0;
                        if (iVar10 != 0x14) {
                          if ((*(byte *)(lVar14 + 0x380d) & 1) == 0) goto LAB_001f42e0;
                          if (iVar10 != 0x15) {
                            if ((*(byte *)(lVar14 + 0x382d) & 1) == 0) goto LAB_001f42e0;
                            if (iVar10 != 0x16) {
                              if ((*(byte *)(lVar14 + 0x384d) & 1) == 0) goto LAB_001f42e0;
                              if (iVar10 != 0x17) {
                                if ((*(byte *)(lVar14 + 0x386d) & 1) == 0) goto LAB_001f42e0;
                                if (iVar10 != 0x18) {
                                  if ((*(byte *)(lVar14 + 0x388d) & 1) == 0) goto LAB_001f42e0;
                                  if (iVar10 != 0x19) {
                                    if ((*(byte *)(lVar14 + 0x38ad) & 1) == 0) goto LAB_001f42e0;
                                    if (iVar10 != 0x1a) {
                                      if ((*(byte *)(lVar14 + 0x38cd) & 1) == 0) goto LAB_001f42e0;
                                      if (iVar10 != 0x1b) {
                                        if ((*(byte *)(lVar14 + 0x38ed) & 1) == 0)
                                        goto LAB_001f42e0;
                                        if (iVar10 != 0x1c) {
                                          if ((*(byte *)(lVar14 + 0x390d) & 1) == 0)
                                          goto LAB_001f42e0;
                                          if (iVar10 != 0x1d) {
                                            if ((*(byte *)(lVar14 + 0x392d) & 1) == 0)
                                            goto LAB_001f42e0;
                                            if (iVar10 != 0x1e) {
                                              if ((*(byte *)(lVar14 + 0x394d) & 1) == 0)
                                              goto LAB_001f42e0;
                                              if (iVar10 == 0x20) {
                                                bVar7 = (bool)((*(byte *)(lVar14 + 0x396d) ^ 1) & 1)
                                                ;
                                                goto LAB_001f3e24;
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
                *pbVar9 = 0;
                goto LAB_001f3bf4;
              }
            }
LAB_001f42e0:
            *pbVar9 = 1;
            goto LAB_001f3bf4;
          }
          if ((((((*(byte *)(lVar14 + 0x358d) & 1) == 0) || ((*(byte *)(lVar14 + 0x35ad) & 1) == 0))
               || (((*(byte *)(lVar14 + 0x35cd) & 1) == 0 ||
                   (((*(byte *)(lVar14 + 0x35ed) & 1) == 0 ||
                    ((*(byte *)(lVar14 + 0x360d) & 1) == 0)))))) ||
              (((*(byte *)(lVar14 + 0x362d) & 1) == 0 ||
               (((((*(byte *)(lVar14 + 0x364d) & 1) == 0 || ((*(byte *)(lVar14 + 0x366d) & 1) == 0))
                 || ((*(byte *)(lVar14 + 0x368d) & 1) == 0)) ||
                (((*(byte *)(lVar14 + 0x36ad) & 1) == 0 || ((*(byte *)(lVar14 + 0x36cd) & 1) == 0)))
                ))))) ||
             ((((*(byte *)(lVar14 + 0x36ed) & 1) == 0 ||
               (((*(byte *)(lVar14 + 0x370d) & 1) == 0 || ((*(byte *)(lVar14 + 0x372d) & 1) == 0))))
              || ((*(byte *)(lVar14 + 0x374d) & 1) == 0)))) goto LAB_001f42e0;
          bVar7 = (bool)((*(byte *)(lVar14 + 0x376d) ^ 1) & 1);
        }
LAB_001f3e24:
        *pbVar9 = bVar7;
        goto LAB_001f3bf4;
      }
      if (local_1a == 0x5648) {
        uVar8 = malib_GetContentsData((_MALIBGETCINFO *)&local_38);
        if ((int)uVar8 < 1) {
          if (*(char *)(lVar14 + 0x2e56) == '\x10') {
            *(undefined4 *)((long)param_4 + 0x14) = 0;
            uVar8 = 0xffffffeb;
          }
          else {
            uVar8 = 0;
            **(undefined1 **)((long)param_4 + 8) = 0x10;
            *(undefined4 *)((long)param_4 + 0x14) = 1;
          }
          goto LAB_001f39cc;
        }
LAB_001f42d4:
        *(int *)((long)param_4 + 0x14) = (int)uVar8;
        uVar8 = 0;
        goto LAB_001f39cc;
      }
      if (local_1a == 0x4433) {
        if (*(int *)(lVar14 + 0x24) != 0) {
          puVar13 = (undefined1 *)(lVar14 + 0x2e58);
          bVar12 = 0;
          do {
            switch(*puVar13) {
            case 2:
              bVar12 = bVar12 | 1;
              break;
            case 3:
              bVar12 = bVar12 | 2;
              break;
            case 4:
              bVar12 = bVar12 | 4;
              break;
            case 5:
              bVar12 = bVar12 | 8;
            }
            puVar13 = puVar13 + 1;
          } while (puVar13 != (undefined1 *)(lVar14 + 0x2e78));
          *pbVar9 = bVar12;
          uVar8 = 0;
          *(undefined4 *)((long)param_4 + 0x14) = 1;
          goto LAB_001f39cc;
        }
      }
      else {
        if (local_1a != 0x5846) {
          uVar8 = malib_GetContentsData((_MALIBGETCINFO *)&local_38);
          if ((int)uVar8 < 1) {
            *(undefined4 *)((long)param_4 + 0x14) = 0;
            goto LAB_001f39cc;
          }
          goto LAB_001f42d4;
        }
        if (*(int *)(lVar14 + 0x24) != 0) {
          *pbVar9 = 0;
          if ((*(long *)(lVar14 + 0x2e80) != 0) || (*(long *)(lVar14 + 0x2e98) != 0))
          goto LAB_001f3be8;
          goto LAB_001f3bf4;
        }
      }
    }
    goto LAB_001f395c;
  }
  if (param_2 != 0xb) {
    if (param_2 == 5) {
      uVar8 = 0;
      *(int *)param_4 = *(int *)(lVar14 + 0x2c) * *(int *)(lVar14 + 0x24);
      goto LAB_001f39cc;
    }
    goto LAB_001f395c;
  }
  sVar1 = (ushort)*(byte *)param_4 * 0x100 + (ushort)*(byte *)((long)param_4 + 1);
  switch(sVar1) {
  case 0x5030:
  case 0x5031:
  case 0x5032:
  case 0x5033:
  case 0x5034:
  case 0x5035:
  case 0x5036:
  case 0x5037:
  case 0x5038:
  case 0x5039:
    sVar1 = sVar1 + 0x27;
  case 0x5061:
  case 0x5062:
  case 0x5063:
  case 0x5064:
  case 0x5065:
  case 0x5066:
    lVar11 = (ulong)(ushort)(sVar1 + 0xafb0) * 0x10;
    lVar2 = lVar14 + 0x418 + lVar11;
    if ((*(int *)(lVar2 + 8) != -1) && (*(int *)(lVar2 + 0xc) != -1)) {
LAB_001f3e5c:
      lVar11 = lVar14 + 0x418 + lVar11;
      iVar10 = *(int *)(lVar14 + 0x28);
      iVar4 = *(int *)(lVar14 + 0x2c);
      uVar8 = 0;
      iVar5 = *(int *)(lVar11 + 0xc);
      *(int *)((long)param_4 + 4) = (*(int *)(lVar11 + 8) - iVar10) * iVar4;
      *(int *)((long)param_4 + 8) = (iVar5 - iVar10) * iVar4;
      goto LAB_001f39cc;
    }
    break;
  case 0x5041:
    if ((*(int *)(lVar14 + 0x420) == -1) || (*(int *)(lVar14 + 0x424) == -1)) break;
    lVar11 = 0;
    goto LAB_001f3e5c;
  case 0x5042:
    if ((*(int *)(lVar14 + 0x430) != -1) && (*(int *)(lVar14 + 0x434) != -1)) {
      lVar11 = 0x10;
      goto LAB_001f3e5c;
    }
    break;
  case 0x5045:
    if ((*(int *)(lVar14 + 0x440) != -1) && (*(int *)(lVar14 + 0x444) != -1)) {
      lVar11 = 0x20;
      goto LAB_001f3e5c;
    }
    break;
  case 0x5049:
    if ((*(int *)(lVar14 + 0x450) != -1) && (*(int *)(lVar14 + 0x454) != -1)) {
      lVar11 = 0x30;
      goto LAB_001f3e5c;
    }
    break;
  case 0x504b:
    if ((*(int *)(lVar14 + 0x460) != -1) && (*(int *)(lVar14 + 0x464) != -1)) {
      lVar11 = 0x40;
      goto LAB_001f3e5c;
    }
    break;
  case 0x5052:
    if ((*(int *)(lVar14 + 0x470) != -1) && (*(int *)(lVar14 + 0x474) != -1)) {
      lVar11 = 0x50;
      goto LAB_001f3e5c;
    }
    break;
  case 0x5053:
    if ((*(int *)(lVar14 + 0x480) != -1) && (*(int *)(lVar14 + 0x484) != -1)) {
      lVar11 = 0x60;
      goto LAB_001f3e5c;
    }
  }
  *(undefined4 *)((long)param_4 + 4) = 0;
  uVar8 = 0xffffffeb;
  *(undefined4 *)((long)param_4 + 8) = 0;
LAB_001f39cc:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

