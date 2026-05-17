/* MaResMgr_FreeSequence @ 00230fe0 112B */


/* YAMAHA::MaResMgr_FreeSequence(unsigned int) */

undefined8 YAMAHA::MaResMgr_FreeSequence(uint param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = DAT_00748f10;
  if (param_1 < 0x16) {
    uVar1 = 1 << (ulong)(param_1 & 0x1f);
    uVar3 = 0xffffffff;
    if ((uVar1 & *(uint *)(DAT_00748f10 + 0x18)) != 0) {
      uVar1 = *(uint *)(DAT_00748f10 + 0x18) & (uVar1 ^ 0xffffffff);
      *(uint *)(DAT_00748f10 + 0x18) = uVar1;
      if (param_1 == 0) {
        uVar3 = 0;
        *(undefined1 *)(lVar2 + 0x1434) = 0;
      }
      else {
        uVar3 = 0;
        if ((param_1 < 5) && ((uVar1 & 0x1e) == 0)) {
          *(undefined1 *)(lVar2 + 0x1434) = 0;
        }
      }
    }
  }
  else {
    uVar3 = 0xfffffffe;
  }
  return uVar3;
}

