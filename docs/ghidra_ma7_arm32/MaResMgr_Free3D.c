/* MaResMgr_Free3D @ 000ea3ec 44B */


/* YAMAHA::MaResMgr_Free3D(unsigned int) */

undefined4 YAMAHA::MaResMgr_Free3D(uint param_1)

{
  int iVar1;
  
  if (3 < param_1) {
    return 0xfffffffe;
  }
  iVar1 = param_1 + *(int *)(DAT_000ea418 + 0xea3f6);
  if (*(char *)(iVar1 + 0x1425) != '\x01') {
    return 0xffffffff;
  }
  *(undefined1 *)(iVar1 + 0x1425) = 0;
  return 0;
}

