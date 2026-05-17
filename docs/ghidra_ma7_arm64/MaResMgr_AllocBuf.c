/* MaResMgr_AllocBuf @ 00231050 152B */


/* YAMAHA::MaResMgr_AllocBuf(_MARESMGRALLOCBUF*) */

undefined8 YAMAHA::MaResMgr_AllocBuf(_MARESMGRALLOCBUF *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = DAT_00748f10;
  if (param_1 == (_MARESMGRALLOCBUF *)0x0) {
    return 0xfffffffe;
  }
  uVar2 = (ulong)*(byte *)(DAT_00748f10 + 0x1420);
  if (*(byte *)(DAT_00748f10 + 0x1420) != 0) {
    if (*(char *)(DAT_00748f10 + 0x1421) == '\0') {
      uVar2 = 1;
    }
    else if (*(char *)(DAT_00748f10 + 0x1422) == '\0') {
      uVar2 = 2;
    }
    else if (*(char *)(DAT_00748f10 + 0x1423) == '\0') {
      uVar2 = 3;
    }
    else {
      if (*(char *)(DAT_00748f10 + 0x1424) != '\0') {
        return 0xfffffffd;
      }
      uVar2 = 4;
    }
  }
  param_1[0xc] = SUB81(uVar2,0);
  *(ulong *)param_1 = lVar1 + uVar2 * 0x400 + 0x20;
  *(undefined1 *)(lVar1 + uVar2 + 0x1420) = 1;
  return 0;
}

