/* SetDspData @ 00055f58 21844B */


/* ARM::CDsp2::SetDspData(unsigned int, unsigned int) */

void __thiscall ARM::CDsp2::SetDspData(CDsp2 *this,uint param_1,uint param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  CDsp2 CVar3;
  short sVar4;
  short sVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  CDsp2 *pCVar9;
  short *psVar10;
  short sVar11;
  CDsp2 *pCVar12;
  CDsp2 *pCVar13;
  undefined4 uVar14;
  int iVar15;
  ushort uVar16;
  ushort uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  CDsp2 *pCVar21;
  CDsp2 *pCVar22;
  short *psVar23;
  short *psVar24;
  ushort uVar25;
  short sVar26;
  undefined4 uVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  short sVar33;
  short sVar34;
  CDsp2 *pCVar35;
  undefined2 uVar36;
  ushort uVar37;
  undefined4 *puVar38;
  uint uVar39;
  int iVar40;
  undefined4 *puVar41;
  short local_70;
  CDsp2 *local_68;
  CDsp2 *local_64;
  short local_5c;
  uint local_58;
  int local_4c;
  
  if (*(int *)(this + 0xc) != 0) {
    if (*(int *)(this + 0xc) != 1) {
      return;
    }
    iVar18 = *(int *)(this + 0x14);
    if ((this[0x9a30] == (CDsp2)0x0) || (0x5f < iVar18 - 0x13U)) {
      *(uint *)(this + iVar18 * 8 + 0x20) = param_2;
      *(uint *)(this + iVar18 * 8 + 0x24) = param_1 & 0xffff;
    }
    if ((*(int *)(this + 0x10) != 0) || (iVar18 != 0x2ff)) goto LAB_00055fa0;
    if (((*(int *)(this + 0xbc) == 0x200 && *(int *)(this + 0xb8) == 0x38000) &&
        (((((*(int *)(this + 0xc4) == 0x600 && *(int *)(this + 0xc0) == 0x78000 &&
            (*(int *)(this + 0xcc) == 4 && *(int *)(this + 200) == -0x3fb00000)) &&
           (*(int *)(this + 0xd4) == 0xa00 && *(int *)(this + 0xd0) == 0xb8000)) &&
          ((*(int *)(this + 0xdc) == 0xe00 && *(int *)(this + 0xd8) == 0xf8000 &&
           (*(int *)(this + 0xe4) == 0x1200 && *(undefined **)(this + 0xe0) == &UNK_00138000)))) &&
         (*(int *)(this + 0xec) == 0x1600 && *(undefined **)(this + 0xe8) == &UNK_00178000)))) &&
       (((*(int *)(this + 0xf4) == 0x1ea && *(int *)(this + 0xf0) == -0x7f7c8000 &&
         (*(int *)(this + 0xfc) == 0xa00 && *(int *)(this + 0xf8) == 0x4b0000)) &&
        (*(int *)(this + 0x104) == 0x1eb && *(int *)(this + 0x100) == -0x7f7c8000)))) {
      *(undefined4 *)(this + 0x1e54) = 1;
LAB_000563b0:
      CVar3 = (CDsp2)0x1;
    }
    else if ((*(int *)(this + 0x74) == 0x200 && *(int *)(this + 0x70) == 0x1f8000) &&
            (*(int *)(this + 0x7c) == 0x600 && *(undefined **)(this + 0x78) == &UNK_00238000)) {
      *(undefined4 *)(this + 0x1e54) = 0;
      if ((*(int *)(this + 0x4a4) == 0x6d && *(int *)(this + 0x4a0) == -0x5f7c8000) &&
         ((*(int *)(this + 0x4ac) == 0x62 && *(int *)(this + 0x4a8) == -0x1fa90000 &&
          (*(int *)(this + 0x4b4) == DAT_00057f0c && *(int *)(this + 0x4b0) == DAT_00057f08)))) {
        if ((*(int *)(this + 0x4bc) != *(int *)(this + 0x4a4) ||
             *(int *)(this + 0x4b8) != *(int *)(this + 0x4a0)) ||
           (((((*(int *)(this + 0x4c4) != 500 || *(int *)(this + 0x4c0) != -0x1fa50000 ||
               (*(int *)(this + 0x4cc) != DAT_00057f14 || *(int *)(this + 0x4c8) != DAT_00057f10))
              || (*(int *)(this + 0x4d4) != *(int *)(this + 0x4bc) ||
                  *(int *)(this + 0x4d0) != *(int *)(this + 0x4b8))) ||
             ((*(int *)(this + 0x4dc) != 0x1f8 || *(int *)(this + 0x4d8) != -0x1fa10000 ||
              (*(int *)(this + 0x4e4) != DAT_00057f1c || *(int *)(this + 0x4e0) != DAT_00057f18))))
            || (*(int *)(this + 0x4ec) != 0x6d || *(int *)(this + 0x4e8) != -0x5f7c8000))))
        goto LAB_00058682;
        iVar18 = 0;
        *(undefined4 *)(this + 0x1e5c) = 0;
      }
      else {
LAB_00058682:
        iVar18 = *(int *)(this + 0x3d0);
        iVar19 = *(int *)(this + 0x3d4);
        if ((((iVar19 == 0x3600 && iVar18 == 0xc78200) &&
             (*(int *)(this + 0x3dc) == 0xd && *(int *)(this + 0x3d8) == -0x7f7c8000)) &&
            ((*(int *)(this + 0x3e4) == 0xc && *(int *)(this + 0x3e0) == -0x7f7d0000 &&
             (((*(int *)(this + 0x3ec) == 0xb && *(int *)(this + 1000) == -0x7f7d0000 &&
               (*(int *)(this + 0x3f4) == 10 && *(int *)(this + 0x3f0) == -0x3f950000)) &&
              (*(int *)(this + 0x3fc) == 0x5f && *(int *)(this + 0x3f8) == -0x7f7d0000)))))) &&
           ((((*(int *)(this + 0x404) == 0x25e && *(int *)(this + 0x400) == -0x7f7d0000 &&
              (*(int *)(this + 0x40c) == DAT_00058bbc && *(int *)(this + 0x408) == DAT_00058bb8)) &&
             (*(int *)(this + 0x414) == DAT_00058bc4 && *(int *)(this + 0x410) == DAT_00058bc0)) &&
            (*(int *)(this + 0x41c) == 0xea0b && *(int *)(this + 0x418) == -0x27ffffff)))) {
          iVar18 = 1;
          *(undefined4 *)(this + 0x1e5c) = 1;
        }
        else if (((iVar19 == 0x8000 && iVar18 == 0x8f2000) &&
                 (*(int *)(this + 0x3d8) == 0 && *(int *)(this + 0x3dc) == 0)) &&
                ((*(int *)(this + 0x3e0) == 0 && *(int *)(this + 0x3e4) == 0 &&
                 ((((*(int *)(this + 1000) == 0 && *(int *)(this + 0x3ec) == 0 &&
                    (*(int *)(this + 0x3f4) == DAT_0005c114 &&
                     *(int *)(this + 0x3f0) == DAT_0005c110)) &&
                   (*(int *)(this + 0x3fc) == DAT_0005c11c && *(int *)(this + 0x3f8) == DAT_0005c118
                   )) && (*(int *)(this + 0x404) == 0x8000 && *(int *)(this + 0x400) == 0x998000))))
                )) {
          iVar18 = 2;
          *(undefined4 *)(this + 0x1e5c) = 2;
        }
        else if (((iVar19 == DAT_0005c124 && iVar18 == DAT_0005c120) &&
                 (*(int *)(this + 0x3dc) == DAT_0005c12c && *(int *)(this + 0x3d8) == DAT_0005c128))
                && (*(int *)(this + 0x3e4) == 0x8000 && *(int *)(this + 0x3e0) == 0x998000)) {
          iVar18 = 3;
          *(undefined4 *)(this + 0x1e5c) = 3;
        }
        else {
          iVar18 = 4;
          *(undefined4 *)(this + 0x1e5c) = 4;
        }
      }
      iVar19 = *(int *)(this + 0xb8);
      iVar40 = *(int *)(this + 0xbc);
      if (iVar40 == DAT_00057f24 && iVar19 == DAT_00057f20) {
        if (((((*(int *)(this + 0xc4) == DAT_00057f2c && *(int *)(this + 0xc0) == DAT_00057f28) &&
              (*(int *)(this + 0xcc) == DAT_00057f34 && *(int *)(this + 200) == DAT_00057f30)) &&
             ((*(int *)(this + 0xd4) == 2 && *(int *)(this + 0xd0) == -0x3fb40000 &&
              (((*(int *)(this + 0xdc) == 4 && *(int *)(this + 0xd8) == -0x3fb00000 &&
                (*(int *)(this + 0xe4) == DAT_00057f3c && *(int *)(this + 0xe0) == DAT_00057f38)) &&
               (*(int *)(this + 0xec) == DAT_00057f44 && *(int *)(this + 0xe8) == DAT_00057f40))))))
            && ((*(int *)(this + 0xf4) == DAT_00057f4c && *(int *)(this + 0xf0) == DAT_00057f48 &&
                (*(int *)(this + 0xfc) == DAT_00057f54 && *(int *)(this + 0xf8) == DAT_00057f50))))
           && (*(int *)(this + 0x104) == 0x49 && *(int *)(this + 0x100) == -0x5f7c8000)) {
          iVar19 = 0;
          *(undefined4 *)(this + 0x1e60) = 0;
        }
        else {
          if ((((*(int *)(this + 0xc4) != 0x17 || *(int *)(this + 0xc0) != -0x3fbc0000) ||
               (*(int *)(this + 0xcc) != 4 || *(int *)(this + 200) != -0x3fb00000)) ||
              ((*(int *)(this + 0xd4) != 0x2e40 || *(int *)(this + 0xd0) != -0x5f7c8000 ||
               ((((*(int *)(this + 0xdc) != DAT_0005b4fc || *(int *)(this + 0xd8) != DAT_0005b4f8 ||
                  (*(int *)(this + 0xe4) != DAT_0005b504 || *(int *)(this + 0xe0) != DAT_0005b500))
                 || (*(int *)(this + 0xec) != 0x3e || *(int *)(this + 0xe8) != -0x5f7c8000)) ||
                ((*(int *)(this + 0xf4) != DAT_0005b50c || *(int *)(this + 0xf0) != DAT_0005b508 ||
                 (*(int *)(this + 0xfc) != DAT_0005b514 || *(int *)(this + 0xf8) != DAT_0005b510))))
               )))) || (*(int *)(this + 0x104) != 1 || *(int *)(this + 0x100) != -0x5f7c8000))
          goto LAB_0005b3ee;
          iVar19 = 1;
          *(undefined4 *)(this + 0x1e60) = 1;
        }
      }
      else {
        if (iVar40 != 0x15 || iVar19 != -0x3fc00000) {
LAB_0005b3ee:
          if (iVar40 == DAT_0005b554 && iVar19 == DAT_0005b550) {
            if (((*(int *)(this + 0xc4) == DAT_0005b55c && *(int *)(this + 0xc0) == DAT_0005b558) &&
                (*(int *)(this + 0xcc) == DAT_0005b564 && *(int *)(this + 200) == DAT_0005b560)) &&
               (((*(int *)(this + 0xd4) == 2 && *(int *)(this + 0xd0) == -0x3fb40000 &&
                 (((*(int *)(this + 0xdc) == 0x40 && *(int *)(this + 0xd8) == -0x5f7c8000 &&
                   (*(int *)(this + 0xe4) == 0x41 && *(int *)(this + 0xe0) == -0x5f7d0000)) &&
                  (*(int *)(this + 0xec) == 0x2242 && *(int *)(this + 0xe8) == -0x5f7d0000)))) &&
                (((*(int *)(this + 0xf4) == 0x48 && *(int *)(this + 0xf0) == -0x5f7c8000 &&
                  (*(int *)(this + 0xfc) == 0x2600 && *(int *)(this + 0xf8) == 0x671060)) &&
                 (*(int *)(this + 0x104) == 1 && *(int *)(this + 0x100) == -0x1fb48000)))))) {
              iVar19 = 3;
              *(undefined4 *)(this + 0x1e60) = 3;
              goto LAB_00057ef2;
            }
LAB_0005b6b4:
            if (iVar40 != 0x15 || iVar19 != -0x3fc00000) goto LAB_0005b5b8;
            if (((*(int *)(this + 0xc4) == 0x17 && *(int *)(this + 0xc0) == -0x3fbc0000) &&
                (*(int *)(this + 0xcc) == DAT_0005c0a4 && *(int *)(this + 200) == DAT_0005c0a0)) &&
               (((*(int *)(this + 0xd4) == DAT_0005c0ac && *(int *)(this + 0xd0) == DAT_0005c0a8 &&
                 (((*(int *)(this + 0xdc) == 1 && *(int *)(this + 0xd8) == -0x3fb80000 &&
                   (*(int *)(this + 0xe4) == 2 && *(int *)(this + 0xe0) == -0x3fb40000)) &&
                  (*(int *)(this + 0xec) == 0x23d && *(int *)(this + 0xe8) == -0x5f7c8000)))) &&
                (((*(int *)(this + 0xf4) == DAT_0005c0b4 && *(int *)(this + 0xf0) == DAT_0005c0b0 &&
                  (*(int *)(this + 0xfc) == DAT_0005c0bc && *(int *)(this + 0xf8) == DAT_0005c0b8))
                 && (*(int *)(this + 0x104) == 5 && *(int *)(this + 0x100) == -0x3fb00000)))))) {
              iVar19 = 5;
              *(undefined4 *)(this + 0x1e60) = 5;
              goto LAB_00057ef2;
            }
LAB_0005b816:
            if (iVar40 != 0x15 || iVar19 != -0x3fbc8000) goto LAB_0005b798;
            if (((*(int *)(this + 0xc4) == DAT_0005c0d4 && *(int *)(this + 0xc0) == DAT_0005c0d0) &&
                (*(int *)(this + 0xcc) == 0 && *(int *)(this + 200) == 0x20438000)) &&
               ((((*(int *)(this + 0xd4) == 0x40 && *(int *)(this + 0xd0) == -0x5f7d0000 &&
                  ((*(int *)(this + 0xdc) == 0x41 && *(int *)(this + 0xd8) == -0x5f7d0000 &&
                   (*(int *)(this + 0xe4) == 0x42 && *(int *)(this + 0xe0) == -0x5f7d0000)))) &&
                 (*(int *)(this + 0xec) == DAT_0005c0dc && *(int *)(this + 0xe8) == DAT_0005c0d8))
                && (((*(int *)(this + 0xf4) == 0x3d && *(int *)(this + 0xf0) == -0x5f7c8000 &&
                     (*(int *)(this + 0xfc) == 0x3c && *(int *)(this + 0xf8) == -0x1fb50000)) &&
                    (*(int *)(this + 0x104) == DAT_0005c0e4 &&
                     *(int *)(this + 0x100) == DAT_0005c0e0)))))) {
              iVar19 = 7;
              *(undefined4 *)(this + 0x1e60) = 7;
              goto LAB_00057ef2;
            }
LAB_0005b9e2:
            if (iVar40 != DAT_0005c104 || iVar19 != DAT_0005c100) goto LAB_0005b904;
            if ((*(int *)(this + 0xc4) == DAT_0005c10c && *(int *)(this + 0xc0) == DAT_0005c108) &&
               (*(int *)(this + 0xcc) == 0x8000 && *(int *)(this + 200) == 0x8e4000)) {
              iVar19 = 9;
              *(undefined4 *)(this + 0x1e60) = 9;
              goto LAB_00057ef2;
            }
          }
          else {
LAB_0005b1fe:
            if (iVar40 != 0x15 || iVar19 != -0x1fbc8000) goto LAB_0005b6b4;
            if (((*(int *)(this + 0xc4) == 0x217 && *(int *)(this + 0xc0) == -0x1fb90000) &&
                (*(int *)(this + 0xcc) == 0x640 && *(int *)(this + 200) == -0x5f7c8000)) &&
               (((*(int *)(this + 0xd4) == 0x2a15 && *(int *)(this + 0xd0) == -0x5f7c8000 &&
                 (((*(int *)(this + 0xdc) == 0x2e17 && *(int *)(this + 0xd8) == -0x5f7c8000 &&
                   (*(int *)(this + 0xe4) == 0x2600 && *(int *)(this + 0xe0) == 0xc78100)) &&
                  (*(int *)(this + 0xec) == 0x3600 && *(int *)(this + 0xe8) == 0x4381a0)))) &&
                (((*(int *)(this + 0xf4) == DAT_0005b54c && *(int *)(this + 0xf0) == DAT_0005b548 &&
                  (*(int *)(this + 0xfc) == 0x4a && *(int *)(this + 0xf8) == -0x5f7c8000)) &&
                 (*(int *)(this + 0x104) == 0 && *(int *)(this + 0x100) == 0xcb8000)))))) {
              iVar19 = 4;
              *(undefined4 *)(this + 0x1e60) = 4;
              goto LAB_00057ef2;
            }
LAB_0005b5b8:
            if (iVar40 != DAT_0005c08c || iVar19 != DAT_0005c088) goto LAB_0005b816;
            if (((*(int *)(this + 0xc4) == DAT_0005c094 && *(int *)(this + 0xc0) == DAT_0005c090) &&
                (*(int *)(this + 0xcc) == 0x2600 && *(int *)(this + 200) == 0xc78100)) &&
               ((*(int *)(this + 0xd4) == 0x3f && *(int *)(this + 0xd0) == -0x5f7c8000 &&
                (((((*(int *)(this + 0xdc) == 0 && *(int *)(this + 0xd8) == 0xcba000 &&
                    (*(int *)(this + 0xe4) == 0 && *(int *)(this + 0xe0) == 0x439000)) &&
                   (*(int *)(this + 0xec) == 0xa00 && *(int *)(this + 0xe8) == 0x470520)) &&
                  ((*(int *)(this + 0xf4) == DAT_0005c09c && *(int *)(this + 0xf0) == DAT_0005c098
                   && (*(int *)(this + 0xfc) == 0x3e && *(int *)(this + 0xf8) == -0x5f7c8000)))) &&
                 (*(int *)(this + 0x104) == 0 && *(int *)(this + 0x100) == 0xcb8000)))))) {
              iVar19 = 6;
              *(undefined4 *)(this + 0x1e60) = 6;
              goto LAB_00057ef2;
            }
LAB_0005b798:
            if (iVar40 != DAT_0005c0c4 || iVar19 != DAT_0005c0c0) goto LAB_0005b9e2;
            if (((*(int *)(this + 0xc4) == DAT_0005c0cc && *(int *)(this + 0xc0) == DAT_0005c0c8) &&
                (*(int *)(this + 0xcc) == 0x8000 && *(int *)(this + 200) == 0x8e4000)) &&
               ((*(int *)(this + 0xd0) == 0 && *(int *)(this + 0xd4) == 0 &&
                (((*(int *)(this + 0xd8) == 0 && *(int *)(this + 0xdc) == 0 &&
                  (*(int *)(this + 0xe4) == 0 && *(int *)(this + 0xe0) == 0)) &&
                 (*(int *)(this + 0xe8) == 0 && *(int *)(this + 0xec) == 0)))))) {
              iVar19 = 8;
              *(undefined4 *)(this + 0x1e60) = 8;
              goto LAB_00057ef2;
            }
LAB_0005b904:
            if (((((iVar40 == 0x15 && iVar19 == -0x1fbc8000) &&
                  (*(int *)(this + 0xc4) == DAT_0005c0ec && *(int *)(this + 0xc0) == DAT_0005c0e8))
                 && ((*(int *)(this + 0xcc) == DAT_0005c0f4 && *(int *)(this + 200) == DAT_0005c0f0
                     && ((*(int *)(this + 0xd4) == DAT_0005c0fc &&
                          *(int *)(this + 0xd0) == DAT_0005c0f8 &&
                         (*(int *)(this + 0xd8) == 0 && *(int *)(this + 0xdc) == 0)))))) &&
                (*(int *)(this + 0xe0) == 0 && *(int *)(this + 0xe4) == 0)) &&
               ((((*(int *)(this + 0xec) == 0x3200 && *(int *)(this + 0xe8) == 0x20778000 &&
                  (*(int *)(this + 0xf4) == 0x3d && *(int *)(this + 0xf0) == -0x5f7c8000)) &&
                 (*(int *)(this + 0xfc) == 0x3e && *(int *)(this + 0xf8) == -0x5f7d0000)) &&
                (*(int *)(this + 0x104) == 0x3f && *(int *)(this + 0x100) == -0x5f7d0000)))) {
              iVar19 = 10;
              *(undefined4 *)(this + 0x1e60) = 10;
              goto LAB_00057ef2;
            }
          }
          CVar3 = (CDsp2)0x0;
          *(undefined4 *)(this + 0x1e60) = 0xb;
          goto LAB_000563b4;
        }
        if (((((*(int *)(this + 0xc4) != 0x17 || *(int *)(this + 0xc0) != -0x3fbc0000) ||
              (*(int *)(this + 0xcc) != DAT_0005b51c || *(int *)(this + 200) != DAT_0005b518)) ||
             ((*(int *)(this + 0xd4) != DAT_0005b524 || *(int *)(this + 0xd0) != DAT_0005b520 ||
              (((*(int *)(this + 0xdc) != DAT_0005b52c || *(int *)(this + 0xd8) != DAT_0005b528 ||
                (*(int *)(this + 0xe4) != 4 || *(int *)(this + 0xe0) != -0x3fb00000)) ||
               (*(int *)(this + 0xec) != DAT_0005b534 || *(int *)(this + 0xe8) != DAT_0005b530))))))
            || ((*(int *)(this + 0xf4) != DAT_0005b53c || *(int *)(this + 0xf0) != DAT_0005b538 ||
                (*(int *)(this + 0xfc) != DAT_0005b544 || *(int *)(this + 0xf8) != DAT_0005b540))))
           || (*(int *)(this + 0x104) != 0 || *(int *)(this + 0x100) != 0x43b000))
        goto LAB_0005b1fe;
        iVar19 = 2;
        *(undefined4 *)(this + 0x1e60) = 2;
      }
LAB_00057ef2:
      if ((iVar18 != 4) || (iVar19 == 10)) goto LAB_000563b0;
      CVar3 = (CDsp2)0x0;
    }
    else {
      CVar3 = (CDsp2)0x0;
      *(undefined4 *)(this + 0x1e54) = 2;
    }
LAB_000563b4:
    local_64 = this + 0x1e40;
    pCVar9 = this + 0x1e60;
    iVar18 = *(int *)(this + 0x11b0);
    iVar19 = *(int *)(this + 0x11b4);
    if (iVar19 == DAT_0005715c && iVar18 == DAT_00057158) {
      if ((((((*(int *)(this + 0x11bc) == DAT_00057164 && *(int *)(this + 0x11b8) == DAT_00057160)
             && (*(int *)(this + 0x11c4) == DAT_0005716c && *(int *)(this + 0x11c0) == DAT_00057168)
             ) && (*(int *)(this + 0x11cc) == DAT_00057174 &&
                   *(int *)(this + 0x11c8) == DAT_00057170)) &&
           ((*(int *)(this + 0x11d4) == DAT_0005717c && *(int *)(this + 0x11d0) == DAT_00057178 &&
            (*(int *)(this + 0x11dc) == DAT_00057184 && *(int *)(this + 0x11d8) == DAT_00057180))))
          && ((*(int *)(this + 0x11e4) == DAT_0005718c && *(int *)(this + 0x11e0) == DAT_00057188 &&
              ((*(int *)(this + 0x11ec) == DAT_00057194 && *(int *)(this + 0x11e8) == DAT_00057190
               && (*(int *)(this + 0x11f4) == DAT_0005719c &&
                   *(int *)(this + 0x11f0) == DAT_00057198)))))) &&
         (*(int *)(this + 0x11fc) == DAT_000571a4 && *(int *)(this + 0x11f8) == DAT_000571a0)) {
        *(undefined4 *)(this + 0x1e68) = 0;
        goto LAB_000564a2;
      }
LAB_0005a59c:
      if (iVar19 != 0xf5 || iVar18 != -0x4f7d0000) goto LAB_0005a798;
      if (((((*(int *)(this + 0x11bc) != 0xf6 || *(int *)(this + 0x11b8) != -0x4f7d0000) ||
            (*(int *)(this + 0x11c4) != 0xf7 || *(int *)(this + 0x11c0) != -0x4f7d0000)) ||
           (*(int *)(this + 0x11cc) != 0xf8 || *(int *)(this + 0x11c8) != -0x4f7d0000)) ||
          (((*(int *)(this + 0x11d4) != 0x79 || *(int *)(this + 0x11d0) != -0x4f7d0000 ||
            (*(int *)(this + 0x11dc) != 0x7a || *(int *)(this + 0x11d8) != -0x4f7d0000)) ||
           ((*(int *)(this + 0x11e4) != 0x7b || *(int *)(this + 0x11e0) != -0x4f7d0000 ||
            ((*(int *)(this + 0x11ec) != 0x7c || *(int *)(this + 0x11e8) != -0x4f7d0000 ||
             (*(int *)(this + 0x11f4) != 0x7d || *(int *)(this + 0x11f0) != -0x4f7d0000)))))))) ||
         (*(int *)(this + 0x11fc) != 0x7e || *(int *)(this + 0x11f8) != -0x4f7d0000))
      goto LAB_0005a78a;
      *(undefined4 *)(this + 0x1e68) = 3;
    }
    else {
      if (iVar19 != 0x143 || iVar18 != -0x4f7d0000) goto LAB_0005a59c;
      if (((((*(int *)(this + 0x11bc) == 0x144 && *(int *)(this + 0x11b8) == -0x4f7d0000) &&
            (*(int *)(this + 0x11c4) == 0x145 && *(int *)(this + 0x11c0) == -0x4f7d0000)) &&
           (*(int *)(this + 0x11cc) == 0x146 && *(int *)(this + 0x11c8) == -0x4f7d0000)) &&
          (((*(int *)(this + 0x11d4) == 0x147 && *(int *)(this + 0x11d0) == -0x4f7d0000 &&
            (*(int *)(this + 0x11dc) == 0x148 && *(int *)(this + 0x11d8) == -0x4f7d0000)) &&
           ((*(int *)(this + 0x11e4) == 0x149 && *(int *)(this + 0x11e0) == -0x4f7d0000 &&
            ((*(int *)(this + 0x11ec) == 0x14a && *(int *)(this + 0x11e8) == -0x4f7d0000 &&
             (*(int *)(this + 0x11f4) == 0xb4b && *(int *)(this + 0x11f0) == -0x4f7d0000)))))))) &&
         (*(int *)(this + 0x11fc) == 0x164 && *(int *)(this + 0x11f8) == -0xfac8000)) {
        *(undefined4 *)(this + 0x1e68) = 1;
        goto LAB_000564a2;
      }
      if (((((*(int *)(this + 0x11bc) == 0x144 && *(int *)(this + 0x11b8) == -0x4f7d0000) &&
            (*(int *)(this + 0x11c4) == 0x145 && *(int *)(this + 0x11c0) == -0x4f7d0000)) &&
           (*(int *)(this + 0x11cc) == 0x146 && *(int *)(this + 0x11c8) == -0x4f7d0000)) &&
          ((*(int *)(this + 0x11d4) == 0x147 && *(int *)(this + 0x11d0) == -0x4f7d0000 &&
           (*(int *)(this + 0x11dc) == 0x148 && *(int *)(this + 0x11d8) == -0x4f7d0000)))) &&
         (((*(int *)(this + 0x11e4) == 0x149 && *(int *)(this + 0x11e0) == -0x4f7d0000 &&
           ((*(int *)(this + 0x11ec) == 0x14a && *(int *)(this + 0x11e8) == -0x4f7d0000 &&
            (*(int *)(this + 0x11f4) == 0x14b && *(int *)(this + 0x11f0) == -0x4f7d0000)))) &&
          (*(int *)(this + 0x11fc) == 0x164 && *(int *)(this + 0x11f8) == -0xfad0000)))) {
        *(undefined4 *)(this + 0x1e68) = 2;
        goto LAB_000564a2;
      }
LAB_0005a798:
      if ((((iVar19 == 0x13a && iVar18 == -0x5f7d0000) &&
           (*(int *)(this + 0x11bc) == 0x13d && *(int *)(this + 0x11b8) == -0x5f7d0000)) &&
          (*(int *)(this + 0x11c4) == DAT_0005b4ec && *(int *)(this + 0x11c0) == DAT_0005b4e8)) &&
         ((((*(int *)(this + 0x11cc) == 0x137 && *(int *)(this + 0x11c8) == -0x5f7c8000 &&
            (*(int *)(this + 0x11d4) == 0x136 && *(int *)(this + 0x11d0) == -0x1fb50000)) &&
           ((*(int *)(this + 0x11dc) == DAT_0005b4f4 && *(int *)(this + 0x11d8) == DAT_0005b4f0 &&
            ((*(int *)(this + 0x11e4) == 0 && *(int *)(this + 0x11e0) == 0x20778000 &&
             (*(int *)(this + 0x11ec) == 0x13f && *(int *)(this + 0x11e8) == -0x5f7d0000)))))) &&
          ((*(int *)(this + 0x11f4) == 0x140 && *(int *)(this + 0x11f0) == -0x5f7d0000 &&
           (*(int *)(this + 0x11fc) == 0x141 && *(int *)(this + 0x11f8) == -0x5f7d0000)))))) {
        *(undefined4 *)(this + 0x1e68) = 4;
      }
      else {
LAB_0005a78a:
        *(undefined4 *)(this + 0x1e68) = 5;
        CVar3 = (CDsp2)0x0;
      }
    }
LAB_000564a2:
    if (*(int *)(this + 0x1514) == 0x19c && *(int *)(this + 0x1510) == -0x5f7c8000) {
      if (((((*(int *)(this + 0x151c) == 0x19b && *(int *)(this + 0x1518) == -0x5f7d0000) &&
            (*(int *)(this + 0x1524) == 0x19a && *(int *)(this + 0x1520) == -0x1f950000)) &&
           (*(int *)(this + 0x152c) == 0x19e && *(int *)(this + 0x1528) == -0x5f7d0000)) &&
          (((*(int *)(this + 0x1534) == DAT_000571ac && *(int *)(this + 0x1530) == DAT_000571a8 &&
            (*(int *)(this + 0x153c) == 0x1a0 && *(int *)(this + 0x1538) == -0x5f7c8000)) &&
           ((*(int *)(this + 0x1544) == 0x19f && *(int *)(this + 0x1540) == -0x5f7d0000 &&
            ((*(int *)(this + 0x154c) == 0x19e && *(int *)(this + 0x1548) == -0x1f950000 &&
             (*(int *)(this + 0x1554) == 0x1a7 && *(int *)(this + 0x1550) == -0x5f7d0000)))))))) &&
         (*(int *)(this + 0x155c) == DAT_000571b4 && *(int *)(this + 0x1558) == DAT_000571b0)) {
        *(undefined4 *)(this + 0x1e58) = 0;
        *(undefined4 *)(this + 0x1e64) = 0;
        goto LAB_000565a8;
      }
LAB_0005858a:
      *(undefined4 *)(this + 0x1e64) = 2;
      if (*(int *)(this + 0x1514) == 0x2b && *(int *)(this + 0x1510) == -0x5f7c8000) {
        if ((((*(int *)(this + 0x151c) == 0x2c && *(int *)(this + 0x1518) == -0x5f7d0000) &&
             (*(int *)(this + 0x1524) == 0x2d && *(int *)(this + 0x1520) == -0x5f7d0000)) &&
            (*(int *)(this + 0x152c) == 0x2e && *(int *)(this + 0x1528) == -0x5f7d0000)) &&
           (((*(int *)(this + 0x1534) == 0x29 && *(int *)(this + 0x1530) == -0x5f7d0000 &&
             (*(int *)(this + 0x153c) == 0x2a && *(int *)(this + 0x1538) == -0x5f7d0000)) &&
            (((*(int *)(this + 0x1544) == 0 && *(int *)(this + 0x1540) == 0x20270000 &&
              ((*(int *)(this + 0x154c) == DAT_00058bac && *(int *)(this + 0x1548) == DAT_00058ba8
               && (*(int *)(this + 0x1554) == DAT_00058bb4 &&
                   *(int *)(this + 0x1550) == DAT_00058bb0)))) &&
             (*(int *)(this + 0x155c) == 0x8607 && *(int *)(this + 0x1558) == -0x77ffffff)))))) {
          *(undefined4 *)(this + 0x1e58) = 1;
          goto LAB_000565a8;
        }
      }
      else if (*(int *)(this + 0x1514) == 0x1a5 && *(int *)(this + 0x1510) == -0x3f400000) {
        pCVar12 = (CDsp2 *)0xdec000;
        if (*(int *)(this + 0x151c) == 0x8000 && *(int *)(this + 0x1518) == 0xdec000) {
          pCVar12 = local_64;
        }
        if (*(int *)(this + 0x151c) == 0x8000 && *(int *)(this + 0x1518) == 0xdec000) {
          *(undefined4 *)(pCVar12 + 0x18) = 2;
          goto LAB_000565a8;
        }
      }
      CVar3 = (CDsp2)0x0;
      *(undefined4 *)(this + 0x1e58) = 3;
      this[4] = (CDsp2)0x0;
LAB_000565be:
      *(undefined4 *)(this + 8) = 0;
      local_4c = *(int *)(this + 0x1e68);
      iVar18 = *(int *)(this + 0x1e54);
    }
    else {
      if (((((((*(int *)(this + 0x1514) != 0x1a5 || *(int *)(this + 0x1510) != -0xf948000) ||
              (*(int *)(this + 0x151c) != 0x1a6 || *(int *)(this + 0x1518) != -0x4f7d0000)) ||
             (*(int *)(this + 0x1524) != 0x1a7 || *(int *)(this + 0x1520) != -0x4f7d0000)) ||
            ((*(int *)(this + 0x152c) != 0x1a8 || *(int *)(this + 0x1528) != -0x4f7d0000 ||
             (*(int *)(this + 0x1534) != 0x1a9 || *(int *)(this + 0x1530) != -0x4f7d0000)))) ||
           (*(int *)(this + 0x153c) != 0x1aa || *(int *)(this + 0x1538) != -0x4f7d0000)) ||
          ((*(int *)(this + 0x1544) != 0x1ab || *(int *)(this + 0x1540) != -0x4f7d0000 ||
           (*(int *)(this + 0x154c) != 0x1ac || *(int *)(this + 0x1548) != -0x4f7d0000)))) ||
         ((*(int *)(this + 0x1554) != 0x1ad || *(int *)(this + 0x1550) != -0x4f7d0000 ||
          (*(int *)(this + 0x155c) != 0x1ae || *(int *)(this + 0x1558) != -0x4f7d0000))))
      goto LAB_0005858a;
      *(undefined4 *)(this + 0x1e58) = 0;
      *(undefined4 *)(this + 0x1e64) = 1;
LAB_000565a8:
      this[4] = CVar3;
      if (!(bool)CVar3) goto LAB_000565be;
      if (this[5] == (CDsp2)0x0) {
        CVar3 = (CDsp2)0x1;
        goto LAB_000565be;
      }
      *(undefined4 *)(this + 8) = 1;
      iVar18 = 0;
      do {
        iVar19 = iVar18 + 0x60;
        *(undefined2 *)(this + iVar18 + 0x1e6e) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e76) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e7e) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e86) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e8e) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e96) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e9e) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1ea6) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1eae) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1eb6) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1ebe) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1ec6) = 0xffff;
        iVar18 = iVar19;
      } while (iVar19 != 0x1800);
      iVar18 = *(int *)(this + 0x1e54);
      if (iVar18 == 0) {
        *(undefined2 *)(this + 0x1ebe) = 0;
        *(undefined2 *)(this + 0x1ec0) = 0;
        *(undefined2 *)(this + 0x1ec2) = 0;
        *(undefined2 *)(this + 0x1ec8) = 0;
        *(undefined2 *)(this + 0x1eca) = 0;
        *(undefined2 *)(this + 0x1ec6) = 1;
        iVar19 = *(int *)pCVar9;
        if (iVar19 == 0) {
          uVar30 = 0x28;
          psVar10 = (short *)(DAT_0005a598 + 0x5a36c);
LAB_0005a212:
          sVar5 = *psVar10;
          uVar32 = uVar30 - 1 & 3;
          uVar39 = 1;
          iVar19 = 8;
          *(short *)(this + sVar5 * 8 + 0x1e6e) = psVar10[1];
          *(short *)(this + sVar5 * 8 + 0x1e70) = psVar10[2];
          *(short *)(this + sVar5 * 8 + 0x1e72) = psVar10[3];
          if (1 < uVar30) {
            if (uVar32 == 0) goto LAB_0005a2aa;
            if (uVar32 != 1) {
              iVar40 = iVar19;
              if (uVar32 != 2) {
                uVar39 = 2;
                sVar5 = psVar10[4];
                iVar40 = 0x10;
                *(short *)(this + sVar5 * 8 + 0x1e6e) = psVar10[5];
                *(short *)(this + sVar5 * 8 + 0x1e70) = psVar10[6];
                *(short *)(this + sVar5 * 8 + 0x1e72) = psVar10[7];
              }
              sVar5 = *(short *)((int)psVar10 + iVar40);
              uVar39 = uVar39 + 1;
              iVar19 = iVar40 + 8;
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 2);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 4);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 6);
            }
            iVar7 = (int)psVar10 + iVar19;
            sVar5 = *(short *)((int)psVar10 + iVar19);
            uVar39 = uVar39 + 1;
            iVar40 = iVar19 + 8;
            uVar36 = *(undefined2 *)(iVar7 + 2);
            while( true ) {
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = uVar36;
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
              iVar19 = iVar40;
              if (uVar30 <= uVar39) break;
LAB_0005a2aa:
              sVar5 = *(short *)((int)psVar10 + iVar19);
              uVar39 = uVar39 + 4;
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 2);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 4);
              iVar40 = iVar19 + 0x20;
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 6);
              sVar5 = *(short *)((int)psVar10 + iVar19 + 8);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 10);
              iVar7 = (int)psVar10 + iVar19 + 0x18;
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 0xc);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 0xe);
              sVar5 = *(short *)((int)psVar10 + iVar19 + 0x10);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 0x12);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 0x14);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 0x16);
              sVar5 = *(short *)((int)psVar10 + iVar19 + 0x18);
              uVar36 = *(undefined2 *)(iVar7 + 2);
            }
          }
        }
        else {
          if (iVar19 == 1) {
            uVar30 = 0x2d;
            psVar10 = (short *)(DAT_0005a594 + 0x5a4a0);
            goto LAB_0005a212;
          }
          if (iVar19 == 2) {
            uVar30 = 0x25;
            psVar10 = (short *)(DAT_0005a590 + 0x5a5fc);
            goto LAB_0005a212;
          }
          if (iVar19 == 3) {
            uVar30 = 0x24;
            psVar10 = (short *)(DAT_0005a58c + 0x5a5e0);
            goto LAB_0005a212;
          }
          if (iVar19 == 4) {
            uVar30 = 0x35;
            psVar10 = (short *)(DAT_0005b584 + 0x5b27e);
            goto LAB_0005a212;
          }
          if (iVar19 == 5) {
            uVar30 = 0x28;
            psVar10 = (short *)(DAT_0005b580 + 0x5b416);
            goto LAB_0005a212;
          }
          if (iVar19 == 6) {
            uVar30 = 0x30;
            psVar10 = (short *)((int)&DAT_0005b544 + DAT_0005b57c + 2);
            goto LAB_0005a212;
          }
          if (iVar19 == 7) {
            uVar30 = 0x20;
            psVar10 = (short *)(DAT_0005b578 + 0x5b6b6);
            goto LAB_0005a212;
          }
        }
        *(undefined2 *)(this + 0x2206) = 2;
        *(undefined2 *)(this + 0x220e) = 3;
        *(undefined2 *)(this + 0x2216) = 4;
        *(undefined2 *)(this + 0x2208) = 0;
        *(undefined2 *)(this + 0x220a) = 0;
        *(undefined2 *)(this + 0x2210) = 0;
        *(undefined2 *)(this + 0x2212) = 0;
        *(undefined2 *)(this + 0x2218) = 0;
        *(undefined2 *)(this + 0x221a) = 0;
        if (*(int *)(this + 0x1e5c) == 0) {
          uVar30 = 0x35;
          psVar10 = (short *)(DAT_00058bc8 + 0x58a94);
        }
        else {
          if (*(int *)(this + 0x1e5c) != 1) goto LAB_0005817c;
          uVar30 = 0x18;
          psVar10 = (short *)(DAT_0005a578 + 0x5a5d2);
        }
        sVar5 = *psVar10;
        uVar39 = 1;
        iVar19 = 8;
        uVar32 = uVar30 - 1 & 3;
        *(short *)(this + sVar5 * 8 + 0x1e6e) = psVar10[1];
        *(short *)(this + sVar5 * 8 + 0x1e70) = psVar10[2];
        *(short *)(this + sVar5 * 8 + 0x1e72) = psVar10[3];
        if (1 < uVar30) {
          if (uVar32 == 0) goto LAB_000580dc;
          if (uVar32 != 1) {
            iVar40 = iVar19;
            if (uVar32 != 2) {
              uVar39 = 2;
              sVar5 = psVar10[4];
              iVar40 = 0x10;
              *(short *)(this + sVar5 * 8 + 0x1e6e) = psVar10[5];
              *(short *)(this + sVar5 * 8 + 0x1e70) = psVar10[6];
              *(short *)(this + sVar5 * 8 + 0x1e72) = psVar10[7];
            }
            sVar5 = *(short *)((int)psVar10 + iVar40);
            uVar39 = uVar39 + 1;
            iVar19 = iVar40 + 8;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar40 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)((int)psVar10 + iVar40 + 4);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)((int)psVar10 + iVar40 + 6);
          }
          iVar7 = (int)psVar10 + iVar19;
          sVar5 = *(short *)((int)psVar10 + iVar19);
          uVar39 = uVar39 + 1;
          iVar40 = iVar19 + 8;
          uVar36 = *(undefined2 *)(iVar7 + 2);
          while( true ) {
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = uVar36;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            iVar19 = iVar40;
            if (uVar30 <= uVar39) break;
LAB_000580dc:
            sVar5 = *(short *)((int)psVar10 + iVar19);
            uVar39 = uVar39 + 4;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)((int)psVar10 + iVar19 + 4);
            iVar40 = iVar19 + 0x20;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)((int)psVar10 + iVar19 + 6);
            sVar5 = *(short *)((int)psVar10 + iVar19 + 8);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 10)
            ;
            iVar7 = (int)psVar10 + iVar19 + 0x18;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0xc);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0xe);
            sVar5 = *(short *)((int)psVar10 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x12);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x14);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x16);
            sVar5 = *(short *)((int)psVar10 + iVar19 + 0x18);
            uVar36 = *(undefined2 *)(iVar7 + 2);
          }
        }
      }
      else if (iVar18 == 1) {
        *(undefined2 *)(this + 0x1f3e) = 0x2be;
        *(undefined2 *)(this + 0x1f46) = 0x2bd;
        *(undefined2 *)(this + 0x1f4e) = 0x2c0;
        *(undefined2 *)(this + 0x1f56) = 0x2bf;
        *(undefined2 *)(this + 0x1f5e) = 0x2c2;
        *(undefined2 *)(this + 8000) = 0;
        *(undefined2 *)(this + 0x1f42) = 0;
        *(undefined2 *)(this + 0x1f48) = 0;
        *(undefined2 *)(this + 0x1f4a) = 0;
        *(undefined2 *)(this + 0x1f50) = 0;
        *(undefined2 *)(this + 0x1f52) = 0;
        *(undefined2 *)(this + 0x1f58) = 0;
        *(undefined2 *)(this + 0x1f5a) = 0;
        *(undefined2 *)(this + 0x1f66) = 0x2c1;
        *(undefined2 *)(this + 0x1f6e) = 0x2c4;
        *(undefined2 *)(this + 0x1f76) = 0x2c3;
        *(undefined2 *)(this + 0x1f7e) = 0x2c6;
        *(undefined2 *)(this + 0x1f60) = 0;
        *(undefined2 *)(this + 0x1f62) = 0;
        *(undefined2 *)(this + 0x1f68) = 0;
        *(undefined2 *)(this + 0x1f6a) = 0;
        *(undefined2 *)(this + 0x1f70) = 0;
        *(undefined2 *)(this + 0x1f72) = 0;
        *(undefined2 *)(this + 0x1f78) = 0;
        *(undefined2 *)(this + 0x1f7a) = 0;
        *(undefined2 *)(this + 0x1f86) = 0x2c5;
        *(undefined2 *)(this + 0x1f8e) = 0x2c8;
        *(undefined2 *)(this + 0x1f80) = 0;
        *(undefined2 *)(this + 0x1f82) = 0;
        *(undefined2 *)(this + 0x1f88) = 0;
        *(undefined2 *)(this + 0x1f8a) = 0;
        *(undefined2 *)(this + 0x1f90) = 0;
        *(undefined2 *)(this + 0x1f92) = 0;
        *(undefined2 *)(this + 0x1f96) = 0x2c7;
        *(undefined2 *)(this + 0x1f98) = 0;
        *(undefined2 *)(this + 0x1f9a) = 0;
        *(undefined2 *)(this + 0x209e) = 0x2cc;
        *(undefined2 *)(this + 0x20a6) = 0x2cb;
        *(undefined2 *)(this + 0x20ae) = 0x2ca;
        *(undefined2 *)(this + 0x20b6) = 0x2c9;
        *(undefined2 *)(this + 0x20be) = 0x2ce;
        *(undefined2 *)(this + 0x20a0) = 0;
        *(undefined2 *)(this + 0x20a2) = 0;
        *(undefined2 *)(this + 0x20a8) = 0;
        *(undefined2 *)(this + 0x20aa) = 0;
        *(undefined2 *)(this + 0x20b0) = 0;
        *(undefined2 *)(this + 0x20b2) = 0;
        *(undefined2 *)(this + 0x20b8) = 0;
        *(undefined2 *)(this + 0x20ba) = 0;
        *(undefined2 *)(this + 0x20c6) = 0x2cd;
        *(undefined2 *)(this + 0x20ce) = 0x2d3;
        *(undefined2 *)(this + 0x20ee) = 0x2d7;
        *(undefined2 *)(this + 0x20d6) = 0x2d4;
        *(undefined2 *)(this + 0x20de) = 0x2d5;
        *(undefined2 *)(this + 0x20e6) = 0x2d6;
        *(undefined2 *)(this + 0x20c0) = 0;
        *(undefined2 *)(this + 0x20c2) = 0;
        *(undefined2 *)(this + 0x20c8) = 0;
        *(undefined2 *)(this + 0x20ca) = 0;
        *(undefined2 *)(this + 0x20d0) = 0;
        *(undefined2 *)(this + 0x20d2) = 0;
        *(undefined2 *)(this + 0x20d8) = 0;
        *(undefined2 *)(this + 0x20da) = 0;
        *(undefined2 *)(this + 0x20e0) = 0;
        *(undefined2 *)(this + 0x20e2) = 0;
        *(undefined2 *)(this + 0x20e8) = 0;
        *(undefined2 *)(this + 0x20ea) = 0;
        *(undefined2 *)(this + 0x20f0) = 0;
        *(undefined2 *)(this + 0x20f6) = 0x2d8;
        *(undefined2 *)(this + 0x20fe) = 0x2cf;
        *(undefined2 *)(this + 0x20f2) = 0;
        *(undefined2 *)(this + 0x20f8) = 0;
        *(undefined2 *)(this + 0x20fa) = 0;
        *(undefined2 *)(this + 0x2136) = 0x2da;
        *(undefined2 *)(this + 0x2106) = 0x2d0;
        *(undefined2 *)(this + 0x212e) = 0x2d9;
        *(undefined2 *)(this + 0x213e) = 0x2d1;
        *(undefined2 *)(this + 0x2100) = 0;
        *(undefined2 *)(this + 0x2102) = 0;
        *(undefined2 *)(this + 0x2108) = 0;
        *(undefined2 *)(this + 0x210a) = 0;
        *(undefined2 *)(this + 0x2130) = 0;
        *(undefined2 *)(this + 0x2132) = 0;
        *(undefined2 *)(this + 0x2138) = 0;
        *(undefined2 *)(this + 0x213a) = 0;
        *(undefined2 *)(this + 0x2146) = 0x2d2;
        *(undefined2 *)(this + 0x2156) = 0x2db;
        *(undefined2 *)(this + 0x215e) = 0x2dc;
        *(undefined2 *)(this + 0x2166) = 0x2de;
        *(undefined2 *)(this + 0x2140) = 0;
        *(undefined2 *)(this + 0x2142) = 0;
        *(undefined2 *)(this + 0x2148) = 0;
        *(undefined2 *)(this + 0x214a) = 0;
        *(undefined2 *)(this + 0x2158) = 0;
        *(undefined2 *)(this + 0x215a) = 0;
        *(undefined2 *)(this + 0x2160) = 0;
        *(undefined2 *)(this + 0x2162) = 0;
        *(undefined2 *)(this + 0x2168) = 0;
        *(undefined2 *)(this + 0x216a) = 0;
        *(undefined2 *)(this + 0x2170) = 0;
        *(undefined2 *)(this + 0x216e) = 0x2dd;
        *(undefined2 *)(this + 0x2172) = 0;
        *(undefined2 *)(this + 0x2178) = 0;
        *(undefined2 *)(this + 0x217a) = 0;
        *(undefined2 *)(this + 0x2176) = 0x2df;
        *(undefined2 *)(this + 0x217e) = 0x2e1;
        *(undefined2 *)(this + 0x2180) = 0;
        *(undefined2 *)(this + 0x2182) = 0;
        *(undefined2 *)(this + 0x2188) = 0;
        *(undefined2 *)(this + 0x218a) = 0;
        *(undefined2 *)(this + 0x2190) = 0;
        *(undefined2 *)(this + 0x2192) = 0;
        *(undefined2 *)(this + 0x2198) = 0;
        *(undefined2 *)(this + 0x219a) = 0;
        *(undefined2 *)(this + 0x21a0) = 0;
        *(undefined2 *)(this + 0x21a2) = 0;
        *(undefined2 *)(this + 0x21a8) = 0;
        *(undefined2 *)(this + 0x21aa) = 0;
        *(undefined2 *)(this + 0x2186) = 0x2e0;
        *(undefined2 *)(this + 0x218e) = 0x2e2;
        *(undefined2 *)(this + 0x2196) = 0x2e4;
        *(undefined2 *)(this + 0x219e) = 0x2e3;
        *(undefined2 *)(this + 0x21a6) = 0x2e5;
      }
