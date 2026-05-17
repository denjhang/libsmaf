/* MaWavCnv_Open @ 00215c08 276B */


/* YAMAHA::MaWavCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

undefined8 YAMAHA::MaWavCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  long *plVar3;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (plVar3 = *(long **)(param_1 + 8), param_2 == (_MACNV_OPEN_PARAM *)0x0)) ||
     (plVar3 == (long *)0x0)) {
    return 0xfffffffe;
  }
  if ((*(uint *)param_2 & 1) == 0) {
    if (*plVar3 != *(long *)(param_2 + 8)) {
      return 0xfffffffe;
    }
    if ((int)plVar3[1] != *(int *)(param_2 + 0x10)) {
      return 0xfffffffe;
    }
  }
  else {
    *(undefined1 *)((long)plVar3 + 0xc) = 0;
    plVar3[5] = 0;
    pcVar2 = *(char **)(param_2 + 8);
    *(undefined4 *)(plVar3 + 6) = 0;
    if (pcVar2 == (char *)0x0) {
      return 0xfffffffe;
    }
    if (((((*(uint *)(param_2 + 0x10) < 0xc) || (*pcVar2 != 'R')) ||
         ((pcVar2[1] != 'I' || ((pcVar2[2] != 'F' || (pcVar2[3] != 'F')))))) || (pcVar2[8] != 'W'))
       || (((pcVar2[9] != 'A' || (pcVar2[10] != 'V')) || (pcVar2[0xb] != 'E')))) {
      return 0xfffffff0;
    }
    uVar1 = FUN_00215758(plVar3,pcVar2);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  *(undefined1 *)((long)plVar3 + 0xc) = 1;
  return 0;
}

