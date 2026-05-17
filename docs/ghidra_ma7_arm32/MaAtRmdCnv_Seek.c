/* MaAtRmdCnv_Seek @ 00090998 288B */


/* YAMAHA::MaAtRmdCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined8 YAMAHA::MaAtRmdCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  _MACNV_SEEK_INFO _Var5;
  int iVar6;
  int *piVar7;
  
  iVar2 = DAT_00090ac4;
  iVar1 = DAT_00090ac0;
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (piVar7 = *(int **)(param_1 + 4), piVar7 == (int *)0x0)) ||
     (param_3 == (_MACNV_SEEK_INFO *)0x0)) {
    uVar4 = 0xfffffffe;
  }
  else if (*piVar7 == 1) {
    cVar3 = '\0';
    *param_3 = SUB41(piVar7[1],0);
    param_3[4] = SUB41(piVar7[2],0);
    *(short *)(param_3 + 2) = (short)piVar7[3];
    param_3[5] = SUB41(piVar7[4],0);
    param_3[6] = *(_MACNV_SEEK_INFO *)(piVar7 + 5);
    param_3[7] = *(_MACNV_SEEK_INFO *)((int)piVar7 + 0x15);
    do {
      iVar6 = piVar7[0xc];
      switch((uint)piVar7[8] >> 8) {
      case 0x78:
        param_3[10] = (_MACNV_SEEK_INFO)0x80;
        break;
      case 0x79:
        param_3[10] = (_MACNV_SEEK_INFO)0x0;
        break;
      default:
        if (cVar3 == '\t') {
          _Var5 = (_MACNV_SEEK_INFO)0x80;
        }
        else {
          _Var5 = (_MACNV_SEEK_INFO)0x0;
        }
        param_3[10] = _Var5;
        break;
      case 0x7c:
        param_3[10] = *(_MACNV_SEEK_INFO *)(iVar2 + 0x909d6 + (piVar7[8] & 0x7fU));
        break;
      case 0x7d:
        param_3[10] = (_MACNV_SEEK_INFO)(*(char *)(iVar1 + 0x909d2 + iVar6) + -0x80);
      }
      param_3[0xb] = SUB41(iVar6,0);
      cVar3 = cVar3 + '\x01';
      param_2 = (uint)(piVar7 + 0x13);
      param_3[0xc] = SUB41(piVar7[0xd],0);
      param_3[0xd] = SUB41(piVar7[6],0);
      param_3[0x18] = SUB41(piVar7[0xe],0);
      param_3[0xf] = SUB41(piVar7[7],0);
      param_3[0x10] = SUB41(piVar7[0xf],0);
      *(short *)(param_3 + 0x1c) = (short)piVar7[0x10];
      param_3[0x11] = SUB41(piVar7[0x11],0);
      param_3[0x12] = SUB41(piVar7[0x12],0);
      param_3[0x13] = SUB41(*(int *)param_2,0);
      *(short *)(param_3 + 0x1e) = (short)piVar7[10];
      param_3[0x14] = SUB41(piVar7[0x14],0);
      param_3[0x15] = SUB41(piVar7[0x15],0);
      param_3[0x16] = SUB41(piVar7[0x16],0);
      param_3[0x17] = SUB41(piVar7[0x17],0);
      param_3[0x19] = SUB41(piVar7[0x18],0);
      iVar6 = piVar7[0xb];
      param_3[8] = (_MACNV_SEEK_INFO)0x0;
      param_3[9] = (_MACNV_SEEK_INFO)0x0;
      *(short *)(param_3 + 0x20) = (short)iVar6;
      piVar7 = (int *)param_2;
      param_3 = param_3 + 0x1a;
    } while (cVar3 != ' ');
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
  return CONCAT44(param_2,uVar4);
}

