/* MaAudCnv_Open @ 001b4e04 304B */


/* YAMAHA::MaAudCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

ulong YAMAHA::MaAudCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (plVar8 = *(long **)(param_1 + 8), param_2 == (_MACNV_OPEN_PARAM *)0x0)) ||
     (plVar8 == (long *)0x0)) {
    return 0xfffffffe;
  }
  if ((*(uint *)param_2 & 1) == 0) {
    if (*plVar8 != *(long *)(param_2 + 8)) {
      return 0xfffffffe;
    }
    if ((int)plVar8[1] != *(int *)(param_2 + 0x10)) {
      return 0xfffffffe;
    }
  }
  else {
    *(undefined1 *)((long)plVar8 + 0xc) = 0;
    plVar8[7] = 0;
    lVar4 = *(long *)(param_2 + 8);
    *(undefined4 *)((long)plVar8 + 0x44) = 0;
    if (lVar4 == 0) {
      return 0xfffffffe;
    }
    if (*(int *)(param_2 + 0x10) == 0) {
      return 0xfffffffe;
    }
    uVar5 = FUN_001b4444();
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    uVar1 = *(uint *)(plVar8 + 8);
    if (uVar1 == 0) {
LAB_001b4e58:
      return 0xffffffff;
    }
    switch(*(uint *)((long)plVar8 + 0x14) & 0x7f) {
    case 0:
      uVar6 = *(uint *)((long)plVar8 + 0x44);
      uVar7 = 2000;
      break;
    case 1:
    case 0x42:
    case 0x43:
      uVar6 = *(uint *)((long)plVar8 + 0x44);
      uVar7 = 500;
      break;
    case 2:
    case 3:
    case 0x40:
      uVar6 = *(uint *)((long)plVar8 + 0x44);
      uVar7 = 1000;
      break;
    default:
      goto LAB_001b4e58;
    case 0x41:
      uVar6 = *(uint *)((long)plVar8 + 0x44);
      uVar7 = 0xfa;
    }
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar6 / uVar1;
    }
    iVar2 = 0;
    if ((ulong)uVar1 != 0) {
      iVar2 = (int)(((ulong)(uVar6 - uVar3 * uVar1) * (ulong)uVar7) / (ulong)uVar1);
    }
    uVar1 = uVar3 * uVar7 + 1 + iVar2;
    *(uint *)((long)plVar8 + 0x4c) = uVar1;
    if ((int)uVar1 < 0) {
      return (ulong)uVar1;
    }
  }
  *(undefined1 *)((long)plVar8 + 0xc) = 1;
  return 0;
}

