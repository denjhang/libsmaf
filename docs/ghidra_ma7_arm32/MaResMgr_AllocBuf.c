/* MaResMgr_AllocBuf @ 000e9d20 92B */


/* YAMAHA::MaResMgr_AllocBuf(_MARESMGRALLOCBUF*) */

undefined4 YAMAHA::MaResMgr_AllocBuf(_MARESMGRALLOCBUF *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (_MARESMGRALLOCBUF *)0x0) {
    return 0xfffffffe;
  }
  iVar2 = *(int *)(DAT_000e9d7c + 0xe9d28);
  iVar1 = 0;
  if (*(char *)(iVar2 + 0x1420) != '\0') {
    if (*(char *)(iVar2 + 0x1421) == '\0') {
      iVar1 = 1;
    }
    else if (*(char *)(iVar2 + 0x1422) == '\0') {
      iVar1 = 2;
    }
    else if (*(char *)(iVar2 + 0x1423) == '\0') {
      iVar1 = 3;
    }
    else {
      iVar1 = 4;
      if (*(char *)(iVar2 + 0x1424) != '\0') {
        return 0xfffffffd;
      }
    }
  }
  param_1[8] = SUB41(iVar1,0);
  *(int *)param_1 = iVar2 + iVar1 * 0x400 + 0x20;
  *(undefined1 *)(iVar2 + iVar1 + 0x1420) = 1;
  return 0;
}

