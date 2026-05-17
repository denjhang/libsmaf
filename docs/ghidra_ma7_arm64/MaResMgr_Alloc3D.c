/* MaResMgr_Alloc3D @ 002317bc 120B */


/* YAMAHA::MaResMgr_Alloc3D(unsigned int*) */

undefined8 YAMAHA::MaResMgr_Alloc3D(uint *param_1)

{
  uint uVar1;
  
  if (param_1 == (uint *)0x0) {
    return 0xfffffffe;
  }
  uVar1 = (uint)*(byte *)(DAT_00748f10 + 0x1425);
  if (*(byte *)(DAT_00748f10 + 0x1425) != 0) {
    if (*(char *)(DAT_00748f10 + 0x1426) == '\0') {
      uVar1 = 1;
    }
    else if (*(char *)(DAT_00748f10 + 0x1427) == '\0') {
      uVar1 = 2;
    }
    else {
      if (*(char *)(DAT_00748f10 + 0x1428) != '\0') {
        return 0xfffffffd;
      }
      uVar1 = 3;
    }
  }
  *(undefined1 *)(DAT_00748f10 + (ulong)(byte)uVar1 + 0x1425) = 1;
  *param_1 = uVar1;
  return 0;
}

