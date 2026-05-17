/* MaResMgr_AllocRam @ 000e9db0 162B */


/* YAMAHA::MaResMgr_AllocRam(_MARESMGRALLOCRAM*) */

undefined4 YAMAHA::MaResMgr_AllocRam(_MARESMGRALLOCRAM *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 == (_MARESMGRALLOCRAM *)0x0) {
    uVar4 = 0xfffffffe;
  }
  else {
    iVar5 = *(int *)(DAT_000e9e54 + 0xe9dc0);
    if (*(byte *)(iVar5 + 0x1435) != 0xf) {
      iVar7 = 0;
      if (*(char *)(iVar5 + 0x1c) == '\0') {
LAB_000e9de8:
        iVar8 = DAT_000e9e58 + 0xe9df8;
        iVar6 = iVar5 + iVar7 * 3;
        *(uint *)param_1 = (*(byte *)(iVar8 + (uint)*(byte *)(iVar5 + 0x1435) * 3) + 0x10) * 0x1000;
        bVar1 = *(byte *)(iVar5 + 0x1435);
        param_1[8] = SUB41(iVar7,0);
        *(uint *)(param_1 + 4) = (uint)*(byte *)((uint)bVar1 * 3 + iVar8 + 1) << 0xc;
        *(undefined1 *)(iVar5 + iVar7 + 0x1c) = 1;
        bVar1 = *(byte *)(iVar5 + 0x1435);
        iVar7 = (uint)bVar1 * 3;
        iVar9 = iVar8 + iVar7;
        bVar2 = *(byte *)(iVar9 + 2);
        uVar3 = *(undefined1 *)(iVar9 + 1);
        *(undefined1 *)(iVar6 + 0xc) = *(undefined1 *)(iVar8 + iVar7);
        *(byte *)(iVar6 + 0xe) = bVar2;
        *(undefined1 *)(iVar6 + 0xd) = uVar3;
        *(byte *)(iVar5 + 0x1435) = bVar1 | bVar2;
        return 0;
      }
      if (*(char *)(iVar5 + 0x1d) == '\0') {
        iVar7 = 1;
        goto LAB_000e9de8;
      }
      if (*(char *)(iVar5 + 0x1e) == '\0') {
        iVar7 = 2;
        goto LAB_000e9de8;
      }
      if (*(char *)(iVar5 + 0x1f) == '\0') {
        iVar7 = 3;
        goto LAB_000e9de8;
      }
    }
    uVar4 = 0xfffffffd;
  }
  return uVar4;
}

