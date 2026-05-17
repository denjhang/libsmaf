/* MaResMgr_FreeStream @ 002315ac 252B */


/* YAMAHA::MaResMgr_FreeStream(_MASTMINFO*) */

undefined8 YAMAHA::MaResMgr_FreeStream(_MASTMINFO *param_1)

{
  long lVar1;
  _MASTMINFO _Var2;
  uint uVar3;
  long lVar4;
  
  if ((param_1 == (_MASTMINFO *)0x0) || (*param_1 == (_MASTMINFO)0x0)) {
    return 0xfffffffe;
  }
  _Var2 = (_MASTMINFO)((char)*param_1 - 1);
  *param_1 = _Var2;
  if (((byte)_Var2 & 0x7f) != 0) {
    return 0;
  }
  _Var2 = param_1[0x18];
  *param_1 = (_MASTMINFO)0x0;
  param_1[0x18] = (_MASTMINFO)0x4;
  lVar4 = DAT_00748f10;
  lVar1 = DAT_00748f10 + (ulong)(byte)_Var2;
  param_1[0x2c] = (_MASTMINFO)0x4;
  if (*(char *)(lVar1 + 0x142b) == '\x01') {
    if (_Var2 == (_MASTMINFO)0x0) {
      if ((*(byte *)(lVar4 + 0x142f) & 3) != 3) {
        return 0xffffffff;
      }
      *(undefined1 *)(lVar4 + 0x142b) = 0;
      *(undefined1 *)(lVar4 + 0x142c) = 0;
      *(byte *)(lVar4 + 0x142f) = *(byte *)(lVar4 + 0x142f) & 0xc;
    }
    else {
      if ((byte)_Var2 != 2) {
        return 0xfffffffe;
      }
      if ((*(byte *)(lVar4 + 0x142f) & 0xc) != 0xc) {
        return 0xffffffff;
      }
      *(undefined1 *)(lVar4 + 0x142d) = 0;
      *(undefined1 *)(lVar4 + 0x142e) = 0;
      *(byte *)(lVar4 + 0x142f) = *(byte *)(lVar4 + 0x142f) & 3;
    }
  }
  else {
    uVar3 = 1 << (ulong)((byte)_Var2 & 0x1f);
    if ((uVar3 & 0xff & (uint)*(byte *)(lVar4 + 0x142f)) == 0) {
      return 0xffffffff;
    }
    *(byte *)(lVar4 + 0x142f) = *(byte *)(lVar4 + 0x142f) & ((byte)uVar3 ^ 0xff);
  }
  return 0;
}

