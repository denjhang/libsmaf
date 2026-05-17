/* MaResMgr_AllocSfx @ 000ea460 44B */


/* YAMAHA::MaResMgr_AllocSfx(unsigned int) */

undefined4 YAMAHA::MaResMgr_AllocSfx(uint param_1)

{
  int iVar1;
  
  if (1 < param_1) {
    return 0xfffffffe;
  }
  iVar1 = *(int *)(DAT_000ea48c + 0xea46a) + param_1;
  if (*(char *)(iVar1 + 0x1429) != '\0') {
    return 0xfffffffd;
  }
  *(undefined1 *)(iVar1 + 0x1429) = 1;
  return 0;
}