LAB_0005817c:
      *(undefined2 *)(this + 0x24fe) = 0xe;
      *(undefined2 *)(this + 0x24f8) = 0;
      *(undefined2 *)(this + 0x24f6) = 0xd;
      *(undefined2 *)(this + 0x24fa) = 0;
      *(undefined2 *)(this + 0x2506) = 0xf;
      *(undefined2 *)(this + 0x250e) = 0x10;
      *(undefined2 *)(this + 0x253e) = 9;
      *(undefined2 *)(this + 0x2500) = 0;
      *(undefined2 *)(this + 0x2502) = 0;
      *(undefined2 *)(this + 0x2508) = 0;
      *(undefined2 *)(this + 0x250a) = 0;
      *(undefined2 *)(this + 0x2510) = 0;
      *(undefined2 *)(this + 0x2512) = 0;
      *(undefined2 *)(this + 0x2556) = 10;
      *(undefined2 *)(this + 0x255e) = 0xb;
      *(undefined2 *)(this + 0x2540) = 0;
      *(undefined2 *)(this + 0x2542) = 0;
      *(undefined2 *)(this + 0x2558) = 0;
      *(undefined2 *)(this + 0x255a) = 0;
      *(undefined2 *)(this + 0x2560) = 0;
      *(undefined2 *)(this + 0x2562) = 0;
      *(undefined2 *)(this + 0x2588) = 0;
      *(undefined2 *)(this + 0x258a) = 0;
      *(undefined2 *)(this + 0x2590) = 0;
      *(undefined2 *)(this + 0x2592) = 0;
      *(undefined2 *)(this + 0x2598) = 0;
      *(undefined2 *)(this + 0x259a) = 0;
      *(undefined2 *)(this + 0x25b0) = 0;
      *(undefined2 *)(this + 0x25b2) = 0;
      *(undefined2 *)(this + 0x2586) = 0x13;
      *(undefined2 *)(this + 0x258e) = 0x14;
      *(undefined2 *)(this + 0x2596) = 0x15;
      *(undefined2 *)(this + 0x25ae) = 0xc;
      *(undefined2 *)(this + 0x25b6) = 0x16;
      *(undefined2 *)(this + 0x25b8) = 0;
      *(undefined2 *)(this + 0x25ba) = 0;
      *(undefined2 *)(this + 0x25be) = 7;
      *(undefined2 *)(this + 0x25c0) = 0;
      *(undefined2 *)(this + 0x25c2) = 0;
      *(undefined2 *)(this + 0x25c8) = 0;
      *(undefined2 *)(this + 0x25ca) = 0;
      *(undefined2 *)(this + 0x25d0) = 0;
      *(undefined2 *)(this + 0x25d2) = 0;
      *(undefined2 *)(this + 0x25d8) = 0;
      *(undefined2 *)(this + 0x25da) = 0;
      *(undefined2 *)(this + 0x25c6) = 0x11;
      *(undefined2 *)(this + 0x25ce) = 8;
      *(undefined2 *)(this + 0x25d6) = 0x12;
      local_4c = *(int *)(this + 0x1e68);
      if (local_4c == 3) {
        *(undefined2 *)(this + 0x327e) = 0x1c1;
        *(undefined2 *)(this + 0x3280) = 0;
        *(undefined2 *)(this + 0x3282) = 0;
        *(undefined2 *)(this + 0x3288) = 0;
        *(undefined2 *)(this + 0x328a) = 0;
        *(undefined2 *)(this + 0x3290) = 0;
        *(undefined2 *)(this + 0x3292) = 0;
        *(undefined2 *)(this + 0x3298) = 0;
        *(undefined2 *)(this + 0x329a) = 0;
        *(undefined2 *)(this + 0x32a0) = 0;
        *(undefined2 *)(this + 0x32a2) = 0;
        *(undefined2 *)(this + 0x32b8) = 0;
        *(undefined2 *)(this + 0x32ba) = 0;
        *(undefined2 *)(this + 0x3286) = 0x1bf;
        *(undefined2 *)(this + 0x328e) = 0x1bd;
        *(undefined2 *)(this + 0x32b6) = 0x1c2;
        *(undefined2 *)(this + 0x32be) = 0x1c0;
        *(undefined2 *)(this + 0x3296) = 0x1bb;
        *(undefined2 *)(this + 0x329e) = 5;
        *(undefined2 *)(this + 0x32c0) = 0;
        *(undefined2 *)(this + 0x32c2) = 0;
        *(undefined2 *)(this + 13000) = 0;
        *(undefined2 *)(this + 0x32ca) = 0;
        *(undefined2 *)(this + 0x32d0) = 0;
        *(undefined2 *)(this + 0x32d2) = 0;
        *(undefined2 *)(this + 0x32d8) = 0;
        *(undefined2 *)(this + 0x32da) = 0;
        *(undefined2 *)(this + 0x32c6) = 0x1be;
        *(undefined2 *)(this + 0x32ce) = 0x1bc;
        *(undefined2 *)(this + 0x32d6) = 6;
      }
      else {
        iVar40 = DAT_00058bcc + 0x5829c;
        iVar19 = 0;
        do {
          sVar33 = *(short *)(iVar40 + iVar19);
          iVar7 = iVar40 + iVar19;
          iVar31 = iVar19 + 0x20;
          sVar5 = *(short *)(iVar40 + iVar19 + 8);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
          iVar8 = iVar40 + iVar19 + 8;
          *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
          iVar15 = iVar40 + iVar19 + 0x10;
          sVar33 = *(short *)(iVar40 + iVar19 + 0x10);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 2);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 4);
          iVar7 = iVar40 + iVar19 + 0x18;
          sVar34 = *(short *)(iVar40 + iVar19 + 0x18);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 6);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar15 + 2);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar15 + 4);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar15 + 6);
          *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
          *(undefined2 *)(this + sVar34 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
          *(undefined2 *)(this + sVar34 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
          iVar8 = DAT_0005b56c;
          iVar7 = DAT_0005b568;
          iVar19 = iVar31;
        } while (iVar31 != 0x640);
        if (local_4c == 0) {
          iVar40 = DAT_00058bd0 + 0x58974;
          iVar19 = 0;
          do {
            sVar33 = *(short *)(iVar40 + iVar19);
            iVar7 = iVar40 + iVar19;
            sVar5 = *(short *)(iVar40 + iVar19 + 8);
            iVar8 = iVar40 + iVar19 + 8;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            iVar7 = iVar40 + iVar19 + 0x10;
            sVar34 = *(short *)(iVar40 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 4);
            iVar15 = iVar40 + iVar19 + 0x18;
            sVar33 = *(short *)(iVar40 + iVar19 + 0x18);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 6);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            iVar8 = iVar40 + iVar19 + 0x20;
            sVar5 = *(short *)(iVar40 + iVar19 + 0x20);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            iVar31 = iVar19 + 0x28;
            iVar19 = iVar19 + 0x30;
            *(undefined2 *)(this + sVar34 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar15 + 2);
            iVar7 = iVar40 + iVar31;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar15 + 4);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar15 + 6);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 4);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 6);
            sVar5 = *(short *)(iVar40 + iVar31);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
          } while (iVar19 != 0x1b0);
        }
        else if (local_4c == 1) {
          psVar10 = (short *)(DAT_0005b56c + 0x5b186);
          sVar5 = *psVar10;
          sVar33 = *(short *)(DAT_0005b56c + 0x5b18e);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(DAT_0005b56c + 0x5b188);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 0x5b18a);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 0x5b18c);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 0x5b190);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 0x5b192);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 0x5b194);
          iVar19 = 0x10;
          do {
            sVar33 = *(short *)((int)psVar10 + iVar19);
            iVar40 = iVar19 + 0x20;
            sVar5 = *(short *)((int)psVar10 + iVar19 + 8);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 2)
            ;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)((int)psVar10 + iVar19 + 4)
            ;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)((int)psVar10 + iVar19 + 6)
            ;
            sVar33 = *(short *)((int)psVar10 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 10)
            ;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0xc);
            sVar34 = *(short *)((int)psVar10 + iVar19 + 0x18);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0xe);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x12);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x14);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x16);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1a);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1c);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1e);
            iVar19 = iVar40;
          } while (iVar40 != 0x310);
        }
        else if (local_4c == 2) {
          psVar10 = (short *)(DAT_0005b568 + 0x5b3c4);
          sVar5 = *psVar10;
          sVar33 = *(short *)(DAT_0005b568 + 0x5b3cc);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(DAT_0005b568 + 0x5b3c6);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 0x5b3c8);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 0x5b3ca);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 0x5b3ce);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 0x5b3d0);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 0x5b3d2);
          iVar19 = 0x10;
          do {
            sVar33 = *(short *)((int)psVar10 + iVar19);
            iVar40 = iVar19 + 0x20;
            sVar5 = *(short *)((int)psVar10 + iVar19 + 8);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 2)
            ;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)((int)psVar10 + iVar19 + 4)
            ;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)((int)psVar10 + iVar19 + 6)
            ;
            sVar33 = *(short *)((int)psVar10 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 10)
            ;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0xc);
            sVar34 = *(short *)((int)psVar10 + iVar19 + 0x18);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0xe);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x12);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x14);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x16);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1a);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1c);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1e);
            iVar19 = iVar40;
          } while (iVar40 != 0x310);
        }
        else if (local_4c == 4) {
          *(undefined2 *)(this + 0x2fde) = 0x4a0;
          *(undefined2 *)(this + 0x2fe6) = 0x4a2;
          *(undefined2 *)(this + 0x2fd6) = 0x4a1;
          *(undefined2 *)(this + 0x2fe0) = 2;
          *(undefined2 *)(this + 0x2fd8) = 2;
          *(undefined2 *)(this + 0x2fe8) = 2;
          *(undefined2 *)(this + 0x2fe2) = 0;
          *(undefined2 *)(this + 0x2fda) = 0;
          *(undefined2 *)(this + 0x2fea) = 0;
          *(undefined2 *)(this + 0x301e) = 0x4a3;
          *(undefined2 *)(this + 0x3016) = 0x4a4;
          *(undefined2 *)(this + 0x3026) = 0x4a5;
          *(undefined2 *)(this + 0x3020) = 2;
          *(undefined2 *)(this + 0x3022) = 0;
          *(undefined2 *)(this + 0x3018) = 2;
          *(undefined2 *)(this + 0x301a) = 0;
          *(undefined2 *)(this + 0x3028) = 2;
          *(undefined2 *)(this + 0x302a) = 0;
          *(undefined2 *)(this + 0x2fb0) = 2;
          *(undefined2 *)(this + 0x2fb2) = 0;
          *(undefined2 *)(this + 0x2fb8) = 2;
          *(undefined2 *)(this + 0x2fba) = 0;
          *(undefined2 *)(this + 0x2fae) = 0x4a6;
          *(undefined2 *)(this + 0x2fb6) = 0x4a7;
          *(undefined2 *)(this + 0x2fbe) = 0x4a8;
          *(undefined2 *)(this + 0x2fc0) = 2;
          *(undefined2 *)(this + 0x2fc2) = 0;
          *(undefined2 *)(this + 0x2fc8) = 2;
          *(undefined2 *)(this + 0x2fca) = 0;
          *(undefined2 *)(this + 0x2fd0) = 2;
          *(undefined2 *)(this + 0x2fd2) = 0;
          *(undefined2 *)(this + 0x2fc6) = 0x4a9;
          *(undefined2 *)(this + 0x2fce) = 0x4aa;
          *(undefined2 *)(this + 0x2fee) = 0x4ab;
          *(undefined2 *)(this + 0x2ff0) = 2;
          *(undefined2 *)(this + 0x2ff2) = 0;
          *(undefined2 *)(this + 0x2ff8) = 2;
          *(undefined2 *)(this + 0x2ffa) = 0;
          *(undefined2 *)(this + 0x2ff6) = 0x4ac;
          *(undefined2 *)(this + 0x2ffe) = 0x4ad;
          *(undefined2 *)(this + 0x3006) = 0x4ae;
          *(undefined2 *)(this + 0x300e) = 0x4af;
          *(undefined2 *)(this + 0x302e) = 0x4b0;
          *(undefined2 *)(this + 0x303e) = 0x4b2;
          *(undefined2 *)(this + 0x3002) = 0;
          *(undefined2 *)(this + 0x3008) = 2;
          *(undefined2 *)(this + 0x300a) = 0;
          *(undefined2 *)(this + 0x3010) = 2;
          *(undefined2 *)(this + 0x3012) = 0;
          *(undefined2 *)(this + 0x3000) = 2;
          *(undefined2 *)(this + 0x3030) = 2;
          *(undefined2 *)(this + 0x3032) = 0;
          *(undefined2 *)(this + 0x3038) = 2;
          *(undefined2 *)(this + 0x303a) = 0;
          *(undefined2 *)(this + 0x3036) = 0x4b1;
          *(undefined2 *)(this + 0x3040) = 2;
          *(undefined2 *)(this + 0x3042) = 0;
          *(undefined2 *)(this + 0x3048) = 2;
          *(undefined2 *)(this + 0x304a) = 0;
          *(undefined2 *)(this + 0x3050) = 2;
          *(undefined2 *)(this + 0x3052) = 0;
          *(undefined2 *)(this + 0x3058) = 2;
          *(undefined2 *)(this + 0x305a) = 0;
          *(undefined2 *)(this + 0x3046) = 0x4b3;
          *(undefined2 *)(this + 0x304e) = 0x4b4;
          *(undefined2 *)(this + 0x3056) = 0x4b5;
          *(undefined2 *)(this + 0x3060) = 2;
          *(undefined2 *)(this + 0x3068) = 2;
          *(undefined2 *)(this + 0x3070) = 2;
          *(undefined2 *)(this + 0x3078) = 2;
          *(undefined2 *)(this + 0x307e) = 0x4ba;
          *(undefined2 *)(this + 0x305e) = 0x4b6;
          *(undefined2 *)(this + 0x3062) = 0;
          *(undefined2 *)(this + 0x306a) = 0;
          *(undefined2 *)(this + 0x3072) = 0;
          *(undefined2 *)(this + 0x307a) = 0;
          *(undefined2 *)(this + 0x3066) = 0x4b7;
          *(undefined2 *)(this + 0x306e) = 0x4b8;
          *(undefined2 *)(this + 0x3076) = 0x4b9;
          *(undefined2 *)(this + 0x3082) = 0;
          *(undefined2 *)(this + 0x308a) = 0;
          *(undefined2 *)(this + 0x3092) = 0;
          *(undefined2 *)(this + 0x30aa) = 0;
          *(undefined2 *)(this + 0x30b2) = 0;
          *(undefined2 *)(this + 0x30ba) = 0;
          *(undefined2 *)(this + 0x3086) = 0x4bb;
          *(undefined2 *)(this + 0x308e) = 0x4bc;
          *(undefined2 *)(this + 0x30a6) = 0x4bd;
          *(undefined2 *)(this + 0x30ae) = 0x4be;
          *(undefined2 *)(this + 0x30b6) = 0x4bf;
          *(undefined2 *)(this + 0x3080) = 1;
          *(undefined2 *)(this + 0x3088) = 1;
          *(undefined2 *)(this + 0x3090) = 1;
          *(undefined2 *)(this + 0x30a8) = 1;
          *(undefined2 *)(this + 0x30b0) = 1;
          *(undefined2 *)(this + 0x30b8) = 1;
        }
      }
      if (*(int *)(this + 0x1e58) == 0) {
        if (*(int *)(this + 0x1e64) == 0) {
          iVar40 = DAT_0005a57c + 0x5a8b8;
          iVar19 = 0;
          do {
            sVar33 = *(short *)(iVar40 + iVar19);
            iVar7 = iVar40 + iVar19;
            iVar31 = iVar19 + 0x20;
            sVar5 = *(short *)(iVar40 + iVar19 + 8);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            iVar8 = iVar40 + iVar19 + 8;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            iVar15 = iVar40 + iVar19 + 0x10;
            sVar33 = *(short *)(iVar40 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 4);
            iVar7 = iVar40 + iVar19 + 0x18;
            sVar34 = *(short *)(iVar40 + iVar19 + 0x18);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 6);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar15 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar15 + 4);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar15 + 6);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            iVar19 = iVar31;
          } while (iVar31 != 0x2a0);
        }
        else {
          iVar40 = DAT_0005b570 + 0x5aa20;
          iVar19 = 0;
          do {
            sVar33 = *(short *)(iVar40 + iVar19);
            iVar7 = iVar40 + iVar19;
            iVar31 = iVar19 + 0x20;
            sVar5 = *(short *)(iVar40 + iVar19 + 8);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            iVar8 = iVar40 + iVar19 + 8;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            iVar15 = iVar40 + iVar19 + 0x10;
            sVar33 = *(short *)(iVar40 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 4);
            iVar7 = iVar40 + iVar19 + 0x18;
            sVar34 = *(short *)(iVar40 + iVar19 + 0x18);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 6);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar15 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar15 + 4);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar15 + 6);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            iVar19 = iVar31;
          } while (iVar31 != 0x2c0);
        }
      }
      else if (*(int *)(this + 0x1e58) == 1) {
        *(undefined2 *)(this + 0x335e) = 0x18;
        *(undefined2 *)(this + 0x3366) = 0x19;
        *(undefined2 *)(this + 0x336e) = 0x1a;
        *(undefined2 *)(this + 0x3376) = 0x1b;
        *(undefined2 *)(this + 0x3360) = 0;
        *(undefined2 *)(this + 0x337e) = 0x1c;
        *(undefined2 *)(this + 0x3362) = 0;
        *(undefined2 *)(this + 0x3368) = 0;
        *(undefined2 *)(this + 0x336a) = 0;
        *(undefined2 *)(this + 0x3370) = 0;
        *(undefined2 *)(this + 0x3372) = 0;
        *(undefined2 *)(this + 0x3378) = 0;
        *(undefined2 *)(this + 0x337a) = 0;
        *(undefined2 *)(this + 0x3386) = 0x1d;
        *(undefined2 *)(this + 0x3380) = 0;
        *(undefined2 *)(this + 0x3382) = 0;
        *(undefined2 *)(this + 0x3388) = 0;
        *(undefined2 *)(this + 0x338a) = 0;
        *(undefined2 *)(this + 0x3390) = 0;
        *(undefined2 *)(this + 0x3392) = 0;
        *(undefined2 *)(this + 0x3398) = 0;
        *(undefined2 *)(this + 0x339a) = 0;
        *(undefined2 *)(this + 0x33a0) = 0;
        *(undefined2 *)(this + 0x33a2) = 0;
        *(undefined2 *)(this + 0x3396) = 0x1f;
        *(undefined2 *)(this + 0x338e) = 0x1e;
        *(undefined2 *)(this + 0x339e) = 0x17;
        *(undefined2 *)(this + 0x343e) = 0x20;
        *(undefined2 *)(this + 0x3440) = 0;
        *(undefined2 *)(this + 0x3442) = 0;
      }
      *(undefined2 *)(this + 0x363e) = 0x47c;
      *(undefined2 *)(this + 0x3656) = 0x47d;
      *(undefined2 *)(this + 0x3646) = 0x47e;
      *(undefined2 *)(this + 0x365e) = 0x47f;
      *(undefined2 *)(this + 0x3658) = 0;
      *(undefined2 *)(this + 0x365a) = 0;
      *(undefined2 *)(this + 0x3660) = 0;
      *(undefined2 *)(this + 0x3662) = 0;
      *(undefined2 *)(this + 0x3640) = 0;
      *(undefined2 *)(this + 0x3642) = 0;
      *(undefined2 *)(this + 0x3648) = 0;
      *(undefined2 *)(this + 0x364a) = 0;
      *(undefined2 *)(this + 0x24d6) = 0x45e;
      *(undefined2 *)(this + 0x24d8) = 0;
      *(undefined2 *)(this + 0x24da) = 0;
      *(undefined2 *)(this + 0x24e0) = 0;
      *(undefined2 *)(this + 0x24e2) = 0;
      *(undefined2 *)(this + 0x24de) = 0x461;
      *(undefined2 *)(this + 0x2516) = 0x460;
      *(undefined2 *)(this + 0x2518) = 1;
      *(undefined2 *)(this + 0x2520) = 1;
      *(undefined2 *)(this + 0x251e) = 0x45f;
      *(undefined2 *)(this + 0x251a) = 0;
      *(undefined2 *)(this + 0x2522) = 0;
      *(undefined2 *)(this + 0x2568) = 1;
      *(undefined2 *)(this + 0x2570) = 1;
      *(undefined2 *)(this + 0x2566) = 0x463;
      *(undefined2 *)(this + 0x256a) = 0;
      *(undefined2 *)(this + 0x2572) = 0;
      *(undefined2 *)(this + 0x256e) = 0x462;
      *(undefined2 *)(this + 0x257e) = 0x464;
      *(undefined2 *)(this + 0x2580) = 1;
      *(undefined2 *)(this + 0x2582) = 0;
      *(undefined2 *)(this + 0x25de) = 0x465;
      *(undefined2 *)(this + 0x25e0) = 0;
      *(undefined2 *)(this + 0x25e2) = 0;
      *(undefined2 *)(this + 0x25e8) = 0;
      *(undefined2 *)(this + 0x25ea) = 0;
      *(undefined2 *)(this + 0x25f0) = 0;
      *(undefined2 *)(this + 0x25f2) = 0;
      *(undefined2 *)(this + 0x25e6) = 0x46f;
      *(undefined2 *)(this + 0x25ee) = 0x471;
      *(undefined2 *)(this + 0x25f6) = 0x473;
      *(undefined2 *)(this + 0x25fe) = 0x475;
      *(undefined2 *)(this + 0x25f8) = 0;
      *(undefined2 *)(this + 0x25fa) = 0;
      *(undefined2 *)(this + 0x2600) = 0;
      *(undefined2 *)(this + 0x2606) = 0x467;
      *(undefined2 *)(this + 0x260e) = 0x469;
      *(undefined2 *)(this + 0x2616) = 0x46b;
      *(undefined2 *)(this + 0x2602) = 0;
      *(undefined2 *)(this + 0x2608) = 0;
      *(undefined2 *)(this + 0x260a) = 0;
      *(undefined2 *)(this + 0x2610) = 0;
      *(undefined2 *)(this + 0x2612) = 0;
      *(undefined2 *)(this + 0x2618) = 0;
      *(undefined2 *)(this + 0x261a) = 0;
      *(undefined2 *)(this + 0x2620) = 0;
      *(undefined2 *)(this + 0x2622) = 0;
      *(undefined2 *)(this + 0x2628) = 0;
      *(undefined2 *)(this + 0x262a) = 0;
      *(undefined2 *)(this + 0x2630) = 0;
      *(undefined2 *)(this + 0x2632) = 0;
      *(undefined2 *)(this + 0x261e) = 0x46d;
      *(undefined2 *)(this + 0x2626) = 0x470;
      *(undefined2 *)(this + 0x262e) = 0x472;
      *(undefined2 *)(this + 0x2636) = 0x474;
      *(undefined2 *)(this + 0x263e) = 0x476;
      *(undefined2 *)(this + 0x2638) = 0;
      *(undefined2 *)(this + 0x263a) = 0;
      *(undefined2 *)(this + 0x2646) = 0x466;
      *(undefined2 *)(this + 0x2656) = 0x46a;
      *(undefined2 *)(this + 0x265e) = 0x46c;
      *(undefined2 *)(this + 0x2640) = 0;
      *(undefined2 *)(this + 0x2642) = 0;
      *(undefined2 *)(this + 0x2648) = 0;
      *(undefined2 *)(this + 0x264a) = 0;
      *(undefined2 *)(this + 0x2650) = 0;
      *(undefined2 *)(this + 0x2652) = 0;
      *(undefined2 *)(this + 0x2658) = 0;
      *(undefined2 *)(this + 0x265a) = 0;
      *(undefined2 *)(this + 0x2660) = 0;
      *(undefined2 *)(this + 0x2662) = 0;
      *(undefined2 *)(this + 0x2668) = 0;
      *(undefined2 *)(this + 0x266a) = 0;
      *(undefined2 *)(this + 0x2670) = 0;
      *(undefined2 *)(this + 0x2672) = 0;
      *(undefined2 *)(this + 0x264e) = 0x468;
      *(undefined2 *)(this + 0x2666) = 0x46e;
      *(undefined2 *)(this + 0x266e) = 0x477;
      *(undefined2 *)(this + 0x2728) = 0;
      *(undefined2 *)(this + 0x272a) = 0;
      *(undefined2 *)(this + 0x2730) = 0;
      *(undefined2 *)(this + 0x2732) = 0;
      *(undefined2 *)(this + 0x2738) = 0;
      *(undefined2 *)(this + 0x273a) = 0;
      *(undefined2 *)(this + 0x2726) = 0x479;
      *(undefined2 *)(this + 0x272e) = 0x47a;
      *(undefined2 *)(this + 0x2736) = 0x478;
      *(undefined2 *)(this + 0x2760) = 0;
      *(undefined2 *)(this + 0x275e) = 0x47b;
      *(undefined2 *)(this + 0x2762) = 0;
      if (iVar18 == 0) {
        iVar19 = *(int *)pCVar9;
        if (iVar19 == 0) {
          uVar30 = 4;
          psVar10 = (short *)(DAT_0005b574 + 0x5ba04);
LAB_0005a04e:
          uVar32 = 1;
          sVar5 = *psVar10;
          uVar39 = uVar30 - 1 & 3;
          *(short *)(this + sVar5 * 0xc + 0x7436) = psVar10[1];
          psVar24 = psVar10 + 0xb;
          *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar10 + 2);
          *(short *)(this + sVar5 * 0xc + 0x743e) = psVar10[5];
          if (1 < uVar30) {
            if (uVar39 != 0) {
              if (uVar39 != 1) {
                psVar23 = psVar24;
                if (uVar39 != 2) {
                  sVar5 = psVar10[6];
                  uVar32 = 2;
                  *(short *)(this + sVar5 * 0xc + 0x7436) = psVar10[7];
                  *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar10 + 8);
                  psVar23 = psVar10 + 0x11;
                  *(short *)(this + sVar5 * 0xc + 0x743e) = *psVar24;
                }
                sVar5 = psVar23[-5];
                uVar32 = uVar32 + 1;
                *(short *)(this + sVar5 * 0xc + 0x7436) = psVar23[-4];
                *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar23 + -3);
                psVar24 = psVar23 + 6;
                *(short *)(this + sVar5 * 0xc + 0x743e) = *psVar23;
              }
              sVar5 = psVar24[-5];
              uVar32 = uVar32 + 1;
              *(short *)(this + sVar5 * 0xc + 0x7436) = psVar24[-4];
              *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar24 + -3);
              *(short *)(this + sVar5 * 0xc + 0x743e) = *psVar24;
              psVar24 = psVar24 + 6;
              if (uVar30 <= uVar32) goto LAB_00059cba;
            }
            do {
              sVar5 = psVar24[-5];
              uVar32 = uVar32 + 4;
              *(short *)(this + sVar5 * 0xc + 0x7436) = psVar24[-4];
              *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar24 + -3);
              *(short *)(this + sVar5 * 0xc + 0x743e) = *psVar24;
              sVar5 = psVar24[1];
              *(short *)(this + sVar5 * 0xc + 0x7436) = psVar24[2];
              *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar24 + 3);
              *(short *)(this + sVar5 * 0xc + 0x743e) = psVar24[6];
              sVar5 = psVar24[7];
              *(short *)(this + sVar5 * 0xc + 0x7436) = psVar24[8];
              *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar24 + 9);
              *(short *)(this + sVar5 * 0xc + 0x743e) = psVar24[0xc];
              sVar5 = psVar24[0xd];
              *(short *)(this + sVar5 * 0xc + 0x7436) = psVar24[0xe];
              *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar24 + 0xf);
              *(short *)(this + sVar5 * 0xc + 0x743e) = psVar24[0x12];
              psVar24 = psVar24 + 0x18;
            } while (uVar32 < uVar30);
          }
        }
        else {
          if (iVar19 == 1) {
            uVar30 = 2;
            psVar10 = (short *)(DAT_0005a588 + 0x5aef2);
            goto LAB_0005a04e;
          }
          if (iVar19 == 2) {
            uVar30 = 4;
            psVar10 = (short *)(DAT_0005a584 + 0x5ad54);
            goto LAB_0005a04e;
          }
        }
