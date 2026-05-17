/* MaMmfCnv_Ctrl @ 000bcaa4 2394B */


/* YAMAHA::MaMmfCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

int YAMAHA::MaMmfCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  short sVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  short local_2a;
  byte *local_28;
  int local_24;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (iVar7 = *(int *)(param_1 + 4), iVar7 == 0)) {
    return -2;
  }
  if (param_2 == 0x35) {
    if (param_3 == 0) {
      *(int *)(iVar7 + 0xc34) = *(int *)(iVar7 + 0x1c);
      *(int *)(iVar7 + 0xc4c) = *(int *)(iVar7 + 0x1c) * *(int *)(iVar7 + 0x24);
      return 0;
    }
    if ((uint)(*(int *)(iVar7 + 0x1c) * *(int *)(iVar7 + 0x24)) < param_3) {
      return 0;
    }
    uVar2 = __udivsi3(param_3);
    *(uint *)(iVar7 + 0xc4c) = param_3;
    *(undefined4 *)(iVar7 + 0xc34) = uVar2;
    return 0;
  }
  if (0x35 < param_2) {
    if (param_2 == 0x100) {
      if ((param_3 < 0x400) &&
         (pbVar9 = *(byte **)(iVar7 + param_3 * 4 + 0xc54), pbVar9 != (byte *)0x0)) {
        *(uint *)param_4 = *pbVar9 & 0x7f;
        *(uint *)((int)param_4 + 0x10) =
             (pbVar9[2] & 0x7f) * 0x4000 + (pbVar9[1] & 0x7f) * 0x200000 + (pbVar9[4] & 0x7f) +
             (pbVar9[3] & 0x7f) * 0x80;
        *(uint *)((int)param_4 + 8) = ((pbVar9[5] & 0x7f) - 0x40) * 3;
        *(uint *)((int)param_4 + 0xc) = ((pbVar9[6] & 0x7f) - 0x40) * 3;
        *(uint *)((int)param_4 + 4) =
             (pbVar9[8] & 0x7f) * 0x4000 + (pbVar9[7] & 0x7f) * 0x200000 + (pbVar9[10] & 0x7f) +
             (pbVar9[9] & 0x7f) * 0x80;
        return 0;
      }
    }
    else if (param_2 == 0x101) {
      uVar4 = param_3 & 0xff;
      if (uVar4 < 0x20) {
        if (uVar4 < *(byte *)(iVar7 + 0x1ca0)) {
          *(uint *)param_4 = *(int *)(iVar7 + 0x1c9c) + uVar4 * 0x20;
          return 0;
        }
      }
      else if (((uVar4 - 0x40 & 0xff) < 0x20) && (uVar4 <= *(byte *)(iVar7 + 0x1cac) + 0x3f)) {
        *(uint *)param_4 = *(int *)(iVar7 + 0x1ca8) + (uVar4 - 0x40) * 0x20;
        return 0;
      }
    }
    else if (param_2 == 0x51) {
      if (param_4 == (void *)0x0) {
        return -2;
      }
      if (*(byte *)(iVar7 + 0x1c76) < 0x10) {
        *(uint *)param_4 = (uint)*(byte *)(iVar7 + 0x1c76);
        return 0;
      }
      return -0x19;
    }
    return -1;
  }
  if (param_2 == 10) {
    if (*(int *)(iVar7 + 0xc) == 0) {
      return -2;
    }
    local_28 = *(byte **)((int)param_4 + 4);
    if (local_28 == (byte *)0x0) {
      return -2;
    }
    local_24 = *(int *)((int)param_4 + 8);
    if (local_24 == 0) {
      return -2;
    }
    local_2a = *(short *)((int)param_4 + 2);
    local_3c = *(undefined4 *)(iVar7 + 0x2c);
    local_38 = *(undefined4 *)(iVar7 + 0x30);
    local_2c = *(undefined2 *)param_4;
    local_34 = *(undefined4 *)(iVar7 + 0x34);
    local_30 = *(undefined4 *)(iVar7 + 0x38);
    if (local_2a == 0x444c) {
      if (*(int *)(iVar7 + 0x1c) == 0) {
        return -1;
      }
      *local_28 = 0;
      iVar3 = iVar7 + 0x2190;
      if (((*(byte *)(iVar7 + 0x21a3) & 7) == 0) && ((*(byte *)(iVar7 + 0x21c3) & 7) == 0)) {
        iVar7 = 0x40;
        do {
          if ((((((*(byte *)(iVar3 + iVar7 + 0x13) & 7) != 0) ||
                ((*(byte *)(iVar3 + iVar7 + 0x20 + 0x13) & 7) != 0)) ||
               ((*(byte *)(iVar3 + iVar7 + 0x20 + 0x33) & 7) != 0)) ||
              (((*(byte *)(iVar3 + iVar7 + 0x73) & 7) != 0 ||
               ((*(byte *)(iVar3 + iVar7 + 0x93) & 7) != 0)))) ||
             (((((*(byte *)(iVar3 + iVar7 + 0xb3) & 7) != 0 ||
                (((*(byte *)(iVar3 + iVar7 + 0xd3) & 7) != 0 ||
                 ((*(byte *)(iVar3 + iVar7 + 0xf3) & 7) != 0)))) ||
               ((*(byte *)(iVar3 + iVar7 + 0x113) & 7) != 0)) ||
              ((*(byte *)(iVar7 + iVar3 + 0x133) & 7) != 0)))) goto LAB_000bcd3c;
          iVar7 = iVar7 + 0x140;
        } while (iVar7 != 0x400);
        goto LAB_000bcd42;
      }
    }
    else if (local_2a == 0x4256) {
      if (*(int *)(iVar7 + 0x1c) == 0) {
        return -1;
      }
      *local_28 = 0;
      if (((((((((*(char *)(iVar7 + 0x21a4) != '\x01') && (*(char *)(iVar7 + 0x21c4) != '\x01')) &&
               (*(char *)(iVar7 + 0x21e4) != '\x01')) &&
              (((*(char *)(iVar7 + 0x2204) != '\x01' && (*(char *)(iVar7 + 0x2224) != '\x01')) &&
               ((*(char *)(iVar7 + 0x2244) != '\x01' &&
                ((*(char *)(iVar7 + 0x2264) != '\x01' && (*(char *)(iVar7 + 0x2284) != '\x01')))))))
              ) && (*(char *)(iVar7 + 0x22a4) != '\x01')) &&
            (((*(char *)(iVar7 + 0x22c4) != '\x01' && (*(char *)(iVar7 + 0x22e4) != '\x01')) &&
             (*(char *)(iVar7 + 0x2304) != '\x01')))) &&
           (((*(char *)(iVar7 + 0x2324) != '\x01' && (*(char *)(iVar7 + 0x2344) != '\x01')) &&
            ((*(char *)(iVar7 + 0x2364) != '\x01' &&
             ((*(char *)(iVar7 + 0x2384) != '\x01' && (*(char *)(iVar7 + 0x23a4) != '\x01'))))))))
          && ((*(char *)(iVar7 + 0x23c4) != '\x01' &&
              (((((*(char *)(iVar7 + 0x23e4) != '\x01' && (*(char *)(iVar7 + 0x2404) != '\x01')) &&
                 (*(char *)(iVar7 + 0x2424) != '\x01')) &&
                ((*(char *)(iVar7 + 0x2444) != '\x01' && (*(char *)(iVar7 + 0x2464) != '\x01')))) &&
               ((*(char *)(iVar7 + 0x2484) != '\x01' &&
                ((*(char *)(iVar7 + 0x24a4) != '\x01' && (*(char *)(iVar7 + 0x24c4) != '\x01')))))))
              ))) &&
         ((*(char *)(iVar7 + 0x24e4) != '\x01' &&
          ((((*(char *)(iVar7 + 0x2504) != '\x01' && (*(char *)(iVar7 + 0x2524) != '\x01')) &&
            (*(char *)(iVar7 + 0x2544) != '\x01')) &&
           ((*(char *)(iVar7 + 0x2564) != '\x01' && (*(char *)(iVar7 + 0x2584) != '\x01'))))))))
      goto LAB_000bcd42;
    }
    else {
      if (local_2a == 0x434b) {
        if (*(int *)(iVar7 + 0x1c) == 0) {
          return -1;
        }
        iVar3 = *(int *)(iVar7 + 0x18);
        if (iVar3 == 1) {
          bVar1 = 1;
          if (((*(char *)(iVar7 + 0x21a5) != '\x02') && (*(char *)(iVar7 + 0x21c5) != '\x02')) &&
             (iVar3 = iVar7 + 0x21c0, *(char *)(iVar7 + 0x21e5) != '\x02')) {
LAB_000bd3a2:
            *local_28 = *(char *)(iVar3 + 0x45) == '\x02';
            goto LAB_000bcd42;
          }
LAB_000bcef6:
          *local_28 = bVar1;
        }
        else {
          if (iVar3 == 2) {
            if (((((*(char *)(iVar7 + 0x21a5) != '\x02') && (*(char *)(iVar7 + 0x21c5) != '\x02'))
                 && (*(char *)(iVar7 + 0x21e5) != '\x02')) &&
                ((*(char *)(iVar7 + 0x2205) != '\x02' && (*(char *)(iVar7 + 0x2225) != '\x02')))) &&
               (((*(char *)(iVar7 + 0x2245) != '\x02' &&
                 ((*(char *)(iVar7 + 0x2265) != '\x02' && (*(char *)(iVar7 + 0x2285) != '\x02'))))
                && ((*(char *)(iVar7 + 0x22a5) != '\x02' &&
                    (((((*(char *)(iVar7 + 0x22c5) != '\x02' &&
                        (*(char *)(iVar7 + 0x22e5) != '\x02')) &&
                       (*(char *)(iVar7 + 0x2305) != '\x02')) &&
                      ((*(char *)(iVar7 + 0x2325) != '\x02' && (*(char *)(iVar7 + 0x2345) != '\x02')
                       ))) && (iVar3 = iVar7 + 0x2340, *(char *)(iVar7 + 0x2365) != '\x02'))))))))
            goto LAB_000bd3a2;
          }
          else if (iVar3 == 3) {
            if ((((((int)((uint)*(byte *)(iVar7 + 0x21a5) << 0x1f) < 0) &&
                  ((int)((uint)*(byte *)(iVar7 + 0x21c5) << 0x1f) < 0)) &&
                 ((((int)((uint)*(byte *)(iVar7 + 0x21e5) << 0x1f) < 0 &&
                   ((((int)((uint)*(byte *)(iVar7 + 0x2205) << 0x1f) < 0 &&
                     ((int)((uint)*(byte *)(iVar7 + 0x2225) << 0x1f) < 0)) &&
                    ((int)((uint)*(byte *)(iVar7 + 0x2245) << 0x1f) < 0)))) &&
                  ((((int)((uint)*(byte *)(iVar7 + 0x2265) << 0x1f) < 0 &&
                    ((int)((uint)*(byte *)(iVar7 + 0x2285) << 0x1f) < 0)) &&
                   ((int)((uint)*(byte *)(iVar7 + 0x22a5) << 0x1f) < 0)))))) &&
                (((int)((uint)*(byte *)(iVar7 + 0x22c5) << 0x1f) < 0 &&
                 ((int)((uint)*(byte *)(iVar7 + 0x22e5) << 0x1f) < 0)))) &&
               (((int)((uint)*(byte *)(iVar7 + 0x2305) << 0x1f) < 0 &&
                ((((int)((uint)*(byte *)(iVar7 + 0x2325) << 0x1f) < 0 &&
                  ((int)((uint)*(byte *)(iVar7 + 0x2345) << 0x1f) < 0)) &&
                 ((int)((uint)*(byte *)(iVar7 + 0x2365) << 0x1f) < 0)))))) {
              *local_28 = (*(byte *)(iVar7 + 0x2385) ^ 1) & 1;
              goto LAB_000bcd42;
            }
          }
          else {
            if (iVar3 == 5) {
              bVar1 = 0x10;
            }
            else {
              bVar1 = 0x20;
            }
            if ((int)((uint)*(byte *)(iVar7 + 0x21a5) << 0x1f) < 0) {
              if (1 < bVar1) {
                if ((((-1 < (int)((uint)*(byte *)(iVar7 + 0x21c5) << 0x1f)) ||
                     (-1 < (int)((uint)*(byte *)(iVar7 + 0x21e5) << 0x1f))) ||
                    (((-1 < (int)((uint)*(byte *)(iVar7 + 0x2205) << 0x1f) ||
                      ((-1 < (int)((uint)*(byte *)(iVar7 + 0x2225) << 0x1f) ||
                       (-1 < (int)((uint)*(byte *)(iVar7 + 0x2245) << 0x1f))))) ||
                     (-1 < (int)((uint)*(byte *)(iVar7 + 0x2265) << 0x1f))))) ||
                   (-1 < (int)((uint)*(byte *)(iVar7 + 0x2285) << 0x1f))) goto LAB_000bd36e;
                bVar6 = 8;
                iVar7 = iVar7 + 0x2290;
                if (8 < bVar1) {
                  do {
                    if ((((((*(byte *)(iVar7 + 0x15) & 1) == 0) ||
                          ((*(byte *)(iVar7 + 0x35) & 1) == 0)) ||
                         ((*(byte *)(iVar7 + 0x55) & 1) == 0)) ||
                        (((*(byte *)(iVar7 + 0x75) & 1) == 0 ||
                         (bVar6 = bVar6 + 8, (*(byte *)(iVar7 + 0x95) & 1) == 0)))) ||
                       ((-1 < (int)((uint)*(byte *)(iVar7 + 0xb5) << 0x1f) ||
                        ((-1 < (int)((uint)*(byte *)(iVar7 + 0xd5) << 0x1f) ||
                         (pbVar9 = (byte *)(iVar7 + 0xf5), iVar7 = iVar7 + 0x100,
                         -1 < (int)((uint)*pbVar9 << 0x1f))))))) goto LAB_000bd36e;
                  } while (bVar6 < bVar1);
                }
              }
              bVar1 = 0;
              goto LAB_000bcef6;
            }
          }
LAB_000bd36e:
          *local_28 = 1;
        }
        goto LAB_000bcd42;
      }
      if (local_2a == 0x5648) {
        iVar3 = malib_GetContentsData((_MALIBGETCINFO *)&local_3c);
        if (iVar3 < 1) {
          if (*(char *)(iVar7 + 0x1c76) != '\x10') {
            **(undefined1 **)((int)param_4 + 4) = 0x10;
            *(undefined4 *)((int)param_4 + 0xc) = 1;
            return 0;
          }
          *(undefined4 *)((int)param_4 + 0xc) = 0;
          return -0x15;
        }
LAB_000bd250:
        *(int *)((int)param_4 + 0xc) = iVar3;
        return 0;
      }
      if (local_2a == 0x4433) {
        if (*(int *)(iVar7 + 0x1c) == 0) {
          return -1;
        }
        bVar1 = 0;
        puVar12 = (undefined1 *)(iVar7 + 0x1c77);
        cVar5 = '\0';
        do {
          puVar12 = puVar12 + 1;
          switch(*puVar12) {
          case 2:
            bVar1 = bVar1 | 1;
            break;
          case 3:
            bVar1 = bVar1 | 2;
            break;
          case 4:
            bVar1 = bVar1 | 4;
            break;
          case 5:
            bVar1 = bVar1 | 8;
          }
          cVar5 = cVar5 + '\x01';
        } while (cVar5 != ' ');
        *local_28 = bVar1;
        *(undefined4 *)((int)param_4 + 0xc) = 1;
        return 0;
      }
      if (local_2a != 0x5846) {
        iVar3 = malib_GetContentsData((_MALIBGETCINFO *)&local_3c);
        if (iVar3 < 1) {
          *(undefined4 *)((int)param_4 + 0xc) = 0;
          return iVar3;
        }
        goto LAB_000bd250;
      }
      if (*(int *)(iVar7 + 0x1c) == 0) {
        return -1;
      }
      *local_28 = 0;
      if ((*(int *)(iVar7 + 0x1c9c) == 0) && (*(int *)(iVar7 + 0x1ca8) == 0)) goto LAB_000bcd42;
    }
LAB_000bcd3c:
    *local_28 = 1;
LAB_000bcd42:
    *(undefined4 *)((int)param_4 + 0xc) = 1;
    return 0;
  }
  if (param_2 != 0xb) {
    if (param_2 != 5) {
      return -1;
    }
    *(int *)param_4 = *(int *)(iVar7 + 0x1c) * *(int *)(iVar7 + 0x24);
    return 0;
  }
  sVar8 = CONCAT11(*(undefined1 *)param_4,*(undefined1 *)((int)param_4 + 1));
  switch(sVar8) {
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
    sVar8 = sVar8 + 0x27;
  case 0x5061:
  case 0x5062:
  case 0x5063:
  case 0x5064:
  case 0x5065:
  case 0x5066:
    iVar11 = iVar7 + 0x27c + (uint)(ushort)(sVar8 + 0xafb0) * 0x10;
    iVar3 = *(int *)(iVar11 + 8);
    if (iVar3 == -1) goto switchD_000bcb46_caseD_503a;
    iVar11 = *(int *)(iVar11 + 0xc);
    break;
  default:
    goto switchD_000bcb46_caseD_503a;
  case 0x5041:
    iVar3 = *(int *)(iVar7 + 0x284);
    if (iVar3 == -1) goto switchD_000bcb46_caseD_503a;
    iVar11 = *(int *)(iVar7 + 0x288);
    break;
  case 0x5042:
    iVar3 = *(int *)(iVar7 + 0x294);
    if (iVar3 == -1) goto switchD_000bcb46_caseD_503a;
    iVar11 = *(int *)(iVar7 + 0x298);
    break;
  case 0x5045:
    iVar3 = *(int *)(iVar7 + 0x2a4);
    if (iVar3 == -1) goto switchD_000bcb46_caseD_503a;
    iVar11 = *(int *)(iVar7 + 0x2a8);
    break;
  case 0x5049:
    iVar3 = *(int *)(iVar7 + 0x2b4);
    if (iVar3 == -1) goto switchD_000bcb46_caseD_503a;
    iVar11 = *(int *)(iVar7 + 0x2b8);
    break;
  case 0x504b:
    iVar3 = *(int *)(iVar7 + 0x2c4);
    if (iVar3 == -1) goto switchD_000bcb46_caseD_503a;
    iVar11 = *(int *)(iVar7 + 0x2c8);
    break;
  case 0x5052:
    iVar3 = *(int *)(iVar7 + 0x2d4);
    if (iVar3 == -1) goto switchD_000bcb46_caseD_503a;
    iVar11 = *(int *)(iVar7 + 0x2d8);
    break;
  case 0x5053:
    iVar3 = *(int *)(iVar7 + 0x2e4);
    if (iVar3 == -1) goto switchD_000bcb46_caseD_503a;
    iVar11 = *(int *)(iVar7 + 0x2e8);
  }
  if (iVar11 != -1) {
    iVar10 = *(int *)(iVar7 + 0x20);
    iVar7 = *(int *)(iVar7 + 0x24);
    *(int *)((int)param_4 + 4) = iVar7 * (iVar3 - iVar10);
    *(int *)((int)param_4 + 8) = iVar7 * (iVar11 - iVar10);
    return 0;
  }
switchD_000bcb46_caseD_503a:
  *(undefined4 *)((int)param_4 + 4) = 0;
  *(undefined4 *)((int)param_4 + 8) = 0;
  return -0x15;
}

