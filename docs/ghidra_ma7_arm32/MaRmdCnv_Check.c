/* MaRmdCnv_Check @ 000c0a84 126B */


/* YAMAHA::MaRmdCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

undefined4 YAMAHA::MaRmdCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (puVar1 = *(undefined4 **)(param_1 + 4), puVar1 != (undefined4 *)0x0)) &&
     (param_2 != (_MACNV_CHECK_PARAM *)0x0)) {
    bVar3 = 0;
    *puVar1 = 0;
    puVar1[1] = 0x7f;
    cVar2 = '\x01';
    do {
      uVar4 = (uint)bVar3;
      if (uVar4 == 9) {
        puVar1[0x3a] = 0x7800;
        puVar1[0x3b] = 0x7f7f;
        puVar1[0x38] = 100;
        puVar1[0x39] = 0x7f;
        puVar1[0x3c] = 0x2000;
        puVar1[0x3d] = 0;
      }
      else {
        puVar1[uVar4 * 6 + 4] = 0x7900;
        puVar1[uVar4 * 6 + 5] = 0x7f7f;
        puVar1[uVar4 * 6 + 2] = 100;
        puVar1[uVar4 * 6 + 3] = 0x7f;
        puVar1[uVar4 * 6 + 6] = 0x2000;
        puVar1[uVar4 * 6 + 7] = 0;
        if (cVar2 == '\x10') {
          return 0;
        }
      }
      cVar2 = cVar2 + '\x01';
      bVar3 = bVar3 + 1;
    } while( true );
  }
  return 0xfffffffe;
}