LAB_00059cba:
        iVar19 = DAT_0005a580;
        if (*(int *)(this + 0x1e5c) == 1) {
          sVar5 = *(short *)(DAT_0005a580 + 0x5aa02);
          sVar33 = *(short *)(DAT_0005a580 + 0x5aa0e);
          uVar27 = *(undefined4 *)(DAT_0005a580 + 0x5aa06);
          uVar36 = *(undefined2 *)(DAT_0005a580 + 0x5aa10);
          uVar14 = *(undefined4 *)(DAT_0005a580 + 0x5aa12);
          uVar1 = *(undefined2 *)(DAT_0005a580 + 0x5aa18);
          *(undefined2 *)(this + sVar5 * 0xc + 0x7436) = *(undefined2 *)(DAT_0005a580 + 0x5aa04);
          uVar2 = *(undefined2 *)(iVar19 + 0x5aa0c);
          *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = uVar27;
          *(undefined2 *)(this + sVar5 * 0xc + 0x743e) = uVar2;
          *(undefined2 *)(this + sVar33 * 0xc + 0x7436) = uVar36;
          *(undefined4 *)(this + sVar33 * 0xc + 0x7438) = uVar14;
          *(undefined2 *)(this + sVar33 * 0xc + 0x743e) = uVar1;
        }
      }
      else if (iVar18 == 1) {
        *(undefined2 *)(this + 0x764e) = 0;
        *(undefined2 *)(this + 0x765a) = 0;
        *(undefined2 *)(this + 0x7666) = 0;
        *(undefined2 *)(this + 0x7672) = 0;
        *(undefined2 *)(this + 0x767e) = 0;
        *(undefined2 *)(this + 0x7646) = 0x19;
        *(undefined2 *)(this + 0x7652) = 0x1a;
        *(undefined2 *)(this + 0x765e) = 0x1b;
        *(undefined2 *)(this + 0x766a) = 0x1c;
        *(undefined2 *)(this + 0x7676) = 0x1d;
        *(undefined4 *)(this + 0x7648) = 0x8000;
        *(undefined4 *)(this + 0x7654) = 0x8000;
        *(undefined4 *)(this + 0x7660) = 0x8000;
        *(undefined4 *)(this + 0x766c) = 0x8000;
        *(undefined4 *)(this + 0x7678) = 0x8000;
        *(undefined4 *)(this + 0x7684) = 0x8000;
        *(undefined2 *)(this + 0x768a) = 0;
        *(undefined2 *)(this + 0x7682) = 0x18;
      }
      if (local_4c != 3) {
        *(undefined4 *)(this + 0x8104) = 0x8000;
        *(undefined4 *)(this + 0x8110) = 0x8000;
        *(undefined2 *)(this + 0x8102) = 10;
        *(undefined2 *)(this + 0x810e) = 0xb;
        *(undefined2 *)(this + 0x811a) = 0xc;
        *(undefined2 *)(this + 0x8126) = 0xd;
        *(undefined2 *)(this + 0x8132) = 0xe;
        *(undefined2 *)(this + 0x813e) = 0xf;
        *(undefined4 *)(this + 0x811c) = 0x8000;
        *(undefined4 *)(this + 0x8128) = 0x8000;
        *(undefined4 *)(this + 0x8134) = 0x8000;
        *(undefined4 *)(this + 0x8140) = 0x8000;
        *(undefined2 *)(this + 0x810a) = 0;
        *(undefined2 *)(this + 0x8116) = 0;
        *(undefined2 *)(this + 0x8122) = 0;
        *(undefined2 *)(this + 0x812e) = 0;
        *(undefined2 *)(this + 0x813a) = 0;
        *(undefined2 *)(this + 0x8146) = 0;
        *(undefined4 *)(this + 0x8350) = 0x8000;
        *(undefined2 *)(this + 0x8356) = 0;
        *(undefined4 *)(this + 0x835c) = 0x8000;
        *(undefined2 *)(this + 0x8362) = 0;
        *(undefined4 *)(this + 0x8368) = 0x8000;
        *(undefined2 *)(this + 0x836e) = 0;
        *(undefined4 *)(this + 0x8374) = 0x8000;
        *(undefined2 *)(this + 0x837a) = 0;
        *(undefined4 *)(this + 0x8380) = 0x8000;
        *(undefined2 *)(this + 0x8386) = 0;
        *(undefined2 *)(this + 0x834e) = 0x10;
        *(undefined2 *)(this + 0x835a) = 0x11;
        *(undefined2 *)(this + 0x8366) = 0x12;
        *(undefined2 *)(this + 0x8372) = 0x13;
        *(undefined2 *)(this + 0x837e) = 0x14;
        *(undefined2 *)(this + 0x838a) = 0x15;
        *(undefined4 *)(this + 0x838c) = 0x8000;
        *(undefined2 *)(this + 0x8392) = 0;
      }
      if (iVar18 == 0) {
        if (*(int *)pCVar9 == 0) {
          uVar39 = *(uint *)(this + 0x240) >> 0x1c | (*(uint *)(this + 0x244) & 0x1ff) << 4;
          uVar30 = *(uint *)(this + 0x2a0) >> 0x1c | (*(uint *)(this + 0x2a4) & 0x1ff) << 4;
          if (uVar30 < uVar39) {
            iVar19 = uVar39 - uVar30;
          }
          else {
            iVar19 = uVar30 - uVar39;
          }
          *(int *)(this + 0x2ecad0) = iVar19;
        }
        else if (*(int *)pCVar9 == 1) {
          uVar30 = *(uint *)(this + 0x210) >> 0x1c | (*(uint *)(this + 0x214) & 0x1ff) << 4;
          uVar39 = *(uint *)(this + 0x290) >> 0x1c | (*(uint *)(this + 0x294) & 0x1ff) << 4;
          if (uVar39 < uVar30) {
            *(uint *)(this + 0x32d2d4) = uVar30 - uVar39;
          }
          else {
            *(uint *)(this + 0x32d2d4) = uVar39 - uVar30;
          }
        }
      }
      pCVar13 = this + 0x1820;
      pCVar35 = this + 0x1e6e;
      pCVar12 = pCVar13;
      do {
        if (-1 < *(short *)pCVar35) {
          if (*(short *)(pCVar35 + 4) == 0) {
            uVar17 = *(ushort *)pCVar12;
          }
          else {
            uVar16 = *(ushort *)pCVar12;
            uVar30 = (uint)uVar16;
            if ((short)uVar16 < 0) {
              uVar37 = 0xc000;
              uVar17 = 0x4000;
            }
            else {
              uVar37 = 0x8000;
              uVar17 = 0;
            }
            if ((uVar16 & 0x4000) != 0) {
              uVar17 = uVar37;
            }
            if ((int)(uVar30 << 0x12) < 0) {
              uVar17 = uVar17 | 8;
            }
            if ((int)(uVar30 << 0x13) < 0) {
              uVar17 = uVar17 | 0x80;
            }
            if ((int)(uVar30 << 0x14) < 0) {
              uVar17 = uVar17 | 1;
            }
            if ((int)(uVar30 << 0x15) < 0) {
              uVar17 = uVar17 | 0x200;
            }
            if ((int)(uVar30 << 0x16) < 0) {
              uVar17 = uVar17 | 0x100;
            }
            if ((int)(uVar30 << 0x17) < 0) {
              uVar17 = uVar17 | 0x400;
            }
            if ((int)(uVar30 << 0x18) < 0) {
              uVar17 = uVar17 | 0x10;
            }
            if ((int)(uVar30 << 0x19) < 0) {
              uVar17 = uVar17 | 0x20;
            }
            if ((int)(uVar30 << 0x1a) < 0) {
              uVar17 = uVar17 | 0x1000;
            }
            if ((int)(uVar30 << 0x1b) < 0) {
              uVar17 = uVar17 | 0x2000;
            }
            if ((int)(uVar30 << 0x1c) < 0) {
              uVar17 = uVar17 | 4;
            }
            if ((int)(uVar30 << 0x1d) < 0) {
              uVar17 = uVar17 | 0x40;
            }
            if ((int)(uVar30 << 0x1e) < 0) {
              uVar17 = uVar17 | 2;
            }
            if ((int)(uVar30 << 0x1f) < 0) {
              uVar17 = uVar17 | 0x800;
            }
          }
          *(int *)(this + (*(short *)pCVar35 + 0x125a) * 4 + 4) =
               (int)(short)uVar17 << ((int)*(short *)(pCVar35 + 2) & 0xffU);
        }
        pCVar35 = pCVar35 + 8;
        pCVar12 = pCVar12 + 2;
      } while (pCVar35 != this + 0x366e);
      pCVar35 = this + 0x7436;
      pCVar12 = this + 0x743c;
      do {
        if (-1 < *(short *)(pCVar12 + -6)) {
          if (*(short *)(pCVar35 + 8) == 0) {
            uVar17 = *(ushort *)pCVar13;
          }
          else {
            uVar16 = *(ushort *)pCVar13;
            if ((short)uVar16 < 0) {
              uVar37 = 0xc000;
              uVar17 = 0x4000;
            }
            else {
              uVar37 = 0x8000;
              uVar17 = 0;
            }
            if ((uVar16 & 0x4000) != 0) {
              uVar17 = uVar37;
            }
            if ((uVar16 & 0x2000) != 0) {
              uVar17 = uVar17 | 8;
            }
            if ((uVar16 & 0x1000) != 0) {
              uVar17 = uVar17 | 0x80;
            }
            if ((uVar16 & 0x800) != 0) {
              uVar17 = uVar17 | 1;
            }
            if ((uVar16 & 0x400) != 0) {
              uVar17 = uVar17 | 0x200;
            }
            if ((uVar16 & 0x200) != 0) {
              uVar17 = uVar17 | 0x100;
            }
            if ((uVar16 & 0x100) != 0) {
              uVar17 = uVar17 | 0x400;
            }
            if ((uVar16 & 0x80) != 0) {
              uVar17 = uVar17 | 0x10;
            }
            if ((uVar16 & 0x40) != 0) {
              uVar17 = uVar17 | 0x20;
            }
            if ((uVar16 & 0x20) != 0) {
              uVar17 = uVar17 | 0x1000;
            }
            if ((uVar16 & 0x10) != 0) {
              uVar17 = uVar17 | 0x2000;
            }
            if ((uVar16 & 8) != 0) {
              uVar17 = uVar17 | 4;
            }
            if ((uVar16 & 4) != 0) {
              uVar17 = uVar17 | 0x40;
            }
            if ((uVar16 & 2) != 0) {
              uVar17 = uVar17 | 2;
            }
            if ((int)((uint)uVar16 << 0x1f) < 0) {
              uVar17 = uVar17 | 0x800;
            }
          }
          *(int *)(this + (*(short *)(pCVar12 + -6) + 0x262a) * 4 + 4) =
               ((int)(short)uVar17 * *(int *)(pCVar12 + -4) <<
               ((int)*(short *)(pCVar35 + 6) & 0xffU)) >> 7;
        }
        pCVar35 = pCVar35 + 0xc;
        pCVar13 = pCVar13 + 2;
        pCVar12 = pCVar12 + 0xc;
      } while (pCVar35 != this + 0x9836);
      CVar3 = (CDsp2)0x1;
    }
    iVar19 = DAT_0005b5b4;
    local_68 = this + 0x3640;
    if (iVar18 == 0) {
      if (*(int *)(this + 0x1e5c) == 0) {
        uVar27 = *(undefined4 *)(this + 0x1e24);
        uVar14 = *(undefined4 *)(this + 0x1e20);
        iVar18 = 0;
        do {
          iVar40 = iVar18 + iVar19;
          sVar33 = *(short *)(&UNK_0005bc74 + iVar18 + iVar19);
          iVar18 = iVar18 + 6;
          sVar5 = *(short *)(&UNK_0005bc74 + iVar40 + 2);
          uVar30 = (*(uint *)(this + sVar33 * 8 + 0x24) & 0x1ff) << 4;
          uVar39 = (*(uint *)(this + sVar5 * 8 + 0x24) & 0x1ff) << 4;
          uVar17 = (ushort)(*(uint *)(this + sVar33 * 8 + 0x20) >> 0x1c) | (ushort)uVar30;
          sVar34 = (short)uVar27;
          if ((*(uint *)(this + sVar33 * 8 + 0x24) & 0x4000) == 0) {
            sVar34 = (short)uVar14;
          }
          uVar16 = (ushort)(*(uint *)(this + sVar5 * 8 + 0x20) >> 0x1c) | (ushort)uVar39;
          sVar11 = uVar17 - uVar16;
          if ((*(uint *)(this + sVar33 * 8 + 0x20) >> 0x1c | uVar30) <
              (*(uint *)(this + sVar5 * 8 + 0x20) >> 0x1c | uVar39)) {
            sVar11 = (sVar34 + uVar17) - uVar16;
          }
          *(short *)(this + (*(short *)(&UNK_0005bc74 + iVar40 + 4) + 0x4cd0) * 2 + 6) = sVar11;
        } while (iVar18 != 0x6c);
      }
      else if (*(int *)(this + 0x1e5c) == 1) {
        sVar5 = *(short *)(&UNK_0005bc24 + DAT_0005b5b0);
        local_70 = (short)*(undefined4 *)(this + 0x1e20);
        local_58 = *(uint *)(this + *(short *)(&UNK_0005bc22 + DAT_0005b5b0) * 8 + 0x20) >> 0x1c |
                   (*(uint *)(this + *(short *)(&UNK_0005bc22 + DAT_0005b5b0) * 8 + 0x24) & 0x1ff)
                   << 4;
        uVar30 = *(uint *)(this + *(short *)(&UNK_0005bc20 + DAT_0005b5b0) * 8 + 0x20) >> 0x1c |
                 (*(uint *)(this + *(short *)(&UNK_0005bc20 + DAT_0005b5b0) * 8 + 0x24) & 0x1ff) <<
                 4;
        local_5c = (short)*(undefined4 *)(this + 0x1e24);
        sVar33 = local_5c;
        if ((*(uint *)(this + *(short *)(&UNK_0005bc20 + DAT_0005b5b0) * 8 + 0x24) & 0x4000) == 0) {
          sVar33 = local_70;
        }
        sVar11 = *(short *)(&UNK_0005bc26 + DAT_0005b5b0);
        sVar4 = (sVar33 + (short)uVar30) - (short)local_58;
        sVar26 = (short)uVar30 - (short)local_58;
        sVar33 = *(short *)(&UNK_0005bc28 + DAT_0005b5b0);
        sVar34 = *(short *)(&UNK_0005bc2a + DAT_0005b5b0);
        goto LAB_00056f92;
      }
    }
    else {
      sVar5 = *(short *)(DAT_000571bc + 0x57cb6);
      local_70 = (short)*(undefined4 *)(this + 0x1e20);
      local_58 = *(uint *)(this + *(short *)(DAT_000571bc + 0x57cb4) * 8 + 0x20) >> 0x1c |
                 (*(uint *)(this + *(short *)(DAT_000571bc + 0x57cb4) * 8 + 0x24) & 0x1ff) << 4;
      uVar30 = *(uint *)(this + *(short *)(DAT_000571bc + 0x57cb2) * 8 + 0x20) >> 0x1c |
               (*(uint *)(this + *(short *)(DAT_000571bc + 0x57cb2) * 8 + 0x24) & 0x1ff) << 4;
      local_5c = (short)*(undefined4 *)(this + 0x1e24);
      sVar33 = local_5c;
      if ((*(uint *)(this + *(short *)(DAT_000571bc + 0x57cb2) * 8 + 0x24) & 0x4000) == 0) {
        sVar33 = local_70;
      }
      sVar11 = *(short *)(DAT_000571bc + 0x57cb8);
      sVar4 = (sVar33 + (short)uVar30) - (short)local_58;
      sVar26 = (short)uVar30 - (short)local_58;
      sVar33 = *(short *)(DAT_000571bc + 0x57cba);
      sVar34 = *(short *)(DAT_000571bc + 0x57cbc);
LAB_00056f92:
      if (local_58 <= uVar30) {
        sVar4 = sVar26;
      }
      *(short *)(this + (sVar5 + 0x4cd0) * 2 + 6) = sVar4;
      uVar30 = *(uint *)(this + sVar33 * 8 + 0x20) >> 0x1c |
               (*(uint *)(this + sVar33 * 8 + 0x24) & 0x1ff) << 4;
      if ((*(uint *)(this + sVar11 * 8 + 0x24) & 0x4000) == 0) {
        local_5c = local_70;
      }
      uVar39 = *(uint *)(this + sVar11 * 8 + 0x20) >> 0x1c |
               (*(uint *)(this + sVar11 * 8 + 0x24) & 0x1ff) << 4;
      sVar5 = (short)uVar39;
      sVar11 = (short)uVar30;
      sVar33 = sVar5 - sVar11;
      if (uVar39 < uVar30) {
        sVar33 = (local_5c + sVar5) - sVar11;
      }
      *(short *)(this + (sVar34 + 0x4cd0) * 2 + 6) = sVar33;
    }
    pCVar35 = this + 0x1846;
    pCVar13 = this + 0x1f06;
    pCVar12 = pCVar35;
    do {
      if (-1 < *(short *)pCVar13) {
        if (*(short *)(pCVar13 + 4) == 0) {
          uVar17 = *(ushort *)pCVar12;
        }
        else {
          uVar16 = *(ushort *)pCVar12;
          if ((short)uVar16 < 0) {
            uVar37 = 0xc000;
            uVar17 = 0x4000;
          }
          else {
            uVar37 = 0x8000;
            uVar17 = 0;
          }
          if ((uVar16 & 0x4000) != 0) {
            uVar17 = uVar37;
          }
          if ((uVar16 & 0x2000) != 0) {
            uVar17 = uVar17 | 8;
          }
          if ((uVar16 & 0x1000) != 0) {
            uVar17 = uVar17 | 0x80;
          }
          if ((uVar16 & 0x800) != 0) {
            uVar17 = uVar17 | 1;
          }
          if ((uVar16 & 0x400) != 0) {
            uVar17 = uVar17 | 0x200;
          }
          if ((uVar16 & 0x200) != 0) {
            uVar17 = uVar17 | 0x100;
          }
          if ((uVar16 & 0x100) != 0) {
            uVar17 = uVar17 | 0x400;
          }
          if ((uVar16 & 0x80) != 0) {
            uVar17 = uVar17 | 0x10;
          }
          if ((uVar16 & 0x40) != 0) {
            uVar17 = uVar17 | 0x20;
          }
          if ((uVar16 & 0x20) != 0) {
            uVar17 = uVar17 | 0x1000;
          }
          if ((uVar16 & 0x10) != 0) {
            uVar17 = uVar17 | 0x2000;
          }
          if ((uVar16 & 8) != 0) {
            uVar17 = uVar17 | 4;
          }
          if ((uVar16 & 4) != 0) {
            uVar17 = uVar17 | 0x40;
          }
          if ((uVar16 & 2) != 0) {
            uVar17 = uVar17 | 2;
          }
          if ((int)((uint)uVar16 << 0x1f) < 0) {
            uVar17 = uVar17 | 0x800;
          }
        }
        *(int *)(this + (*(short *)pCVar13 + 0x125a) * 4 + 4) =
             (int)(short)uVar17 << ((int)*(short *)(pCVar13 + 2) & 0xffU);
      }
      pCVar13 = pCVar13 + 8;
      pCVar12 = pCVar12 + 2;
    } while (pCVar13 != this + 0x24d6);
    pCVar13 = this + 0x751a;
    pCVar12 = this + 0x7520;
    do {
      if (-1 < *(short *)(pCVar12 + -6)) {
        if (*(short *)(pCVar13 + 8) == 0) {
          uVar17 = *(ushort *)pCVar35;
        }
        else {
          uVar16 = *(ushort *)pCVar35;
          if ((short)uVar16 < 0) {
            uVar37 = 0xc000;
            uVar17 = 0x4000;
          }
          else {
            uVar37 = 0x8000;
            uVar17 = 0;
          }
          if ((uVar16 & 0x4000) != 0) {
            uVar17 = uVar37;
          }
          if ((uVar16 & 0x2000) != 0) {
            uVar17 = uVar17 | 8;
          }
          if ((uVar16 & 0x1000) != 0) {
            uVar17 = uVar17 | 0x80;
          }
          if ((uVar16 & 0x800) != 0) {
            uVar17 = uVar17 | 1;
          }
          if ((uVar16 & 0x400) != 0) {
            uVar17 = uVar17 | 0x200;
          }
          if ((uVar16 & 0x200) != 0) {
            uVar17 = uVar17 | 0x100;
          }
          if ((uVar16 & 0x100) != 0) {
            uVar17 = uVar17 | 0x400;
          }
          if ((uVar16 & 0x80) != 0) {
            uVar17 = uVar17 | 0x10;
          }
          if ((uVar16 & 0x40) != 0) {
            uVar17 = uVar17 | 0x20;
          }
          if ((uVar16 & 0x20) != 0) {
            uVar17 = uVar17 | 0x1000;
          }
          if ((uVar16 & 0x10) != 0) {
            uVar17 = uVar17 | 0x2000;
          }
          if ((uVar16 & 8) != 0) {
            uVar17 = uVar17 | 4;
          }
          if ((uVar16 & 4) != 0) {
            uVar17 = uVar17 | 0x40;
          }
          if ((uVar16 & 2) != 0) {
            uVar17 = uVar17 | 2;
          }
          if ((int)((uint)uVar16 << 0x1f) < 0) {
            uVar17 = uVar17 | 0x800;
          }
        }
        *(int *)(this + (*(short *)(pCVar12 + -6) + 0x262a) * 4 + 4) =
             ((int)(short)uVar17 * *(int *)(pCVar12 + -4) << ((int)*(short *)(pCVar13 + 6) & 0xffU))
             >> 7;
      }
      pCVar13 = pCVar13 + 0xc;
      pCVar35 = pCVar35 + 2;
      pCVar12 = pCVar12 + 0xc;
    } while (pCVar13 != this + 0x7dd2);
    pCVar35 = this + 0x1a22;
    pCVar21 = this + 0x2676;
    pCVar13 = this + 0x335e;
    pCVar12 = pCVar35;
    do {
      if (-1 < *(short *)pCVar21) {
        if (*(short *)(pCVar21 + 4) == 0) {
          uVar17 = *(ushort *)pCVar12;
        }
        else {
          uVar16 = *(ushort *)pCVar12;
          if ((short)uVar16 < 0) {
            uVar37 = 0xc000;
            uVar17 = 0x4000;
          }
          else {
            uVar37 = 0x8000;
            uVar17 = 0;
          }
          if ((uVar16 & 0x4000) != 0) {
            uVar17 = uVar37;
          }
          if ((uVar16 & 0x2000) != 0) {
            uVar17 = uVar17 | 8;
          }
          if ((uVar16 & 0x1000) != 0) {
            uVar17 = uVar17 | 0x80;
          }
          if ((uVar16 & 0x800) != 0) {
            uVar17 = uVar17 | 1;
          }
          if ((uVar16 & 0x400) != 0) {
            uVar17 = uVar17 | 0x200;
          }
          if ((uVar16 & 0x200) != 0) {
            uVar17 = uVar17 | 0x100;
          }
          if ((uVar16 & 0x100) != 0) {
            uVar17 = uVar17 | 0x400;
          }
          if ((uVar16 & 0x80) != 0) {
            uVar17 = uVar17 | 0x10;
          }
          if ((uVar16 & 0x40) != 0) {
            uVar17 = uVar17 | 0x20;
          }
          if ((uVar16 & 0x20) != 0) {
            uVar17 = uVar17 | 0x1000;
          }
          if ((uVar16 & 0x10) != 0) {
            uVar17 = uVar17 | 0x2000;
          }
          if ((uVar16 & 8) != 0) {
            uVar17 = uVar17 | 4;
          }
          if ((uVar16 & 4) != 0) {
            uVar17 = uVar17 | 0x40;
          }
          if ((uVar16 & 2) != 0) {
            uVar17 = uVar17 | 2;
          }
          if ((int)((uint)uVar16 << 0x1f) < 0) {
            uVar17 = uVar17 | 0x800;
          }
        }
        *(int *)(this + (*(short *)pCVar21 + 0x125a) * 4 + 4) =
             (int)(short)uVar17 << ((int)*(short *)(pCVar21 + 2) & 0xffU);
      }
      pCVar21 = pCVar21 + 8;
      pCVar12 = pCVar12 + 2;
    } while (pCVar21 != pCVar13);
    pCVar21 = this + 0x8042;
    pCVar12 = this + 0x8048;
    pCVar22 = this + 0x939e;
    do {
      if (-1 < *(short *)(pCVar12 + -6)) {
        if (*(short *)(pCVar21 + 8) == 0) {
          uVar17 = *(ushort *)pCVar35;
        }
        else {
          uVar16 = *(ushort *)pCVar35;
          if ((short)uVar16 < 0) {
            uVar37 = 0xc000;
            uVar17 = 0x4000;
          }
          else {
            uVar37 = 0x8000;
            uVar17 = 0;
          }
          if ((uVar16 & 0x4000) != 0) {
            uVar17 = uVar37;
          }
          if ((uVar16 & 0x2000) != 0) {
            uVar17 = uVar17 | 8;
          }
          if ((uVar16 & 0x1000) != 0) {
            uVar17 = uVar17 | 0x80;
          }
          if ((uVar16 & 0x800) != 0) {
            uVar17 = uVar17 | 1;
          }
          if ((uVar16 & 0x400) != 0) {
            uVar17 = uVar17 | 0x200;
          }
          if ((uVar16 & 0x200) != 0) {
            uVar17 = uVar17 | 0x100;
          }
          if ((uVar16 & 0x100) != 0) {
            uVar17 = uVar17 | 0x400;
          }
          if ((uVar16 & 0x80) != 0) {
            uVar17 = uVar17 | 0x10;
          }
          if ((uVar16 & 0x40) != 0) {
            uVar17 = uVar17 | 0x20;
          }
          if ((uVar16 & 0x20) != 0) {
            uVar17 = uVar17 | 0x1000;
          }
          if ((uVar16 & 0x10) != 0) {
            uVar17 = uVar17 | 0x2000;
          }
          if ((uVar16 & 8) != 0) {
            uVar17 = uVar17 | 4;
          }
          if ((uVar16 & 4) != 0) {
            uVar17 = uVar17 | 0x40;
          }
          if ((uVar16 & 2) != 0) {
            uVar17 = uVar17 | 2;
          }
          if ((int)((uint)uVar16 << 0x1f) < 0) {
            uVar17 = uVar17 | 0x800;
          }
        }
        *(int *)(this + (*(short *)(pCVar12 + -6) + 0x262a) * 4 + 4) =
             ((int)(short)uVar17 * *(int *)(pCVar12 + -4) << ((int)*(short *)(pCVar21 + 6) & 0xffU))
             >> 7;
      }
      pCVar21 = pCVar21 + 0xc;
      pCVar35 = pCVar35 + 2;
      pCVar12 = pCVar12 + 0xc;
    } while (pCVar21 != pCVar22);
    if (local_4c == 0) {
      uVar27 = *(undefined4 *)(this + 0x1e24);
      uVar14 = *(undefined4 *)(this + 0x1e20);
      uVar30 = *(uint *)(this + *(short *)(DAT_00057f58 + 0x580b0) * 8 + 0x20) >> 0x1c |
               (*(uint *)(this + *(short *)(DAT_00057f58 + 0x580b0) * 8 + 0x24) & 0x1ff) << 4;
      uVar39 = *(uint *)(this + *(short *)(DAT_00057f58 + 0x580ae) * 8 + 0x20) >> 0x1c |
               (*(uint *)(this + *(short *)(DAT_00057f58 + 0x580ae) * 8 + 0x24) & 0x1ff) << 4;
      sVar5 = (short)uVar27;
      if ((*(uint *)(this + *(short *)(DAT_00057f58 + 0x580ae) * 8 + 0x24) & 0x4000) == 0) {
        sVar5 = (short)uVar14;
      }
      sVar4 = (short)uVar39;
      sVar33 = *(short *)(DAT_00057f58 + 0x580b4);
      sVar26 = (short)uVar30;
      sVar34 = *(short *)(DAT_00057f58 + 0x580b6);
      sVar11 = *(short *)(DAT_00057f58 + 0x580b8);
      sVar5 = (sVar5 + sVar4) - sVar26;
      if (uVar30 <= uVar39) {
        sVar5 = sVar4 - sVar26;
      }
      *(short *)(this + (*(short *)(DAT_00057f58 + 0x580b2) + 0x4cd0) * 2 + 6) = sVar5;
      uVar30 = *(uint *)(this + sVar33 * 8 + 0x20) >> 0x1c |
               (*(uint *)(this + sVar33 * 8 + 0x24) & 0x1ff) << 4;
      sVar5 = (short)uVar27;
      if ((*(uint *)(this + sVar33 * 8 + 0x24) & 0x4000) == 0) {
        sVar5 = (short)uVar14;
      }
      uVar39 = (*(uint *)(this + sVar34 * 8 + 0x24) & 0x1ff) << 4;
      sVar33 = (short)uVar30;
      uVar17 = (ushort)(*(uint *)(this + sVar34 * 8 + 0x20) >> 0x1c) | (ushort)uVar39;
      sVar4 = sVar33 - uVar17;
      if (uVar30 < (*(uint *)(this + sVar34 * 8 + 0x20) >> 0x1c | uVar39)) {
        sVar4 = (sVar5 + sVar33) - uVar17;
      }
      *(short *)(this + (sVar11 + 0x4cd0) * 2 + 6) = sVar4;
    }
    pCVar35 = this + 0x1c68;
    pCVar21 = this + 0x2f8e;
    pCVar12 = pCVar35;
    do {
      if (-1 < *(short *)pCVar21) {
        if (*(short *)(pCVar21 + 4) == 0) {
          uVar17 = *(ushort *)pCVar12;
        }
        else {
          uVar16 = *(ushort *)pCVar12;
          if ((short)uVar16 < 0) {
            uVar37 = 0xc000;
            uVar17 = 0x4000;
          }
          else {
            uVar37 = 0x8000;
            uVar17 = 0;
          }
          if ((uVar16 & 0x4000) != 0) {
            uVar17 = uVar37;
          }
          if ((uVar16 & 0x2000) != 0) {
            uVar17 = uVar17 | 8;
          }
          if ((uVar16 & 0x1000) != 0) {
            uVar17 = uVar17 | 0x80;
          }
          if ((uVar16 & 0x800) != 0) {
            uVar17 = uVar17 | 1;
          }
          if ((uVar16 & 0x400) != 0) {
            uVar17 = uVar17 | 0x200;
          }
          if ((uVar16 & 0x200) != 0) {
            uVar17 = uVar17 | 0x100;
          }
          if ((uVar16 & 0x100) != 0) {
            uVar17 = uVar17 | 0x400;
          }
          if ((uVar16 & 0x80) != 0) {
            uVar17 = uVar17 | 0x10;
          }
          if ((uVar16 & 0x40) != 0) {
            uVar17 = uVar17 | 0x20;
          }
          if ((uVar16 & 0x20) != 0) {
            uVar17 = uVar17 | 0x1000;
          }
          if ((uVar16 & 0x10) != 0) {
            uVar17 = uVar17 | 0x2000;
          }
          if ((uVar16 & 8) != 0) {
            uVar17 = uVar17 | 4;
          }
          if ((uVar16 & 4) != 0) {
            uVar17 = uVar17 | 0x40;
          }
          if ((uVar16 & 2) != 0) {
            uVar17 = uVar17 | 2;
          }
          if ((int)((uint)uVar16 << 0x1f) < 0) {
            uVar17 = uVar17 | 0x800;
          }
        }
        *(int *)(this + (*(short *)pCVar21 + 0x125a) * 4 + 4) =
             (int)(short)uVar17 << ((int)*(short *)(pCVar21 + 2) & 0xffU);
      }
      pCVar21 = pCVar21 + 8;
      pCVar12 = pCVar12 + 2;
    } while (pCVar21 != this + 0x326e);
    pCVar21 = this + 0x8de6;
    pCVar12 = this + 0x8dec;
    do {
      if (-1 < *(short *)(pCVar12 + -6)) {
        if (*(short *)(pCVar21 + 8) == 0) {
          uVar17 = *(ushort *)pCVar35;
        }
        else {
          uVar16 = *(ushort *)pCVar35;
          if ((short)uVar16 < 0) {
            uVar37 = 0xc000;
            uVar17 = 0x4000;
          }
          else {
            uVar37 = 0x8000;
            uVar17 = 0;
          }
          if ((uVar16 & 0x4000) != 0) {
            uVar17 = uVar37;
          }
          if ((uVar16 & 0x2000) != 0) {
            uVar17 = uVar17 | 8;
          }
          if ((uVar16 & 0x1000) != 0) {
            uVar17 = uVar17 | 0x80;
          }
          if ((uVar16 & 0x800) != 0) {
            uVar17 = uVar17 | 1;
          }
          if ((uVar16 & 0x400) != 0) {
            uVar17 = uVar17 | 0x200;
          }
          if ((uVar16 & 0x200) != 0) {
            uVar17 = uVar17 | 0x100;
          }
          if ((uVar16 & 0x100) != 0) {
            uVar17 = uVar17 | 0x400;
          }
          if ((uVar16 & 0x80) != 0) {
            uVar17 = uVar17 | 0x10;
          }
          if ((uVar16 & 0x40) != 0) {
            uVar17 = uVar17 | 0x20;
          }
          if ((uVar16 & 0x20) != 0) {
            uVar17 = uVar17 | 0x1000;
          }
          if ((uVar16 & 0x10) != 0) {
            uVar17 = uVar17 | 0x2000;
          }
          if ((uVar16 & 8) != 0) {
            uVar17 = uVar17 | 4;
          }
          if ((uVar16 & 4) != 0) {
            uVar17 = uVar17 | 0x40;
          }
          if ((uVar16 & 2) != 0) {
            uVar17 = uVar17 | 2;
          }
          if ((int)((uint)uVar16 << 0x1f) < 0) {
            uVar17 = uVar17 | 0x800;
          }
        }
        *(int *)(this + (*(short *)(pCVar12 + -6) + 0x262a) * 4 + 4) =
             ((int)(short)uVar17 * *(int *)(pCVar12 + -4) << ((int)*(short *)(pCVar21 + 6) & 0xffU))
             >> 7;
      }
      pCVar21 = pCVar21 + 0xc;
      pCVar35 = pCVar35 + 2;
      pCVar12 = pCVar12 + 0xc;
    } while (pCVar21 != this + 0x9236);
    pCVar35 = this + 0x1d5c;
    pCVar12 = pCVar35;
    do {
      if (-1 < *(short *)pCVar13) {
        if (*(short *)(pCVar13 + 4) == 0) {
          uVar17 = *(ushort *)pCVar12;
        }
        else {
          uVar16 = *(ushort *)pCVar12;
          if ((short)uVar16 < 0) {
            uVar37 = 0xc000;
            uVar17 = 0x4000;
          }
          else {
            uVar37 = 0x8000;
            uVar17 = 0;
          }
          if ((uVar16 & 0x4000) != 0) {
            uVar17 = uVar37;
          }
          if ((uVar16 & 0x2000) != 0) {
            uVar17 = uVar17 | 8;
          }
          if ((uVar16 & 0x1000) != 0) {
            uVar17 = uVar17 | 0x80;
          }
          if ((uVar16 & 0x800) != 0) {
            uVar17 = uVar17 | 1;
          }
          if ((uVar16 & 0x400) != 0) {
            uVar17 = uVar17 | 0x200;
          }
          if ((uVar16 & 0x200) != 0) {
            uVar17 = uVar17 | 0x100;
          }
          if ((uVar16 & 0x100) != 0) {
            uVar17 = uVar17 | 0x400;
          }
          if ((uVar16 & 0x80) != 0) {
            uVar17 = uVar17 | 0x10;
          }
          if ((uVar16 & 0x40) != 0) {
            uVar17 = uVar17 | 0x20;
          }
          if ((uVar16 & 0x20) != 0) {
            uVar17 = uVar17 | 0x1000;
          }
          if ((uVar16 & 0x10) != 0) {
            uVar17 = uVar17 | 0x2000;
          }
          if ((uVar16 & 8) != 0) {
            uVar17 = uVar17 | 4;
          }
          if ((uVar16 & 4) != 0) {
            uVar17 = uVar17 | 0x40;
          }
          if ((uVar16 & 2) != 0) {
            uVar17 = uVar17 | 2;
          }
          if ((int)((uint)uVar16 << 0x1f) < 0) {
            uVar17 = uVar17 | 0x800;
          }
        }
        *(int *)(this + (*(short *)pCVar13 + 0x125a) * 4 + 4) =
             (int)(short)uVar17 << ((int)*(short *)(pCVar13 + 2) & 0xffU);
      }
      pCVar13 = pCVar13 + 8;
      pCVar12 = pCVar12 + 2;
    } while (pCVar13 != this + 0x3646);
    pCVar12 = this + 0x93a4;
    do {
      if (-1 < *(short *)(pCVar12 + -6)) {
        if (*(short *)(pCVar22 + 8) == 0) {
          uVar17 = *(ushort *)pCVar35;
        }
        else {
          uVar16 = *(ushort *)pCVar35;
          if ((short)uVar16 < 0) {
            uVar37 = 0xc000;
            uVar17 = 0x4000;
          }
          else {
            uVar37 = 0x8000;
            uVar17 = 0;
          }
          if ((uVar16 & 0x4000) != 0) {
            uVar17 = uVar37;
          }
          if ((uVar16 & 0x2000) != 0) {
            uVar17 = uVar17 | 8;
          }
          if ((uVar16 & 0x1000) != 0) {
            uVar17 = uVar17 | 0x80;
          }
          if ((uVar16 & 0x800) != 0) {
            uVar17 = uVar17 | 1;
          }
          if ((uVar16 & 0x400) != 0) {
            uVar17 = uVar17 | 0x200;
          }
          if ((uVar16 & 0x200) != 0) {
            uVar17 = uVar17 | 0x100;
          }
          if ((uVar16 & 0x100) != 0) {
            uVar17 = uVar17 | 0x400;
          }
          if ((uVar16 & 0x80) != 0) {
            uVar17 = uVar17 | 0x10;
          }
          if ((uVar16 & 0x40) != 0) {
            uVar17 = uVar17 | 0x20;
          }
          if ((uVar16 & 0x20) != 0) {
            uVar17 = uVar17 | 0x1000;
          }
          if ((uVar16 & 0x10) != 0) {
            uVar17 = uVar17 | 0x2000;
          }
          if ((uVar16 & 8) != 0) {
            uVar17 = uVar17 | 4;
          }
          if ((uVar16 & 4) != 0) {
            uVar17 = uVar17 | 0x40;
          }
          if ((uVar16 & 2) != 0) {
            uVar17 = uVar17 | 2;
          }
          if ((int)((uint)uVar16 << 0x1f) < 0) {
            uVar17 = uVar17 | 0x800;
          }
        }
        *(int *)(this + (*(short *)(pCVar12 + -6) + 0x262a) * 4 + 4) =
             ((int)(short)uVar17 * *(int *)(pCVar12 + -4) << ((int)*(short *)(pCVar22 + 6) & 0xffU))
             >> 7;
      }
      pCVar22 = pCVar22 + 0xc;
      pCVar35 = pCVar35 + 2;
      pCVar12 = pCVar12 + 0xc;
    } while (pCVar22 != this + 0x97fa);
    this[5] = (CDsp2)0x1;
    if ((bool)CVar3) {
      *(undefined4 *)(this + 8) = 1;
      iVar18 = 0;
      do {
        iVar19 = iVar18 + 0x60;
        *(undefined2 *)(this + iVar18 + 0x1e6e) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e76) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e7e) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e86) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e8e) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e96) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1e9e) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1ea6) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1eae) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1eb6) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1ebe) = 0xffff;
        *(undefined2 *)(this + iVar18 + 0x1ec6) = 0xffff;
        iVar18 = iVar19;
      } while (iVar19 != 0x1800);
      iVar18 = *(int *)(this + 0x1e54);
      if (iVar18 == 0) {
        *(undefined2 *)(this + 0x1ebe) = 0;
        *(undefined2 *)(this + 0x1ec0) = 0;
        *(undefined2 *)(this + 0x1ec2) = 0;
        *(undefined2 *)(this + 0x1ec8) = 0;
        *(undefined2 *)(this + 0x1eca) = 0;
        *(undefined2 *)(this + 0x1ec6) = 1;
        iVar19 = *(int *)pCVar9;
        if (iVar19 == 0) {
          uVar30 = 0x28;
          psVar10 = (short *)(DAT_00058bd4 + 0x587e8);
LAB_000587e6:
          sVar5 = *psVar10;
          uVar32 = 1;
          uVar39 = uVar30 - 1 & 3;
          iVar19 = 8;
          *(short *)(this + sVar5 * 8 + 0x1e6e) = psVar10[1];
          *(short *)(this + sVar5 * 8 + 0x1e70) = psVar10[2];
          *(short *)(this + sVar5 * 8 + 0x1e72) = psVar10[3];
          if (1 < uVar30) {
            iVar40 = iVar19;
            if (uVar39 != 0) {
              if (uVar39 != 1) {
                if (uVar39 != 2) {
                  uVar32 = 2;
                  sVar5 = psVar10[4];
                  iVar40 = 0x10;
                  *(short *)(this + sVar5 * 8 + 0x1e6e) = psVar10[5];
                  *(short *)(this + sVar5 * 8 + 0x1e70) = psVar10[6];
                  *(short *)(this + sVar5 * 8 + 0x1e72) = psVar10[7];
                }
                sVar5 = *(short *)((int)psVar10 + iVar40);
                uVar32 = uVar32 + 1;
                iVar19 = iVar40 + 8;
                *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                     *(undefined2 *)((int)psVar10 + iVar40 + 2);
                *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                     *(undefined2 *)((int)psVar10 + iVar40 + 4);
                *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                     *(undefined2 *)((int)psVar10 + iVar40 + 6);
              }
              sVar5 = *(short *)((int)psVar10 + iVar19);
              uVar32 = uVar32 + 1;
              iVar40 = iVar19 + 8;
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 2);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 4);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar10 + iVar19 + 6);
              if (uVar30 <= uVar32) goto LAB_00057a2e;
            }
            do {
              sVar5 = *(short *)((int)psVar10 + iVar40);
              uVar32 = uVar32 + 4;
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 2);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 4);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 6);
              sVar5 = *(short *)((int)psVar10 + iVar40 + 8);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 10);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 0xc);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 0xe);
              sVar5 = *(short *)((int)psVar10 + iVar40 + 0x10);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 0x12);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 0x14);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 0x16);
              sVar5 = *(short *)((int)psVar10 + iVar40 + 0x18);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 0x1a);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 0x1c);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 0x1e);
              iVar40 = iVar40 + 0x20;
            } while (uVar32 < uVar30);
          }
        }
        else {
          if (iVar19 == 1) {
            uVar30 = 0x2d;
            psVar10 = (short *)(DAT_0005b5a8 + 0x5af7a);
            goto LAB_000587e6;
          }
          if (iVar19 == 2) {
            uVar30 = 0x25;
            psVar10 = (short *)(&UNK_0005b0d0 + DAT_0005b5a4);
            goto LAB_000587e6;
          }
          if (iVar19 == 3) {
            uVar30 = 0x24;
            psVar10 = (short *)(DAT_0005b5a0 + 0x5b1e6);
            goto LAB_000587e6;
          }
          if (iVar19 == 4) {
            uVar30 = 0x35;
            psVar10 = (short *)(DAT_0005b59c + 0x5b2f4);
            goto LAB_000587e6;
          }
          if (iVar19 == 5) {
            uVar30 = 0x28;
            psVar10 = (short *)(DAT_0005b598 + 0x5b48a);
            goto LAB_000587e6;
          }
          if (iVar19 == 6) {
            uVar30 = 0x30;
            psVar10 = (short *)(DAT_0005b594 + 0x5b5b8);
            goto LAB_000587e6;
          }
          if (iVar19 == 7) {
            uVar30 = 0x20;
            psVar10 = (short *)(DAT_0005b58c + 0x5b70a);
            goto LAB_000587e6;
          }
        }
