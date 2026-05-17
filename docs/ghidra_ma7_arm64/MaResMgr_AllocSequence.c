/* MaResMgr_AllocSequence @ 00230ef0 240B */


/* YAMAHA::MaResMgr_AllocSequence(unsigned int, unsigned int) */

undefined8 YAMAHA::MaResMgr_AllocSequence(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = DAT_00748f10;
  if ((param_1 < 0x16) && (param_2 < 2)) {
    uVar2 = 1 << (ulong)(param_1 & 0x1f);
    uVar4 = 0xfffffffd;
    uVar1 = *(uint *)(DAT_00748f10 + 0x18);
    if ((uVar2 & uVar1) == 0) {
      if (param_1 == 0) {
        if ((uVar1 & 0x1e) != 0) {
          return 0xfffffffd;
        }
        if (param_2 == 1) {
          if (*(char *)(DAT_00748f10 + 0x142f) != '\0') {
            return 0xfffffffd;
          }
          if ((*(uint *)(DAT_00748f10 + 0x1430) & 0xff0000ff) != 0) {
            return 0xfffffffd;
          }
          *(undefined1 *)(DAT_00748f10 + 0x1434) = 1;
        }
      }
      else if (param_1 < 5) {
        if ((uVar1 & 1) != 0) {
          return 0xfffffffd;
        }
        if (param_2 == 1) {
          if (*(char *)(DAT_00748f10 + 0x142f) != '\0') {
            return 0xfffffffd;
          }
          if ((*(uint *)(DAT_00748f10 + 0x1430) & 0xff0000ff) != 0) {
            return 0xfffffffd;
          }
          if ((uVar1 & 0x1e) != 0) {
            return 0xfffffffd;
          }
          *(undefined1 *)(DAT_00748f10 + 0x1434) = 1;
        }
      }
      else if (((1 < param_1 - 0x13) && (param_1 != 10)) &&
              (*(char *)(DAT_00748f10 + 0x1434) == '\x01')) {
        return 0xfffffffd;
      }
      uVar4 = 0;
      *(uint *)(lVar3 + 0x18) = uVar2 | uVar1;
    }
  }
  else {
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}

