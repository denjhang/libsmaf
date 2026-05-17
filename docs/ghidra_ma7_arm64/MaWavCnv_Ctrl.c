/* MaWavCnv_Ctrl @ 00215e18 480B */


/* YAMAHA::MaWavCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

undefined8 YAMAHA::MaWavCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) || (param_4 == (void *)0x0)) ||
     (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) {
    return 0xfffffffe;
  }
  if (param_2 == 5) {
    *(undefined4 *)param_4 = *(undefined4 *)(lVar1 + 0x34);
    return 0;
  }
  if (param_2 != 10) {
    return 0xfffffffe;
  }
  *(undefined4 *)((long)param_4 + 0x14) = 0;
  if (*(uint *)((long)param_4 + 0x10) < 4) {
    return 0xfffffffe;
  }
  if (*(char *)((long)param_4 + 2) != 'W') {
    return 0xffffffff;
  }
  **(undefined1 **)((long)param_4 + 8) = 0;
  *(undefined1 *)(*(long *)((long)param_4 + 8) + 1) = 0;
  *(undefined1 *)(*(long *)((long)param_4 + 8) + 2) = 0;
  *(undefined1 *)(*(long *)((long)param_4 + 8) + 3) = 0;
  switch(*(undefined1 *)((long)param_4 + 3)) {
  case 0x30:
    **(undefined1 **)((long)param_4 + 8) = (char)*(undefined4 *)(lVar1 + 0x10);
    uVar3 = (undefined1)((uint)*(undefined4 *)(lVar1 + 0x10) >> 8);
    goto LAB_00215f08;
  case 0x31:
    puVar2 = *(undefined1 **)((long)param_4 + 8);
    uVar3 = (undefined1)*(undefined4 *)(lVar1 + 0x14);
    goto LAB_00215ecc;
  case 0x32:
    **(undefined1 **)((long)param_4 + 8) = (char)*(undefined4 *)(lVar1 + 0x18);
    *(char *)(*(long *)((long)param_4 + 8) + 1) = (char)((uint)*(undefined4 *)(lVar1 + 0x18) >> 8);
    *(char *)(*(long *)((long)param_4 + 8) + 2) = (char)*(undefined2 *)(lVar1 + 0x1a);
    *(undefined1 *)(*(long *)((long)param_4 + 8) + 3) = *(undefined1 *)(lVar1 + 0x1b);
    break;
  case 0x33:
    **(undefined1 **)((long)param_4 + 8) = (char)*(undefined4 *)(lVar1 + 0x1c);
    *(char *)(*(long *)((long)param_4 + 8) + 1) = (char)((uint)*(undefined4 *)(lVar1 + 0x1c) >> 8);
    *(char *)(*(long *)((long)param_4 + 8) + 2) = (char)*(undefined2 *)(lVar1 + 0x1e);
    *(undefined1 *)(*(long *)((long)param_4 + 8) + 3) = *(undefined1 *)(lVar1 + 0x1f);
    break;
  case 0x34:
    **(undefined1 **)((long)param_4 + 8) = (char)*(undefined4 *)(lVar1 + 0x20);
    uVar3 = (undefined1)((uint)*(undefined4 *)(lVar1 + 0x20) >> 8);
LAB_00215f08:
    *(undefined1 *)(*(long *)((long)param_4 + 8) + 1) = uVar3;
    *(undefined1 *)(*(long *)((long)param_4 + 8) + 2) = 0;
    *(undefined1 *)(*(long *)((long)param_4 + 8) + 3) = 0;
    break;
  case 0x35:
    puVar2 = *(undefined1 **)((long)param_4 + 8);
    uVar3 = (undefined1)*(undefined4 *)(lVar1 + 0x24);
LAB_00215ecc:
    *puVar2 = uVar3;
    *(undefined1 *)(*(long *)((long)param_4 + 8) + 1) = 0;
    *(undefined1 *)(*(long *)((long)param_4 + 8) + 2) = 0;
    *(undefined1 *)(*(long *)((long)param_4 + 8) + 3) = 0;
    break;
  case 0x36:
    **(undefined1 **)((long)param_4 + 8) = (char)*(undefined4 *)(lVar1 + 0x30);
    *(char *)(*(long *)((long)param_4 + 8) + 1) = (char)((uint)*(undefined4 *)(lVar1 + 0x30) >> 8);
    *(char *)(*(long *)((long)param_4 + 8) + 2) = (char)*(undefined2 *)(lVar1 + 0x32);
    *(undefined1 *)(*(long *)((long)param_4 + 8) + 3) = *(undefined1 *)(lVar1 + 0x33);
    break;
  default:
    return 0xfffffffe;
  }
  *(undefined4 *)((long)param_4 + 0x14) = 4;
  return 0;
}