LAB_00057a2e:
        *(undefined2 *)(this + 0x2206) = 2;
        *(undefined2 *)(this + 0x220e) = 3;
        *(undefined2 *)(this + 0x2216) = 4;
        *(undefined2 *)(this + 0x2208) = 0;
        *(undefined2 *)(this + 0x220a) = 0;
        *(undefined2 *)(this + 0x2210) = 0;
        *(undefined2 *)(this + 0x2212) = 0;
        *(undefined2 *)(this + 0x2218) = 0;
        *(undefined2 *)(this + 0x221a) = 0;
        if (*(int *)(this + 0x1e5c) == 0) {
          uVar30 = 0x35;
          psVar10 = (short *)(DAT_000598ec + 0x59b84);
        }
        else {
          if (*(int *)(this + 0x1e5c) != 1) goto LAB_00057a70;
          uVar30 = 0x18;
          psVar10 = (short *)(&UNK_0005ba4a + DAT_0005b5ac);
        }
        sVar5 = *psVar10;
        uVar39 = uVar30 - 1 & 3;
        uVar32 = 1;
        iVar19 = 8;
        *(short *)(this + sVar5 * 8 + 0x1e6e) = psVar10[1];
        *(short *)(this + sVar5 * 8 + 0x1e70) = psVar10[2];
        *(short *)(this + sVar5 * 8 + 0x1e72) = psVar10[3];
        if (1 < uVar30) {
          iVar40 = iVar19;
          if (uVar39 != 0) {
            if (uVar39 != 1) {
              if (uVar39 != 2) {
                uVar32 = 2;
                sVar5 = psVar10[4];
                iVar40 = 0x10;
                *(short *)(this + sVar5 * 8 + 0x1e6e) = psVar10[5];
                *(short *)(this + sVar5 * 8 + 0x1e70) = psVar10[6];
                *(short *)(this + sVar5 * 8 + 0x1e72) = psVar10[7];
              }
              sVar5 = *(short *)((int)psVar10 + iVar40);
              uVar32 = uVar32 + 1;
              iVar19 = iVar40 + 8;
              *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 2);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 4);
              *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar10 + iVar40 + 6);
            }
            sVar5 = *(short *)((int)psVar10 + iVar19);
            uVar32 = uVar32 + 1;
            iVar40 = iVar19 + 8;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)((int)psVar10 + iVar19 + 4);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)((int)psVar10 + iVar19 + 6);
            if (uVar30 <= uVar32) goto LAB_00057a70;
          }
          do {
            sVar5 = *(short *)((int)psVar10 + iVar40);
            uVar32 = uVar32 + 4;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar40 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)((int)psVar10 + iVar40 + 4);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)((int)psVar10 + iVar40 + 6);
            sVar5 = *(short *)((int)psVar10 + iVar40 + 8);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar40 + 10)
            ;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar40 + 0xc);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar40 + 0xe);
            sVar5 = *(short *)((int)psVar10 + iVar40 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar40 + 0x12);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar40 + 0x14);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar40 + 0x16);
            sVar5 = *(short *)((int)psVar10 + iVar40 + 0x18);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar40 + 0x1a);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar40 + 0x1c);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar40 + 0x1e);
            iVar40 = iVar40 + 0x20;
          } while (uVar32 < uVar30);
        }
      }
      else if (iVar18 == 1) {
        *(undefined2 *)(this + 0x1f3e) = 0x2be;
        *(undefined2 *)(this + 0x1f46) = 0x2bd;
        *(undefined2 *)(this + 0x1f4e) = 0x2c0;
        *(undefined2 *)(this + 0x1f56) = 0x2bf;
        *(undefined2 *)(this + 0x1f5e) = 0x2c2;
        *(undefined2 *)(this + 8000) = 0;
        *(undefined2 *)(this + 0x1f42) = 0;
        *(undefined2 *)(this + 0x1f48) = 0;
        *(undefined2 *)(this + 0x1f4a) = 0;
        *(undefined2 *)(this + 0x1f50) = 0;
        *(undefined2 *)(this + 0x1f52) = 0;
        *(undefined2 *)(this + 0x1f58) = 0;
        *(undefined2 *)(this + 0x1f5a) = 0;
        *(undefined2 *)(this + 0x1f66) = 0x2c1;
        *(undefined2 *)(this + 0x1f6e) = 0x2c4;
        *(undefined2 *)(this + 0x1f76) = 0x2c3;
        *(undefined2 *)(this + 0x1f7e) = 0x2c6;
        *(undefined2 *)(this + 0x1f60) = 0;
        *(undefined2 *)(this + 0x1f62) = 0;
        *(undefined2 *)(this + 0x1f68) = 0;
        *(undefined2 *)(this + 0x1f6a) = 0;
        *(undefined2 *)(this + 0x1f70) = 0;
        *(undefined2 *)(this + 0x1f72) = 0;
        *(undefined2 *)(this + 0x1f78) = 0;
        *(undefined2 *)(this + 0x1f7a) = 0;
        *(undefined2 *)(this + 0x1f86) = 0x2c5;
        *(undefined2 *)(this + 0x1f8e) = 0x2c8;
        *(undefined2 *)(this + 0x1f80) = 0;
        *(undefined2 *)(this + 0x1f82) = 0;
        *(undefined2 *)(this + 0x1f88) = 0;
        *(undefined2 *)(this + 0x1f8a) = 0;
        *(undefined2 *)(this + 0x1f90) = 0;
        *(undefined2 *)(this + 0x1f92) = 0;
        *(undefined2 *)(this + 0x1f96) = 0x2c7;
        *(undefined2 *)(this + 0x1f98) = 0;
        *(undefined2 *)(this + 0x1f9a) = 0;
        *(undefined2 *)(this + 0x20ae) = 0x2ca;
        *(undefined2 *)(this + 0x20b6) = 0x2c9;
        *(undefined2 *)(this + 0x209e) = 0x2cc;
        *(undefined2 *)(this + 0x20be) = 0x2ce;
        *(undefined2 *)(this + 0x20a6) = 0x2cb;
        *(undefined2 *)(this + 0x20a0) = 0;
        *(undefined2 *)(this + 0x20a2) = 0;
        *(undefined2 *)(this + 0x20a8) = 0;
        *(undefined2 *)(this + 0x20aa) = 0;
        *(undefined2 *)(this + 0x20b0) = 0;
        *(undefined2 *)(this + 0x20b2) = 0;
        *(undefined2 *)(this + 0x20b8) = 0;
        *(undefined2 *)(this + 0x20ba) = 0;
        *(undefined2 *)(this + 0x20c6) = 0x2cd;
        *(undefined2 *)(this + 0x20ce) = 0x2d3;
        *(undefined2 *)(this + 0x20d6) = 0x2d4;
        *(undefined2 *)(this + 0x20de) = 0x2d5;
        *(undefined2 *)(this + 0x20e6) = 0x2d6;
        *(undefined2 *)(this + 0x20ee) = 0x2d7;
        *(undefined2 *)(this + 0x20c0) = 0;
        *(undefined2 *)(this + 0x20c2) = 0;
        *(undefined2 *)(this + 0x20c8) = 0;
        *(undefined2 *)(this + 0x20ca) = 0;
        *(undefined2 *)(this + 0x20d0) = 0;
        *(undefined2 *)(this + 0x20d2) = 0;
        *(undefined2 *)(this + 0x20d8) = 0;
        *(undefined2 *)(this + 0x20da) = 0;
        *(undefined2 *)(this + 0x20e0) = 0;
        *(undefined2 *)(this + 0x20e2) = 0;
        *(undefined2 *)(this + 0x20e8) = 0;
        *(undefined2 *)(this + 0x20ea) = 0;
        *(undefined2 *)(this + 0x20f0) = 0;
        *(undefined2 *)(this + 0x20f6) = 0x2d8;
        *(undefined2 *)(this + 0x20fe) = 0x2cf;
        *(undefined2 *)(this + 0x20f2) = 0;
        *(undefined2 *)(this + 0x20f8) = 0;
        *(undefined2 *)(this + 0x20fa) = 0;
        *(undefined2 *)(this + 0x2106) = 0x2d0;
        *(undefined2 *)(this + 0x212e) = 0x2d9;
        *(undefined2 *)(this + 0x213e) = 0x2d1;
        *(undefined2 *)(this + 0x2136) = 0x2da;
        *(undefined2 *)(this + 0x2100) = 0;
        *(undefined2 *)(this + 0x2102) = 0;
        *(undefined2 *)(this + 0x2108) = 0;
        *(undefined2 *)(this + 0x210a) = 0;
        *(undefined2 *)(this + 0x2130) = 0;
        *(undefined2 *)(this + 0x2132) = 0;
        *(undefined2 *)(this + 0x2138) = 0;
        *(undefined2 *)(this + 0x213a) = 0;
        *(undefined2 *)(this + 0x2146) = 0x2d2;
        *(undefined2 *)(this + 0x2156) = 0x2db;
        *(undefined2 *)(this + 0x215e) = 0x2dc;
        *(undefined2 *)(this + 0x2140) = 0;
        *(undefined2 *)(this + 0x2142) = 0;
        *(undefined2 *)(this + 0x2148) = 0;
        *(undefined2 *)(this + 0x214a) = 0;
        *(undefined2 *)(this + 0x2158) = 0;
        *(undefined2 *)(this + 0x215a) = 0;
        *(undefined2 *)(this + 0x2160) = 0;
        *(undefined2 *)(this + 0x2162) = 0;
        *(undefined2 *)(this + 0x2168) = 0;
        *(undefined2 *)(this + 0x216a) = 0;
        *(undefined2 *)(this + 0x2170) = 0;
        *(undefined2 *)(this + 0x2166) = 0x2de;
        *(undefined2 *)(this + 0x216e) = 0x2dd;
        *(undefined2 *)(this + 0x2172) = 0;
        *(undefined2 *)(this + 0x2176) = 0x2df;
        *(undefined2 *)(this + 0x2178) = 0;
        *(undefined2 *)(this + 0x217a) = 0;
        *(undefined2 *)(this + 0x217e) = 0x2e1;
        *(undefined2 *)(this + 0x2180) = 0;
        *(undefined2 *)(this + 0x2182) = 0;
        *(undefined2 *)(this + 0x2188) = 0;
        *(undefined2 *)(this + 0x218a) = 0;
        *(undefined2 *)(this + 0x2190) = 0;
        *(undefined2 *)(this + 0x2192) = 0;
        *(undefined2 *)(this + 0x2198) = 0;
        *(undefined2 *)(this + 0x219a) = 0;
        *(undefined2 *)(this + 0x21a0) = 0;
        *(undefined2 *)(this + 0x21a2) = 0;
        *(undefined2 *)(this + 0x21a8) = 0;
        *(undefined2 *)(this + 0x21aa) = 0;
        *(undefined2 *)(this + 0x2186) = 0x2e0;
        *(undefined2 *)(this + 0x218e) = 0x2e2;
        *(undefined2 *)(this + 0x2196) = 0x2e4;
        *(undefined2 *)(this + 0x219e) = 0x2e3;
        *(undefined2 *)(this + 0x21a6) = 0x2e5;
      }
