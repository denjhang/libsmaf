/* MaAudCnv_Check @ 001b4cb8 332B */


/* YAMAHA::MaAudCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

ulong YAMAHA::MaAudCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (puVar8 = *(undefined8 **)(param_1 + 8), param_2 == (_MACNV_CHECK_PARAM *)0x0)) ||
     (puVar8 == (undefined8 *)0x0)) {
    return 0xfffffffe;
  }
  *(undefined1 *)((long)puVar8 + 0xc) = 0;
  puVar8[7] = 0;
  lVar4 = *(long *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(uint *)param_2;
  *(undefined4 *)((long)puVar8 + 0x44) = 0;
  *puVar8 = 0;
  *(undefined4 *)(puVar8 + 1) = 0;
  uVar2 = uVar2 & 3;
  if (lVar4 == 0 || iVar1 == 0) {
    return 0xfffffffe;
  }
  if (uVar2 == 3) {
    return 0xfffffffe;
  }
  uVar5 = FUN_001b4444(lVar4,iVar1,uVar2,puVar8);
  if ((-1 < (int)uVar5) && (uVar2 != 1)) {
    uVar2 = *(uint *)(puVar8 + 8);
    if (uVar2 == 0) {
LAB_001b4da4:
      return 0xffffffff;
    }
    switch(*(uint *)((long)puVar8 + 0x14) & 0x7f) {
    case 0:
      uVar6 = *(uint *)((long)puVar8 + 0x44);
      uVar7 = 2000;
      break;
    case 1:
    case 0x42:
    case 0x43:
      uVar6 = *(uint *)((long)puVar8 + 0x44);
      uVar7 = 500;
      break;
    case 2:
    case 3:
    case 0x40:
      uVar6 = *(uint *)((long)puVar8 + 0x44);
      uVar7 = 1000;
      break;
    default:
      goto LAB_001b4da4;
    case 0x41:
      uVar6 = *(uint *)((long)puVar8 + 0x44);
      uVar7 = 0xfa;
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar6 / uVar2;
    }
    iVar1 = 0;
    if ((ulong)uVar2 != 0) {
      iVar1 = (int)(((ulong)(uVar6 - uVar3 * uVar2) * (ulong)uVar7) / (ulong)uVar2);
    }
    uVar2 = uVar3 * uVar7 + 1 + iVar1;
    uVar5 = (ulong)uVar2;
    *(uint *)((long)puVar8 + 0x4c) = uVar2;
  }
  if (-1 < (int)uVar5) {
    uVar9 = *(undefined8 *)(param_2 + 8);
    uVar5 = 0;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_2 + 0x10);
    *puVar8 = uVar9;
  }
  return uVar5;
}

