/* MaWavCnv_Check @ 00215b08 256B */


/* YAMAHA::MaWavCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

undefined8 YAMAHA::MaWavCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (puVar4 = *(undefined8 **)(param_1 + 8), param_2 != (_MACNV_CHECK_PARAM *)0x0)) &&
     (puVar4 != (undefined8 *)0x0)) {
    *(undefined1 *)((long)puVar4 + 0xc) = 0;
    puVar4[5] = 0;
    pcVar3 = *(char **)(param_2 + 8);
    *(undefined4 *)(puVar4 + 6) = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    if (pcVar3 != (char *)0x0) {
      if (((((0xb < *(uint *)(param_2 + 0x10)) && (*pcVar3 == 'R')) &&
           ((pcVar3[1] == 'I' && ((pcVar3[2] == 'F' && (pcVar3[3] == 'F')))))) && (pcVar3[8] == 'W')
          ) && (((pcVar3[9] == 'A' && (pcVar3[10] == 'V')) && (pcVar3[0xb] == 'E')))) {
        uVar2 = FUN_00215758(puVar4,pcVar3);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar1 = *(undefined4 *)(param_2 + 0x10);
        *puVar4 = *(undefined8 *)(param_2 + 8);
        *(undefined4 *)(puVar4 + 1) = uVar1;
        return 0;
      }
      return 0xfffffff0;
    }
  }
  return 0xfffffffe;
}

