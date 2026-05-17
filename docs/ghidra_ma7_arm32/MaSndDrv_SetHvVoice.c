/* MaSndDrv_SetHvVoice @ 0007bfe0 1102B */


/* YAMAHA::MaSndDrv_SetHvVoice(_MACNV_SEQ_INFO*, unsigned int, unsigned char const*, unsigned int)
    */

undefined4
YAMAHA::MaSndDrv_SetHvVoice(_MACNV_SEQ_INFO *param_1,uint param_2,uchar *param_3,uint param_4)

{
  int *piVar1;
  byte bVar2;
  uchar *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  int local_60 [17];
  
  uVar8 = (uint)*(byte *)(DAT_0007c430 + 0x7bffe +
                         ((*(uint *)param_1 & 0xffff) >> 8) * 4 + (*(uint *)param_1 & 0xff));
  if ((*(char *)(uVar8 * 0x228 + DAT_0007c434 + 0x7c0df) != -1) && (param_3 != (uchar *)0x0)) {
    bVar11 = 0xfe < param_2;
    if (param_2 != 0xff) {
      bVar11 = 0xe < param_2;
    }
    if ((((!bVar11 || (param_2 == 0xff || param_2 == 0xf)) &&
         (uVar5 = (uint)param_3[5] * 0x10000 + (uint)param_3[4] * 0x1000000 + (uint)param_3[7] +
                  (uint)param_3[6] * 0x100,
         (uint)param_3[1] * 0x10000 + (uint)*param_3 * 0x1000000 + (uint)param_3[3] +
         (uint)param_3[2] * 0x100 == 0x48565000)) && (uVar5 + 8 == param_4)) && (0x2f < uVar5)) {
      puVar3 = param_3 + 8;
      do {
        uVar9 = puVar3[7] + 8 + (uint)puVar3[4] * 0x1000000 + (uint)puVar3[5] * 0x10000 +
                (uint)puVar3[6] * 0x100;
        puVar3 = puVar3 + uVar9;
        uVar6 = uVar5 - uVar9;
        if (uVar5 < uVar9) {
          return 0xffffffff;
        }
        uVar5 = uVar6;
      } while (8 < uVar6);
      if (((uVar6 == 0) &&
          (uVar5 = (uint)param_3[0xf] +
                   (uint)param_3[0xd] * 0x10000 + (uint)param_3[0xc] * 0x1000000 +
                   (uint)param_3[0xe] * 0x100,
          (uint)param_3[0xb] + (uint)param_3[9] * 0x10000 + (uint)param_3[8] * 0x1000000 +
          (uint)param_3[10] * 0x100 == 0x48564400)) &&
         ((0x2f < uVar5 && (uVar5 == (uVar5 / 0x30) * 0x30)))) {
        memset(local_60,0,0x40);
        pbVar4 = param_3 + 0x10;
        uVar6 = 0;
        while (((((uVar9 = (uint)*pbVar4, uVar9 < 0x10 && (pbVar4[2] < 2)) &&
                 (((-1 < (char)pbVar4[3] &&
                   (((-1 < (char)pbVar4[4] && (-1 < (char)pbVar4[5])) && (-1 < (char)pbVar4[6]))))
                  && (((-1 < (char)pbVar4[7] && (-1 < (char)pbVar4[8])) && (-1 < (char)pbVar4[9]))))
                 )) && (((-1 < (char)pbVar4[10] && (-1 < (char)pbVar4[0xb])) &&
                        ((-1 < (char)pbVar4[0xc] &&
                         (((-1 < (char)pbVar4[0xd] && (-1 < (char)pbVar4[0xe])) &&
                          (-1 < (char)pbVar4[0xf])))))))) &&
               ((((-1 < (char)pbVar4[0x10] && (-1 < (char)pbVar4[0x11])) &&
                 ((-1 < (char)pbVar4[0x12] &&
                  (((((-1 < (char)pbVar4[0x13] && (-1 < (char)pbVar4[0x14])) &&
                     ((-1 < (char)pbVar4[0x15] &&
                      (((((-1 < (char)pbVar4[0x16] && (-1 < (char)pbVar4[0x17])) &&
                         (-1 < (char)pbVar4[0x18])) &&
                        ((-1 < (char)pbVar4[0x19] && (-1 < (char)pbVar4[0x1a])))) &&
                       (-1 < (char)pbVar4[0x1b])))))) &&
                    ((-1 < (char)pbVar4[0x1c] &&
                     (bVar2 = pbVar4[0x1d], bVar2 < 0x1f && bVar2 != 0xf)))) && (bVar2 != 0x17))))))
                && ((((((bVar2 = pbVar4[0x1e], bVar2 < 0x1f && bVar2 != 0xf && (bVar2 != 0x17)) &&
                       (bVar2 = pbVar4[0x1f], bVar2 < 0x1f && bVar2 != 0xf)) &&
                      (((bVar2 != 0x17 && (bVar2 = pbVar4[0x20], bVar2 < 0x1f && bVar2 != 0xf)) &&
                       ((bVar2 != 0x17 &&
                        ((bVar2 = pbVar4[0x21], bVar2 < 0x1f && bVar2 != 0xf && (bVar2 != 0x17))))))
                      )) && (bVar2 = pbVar4[0x22], bVar2 < 0x1f && bVar2 != 0xf)) &&
                    (((((bVar2 != 0x17 && (bVar2 = pbVar4[0x23], bVar2 < 0x1f && bVar2 != 0xf)) &&
                       (bVar2 != 0x17)) &&
                      ((bVar2 = pbVar4[0x24], bVar2 < 0x1f && bVar2 != 0xf && (bVar2 != 0x17)))) &&
                     ((-1 < (char)pbVar4[0x25] && ((-1 < (char)pbVar4[0x26] && (pbVar4[0x27] < 2))))
                     ))))))))) {
          if (local_60[uVar9] == 0) {
            local_60[uVar9] = (int)(pbVar4 + 2);
          }
          uVar6 = uVar6 + 1;
          pbVar4 = pbVar4 + 0x30;
          if (uVar5 / 0x30 <= uVar6) {
            uVar8 = (uint)*(byte *)(uVar8 * 0x228 + *(int *)(DAT_0007c438 + 0x7c374) + 0x1d);
            if (param_2 == 0xff) {
              piVar7 = local_60;
              iVar10 = DAT_0007c43c + 0x7c38c + uVar8 * 0x14;
              if (local_60[0] != 0) {
                (**(code **)(iVar10 + 8))(2,0x80);
              }
              uVar8 = 1;
              do {
                if (piVar7[1] != 0) {
                  (**(code **)(iVar10 + 8))(2,uVar8 | 0x80);
                }
                if (piVar7[2] != 0) {
                  (**(code **)(iVar10 + 8))(2,uVar8 + 1 | 0x80);
                }
                if (piVar7[3] != 0) {
                  (**(code **)(iVar10 + 8))(2,uVar8 + 2 | 0x80);
                }
                if (piVar7[4] != 0) {
                  (**(code **)(iVar10 + 8))(2,uVar8 + 3 | 0x80);
                }
                piVar1 = piVar7 + 5;
                piVar7 = piVar7 + 5;
                if (*piVar1 != 0) {
                  (**(code **)(iVar10 + 8))(2,uVar8 + 4 | 0x80);
                }
                uVar8 = uVar8 + 5;
              } while (uVar8 != 0x10);
            }
            else {
              (**(code **)(DAT_0007c440 + uVar8 * 0x14 + 0x7c42c))(2,param_2 | 0x80,param_3 + 0x12);
            }
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffff;
}

