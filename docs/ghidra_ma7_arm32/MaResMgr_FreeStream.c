/* MaResMgr_FreeStream @ 000ea20c 178B */


/* YAMAHA::MaResMgr_FreeStream(_MASTMINFO*) */

undefined4 YAMAHA::MaResMgr_FreeStream(_MASTMINFO *param_1)

{
  _MASTMINFO _Var1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_1 == (_MASTMINFO *)0x0) || (*param_1 == (_MASTMINFO)0x0)) {
    return 0xfffffffe;
  }
  _Var1 = (_MASTMINFO)((char)*param_1 + -1);
  *param_1 = _Var1;
  if (((byte)_Var1 & 0x7f) == 0) {
    uVar2 = (uint)(byte)param_1[0x18];
    piVar3 = (int *)(DAT_000ea2c0 + 0xea234);
    *param_1 = (_MASTMINFO)0x0;
    param_1[0x18] = (_MASTMINFO)0x4;
    iVar4 = *piVar3;
    param_1[0x2c] = (_MASTMINFO)0x4;
    if (*(char *)(iVar4 + uVar2 + 0x142b) == '\x01') {
      if (uVar2 == 0) {
        if ((*(byte *)(iVar4 + 0x142f) & 3) != 3) {
          return 0xffffffff;
        }
        *(undefined1 *)(iVar4 + 0x142b) = 0;
        *(byte *)(iVar4 + 0x142f) = *(byte *)(iVar4 + 0x142f) & 0xc;
        *(undefined1 *)(iVar4 + 0x142c) = 0;
      }
      else {
        if (uVar2 != 2) {
          return 0xfffffffe;
        }
        if ((*(byte *)(iVar4 + 0x142f) & 0xc) != 0xc) {
          return 0xffffffff;
        }
        *(undefined1 *)(iVar4 + 0x142d) = 0;
        *(byte *)(iVar4 + 0x142f) = *(byte *)(iVar4 + 0x142f) & 3;
        *(undefined1 *)(iVar4 + 0x142e) = 0;
      }
    }
    else {
      if ((1 << uVar2 & 0xffU & (uint)*(byte *)(iVar4 + 0x142f)) == 0) {
        return 0xffffffff;
      }
      *(byte *)(iVar4 + 0x142f) = *(byte *)(iVar4 + 0x142f) & ~(byte)(1 << uVar2);
    }
  }
  return 0;
}

