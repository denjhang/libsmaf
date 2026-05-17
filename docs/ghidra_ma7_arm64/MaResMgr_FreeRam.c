/* MaResMgr_FreeRam @ 0023121c 264B */


/* YAMAHA::MaResMgr_FreeRam(unsigned int, unsigned int) */

undefined8 YAMAHA::MaResMgr_FreeRam(uint param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte bVar8;
  
  lVar5 = DAT_00748f10;
  if ((param_1 < 4) && (param_2 < 0x4001)) {
    uVar7 = (ulong)param_1;
    uVar6 = 0xffffffff;
    if (*(char *)(DAT_00748f10 + uVar7 + 0x1c) != '\0') {
      lVar2 = DAT_00748f10 + uVar7 * 3;
      bVar3 = *(byte *)(lVar2 + 0xd);
      if (param_2 == 0x4000) {
        bVar8 = *(byte *)(lVar2 + 0xe);
        *(undefined1 *)(DAT_00748f10 + uVar7 + 0x1c) = 0;
        bVar8 = ~bVar8;
        *(undefined1 *)(lVar2 + 0xd) = 0;
        *(undefined1 *)(lVar2 + 0xe) = 0;
      }
      else {
        uVar4 = param_2 >> 0xc;
        if (bVar3 < uVar4) {
          return 0xfffffffe;
        }
        iVar1 = (uint)bVar3 + (uint)*(byte *)(lVar2 + 0xc);
        if (uVar4 == 0) {
          bVar8 = 0xff;
        }
        else {
          bVar8 = (byte)(1 << (ulong)(iVar1 - 1U & 0x1f));
          if (1 < uVar4) {
            bVar8 = bVar8 | (byte)(1 << (ulong)(iVar1 - 2U & 0x1f));
            if (2 < uVar4) {
              bVar8 = bVar8 | (byte)(1 << (ulong)(iVar1 - 3U & 0x1f));
            }
          }
          bVar8 = ~bVar8;
        }
        *(byte *)(lVar2 + 0xd) = bVar3 - (char)uVar4;
        *(byte *)(lVar2 + 0xe) = bVar8 & *(byte *)(lVar2 + 0xe);
        if (bVar3 == uVar4) {
          *(undefined1 *)(lVar5 + uVar7 + 0x1c) = 0;
        }
      }
      uVar6 = 0;
      *(byte *)(lVar5 + 0x1435) = bVar8 & *(byte *)(lVar5 + 0x1435);
    }
    return uVar6;
  }
  return 0xfffffffe;
}

