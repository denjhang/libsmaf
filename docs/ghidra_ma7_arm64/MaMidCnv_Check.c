/* MaMidCnv_Check @ 001d55a4 120B */


/* YAMAHA::MaMidCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

undefined8 YAMAHA::MaMidCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
       (lVar4 = *(long *)(param_1 + 8), param_2 != (_MACNV_CHECK_PARAM *)0x0)) && (lVar4 != 0)) &&
     (lVar3 = *(long *)(param_2 + 8), lVar3 != 0)) {
    iVar1 = *(int *)(param_2 + 0x10);
    if (iVar1 != 0) {
      *(long *)(lVar4 + 8) = lVar3;
      *(int *)(lVar4 + 0x10) = iVar1;
      uVar2 = FUN_001d3264(param_1,lVar3);
      if (-1 < (int)uVar2) {
        uVar2 = 0;
        *(undefined1 *)(lVar4 + 0x7d8) = 1;
      }
      return uVar2;
    }
  }
  return 0xfffffffe;
}

