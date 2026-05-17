/* MaMmfCnv_Seek @ 000b82c0 17186B */


/* YAMAHA::MaMmfCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined4 YAMAHA::MaMmfCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  ushort uVar10;
  int extraout_r1;
  int iVar11;
  uint *puVar12;
  byte *pbVar13;
  char *pcVar14;
  char cVar15;
  _MACNV_SEEK_INFO *p_Var16;
  code *pcVar17;
  uint uVar18;
  _MACNV_SEEK_INFO _Var19;
  byte bVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  char cVar24;
  undefined4 uVar25;
  byte *pbVar26;
  byte *pbVar27;
  uint *puVar28;
  uint uVar29;
  uint *puVar30;
  undefined4 *puVar31;
  undefined1 *puVar32;
  uint *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  int *piVar39;
  uint uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  uint uVar44;
  byte bVar45;
  int iVar46;
  int iVar47;
  bool bVar48;
  uint local_60;
  int local_54;
  int local_44;
  undefined1 local_30;
  int local_2c;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) || (iVar41 = *(int *)(param_1 + 4), iVar41 == 0)) ||
     (param_3 == (_MACNV_SEEK_INFO *)0x0)) {
    return 0xfffffffe;
  }
  if (*(char *)(iVar41 + 8) != '\x02') {
    return 0xffffffff;
  }
  if (*(uint *)(iVar41 + 0xc4c) < param_2) {
    return 0xfffffffe;
  }
  *(uint *)(iVar41 + 0xc3c) = param_2;
  *(undefined4 *)(iVar41 + 0xc40) = 0;
  *(undefined1 *)(iVar41 + 0x1c6e) = 0;
  *(undefined4 *)(iVar41 + 0x1c70) = 0;
  uVar25 = *(undefined4 *)(iVar41 + 0x24);
  iVar46 = iVar41 + 0x2090;
  iVar42 = iVar41 + 0x2190;
  __aeabi_uidivmod(param_2,uVar25);
  if (extraout_r1 == 0) {
    local_2c = __udivsi3(param_2,uVar25);
    local_44 = *(int *)(iVar41 + 0xc2c);
    if (local_44 == 5) goto LAB_000b874c;
LAB_000b8364:
    if (local_44 == 7) {
      *(undefined1 *)(iVar41 + 0xc51) = 100;
      local_30 = 0x28;
      local_60._0_1_ = 100;
    }
    else if (local_44 == 3) {
      local_30 = 0;
      *(undefined1 *)(iVar41 + 0xc51) = 0x2d;
      local_60._0_1_ = 0x5a;
    }
    else {
      local_30 = 0;
      local_60._0_1_ = 0x7f;
    }
  }
  else {
    local_2c = __udivsi3(param_2,uVar25);
    local_44 = *(int *)(iVar41 + 0xc2c);
    local_2c = local_2c + 1;
    if (local_44 != 5) goto LAB_000b8364;
LAB_000b874c:
    *(undefined1 *)(iVar41 + 0xc51) = 100;
    local_30 = 0;
    local_60._0_1_ = 100;
  }
  *(undefined2 *)(iVar41 + 0x1c68) = 0x2000;
  *(undefined1 *)(iVar41 + 0x1c6a) = 0x40;
  if (*(int *)(iVar41 + 0x1c9c) == 0) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(iVar41 + 0x1c6c) = uVar1;
  if (*(int *)(iVar41 + 0x1ca8) == 0) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = 0x40;
  }
  *(undefined1 *)(iVar41 + 0x1c6d) = uVar1;
  *(undefined4 *)(iVar41 + 0x1c58) = 0;
  *(undefined4 *)(iVar41 + 0x1c5c) = 0;
  *(int *)(iVar41 + 0x1c60) = 0;
  *(undefined4 *)(iVar41 + 0x1c64) = 0;
  *(undefined4 *)(iVar41 + 0x2590) = 0xffffffff;
  *(undefined4 *)(iVar41 + 0x26f8) = 0xffffffff;
  *(int *)(iVar41 + 0x25b0) = iVar41 + 0x25b4;
  *(undefined4 *)(iVar41 + 0x25b4) = 0xffffffff;
  *(undefined4 *)(iVar41 + 0x25d8) = 0xffffffff;
  *(int *)(iVar41 + 0x25d4) = iVar41 + 0x25d8;
  *(undefined4 *)(iVar41 + 0x25fc) = 0xffffffff;
  *(undefined4 **)(iVar41 + 0x25f8) = (undefined4 *)(iVar41 + 0x25fc);
  *(undefined4 *)(iVar41 + 0x2620) = 0xffffffff;
  *(int *)(iVar41 + 0x261c) = iVar41 + 0x2620;
  *(undefined4 *)(iVar41 + 0x2644) = 0xffffffff;
  *(int *)(iVar41 + 0x2640) = iVar41 + 0x2644;
  *(undefined4 *)(iVar41 + 0x2668) = 0xffffffff;
  *(int *)(iVar41 + 0x2664) = iVar41 + 0x2668;
  *(undefined4 *)(iVar41 + 0x268c) = 0xffffffff;
  *(int *)(iVar41 + 0x2688) = iVar41 + 0x268c;
  *(undefined4 *)(iVar41 + 0x26b0) = 0xffffffff;
  *(int *)(iVar41 + 0x26ac) = iVar41 + 0x26b0;
  *(undefined4 *)(iVar41 + 0x26d4) = 0xffffffff;
  *(undefined4 *)(iVar41 + 0x26f4) = 0;
  *(int *)(iVar41 + 0x26d0) = iVar41 + 0x26d4;
  iVar11 = 0xfc;
  *(undefined4 *)(iVar41 + 0x270c) = 0xffffffff;
  *(undefined4 **)(iVar41 + 0x2708) = (undefined4 *)(iVar41 + 0x270c);
  *(undefined4 *)(iVar41 + 0x2720) = 0xffffffff;
  *(undefined4 **)(iVar41 + 0x271c) = (undefined4 *)(iVar41 + 0x2720);
  *(undefined4 *)(iVar41 + 0x2734) = 0xffffffff;
  *(undefined4 *)(iVar41 + 0x2744) = 0;
  *(undefined4 **)(iVar41 + 0x2730) = (undefined4 *)(iVar41 + 0x2734);
  puVar31 = (undefined4 *)(iVar41 + 0x2748);
  do {
    *puVar31 = 0xffffffff;
    iVar11 = iVar11 + -9;
    puVar31[-1] = puVar31;
    puVar31[5] = 0xffffffff;
    puVar31[4] = puVar31 + 5;
    puVar31[10] = 0xffffffff;
    puVar31[9] = puVar31 + 10;
    puVar31[0xf] = 0xffffffff;
    puVar31[0xe] = puVar31 + 0xf;
    puVar31[0x14] = 0xffffffff;
    puVar31[0x13] = puVar31 + 0x14;
    puVar31[0x19] = 0xffffffff;
    puVar31[0x18] = puVar31 + 0x19;
    puVar31[0x1e] = 0xffffffff;
    puVar31[0x1d] = puVar31 + 0x1e;
    puVar31[0x23] = 0xffffffff;
    puVar31[0x22] = puVar31 + 0x23;
    puVar31[0x28] = 0xffffffff;
    puVar31[0x2c] = 0;
    puVar31[0x27] = puVar31 + 0x28;
    puVar31 = puVar31 + 0x2d;
  } while (iVar11 != 0);
  *(undefined4 *)(iVar41 + 0xc1c) = 0;
  *(undefined4 *)(iVar41 + 0xc24) = 0;
  puVar32 = (undefined1 *)(iVar41 + 0x1c77);
  *(int *)(iVar41 + 0xc20) = iVar41 + 0x2590;
  *(int *)(iVar41 + 0xc28) = iVar41 + 0x26f8;
  iVar11 = 0;
  iVar38 = iVar42;
  do {
    iVar47 = iVar42 + iVar11;
    *(undefined1 *)(iVar42 + iVar11) = 0;
    *(undefined1 *)(iVar47 + 7) = 100;
    iVar11 = iVar11 + 0x20;
    *(undefined1 *)(iVar47 + 1) = 0;
    *(undefined1 *)(iVar47 + 2) = 0;
    *(undefined1 *)(iVar47 + 3) = 0;
    *(undefined1 *)(iVar47 + 4) = 0x7f;
    *(undefined1 *)(iVar47 + 5) = 0x7f;
    *(undefined1 *)(iVar47 + 6) = 0;
    *(undefined1 *)(iVar38 + 8) = 0x40;
    *(undefined1 *)(iVar38 + 9) = 0x7f;
    *(undefined1 *)(iVar38 + 10) = 0;
    *(undefined1 *)(iVar38 + 0xb) = 1;
    *(undefined1 *)(iVar38 + 0xc) = 0x40;
    *(undefined1 *)(iVar38 + 0xd) = 2;
    *(undefined1 *)(iVar38 + 0xe) = 2;
    *(undefined1 *)(iVar38 + 0xf) = 4;
    *(undefined1 *)(iVar38 + 0x10) = (undefined1)local_60;
    *(undefined1 *)(iVar38 + 0x11) = 0;
    *(undefined1 *)(iVar38 + 0x12) = 0;
    *(undefined1 *)(iVar38 + 0x16) = 0x40;
    *(undefined1 *)(iVar38 + 0x17) = 0x40;
    *(undefined1 *)(iVar38 + 0x18) = 0x40;
    *(undefined1 *)(iVar38 + 0x19) = 0x7f;
    *(undefined1 *)(iVar38 + 0x1a) = local_30;
    *(undefined1 *)(iVar38 + 0x1b) = 0;
    *(undefined2 *)(iVar38 + 0x1e) = 0x2000;
    puVar32 = puVar32 + 1;
    *(undefined1 *)(iVar38 + 0x1c) = *puVar32;
    iVar38 = iVar38 + 0x20;
  } while (iVar11 != 0x400);
  if (*(byte *)(iVar41 + 0x1c75) != 0xff) {
    *(undefined1 *)(iVar42 + (uint)*(byte *)(iVar41 + 0x1c75) * 0x20 + 0xb) = 0;
    *(uint *)(iVar41 + 0x1c70) = 1 << *(sbyte *)(iVar41 + 0x1c75) | *(uint *)(iVar41 + 0x1c70);
  }
  if (local_44 != 7) {
    *(undefined1 *)(iVar41 + 0x23a0) = 99;
  }
  *(undefined1 *)(iVar41 + 0x22b2) = 0x80;
  *(undefined1 *)(iVar41 + 0x2091) = 0xff;
  *(undefined1 *)(iVar41 + 0x2092) = 0xff;
  *(undefined1 *)(iVar41 + 0x2094) = 0xff;
  *(undefined1 *)(iVar41 + 0x2095) = 0xff;
  *(undefined1 *)(iVar41 + 0x2097) = 0xff;
  *(undefined1 *)(iVar41 + 0x2098) = 0xff;
  *(undefined1 *)(iVar41 + 0x209a) = 0xff;
  *(undefined1 *)(iVar41 + 0x209b) = 0xff;
  *(undefined1 *)(iVar41 + 0x209d) = 0xff;
  *(undefined1 *)(iVar41 + 0x209e) = 0xff;
  *(undefined1 *)(iVar41 + 0x20a0) = 0xff;
  *(undefined1 *)(iVar41 + 0x20a1) = 0xff;
  *(undefined1 *)(iVar41 + 0x20a3) = 0xff;
  *(undefined1 *)(iVar41 + 0x20a4) = 0xff;
  *(undefined1 *)(iVar41 + 0x20a6) = 0xff;
  *(undefined1 *)(iVar41 + 0x20a7) = 0xff;
  *(undefined1 *)(iVar41 + 0x20a9) = 0xff;
  *(undefined1 *)(iVar41 + 0x20aa) = 0xff;
  *(undefined1 *)(iVar41 + 0x20ac) = 0xff;
  *(undefined1 *)(iVar41 + 0x20ad) = 0xff;
  *(undefined1 *)(iVar41 + 0x20af) = 0xff;
  *(undefined1 *)(iVar41 + 0x20b0) = 0xff;
  *(undefined1 *)(iVar41 + 0x20b2) = 0xff;
  *(undefined1 *)(iVar41 + 0x20b3) = 0xff;
  *(undefined1 *)(iVar41 + 0x20b5) = 0xff;
  *(undefined1 *)(iVar41 + 0x20b6) = 0xff;
  *(undefined1 *)(iVar41 + 0x20b8) = 0xff;
  *(undefined1 *)(iVar41 + 0x20b9) = 0xff;
  *(undefined1 *)(iVar41 + 0x20bb) = 0xff;
  *(undefined1 *)(iVar41 + 0x20bc) = 0xff;
  *(undefined1 *)(iVar41 + 0x20be) = 0xff;
  *(undefined1 *)(iVar41 + 0x20bf) = 0xff;
  *(undefined1 *)(iVar41 + 0x20c1) = 0xff;
  *(undefined1 *)(iVar41 + 0x20c2) = 0xff;
  *(undefined1 *)(iVar41 + 0x20c4) = 0xff;
  *(undefined1 *)(iVar41 + 0x20c5) = 0xff;
  *(undefined1 *)(iVar41 + 0x20c7) = 0xff;
  *(undefined1 *)(iVar41 + 0x20c8) = 0xff;
  *(undefined1 *)(iVar41 + 0x20ca) = 0xff;
  *(undefined1 *)(iVar41 + 0x20cb) = 0xff;
  *(undefined1 *)(iVar41 + 0x20cd) = 0xff;
  *(undefined1 *)(iVar41 + 0x20ce) = 0xff;
  *(undefined1 *)(iVar41 + 0x20d0) = 0xff;
  *(undefined1 *)(iVar41 + 0x20d1) = 0xff;
  *(undefined1 *)(iVar41 + 0x20d3) = 0xff;
  *(undefined1 *)(iVar41 + 0x20d4) = 0xff;
  *(undefined1 *)(iVar41 + 0x20d6) = 0xff;
  *(undefined1 *)(iVar41 + 0x20d7) = 0xff;
  *(undefined1 *)(iVar41 + 0x20d9) = 0xff;
  *(undefined1 *)(iVar41 + 0x20da) = 0xff;
  *(undefined1 *)(iVar41 + 0x20dc) = 0xff;
  *(undefined1 *)(iVar41 + 0x20dd) = 0xff;
  *(undefined1 *)(iVar41 + 0x20df) = 0xff;
  *(undefined1 *)(iVar41 + 0x20e0) = 0xff;
  *(undefined1 *)(iVar41 + 0x20e2) = 0xff;
  *(undefined1 *)(iVar41 + 0x20e3) = 0xff;
  *(undefined1 *)(iVar41 + 0x20e5) = 0xff;
  *(undefined1 *)(iVar41 + 0x20e6) = 0xff;
  *(undefined1 *)(iVar41 + 0x20e8) = 0xff;
  *(undefined1 *)(iVar41 + 0x20e9) = 0xff;
  *(undefined1 *)(iVar41 + 0x20eb) = 0xff;
  *(undefined1 *)(iVar41 + 0x20ec) = 0xff;
  *(undefined1 *)(iVar41 + 0x20ee) = 0xff;
  *(undefined1 *)(iVar41 + 0x20ef) = 0xff;
  iVar11 = *(int *)(iVar41 + 0xc34);
  if (*(int *)(iVar41 + 0x24) * iVar11 - param_2 == 0) {
    *(undefined4 *)(iVar41 + 0xc44) = 0;
    uVar5 = iVar11 + *(int *)(iVar41 + 0xc38);
    *(uint *)(iVar41 + 0xc48) = uVar5;
    goto LAB_000b876a;
  }
  *(undefined4 *)(iVar41 + 0xc44) = 0x20;
  uVar5 = local_2c + *(int *)(iVar41 + 0xc38);
  *(uint *)(iVar41 + 0xc48) = uVar5;
  iVar6 = DAT_000b97d0;
  iVar47 = DAT_000b97cc;
  iVar38 = DAT_000b97c8;
  switch(local_44) {
  case 1:
  case 2:
    piVar39 = (int *)(iVar41 + 0x3c);
    local_60 = 0;
    local_54 = -4;
    do {
      if ((*piVar39 != 0) && (uVar5 = *(uint *)(iVar41 + 0xc48), uVar5 < (uint)piVar39[0x11])) {
        pbVar21 = (byte *)piVar39[6];
        uVar36 = piVar39[7];
        uVar44 = (uint)*pbVar21;
        if ((int)(uVar44 << 0x18) < 0) {
          iVar46 = 2;
          uVar44 = (pbVar21[1] & 0x7f) + 0x80 + (uVar44 & 0x7f) * 0x80;
        }
        else {
          iVar46 = 1;
        }
        uVar40 = 0;
        iVar11 = local_54;
        if (local_60 == 0) {
          iVar11 = 0;
        }
        uVar18 = 0;
        while ((uVar34 = uVar44 + uVar18, uVar34 < uVar5 && (uVar40 < uVar36))) {
          iVar38 = uVar40 + iVar46;
          if (pbVar21[iVar38] == 0) {
            uVar5 = (uint)pbVar21[iVar38 + 1];
            iVar8 = iVar11 + (uint)(pbVar21[iVar38 + 1] >> 6);
            if ((uVar5 & 0x30) == 0x30) {
              bVar20 = pbVar21[iVar38 + 2];
              switch(uVar5 & 0xf) {
              case 0:
                iVar43 = iVar42 + iVar8 * 0x20;
                *(byte *)(iVar43 + 3) = bVar20;
                cVar24 = *(char *)(iVar42 + iVar8 * 0x20);
                if ((*(char *)(iVar41 + 0x20f0) == cVar24) && (*(byte *)(iVar41 + 0x20f1) == bVar20)
                   ) {
                  uVar1 = 0;
                }
                else if ((*(char *)(iVar41 + 0x20f2) == cVar24) &&
                        (*(byte *)(iVar41 + 0x20f3) == bVar20)) {
                  uVar1 = 1;
                }
                else if ((*(char *)(iVar41 + 0x20f4) == cVar24) &&
                        (*(byte *)(iVar41 + 0x20f5) == bVar20)) {
                  uVar1 = 2;
                }
                else if ((*(char *)(iVar41 + 0x20f6) == cVar24) &&
                        (*(byte *)(iVar41 + 0x20f7) == bVar20)) {
                  uVar1 = 3;
                }
                else if ((*(char *)(iVar41 + 0x20f8) == cVar24) &&
                        (*(byte *)(iVar41 + 0x20f9) == bVar20)) {
                  uVar1 = 4;
                }
                else if ((*(char *)(iVar41 + 0x20fa) == cVar24) &&
                        (*(byte *)(iVar41 + 0x20fb) == bVar20)) {
                  uVar1 = 5;
                }
                else if ((*(char *)(iVar41 + 0x20fc) == cVar24) &&
                        (*(byte *)(iVar41 + 0x20fd) == bVar20)) {
                  uVar1 = 6;
                }
                else if ((*(char *)(iVar41 + 0x20fe) == cVar24) &&
                        (*(byte *)(iVar41 + 0x20ff) == bVar20)) {
                  uVar1 = 7;
                }
                else if ((*(char *)(iVar41 + 0x2100) == cVar24) &&
                        (*(byte *)(iVar41 + 0x2101) == bVar20)) {
                  uVar1 = 8;
                }
                else if ((*(char *)(iVar41 + 0x2102) == cVar24) &&
                        (*(byte *)(iVar41 + 0x2103) == bVar20)) {
                  uVar1 = 9;
                }
                else if ((*(char *)(iVar41 + 0x2104) == cVar24) &&
                        (*(byte *)(iVar41 + 0x2105) == bVar20)) {
                  uVar1 = 10;
                }
                else if ((*(char *)(iVar41 + 0x2106) == cVar24) &&
                        (*(byte *)(iVar41 + 0x2107) == bVar20)) {
                  uVar1 = 0xb;
                }
                else if ((*(char *)(iVar41 + 0x2108) == cVar24) &&
                        (*(byte *)(iVar41 + 0x2109) == bVar20)) {
                  uVar1 = 0xc;
                }
                else if ((*(char *)(iVar41 + 0x210a) == cVar24) &&
                        (*(byte *)(iVar41 + 0x210b) == bVar20)) {
                  uVar1 = 0xd;
                }
                else if ((*(char *)(iVar41 + 0x210c) == cVar24) &&
                        (*(byte *)(iVar41 + 0x210d) == bVar20)) {
                  uVar1 = 0xe;
                }
                else {
                  if ((*(char *)(iVar41 + 0x210e) != cVar24) ||
                     (*(byte *)(iVar41 + 0x210f) != bVar20)) {
                    iVar7 = 3;
                    *(undefined1 *)(iVar43 + 2) = 0;
                    *(undefined1 *)(iVar43 + 3) = 0;
                    break;
                  }
                  uVar1 = 0xf;
                }
                *(undefined1 *)(iVar43 + 3) = uVar1;
                *(undefined1 *)(iVar43 + 2) = 1;
                iVar7 = 3;
                break;
              case 1:
                iVar7 = 3;
                *(byte *)(iVar42 + iVar8 * 0x20) = bVar20;
                break;
              case 2:
                if (bVar20 < 5) {
                  cVar24 = bVar20 + 4;
                  iVar7 = iVar42 + iVar8 * 0x20;
                }
                else if (bVar20 < 0x81) {
                  iVar7 = iVar42 + iVar8 * 0x20;
                  cVar24 = *(char *)(iVar7 + 0xf);
                }
                else if (bVar20 < 0x85) {
                  cVar24 = -0x7c - bVar20;
                  iVar7 = iVar42 + iVar8 * 0x20;
                }
                else {
                  iVar7 = iVar42 + iVar8 * 0x20;
                  cVar24 = *(char *)(iVar7 + 0xf);
                }
                *(char *)(iVar7 + 0xf) = cVar24;
                iVar7 = 3;
                break;
              case 3:
                if (0x7f < bVar20) goto switchD_000b9260_caseD_4;
                uVar1 = 0;
                if (bVar20 != 0) {
                  if (bVar20 < 0x11) {
                    uVar1 = 1;
                  }
                  else {
                    if (bVar20 < 0x51) {
                      uVar1 = (undefined1)(uVar5 & 0xf);
                    }
                    else {
                      uVar1 = 4;
                    }
                    if (bVar20 < 0x31) {
                      uVar1 = 2;
                    }
                  }
                }
                iVar7 = 3;
                *(undefined1 *)(iVar42 + iVar8 * 0x20 + 6) = uVar1;
                break;
              default:
switchD_000b9260_caseD_4:
                iVar7 = 3;
                break;
              case 7:
                if (0x7f < bVar20) goto switchD_000b9260_caseD_4;
                iVar7 = 3;
                *(byte *)(iVar42 + iVar8 * 0x20 + 7) = bVar20;
                break;
              case 10:
                if (0x7f < bVar20) goto switchD_000b9260_caseD_4;
                iVar7 = 3;
                *(byte *)(iVar42 + iVar8 * 0x20 + 8) = bVar20;
                break;
              case 0xb:
                if (0x7f < bVar20) goto switchD_000b9260_caseD_4;
                iVar7 = 3;
                *(byte *)(iVar42 + iVar8 * 0x20 + 9) = bVar20;
              }
            }
            else {
              uVar40 = (uVar5 & 0x3f) >> 4;
              if (uVar40 == 0) {
                cVar24 = *(char *)((uVar5 & 0xf) + iVar47 + 0xb8f4e);
                if (cVar24 == -0x80) goto LAB_000b8fb4;
                iVar7 = 2;
                *(char *)(iVar42 + iVar8 * 0x20 + 9) = cVar24;
              }
              else if (uVar40 == 2) {
                bVar20 = *(byte *)((uVar5 & 0xf) + iVar6 + 0xb8f64);
                if (bVar20 < 0x80) {
                  uVar1 = 0;
                  if (bVar20 != 0) {
                    if (bVar20 < 0x11) {
                      uVar1 = 1;
                    }
                    else if (bVar20 < 0x31) {
                      uVar1 = 2;
                    }
                    else if (bVar20 < 0x51) {
                      uVar1 = 3;
                    }
                    else {
                      uVar1 = 4;
                    }
                  }
                  iVar7 = 2;
                  *(undefined1 *)(iVar42 + iVar8 * 0x20 + 6) = uVar1;
                }
                else {
                  iVar7 = 2;
                }
              }
              else {
LAB_000b8fb4:
                iVar7 = 2;
              }
            }
          }
          else if (pbVar21[iVar38] == 0xff) {
            if (pbVar21[iVar38 + 1] != 0xf0) goto LAB_000b8fb4;
            iVar7 = pbVar21[iVar38 + 2] + 3;
            if (((pbVar21[iVar38 + 3] == 0x43) && (pbVar21[iVar38 + 4] - 2 < 2)) &&
               (pbVar21[iVar38 + 5] == 0x90)) {
              uVar5 = pbVar21[iVar38 + 6] & 0xf0;
              uVar40 = pbVar21[iVar38 + 6] & 0xf;
              if (uVar5 == 0xb0) {
                *(byte *)(iVar42 + uVar40 * 0x20 + 0x11) = pbVar21[iVar38 + 7];
              }
              else if (uVar5 == 0xc0) {
                *(byte *)(iVar42 + uVar40 * 0x20 + 0x12) = pbVar21[iVar38 + 7];
              }
            }
          }
          else if ((char)pbVar21[iVar38 + 1] < '\0') {
            iVar7 = 3;
          }
          else {
            iVar7 = 2;
          }
          uVar40 = iVar38 + iVar7;
          uVar18 = uVar34;
          if (uVar36 <= uVar40) break;
          uVar44 = (uint)pbVar21[uVar40];
          uVar5 = *(uint *)(iVar41 + 0xc48);
          if ((int)(uVar44 << 0x18) < 0) {
            iVar46 = 2;
            uVar44 = (pbVar21[uVar40 + 1] & 0x7f) + 0x80 + (uVar44 & 0x7f) * 0x80;
          }
          else {
            iVar46 = 1;
          }
        }
        puVar12 = *(uint **)(iVar41 + 0xc20);
        uVar40 = uVar40 + iVar46;
        if (puVar12 != (uint *)0x0) {
          *(uint *)(iVar41 + 0xc20) = puVar12[8];
        }
        if (uVar40 < uVar36) {
          puVar12[6] = uVar40;
          puVar12[5] = (uint)pbVar21;
          *puVar12 = uVar18 + uVar44;
          puVar12[7] = local_60;
          FUN_000adee0(iVar41 + 0xc1c,puVar12);
        }
        else {
          uVar5 = piVar39[0x11];
          puVar12[5] = (uint)pbVar21;
          puVar12[6] = uVar40;
          *puVar12 = uVar5;
          puVar12[7] = local_60;
          puVar12[1] = 0xff;
        }
        puVar28 = *(uint **)(iVar41 + 0xc1c);
        if ((puVar28 == (uint *)0x0) || (*puVar12 < *puVar28)) {
          *(uint **)(iVar41 + 0xc1c) = puVar12;
          puVar12[8] = (uint)puVar28;
        }
        else {
          puVar33 = (uint *)puVar28[8];
          if (puVar33 == (uint *)0x0) {
LAB_000b935a:
            puVar28[8] = (uint)puVar12;
            puVar12[8] = 0;
          }
          else {
            uVar5 = *puVar33;
            puVar30 = puVar28;
            puVar28 = puVar33;
            while (uVar5 <= *puVar12) {
              puVar33 = (uint *)puVar28[8];
              if (puVar33 == (uint *)0x0) goto LAB_000b935a;
              puVar30 = puVar28;
              puVar28 = puVar33;
              uVar5 = *puVar33;
            }
            puVar30[8] = (uint)puVar12;
            puVar12[8] = (uint)puVar28;
          }
        }
      }
      piVar39 = piVar39 + 0x12;
      local_60 = local_60 + 1;
      local_54 = local_54 + 4;
    } while (local_60 != 5);
    if (*(int *)(iVar41 + 0x234) != 0) {
      if (*(uint *)(iVar41 + 0xc48) < *(uint *)(iVar41 + 0x278)) {
        pbVar21 = *(byte **)(iVar41 + 0x24c);
        uVar5 = (uint)*pbVar21;
        if ((int)(uVar5 << 0x18) < 0) {
          iVar46 = 2;
          uVar5 = (pbVar21[1] & 0x7f) + 0x80 + (uVar5 & 0x7f) * 0x80;
        }
        else {
          iVar46 = 1;
        }
        iVar11 = 0;
        uVar36 = 0;
        while (uVar36 = uVar36 + uVar5, uVar36 < *(uint *)(iVar41 + 0xc48)) {
          iVar11 = iVar11 + iVar46;
          if (pbVar21[iVar11] == 0) {
            if ((pbVar21[iVar11 + 1] & 0x30) == 0x30) {
              if ((pbVar21[iVar11 + 1] == 0x37) && (-1 < (int)((uint)pbVar21[iVar11 + 2] << 0x18)))
              {
                *(byte *)(iVar41 + 0x23a0) = pbVar21[iVar11 + 2];
                iVar46 = 3;
              }
              else {
                iVar46 = 3;
              }
            }
            else {
LAB_000b90e4:
              iVar46 = 2;
            }
          }
          else if (pbVar21[iVar11] == 0xff) {
            if (pbVar21[iVar11 + 1] != 0xf0) goto LAB_000b90e4;
            iVar46 = pbVar21[iVar11 + 2] + 3;
          }
          else if ((char)pbVar21[iVar11 + 1] < '\0') {
            iVar46 = 3;
          }
          else {
            iVar46 = 2;
          }
          iVar11 = iVar11 + iVar46;
          uVar5 = (uint)pbVar21[iVar11];
          if ((int)(uVar5 << 0x18) < 0) {
            iVar46 = 2;
            uVar5 = (pbVar21[iVar11 + 1] & 0x7f) + 0x80 + (uVar5 & 0x7f) * 0x80;
          }
          else {
            iVar46 = 1;
          }
        }
        puVar12 = *(uint **)(iVar41 + 0xc20);
        if (puVar12 != (uint *)0x0) {
          *(uint *)(iVar41 + 0xc20) = puVar12[8];
        }
        *puVar12 = uVar36;
        puVar12[6] = iVar11 + iVar46;
        puVar12[5] = (uint)pbVar21;
        puVar12[7] = 7;
        FUN_000ad400(iVar41 + 0xc1c,puVar12);
        puVar28 = *(uint **)(iVar41 + 0xc1c);
        if ((puVar28 == (uint *)0x0) || (*puVar12 < *puVar28)) {
          *(uint **)(iVar41 + 0xc1c) = puVar12;
          puVar12[8] = (uint)puVar28;
          uVar5 = *(int *)(iVar41 + 0xc34) + *(int *)(iVar41 + 0xc38);
        }
        else {
          puVar33 = (uint *)puVar28[8];
          if (puVar33 == (uint *)0x0) {
LAB_000b978e:
            puVar28[8] = (uint)puVar12;
            puVar12[8] = 0;
            uVar5 = *(int *)(iVar41 + 0xc38) + *(int *)(iVar41 + 0xc34);
          }
          else {
            uVar5 = *puVar33;
            puVar30 = puVar28;
            puVar28 = puVar33;
            while (uVar5 <= *puVar12) {
              puVar33 = (uint *)puVar28[8];
              if (puVar33 == (uint *)0x0) goto LAB_000b978e;
              puVar30 = puVar28;
              puVar28 = puVar33;
              uVar5 = *puVar33;
            }
            puVar30[8] = (uint)puVar12;
            puVar12[8] = (uint)puVar28;
            uVar5 = *(int *)(iVar41 + 0xc38) + *(int *)(iVar41 + 0xc34);
          }
        }
        goto LAB_000b876a;
      }
LAB_000b99e2:
      uVar5 = *(int *)(iVar41 + 0xc34) + *(int *)(iVar41 + 0xc38);
      goto LAB_000b876a;
    }
    break;
  case 3:
    iVar11 = iVar41 + 0x3ec;
    *(undefined4 *)(iVar41 + 0xbf8) = *(undefined4 *)(iVar41 + 0xc00);
    *(undefined1 *)(iVar41 + 0xbfc) = *(undefined1 *)(iVar41 + 0xc04);
    iVar38 = *(int *)(iVar38 + 0xb8ba2);
    *(undefined1 *)(iVar41 + 0xbfd) = *(undefined1 *)(iVar41 + 0xc05);
    *(undefined4 *)(iVar41 + 0x3f4) = 0;
    uVar5 = (**(code **)(iVar38 + (uint)*(byte *)(iVar41 + 0x1c77) * 4))(iVar11);
    uVar36 = uVar5 & 0x7f;
    if ((int)(uVar5 << 0x18) < 0) {
      pbVar21 = (byte *)(iVar41 + 0x1c77);
      do {
        uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
        uVar36 = (uVar5 & 0x7f) + uVar36 * 0x80;
        if (-1 < (int)(uVar5 << 0x18)) break;
        uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
        uVar36 = (uVar5 & 0x7f) + uVar36 * 0x80;
        if (-1 < (int)(uVar5 << 0x18)) break;
        uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
        uVar36 = (uVar5 & 0x7f) + uVar36 * 0x80;
        if (-1 < (int)(uVar5 << 0x18)) break;
        uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
        uVar36 = (uVar5 & 0x7f) + uVar36 * 0x80;
      } while ((int)(uVar5 << 0x18) < 0);
    }
    uVar5 = *(uint *)(iVar41 + 0xc48);
    if (uVar36 < uVar5) {
      if (*(uint *)(iVar41 + 0x3f4) < *(uint *)(iVar41 + 0x3f0)) {
        pbVar21 = (byte *)(iVar41 + 0x1c77);
        do {
          uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
          uVar44 = uVar5 & 0xf0;
          uVar5 = uVar5 & 0xf;
          if (uVar44 == 0xb0) {
            uVar44 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
            bVar20 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
            bVar20 = bVar20 & 0x7f;
            switch(uVar44 & 0x7f) {
            case 0:
              *(byte *)(iVar42 + uVar5 * 0x20) = bVar20;
              break;
            case 1:
              if (*(byte *)(iVar41 + 0x1c76) != uVar5) {
                uVar1 = 0;
                if (bVar20 != 0) {
                  if (bVar20 < 0x20) {
                    uVar1 = 1;
                  }
                  else if (bVar20 < 0x40) {
                    uVar1 = 2;
                  }
                  else if (bVar20 < 0x60) {
                    uVar1 = 3;
                  }
                  else {
                    uVar1 = 4;
                  }
                }
                *(undefined1 *)(iVar42 + uVar5 * 0x20 + 6) = uVar1;
              }
              break;
            case 6:
              iVar47 = iVar42 + uVar5 * 0x20;
              if ((*(short *)(iVar47 + 4) == 0) && (bVar20 < 0x19)) {
                *(byte *)(iVar47 + 0xd) = bVar20;
              }
              break;
            case 7:
              *(byte *)(iVar42 + uVar5 * 0x20 + 7) = bVar20;
              break;
            case 10:
              *(byte *)(iVar42 + uVar5 * 0x20 + 8) = bVar20;
              break;
            case 0xb:
              *(byte *)(iVar42 + uVar5 * 0x20 + 9) = bVar20;
              break;
            case 0x20:
              *(byte *)(iVar42 + uVar5 * 0x20 + 1) = bVar20;
              break;
            case 0x40:
              *(bool *)(iVar42 + uVar5 * 0x20 + 10) = 0x3f < bVar20;
              break;
            case 100:
              *(byte *)(iVar42 + uVar5 * 0x20 + 5) = bVar20;
              break;
            case 0x65:
              *(byte *)(iVar42 + uVar5 * 0x20 + 4) = bVar20;
              break;
            case 0x79:
              if (bVar20 == 0) {
                iVar47 = iVar42 + uVar5 * 0x20;
                *(undefined1 *)(iVar47 + 6) = 0;
                *(undefined1 *)(iVar47 + 10) = 0;
                *(undefined1 *)(iVar47 + 9) = 0x7f;
                *(undefined1 *)(iVar47 + 5) = 0x7f;
                *(undefined1 *)(iVar47 + 4) = 0x7f;
                *(undefined1 *)(iVar47 + 0xc) = 0x40;
                *(undefined1 *)(iVar47 + 0x10) = 0x5a;
              }
              break;
            case 0x7e:
              if ((bVar20 == 1) && ((1 << uVar5 & *(uint *)(iVar41 + 0x1c70)) == 0)) {
                *(undefined1 *)(iVar42 + uVar5 * 0x20 + 0xb) = 0;
                *(uint *)(iVar41 + 0x1c70) = 1 << uVar5 | *(uint *)(iVar41 + 0x1c70);
              }
              break;
            case 0x7f:
              *(uint *)(iVar41 + 0x1c70) = 1 << uVar5 | *(uint *)(iVar41 + 0x1c70);
            }
          }
          else if (uVar44 < 0xb1) {
            if (uVar44 == 0x90) {
              *(undefined4 *)(iVar41 + 0x1c70) = 0xffffffff;
              (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              uVar44 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              iVar47 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              if (iVar47 << 0x18 < 0) {
                while (((((uVar40 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                          (uVar40 & 0x80) != 0 &&
                          (uVar40 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                          (uVar40 & 0x80) != 0)) &&
                         (uVar40 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                         (uVar40 & 0x80) != 0)) &&
                        ((uVar40 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                         (uVar40 & 0x80) != 0 &&
                         (uVar40 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                         (uVar40 & 0x80) != 0)))) &&
                       (uVar40 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                       (uVar40 & 0x80) != 0))) {
                  uVar40 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                  if (((uVar40 & 0x80) == 0) ||
                     (iVar47 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                     -1 < iVar47 << 0x18)) break;
                }
              }
              uVar1 = malib_Convert20to40Log(uVar44 & 0x7f);
              *(undefined1 *)(iVar42 + uVar5 * 0x20 + 0x10) = uVar1;
            }
            else if (uVar44 == 0xa0) {
              (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
            }
            else if (uVar44 == 0x80) {
              *(undefined4 *)(iVar41 + 0x1c70) = 0xffffffff;
              (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              iVar47 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              if (iVar47 << 0x18 < 0) {
                while (((uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                        (uVar5 & 0x80) != 0 &&
                        (uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                        (uVar5 & 0x80) != 0)) &&
                       (uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                       (uVar5 & 0x80) != 0))) {
                  uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                  if ((((uVar5 & 0x80) == 0) ||
                      (uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                      (uVar5 & 0x80) == 0)) ||
                     ((uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                      (uVar5 & 0x80) == 0 ||
                      ((uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                       (uVar5 & 0x80) == 0 ||
                       (iVar47 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11),
                       -1 < iVar47 << 0x18)))))) break;
                }
              }
            }
          }
          else if (uVar44 == 0xd0) {
            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
          }
          else if (uVar44 < 0xd1) {
            if (uVar44 == 0xc0) {
              bVar20 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              iVar47 = iVar42 + uVar5 * 0x20;
              bVar20 = bVar20 & 0x7f;
              *(byte *)(iVar47 + 3) = bVar20;
              cVar24 = *(char *)(iVar42 + uVar5 * 0x20);
              if (cVar24 == '|') {
                if (*(byte *)(iVar47 + 1) < 10) {
                  *(byte *)(iVar47 + 2) = *(byte *)(iVar47 + 1) + 1;
                }
                else {
LAB_000b99be:
                  *(undefined1 *)(iVar47 + 2) = 0;
                }
              }
              else {
                if (cVar24 == '}') {
                  if ((*(char *)(iVar47 + 1) == '\0') && (bVar20 < 10)) {
                    *(byte *)(iVar47 + 2) = bVar20 + 0x81;
                    goto switchD_000b93cc_caseD_2;
                  }
                }
                else if (uVar5 != 9) goto LAB_000b99be;
                *(undefined1 *)(iVar47 + 2) = 0x80;
              }
            }
          }
          else if (uVar44 == 0xe0) {
            iVar47 = iVar42 + uVar5 * 0x20;
            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
            bVar20 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
            *(undefined1 *)(iVar47 + 0xe) = *(undefined1 *)(iVar47 + 0xd);
            *(byte *)(iVar47 + 0xc) = bVar20 & 0x7f;
          }
          else if (uVar44 == 0xf0) {
            pcVar17 = *(code **)(iVar38 + (uint)*pbVar21 * 4);
            if (uVar5 == 0xf) {
              uVar5 = (*pcVar17)(iVar11);
              if ((uVar5 & 0x7f) == 0x2f) {
                *(undefined4 *)(iVar41 + 0xc44) = 0;
              }
            }
            else {
              uVar44 = (*pcVar17)();
              uVar5 = uVar44 & 0x7f;
              while ((int)(uVar44 << 0x18) < 0) {
                uVar44 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                uVar5 = (uVar44 & 0x7f) + uVar5 * 0x80;
                if (-1 < (int)(uVar44 << 0x18)) break;
                uVar44 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                uVar5 = (uVar44 & 0x7f) + uVar5 * 0x80;
                if (-1 < (int)(uVar44 << 0x18)) break;
                uVar44 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                uVar5 = (uVar44 & 0x7f) + uVar5 * 0x80;
                if (-1 < (int)(uVar44 << 0x18)) break;
                uVar44 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                uVar5 = (uVar44 & 0x7f) + uVar5 * 0x80;
              }
              iVar47 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              iVar6 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              iVar7 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              iVar8 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
              if ((iVar6 == 0x79 && iVar47 == 0x43) && (iVar8 == 0x7f && iVar7 == 6)) {
                uVar44 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                uVar44 = uVar44 & 0x7f;
                if (uVar44 == 8) {
                  uVar44 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                  bVar20 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                  bVar2 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                  if (8 < uVar5) {
                    uVar40 = uVar5 - 9 & 7;
                    uVar18 = 9;
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    if (uVar5 != 9) {
                      if (uVar40 != 0) {
                        if (uVar40 != 1) {
                          if (uVar40 != 2) {
                            if (uVar40 != 3) {
                              if (uVar40 != 4) {
                                if (uVar40 != 5) {
                                  if (uVar40 != 6) {
                                    uVar18 = 10;
                                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                  }
                                  uVar18 = uVar18 + 1;
                                  (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                }
                                uVar18 = uVar18 + 1;
                                (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                              }
                              uVar18 = uVar18 + 1;
                              (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            }
                            uVar18 = uVar18 + 1;
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          }
                          uVar18 = uVar18 + 1;
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        }
                        uVar18 = uVar18 + 1;
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        if (uVar18 == uVar5) goto LAB_000bca1c;
                      }
                      do {
                        uVar18 = uVar18 + 8;
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                      } while (uVar18 != uVar5);
                    }
                  }
LAB_000bca1c:
                  bVar3 = (bVar20 & 0x7f) - 1;
                  uVar5 = (uint)bVar3;
                  if (uVar5 < 0x20) {
                    bVar45 = (bVar2 & 0x7f) - 1;
                    uVar40 = (uint)bVar45;
                    if ((uVar40 < 0x20) && ((bVar20 & 0x7f) != (bVar2 & 0x7f))) {
                      if ((uVar44 & 0x7f) == 0) {
                        *(byte *)(uVar5 * 3 + iVar46 + 1) = bVar45;
                        *(byte *)(uVar40 * 3 + iVar46 + 1) = bVar3;
                      }
                      else {
                        *(undefined1 *)(iVar46 + uVar5 * 3 + 1) = 0xff;
                        *(undefined1 *)(iVar46 + uVar40 * 3 + 1) = 0xff;
                      }
                    }
                  }
                }
                else {
                  if (uVar44 != 0xb) {
                    if (uVar44 == 0) {
                      bVar20 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                      *(byte *)(iVar41 + 0xc51) = bVar20 & 0x7f;
                      if (6 < uVar5) {
                        uVar44 = uVar5 - 7 & 7;
                        uVar40 = 7;
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        if (uVar5 != 7) {
                          if (uVar44 != 0) {
                            if (uVar44 != 1) {
                              if (uVar44 != 2) {
                                if (uVar44 != 3) {
                                  if (uVar44 != 4) {
                                    if (uVar44 != 5) {
                                      if (uVar44 != 6) {
                                        uVar40 = 8;
                                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                      }
                                      uVar40 = uVar40 + 1;
                                      (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                    }
                                    uVar40 = uVar40 + 1;
                                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                  }
                                  uVar40 = uVar40 + 1;
                                  (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                }
                                uVar40 = uVar40 + 1;
                                (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                              }
                              uVar40 = uVar40 + 1;
                              (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            }
                            uVar40 = uVar40 + 1;
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            if (uVar40 == uVar5) goto switchD_000b93cc_caseD_2;
                          }
                          do {
                            uVar40 = uVar40 + 8;
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          } while (uVar40 != uVar5);
                        }
                      }
                    }
                    else if (5 < uVar5) {
                      uVar44 = uVar5 - 6 & 7;
                      uVar40 = 6;
                      (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                      if (uVar5 != 6) {
                        if (uVar44 != 0) {
                          if (uVar44 != 1) {
                            if (uVar44 != 2) {
                              if (uVar44 != 3) {
                                if (uVar44 != 4) {
                                  if (uVar44 != 5) {
                                    if (uVar44 != 6) {
                                      uVar40 = 7;
                                      (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                    }
                                    uVar40 = uVar40 + 1;
                                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                  }
                                  uVar40 = uVar40 + 1;
                                  (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                }
                                uVar40 = uVar40 + 1;
                                (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                              }
                              uVar40 = uVar40 + 1;
                              (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            }
                            uVar40 = uVar40 + 1;
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          }
                          uVar40 = uVar40 + 1;
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          if (uVar40 == uVar5) goto switchD_000b93cc_caseD_2;
                        }
                        do {
                          uVar40 = uVar40 + 8;
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        } while (uVar40 != uVar5);
                      }
                    }
                    goto switchD_000b93cc_caseD_2;
                  }
                  uVar44 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                  uVar40 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                  bVar20 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                  if (8 < uVar5) {
                    uVar18 = uVar5 - 9 & 7;
                    uVar34 = 9;
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    if (uVar5 != 9) {
                      if (uVar18 != 0) {
                        if (uVar18 != 1) {
                          if (uVar18 != 2) {
                            if (uVar18 != 3) {
                              if (uVar18 != 4) {
                                if (uVar18 != 5) {
                                  if (uVar18 != 6) {
                                    uVar34 = 10;
                                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                  }
                                  uVar34 = uVar34 + 1;
                                  (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                                }
                                uVar34 = uVar34 + 1;
                                (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                              }
                              uVar34 = uVar34 + 1;
                              (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            }
                            uVar34 = uVar34 + 1;
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          }
                          uVar34 = uVar34 + 1;
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        }
                        uVar34 = uVar34 + 1;
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        if (uVar34 == uVar5) goto LAB_000bc8ac;
                      }
                      do {
                        uVar34 = uVar34 + 8;
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                      } while (uVar34 != uVar5);
                    }
                  }
LAB_000bc8ac:
                  uVar5 = (uVar44 & 0x7f) - 1 & 0xff;
                  if (uVar5 < 0x20) {
                    if ((uVar40 & 0x7f) == 1) {
                      *(undefined1 *)(uVar5 * 3 + iVar46 + 2) = 0xff;
                    }
                    else if ((uVar40 & 0x7f) == 2) {
                      *(undefined1 *)(uVar5 * 3 + iVar46 + 2) = 0x80;
                    }
                    else {
                      *(byte *)(uVar5 * 3 + iVar46 + 2) = bVar20 & 0x7f;
                    }
                  }
                }
              }
              else if (4 < uVar5) {
                uVar44 = uVar5 - 5 & 7;
                uVar40 = 5;
                (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                if (uVar5 != 5) {
                  if (uVar44 != 0) {
                    if (uVar44 != 1) {
                      if (uVar44 != 2) {
                        if (uVar44 != 3) {
                          if (uVar44 != 4) {
                            if (uVar44 != 5) {
                              if (uVar44 != 6) {
                                uVar40 = 6;
                                (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                              }
                              uVar40 = uVar40 + 1;
                              (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                            }
                            uVar40 = uVar40 + 1;
                            (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                          }
                          uVar40 = uVar40 + 1;
                          (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                        }
                        uVar40 = uVar40 + 1;
                        (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                      }
                      uVar40 = uVar40 + 1;
                      (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    }
                    uVar40 = uVar40 + 1;
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    if (uVar40 == uVar5) goto switchD_000b93cc_caseD_2;
                  }
                  do {
                    uVar40 = uVar40 + 8;
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                    (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
                  } while (uVar40 != uVar5);
                }
              }
            }
          }
switchD_000b93cc_caseD_2:
          uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
          uVar44 = uVar5 & 0x7f;
          while ((int)(uVar5 << 0x18) < 0) {
            uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
            uVar44 = (uVar5 & 0x7f) + uVar44 * 0x80;
            if (-1 < (int)(uVar5 << 0x18)) break;
            uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
            uVar44 = (uVar5 & 0x7f) + uVar44 * 0x80;
            if (-1 < (int)(uVar5 << 0x18)) break;
            uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
            uVar44 = (uVar5 & 0x7f) + uVar44 * 0x80;
            if (-1 < (int)(uVar5 << 0x18)) break;
            uVar5 = (**(code **)(iVar38 + (uint)*pbVar21 * 4))(iVar11);
            uVar44 = (uVar5 & 0x7f) + uVar44 * 0x80;
          }
          uVar5 = *(uint *)(iVar41 + 0xc48);
          uVar36 = uVar36 + uVar44;
          if (uVar5 <= uVar36) goto LAB_000b97d4;
        } while (*(uint *)(iVar41 + 0x3f4) < *(uint *)(iVar41 + 0x3f0));
      }
      puVar12 = *(uint **)(iVar41 + 0xc20);
      if (puVar12 != (uint *)0x0) {
        *(uint *)(iVar41 + 0xc20) = puVar12[8];
      }
      *puVar12 = uVar5;
      puVar12[1] = 0xff;
      puVar12[6] = 0xffffffff;
      puVar28 = *(uint **)(iVar41 + 0xc1c);
      if ((puVar28 == (uint *)0x0) || (uVar5 < *puVar28)) {
        *(uint **)(iVar41 + 0xc1c) = puVar12;
        puVar12[8] = (uint)puVar28;
      }
      else {
        puVar33 = (uint *)puVar28[8];
        if (puVar33 == (uint *)0x0) {
LAB_000b8f2a:
          puVar28[8] = (uint)puVar12;
          puVar12[8] = 0;
        }
        else {
          uVar36 = *puVar33;
          puVar30 = puVar28;
          puVar28 = puVar33;
          while (uVar36 <= uVar5) {
            puVar33 = (uint *)puVar28[8];
            if (puVar33 == (uint *)0x0) goto LAB_000b8f2a;
            puVar30 = puVar28;
            puVar28 = puVar33;
            uVar36 = *puVar33;
          }
          puVar30[8] = (uint)puVar12;
          puVar12[8] = (uint)puVar28;
        }
      }
    }
    else {
LAB_000b97d4:
      if (*(uint *)(iVar41 + 0x3f4) < *(uint *)(iVar41 + 0x3f0)) {
        puVar12 = *(uint **)(iVar41 + 0xc20);
        if (puVar12 != (uint *)0x0) {
          *(uint *)(iVar41 + 0xc20) = puVar12[8];
        }
        *puVar12 = uVar36;
        puVar12[7] = 5;
        FUN_000b10f8(iVar41,puVar12);
        puVar28 = *(uint **)(iVar41 + 0xc1c);
        if ((puVar28 == (uint *)0x0) || (*puVar12 < *puVar28)) {
          *(uint **)(iVar41 + 0xc1c) = puVar12;
          puVar12[8] = (uint)puVar28;
          uVar5 = *(int *)(iVar41 + 0xc38) + *(int *)(iVar41 + 0xc34);
          goto LAB_000b876a;
        }
        puVar33 = (uint *)puVar28[8];
        if (puVar33 != (uint *)0x0) {
          uVar5 = *puVar33;
          puVar30 = puVar28;
          puVar28 = puVar33;
          while (uVar5 <= *puVar12) {
            puVar33 = (uint *)puVar28[8];
            if (puVar33 == (uint *)0x0) goto LAB_000b9a56;
            puVar30 = puVar28;
            puVar28 = puVar33;
            uVar5 = *puVar33;
          }
LAB_000bb4ce:
          puVar30[8] = (uint)puVar12;
          puVar12[8] = (uint)puVar28;
          uVar5 = *(int *)(iVar41 + 0xc34) + *(int *)(iVar41 + 0xc38);
          goto LAB_000b876a;
        }
        goto LAB_000b9a56;
      }
      puVar12 = *(uint **)(iVar41 + 0xc20);
      if (puVar12 != (uint *)0x0) {
        *(uint *)(iVar41 + 0xc20) = puVar12[8];
      }
      *puVar12 = uVar5;
      puVar12[1] = 0xff;
      puVar12[6] = 0xffffffff;
      puVar28 = *(uint **)(iVar41 + 0xc1c);
      if ((puVar28 == (uint *)0x0) || (uVar5 < *puVar28)) {
        *(uint **)(iVar41 + 0xc1c) = puVar12;
        puVar12[8] = (uint)puVar28;
      }
      else {
        puVar33 = (uint *)puVar28[8];
        if (puVar33 == (uint *)0x0) {
LAB_000b982c:
          puVar28[8] = (uint)puVar12;
          puVar12[8] = 0;
        }
        else {
          uVar36 = *puVar33;
          puVar30 = puVar28;
          puVar28 = puVar33;
          while (uVar36 <= uVar5) {
            puVar33 = (uint *)puVar28[8];
            if (puVar33 == (uint *)0x0) goto LAB_000b982c;
            puVar30 = puVar28;
            puVar28 = puVar33;
            uVar36 = *puVar33;
          }
          puVar30[8] = (uint)puVar12;
          puVar12[8] = (uint)puVar28;
        }
      }
    }
    goto LAB_000b983a;
  default:
    uVar5 = iVar11 + *(int *)(iVar41 + 0xc38);
    goto LAB_000b876a;
  case 5:
    pbVar9 = *(byte **)(iVar41 + 0x208);
    pbVar21 = (byte *)0x1;
    pbVar22 = *(byte **)(iVar41 + 0x204);
    *(undefined4 *)(iVar41 + 0x3f4) = 1;
    *(byte **)(iVar41 + 0x3f0) = pbVar9;
    *(byte **)(iVar41 + 0xbf8) = pbVar22;
    pbVar23 = pbVar9;
    if (pbVar9 == (byte *)0x0) {
LAB_000b8b26:
      uVar36 = 0;
      if (uVar5 != 0) {
LAB_000b8b2e:
        puVar12 = *(uint **)(iVar41 + 0xc20);
        if (puVar12 != (uint *)0x0) {
          *(uint *)(iVar41 + 0xc20) = puVar12[8];
        }
        *puVar12 = uVar5;
        puVar12[6] = 0xffffffff;
        puVar12[1] = 0xff;
        puVar28 = *(uint **)(iVar41 + 0xc1c);
        if ((puVar28 == (uint *)0x0) || (uVar5 < *puVar28)) {
LAB_000b9834:
          *(uint **)(iVar41 + 0xc1c) = puVar12;
          puVar12[8] = (uint)puVar28;
        }
        else {
          puVar33 = (uint *)puVar28[8];
          if (puVar33 == (uint *)0x0) goto LAB_000b8afe;
          uVar36 = *puVar33;
          puVar30 = puVar28;
          puVar28 = puVar33;
          while (uVar36 <= uVar5) {
            puVar33 = (uint *)puVar28[8];
            if (puVar33 == (uint *)0x0) goto LAB_000b8afe;
            puVar30 = puVar28;
            puVar28 = puVar33;
            uVar36 = *puVar33;
          }
LAB_000b9f50:
          puVar30[8] = (uint)puVar12;
          puVar12[8] = (uint)puVar28;
        }
        goto LAB_000b983a;
      }
    }
    else {
      *(byte **)(iVar41 + 0xbf8) = pbVar22 + 1;
      uVar36 = *pbVar22 & 0x7f;
      if ((int)((uint)*pbVar22 << 0x18) < 0) {
        pbVar21 = (byte *)0x2;
        *(undefined4 *)(iVar41 + 0x3f4) = 2;
        if ((byte *)0x1 < pbVar9) {
          *(byte **)(iVar41 + 0xbf8) = pbVar22 + 2;
          uVar36 = (pbVar22[1] & 0x7f) + uVar36 * 0x80;
          if ((int)((uint)pbVar22[1] << 0x18) < 0) {
            pbVar21 = (byte *)0x3;
            *(undefined4 *)(iVar41 + 0x3f4) = 3;
            if (pbVar9 < (byte *)0x3) goto LAB_000b9f76;
            *(byte **)(iVar41 + 0xbf8) = pbVar22 + 3;
            uVar36 = (pbVar22[2] & 0x7f) + uVar36 * 0x80;
            pbVar21 = (byte *)0x3;
            if (-1 < (int)((uint)pbVar22[2] << 0x18)) goto LAB_000bbcca;
            pbVar21 = &DAT_00000004;
            *(undefined4 *)(iVar41 + 0x3f4) = 4;
            if (pbVar9 < &DAT_00000004) goto LAB_000b9f76;
            *(byte **)(iVar41 + 0xbf8) = pbVar22 + 4;
            uVar36 = (pbVar22[3] & 0x7f) + uVar36 * 0x80;
            if (-1 < (int)((uint)pbVar22[3] << 0x18)) goto LAB_000bbcca;
          }
          else {
LAB_000bbcca:
            if (uVar36 < 0x200000) goto LAB_000b9f7a;
          }
          *(byte **)(iVar41 + 0x3f4) = pbVar9;
          pbVar21 = pbVar9;
          goto LAB_000b8b26;
        }
LAB_000b9f76:
        uVar36 = 0;
      }
LAB_000b9f7a:
      if (uVar36 < uVar5) {
        if (pbVar21 < pbVar9) {
          do {
            *(byte **)(iVar41 + 0x3f4) = pbVar21 + 1;
            pbVar23 = pbVar9;
            if (pbVar9 < pbVar21 + 1) goto LAB_000b9fa2;
            pbVar26 = *(byte **)(iVar41 + 0xbf8);
            pbVar22 = pbVar26 + 1;
            *(byte **)(iVar41 + 0xbf8) = pbVar22;
            uVar44 = *pbVar26 & 0xf0;
            uVar40 = *pbVar26 & 0xf;
            if (uVar44 != 0xb0) {
              if (uVar44 < 0xb1) {
                if (uVar44 == 0x90) {
                  pbVar23 = pbVar21 + 2;
                  pbVar21 = pbVar21 + 3;
                  if (pbVar23 <= pbVar9) {
                    pbVar22 = pbVar26 + 2;
                  }
                  *(undefined4 *)(iVar41 + 0x1c70) = 0xffffffff;
                  if (pbVar23 <= pbVar9) {
                    *(byte **)(iVar41 + 0xbf8) = pbVar22;
                  }
                  *(byte **)(iVar41 + 0x3f4) = pbVar23;
                  pbVar23 = pbVar9;
                  if (pbVar21 <= pbVar9) {
                    pbVar23 = pbVar22 + 1;
                  }
                  *(byte **)(iVar41 + 0x3f4) = pbVar21;
                  if (pbVar9 < pbVar21) {
                    bVar20 = 0;
                  }
                  else {
                    *(byte **)(iVar41 + 0xbf8) = pbVar23;
                    bVar20 = *pbVar22 & 0x7f;
                  }
                  FUN_000acefc(iVar41);
                  *(byte *)(iVar42 + uVar40 * 0x20 + 0x10) = bVar20;
                  pbVar9 = *(byte **)(iVar41 + 0x3f4);
                  uVar5 = *(uint *)(iVar41 + 0xc48);
                  pbVar23 = *(byte **)(iVar41 + 0x3f0);
                }
                else if (uVar44 == 0xa0) {
                  pbVar13 = pbVar21 + 3;
                  *(byte **)(iVar41 + 0x3f4) = pbVar21 + 2;
                  if (pbVar21 + 2 <= pbVar9) {
                    pbVar22 = pbVar26 + 2;
                    *(byte **)(iVar41 + 0xbf8) = pbVar22;
                  }
                  *(byte **)(iVar41 + 0x3f4) = pbVar13;
                  if (pbVar9 < pbVar13) goto LAB_000b9ff8;
                  uVar5 = *(uint *)(iVar41 + 0xc48);
                  *(byte **)(iVar41 + 0xbf8) = pbVar22 + 1;
                  pbVar9 = pbVar13;
                  pbVar23 = *(byte **)(iVar41 + 0x3f0);
                }
                else if (uVar44 == 0x80) {
                  pbVar21 = pbVar21 + 2;
                  if (pbVar21 <= pbVar9) {
                    pbVar26 = pbVar26 + 2;
                  }
                  *(undefined4 *)(iVar41 + 0x1c70) = 0xffffffff;
                  *(byte **)(iVar41 + 0x3f4) = pbVar21;
                  if (pbVar21 <= pbVar9) {
                    *(byte **)(iVar41 + 0xbf8) = pbVar26;
                  }
                  FUN_000acefc(iVar41);
                  uVar5 = *(uint *)(iVar41 + 0xc48);
                  pbVar9 = *(byte **)(iVar41 + 0x3f4);
                  pbVar23 = *(byte **)(iVar41 + 0x3f0);
                }
                goto LAB_000b9fa2;
              }
              if (uVar44 == 0xd0) {
                pbVar13 = pbVar21 + 2;
                *(byte **)(iVar41 + 0x3f4) = pbVar13;
                if (pbVar9 < pbVar13) goto LAB_000b9ff8;
                uVar5 = *(uint *)(iVar41 + 0xc48);
                *(byte **)(iVar41 + 0xbf8) = pbVar26 + 2;
                pbVar9 = pbVar13;
                pbVar23 = *(byte **)(iVar41 + 0x3f0);
                goto LAB_000b9fa2;
              }
              if (uVar44 < 0xd1) {
                if (uVar44 == 0xc0) {
                  pbVar21 = pbVar21 + 2;
                  *(byte **)(iVar41 + 0x3f4) = pbVar21;
                  pbVar23 = pbVar21;
                  if (pbVar21 <= pbVar9) {
                    *(byte **)(iVar41 + 0xbf8) = pbVar26 + 2;
                    pbVar23 = (byte *)(uint)pbVar26[1];
                  }
                  iVar11 = iVar42 + uVar40 * 0x20;
                  if (pbVar9 < pbVar21) {
                    uVar5 = 0;
                  }
                  else {
                    uVar5 = (uint)pbVar23 & 0x7f;
                  }
                  *(char *)(iVar11 + 3) = (char)uVar5;
                  cVar24 = *(char *)(iVar42 + uVar40 * 0x20);
                  if (cVar24 == '|') {
                    if (*(byte *)(iVar11 + 1) < 10) {
                      *(byte *)(iVar11 + 2) = *(byte *)(iVar11 + 1) + 1;
                    }
                    else {
                      *(undefined1 *)(iVar11 + 2) = 0;
                    }
                    uVar5 = *(uint *)(iVar41 + 0xc48);
                    pbVar9 = *(byte **)(iVar41 + 0x3f4);
                    pbVar23 = *(byte **)(iVar41 + 0x3f0);
                  }
                  else if (cVar24 == '}') {
                    if ((*(char *)(iVar11 + 1) != '\0') || (9 < uVar5)) {
LAB_000ba662:
                      *(undefined1 *)(iVar11 + 2) = 0x80;
                      pbVar13 = *(byte **)(iVar41 + 0x3f4);
                      goto LAB_000b9ff8;
                    }
                    *(char *)(iVar11 + 2) = (char)uVar5 + -0x7f;
                    uVar5 = *(uint *)(iVar41 + 0xc48);
                    pbVar9 = *(byte **)(iVar41 + 0x3f4);
                    pbVar23 = *(byte **)(iVar41 + 0x3f0);
                  }
                  else {
                    if (uVar40 == 9) goto LAB_000ba662;
                    *(undefined1 *)(iVar11 + 2) = 0;
                    uVar5 = *(uint *)(iVar41 + 0xc48);
                    pbVar9 = *(byte **)(iVar41 + 0x3f4);
                    pbVar23 = *(byte **)(iVar41 + 0x3f0);
                  }
                }
                goto LAB_000b9fa2;
              }
              if (uVar44 == 0xe0) {
                pbVar23 = pbVar21 + 3;
                iVar11 = iVar42 + uVar40 * 0x20;
                if (pbVar21 + 2 <= pbVar9) {
                  pbVar22 = pbVar26 + 2;
                  *(byte **)(iVar41 + 0xbf8) = pbVar22;
                }
                *(byte **)(iVar41 + 0x3f4) = pbVar21 + 2;
                pbVar21 = pbVar9;
                if (pbVar23 <= pbVar9) {
                  pbVar21 = pbVar22 + 1;
                }
                *(byte **)(iVar41 + 0x3f4) = pbVar23;
                if (pbVar9 < pbVar23) {
                  bVar20 = 0;
                }
                else {
                  *(byte **)(iVar41 + 0xbf8) = pbVar21;
                  bVar20 = *pbVar22;
                }
                if (pbVar23 <= pbVar9) {
                  bVar20 = bVar20 & 0x7f;
                }
                *(byte *)(iVar11 + 0xc) = bVar20;
                *(undefined1 *)(iVar11 + 0xe) = *(undefined1 *)(iVar11 + 0xd);
                uVar5 = *(uint *)(iVar41 + 0xc48);
                pbVar9 = *(byte **)(iVar41 + 0x3f4);
                pbVar23 = *(byte **)(iVar41 + 0x3f0);
                goto LAB_000b9fa2;
              }
              if (uVar44 != 0xf0) goto LAB_000b9fa2;
              if (uVar40 == 0xf) {
                pbVar13 = pbVar21 + 2;
                *(byte **)(iVar41 + 0x3f4) = pbVar13;
                if ((pbVar9 < pbVar13) ||
                   (*(byte **)(iVar41 + 0xbf8) = pbVar26 + 2, (pbVar26[1] & 0x7f) != 0x2f))
                goto LAB_000b9ff8;
                uVar5 = *(uint *)(iVar41 + 0xc48);
                pbVar23 = *(byte **)(iVar41 + 0x3f0);
                goto LAB_000b9fa2;
              }
              pbVar23 = pbVar21 + 2;
              *(byte **)(iVar41 + 0x3f4) = pbVar23;
              if (pbVar9 < pbVar23) {
LAB_000ba230:
                uVar44 = 0;
              }
              else {
                *(byte **)(iVar41 + 0xbf8) = pbVar26 + 2;
                uVar44 = pbVar26[1] & 0x7f;
                if ((int)((uint)pbVar26[1] << 0x18) < 0) {
                  pbVar23 = pbVar21 + 3;
                  *(byte **)(iVar41 + 0x3f4) = pbVar23;
                  if (pbVar23 <= pbVar9) {
                    *(byte **)(iVar41 + 0xbf8) = pbVar26 + 3;
                    uVar44 = (pbVar26[2] & 0x7f) + uVar44 * 0x80;
                    if (-1 < (int)((uint)pbVar26[2] << 0x18)) goto LAB_000ba232;
                    pbVar23 = pbVar21 + 4;
                    *(byte **)(iVar41 + 0x3f4) = pbVar23;
                    if (pbVar23 <= pbVar9) {
                      *(byte **)(iVar41 + 0xbf8) = pbVar26 + 4;
                      uVar44 = (pbVar26[3] & 0x7f) + uVar44 * 0x80;
                      if (-1 < (int)((uint)pbVar26[3] << 0x18)) goto LAB_000ba232;
                      pbVar21 = pbVar21 + 5;
                      *(byte **)(iVar41 + 0x3f4) = pbVar21;
                      pbVar23 = pbVar21;
                      if (pbVar21 <= pbVar9) {
                        *(byte **)(iVar41 + 0xbf8) = pbVar26 + 5;
                        uVar44 = (pbVar26[4] & 0x7f) + uVar44 * 0x80;
                        pbVar23 = pbVar9;
                        if (-1 < (int)((uint)pbVar26[4] << 0x18)) {
                          pbVar23 = pbVar21;
                          if (0x1fffff < uVar44) {
                            uVar44 = 0;
                            pbVar23 = pbVar9;
                          }
                          goto LAB_000ba232;
                        }
                      }
                    }
                  }
                  goto LAB_000ba230;
                }
              }
LAB_000ba232:
              *(byte **)(iVar41 + 0x3f4) = pbVar23 + 1;
              if (pbVar9 < pbVar23 + 1) {
                bVar48 = true;
              }
              else {
                pcVar14 = *(char **)(iVar41 + 0xbf8);
                *(char **)(iVar41 + 0xbf8) = pcVar14 + 1;
                bVar48 = *pcVar14 != 'C';
              }
              *(byte **)(iVar41 + 0x3f4) = pbVar23 + 2;
              if (pbVar9 < pbVar23 + 2) {
                bVar48 = true;
              }
              else {
                pcVar14 = *(char **)(iVar41 + 0xbf8);
                *(char **)(iVar41 + 0xbf8) = pcVar14 + 1;
                if (*pcVar14 != 'y') {
                  bVar48 = true;
                }
              }
              *(byte **)(iVar41 + 0x3f4) = pbVar23 + 3;
              if (pbVar9 < pbVar23 + 3) {
                cVar24 = '\0';
              }
              else {
                pcVar14 = *(char **)(iVar41 + 0xbf8);
                *(char **)(iVar41 + 0xbf8) = pcVar14 + 1;
                cVar24 = *pcVar14;
              }
              pbVar13 = pbVar23 + 4;
              *(byte **)(iVar41 + 0x3f4) = pbVar13;
              if (pbVar9 < pbVar13) {
                cVar15 = '\0';
              }
              else {
                pcVar14 = *(char **)(iVar41 + 0xbf8);
                *(char **)(iVar41 + 0xbf8) = pcVar14 + 1;
                cVar15 = *pcVar14;
              }
              if ((bVar48) || (cVar15 != '\x7f' || cVar24 != '\a')) {
                if (uVar44 < 5) goto LAB_000b9ff8;
                pbVar21 = pbVar23 + 5;
                pbVar22 = pbVar23 + uVar44;
                uVar5 = (uint)(pbVar22 + ~(uint)pbVar13) & 7;
                if (pbVar21 <= pbVar9) {
                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                }
                if (pbVar21 != pbVar22) {
                  if (uVar5 == 0) goto LAB_000ba504;
                  if (uVar5 != 1) {
                    if (uVar5 != 2) {
                      if (uVar5 != 3) {
                        if (uVar5 != 4) {
                          if (uVar5 != 5) {
                            if ((uVar5 != 6) && (pbVar21 = pbVar23 + 6, pbVar21 <= pbVar9)) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                            pbVar21 = pbVar21 + 1;
                            if (pbVar21 <= pbVar9) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          pbVar21 = pbVar21 + 1;
                          if (pbVar21 <= pbVar9) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        pbVar21 = pbVar21 + 1;
                        if (pbVar21 <= pbVar9) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                      pbVar21 = pbVar21 + 1;
                      if (pbVar21 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                    }
                    pbVar21 = pbVar21 + 1;
                    if (pbVar21 <= pbVar9) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                  }
                  pbVar21 = pbVar21 + 1;
                  while( true ) {
                    if (pbVar21 <= pbVar9) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    if (pbVar21 == pbVar22) break;
LAB_000ba504:
                    if (pbVar21 + 1 <= pbVar9) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    if (pbVar21 + 2 <= pbVar9) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    pbVar23 = pbVar21 + 8;
                    if (pbVar21 + 3 <= pbVar9) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    pbVar26 = pbVar21 + 7;
                    if (pbVar21 + 4 <= pbVar9) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    if (pbVar21 + 5 <= pbVar9) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    if (pbVar21 + 6 <= pbVar9) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    pbVar21 = pbVar23;
                    if (pbVar26 <= pbVar9) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                  }
                }
                uVar5 = *(uint *)(iVar41 + 0xc48);
                pbVar9 = pbVar13 + (uVar44 - 4);
                pbVar23 = *(byte **)(iVar41 + 0x3f0);
                goto LAB_000b9fa2;
              }
              pbVar13 = pbVar23 + 5;
              *(byte **)(iVar41 + 0x3f4) = pbVar13;
              if (pbVar9 < pbVar13) {
LAB_000ba2a4:
                pbVar13 = pbVar23 + 6;
                *(byte **)(iVar41 + 0x3f4) = pbVar13;
                if (pbVar9 < pbVar13) {
                  bVar20 = 0;
                }
                else {
                  pbVar21 = *(byte **)(iVar41 + 0xbf8);
                  *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
                  bVar20 = *pbVar21 & 0x7f;
                }
                *(byte *)(iVar41 + 0xc51) = bVar20;
                if (6 < uVar44) {
                  pbVar21 = pbVar23 + 7;
                  pbVar22 = pbVar23 + uVar44;
                  uVar5 = (uint)(pbVar22 + ~(uint)pbVar13) & 7;
                  if (pbVar21 <= pbVar9) {
                    *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                  }
                  if (pbVar21 != pbVar22) {
                    if (uVar5 == 0) goto LAB_000ba384;
                    if (uVar5 != 1) {
                      if (uVar5 != 2) {
                        if (uVar5 != 3) {
                          if (uVar5 != 4) {
                            if (uVar5 != 5) {
                              if ((uVar5 != 6) && (pbVar21 = pbVar23 + 8, pbVar21 <= pbVar9)) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                              pbVar21 = pbVar21 + 1;
                              if (pbVar21 <= pbVar9) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            pbVar21 = pbVar21 + 1;
                            if (pbVar21 <= pbVar9) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          pbVar21 = pbVar21 + 1;
                          if (pbVar21 <= pbVar9) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        pbVar21 = pbVar21 + 1;
                        if (pbVar21 <= pbVar9) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                      pbVar21 = pbVar21 + 1;
                      if (pbVar21 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                    }
                    pbVar21 = pbVar21 + 1;
                    while( true ) {
                      if (pbVar21 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar21 == pbVar22) break;
LAB_000ba384:
                      if (pbVar21 + 1 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar21 + 2 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      pbVar23 = pbVar21 + 5;
                      pbVar26 = pbVar21 + 6;
                      if (pbVar21 + 3 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar21 + 4 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      pbVar27 = pbVar21 + 7;
                      pbVar21 = pbVar21 + 8;
                      if (pbVar23 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar26 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar27 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                    }
                  }
                  uVar5 = *(uint *)(iVar41 + 0xc48);
                  pbVar9 = pbVar13 + (uVar44 - 6);
                  pbVar23 = *(byte **)(iVar41 + 0x3f0);
                  goto LAB_000b9fa2;
                }
              }
              else {
                pbVar22 = *(byte **)(iVar41 + 0xbf8);
                pbVar21 = pbVar22 + 1;
                *(byte **)(iVar41 + 0xbf8) = pbVar21;
                if ((*pbVar22 & 0x7f) == 0) goto LAB_000ba2a4;
                if ((*pbVar22 & 0x7f) != 0xb) {
                  if (uVar44 < 6) goto LAB_000b9ff8;
                  pbVar27 = pbVar23 + uVar44;
                  pbVar26 = pbVar23 + 6;
                  if (pbVar26 <= pbVar9) {
                    pbVar21 = pbVar22 + 2;
                    *(byte **)(iVar41 + 0xbf8) = pbVar21;
                  }
                  uVar5 = (uint)(pbVar27 + ~(uint)pbVar13) & 7;
                  if (pbVar26 != pbVar27) {
                    if (uVar5 != 0) {
                      if (uVar5 != 1) {
                        if (uVar5 != 2) {
                          if (uVar5 != 3) {
                            if (uVar5 != 4) {
                              if (uVar5 != 5) {
                                if ((uVar5 != 6) && (pbVar26 = pbVar23 + 7, pbVar26 <= pbVar9)) {
                                  pbVar21 = pbVar21 + 1;
                                  *(byte **)(iVar41 + 0xbf8) = pbVar21;
                                }
                                pbVar26 = pbVar26 + 1;
                                if (pbVar26 <= pbVar9) {
                                  pbVar21 = pbVar21 + 1;
                                  *(byte **)(iVar41 + 0xbf8) = pbVar21;
                                }
                              }
                              pbVar26 = pbVar26 + 1;
                              if (pbVar26 <= pbVar9) {
                                pbVar21 = pbVar21 + 1;
                                *(byte **)(iVar41 + 0xbf8) = pbVar21;
                              }
                            }
                            pbVar26 = pbVar26 + 1;
                            if (pbVar26 <= pbVar9) {
                              pbVar21 = pbVar21 + 1;
                              *(byte **)(iVar41 + 0xbf8) = pbVar21;
                            }
                          }
                          pbVar26 = pbVar26 + 1;
                          if (pbVar26 <= pbVar9) {
                            pbVar21 = pbVar21 + 1;
                            *(byte **)(iVar41 + 0xbf8) = pbVar21;
                          }
                        }
                        pbVar26 = pbVar26 + 1;
                        if (pbVar26 <= pbVar9) {
                          pbVar21 = pbVar21 + 1;
                          *(byte **)(iVar41 + 0xbf8) = pbVar21;
                        }
                      }
                      pbVar26 = pbVar26 + 1;
                      if (pbVar26 <= pbVar9) {
                        pbVar21 = pbVar21 + 1;
                        *(byte **)(iVar41 + 0xbf8) = pbVar21;
                      }
                      if (pbVar26 == pbVar27) goto LAB_000bba00;
                    }
                    do {
                      if (pbVar26 + 1 <= pbVar9) {
                        pbVar21 = pbVar21 + 1;
                        *(byte **)(iVar41 + 0xbf8) = pbVar21;
                      }
                      if (pbVar26 + 2 <= pbVar9) {
                        pbVar21 = pbVar21 + 1;
                        *(byte **)(iVar41 + 0xbf8) = pbVar21;
                      }
                      if (pbVar26 + 3 <= pbVar9) {
                        pbVar21 = pbVar21 + 1;
                        *(byte **)(iVar41 + 0xbf8) = pbVar21;
                      }
                      if (pbVar26 + 4 <= pbVar9) {
                        pbVar21 = pbVar21 + 1;
                        *(byte **)(iVar41 + 0xbf8) = pbVar21;
                      }
                      if (pbVar26 + 5 <= pbVar9) {
                        pbVar21 = pbVar21 + 1;
                        *(byte **)(iVar41 + 0xbf8) = pbVar21;
                      }
                      pbVar23 = pbVar26 + 7;
                      if (pbVar26 + 6 <= pbVar9) {
                        pbVar21 = pbVar21 + 1;
                        *(byte **)(iVar41 + 0xbf8) = pbVar21;
                      }
                      pbVar26 = pbVar26 + 8;
                      if (pbVar23 <= pbVar9) {
                        pbVar21 = pbVar21 + 1;
                        *(byte **)(iVar41 + 0xbf8) = pbVar21;
                      }
                      if (pbVar26 <= pbVar9) {
                        pbVar21 = pbVar21 + 1;
                        *(byte **)(iVar41 + 0xbf8) = pbVar21;
                      }
                    } while (pbVar26 != pbVar27);
                  }
LAB_000bba00:
                  uVar5 = *(uint *)(iVar41 + 0xc48);
                  pbVar9 = pbVar13 + (uVar44 - 5);
                  pbVar23 = *(byte **)(iVar41 + 0x3f0);
                  goto LAB_000b9fa2;
                }
                pbVar26 = pbVar23 + 6;
                *(byte **)(iVar41 + 0x3f4) = pbVar26;
                pbVar27 = pbVar23 + 7;
                if (pbVar9 < pbVar26) {
                  uVar5 = 0xff;
                }
                else {
                  pbVar21 = pbVar22 + 2;
                  *(byte **)(iVar41 + 0xbf8) = pbVar21;
                  uVar5 = (uint)pbVar22[1];
                }
                *(byte **)(iVar41 + 0x3f4) = pbVar27;
                pbVar13 = pbVar23 + 8;
                if (pbVar26 <= pbVar9) {
                  uVar5 = (uVar5 & 0x7f) - 1 & 0xff;
                }
                if (pbVar9 < pbVar27) {
                  bVar20 = 0;
                  pbVar22 = pbVar21;
                }
                else {
                  pbVar22 = pbVar21 + 1;
                  *(byte **)(iVar41 + 0xbf8) = pbVar22;
                  bVar20 = *pbVar21;
                }
                *(byte **)(iVar41 + 0x3f4) = pbVar13;
                if (pbVar27 <= pbVar9) {
                  bVar20 = bVar20 & 0x7f;
                }
                if (pbVar9 < pbVar13) {
                  bVar2 = 0;
                }
                else {
                  *(byte **)(iVar41 + 0xbf8) = pbVar22 + 1;
                  bVar2 = *pbVar22 & 0x7f;
                }
                if (8 < uVar44) {
                  pbVar21 = pbVar23 + 9;
                  pbVar22 = pbVar23 + uVar44;
                  uVar40 = (uint)(pbVar22 + ~(uint)pbVar13) & 7;
                  if (pbVar21 <= pbVar9) {
                    *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                  }
                  if (pbVar21 != pbVar22) {
                    if (uVar40 != 0) {
                      if (uVar40 != 1) {
                        if (uVar40 != 2) {
                          if (uVar40 != 3) {
                            if (uVar40 != 4) {
                              if (uVar40 != 5) {
                                if ((uVar40 != 6) && (pbVar21 = pbVar23 + 10, pbVar21 <= pbVar9)) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                                pbVar21 = pbVar21 + 1;
                                if (pbVar21 <= pbVar9) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                              }
                              pbVar21 = pbVar21 + 1;
                              if (pbVar21 <= pbVar9) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            pbVar21 = pbVar21 + 1;
                            if (pbVar21 <= pbVar9) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          pbVar21 = pbVar21 + 1;
                          if (pbVar21 <= pbVar9) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        pbVar21 = pbVar21 + 1;
                        if (pbVar21 <= pbVar9) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                      pbVar21 = pbVar21 + 1;
                      if (pbVar21 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar21 == pbVar22) goto LAB_000bbbc4;
                    }
                    do {
                      if (pbVar21 + 1 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar21 + 2 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar21 + 3 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar21 + 4 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar21 + 5 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar21 + 6 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      pbVar23 = pbVar21 + 7;
                      pbVar21 = pbVar21 + 8;
                      if (pbVar23 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (pbVar21 <= pbVar9) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                    } while (pbVar21 != pbVar22);
                  }
LAB_000bbbc4:
                  pbVar13 = pbVar13 + (uVar44 - 8);
                  *(byte **)(iVar41 + 0x3f4) = pbVar13;
                }
                if (uVar5 < 0x20) {
                  if (bVar20 == 1) {
                    uVar1 = 0xff;
                  }
                  else {
                    if (bVar20 == 0) {
                      *(byte *)(iVar46 + uVar5 * 3 + 2) = bVar2;
                      uVar5 = *(uint *)(iVar41 + 0xc48);
                      pbVar9 = *(byte **)(iVar41 + 0x3f4);
                      pbVar23 = *(byte **)(iVar41 + 0x3f0);
                      goto LAB_000b9fa2;
                    }
                    if (bVar20 != 2) goto LAB_000b9ff8;
                    uVar1 = 0x80;
                  }
                  *(undefined1 *)(iVar46 + uVar5 * 3 + 2) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0xc48);
                  pbVar9 = *(byte **)(iVar41 + 0x3f4);
                  pbVar23 = *(byte **)(iVar41 + 0x3f0);
                  goto LAB_000b9fa2;
                }
              }
LAB_000b9ff8:
              pbVar23 = *(byte **)(iVar41 + 0x3f0);
              pbVar21 = pbVar13 + 1;
              uVar5 = *(uint *)(iVar41 + 0xc48);
              *(byte **)(iVar41 + 0x3f4) = pbVar21;
              if (pbVar21 <= pbVar23) goto LAB_000ba00a;
LAB_000b9fae:
              if (uVar5 <= uVar36) goto LAB_000b9960;
              break;
            }
            pbVar23 = pbVar21 + 2;
            *(byte **)(iVar41 + 0x3f4) = pbVar23;
            pbVar13 = pbVar21 + 3;
            if (pbVar9 < pbVar23) {
              bVar20 = 0;
            }
            else {
              pbVar22 = pbVar26 + 2;
              *(byte **)(iVar41 + 0xbf8) = pbVar22;
              bVar20 = pbVar26[1];
            }
            *(byte **)(iVar41 + 0x3f4) = pbVar13;
            if (pbVar23 <= pbVar9) {
              bVar20 = bVar20 & 0x7f;
            }
            if (pbVar9 < pbVar13) {
              bVar2 = 0;
            }
            else {
              *(byte **)(iVar41 + 0xbf8) = pbVar22 + 1;
              bVar2 = *pbVar22 & 0x7f;
            }
            if (bVar20 == 0xf) {
              if (0x18 < bVar2) goto LAB_000b9ff8;
              *(byte *)(iVar42 + uVar40 * 0x20 + 0xd) = bVar2;
              pbVar9 = *(byte **)(iVar41 + 0x3f4);
              uVar5 = *(uint *)(iVar41 + 0xc48);
              pbVar23 = *(byte **)(iVar41 + 0x3f0);
            }
            else if (bVar20 < 0x10) {
              if (bVar20 == 7) {
                *(byte *)(iVar42 + uVar40 * 0x20 + 7) = bVar2;
                pbVar9 = *(byte **)(iVar41 + 0x3f4);
                uVar5 = *(uint *)(iVar41 + 0xc48);
                pbVar23 = *(byte **)(iVar41 + 0x3f0);
              }
              else if (bVar20 < 8) {
                if (bVar20 == 0) {
                  *(byte *)(iVar42 + uVar40 * 0x20) = bVar2;
                  pbVar9 = *(byte **)(iVar41 + 0x3f4);
                  uVar5 = *(uint *)(iVar41 + 0xc48);
                  pbVar23 = *(byte **)(iVar41 + 0x3f0);
                }
                else {
                  if ((bVar20 != 1) || (*(byte *)(iVar41 + 0x1c76) == uVar40)) goto LAB_000b9ff8;
                  uVar1 = 0;
                  if (bVar2 != 0) {
                    if (bVar2 < 0x20) {
                      uVar1 = 1;
                    }
                    else if (bVar2 < 0x40) {
                      uVar1 = 2;
                    }
                    else if (bVar2 < 0x60) {
                      uVar1 = 3;
                    }
                    else {
                      uVar1 = 4;
                    }
                  }
                  *(undefined1 *)(iVar42 + uVar40 * 0x20 + 6) = uVar1;
                  pbVar9 = *(byte **)(iVar41 + 0x3f4);
                  uVar5 = *(uint *)(iVar41 + 0xc48);
                  pbVar23 = *(byte **)(iVar41 + 0x3f0);
                }
              }
              else if (bVar20 == 10) {
                *(byte *)(iVar42 + uVar40 * 0x20 + 8) = bVar2;
                pbVar9 = *(byte **)(iVar41 + 0x3f4);
                uVar5 = *(uint *)(iVar41 + 0xc48);
                pbVar23 = *(byte **)(iVar41 + 0x3f0);
              }
              else {
                if (bVar20 != 0xb) goto LAB_000b9ff8;
                *(byte *)(iVar42 + uVar40 * 0x20 + 9) = bVar2;
                pbVar9 = *(byte **)(iVar41 + 0x3f4);
                uVar5 = *(uint *)(iVar41 + 0xc48);
                pbVar23 = *(byte **)(iVar41 + 0x3f0);
              }
            }
            else if (bVar20 == 0x47) {
              if (*(byte *)(iVar41 + 0x1c75) != uVar40) goto LAB_000b9ff8;
              *(byte *)(iVar42 + uVar40 * 0x20 + 0x17) = bVar2;
              pbVar9 = *(byte **)(iVar41 + 0x3f4);
              uVar5 = *(uint *)(iVar41 + 0xc48);
              pbVar23 = *(byte **)(iVar41 + 0x3f0);
            }
            else if (bVar20 < 0x48) {
              if (bVar20 == 0x20) {
                *(byte *)(iVar42 + uVar40 * 0x20 + 1) = bVar2;
                pbVar9 = *(byte **)(iVar41 + 0x3f4);
                uVar5 = *(uint *)(iVar41 + 0xc48);
                pbVar23 = *(byte **)(iVar41 + 0x3f0);
              }
              else {
                if (bVar20 != 0x40) goto LAB_000b9ff8;
                *(bool *)(iVar42 + uVar40 * 0x20 + 10) = 0x3f < bVar2;
                pbVar9 = *(byte **)(iVar41 + 0x3f4);
                uVar5 = *(uint *)(iVar41 + 0xc48);
                pbVar23 = *(byte **)(iVar41 + 0x3f0);
              }
            }
            else if (bVar20 == 0x79) {
              if (bVar2 != 0) goto LAB_000b9ff8;
              iVar11 = iVar42 + uVar40 * 0x20;
              *(undefined1 *)(iVar11 + 6) = 0;
              *(undefined1 *)(iVar11 + 10) = 0;
              *(undefined1 *)(iVar11 + 9) = 0x7f;
              *(undefined1 *)(iVar11 + 0xc) = 0x40;
              *(undefined1 *)(iVar11 + 0x10) = 100;
              pbVar9 = *(byte **)(iVar41 + 0x3f4);
              uVar5 = *(uint *)(iVar41 + 0xc48);
              pbVar23 = *(byte **)(iVar41 + 0x3f0);
            }
            else if (bVar20 == 0x7e) {
              if ((bVar2 != 1) || ((1 << uVar40 & *(uint *)(iVar41 + 0x1c70)) != 0))
              goto LAB_000b9ff8;
              *(undefined1 *)(iVar42 + uVar40 * 0x20 + 0xb) = 0;
              *(uint *)(iVar41 + 0x1c70) = 1 << uVar40 | *(uint *)(iVar41 + 0x1c70);
              pbVar9 = *(byte **)(iVar41 + 0x3f4);
              uVar5 = *(uint *)(iVar41 + 0xc48);
              pbVar23 = *(byte **)(iVar41 + 0x3f0);
            }
            else {
              if ((bVar20 != 0x4a) || (*(byte *)(iVar41 + 0x1c75) != uVar40)) goto LAB_000b9ff8;
              *(byte *)(iVar42 + uVar40 * 0x20 + 0x18) = bVar2;
              pbVar9 = *(byte **)(iVar41 + 0x3f4);
              uVar5 = *(uint *)(iVar41 + 0xc48);
              pbVar23 = *(byte **)(iVar41 + 0x3f0);
            }
LAB_000b9fa2:
            pbVar21 = pbVar9 + 1;
            *(byte **)(iVar41 + 0x3f4) = pbVar21;
            pbVar13 = pbVar9;
            if (pbVar23 < pbVar21) goto LAB_000b9fae;
LAB_000ba00a:
            pbVar9 = *(byte **)(iVar41 + 0xbf8);
            *(byte **)(iVar41 + 0xbf8) = pbVar9 + 1;
            uVar44 = *pbVar9 & 0x7f;
            if ((int)((uint)*pbVar9 << 0x18) < 0) {
              pbVar21 = pbVar13 + 2;
              *(byte **)(iVar41 + 0x3f4) = pbVar21;
              if (pbVar21 <= pbVar23) {
                *(byte **)(iVar41 + 0xbf8) = pbVar9 + 2;
                uVar44 = (pbVar9[1] & 0x7f) + uVar44 * 0x80;
                if (-1 < (int)((uint)pbVar9[1] << 0x18)) goto LAB_000ba428;
                pbVar21 = pbVar13 + 3;
                *(byte **)(iVar41 + 0x3f4) = pbVar21;
                if (pbVar21 <= pbVar23) {
                  *(byte **)(iVar41 + 0xbf8) = pbVar9 + 3;
                  uVar44 = (pbVar9[2] & 0x7f) + uVar44 * 0x80;
                  if (-1 < (int)((uint)pbVar9[2] << 0x18)) goto LAB_000ba428;
                  pbVar21 = pbVar13 + 4;
                  *(byte **)(iVar41 + 0x3f4) = pbVar21;
                  if (pbVar21 <= pbVar23) {
                    *(byte **)(iVar41 + 0xbf8) = pbVar9 + 4;
                    if ((-1 < (int)((uint)pbVar9[3] << 0x18)) &&
                       (uVar44 = (uint)pbVar9[3] + uVar44 * 0x80, uVar44 < 0x200000))
                    goto LAB_000ba428;
                    *(byte **)(iVar41 + 0x3f4) = pbVar23;
                    pbVar21 = pbVar23;
                  }
                }
              }
              goto LAB_000b9fae;
            }
LAB_000ba428:
            uVar36 = uVar36 + uVar44;
            if (uVar5 <= uVar36) goto LAB_000b9960;
            pbVar9 = pbVar23;
          } while (pbVar21 < pbVar23);
        }
        goto LAB_000b8b2e;
      }
    }
LAB_000b9960:
    if (pbVar21 < pbVar23) {
      puVar12 = *(uint **)(iVar41 + 0xc20);
      if (puVar12 != (uint *)0x0) {
        *(uint *)(iVar41 + 0xc20) = puVar12[8];
      }
      *puVar12 = uVar36;
      puVar12[7] = 6;
      FUN_000b4540(iVar41,puVar12);
      puVar28 = *(uint **)(iVar41 + 0xc1c);
      if (puVar28 == (uint *)0x0) {
        *(uint **)(iVar41 + 0xc1c) = puVar12;
        puVar12[8] = 0;
        uVar5 = *(int *)(iVar41 + 0xc38) + *(int *)(iVar41 + 0xc34);
        goto LAB_000b876a;
      }
      if (*puVar12 < *puVar28) {
        *(uint **)(iVar41 + 0xc1c) = puVar12;
        puVar12[8] = (uint)puVar28;
        uVar5 = *(int *)(iVar41 + 0xc34) + *(int *)(iVar41 + 0xc38);
        goto LAB_000b876a;
      }
      puVar33 = (uint *)puVar28[8];
      if (puVar33 != (uint *)0x0) {
        uVar5 = *puVar33;
        puVar30 = puVar28;
        puVar28 = puVar33;
        while (uVar5 <= *puVar12) {
          puVar33 = (uint *)puVar28[8];
          if (puVar33 == (uint *)0x0) goto LAB_000b9a56;
          puVar30 = puVar28;
          puVar28 = puVar33;
          uVar5 = *puVar33;
        }
        goto LAB_000bb4ce;
      }
LAB_000b9a56:
      puVar28[8] = (uint)puVar12;
      goto LAB_000b9a58;
    }
    puVar12 = *(uint **)(iVar41 + 0xc20);
    if (puVar12 != (uint *)0x0) {
      *(uint *)(iVar41 + 0xc20) = puVar12[8];
    }
    *puVar12 = uVar5;
    puVar12[1] = 0xff;
    puVar12[6] = 0xffffffff;
    puVar28 = *(uint **)(iVar41 + 0xc1c);
    if ((puVar28 == (uint *)0x0) || (uVar5 < *puVar28)) {
      *(uint **)(iVar41 + 0xc1c) = puVar12;
      puVar12[8] = (uint)puVar28;
    }
    else {
      puVar33 = (uint *)puVar28[8];
      if (puVar33 == (uint *)0x0) {
LAB_000b99b0:
        puVar28[8] = (uint)puVar12;
        puVar12[8] = 0;
      }
      else {
        uVar36 = *puVar33;
        puVar30 = puVar28;
        puVar28 = puVar33;
        while (uVar36 <= uVar5) {
          puVar33 = (uint *)puVar28[8];
          if (puVar33 == (uint *)0x0) goto LAB_000b99b0;
          puVar30 = puVar28;
          puVar28 = puVar33;
          uVar36 = *puVar33;
        }
        puVar30[8] = (uint)puVar12;
        puVar12[8] = (uint)puVar28;
      }
    }
LAB_000b983a:
    *(undefined4 *)(iVar41 + 0xc44) = 0;
    uVar5 = *(int *)(iVar41 + 0xc38) + *(int *)(iVar41 + 0xc34);
    goto LAB_000b876a;
  case 7:
    uVar44 = *(uint *)(iVar41 + 0x250);
    uVar36 = 1;
    pbVar21 = *(byte **)(iVar41 + 0x24c);
    *(undefined4 *)(iVar41 + 0x3f4) = 1;
    *(uint *)(iVar41 + 0x3f0) = uVar44;
    *(byte **)(iVar41 + 0xbf8) = pbVar21;
    if (uVar44 == 0) {
LAB_000b8aaa:
      uVar40 = 0;
      if (uVar5 != 0) {
LAB_000b8ab2:
        puVar12 = *(uint **)(iVar41 + 0xc20);
        if (puVar12 != (uint *)0x0) {
          *(uint *)(iVar41 + 0xc20) = puVar12[8];
        }
        *puVar12 = uVar5;
        puVar12[1] = 0xff;
        puVar12[6] = 0xffffffff;
        puVar28 = *(uint **)(iVar41 + 0xc1c);
        if ((puVar28 == (uint *)0x0) || (uVar5 < *puVar28)) goto LAB_000b9834;
        puVar33 = (uint *)puVar28[8];
        if (puVar33 != (uint *)0x0) {
          uVar36 = *puVar33;
          puVar30 = puVar28;
          puVar28 = puVar33;
          while (uVar36 <= uVar5) {
            puVar33 = (uint *)puVar28[8];
            if (puVar33 == (uint *)0x0) goto LAB_000b8afe;
            puVar30 = puVar28;
            puVar28 = puVar33;
            uVar36 = *puVar33;
          }
          goto LAB_000b9f50;
        }
LAB_000b8afe:
        puVar28[8] = (uint)puVar12;
        puVar12[8] = 0;
        goto LAB_000b983a;
      }
    }
    else {
      *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
      uVar40 = *pbVar21 & 0x7f;
      if ((int)((uint)*pbVar21 << 0x18) < 0) {
        uVar36 = 2;
        *(undefined4 *)(iVar41 + 0x3f4) = 2;
        if (1 < uVar44) {
          *(byte **)(iVar41 + 0xbf8) = pbVar21 + 2;
          uVar40 = (pbVar21[1] & 0x7f) + uVar40 * 0x80;
          if ((int)((uint)pbVar21[1] << 0x18) < 0) {
            uVar36 = 3;
            *(undefined4 *)(iVar41 + 0x3f4) = 3;
            if (uVar44 < 3) goto LAB_000b986e;
            *(byte **)(iVar41 + 0xbf8) = pbVar21 + 3;
            uVar40 = (pbVar21[2] & 0x7f) + uVar40 * 0x80;
            uVar36 = 3;
            if (-1 < (int)((uint)pbVar21[2] << 0x18)) goto LAB_000bbe18;
            uVar36 = 4;
            *(undefined4 *)(iVar41 + 0x3f4) = 4;
            if (uVar44 < 4) goto LAB_000b986e;
            *(byte **)(iVar41 + 0xbf8) = pbVar21 + 4;
            uVar40 = (pbVar21[3] & 0x7f) + uVar40 * 0x80;
            if (-1 < (int)((uint)pbVar21[3] << 0x18)) goto LAB_000bbe18;
          }
          else {
LAB_000bbe18:
            if (uVar40 < 0x200000) goto LAB_000b9872;
          }
          *(uint *)(iVar41 + 0x3f4) = uVar44;
          uVar36 = uVar44;
          goto LAB_000b8aaa;
        }
LAB_000b986e:
        uVar40 = 0;
      }
LAB_000b9872:
      if (uVar40 < uVar5) {
        uVar18 = uVar44;
        if (uVar36 < uVar44) {
          do {
            *(uint *)(iVar41 + 0x3f4) = uVar36 + 1;
            if (uVar18 < uVar36 + 1) {
              uVar34 = 0;
              uVar5 = uVar34;
              uVar44 = uVar34;
            }
            else {
              pbVar21 = *(byte **)(iVar41 + 0xbf8);
              *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
              uVar44 = (uint)*pbVar21;
              if ((int)(uVar44 << 0x18) < 0) {
                uVar34 = (uVar44 & 0xf) + 0x10;
                uVar5 = uVar44 & 0xf0;
                uVar44 = uVar44 & 0xf;
              }
              else {
                uVar5 = uVar44 & 0xf0;
                uVar34 = uVar44 & 0xf;
                uVar44 = uVar34;
              }
            }
            if (uVar5 == 0x70) {
LAB_000bac74:
              *(uint *)(iVar41 + 0x3f4) = uVar36 + 2;
              uVar5 = uVar36 + 3;
              *(uint *)(iVar41 + 0x3f4) = uVar5;
              if (uVar36 + 2 <= uVar18) {
                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
              }
joined_r0x000ba85e:
              if (uVar5 <= uVar18) {
                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
              }
              goto switchD_000ba8c0_caseD_2;
            }
            if (uVar5 < 0x71) {
              if (uVar5 == 0x30) {
LAB_000ba870:
                uVar44 = uVar36 + 2;
                *(uint *)(iVar41 + 0x3f4) = uVar44;
                uVar5 = uVar36 + 3;
                if (uVar44 <= uVar18) {
                  pbVar21 = *(byte **)(iVar41 + 0xbf8);
                  *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
                  bVar20 = *pbVar21;
                }
                else {
                  bVar20 = 0;
                }
                *(uint *)(iVar41 + 0x3f4) = uVar5;
                if (uVar44 <= uVar18) {
                  bVar20 = bVar20 & 0x7f;
                }
                if (uVar18 < uVar5) {
                  uVar36 = 0;
                }
                else {
                  pbVar21 = *(byte **)(iVar41 + 0xbf8);
                  *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
                  uVar36 = *pbVar21 & 0x7f;
                }
                uVar1 = (undefined1)uVar36;
                switch(bVar20) {
                case 0:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 1:
                  if (*(byte *)(iVar41 + 0x1c76) != uVar34) {
                    uVar1 = 0;
                    if (uVar36 != 0) {
                      if (uVar36 < 0x20) {
                        uVar1 = 1;
                      }
                      else if (uVar36 < 0x40) {
                        uVar1 = 2;
                      }
                      else if (uVar36 < 0x60) {
                        uVar1 = 3;
                      }
                      else {
                        uVar1 = 4;
                      }
                    }
                    *(undefined1 *)(iVar42 + uVar34 * 0x20 + 6) = uVar1;
                    uVar5 = *(uint *)(iVar41 + 0x3f4);
                  }
                  break;
                case 7:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20 + 7) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 10:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20 + 8) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0xb:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20 + 9) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0xf:
                  if (uVar36 < 0x19) {
                    *(undefined1 *)(iVar42 + uVar34 * 0x20 + 0xd) = uVar1;
                    uVar5 = *(uint *)(iVar41 + 0x3f4);
                  }
                  break;
                case 0x1e:
                  *(short *)(iVar42 + uVar34 * 0x20 + 0x1e) = (short)(uVar36 << 7);
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0x1f:
                  iVar11 = iVar42 + uVar34 * 0x20;
                  *(ushort *)(iVar11 + 0x1e) = (ushort)uVar36 | *(ushort *)(iVar11 + 0x1e) & 0x3f80;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0x20:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20 + 1) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0x2f:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20 + 0x16) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0x40:
                  *(bool *)(iVar42 + uVar34 * 0x20 + 10) = 0x3f < uVar36;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0x47:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20 + 0x17) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0x4a:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20 + 0x18) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0x4f:
                  iVar11 = iVar42 + uVar34 * 0x20;
                  if ((uVar36 < 6) && ((1 << uVar36 & 0x3dU) != 0)) {
                    *(undefined1 *)(iVar11 + 0x1c) = uVar1;
                    uVar5 = *(uint *)(iVar41 + 0x3f4);
                  }
                  else {
                    *(undefined1 *)(iVar11 + 0x1c) = 0;
                    uVar5 = *(uint *)(iVar41 + 0x3f4);
                  }
                  break;
                case 0x5a:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20 + 0x19) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0x5b:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20 + 0x1a) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0x5d:
                  *(undefined1 *)(iVar42 + uVar34 * 0x20 + 0x1b) = uVar1;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                  break;
                case 0x79:
                  if (uVar36 == 0) {
                    iVar11 = iVar42 + uVar34 * 0x20;
                    *(undefined1 *)(iVar11 + 6) = 0;
                    *(undefined1 *)(iVar11 + 9) = 0x7f;
                    *(undefined1 *)(iVar11 + 10) = 0;
                    *(undefined1 *)(iVar11 + 0xc) = 0x40;
                    *(undefined1 *)(iVar11 + 0x10) = 100;
                    uVar5 = *(uint *)(iVar41 + 0x3f4);
                  }
                  break;
                case 0x7e:
                  if ((uVar36 == 1) && ((1 << uVar34 & *(uint *)(iVar41 + 0x1c70)) == 0)) {
                    *(undefined1 *)(iVar42 + uVar34 * 0x20 + 0xb) = 0;
                    *(uint *)(iVar41 + 0x1c70) = 1 << uVar34 | *(uint *)(iVar41 + 0x1c70);
                    uVar5 = *(uint *)(iVar41 + 0x3f4);
                  }
                }
                goto switchD_000ba8c0_caseD_2;
              }
              if (uVar5 < 0x31) {
                if (uVar5 == 0x10) {
LAB_000ba802:
                  uVar5 = uVar36 + 2;
                  bVar48 = uVar5 <= uVar18;
                  *(undefined4 *)(iVar41 + 0x1c70) = 0xffffffff;
                  *(uint *)(iVar41 + 0x3f4) = uVar5;
                  if (bVar48) {
                    uVar5 = *(uint *)(iVar41 + 0xbf8);
                  }
                  *(uint *)(iVar41 + 0x3f4) = uVar36 + 3;
                  if (bVar48) {
                    *(uint *)(iVar41 + 0xbf8) = uVar5 + 1;
                  }
                  if (uVar18 < uVar36 + 3) {
                    bVar20 = 0;
                  }
                  else {
                    pbVar21 = *(byte **)(iVar41 + 0xbf8);
                    *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
                    bVar20 = *pbVar21 & 0x7f;
                  }
                  FUN_000acefc(iVar41);
                  *(byte *)(iVar42 + uVar34 * 0x20 + 0x10) = bVar20;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                }
                else {
                  if (uVar5 == 0x20) goto LAB_000bac74;
                  if (uVar5 != 0) goto LAB_000ba6a2;
LAB_000ba7d6:
                  uVar36 = uVar36 + 2;
                  iVar11 = -1;
                  *(undefined4 *)(iVar41 + 0x1c70) = 0xffffffff;
                  if (uVar36 <= uVar18) {
                    iVar11 = *(int *)(iVar41 + 0xbf8);
                  }
                  *(uint *)(iVar41 + 0x3f4) = uVar36;
                  if (uVar36 <= uVar18) {
                    *(int *)(iVar41 + 0xbf8) = iVar11 + 1;
                  }
                  FUN_000acefc(iVar41);
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                }
                goto switchD_000ba8c0_caseD_2;
              }
              if (uVar5 == 0x50) {
LAB_000ba856:
                uVar5 = uVar36 + 2;
                *(uint *)(iVar41 + 0x3f4) = uVar5;
                goto joined_r0x000ba85e;
              }
              if (uVar5 == 0x60) {
LAB_000bac9a:
                *(uint *)(iVar41 + 0x3f4) = uVar36 + 2;
                uVar5 = uVar36 + 3;
                *(uint *)(iVar41 + 0x3f4) = uVar5;
                if (uVar36 + 2 <= uVar18) {
                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                }
                iVar11 = iVar42 + uVar34 * 0x20;
                if (uVar5 <= uVar18) {
                  pbVar21 = *(byte **)(iVar41 + 0xbf8);
                  *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
                  bVar20 = *pbVar21;
                }
                else {
                  bVar20 = 0;
                }
                if (uVar5 <= uVar18) {
                  bVar20 = bVar20 & 0x7f;
                }
                *(byte *)(iVar11 + 0xc) = bVar20;
                *(undefined1 *)(iVar11 + 0xe) = *(undefined1 *)(iVar11 + 0xd);
                uVar5 = *(uint *)(iVar41 + 0x3f4);
                goto switchD_000ba8c0_caseD_2;
              }
              if (uVar5 != 0x40) goto LAB_000ba6a2;
LAB_000ba774:
              *(uint *)(iVar41 + 0x3f4) = uVar36 + 2;
              iVar11 = iVar42 + uVar34 * 0x20;
              if (uVar18 < uVar36 + 2) {
                bVar20 = 0;
              }
              else {
                pbVar21 = *(byte **)(iVar41 + 0xbf8);
                *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
                bVar20 = *pbVar21 & 0x7f;
              }
              *(byte *)(iVar11 + 3) = bVar20;
              cVar24 = *(char *)(iVar42 + uVar34 * 0x20);
              if (cVar24 == '|') {
                if (*(byte *)(iVar11 + 1) < 10) {
                  *(byte *)(iVar11 + 2) = *(byte *)(iVar11 + 1) + 1;
                }
                else {
                  *(undefined1 *)(iVar11 + 2) = 0;
                }
                uVar5 = *(uint *)(iVar41 + 0x3f4);
              }
              else if (cVar24 == '}') {
                if ((*(char *)(iVar11 + 1) == '\0') && (bVar20 < 10)) {
                  *(byte *)(iVar11 + 2) = bVar20 + 0x81;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                }
                else {
                  *(undefined1 *)(iVar11 + 2) = 0x80;
                  uVar5 = *(uint *)(iVar41 + 0x3f4);
                }
              }
              else if (uVar34 == 9) {
LAB_000bb2a0:
                *(undefined1 *)(iVar11 + 2) = 0x80;
                uVar5 = *(uint *)(iVar41 + 0x3f4);
              }
              else {
                *(undefined1 *)(iVar11 + 2) = 0;
                uVar5 = *(uint *)(iVar41 + 0x3f4);
              }
              goto switchD_000ba8c0_caseD_2;
            }
            if (uVar5 == 0xb0) goto LAB_000ba870;
            if (0xb0 < uVar5) {
              if (uVar5 == 0xd0) goto LAB_000ba856;
              if (uVar5 < 0xd1) {
                if (uVar5 == 0xc0) goto LAB_000ba774;
                goto LAB_000ba6a2;
              }
              if (uVar5 == 0xe0) goto LAB_000bac9a;
              if (uVar5 != 0xf0) goto LAB_000ba6a2;
              if (uVar44 == 0xf) {
                uVar5 = uVar36 + 2;
                *(uint *)(iVar41 + 0x3f4) = uVar5;
                if ((uVar5 <= uVar18) &&
                   (pbVar21 = *(byte **)(iVar41 + 0xbf8), *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1,
                   (*pbVar21 & 0x7f) == 0x2f)) {
                  uVar5 = uVar18;
                }
                goto switchD_000ba8c0_caseD_2;
              }
              uVar44 = uVar36 + 2;
              *(uint *)(iVar41 + 0x3f4) = uVar44;
              if (uVar18 < uVar44) {
LAB_000bacfc:
                uVar34 = 0;
              }
              else {
                pbVar21 = *(byte **)(iVar41 + 0xbf8);
                *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
                uVar34 = *pbVar21 & 0x7f;
                if ((int)((uint)*pbVar21 << 0x18) < 0) {
                  uVar44 = uVar36 + 3;
                  *(uint *)(iVar41 + 0x3f4) = uVar44;
                  if (uVar44 <= uVar18) {
                    *(byte **)(iVar41 + 0xbf8) = pbVar21 + 2;
                    uVar34 = (pbVar21[1] & 0x7f) + uVar34 * 0x80;
                    if (-1 < (int)((uint)pbVar21[1] << 0x18)) goto LAB_000bacfe;
                    uVar44 = uVar36 + 4;
                    *(uint *)(iVar41 + 0x3f4) = uVar44;
                    if (uVar44 <= uVar18) {
                      *(byte **)(iVar41 + 0xbf8) = pbVar21 + 3;
                      uVar34 = (pbVar21[2] & 0x7f) + uVar34 * 0x80;
                      if (-1 < (int)((uint)pbVar21[2] << 0x18)) goto LAB_000bacfe;
                      uVar36 = uVar36 + 5;
                      *(uint *)(iVar41 + 0x3f4) = uVar36;
                      uVar44 = uVar36;
                      if (uVar36 <= uVar18) {
                        *(byte **)(iVar41 + 0xbf8) = pbVar21 + 4;
                        uVar34 = (pbVar21[3] & 0x7f) + uVar34 * 0x80;
                        uVar44 = uVar18;
                        if (-1 < (int)((uint)pbVar21[3] << 0x18)) {
                          uVar44 = uVar36;
                          if (0x1fffff < uVar34) {
                            uVar34 = 0;
                            uVar44 = uVar18;
                          }
                          goto LAB_000bacfe;
                        }
                      }
                    }
                  }
                  goto LAB_000bacfc;
                }
              }
LAB_000bacfe:
              *(uint *)(iVar41 + 0x3f4) = uVar44 + 1;
              if (uVar18 < uVar44 + 1) {
                bVar48 = true;
              }
              else {
                pcVar14 = *(char **)(iVar41 + 0xbf8);
                *(char **)(iVar41 + 0xbf8) = pcVar14 + 1;
                bVar48 = *pcVar14 != 'C';
              }
              *(uint *)(iVar41 + 0x3f4) = uVar44 + 2;
              if (uVar18 < uVar44 + 2) {
                bVar48 = true;
              }
              else {
                pcVar14 = *(char **)(iVar41 + 0xbf8);
                *(char **)(iVar41 + 0xbf8) = pcVar14 + 1;
                if (*pcVar14 != 'y') {
                  bVar48 = true;
                }
              }
              *(uint *)(iVar41 + 0x3f4) = uVar44 + 3;
              uVar5 = uVar44 + 4;
              if (uVar18 < uVar44 + 3) {
                cVar24 = '\0';
              }
              else {
                pcVar14 = *(char **)(iVar41 + 0xbf8);
                *(char **)(iVar41 + 0xbf8) = pcVar14 + 1;
                cVar24 = *pcVar14;
              }
              *(uint *)(iVar41 + 0x3f4) = uVar5;
              if (uVar18 < uVar5) {
                cVar15 = '\0';
              }
              else {
                pcVar14 = *(char **)(iVar41 + 0xbf8);
                *(char **)(iVar41 + 0xbf8) = pcVar14 + 1;
                cVar15 = *pcVar14;
              }
              if ((bVar48) || (cVar15 != '\x7f' || cVar24 != '\b')) {
                if (4 < uVar34) {
                  uVar36 = uVar44 + 5;
                  uVar35 = uVar34 + uVar44;
                  uVar29 = ~uVar5 + uVar35 & 7;
                  if (uVar36 <= uVar18) {
                    *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                  }
                  if (uVar36 != uVar35) {
                    if (uVar29 == 0) goto LAB_000bafa2;
                    if (uVar29 != 1) {
                      if (uVar29 != 2) {
                        if (uVar29 != 3) {
                          if (uVar29 != 4) {
                            if (uVar29 != 5) {
                              if ((uVar29 != 6) && (uVar36 = uVar44 + 6, uVar36 <= uVar18)) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                              uVar36 = uVar36 + 1;
                              if (uVar36 <= uVar18) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            uVar36 = uVar36 + 1;
                            if (uVar36 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          uVar36 = uVar36 + 1;
                          if (uVar36 <= uVar18) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        uVar36 = uVar36 + 1;
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                      uVar36 = uVar36 + 1;
                      if (uVar36 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                    }
                    uVar36 = uVar36 + 1;
                    while( true ) {
                      if (uVar36 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (uVar36 == uVar35) break;
LAB_000bafa2:
                      if (uVar36 + 1 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (uVar36 + 2 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      uVar44 = uVar36 + 8;
                      if (uVar36 + 3 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      uVar29 = uVar36 + 7;
                      if (uVar36 + 4 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (uVar36 + 5 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (uVar36 + 6 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      uVar36 = uVar44;
                      if (uVar29 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                    }
                  }
                  uVar5 = uVar5 + (uVar34 - 4);
                }
                goto switchD_000ba8c0_caseD_2;
              }
              uVar5 = uVar44 + 5;
              *(uint *)(iVar41 + 0x3f4) = uVar5;
              if (uVar18 < uVar5) {
switchD_000bb676_caseD_c:
                if (5 < uVar34) {
                  uVar36 = uVar44 + 6;
                  uVar35 = uVar34 + uVar44;
                  uVar29 = ~uVar5 + uVar35 & 7;
                  if (uVar36 <= uVar18) {
                    *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                  }
                  if (uVar36 != uVar35) {
                    if (uVar29 == 0) goto LAB_000bae3a;
                    if (uVar29 != 1) {
                      if (uVar29 != 2) {
                        if (uVar29 != 3) {
                          if (uVar29 != 4) {
                            if (uVar29 != 5) {
                              if ((uVar29 != 6) && (uVar36 = uVar44 + 7, uVar36 <= uVar18)) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                              uVar36 = uVar36 + 1;
                              if (uVar36 <= uVar18) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            uVar36 = uVar36 + 1;
                            if (uVar36 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          uVar36 = uVar36 + 1;
                          if (uVar36 <= uVar18) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        uVar36 = uVar36 + 1;
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                      uVar36 = uVar36 + 1;
                      if (uVar36 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                    }
                    uVar36 = uVar36 + 1;
                    while( true ) {
                      if (uVar36 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (uVar36 == uVar35) break;
LAB_000bae3a:
                      if (uVar36 + 1 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (uVar36 + 2 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      uVar44 = uVar36 + 8;
                      if (uVar36 + 3 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (uVar36 + 4 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      uVar29 = uVar36 + 7;
                      if (uVar36 + 5 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      if (uVar36 + 6 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                      uVar36 = uVar44;
                      if (uVar29 <= uVar18) {
                        *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                      }
                    }
                  }
                  uVar5 = uVar5 + (uVar34 - 5);
                }
              }
              else {
                pbVar9 = *(byte **)(iVar41 + 0xbf8);
                pbVar21 = pbVar9 + 1;
                *(byte **)(iVar41 + 0xbf8) = pbVar21;
                switch(*pbVar9 & 0x7f) {
                case 0xb:
                  uVar36 = uVar44 + 6;
                  *(uint *)(iVar41 + 0x3f4) = uVar36;
                  uVar29 = uVar44 + 7;
                  if (uVar36 <= uVar18) {
                    pbVar21 = pbVar9 + 2;
                    *(byte **)(iVar41 + 0xbf8) = pbVar21;
                    uVar35 = (uint)pbVar9[1];
                  }
                  else {
                    uVar35 = 0xff;
                  }
                  *(uint *)(iVar41 + 0x3f4) = uVar29;
                  uVar5 = uVar44 + 8;
                  if (uVar36 <= uVar18) {
                    uVar35 = (uVar35 & 0x7f) - 1 & 0xff;
                  }
                  if (uVar29 <= uVar18) {
                    pbVar9 = pbVar21 + 1;
                    *(byte **)(iVar41 + 0xbf8) = pbVar9;
                    bVar20 = *pbVar21;
                  }
                  else {
                    bVar20 = 0;
                    pbVar9 = pbVar21;
                  }
                  *(uint *)(iVar41 + 0x3f4) = uVar5;
                  if (uVar29 <= uVar18) {
                    bVar20 = bVar20 & 0x7f;
                  }
                  if (uVar18 < uVar5) {
                    bVar2 = 0;
                  }
                  else {
                    *(byte **)(iVar41 + 0xbf8) = pbVar9 + 1;
                    bVar2 = *pbVar9 & 0x7f;
                  }
                  if (8 < uVar34) {
                    uVar36 = uVar44 + 9;
                    uVar29 = uVar44 + uVar34;
                    uVar37 = ~uVar5 + uVar29 & 7;
                    if (uVar36 <= uVar18) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    if (uVar36 != uVar29) {
                      if (uVar37 != 0) {
                        if (uVar37 != 1) {
                          if (uVar37 != 2) {
                            if (uVar37 != 3) {
                              if (uVar37 != 4) {
                                if (uVar37 != 5) {
                                  if ((uVar37 != 6) && (uVar36 = uVar44 + 10, uVar36 <= uVar18)) {
                                    *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                  }
                                  uVar36 = uVar36 + 1;
                                  if (uVar36 <= uVar18) {
                                    *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                  }
                                }
                                uVar36 = uVar36 + 1;
                                if (uVar36 <= uVar18) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                              }
                              uVar36 = uVar36 + 1;
                              if (uVar36 <= uVar18) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            uVar36 = uVar36 + 1;
                            if (uVar36 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          uVar36 = uVar36 + 1;
                          if (uVar36 <= uVar18) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        uVar36 = uVar36 + 1;
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 == uVar29) goto LAB_000bb278;
                      }
                      do {
                        if (uVar36 + 1 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 2 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 3 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 4 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 5 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 6 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar44 = uVar36 + 7;
                        uVar36 = uVar36 + 8;
                        if (uVar44 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      } while (uVar36 != uVar29);
                    }
LAB_000bb278:
                    uVar5 = uVar5 + (uVar34 - 8);
                    *(uint *)(iVar41 + 0x3f4) = uVar5;
                  }
                  if (uVar35 < 0x20) {
                    if (bVar20 == 1) {
                      *(undefined1 *)(iVar46 + uVar35 * 3 + 2) = 0xff;
                      uVar5 = *(uint *)(iVar41 + 0x3f4);
                    }
                    else if (bVar20 == 0) {
                      *(byte *)(iVar46 + uVar35 * 3 + 2) = bVar2;
                      uVar5 = *(uint *)(iVar41 + 0x3f4);
                    }
                    else if (bVar20 == 2) {
                      iVar11 = iVar46 + uVar35 * 3;
                      goto LAB_000bb2a0;
                    }
                  }
                  break;
                default:
                  goto switchD_000bb676_caseD_c;
                case 0x20:
                  uVar5 = uVar44 + 6;
                  *(uint *)(iVar41 + 0x3f4) = uVar5;
                  if (uVar18 < uVar5) {
                    bVar20 = 0;
                  }
                  else {
                    *(byte **)(iVar41 + 0xbf8) = pbVar9 + 2;
                    bVar20 = pbVar9[1] & 0x7f;
                  }
                  *(byte *)(iVar41 + 0xc51) = bVar20;
                  if (6 < uVar34) {
                    uVar36 = uVar44 + 7;
                    uVar29 = uVar34 + uVar44;
                    uVar5 = ~uVar5 + uVar29 & 7;
                    if (uVar36 <= uVar18) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    if (uVar36 != uVar29) {
                      if (uVar5 == 0) goto LAB_000bc3c4;
                      if (uVar5 != 1) {
                        if (uVar5 != 2) {
                          if (uVar5 != 3) {
                            if (uVar5 != 4) {
                              if (uVar5 != 5) {
                                if ((uVar5 != 6) && (uVar36 = uVar44 + 8, uVar36 <= uVar18)) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                                uVar36 = uVar36 + 1;
                                if (uVar36 <= uVar18) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                              }
                              uVar36 = uVar36 + 1;
                              if (uVar36 <= uVar18) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            uVar36 = uVar36 + 1;
                            if (uVar36 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          uVar36 = uVar36 + 1;
                          if (uVar36 <= uVar18) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        uVar36 = uVar36 + 1;
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                      uVar36 = uVar36 + 1;
                      while( true ) {
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 == uVar29) break;
LAB_000bc3c4:
                        if (uVar36 + 1 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 2 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar5 = uVar36 + 8;
                        if (uVar36 + 3 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 4 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 5 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 6 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar35 = uVar36 + 7;
                        uVar36 = uVar5;
                        if (uVar35 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                    }
LAB_000bc114:
                    uVar5 = uVar44 + uVar34;
                  }
                  break;
                case 0x29:
                  uVar5 = uVar44 + 6;
                  *(uint *)(iVar41 + 0x3f4) = uVar5;
                  if (uVar18 < uVar5) {
                    uVar36 = 0;
                  }
                  else {
                    *(byte **)(iVar41 + 0xbf8) = pbVar9 + 2;
                    uVar36 = (uint)pbVar9[1];
                    if (3 < uVar36) {
                      if (6 < uVar34) {
                        uVar36 = uVar44 + 7;
                        uVar29 = uVar34 + uVar44;
                        if (uVar36 <= uVar18) {
                          *(byte **)(iVar41 + 0xbf8) = pbVar9 + 3;
                        }
                        uVar5 = ~uVar5 + uVar29 & 7;
                        if (uVar36 != uVar29) {
                          if (uVar5 == 0) goto LAB_000bc6ae;
                          if (uVar5 != 1) {
                            if (uVar5 != 2) {
                              if (uVar5 != 3) {
                                if (uVar5 != 4) {
                                  if (uVar5 != 5) {
                                    if ((uVar5 != 6) && (uVar36 = uVar44 + 8, uVar36 <= uVar18)) {
                                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                    }
                                    uVar36 = uVar36 + 1;
                                    if (uVar36 <= uVar18) {
                                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                    }
                                  }
                                  uVar36 = uVar36 + 1;
                                  if (uVar36 <= uVar18) {
                                    *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                  }
                                }
                                uVar36 = uVar36 + 1;
                                if (uVar36 <= uVar18) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                              }
                              uVar36 = uVar36 + 1;
                              if (uVar36 <= uVar18) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            uVar36 = uVar36 + 1;
                            if (uVar36 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          uVar36 = uVar36 + 1;
                          while( true ) {
                            if (uVar36 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                            if (uVar36 == uVar29) break;
LAB_000bc6ae:
                            if (uVar36 + 1 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                            if (uVar36 + 2 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                            uVar5 = uVar36 + 8;
                            if (uVar36 + 3 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                            if (uVar36 + 4 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                            uVar35 = uVar36 + 7;
                            if (uVar36 + 5 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                            if (uVar36 + 6 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                            uVar36 = uVar5;
                            if (uVar35 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                        }
                        goto LAB_000bc114;
                      }
                      break;
                    }
                  }
                  *(byte **)(iVar41 + (uVar36 + 0x40e) * 4 + 0xc20) = pbVar21;
                  if (6 < uVar34) {
                    uVar36 = uVar44 + 7;
                    uVar29 = uVar34 + uVar44;
                    uVar5 = ~uVar5 + uVar29 & 7;
                    if (uVar36 <= uVar18) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    if (uVar36 != uVar29) {
                      if (uVar5 == 0) goto LAB_000bc554;
                      if (uVar5 != 1) {
                        if (uVar5 != 2) {
                          if (uVar5 != 3) {
                            if (uVar5 != 4) {
                              if (uVar5 != 5) {
                                if ((uVar5 != 6) && (uVar36 = uVar44 + 8, uVar36 <= uVar18)) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                                uVar36 = uVar36 + 1;
                                if (uVar36 <= uVar18) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                              }
                              uVar36 = uVar36 + 1;
                              if (uVar36 <= uVar18) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            uVar36 = uVar36 + 1;
                            if (uVar36 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          uVar36 = uVar36 + 1;
                          if (uVar36 <= uVar18) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        uVar36 = uVar36 + 1;
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                      uVar36 = uVar36 + 1;
                      while( true ) {
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 == uVar29) break;
LAB_000bc554:
                        if (uVar36 + 1 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 2 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar5 = uVar36 + 8;
                        if (uVar36 + 3 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar35 = uVar36 + 7;
                        if (uVar36 + 4 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 5 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 6 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar36 = uVar5;
                        if (uVar35 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                    }
                    goto LAB_000bc114;
                  }
                  break;
                case 0x2a:
                  uVar36 = uVar44 + 6;
                  *(uint *)(iVar41 + 0x3f4) = uVar36;
                  uVar5 = uVar44 + 7;
                  if (uVar36 <= uVar18) {
                    pbVar21 = pbVar9 + 2;
                    *(byte **)(iVar41 + 0xbf8) = pbVar21;
                    uVar4 = (ushort)pbVar9[1];
                  }
                  else {
                    uVar4 = 0;
                  }
                  *(uint *)(iVar41 + 0x3f4) = uVar5;
                  if (uVar36 <= uVar18) {
                    uVar4 = uVar4 << 7;
                  }
                  if (uVar18 < uVar5) {
                    uVar10 = 0;
                  }
                  else {
                    *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
                    uVar10 = *pbVar21 & 0x7f;
                  }
                  *(ushort *)(iVar41 + 0x1c68) = uVar10 | uVar4;
                  if (7 < uVar34) {
                    uVar36 = uVar44 + 8;
                    uVar35 = uVar34 + uVar44;
                    uVar29 = ~uVar5 + uVar35 & 7;
                    if (uVar36 <= uVar18) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    if (uVar36 != uVar35) {
                      if (uVar29 == 0) goto LAB_000bc24c;
                      if (uVar29 != 1) {
                        if (uVar29 != 2) {
                          if (uVar29 != 3) {
                            if (uVar29 != 4) {
                              if (uVar29 != 5) {
                                if ((uVar29 != 6) && (uVar36 = uVar44 + 9, uVar36 <= uVar18)) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                                uVar36 = uVar36 + 1;
                                if (uVar36 <= uVar18) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                              }
                              uVar36 = uVar36 + 1;
                              if (uVar36 <= uVar18) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            uVar36 = uVar36 + 1;
                            if (uVar36 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          uVar36 = uVar36 + 1;
                          if (uVar36 <= uVar18) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        uVar36 = uVar36 + 1;
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                      uVar36 = uVar36 + 1;
                      while( true ) {
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 == uVar35) break;
LAB_000bc24c:
                        if (uVar36 + 1 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 2 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar44 = uVar36 + 8;
                        if (uVar36 + 3 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar29 = uVar36 + 7;
                        if (uVar36 + 4 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 5 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 6 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar36 = uVar44;
                        if (uVar29 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                    }
                    uVar5 = uVar5 + (uVar34 - 7);
                  }
                  break;
                case 0x2b:
                  uVar5 = uVar44 + 6;
                  *(uint *)(iVar41 + 0x3f4) = uVar5;
                  if (uVar18 < uVar5) {
                    bVar20 = 0;
                  }
                  else {
                    *(byte **)(iVar41 + 0xbf8) = pbVar9 + 2;
                    bVar20 = pbVar9[1];
                  }
                  *(byte *)(iVar41 + 0x1c6a) = bVar20;
                  if (6 < uVar34) {
                    uVar36 = uVar44 + 7;
                    uVar29 = uVar34 + uVar44;
                    uVar5 = ~uVar5 + uVar29 & 7;
                    if (uVar36 <= uVar18) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    if (uVar36 != uVar29) {
                      if (uVar5 == 0) goto LAB_000bc090;
                      if (uVar5 != 1) {
                        if (uVar5 != 2) {
                          if (uVar5 != 3) {
                            if (uVar5 != 4) {
                              if (uVar5 != 5) {
                                if ((uVar5 != 6) && (uVar36 = uVar44 + 8, uVar36 <= uVar18)) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                                uVar36 = uVar36 + 1;
                                if (uVar36 <= uVar18) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                              }
                              uVar36 = uVar36 + 1;
                              if (uVar36 <= uVar18) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            uVar36 = uVar36 + 1;
                            if (uVar36 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          uVar36 = uVar36 + 1;
                          if (uVar36 <= uVar18) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        uVar36 = uVar36 + 1;
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                      uVar36 = uVar36 + 1;
                      while( true ) {
                        if (uVar36 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 == uVar29) break;
LAB_000bc090:
                        if (uVar36 + 1 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 2 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar5 = uVar36 + 8;
                        if (uVar36 + 3 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 4 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar36 + 5 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar35 = uVar36 + 7;
                        if (uVar36 + 6 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar36 = uVar5;
                        if (uVar35 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                    }
                    goto LAB_000bc114;
                  }
                  break;
                case 0x2d:
                  uVar5 = uVar44 + 6;
                  *(uint *)(iVar41 + 0x3f4) = uVar5;
                  if (uVar18 < uVar5) {
                    uVar36 = 0;
                  }
                  else {
                    *(byte **)(iVar41 + 0xbf8) = pbVar9 + 2;
                    uVar36 = (uint)pbVar9[1];
                  }
                  if (6 < uVar34) {
                    uVar29 = uVar44 + 7;
                    uVar35 = uVar44 + uVar34;
                    uVar37 = ~uVar5 + uVar35 & 7;
                    if (uVar29 <= uVar18) {
                      *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                    }
                    if (uVar29 != uVar35) {
                      if (uVar37 == 0) goto LAB_000bbf00;
                      if (uVar37 != 1) {
                        if (uVar37 != 2) {
                          if (uVar37 != 3) {
                            if (uVar37 != 4) {
                              if (uVar37 != 5) {
                                if ((uVar37 != 6) && (uVar29 = uVar44 + 8, uVar29 <= uVar18)) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                                uVar29 = uVar29 + 1;
                                if (uVar29 <= uVar18) {
                                  *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                                }
                              }
                              uVar29 = uVar29 + 1;
                              if (uVar29 <= uVar18) {
                                *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                              }
                            }
                            uVar29 = uVar29 + 1;
                            if (uVar29 <= uVar18) {
                              *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                            }
                          }
                          uVar29 = uVar29 + 1;
                          if (uVar29 <= uVar18) {
                            *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                          }
                        }
                        uVar29 = uVar29 + 1;
                        if (uVar29 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                      uVar29 = uVar29 + 1;
                      while( true ) {
                        if (uVar29 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar29 == uVar35) break;
LAB_000bbf00:
                        if (uVar29 + 1 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar29 + 2 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar44 = uVar29 + 8;
                        if (uVar29 + 3 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar29 + 4 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar29 + 5 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        if (uVar29 + 6 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                        uVar37 = uVar29 + 7;
                        uVar29 = uVar44;
                        if (uVar37 <= uVar18) {
                          *(int *)(iVar41 + 0xbf8) = *(int *)(iVar41 + 0xbf8) + 1;
                        }
                      }
                    }
                    uVar5 = uVar5 + (uVar34 - 6);
                    *(uint *)(iVar41 + 0x3f4) = uVar5;
                  }
                  if (uVar36 < 0x20) {
                    if (*(int *)(iVar41 + 0x1c9c) == 0) {
                      *(undefined1 *)(iVar41 + 0x1c6c) = 0xff;
                    }
                    else {
                      *(char *)(iVar41 + 0x1c6c) = (char)uVar36;
                    }
                  }
                  else if (uVar36 - 0x40 < 0x20) {
                    if (*(int *)(iVar41 + 0x1ca8) == 0) {
                      *(undefined1 *)(iVar41 + 0x1c6d) = 0xff;
                      uVar5 = *(uint *)(iVar41 + 0x3f4);
                    }
                    else {
                      *(char *)(iVar41 + 0x1c6d) = (char)uVar36;
                      uVar5 = *(uint *)(iVar41 + 0x3f4);
                    }
                  }
                }
              }
switchD_000ba8c0_caseD_2:
              uVar44 = *(uint *)(iVar41 + 0x3f0);
              uVar36 = uVar5 + 1;
              *(uint *)(iVar41 + 0x3f4) = uVar36;
              uVar18 = uVar5;
              if (uVar36 <= uVar44) goto LAB_000ba6b4;
LAB_000b98e8:
              uVar5 = *(uint *)(iVar41 + 0xc48);
              if (uVar5 <= uVar40) goto LAB_000b98f2;
              break;
            }
            if (uVar5 == 0x90) goto LAB_000ba802;
            if (uVar5 == 0xa0) goto LAB_000bac74;
            if (uVar5 == 0x80) goto LAB_000ba7d6;
LAB_000ba6a2:
            uVar44 = *(uint *)(iVar41 + 0x3f0);
            uVar36 = uVar18 + 1;
            *(uint *)(iVar41 + 0x3f4) = uVar36;
            if (uVar44 < uVar36) goto LAB_000b98e8;
LAB_000ba6b4:
            pbVar21 = *(byte **)(iVar41 + 0xbf8);
            *(byte **)(iVar41 + 0xbf8) = pbVar21 + 1;
            uVar34 = *pbVar21 & 0x7f;
            if ((int)((uint)*pbVar21 << 0x18) < 0) {
              uVar36 = uVar18 + 2;
              *(uint *)(iVar41 + 0x3f4) = uVar36;
              if (uVar36 <= uVar44) {
                *(byte **)(iVar41 + 0xbf8) = pbVar21 + 2;
                uVar34 = (pbVar21[1] & 0x7f) + uVar34 * 0x80;
                if (-1 < (int)((uint)pbVar21[1] << 0x18)) goto LAB_000baec4;
                uVar36 = uVar18 + 3;
                *(uint *)(iVar41 + 0x3f4) = uVar36;
                if (uVar36 <= uVar44) {
                  *(byte **)(iVar41 + 0xbf8) = pbVar21 + 3;
                  uVar34 = (pbVar21[2] & 0x7f) + uVar34 * 0x80;
                  if (-1 < (int)((uint)pbVar21[2] << 0x18)) goto LAB_000baec4;
                  uVar36 = uVar18 + 4;
                  *(uint *)(iVar41 + 0x3f4) = uVar36;
                  if (uVar36 <= uVar44) {
                    *(byte **)(iVar41 + 0xbf8) = pbVar21 + 4;
                    if ((-1 < (int)((uint)pbVar21[3] << 0x18)) &&
                       (uVar34 = (uint)pbVar21[3] + uVar34 * 0x80, uVar34 < 0x200000))
                    goto LAB_000baec4;
                    *(uint *)(iVar41 + 0x3f4) = uVar44;
                    uVar36 = uVar44;
                  }
                }
              }
              goto LAB_000b98e8;
            }
LAB_000baec4:
            uVar5 = *(uint *)(iVar41 + 0xc48);
            uVar40 = uVar40 + uVar34;
            if (uVar5 <= uVar40) goto LAB_000b98f2;
            uVar18 = uVar44;
          } while (uVar36 < uVar44);
        }
        goto LAB_000b8ab2;
      }
    }
LAB_000b98f2:
    if (uVar44 <= uVar36) {
      puVar12 = *(uint **)(iVar41 + 0xc20);
      if (puVar12 != (uint *)0x0) {
        *(uint *)(iVar41 + 0xc20) = puVar12[8];
      }
      *puVar12 = uVar5;
      puVar12[1] = 0xff;
      puVar12[6] = 0xffffffff;
      puVar28 = *(uint **)(iVar41 + 0xc1c);
      if ((puVar28 == (uint *)0x0) || (uVar5 < *puVar28)) {
        *(uint **)(iVar41 + 0xc1c) = puVar12;
        puVar12[8] = (uint)puVar28;
      }
      else {
        puVar33 = (uint *)puVar28[8];
        if (puVar33 == (uint *)0x0) {
LAB_000b9944:
          puVar28[8] = (uint)puVar12;
          puVar12[8] = 0;
        }
        else {
          uVar36 = *puVar33;
          puVar30 = puVar28;
          puVar28 = puVar33;
          while (uVar36 <= uVar5) {
            puVar33 = (uint *)puVar28[8];
            if (puVar33 == (uint *)0x0) goto LAB_000b9944;
            puVar30 = puVar28;
            puVar28 = puVar33;
            uVar36 = *puVar33;
          }
          puVar30[8] = (uint)puVar12;
          puVar12[8] = (uint)puVar28;
        }
      }
      *(undefined4 *)(iVar41 + 0xc44) = 0;
      uVar5 = *(int *)(iVar41 + 0xc34) + *(int *)(iVar41 + 0xc38);
      goto LAB_000b876a;
    }
    puVar12 = *(uint **)(iVar41 + 0xc20);
    if (puVar12 != (uint *)0x0) {
      *(uint *)(iVar41 + 0xc20) = puVar12[8];
    }
    *puVar12 = uVar40;
    puVar12[7] = 7;
    FUN_000b2654(iVar41,puVar12);
    puVar28 = *(uint **)(iVar41 + 0xc1c);
    if (puVar28 == (uint *)0x0) {
      *(uint **)(iVar41 + 0xc1c) = puVar12;
      puVar12[8] = 0;
      uVar5 = *(int *)(iVar41 + 0xc38) + *(int *)(iVar41 + 0xc34);
      goto LAB_000b876a;
    }
    if (*puVar12 < *puVar28) {
      *(uint **)(iVar41 + 0xc1c) = puVar12;
      puVar12[8] = (uint)puVar28;
      goto LAB_000b99e2;
    }
    for (puVar33 = (uint *)puVar28[8]; puVar33 != (uint *)0x0; puVar33 = (uint *)puVar33[8]) {
      if (*puVar12 < *puVar33) {
        puVar28[8] = (uint)puVar12;
        puVar12[8] = (uint)puVar33;
        uVar5 = *(int *)(iVar41 + 0xc34) + *(int *)(iVar41 + 0xc38);
        goto LAB_000b876a;
      }
      puVar28 = puVar33;
    }
    puVar28[8] = (uint)puVar12;
LAB_000b9a58:
    puVar12[8] = 0;
  }
  uVar5 = *(int *)(iVar41 + 0xc38) + *(int *)(iVar41 + 0xc34);
LAB_000b876a:
  puVar12 = *(uint **)(iVar41 + 0xc20);
  if (puVar12 != (uint *)0x0) {
    *(uint *)(iVar41 + 0xc20) = puVar12[8];
  }
  *puVar12 = uVar5;
  puVar12[1] = 0xff;
  puVar12[6] = 0xffffffff;
  puVar28 = *(uint **)(iVar41 + 0xc1c);
  if ((puVar28 == (uint *)0x0) || (uVar5 < *puVar28)) {
    *(uint **)(iVar41 + 0xc1c) = puVar12;
    puVar12[8] = (uint)puVar28;
  }
  else {
    puVar33 = (uint *)puVar28[8];
    if (puVar33 == (uint *)0x0) {
LAB_000b87b4:
      puVar28[8] = (uint)puVar12;
      puVar12[8] = 0;
    }
    else {
      uVar36 = *puVar33;
      puVar30 = puVar28;
      puVar28 = puVar33;
      while (uVar36 <= uVar5) {
        puVar33 = (uint *)puVar28[8];
        if (puVar33 == (uint *)0x0) goto LAB_000b87b4;
        puVar30 = puVar28;
        puVar28 = puVar33;
        uVar36 = *puVar33;
      }
      puVar30[8] = (uint)puVar12;
      puVar12[8] = (uint)puVar28;
    }
  }
  iVar46 = 0;
  if (local_44 == 3) {
    _Var19 = (_MACNV_SEEK_INFO)0x7f;
  }
  else {
    _Var19 = *(_MACNV_SEEK_INFO *)(iVar41 + 0xc51);
  }
  *param_3 = _Var19;
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(iVar41 + 0x1c68);
  param_3[4] = *(_MACNV_SEEK_INFO *)(iVar41 + 0x1c6a);
  param_3[5] = *(_MACNV_SEEK_INFO *)(iVar41 + 0x1c6b);
  param_3[6] = *(_MACNV_SEEK_INFO *)(iVar41 + 0x1c6c);
  param_3[7] = *(_MACNV_SEEK_INFO *)(iVar41 + 0x1c6d);
  p_Var16 = param_3;
  iVar11 = iVar42;
  do {
    iVar38 = iVar42 + iVar46;
    iVar46 = iVar46 + 0x20;
    p_Var16[8] = *(_MACNV_SEEK_INFO *)(iVar11 + 0x13);
    p_Var16[9] = *(_MACNV_SEEK_INFO *)(iVar11 + 0x14);
    p_Var16[0x1a] = *(_MACNV_SEEK_INFO *)(iVar11 + 0x15);
    p_Var16[10] = *(_MACNV_SEEK_INFO *)(iVar38 + 2);
    p_Var16[0xb] = *(_MACNV_SEEK_INFO *)(iVar38 + 3);
    p_Var16[0xc] = *(_MACNV_SEEK_INFO *)(iVar38 + 6);
    p_Var16[0xd] = *(_MACNV_SEEK_INFO *)(iVar38 + 7);
    p_Var16[0xf] = *(_MACNV_SEEK_INFO *)(iVar11 + 9);
    p_Var16[0x10] = *(_MACNV_SEEK_INFO *)(iVar11 + 10);
    p_Var16[0x11] = *(_MACNV_SEEK_INFO *)(iVar11 + 0xe);
    p_Var16[0x12] = *(_MACNV_SEEK_INFO *)(iVar11 + 0xb);
    p_Var16[0x13] = *(_MACNV_SEEK_INFO *)(iVar11 + 0x16);
    p_Var16[0x14] = *(_MACNV_SEEK_INFO *)(iVar11 + 0x17);
    p_Var16[0x15] = *(_MACNV_SEEK_INFO *)(iVar11 + 0x18);
    p_Var16[0x16] = *(_MACNV_SEEK_INFO *)(iVar11 + 0x19);
    p_Var16[0x17] = *(_MACNV_SEEK_INFO *)(iVar11 + 0x1a);
    p_Var16[0x18] = *(_MACNV_SEEK_INFO *)(iVar11 + 8);
    p_Var16[0x19] = *(_MACNV_SEEK_INFO *)(iVar11 + 0x1b);
    *(ushort *)(p_Var16 + 0x1c) = (ushort)*(byte *)(iVar11 + 0xc) << 7;
    *(undefined2 *)(p_Var16 + 0x1e) = *(undefined2 *)(iVar11 + 0x1e);
    p_Var16[0x1b] = *(_MACNV_SEEK_INFO *)(iVar11 + 0x1c);
    p_Var16 = p_Var16 + 0x1a;
    iVar11 = iVar11 + 0x20;
  } while (iVar46 != 0x400);
  *(undefined4 *)(param_3 + 0x348) = 0;
  *(undefined4 *)(param_3 + 0x34c) = 0;
  iVar42 = *(int *)(iVar41 + 0x1c58);
  if (iVar42 == 0) {
    *(undefined4 *)(param_3 + 0x350) = 0;
    *(undefined4 *)(param_3 + 0x354) = 0;
    *(undefined4 *)(param_3 + 0x358) = 1000;
  }
  else {
    *(uint *)(param_3 + 0x358) =
         (*(byte *)(iVar42 + 4) & 0x7f) +
         (*(byte *)(iVar42 + 2) & 0x7f) * 0x4000 + (*(byte *)(iVar42 + 3) & 0x7f) * 0x80 +
         (*(byte *)(iVar42 + 1) & 0x7f) * 0x200000;
    *(uint *)(param_3 + 0x350) = ((*(byte *)(iVar42 + 5) & 0x7f) - 0x40) * 3;
    *(uint *)(param_3 + 0x354) = ((*(byte *)(iVar42 + 6) & 0x7f) - 0x40) * 3;
  }
  *(undefined4 *)(param_3 + 0x35c) = 1;
  *(undefined4 *)(param_3 + 0x360) = 0;
  iVar42 = *(int *)(iVar41 + 0x1c5c);
  if (iVar42 == 0) {
    *(undefined4 *)(param_3 + 0x364) = 0;
    *(undefined4 *)(param_3 + 0x368) = 0;
    *(undefined4 *)(param_3 + 0x36c) = 1000;
  }
  else {
    *(uint *)(param_3 + 0x36c) =
         (*(byte *)(iVar42 + 4) & 0x7f) +
         (*(byte *)(iVar42 + 2) & 0x7f) * 0x4000 + (*(byte *)(iVar42 + 1) & 0x7f) * 0x200000 +
         (*(byte *)(iVar42 + 3) & 0x7f) * 0x80;
    *(uint *)(param_3 + 0x364) = ((*(byte *)(iVar42 + 5) & 0x7f) - 0x40) * 3;
    *(uint *)(param_3 + 0x368) = ((*(byte *)(iVar42 + 6) & 0x7f) - 0x40) * 3;
  }
  *(undefined4 *)(param_3 + 0x370) = 2;
  *(undefined4 *)(param_3 + 0x374) = 0;
  iVar42 = *(int *)(iVar41 + 0x1c60);
  if (iVar42 == 0) {
    *(undefined4 *)(param_3 + 0x378) = 0;
    *(undefined4 *)(param_3 + 0x37c) = 0;
    *(undefined4 *)(param_3 + 0x380) = 1000;
  }
  else {
    *(uint *)(param_3 + 0x380) =
         (*(byte *)(iVar42 + 4) & 0x7f) +
         (*(byte *)(iVar42 + 1) & 0x7f) * 0x200000 + (*(byte *)(iVar42 + 3) & 0x7f) * 0x80 +
         (*(byte *)(iVar42 + 2) & 0x7f) * 0x4000;
    *(uint *)(param_3 + 0x378) = ((*(byte *)(iVar42 + 5) & 0x7f) - 0x40) * 3;
    *(uint *)(param_3 + 0x37c) = ((*(byte *)(iVar42 + 6) & 0x7f) - 0x40) * 3;
  }
  *(undefined4 *)(param_3 + 900) = 3;
  *(undefined4 *)(param_3 + 0x388) = 0;
  iVar41 = *(int *)(iVar41 + 0x1c64);
  if (iVar41 == 0) {
    *(undefined4 *)(param_3 + 0x38c) = 0;
    *(undefined4 *)(param_3 + 0x390) = 0;
    *(undefined4 *)(param_3 + 0x394) = 1000;
  }
  else {
    *(uint *)(param_3 + 0x394) =
         (*(byte *)(iVar41 + 4) & 0x7f) +
         (*(byte *)(iVar41 + 2) & 0x7f) * 0x4000 + (*(byte *)(iVar41 + 1) & 0x7f) * 0x200000 +
         (*(byte *)(iVar41 + 3) & 0x7f) * 0x80;
    *(uint *)(param_3 + 0x38c) = ((*(byte *)(iVar41 + 5) & 0x7f) - 0x40) * 3;
    *(uint *)(param_3 + 0x390) = ((*(byte *)(iVar41 + 6) & 0x7f) - 0x40) * 3;
  }
  return 0;
}

