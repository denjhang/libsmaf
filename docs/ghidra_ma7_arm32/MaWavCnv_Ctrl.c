/* MaWavCnv_Ctrl @ 000d73f8 254B */


/* YAMAHA::MaWavCnv_Ctrl(_MACNV_SEQ_INFO*, unsigned int, unsigned int, void*) */

undefined4 YAMAHA::MaWavCnv_Ctrl(_MACNV_SEQ_INFO *param_1,uint param_2,uint param_3,void *param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) || (param_4 == (void *)0x0)) ||
     (iVar1 = *(int *)(param_1 + 4), iVar1 == 0)) {
LAB_000d7446:
    return 0xfffffffe;
  }
  if (param_2 == 5) {
    *(undefined4 *)param_4 = *(undefined4 *)(iVar1 + 0x2c);
    return 0;
  }
  if (param_2 != 10) {
    return 0xfffffffe;
  }
  *(undefined4 *)((int)param_4 + 0xc) = 0;
  if (*(uint *)((int)param_4 + 8) < 4) {
    return 0xfffffffe;
  }
  if (*(char *)((int)param_4 + 2) != 'W') {
    return 0xffffffff;
  }
  **(undefined1 **)((int)param_4 + 4) = 0;
  *(undefined1 *)(*(int *)((int)param_4 + 4) + 1) = 0;
  *(undefined1 *)(*(int *)((int)param_4 + 4) + 2) = 0;
  *(undefined1 *)(*(int *)((int)param_4 + 4) + 3) = 0;
  switch(*(undefined1 *)((int)param_4 + 3)) {
  case 0x30:
    **(undefined1 **)((int)param_4 + 4) = (char)*(undefined4 *)(iVar1 + 0xc);
    uVar2 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0xc) >> 8);
    goto LAB_000d748a;
  case 0x31:
    uVar2 = (undefined1)*(undefined4 *)(iVar1 + 0x10);
    goto LAB_000d749c;
  case 0x32:
    **(undefined1 **)((int)param_4 + 4) = (char)*(undefined4 *)(iVar1 + 0x14);
    *(char *)(*(int *)((int)param_4 + 4) + 1) = (char)((uint)*(undefined4 *)(iVar1 + 0x14) >> 8);
    *(char *)(*(int *)((int)param_4 + 4) + 2) = (char)*(undefined2 *)(iVar1 + 0x16);
    *(undefined1 *)(*(int *)((int)param_4 + 4) + 3) = *(undefined1 *)(iVar1 + 0x17);
    break;
  case 0x33:
    **(undefined1 **)((int)param_4 + 4) = (char)*(undefined4 *)(iVar1 + 0x18);
    *(char *)(*(int *)((int)param_4 + 4) + 1) = (char)((uint)*(undefined4 *)(iVar1 + 0x18) >> 8);
    *(char *)(*(int *)((int)param_4 + 4) + 2) = (char)*(undefined2 *)(iVar1 + 0x1a);
    *(undefined1 *)(*(int *)((int)param_4 + 4) + 3) = *(undefined1 *)(iVar1 + 0x1b);
    break;
  case 0x34:
    **(undefined1 **)((int)param_4 + 4) = (char)*(undefined4 *)(iVar1 + 0x1c);
    uVar2 = (undefined1)((uint)*(undefined4 *)(iVar1 + 0x1c) >> 8);
LAB_000d748a:
    *(undefined1 *)(*(int *)((int)param_4 + 4) + 1) = uVar2;
    *(undefined1 *)(*(int *)((int)param_4 + 4) + 2) = 0;
    *(undefined1 *)(*(int *)((int)param_4 + 4) + 3) = 0;
    break;
  case 0x35:
    uVar2 = (undefined1)*(undefined4 *)(iVar1 + 0x20);
LAB_000d749c:
    **(undefined1 **)((int)param_4 + 4) = uVar2;
    *(undefined1 *)(*(int *)((int)param_4 + 4) + 1) = 0;
    *(undefined1 *)(*(int *)((int)param_4 + 4) + 2) = 0;
    *(undefined1 *)(*(int *)((int)param_4 + 4) + 3) = 0;
    break;
  case 0x36:
    **(undefined1 **)((int)param_4 + 4) = (char)*(undefined4 *)(iVar1 + 0x28);
    *(char *)(*(int *)((int)param_4 + 4) + 1) = (char)((uint)*(undefined4 *)(iVar1 + 0x28) >> 8);
    *(char *)(*(int *)((int)param_4 + 4) + 2) = (char)*(undefined2 *)(iVar1 + 0x2a);
    *(undefined1 *)(*(int *)((int)param_4 + 4) + 3) = *(undefined1 *)(iVar1 + 0x2b);
    break;
  default:
    goto LAB_000d7446;
  }
  *(undefined4 *)((int)param_4 + 0xc) = 4;
  return 0;
}

