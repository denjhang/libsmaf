/* MaResMgr_FreeSequence @ 000e9cc8 82B */


/* YAMAHA::MaResMgr_FreeSequence(unsigned int) */

undefined4 YAMAHA::MaResMgr_FreeSequence(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (0x15 < param_1) {
    return 0xfffffffe;
  }
  uVar2 = 1 << (param_1 & 0xff);
  iVar1 = *(int *)(DAT_000e9d1c + 0xe9cda);
  if ((uVar2 & *(uint *)(iVar1 + 0x18)) == 0) {
    return 0xffffffff;
  }
  uVar2 = *(uint *)(iVar1 + 0x18) & ~uVar2;
  *(uint *)(iVar1 + 0x18) = uVar2;
  if (param_1 == 0) {
    *(undefined1 *)(iVar1 + 0x1434) = 0;
    return 0;
  }
  if ((param_1 < 5) && ((uVar2 & 0x1e) == 0)) {
    *(undefined1 *)(iVar1 + 0x1434) = 0;
    return 0;
  }
  return 0;
}

