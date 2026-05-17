/* MaPhrCnv_Open @ 001f56e8 192B */


/* YAMAHA::MaPhrCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

undefined8 YAMAHA::MaPhrCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (puVar3 = *(undefined4 **)(param_1 + 8), param_2 == (_MACNV_OPEN_PARAM *)0x0)) ||
     (puVar3 == (undefined4 *)0x0)) {
    return 0xfffffffe;
  }
  uVar1 = *(uint *)param_2;
  *puVar3 = 0;
  if ((uVar1 & 1) == 0) {
    if (*(long *)(puVar3 + 2) != *(long *)(param_2 + 8)) {
      return 0xfffffffe;
    }
    if (puVar3[4] != *(int *)(param_2 + 0x10)) {
      return 0xfffffffe;
    }
    uVar2 = FUN_001f4cfc(*(long *)(puVar3 + 2),puVar3[4],uVar1 & 1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar2 = FUN_001f4cfc(uVar4,*(undefined4 *)(param_2 + 0x10),1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    FUN_001f49d0(puVar3,uVar4);
  }
  puVar3[0xc] = puVar3[0xb];
  *puVar3 = 1;
  return 0;
}

