/* MaMmfCnv_Seek @ 001eded0 23088B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaMmfCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined8 YAMAHA::MaMmfCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined1 uVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  _MACNV_SEEK_INFO *p_Var23;
  ulong uVar24;
  undefined1 *puVar25;
  ushort uVar26;
  uint uVar27;
  uint *puVar28;
  char *pcVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  byte *pbVar33;
  uint uVar34;
  int iVar35;
  undefined4 *puVar36;
  undefined1 uVar37;
  byte *pbVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  undefined1 *puVar42;
  code *pcVar43;
  undefined1 uVar44;
  _MACNV_SEEK_INFO _Var45;
  long lVar46;
  uint *puVar47;
  uint *puVar48;
  undefined1 *puVar49;
  long lVar50;
  uint *puVar51;
  ushort uVar52;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (lVar46 = *(long *)(param_1 + 8), param_3 == (_MACNV_SEEK_INFO *)0x0)) || (lVar46 == 0)) {
    return 0xfffffffe;
  }
  if (*(char *)(lVar46 + 0xc) != '\x02') {
    return 0xffffffff;
  }
  lVar50 = lVar46 + 0xdd8;
  if (*(uint *)(lVar46 + 0xe18) < param_2) {
    return 0xfffffffe;
  }
  *(uint *)(lVar46 + 0xe08) = param_2;
  *(undefined4 *)(lVar46 + 0xe0c) = 0;
  lVar2 = lVar46 + 0x3478;
  *(undefined1 *)(lVar46 + 0x2e4e) = 0;
  *(undefined4 *)(lVar46 + 0x2e50) = 0;
  puVar49 = (undefined1 *)(lVar46 + 0x3578);
  uVar19 = *(uint *)(lVar46 + 0x2c);
  iVar39 = *(int *)(lVar46 + 0xdf8);
  uVar27 = 0;
  if (uVar19 != 0) {
    uVar27 = param_2 / uVar19;
  }
  if (param_2 != uVar27 * uVar19) {
    uVar27 = uVar27 + 1;
  }
  uVar16 = 0;
  if (iVar39 == 5) {
LAB_001ee404:
    uVar44 = 100;
    *(undefined1 *)(lVar46 + 0xe1d) = 100;
  }
  else {
    if (iVar39 == 7) {
      uVar16 = 0x28;
      goto LAB_001ee404;
    }
    uVar44 = 0x7f;
    if (iVar39 == 3) {
      uVar44 = 0x5a;
      *(undefined1 *)(lVar46 + 0xe1d) = 0x2d;
    }
  }
  *(undefined1 *)(lVar46 + 0x2e4a) = 0x40;
  *(undefined2 *)(lVar46 + 0x2e48) = 0x2000;
  *(char *)(lVar46 + 0x2e4c) = -(*(long *)(lVar46 + 0x2e80) == 0);
  uVar37 = 0x40;
  if (*(long *)(lVar46 + 0x2e98) == 0) {
    uVar37 = 0xff;
  }
  *(undefined1 *)(lVar46 + 0x2e4d) = uVar37;
  *(undefined8 *)(lVar46 + 0x2e28) = 0;
  *(undefined8 *)(lVar46 + 0x2e30) = 0;
  *(undefined8 *)(lVar46 + 0x2e38) = 0;
  *(undefined8 *)(lVar46 + 0x2e40) = 0;
  *(undefined4 *)(lVar46 + 0x3978) = 0xffffffff;
  *(undefined4 *)(lVar46 + 0x3b58) = 0xffffffff;
  *(undefined4 *)(lVar46 + 0x39a8) = 0xffffffff;
  *(long *)(lVar46 + 0x39a0) = lVar46 + 0x39a8;
  *(undefined4 *)(lVar46 + 0x39d8) = 0xffffffff;
  *(long *)(lVar46 + 0x39d0) = lVar46 + 0x39d8;
  *(undefined4 *)(lVar46 + 0x3a08) = 0xffffffff;
  *(long *)(lVar46 + 0x3a00) = lVar46 + 0x3a08;
  *(undefined4 *)(lVar46 + 0x3a38) = 0xffffffff;
  *(long *)(lVar46 + 0x3a30) = lVar46 + 0x3a38;
  *(undefined4 *)(lVar46 + 0x3a68) = 0xffffffff;
  *(long *)(lVar46 + 0x3a60) = lVar46 + 0x3a68;
  *(undefined4 *)(lVar46 + 15000) = 0xffffffff;
  *(long *)(lVar46 + 0x3a90) = lVar46 + 15000;
  *(undefined4 *)(lVar46 + 0x3ac8) = 0xffffffff;
  *(long *)(lVar46 + 0x3ac0) = lVar46 + 0x3ac8;
  *(undefined4 *)(lVar46 + 0x3af8) = 0xffffffff;
  *(long *)(lVar46 + 0x3af0) = lVar46 + 0x3af8;
  *(undefined4 *)(lVar46 + 0x3b28) = 0xffffffff;
  *(undefined8 *)(lVar46 + 0x3b50) = 0;
  *(long *)(lVar46 + 0x3b20) = lVar46 + 0x3b28;
  *(undefined4 *)(lVar46 + 0x3b70) = 0xffffffff;
  *(long *)(lVar46 + 0x3b68) = lVar46 + 0x3b70;
  *(undefined4 *)(lVar46 + 0x3b88) = 0xffffffff;
  *(undefined8 *)(lVar46 + 0x3b98) = 0;
  *(long *)(lVar46 + 0x3b80) = lVar46 + 0x3b88;
  puVar36 = (undefined4 *)(lVar46 + 0x3ba0);
  do {
    puVar36[6] = 0xffffffff;
    *puVar36 = 0xffffffff;
    *(undefined4 **)(puVar36 + -2) = puVar36;
    *(undefined4 **)(puVar36 + 4) = puVar36 + 6;
    puVar36[0xc] = 0xffffffff;
    *(undefined4 **)(puVar36 + 10) = puVar36 + 0xc;
    puVar36[0x12] = 0xffffffff;
    *(undefined4 **)(puVar36 + 0x10) = puVar36 + 0x12;
    puVar36[0x18] = 0xffffffff;
    *(undefined4 **)(puVar36 + 0x16) = puVar36 + 0x18;
    puVar36[0x1e] = 0xffffffff;
    puVar3 = puVar36 + 0x42;
    *(undefined4 **)(puVar36 + 0x1c) = puVar36 + 0x1e;
    puVar36[0x24] = 0xffffffff;
    *(undefined4 **)(puVar36 + 0x22) = puVar36 + 0x24;
    puVar36[0x2a] = 0xffffffff;
    *(undefined4 **)(puVar36 + 0x28) = puVar36 + 0x2a;
    puVar36[0x30] = 0xffffffff;
    *(undefined4 **)(puVar36 + 0x2e) = puVar36 + 0x30;
    puVar36[0x36] = 0xffffffff;
    *(undefined4 **)(puVar36 + 0x34) = puVar36 + 0x36;
    puVar36[0x3c] = 0xffffffff;
    *(undefined8 *)(puVar36 + 0x40) = 0;
    *(undefined4 **)(puVar36 + 0x3a) = puVar36 + 0x3c;
    puVar36 = puVar3;
  } while (puVar3 != (undefined4 *)(lVar46 + 0x5358));
  *(undefined8 *)(lVar46 + 0xdd8) = 0;
  *(long *)(lVar46 + 0xde0) = lVar46 + 0x3978;
  *(long *)(lVar46 + 0xdf0) = lVar46 + 0x3b58;
  puVar25 = (undefined1 *)(lVar46 + 0x2e58);
  *(undefined8 *)(lVar46 + 0xde8) = 0;
  iVar35 = 0x20;
  puVar42 = puVar49;
  do {
    *puVar42 = 0;
    puVar42[1] = 0;
    puVar42[2] = 0;
    iVar35 = iVar35 + -2;
    puVar42[3] = 0;
    puVar42[4] = 0x7f;
    puVar42[5] = 0x7f;
    puVar42[6] = 0;
    puVar42[7] = 100;
    puVar42[8] = 0x40;
    puVar42[9] = 0x7f;
    puVar42[10] = 0;
    puVar42[0xb] = 1;
    puVar42[0xc] = 0x40;
    puVar42[0xd] = 2;
    puVar42[0xe] = 2;
    puVar42[0xf] = 4;
    puVar42[0x10] = uVar44;
    puVar42[0x11] = 0;
    puVar42[0x12] = 0;
    puVar42[0x16] = 0x40;
    puVar42[0x17] = 0x40;
    puVar42[0x18] = 0x40;
    puVar42[0x19] = 0x7f;
    puVar42[0x1a] = uVar16;
    puVar42[0x1b] = 0;
    *(undefined2 *)(puVar42 + 0x1e) = 0x2000;
    puVar42[0x1c] = *puVar25;
    puVar42[0x20] = 0;
    puVar42[0x21] = 0;
    puVar42[0x22] = 0;
    puVar42[0x23] = 0;
    puVar42[0x24] = 0x7f;
    puVar42[0x25] = 0x7f;
    puVar42[0x26] = 0;
    puVar42[0x27] = 100;
    puVar42[0x28] = 0x40;
    puVar42[0x29] = 0x7f;
    puVar42[0x2a] = 0;
    puVar42[0x2b] = 1;
    puVar42[0x2c] = 0x40;
    puVar42[0x2d] = 2;
    puVar42[0x2e] = 2;
    puVar42[0x2f] = 4;
    puVar42[0x30] = uVar44;
    puVar42[0x31] = 0;
    puVar42[0x32] = 0;
    puVar42[0x36] = 0x40;
    puVar42[0x37] = 0x40;
    puVar42[0x38] = 0x40;
    puVar42[0x39] = 0x7f;
    puVar42[0x3a] = uVar16;
    puVar42[0x3b] = 0;
    *(undefined2 *)(puVar42 + 0x3e) = 0x2000;
    puVar1 = puVar25 + 1;
    puVar25 = puVar25 + 2;
    puVar42[0x3c] = *puVar1;
    puVar42 = puVar42 + 0x40;
  } while (iVar35 != 0);
  if (*(byte *)(lVar46 + 0x2e55) != 0xff) {
    puVar49[(ulong)*(byte *)(lVar46 + 0x2e55) * 0x20 + 0xb] = 0;
    *(uint *)(lVar46 + 0x2e50) =
         1 << (ulong)(*(byte *)(lVar46 + 0x2e55) & 0x1f) | *(uint *)(lVar46 + 0x2e50);
  }
  if (iVar39 != 7) {
    *(undefined1 *)(lVar46 + 0x3788) = 99;
  }
  *(undefined1 *)(lVar46 + 0x3479) = 0xff;
  *(undefined1 *)(lVar46 + 0x347a) = 0xff;
  *(undefined1 *)(lVar46 + 0x347c) = 0xff;
  *(undefined1 *)(lVar46 + 0x369a) = 0x80;
  *(undefined1 *)(lVar46 + 0x347d) = 0xff;
  *(undefined1 *)(lVar46 + 0x347f) = 0xff;
  *(undefined1 *)(lVar46 + 0x3480) = 0xff;
  *(undefined1 *)(lVar46 + 0x3482) = 0xff;
  *(undefined1 *)(lVar46 + 0x3483) = 0xff;
  *(undefined1 *)(lVar46 + 0x3485) = 0xff;
  *(undefined1 *)(lVar46 + 0x3486) = 0xff;
  *(undefined1 *)(lVar46 + 0x3488) = 0xff;
  *(undefined1 *)(lVar46 + 0x3489) = 0xff;
  *(undefined1 *)(lVar46 + 0x348b) = 0xff;
  *(undefined1 *)(lVar46 + 0x348c) = 0xff;
  *(undefined1 *)(lVar46 + 0x348e) = 0xff;
  *(undefined1 *)(lVar46 + 0x348f) = 0xff;
  *(undefined1 *)(lVar46 + 0x3491) = 0xff;
  *(undefined1 *)(lVar46 + 0x3492) = 0xff;
  *(undefined1 *)(lVar46 + 0x3494) = 0xff;
  *(undefined1 *)(lVar46 + 0x3495) = 0xff;
  *(undefined1 *)(lVar46 + 0x3497) = 0xff;
  *(undefined1 *)(lVar46 + 0x3498) = 0xff;
  *(undefined1 *)(lVar46 + 0x349a) = 0xff;
  *(undefined1 *)(lVar46 + 0x349b) = 0xff;
  *(undefined1 *)(lVar46 + 0x349d) = 0xff;
  *(undefined1 *)(lVar46 + 0x349e) = 0xff;
  *(undefined1 *)(lVar46 + 0x34a0) = 0xff;
  *(undefined1 *)(lVar46 + 0x34a1) = 0xff;
  *(undefined1 *)(lVar46 + 0x34a3) = 0xff;
  *(undefined1 *)(lVar46 + 0x34a4) = 0xff;
  *(undefined1 *)(lVar46 + 0x34a6) = 0xff;
  *(undefined1 *)(lVar46 + 0x34a7) = 0xff;
  *(undefined1 *)(lVar46 + 0x34a9) = 0xff;
  *(undefined1 *)(lVar46 + 0x34aa) = 0xff;
  *(undefined1 *)(lVar46 + 0x34ac) = 0xff;
  *(undefined1 *)(lVar46 + 0x34ad) = 0xff;
  *(undefined1 *)(lVar46 + 0x34af) = 0xff;
  *(undefined1 *)(lVar46 + 0x34b0) = 0xff;
  *(undefined1 *)(lVar46 + 0x34b2) = 0xff;
  *(undefined1 *)(lVar46 + 0x34b3) = 0xff;
  *(undefined1 *)(lVar46 + 0x34b5) = 0xff;
  *(undefined1 *)(lVar46 + 0x34b6) = 0xff;
  *(undefined1 *)(lVar46 + 0x34b8) = 0xff;
  *(undefined1 *)(lVar46 + 0x34b9) = 0xff;
  *(undefined1 *)(lVar46 + 0x34bb) = 0xff;
  *(undefined1 *)(lVar46 + 0x34bc) = 0xff;
  *(undefined1 *)(lVar46 + 0x34be) = 0xff;
  *(undefined1 *)(lVar46 + 0x34bf) = 0xff;
  *(undefined1 *)(lVar46 + 0x34c1) = 0xff;
  *(undefined1 *)(lVar46 + 0x34c2) = 0xff;
  *(undefined1 *)(lVar46 + 0x34c4) = 0xff;
  *(undefined1 *)(lVar46 + 0x34c5) = 0xff;
  *(undefined1 *)(lVar46 + 0x34c7) = 0xff;
  *(undefined1 *)(lVar46 + 0x34c8) = 0xff;
  *(undefined1 *)(lVar46 + 0x34ca) = 0xff;
  *(undefined1 *)(lVar46 + 0x34cb) = 0xff;
  *(undefined1 *)(lVar46 + 0x34cd) = 0xff;
  *(undefined1 *)(lVar46 + 0x34ce) = 0xff;
  *(undefined1 *)(lVar46 + 0x34d0) = 0xff;
  *(undefined1 *)(lVar46 + 0x34d1) = 0xff;
  *(undefined1 *)(lVar46 + 0x34d3) = 0xff;
  *(undefined1 *)(lVar46 + 0x34d4) = 0xff;
  *(undefined1 *)(lVar46 + 0x34d6) = 0xff;
  *(undefined1 *)(lVar46 + 0x34d7) = 0xff;
  iVar35 = *(int *)(lVar46 + 0xe00);
  iVar40 = *(int *)(lVar46 + 0xe04);
  if (iVar35 * *(int *)(lVar46 + 0x2c) == param_2) {
    uVar27 = iVar35 + iVar40;
    *(undefined4 *)(lVar46 + 0xe10) = 0;
    *(uint *)(lVar46 + 0xe14) = uVar27;
    goto LAB_001ee438;
  }
  uVar27 = uVar27 + iVar40;
  *(uint *)(lVar46 + 0xe14) = uVar27;
  *(undefined4 *)(lVar46 + 0xe10) = 0x20;
  switch(iVar39) {
  case 1:
  case 2:
    puVar51 = (uint *)(lVar46 + 200);
    uVar19 = 0xfffffffc;
    uVar27 = 0;
    do {
      if ((*(long *)(puVar51 + -0x1c) != 0) &&
         (uVar20 = *(uint *)(lVar46 + 0xe14), uVar20 < *puVar51)) {
        pbVar38 = *(byte **)(puVar51 + -0x10);
        iVar35 = 1;
        uVar34 = puVar51[-0xe];
        bVar17 = *pbVar38;
        uVar21 = (uint)bVar17;
        if ((char)bVar17 < '\0') {
          iVar35 = 2;
          uVar21 = (pbVar38[1] & 0x7f) + 0x80 + (bVar17 & 0x7f) * 0x80;
        }
        uVar22 = 0;
        uVar30 = uVar19;
        if (uVar27 == 0) {
          uVar30 = 0;
        }
        uVar31 = 0;
        while ((uVar4 = uVar21 + uVar31, uVar4 < uVar20 && (uVar22 < uVar34))) {
          uVar22 = iVar35 + uVar22;
          iVar40 = 3;
          if (pbVar38[uVar22] == 0) {
            bVar17 = pbVar38[(ulong)uVar22 + 1];
            uVar32 = (ulong)(uVar30 + (bVar17 >> 6));
            if ((bVar17 & 0x30) == 0x30) {
              uVar20 = bVar17 & 0xf;
              bVar17 = pbVar38[(ulong)uVar22 + 2];
              switch(uVar20) {
              case 0:
                lVar2 = uVar32 * 0x20;
                puVar49[lVar2 + 3] = bVar17;
                cVar12 = puVar49[lVar2];
                if ((*(char *)(lVar46 + 0x34d8) == cVar12) && (*(byte *)(lVar46 + 0x34d9) == bVar17)
                   ) {
                  uVar16 = 0;
                }
                else if ((*(char *)(lVar46 + 0x34da) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34db) == bVar17)) {
                  uVar16 = 1;
                }
                else if ((*(char *)(lVar46 + 0x34dc) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34dd) == bVar17)) {
                  uVar16 = 2;
                }
                else if ((*(char *)(lVar46 + 0x34de) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34df) == bVar17)) {
                  uVar16 = 3;
                }
                else if ((*(char *)(lVar46 + 0x34e0) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34e1) == bVar17)) {
                  uVar16 = 4;
                }
                else if ((*(char *)(lVar46 + 0x34e2) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34e3) == bVar17)) {
                  uVar16 = 5;
                }
                else if ((*(char *)(lVar46 + 0x34e4) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34e5) == bVar17)) {
                  uVar16 = 6;
                }
                else if ((*(char *)(lVar46 + 0x34e6) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34e7) == bVar17)) {
                  uVar16 = 7;
                }
                else if ((*(char *)(lVar46 + 0x34e8) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34e9) == bVar17)) {
                  uVar16 = 8;
                }
                else if ((*(char *)(lVar46 + 0x34ea) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34eb) == bVar17)) {
                  uVar16 = 9;
                }
                else if ((*(char *)(lVar46 + 0x34ec) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34ed) == bVar17)) {
                  uVar16 = 10;
                }
                else if ((*(char *)(lVar46 + 0x34ee) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34ef) == bVar17)) {
                  uVar16 = 0xb;
                }
                else if ((*(char *)(lVar46 + 0x34f0) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34f1) == bVar17)) {
                  uVar16 = 0xc;
                }
                else if ((*(char *)(lVar46 + 0x34f2) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34f3) == bVar17)) {
                  uVar16 = 0xd;
                }
                else if ((*(char *)(lVar46 + 0x34f4) == cVar12) &&
                        (*(byte *)(lVar46 + 0x34f5) == bVar17)) {
                  uVar16 = 0xe;
                }
                else {
                  if ((*(char *)(lVar46 + 0x34f6) != cVar12) ||
                     (*(byte *)(lVar46 + 0x34f7) != bVar17)) {
                    puVar49[lVar2 + 2] = 0;
                    puVar49[lVar2 + 3] = 0;
                    iVar41 = 3;
                    break;
                  }
                  uVar16 = 0xf;
                }
                puVar49[lVar2 + 2] = 1;
                puVar49[lVar2 + 3] = uVar16;
                iVar41 = 3;
                break;
              case 1:
                puVar49[uVar32 * 0x20] = bVar17;
                iVar41 = 3;
                break;
              case 2:
                if (bVar17 < 5) {
                  cVar12 = bVar17 + 4;
                }
                else if ((bVar17 < 0x81) || (0x84 < bVar17)) {
                  cVar12 = puVar49[uVar32 * 0x20 + 0xf];
                }
                else {
                  cVar12 = -0x7c - bVar17;
                }
                puVar49[uVar32 * 0x20 + 0xf] = cVar12;
                iVar41 = 3;
                break;
              case 3:
                iVar41 = 3;
                if (bVar17 < 0x80) {
                  uVar16 = 0;
                  if (((bVar17 != 0) && (uVar16 = 1, 0x10 < bVar17)) &&
                     ((uVar16 = 2, 0x30 < bVar17 && (uVar16 = (char)uVar20, 0x50 < bVar17)))) {
                    uVar16 = 4;
                  }
                  puVar49[uVar32 * 0x20 + 6] = uVar16;
                  iVar41 = 3;
                }
                break;
              default:
                iVar41 = 3;
                break;
              case 7:
                iVar41 = 3;
                if (bVar17 < 0x80) {
                  puVar49[uVar32 * 0x20 + 7] = bVar17;
                }
                break;
              case 10:
                iVar41 = 3;
                if (bVar17 < 0x80) {
                  puVar49[uVar32 * 0x20 + 8] = bVar17;
                }
                break;
              case 0xb:
                iVar41 = 3;
                if (bVar17 < 0x80) {
                  puVar49[uVar32 * 0x20 + 9] = bVar17;
                }
              }
            }
            else {
              uVar20 = bVar17 & 0xf;
              if ((bVar17 >> 4 & 3) == 0) {
                if ((&DAT_0048f800)[uVar20] == -0x80) goto LAB_001eef08;
                puVar49[uVar32 * 0x20 + 9] = (&DAT_0048f800)[uVar20];
                iVar41 = 2;
              }
              else if ((bVar17 >> 4 & 3) == 2) {
                bVar17 = (&DAT_0048f810)[uVar20];
                iVar41 = 2;
                if (bVar17 < 0x80) {
                  uVar16 = 0;
                  if (((bVar17 != 0) && (uVar16 = 1, 0x10 < bVar17)) && (uVar16 = 2, 0x30 < bVar17))
                  {
                    if (0x50 < bVar17) {
                      iVar40 = 4;
                    }
                    uVar16 = (undefined1)iVar40;
                  }
                  puVar49[uVar32 * 0x20 + 6] = uVar16;
                  iVar41 = 2;
                }
              }
              else {
LAB_001eef08:
                iVar41 = 2;
              }
            }
          }
          else if (pbVar38[uVar22] == 0xff) {
            if (pbVar38[(ulong)uVar22 + 1] != 0xf0) goto LAB_001eef08;
            iVar41 = pbVar38[(ulong)uVar22 + 2] + 3;
            if (((pbVar38[(ulong)uVar22 + 3] == 0x43) &&
                ((byte)(pbVar38[(ulong)uVar22 + 4] - 2) < 2)) &&
               (pbVar38[(ulong)uVar22 + 5] == 0x90)) {
              uVar20 = pbVar38[(ulong)uVar22 + 6] & 0xf0;
              uVar32 = (ulong)(pbVar38[(ulong)uVar22 + 6] & 0xf);
              if (uVar20 == 0xb0) {
                puVar49[uVar32 * 0x20 + 0x11] = pbVar38[(ulong)uVar22 + 7];
              }
              else if (uVar20 == 0xc0) {
                puVar49[uVar32 * 0x20 + 0x12] = pbVar38[(ulong)uVar22 + 7];
              }
            }
          }
          else {
            iVar41 = iVar40;
            if (-1 < (char)pbVar38[(ulong)uVar22 + 1]) {
              iVar41 = 2;
            }
          }
          uVar22 = iVar41 + uVar22;
          uVar31 = uVar4;
          if (uVar34 <= uVar22) break;
          uVar21 = (uint)pbVar38[uVar22];
          if ((char)pbVar38[uVar22] < '\0') {
            iVar35 = 2;
            uVar21 = (pbVar38[(ulong)uVar22 + 1] & 0x7f) + 0x80 + (uVar21 & 0x7f) * 0x80;
          }
          else {
            iVar35 = 1;
          }
          uVar20 = *(uint *)(lVar46 + 0xe14);
        }
        puVar48 = *(uint **)(lVar46 + 0xde0);
        uVar22 = iVar35 + uVar22;
        if (puVar48 != (uint *)0x0) {
          *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar48 + 10);
        }
        if (uVar22 < uVar34) {
          *(byte **)(puVar48 + 6) = pbVar38;
          *puVar48 = uVar21 + uVar31;
          puVar48[8] = uVar22;
          puVar48[9] = uVar27;
          FUN_001deb70(lVar50,puVar48);
        }
        else {
          *puVar48 = *puVar51;
          *(byte **)(puVar48 + 6) = pbVar38;
          puVar48[8] = uVar22;
          puVar48[9] = uVar27;
          puVar48[1] = 0xff;
        }
        puVar47 = *(uint **)(lVar46 + 0xdd8);
        if ((puVar47 == (uint *)0x0) || (*puVar48 < *puVar47)) {
          *(uint **)(lVar46 + 0xdd8) = puVar48;
          *(uint **)(puVar48 + 10) = puVar47;
        }
        else {
          puVar28 = *(uint **)(puVar47 + 10);
          if (puVar28 == (uint *)0x0) {
LAB_001ef19c:
            *(uint **)(puVar47 + 10) = puVar48;
            puVar48[10] = 0;
            puVar48[0xb] = 0;
          }
          else {
            uVar20 = *puVar28;
            puVar9 = puVar47;
            puVar47 = puVar28;
            while (uVar20 <= *puVar48) {
              puVar28 = *(uint **)(puVar47 + 10);
              if (puVar28 == (uint *)0x0) goto LAB_001ef19c;
              puVar9 = puVar47;
              puVar47 = puVar28;
              uVar20 = *puVar28;
            }
            *(uint **)(puVar9 + 10) = puVar48;
            *(uint **)(puVar48 + 10) = puVar47;
          }
        }
      }
      uVar27 = uVar27 + 1;
      puVar51 = puVar51 + 0x1e;
      uVar19 = uVar19 + 4;
    } while (uVar27 != 5);
    if ((*(long *)(lVar46 + 0x3a0) != 0) &&
       (uVar27 = *(uint *)(lVar46 + 0xe14), uVar27 < *(uint *)(lVar46 + 0x410))) {
      pbVar38 = *(byte **)(lVar46 + 0x3d0);
      iVar35 = 1;
      bVar17 = *pbVar38;
      uVar19 = (uint)bVar17;
      if ((char)bVar17 < '\0') {
        iVar35 = 2;
        uVar19 = (pbVar38[1] & 0x7f) + 0x80 + (bVar17 & 0x7f) * 0x80;
      }
      uVar32 = 0;
      uVar20 = 0;
LAB_001ef1f4:
      iVar40 = (int)uVar32;
      uVar20 = uVar20 + uVar19;
      if (uVar20 < uVar27) {
        do {
          uVar19 = iVar35 + (int)uVar32;
          if (pbVar38[uVar19] == 0) {
            iVar35 = 2;
            if ((((pbVar38[(ulong)uVar19 + 1] & 0x30) == 0x30) &&
                (iVar35 = 3, pbVar38[(ulong)uVar19 + 1] == 0x37)) &&
               (-1 < (char)pbVar38[(ulong)uVar19 + 2])) {
              *(byte *)(lVar46 + 0x3788) = pbVar38[(ulong)uVar19 + 2];
            }
LAB_001ef22c:
            uVar32 = (ulong)(iVar35 + uVar19);
            bVar17 = pbVar38[uVar32];
          }
          else {
            if (pbVar38[uVar19] == 0xff) {
              iVar35 = 2;
              if (pbVar38[(ulong)uVar19 + 1] == 0xf0) {
                iVar35 = pbVar38[(ulong)uVar19 + 2] + 3;
              }
              goto LAB_001ef22c;
            }
            iVar35 = 3;
            if (-1 < (char)pbVar38[(ulong)uVar19 + 1]) {
              iVar35 = 2;
            }
            uVar32 = (ulong)(iVar35 + uVar19);
            bVar17 = pbVar38[uVar32];
          }
          if ((char)bVar17 < '\0') goto LAB_001ef498;
          iVar40 = (int)uVar32;
          uVar20 = uVar20 + bVar17;
          iVar35 = 1;
          if (uVar27 <= uVar20) break;
        } while( true );
      }
      puVar51 = *(uint **)(lVar46 + 0xde0);
      uVar27 = iVar40 + iVar35;
      if (puVar51 != (uint *)0x0) {
        *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
      }
      *puVar51 = uVar20;
      *(byte **)(puVar51 + 6) = pbVar38;
      puVar51[8] = uVar27;
      puVar51[9] = 7;
      bVar17 = pbVar38[uVar27];
      if (bVar17 == 0) {
        iVar35 = 2;
        if ((pbVar38[(ulong)uVar27 + 1] & 0x30) == 0x30) {
          if ((pbVar38[(ulong)uVar27 + 1] == 0x37) && (-1 < (char)pbVar38[(ulong)uVar27 + 2])) {
            *(byte *)(lVar46 + 0x3788) = pbVar38[(ulong)uVar27 + 2];
            iVar35 = 3;
            uVar27 = puVar51[8];
          }
          else {
            iVar35 = 3;
          }
        }
LAB_001ef2a4:
        uVar10 = _DAT_001f3900;
        *(undefined8 *)(puVar51 + 3) = _UNK_001f3908;
        *(undefined8 *)(puVar51 + 1) = uVar10;
      }
      else {
        if (bVar17 == 0xff) {
          iVar35 = 2;
          if (pbVar38[(ulong)uVar27 + 1] == 0xf0) {
            iVar35 = pbVar38[(ulong)uVar27 + 2] + 3;
          }
          goto LAB_001ef2a4;
        }
        bVar18 = pbVar38[(ulong)uVar27 + 1];
        uVar19 = (uint)bVar18;
        if ((char)bVar18 < '\0') {
          iVar35 = 3;
          uVar19 = (pbVar38[(ulong)uVar27 + 2] & 0x7f) + 0x80 + (bVar18 & 0x7f) * 0x80;
        }
        else {
          iVar35 = 2;
        }
        if ((bVar17 & 0xc0) != 0) goto LAB_001ef2a4;
        bVar18 = *(byte *)(lVar46 + 0x3788);
        uVar32 = (ulong)(bVar17 - 1);
        if (((uVar19 == 0) || (0x3d < bVar17 - 1)) ||
           (lVar2 = lVar50 + uVar32 * 0x18, *(long *)(lVar2 + 0x20d8) == 0)) goto LAB_001ef2a4;
        puVar48 = *(uint **)(lVar46 + 0xde8);
        if (puVar48 == (uint *)0x0) {
          puVar47 = *(uint **)(lVar46 + 0xdf0);
          if (puVar47 == (uint *)0x0) goto LAB_001ef2a4;
          *(undefined8 *)(lVar46 + 0xdf0) = *(undefined8 *)(puVar47 + 4);
          *puVar47 = uVar19 + uVar20;
          puVar47[1] = 0x21;
          puVar47[2] = 0x10;
          puVar47[3] = (uint)*(byte *)(lVar2 + 0x20d0);
LAB_001f2568:
          *(uint **)(lVar46 + 0xde8) = puVar47;
          *(uint **)(puVar47 + 4) = puVar48;
        }
        else {
          if (((puVar48[2] == 0x10) && (puVar48[1] == 0x21)) && (uVar20 < *puVar48)) {
            puVar47 = *(uint **)(puVar48 + 4);
            *(uint **)(lVar46 + 0xde8) = puVar47;
LAB_001f1938:
            uVar19 = uVar19 + uVar20;
            *puVar48 = uVar19;
            if ((puVar47 == (uint *)0x0) || (uVar19 < *puVar47)) {
              *(uint **)(lVar46 + 0xde8) = puVar48;
              *(uint **)(puVar48 + 4) = puVar47;
            }
            else {
              puVar28 = *(uint **)(puVar47 + 4);
              while (puVar9 = puVar28, puVar9 != (uint *)0x0) {
                if (uVar19 < *puVar9) {
                  *(uint **)(puVar47 + 4) = puVar48;
                  *(uint **)(puVar48 + 4) = puVar9;
                  goto LAB_001ef2b4;
                }
                puVar47 = puVar9;
                puVar28 = *(uint **)(puVar9 + 4);
              }
              *(uint **)(puVar47 + 4) = puVar48;
              puVar48[4] = 0;
              puVar48[5] = 0;
            }
            goto LAB_001ef2b4;
          }
          puVar47 = puVar48;
          for (puVar28 = *(uint **)(puVar48 + 4); puVar28 != (uint *)0x0;
              puVar28 = *(uint **)(puVar28 + 4)) {
            if (((puVar28[2] == 0x10) && (puVar28[1] == 0x21)) && (uVar20 < *puVar28)) {
              *(undefined8 *)(puVar47 + 4) = *(undefined8 *)(puVar28 + 4);
              puVar47 = *(uint **)(lVar46 + 0xde8);
              puVar48 = puVar28;
              goto LAB_001f1938;
            }
            puVar47 = puVar28;
          }
          puVar47 = *(uint **)(lVar46 + 0xdf0);
          if (puVar47 == (uint *)0x0) goto LAB_001ef2a4;
          *(undefined8 *)(lVar46 + 0xdf0) = *(undefined8 *)(puVar47 + 4);
          uVar19 = uVar19 + uVar20;
          *puVar47 = uVar19;
          puVar47[1] = 0x21;
          puVar47[2] = 0x10;
          uVar20 = *puVar48;
          puVar47[3] = (uint)*(byte *)(lVar50 + uVar32 * 0x18 + 0x20d0);
          if (uVar19 < uVar20) goto LAB_001f2568;
          puVar28 = *(uint **)(puVar48 + 4);
          while( true ) {
            if (puVar28 == (uint *)0x0) {
              *(uint **)(puVar48 + 4) = puVar47;
              puVar47[4] = 0;
              puVar47[5] = 0;
              goto LAB_001f2500;
            }
            if (uVar19 < *puVar28) break;
            puVar48 = puVar28;
            puVar28 = *(uint **)(puVar28 + 4);
          }
          *(uint **)(puVar48 + 4) = puVar47;
          *(uint **)(puVar47 + 4) = puVar28;
        }
LAB_001f2500:
        puVar51[3] = (uint)*(byte *)(lVar50 + uVar32 * 0x18 + 0x20d0);
        puVar51[1] = 0x20;
        puVar51[2] = 0x10;
        puVar51[4] = (uint)bVar18;
      }
LAB_001ef2b4:
      puVar48 = *(uint **)(lVar46 + 0xdd8);
      puVar51[8] = uVar27 + iVar35;
      if ((puVar48 == (uint *)0x0) || (*puVar51 < *puVar48)) {
        iVar35 = *(int *)(lVar46 + 0xe04);
        iVar40 = *(int *)(lVar46 + 0xe00);
        *(uint **)(lVar46 + 0xdd8) = puVar51;
        *(uint **)(puVar51 + 10) = puVar48;
        uVar27 = iVar35 + iVar40;
      }
      else {
        puVar47 = *(uint **)(puVar48 + 10);
        if (puVar47 != (uint *)0x0) {
          uVar27 = *puVar47;
          puVar28 = puVar48;
          puVar48 = puVar47;
          while( true ) {
            if (*puVar51 < uVar27) {
              iVar35 = *(int *)(lVar46 + 0xe04);
              iVar40 = *(int *)(lVar46 + 0xe00);
              *(uint **)(puVar28 + 10) = puVar51;
              *(uint **)(puVar51 + 10) = puVar48;
              uVar27 = iVar35 + iVar40;
              goto LAB_001ee438;
            }
            puVar47 = *(uint **)(puVar48 + 10);
            if (puVar47 == (uint *)0x0) break;
            uVar27 = *puVar47;
            puVar28 = puVar48;
            puVar48 = puVar47;
          }
        }
        iVar35 = *(int *)(lVar46 + 0xe04);
        iVar40 = *(int *)(lVar46 + 0xe00);
        *(uint **)(puVar48 + 10) = puVar51;
        puVar51[10] = 0;
        puVar51[0xb] = 0;
        uVar27 = iVar35 + iVar40;
      }
      goto LAB_001ee438;
    }
    uVar27 = *(int *)(lVar46 + 0xe04) + *(int *)(lVar46 + 0xe00);
    goto LAB_001ee438;
  case 3:
    lVar50 = lVar46 + 0x588;
    *(undefined4 *)(lVar46 + 0x590) = 0;
    *(undefined8 *)(lVar46 + 0xd98) = *(undefined8 *)(lVar46 + 0xda8);
    *(undefined1 *)(lVar46 + 0xda0) = *(undefined1 *)(lVar46 + 0xdb0);
    *(undefined1 *)(lVar46 + 0xda1) = *(undefined1 *)(lVar46 + 0xdb1);
    uVar19 = (**(code **)(PTR_abPlayGetByte_00567a60 +
                         (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
    uVar27 = uVar19 & 0x7f;
    if ((uVar19 >> 7 & 1) != 0) {
      pbVar38 = (byte *)(lVar46 + 0x2e57);
      do {
        puVar8 = PTR_abPlayGetByte_00567a60;
        uVar19 = (**(code **)(PTR_abPlayGetByte_00567a60 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
        uVar27 = (uVar19 & 0x7f) + uVar27 * 0x80;
        if ((uVar19 >> 7 & 1) == 0) break;
        uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
        uVar27 = (uVar19 & 0x7f) + uVar27 * 0x80;
        if ((uVar19 >> 7 & 1) == 0) break;
        uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
        uVar27 = (uVar19 & 0x7f) + uVar27 * 0x80;
        if ((uVar19 >> 7 & 1) == 0) break;
        uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
        uVar27 = (uVar19 & 0x7f) + uVar27 * 0x80;
      } while ((uVar19 >> 7 & 1) != 0);
    }
    uVar19 = *(uint *)(lVar46 + 0xe14);
    if (uVar27 < uVar19) {
      if (*(uint *)(lVar46 + 0x590) < *(uint *)(lVar46 + 0x58c)) {
        do {
          puVar8 = PTR_abPlayGetByte_00567a60;
          uVar20 = (**(code **)(PTR_abPlayGetByte_00567a60 +
                               (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
          uVar19 = uVar20 & 0xf0;
          uVar20 = uVar20 & 0xf;
          uVar32 = (ulong)uVar20;
          if (uVar19 == 0xb0) {
            uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50)
            ;
            bVar17 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50)
            ;
            bVar17 = bVar17 & 0x7f;
            switch(uVar19 & 0x7f) {
            case 0:
              puVar49[uVar32 * 0x20] = bVar17;
              break;
            case 1:
              if (*(byte *)(lVar46 + 0x2e56) != uVar20) {
                uVar16 = 0;
                if (bVar17 != 0) {
                  if (bVar17 < 0x20) {
                    uVar16 = 1;
                  }
                  else if (bVar17 < 0x40) {
                    uVar16 = 2;
                  }
                  else {
                    uVar16 = 3;
                    if (0x5f < bVar17) {
                      uVar16 = 4;
                    }
                  }
                }
                puVar49[uVar32 * 0x20 + 6] = uVar16;
              }
              break;
            case 6:
              if ((bVar17 < 0x19) && (*(short *)(puVar49 + uVar32 * 0x20 + 4) == 0)) {
                puVar49[uVar32 * 0x20 + 0xd] = bVar17;
              }
              break;
            case 7:
              puVar49[uVar32 * 0x20 + 7] = bVar17;
              break;
            case 10:
              puVar49[uVar32 * 0x20 + 8] = bVar17;
              break;
            case 0xb:
              puVar49[uVar32 * 0x20 + 9] = bVar17;
              break;
            case 0x20:
              puVar49[uVar32 * 0x20 + 1] = bVar17;
              break;
            case 0x40:
              puVar49[uVar32 * 0x20 + 10] = 0x3f < bVar17;
              break;
            case 100:
              puVar49[uVar32 * 0x20 + 5] = bVar17;
              break;
            case 0x65:
              puVar49[uVar32 * 0x20 + 4] = bVar17;
              break;
            case 0x79:
              if (bVar17 == 0) {
                puVar49[uVar32 * 0x20 + 6] = 0;
                puVar49[uVar32 * 0x20 + 10] = 0;
                puVar49[uVar32 * 0x20 + 9] = 0x7f;
                puVar49[uVar32 * 0x20 + 5] = 0x7f;
                puVar49[uVar32 * 0x20 + 4] = 0x7f;
                puVar49[uVar32 * 0x20 + 0xc] = 0x40;
                puVar49[uVar32 * 0x20 + 0x10] = 0x5a;
              }
              break;
            case 0x7e:
              if ((bVar17 == 1) && ((1 << (ulong)uVar20 & *(uint *)(lVar46 + 0x2e50)) == 0)) {
                puVar49[uVar32 * 0x20 + 0xb] = 0;
                *(uint *)(lVar46 + 0x2e50) = 1 << (ulong)uVar20 | *(uint *)(lVar46 + 0x2e50);
              }
              break;
            case 0x7f:
              *(uint *)(lVar46 + 0x2e50) = 1 << (ulong)uVar20 | *(uint *)(lVar46 + 0x2e50);
            }
          }
          else if (uVar19 < 0xb1) {
            if (uVar19 == 0x90) {
              *(undefined4 *)(lVar46 + 0x2e50) = 0xffffffff;
              pbVar38 = (byte *)(lVar46 + 0x2e57);
              (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
              uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                 (lVar50);
              uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                 (lVar50);
              puVar8 = PTR_abPlayGetByte_00567a60;
              while ((((PTR_abPlayGetByte_00567a60 = puVar8, (uVar20 >> 7 & 1) != 0 &&
                       (uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50),
                       (uVar20 >> 7 & 1) != 0)) &&
                      (uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50),
                      (uVar20 >> 7 & 1) != 0)) &&
                     (uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50),
                     (uVar20 >> 7 & 1) != 0))) {
                uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
                puVar8 = PTR_abPlayGetByte_00567a60;
              }
              uVar16 = malib_Convert20to40Log(uVar19 & 0x7f);
              puVar49[uVar32 * 0x20 + 0x10] = uVar16;
            }
            else if (uVar19 == 0xa0) {
              (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
              (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
            }
            else if (uVar19 == 0x80) {
              *(undefined4 *)(lVar46 + 0x2e50) = 0xffffffff;
              pbVar38 = (byte *)(lVar46 + 0x2e57);
              (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
              uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                 (lVar50);
              if ((uVar19 >> 7 & 1) != 0) {
                while ((puVar8 = PTR_abPlayGetByte_00567a60,
                       uVar19 = (**(code **)(PTR_abPlayGetByte_00567a60 +
                                            (long)(int)(uint)*pbVar38 * 8))(lVar50),
                       (uVar19 >> 7 & 1) != 0 &&
                       (uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50),
                       (uVar19 >> 7 & 1) != 0))) {
                  uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
                  if (((uVar19 >> 7 & 1) == 0) ||
                     (uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50),
                     (uVar19 >> 7 & 1) == 0)) break;
                }
              }
            }
          }
          else if (uVar19 == 0xd0) {
            (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
          }
          else if (uVar19 < 0xd1) {
            if (uVar19 == 0xc0) {
              bVar17 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                 (lVar50);
              bVar17 = bVar17 & 0x7f;
              lVar7 = uVar32 * 0x20;
              puVar49[lVar7 + 3] = bVar17;
              if (puVar49[lVar7] == '|') {
                if ((byte)puVar49[lVar7 + 1] < 10) {
                  puVar49[lVar7 + 2] = puVar49[lVar7 + 1] + 1;
                }
                else {
LAB_001f1038:
                  puVar49[lVar7 + 2] = 0;
                }
              }
              else {
                if (puVar49[lVar7] == '}') {
                  if ((bVar17 < 10) && (puVar49[lVar7 + 1] == '\0')) {
                    puVar49[lVar7 + 2] = bVar17 + 0x81;
                    goto switchD_001ef5d0_caseD_2;
                  }
                }
                else if (uVar20 != 9) goto LAB_001f1038;
                puVar49[lVar7 + 2] = 0x80;
              }
            }
          }
          else if (uVar19 == 0xe0) {
            (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
            bVar17 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50)
            ;
            puVar49[uVar32 * 0x20 + 0xc] = bVar17 & 0x7f;
            puVar49[uVar32 * 0x20 + 0xe] = puVar49[uVar32 * 0x20 + 0xd];
          }
          else if (uVar19 == 0xf0) {
            if (uVar20 == 0xf) {
              uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                 (lVar50);
              if ((uVar19 & 0x7f) == 0x2f) {
                *(undefined4 *)(lVar46 + 0xe10) = 0;
              }
            }
            else {
              pbVar38 = (byte *)(lVar46 + 0x2e57);
              uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                 (lVar50);
              uVar19 = uVar20 & 0x7f;
              puVar8 = PTR_abPlayGetByte_00567a60;
              while (PTR_abPlayGetByte_00567a60 = puVar8, (uVar20 >> 7 & 1) != 0) {
                uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
                uVar19 = (uVar20 & 0x7f) + uVar19 * 0x80;
                if ((uVar20 >> 7 & 1) == 0) break;
                uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
                uVar19 = (uVar20 & 0x7f) + uVar19 * 0x80;
                if ((uVar20 >> 7 & 1) == 0) break;
                uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
                uVar19 = (uVar20 & 0x7f) + uVar19 * 0x80;
                if ((uVar20 >> 7 & 1) == 0) break;
                uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
                uVar19 = (uVar20 & 0x7f) + uVar19 * 0x80;
                puVar8 = PTR_abPlayGetByte_00567a60;
              }
              puVar8 = PTR_abPlayGetByte_00567a60;
              cVar12 = (**(code **)(PTR_abPlayGetByte_00567a60 +
                                   (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
              cVar13 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                 (lVar50);
              cVar14 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                 (lVar50);
              cVar15 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                 (lVar50);
              puVar11 = PTR_abPlayGetByte_00567a60;
              if ((((cVar12 == 'C') && (cVar13 == 'y')) && (cVar14 == '\x06')) && (cVar15 == '\x7f')
                 ) {
                uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                   (lVar50);
                uVar20 = uVar20 & 0x7f;
                if (uVar20 == 8) {
                  uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                     (lVar50);
                  bVar17 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                     (lVar50);
                  bVar18 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                     (lVar50);
                  if (8 < uVar19) {
                    uVar34 = uVar19 - 9 & 3;
                    (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                    uVar21 = 9;
                    if (uVar19 != 9) {
                      if (uVar34 == 0) goto LAB_001f2880;
                      if (uVar34 != 1) {
                        if (uVar34 != 2) {
                          uVar21 = 10;
                          (**(code **)(PTR_abPlayGetByte_00567a60 +
                                      (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                        }
                        uVar21 = uVar21 + 1;
                        (**(code **)(PTR_abPlayGetByte_00567a60 +
                                    (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                      }
                      pcVar43 = *(code **)(PTR_abPlayGetByte_00567a60 +
                                          (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8);
                      for (uVar21 = uVar21 + 1; (*pcVar43)(lVar50), uVar21 != uVar19;
                          uVar21 = uVar21 + 4) {
LAB_001f2880:
                        puVar8 = PTR_abPlayGetByte_00567a60;
                        (**(code **)(PTR_abPlayGetByte_00567a60 +
                                    (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                        (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                  (lVar50);
                        (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                  (lVar50);
                        pcVar43 = *(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) *
                                                      8);
                      }
                    }
                  }
                  bVar5 = (bVar17 & 0x7f) - 1;
                  if (bVar5 < 0x20) {
                    bVar6 = (bVar18 & 0x7f) - 1;
                    if ((bVar6 < 0x20) && ((bVar17 & 0x7f) != (bVar18 & 0x7f))) {
                      if ((uVar20 & 0x7f) == 0) {
                        *(byte *)(lVar2 + (ulong)bVar5 * 3 + 1) = bVar6;
                        *(byte *)(lVar2 + (ulong)bVar6 * 3 + 1) = bVar5;
                      }
                      else {
                        *(undefined1 *)(lVar2 + (ulong)bVar5 * 3 + 1) = 0xff;
                        *(undefined1 *)(lVar2 + (ulong)bVar6 * 3 + 1) = 0xff;
                      }
                    }
                  }
                }
                else if (uVar20 == 0xb) {
                  bVar17 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                     (lVar50);
                  uVar20 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                     (lVar50);
                  bVar18 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                     (lVar50);
                  if (8 < uVar19) {
                    uVar34 = uVar19 - 9 & 3;
                    (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                    uVar21 = 9;
                    iVar35 = 9;
                    if (uVar19 != 9) {
                      if (uVar34 == 0) goto LAB_001f26cc;
                      if (uVar34 != 1) {
                        if (uVar34 != 2) {
                          iVar35 = 10;
                          (**(code **)(PTR_abPlayGetByte_00567a60 +
                                      (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                        }
                        iVar35 = iVar35 + 1;
                        (**(code **)(PTR_abPlayGetByte_00567a60 +
                                    (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                      }
                      pcVar43 = *(code **)(PTR_abPlayGetByte_00567a60 +
                                          (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8);
                      for (uVar21 = iVar35 + 1; (*pcVar43)(lVar50), uVar21 != uVar19;
                          uVar21 = uVar21 + 4) {
LAB_001f26cc:
                        puVar8 = PTR_abPlayGetByte_00567a60;
                        (**(code **)(PTR_abPlayGetByte_00567a60 +
                                    (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                        (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                  (lVar50);
                        (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                  (lVar50);
                        pcVar43 = *(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) *
                                                      8);
                      }
                    }
                  }
                  bVar17 = (bVar17 & 0x7f) - 1;
                  uVar32 = (ulong)bVar17;
                  if (bVar17 < 0x20) {
                    if ((uVar20 & 0x7f) == 1) {
                      *(undefined1 *)(lVar2 + uVar32 * 3 + 2) = 0xff;
                    }
                    else if ((uVar20 & 0x7f) == 2) {
                      *(undefined1 *)(lVar2 + uVar32 * 3 + 2) = 0x80;
                    }
                    else {
                      *(byte *)(lVar2 + uVar32 * 3 + 2) = bVar18 & 0x7f;
                    }
                  }
                }
                else if (uVar20 == 0) {
                  bVar17 = (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                     (lVar50);
                  *(byte *)(lVar46 + 0xe1d) = bVar17 & 0x7f;
                  if (6 < uVar19) {
                    uVar21 = uVar19 - 7 & 3;
                    (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                    uVar20 = 7;
                    if (uVar19 != 7) {
                      if (uVar21 == 0) goto LAB_001f2394;
                      if (uVar21 != 1) {
                        if (uVar21 != 2) {
                          (**(code **)(PTR_abPlayGetByte_00567a60 +
                                      (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                          uVar20 = 8;
                        }
                        uVar20 = uVar20 + 1;
                        (**(code **)(PTR_abPlayGetByte_00567a60 +
                                    (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                      }
                      pcVar43 = *(code **)(PTR_abPlayGetByte_00567a60 +
                                          (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8);
                      for (uVar20 = uVar20 + 1; (*pcVar43)(lVar50), uVar20 != uVar19;
                          uVar20 = uVar20 + 4) {
LAB_001f2394:
                        puVar8 = PTR_abPlayGetByte_00567a60;
                        (**(code **)(PTR_abPlayGetByte_00567a60 +
                                    (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                        (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                  (lVar50);
                        (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                  (lVar50);
                        pcVar43 = *(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) *
                                                      8);
                      }
                    }
                  }
                }
                else if (5 < uVar19) {
                  uVar21 = uVar19 - 6 & 3;
                  (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                  uVar20 = 6;
                  if (uVar19 != 6) {
                    if (uVar21 == 0) goto LAB_001eec6c;
                    if (uVar21 != 1) {
                      if (uVar21 != 2) {
                        uVar20 = 7;
                        (**(code **)(PTR_abPlayGetByte_00567a60 +
                                    (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                      }
                      uVar20 = uVar20 + 1;
                      (**(code **)(PTR_abPlayGetByte_00567a60 +
                                  (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                    }
                    pcVar43 = *(code **)(PTR_abPlayGetByte_00567a60 +
                                        (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8);
                    for (uVar20 = uVar20 + 1; (*pcVar43)(lVar50), uVar20 != uVar19;
                        uVar20 = uVar20 + 4) {
LAB_001eec6c:
                      puVar8 = PTR_abPlayGetByte_00567a60;
                      (**(code **)(PTR_abPlayGetByte_00567a60 +
                                  (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                      (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                (lVar50);
                      (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                (lVar50);
                      pcVar43 = *(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8)
                      ;
                    }
                  }
                }
              }
              else if (4 < uVar19) {
                uVar21 = uVar19 - 5 & 3;
                (**(code **)(PTR_abPlayGetByte_00567a60 +
                            (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                uVar20 = 5;
                iVar35 = 5;
                if (uVar19 != 5) {
                  if (uVar21 != 0) {
                    if (uVar21 != 1) {
                      if (uVar21 != 2) {
                        (**(code **)(puVar11 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))
                                  (lVar50);
                        iVar35 = 6;
                      }
                      iVar35 = iVar35 + 1;
                      (**(code **)(PTR_abPlayGetByte_00567a60 +
                                  (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                    }
                    uVar20 = iVar35 + 1;
                    (**(code **)(PTR_abPlayGetByte_00567a60 +
                                (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                    if (uVar20 == uVar19) goto switchD_001ef5d0_caseD_2;
                  }
                  do {
                    puVar8 = PTR_abPlayGetByte_00567a60;
                    uVar20 = uVar20 + 4;
                    (**(code **)(PTR_abPlayGetByte_00567a60 +
                                (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                    (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                    (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                    (**(code **)(puVar8 + (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
                  } while (uVar20 != uVar19);
                }
              }
            }
          }
switchD_001ef5d0_caseD_2:
          pbVar38 = (byte *)(lVar46 + 0x2e57);
          uVar19 = (**(code **)(PTR_abPlayGetByte_00567a60 +
                               (long)(int)(uint)*(byte *)(lVar46 + 0x2e57) * 8))(lVar50);
          uVar20 = uVar19 & 0x7f;
          puVar8 = PTR_abPlayGetByte_00567a60;
          while (PTR_abPlayGetByte_00567a60 = puVar8, (uVar19 >> 7 & 1) != 0) {
            uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
            uVar20 = (uVar19 & 0x7f) + uVar20 * 0x80;
            if ((uVar19 >> 7 & 1) == 0) break;
            uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
            uVar20 = (uVar19 & 0x7f) + uVar20 * 0x80;
            if ((uVar19 >> 7 & 1) == 0) break;
            uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
            uVar20 = (uVar19 & 0x7f) + uVar20 * 0x80;
            if ((uVar19 >> 7 & 1) == 0) break;
            uVar19 = (**(code **)(puVar8 + (long)(int)(uint)*pbVar38 * 8))(lVar50);
            uVar20 = (uVar19 & 0x7f) + uVar20 * 0x80;
            puVar8 = PTR_abPlayGetByte_00567a60;
          }
          uVar19 = *(uint *)(lVar46 + 0xe14);
          uVar27 = uVar27 + uVar20;
          if (uVar19 <= uVar27) goto LAB_001f0e68;
        } while (*(uint *)(lVar46 + 0x590) < *(uint *)(lVar46 + 0x58c));
      }
      puVar51 = *(uint **)(lVar46 + 0xde0);
      if (puVar51 != (uint *)0x0) {
        *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
      }
      puVar48 = *(uint **)(lVar46 + 0xdd8);
      *puVar51 = uVar19;
      puVar51[1] = 0xff;
      puVar51[8] = 0xffffffff;
      if ((puVar48 == (uint *)0x0) || (uVar19 < *puVar48)) goto LAB_001ef0d8;
      puVar47 = *(uint **)(puVar48 + 10);
      if (puVar47 == (uint *)0x0) {
LAB_001eedf8:
        *(uint **)(puVar48 + 10) = puVar51;
        puVar51[10] = 0;
        puVar51[0xb] = 0;
      }
      else {
        uVar27 = *puVar47;
        puVar28 = puVar48;
        puVar48 = puVar47;
        while (uVar27 <= uVar19) {
          puVar47 = *(uint **)(puVar48 + 10);
          if (puVar47 == (uint *)0x0) goto LAB_001eedf8;
          puVar28 = puVar48;
          puVar48 = puVar47;
          uVar27 = *puVar47;
        }
        *(uint **)(puVar28 + 10) = puVar51;
        *(uint **)(puVar51 + 10) = puVar48;
      }
    }
    else {
LAB_001f0e68:
      if (*(uint *)(lVar46 + 0x590) < *(uint *)(lVar46 + 0x58c)) {
        puVar51 = *(uint **)(lVar46 + 0xde0);
        if (puVar51 != (uint *)0x0) {
          *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
        }
        *puVar51 = uVar27;
        puVar51[9] = 5;
        FUN_001e6e50(lVar46,puVar51);
        puVar48 = *(uint **)(lVar46 + 0xdd8);
        if ((puVar48 == (uint *)0x0) || (*puVar51 < *puVar48)) {
LAB_001f1768:
          iVar35 = *(int *)(lVar46 + 0xe04);
          iVar40 = *(int *)(lVar46 + 0xe00);
          *(uint **)(lVar46 + 0xdd8) = puVar51;
          *(uint **)(puVar51 + 10) = puVar48;
          uVar27 = iVar35 + iVar40;
          goto LAB_001ee438;
        }
        for (puVar47 = *(uint **)(puVar48 + 10); puVar47 != (uint *)0x0;
            puVar47 = *(uint **)(puVar47 + 10)) {
          if (*puVar51 < *puVar47) goto LAB_001ef9a8;
          puVar48 = puVar47;
        }
LAB_001f16f8:
        iVar35 = *(int *)(lVar46 + 0xe04);
        iVar40 = *(int *)(lVar46 + 0xe00);
        *(uint **)(puVar48 + 10) = puVar51;
        puVar51[10] = 0;
        puVar51[0xb] = 0;
        uVar27 = iVar35 + iVar40;
        goto LAB_001ee438;
      }
      puVar51 = *(uint **)(lVar46 + 0xde0);
      if (puVar51 != (uint *)0x0) {
        *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
      }
      puVar48 = *(uint **)(lVar46 + 0xdd8);
      *puVar51 = uVar19;
      puVar51[1] = 0xff;
      puVar51[8] = 0xffffffff;
      if ((puVar48 == (uint *)0x0) || (uVar19 < *puVar48)) {
        *(uint **)(lVar46 + 0xdd8) = puVar51;
        *(uint **)(puVar51 + 10) = puVar48;
      }
      else {
        puVar47 = *(uint **)(puVar48 + 10);
        if (puVar47 == (uint *)0x0) {
LAB_001f0ee0:
          *(uint **)(puVar48 + 10) = puVar51;
          puVar51[10] = 0;
          puVar51[0xb] = 0;
        }
        else {
          uVar27 = *puVar47;
          puVar28 = puVar48;
          puVar48 = puVar47;
          while (uVar27 <= uVar19) {
            puVar47 = *(uint **)(puVar48 + 10);
            if (puVar47 == (uint *)0x0) goto LAB_001f0ee0;
            puVar28 = puVar48;
            puVar48 = puVar47;
            uVar27 = *puVar47;
          }
          *(uint **)(puVar28 + 10) = puVar51;
          *(uint **)(puVar51 + 10) = puVar48;
        }
      }
    }
    break;
  default:
    uVar27 = iVar40 + iVar35;
    goto LAB_001ee438;
  case 5:
    uVar20 = *(uint *)(lVar46 + 0x360);
    pbVar38 = *(byte **)(lVar46 + 0x358);
    uVar19 = 1;
    *(uint *)(lVar46 + 0x58c) = uVar20;
    *(byte **)(lVar46 + 0xd98) = pbVar38;
    *(undefined4 *)(lVar46 + 0x590) = 1;
    if (uVar20 == 0) {
LAB_001ee880:
      uVar21 = 0;
      if (uVar27 == 0) {
LAB_001ef93c:
        if (uVar19 < uVar20) {
          puVar51 = *(uint **)(lVar46 + 0xde0);
          if (puVar51 != (uint *)0x0) {
            *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
          }
          *puVar51 = uVar21;
          puVar51[9] = 6;
          FUN_001e84d0(lVar46,puVar51);
          puVar48 = *(uint **)(lVar46 + 0xdd8);
          if ((puVar48 == (uint *)0x0) || (*puVar51 < *puVar48)) goto LAB_001f1768;
          for (puVar47 = *(uint **)(puVar48 + 10); puVar47 != (uint *)0x0;
              puVar47 = *(uint **)(puVar47 + 10)) {
            if (*puVar51 < *puVar47) goto LAB_001ef9a8;
            puVar48 = puVar47;
          }
          goto LAB_001f16f8;
        }
LAB_001ef828:
        puVar51 = *(uint **)(lVar46 + 0xde0);
        if (puVar51 != (uint *)0x0) {
          *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
        }
        puVar48 = *(uint **)(lVar46 + 0xdd8);
        *puVar51 = uVar27;
        puVar51[1] = 0xff;
        puVar51[8] = 0xffffffff;
        if ((puVar48 == (uint *)0x0) || (uVar27 < *puVar48)) {
LAB_001f1804:
          *(uint **)(lVar46 + 0xdd8) = puVar51;
          *(uint **)(puVar51 + 10) = puVar48;
        }
        else {
          puVar47 = *(uint **)(puVar48 + 10);
          if (puVar47 == (uint *)0x0) goto LAB_001ef890;
          uVar19 = *puVar47;
          puVar28 = puVar48;
          puVar48 = puVar47;
          while (uVar19 <= uVar27) {
            puVar47 = *(uint **)(puVar48 + 10);
            if (puVar47 == (uint *)0x0) goto LAB_001ef890;
            puVar28 = puVar48;
            puVar48 = puVar47;
            uVar19 = *puVar47;
          }
LAB_001f17f8:
          *(uint **)(puVar28 + 10) = puVar51;
          *(uint **)(puVar51 + 10) = puVar48;
        }
        break;
      }
    }
    else {
      *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
      uVar21 = *pbVar38 & 0x7f;
      if ((char)*pbVar38 < '\0') {
        uVar19 = 2;
        *(undefined4 *)(lVar46 + 0x590) = 2;
        if (1 < uVar20) {
          *(byte **)(lVar46 + 0xd98) = pbVar38 + 2;
          uVar21 = (pbVar38[1] & 0x7f) + uVar21 * 0x80;
          if ((char)pbVar38[1] < '\0') {
            uVar19 = 3;
            *(undefined4 *)(lVar46 + 0x590) = 3;
            if (uVar20 == 2) goto LAB_001ef7c0;
            *(byte **)(lVar46 + 0xd98) = pbVar38 + 3;
            uVar21 = (pbVar38[2] & 0x7f) + uVar21 * 0x80;
            if (-1 < (char)pbVar38[2]) goto LAB_001f1870;
            uVar19 = 4;
            *(undefined4 *)(lVar46 + 0x590) = 4;
            if (uVar20 == 3) goto LAB_001ef7c0;
            *(byte **)(lVar46 + 0xd98) = pbVar38 + 4;
            uVar21 = (pbVar38[3] & 0x7f) + uVar21 * 0x80;
            if (-1 < (char)pbVar38[3]) goto LAB_001f1870;
          }
          else {
LAB_001f1870:
            if (uVar21 < 0x200000) goto LAB_001ef7c4;
          }
          *(uint *)(lVar46 + 0x590) = uVar20;
          uVar19 = uVar20;
          goto LAB_001ee880;
        }
LAB_001ef7c0:
        uVar21 = 0;
      }
LAB_001ef7c4:
      if (uVar27 <= uVar21) goto LAB_001ef93c;
      if (uVar19 < uVar20) {
        do {
          *(uint *)(lVar46 + 0x590) = uVar19 + 1;
          uVar22 = uVar20;
          uVar34 = uVar20;
          if (uVar20 < uVar19 + 1) goto LAB_001ef810;
          pbVar33 = *(byte **)(lVar46 + 0xd98);
          pbVar38 = pbVar33 + 1;
          *(byte **)(lVar46 + 0xd98) = pbVar38;
          uVar30 = *pbVar33 & 0xf0;
          uVar31 = *pbVar33 & 0xf;
          uVar32 = (ulong)uVar31;
          if (uVar30 == 0xb0) {
            *(uint *)(lVar46 + 0x590) = uVar19 + 2;
            if (uVar20 < uVar19 + 2) {
              *(uint *)(lVar46 + 0x590) = uVar19 + 3;
              bVar18 = 0;
              if (uVar19 + 3 <= uVar20) {
                bVar17 = 0;
LAB_001f1108:
                *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                bVar18 = *pbVar38 & 0x7f;
                goto LAB_001efba0;
              }
LAB_001efb64:
              puVar49[uVar32 * 0x20] = bVar18;
              uVar27 = *(uint *)(lVar46 + 0xe14);
              uVar22 = *(uint *)(lVar46 + 0x58c);
              uVar34 = *(uint *)(lVar46 + 0x590);
            }
            else {
              pbVar38 = pbVar33 + 2;
              *(byte **)(lVar46 + 0xd98) = pbVar38;
              bVar18 = 0;
              bVar17 = pbVar33[1];
              *(uint *)(lVar46 + 0x590) = uVar19 + 3;
              bVar17 = bVar17 & 0x7f;
              if (uVar19 + 3 <= uVar20) goto LAB_001f1108;
LAB_001efba0:
              if (bVar17 == 0xf) {
                if (0x18 < bVar18) goto LAB_001f0fe4;
                puVar49[uVar32 * 0x20 + 0xd] = bVar18;
                uVar27 = *(uint *)(lVar46 + 0xe14);
                uVar22 = *(uint *)(lVar46 + 0x58c);
                uVar34 = *(uint *)(lVar46 + 0x590);
              }
              else if (bVar17 < 0x10) {
                if (bVar17 == 7) {
                  puVar49[uVar32 * 0x20 + 7] = bVar18;
                  uVar27 = *(uint *)(lVar46 + 0xe14);
                  uVar22 = *(uint *)(lVar46 + 0x58c);
                  uVar34 = *(uint *)(lVar46 + 0x590);
                }
                else if (bVar17 < 8) {
                  if (bVar17 == 0) goto LAB_001efb64;
                  if ((bVar17 != 1) || (*(byte *)(lVar46 + 0x2e56) == uVar31)) goto LAB_001f0fe4;
                  uVar16 = 0;
                  if (bVar18 != 0) {
                    if (bVar18 < 0x20) {
                      uVar16 = 1;
                    }
                    else if (bVar18 < 0x40) {
                      uVar16 = 2;
                    }
                    else {
                      uVar16 = 3;
                      if (0x5f < bVar18) {
                        uVar16 = 4;
                      }
                    }
                  }
                  puVar49[uVar32 * 0x20 + 6] = uVar16;
                  uVar27 = *(uint *)(lVar46 + 0xe14);
                  uVar22 = *(uint *)(lVar46 + 0x58c);
                  uVar34 = *(uint *)(lVar46 + 0x590);
                }
                else if (bVar17 == 10) {
                  puVar49[uVar32 * 0x20 + 8] = bVar18;
                  uVar27 = *(uint *)(lVar46 + 0xe14);
                  uVar22 = *(uint *)(lVar46 + 0x58c);
                  uVar34 = *(uint *)(lVar46 + 0x590);
                }
                else {
                  if (bVar17 != 0xb) goto LAB_001f0fe4;
                  puVar49[uVar32 * 0x20 + 9] = bVar18;
                  uVar27 = *(uint *)(lVar46 + 0xe14);
                  uVar22 = *(uint *)(lVar46 + 0x58c);
                  uVar34 = *(uint *)(lVar46 + 0x590);
                }
              }
              else if (bVar17 == 0x47) {
                if (*(byte *)(lVar46 + 0x2e55) != uVar31) goto LAB_001f0fe4;
                puVar49[uVar32 * 0x20 + 0x17] = bVar18;
                uVar27 = *(uint *)(lVar46 + 0xe14);
                uVar22 = *(uint *)(lVar46 + 0x58c);
                uVar34 = *(uint *)(lVar46 + 0x590);
              }
              else if (bVar17 < 0x48) {
                if (bVar17 == 0x20) {
                  puVar49[uVar32 * 0x20 + 1] = bVar18;
                  uVar27 = *(uint *)(lVar46 + 0xe14);
                  uVar22 = *(uint *)(lVar46 + 0x58c);
                  uVar34 = *(uint *)(lVar46 + 0x590);
                }
                else {
                  if (bVar17 != 0x40) goto LAB_001f0fe4;
                  puVar49[uVar32 * 0x20 + 10] = 0x3f < bVar18;
                  uVar27 = *(uint *)(lVar46 + 0xe14);
                  uVar22 = *(uint *)(lVar46 + 0x58c);
                  uVar34 = *(uint *)(lVar46 + 0x590);
                }
              }
              else if (bVar17 == 0x79) {
                if (bVar18 != 0) goto LAB_001f0fe4;
                puVar49[uVar32 * 0x20 + 6] = 0;
                puVar49[uVar32 * 0x20 + 9] = 0x7f;
                puVar49[uVar32 * 0x20 + 10] = 0;
                puVar49[uVar32 * 0x20 + 0xc] = 0x40;
                puVar49[uVar32 * 0x20 + 0x10] = 100;
                uVar27 = *(uint *)(lVar46 + 0xe14);
                uVar22 = *(uint *)(lVar46 + 0x58c);
                uVar34 = *(uint *)(lVar46 + 0x590);
              }
              else if (bVar17 == 0x7e) {
                if ((bVar18 != 1) || ((1 << (ulong)uVar31 & *(uint *)(lVar46 + 0x2e50)) != 0))
                goto LAB_001f0fe4;
                puVar49[uVar32 * 0x20 + 0xb] = 0;
                uVar27 = *(uint *)(lVar46 + 0xe14);
                *(uint *)(lVar46 + 0x2e50) = 1 << (ulong)uVar31 | *(uint *)(lVar46 + 0x2e50);
                uVar22 = *(uint *)(lVar46 + 0x58c);
                uVar34 = *(uint *)(lVar46 + 0x590);
              }
              else {
                if ((bVar17 != 0x4a) || (*(byte *)(lVar46 + 0x2e55) != uVar31)) {
LAB_001f0fe4:
                  uVar34 = *(uint *)(lVar46 + 0x590);
                  goto LAB_001ef8f4;
                }
                puVar49[uVar32 * 0x20 + 0x18] = bVar18;
                uVar27 = *(uint *)(lVar46 + 0xe14);
                uVar22 = *(uint *)(lVar46 + 0x58c);
                uVar34 = *(uint *)(lVar46 + 0x590);
              }
            }
LAB_001ef810:
            uVar19 = uVar34 + 1;
            *(uint *)(lVar46 + 0x590) = uVar19;
            uVar20 = uVar22;
            if (uVar22 < uVar19) {
LAB_001ef820:
              if (uVar27 <= uVar21) goto LAB_001ef828;
              break;
            }
          }
          else {
            if (uVar30 < 0xb1) {
              if (uVar30 == 0x90) {
                *(undefined4 *)(lVar46 + 0x2e50) = 0xffffffff;
                *(uint *)(lVar46 + 0x590) = uVar19 + 2;
                if (uVar19 + 2 <= uVar20) {
                  pbVar38 = pbVar33 + 2;
                  *(byte **)(lVar46 + 0xd98) = pbVar38;
                }
                *(uint *)(lVar46 + 0x590) = uVar19 + 3;
                bVar17 = 0;
                pbVar33 = pbVar38;
                if (uVar19 + 3 <= uVar20) {
                  pbVar33 = pbVar38 + 1;
                  *(byte **)(lVar46 + 0xd98) = pbVar33;
                  bVar17 = *pbVar38 & 0x7f;
                }
                *(uint *)(lVar46 + 0x590) = uVar19 + 4;
                if (uVar19 + 4 <= uVar20) {
                  *(byte **)(lVar46 + 0xd98) = pbVar33 + 1;
                  bVar18 = *pbVar33;
                  if (((char)bVar18 < '\0') &&
                     (*(uint *)(lVar46 + 0x590) = uVar19 + 5, uVar19 + 5 <= uVar20)) {
                    *(byte **)(lVar46 + 0xd98) = pbVar33 + 2;
                    bVar5 = pbVar33[1];
                    if (((char)bVar5 < '\0') &&
                       (*(uint *)(lVar46 + 0x590) = uVar19 + 6, uVar19 + 6 <= uVar20)) {
                      *(byte **)(lVar46 + 0xd98) = pbVar33 + 3;
                      bVar6 = pbVar33[2];
                      if (((char)bVar6 < '\0') &&
                         (*(uint *)(lVar46 + 0x590) = uVar19 + 7, uVar19 + 7 <= uVar20)) {
                        *(byte **)(lVar46 + 0xd98) = pbVar33 + 4;
                        if ((char)pbVar33[3] < '\0') {
                          *(uint *)(lVar46 + 0x590) = uVar20;
                        }
                        else if (0x1fffff <
                                 (uint)pbVar33[3] +
                                 ((bVar6 & 0x7f) + ((bVar18 & 0x7f) * 0x80 + (bVar5 & 0x7f)) * 0x80)
                                 * 0x80) {
                          *(uint *)(lVar46 + 0x590) = uVar20;
                        }
                      }
                    }
                  }
                }
                puVar49[uVar32 * 0x20 + 0x10] = bVar17;
                uVar27 = *(uint *)(lVar46 + 0xe14);
                uVar22 = *(uint *)(lVar46 + 0x58c);
                uVar34 = *(uint *)(lVar46 + 0x590);
              }
              else if (uVar30 == 0xa0) {
                *(uint *)(lVar46 + 0x590) = uVar19 + 2;
                if (uVar19 + 2 <= uVar20) {
                  pbVar38 = pbVar33 + 2;
                  *(byte **)(lVar46 + 0xd98) = pbVar38;
                }
                uVar34 = uVar19 + 3;
                *(uint *)(lVar46 + 0x590) = uVar34;
                if (uVar20 < uVar34) goto LAB_001ef8f4;
                *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                uVar27 = *(uint *)(lVar46 + 0xe14);
                uVar22 = *(uint *)(lVar46 + 0x58c);
              }
              else if (uVar30 == 0x80) {
                *(undefined4 *)(lVar46 + 0x2e50) = 0xffffffff;
                *(uint *)(lVar46 + 0x590) = uVar19 + 2;
                if (uVar19 + 2 <= uVar20) {
                  pbVar38 = pbVar33 + 2;
                  *(byte **)(lVar46 + 0xd98) = pbVar38;
                }
                uVar34 = uVar19 + 3;
                *(uint *)(lVar46 + 0x590) = uVar34;
                if (uVar34 <= uVar20) {
                  *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                  bVar17 = *pbVar38;
                  if ((char)bVar17 < '\0') {
                    uVar34 = uVar19 + 4;
                    *(uint *)(lVar46 + 0x590) = uVar34;
                    if (uVar34 <= uVar20) {
                      *(byte **)(lVar46 + 0xd98) = pbVar38 + 2;
                      bVar18 = pbVar38[1];
                      if ((char)bVar18 < '\0') {
                        uVar34 = uVar19 + 5;
                        *(uint *)(lVar46 + 0x590) = uVar34;
                        if (uVar34 <= uVar20) {
                          *(byte **)(lVar46 + 0xd98) = pbVar38 + 3;
                          bVar5 = pbVar38[2];
                          if ((char)bVar5 < '\0') {
                            uVar34 = uVar19 + 6;
                            *(uint *)(lVar46 + 0x590) = uVar34;
                            if (uVar34 <= uVar20) {
                              *(byte **)(lVar46 + 0xd98) = pbVar38 + 4;
                              if (((char)pbVar38[3] < '\0') ||
                                 (0x1fffff <
                                  (uint)pbVar38[3] +
                                  ((bVar5 & 0x7f) +
                                  ((bVar17 & 0x7f) * 0x80 + (bVar18 & 0x7f)) * 0x80) * 0x80))
                              goto LAB_001efcac;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_001ef8f4;
                }
              }
              goto LAB_001ef810;
            }
            if (uVar30 == 0xd0) {
              uVar34 = uVar19 + 2;
              *(uint *)(lVar46 + 0x590) = uVar34;
              if (uVar20 < uVar34) goto LAB_001ef8f4;
              *(byte **)(lVar46 + 0xd98) = pbVar33 + 2;
              uVar27 = *(uint *)(lVar46 + 0xe14);
              uVar22 = *(uint *)(lVar46 + 0x58c);
              goto LAB_001ef810;
            }
            if (uVar30 < 0xd1) {
              if (uVar30 != 0xc0) goto LAB_001ef810;
              *(uint *)(lVar46 + 0x590) = uVar19 + 2;
              bVar17 = 0;
              if (uVar19 + 2 <= uVar20) {
                *(byte **)(lVar46 + 0xd98) = pbVar33 + 2;
                bVar17 = pbVar33[1] & 0x7f;
              }
              puVar25 = puVar49 + uVar32 * 0x20;
              puVar25[3] = bVar17;
              if (puVar49[uVar32 * 0x20] == '|') {
                if ((byte)puVar25[1] < 10) {
                  puVar25[2] = puVar25[1] + 1;
                  uVar27 = *(uint *)(lVar46 + 0xe14);
                  uVar22 = *(uint *)(lVar46 + 0x58c);
                  uVar34 = *(uint *)(lVar46 + 0x590);
                }
                else {
LAB_001f0ff4:
                  puVar25[2] = 0;
                  uVar27 = *(uint *)(lVar46 + 0xe14);
                  uVar22 = *(uint *)(lVar46 + 0x58c);
                  uVar34 = *(uint *)(lVar46 + 0x590);
                }
                goto LAB_001ef810;
              }
              if (puVar49[uVar32 * 0x20] == '}') {
                if ((bVar17 < 10) && (puVar25[1] == '\0')) {
                  puVar25[2] = bVar17 + 0x81;
                  uVar27 = *(uint *)(lVar46 + 0xe14);
                  uVar22 = *(uint *)(lVar46 + 0x58c);
                  uVar34 = *(uint *)(lVar46 + 0x590);
                  goto LAB_001ef810;
                }
              }
              else if (uVar31 != 9) goto LAB_001f0ff4;
LAB_001f0fe0:
              puVar25[2] = 0x80;
              goto LAB_001f0fe4;
            }
            if (uVar30 == 0xe0) {
              *(uint *)(lVar46 + 0x590) = uVar19 + 2;
              if (uVar19 + 2 <= uVar20) {
                pbVar38 = pbVar33 + 2;
                *(byte **)(lVar46 + 0xd98) = pbVar38;
              }
              *(uint *)(lVar46 + 0x590) = uVar19 + 3;
              bVar17 = 0;
              if (uVar19 + 3 <= uVar20) {
                *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                bVar17 = *pbVar38 & 0x7f;
              }
              puVar49[uVar32 * 0x20 + 0xc] = bVar17;
              puVar49[uVar32 * 0x20 + 0xe] = puVar49[uVar32 * 0x20 + 0xd];
              uVar27 = *(uint *)(lVar46 + 0xe14);
              uVar22 = *(uint *)(lVar46 + 0x58c);
              uVar34 = *(uint *)(lVar46 + 0x590);
              goto LAB_001ef810;
            }
            if (uVar30 != 0xf0) goto LAB_001ef810;
            if (uVar31 == 0xf) {
              uVar34 = uVar19 + 2;
              *(uint *)(lVar46 + 0x590) = uVar34;
              if ((uVar20 < uVar34) ||
                 (*(byte **)(lVar46 + 0xd98) = pbVar33 + 2, (pbVar33[1] & 0x7f) != 0x2f))
              goto LAB_001ef8f4;
LAB_001efcac:
              uVar27 = *(uint *)(lVar46 + 0xe14);
              uVar22 = *(uint *)(lVar46 + 0x58c);
              uVar34 = uVar20;
              goto LAB_001ef810;
            }
            uVar27 = uVar19 + 2;
            *(uint *)(lVar46 + 0x590) = uVar27;
            uVar30 = 0;
            if (uVar27 <= uVar20) {
              *(byte **)(lVar46 + 0xd98) = pbVar33 + 2;
              uVar34 = pbVar33[1] & 0x7f;
              uVar30 = uVar34;
              if ((char)pbVar33[1] < '\0') {
                uVar27 = uVar19 + 3;
                *(uint *)(lVar46 + 0x590) = uVar27;
                uVar22 = 0;
                uVar30 = uVar22;
                if (uVar27 <= uVar20) {
                  *(byte **)(lVar46 + 0xd98) = pbVar33 + 3;
                  uVar34 = (pbVar33[2] & 0x7f) + uVar34 * 0x80;
                  uVar30 = uVar34;
                  if ((char)pbVar33[2] < '\0') {
                    uVar27 = uVar19 + 4;
                    *(uint *)(lVar46 + 0x590) = uVar27;
                    uVar30 = uVar22;
                    if (uVar27 <= uVar20) {
                      *(byte **)(lVar46 + 0xd98) = pbVar33 + 4;
                      uVar34 = (pbVar33[3] & 0x7f) + uVar34 * 0x80;
                      uVar30 = uVar34;
                      if ((char)pbVar33[3] < '\0') {
                        uVar27 = uVar19 + 5;
                        *(uint *)(lVar46 + 0x590) = uVar27;
                        uVar30 = uVar22;
                        if (uVar27 <= uVar20) {
                          *(byte **)(lVar46 + 0xd98) = pbVar33 + 5;
                          if (((char)pbVar33[4] < '\0') ||
                             (uVar30 = (uint)pbVar33[4] + uVar34 * 0x80, 0x1fffff < uVar30)) {
                            uVar27 = uVar20;
                            uVar30 = uVar22;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            *(uint *)(lVar46 + 0x590) = uVar27 + 1;
            cVar12 = '\0';
            if (uVar27 + 1 <= uVar20) {
              pcVar29 = *(char **)(lVar46 + 0xd98);
              *(char **)(lVar46 + 0xd98) = pcVar29 + 1;
              cVar12 = *pcVar29;
            }
            *(uint *)(lVar46 + 0x590) = uVar27 + 2;
            cVar13 = '\0';
            if (uVar27 + 2 <= uVar20) {
              pcVar29 = *(char **)(lVar46 + 0xd98);
              *(char **)(lVar46 + 0xd98) = pcVar29 + 1;
              cVar13 = *pcVar29;
            }
            *(uint *)(lVar46 + 0x590) = uVar27 + 3;
            cVar14 = '\0';
            if (uVar27 + 3 <= uVar20) {
              pcVar29 = *(char **)(lVar46 + 0xd98);
              *(char **)(lVar46 + 0xd98) = pcVar29 + 1;
              cVar14 = *pcVar29;
            }
            uVar34 = uVar27 + 4;
            *(uint *)(lVar46 + 0x590) = uVar34;
            if (uVar20 < uVar34) {
LAB_001f09f8:
              uVar19 = uVar27 + uVar30;
              if (4 < uVar30) {
                uVar22 = uVar27 + 5;
                uVar31 = ~uVar34 + uVar19 & 7;
                if (uVar22 <= uVar20) {
                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                }
                if (uVar22 != uVar19) {
                  if (uVar31 == 0) goto LAB_001f0b14;
                  if (uVar31 != 1) {
                    if (uVar31 != 2) {
                      if (uVar31 != 3) {
                        if (uVar31 != 4) {
                          if (uVar31 != 5) {
                            if ((uVar31 != 6) && (uVar22 = uVar27 + 6, uVar22 <= uVar20)) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            uVar22 = uVar22 + 1;
                            if (uVar22 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar22 = uVar22 + 1;
                          if (uVar22 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                        }
                        uVar22 = uVar22 + 1;
                        if (uVar22 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                      }
                      uVar22 = uVar22 + 1;
                      if (uVar22 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                    }
                    uVar22 = uVar22 + 1;
                    if (uVar22 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                  }
                  uVar22 = uVar22 + 1;
                  while( true ) {
                    if (uVar22 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar22 == uVar19) break;
LAB_001f0b14:
                    if (uVar22 + 1 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar22 + 2 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar22 + 3 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar22 + 4 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar22 + 5 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar22 + 6 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar22 + 7 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    uVar22 = uVar22 + 8;
                  }
                }
                uVar27 = *(uint *)(lVar46 + 0xe14);
                uVar22 = *(uint *)(lVar46 + 0x58c);
                uVar34 = uVar34 + (uVar30 - 4);
                goto LAB_001ef810;
              }
            }
            else {
              pcVar29 = *(char **)(lVar46 + 0xd98);
              pbVar38 = (byte *)(pcVar29 + 1);
              *(byte **)(lVar46 + 0xd98) = pbVar38;
              if ((((cVar12 != 'C') || (cVar13 != 'y')) || (cVar14 != '\a')) || (*pcVar29 != '\x7f')
                 ) goto LAB_001f09f8;
              uVar34 = uVar27 + 5;
              *(uint *)(lVar46 + 0x590) = uVar34;
              if (uVar20 < uVar34) {
LAB_001f0c20:
                uVar34 = uVar27 + 6;
                *(uint *)(lVar46 + 0x590) = uVar34;
                bVar17 = 0;
                if (uVar34 <= uVar20) {
                  *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                  bVar17 = *pbVar38 & 0x7f;
                }
                *(byte *)(lVar46 + 0xe1d) = bVar17;
                uVar19 = uVar27 + uVar30;
                if (6 < uVar30) {
                  uVar22 = uVar27 + 7;
                  uVar31 = ~uVar34 + uVar19 & 7;
                  if (uVar22 <= uVar20) {
                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                  }
                  if (uVar22 != uVar19) {
                    if (uVar31 == 0) goto LAB_001f0d54;
                    if (uVar31 != 1) {
                      if (uVar31 != 2) {
                        if (uVar31 != 3) {
                          if (uVar31 != 4) {
                            if (uVar31 != 5) {
                              if ((uVar31 != 6) && (uVar22 = uVar27 + 8, uVar22 <= uVar20)) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                              uVar22 = uVar22 + 1;
                              if (uVar22 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                            }
                            uVar22 = uVar22 + 1;
                            if (uVar22 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar22 = uVar22 + 1;
                          if (uVar22 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                        }
                        uVar22 = uVar22 + 1;
                        if (uVar22 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                      }
                      uVar22 = uVar22 + 1;
                      if (uVar22 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                    }
                    uVar22 = uVar22 + 1;
                    while( true ) {
                      if (uVar22 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                      if (uVar22 == uVar19) break;
LAB_001f0d54:
                      if (uVar22 + 1 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                      if (uVar22 + 2 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                      if (uVar22 + 3 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                      if (uVar22 + 4 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                      if (uVar22 + 5 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                      if (uVar22 + 6 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                      if (uVar22 + 7 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                      uVar22 = uVar22 + 8;
                    }
                  }
                  uVar27 = *(uint *)(lVar46 + 0xe14);
                  uVar22 = *(uint *)(lVar46 + 0x58c);
                  uVar34 = uVar34 + (uVar30 - 6);
                  goto LAB_001ef810;
                }
              }
              else {
                pbVar38 = (byte *)(pcVar29 + 2);
                *(byte **)(lVar46 + 0xd98) = pbVar38;
                if ((pcVar29[1] & 0x7fU) == 0) goto LAB_001f0c20;
                if ((pcVar29[1] & 0x7fU) == 0xb) {
                  *(uint *)(lVar46 + 0x590) = uVar27 + 6;
                  uVar19 = 0xff;
                  if (uVar27 + 6 <= uVar20) {
                    pbVar38 = (byte *)(pcVar29 + 3);
                    *(byte **)(lVar46 + 0xd98) = pbVar38;
                    uVar19 = ((byte)pcVar29[2] & 0x7f) - 1 & 0xff;
                  }
                  *(uint *)(lVar46 + 0x590) = uVar27 + 7;
                  bVar17 = 0;
                  pbVar33 = pbVar38;
                  if (uVar27 + 7 <= uVar20) {
                    pbVar33 = pbVar38 + 1;
                    *(byte **)(lVar46 + 0xd98) = pbVar33;
                    bVar17 = *pbVar38 & 0x7f;
                  }
                  uVar34 = uVar27 + 8;
                  *(uint *)(lVar46 + 0x590) = uVar34;
                  bVar18 = 0;
                  if (uVar34 <= uVar20) {
                    *(byte **)(lVar46 + 0xd98) = pbVar33 + 1;
                    bVar18 = *pbVar33 & 0x7f;
                  }
                  if (8 < uVar30) {
                    uVar22 = uVar27 + 9;
                    uVar31 = uVar27 + uVar30;
                    uVar4 = ~uVar34 + uVar31 & 7;
                    if (uVar22 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar22 != uVar31) {
                      if (uVar4 == 0) goto LAB_001f1f98;
                      if (uVar4 != 1) {
                        if (uVar4 != 2) {
                          if (uVar4 != 3) {
                            if (uVar4 != 4) {
                              if (uVar4 != 5) {
                                if ((uVar4 != 6) && (uVar22 = uVar27 + 10, uVar22 <= uVar20)) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                                uVar22 = uVar22 + 1;
                                if (uVar22 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                              }
                              uVar22 = uVar22 + 1;
                              if (uVar22 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                            }
                            uVar22 = uVar22 + 1;
                            if (uVar22 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar22 = uVar22 + 1;
                          if (uVar22 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                        }
                        uVar22 = uVar22 + 1;
                        if (uVar22 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                      }
                      uVar22 = uVar22 + 1;
                      while( true ) {
                        if (uVar22 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 == uVar31) break;
LAB_001f1f98:
                        if (uVar22 + 1 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 2 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 3 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 4 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 5 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 6 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 7 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        uVar22 = uVar22 + 8;
                      }
                    }
                    uVar34 = uVar34 + (uVar30 - 8);
                    *(uint *)(lVar46 + 0x590) = uVar34;
                  }
                  if (uVar19 < 0x20) {
                    if (bVar17 == 1) {
                      *(undefined1 *)(lVar2 + (ulong)uVar19 * 3 + 2) = 0xff;
                      uVar27 = *(uint *)(lVar46 + 0xe14);
                      uVar22 = *(uint *)(lVar46 + 0x58c);
                      uVar34 = *(uint *)(lVar46 + 0x590);
                    }
                    else {
                      if (bVar17 != 0) {
                        if (bVar17 == 2) {
                          puVar25 = (undefined1 *)(lVar2 + (ulong)uVar19 * 3);
                          goto LAB_001f0fe0;
                        }
                        goto LAB_001ef8f4;
                      }
                      *(byte *)(lVar2 + (ulong)uVar19 * 3 + 2) = bVar18;
                      uVar27 = *(uint *)(lVar46 + 0xe14);
                      uVar22 = *(uint *)(lVar46 + 0x58c);
                      uVar34 = *(uint *)(lVar46 + 0x590);
                    }
                    goto LAB_001ef810;
                  }
                }
                else {
                  uVar19 = uVar27 + uVar30;
                  if (5 < uVar30) {
                    uVar22 = uVar27 + 6;
                    uVar31 = ~uVar34 + uVar19 & 7;
                    if (uVar22 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar22 != uVar19) {
                      if (uVar31 == 0) goto LAB_001f1d64;
                      if (uVar31 != 1) {
                        if (uVar31 != 2) {
                          if (uVar31 != 3) {
                            if (uVar31 != 4) {
                              if (uVar31 != 5) {
                                if ((uVar31 != 6) && (uVar22 = uVar27 + 7, uVar22 <= uVar20)) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                                uVar22 = uVar22 + 1;
                                if (uVar22 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                              }
                              uVar22 = uVar22 + 1;
                              if (uVar22 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                            }
                            uVar22 = uVar22 + 1;
                            if (uVar22 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar22 = uVar22 + 1;
                          if (uVar22 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                        }
                        uVar22 = uVar22 + 1;
                        if (uVar22 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                      }
                      uVar22 = uVar22 + 1;
                      while( true ) {
                        if (uVar22 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 == uVar19) break;
LAB_001f1d64:
                        if (uVar22 + 1 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 2 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 3 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 4 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 5 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 6 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar22 + 7 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        uVar22 = uVar22 + 8;
                      }
                    }
                    uVar27 = *(uint *)(lVar46 + 0xe14);
                    uVar22 = *(uint *)(lVar46 + 0x58c);
                    uVar34 = uVar34 + (uVar30 - 5);
                    goto LAB_001ef810;
                  }
                }
              }
            }
LAB_001ef8f4:
            uVar20 = *(uint *)(lVar46 + 0x58c);
            uVar19 = uVar34 + 1;
            uVar27 = *(uint *)(lVar46 + 0xe14);
            *(uint *)(lVar46 + 0x590) = uVar19;
            if (uVar20 < uVar19) goto LAB_001ef820;
          }
          pbVar38 = *(byte **)(lVar46 + 0xd98);
          *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
          uVar22 = *pbVar38 & 0x7f;
          if ((char)*pbVar38 < '\0') {
            uVar19 = uVar34 + 2;
            *(uint *)(lVar46 + 0x590) = uVar19;
            if (uVar19 <= uVar20) {
              *(byte **)(lVar46 + 0xd98) = pbVar38 + 2;
              uVar22 = (pbVar38[1] & 0x7f) + uVar22 * 0x80;
              if (-1 < (char)pbVar38[1]) goto LAB_001efa40;
              uVar19 = uVar34 + 3;
              *(uint *)(lVar46 + 0x590) = uVar19;
              if (uVar19 <= uVar20) {
                *(byte **)(lVar46 + 0xd98) = pbVar38 + 3;
                uVar22 = (pbVar38[2] & 0x7f) + uVar22 * 0x80;
                if (-1 < (char)pbVar38[2]) goto LAB_001efa40;
                uVar19 = uVar34 + 4;
                *(uint *)(lVar46 + 0x590) = uVar19;
                if (uVar19 <= uVar20) {
                  *(byte **)(lVar46 + 0xd98) = pbVar38 + 4;
                  if ((-1 < (char)pbVar38[3]) &&
                     (uVar22 = (uint)pbVar38[3] + uVar22 * 0x80, uVar22 < 0x200000))
                  goto LAB_001efa40;
                  *(uint *)(lVar46 + 0x590) = uVar20;
                  uVar19 = uVar20;
                }
              }
            }
            if (uVar27 <= uVar21) goto LAB_001ef93c;
            break;
          }
LAB_001efa40:
          uVar21 = uVar21 + uVar22;
          if (uVar27 <= uVar21) goto LAB_001ef93c;
        } while (uVar19 < uVar20);
      }
    }
    puVar51 = *(uint **)(lVar46 + 0xde0);
    if (puVar51 != (uint *)0x0) {
      *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
    }
    puVar48 = *(uint **)(lVar46 + 0xdd8);
    *puVar51 = uVar27;
    puVar51[1] = 0xff;
    puVar51[8] = 0xffffffff;
    if ((puVar48 == (uint *)0x0) || (uVar27 < *puVar48)) {
LAB_001ef0d8:
      *(uint **)(lVar46 + 0xdd8) = puVar51;
      *(uint **)(puVar51 + 10) = puVar48;
    }
    else {
      puVar47 = *(uint **)(puVar48 + 10);
      if (puVar47 == (uint *)0x0) goto LAB_001ee850;
      uVar19 = *puVar47;
      puVar28 = puVar48;
      puVar48 = puVar47;
      while (uVar19 <= uVar27) {
        puVar47 = *(uint **)(puVar48 + 10);
        if (puVar47 == (uint *)0x0) goto LAB_001ee850;
        puVar28 = puVar48;
        puVar48 = puVar47;
        uVar19 = *puVar47;
      }
LAB_001f1608:
      *(uint **)(puVar28 + 10) = puVar51;
      *(uint **)(puVar51 + 10) = puVar48;
    }
    break;
  case 7:
    uVar20 = *(uint *)(lVar46 + 0x3d8);
    pbVar38 = *(byte **)(lVar46 + 0x3d0);
    uVar19 = 1;
    *(uint *)(lVar46 + 0x58c) = uVar20;
    *(byte **)(lVar46 + 0xd98) = pbVar38;
    *(undefined4 *)(lVar46 + 0x590) = 1;
    if (uVar20 == 0) {
LAB_001ee7e0:
      uVar21 = 0;
      if (uVar27 == 0) {
LAB_001f0024:
        if (uVar19 < uVar20) {
          puVar51 = *(uint **)(lVar46 + 0xde0);
          if (puVar51 != (uint *)0x0) {
            *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
          }
          *puVar51 = uVar21;
          puVar51[9] = 7;
          FUN_001e42f0(lVar46,puVar51);
          puVar48 = *(uint **)(lVar46 + 0xdd8);
          if ((puVar48 == (uint *)0x0) || (*puVar51 < *puVar48)) {
            iVar35 = *(int *)(lVar46 + 0xe04);
            iVar40 = *(int *)(lVar46 + 0xe00);
            *(uint **)(lVar46 + 0xdd8) = puVar51;
            *(uint **)(puVar51 + 10) = puVar48;
            uVar27 = iVar35 + iVar40;
          }
          else {
            puVar47 = *(uint **)(puVar48 + 10);
            if (puVar47 == (uint *)0x0) {
LAB_001f009c:
              iVar35 = *(int *)(lVar46 + 0xe04);
              iVar40 = *(int *)(lVar46 + 0xe00);
              *(uint **)(puVar48 + 10) = puVar51;
              puVar51[10] = 0;
              puVar51[0xb] = 0;
              uVar27 = iVar35 + iVar40;
            }
            else {
              uVar27 = *puVar47;
              puVar28 = puVar48;
              puVar48 = puVar47;
              while (uVar27 <= *puVar51) {
                puVar47 = *(uint **)(puVar48 + 10);
                if (puVar47 == (uint *)0x0) goto LAB_001f009c;
                puVar28 = puVar48;
                puVar48 = puVar47;
                uVar27 = *puVar47;
              }
              iVar35 = *(int *)(lVar46 + 0xe04);
              iVar40 = *(int *)(lVar46 + 0xe00);
              *(uint **)(puVar28 + 10) = puVar51;
              *(uint **)(puVar51 + 10) = puVar48;
              uVar27 = iVar35 + iVar40;
            }
          }
          goto LAB_001ee438;
        }
LAB_001efed8:
        puVar51 = *(uint **)(lVar46 + 0xde0);
        if (puVar51 != (uint *)0x0) {
          *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
        }
        puVar48 = *(uint **)(lVar46 + 0xdd8);
        *puVar51 = uVar27;
        puVar51[1] = 0xff;
        puVar51[8] = 0xffffffff;
        if ((puVar48 == (uint *)0x0) || (uVar27 < *puVar48)) goto LAB_001f1804;
        puVar47 = *(uint **)(puVar48 + 10);
        if (puVar47 != (uint *)0x0) {
          uVar19 = *puVar47;
          puVar28 = puVar48;
          puVar48 = puVar47;
          while (uVar19 <= uVar27) {
            puVar47 = *(uint **)(puVar48 + 10);
            if (puVar47 == (uint *)0x0) goto LAB_001ef890;
            puVar28 = puVar48;
            puVar48 = puVar47;
            uVar19 = *puVar47;
          }
          goto LAB_001f17f8;
        }
LAB_001ef890:
        *(uint **)(puVar48 + 10) = puVar51;
        puVar51[10] = 0;
        puVar51[0xb] = 0;
        break;
      }
    }
    else {
      *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
      uVar21 = *pbVar38 & 0x7f;
      if ((char)*pbVar38 < '\0') {
        uVar19 = 2;
        *(undefined4 *)(lVar46 + 0x590) = 2;
        if (1 < uVar20) {
          *(byte **)(lVar46 + 0xd98) = pbVar38 + 2;
          uVar21 = (pbVar38[1] & 0x7f) + uVar21 * 0x80;
          if ((char)pbVar38[1] < '\0') {
            uVar19 = 3;
            *(undefined4 *)(lVar46 + 0x590) = 3;
            if (uVar20 == 2) goto LAB_001efe04;
            *(byte **)(lVar46 + 0xd98) = pbVar38 + 3;
            uVar21 = (pbVar38[2] & 0x7f) + uVar21 * 0x80;
            if (-1 < (char)pbVar38[2]) goto LAB_001f1c2c;
            uVar19 = 4;
            *(undefined4 *)(lVar46 + 0x590) = 4;
            if (uVar20 == 3) goto LAB_001efe04;
            *(byte **)(lVar46 + 0xd98) = pbVar38 + 4;
            uVar21 = (pbVar38[3] & 0x7f) + uVar21 * 0x80;
            if (-1 < (char)pbVar38[3]) goto LAB_001f1c2c;
          }
          else {
LAB_001f1c2c:
            if (uVar21 < 0x200000) goto LAB_001efe08;
          }
          *(uint *)(lVar46 + 0x590) = uVar20;
          uVar19 = uVar20;
          goto LAB_001ee7e0;
        }
LAB_001efe04:
        uVar21 = 0;
      }
LAB_001efe08:
      if (uVar27 <= uVar21) goto LAB_001f0024;
      if (uVar19 < uVar20) {
        do {
          *(uint *)(lVar46 + 0x590) = uVar19 + 1;
          if (uVar20 < uVar19 + 1) {
            uVar34 = 0;
            uVar24 = 0;
            uVar32 = uVar24;
          }
          else {
            pbVar38 = *(byte **)(lVar46 + 0xd98);
            *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
            bVar17 = *pbVar38;
            uVar27 = (uint)bVar17;
            if ((char)bVar17 < '\0') {
              uVar34 = uVar27 & 0xf0;
              uVar24 = (ulong)((uVar27 & 0xf) + 0x10);
              uVar32 = (ulong)(uVar27 & 0xf);
            }
            else {
              uVar34 = bVar17 & 0xf0;
              uVar24 = (ulong)(uVar27 & 0xf);
              uVar32 = uVar24;
            }
          }
          if (uVar34 == 0x70) {
LAB_001f03e4:
            *(uint *)(lVar46 + 0x590) = uVar19 + 2;
            if (uVar19 + 2 <= uVar20) {
              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
            }
            uVar27 = uVar19 + 3;
            *(uint *)(lVar46 + 0x590) = uVar27;
joined_r0x001f040c:
            if (uVar27 <= uVar20) {
              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
            }
            goto LAB_001efeb8;
          }
          if (uVar34 < 0x71) {
            if (uVar34 == 0x30) goto LAB_001f0304;
            if (uVar34 < 0x31) {
              if (uVar34 == 0x10) goto LAB_001f0338;
              if (uVar34 == 0x20) goto LAB_001f03e4;
              if (uVar34 == 0) goto LAB_001f00cc;
            }
            else {
              if (uVar34 == 0x50) goto LAB_001f0420;
              if (uVar34 == 0x60) {
LAB_001f0434:
                *(uint *)(lVar46 + 0x590) = uVar19 + 2;
                if (uVar19 + 2 <= uVar20) {
                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                }
                *(uint *)(lVar46 + 0x590) = uVar19 + 3;
                bVar17 = 0;
                if (uVar19 + 3 <= uVar20) {
                  pbVar38 = *(byte **)(lVar46 + 0xd98);
                  *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                  bVar17 = *pbVar38 & 0x7f;
                }
                puVar49[uVar24 * 0x20 + 0xc] = bVar17;
                puVar49[uVar24 * 0x20 + 0xe] = puVar49[uVar24 * 0x20 + 0xd];
                uVar27 = *(uint *)(lVar46 + 0x590);
                goto LAB_001efeb8;
              }
              if (uVar34 == 0x40) goto LAB_001f0258;
            }
LAB_001effdc:
            uVar19 = uVar20 + 1;
            *(uint *)(lVar46 + 0x590) = uVar19;
            uVar27 = uVar20;
            uVar20 = *(uint *)(lVar46 + 0x58c);
            if (*(uint *)(lVar46 + 0x58c) < uVar19) goto LAB_001efecc;
          }
          else {
            if (uVar34 != 0xb0) {
              if (uVar34 < 0xb1) {
                if (uVar34 == 0x90) {
LAB_001f0338:
                  *(undefined4 *)(lVar46 + 0x2e50) = 0xffffffff;
                  *(uint *)(lVar46 + 0x590) = uVar19 + 2;
                  if (uVar19 + 2 <= uVar20) {
                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                  }
                  *(uint *)(lVar46 + 0x590) = uVar19 + 3;
                  bVar17 = 0;
                  if (uVar19 + 3 <= uVar20) {
                    pbVar38 = *(byte **)(lVar46 + 0xd98);
                    *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                    bVar17 = *pbVar38 & 0x7f;
                  }
                  *(uint *)(lVar46 + 0x590) = uVar19 + 4;
                  if (uVar19 + 4 <= uVar20) {
                    pbVar38 = *(byte **)(lVar46 + 0xd98);
                    *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                    bVar18 = *pbVar38;
                    if (((char)bVar18 < '\0') &&
                       (*(uint *)(lVar46 + 0x590) = uVar19 + 5, uVar19 + 5 <= uVar20)) {
                      *(byte **)(lVar46 + 0xd98) = pbVar38 + 2;
                      bVar5 = pbVar38[1];
                      if (((char)bVar5 < '\0') &&
                         (*(uint *)(lVar46 + 0x590) = uVar19 + 6, uVar19 + 6 <= uVar20)) {
                        *(byte **)(lVar46 + 0xd98) = pbVar38 + 3;
                        bVar6 = pbVar38[2];
                        if (((char)bVar6 < '\0') &&
                           (*(uint *)(lVar46 + 0x590) = uVar19 + 7, uVar19 + 7 <= uVar20)) {
                          *(byte **)(lVar46 + 0xd98) = pbVar38 + 4;
                          if ((char)pbVar38[3] < '\0') {
                            *(uint *)(lVar46 + 0x590) = uVar20;
                          }
                          else if (0x1fffff <
                                   (uint)pbVar38[3] +
                                   ((bVar6 & 0x7f) +
                                   ((bVar18 & 0x7f) * 0x80 + (bVar5 & 0x7f)) * 0x80) * 0x80) {
                            *(uint *)(lVar46 + 0x590) = uVar20;
                          }
                        }
                      }
                    }
                  }
                  puVar49[uVar24 * 0x20 + 0x10] = bVar17;
                  uVar27 = *(uint *)(lVar46 + 0x590);
                  goto LAB_001efeb8;
                }
                if (uVar34 == 0xa0) goto LAB_001f03e4;
                if (uVar34 == 0x80) {
LAB_001f00cc:
                  *(undefined4 *)(lVar46 + 0x2e50) = 0xffffffff;
                  *(uint *)(lVar46 + 0x590) = uVar19 + 2;
                  if (uVar19 + 2 <= uVar20) {
                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                  }
                  uVar27 = uVar19 + 3;
                  *(uint *)(lVar46 + 0x590) = uVar27;
                  if (uVar27 <= uVar20) {
                    pbVar38 = *(byte **)(lVar46 + 0xd98);
                    *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                    bVar17 = *pbVar38;
                    if ((char)bVar17 < '\0') {
                      uVar27 = uVar19 + 4;
                      *(uint *)(lVar46 + 0x590) = uVar27;
                      if (uVar27 <= uVar20) {
                        *(byte **)(lVar46 + 0xd98) = pbVar38 + 2;
                        bVar18 = pbVar38[1];
                        if ((char)bVar18 < '\0') {
                          uVar27 = uVar19 + 5;
                          *(uint *)(lVar46 + 0x590) = uVar27;
                          if (uVar27 <= uVar20) {
                            *(byte **)(lVar46 + 0xd98) = pbVar38 + 3;
                            bVar5 = pbVar38[2];
                            if ((char)bVar5 < '\0') {
                              uVar27 = uVar19 + 6;
                              *(uint *)(lVar46 + 0x590) = uVar27;
                              if (uVar27 <= uVar20) {
                                *(byte **)(lVar46 + 0xd98) = pbVar38 + 4;
                                if ((char)pbVar38[3] < '\0') goto LAB_001effdc;
                                if (0x1fffff <
                                    (uint)pbVar38[3] +
                                    ((bVar5 & 0x7f) +
                                    ((bVar17 & 0x7f) * 0x80 + (bVar18 & 0x7f)) * 0x80) * 0x80) {
                                  uVar27 = uVar20;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_001efeb8;
                }
                goto LAB_001effdc;
              }
              if (uVar34 == 0xd0) {
LAB_001f0420:
                uVar27 = uVar19 + 2;
                *(uint *)(lVar46 + 0x590) = uVar27;
                goto joined_r0x001f040c;
              }
              if (uVar34 < 0xd1) {
                if (uVar34 != 0xc0) goto LAB_001effdc;
LAB_001f0258:
                *(uint *)(lVar46 + 0x590) = uVar19 + 2;
                bVar17 = 0;
                if (uVar19 + 2 <= uVar20) {
                  pbVar38 = *(byte **)(lVar46 + 0xd98);
                  *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                  bVar17 = *pbVar38 & 0x7f;
                }
                puVar25 = puVar49 + uVar24 * 0x20;
                puVar25[3] = bVar17;
                if (puVar49[uVar24 * 0x20] == '|') {
                  if ((byte)puVar25[1] < 10) {
                    puVar25[2] = puVar25[1] + 1;
                    uVar27 = *(uint *)(lVar46 + 0x590);
                  }
                  else {
LAB_001f0f04:
                    puVar25[2] = 0;
                    uVar27 = *(uint *)(lVar46 + 0x590);
                  }
                  goto LAB_001efeb8;
                }
                if (puVar49[uVar24 * 0x20] == '}') {
                  if ((bVar17 < 10) && (puVar25[1] == '\0')) {
                    puVar25[2] = bVar17 + 0x81;
                    uVar27 = *(uint *)(lVar46 + 0x590);
                    goto LAB_001efeb8;
                  }
                }
                else if ((uint)uVar24 != 9) goto LAB_001f0f04;
LAB_001f02f8:
                puVar25[2] = 0x80;
                goto switchD_001f03e0_caseD_2;
              }
              if (uVar34 == 0xe0) goto LAB_001f0434;
              if (uVar34 != 0xf0) goto LAB_001effdc;
              if ((int)uVar32 == 0xf) {
                uVar27 = uVar19 + 2;
                *(uint *)(lVar46 + 0x590) = uVar27;
                if ((uVar27 <= uVar20) &&
                   (pbVar38 = *(byte **)(lVar46 + 0xd98), *(byte **)(lVar46 + 0xd98) = pbVar38 + 1,
                   (*pbVar38 & 0x7f) == 0x2f)) {
                  uVar27 = uVar20;
                }
                goto LAB_001efeb8;
              }
              uVar34 = uVar19 + 2;
              *(uint *)(lVar46 + 0x590) = uVar34;
              uVar22 = 0;
              if (uVar34 <= uVar20) {
                pbVar38 = *(byte **)(lVar46 + 0xd98);
                *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                uVar27 = *pbVar38 & 0x7f;
                uVar22 = uVar27;
                if ((char)*pbVar38 < '\0') {
                  uVar34 = uVar19 + 3;
                  *(uint *)(lVar46 + 0x590) = uVar34;
                  uVar30 = 0;
                  uVar22 = uVar30;
                  if (uVar34 <= uVar20) {
                    *(byte **)(lVar46 + 0xd98) = pbVar38 + 2;
                    uVar27 = (pbVar38[1] & 0x7f) + uVar27 * 0x80;
                    uVar22 = uVar27;
                    if ((char)pbVar38[1] < '\0') {
                      uVar34 = uVar19 + 4;
                      *(uint *)(lVar46 + 0x590) = uVar34;
                      uVar22 = uVar30;
                      if (uVar34 <= uVar20) {
                        *(byte **)(lVar46 + 0xd98) = pbVar38 + 3;
                        uVar27 = (pbVar38[2] & 0x7f) + uVar27 * 0x80;
                        uVar22 = uVar27;
                        if ((char)pbVar38[2] < '\0') {
                          uVar34 = uVar19 + 5;
                          *(uint *)(lVar46 + 0x590) = uVar34;
                          uVar22 = uVar30;
                          if (uVar34 <= uVar20) {
                            *(byte **)(lVar46 + 0xd98) = pbVar38 + 4;
                            if (((char)pbVar38[3] < '\0') ||
                               (uVar22 = (uint)pbVar38[3] + uVar27 * 0x80, 0x1fffff < uVar22)) {
                              uVar34 = uVar20;
                              uVar22 = uVar30;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              *(uint *)(lVar46 + 0x590) = uVar34 + 1;
              cVar12 = '\0';
              if (uVar34 + 1 <= uVar20) {
                pcVar29 = *(char **)(lVar46 + 0xd98);
                *(char **)(lVar46 + 0xd98) = pcVar29 + 1;
                cVar12 = *pcVar29;
              }
              *(uint *)(lVar46 + 0x590) = uVar34 + 2;
              cVar13 = '\0';
              if (uVar34 + 2 <= uVar20) {
                pcVar29 = *(char **)(lVar46 + 0xd98);
                *(char **)(lVar46 + 0xd98) = pcVar29 + 1;
                cVar13 = *pcVar29;
              }
              *(uint *)(lVar46 + 0x590) = uVar34 + 3;
              cVar14 = '\0';
              if (uVar34 + 3 <= uVar20) {
                pcVar29 = *(char **)(lVar46 + 0xd98);
                *(char **)(lVar46 + 0xd98) = pcVar29 + 1;
                cVar14 = *pcVar29;
              }
              uVar27 = uVar34 + 4;
              *(uint *)(lVar46 + 0x590) = uVar27;
              if (uVar27 <= uVar20) {
                pcVar29 = *(char **)(lVar46 + 0xd98);
                *(char **)(lVar46 + 0xd98) = pcVar29 + 1;
                if ((((cVar12 == 'C') && (cVar13 == 'y')) && (cVar14 == '\b')) &&
                   (*pcVar29 == '\x7f')) {
                  uVar27 = uVar34 + 5;
                  *(uint *)(lVar46 + 0x590) = uVar27;
                  if (uVar20 < uVar27) {
switchD_001f1a84_caseD_c:
                    uVar19 = uVar22 + uVar34;
                    if (5 < uVar22) {
                      uVar30 = uVar34 + 6;
                      uVar31 = ~uVar27 + uVar19 & 7;
                      if (uVar30 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                      if (uVar30 != uVar19) {
                        if (uVar31 == 0) goto LAB_001f08b0;
                        if (uVar31 != 1) {
                          if (uVar31 != 2) {
                            if (uVar31 != 3) {
                              if (uVar31 != 4) {
                                if (uVar31 != 5) {
                                  if ((uVar31 != 6) && (uVar30 = uVar34 + 7, uVar30 <= uVar20)) {
                                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                  }
                                  uVar30 = uVar30 + 1;
                                  if (uVar30 <= uVar20) {
                                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                  }
                                }
                                uVar30 = uVar30 + 1;
                                if (uVar30 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                              }
                              uVar30 = uVar30 + 1;
                              if (uVar30 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                            }
                            uVar30 = uVar30 + 1;
                            if (uVar30 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar30 = uVar30 + 1;
                          if (uVar30 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                        }
                        uVar30 = uVar30 + 1;
                        while( true ) {
                          if (uVar30 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                          if (uVar30 == uVar19) break;
LAB_001f08b0:
                          if (uVar30 + 1 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                          if (uVar30 + 2 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                          if (uVar30 + 3 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                          if (uVar30 + 4 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                          if (uVar30 + 5 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                          if (uVar30 + 6 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                          if (uVar30 + 7 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                          uVar30 = uVar30 + 8;
                        }
                      }
                      uVar27 = uVar27 + (uVar22 - 5);
                    }
                  }
                  else {
                    pbVar38 = (byte *)(pcVar29 + 2);
                    *(byte **)(lVar46 + 0xd98) = pbVar38;
                    switch(pcVar29[1] & 0x7f) {
                    case 0xb:
                      *(uint *)(lVar46 + 0x590) = uVar34 + 6;
                      uVar19 = 0xff;
                      if (uVar34 + 6 <= uVar20) {
                        pbVar38 = (byte *)(pcVar29 + 3);
                        *(byte **)(lVar46 + 0xd98) = pbVar38;
                        uVar19 = ((byte)pcVar29[2] & 0x7f) - 1 & 0xff;
                      }
                      *(uint *)(lVar46 + 0x590) = uVar34 + 7;
                      bVar17 = 0;
                      pbVar33 = pbVar38;
                      if (uVar34 + 7 <= uVar20) {
                        pbVar33 = pbVar38 + 1;
                        *(byte **)(lVar46 + 0xd98) = pbVar33;
                        bVar17 = *pbVar38 & 0x7f;
                      }
                      uVar27 = uVar34 + 8;
                      *(uint *)(lVar46 + 0x590) = uVar27;
                      bVar18 = 0;
                      if (uVar27 <= uVar20) {
                        *(byte **)(lVar46 + 0xd98) = pbVar33 + 1;
                        bVar18 = *pbVar33 & 0x7f;
                      }
                      if (8 < uVar22) {
                        uVar30 = uVar34 + 9;
                        uVar31 = uVar22 + uVar34;
                        uVar4 = ~uVar27 + uVar31 & 7;
                        if (uVar30 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar30 != uVar31) {
                          if (uVar4 == 0) goto LAB_001f37c0;
                          if (uVar4 != 1) {
                            if (uVar4 != 2) {
                              if (uVar4 != 3) {
                                if (uVar4 != 4) {
                                  if (uVar4 != 5) {
                                    if ((uVar4 != 6) && (uVar30 = uVar34 + 10, uVar30 <= uVar20)) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                    uVar30 = uVar30 + 1;
                                    if (uVar30 <= uVar20) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                  }
                                  uVar30 = uVar30 + 1;
                                  if (uVar30 <= uVar20) {
                                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                  }
                                }
                                uVar30 = uVar30 + 1;
                                if (uVar30 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                              }
                              uVar30 = uVar30 + 1;
                              if (uVar30 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                            }
                            uVar30 = uVar30 + 1;
                            if (uVar30 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar30 = uVar30 + 1;
                          while( true ) {
                            if (uVar30 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar30 == uVar31) break;
LAB_001f37c0:
                            if (uVar30 + 1 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar30 + 2 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar30 + 3 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar30 + 4 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar30 + 5 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar30 + 6 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar30 + 7 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            uVar30 = uVar30 + 8;
                          }
                        }
                        uVar27 = uVar27 + (uVar22 - 8);
                        *(uint *)(lVar46 + 0x590) = uVar27;
                      }
                      if (uVar19 < 0x20) {
                        if (bVar17 == 1) {
                          *(undefined1 *)(lVar2 + (ulong)uVar19 * 3 + 2) = 0xff;
                          uVar27 = *(uint *)(lVar46 + 0x590);
                        }
                        else if (bVar17 == 0) {
                          *(byte *)(lVar2 + (ulong)uVar19 * 3 + 2) = bVar18;
                          uVar27 = *(uint *)(lVar46 + 0x590);
                        }
                        else if (bVar17 == 2) {
                          puVar25 = (undefined1 *)(lVar2 + (ulong)uVar19 * 3);
                          goto LAB_001f02f8;
                        }
                      }
                      break;
                    default:
                      goto switchD_001f1a84_caseD_c;
                    case 0x20:
                      uVar27 = uVar34 + 6;
                      *(uint *)(lVar46 + 0x590) = uVar27;
                      bVar17 = 0;
                      if (uVar27 <= uVar20) {
                        *(char **)(lVar46 + 0xd98) = pcVar29 + 3;
                        bVar17 = pcVar29[2] & 0x7f;
                      }
                      *(byte *)(lVar46 + 0xe1d) = bVar17;
                      if (6 < uVar22) {
                        uVar19 = uVar34 + 7;
                        uVar30 = uVar22 + uVar34;
                        uVar27 = ~uVar27 + uVar30 & 7;
                        if (uVar19 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar19 != uVar30) {
                          if (uVar27 == 0) goto LAB_001f3574;
                          if (uVar27 != 1) {
                            if (uVar27 != 2) {
                              if (uVar27 != 3) {
                                if (uVar27 != 4) {
                                  if (uVar27 != 5) {
                                    if ((uVar27 != 6) && (uVar19 = uVar34 + 8, uVar19 <= uVar20)) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                    uVar19 = uVar19 + 1;
                                    if (uVar19 <= uVar20) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                  }
                                  uVar19 = uVar19 + 1;
                                  if (uVar19 <= uVar20) {
                                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                  }
                                }
                                uVar19 = uVar19 + 1;
                                if (uVar19 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                              }
                              uVar19 = uVar19 + 1;
                              if (uVar19 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                            }
                            uVar19 = uVar19 + 1;
                            if (uVar19 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar19 = uVar19 + 1;
                          while( true ) {
                            if (uVar19 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 == uVar30) break;
LAB_001f3574:
                            if (uVar19 + 1 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 2 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 3 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 4 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 5 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 6 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 7 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            uVar19 = uVar19 + 8;
                          }
                        }
LAB_001f2e20:
                        uVar27 = uVar34 + uVar22;
                      }
                      break;
                    case 0x29:
                      uVar27 = uVar34 + 6;
                      *(uint *)(lVar46 + 0x590) = uVar27;
                      uVar19 = 0;
                      if (uVar27 <= uVar20) {
                        *(char **)(lVar46 + 0xd98) = pcVar29 + 3;
                        uVar19 = (uint)(byte)pcVar29[2];
                        if (3 < (byte)pcVar29[2]) {
                          if (6 < uVar22) {
                            uVar19 = uVar34 + 7;
                            uVar30 = uVar22 + uVar34;
                            uVar27 = ~uVar27 + uVar30 & 7;
                            if (uVar19 <= uVar20) {
                              *(char **)(lVar46 + 0xd98) = pcVar29 + 4;
                            }
                            if (uVar19 != uVar30) {
                              if (uVar27 == 0) goto LAB_001f3378;
                              if (uVar27 != 1) {
                                if (uVar27 != 2) {
                                  if (uVar27 != 3) {
                                    if (uVar27 != 4) {
                                      if (uVar27 != 5) {
                                        if ((uVar27 != 6) && (uVar19 = uVar34 + 8, uVar19 <= uVar20)
                                           ) {
                                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                        }
                                        uVar19 = uVar19 + 1;
                                        if (uVar19 <= uVar20) {
                                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                        }
                                      }
                                      uVar19 = uVar19 + 1;
                                      if (uVar19 <= uVar20) {
                                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                      }
                                    }
                                    uVar19 = uVar19 + 1;
                                    if (uVar19 <= uVar20) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                  }
                                  uVar19 = uVar19 + 1;
                                  if (uVar19 <= uVar20) {
                                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                  }
                                }
                                uVar19 = uVar19 + 1;
                                if (uVar19 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                              }
                              uVar19 = uVar19 + 1;
                              while( true ) {
                                if (uVar19 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                                if (uVar19 == uVar30) break;
LAB_001f3378:
                                if (uVar19 + 1 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                                if (uVar19 + 2 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                                if (uVar19 + 3 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                                if (uVar19 + 4 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                                if (uVar19 + 5 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                                if (uVar19 + 6 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                                if (uVar19 + 7 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                                uVar19 = uVar19 + 8;
                              }
                            }
                            goto LAB_001f2e20;
                          }
                          break;
                        }
                      }
                      *(byte **)(lVar50 + (long)(int)uVar19 * 8 + 0x2050) = pbVar38;
                      if (6 < uVar22) {
                        uVar19 = uVar34 + 7;
                        uVar30 = uVar22 + uVar34;
                        uVar27 = ~uVar27 + uVar30 & 7;
                        if (uVar19 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar19 != uVar30) {
                          if (uVar27 == 0) goto LAB_001f3194;
                          if (uVar27 != 1) {
                            if (uVar27 != 2) {
                              if (uVar27 != 3) {
                                if (uVar27 != 4) {
                                  if (uVar27 != 5) {
                                    if ((uVar27 != 6) && (uVar19 = uVar34 + 8, uVar19 <= uVar20)) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                    uVar19 = uVar19 + 1;
                                    if (uVar19 <= uVar20) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                  }
                                  uVar19 = uVar19 + 1;
                                  if (uVar19 <= uVar20) {
                                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                  }
                                }
                                uVar19 = uVar19 + 1;
                                if (uVar19 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                              }
                              uVar19 = uVar19 + 1;
                              if (uVar19 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                            }
                            uVar19 = uVar19 + 1;
                            if (uVar19 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar19 = uVar19 + 1;
                          while( true ) {
                            if (uVar19 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 == uVar30) break;
LAB_001f3194:
                            if (uVar19 + 1 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 2 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 3 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 4 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 5 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 6 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 7 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            uVar19 = uVar19 + 8;
                          }
                        }
                        goto LAB_001f2e20;
                      }
                      break;
                    case 0x2a:
                      *(uint *)(lVar46 + 0x590) = uVar34 + 6;
                      uVar26 = 0;
                      if (uVar34 + 6 <= uVar20) {
                        pbVar38 = (byte *)(pcVar29 + 3);
                        *(byte **)(lVar46 + 0xd98) = pbVar38;
                        uVar26 = (ushort)(byte)pcVar29[2] << 7;
                      }
                      uVar27 = uVar34 + 7;
                      *(uint *)(lVar46 + 0x590) = uVar27;
                      uVar52 = 0;
                      if (uVar27 <= uVar20) {
                        *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                        uVar52 = *pbVar38 & 0x7f;
                      }
                      *(ushort *)(lVar46 + 0x2e48) = uVar52 | uVar26;
                      if (7 < uVar22) {
                        uVar19 = uVar34 + 8;
                        uVar30 = uVar22 + uVar34;
                        uVar31 = ~uVar27 + uVar30 & 7;
                        if (uVar19 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar19 != uVar30) {
                          if (uVar31 == 0) goto LAB_001f2f98;
                          if (uVar31 != 1) {
                            if (uVar31 != 2) {
                              if (uVar31 != 3) {
                                if (uVar31 != 4) {
                                  if (uVar31 != 5) {
                                    if ((uVar31 != 6) && (uVar19 = uVar34 + 9, uVar19 <= uVar20)) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                    uVar19 = uVar19 + 1;
                                    if (uVar19 <= uVar20) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                  }
                                  uVar19 = uVar19 + 1;
                                  if (uVar19 <= uVar20) {
                                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                  }
                                }
                                uVar19 = uVar19 + 1;
                                if (uVar19 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                              }
                              uVar19 = uVar19 + 1;
                              if (uVar19 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                            }
                            uVar19 = uVar19 + 1;
                            if (uVar19 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar19 = uVar19 + 1;
                          while( true ) {
                            if (uVar19 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 == uVar30) break;
LAB_001f2f98:
                            if (uVar19 + 1 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 2 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 3 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 4 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 5 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 6 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 7 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            uVar19 = uVar19 + 8;
                          }
                        }
                        uVar27 = uVar27 + (uVar22 - 7);
                      }
                      break;
                    case 0x2b:
                      uVar27 = uVar34 + 6;
                      *(uint *)(lVar46 + 0x590) = uVar27;
                      cVar12 = '\0';
                      if (uVar27 <= uVar20) {
                        *(char **)(lVar46 + 0xd98) = pcVar29 + 3;
                        cVar12 = pcVar29[2];
                      }
                      *(char *)(lVar46 + 0x2e4a) = cVar12;
                      if (6 < uVar22) {
                        uVar19 = uVar34 + 7;
                        uVar30 = uVar22 + uVar34;
                        uVar27 = ~uVar27 + uVar30 & 7;
                        if (uVar19 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                        if (uVar19 != uVar30) {
                          if (uVar27 == 0) goto LAB_001f2d68;
                          if (uVar27 != 1) {
                            if (uVar27 != 2) {
                              if (uVar27 != 3) {
                                if (uVar27 != 4) {
                                  if (uVar27 != 5) {
                                    if ((uVar27 != 6) && (uVar19 = uVar34 + 8, uVar19 <= uVar20)) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                    uVar19 = uVar19 + 1;
                                    if (uVar19 <= uVar20) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                  }
                                  uVar19 = uVar19 + 1;
                                  if (uVar19 <= uVar20) {
                                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                  }
                                }
                                uVar19 = uVar19 + 1;
                                if (uVar19 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                              }
                              uVar19 = uVar19 + 1;
                              if (uVar19 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                            }
                            uVar19 = uVar19 + 1;
                            if (uVar19 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar19 = uVar19 + 1;
                          while( true ) {
                            if (uVar19 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 == uVar30) break;
LAB_001f2d68:
                            if (uVar19 + 1 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 2 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 3 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 4 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 5 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 6 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            if (uVar19 + 7 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            uVar19 = uVar19 + 8;
                          }
                        }
                        goto LAB_001f2e20;
                      }
                      break;
                    case 0x2d:
                      uVar27 = uVar34 + 6;
                      *(uint *)(lVar46 + 0x590) = uVar27;
                      if (uVar20 < uVar27) {
                        bVar17 = 0;
                        bVar18 = 0;
                        if (6 < uVar22) {
LAB_001f29ec:
                          bVar17 = bVar18;
                          uVar19 = ~uVar27;
                          uVar27 = uVar34 + 7;
                          uVar19 = uVar19 + uVar34 + uVar22 & 7;
                          if (uVar27 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                          if (uVar27 - uVar34 < uVar22) {
                            if (uVar19 == 0) goto LAB_001f2b08;
                            if (uVar19 != 1) {
                              if (uVar19 != 2) {
                                if (uVar19 != 3) {
                                  if (uVar19 != 4) {
                                    if (uVar19 != 5) {
                                      if ((uVar19 != 6) && (uVar27 = uVar34 + 8, uVar27 <= uVar20))
                                      {
                                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                      }
                                      uVar27 = uVar27 + 1;
                                      if (uVar27 <= uVar20) {
                                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                      }
                                    }
                                    uVar27 = uVar27 + 1;
                                    if (uVar27 <= uVar20) {
                                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                    }
                                  }
                                  uVar27 = uVar27 + 1;
                                  if (uVar27 <= uVar20) {
                                    *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                  }
                                }
                                uVar27 = uVar27 + 1;
                                if (uVar27 <= uVar20) {
                                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                                }
                              }
                              uVar27 = uVar27 + 1;
                              if (uVar27 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                            }
                            uVar27 = uVar27 + 1;
                            while( true ) {
                              if (uVar27 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                              if (uVar22 <= uVar27 - uVar34) break;
LAB_001f2b08:
                              if (uVar27 + 1 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                              if (uVar27 + 2 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                              if (uVar27 + 3 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                              if (uVar27 + 4 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                              if (uVar27 + 5 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                              if (uVar27 + 6 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                              if (uVar27 + 7 <= uVar20) {
                                *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                              }
                              uVar27 = uVar27 + 8;
                            }
                          }
                          *(uint *)(lVar46 + 0x590) = uVar27;
                          goto LAB_001f2bc4;
                        }
                      }
                      else {
                        *(char **)(lVar46 + 0xd98) = pcVar29 + 3;
                        bVar17 = pcVar29[2];
                        bVar18 = bVar17;
                        if (6 < uVar22) goto LAB_001f29ec;
LAB_001f2bc4:
                        if (0x1f < bVar17) {
                          if ((byte)(bVar17 - 0x40) < 0x20) {
                            bVar18 = 0xff;
                            if (*(long *)(lVar46 + 0x2e98) != 0) {
                              bVar18 = bVar17;
                            }
                            *(byte *)(lVar46 + 0x2e4d) = bVar18;
                          }
                          break;
                        }
                      }
                      if (*(long *)(lVar46 + 0x2e80) == 0) {
                        *(undefined1 *)(lVar46 + 0x2e4c) = 0xff;
                        uVar27 = *(uint *)(lVar46 + 0x590);
                      }
                      else {
                        *(byte *)(lVar46 + 0x2e4c) = bVar17;
                        uVar27 = *(uint *)(lVar46 + 0x590);
                      }
                    }
                  }
                  goto LAB_001efeb8;
                }
              }
              uVar19 = uVar22 + uVar34;
              if (4 < uVar22) {
                uVar30 = uVar34 + 5;
                uVar31 = ~uVar27 + uVar19 & 7;
                if (uVar30 <= uVar20) {
                  *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                }
                if (uVar30 != uVar19) {
                  if (uVar31 == 0) goto LAB_001f0690;
                  if (uVar31 != 1) {
                    if (uVar31 != 2) {
                      if (uVar31 != 3) {
                        if (uVar31 != 4) {
                          if (uVar31 != 5) {
                            if ((uVar31 != 6) && (uVar30 = uVar34 + 6, uVar30 <= uVar20)) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                            uVar30 = uVar30 + 1;
                            if (uVar30 <= uVar20) {
                              *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                            }
                          }
                          uVar30 = uVar30 + 1;
                          if (uVar30 <= uVar20) {
                            *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                          }
                        }
                        uVar30 = uVar30 + 1;
                        if (uVar30 <= uVar20) {
                          *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                        }
                      }
                      uVar30 = uVar30 + 1;
                      if (uVar30 <= uVar20) {
                        *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                      }
                    }
                    uVar30 = uVar30 + 1;
                    if (uVar30 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                  }
                  uVar30 = uVar30 + 1;
                  while( true ) {
                    if (uVar30 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar30 == uVar19) break;
LAB_001f0690:
                    if (uVar30 + 1 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar30 + 2 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar30 + 3 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar30 + 4 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar30 + 5 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar30 + 6 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    if (uVar30 + 7 <= uVar20) {
                      *(long *)(lVar46 + 0xd98) = *(long *)(lVar46 + 0xd98) + 1;
                    }
                    uVar30 = uVar30 + 8;
                  }
                }
                uVar27 = uVar27 + (uVar22 - 4);
              }
              goto LAB_001efeb8;
            }
LAB_001f0304:
            *(uint *)(lVar46 + 0x590) = uVar19 + 2;
            if (uVar20 < uVar19 + 2) {
              *(uint *)(lVar46 + 0x590) = uVar19 + 3;
              uVar34 = 0;
              if (uVar19 + 3 <= uVar20) {
                pbVar38 = *(byte **)(lVar46 + 0xd98);
                bVar17 = 0;
                goto LAB_001f11c8;
              }
switchD_001f03e0_caseD_0:
              puVar49[uVar24 * 0x20] = (char)uVar34;
              uVar27 = *(uint *)(lVar46 + 0x590);
            }
            else {
              pbVar33 = *(byte **)(lVar46 + 0xd98);
              uVar34 = 0;
              pbVar38 = pbVar33 + 1;
              *(byte **)(lVar46 + 0xd98) = pbVar38;
              bVar17 = *pbVar33;
              *(uint *)(lVar46 + 0x590) = uVar19 + 3;
              bVar17 = bVar17 & 0x7f;
              if (uVar19 + 3 <= uVar20) {
LAB_001f11c8:
                *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
                uVar34 = *pbVar38 & 0x7f;
              }
              uVar16 = (undefined1)uVar34;
              switch(bVar17) {
              case 0:
                goto switchD_001f03e0_caseD_0;
              case 1:
                if ((uint)*(byte *)(lVar46 + 0x2e56) == (uint)uVar24) goto switchD_001f03e0_caseD_2;
                uVar16 = 0;
                if (uVar34 != 0) {
                  if (uVar34 < 0x20) {
                    uVar16 = 1;
                  }
                  else if (uVar34 < 0x40) {
                    uVar16 = 2;
                  }
                  else {
                    uVar16 = 3;
                    if (0x5f < uVar34) {
                      uVar16 = 4;
                    }
                  }
                }
                puVar49[uVar24 * 0x20 + 6] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              default:
switchD_001f03e0_caseD_2:
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 7:
                puVar49[uVar24 * 0x20 + 7] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 10:
                puVar49[uVar24 * 0x20 + 8] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0xb:
                puVar49[uVar24 * 0x20 + 9] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0xf:
                if (0x18 < uVar34) goto switchD_001f03e0_caseD_2;
                puVar49[uVar24 * 0x20 + 0xd] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0x1e:
                uVar27 = *(uint *)(lVar46 + 0x590);
                *(short *)(puVar49 + uVar24 * 0x20 + 0x1e) = (short)(uVar34 << 7);
                break;
              case 0x1f:
                uVar27 = *(uint *)(lVar46 + 0x590);
                *(ushort *)(puVar49 + uVar24 * 0x20 + 0x1e) =
                     (ushort)uVar34 | *(ushort *)(puVar49 + uVar24 * 0x20 + 0x1e) & 0x3f80;
                break;
              case 0x20:
                puVar49[uVar24 * 0x20 + 1] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0x2f:
                puVar49[uVar24 * 0x20 + 0x16] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0x40:
                puVar49[uVar24 * 0x20 + 10] = 0x3f < uVar34;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0x47:
                puVar49[uVar24 * 0x20 + 0x17] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0x4a:
                puVar49[uVar24 * 0x20 + 0x18] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0x4f:
                if ((uVar34 == 0) || (uVar34 - 2 < 4)) {
                  puVar49[uVar24 * 0x20 + 0x1c] = uVar16;
                  uVar27 = *(uint *)(lVar46 + 0x590);
                }
                else {
                  puVar49[uVar24 * 0x20 + 0x1c] = 0;
                  uVar27 = *(uint *)(lVar46 + 0x590);
                }
                break;
              case 0x5a:
                puVar49[uVar24 * 0x20 + 0x19] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0x5b:
                puVar49[uVar24 * 0x20 + 0x1a] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0x5d:
                puVar49[uVar24 * 0x20 + 0x1b] = uVar16;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0x79:
                if (uVar34 != 0) goto switchD_001f03e0_caseD_2;
                puVar49[uVar24 * 0x20 + 6] = 0;
                puVar49[uVar24 * 0x20 + 9] = 0x7f;
                puVar49[uVar24 * 0x20 + 10] = 0;
                puVar49[uVar24 * 0x20 + 0xc] = 0x40;
                puVar49[uVar24 * 0x20 + 0x10] = 100;
                uVar27 = *(uint *)(lVar46 + 0x590);
                break;
              case 0x7e:
                if ((uVar34 != 1) || ((1 << uVar24 & *(uint *)(lVar46 + 0x2e50)) != 0))
                goto switchD_001f03e0_caseD_2;
                puVar49[uVar24 * 0x20 + 0xb] = 0;
                *(uint *)(lVar46 + 0x2e50) = 1 << uVar24 | *(uint *)(lVar46 + 0x2e50);
                uVar27 = *(uint *)(lVar46 + 0x590);
              }
            }
LAB_001efeb8:
            uVar19 = uVar27 + 1;
            *(uint *)(lVar46 + 0x590) = uVar19;
            uVar20 = *(uint *)(lVar46 + 0x58c);
            if (*(uint *)(lVar46 + 0x58c) < uVar19) {
LAB_001efecc:
              uVar27 = *(uint *)(lVar46 + 0xe14);
              if (uVar27 <= uVar21) goto LAB_001efed8;
              break;
            }
          }
          pbVar38 = *(byte **)(lVar46 + 0xd98);
          *(byte **)(lVar46 + 0xd98) = pbVar38 + 1;
          uVar34 = *pbVar38 & 0x7f;
          if ((char)*pbVar38 < '\0') {
            uVar19 = uVar27 + 2;
            *(uint *)(lVar46 + 0x590) = uVar19;
            if (uVar19 <= uVar20) {
              *(byte **)(lVar46 + 0xd98) = pbVar38 + 2;
              uVar34 = (pbVar38[1] & 0x7f) + uVar34 * 0x80;
              if (-1 < (char)pbVar38[1]) goto LAB_001f01b8;
              uVar19 = uVar27 + 3;
              *(uint *)(lVar46 + 0x590) = uVar19;
              if (uVar19 <= uVar20) {
                *(byte **)(lVar46 + 0xd98) = pbVar38 + 3;
                uVar34 = (pbVar38[2] & 0x7f) + uVar34 * 0x80;
                if (-1 < (char)pbVar38[2]) goto LAB_001f01b8;
                uVar19 = uVar27 + 4;
                *(uint *)(lVar46 + 0x590) = uVar19;
                if (uVar19 <= uVar20) {
                  *(byte **)(lVar46 + 0xd98) = pbVar38 + 4;
                  if ((char)pbVar38[3] < '\0') {
                    *(uint *)(lVar46 + 0x590) = uVar20;
                    uVar19 = uVar20;
                  }
                  else {
                    uVar34 = (uint)pbVar38[3] + uVar34 * 0x80;
                    if (uVar34 < 0x200000) goto LAB_001f01b8;
                    *(uint *)(lVar46 + 0x590) = uVar20;
                    uVar19 = uVar20;
                  }
                }
              }
            }
            uVar27 = *(uint *)(lVar46 + 0xe14);
            if (uVar27 <= uVar21) goto LAB_001f0024;
            break;
          }
LAB_001f01b8:
          uVar27 = *(uint *)(lVar46 + 0xe14);
          uVar21 = uVar21 + uVar34;
          if (uVar27 <= uVar21) goto LAB_001f0024;
        } while (uVar19 < uVar20);
      }
    }
    puVar51 = *(uint **)(lVar46 + 0xde0);
    if (puVar51 != (uint *)0x0) {
      *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
    }
    puVar48 = *(uint **)(lVar46 + 0xdd8);
    *puVar51 = uVar27;
    puVar51[1] = 0xff;
    puVar51[8] = 0xffffffff;
    if ((puVar48 == (uint *)0x0) || (uVar27 < *puVar48)) goto LAB_001ef0d8;
    puVar47 = *(uint **)(puVar48 + 10);
    if (puVar47 != (uint *)0x0) {
      uVar19 = *puVar47;
      puVar28 = puVar48;
      puVar48 = puVar47;
      while (uVar19 <= uVar27) {
        puVar47 = *(uint **)(puVar48 + 10);
        if (puVar47 == (uint *)0x0) goto LAB_001ee850;
        puVar28 = puVar48;
        puVar48 = puVar47;
        uVar19 = *puVar47;
      }
      goto LAB_001f1608;
    }
LAB_001ee850:
    *(uint **)(puVar48 + 10) = puVar51;
    puVar51[10] = 0;
    puVar51[0xb] = 0;
  }
  *(undefined4 *)(lVar46 + 0xe10) = 0;
  uVar27 = *(int *)(lVar46 + 0xe04) + *(int *)(lVar46 + 0xe00);
LAB_001ee438:
  puVar51 = *(uint **)(lVar46 + 0xde0);
  if (puVar51 != (uint *)0x0) {
    *(undefined8 *)(lVar46 + 0xde0) = *(undefined8 *)(puVar51 + 10);
  }
  puVar48 = *(uint **)(lVar46 + 0xdd8);
  *puVar51 = uVar27;
  puVar51[1] = 0xff;
  puVar51[8] = 0xffffffff;
  if ((puVar48 == (uint *)0x0) || (uVar27 < *puVar48)) {
    *(uint **)(lVar46 + 0xdd8) = puVar51;
    *(uint **)(puVar51 + 10) = puVar48;
  }
  else {
    puVar47 = *(uint **)(puVar48 + 10);
    if (puVar47 == (uint *)0x0) {
LAB_001ee4a0:
      *(uint **)(puVar48 + 10) = puVar51;
      puVar51[10] = 0;
      puVar51[0xb] = 0;
    }
    else {
      uVar19 = *puVar47;
      puVar28 = puVar48;
      puVar48 = puVar47;
      while (uVar19 <= uVar27) {
        puVar47 = *(uint **)(puVar48 + 10);
        if (puVar47 == (uint *)0x0) goto LAB_001ee4a0;
        puVar28 = puVar48;
        puVar48 = puVar47;
        uVar19 = *puVar47;
      }
      *(uint **)(puVar28 + 10) = puVar51;
      *(uint **)(puVar51 + 10) = puVar48;
    }
  }
  if (iVar39 == 3) {
    _Var45 = (_MACNV_SEEK_INFO)0x7f;
  }
  else {
    _Var45 = *(_MACNV_SEEK_INFO *)(lVar46 + 0xe1d);
  }
  *param_3 = _Var45;
  iVar39 = 0x20;
  *(undefined2 *)(param_3 + 2) = *(undefined2 *)(lVar46 + 0x2e48);
  param_3[4] = *(_MACNV_SEEK_INFO *)(lVar46 + 0x2e4a);
  param_3[5] = *(_MACNV_SEEK_INFO *)(lVar46 + 0x2e4b);
  param_3[6] = *(_MACNV_SEEK_INFO *)(lVar46 + 0x2e4c);
  param_3[7] = *(_MACNV_SEEK_INFO *)(lVar46 + 0x2e4d);
  p_Var23 = param_3;
  do {
    p_Var23[8] = *(_MACNV_SEEK_INFO *)(puVar49 + 0x13);
    iVar39 = iVar39 + -1;
    p_Var23[9] = *(_MACNV_SEEK_INFO *)(puVar49 + 0x14);
    p_Var23[0x1a] = *(_MACNV_SEEK_INFO *)(puVar49 + 0x15);
    p_Var23[10] = *(_MACNV_SEEK_INFO *)(puVar49 + 2);
    p_Var23[0xb] = *(_MACNV_SEEK_INFO *)(puVar49 + 3);
    p_Var23[0xc] = *(_MACNV_SEEK_INFO *)(puVar49 + 6);
    p_Var23[0xd] = *(_MACNV_SEEK_INFO *)(puVar49 + 7);
    p_Var23[0xf] = *(_MACNV_SEEK_INFO *)(puVar49 + 9);
    p_Var23[0x10] = *(_MACNV_SEEK_INFO *)(puVar49 + 10);
    p_Var23[0x11] = *(_MACNV_SEEK_INFO *)(puVar49 + 0xe);
    p_Var23[0x12] = *(_MACNV_SEEK_INFO *)(puVar49 + 0xb);
    p_Var23[0x13] = *(_MACNV_SEEK_INFO *)(puVar49 + 0x16);
    p_Var23[0x14] = *(_MACNV_SEEK_INFO *)(puVar49 + 0x17);
    p_Var23[0x15] = *(_MACNV_SEEK_INFO *)(puVar49 + 0x18);
    p_Var23[0x16] = *(_MACNV_SEEK_INFO *)(puVar49 + 0x19);
    p_Var23[0x17] = *(_MACNV_SEEK_INFO *)(puVar49 + 0x1a);
    p_Var23[0x18] = *(_MACNV_SEEK_INFO *)(puVar49 + 8);
    p_Var23[0x19] = *(_MACNV_SEEK_INFO *)(puVar49 + 0x1b);
    *(ushort *)(p_Var23 + 0x1c) = (ushort)(byte)puVar49[0xc] << 7;
    *(undefined2 *)(p_Var23 + 0x1e) = *(undefined2 *)(puVar49 + 0x1e);
    p_Var23[0x1b] = *(_MACNV_SEEK_INFO *)(puVar49 + 0x1c);
    p_Var23 = p_Var23 + 0x1a;
    puVar49 = puVar49 + 0x20;
  } while (iVar39 != 0);
  lVar50 = *(long *)(lVar46 + 0x2e28);
  *(undefined4 *)(param_3 + 0x348) = 0;
  *(undefined4 *)(param_3 + 0x34c) = 0;
  if (lVar50 == 0) {
    *(undefined4 *)(param_3 + 0x350) = 0;
    *(undefined4 *)(param_3 + 0x358) = 1000;
    *(undefined4 *)(param_3 + 0x354) = 0;
  }
  else {
    *(uint *)(param_3 + 0x358) =
         (*(byte *)(lVar50 + 1) & 0x7f) * 0x200000 + (*(byte *)(lVar50 + 2) & 0x7f) * 0x4000 +
         (*(byte *)(lVar50 + 4) & 0x7f) + (*(byte *)(lVar50 + 3) & 0x7f) * 0x80;
    *(uint *)(param_3 + 0x350) = ((*(byte *)(lVar50 + 5) & 0x7f) - 0x40) * 3;
    *(uint *)(param_3 + 0x354) = ((*(byte *)(lVar50 + 6) & 0x7f) - 0x40) * 3;
  }
  lVar50 = *(long *)(lVar46 + 0x2e30);
  *(undefined4 *)(param_3 + 0x360) = 0;
  *(undefined4 *)(param_3 + 0x35c) = 1;
  if (lVar50 == 0) {
    *(undefined4 *)(param_3 + 0x364) = 0;
    *(undefined4 *)(param_3 + 0x36c) = 1000;
    *(undefined4 *)(param_3 + 0x368) = 0;
  }
  else {
    *(uint *)(param_3 + 0x36c) =
         (*(byte *)(lVar50 + 1) & 0x7f) * 0x200000 + (*(byte *)(lVar50 + 2) & 0x7f) * 0x4000 +
         (*(byte *)(lVar50 + 4) & 0x7f) + (*(byte *)(lVar50 + 3) & 0x7f) * 0x80;
    *(uint *)(param_3 + 0x364) = ((*(byte *)(lVar50 + 5) & 0x7f) - 0x40) * 3;
    *(uint *)(param_3 + 0x368) = ((*(byte *)(lVar50 + 6) & 0x7f) - 0x40) * 3;
  }
  lVar50 = *(long *)(lVar46 + 0x2e38);
  *(undefined4 *)(param_3 + 0x374) = 0;
  *(undefined4 *)(param_3 + 0x370) = 2;
  if (lVar50 == 0) {
    *(undefined4 *)(param_3 + 0x378) = 0;
    *(undefined4 *)(param_3 + 0x380) = 1000;
    *(undefined4 *)(param_3 + 0x37c) = 0;
  }
  else {
    *(uint *)(param_3 + 0x380) =
         (*(byte *)(lVar50 + 1) & 0x7f) * 0x200000 + (*(byte *)(lVar50 + 2) & 0x7f) * 0x4000 +
         (*(byte *)(lVar50 + 4) & 0x7f) + (*(byte *)(lVar50 + 3) & 0x7f) * 0x80;
    *(uint *)(param_3 + 0x378) = ((*(byte *)(lVar50 + 5) & 0x7f) - 0x40) * 3;
    *(uint *)(param_3 + 0x37c) = ((*(byte *)(lVar50 + 6) & 0x7f) - 0x40) * 3;
  }
  lVar46 = *(long *)(lVar46 + 0x2e40);
  *(undefined4 *)(param_3 + 0x388) = 0;
  *(undefined4 *)(param_3 + 900) = 3;
  if (lVar46 == 0) {
    *(undefined4 *)(param_3 + 0x38c) = 0;
    *(undefined4 *)(param_3 + 0x394) = 1000;
    *(undefined4 *)(param_3 + 0x390) = 0;
  }
  else {
    *(uint *)(param_3 + 0x394) =
         (*(byte *)(lVar46 + 1) & 0x7f) * 0x200000 + (*(byte *)(lVar46 + 2) & 0x7f) * 0x4000 +
         (*(byte *)(lVar46 + 4) & 0x7f) + (*(byte *)(lVar46 + 3) & 0x7f) * 0x80;
    *(uint *)(param_3 + 0x38c) = ((*(byte *)(lVar46 + 5) & 0x7f) - 0x40) * 3;
    *(uint *)(param_3 + 0x390) = ((*(byte *)(lVar46 + 6) & 0x7f) - 0x40) * 3;
  }
  return 0;
LAB_001ef9a8:
  iVar35 = *(int *)(lVar46 + 0xe04);
  iVar40 = *(int *)(lVar46 + 0xe00);
  *(uint **)(puVar48 + 10) = puVar51;
  *(uint **)(puVar51 + 10) = puVar47;
  uVar27 = iVar35 + iVar40;
  goto LAB_001ee438;
LAB_001ef498:
  iVar35 = 2;
  uVar19 = (pbVar38[uVar32 + 1] & 0x7f) + 0x80 + (bVar17 & 0x7f) * 0x80;
  goto LAB_001ef1f4;
}

