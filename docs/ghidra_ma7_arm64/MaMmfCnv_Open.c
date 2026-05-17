/* MaMmfCnv_Open @ 001ea9d4 380B */


/* YAMAHA::MaMmfCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

undefined8 YAMAHA::MaMmfCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if ((((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
       (plVar2 = *(long **)(param_1 + 8), param_2 == (_MACNV_OPEN_PARAM *)0x0)) ||
      (plVar2 == (long *)0x0)) || (*(long *)(param_2 + 8) == 0)) {
    return 0xfffffffe;
  }
  if ((*(uint *)param_2 & 1) == 0) {
    if (*(long *)(param_2 + 8) != *plVar2) {
      return 0xfffffffe;
    }
    if ((int)plVar2[1] != *(int *)(param_2 + 0x10)) {
      return 0xfffffffe;
    }
  }
  else {
    *(undefined1 *)((long)plVar2 + 0xc) = 0;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    *(undefined4 *)(plVar2 + 4) = 0;
    *(undefined4 *)((long)plVar2 + 0x1c) = 0xffff0000;
    *(undefined1 *)(plVar2 + 6) = 0;
    plVar2[0x1bb] = 0;
    plVar2[0x1bc] = 0;
    plVar2[0x1bd] = 0;
    plVar2[0x1be] = 0;
    *(undefined4 *)(plVar2 + 0x1bf) = 0;
    *(undefined4 *)((long)plVar2 + 0xdfc) = 1;
    *(undefined4 *)(plVar2 + 0x1c0) = 0;
    *(undefined4 *)((long)plVar2 + 0xe04) = 0;
    *(undefined4 *)(plVar2 + 0x1c1) = 0;
    *(undefined4 *)((long)plVar2 + 0xe0c) = 0;
    *(undefined4 *)(plVar2 + 0x1c2) = 0;
    *(undefined4 *)((long)plVar2 + 0xe14) = 0;
    *(undefined1 *)((long)plVar2 + 0xe1d) = 100;
    *(undefined1 *)((long)plVar2 + 0x2e4e) = 0;
    *(undefined4 *)(plVar2 + 0x5ca) = 0;
    *(undefined1 *)((long)plVar2 + 0x2e54) = 0;
    *(undefined1 *)((long)plVar2 + 0x2e55) = 0xff;
    *(undefined1 *)((long)plVar2 + 0x2e56) = 0x10;
    *(undefined1 *)((long)plVar2 + 0x2e57) = 0;
    *(undefined1 *)((long)plVar2 + 0x2e4b) = 0x7f;
    plVar2[0x5cb] = 0;
    plVar2[0x5cc] = 0;
    plVar2[0x5cd] = 0;
    plVar2[0x5ce] = 0;
    plVar2[0x5d0] = 0;
    *(undefined4 *)(plVar2 + 0x5cf) = 0;
    plVar2[0x5d3] = 0;
    *(undefined4 *)(plVar2 + 0x5d2) = 0;
    *(undefined4 *)(plVar2 + 0x5c4) = 0;
    memset(plVar2 + 0x1c4,0,0x2000);
    uVar1 = FUN_001df7f0(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),0,plVar2 + 2);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_001e151c(plVar2);
  if (-1 < (int)uVar1) {
    uVar1 = 0;
    *(undefined1 *)((long)plVar2 + 0xc) = 2;
  }
  return uVar1;
}

