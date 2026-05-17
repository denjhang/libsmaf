/* lchk_prm @ 00245b6c 636B */


/* YAMAHA::lchk_prm(unsigned int, unsigned int) */

void YAMAHA::lchk_prm(uint param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  
  switch(param_1) {
  case 0:
    lVar2 = (ulong)param_2 + 0x180;
    if (*(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6) < 0x3b) {
      if (*(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6) < 0x1c) {
        *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 0x1c;
      }
    }
    else {
      *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 0x3a;
    }
    goto LAB_00245bb4;
  case 1:
    lVar2 = (ulong)param_2 + 0x180;
    if (*(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6) < 0x29) {
      if (*(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6) < 8) {
        *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 8;
      }
    }
    else {
      *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 0x28;
    }
LAB_00245bb4:
    puVar1 = PTR_lprm_00567530 + ((ulong)(param_2 + 1) + 0x180) * 2;
    if (0x4c < *(ushort *)(puVar1 + 6)) {
      *(undefined2 *)(puVar1 + 6) = 0x4c;
      return;
    }
    if (*(ushort *)(puVar1 + 6) < 0x34) {
LAB_00245bd8:
      *(undefined2 *)(puVar1 + 6) = 0x34;
    }
    break;
  case 2:
    lVar2 = (ulong)param_2 + 0x180;
    if (*(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6) < 0x37) {
      if (*(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6) < 0x1c) {
        *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 0x1c;
      }
    }
    else {
      *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 0x36;
    }
    lVar2 = (ulong)(param_2 + 1) + 0x180;
    if (*(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6) < 0x4d) {
      if (*(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6) < 0x34) {
        *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 0x34;
      }
    }
    else {
      *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 0x4c;
    }
    lVar2 = (ulong)(param_2 + 2) + 0x180;
    if (0x78 < *(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6)) {
      *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 0x78;
      return;
    }
    if (*(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6) < 10) {
      *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 10;
      return;
    }
    break;
  case 3:
    lVar2 = (ulong)param_2 + 0x170;
    goto LAB_00245ce0;
  case 4:
    lVar2 = (ulong)param_2 + 0x170;
    if (*(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6) < 0x22) {
      *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 0x22;
      return;
    }
    if (0x3c < *(ushort *)(PTR_lprm_00567530 + lVar2 * 2 + 6)) {
      *(undefined2 *)(PTR_lprm_00567530 + lVar2 * 2 + 6) = 0x3c;
      return;
    }
    break;
  case 5:
    lVar2 = (ulong)param_2 + 0x180;
LAB_00245ce0:
    puVar1 = PTR_lprm_00567530 + lVar2 * 2;
    if (*(ushort *)(puVar1 + 6) < 0x35) {
      return;
    }
    goto LAB_00245bd8;
  case 6:
    if (*(ushort *)(PTR_lprm_00567530 + ((ulong)param_2 + 0x180) * 2 + 6) < 0x22) {
      *(undefined2 *)(PTR_lprm_00567530 + ((ulong)param_2 + 0x180) * 2 + 6) = 0x22;
      return;
    }
    if (*(ushort *)(PTR_lprm_00567530 + ((ulong)param_2 + 0x180) * 2 + 6) < 0x3d) {
      return;
    }
LAB_00245c08:
    *(undefined2 *)(PTR_lprm_00567530 + (ulong)param_2 * 2 + 0x306) = 0x3c;
    return;
  case 7:
  case 8:
    if (*(ushort *)(PTR_lprm_00567530 + (ulong)param_2 * 2 + 0x306) < 0x14) {
      *(undefined2 *)(PTR_lprm_00567530 + (ulong)param_2 * 2 + 0x306) = 0x14;
      return;
    }
    if (0x3c < *(ushort *)(PTR_lprm_00567530 + (ulong)param_2 * 2 + 0x306)) goto LAB_00245c08;
  }
  return;
}

