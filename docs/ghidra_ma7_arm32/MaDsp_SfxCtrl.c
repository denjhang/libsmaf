/* MaDsp_SfxCtrl @ 000d7984 3086B */


/* YAMAHA::MaDsp_SfxCtrl(unsigned int, unsigned int, unsigned int, void*) */

int YAMAHA::MaDsp_SfxCtrl(uint param_1,uint param_2,uint param_3,void *param_4)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined1 uVar12;
  undefined2 *puVar13;
  undefined2 local_1c [4];
  
  puVar13 = (undefined2 *)(DAT_000d8594 + 0xd798e);
  local_1c[0] = *puVar13;
  iVar10 = DAT_000d8598 + 0xd79a0;
  if (param_1 != 0) {
    if ((param_1 == 1) && (param_4 != (void *)0x0)) {
      if ((char *)param_2 == "50E") {
        piVar11 = *(int **)(iVar10 + DAT_000d859c);
        if ((char)piVar11[2] == -2) {
          uVar4 = 0;
          uVar12 = 1;
        }
        else if ((char)piVar11[2] == '\0') {
          uVar4 = (undefined1)((uint)*(undefined4 *)(puVar13 + *piVar11 * 2 + 0x52) >> 8);
          uVar12 = (undefined1)*(undefined4 *)(puVar13 + *piVar11 * 2 + 0x52);
        }
        else {
          uVar4 = (undefined1)((uint)*(undefined4 *)(puVar13 + *piVar11 * 2 + 0x6a) >> 8);
          uVar12 = (undefined1)*(undefined4 *)(puVar13 + *piVar11 * 2 + 0x6a);
        }
        *(undefined1 *)param_4 = uVar4;
        *(undefined1 *)((int)param_4 + 1) = uVar12;
        *(char *)((int)param_4 + 2) = (char)*(undefined2 *)((int)piVar11 + 0x2e6);
        *(char *)((int)param_4 + 3) = (char)(short)piVar11[0xba];
        *(char *)((int)param_4 + 4) = (char)*(undefined2 *)((int)piVar11 + 0x2ea);
        *(char *)((int)param_4 + 5) = (char)(short)piVar11[0xbb];
        *(char *)((int)param_4 + 6) = (char)*(undefined2 *)((int)piVar11 + 0x2ee);
        *(char *)((int)param_4 + 7) = (char)(short)piVar11[0xbc];
        *(char *)((int)param_4 + 8) = (char)*(undefined2 *)((int)piVar11 + 0x2f2);
        *(char *)((int)param_4 + 9) = (char)(short)piVar11[0xbd];
        *(char *)((int)param_4 + 10) = (char)*(undefined2 *)((int)piVar11 + 0x2f6);
        *(char *)((int)param_4 + 0xb) = (char)(short)piVar11[0xbe];
        *(char *)((int)param_4 + 0xc) = (char)*(undefined2 *)((int)piVar11 + 0x346);
        *(char *)((int)param_4 + 0xd) = (char)(short)piVar11[0xd2];
        *(char *)((int)param_4 + 0x10) = (char)*(undefined2 *)((int)piVar11 + 0x2fa);
        *(char *)((int)param_4 + 0x11) = (char)(short)piVar11[0xbf];
        *(char *)((int)param_4 + 0x12) = (char)*(undefined2 *)((int)piVar11 + 0x2fe);
        *(char *)((int)param_4 + 0x13) = (char)(short)piVar11[0xc0];
        *(char *)((int)param_4 + 0x14) = (char)*(undefined2 *)((int)piVar11 + 0x302);
        *(char *)((int)param_4 + 0x15) = (char)(short)piVar11[0xc1];
        return 0;
      }
      if ((char *)param_2 == "") {
        iVar10 = *(int *)(iVar10 + DAT_000d859c);
        cVar2 = *(char *)(iVar10 + 9);
        if (cVar2 == -2) {
          uVar4 = 0;
          uVar12 = 1;
        }
        else if (cVar2 == '\0') {
          uVar4 = (undefined1)((uint)*(undefined4 *)(puVar13 + *(int *)(iVar10 + 0xc) * 2 + 4) >> 8)
          ;
          uVar12 = (undefined1)*(undefined4 *)(puVar13 + *(int *)(iVar10 + 0xc) * 2 + 4);
        }
        else if (cVar2 == '\x01') {
          uVar4 = (undefined1)
                  ((uint)*(undefined4 *)(puVar13 + *(int *)(iVar10 + 0xc) * 2 + 0x22) >> 8);
          uVar12 = (undefined1)*(undefined4 *)(puVar13 + *(int *)(iVar10 + 0xc) * 2 + 0x22);
        }
        else if (cVar2 == '\x02') {
          uVar4 = (undefined1)
                  ((uint)*(undefined4 *)(puVar13 + *(int *)(iVar10 + 0xc) * 2 + 0x2c) >> 8);
          uVar12 = (undefined1)*(undefined4 *)(puVar13 + *(int *)(iVar10 + 0xc) * 2 + 0x2c);
        }
        else if (cVar2 == '\x03') {
          uVar8 = *(undefined4 *)(DAT_000d85a8 + *(int *)(iVar10 + 0xc) * 4 + 0xd8486);
          uVar4 = (undefined1)((uint)uVar8 >> 8);
          uVar12 = (undefined1)uVar8;
        }
        else if (cVar2 == '\x04') {
          uVar8 = *(undefined4 *)(DAT_000d85ac + *(int *)(iVar10 + 0xc) * 4 + 0xd84b0);
          uVar4 = (undefined1)((uint)uVar8 >> 8);
          uVar12 = (undefined1)uVar8;
        }
        else if (cVar2 == '\x05') {
          uVar8 = *(undefined4 *)(DAT_000d85b0 + *(int *)(iVar10 + 0xc) * 4 + 0xd84d4);
          uVar4 = (undefined1)((uint)uVar8 >> 8);
          uVar12 = (undefined1)uVar8;
        }
        else if (cVar2 == '\x06') {
          uVar8 = *(undefined4 *)(DAT_000d85b4 + *(int *)(iVar10 + 0xc) * 4 + 0xd84f8);
          uVar4 = (undefined1)((uint)uVar8 >> 8);
          uVar12 = (undefined1)uVar8;
        }
        else if (cVar2 == '\a') {
          uVar8 = *(undefined4 *)(DAT_000d85a0 + *(int *)(iVar10 + 0xc) * 4 + 0xd7ab2);
          uVar4 = (undefined1)((uint)uVar8 >> 8);
          uVar12 = (undefined1)uVar8;
        }
        else {
          uVar12 = 0;
          uVar4 = 0;
        }
        *(undefined1 *)param_4 = uVar4;
        *(undefined1 *)((int)param_4 + 1) = uVar12;
        *(char *)((int)param_4 + 2) = (char)*(undefined2 *)(iVar10 + 0x306);
        *(char *)((int)param_4 + 3) = (char)*(undefined2 *)(iVar10 + 0x308);
        *(char *)((int)param_4 + 4) = (char)*(undefined2 *)(iVar10 + 0x30a);
        *(char *)((int)param_4 + 5) = (char)*(undefined2 *)(iVar10 + 0x30c);
        *(char *)((int)param_4 + 6) = (char)*(undefined2 *)(iVar10 + 0x30e);
        *(char *)((int)param_4 + 7) = (char)*(undefined2 *)(iVar10 + 0x310);
        *(char *)((int)param_4 + 8) = (char)*(undefined2 *)(iVar10 + 0x312);
        *(char *)((int)param_4 + 9) = (char)*(undefined2 *)(iVar10 + 0x314);
        *(char *)((int)param_4 + 10) = (char)*(undefined2 *)(iVar10 + 0x316);
        *(char *)((int)param_4 + 0xb) = (char)*(undefined2 *)(iVar10 + 0x318);
        *(char *)((int)param_4 + 0xc) = (char)*(undefined2 *)(iVar10 + 0x34a);
        *(char *)((int)param_4 + 0xd) = (char)*(undefined2 *)(iVar10 + 0x34c);
        *(char *)((int)param_4 + 0xe) = (char)*(undefined2 *)(iVar10 + 0x34e);
        *(char *)((int)param_4 + 0xf) = (char)*(undefined2 *)(iVar10 + 0x350);
        *(char *)((int)param_4 + 0x10) = (char)*(undefined2 *)(iVar10 + 0x31a);
        *(char *)((int)param_4 + 0x11) = (char)*(undefined2 *)(iVar10 + 0x31c);
        *(char *)((int)param_4 + 0x12) = (char)*(undefined2 *)(iVar10 + 0x31e);
        *(char *)((int)param_4 + 0x13) = (char)*(undefined2 *)(iVar10 + 800);
        *(char *)((int)param_4 + 0x14) = (char)*(undefined2 *)(iVar10 + 0x322);
        *(char *)((int)param_4 + 0x15) = (char)*(undefined2 *)(iVar10 + 0x324);
        return 0;
      }
    }
    return -2;
  }
  if (param_4 == (void *)0x0) {
    return -2;
  }
  if ((char *)param_2 == "") {
    if ((param_3 & 3) == 3) {
      uVar6 = (uint)CONCAT11(*(undefined1 *)param_4,*(undefined1 *)((int)param_4 + 1));
      iVar7 = 0;
      while (((((iVar5 = iVar7, uVar6 != *(uint *)(puVar13 + 2) &&
                (iVar5 = iVar7 + 1, uVar6 != *(uint *)(puVar13 + 4))) &&
               (iVar5 = iVar7 + 2, uVar6 != *(uint *)(puVar13 + 6))) &&
              ((((iVar5 = iVar7 + 3, uVar6 != *(uint *)(puVar13 + 8) &&
                 (iVar5 = iVar7 + 4, uVar6 != *(uint *)(puVar13 + 10))) &&
                ((iVar5 = iVar7 + 5, uVar6 != *(uint *)(puVar13 + 0xc) &&
                 ((iVar5 = iVar7 + 6, uVar6 != *(uint *)(puVar13 + 0xe) &&
                  (iVar5 = iVar7 + 7, uVar6 != *(uint *)(puVar13 + 0x10))))))) &&
               (iVar5 = iVar7 + 8, uVar6 != *(uint *)(puVar13 + 0x12))))) &&
             (((iVar5 = iVar7 + 9, uVar6 != *(uint *)(puVar13 + 0x14) &&
               (iVar5 = iVar7 + 10, uVar6 != *(uint *)(puVar13 + 0x16))) &&
              (iVar5 = iVar7 + 0xb, uVar6 != *(uint *)(puVar13 + 0x18)))))) {
        puVar1 = (uint *)(puVar13 + 0x1a);
        puVar13 = puVar13 + 0x1a;
        iVar5 = iVar7 + 0xc;
        if (uVar6 == *puVar1) break;
        iVar7 = iVar7 + 0xd;
        if (iVar7 == 0x27) {
          return -2;
        }
      }
      if (iVar5 == 0) {
        iVar7 = *(int *)(iVar10 + DAT_000d859c);
        *(undefined4 *)(iVar7 + 0xc) = 0;
        *(undefined1 *)(iVar7 + 9) = 0xff;
      }
      else if (iVar5 == 1) {
        iVar7 = *(int *)(iVar10 + DAT_000d859c);
        *(undefined1 *)(iVar7 + 9) = 0xfe;
        *(undefined4 *)(iVar7 + 0xc) = 0;
      }
      else if (iVar5 < 0x10) {
        iVar7 = *(int *)(iVar10 + DAT_000d859c);
        *(int *)(iVar7 + 0xc) = iVar5 + -1;
        *(undefined1 *)(iVar7 + 9) = 0;
      }
      else if (iVar5 < 0x15) {
        iVar7 = *(int *)(iVar10 + DAT_000d859c);
        *(int *)(iVar7 + 0xc) = iVar5 + -0x10;
        *(undefined1 *)(iVar7 + 9) = 1;
      }
      else if (iVar5 < 0x17) {
        iVar7 = *(int *)(iVar10 + DAT_000d859c);
        *(int *)(iVar7 + 0xc) = iVar5 + -0x15;
        *(undefined1 *)(iVar7 + 9) = 2;
      }
      else if (iVar5 < 0x1c) {
        iVar7 = *(int *)(iVar10 + DAT_000d859c);
        *(int *)(iVar7 + 0xc) = iVar5 + -0x17;
        *(undefined1 *)(iVar7 + 9) = 3;
      }
      else if (iVar5 < 0x1f) {
        iVar7 = *(int *)(iVar10 + DAT_000d859c);
        *(int *)(iVar7 + 0xc) = iVar5 + -0x1c;
        *(undefined1 *)(iVar7 + 9) = 4;
      }
      else if (iVar5 < 0x22) {
        iVar7 = *(int *)(iVar10 + DAT_000d859c);
        *(int *)(iVar7 + 0xc) = iVar5 + -0x1f;
        *(undefined1 *)(iVar7 + 9) = 5;
      }
      else if (iVar5 < 0x24) {
        iVar7 = *(int *)(iVar10 + DAT_000d859c);
        *(int *)(iVar7 + 0xc) = iVar5 + -0x22;
        *(undefined1 *)(iVar7 + 9) = 6;
      }
      else if (iVar5 != 0x26) {
        iVar7 = *(int *)(iVar10 + DAT_000d859c);
        *(int *)(iVar7 + 0xc) = iVar5 + -0x24;
        *(undefined1 *)(iVar7 + 9) = 7;
      }
      iVar7 = lup_calc('\x02',0xfd);
      if (iVar7 < 0) {
        return iVar7;
      }
      lup_calc('\x05','\x10');
    }
    if ((int)param_3 < 0) {
      lup_calc('\x02',0xfd);
      iVar10 = *(int *)(iVar10 + DAT_000d859c);
      *(undefined2 *)(iVar10 + 0x34a) = 0x7f;
      *(undefined2 *)(iVar10 + 0x34c) = 0x40;
      *(undefined2 *)(iVar10 + 0x34e) = 0;
      lup_calc('\x05','\x02');
      lup_calc('\x05','\x04');
    }
    else {
      if ((int)(param_3 << 0x1d) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x306) = (ushort)*(byte *)((int)param_4 + 2);
        iVar7 = lup_calc('\x02','\0');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0x1c) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x308) = (ushort)*(byte *)((int)param_4 + 3);
        iVar7 = lup_calc('\x02','\x01');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0x1b) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x30a) = (ushort)*(byte *)((int)param_4 + 4);
        iVar7 = lup_calc('\x02','\x02');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0x1a) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x30c) = (ushort)*(byte *)((int)param_4 + 5);
        iVar7 = lup_calc('\x02','\x03');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0x19) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x30e) = (ushort)*(byte *)((int)param_4 + 6);
        iVar7 = lup_calc('\x02','\x04');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0x18) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x310) = (ushort)*(byte *)((int)param_4 + 7);
        iVar7 = lup_calc('\x02','\x05');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0x17) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x312) = (ushort)*(byte *)((int)param_4 + 8);
        iVar7 = lup_calc('\x02','\x06');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0x16) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x314) = (ushort)*(byte *)((int)param_4 + 9);
        iVar7 = lup_calc('\x02','\a');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0x15) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x316) = (ushort)*(byte *)((int)param_4 + 10);
        iVar7 = lup_calc('\x02','\b');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0x14) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x318) = (ushort)*(byte *)((int)param_4 + 0xb)
        ;
        iVar7 = lup_calc('\x02','\t');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0x13) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x34a) = (ushort)*(byte *)((int)param_4 + 0xc)
        ;
        lup_calc('\x05','\x02');
      }
      if ((int)(param_3 << 0x12) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x34c) = (ushort)*(byte *)((int)param_4 + 0xd)
        ;
        lup_calc('\x05','\x03');
      }
      if ((int)(param_3 << 0x11) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x34e) = (ushort)*(byte *)((int)param_4 + 0xe)
        ;
        lup_calc('\x05','\x04');
      }
      if ((int)(param_3 << 0xf) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x31a) =
             (ushort)*(byte *)((int)param_4 + 0x10);
        iVar7 = lup_calc('\x02','\n');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0xe) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x31c) =
             (ushort)*(byte *)((int)param_4 + 0x11);
        iVar7 = lup_calc('\x02','\v');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0xd) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x31e) =
             (ushort)*(byte *)((int)param_4 + 0x12);
        iVar7 = lup_calc('\x02','\f');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0xc) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 800) = (ushort)*(byte *)((int)param_4 + 0x13);
        iVar7 = lup_calc('\x02','\r');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 0xb) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x322) =
             (ushort)*(byte *)((int)param_4 + 0x14);
        iVar7 = lup_calc('\x02','\x0e');
        if (iVar7 < 0) {
          return iVar7;
        }
      }
      if ((int)(param_3 << 10) < 0) {
        *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x324) =
             (ushort)*(byte *)((int)param_4 + 0x15);
        iVar10 = lup_calc('\x02','\x0f');
        if (iVar10 < 0) {
          return iVar10;
        }
      }
    }
    goto LAB_000d7c54;
  }
  if ("_ZN3ARM4CLpf15dAlLfoRate32000E" <= param_2) {
    if ((char *)param_2 != "N3ARM4CLpf13sdKTable32000E") {
      if ((char *)param_2 != "RM4CLpf16sdKExpTable32000E") {
        return -2;
      }
      if (5 < param_3) {
        return -2;
      }
      *(short *)(*(int *)(iVar10 + DAT_000d859c) + 0x18) = (short)param_3;
      lup_calc('\x05','\x05');
      return 0;
    }
    iVar10 = *(int *)(iVar10 + DAT_000d859c);
    uVar6 = *(int *)(DAT_000d85a4 + 0xd8c24) - 0x23;
    if (1 < uVar6) {
      param_3 = param_3 & 0xfffffbff;
    }
    *(undefined1 *)(iVar10 + 0x10) = 0;
    *(undefined4 *)(iVar10 + 0x14) = 0;
    if (1 < uVar6) {
      *(undefined1 *)((int)param_4 + 10) = 0;
    }
    if ((int)(param_3 << 0x1d) < 0) {
      *(ushort *)(iVar10 + 0x326) = (ushort)*(byte *)((int)param_4 + 2);
      iVar7 = lup_calc('\x0e','\0');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x1c) < 0) {
      *(ushort *)(iVar10 + 0x328) = (ushort)*(byte *)((int)param_4 + 3);
      iVar7 = lup_calc('\x0e','\x01');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x1b) < 0) {
      *(ushort *)(iVar10 + 0x32a) = (ushort)*(byte *)((int)param_4 + 4);
      iVar7 = lup_calc('\x0e','\x02');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x1a) < 0) {
      *(ushort *)(iVar10 + 0x32c) = (ushort)*(byte *)((int)param_4 + 5);
      iVar7 = lup_calc('\x0e','\x03');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x19) < 0) {
      *(ushort *)(iVar10 + 0x32e) = (ushort)*(byte *)((int)param_4 + 6);
      iVar7 = lup_calc('\x0e','\x04');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x18) < 0) {
      *(ushort *)(iVar10 + 0x330) = (ushort)*(byte *)((int)param_4 + 7);
      iVar7 = lup_calc('\x0e','\x05');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x17) < 0) {
      *(ushort *)(iVar10 + 0x332) = (ushort)*(byte *)((int)param_4 + 8);
      iVar7 = lup_calc('\x0e','\x06');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x16) < 0) {
      *(ushort *)(iVar10 + 0x334) = (ushort)*(byte *)((int)param_4 + 9);
      iVar7 = lup_calc('\x0e','\a');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x15) < 0) {
      *(ushort *)(iVar10 + 0x336) = (ushort)*(byte *)((int)param_4 + 10);
      iVar10 = lup_calc('\x0e','\b');
      if (iVar10 < 0) {
        return iVar10;
      }
    }
    if ((param_3 & 0x300) != 0) {
      FUN_000d7500(0);
      FUN_000d7500(1);
      FUN_000d7500(2);
      FUN_000d7500(3);
    }
    goto LAB_000d7c54;
  }
  if ((char *)param_2 != "50E") {
    return -2;
  }
  if ((param_3 & 3) == 3) {
    sVar3 = CONCAT11(*(undefined1 *)param_4,*(undefined1 *)((int)param_4 + 1));
    if (sVar3 == 0) {
      puVar9 = *(undefined4 **)(iVar10 + DAT_000d859c);
      *puVar9 = 0;
      *(undefined1 *)(puVar9 + 2) = 0xff;
    }
    else if (sVar3 == 1) {
      puVar9 = *(undefined4 **)(iVar10 + DAT_000d859c);
      *puVar9 = 0;
      *(undefined1 *)(puVar9 + 2) = 0xfe;
    }
    else {
      if (sVar3 == 0x200) {
        iVar7 = 4;
      }
      else if (sVar3 == 0x201) {
        iVar7 = 5;
      }
      else if (sVar3 == 0x202) {
        iVar7 = 6;
      }
      else if (sVar3 == 0x400) {
        iVar7 = 9;
      }
      else if (sVar3 == 0x1000) {
        iVar7 = 10;
      }
      else if (sVar3 == 0x1100) {
        iVar7 = 0xb;
      }
      else {
        if (sVar3 != 0x1300) {
          if (sVar3 == 0x1400) {
            iVar7 = 0xf;
          }
          else if (sVar3 == 0x1401) {
            iVar7 = 0x10;
          }
          else {
            if (sVar3 != 0x1402) {
              return -2;
            }
            iVar7 = 0x11;
          }
          piVar11 = *(int **)(iVar10 + DAT_000d859c);
          *piVar11 = iVar7 + -0xd;
          *(undefined1 *)(piVar11 + 2) = 1;
          goto LAB_000d7f04;
        }
        iVar7 = 0xc;
      }
      piVar11 = *(int **)(iVar10 + DAT_000d859c);
      *piVar11 = iVar7 + -1;
      *(undefined1 *)(piVar11 + 2) = 0;
    }
LAB_000d7f04:
    iVar7 = lup_calc('\v',0xfd);
    if (iVar7 < 0) {
      return iVar7;
    }
  }
  iVar7 = DAT_000d859c;
  if ((int)param_3 < 0) {
    lup_calc('\v',0xfd);
    iVar10 = *(int *)(iVar10 + iVar7);
    *(undefined2 *)(iVar10 + 0x346) = 0x7f;
    *(undefined2 *)(iVar10 + 0x348) = 0x40;
    lup_calc('\x05','\0');
  }
  else {
    if ((int)(param_3 << 0x1d) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2e6) = (ushort)*(byte *)((int)param_4 + 2);
      iVar7 = lup_calc('\v','\0');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x1c) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2e8) = (ushort)*(byte *)((int)param_4 + 3);
      iVar7 = lup_calc('\v','\x01');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x1b) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2ea) = (ushort)*(byte *)((int)param_4 + 4);
      iVar7 = lup_calc('\v','\x02');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x1a) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2ec) = (ushort)*(byte *)((int)param_4 + 5);
      iVar7 = lup_calc('\v','\x03');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x19) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2ee) = (ushort)*(byte *)((int)param_4 + 6);
      iVar7 = lup_calc('\v','\x04');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x18) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2f0) = (ushort)*(byte *)((int)param_4 + 7);
      iVar7 = lup_calc('\v','\x05');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x17) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2f2) = (ushort)*(byte *)((int)param_4 + 8);
      iVar7 = lup_calc('\v','\x06');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x16) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2f4) = (ushort)*(byte *)((int)param_4 + 9);
      iVar7 = lup_calc('\v','\a');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x15) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2f6) = (ushort)*(byte *)((int)param_4 + 10);
      iVar7 = lup_calc('\v','\b');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x14) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2f8) = (ushort)*(byte *)((int)param_4 + 0xb);
      iVar7 = lup_calc('\v','\t');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0x13) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x346) = (ushort)*(byte *)((int)param_4 + 0xc);
      lup_calc('\x05','\0');
    }
    if ((int)(param_3 << 0x12) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x348) = (ushort)*(byte *)((int)param_4 + 0xd);
      lup_calc('\x05','\x01');
    }
    if ((int)(param_3 << 0xf) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2fa) = (ushort)*(byte *)((int)param_4 + 0x10);
      iVar7 = lup_calc('\v','\n');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0xe) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2fc) = (ushort)*(byte *)((int)param_4 + 0x11);
      iVar7 = lup_calc('\v','\v');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0xd) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x2fe) = (ushort)*(byte *)((int)param_4 + 0x12);
      iVar7 = lup_calc('\v','\f');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0xc) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x300) = (ushort)*(byte *)((int)param_4 + 0x13);
      iVar7 = lup_calc('\v','\r');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 0xb) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x302) = (ushort)*(byte *)((int)param_4 + 0x14);
      iVar7 = lup_calc('\v','\x0e');
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if ((int)(param_3 << 10) < 0) {
      *(ushort *)(*(int *)(iVar10 + DAT_000d859c) + 0x304) = (ushort)*(byte *)((int)param_4 + 0x15);
      iVar10 = lup_calc('\v','\x0f');
      if (iVar10 < 0) {
        return iVar10;
      }
    }
  }
LAB_000d7c54:
  MaDevDrv_SendDspCoef(0,(uchar *)local_1c,2);
  return 0;
}