LAB_00057a70:
      *(undefined2 *)(this + 0x24f6) = 0xd;
      *(undefined2 *)(this + 0x24fe) = 0xe;
      *(undefined2 *)(this + 0x24f8) = 0;
      *(undefined2 *)(this + 0x24fa) = 0;
      *(undefined2 *)(this + 0x2506) = 0xf;
      *(undefined2 *)(this + 0x250e) = 0x10;
      *(undefined2 *)(this + 0x253e) = 9;
      *(undefined2 *)(this + 0x2500) = 0;
      *(undefined2 *)(this + 0x2502) = 0;
      *(undefined2 *)(this + 0x2508) = 0;
      *(undefined2 *)(this + 0x250a) = 0;
      *(undefined2 *)(this + 0x2510) = 0;
      *(undefined2 *)(this + 0x2512) = 0;
      *(undefined2 *)(this + 0x2556) = 10;
      *(undefined2 *)(this + 0x255e) = 0xb;
      *(undefined2 *)(this + 0x2540) = 0;
      *(undefined2 *)(this + 0x2542) = 0;
      *(undefined2 *)(this + 0x2558) = 0;
      *(undefined2 *)(this + 0x255a) = 0;
      *(undefined2 *)(this + 0x2560) = 0;
      *(undefined2 *)(this + 0x2562) = 0;
      *(undefined2 *)(this + 0x2588) = 0;
      *(undefined2 *)(this + 0x258a) = 0;
      *(undefined2 *)(this + 0x2590) = 0;
      *(undefined2 *)(this + 0x2592) = 0;
      *(undefined2 *)(this + 0x2598) = 0;
      *(undefined2 *)(this + 0x259a) = 0;
      *(undefined2 *)(this + 0x25b0) = 0;
      *(undefined2 *)(this + 0x25b2) = 0;
      *(undefined2 *)(this + 0x2586) = 0x13;
      *(undefined2 *)(this + 0x25ae) = 0xc;
      *(undefined2 *)(this + 0x2596) = 0x15;
      iVar19 = DAT_00057f5c;
      *(undefined2 *)(this + 0x258e) = 0x14;
      *(undefined2 *)(this + 0x25b6) = 0x16;
      *(undefined2 *)(this + 0x25b8) = 0;
      *(undefined2 *)(this + 0x25ba) = 0;
      *(undefined2 *)(this + 0x25be) = 7;
      *(undefined2 *)(this + 0x25c6) = 0x11;
      iVar19 = iVar19 + 0x57b58;
      *(undefined2 *)(this + 0x25c0) = 0;
      *(undefined2 *)(this + 0x25c2) = 0;
      *(undefined2 *)(this + 0x25c8) = 0;
      *(undefined2 *)(this + 0x25ca) = 0;
      *(undefined2 *)(this + 0x25d0) = 0;
      *(undefined2 *)(this + 0x25d2) = 0;
      *(undefined2 *)(this + 0x25d8) = 0;
      *(undefined2 *)(this + 0x25da) = 0;
      *(undefined2 *)(this + 0x25ce) = 8;
      *(undefined2 *)(this + 0x25d6) = 0x12;
      iVar40 = 0;
      if (local_4c == 3) {
        *(undefined2 *)(this + 0x327e) = 0x1c1;
        *(undefined2 *)(this + 0x3280) = 0;
        *(undefined2 *)(this + 0x3282) = 0;
        *(undefined2 *)(this + 0x3288) = 0;
        *(undefined2 *)(this + 0x328a) = 0;
        *(undefined2 *)(this + 0x3290) = 0;
        *(undefined2 *)(this + 0x3292) = 0;
        *(undefined2 *)(this + 0x3298) = 0;
        *(undefined2 *)(this + 0x329a) = 0;
        *(undefined2 *)(this + 0x32a0) = 0;
        *(undefined2 *)(this + 0x32a2) = 0;
        *(undefined2 *)(this + 0x32b8) = 0;
        *(undefined2 *)(this + 0x32ba) = 0;
        *(undefined2 *)(this + 0x3286) = 0x1bf;
        *(undefined2 *)(this + 0x328e) = 0x1bd;
        *(undefined2 *)(this + 0x3296) = 0x1bb;
        *(undefined2 *)(this + 0x329e) = 5;
        *(undefined2 *)(this + 0x32b6) = 0x1c2;
        *(undefined2 *)(this + 0x32be) = 0x1c0;
        *(undefined2 *)(this + 0x32c0) = 0;
        *(undefined2 *)(this + 0x32c2) = 0;
        *(undefined2 *)(this + 13000) = 0;
        *(undefined2 *)(this + 0x32ca) = 0;
        *(undefined2 *)(this + 0x32d0) = 0;
        *(undefined2 *)(this + 0x32d2) = 0;
        *(undefined2 *)(this + 0x32d8) = 0;
        *(undefined2 *)(this + 0x32da) = 0;
        *(undefined2 *)(this + 0x32c6) = 0x1be;
        *(undefined2 *)(this + 0x32ce) = 0x1bc;
        *(undefined2 *)(this + 0x32d6) = 6;
      }
      else {
        do {
          sVar5 = *(short *)(iVar19 + iVar40);
          iVar7 = iVar19 + iVar40;
          iVar15 = iVar40 + 0x20;
          sVar33 = *(short *)(iVar19 + iVar40 + 8);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
          iVar8 = iVar19 + iVar40 + 8;
          *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
          iVar31 = iVar19 + iVar40 + 0x10;
          sVar5 = *(short *)(iVar19 + iVar40 + 0x10);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 2);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 4);
          iVar7 = iVar19 + iVar40 + 0x18;
          sVar34 = *(short *)(iVar19 + iVar40 + 0x18);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 6);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar31 + 2);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 4);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 6);
          *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
          *(undefined2 *)(this + sVar34 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
          *(undefined2 *)(this + sVar34 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
          iVar8 = DAT_0005a574;
          iVar7 = DAT_000598f8;
          iVar40 = iVar15;
        } while (iVar15 != 0x640);
        if (local_4c == 0) {
          iVar40 = DAT_00057f60 + 0x58280;
          iVar19 = 0;
          do {
            sVar5 = *(short *)(iVar40 + iVar19);
            iVar7 = iVar40 + iVar19;
            sVar33 = *(short *)(iVar40 + iVar19 + 8);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            iVar15 = iVar40 + iVar19 + 8;
            iVar8 = iVar40 + iVar19 + 0x10;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            sVar5 = *(short *)(iVar40 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar15 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar15 + 4);
            iVar31 = iVar40 + iVar19 + 0x18;
            sVar34 = *(short *)(iVar40 + iVar19 + 0x18);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar15 + 6);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 2);
            iVar7 = iVar40 + iVar19 + 0x20;
            sVar33 = *(short *)(iVar40 + iVar19 + 0x20);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 4);
            iVar15 = iVar19 + 0x28;
            iVar19 = iVar19 + 0x30;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 6);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) = *(undefined2 *)(iVar31 + 2);
            iVar8 = iVar40 + iVar15;
            *(undefined2 *)(this + sVar34 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 4);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 6);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            sVar5 = *(short *)(iVar40 + iVar15);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 4);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 6);
          } while (iVar19 != 0x1b0);
        }
        else if (local_4c == 1) {
          psVar10 = (short *)(DAT_0005a574 + 0x5a130);
          sVar5 = *psVar10;
          sVar33 = *(short *)(DAT_0005a574 + 0x5a138);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(DAT_0005a574 + 0x5a132);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 0x5a134);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 0x5a136);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 0x5a13a);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 0x5a13c);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 0x5a13e);
          iVar19 = 0x10;
          do {
            sVar33 = *(short *)((int)psVar10 + iVar19);
            iVar40 = iVar19 + 0x20;
            sVar5 = *(short *)((int)psVar10 + iVar19 + 8);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 2)
            ;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)((int)psVar10 + iVar19 + 4)
            ;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)((int)psVar10 + iVar19 + 6)
            ;
            sVar33 = *(short *)((int)psVar10 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 10)
            ;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0xc);
            sVar34 = *(short *)((int)psVar10 + iVar19 + 0x18);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0xe);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x12);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x14);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x16);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1a);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1c);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1e);
            iVar19 = iVar40;
          } while (iVar40 != 0x310);
        }
        else if (local_4c == 2) {
          psVar10 = (short *)(DAT_000598f8 + 0x5a360);
          sVar5 = *psVar10;
          sVar33 = *(short *)(DAT_000598f8 + 0x5a368);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(DAT_000598f8 + 0x5a362);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 0x5a364);
          *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 0x5a366);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 0x5a36a);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 0x5a36c);
          *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 0x5a36e);
          iVar19 = 0x10;
          do {
            sVar33 = *(short *)((int)psVar10 + iVar19);
            iVar40 = iVar19 + 0x20;
            sVar5 = *(short *)((int)psVar10 + iVar19 + 8);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 2)
            ;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)((int)psVar10 + iVar19 + 4)
            ;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)((int)psVar10 + iVar19 + 6)
            ;
            sVar33 = *(short *)((int)psVar10 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar10 + iVar19 + 10)
            ;
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0xc);
            sVar34 = *(short *)((int)psVar10 + iVar19 + 0x18);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0xe);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x12);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x14);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x16);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1a);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1c);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar10 + iVar19 + 0x1e);
            iVar19 = iVar40;
          } while (iVar40 != 0x310);
        }
        else if (local_4c == 4) {
          *(undefined2 *)(this + 0x2fde) = 0x4a0;
          *(undefined2 *)(this + 0x2fd6) = 0x4a1;
          *(undefined2 *)(this + 0x2fe6) = 0x4a2;
          *(undefined2 *)(this + 0x2fe0) = 2;
          *(undefined2 *)(this + 0x2fd8) = 2;
          *(undefined2 *)(this + 0x2fe8) = 2;
          *(undefined2 *)(this + 0x2fe2) = 0;
          *(undefined2 *)(this + 0x2fda) = 0;
          *(undefined2 *)(this + 0x2fea) = 0;
          *(undefined2 *)(this + 0x301e) = 0x4a3;
          *(undefined2 *)(this + 0x3016) = 0x4a4;
          *(undefined2 *)(this + 0x3026) = 0x4a5;
          *(undefined2 *)(this + 0x3020) = 2;
          *(undefined2 *)(this + 0x3022) = 0;
          *(undefined2 *)(this + 0x3018) = 2;
          *(undefined2 *)(this + 0x301a) = 0;
          *(undefined2 *)(this + 0x3028) = 2;
          *(undefined2 *)(this + 0x302a) = 0;
          *(undefined2 *)(this + 0x2fb0) = 2;
          *(undefined2 *)(this + 0x2fb2) = 0;
          *(undefined2 *)(this + 0x2fb8) = 2;
          *(undefined2 *)(this + 0x2fba) = 0;
          *(undefined2 *)(this + 0x2fae) = 0x4a6;
          *(undefined2 *)(this + 0x2fb6) = 0x4a7;
          *(undefined2 *)(this + 0x2fbe) = 0x4a8;
          *(undefined2 *)(this + 0x2fc6) = 0x4a9;
          *(undefined2 *)(this + 0x2fc0) = 2;
          *(undefined2 *)(this + 0x2fc2) = 0;
          *(undefined2 *)(this + 0x2fc8) = 2;
          *(undefined2 *)(this + 0x2fca) = 0;
          *(undefined2 *)(this + 0x2fd0) = 2;
          *(undefined2 *)(this + 0x2fd2) = 0;
          *(undefined2 *)(this + 0x2fce) = 0x4aa;
          *(undefined2 *)(this + 0x2ff6) = 0x4ac;
          *(undefined2 *)(this + 0x2ffe) = 0x4ad;
          *(undefined2 *)(this + 0x2fee) = 0x4ab;
          *(undefined2 *)(this + 0x2ff0) = 2;
          *(undefined2 *)(this + 0x2ff2) = 0;
          *(undefined2 *)(this + 0x2ff8) = 2;
          *(undefined2 *)(this + 0x2ffa) = 0;
          *(undefined2 *)(this + 0x300e) = 0x4af;
          *(undefined2 *)(this + 0x3006) = 0x4ae;
          *(undefined2 *)(this + 0x302e) = 0x4b0;
          *(undefined2 *)(this + 0x3002) = 0;
          *(undefined2 *)(this + 0x3008) = 2;
          *(undefined2 *)(this + 0x300a) = 0;
          *(undefined2 *)(this + 0x3010) = 2;
          *(undefined2 *)(this + 0x3012) = 0;
          *(undefined2 *)(this + 0x3000) = 2;
          *(undefined2 *)(this + 0x3030) = 2;
          *(undefined2 *)(this + 0x3032) = 0;
          *(undefined2 *)(this + 0x3038) = 2;
          *(undefined2 *)(this + 0x303a) = 0;
          *(undefined2 *)(this + 0x3036) = 0x4b1;
          *(undefined2 *)(this + 0x303e) = 0x4b2;
          *(undefined2 *)(this + 0x3040) = 2;
          *(undefined2 *)(this + 0x3042) = 0;
          *(undefined2 *)(this + 0x3048) = 2;
          *(undefined2 *)(this + 0x304a) = 0;
          *(undefined2 *)(this + 0x3050) = 2;
          *(undefined2 *)(this + 0x3052) = 0;
          *(undefined2 *)(this + 0x3058) = 2;
          *(undefined2 *)(this + 0x305a) = 0;
          *(undefined2 *)(this + 0x3046) = 0x4b3;
          *(undefined2 *)(this + 0x3056) = 0x4b5;
          *(undefined2 *)(this + 0x304e) = 0x4b4;
          *(undefined2 *)(this + 0x305e) = 0x4b6;
          *(undefined2 *)(this + 0x3060) = 2;
          *(undefined2 *)(this + 0x3062) = 0;
          *(undefined2 *)(this + 0x3068) = 2;
          *(undefined2 *)(this + 0x306a) = 0;
          *(undefined2 *)(this + 0x3070) = 2;
          *(undefined2 *)(this + 0x3072) = 0;
          *(undefined2 *)(this + 0x3078) = 2;
          *(undefined2 *)(this + 0x307a) = 0;
          *(undefined2 *)(this + 0x3066) = 0x4b7;
          *(undefined2 *)(this + 0x306e) = 0x4b8;
          *(undefined2 *)(this + 0x3076) = 0x4b9;
          *(undefined2 *)(this + 0x307e) = 0x4ba;
          *(undefined2 *)(this + 0x3082) = 0;
          *(undefined2 *)(this + 0x308a) = 0;
          *(undefined2 *)(this + 0x3092) = 0;
          *(undefined2 *)(this + 0x30aa) = 0;
          *(undefined2 *)(this + 0x30b2) = 0;
          *(undefined2 *)(this + 0x30ba) = 0;
          *(undefined2 *)(this + 0x3086) = 0x4bb;
          *(undefined2 *)(this + 0x308e) = 0x4bc;
          *(undefined2 *)(this + 0x30a6) = 0x4bd;
          *(undefined2 *)(this + 0x30ae) = 0x4be;
          *(undefined2 *)(this + 0x30b6) = 0x4bf;
          *(undefined2 *)(this + 0x3080) = 1;
          *(undefined2 *)(this + 0x3088) = 1;
          *(undefined2 *)(this + 0x3090) = 1;
          *(undefined2 *)(this + 0x30a8) = 1;
          *(undefined2 *)(this + 0x30b0) = 1;
          *(undefined2 *)(this + 0x30b8) = 1;
        }
      }
      if (*(int *)(this + 0x1e58) == 0) {
        if (*(int *)(this + 0x1e64) == 0) {
          iVar40 = DAT_000598e4 + 0x59ace;
          iVar19 = 0;
          do {
            sVar33 = *(short *)(iVar40 + iVar19);
            iVar7 = iVar40 + iVar19;
            iVar31 = iVar19 + 0x20;
            sVar5 = *(short *)(iVar40 + iVar19 + 8);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            iVar8 = iVar40 + iVar19 + 8;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            iVar7 = iVar40 + iVar19 + 0x10;
            sVar33 = *(short *)(iVar40 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 4);
            iVar15 = iVar40 + iVar19 + 0x18;
            sVar34 = *(short *)(iVar40 + iVar19 + 0x18);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 6);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) = *(undefined2 *)(iVar15 + 2);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e70) = *(undefined2 *)(iVar15 + 4);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e72) = *(undefined2 *)(iVar15 + 6);
            iVar19 = iVar31;
          } while (iVar31 != 0x2a0);
        }
        else {
          iVar40 = DAT_000598f4 + 0x5959a;
          iVar19 = 0;
          do {
            sVar33 = *(short *)(iVar40 + iVar19);
            iVar7 = iVar40 + iVar19;
            iVar31 = iVar19 + 0x20;
            sVar5 = *(short *)(iVar40 + iVar19 + 8);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            iVar8 = iVar40 + iVar19 + 8;
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            iVar7 = iVar40 + iVar19 + 0x10;
            sVar33 = *(short *)(iVar40 + iVar19 + 0x10);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e6e) = *(undefined2 *)(iVar8 + 2);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e70) = *(undefined2 *)(iVar8 + 4);
            iVar15 = iVar40 + iVar19 + 0x18;
            sVar34 = *(short *)(iVar40 + iVar19 + 0x18);
            *(undefined2 *)(this + sVar5 * 8 + 0x1e72) = *(undefined2 *)(iVar8 + 6);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e6e) = *(undefined2 *)(iVar7 + 2);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e70) = *(undefined2 *)(iVar7 + 4);
            *(undefined2 *)(this + sVar33 * 8 + 0x1e72) = *(undefined2 *)(iVar7 + 6);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e6e) = *(undefined2 *)(iVar15 + 2);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e70) = *(undefined2 *)(iVar15 + 4);
            *(undefined2 *)(this + sVar34 * 8 + 0x1e72) = *(undefined2 *)(iVar15 + 6);
            iVar19 = iVar31;
          } while (iVar31 != 0x2c0);
        }
      }
      else if (*(int *)(this + 0x1e58) == 1) {
        *(undefined2 *)(this + 0x335e) = 0x18;
        *(undefined2 *)(this + 0x3366) = 0x19;
        *(undefined2 *)(this + 0x3360) = 0;
        *(undefined2 *)(this + 0x336e) = 0x1a;
        *(undefined2 *)(this + 0x3376) = 0x1b;
        *(undefined2 *)(this + 0x337e) = 0x1c;
        *(undefined2 *)(this + 0x3362) = 0;
        *(undefined2 *)(this + 0x3368) = 0;
        *(undefined2 *)(this + 0x336a) = 0;
        *(undefined2 *)(this + 0x3370) = 0;
        *(undefined2 *)(this + 0x3372) = 0;
        *(undefined2 *)(this + 0x3378) = 0;
        *(undefined2 *)(this + 0x337a) = 0;
        *(undefined2 *)(this + 0x3380) = 0;
        *(undefined2 *)(this + 0x3386) = 0x1d;
        *(undefined2 *)(this + 0x3382) = 0;
        *(undefined2 *)(this + 0x3388) = 0;
        *(undefined2 *)(this + 0x338a) = 0;
        *(undefined2 *)(this + 0x3390) = 0;
        *(undefined2 *)(this + 0x3392) = 0;
        *(undefined2 *)(this + 0x3398) = 0;
        *(undefined2 *)(this + 0x339a) = 0;
        *(undefined2 *)(this + 0x33a0) = 0;
        *(undefined2 *)(this + 0x33a2) = 0;
        *(undefined2 *)(this + 0x338e) = 0x1e;
        *(undefined2 *)(this + 0x3396) = 0x1f;
        *(undefined2 *)(this + 0x339e) = 0x17;
        *(undefined2 *)(this + 0x343e) = 0x20;
        *(undefined2 *)(this + 0x3440) = 0;
        *(undefined2 *)(this + 0x3442) = 0;
      }
      *(undefined2 *)(this + 0x363e) = 0x47c;
      *(undefined2 *)local_68 = 0;
      *(undefined2 *)(this + 0x3642) = 0;
      *(undefined2 *)(this + 0x3656) = 0x47d;
      *(undefined2 *)(this + 0x365e) = 0x47f;
      *(undefined2 *)(this + 0x3658) = 0;
      *(undefined2 *)(this + 0x365a) = 0;
      *(undefined2 *)(this + 0x3660) = 0;
      *(undefined2 *)(this + 0x3662) = 0;
      *(undefined2 *)(this + 0x3646) = 0x47e;
      *(undefined2 *)(this + 0x3648) = 0;
      *(undefined2 *)(this + 0x364a) = 0;
      *(undefined2 *)(this + 0x24d6) = 0x45e;
      *(undefined2 *)(this + 0x24de) = 0x461;
      *(undefined2 *)(this + 0x24d8) = 0;
      *(undefined2 *)(this + 0x24da) = 0;
      *(undefined2 *)(this + 0x24e0) = 0;
      *(undefined2 *)(this + 0x24e2) = 0;
      *(undefined2 *)(this + 0x2516) = 0x460;
      *(undefined2 *)(this + 0x2518) = 1;
      *(undefined2 *)(this + 0x2520) = 1;
      *(undefined2 *)(this + 0x251e) = 0x45f;
      *(undefined2 *)(this + 0x251a) = 0;
      *(undefined2 *)(this + 0x2522) = 0;
      *(undefined2 *)(this + 0x2568) = 1;
      *(undefined2 *)(this + 0x2570) = 1;
      *(undefined2 *)(this + 0x256a) = 0;
      *(undefined2 *)(this + 0x2572) = 0;
      *(undefined2 *)(this + 0x2566) = 0x463;
      *(undefined2 *)(this + 0x257e) = 0x464;
      *(undefined2 *)(this + 0x256e) = 0x462;
      *(undefined2 *)(this + 0x2580) = 1;
      *(undefined2 *)(this + 0x2582) = 0;
      *(undefined2 *)(this + 0x25de) = 0x465;
      *(undefined2 *)(this + 0x25e6) = 0x46f;
      *(undefined2 *)(this + 0x25ee) = 0x471;
      *(undefined2 *)(this + 0x25f6) = 0x473;
      *(undefined2 *)(this + 0x25fe) = 0x475;
      *(undefined2 *)(this + 0x25e0) = 0;
      *(undefined2 *)(this + 0x25e2) = 0;
      *(undefined2 *)(this + 0x25e8) = 0;
      *(undefined2 *)(this + 0x25ea) = 0;
      *(undefined2 *)(this + 0x25f0) = 0;
      *(undefined2 *)(this + 0x25f2) = 0;
      *(undefined2 *)(this + 0x25f8) = 0;
      *(undefined2 *)(this + 0x25fa) = 0;
      *(undefined2 *)(this + 0x2606) = 0x467;
      *(undefined2 *)(this + 0x260e) = 0x469;
      *(undefined2 *)(this + 0x2600) = 0;
      *(undefined2 *)(this + 0x2602) = 0;
      *(undefined2 *)(this + 0x2608) = 0;
      *(undefined2 *)(this + 0x260a) = 0;
      *(undefined2 *)(this + 0x2610) = 0;
      *(undefined2 *)(this + 0x2612) = 0;
      *(undefined2 *)(this + 0x2618) = 0;
      *(undefined2 *)(this + 0x261a) = 0;
      *(undefined2 *)(this + 0x2620) = 0;
      *(undefined2 *)(this + 0x2622) = 0;
      *(undefined2 *)(this + 0x2628) = 0;
      *(undefined2 *)(this + 0x262a) = 0;
      *(undefined2 *)(this + 0x2630) = 0;
      *(undefined2 *)(this + 0x2632) = 0;
      *(undefined2 *)(this + 0x2616) = 0x46b;
      *(undefined2 *)(this + 0x261e) = 0x46d;
      *(undefined2 *)(this + 0x2626) = 0x470;
      *(undefined2 *)(this + 0x262e) = 0x472;
      *(undefined2 *)(this + 0x2636) = 0x474;
      *(undefined2 *)(this + 0x263e) = 0x476;
      *(undefined2 *)(this + 0x2638) = 0;
      *(undefined2 *)(this + 0x263a) = 0;
      *(undefined2 *)(this + 0x264e) = 0x468;
      *(undefined2 *)(this + 0x2656) = 0x46a;
      *(undefined2 *)(this + 0x265e) = 0x46c;
      *(undefined2 *)(this + 0x2640) = 0;
      *(undefined2 *)(this + 0x2642) = 0;
      *(undefined2 *)(this + 0x2648) = 0;
      *(undefined2 *)(this + 0x264a) = 0;
      *(undefined2 *)(this + 0x2650) = 0;
      *(undefined2 *)(this + 0x2652) = 0;
      *(undefined2 *)(this + 0x2658) = 0;
      *(undefined2 *)(this + 0x265a) = 0;
      *(undefined2 *)(this + 0x2660) = 0;
      *(undefined2 *)(this + 0x2662) = 0;
      *(undefined2 *)(this + 0x2668) = 0;
      *(undefined2 *)(this + 0x266a) = 0;
      *(undefined2 *)(this + 0x2670) = 0;
      *(undefined2 *)(this + 0x2672) = 0;
      *(undefined2 *)(this + 0x2646) = 0x466;
      *(undefined2 *)(this + 0x2666) = 0x46e;
      *(undefined2 *)(this + 0x266e) = 0x477;
      *(undefined2 *)(this + 0x2728) = 0;
      *(undefined2 *)(this + 0x272a) = 0;
      *(undefined2 *)(this + 0x2730) = 0;
      *(undefined2 *)(this + 0x2732) = 0;
      *(undefined2 *)(this + 0x2738) = 0;
      *(undefined2 *)(this + 0x273a) = 0;
      *(undefined2 *)(this + 0x2726) = 0x479;
      *(undefined2 *)(this + 0x272e) = 0x47a;
      *(undefined2 *)(this + 0x2736) = 0x478;
      *(undefined2 *)(this + 0x2760) = 0;
      *(undefined2 *)(this + 0x275e) = 0x47b;
      *(undefined2 *)(this + 0x2762) = 0;
      if (iVar18 == 0) {
        iVar19 = *(int *)pCVar9;
        if (iVar19 == 0) {
          uVar30 = 4;
          psVar10 = (short *)(DAT_000598f0 + 0x5a09a);
LAB_000593dc:
          sVar5 = *psVar10;
          uVar32 = uVar30 - 1 & 3;
          uVar39 = 1;
          *(short *)(this + sVar5 * 0xc + 0x7436) = psVar10[1];
          psVar24 = psVar10 + 0xb;
          *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar10 + 2);
          *(short *)(this + sVar5 * 0xc + 0x743e) = psVar10[5];
          if (1 < uVar30) {
            if (uVar32 != 0) {
              if (uVar32 != 1) {
                psVar23 = psVar24;
                if (uVar32 != 2) {
                  sVar5 = psVar10[6];
                  uVar39 = 2;
                  *(short *)(this + sVar5 * 0xc + 0x7436) = psVar10[7];
                  *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar10 + 8);
                  psVar23 = psVar10 + 0x11;
                  *(short *)(this + sVar5 * 0xc + 0x743e) = *psVar24;
                }
                sVar5 = psVar23[-5];
                uVar39 = uVar39 + 1;
                *(short *)(this + sVar5 * 0xc + 0x7436) = psVar23[-4];
                *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar23 + -3);
                psVar24 = psVar23 + 6;
                *(short *)(this + sVar5 * 0xc + 0x743e) = *psVar23;
              }
              sVar5 = psVar24[-5];
              uVar39 = uVar39 + 1;
              *(short *)(this + sVar5 * 0xc + 0x7436) = psVar24[-4];
              *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar24 + -3);
              *(short *)(this + sVar5 * 0xc + 0x743e) = *psVar24;
              psVar24 = psVar24 + 6;
              if (uVar30 <= uVar39) goto LAB_00058eba;
            }
            do {
              sVar5 = psVar24[-5];
              uVar39 = uVar39 + 4;
              *(short *)(this + sVar5 * 0xc + 0x7436) = psVar24[-4];
              *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar24 + -3);
              *(short *)(this + sVar5 * 0xc + 0x743e) = *psVar24;
              sVar5 = psVar24[1];
              *(short *)(this + sVar5 * 0xc + 0x7436) = psVar24[2];
              *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar24 + 3);
              *(short *)(this + sVar5 * 0xc + 0x743e) = psVar24[6];
              sVar5 = psVar24[7];
              *(short *)(this + sVar5 * 0xc + 0x7436) = psVar24[8];
              *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar24 + 9);
              *(short *)(this + sVar5 * 0xc + 0x743e) = psVar24[0xc];
              sVar5 = psVar24[0xd];
              *(short *)(this + sVar5 * 0xc + 0x7436) = psVar24[0xe];
              *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = *(undefined4 *)(psVar24 + 0xf);
              *(short *)(this + sVar5 * 0xc + 0x743e) = psVar24[0x12];
              psVar24 = psVar24 + 0x18;
            } while (uVar39 < uVar30);
          }
        }
        else {
          if (iVar19 == 1) {
            uVar30 = 2;
            psVar10 = (short *)(&UNK_0005bab4 + DAT_0005b590);
            goto LAB_000593dc;
          }
          if (iVar19 == 2) {
            uVar30 = 4;
            psVar10 = (short *)(&UNK_0005baa8 + DAT_0005b588);
            goto LAB_000593dc;
          }
        }
