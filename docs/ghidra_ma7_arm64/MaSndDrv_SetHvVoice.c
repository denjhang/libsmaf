/* MaSndDrv_SetHvVoice @ 001927d8 1340B */


/* YAMAHA::MaSndDrv_SetHvVoice(_MACNV_SEQ_INFO*, unsigned int, unsigned char const*, unsigned int)
    */

void YAMAHA::MaSndDrv_SetHvVoice(_MACNV_SEQ_INFO *param_1,uint param_2,uchar *param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uchar *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long local_88 [17];
  
  bVar4 = (&DAT_0048aa70)
          [((ulong)(*(uint *)param_1 >> 8) & 0xff) * 4 + (ulong)(byte)*(uint *)param_1];
  local_88[0x10] = *(long *)PTR___stack_chk_guard_00567868;
  if (((((&DAT_0059a44d)[(ulong)bVar4 * 0x430] != -1) && (param_3 != (uchar *)0x0)) &&
      ((param_2 == 0xff || (param_2 < 0x10)))) &&
     (((uVar8 = (uint)param_3[5] * 0x10000 + (uint)param_3[4] * 0x1000000 + (uint)param_3[7] +
                (uint)param_3[6] * 0x100,
       (uint)param_3[1] * 0x10000 + (uint)*param_3 * 0x1000000 + (uint)param_3[3] +
       (uint)param_3[2] * 0x100 == 0x48565000 && (uVar8 + 8 == param_4)) && (0x2f < uVar8)))) {
    puVar7 = param_3 + 8;
    do {
      uVar2 = puVar7[7] + 8 + (uint)puVar7[4] * 0x1000000 + (uint)puVar7[5] * 0x10000 +
              (uint)puVar7[6] * 0x100;
      if (uVar8 < uVar2) goto LAB_00192cb4;
      uVar8 = uVar8 - uVar2;
      puVar7 = puVar7 + uVar2;
    } while (8 < uVar8);
    if (((uVar8 == 0) &&
        (uVar8 = (uint)param_3[0xd] * 0x10000 + (uint)param_3[0xc] * 0x1000000 + (uint)param_3[0xf]
                 + (uint)param_3[0xe] * 0x100,
        (uint)param_3[9] * 0x10000 + (uint)param_3[8] * 0x1000000 + (uint)param_3[0xb] +
        (uint)param_3[10] * 0x100 == 0x48564400)) &&
       ((0x2f < uVar8 && (uVar8 == (uVar8 / 0x30) * 0x30)))) {
      pbVar5 = param_3 + 0x10;
      local_88[0] = 0;
      local_88[1] = 0;
      local_88[2] = 0;
      local_88[3] = 0;
      local_88[4] = 0;
      local_88[5] = 0;
      local_88[6] = 0;
      local_88[7] = 0;
      local_88[8] = 0;
      local_88[9] = 0;
      local_88[10] = 0;
      local_88[0xb] = 0;
      local_88[0xc] = 0;
      local_88[0xd] = 0;
      local_88[0xe] = 0;
      local_88[0xf] = 0;
      do {
        while( true ) {
          bVar3 = *pbVar5;
          if (((((((0xf < bVar3) || (1 < pbVar5[2])) ||
                 (((char)pbVar5[3] < '\0' ||
                  (((((char)pbVar5[4] < '\0' || ((char)pbVar5[5] < '\0')) ||
                    ((char)pbVar5[6] < '\0')) ||
                   (((char)pbVar5[7] < '\0' || ((char)pbVar5[8] < '\0')))))))) ||
                (((char)pbVar5[9] < '\0' ||
                 (((char)pbVar5[10] < '\0' || ((char)pbVar5[0xb] < '\0')))))) ||
               ((((((char)pbVar5[0xc] < '\0' ||
                   ((((char)pbVar5[0xd] < '\0' || ((char)pbVar5[0xe] < '\0')) ||
                    ((char)pbVar5[0xf] < '\0')))) ||
                  ((((char)pbVar5[0x10] < '\0' || ((char)pbVar5[0x11] < '\0')) ||
                   ((char)pbVar5[0x12] < '\0')))) ||
                 (((char)pbVar5[0x13] < '\0' || ((char)pbVar5[0x14] < '\0')))) ||
                (((char)pbVar5[0x15] < '\0' ||
                 ((((char)pbVar5[0x16] < '\0' || ((char)pbVar5[0x17] < '\0')) ||
                  ((char)pbVar5[0x18] < '\0')))))))) ||
              ((((char)pbVar5[0x19] < '\0' || ((char)pbVar5[0x1a] < '\0')) ||
               (((char)pbVar5[0x1b] < '\0' ||
                ((((char)pbVar5[0x1c] < '\0' || ((pbVar5[0x1d] - 0xf & 0xf7) == 0)) ||
                 ((0x1e < pbVar5[0x1d] ||
                  ((((((pbVar5[0x1e] - 0xf & 0xf7) == 0 || (0x1e < pbVar5[0x1e])) ||
                     ((pbVar5[0x1f] - 0xf & 0xf7) == 0)) ||
                    ((0x1e < pbVar5[0x1f] || ((pbVar5[0x20] - 0xf & 0xf7) == 0)))) ||
                   (0x1e < pbVar5[0x20])))))))))))) ||
             ((((pbVar5[0x21] - 0xf & 0xf7) == 0 || (0x1e < pbVar5[0x21])) ||
              (((pbVar5[0x22] - 0xf & 0xf7) == 0 ||
               (((0x1e < pbVar5[0x22] || ((pbVar5[0x23] - 0xf & 0xf7) == 0)) ||
                (0x1e < pbVar5[0x23])))))))) goto LAB_00192cb4;
          if ((((pbVar5[0x24] - 0xf & 0xf7) == 0) || (0x1e < pbVar5[0x24])) ||
             (((char)pbVar5[0x25] < '\0' || (((char)pbVar5[0x26] < '\0' || (1 < pbVar5[0x27]))))))
          goto LAB_00192cb4;
          if (local_88[(int)(uint)bVar3] != 0) break;
          pbVar1 = pbVar5 + 2;
          pbVar5 = pbVar5 + 0x30;
          local_88[(int)(uint)bVar3] = (long)pbVar1;
          if (pbVar5 == param_3 + (ulong)(uVar8 / 0x30 - 1) * 0x30 + 0x40) goto LAB_00192bc8;
        }
        pbVar5 = pbVar5 + 0x30;
      } while (pbVar5 != param_3 + (ulong)(uVar8 / 0x30 - 1) * 0x30 + 0x40);
LAB_00192bc8:
      uVar9 = (ulong)*(byte *)(DAT_0059a428 + (ulong)bVar4 * 0x430 + 0x1d);
      if (param_2 == 0xff) {
        if (local_88[0] != 0) {
          (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)[uVar9 * 5])(2,0x80);
        }
        lVar10 = 1;
        do {
          if (local_88[lVar10] != 0) {
            (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)[uVar9 * 5])(2,(uint)lVar10 | 0x80);
          }
          if (local_88[lVar10 + 1] != 0) {
            (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)[uVar9 * 5])(2,(uint)(lVar10 + 1) | 0x80);
          }
          if (local_88[lVar10 + 2] != 0) {
            (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)[uVar9 * 5])(2,(uint)(lVar10 + 2) | 0x80);
          }
          if (local_88[lVar10 + 3] != 0) {
            (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)[uVar9 * 5])(2,(uint)(lVar10 + 3) | 0x80);
          }
          if (local_88[lVar10 + 4] != 0) {
            (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)[uVar9 * 5])(2,(uint)(lVar10 + 4) | 0x80);
          }
          lVar10 = lVar10 + 5;
        } while (lVar10 != 0x10);
        uVar6 = 0;
      }
      else {
        (*(code *)(&PTR_MaHvDrvJP_SetCommand_00565960)[uVar9 * 5])(2,param_2 | 0x80,param_3 + 0x12);
        uVar6 = 0;
      }
      goto LAB_00192cb8;
    }
  }
LAB_00192cb4:
  uVar6 = 0xffffffff;
LAB_00192cb8:
  if (local_88[0x10] == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

