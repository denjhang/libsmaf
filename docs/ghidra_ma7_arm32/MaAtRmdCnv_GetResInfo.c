/* MaAtRmdCnv_GetResInfo @ 00090950 66B */


/* YAMAHA::MaAtRmdCnv_GetResInfo(_MACNV_SEQ_INFO*) */

char * YAMAHA::MaAtRmdCnv_GetResInfo(_MACNV_SEQ_INFO *param_1)

{
  char *pcVar1;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (*(int **)(param_1 + 4) == (int *)0x0)) {
    return (char *)0xfffffffe;
  }
  if (**(int **)(param_1 + 4) == 0) {
    return (char *)0xffffffff;
  }
  if (*(int *)param_1 != 0x100) {
    return (char *)0x0;
  }
  pcVar1 = (char *)0x801ff41;
  if (*(char *)(*(int *)(DAT_00090994 + 0x90976) + 2) != '\x01') {
    pcVar1 = "4CLpf14CalcEg_SUSTAINEPS0_";
  }
  return pcVar1;
}

