/* MaRmdCnv_Open @ 000c0b04 132B */


/* YAMAHA::MaRmdCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

undefined4 YAMAHA::MaRmdCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (puVar5 = *(undefined4 **)(param_1 + 4), puVar5 == (undefined4 *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (*(int *)param_2 << 0x1f < 0) {
      uVar2 = 0;
      puVar5[1] = 0x7f;
      cVar3 = '\x01';
      do {
        uVar4 = uVar2 & 0xff;
        if (uVar4 == 9) {
          puVar5[0x3a] = 0x7800;
          puVar5[0x3b] = 0x7f7f;
          puVar5[0x38] = 100;
          puVar5[0x39] = 0x7f;
          puVar5[0x3c] = 0x2000;
          puVar5[0x3d] = 0;
        }
        else {
          puVar5[uVar4 * 6 + 4] = 0x7900;
          puVar5[uVar4 * 6 + 5] = 0x7f7f;
          puVar5[uVar4 * 6 + 2] = 100;
          puVar5[uVar4 * 6 + 3] = 0x7f;
          puVar5[uVar4 * 6 + 6] = 0x2000;
          puVar5[uVar4 * 6 + 7] = 0;
          if (cVar3 == '\x10') break;
        }
        cVar3 = cVar3 + '\x01';
        uVar2 = uVar2 + 1;
      } while( true );
    }
    uVar1 = 0;
    *puVar5 = 1;
  }
  return uVar1;
}

