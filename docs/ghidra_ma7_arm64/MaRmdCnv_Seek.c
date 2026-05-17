/* MaRmdCnv_Seek @ 001fa160 684B */


/* YAMAHA::MaRmdCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined8 YAMAHA::MaRmdCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  _MACNV_SEEK_INFO *p_Var8;
  
  uVar2 = DAT_001fa410;
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (piVar6 = *(int **)(param_1 + 8), param_3 != (_MACNV_SEEK_INFO *)0x0)) {
    if (piVar6 != (int *)0x0) {
      if (*piVar6 == 1) {
        piVar6[7] = 0;
        uVar4 = DAT_001fa420;
        uVar3 = DAT_001fa418;
        piVar6[6] = 0x2000;
        piVar6[1] = 0x7f;
        piVar6[3] = 0x7f;
        piVar6[4] = 0x7900;
        piVar6[5] = 0x7f7f;
        piVar6[2] = 100;
        *(undefined8 *)(piVar6 + 8) = uVar2;
        *(undefined8 *)(piVar6 + 10) = uVar3;
        *(undefined8 *)(piVar6 + 0xc) = uVar4;
        *(undefined8 *)(piVar6 + 0xe) = uVar2;
        *(undefined8 *)(piVar6 + 0x10) = uVar3;
        *(undefined8 *)(piVar6 + 0x12) = uVar4;
        *(undefined8 *)(piVar6 + 0x14) = uVar2;
        *(undefined8 *)(piVar6 + 0x16) = uVar3;
        *(undefined8 *)(piVar6 + 0x18) = uVar4;
        *(undefined8 *)(piVar6 + 0x1a) = uVar2;
        *(undefined8 *)(piVar6 + 0x1c) = uVar3;
        *(undefined8 *)(piVar6 + 0x1e) = uVar4;
        *(undefined8 *)(piVar6 + 0x20) = uVar2;
        *(undefined8 *)(piVar6 + 0x22) = uVar3;
        *(undefined8 *)(piVar6 + 0x24) = uVar4;
        *(undefined8 *)(piVar6 + 0x26) = uVar2;
        *(undefined8 *)(piVar6 + 0x28) = uVar3;
        *(undefined8 *)(piVar6 + 0x2a) = uVar4;
        *(undefined8 *)(piVar6 + 0x2c) = uVar2;
        *(undefined8 *)(piVar6 + 0x2e) = uVar3;
        *(undefined8 *)(piVar6 + 0x30) = uVar4;
        *(undefined8 *)(piVar6 + 0x32) = uVar2;
        *(undefined8 *)(piVar6 + 0x34) = uVar3;
        *(undefined8 *)(piVar6 + 0x36) = uVar4;
        uVar5 = DAT_001fa428;
        *(undefined8 *)(piVar6 + 0x38) = uVar2;
        *(undefined8 *)(piVar6 + 0x3a) = uVar5;
        *(undefined8 *)(piVar6 + 0x3c) = uVar4;
        *(undefined8 *)(piVar6 + 0x3e) = uVar2;
        *(undefined8 *)(piVar6 + 0x40) = uVar3;
        *(undefined8 *)(piVar6 + 0x42) = uVar4;
        *(undefined8 *)(piVar6 + 0x44) = uVar2;
        *(undefined8 *)(piVar6 + 0x46) = uVar3;
        *(undefined8 *)(piVar6 + 0x48) = uVar4;
        *(undefined8 *)(piVar6 + 0x4a) = uVar2;
        *(undefined8 *)(piVar6 + 0x4c) = uVar3;
        *(undefined8 *)(piVar6 + 0x4e) = uVar4;
        *(undefined8 *)(piVar6 + 0x50) = uVar2;
        *(undefined8 *)(piVar6 + 0x52) = uVar3;
        *(undefined8 *)(piVar6 + 0x54) = uVar4;
        *(undefined8 *)(piVar6 + 0x56) = uVar2;
        *(undefined8 *)(piVar6 + 0x58) = uVar3;
        p_Var8 = param_3 + 10;
        *(undefined8 *)(piVar6 + 0x5a) = uVar4;
        *(undefined8 *)(piVar6 + 0x5c) = uVar2;
        *(undefined8 *)(piVar6 + 0x5e) = uVar3;
        *(undefined8 *)(piVar6 + 0x60) = uVar4;
        *(undefined2 *)(param_3 + 2) = 0x2000;
        *param_3 = (_MACNV_SEEK_INFO)0x7f;
        param_3[4] = (_MACNV_SEEK_INFO)0x40;
        param_3[5] = (_MACNV_SEEK_INFO)0x4c;
        uVar7 = (uint)(piVar6 == (int *)0x0);
        do {
          if (uVar7 == 9) {
            param_3[0xf4] = (_MACNV_SEEK_INFO)0x80;
          }
          else {
            *p_Var8 = (_MACNV_SEEK_INFO)0x0;
          }
          p_Var8 = p_Var8 + 0x1a;
          uVar1 = uVar7 + 1;
          param_3[(long)(int)uVar7 * 0x1a + 0xb] = (_MACNV_SEEK_INFO)0x0;
          param_3[(long)(int)uVar7 * 0x1a + 0xc] = (_MACNV_SEEK_INFO)0x0;
          param_3[(long)(int)uVar7 * 0x1a + 0xd] = (_MACNV_SEEK_INFO)0x64;
          param_3[(long)(int)uVar7 * 0x1a + 0x18] = (_MACNV_SEEK_INFO)0x40;
          param_3[(long)(int)uVar7 * 0x1a + 0xf] = (_MACNV_SEEK_INFO)0x7f;
          param_3[(long)(int)uVar7 * 0x1a + 0x10] = (_MACNV_SEEK_INFO)0x0;
          *(undefined2 *)(param_3 + (long)(int)uVar7 * 0x1a + 0x1c) = 0x2000;
          param_3[(long)(int)uVar7 * 0x1a + 0x11] = (_MACNV_SEEK_INFO)0x2;
          param_3[(long)(int)uVar7 * 0x1a + 0x12] = (_MACNV_SEEK_INFO)0x1;
          param_3[(long)(int)uVar7 * 0x1a + 0x13] = (_MACNV_SEEK_INFO)0x40;
          *(undefined2 *)(param_3 + (long)(int)uVar7 * 0x1a + 0x1e) = 0x2000;
          param_3[(long)(int)uVar7 * 0x1a + 0x14] = (_MACNV_SEEK_INFO)0x40;
          param_3[(long)(int)uVar7 * 0x1a + 0x15] = (_MACNV_SEEK_INFO)0x40;
          param_3[(long)(int)uVar7 * 0x1a + 0x16] = (_MACNV_SEEK_INFO)0x7f;
          param_3[(long)(int)uVar7 * 0x1a + 0x17] = (_MACNV_SEEK_INFO)0x28;
          param_3[(long)(int)uVar7 * 0x1a + 0x19] = (_MACNV_SEEK_INFO)0x0;
          *(undefined2 *)(param_3 + (long)(int)uVar7 * 0x1a + 0x20) = 0;
          param_3[(long)(int)uVar7 * 0x1a + 8] = (_MACNV_SEEK_INFO)0x0;
          param_3[(long)(int)uVar7 * 0x1a + 9] = (_MACNV_SEEK_INFO)0x0;
          uVar7 = uVar1;
        } while (uVar1 != 0x10);
        return 0;
      }
      return 0xffffffff;
    }
  }
  return 0xfffffffe;
}

