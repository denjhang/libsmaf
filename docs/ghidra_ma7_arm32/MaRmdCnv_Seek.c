/* MaRmdCnv_Seek @ 000c0bc0 320B */


/* YAMAHA::MaRmdCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined8 YAMAHA::MaRmdCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  _MACNV_SEEK_INFO *p_Var6;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (piVar5 = *(int **)(param_1 + 4), piVar5 == (int *)0x0)) ||
     (param_3 == (_MACNV_SEEK_INFO *)0x0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if (*piVar5 == 1) {
      uVar2 = 0;
      piVar5[1] = 0x7f;
      cVar3 = '\x01';
      do {
        uVar4 = uVar2 & 0xff;
        if (uVar4 == 9) {
          piVar5[0x3b] = 0x7f7f;
          piVar5[0x3a] = 0x7800;
          piVar5[0x38] = 100;
          piVar5[0x39] = 0x7f;
          piVar5[0x3c] = 0x2000;
          piVar5[0x3d] = 0;
        }
        else {
          piVar5[uVar4 * 6 + 4] = 0x7900;
          piVar5[uVar4 * 6 + 5] = 0x7f7f;
          piVar5[uVar4 * 6 + 2] = 100;
          piVar5[uVar4 * 6 + 3] = 0x7f;
          piVar5[uVar4 * 6 + 6] = 0x2000;
          piVar5[uVar4 * 6 + 7] = 0;
          if (cVar3 == '\x10') goto code_r0x000c0c30;
        }
        cVar3 = cVar3 + '\x01';
        uVar2 = uVar2 + 1;
      } while( true );
    }
    uVar1 = 0xffffffff;
  }
LAB_000c0cce:
  return CONCAT44(param_2,uVar1);
code_r0x000c0c30:
  *param_3 = (_MACNV_SEEK_INFO)0x7f;
  param_3[4] = (_MACNV_SEEK_INFO)0x40;
  *(undefined2 *)(param_3 + 2) = 0x2000;
  param_3[5] = (_MACNV_SEEK_INFO)0x4c;
  uVar2 = 0;
  p_Var6 = param_3;
  do {
    param_2 = uVar2 & 0xff;
    if ((_MACNV_SEEK_INFO *)param_2 == (_MACNV_SEEK_INFO *)&DAT_00000009) {
      param_3[0xf4] = (_MACNV_SEEK_INFO)0x80;
      param_2 = (uint)param_3;
    }
    else {
      p_Var6[10] = (_MACNV_SEEK_INFO)0x0;
    }
    uVar4 = uVar2 + 1;
    param_3[uVar2 * 0x1a + 0xb] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar2 * 0x1a + 0xd] = (_MACNV_SEEK_INFO)0x64;
    param_3[uVar2 * 0x1a + 0xc] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar2 * 0x1a + 0x18] = (_MACNV_SEEK_INFO)0x40;
    param_3[uVar2 * 0x1a + 0xf] = (_MACNV_SEEK_INFO)0x7f;
    param_3[uVar2 * 0x1a + 0x10] = (_MACNV_SEEK_INFO)0x0;
    *(undefined2 *)(param_3 + uVar2 * 0x1a + 0x1c) = 0x2000;
    param_3[uVar2 * 0x1a + 0x11] = (_MACNV_SEEK_INFO)0x2;
    param_3[uVar2 * 0x1a + 0x12] = (_MACNV_SEEK_INFO)0x1;
    param_3[uVar2 * 0x1a + 0x13] = (_MACNV_SEEK_INFO)0x40;
    *(undefined2 *)(param_3 + uVar2 * 0x1a + 0x1e) = 0x2000;
    param_3[uVar2 * 0x1a + 0x14] = (_MACNV_SEEK_INFO)0x40;
    param_3[uVar2 * 0x1a + 0x15] = (_MACNV_SEEK_INFO)0x40;
    param_3[uVar2 * 0x1a + 0x16] = (_MACNV_SEEK_INFO)0x7f;
    param_3[uVar2 * 0x1a + 0x17] = (_MACNV_SEEK_INFO)0x28;
    param_3[uVar2 * 0x1a + 0x19] = (_MACNV_SEEK_INFO)0x0;
    *(undefined2 *)(param_3 + uVar2 * 0x1a + 0x20) = 0;
    param_3[uVar2 * 0x1a + 8] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar2 * 0x1a + 9] = (_MACNV_SEEK_INFO)0x0;
    uVar2 = uVar4;
    p_Var6 = p_Var6 + 0x1a;
  } while (uVar4 != 0x10);
  uVar1 = 0;
  goto LAB_000c0cce;
}

