/* MaAtRmdCnv_Seek @ 001b15e8 396B */


/* YAMAHA::MaAtRmdCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined1  [16]
YAMAHA::MaAtRmdCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  auVar8._8_8_ = CONCAT44(0,param_2);
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (piVar7 = *(int **)(param_1 + 8), param_3 == (_MACNV_SEEK_INFO *)0x0)) ||
     (piVar7 == (int *)0x0)) {
    auVar9._8_8_ = auVar8._8_8_;
    auVar9._0_8_ = 0xfffffffe;
    return auVar9;
  }
  if (*piVar7 != 1) {
    auVar8._0_8_ = 0xffffffff;
    return auVar8;
  }
  *param_3 = SUB41(piVar7[1],0);
  param_3[4] = SUB41(piVar7[2],0);
  iVar2 = piVar7[3];
  param_3[5] = SUB41(piVar7[4],0);
  *(short *)(param_3 + 2) = (short)iVar2;
  param_3[6] = *(_MACNV_SEEK_INFO *)(piVar7 + 5);
  param_3[7] = *(_MACNV_SEEK_INFO *)((long)piVar7 + 0x15);
  cVar4 = '\0';
  do {
    uVar3 = piVar7[0xc];
    switch((uint)piVar7[8] >> 8) {
    case 0x79:
switchD_001b1730_caseD_79:
      param_3[10] = (_MACNV_SEEK_INFO)0x0;
      break;
    default:
      if (cVar4 != '\t') goto switchD_001b1730_caseD_79;
    case 0x78:
      param_3[10] = (_MACNV_SEEK_INFO)0x80;
      break;
    case 0x7c:
      param_3[10] = *(_MACNV_SEEK_INFO *)(&DAT_0048cf30 + ((ulong)(uint)piVar7[8] & 0x7f));
      break;
    case 0x7d:
      param_3[10] = (_MACNV_SEEK_INFO)((&DAT_0048cf30)[uVar3] + -0x80);
    }
    piVar1 = piVar7 + 0x13;
    param_3[0xb] = SUB41(uVar3,0);
    param_3[0xc] = SUB41(piVar7[0xd],0);
    bVar6 = cVar4 == '\x1f';
    param_3[0xd] = SUB41(piVar7[6],0);
    param_3[0x18] = SUB41(piVar7[0xe],0);
    param_3[0xf] = SUB41(piVar7[7],0);
    param_3[0x10] = SUB41(piVar7[0xf],0);
    iVar2 = piVar7[0x10];
    param_3[0x11] = SUB41(piVar7[0x11],0);
    *(short *)(param_3 + 0x1c) = (short)iVar2;
    param_3[0x12] = SUB41(piVar7[0x12],0);
    param_3[0x13] = SUB41(*piVar1,0);
    iVar2 = piVar7[10];
    param_3[0x14] = SUB41(piVar7[0x14],0);
    *(short *)(param_3 + 0x1e) = (short)iVar2;
    param_3[0x15] = SUB41(piVar7[0x15],0);
    param_3[0x16] = SUB41(piVar7[0x16],0);
    param_3[0x17] = SUB41(piVar7[0x17],0);
    param_3[0x19] = SUB41(piVar7[0x18],0);
    *(short *)(param_3 + 0x20) = (short)piVar7[0xb];
    param_3[8] = (_MACNV_SEEK_INFO)0x0;
    param_3[9] = (_MACNV_SEEK_INFO)0x0;
    param_3 = param_3 + 0x1a;
    piVar7 = piVar1;
    cVar4 = cVar4 + '\x01';
    if (bVar6) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = piVar1;
      return auVar5 << 0x40;
    }
  } while( true );
}