LAB_00058eba:
        if (*(int *)(this + 0x1e5c) == 1) {
          sVar5 = *(short *)(DAT_000598e8 + 0x59c02);
          sVar33 = *(short *)(DAT_000598e8 + 0x59c0e);
          uVar27 = *(undefined4 *)(DAT_000598e8 + 0x59c06);
          uVar36 = *(undefined2 *)(DAT_000598e8 + 0x59c0c);
          uVar1 = *(undefined2 *)(DAT_000598e8 + 0x59c10);
          uVar14 = *(undefined4 *)(DAT_000598e8 + 0x59c12);
          uVar2 = *(undefined2 *)(DAT_000598e8 + 0x59c18);
          *(undefined2 *)(this + sVar5 * 0xc + 0x7436) = *(undefined2 *)(DAT_000598e8 + 0x59c04);
          *(undefined4 *)(this + sVar5 * 0xc + 0x7438) = uVar27;
          *(undefined2 *)(this + sVar5 * 0xc + 0x743e) = uVar36;
          *(undefined2 *)(this + sVar33 * 0xc + 0x7436) = uVar1;
          *(undefined4 *)(this + sVar33 * 0xc + 0x7438) = uVar14;
          *(undefined2 *)(this + sVar33 * 0xc + 0x743e) = uVar2;
        }
      }
      else if (iVar18 == 1) {
        *(undefined2 *)(this + 0x764e) = 0;
        *(undefined2 *)(this + 0x765a) = 0;
        *(undefined2 *)(this + 0x7666) = 0;
        *(undefined2 *)(this + 0x7672) = 0;
        *(undefined2 *)(this + 0x767e) = 0;
        *(undefined2 *)(this + 0x7646) = 0x19;
        *(undefined2 *)(this + 0x7652) = 0x1a;
        *(undefined2 *)(this + 0x765e) = 0x1b;
        *(undefined2 *)(this + 0x766a) = 0x1c;
        *(undefined2 *)(this + 0x7676) = 0x1d;
        *(undefined4 *)(this + 0x7648) = 0x8000;
        *(undefined4 *)(this + 0x7654) = 0x8000;
        *(undefined4 *)(this + 0x7660) = 0x8000;
        *(undefined4 *)(this + 0x766c) = 0x8000;
        *(undefined4 *)(this + 0x7678) = 0x8000;
        *(undefined4 *)(this + 0x7684) = 0x8000;
        *(undefined2 *)(this + 0x768a) = 0;
        *(undefined2 *)(this + 0x7682) = 0x18;
      }
      if (local_4c != 3) {
        *(undefined4 *)(this + 0x8104) = 0x8000;
        *(undefined2 *)(this + 0x8102) = 10;
        *(undefined2 *)(this + 0x810e) = 0xb;
        *(undefined2 *)(this + 0x811a) = 0xc;
        *(undefined2 *)(this + 0x8126) = 0xd;
        *(undefined4 *)(this + 0x8110) = 0x8000;
        *(undefined2 *)(this + 0x8132) = 0xe;
        *(undefined2 *)(this + 0x813e) = 0xf;
        *(undefined4 *)(this + 0x811c) = 0x8000;
        *(undefined4 *)(this + 0x8128) = 0x8000;
        *(undefined4 *)(this + 0x8134) = 0x8000;
        *(undefined4 *)(this + 0x8140) = 0x8000;
        *(undefined2 *)(this + 0x810a) = 0;
        *(undefined2 *)(this + 0x8116) = 0;
        *(undefined2 *)(this + 0x8122) = 0;
        *(undefined2 *)(this + 0x812e) = 0;
        *(undefined2 *)(this + 0x813a) = 0;
        *(undefined2 *)(this + 0x8146) = 0;
        *(undefined4 *)(this + 0x8350) = 0x8000;
        *(undefined2 *)(this + 0x8356) = 0;
        *(undefined4 *)(this + 0x835c) = 0x8000;
        *(undefined2 *)(this + 0x8362) = 0;
        *(undefined4 *)(this + 0x8368) = 0x8000;
        *(undefined2 *)(this + 0x836e) = 0;
        *(undefined4 *)(this + 0x8374) = 0x8000;
        *(undefined2 *)(this + 0x837a) = 0;
        *(undefined4 *)(this + 0x8380) = 0x8000;
        *(undefined2 *)(this + 0x8386) = 0;
        *(undefined2 *)(this + 0x834e) = 0x10;
        *(undefined2 *)(this + 0x835a) = 0x11;
        *(undefined2 *)(this + 0x8366) = 0x12;
        *(undefined2 *)(this + 0x8372) = 0x13;
        *(undefined2 *)(this + 0x837e) = 0x14;
        *(undefined2 *)(this + 0x838a) = 0x15;
        *(undefined4 *)(this + 0x838c) = 0x8000;
        *(undefined2 *)(this + 0x8392) = 0;
      }
      if (iVar18 == 0) {
        if (*(int *)pCVar9 == 0) {
          uVar30 = *(uint *)(this + 0x240) >> 0x1c | (*(uint *)(this + 0x244) & 0x1ff) << 4;
          uVar39 = *(uint *)(this + 0x2a0) >> 0x1c | (*(uint *)(this + 0x2a4) & 0x1ff) << 4;
          if (uVar39 < uVar30) {
            iVar18 = uVar30 - uVar39;
          }
          else {
            iVar18 = uVar39 - uVar30;
          }
          *(int *)(this + 0x2ecad0) = iVar18;
        }
        else if (*(int *)pCVar9 == 1) {
          uVar30 = *(uint *)(this + 0x210) >> 0x1c | (*(uint *)(this + 0x214) & 0x1ff) << 4;
          uVar39 = *(uint *)(this + 0x290) >> 0x1c | (*(uint *)(this + 0x294) & 0x1ff) << 4;
          if (uVar39 < uVar30) {
            *(uint *)(this + 0x32d2d4) = uVar30 - uVar39;
          }
          else {
            *(uint *)(this + 0x32d2d4) = uVar39 - uVar30;
          }
        }
      }
      pCVar35 = this + 0x1820;
      pCVar12 = this + 0x1e6e;
      pCVar9 = pCVar35;
      do {
        if (-1 < *(short *)pCVar12) {
          if (*(short *)(pCVar12 + 4) == 0) {
            uVar17 = *(ushort *)pCVar9;
          }
          else {
            uVar16 = *(ushort *)pCVar9;
            if ((short)uVar16 < 0) {
              uVar37 = 0xc000;
              uVar17 = 0x4000;
            }
            else {
              uVar37 = 0x8000;
              uVar17 = 0;
            }
            if ((uVar16 & 0x4000) != 0) {
              uVar17 = uVar37;
            }
            if ((uVar16 & 0x2000) != 0) {
              uVar17 = uVar17 | 8;
            }
            if ((uVar16 & 0x1000) != 0) {
              uVar17 = uVar17 | 0x80;
            }
            if ((uVar16 & 0x800) != 0) {
              uVar17 = uVar17 | 1;
            }
            if ((uVar16 & 0x400) != 0) {
              uVar17 = uVar17 | 0x200;
            }
            if ((uVar16 & 0x200) != 0) {
              uVar17 = uVar17 | 0x100;
            }
            if ((uVar16 & 0x100) != 0) {
              uVar17 = uVar17 | 0x400;
            }
            if ((uVar16 & 0x80) != 0) {
              uVar17 = uVar17 | 0x10;
            }
            if ((uVar16 & 0x40) != 0) {
              uVar17 = uVar17 | 0x20;
            }
            if ((uVar16 & 0x20) != 0) {
              uVar17 = uVar17 | 0x1000;
            }
            if ((uVar16 & 0x10) != 0) {
              uVar17 = uVar17 | 0x2000;
            }
            if ((uVar16 & 8) != 0) {
              uVar17 = uVar17 | 4;
            }
            if ((uVar16 & 4) != 0) {
              uVar17 = uVar17 | 0x40;
            }
            if ((uVar16 & 2) != 0) {
              uVar17 = uVar17 | 2;
            }
            if ((int)((uint)uVar16 << 0x1f) < 0) {
              uVar17 = uVar17 | 0x800;
            }
          }
          *(int *)(this + (*(short *)pCVar12 + 0x125a) * 4 + 4) =
               (int)(short)uVar17 << ((int)*(short *)(pCVar12 + 2) & 0xffU);
        }
        pCVar12 = pCVar12 + 8;
        pCVar9 = pCVar9 + 2;
      } while (pCVar12 != this + 0x366e);
      pCVar12 = this + 0x7436;
      pCVar9 = this + 0x743c;
      do {
        if (-1 < *(short *)(pCVar9 + -6)) {
          if (*(short *)(pCVar12 + 8) == 0) {
            uVar17 = *(ushort *)pCVar35;
          }
          else {
            uVar16 = *(ushort *)pCVar35;
            if ((short)uVar16 < 0) {
              uVar37 = 0xc000;
              uVar17 = 0x4000;
            }
            else {
              uVar37 = 0x8000;
              uVar17 = 0;
            }
            if ((uVar16 & 0x4000) != 0) {
              uVar17 = uVar37;
            }
            if ((uVar16 & 0x2000) != 0) {
              uVar17 = uVar17 | 8;
            }
            if ((uVar16 & 0x1000) != 0) {
              uVar17 = uVar17 | 0x80;
            }
            if ((uVar16 & 0x800) != 0) {
              uVar17 = uVar17 | 1;
            }
            if ((uVar16 & 0x400) != 0) {
              uVar17 = uVar17 | 0x200;
            }
            if ((uVar16 & 0x200) != 0) {
              uVar17 = uVar17 | 0x100;
            }
            if ((uVar16 & 0x100) != 0) {
              uVar17 = uVar17 | 0x400;
            }
            if ((uVar16 & 0x80) != 0) {
              uVar17 = uVar17 | 0x10;
            }
            if ((uVar16 & 0x40) != 0) {
              uVar17 = uVar17 | 0x20;
            }
            if ((uVar16 & 0x20) != 0) {
              uVar17 = uVar17 | 0x1000;
            }
            if ((uVar16 & 0x10) != 0) {
              uVar17 = uVar17 | 0x2000;
            }
            if ((uVar16 & 8) != 0) {
              uVar17 = uVar17 | 4;
            }
            if ((uVar16 & 4) != 0) {
              uVar17 = uVar17 | 0x40;
            }
            if ((uVar16 & 2) != 0) {
              uVar17 = uVar17 | 2;
            }
            if ((int)((uint)uVar16 << 0x1f) < 0) {
              uVar17 = uVar17 | 0x800;
            }
          }
          *(int *)(this + (*(short *)(pCVar9 + -6) + 0x262a) * 4 + 4) =
               ((int)(short)uVar17 * *(int *)(pCVar9 + -4) << ((int)*(short *)(pCVar12 + 6) & 0xffU)
               ) >> 7;
        }
        pCVar12 = pCVar12 + 0xc;
        pCVar35 = pCVar35 + 2;
        pCVar9 = pCVar9 + 0xc;
      } while (pCVar12 != this + 0x9836);
    }
    else {
      *(undefined4 *)(this + 8) = 0;
    }
    iVar18 = *(int *)(this + 0x14);
