/* lup_vkvc @ 000fd1e0 672B */


/* YAMAHA::lup_vkvc(unsigned char) */

void YAMAHA::lup_vkvc(uchar param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  
  iVar7 = DAT_000fd498;
  iVar6 = DAT_000fd488;
  iVar5 = DAT_000fd480 + 0xfd1ee;
  if (param_1 == '\x02') {
    iVar7 = *(int *)(iVar5 + DAT_000fd488);
    iVar6 = DAT_000fd4a0;
    if (*(short *)(iVar7 + 0x30a) != 1) {
      if (*(short *)(iVar7 + 0x30a) != 0) {
        lchk_prm(7,2);
        if (*(short *)(iVar7 + 0x30e) == 0) {
          return;
        }
        lset_iir('\x02','\x05',*(uchar *)(iVar7 + 0x30a),'@','\a',*(uchar **)(iVar5 + DAT_000fd49c),
                 *(uchar **)(iVar5 + DAT_000fd4a0));
        return;
      }
      if (*(short *)(iVar7 + 0x30e) == 0) {
        return;
      }
      uVar2 = '\f';
      uVar3 = '\x1e';
      puVar4 = *(uchar **)(iVar5 + DAT_000fd49c);
      uVar1 = '\0';
      goto LAB_000fd35a;
    }
    uVar2 = '\v';
    puVar4 = *(uchar **)(iVar5 + DAT_000fd49c);
  }
  else {
    if (param_1 < 3) {
      if (param_1 != '\0') {
        if (param_1 != '\x01') {
          return;
        }
        iVar6 = *(int *)(iVar5 + DAT_000fd488);
        if (*(short *)(iVar6 + 0x308) == 1) {
          if (*(short *)(iVar6 + 0x30e) == 0) {
            return;
          }
          uVar1 = '\v';
          uVar3 = '\x1e';
        }
        else {
          iVar7 = DAT_000fd48c;
          if (*(short *)(iVar6 + 0x308) == 0) goto LAB_000fd36e;
          lchk_prm(6,1);
          if (*(short *)(iVar6 + 0x30e) == 0) {
            return;
          }
          uVar1 = '\0';
          uVar3 = *(uchar *)(iVar6 + 0x308);
        }
        lset_iir('\0',uVar1,uVar3,'@','\0',*(uchar **)(iVar5 + DAT_000fd48c),
                 *(uchar **)(iVar5 + DAT_000fd48c));
        return;
      }
      iVar6 = *(int *)(iVar5 + DAT_000fd488);
      if (*(short *)(iVar6 + 0x306) == 1) {
        lset_iir('\0','\v','\x1e','@','\0',*(uchar **)(iVar5 + DAT_000fd490),
                 *(uchar **)(iVar5 + DAT_000fd490));
        return;
      }
      iVar7 = DAT_000fd490;
      if (*(short *)(iVar6 + 0x306) != 0) {
        lchk_prm(5,0);
        if (*(short *)(iVar6 + 0x30e) == 0) {
          return;
        }
        lset_iir('\0','\x01',*(uchar *)(iVar6 + 0x306),'@','\0',*(uchar **)(iVar5 + DAT_000fd490),
                 *(uchar **)(iVar5 + DAT_000fd490));
        return;
      }
LAB_000fd36e:
      lset_iir('\0','\f','\x1e','@','\0',*(uchar **)(iVar5 + iVar7),*(uchar **)(iVar5 + iVar7));
      return;
    }
    if (param_1 == '\x04') {
      iVar9 = *(int *)(iVar5 + DAT_000fd488);
      if (1 < *(ushort *)(iVar9 + 0x30e)) {
        *(undefined2 *)(iVar9 + 0x30e) = 1;
LAB_000fd2ee:
        lup_vkvc('\0');
        lup_vkvc('\x01');
        lup_vkvc('\x02');
        goto LAB_000fd300;
      }
      if (*(ushort *)(iVar9 + 0x30e) != 0) goto LAB_000fd2ee;
      lset_iir('\0','\f','\x1e','@','\0',*(uchar **)(iVar5 + DAT_000fd48c),
               *(uchar **)(iVar5 + DAT_000fd48c));
      lset_iir('\x02','\f','\x1e','@','\0',*(uchar **)(iVar5 + DAT_000fd494),
               *(uchar **)(iVar5 + iVar7));
      iVar7 = DAT_000fd49c;
      iVar6 = DAT_000fd4a0;
    }
    else {
      if (3 < param_1) {
        if (param_1 != 0xff) {
          return;
        }
        puVar8 = *(undefined1 **)(iVar5 + DAT_000fd484);
        *puVar8 = 1;
        iVar6 = *(int *)(iVar5 + iVar6);
        *(undefined2 *)(iVar6 + 0x4e) = 0xc000;
        *(undefined2 *)(iVar6 + 0x4c) = 0x4000;
        *(undefined2 *)(iVar6 + 0x84) = 0x4000;
        *(undefined2 *)(iVar6 + 0x86) = 0x4000;
        *(undefined2 *)(iVar6 + 0x88) = 0x4000;
        *(undefined2 *)(iVar6 + 0x8a) = 0x4000;
        *(undefined2 *)(iVar6 + 0x8c) = 0x4000;
        *(undefined2 *)(iVar6 + 0x8e) = 0x4000;
        lup_vkvc('\0');
        lup_vkvc('\x01');
        lup_vkvc('\x02');
        lup_vkvc('\x03');
        *puVar8 = 0;
        return;
      }
      iVar9 = *(int *)(iVar5 + DAT_000fd488);
LAB_000fd300:
      iVar6 = DAT_000fd498;
      if (*(short *)(iVar9 + 0x30c) != 1) {
        if (*(short *)(iVar9 + 0x30c) != 0) {
          lchk_prm(8,3);
          if (*(short *)(iVar9 + 0x30e) == 0) {
            return;
          }
          uVar3 = *(uchar *)(iVar9 + 0x30c);
          uVar1 = '\a';
          uVar2 = '\x04';
          puVar4 = *(uchar **)(iVar5 + DAT_000fd494);
          iVar6 = DAT_000fd498;
          goto LAB_000fd35a;
        }
        uVar2 = '\f';
        puVar4 = *(uchar **)(iVar5 + DAT_000fd494);
        goto LAB_000fd39c;
      }
      iVar7 = DAT_000fd494;
      if (*(short *)(iVar9 + 0x30e) == 0) {
        return;
      }
    }
    uVar2 = '\v';
    puVar4 = *(uchar **)(iVar5 + iVar7);
  }
LAB_000fd39c:
  uVar1 = '\0';
  uVar3 = '\x1e';
LAB_000fd35a:
  lset_iir('\x02',uVar2,uVar3,'@',uVar1,puVar4,*(uchar **)(iVar5 + iVar6));
  return;
}

