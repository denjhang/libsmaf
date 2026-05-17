/* MaPhrCnv_Check @ 001f5634 180B */


/* YAMAHA::MaPhrCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

int YAMAHA::MaPhrCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (puVar4 = *(undefined4 **)(param_1 + 8), param_2 == (_MACNV_CHECK_PARAM *)0x0)) ||
     (puVar4 == (undefined4 *)0x0)) {
    return -2;
  }
  iVar2 = *(int *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *puVar4 = 0;
  *(undefined8 *)(puVar4 + 2) = 0;
  uVar3 = 2;
  if (iVar2 != 2) {
    uVar3 = 1;
  }
  puVar4[4] = 0;
  iVar2 = FUN_001f4cfc(uVar5,uVar1,uVar3);
  if (-1 < iVar2) {
    FUN_001f49d0(puVar4,uVar5);
    uVar5 = *(undefined8 *)(param_2 + 8);
    puVar4[4] = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(puVar4 + 2) = uVar5;
    return iVar2;
  }
  return iVar2;
}