LAB_00055fa0:
    iVar18 = iVar18 + 1;
    if (iVar18 == 0x300) {
      iVar18 = 0;
    }
    *(int *)(this + 0x14) = iVar18;
    return;
  }
  iVar18 = *(int *)(this + 0x18);
  uVar17 = (ushort)param_2;
  pCVar9 = this + iVar18 * 2 + 0x1820;
  *(ushort *)pCVar9 = uVar17;
  if (-1 < *(short *)(this + iVar18 * 8 + 0x1e6e)) {
    uVar16 = uVar17;
    if (*(short *)(this + iVar18 * 8 + 0x1e72) != 0) {
      if ((short)uVar17 < 0) {
        uVar37 = 0xc000;
        uVar16 = 0x4000;
      }
      else {
        uVar37 = 0x8000;
        uVar16 = 0;
      }
      if ((param_2 & 0x4000) != 0) {
        uVar16 = uVar37;
      }
      if ((int)(param_2 << 0x12) < 0) {
        uVar16 = uVar16 | 8;
      }
      if ((int)(param_2 << 0x13) < 0) {
        uVar16 = uVar16 | 0x80;
      }
      if ((int)(param_2 << 0x14) < 0) {
        uVar16 = uVar16 | 1;
      }
      if ((int)(param_2 << 0x15) < 0) {
        uVar16 = uVar16 | 0x200;
      }
      if ((int)(param_2 << 0x16) < 0) {
        uVar16 = uVar16 | 0x100;
      }
      if ((int)(param_2 << 0x17) < 0) {
        uVar16 = uVar16 | 0x400;
      }
      if ((int)(param_2 << 0x18) < 0) {
        uVar16 = uVar16 | 0x10;
      }
      if ((int)(param_2 << 0x19) < 0) {
        uVar16 = uVar16 | 0x20;
      }
      if ((int)(param_2 << 0x1a) < 0) {
        uVar16 = uVar16 | 0x1000;
      }
      if ((int)(param_2 << 0x1b) < 0) {
        uVar16 = uVar16 | 0x2000;
      }
      if ((int)(param_2 << 0x1c) < 0) {
        uVar16 = uVar16 | 4;
      }
      if ((int)(param_2 << 0x1d) < 0) {
        uVar16 = uVar16 | 0x40;
      }
      if ((int)(param_2 << 0x1e) < 0) {
        uVar16 = uVar16 | 2;
      }
      if ((int)(param_2 << 0x1f) < 0) {
        uVar16 = uVar16 | 0x800;
      }
    }
    *(int *)(this + (*(short *)(this + iVar18 * 8 + 0x1e6e) + 0x125a) * 4 + 4) =
         (int)(short)uVar16 << ((int)*(short *)(this + iVar18 * 8 + 0x1e70) & 0xffU);
  }
  if (-1 < *(short *)(this + iVar18 * 0xc + 0x7436)) {
    if (*(short *)(this + iVar18 * 0xc + 0x743e) == 0) {
      uVar37 = *(ushort *)pCVar9;
    }
    else {
      uVar16 = *(ushort *)pCVar9;
      uVar30 = (uint)uVar16;
      if ((short)uVar16 < 0) {
        uVar25 = 0xc000;
        uVar37 = 0x4000;
      }
      else {
        uVar25 = 0x8000;
        uVar37 = 0;
      }
      if ((uVar16 & 0x4000) != 0) {
        uVar37 = uVar25;
      }
      if ((int)(uVar30 << 0x12) < 0) {
        uVar37 = uVar37 | 8;
      }
      if ((int)(uVar30 << 0x13) < 0) {
        uVar37 = uVar37 | 0x80;
      }
      if ((int)(uVar30 << 0x14) < 0) {
        uVar37 = uVar37 | 1;
      }
      if ((int)(uVar30 << 0x15) < 0) {
        uVar37 = uVar37 | 0x200;
      }
      if ((int)(uVar30 << 0x16) < 0) {
        uVar37 = uVar37 | 0x100;
      }
      if ((int)(uVar30 << 0x17) < 0) {
        uVar37 = uVar37 | 0x400;
      }
      if ((int)(uVar30 << 0x18) < 0) {
        uVar37 = uVar37 | 0x10;
      }
      if ((int)(uVar30 << 0x19) < 0) {
        uVar37 = uVar37 | 0x20;
      }
      if ((int)(uVar30 << 0x1a) < 0) {
        uVar37 = uVar37 | 0x1000;
      }
      if ((int)(uVar30 << 0x1b) < 0) {
        uVar37 = uVar37 | 0x2000;
      }
      if ((int)(uVar30 << 0x1c) < 0) {
        uVar37 = uVar37 | 4;
      }
      if ((int)(uVar30 << 0x1d) < 0) {
        uVar37 = uVar37 | 0x40;
      }
      if ((int)(uVar30 << 0x1e) < 0) {
        uVar37 = uVar37 | 2;
      }
      if ((int)(uVar30 << 0x1f) < 0) {
        uVar37 = uVar37 | 0x800;
      }
    }
    *(int *)(this + (*(short *)(this + iVar18 * 0xc + 0x7436) + 0x262a) * 4 + 4) =
         ((int)(short)uVar37 * *(int *)(this + iVar18 * 0xc + 0x7438) <<
         ((int)*(short *)(this + iVar18 * 0xc + 0x743c) & 0xffU)) >> 7;
  }
  iVar19 = DAT_000571b8;
  if (iVar18 != 0) {
    if (iVar18 + 1 == 0x300) {
      *(undefined4 *)(this + 0x18) = 0;
    }
    else {
      *(int *)(this + 0x18) = iVar18 + 1;
    }
    return;
  }
  if (uVar17 != 0xffff) {
    if (uVar17 == 0x7e00) {
      pCVar9 = this + 0xb8;
      puVar28 = (undefined4 *)(DAT_000571b8 + 0x56722);
      this[0x9a30] = (CDsp2)0x1;
      puVar38 = (undefined4 *)(iVar19 + 0x56752);
      do {
        uVar14 = puVar28[1];
        uVar27 = puVar28[2];
        uVar20 = puVar28[3];
        puVar29 = puVar28 + 4;
        *(undefined4 *)pCVar9 = *puVar28;
        *(undefined4 *)(pCVar9 + 4) = uVar14;
        *(undefined4 *)(pCVar9 + 8) = uVar27;
        *(undefined4 *)(pCVar9 + 0xc) = uVar20;
        pCVar12 = pCVar9 + 0x10;
        if (puVar29 == puVar38) break;
        uVar14 = puVar28[5];
        uVar27 = puVar28[6];
        uVar20 = puVar28[7];
        *(undefined4 *)(pCVar9 + 0x10) = *puVar29;
        *(undefined4 *)(pCVar9 + 0x14) = uVar14;
        *(undefined4 *)(pCVar9 + 0x18) = uVar27;
        *(undefined4 *)(pCVar9 + 0x1c) = uVar20;
        pCVar12 = pCVar9 + 0x20;
        puVar29 = puVar28 + 8;
        if (puVar28 + 8 == puVar38) break;
        uVar14 = puVar28[9];
        uVar27 = puVar28[10];
        uVar20 = puVar28[0xb];
        *(undefined4 *)(pCVar9 + 0x20) = puVar28[8];
        *(undefined4 *)(pCVar9 + 0x24) = uVar14;
        *(undefined4 *)(pCVar9 + 0x28) = uVar27;
        *(undefined4 *)(pCVar9 + 0x2c) = uVar20;
        pCVar12 = pCVar9 + 0x30;
        puVar29 = puVar28 + 0xc;
        if (puVar28 + 0xc == puVar38) break;
        uVar14 = puVar28[0xd];
        uVar27 = puVar28[0xe];
        uVar20 = puVar28[0xf];
        *(undefined4 *)(pCVar9 + 0x30) = puVar28[0xc];
        *(undefined4 *)(pCVar9 + 0x34) = uVar14;
        *(undefined4 *)(pCVar9 + 0x38) = uVar27;
        *(undefined4 *)(pCVar9 + 0x3c) = uVar20;
        pCVar12 = pCVar9 + 0x40;
        puVar29 = puVar28 + 0x10;
        if (puVar28 + 0x10 == puVar38) break;
        uVar14 = puVar28[0x11];
        uVar27 = puVar28[0x12];
        uVar20 = puVar28[0x13];
        *(undefined4 *)(pCVar9 + 0x40) = puVar28[0x10];
        *(undefined4 *)(pCVar9 + 0x44) = uVar14;
        *(undefined4 *)(pCVar9 + 0x48) = uVar27;
        *(undefined4 *)(pCVar9 + 0x4c) = uVar20;
        pCVar12 = pCVar9 + 0x50;
        puVar29 = puVar28 + 0x14;
        if (puVar28 + 0x14 == puVar38) break;
        uVar14 = puVar28[0x15];
        uVar27 = puVar28[0x16];
        uVar20 = puVar28[0x17];
        *(undefined4 *)(pCVar9 + 0x50) = puVar28[0x14];
        *(undefined4 *)(pCVar9 + 0x54) = uVar14;
        *(undefined4 *)(pCVar9 + 0x58) = uVar27;
        *(undefined4 *)(pCVar9 + 0x5c) = uVar20;
        pCVar12 = pCVar9 + 0x60;
        puVar29 = puVar28 + 0x18;
        if (puVar28 + 0x18 == puVar38) break;
        uVar14 = puVar28[0x19];
        uVar27 = puVar28[0x1a];
        uVar20 = puVar28[0x1b];
        puVar29 = puVar28 + 0x1c;
        *(undefined4 *)(pCVar9 + 0x60) = puVar28[0x18];
        *(undefined4 *)(pCVar9 + 100) = uVar14;
        *(undefined4 *)(pCVar9 + 0x68) = uVar27;
        *(undefined4 *)(pCVar9 + 0x6c) = uVar20;
        pCVar12 = pCVar9 + 0x70;
        if (puVar28 + 0x1c == puVar38) break;
        uVar14 = puVar28[0x1d];
        uVar27 = puVar28[0x1e];
        uVar20 = puVar28[0x1f];
        puVar41 = puVar28 + 0x20;
        puVar28 = puVar28 + 0x20;
        *(undefined4 *)(pCVar9 + 0x70) = *puVar29;
        *(undefined4 *)(pCVar9 + 0x74) = uVar14;
        *(undefined4 *)(pCVar9 + 0x78) = uVar27;
        *(undefined4 *)(pCVar9 + 0x7c) = uVar20;
        pCVar9 = pCVar9 + 0x80;
        pCVar12 = pCVar9;
        puVar29 = puVar28;
      } while (puVar41 != puVar38);
      uVar14 = puVar29[1];
      *(undefined4 *)pCVar12 = *puVar29;
      *(undefined4 *)(pCVar12 + 4) = uVar14;
    }
    goto LAB_00056100;
  }
  this[0x9a30] = (CDsp2)0x0;
  iVar18 = *(int *)(this + 0x1e54);
  if (iVar18 != 0) {
    iVar19 = *(int *)(this + 0x1e5c);
    iVar40 = *(int *)(this + 0x1e60);
    goto LAB_000568a4;
  }
  iVar19 = *(int *)(this + 0x1e5c);
  if (*(int *)(this + 0x1e44) != iVar19) {
    if (iVar19 == 0) {
      memset(this + 0x14bc50,0,0x80);
      memset(this + 0x14bcd0,0,0x80);
      memset(this + 0x14bd50,0,0x80);
      memset(this + 0x18bdd0,0,0x80);
      memset(this + 0x1abe50,0,0x80);
      memset(this + 0x1cbed0,0,0x80);
      memset(this + 0x24bf50,0,0x80);
      memset(this + 0x24bfd0,0,0x80);
      memset(this + 0x9c50,0,0x80);
      memset(this + 0x9cd0,0,0x80);
      memset(this + 0x14bdd0,0,0x20000);
      memset(this + 0x16bdd0,0,0x20000);
      memset(this + 0x18be50,0,0x20000);
      memset(this + 0x1abed0,0,0x20000);
      memset(this + 0x1cbf50,0,0x20000);
      memset(this + 0x1ebf50,0,0x20000);
      memset(this + 0x20bf50,0,0x20000);
      memset(this + 0x22bf50,0,0x20000);
    }
    else if (iVar19 == 1) {
      memset(this + 0x24c050,0,0x80);
      memset(this + 0x26c0d0,0,0x80);
      memset(this + 0x28c150,0,0x80);
      memset(this + 0x2ac1d0,0,0x80);
      memset(this + 0x2ac250,0,0x80);
      memset(this + 0x9c50,0,0x80);
      memset(this + 0x9cd0,0,0x80);
      memset(this + 0x24c0d0,0,0x20000);
      memset(this + 0x26c150,0,0x20000);
      memset(this + 0x28c1d0,0,0x20000);
    }
  }
  iVar40 = *(int *)(this + 0x1e60);
  if (*(int *)(this + 0x1e48) == iVar40) goto LAB_000568a4;
  switch(iVar40) {
  case 0:
    memset(this + 0x2ac2d0,0,0x80);
    memset(this + 0x2ac350,0,0x80);
    memset(this + 0x2ac3d0,0,0x80);
    memset(this + 0x2ac450,0,0x80);
    memset(this + 0x2ac4d0,0,0x80);
    memset(this + 0x2ac550,0,0x80);
    memset(this + 0x2ac5d0,0,0x80);
    memset(this + 0x2ac650,0,0x80);
    memset(this + 0x2ac6d0,0,0x80);
    memset(this + 0x2ac750,0,0x80);
    memset(this + 0x2ac7d0,0,0x80);
    memset(this + 0x2ac850,0,0x80);
    memset(this + 0x2ac8d0,0,0x80);
    memset(this + 0x2ac950,0,0x80);
    memset(this + 0x2ac9d0,0,0x80);
    memset(this + 0x2aca50,0,0x80);
    memset(this + 0x9d50,0,0x80);
    memset(this + 0x9dd0,0,0x80);
    memset(this + 0x2acad0,0,0x20000);
    memset(this + 0x2ccad0,0,0x20000);
    break;
  case 1:
    memset(this + 0x2ecad4,0,0x80);
    memset(this + 0x2ecb54,0,0x80);
    memset(this + 0x2ecbd4,0,0x80);
    memset(this + 0x2ecc54,0,0x80);
    memset(this + 0x2eccd4,0,0x80);
    memset(this + 0x2ecd54,0,0x80);
    memset(this + 0x2ecdd4,0,0x80);
    memset(this + 0x2ece54,0,0x80);
    memset(this + 0x2eced4,0,0x80);
    memset(this + 0x2ecf54,0,0x80);
    memset(this + 0x2ecfd4,0,0x80);
    memset(this + 0x2ed054,0,0x80);
    memset(this + 0x32d0d4,0,0x80);
    memset(this + 0x32d154,0,0x80);
    memset(this + 0x32d1d4,0,0x80);
    memset(this + 0x32d254,0,0x80);
    memset(this + 0x9d50,0,0x80);
    memset(this + 0x9dd0,0,0x80);
    memset(this + 0x2ed0d4,0,0x20000);
    memset(this + 0x30d0d4,0,0x20000);
    break;
  case 2:
    memset(this + 0x32d2d8,0,0x80);
    memset(this + 0x32d358,0,0x80);
    memset(this + 0x32d3d8,0,0x80);
    memset(this + 0x32d458,0,0x80);
    memset(this + 0x32d4d8,0,0x80);
    memset(this + 0x32d558,0,0x80);
    memset(this + 0x32d5d8,0,0x80);
    memset(this + 0x32d658,0,0x80);
    memset(this + 0x32d6d8,0,0x80);
    memset(this + 0x32d758,0,0x80);
    memset(this + 0x32d7d8,0,0x80);
    memset(this + 0x32d858,0,0x80);
    memset(this + 0x32d8d8,0,0x80);
    memset(this + 0x32d958,0,0x80);
    memset(this + 0x32d9d8,0,0x80);
    memset(this + 0x32da58,0,0x80);
    memset(this + 0x32dad8,0,0x80);
    memset(this + 0x9d50,0,0x80);
    memset(this + 0x9dd0,0,0x80);
    memset(this + 0x32db58,0,0x20000);
    memset(this + 0x34db58,0,0x20000);
    break;
  case 3:
    memset(this + 0x36db58,0,0x80);
    memset(this + 0x36dbd8,0,0x80);
    memset(this + 0x36dc58,0,0x80);
    memset(this + 0x36dcd8,0,0x80);
    memset(this + 0x36dd58,0,0x80);
    memset(this + 0x36ddd8,0,0x80);
    memset(this + 0x36de58,0,0x80);
    memset(this + 0x36ded8,0,0x80);
    memset(this + 0x36df58,0,0x80);
    memset(this + 0x36dfd8,0,0x80);
    memset(this + 0x36e058,0,0x80);
    memset(this + 0x36e0d8,0,0x80);
    memset(this + 0x36e158,0,0x80);
    uVar30 = 0xe1d8;
    goto code_r0x0005687e;
  case 4:
    memset(this + 0x36e258,0,0x80);
    memset(this + 0x36e2d8,0,0x80);
    memset(this + 0x36e358,0,0x80);
    memset(this + 0x36e3d8,0,0x80);
    memset(this + 0x36e458,0,0x80);
    memset(this + 0x36e4d8,0,0x80);
    memset(this + 0x36e558,0,0x80);
    memset(this + 0x36e5d8,0,0x80);
    memset(this + 0x36e658,0,0x80);
    memset(this + 0x36e6d8,0,0x80);
    uVar30 = 0xe758;
    goto code_r0x0005687e;
  case 5:
    memset(this + 0x36e7d8,0,0x80);
    memset(this + 0x36e858,0,0x80);
    memset(this + 0x36e8d8,0,0x80);
    memset(this + 0x36e958,0,0x80);
    memset(this + 0x36e9d8,0,0x80);
    memset(this + 0x36ea58,0,0x80);
    memset(this + 0x36ead8,0,0x80);
    memset(this + 0x36eb58,0,0x80);
    memset(this + 0x36ebd8,0,0x80);
    memset(this + 0x36ec58,0,0x80);
    memset(this + 0x36ecd8,0,0x80);
    memset(this + 0x36ed58,0,0x80);
    memset(this + 0x36edd8,0,0x80);
    uVar30 = 0xee58;
    goto code_r0x0005687e;
  case 6:
    memset(this + 0x36eed8,0,0x80);
    memset(this + 0x36ef58,0,0x80);
    memset(this + 0x36efd8,0,0x80);
    memset(this + 0x36f058,0,0x80);
    memset(this + 0x36f0d8,0,0x80);
    memset(this + 0x36f158,0,0x80);
    uVar30 = 0xf1d8;
code_r0x0005687e:
    memset(this + (uVar30 | 0x360000),0,0x80);
    memset(this + 0x9d50,0,0x80);
    memset(this + 0x9dd0,0,0x80);
    break;
  case 7:
    memset(this + 0x36f458,0,0x80);
    memset(this + 0x36f4d8,0,0x80);
    memset(this + 0x36f558,0,0x80);
    memset(this + 0x36f5d8,0,0x80);
    memset(this + 0x36f658,0,0x80);
    memset(this + 0x36f6d8,0,0x80);
    memset(this + 0x36f758,0,0x80);
  }
