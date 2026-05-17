/* MaResMgr_AllocRam @ 00231128 244B */


/* YAMAHA::MaResMgr_AllocRam(_MARESMGRALLOCRAM*) */

undefined8 YAMAHA::MaResMgr_AllocRam(_MARESMGRALLOCRAM *param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  lVar6 = DAT_00748f10;
  if (param_1 == (_MARESMGRALLOCRAM *)0x0) {
    uVar7 = 0xfffffffe;
  }
  else {
    if (*(byte *)(DAT_00748f10 + 0x1435) != 0xf) {
      uVar8 = (ulong)*(byte *)(DAT_00748f10 + 0x1c);
      if (*(byte *)(DAT_00748f10 + 0x1c) != 0) {
        if (*(char *)(DAT_00748f10 + 0x1d) == '\0') {
          uVar8 = 1;
        }
        else if (*(char *)(DAT_00748f10 + 0x1e) == '\0') {
          uVar8 = 2;
        }
        else {
          if (*(char *)(DAT_00748f10 + 0x1f) != '\0') {
            return 0xfffffffd;
          }
          uVar8 = 3;
        }
      }
      lVar1 = DAT_00748f10 + uVar8;
      lVar2 = DAT_00748f10 + uVar8 * 3;
      *(uint *)param_1 =
           ((byte)(&DAT_0052dda0)[(ulong)*(byte *)(DAT_00748f10 + 0x1435) * 3] + 0x10) * 0x1000;
      bVar3 = *(byte *)(lVar6 + 0x1435);
      param_1[8] = SUB81(uVar8,0);
      *(uint *)(param_1 + 4) = (uint)(byte)(&DAT_0052dda1)[(ulong)bVar3 * 3] << 0xc;
      *(undefined1 *)(lVar1 + 0x1c) = 1;
      bVar3 = *(byte *)(lVar6 + 0x1435);
      lVar1 = (ulong)bVar3 * 3;
      bVar4 = (&DAT_0052dda2)[lVar1];
      uVar5 = (&DAT_0052dda1)[lVar1];
      *(undefined *)(lVar2 + 0xc) = (&DAT_0052dda0)[lVar1];
      *(undefined1 *)(lVar2 + 0xd) = uVar5;
      *(byte *)(lVar2 + 0xe) = bVar4;
      *(byte *)(lVar6 + 0x1435) = bVar4 | bVar3;
      return 0;
    }
    uVar7 = 0xfffffffd;
  }
  return uVar7;
}

