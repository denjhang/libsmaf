/* MaMmfCnv_Open @ 000b5b0c 262B */


/* YAMAHA::MaMmfCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

int YAMAHA::MaMmfCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
       (piVar2 = *(int **)(param_1 + 4), piVar2 == (int *)0x0)) ||
      (param_2 == (_MACNV_OPEN_PARAM *)0x0)) || (*(int *)(param_2 + 8) == 0)) {
    return -2;
  }
  if (*(int *)param_2 << 0x1f < 0) {
    *(undefined1 *)(piVar2 + 2) = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[6] = 0;
    piVar2[0x30c] = 1;
    *(undefined1 *)(piVar2 + 10) = 0;
    piVar2[0x307] = 0;
    piVar2[0x308] = 0;
    piVar2[5] = -0x10000;
    piVar2[0x309] = 0;
    piVar2[0x30a] = 0;
    piVar2[0x30b] = 0;
    piVar2[0x30d] = 0;
    piVar2[0x30e] = 0;
    piVar2[0x30f] = 0;
    piVar2[0x310] = 0;
    piVar2[0x311] = 0;
    piVar2[0x312] = 0;
    *(undefined1 *)((int)piVar2 + 0xc51) = 100;
    *(undefined1 *)((int)piVar2 + 0x1c75) = 0xff;
    *(undefined1 *)((int)piVar2 + 0x1c76) = 0x10;
    *(undefined1 *)((int)piVar2 + 0x1c6e) = 0;
    piVar2[0x71c] = 0;
    *(undefined1 *)(piVar2 + 0x71d) = 0;
    *(undefined1 *)((int)piVar2 + 0x1c77) = 0;
    *(undefined1 *)((int)piVar2 + 0x1c6b) = 0x7f;
    memset(piVar2 + 0x71e,0,0x20);
    piVar2[0x727] = 0;
    piVar2[0x726] = 0;
    piVar2[0x72a] = 0;
    piVar2[0x729] = 0;
    piVar2[0x715] = 0;
    memset(piVar2 + 0x315,0,0x1000);
    iVar1 = FUN_000af94c(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),0,piVar2 + 3);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar1 = FUN_000ae9e0(piVar2);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    if (*(int *)(param_2 + 8) != *piVar2) {
      return -2;
    }
    if (piVar2[1] != *(int *)(param_2 + 0xc)) {
      return -2;
    }
    iVar1 = FUN_000ae9e0(piVar2);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  *(undefined1 *)(piVar2 + 2) = 2;
  return 0;
}