LAB_000568a4:
  iVar7 = *(int *)(this + 0x1e58);
  iVar8 = *(int *)(this + 0x1e64);
  if ((*(int *)(this + 0x1e40) != iVar7) || (*(int *)(this + 0x1e4c) != iVar8)) {
    if (iVar7 == 0) {
      if (iVar8 == 0) {
        memset(this + 0xa950,0,0x80);
        memset(this + 0xa9d0,0,0x80);
      }
      else {
        memset(this + 0x10ae50,0,0x80);
        memset(this + 0x10aed0,0,0x80);
        memset(this + 0x10af50,0,0x80);
        memset(this + 0x10afd0,0,0x80);
        memset(this + 0xa950,0,0x80);
        memset(this + 0xa9d0,0,0x80);
      }
    }
    else if (iVar7 == 1) {
      memset(this + 0xaa50,0,0x80);
      memset(this + 0xaad0,0,0x80);
      memset(this + 0xab50,0,0x80);
      memset(this + 0x4abd0,0,0x80);
      memset(this + 0x6ac50,0,0x80);
      memset(this + 0x8acd0,0,0x80);
      memset(this + 0x10ad50,0,0x80);
      memset(this + 0x10add0,0,0x80);
      memset(this + 0x9ed0,0,0x80);
      memset(this + 0x9f50,0,0x80);
      memset(this + 0xabd0,0,0x20000);
      memset(this + 0x2abd0,0,0x20000);
      memset(this + 0x4ac50,0,0x20000);
      memset(this + 0x6acd0,0,0x20000);
      memset(this + 0x8ad50,0,0x20000);
      memset(this + 0xaad50,0,0x20000);
      memset(this + 0xcad50,0,0x20000);
      memset(this + 0xead50,0,0x20000);
    }
  }
  iVar15 = *(int *)(this + 0x1e68);
  if (*(int *)(this + 0x1e50) == iVar15) goto LAB_00056abc;
  switch(iVar15) {
  case 0:
    memset(this + 0x12b250,0,0x80);
    memset(this + 0x12b2d0,0,0x80);
    memset(this + 0x12b350,0,0x80);
    memset(this + 0x12b3d0,0,0x80);
    memset(this + 0x12b450,0,0x80);
    memset(this + 0x12b4d0,0,0x80);
    memset(this + 0x12b550,0,0x80);
    memset(this + 0x14b5d0,0,0x80);
    memset(this + 0x14b650,0,0x80);
    memset(this + 0x14b6d0,0,0x80);
    memset(this + 0x14b750,0,0x80);
    memset(this + 0x14b7d0,0,0x80);
    memset(this + 0x14b850,0,0x80);
    memset(this + 0x14b8d0,0,0x80);
    memset(this + 0xa850,0,0x80);
    memset(this + 0xa8d0,0,0x80);
    memset(this + 0x10b250,0,0x20000);
    memset(this + 0x12b5d0,0,0x20000);
    goto LAB_00056abc;
  case 1:
    memset(this + 0x14ba50,0,0x80);
    puVar6 = &DAT_0014bad0;
    break;
  case 2:
    memset(this + 0x14bb50,0,0x80);
    puVar6 = &UNK_0014bbd0;
    break;
  case 3:
    memset(this + 0x14b950,0,0x80);
    puVar6 = &DAT_0014b9d0;
    break;
  case 4:
    memset(this + 0x36f7d8,0,0x80);
    memset(this + 0x36f858,0,0x80);
    memset(this + 0x36f8d8,0,0x80);
    memset(this + 0x36f958,0,0x80);
    memset(this + 0x36f9d8,0,0x80);
    memset(this + 0x36fa58,0,0x80);
    puVar6 = &DAT_0036fad8;
    break;
  default:
    goto LAB_00056abc;
  }
  memset(this + (int)puVar6,0,0x80);
  memset(this + 0xa850,0,0x80);
  memset(this + 0xa8d0,0,0x80);
LAB_00056abc:
  memmove(this + 0x366c,this + 0x496c,0x1300);
  memmove(this + 0x9834,this + 0x98ac,0x78);
  memmove(this + 0x9924,this + 0x99a6,0x82);
  *(int *)(this + 0x1e3c) = iVar18;
  *(int *)(this + 0x1e40) = iVar7;
  *(int *)(this + 0x1e44) = iVar19;
  *(int *)(this + 0x1e48) = iVar40;
  *(int *)(this + 0x1e4c) = iVar8;
  *(int *)(this + 0x1e50) = iVar15;
LAB_00056100:
  *(undefined4 *)(this + 0x18) = 1;
  return;
}

