/* MaResMgr_AllocSequence @ 000e9c24 158B */


/* YAMAHA::MaResMgr_AllocSequence(unsigned int, unsigned int) */

undefined4 YAMAHA::MaResMgr_AllocSequence(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  bVar6 = param_2 != 0;
  bVar5 = param_2 == 1;
  if (param_2 < 2) {
    bVar6 = 0x14 < param_1;
    bVar5 = param_1 == 0x15;
  }
  if (bVar6 && !bVar5) {
    return 0xfffffffe;
  }
  uVar4 = 1 << (param_1 & 0xff);
  iVar1 = *(int *)(DAT_000e9cc4 + 0xe9c3a);
  uVar2 = *(uint *)(iVar1 + 0x18);
  if ((uVar4 & uVar2) == 0) {
    if (param_1 == 0) {
      if ((uVar2 & 0x1e) != 0) {
        return 0xfffffffd;
      }
      if (param_2 != 1) goto LAB_000e9c4e;
      if (*(char *)(iVar1 + 0x142f) != '\0') {
        return 0xfffffffd;
      }
      uVar3 = *(uint *)(iVar1 + 0x1430) & 0xff0000ff;
    }
    else {
      if (4 < param_1) {
        bVar5 = 9 < param_1;
        if (param_1 != 10) {
          bVar5 = param_1 != 0x13;
        }
        if ((bVar5 && (param_1 != 10 && param_1 != 0x14)) && (*(char *)(iVar1 + 0x1434) == '\x01'))
        {
          return 0xfffffffd;
        }
        goto LAB_000e9c4e;
      }
      if ((int)(uVar2 << 0x1f) < 0) {
        return 0xfffffffd;
      }
      if (param_2 != 1) goto LAB_000e9c4e;
      if (*(char *)(iVar1 + 0x142f) != '\0') {
        return 0xfffffffd;
      }
      if ((*(uint *)(iVar1 + 0x1430) & 0xff0000ff) != 0) {
        return 0xfffffffd;
      }
      uVar3 = uVar2 & 0x1e;
    }
    if (uVar3 == 0) {
      *(char *)(iVar1 + 0x1434) = (char)param_2;
LAB_000e9c4e:
      *(uint *)(iVar1 + 0x18) = uVar4 | uVar2;
      return 0;
    }
  }
  return 0xfffffffd;
}

