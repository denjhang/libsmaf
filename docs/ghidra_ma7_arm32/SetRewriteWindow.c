/* SetRewriteWindow @ 0005c150 20578B */


/* ARM::CDsp2::SetRewriteWindow(unsigned int, unsigned int) */

void __thiscall ARM::CDsp2::SetRewriteWindow(CDsp2 *this,uint param_1,uint param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  CDsp2 CVar5;
  short sVar6;
  CDsp2 *pCVar7;
  short sVar8;
  CDsp2 *pCVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  short *psVar15;
  int iVar16;
  undefined4 uVar17;
  short *psVar18;
  short *psVar19;
  int *piVar20;
  CDsp2 *pCVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  CDsp2 *pCVar25;
  short sVar26;
  short sVar27;
  undefined4 uVar28;
  short sVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  short sVar33;
  ushort uVar34;
  uint uVar35;
  uint uVar36;
  CDsp2 *local_50;
  CDsp2 *local_30;
  
  if (0x2ff < param_2 || 0x2ff < param_1) {
    return;
  }
  if (param_1 != 0 || param_2 != 0) {
    *(undefined4 *)(this + 0x1e38) = 1;
    goto LAB_0005c176;
  }
  pCVar9 = this + 0x1e20;
  if (*(int *)(this + 0x1e38) != 1) goto LAB_0005c176;
  uVar14 = *(uint *)(this + 0x1e30);
  uVar10 = *(uint *)(this + 0x1e34);
  if ((((((*(int *)(this + 0xbc) == 0x200 && *(int *)(this + 0xb8) == 0x38000) &&
         (*(int *)(this + 0xc4) == 0x600 && *(int *)(this + 0xc0) == 0x78000)) &&
        (*(int *)(this + 0xcc) == 4 && *(int *)(this + 200) == -0x3fb00000)) &&
       ((*(int *)(this + 0xd4) == 0xa00 && *(int *)(this + 0xd0) == 0xb8000 &&
        (*(int *)(this + 0xdc) == 0xe00 && *(int *)(this + 0xd8) == 0xf8000)))) &&
      (((*(int *)(this + 0xe4) == 0x1200 && *(undefined **)(this + 0xe0) == &UNK_00138000 &&
        ((*(int *)(this + 0xec) == 0x1600 && *(undefined **)(this + 0xe8) == &UNK_00178000 &&
         (*(int *)(this + 0xf4) == 0x1ea && *(int *)(this + 0xf0) == -0x7f7c8000)))) &&
       (*(int *)(this + 0xfc) == 0xa00 && *(int *)(this + 0xf8) == 0x4b0000)))) &&
     (*(int *)(this + 0x104) == 0x1eb && *(int *)(this + 0x100) == -0x7f7c8000)) {
    *(undefined4 *)(this + 0x1e54) = 1;
LAB_0005c278:
    CVar5 = (CDsp2)0x1;
  }
  else if ((*(int *)(this + 0x74) == 0x200 && *(int *)(this + 0x70) == 0x1f8000) &&
          (*(int *)(this + 0x7c) == 0x600 && *(undefined **)(this + 0x78) == &UNK_00238000)) {
    *(undefined4 *)(this + 0x1e54) = 0;
    if (((*(int *)(this + 0x4a4) == 0x6d && *(int *)(this + 0x4a0) == -0x5f7c8000) &&
        (*(int *)(this + 0x4ac) == 0x62 && *(int *)(this + 0x4a8) == -0x1fa90000)) &&
       (*(int *)(this + 0x4b4) == DAT_0005d044 && *(int *)(this + 0x4b0) == DAT_0005d040)) {
      if ((((*(int *)(this + 0x4bc) != *(int *)(this + 0x4a4) ||
             *(int *)(this + 0x4b8) != *(int *)(this + 0x4a0)) ||
           (*(int *)(this + 0x4c4) != 500 || *(int *)(this + 0x4c0) != -0x1fa50000)) ||
          ((*(int *)(this + 0x4cc) != DAT_0005d04c || *(int *)(this + 0x4c8) != DAT_0005d048 ||
           ((*(int *)(this + 0x4d4) != *(int *)(this + 0x4bc) ||
             *(int *)(this + 0x4d0) != *(int *)(this + 0x4b8) ||
            (*(int *)(this + 0x4dc) != 0x1f8 || *(int *)(this + 0x4d8) != -0x1fa10000)))))) ||
         ((*(int *)(this + 0x4e4) != DAT_0005d054 || *(int *)(this + 0x4e0) != DAT_0005d050 ||
          (*(int *)(this + 0x4ec) != 0x6d || *(int *)(this + 0x4e8) != -0x5f7c8000))))
      goto LAB_0005e356;
      iVar30 = 0;
      *(undefined4 *)(this + 0x1e5c) = 0;
    }
    else {
LAB_0005e356:
      iVar30 = *(int *)(this + 0x3d0);
      iVar32 = *(int *)(this + 0x3d4);
      if (((((((iVar32 == 0x3600 && iVar30 == 0xc78200) &&
              (*(int *)(this + 0x3dc) == 0xd && *(int *)(this + 0x3d8) == -0x7f7c8000)) &&
             (*(int *)(this + 0x3e4) == 0xc && *(int *)(this + 0x3e0) == -0x7f7d0000)) &&
            ((*(int *)(this + 0x3ec) == 0xb && *(int *)(this + 1000) == -0x7f7d0000 &&
             (*(int *)(this + 0x3f4) == 10 && *(int *)(this + 0x3f0) == -0x3f950000)))) &&
           ((*(int *)(this + 0x3fc) == 0x5f && *(int *)(this + 0x3f8) == -0x7f7d0000 &&
            ((*(int *)(this + 0x404) == 0x25e && *(int *)(this + 0x400) == -0x7f7d0000 &&
             (*(int *)(this + 0x40c) == DAT_0005e5ac && *(int *)(this + 0x408) == DAT_0005e5a8))))))
          && (*(int *)(this + 0x414) == DAT_0005e5b4 && *(int *)(this + 0x410) == DAT_0005e5b0)) &&
         (*(int *)(this + 0x41c) == 0xea0b && *(int *)(this + 0x418) == -0x27ffffff)) {
        iVar30 = 1;
        *(undefined4 *)(this + 0x1e5c) = 1;
      }
      else if ((((((iVar32 == 0x8000 && iVar30 == 0x8f2000) &&
                  (*(int *)(this + 0x3d8) == 0 && *(int *)(this + 0x3dc) == 0)) &&
                 (*(int *)(this + 0x3e4) == 0 && *(int *)(this + 0x3e0) == 0)) &&
                ((*(int *)(this + 1000) == 0 && *(int *)(this + 0x3ec) == 0 &&
                 (*(int *)(this + 0x3f4) == DAT_0005f2bc && *(int *)(this + 0x3f0) == DAT_0005f2b8))
                )) && (*(int *)(this + 0x3fc) == DAT_0005f2c4 &&
                       *(int *)(this + 0x3f8) == DAT_0005f2c0)) &&
              (*(int *)(this + 0x404) == 0x8000 && *(int *)(this + 0x400) == 0x998000)) {
        iVar30 = 2;
        *(undefined4 *)(this + 0x1e5c) = 2;
      }
      else if (((iVar32 == DAT_00060234 && iVar30 == DAT_00060230) &&
               (*(int *)(this + 0x3dc) == DAT_0006023c && *(int *)(this + 0x3d8) == DAT_00060238))
              && (*(int *)(this + 0x3e4) == 0x8000 && *(int *)(this + 0x3e0) == 0x998000)) {
        iVar30 = 3;
        *(undefined4 *)(this + 0x1e5c) = 3;
      }
      else {
        iVar30 = 4;
        *(undefined4 *)(this + 0x1e5c) = 4;
      }
    }
    iVar32 = *(int *)(this + 0xb8);
    iVar11 = *(int *)(this + 0xbc);
    if (iVar11 == DAT_0005d05c && iVar32 == DAT_0005d058) {
      if ((((*(int *)(this + 0xc4) == DAT_0005d064 && *(int *)(this + 0xc0) == DAT_0005d060) &&
           (*(int *)(this + 0xcc) == DAT_0005d06c && *(int *)(this + 200) == DAT_0005d068)) &&
          (*(int *)(this + 0xd4) == 2 && *(int *)(this + 0xd0) == -0x3fb40000)) &&
         (((*(int *)(this + 0xdc) == 4 && *(int *)(this + 0xd8) == -0x3fb00000 &&
           (*(int *)(this + 0xe4) == DAT_0005d074 && *(int *)(this + 0xe0) == DAT_0005d070)) &&
          (((*(int *)(this + 0xec) == DAT_0005d07c && *(int *)(this + 0xe8) == DAT_0005d078 &&
            ((*(int *)(this + 0xf4) == DAT_0005d084 && *(int *)(this + 0xf0) == DAT_0005d080 &&
             (*(int *)(this + 0xfc) == DAT_0005d08c && *(int *)(this + 0xf8) == DAT_0005d088)))) &&
           (*(int *)(this + 0x104) == 0x49 && *(int *)(this + 0x100) == -0x5f7c8000)))))) {
        iVar32 = 0;
        *(undefined4 *)(this + 0x1e60) = 0;
      }
      else {
        if (((((*(int *)(this + 0xc4) != 0x17 || *(int *)(this + 0xc0) != -0x3fbc0000) ||
              (*(int *)(this + 0xcc) != 4 || *(int *)(this + 200) != -0x3fb00000)) ||
             (*(int *)(this + 0xd4) != 0x2e40 || *(int *)(this + 0xd0) != -0x5f7c8000)) ||
            ((*(int *)(this + 0xdc) != DAT_0005e58c || *(int *)(this + 0xd8) != DAT_0005e588 ||
             (*(int *)(this + 0xe4) != DAT_0005e594 || *(int *)(this + 0xe0) != DAT_0005e590)))) ||
           (((*(int *)(this + 0xec) != 0x3e || *(int *)(this + 0xe8) != -0x5f7c8000 ||
             ((*(int *)(this + 0xf4) != DAT_0005e59c || *(int *)(this + 0xf0) != DAT_0005e598 ||
              (*(int *)(this + 0xfc) != DAT_0005e5a4 || *(int *)(this + 0xf8) != DAT_0005e5a0)))) ||
            (*(int *)(this + 0x104) != 1 || *(int *)(this + 0x100) != -0x5f7c8000))))
        goto LAB_0005f5be;
        iVar32 = 1;
        *(undefined4 *)(this + 0x1e60) = 1;
      }
    }
    else if (iVar11 == 0x15 && iVar32 == -0x3fc00000) {
      if (((((*(int *)(this + 0xc4) != 0x17 || *(int *)(this + 0xc0) != -0x3fbc0000) ||
            (*(int *)(this + 0xcc) != DAT_00060f64 || *(int *)(this + 200) != DAT_00060f60)) ||
           (*(int *)(this + 0xd4) != DAT_00060f6c || *(int *)(this + 0xd0) != DAT_00060f68)) ||
          (((*(int *)(this + 0xdc) != DAT_00060f74 || *(int *)(this + 0xd8) != DAT_00060f70 ||
            (*(int *)(this + 0xe4) != 4 || *(int *)(this + 0xe0) != -0x3fb00000)) ||
           ((*(int *)(this + 0xec) != DAT_00060f7c || *(int *)(this + 0xe8) != DAT_00060f78 ||
            ((*(int *)(this + 0xf4) != DAT_00060f84 || *(int *)(this + 0xf0) != DAT_00060f80 ||
             (*(int *)(this + 0xfc) != DAT_00060f8c || *(int *)(this + 0xf8) != DAT_00060f88))))))))
         || (*(int *)(this + 0x104) != 0 || *(int *)(this + 0x100) != 0x43b000)) goto LAB_0005fcc4;
      iVar32 = 2;
      *(undefined4 *)(this + 0x1e60) = 2;
    }
    else {
LAB_0005f5be:
      if (iVar11 == DAT_0006021c && iVar32 == DAT_00060218) {
        if (((((*(int *)(this + 0xc4) == DAT_00060224 && *(int *)(this + 0xc0) == DAT_00060220) &&
              (*(int *)(this + 0xcc) == DAT_0006022c && *(int *)(this + 200) == DAT_00060228)) &&
             (*(int *)(this + 0xd4) == 2 && *(int *)(this + 0xd0) == -0x3fb40000)) &&
            (((*(int *)(this + 0xdc) == 0x40 && *(int *)(this + 0xd8) == -0x5f7c8000 &&
              (*(int *)(this + 0xe4) == 0x41 && *(int *)(this + 0xe0) == -0x5f7d0000)) &&
             ((*(int *)(this + 0xec) == 0x2242 && *(int *)(this + 0xe8) == -0x5f7d0000 &&
              ((*(int *)(this + 0xf4) == 0x48 && *(int *)(this + 0xf0) == -0x5f7c8000 &&
               (*(int *)(this + 0xfc) == 0x2600 && *(int *)(this + 0xf8) == 0x671060)))))))) &&
           (*(int *)(this + 0x104) == 1 && *(int *)(this + 0x100) == -0x1fb48000)) {
          iVar32 = 3;
          *(undefined4 *)(this + 0x1e60) = 3;
          goto LAB_0005cfaa;
        }
LAB_000603e2:
        if (iVar11 != 0x15 || iVar32 != -0x3fc00000) goto LAB_0006087c;
        if (((((*(int *)(this + 0xc4) == 0x17 && *(int *)(this + 0xc0) == -0x3fbc0000) &&
              (*(int *)(this + 0xcc) == DAT_00060f44 && *(int *)(this + 200) == DAT_00060f40)) &&
             (*(int *)(this + 0xd4) == DAT_00060f4c && *(int *)(this + 0xd0) == DAT_00060f48)) &&
            (((*(int *)(this + 0xdc) == 1 && *(int *)(this + 0xd8) == -0x3fb80000 &&
              (*(int *)(this + 0xe4) == 2 && *(int *)(this + 0xe0) == -0x3fb40000)) &&
             ((*(int *)(this + 0xec) == 0x23d && *(int *)(this + 0xe8) == -0x5f7c8000 &&
              ((*(int *)(this + 0xf4) == DAT_00060f54 && *(int *)(this + 0xf0) == DAT_00060f50 &&
               (*(int *)(this + 0xfc) == DAT_00060f5c && *(int *)(this + 0xf8) == DAT_00060f58))))))
            )) && (*(int *)(this + 0x104) == 5 && *(int *)(this + 0x100) == -0x3fb00000)) {
          iVar32 = 5;
          *(undefined4 *)(this + 0x1e60) = 5;
          goto LAB_0005cfaa;
        }
LAB_00060c82:
        if (iVar11 != 0x15 || iVar32 != -0x3fbc8000) goto LAB_00060d7c;
        if (((*(int *)(this + 0xc4) == DAT_00060fac && *(int *)(this + 0xc0) == DAT_00060fa8) &&
            (*(int *)(this + 0xcc) == 0 && *(int *)(this + 200) == 0x20438000)) &&
           ((*(int *)(this + 0xd4) == 0x40 && *(int *)(this + 0xd0) == -0x5f7d0000 &&
            (((((*(int *)(this + 0xdc) == 0x41 && *(int *)(this + 0xd8) == -0x5f7d0000 &&
                (*(int *)(this + 0xe4) == 0x42 && *(int *)(this + 0xe0) == -0x5f7d0000)) &&
               (*(int *)(this + 0xec) == DAT_00060fb4 && *(int *)(this + 0xe8) == DAT_00060fb0)) &&
              ((*(int *)(this + 0xf4) == 0x3d && *(int *)(this + 0xf0) == -0x5f7c8000 &&
               (*(int *)(this + 0xfc) == 0x3c && *(int *)(this + 0xf8) == -0x1fb50000)))) &&
             (*(int *)(this + 0x104) == DAT_00060fbc && *(int *)(this + 0x100) == DAT_00060fb8))))))
        {
          iVar32 = 7;
          *(undefined4 *)(this + 0x1e60) = 7;
          goto LAB_0005cfaa;
        }
LAB_000613d8:
        if (((iVar11 == DAT_0006142c && iVar32 == DAT_00061428) &&
            (*(int *)(this + 0xc4) == DAT_00061434 && *(int *)(this + 0xc0) == DAT_00061430)) &&
           (*(int *)(this + 0xcc) == 0x8000 && *(int *)(this + 200) == 0x8e4000)) {
          iVar32 = 9;
          *(undefined4 *)(this + 0x1e60) = 9;
          goto LAB_0005cfaa;
        }
      }
      else {
LAB_0005fcc4:
        if (iVar11 != 0x15 || iVar32 != -0x1fbc8000) goto LAB_000603e2;
        if (((((*(int *)(this + 0xc4) == 0x217 && *(int *)(this + 0xc0) == -0x1fb90000) &&
              (*(int *)(this + 0xcc) == 0x640 && *(int *)(this + 200) == -0x5f7c8000)) &&
             (*(int *)(this + 0xd4) == 0x2a15 && *(int *)(this + 0xd0) == -0x5f7c8000)) &&
            (((*(int *)(this + 0xdc) == 0x2e17 && *(int *)(this + 0xd8) == -0x5f7c8000 &&
              (*(int *)(this + 0xe4) == 0x2600 && *(int *)(this + 0xe0) == 0xc78100)) &&
             ((*(int *)(this + 0xec) == 0x3600 && *(int *)(this + 0xe8) == 0x4381a0 &&
              ((*(int *)(this + 0xf4) == DAT_00060244 && *(int *)(this + 0xf0) == DAT_00060240 &&
               (*(int *)(this + 0xfc) == 0x4a && *(int *)(this + 0xf8) == -0x5f7c8000)))))))) &&
           (*(int *)(this + 0x104) == 0 && *(int *)(this + 0x100) == 0xcb8000)) {
          iVar32 = 4;
          *(undefined4 *)(this + 0x1e60) = 4;
          goto LAB_0005cfaa;
        }
LAB_0006087c:
        if (iVar11 != DAT_00060f94 || iVar32 != DAT_00060f90) goto LAB_00060c82;
        if ((((((*(int *)(this + 0xc4) == DAT_00060f9c && *(int *)(this + 0xc0) == DAT_00060f98) &&
               (*(int *)(this + 0xcc) == 0x2600 && *(int *)(this + 200) == 0xc78100)) &&
              (*(int *)(this + 0xd4) == 0x3f && *(int *)(this + 0xd0) == -0x5f7c8000)) &&
             ((*(int *)(this + 0xdc) == 0 && *(int *)(this + 0xd8) == 0xcba000 &&
              (*(int *)(this + 0xe4) == 0 && *(int *)(this + 0xe0) == 0x439000)))) &&
            ((*(int *)(this + 0xec) == 0xa00 && *(int *)(this + 0xe8) == 0x470520 &&
             ((*(int *)(this + 0xf4) == DAT_00060fa4 && *(int *)(this + 0xf0) == DAT_00060fa0 &&
              (*(int *)(this + 0xfc) == 0x3e && *(int *)(this + 0xf8) == -0x5f7c8000)))))) &&
           (*(int *)(this + 0x104) == 0 && *(int *)(this + 0x100) == 0xcb8000)) {
          iVar32 = 6;
          *(undefined4 *)(this + 0x1e60) = 6;
          goto LAB_0005cfaa;
        }
LAB_00060d7c:
        if (iVar11 != DAT_00060fc4 || iVar32 != DAT_00060fc0) goto LAB_000613d8;
        if ((((*(int *)(this + 0xc4) == DAT_00060fcc && *(int *)(this + 0xc0) == DAT_00060fc8) &&
             (*(int *)(this + 0xcc) == 0x8000 && *(int *)(this + 200) == 0x8e4000)) &&
            (*(int *)(this + 0xd0) == 0 && *(int *)(this + 0xd4) == 0)) &&
           (((*(int *)(this + 0xdc) == 0 && *(int *)(this + 0xd8) == 0 &&
             (*(int *)(this + 0xe0) == 0 && *(int *)(this + 0xe4) == 0)) &&
            (*(int *)(this + 0xe8) == 0 && *(int *)(this + 0xec) == 0)))) {
          iVar32 = 8;
          *(undefined4 *)(this + 0x1e60) = 8;
          goto LAB_0005cfaa;
        }
      }
      iVar32 = 0;
      do {
        piVar20 = (int *)(DAT_00061014 + 0x610b8 + iVar32);
        iVar11 = iVar32 + 8;
        if (*(int *)(this + iVar32 + 0xbc) != piVar20[1] ||
            *(int *)(this + iVar32 + 0xb8) != *piVar20) {
          CVar5 = (CDsp2)0x0;
          *(undefined4 *)(this + 0x1e60) = 0xb;
          goto LAB_0005c27a;
        }
        iVar32 = iVar11;
      } while (iVar11 != 0x50);
      iVar32 = 10;
      *(undefined4 *)(this + 0x1e60) = 10;
    }
LAB_0005cfaa:
    if ((iVar30 != 4) || (iVar32 == 10)) goto LAB_0005c278;
    CVar5 = (CDsp2)0x0;
  }
  else {
    CVar5 = (CDsp2)0x0;
    *(undefined4 *)(this + 0x1e54) = 2;
  }
LAB_0005c27a:
  local_50 = this + 0x1e60;
  local_30 = this + 0x1e40;
  iVar30 = *(int *)(this + 0x11b0);
  iVar32 = *(int *)(this + 0x11b4);
  if (iVar32 == DAT_0005cfe4 && iVar30 == DAT_0005cfe0) {
    if ((((((*(int *)(this + 0x11bc) == DAT_0005cfec && *(int *)(this + 0x11b8) == DAT_0005cfe8) &&
           (*(int *)(this + 0x11c4) == DAT_0005cff4 && *(int *)(this + 0x11c0) == DAT_0005cff0)) &&
          (*(int *)(this + 0x11cc) == DAT_0005cffc && *(int *)(this + 0x11c8) == DAT_0005cff8)) &&
         ((*(int *)(this + 0x11d4) == DAT_0005d004 && *(int *)(this + 0x11d0) == DAT_0005d000 &&
          (*(int *)(this + 0x11dc) == DAT_0005d00c && *(int *)(this + 0x11d8) == DAT_0005d008)))) &&
        ((*(int *)(this + 0x11e4) == DAT_0005d014 && *(int *)(this + 0x11e0) == DAT_0005d010 &&
         ((*(int *)(this + 0x11ec) == DAT_0005d01c && *(int *)(this + 0x11e8) == DAT_0005d018 &&
          (*(int *)(this + 0x11f4) == DAT_0005d024 && *(int *)(this + 0x11f0) == DAT_0005d020))))))
       && (*(int *)(this + 0x11fc) == DAT_0005d02c && *(int *)(this + 0x11f8) == DAT_0005d028)) {
      *(undefined4 *)(this + 0x1e68) = 0;
      goto LAB_0005c36c;
    }
LAB_0005cca4:
    if (iVar32 != 0xf5 || iVar30 != -0x4f7d0000) goto LAB_0005fdd0;
    if ((((*(int *)(this + 0x11bc) != 0xf6 || *(int *)(this + 0x11b8) != -0x4f7d0000) ||
         (*(int *)(this + 0x11c4) != 0xf7 || *(int *)(this + 0x11c0) != -0x4f7d0000)) ||
        (*(int *)(this + 0x11cc) != 0xf8 || *(int *)(this + 0x11c8) != -0x4f7d0000)) ||
       ((((*(int *)(this + 0x11d4) != 0x79 || *(int *)(this + 0x11d0) != -0x4f7d0000 ||
          (*(int *)(this + 0x11dc) != 0x7a || *(int *)(this + 0x11d8) != -0x4f7d0000)) ||
         ((*(int *)(this + 0x11e4) != 0x7b || *(int *)(this + 0x11e0) != -0x4f7d0000 ||
          ((*(int *)(this + 0x11ec) != 0x7c || *(int *)(this + 0x11e8) != -0x4f7d0000 ||
           (*(int *)(this + 0x11f4) != 0x7d || *(int *)(this + 0x11f0) != -0x4f7d0000)))))) ||
        (*(int *)(this + 0x11fc) != 0x7e || *(int *)(this + 0x11f8) != -0x4f7d0000))))
    goto LAB_0005e9a0;
    *(undefined4 *)(this + 0x1e68) = 3;
  }
  else {
    if (iVar32 != 0x143 || iVar30 != -0x4f7d0000) goto LAB_0005cca4;
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
      goto LAB_0005c36c;
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
      goto LAB_0005c36c;
    }
LAB_0005fdd0:
    if (((((iVar32 == 0x13a && iVar30 == -0x5f7d0000) &&
          (*(int *)(this + 0x11bc) == 0x13d && *(int *)(this + 0x11b8) == -0x5f7d0000)) &&
         (*(int *)(this + 0x11c4) == DAT_0006024c && *(int *)(this + 0x11c0) == DAT_00060248)) &&
        (((*(int *)(this + 0x11cc) == 0x137 && *(int *)(this + 0x11c8) == -0x5f7c8000 &&
          (*(int *)(this + 0x11d4) == 0x136 && *(int *)(this + 0x11d0) == -0x1fb50000)) &&
         ((*(int *)(this + 0x11dc) == DAT_00060254 && *(int *)(this + 0x11d8) == DAT_00060250 &&
          ((*(int *)(this + 0x11e4) == 0 && *(int *)(this + 0x11e0) == 0x20778000 &&
           (*(int *)(this + 0x11ec) == 0x13f && *(int *)(this + 0x11e8) == -0x5f7d0000)))))))) &&
       ((*(int *)(this + 0x11f4) == 0x140 && *(int *)(this + 0x11f0) == -0x5f7d0000 &&
        (*(int *)(this + 0x11fc) == 0x141 && *(int *)(this + 0x11f8) == -0x5f7d0000)))) {
      *(undefined4 *)(this + 0x1e68) = 4;
    }
    else {
LAB_0005e9a0:
      CVar5 = (CDsp2)0x0;
      *(undefined4 *)(this + 0x1e68) = 5;
    }
  }
LAB_0005c36c:
  if (*(int *)(this + 0x1514) == 0x19c && *(int *)(this + 0x1510) == -0x5f7c8000) {
    if (((((*(int *)(this + 0x151c) == 0x19b && *(int *)(this + 0x1518) == -0x5f7d0000) &&
          (*(int *)(this + 0x1524) == 0x19a && *(int *)(this + 0x1520) == -0x1f950000)) &&
         (*(int *)(this + 0x152c) == 0x19e && *(int *)(this + 0x1528) == -0x5f7d0000)) &&
        (((*(int *)(this + 0x1534) == DAT_0005d034 && *(int *)(this + 0x1530) == DAT_0005d030 &&
          (*(int *)(this + 0x153c) == 0x1a0 && *(int *)(this + 0x1538) == -0x5f7c8000)) &&
         ((*(int *)(this + 0x1544) == 0x19f && *(int *)(this + 0x1540) == -0x5f7d0000 &&
          ((*(int *)(this + 0x154c) == 0x19e && *(int *)(this + 0x1548) == -0x1f950000 &&
           (*(int *)(this + 0x1554) == 0x1a7 && *(int *)(this + 0x1550) == -0x5f7d0000)))))))) &&
       (*(int *)(this + 0x155c) == DAT_0005d03c && *(int *)(this + 0x1558) == DAT_0005d038)) {
      *(undefined4 *)(this + 0x1e58) = 0;
      *(undefined4 *)(this + 0x1e64) = 0;
      goto LAB_0005c476;
    }
LAB_0005d66e:
    *(undefined4 *)(this + 0x1e64) = 2;
    if (*(int *)(this + 0x1514) == 0x2b && *(int *)(this + 0x1510) == -0x5f7c8000) {
      if ((((*(int *)(this + 0x151c) == 0x2c && *(int *)(this + 0x1518) == -0x5f7d0000) &&
           (*(int *)(this + 0x1524) == 0x2d && *(int *)(this + 0x1520) == -0x5f7d0000)) &&
          (*(int *)(this + 0x152c) == 0x2e && *(int *)(this + 0x1528) == -0x5f7d0000)) &&
         (((*(int *)(this + 0x1534) == 0x29 && *(int *)(this + 0x1530) == -0x5f7d0000 &&
           (*(int *)(this + 0x153c) == 0x2a && *(int *)(this + 0x1538) == -0x5f7d0000)) &&
          (((*(int *)(this + 0x1544) == 0 && *(int *)(this + 0x1540) == 0x20270000 &&
            ((*(int *)(this + 0x154c) == DAT_0005d76c && *(int *)(this + 0x1548) == DAT_0005d768 &&
             (*(int *)(this + 0x1554) == DAT_0005d774 && *(int *)(this + 0x1550) == DAT_0005d770))))
           && (*(int *)(this + 0x155c) == 0x8607 && *(int *)(this + 0x1558) == -0x77ffffff)))))) {
        *(undefined4 *)(this + 0x1e58) = 1;
        goto LAB_0005c476;
      }
    }
    else if (*(int *)(this + 0x1514) == 0x1a5 && *(int *)(this + 0x1510) == -0x3f400000) {
      pCVar7 = this + 0x1500;
      if (*(int *)(this + 0x151c) == 0x8000 && *(int *)(this + 0x1518) == 0xdec000) {
        pCVar7 = local_30;
      }
      if (*(int *)(this + 0x151c) == 0x8000 && *(int *)(this + 0x1518) == 0xdec000) {
        *(undefined4 *)(pCVar7 + 0x18) = 2;
        goto LAB_0005c476;
      }
    }
    *(undefined4 *)(this + 0x1e58) = 3;
    this[4] = (CDsp2)0x0;
LAB_0005c482:
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    if ((((((*(int *)(this + 0x1514) != 0x1a5 || *(int *)(this + 0x1510) != -0xf948000) ||
           (*(int *)(this + 0x151c) != 0x1a6 || *(int *)(this + 0x1518) != -0x4f7d0000)) ||
          (*(int *)(this + 0x1524) != 0x1a7 || *(int *)(this + 0x1520) != -0x4f7d0000)) ||
         ((*(int *)(this + 0x152c) != 0x1a8 || *(int *)(this + 0x1528) != -0x4f7d0000 ||
          (*(int *)(this + 0x1534) != 0x1a9 || *(int *)(this + 0x1530) != -0x4f7d0000)))) ||
        ((*(int *)(this + 0x153c) != 0x1aa || *(int *)(this + 0x1538) != -0x4f7d0000 ||
         ((*(int *)(this + 0x1544) != 0x1ab || *(int *)(this + 0x1540) != -0x4f7d0000 ||
          (*(int *)(this + 0x154c) != 0x1ac || *(int *)(this + 0x1548) != -0x4f7d0000)))))) ||
       ((*(int *)(this + 0x1554) != 0x1ad || *(int *)(this + 0x1550) != -0x4f7d0000 ||
        (*(int *)(this + 0x155c) != 0x1ae || *(int *)(this + 0x1558) != -0x4f7d0000))))
    goto LAB_0005d66e;
    *(undefined4 *)(this + 0x1e58) = 0;
    *(undefined4 *)(this + 0x1e64) = 1;
LAB_0005c476:
    this[4] = CVar5;
    if ((!(bool)CVar5) || (this[5] == (CDsp2)0x0)) goto LAB_0005c482;
    *(undefined4 *)(this + 8) = 1;
    iVar30 = 0;
    do {
      iVar32 = iVar30 + 0x60;
      *(undefined2 *)(this + iVar30 + 0x1e6e) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1e76) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1e7e) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1e86) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1e8e) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1e96) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1e9e) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1ea6) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1eae) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1eb6) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1ebe) = 0xffff;
      *(undefined2 *)(this + iVar30 + 0x1ec6) = 0xffff;
      iVar30 = iVar32;
    } while (iVar32 != 0x1800);
    iVar30 = *(int *)(this + 0x1e54);
    if (iVar30 == 0) {
      *(undefined2 *)(this + 0x1ebe) = 0;
      *(undefined2 *)(this + 0x1ec0) = 0;
      *(undefined2 *)(this + 0x1ec2) = 0;
      *(undefined2 *)(this + 0x1ec8) = 0;
      *(undefined2 *)(this + 0x1eca) = 0;
      *(undefined2 *)(this + 0x1ec6) = 1;
      iVar32 = *(int *)local_50;
      if (iVar32 == 0) {
        uVar36 = 0x28;
        psVar15 = (short *)(DAT_0006025c + 0x5f71e);
LAB_0005f71c:
        sVar26 = *psVar15;
        uVar35 = uVar36 - 1 & 3;
        uVar22 = 1;
        iVar32 = 8;
        *(short *)(this + sVar26 * 8 + 0x1e6e) = psVar15[1];
        *(short *)(this + sVar26 * 8 + 0x1e70) = psVar15[2];
        *(short *)(this + sVar26 * 8 + 0x1e72) = psVar15[3];
        if (1 < uVar36) {
          iVar11 = iVar32;
          if (uVar35 != 0) {
            if (uVar35 != 1) {
              if (uVar35 != 2) {
                uVar22 = 2;
                sVar26 = psVar15[4];
                iVar11 = 0x10;
                *(short *)(this + sVar26 * 8 + 0x1e6e) = psVar15[5];
                *(short *)(this + sVar26 * 8 + 0x1e70) = psVar15[6];
                *(short *)(this + sVar26 * 8 + 0x1e72) = psVar15[7];
              }
              sVar26 = *(short *)((int)psVar15 + iVar11);
              uVar22 = uVar22 + 1;
              iVar32 = iVar11 + 8;
              *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
                   *(undefined2 *)((int)psVar15 + iVar11 + 2);
              *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
                   *(undefined2 *)((int)psVar15 + iVar11 + 4);
              *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
                   *(undefined2 *)((int)psVar15 + iVar11 + 6);
            }
            sVar26 = *(short *)((int)psVar15 + iVar32);
            uVar22 = uVar22 + 1;
            iVar11 = iVar32 + 8;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 2)
            ;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 4)
            ;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 6)
            ;
            if (uVar36 <= uVar22) goto LAB_0005d846;
          }
          do {
            sVar26 = *(short *)((int)psVar15 + iVar11);
            uVar22 = uVar22 + 4;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 2)
            ;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 4)
            ;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 6)
            ;
            sVar26 = *(short *)((int)psVar15 + iVar11 + 8);
            *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar15 + iVar11 + 10);
            *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar15 + iVar11 + 0xc);
            *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar15 + iVar11 + 0xe);
            sVar26 = *(short *)((int)psVar15 + iVar11 + 0x10);
            *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar15 + iVar11 + 0x12);
            *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar15 + iVar11 + 0x14);
            *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar15 + iVar11 + 0x16);
            sVar26 = *(short *)((int)psVar15 + iVar11 + 0x18);
            *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
                 *(undefined2 *)((int)psVar15 + iVar11 + 0x1a);
            *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
                 *(undefined2 *)((int)psVar15 + iVar11 + 0x1c);
            *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
                 *(undefined2 *)((int)psVar15 + iVar11 + 0x1e);
            iVar11 = iVar11 + 0x20;
          } while (uVar22 < uVar36);
        }
      }
      else {
        if (iVar32 == 1) {
          uVar36 = 0x2d;
          psVar15 = (short *)(DAT_00060ff0 + 0x60b0e);
          goto LAB_0005f71c;
        }
        if (iVar32 == 2) {
          uVar36 = 0x25;
          psVar15 = (short *)(DAT_00060fec + 0x60c64);
          goto LAB_0005f71c;
        }
        if (iVar32 == 3) {
          uVar36 = 0x24;
          psVar15 = (short *)(DAT_00060fe4 + 0x60d6a);
          goto LAB_0005f71c;
        }
        if (iVar32 == 4) {
          uVar36 = 0x35;
          psVar15 = (short *)(DAT_00060fe0 + 0x60e78);
          goto LAB_0005f71c;
        }
        if (iVar32 == 5) {
          uVar36 = 0x28;
          psVar15 = (short *)(DAT_00061440 + 0x61a16);
          goto LAB_0005f71c;
        }
        if (iVar32 == 6) {
          uVar36 = 0x30;
          psVar15 = (short *)(DAT_0006143c + 0x61b46);
          goto LAB_0005f71c;
        }
        if (iVar32 == 7) {
          uVar36 = 0x20;
          psVar15 = (short *)(DAT_00061438 + 0x61caa);
          goto LAB_0005f71c;
        }
      }
LAB_0005d846:
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
        uVar36 = 0x35;
        psVar15 = (short *)(DAT_0005e5b8 + 0x5e2e4);
      }
      else {
        if (*(int *)(this + 0x1e5c) != 1) goto LAB_0005d9d2;
        uVar36 = 0x18;
        psVar15 = (short *)(DAT_00060258 + 0x6030c);
      }
      sVar26 = *psVar15;
      uVar22 = uVar36 - 1 & 3;
      uVar35 = 1;
      iVar32 = 8;
      *(short *)(this + sVar26 * 8 + 0x1e6e) = psVar15[1];
      *(short *)(this + sVar26 * 8 + 0x1e70) = psVar15[2];
      *(short *)(this + sVar26 * 8 + 0x1e72) = psVar15[3];
      if (1 < uVar36) {
        iVar11 = iVar32;
        if (uVar22 != 0) {
          if (uVar22 != 1) {
            if (uVar22 != 2) {
              uVar35 = 2;
              sVar26 = psVar15[4];
              iVar11 = 0x10;
              *(short *)(this + sVar26 * 8 + 0x1e6e) = psVar15[5];
              *(short *)(this + sVar26 * 8 + 0x1e70) = psVar15[6];
              *(short *)(this + sVar26 * 8 + 0x1e72) = psVar15[7];
            }
            sVar26 = *(short *)((int)psVar15 + iVar11);
            uVar35 = uVar35 + 1;
            iVar32 = iVar11 + 8;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 2)
            ;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 4)
            ;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 6)
            ;
          }
          sVar26 = *(short *)((int)psVar15 + iVar32);
          uVar35 = uVar35 + 1;
          iVar11 = iVar32 + 8;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 4);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 6);
          if (uVar36 <= uVar35) goto LAB_0005d9d2;
        }
        do {
          sVar26 = *(short *)((int)psVar15 + iVar11);
          uVar35 = uVar35 + 4;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 4);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 6);
          sVar26 = *(short *)((int)psVar15 + iVar11 + 8);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 10);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 0xc)
          ;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 0xe)
          ;
          sVar26 = *(short *)((int)psVar15 + iVar11 + 0x10);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x12);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x14);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x16);
          sVar26 = *(short *)((int)psVar15 + iVar11 + 0x18);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x1a);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x1c);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x1e);
          iVar11 = iVar11 + 0x20;
        } while (uVar35 < uVar36);
      }
    }
    else if (iVar30 == 1) {
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
      *(undefined2 *)(this + 0x1f60) = 0;
      *(undefined2 *)(this + 0x1f62) = 0;
      *(undefined2 *)(this + 0x1f68) = 0;
      *(undefined2 *)(this + 0x1f6a) = 0;
      *(undefined2 *)(this + 0x1f70) = 0;
      *(undefined2 *)(this + 0x1f72) = 0;
      *(undefined2 *)(this + 0x1f78) = 0;
      *(undefined2 *)(this + 0x1f7a) = 0;
      *(undefined2 *)(this + 0x1f66) = 0x2c1;
      *(undefined2 *)(this + 0x1f6e) = 0x2c4;
      *(undefined2 *)(this + 0x1f76) = 0x2c3;
      *(undefined2 *)(this + 0x1f7e) = 0x2c6;
      *(undefined2 *)(this + 0x1f80) = 0;
      *(undefined2 *)(this + 0x1f82) = 0;
      *(undefined2 *)(this + 0x1f88) = 0;
      *(undefined2 *)(this + 0x1f8a) = 0;
      *(undefined2 *)(this + 0x1f90) = 0;
      *(undefined2 *)(this + 0x1f92) = 0;
      *(undefined2 *)(this + 0x1f86) = 0x2c5;
      *(undefined2 *)(this + 0x1f8e) = 0x2c8;
      *(undefined2 *)(this + 0x1f96) = 0x2c7;
      *(undefined2 *)(this + 0x1f98) = 0;
      *(undefined2 *)(this + 0x1f9a) = 0;
      *(undefined2 *)(this + 0x20a0) = 0;
      *(undefined2 *)(this + 0x20ae) = 0x2ca;
      *(undefined2 *)(this + 0x20b6) = 0x2c9;
      *(undefined2 *)(this + 0x20a2) = 0;
      *(undefined2 *)(this + 0x20a8) = 0;
      *(undefined2 *)(this + 0x20aa) = 0;
      *(undefined2 *)(this + 0x20b0) = 0;
      *(undefined2 *)(this + 0x20b2) = 0;
      *(undefined2 *)(this + 0x20b8) = 0;
      *(undefined2 *)(this + 0x20ba) = 0;
      *(undefined2 *)(this + 0x209e) = 0x2cc;
      *(undefined2 *)(this + 0x20a6) = 0x2cb;
      *(undefined2 *)(this + 0x20be) = 0x2ce;
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
      *(undefined2 *)(this + 0x20c6) = 0x2cd;
      *(undefined2 *)(this + 0x20ce) = 0x2d3;
      *(undefined2 *)(this + 0x20d6) = 0x2d4;
      *(undefined2 *)(this + 0x20de) = 0x2d5;
      *(undefined2 *)(this + 0x20e6) = 0x2d6;
      *(undefined2 *)(this + 0x20ee) = 0x2d7;
      *(undefined2 *)(this + 0x20f0) = 0;
      *(undefined2 *)(this + 0x20f2) = 0;
      *(undefined2 *)(this + 0x20f8) = 0;
      *(undefined2 *)(this + 0x20fa) = 0;
      *(undefined2 *)(this + 0x20f6) = 0x2d8;
      *(undefined2 *)(this + 0x20fe) = 0x2cf;
      *(undefined2 *)(this + 0x2106) = 0x2d0;
      *(undefined2 *)(this + 0x212e) = 0x2d9;
      *(undefined2 *)(this + 0x2100) = 0;
      *(undefined2 *)(this + 0x2102) = 0;
      *(undefined2 *)(this + 0x2108) = 0;
      *(undefined2 *)(this + 0x210a) = 0;
      *(undefined2 *)(this + 0x2130) = 0;
      *(undefined2 *)(this + 0x2132) = 0;
      *(undefined2 *)(this + 0x2138) = 0;
      *(undefined2 *)(this + 0x213a) = 0;
      *(undefined2 *)(this + 0x2136) = 0x2da;
      *(undefined2 *)(this + 0x213e) = 0x2d1;
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
      *(undefined2 *)(this + 0x2146) = 0x2d2;
      *(undefined2 *)(this + 0x2156) = 0x2db;
      *(undefined2 *)(this + 0x215e) = 0x2dc;
      *(undefined2 *)(this + 0x2166) = 0x2de;
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
LAB_0005d9d2:
    *(undefined2 *)(this + 0x24f8) = 0;
    *(undefined2 *)(this + 0x24f6) = 0xd;
    *(undefined2 *)(this + 0x24fe) = 0xe;
    *(undefined2 *)(this + 0x24fa) = 0;
    *(undefined2 *)(this + 0x2506) = 0xf;
    *(undefined2 *)(this + 0x253e) = 9;
    *(undefined2 *)(this + 0x2500) = 0;
    *(undefined2 *)(this + 0x2502) = 0;
    *(undefined2 *)(this + 0x2508) = 0;
    *(undefined2 *)(this + 0x250a) = 0;
    *(undefined2 *)(this + 0x2510) = 0;
    *(undefined2 *)(this + 0x2512) = 0;
    *(undefined2 *)(this + 0x250e) = 0x10;
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
    *(undefined2 *)(this + 0x2586) = 0x13;
    *(undefined2 *)(this + 0x258e) = 0x14;
    *(undefined2 *)(this + 0x2596) = 0x15;
    *(undefined2 *)(this + 0x25ae) = 0xc;
    *(undefined2 *)(this + 0x25b0) = 0;
    *(undefined2 *)(this + 0x25b2) = 0;
    *(undefined2 *)(this + 0x25b6) = 0x16;
    *(undefined2 *)(this + 0x25b8) = 0;
    *(undefined2 *)(this + 0x25ba) = 0;
    *(undefined2 *)(this + 0x25be) = 7;
    *(undefined2 *)(this + 0x25c6) = 0x11;
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
    iVar16 = *(int *)(this + 0x1e68);
    iVar11 = DAT_0005e5bc + 0x5dae4;
    iVar32 = 0;
    if (iVar16 == 3) {
      *(undefined2 *)(this + 0x327e) = 0x1c1;
      *(undefined2 *)(this + 0x3282) = 0;
      *(undefined2 *)(this + 0x3288) = 0;
      *(undefined2 *)(this + 0x328a) = 0;
      *(undefined2 *)(this + 0x3290) = 0;
      *(undefined2 *)(this + 0x3292) = 0;
      *(undefined2 *)(this + 0x3298) = 0;
      *(undefined2 *)(this + 0x329a) = 0;
      *(undefined2 *)(this + 0x3286) = 0x1bf;
      *(undefined2 *)(this + 0x3280) = 0;
      *(undefined2 *)(this + 0x32a0) = 0;
      *(undefined2 *)(this + 0x32a2) = 0;
      *(undefined2 *)(this + 0x32b8) = 0;
      *(undefined2 *)(this + 0x32ba) = 0;
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
        sVar26 = *(short *)(iVar11 + iVar32);
        iVar23 = iVar11 + iVar32;
        iVar31 = iVar32 + 0x20;
        sVar27 = *(short *)(iVar11 + iVar32 + 8);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar23 + 2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar23 + 4);
        iVar24 = iVar11 + iVar32 + 8;
        iVar12 = iVar11 + iVar32 + 0x10;
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar23 + 6);
        sVar26 = *(short *)(iVar11 + iVar32 + 0x10);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
        iVar23 = iVar11 + iVar32 + 0x18;
        sVar29 = *(short *)(iVar11 + iVar32 + 0x18);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar12 + 2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar12 + 4);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar12 + 6);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) = *(undefined2 *)(iVar23 + 2);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e70) = *(undefined2 *)(iVar23 + 4);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e72) = *(undefined2 *)(iVar23 + 6);
        iVar24 = DAT_00060ff4;
        iVar23 = DAT_00060fdc;
        iVar32 = iVar31;
      } while (iVar31 != 0x640);
      if (iVar16 == 0) {
        iVar11 = DAT_0005e5c0 + 0x5e1d2;
        iVar32 = 0;
        do {
          sVar26 = *(short *)(iVar11 + iVar32);
          iVar23 = iVar11 + iVar32;
          sVar27 = *(short *)(iVar11 + iVar32 + 8);
          iVar24 = iVar11 + iVar32 + 8;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar23 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar23 + 4);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar23 + 6);
          iVar23 = iVar11 + iVar32 + 0x10;
          sVar26 = *(short *)(iVar11 + iVar32 + 0x10);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
          iVar31 = iVar11 + iVar32 + 0x18;
          sVar29 = *(short *)(iVar11 + iVar32 + 0x18);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar23 + 2);
          iVar24 = iVar11 + iVar32 + 0x20;
          sVar27 = *(short *)(iVar11 + iVar32 + 0x20);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar23 + 4);
          iVar12 = iVar32 + 0x28;
          iVar32 = iVar32 + 0x30;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar23 + 6);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) = *(undefined2 *)(iVar31 + 2);
          iVar23 = iVar11 + iVar12;
          *(undefined2 *)(this + sVar29 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 4);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 6);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
          sVar26 = *(short *)(iVar11 + iVar12);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar23 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar23 + 4);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar23 + 6);
        } while (iVar32 != 0x1b0);
      }
      else if (iVar16 == 1) {
        psVar15 = (short *)(DAT_00060fdc + 0x60ece);
        sVar26 = *psVar15;
        sVar27 = *(short *)(DAT_00060fdc + 0x60ed6);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(DAT_00060fdc + 0x60ed0);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar23 + 0x60ed2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar23 + 0x60ed4);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar23 + 0x60ed8);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar23 + 0x60eda);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar23 + 0x60edc);
        iVar32 = 0x10;
        do {
          sVar26 = *(short *)((int)psVar15 + iVar32);
          iVar11 = iVar32 + 0x20;
          sVar27 = *(short *)((int)psVar15 + iVar32 + 8);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 4);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 6);
          sVar26 = *(short *)((int)psVar15 + iVar32 + 0x10);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 10);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 0xc)
          ;
          sVar29 = *(short *)((int)psVar15 + iVar32 + 0x18);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 0xe)
          ;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x12);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x14);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x16);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x1a);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e70) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x1c);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e72) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x1e);
          iVar32 = iVar11;
        } while (iVar11 != 0x310);
      }
      else if (iVar16 == 2) {
        psVar15 = (short *)(DAT_00060ff4 + 0x61516);
        sVar26 = *psVar15;
        sVar27 = *(short *)(DAT_00060ff4 + 0x6151e);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(DAT_00060ff4 + 0x61518);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 0x6151a);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 0x6151c);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 0x61520);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 0x61522);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 0x61524);
        iVar32 = 0x10;
        do {
          sVar26 = *(short *)((int)psVar15 + iVar32);
          iVar11 = iVar32 + 0x20;
          sVar27 = *(short *)((int)psVar15 + iVar32 + 8);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 4);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 6);
          sVar26 = *(short *)((int)psVar15 + iVar32 + 0x10);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 10);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 0xc)
          ;
          sVar29 = *(short *)((int)psVar15 + iVar32 + 0x18);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 0xe)
          ;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x12);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x14);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x16);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x1a);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e70) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x1c);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e72) =
               *(undefined2 *)((int)psVar15 + iVar32 + 0x1e);
          iVar32 = iVar11;
        } while (iVar11 != 0x310);
      }
      else if (iVar16 == 4) {
        *(undefined2 *)(this + 0x2fde) = 0x4a0;
        *(undefined2 *)(this + 0x2fe6) = 0x4a2;
        *(undefined2 *)(this + 0x2fd6) = 0x4a1;
        *(undefined2 *)(this + 0x2fe0) = 2;
        *(undefined2 *)(this + 0x2fd8) = 2;
        *(undefined2 *)(this + 0x2fe8) = 2;
        *(undefined2 *)(this + 0x2fe2) = 0;
        *(undefined2 *)(this + 0x2fda) = 0;
        *(undefined2 *)(this + 0x2fea) = 0;
        *(undefined2 *)(this + 0x3020) = 2;
        *(undefined2 *)(this + 0x3022) = 0;
        *(undefined2 *)(this + 0x3018) = 2;
        *(undefined2 *)(this + 0x301a) = 0;
        *(undefined2 *)(this + 0x3028) = 2;
        *(undefined2 *)(this + 0x302a) = 0;
        *(undefined2 *)(this + 0x301e) = 0x4a3;
        *(undefined2 *)(this + 0x3016) = 0x4a4;
        *(undefined2 *)(this + 0x3026) = 0x4a5;
        *(undefined2 *)(this + 0x2fb0) = 2;
        *(undefined2 *)(this + 0x2fb2) = 0;
        *(undefined2 *)(this + 0x2fb8) = 2;
        *(undefined2 *)(this + 0x2fba) = 0;
        *(undefined2 *)(this + 0x2fae) = 0x4a6;
        *(undefined2 *)(this + 0x2fb6) = 0x4a7;
        *(undefined2 *)(this + 0x2fbe) = 0x4a8;
        *(undefined2 *)(this + 0x2fc6) = 0x4a9;
        *(undefined2 *)(this + 0x2fce) = 0x4aa;
        *(undefined2 *)(this + 0x2fc0) = 2;
        *(undefined2 *)(this + 0x2fc2) = 0;
        *(undefined2 *)(this + 0x2fc8) = 2;
        *(undefined2 *)(this + 0x2fca) = 0;
        *(undefined2 *)(this + 0x2fd0) = 2;
        *(undefined2 *)(this + 0x2fd2) = 0;
        *(undefined2 *)(this + 0x2fee) = 0x4ab;
        *(undefined2 *)(this + 0x2ff6) = 0x4ac;
        *(undefined2 *)(this + 0x2ffe) = 0x4ad;
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
        *(undefined2 *)(this + 0x3046) = 0x4b3;
        *(undefined2 *)(this + 0x3042) = 0;
        *(undefined2 *)(this + 0x3048) = 2;
        *(undefined2 *)(this + 0x304a) = 0;
        *(undefined2 *)(this + 0x3050) = 2;
        *(undefined2 *)(this + 0x3052) = 0;
        *(undefined2 *)(this + 0x3058) = 2;
        *(undefined2 *)(this + 0x305a) = 0;
        *(undefined2 *)(this + 0x304e) = 0x4b4;
        *(undefined2 *)(this + 0x3056) = 0x4b5;
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
        iVar11 = DAT_0005e5c4 + 0x5ea9a;
        iVar32 = 0;
        do {
          sVar26 = *(short *)(iVar11 + iVar32);
          iVar31 = iVar11 + iVar32;
          iVar23 = iVar32 + 0x20;
          sVar27 = *(short *)(iVar11 + iVar32 + 8);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar31 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 4);
          iVar24 = iVar11 + iVar32 + 8;
          iVar12 = iVar11 + iVar32 + 0x10;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 6);
          sVar26 = *(short *)(iVar11 + iVar32 + 0x10);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
          iVar31 = iVar11 + iVar32 + 0x18;
          sVar29 = *(short *)(iVar11 + iVar32 + 0x18);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar12 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar12 + 4);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar12 + 6);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) = *(undefined2 *)(iVar31 + 2);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 4);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 6);
          iVar32 = iVar23;
        } while (iVar23 != 0x2a0);
      }
      else {
        iVar11 = DAT_00060264 + 0x5fa28;
        iVar32 = 0;
        do {
          sVar27 = *(short *)(iVar11 + iVar32);
          iVar24 = iVar11 + iVar32;
          iVar23 = iVar32 + 0x20;
          sVar26 = *(short *)(iVar11 + iVar32 + 8);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
          iVar31 = iVar11 + iVar32 + 8;
          iVar12 = iVar11 + iVar32 + 0x10;
          *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
          sVar27 = *(short *)(iVar11 + iVar32 + 0x10);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar31 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 4);
          iVar24 = iVar11 + iVar32 + 0x18;
          sVar29 = *(short *)(iVar11 + iVar32 + 0x18);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 6);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar12 + 2);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar12 + 4);
          *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar12 + 6);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
          *(undefined2 *)(this + sVar29 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
          iVar32 = iVar23;
        } while (iVar23 != 0x2c0);
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
      *(undefined2 *)(this + 0x3386) = 0x1d;
      *(undefined2 *)(this + 0x338e) = 0x1e;
      *(undefined2 *)(this + 0x3396) = 0x1f;
      *(undefined2 *)(this + 0x339e) = 0x17;
      *(undefined2 *)(this + 0x343e) = 0x20;
      *(undefined2 *)(this + 0x3440) = 0;
      *(undefined2 *)(this + 0x3442) = 0;
    }
    *(undefined2 *)(this + 0x363e) = 0x47c;
    *(undefined2 *)(this + 0x3646) = 0x47e;
    *(undefined2 *)(this + 0x365e) = 0x47f;
    *(undefined2 *)(this + 0x3640) = 0;
    *(undefined2 *)(this + 0x3642) = 0;
    *(undefined2 *)(this + 0x3656) = 0x47d;
    *(undefined2 *)(this + 0x3648) = 0;
    *(undefined2 *)(this + 0x364a) = 0;
    *(undefined2 *)(this + 0x3658) = 0;
    *(undefined2 *)(this + 0x365a) = 0;
    *(undefined2 *)(this + 0x3660) = 0;
    *(undefined2 *)(this + 0x3662) = 0;
    *(undefined2 *)(this + 0x24de) = 0x461;
    *(undefined2 *)(this + 0x24d6) = 0x45e;
    *(undefined2 *)(this + 0x24d8) = 0;
    *(undefined2 *)(this + 0x24da) = 0;
    *(undefined2 *)(this + 0x24e0) = 0;
    *(undefined2 *)(this + 0x24e2) = 0;
    *(undefined2 *)(this + 0x251a) = 0;
    *(undefined2 *)(this + 0x2516) = 0x460;
    *(undefined2 *)(this + 0x2518) = 1;
    *(undefined2 *)(this + 0x2520) = 1;
    *(undefined2 *)(this + 0x251e) = 0x45f;
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
    *(undefined2 *)(this + 0x2638) = 0;
    *(undefined2 *)(this + 0x263a) = 0;
    *(undefined2 *)(this + 0x263e) = 0x476;
    *(undefined2 *)(this + 0x2640) = 0;
    *(undefined2 *)(this + 0x2656) = 0x46a;
    *(undefined2 *)(this + 0x2646) = 0x466;
    *(undefined2 *)(this + 0x264e) = 0x468;
    *(undefined2 *)(this + 0x265e) = 0x46c;
    *(undefined2 *)(this + 0x2666) = 0x46e;
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
    if (iVar30 == 0) {
      iVar32 = *(int *)local_50;
      if (iVar32 == 0) {
        uVar36 = 4;
        psVar15 = (short *)(DAT_00060260 + 0x60594);
LAB_0005f8d6:
        sVar26 = *psVar15;
        uVar22 = uVar36 - 1 & 3;
        uVar35 = 1;
        psVar19 = psVar15 + 0xb;
        *(short *)(this + sVar26 * 0xc + 0x7436) = psVar15[1];
        *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar15 + 2);
        *(short *)(this + sVar26 * 0xc + 0x743e) = psVar15[5];
        if (1 < uVar36) {
          if (uVar22 != 0) {
            if (uVar22 != 1) {
              psVar18 = psVar19;
              if (uVar22 != 2) {
                sVar26 = psVar15[6];
                uVar35 = 2;
                *(short *)(this + sVar26 * 0xc + 0x7436) = psVar15[7];
                *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar15 + 8);
                psVar18 = psVar15 + 0x11;
                *(short *)(this + sVar26 * 0xc + 0x743e) = *psVar19;
              }
              sVar26 = psVar18[-5];
              uVar35 = uVar35 + 1;
              *(short *)(this + sVar26 * 0xc + 0x7436) = psVar18[-4];
              *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar18 + -3);
              psVar19 = psVar18 + 6;
              *(short *)(this + sVar26 * 0xc + 0x743e) = *psVar18;
            }
            sVar26 = psVar19[-5];
            uVar35 = uVar35 + 1;
            *(short *)(this + sVar26 * 0xc + 0x7436) = psVar19[-4];
            *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar19 + -3);
            *(short *)(this + sVar26 * 0xc + 0x743e) = *psVar19;
            psVar19 = psVar19 + 6;
            if (uVar36 <= uVar35) goto LAB_0005deea;
          }
          do {
            sVar26 = psVar19[-5];
            uVar35 = uVar35 + 4;
            *(short *)(this + sVar26 * 0xc + 0x7436) = psVar19[-4];
            *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar19 + -3);
            *(short *)(this + sVar26 * 0xc + 0x743e) = *psVar19;
            sVar26 = psVar19[1];
            *(short *)(this + sVar26 * 0xc + 0x7436) = psVar19[2];
            *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar19 + 3);
            *(short *)(this + sVar26 * 0xc + 0x743e) = psVar19[6];
            sVar26 = psVar19[7];
            *(short *)(this + sVar26 * 0xc + 0x7436) = psVar19[8];
            *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar19 + 9);
            *(short *)(this + sVar26 * 0xc + 0x743e) = psVar19[0xc];
            sVar26 = psVar19[0xd];
            *(short *)(this + sVar26 * 0xc + 0x7436) = psVar19[0xe];
            *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar19 + 0xf);
            *(short *)(this + sVar26 * 0xc + 0x743e) = psVar19[0x12];
            psVar19 = psVar19 + 0x18;
          } while (uVar35 < uVar36);
        }
      }
      else {
        if (iVar32 == 1) {
          uVar36 = 2;
          psVar15 = (short *)(DAT_00061004 + 0x6195c);
          goto LAB_0005f8d6;
        }
        if (iVar32 == 2) {
          uVar36 = 4;
          psVar15 = (short *)(DAT_00061000 + 0x61964);
          goto LAB_0005f8d6;
        }
      }
LAB_0005deea:
      iVar32 = DAT_0005e5c8;
      if (*(int *)(this + 0x1e5c) == 1) {
        sVar26 = *(short *)(DAT_0005e5c8 + 0x5ec32);
        sVar27 = *(short *)(DAT_0005e5c8 + 0x5ec3e);
        uVar2 = *(undefined2 *)(DAT_0005e5c8 + 0x5ec3c);
        uVar28 = *(undefined4 *)(DAT_0005e5c8 + 0x5ec36);
        uVar17 = *(undefined4 *)(DAT_0005e5c8 + 0x5ec42);
        uVar3 = *(undefined2 *)(DAT_0005e5c8 + 0x5ec48);
        *(undefined2 *)(this + sVar26 * 0xc + 0x7436) = *(undefined2 *)(DAT_0005e5c8 + 0x5ec34);
        uVar4 = *(undefined2 *)(iVar32 + 0x5ec40);
        *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = uVar28;
        *(undefined2 *)(this + sVar26 * 0xc + 0x743e) = uVar2;
        *(undefined2 *)(this + sVar27 * 0xc + 0x7436) = uVar4;
        *(undefined4 *)(this + sVar27 * 0xc + 0x7438) = uVar17;
        *(undefined2 *)(this + sVar27 * 0xc + 0x743e) = uVar3;
      }
    }
    else if (iVar30 == 1) {
      *(undefined2 *)(this + 0x764e) = 0;
      *(undefined2 *)(this + 0x7646) = 0x19;
      *(undefined2 *)(this + 0x765a) = 0;
      *(undefined2 *)(this + 0x7666) = 0;
      *(undefined2 *)(this + 0x7672) = 0;
      *(undefined2 *)(this + 0x767e) = 0;
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
    if (iVar16 != 3) {
      *(undefined2 *)(this + 0x8102) = 10;
      *(undefined2 *)(this + 0x810e) = 0xb;
      *(undefined2 *)(this + 0x811a) = 0xc;
      *(undefined2 *)(this + 0x810a) = 0;
      *(undefined2 *)(this + 0x8116) = 0;
      *(undefined2 *)(this + 0x8126) = 0xd;
      *(undefined2 *)(this + 0x8132) = 0xe;
      *(undefined2 *)(this + 0x813e) = 0xf;
      *(undefined2 *)(this + 0x8122) = 0;
      *(undefined4 *)(this + 0x8104) = 0x8000;
      *(undefined4 *)(this + 0x8110) = 0x8000;
      *(undefined4 *)(this + 0x811c) = 0x8000;
      *(undefined4 *)(this + 0x8128) = 0x8000;
      *(undefined4 *)(this + 0x8134) = 0x8000;
      *(undefined4 *)(this + 0x8140) = 0x8000;
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
    if (iVar30 == 0) {
      if (*(int *)local_50 == 0) {
        uVar22 = *(uint *)(this + 0x240) >> 0x1c | (*(uint *)(this + 0x244) & 0x1ff) << 4;
        uVar36 = *(uint *)(this + 0x2a0) >> 0x1c | (*(uint *)(this + 0x2a4) & 0x1ff) << 4;
        if (uVar36 < uVar22) {
          iVar30 = uVar22 - uVar36;
        }
        else {
          iVar30 = uVar36 - uVar22;
        }
        *(int *)(this + 0x2ecad0) = iVar30;
      }
      else if (*(int *)local_50 == 1) {
        uVar22 = *(uint *)(this + 0x210) >> 0x1c | (*(uint *)(this + 0x214) & 0x1ff) << 4;
        uVar36 = *(uint *)(this + 0x290) >> 0x1c | (*(uint *)(this + 0x294) & 0x1ff) << 4;
        if (uVar36 < uVar22) {
          *(uint *)(this + 0x32d2d4) = uVar22 - uVar36;
        }
        else {
          *(uint *)(this + 0x32d2d4) = uVar36 - uVar22;
        }
      }
    }
    pCVar21 = this + 0x1820;
    pCVar25 = this + 0x1e6e;
    pCVar7 = pCVar21;
    do {
      if (-1 < *(short *)pCVar25) {
        if (*(short *)(pCVar25 + 4) == 0) {
          uVar13 = *(ushort *)pCVar7;
        }
        else {
          uVar1 = *(ushort *)pCVar7;
          if ((short)uVar1 < 0) {
            uVar34 = 0xc000;
            uVar13 = 0x4000;
          }
          else {
            uVar34 = 0x8000;
            uVar13 = 0;
          }
          if ((uVar1 & 0x4000) != 0) {
            uVar13 = uVar34;
          }
          if ((uVar1 & 0x2000) != 0) {
            uVar13 = uVar13 | 8;
          }
          if ((uVar1 & 0x1000) != 0) {
            uVar13 = uVar13 | 0x80;
          }
          if ((uVar1 & 0x800) != 0) {
            uVar13 = uVar13 | 1;
          }
          if ((uVar1 & 0x400) != 0) {
            uVar13 = uVar13 | 0x200;
          }
          if ((uVar1 & 0x200) != 0) {
            uVar13 = uVar13 | 0x100;
          }
          if ((uVar1 & 0x100) != 0) {
            uVar13 = uVar13 | 0x400;
          }
          if ((uVar1 & 0x80) != 0) {
            uVar13 = uVar13 | 0x10;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar13 = uVar13 | 0x20;
          }
          if ((uVar1 & 0x20) != 0) {
            uVar13 = uVar13 | 0x1000;
          }
          if ((uVar1 & 0x10) != 0) {
            uVar13 = uVar13 | 0x2000;
          }
          if ((uVar1 & 8) != 0) {
            uVar13 = uVar13 | 4;
          }
          if ((uVar1 & 4) != 0) {
            uVar13 = uVar13 | 0x40;
          }
          if ((uVar1 & 2) != 0) {
            uVar13 = uVar13 | 2;
          }
          if ((int)((uint)uVar1 << 0x1f) < 0) {
            uVar13 = uVar13 | 0x800;
          }
        }
        *(int *)(this + (*(short *)pCVar25 + 0x125a) * 4 + 4) =
             (int)(short)uVar13 << ((int)*(short *)(pCVar25 + 2) & 0xffU);
      }
      pCVar25 = pCVar25 + 8;
      pCVar7 = pCVar7 + 2;
    } while (pCVar25 != this + 0x366e);
    pCVar25 = this + 0x7436;
    pCVar7 = this + 0x743c;
    do {
      if (-1 < *(short *)(pCVar7 + -6)) {
        if (*(short *)(pCVar25 + 8) == 0) {
          uVar13 = *(ushort *)pCVar21;
        }
        else {
          uVar1 = *(ushort *)pCVar21;
          if ((short)uVar1 < 0) {
            uVar34 = 0xc000;
            uVar13 = 0x4000;
          }
          else {
            uVar34 = 0x8000;
            uVar13 = 0;
          }
          if ((uVar1 & 0x4000) != 0) {
            uVar13 = uVar34;
          }
          if ((uVar1 & 0x2000) != 0) {
            uVar13 = uVar13 | 8;
          }
          if ((uVar1 & 0x1000) != 0) {
            uVar13 = uVar13 | 0x80;
          }
          if ((uVar1 & 0x800) != 0) {
            uVar13 = uVar13 | 1;
          }
          if ((uVar1 & 0x400) != 0) {
            uVar13 = uVar13 | 0x200;
          }
          if ((uVar1 & 0x200) != 0) {
            uVar13 = uVar13 | 0x100;
          }
          if ((uVar1 & 0x100) != 0) {
            uVar13 = uVar13 | 0x400;
          }
          if ((uVar1 & 0x80) != 0) {
            uVar13 = uVar13 | 0x10;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar13 = uVar13 | 0x20;
          }
          if ((uVar1 & 0x20) != 0) {
            uVar13 = uVar13 | 0x1000;
          }
          if ((uVar1 & 0x10) != 0) {
            uVar13 = uVar13 | 0x2000;
          }
          if ((uVar1 & 8) != 0) {
            uVar13 = uVar13 | 4;
          }
          if ((uVar1 & 4) != 0) {
            uVar13 = uVar13 | 0x40;
          }
          if ((uVar1 & 2) != 0) {
            uVar13 = uVar13 | 2;
          }
          if ((int)((uint)uVar1 << 0x1f) < 0) {
            uVar13 = uVar13 | 0x800;
          }
        }
        *(int *)(this + (*(short *)(pCVar7 + -6) + 0x262a) * 4 + 4) =
             ((int)(short)uVar13 * *(int *)(pCVar7 + -4) << ((int)*(short *)(pCVar25 + 6) & 0xffU))
             >> 7;
      }
      pCVar25 = pCVar25 + 0xc;
      pCVar21 = pCVar21 + 2;
      pCVar7 = pCVar7 + 0xc;
    } while (pCVar25 != this + 0x9836);
  }
  iVar30 = DAT_0005d77c;
  if ((((uVar14 - 0x13 < 0xba) && (uVar10 - 0x13 < 0xba)) || (uVar14 < 0x14 && 0x12 < uVar10)) ||
     (uVar14 < 0xcd && 0xcb < uVar10)) {
    if (*(int *)(this + 0x1e54) == 0) {
      if (((uVar14 - 0x76 < 0x57) && (uVar10 - 0x76 < 0x57)) ||
         ((uVar14 < 0x77 && 0x75 < uVar10 || (uVar14 < 0xcd && 0xcb < uVar10)))) {
        if (*(int *)(this + 0x1e5c) == 0) {
          uVar17 = *(undefined4 *)pCVar9;
          uVar28 = *(undefined4 *)(this + 0x1e24);
          iVar32 = DAT_0005e5cc + 0x5f1cc;
          iVar30 = 0;
          do {
            iVar11 = iVar32 + iVar30;
            sVar27 = *(short *)(iVar30 + iVar32);
            iVar30 = iVar30 + 6;
            sVar26 = *(short *)(iVar11 + 2);
            uVar22 = *(uint *)(this + sVar27 * 8 + 0x20) >> 0x1c |
                     (*(uint *)(this + sVar27 * 8 + 0x24) & 0x1ff) << 4;
            uVar36 = (*(uint *)(this + sVar26 * 8 + 0x24) & 0x1ff) << 4;
            sVar29 = (short)uVar28;
            if ((*(uint *)(this + sVar27 * 8 + 0x24) & 0x4000) == 0) {
              sVar29 = (short)uVar17;
            }
            sVar27 = (short)uVar22;
            uVar13 = (ushort)(*(uint *)(this + sVar26 * 8 + 0x20) >> 0x1c) | (ushort)uVar36;
            sVar33 = sVar27 - uVar13;
            if (uVar22 < (*(uint *)(this + sVar26 * 8 + 0x20) >> 0x1c | uVar36)) {
              sVar33 = (sVar29 + sVar27) - uVar13;
            }
            *(short *)(this + (*(short *)(iVar11 + 4) + 0x4cd0) * 2 + 6) = sVar33;
          } while (iVar30 != 0x6c);
        }
        else if (*(int *)(this + 0x1e5c) == 1) {
          uVar28 = *(undefined4 *)pCVar9;
          uVar17 = *(undefined4 *)(this + 0x1e24);
          uVar36 = *(uint *)(this + *(short *)(DAT_0005d778 + 0x5e062) * 8 + 0x20) >> 0x1c |
                   (*(uint *)(this + *(short *)(DAT_0005d778 + 0x5e062) * 8 + 0x24) & 0x1ff) << 4;
          uVar22 = *(uint *)(this + *(short *)(DAT_0005d778 + 0x5e064) * 8 + 0x20) >> 0x1c |
                   (*(uint *)(this + *(short *)(DAT_0005d778 + 0x5e064) * 8 + 0x24) & 0x1ff) << 4;
          sVar26 = (short)uVar17;
          if ((*(uint *)(this + *(short *)(DAT_0005d778 + 0x5e062) * 8 + 0x24) & 0x4000) == 0) {
            sVar26 = (short)uVar28;
          }
          sVar33 = (short)uVar36;
          sVar6 = (short)uVar22;
          sVar8 = sVar33 - sVar6;
          sVar27 = *(short *)(DAT_0005d778 + 0x5e068);
          sVar29 = *(short *)(DAT_0005d778 + 0x5e06a);
          if (uVar36 < uVar22) {
            sVar8 = (sVar26 + sVar33) - sVar6;
          }
          sVar26 = *(short *)(DAT_0005d778 + 0x5e06c);
          *(short *)(this + (*(short *)(DAT_0005d778 + 0x5e066) + 0x4cd0) * 2 + 6) = sVar8;
          uVar36 = (*(uint *)(this + sVar27 * 8 + 0x24) & 0x1ff) << 4;
          sVar33 = (short)uVar17;
          if ((*(uint *)(this + sVar27 * 8 + 0x24) & 0x4000) == 0) {
            sVar33 = (short)uVar28;
          }
          uVar22 = *(uint *)(this + sVar29 * 8 + 0x20) >> 0x1c |
                   (*(uint *)(this + sVar29 * 8 + 0x24) & 0x1ff) << 4;
          uVar13 = (ushort)(*(uint *)(this + sVar27 * 8 + 0x20) >> 0x1c) | (ushort)uVar36;
          sVar29 = (short)uVar22;
          sVar6 = uVar13 - sVar29;
          if ((*(uint *)(this + sVar27 * 8 + 0x20) >> 0x1c | uVar36) < uVar22) {
            sVar6 = (sVar33 + uVar13) - sVar29;
          }
          *(short *)(this + (sVar26 + 0x4cd0) * 2 + 6) = sVar6;
        }
      }
    }
    else {
      uVar17 = *(undefined4 *)pCVar9;
      uVar28 = *(undefined4 *)(this + 0x1e24);
      uVar22 = *(uint *)(this + *(short *)(DAT_0005d77c + 0x5e1a2) * 8 + 0x20) >> 0x1c |
               (*(uint *)(this + *(short *)(DAT_0005d77c + 0x5e1a2) * 8 + 0x24) & 0x1ff) << 4;
      uVar36 = (*(uint *)(this + *(short *)(DAT_0005d77c + 0x5e1a4) * 8 + 0x24) & 0x1ff) << 4;
      sVar26 = *(short *)(DAT_0005d77c + 0x5e1a8);
      sVar27 = (short)uVar17;
      if ((*(uint *)(this + *(short *)(DAT_0005d77c + 0x5e1a2) * 8 + 0x24) & 0x4000) != 0) {
        sVar27 = (short)uVar28;
      }
      uVar13 = (ushort)(*(uint *)(this + *(short *)(DAT_0005d77c + 0x5e1a4) * 8 + 0x20) >> 0x1c) |
               (ushort)uVar36;
      sVar33 = (short)uVar22;
      sVar6 = sVar33 - uVar13;
      sVar29 = *(short *)(DAT_0005d77c + 0x5e1aa);
      if (uVar22 < (*(uint *)(this + *(short *)(DAT_0005d77c + 0x5e1a4) * 8 + 0x20) >> 0x1c | uVar36
                   )) {
        sVar6 = (sVar27 + sVar33) - uVar13;
      }
      *(short *)(this + (*(short *)(DAT_0005d77c + 0x5e1a6) + 0x4cd0) * 2 + 6) = sVar6;
      uVar36 = (*(uint *)(this + sVar26 * 8 + 0x24) & 0x1ff) << 4;
      sVar27 = (short)uVar17;
      if ((*(uint *)(this + sVar26 * 8 + 0x24) & 0x4000) != 0) {
        sVar27 = (short)uVar28;
      }
      uVar22 = (*(uint *)(this + sVar29 * 8 + 0x24) & 0x1ff) << 4;
      uVar13 = (ushort)(*(uint *)(this + sVar26 * 8 + 0x20) >> 0x1c) | (ushort)uVar36;
      uVar1 = (ushort)(*(uint *)(this + sVar29 * 8 + 0x20) >> 0x1c) | (ushort)uVar22;
      sVar33 = uVar13 - uVar1;
      if ((*(uint *)(this + sVar26 * 8 + 0x20) >> 0x1c | uVar36) <
          (*(uint *)(this + sVar29 * 8 + 0x20) >> 0x1c | uVar22)) {
        sVar33 = (sVar27 + uVar13) - uVar1;
      }
      *(short *)(this + (*(short *)(iVar30 + 0x5e1ac) + 0x4cd0) * 2 + 6) = sVar33;
    }
    pCVar21 = this + 0x1846;
    pCVar25 = this + 0x1f06;
    pCVar7 = pCVar21;
    do {
      if (-1 < *(short *)pCVar25) {
        if (*(short *)(pCVar25 + 4) == 0) {
          uVar13 = *(ushort *)pCVar7;
        }
        else {
          uVar1 = *(ushort *)pCVar7;
          if ((short)uVar1 < 0) {
            uVar34 = 0xc000;
            uVar13 = 0x4000;
          }
          else {
            uVar34 = 0x8000;
            uVar13 = 0;
          }
          if ((uVar1 & 0x4000) != 0) {
            uVar13 = uVar34;
          }
          if ((uVar1 & 0x2000) != 0) {
            uVar13 = uVar13 | 8;
          }
          if ((uVar1 & 0x1000) != 0) {
            uVar13 = uVar13 | 0x80;
          }
          if ((uVar1 & 0x800) != 0) {
            uVar13 = uVar13 | 1;
          }
          if ((uVar1 & 0x400) != 0) {
            uVar13 = uVar13 | 0x200;
          }
          if ((uVar1 & 0x200) != 0) {
            uVar13 = uVar13 | 0x100;
          }
          if ((uVar1 & 0x100) != 0) {
            uVar13 = uVar13 | 0x400;
          }
          if ((uVar1 & 0x80) != 0) {
            uVar13 = uVar13 | 0x10;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar13 = uVar13 | 0x20;
          }
          if ((uVar1 & 0x20) != 0) {
            uVar13 = uVar13 | 0x1000;
          }
          if ((uVar1 & 0x10) != 0) {
            uVar13 = uVar13 | 0x2000;
          }
          if ((uVar1 & 8) != 0) {
            uVar13 = uVar13 | 4;
          }
          if ((uVar1 & 4) != 0) {
            uVar13 = uVar13 | 0x40;
          }
          if ((uVar1 & 2) != 0) {
            uVar13 = uVar13 | 2;
          }
          if ((int)((uint)uVar1 << 0x1f) < 0) {
            uVar13 = uVar13 | 0x800;
          }
        }
        *(int *)(this + (*(short *)pCVar25 + 0x125a) * 4 + 4) =
             (int)(short)uVar13 << ((int)*(short *)(pCVar25 + 2) & 0xffU);
      }
      pCVar25 = pCVar25 + 8;
      pCVar7 = pCVar7 + 2;
    } while (pCVar25 != this + 0x24d6);
    pCVar25 = this + 0x751a;
    pCVar7 = this + 0x7520;
    do {
      if (-1 < *(short *)(pCVar7 + -6)) {
        if (*(short *)(pCVar25 + 8) == 0) {
          uVar13 = *(ushort *)pCVar21;
        }
        else {
          uVar1 = *(ushort *)pCVar21;
          if ((short)uVar1 < 0) {
            uVar34 = 0xc000;
            uVar13 = 0x4000;
          }
          else {
            uVar34 = 0x8000;
            uVar13 = 0;
          }
          if ((uVar1 & 0x4000) != 0) {
            uVar13 = uVar34;
          }
          if ((uVar1 & 0x2000) != 0) {
            uVar13 = uVar13 | 8;
          }
          if ((uVar1 & 0x1000) != 0) {
            uVar13 = uVar13 | 0x80;
          }
          if ((uVar1 & 0x800) != 0) {
            uVar13 = uVar13 | 1;
          }
          if ((uVar1 & 0x400) != 0) {
            uVar13 = uVar13 | 0x200;
          }
          if ((uVar1 & 0x200) != 0) {
            uVar13 = uVar13 | 0x100;
          }
          if ((uVar1 & 0x100) != 0) {
            uVar13 = uVar13 | 0x400;
          }
          if ((uVar1 & 0x80) != 0) {
            uVar13 = uVar13 | 0x10;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar13 = uVar13 | 0x20;
          }
          if ((uVar1 & 0x20) != 0) {
            uVar13 = uVar13 | 0x1000;
          }
          if ((uVar1 & 0x10) != 0) {
            uVar13 = uVar13 | 0x2000;
          }
          if ((uVar1 & 8) != 0) {
            uVar13 = uVar13 | 4;
          }
          if ((uVar1 & 4) != 0) {
            uVar13 = uVar13 | 0x40;
          }
          if ((uVar1 & 2) != 0) {
            uVar13 = uVar13 | 2;
          }
          if ((int)((uint)uVar1 << 0x1f) < 0) {
            uVar13 = uVar13 | 0x800;
          }
        }
        *(int *)(this + (*(short *)(pCVar7 + -6) + 0x262a) * 4 + 4) =
             ((int)(short)uVar13 * *(int *)(pCVar7 + -4) << ((int)*(short *)(pCVar25 + 6) & 0xffU))
             >> 7;
      }
      pCVar25 = pCVar25 + 0xc;
      pCVar21 = pCVar21 + 2;
      pCVar7 = pCVar7 + 0xc;
    } while (pCVar25 != this + 0x7dd2);
  }
  if (((uVar14 - 0x101 < 0x19d) && (uVar10 - 0x101 < 0x19d)) ||
     ((uVar14 < 0x102 && 0x100 < uVar10 || (uVar14 < 0x29e && 0x29c < uVar10)))) {
    pCVar21 = this + 0x1a22;
    pCVar25 = this + 0x2676;
    pCVar7 = pCVar21;
    do {
      if (-1 < *(short *)pCVar25) {
        if (*(short *)(pCVar25 + 4) == 0) {
          uVar13 = *(ushort *)pCVar7;
        }
        else {
          uVar1 = *(ushort *)pCVar7;
          if ((short)uVar1 < 0) {
            uVar34 = 0xc000;
            uVar13 = 0x4000;
          }
          else {
            uVar34 = 0x8000;
            uVar13 = 0;
          }
          if ((uVar1 & 0x4000) != 0) {
            uVar13 = uVar34;
          }
          if ((uVar1 & 0x2000) != 0) {
            uVar13 = uVar13 | 8;
          }
          if ((uVar1 & 0x1000) != 0) {
            uVar13 = uVar13 | 0x80;
          }
          if ((uVar1 & 0x800) != 0) {
            uVar13 = uVar13 | 1;
          }
          if ((uVar1 & 0x400) != 0) {
            uVar13 = uVar13 | 0x200;
          }
          if ((uVar1 & 0x200) != 0) {
            uVar13 = uVar13 | 0x100;
          }
          if ((uVar1 & 0x100) != 0) {
            uVar13 = uVar13 | 0x400;
          }
          if ((uVar1 & 0x80) != 0) {
            uVar13 = uVar13 | 0x10;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar13 = uVar13 | 0x20;
          }
          if ((uVar1 & 0x20) != 0) {
            uVar13 = uVar13 | 0x1000;
          }
          if ((uVar1 & 0x10) != 0) {
            uVar13 = uVar13 | 0x2000;
          }
          if ((uVar1 & 8) != 0) {
            uVar13 = uVar13 | 4;
          }
          if ((uVar1 & 4) != 0) {
            uVar13 = uVar13 | 0x40;
          }
          if ((uVar1 & 2) != 0) {
            uVar13 = uVar13 | 2;
          }
          if ((int)((uint)uVar1 << 0x1f) < 0) {
            uVar13 = uVar13 | 0x800;
          }
        }
        *(int *)(this + (*(short *)pCVar25 + 0x125a) * 4 + 4) =
             (int)(short)uVar13 << ((int)*(short *)(pCVar25 + 2) & 0xffU);
      }
      pCVar25 = pCVar25 + 8;
      pCVar7 = pCVar7 + 2;
    } while (pCVar25 != this + 0x335e);
    pCVar25 = this + 0x8042;
    pCVar7 = this + 0x8048;
    do {
      if (-1 < *(short *)(pCVar7 + -6)) {
        if (*(short *)(pCVar25 + 8) == 0) {
          uVar13 = *(ushort *)pCVar21;
        }
        else {
          uVar1 = *(ushort *)pCVar21;
          if ((short)uVar1 < 0) {
            uVar34 = 0xc000;
            uVar13 = 0x4000;
          }
          else {
            uVar34 = 0x8000;
            uVar13 = 0;
          }
          if ((uVar1 & 0x4000) != 0) {
            uVar13 = uVar34;
          }
          if ((uVar1 & 0x2000) != 0) {
            uVar13 = uVar13 | 8;
          }
          if ((uVar1 & 0x1000) != 0) {
            uVar13 = uVar13 | 0x80;
          }
          if ((uVar1 & 0x800) != 0) {
            uVar13 = uVar13 | 1;
          }
          if ((uVar1 & 0x400) != 0) {
            uVar13 = uVar13 | 0x200;
          }
          if ((uVar1 & 0x200) != 0) {
            uVar13 = uVar13 | 0x100;
          }
          if ((uVar1 & 0x100) != 0) {
            uVar13 = uVar13 | 0x400;
          }
          if ((uVar1 & 0x80) != 0) {
            uVar13 = uVar13 | 0x10;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar13 = uVar13 | 0x20;
          }
          if ((uVar1 & 0x20) != 0) {
            uVar13 = uVar13 | 0x1000;
          }
          if ((uVar1 & 0x10) != 0) {
            uVar13 = uVar13 | 0x2000;
          }
          if ((uVar1 & 8) != 0) {
            uVar13 = uVar13 | 4;
          }
          if ((uVar1 & 4) != 0) {
            uVar13 = uVar13 | 0x40;
          }
          if ((uVar1 & 2) != 0) {
            uVar13 = uVar13 | 2;
          }
          if ((int)((uint)uVar1 << 0x1f) < 0) {
            uVar13 = uVar13 | 0x800;
          }
        }
        *(int *)(this + (*(short *)(pCVar7 + -6) + 0x262a) * 4 + 4) =
             ((int)(short)uVar13 * *(int *)(pCVar7 + -4) << ((int)*(short *)(pCVar25 + 6) & 0xffU))
             >> 7;
      }
      pCVar25 = pCVar25 + 0xc;
      pCVar21 = pCVar21 + 2;
      pCVar7 = pCVar7 + 0xc;
    } while (pCVar25 != this + 0x939e);
  }
  iVar30 = DAT_0005d780;
  if ((((uVar14 - 0x224 < 0x5c) && (uVar10 - 0x224 < 0x5c)) || (uVar14 < 0x225 && 0x223 < uVar10))
     || (uVar14 < 0x280 && 0x27e < uVar10)) {
    if (*(int *)(this + 0x1e68) == 0) {
      uVar17 = *(undefined4 *)pCVar9;
      uVar28 = *(undefined4 *)(this + 0x1e24);
      uVar22 = *(uint *)(this + *(short *)(DAT_0005d780 + 0x5e300) * 8 + 0x20) >> 0x1c |
               (*(uint *)(this + *(short *)(DAT_0005d780 + 0x5e300) * 8 + 0x24) & 0x1ff) << 4;
      uVar36 = (*(uint *)(this + *(short *)(DAT_0005d780 + 0x5e302) * 8 + 0x24) & 0x1ff) << 4;
      sVar26 = *(short *)(DAT_0005d780 + 0x5e306);
      sVar27 = (short)uVar17;
      if ((*(uint *)(this + *(short *)(DAT_0005d780 + 0x5e300) * 8 + 0x24) & 0x4000) != 0) {
        sVar27 = (short)uVar28;
      }
      uVar13 = (ushort)(*(uint *)(this + *(short *)(DAT_0005d780 + 0x5e302) * 8 + 0x20) >> 0x1c) |
               (ushort)uVar36;
      sVar33 = (short)uVar22;
      sVar6 = sVar33 - uVar13;
      sVar29 = *(short *)(DAT_0005d780 + 0x5e308);
      if (uVar22 < (*(uint *)(this + *(short *)(DAT_0005d780 + 0x5e302) * 8 + 0x20) >> 0x1c | uVar36
                   )) {
        sVar6 = (sVar27 + sVar33) - uVar13;
      }
      *(short *)(this + (*(short *)(DAT_0005d780 + 0x5e304) + 0x4cd0) * 2 + 6) = sVar6;
      uVar36 = (*(uint *)(this + sVar26 * 8 + 0x24) & 0x1ff) << 4;
      sVar27 = (short)uVar17;
      if ((*(uint *)(this + sVar26 * 8 + 0x24) & 0x4000) != 0) {
        sVar27 = (short)uVar28;
      }
      uVar22 = (*(uint *)(this + sVar29 * 8 + 0x24) & 0x1ff) << 4;
      uVar13 = (ushort)(*(uint *)(this + sVar26 * 8 + 0x20) >> 0x1c) | (ushort)uVar36;
      uVar1 = (ushort)(*(uint *)(this + sVar29 * 8 + 0x20) >> 0x1c) | (ushort)uVar22;
      sVar33 = uVar13 - uVar1;
      if ((*(uint *)(this + sVar26 * 8 + 0x20) >> 0x1c | uVar36) <
          (*(uint *)(this + sVar29 * 8 + 0x20) >> 0x1c | uVar22)) {
        sVar33 = (sVar27 + uVar13) - uVar1;
      }
      *(short *)(this + (*(short *)(iVar30 + 0x5e30a) + 0x4cd0) * 2 + 6) = sVar33;
    }
    pCVar25 = this + 0x1c68;
    pCVar7 = this + 0x2f8e;
    pCVar9 = pCVar25;
    do {
      if (-1 < *(short *)pCVar7) {
        if (*(short *)(pCVar7 + 4) == 0) {
          uVar13 = *(ushort *)pCVar9;
        }
        else {
          uVar1 = *(ushort *)pCVar9;
          if ((short)uVar1 < 0) {
            uVar34 = 0xc000;
            uVar13 = 0x4000;
          }
          else {
            uVar34 = 0x8000;
            uVar13 = 0;
          }
          if ((uVar1 & 0x4000) != 0) {
            uVar13 = uVar34;
          }
          if ((uVar1 & 0x2000) != 0) {
            uVar13 = uVar13 | 8;
          }
          if ((uVar1 & 0x1000) != 0) {
            uVar13 = uVar13 | 0x80;
          }
          if ((uVar1 & 0x800) != 0) {
            uVar13 = uVar13 | 1;
          }
          if ((uVar1 & 0x400) != 0) {
            uVar13 = uVar13 | 0x200;
          }
          if ((uVar1 & 0x200) != 0) {
            uVar13 = uVar13 | 0x100;
          }
          if ((uVar1 & 0x100) != 0) {
            uVar13 = uVar13 | 0x400;
          }
          if ((uVar1 & 0x80) != 0) {
            uVar13 = uVar13 | 0x10;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar13 = uVar13 | 0x20;
          }
          if ((uVar1 & 0x20) != 0) {
            uVar13 = uVar13 | 0x1000;
          }
          if ((uVar1 & 0x10) != 0) {
            uVar13 = uVar13 | 0x2000;
          }
          if ((uVar1 & 8) != 0) {
            uVar13 = uVar13 | 4;
          }
          if ((uVar1 & 4) != 0) {
            uVar13 = uVar13 | 0x40;
          }
          if ((uVar1 & 2) != 0) {
            uVar13 = uVar13 | 2;
          }
          if ((int)((uint)uVar1 << 0x1f) < 0) {
            uVar13 = uVar13 | 0x800;
          }
        }
        *(int *)(this + (*(short *)pCVar7 + 0x125a) * 4 + 4) =
             (int)(short)uVar13 << ((int)*(short *)(pCVar7 + 2) & 0xffU);
      }
      pCVar7 = pCVar7 + 8;
      pCVar9 = pCVar9 + 2;
    } while (pCVar7 != this + 0x326e);
    pCVar7 = this + 0x8de6;
    pCVar9 = this + 0x8dec;
    do {
      if (-1 < *(short *)(pCVar9 + -6)) {
        if (*(short *)(pCVar7 + 8) == 0) {
          uVar13 = *(ushort *)pCVar25;
        }
        else {
          uVar1 = *(ushort *)pCVar25;
          if ((short)uVar1 < 0) {
            uVar34 = 0xc000;
            uVar13 = 0x4000;
          }
          else {
            uVar34 = 0x8000;
            uVar13 = 0;
          }
          if ((uVar1 & 0x4000) != 0) {
            uVar13 = uVar34;
          }
          if ((uVar1 & 0x2000) != 0) {
            uVar13 = uVar13 | 8;
          }
          if ((uVar1 & 0x1000) != 0) {
            uVar13 = uVar13 | 0x80;
          }
          if ((uVar1 & 0x800) != 0) {
            uVar13 = uVar13 | 1;
          }
          if ((uVar1 & 0x400) != 0) {
            uVar13 = uVar13 | 0x200;
          }
          if ((uVar1 & 0x200) != 0) {
            uVar13 = uVar13 | 0x100;
          }
          if ((uVar1 & 0x100) != 0) {
            uVar13 = uVar13 | 0x400;
          }
          if ((uVar1 & 0x80) != 0) {
            uVar13 = uVar13 | 0x10;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar13 = uVar13 | 0x20;
          }
          if ((uVar1 & 0x20) != 0) {
            uVar13 = uVar13 | 0x1000;
          }
          if ((uVar1 & 0x10) != 0) {
            uVar13 = uVar13 | 0x2000;
          }
          if ((uVar1 & 8) != 0) {
            uVar13 = uVar13 | 4;
          }
          if ((uVar1 & 4) != 0) {
            uVar13 = uVar13 | 0x40;
          }
          if ((uVar1 & 2) != 0) {
            uVar13 = uVar13 | 2;
          }
          if ((int)((uint)uVar1 << 0x1f) < 0) {
            uVar13 = uVar13 | 0x800;
          }
        }
        *(int *)(this + (*(short *)(pCVar9 + -6) + 0x262a) * 4 + 4) =
             ((int)(short)uVar13 * *(int *)(pCVar9 + -4) << ((int)*(short *)(pCVar7 + 6) & 0xffU))
             >> 7;
      }
      pCVar7 = pCVar7 + 0xc;
      pCVar25 = pCVar25 + 2;
      pCVar9 = pCVar9 + 0xc;
    } while (pCVar7 != this + 0x9236);
  }
  if (((uVar14 - 0x29e < 0x5d) && (uVar10 - 0x29e < 0x5d)) ||
     ((uVar14 < 0x29f && 0x29d < uVar10 || (uVar14 < 0x2fb && 0x2f9 < uVar10)))) {
    pCVar25 = this + 0x1d5c;
    pCVar7 = this + 0x335e;
    pCVar9 = pCVar25;
    do {
      if (-1 < *(short *)pCVar7) {
        if (*(short *)(pCVar7 + 4) == 0) {
          uVar13 = *(ushort *)pCVar9;
        }
        else {
          uVar1 = *(ushort *)pCVar9;
          if ((short)uVar1 < 0) {
            uVar34 = 0xc000;
            uVar13 = 0x4000;
          }
          else {
            uVar34 = 0x8000;
            uVar13 = 0;
          }
          if ((uVar1 & 0x4000) != 0) {
            uVar13 = uVar34;
          }
          if ((uVar1 & 0x2000) != 0) {
            uVar13 = uVar13 | 8;
          }
          if ((uVar1 & 0x1000) != 0) {
            uVar13 = uVar13 | 0x80;
          }
          if ((uVar1 & 0x800) != 0) {
            uVar13 = uVar13 | 1;
          }
          if ((uVar1 & 0x400) != 0) {
            uVar13 = uVar13 | 0x200;
          }
          if ((uVar1 & 0x200) != 0) {
            uVar13 = uVar13 | 0x100;
          }
          if ((uVar1 & 0x100) != 0) {
            uVar13 = uVar13 | 0x400;
          }
          if ((uVar1 & 0x80) != 0) {
            uVar13 = uVar13 | 0x10;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar13 = uVar13 | 0x20;
          }
          if ((uVar1 & 0x20) != 0) {
            uVar13 = uVar13 | 0x1000;
          }
          if ((uVar1 & 0x10) != 0) {
            uVar13 = uVar13 | 0x2000;
          }
          if ((uVar1 & 8) != 0) {
            uVar13 = uVar13 | 4;
          }
          if ((uVar1 & 4) != 0) {
            uVar13 = uVar13 | 0x40;
          }
          if ((uVar1 & 2) != 0) {
            uVar13 = uVar13 | 2;
          }
          if ((int)((uint)uVar1 << 0x1f) < 0) {
            uVar13 = uVar13 | 0x800;
          }
        }
        *(int *)(this + (*(short *)pCVar7 + 0x125a) * 4 + 4) =
             (int)(short)uVar13 << ((int)*(short *)(pCVar7 + 2) & 0xffU);
      }
      pCVar7 = pCVar7 + 8;
      pCVar9 = pCVar9 + 2;
    } while (pCVar7 != this + 0x3646);
    pCVar7 = this + 0x939e;
    pCVar9 = this + 0x93a4;
    do {
      if (-1 < *(short *)(pCVar9 + -6)) {
        if (*(short *)(pCVar7 + 8) == 0) {
          uVar13 = *(ushort *)pCVar25;
        }
        else {
          uVar1 = *(ushort *)pCVar25;
          if ((short)uVar1 < 0) {
            uVar34 = 0xc000;
            uVar13 = 0x4000;
          }
          else {
            uVar34 = 0x8000;
            uVar13 = 0;
          }
          if ((uVar1 & 0x4000) != 0) {
            uVar13 = uVar34;
          }
          if ((uVar1 & 0x2000) != 0) {
            uVar13 = uVar13 | 8;
          }
          if ((uVar1 & 0x1000) != 0) {
            uVar13 = uVar13 | 0x80;
          }
          if ((uVar1 & 0x800) != 0) {
            uVar13 = uVar13 | 1;
          }
          if ((uVar1 & 0x400) != 0) {
            uVar13 = uVar13 | 0x200;
          }
          if ((uVar1 & 0x200) != 0) {
            uVar13 = uVar13 | 0x100;
          }
          if ((uVar1 & 0x100) != 0) {
            uVar13 = uVar13 | 0x400;
          }
          if ((uVar1 & 0x80) != 0) {
            uVar13 = uVar13 | 0x10;
          }
          if ((uVar1 & 0x40) != 0) {
            uVar13 = uVar13 | 0x20;
          }
          if ((uVar1 & 0x20) != 0) {
            uVar13 = uVar13 | 0x1000;
          }
          if ((uVar1 & 0x10) != 0) {
            uVar13 = uVar13 | 0x2000;
          }
          if ((uVar1 & 8) != 0) {
            uVar13 = uVar13 | 4;
          }
          if ((uVar1 & 4) != 0) {
            uVar13 = uVar13 | 0x40;
          }
          if ((uVar1 & 2) != 0) {
            uVar13 = uVar13 | 2;
          }
          if ((int)((uint)uVar1 << 0x1f) < 0) {
            uVar13 = uVar13 | 0x800;
          }
        }
        *(int *)(this + (*(short *)(pCVar9 + -6) + 0x262a) * 4 + 4) =
             ((int)(short)uVar13 * *(int *)(pCVar9 + -4) << ((int)*(short *)(pCVar7 + 6) & 0xffU))
             >> 7;
      }
      pCVar7 = pCVar7 + 0xc;
      pCVar25 = pCVar25 + 2;
      pCVar9 = pCVar9 + 0xc;
    } while (pCVar7 != this + 0x97fa);
  }
  *(undefined4 *)(this + 0x1e38) = 0;
  if ((*(int *)(this + 0x1e30) != 0) || (*(int *)(this + 0x1e34) != 0x2ff)) goto LAB_0005c176;
  this[5] = (CDsp2)0x1;
  if (this[4] == (CDsp2)0x0) {
    *(undefined4 *)(this + 8) = 0;
    goto LAB_0005c176;
  }
  *(undefined4 *)(this + 8) = 1;
  iVar30 = 0;
  do {
    iVar32 = iVar30 + 0x60;
    *(undefined2 *)(this + iVar30 + 0x1e6e) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1e76) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1e7e) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1e86) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1e8e) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1e96) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1e9e) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1ea6) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1eae) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1eb6) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1ebe) = 0xffff;
    *(undefined2 *)(this + iVar30 + 0x1ec6) = 0xffff;
    iVar30 = iVar32;
  } while (iVar32 != 0x1800);
  iVar30 = *(int *)(this + 0x1e54);
  if (iVar30 == 0) {
    *(undefined2 *)(this + 0x1ebe) = 0;
    *(undefined2 *)(this + 0x1ec0) = 0;
    *(undefined2 *)(this + 0x1ec2) = 0;
    *(undefined2 *)(this + 0x1ec8) = 0;
    *(undefined2 *)(this + 0x1eca) = 0;
    *(undefined2 *)(this + 0x1ec6) = 1;
    iVar32 = *(int *)local_50;
    if (iVar32 == 0) {
      uVar10 = 0x28;
      psVar15 = (short *)(DAT_00060fd0 + 0x6027c);
LAB_0006027a:
      sVar26 = *psVar15;
      uVar14 = uVar10 - 1 & 3;
      uVar36 = 1;
      iVar32 = 8;
      *(short *)(this + sVar26 * 8 + 0x1e6e) = psVar15[1];
      *(short *)(this + sVar26 * 8 + 0x1e70) = psVar15[2];
      *(short *)(this + sVar26 * 8 + 0x1e72) = psVar15[3];
      if (1 < uVar10) {
        iVar11 = iVar32;
        if (uVar14 != 0) {
          if (uVar14 != 1) {
            if (uVar14 != 2) {
              uVar36 = 2;
              sVar26 = psVar15[4];
              iVar11 = 0x10;
              *(short *)(this + sVar26 * 8 + 0x1e6e) = psVar15[5];
              *(short *)(this + sVar26 * 8 + 0x1e70) = psVar15[6];
              *(short *)(this + sVar26 * 8 + 0x1e72) = psVar15[7];
            }
            sVar26 = *(short *)((int)psVar15 + iVar11);
            uVar36 = uVar36 + 1;
            iVar32 = iVar11 + 8;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 2)
            ;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 4)
            ;
            *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 6)
            ;
          }
          sVar26 = *(short *)((int)psVar15 + iVar32);
          uVar36 = uVar36 + 1;
          iVar11 = iVar32 + 8;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 4);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 6);
          if (uVar10 <= uVar36) goto LAB_0005ea5a;
        }
        do {
          sVar26 = *(short *)((int)psVar15 + iVar11);
          uVar36 = uVar36 + 4;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 4);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 6);
          sVar26 = *(short *)((int)psVar15 + iVar11 + 8);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 10);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 0xc)
          ;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 0xe)
          ;
          sVar26 = *(short *)((int)psVar15 + iVar11 + 0x10);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x12);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x14);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x16);
          sVar26 = *(short *)((int)psVar15 + iVar11 + 0x18);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x1a);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x1c);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
               *(undefined2 *)((int)psVar15 + iVar11 + 0x1e);
          iVar11 = iVar11 + 0x20;
        } while (uVar36 < uVar10);
      }
    }
    else {
      if (iVar32 == 1) {
        uVar10 = 0x2d;
        psVar15 = (short *)(DAT_00061008 + 0x60dbc);
        goto LAB_0006027a;
      }
      if (iVar32 == 2) {
        uVar10 = 0x25;
        psVar15 = (short *)(DAT_0006100c + 0x6101e);
        goto LAB_0006027a;
      }
      if (iVar32 == 3) {
        uVar10 = 0x24;
        psVar15 = (short *)(DAT_00061448 + 0x61770);
        goto LAB_0006027a;
      }
      if (iVar32 == 4) {
        uVar10 = 0x35;
        psVar15 = (short *)(DAT_00061444 + 0x6187e);
        goto LAB_0006027a;
      }
      if (iVar32 == 5) {
        uVar10 = 0x28;
        psVar15 = (short *)(DAT_00061450 + 0x61a5a);
        goto LAB_0006027a;
      }
      if (iVar32 == 6) {
        uVar10 = 0x30;
        psVar15 = (short *)(DAT_0006144c + 0x61b88);
        goto LAB_0006027a;
      }
      if (iVar32 == 7) {
        uVar10 = 0x20;
        psVar15 = (short *)(DAT_00061454 + 0x61d2a);
        goto LAB_0006027a;
      }
    }
LAB_0005ea5a:
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
      uVar10 = 0x35;
      psVar15 = (short *)(DAT_0005f2c8 + 0x5f4f6);
    }
    else {
      if (*(int *)(this + 0x1e5c) != 1) goto LAB_0005ec08;
      uVar10 = 0x18;
      psVar15 = (short *)(DAT_00060fd4 + 0x610e2);
    }
    sVar26 = *psVar15;
    uVar36 = 1;
    uVar14 = uVar10 - 1 & 3;
    iVar32 = 8;
    *(short *)(this + sVar26 * 8 + 0x1e6e) = psVar15[1];
    *(short *)(this + sVar26 * 8 + 0x1e70) = psVar15[2];
    *(short *)(this + sVar26 * 8 + 0x1e72) = psVar15[3];
    if (1 < uVar10) {
      iVar11 = iVar32;
      if (uVar14 != 0) {
        if (uVar14 != 1) {
          if (uVar14 != 2) {
            uVar36 = 2;
            sVar26 = psVar15[4];
            iVar11 = 0x10;
            *(short *)(this + sVar26 * 8 + 0x1e6e) = psVar15[5];
            *(short *)(this + sVar26 * 8 + 0x1e70) = psVar15[6];
            *(short *)(this + sVar26 * 8 + 0x1e72) = psVar15[7];
          }
          sVar26 = *(short *)((int)psVar15 + iVar11);
          uVar36 = uVar36 + 1;
          iVar32 = iVar11 + 8;
          *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 2);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 4);
          *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 6);
        }
        sVar26 = *(short *)((int)psVar15 + iVar32);
        uVar36 = uVar36 + 1;
        iVar11 = iVar32 + 8;
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 4);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 6);
        if (uVar10 <= uVar36) goto LAB_0005ec08;
      }
      do {
        sVar26 = *(short *)((int)psVar15 + iVar11);
        uVar36 = uVar36 + 4;
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 4);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 6);
        sVar26 = *(short *)((int)psVar15 + iVar11 + 8);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 10);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 0xc);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 0xe);
        sVar26 = *(short *)((int)psVar15 + iVar11 + 0x10);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 0x12);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 0x14);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 0x16);
        sVar26 = *(short *)((int)psVar15 + iVar11 + 0x18);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar11 + 0x1a);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar11 + 0x1c);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar11 + 0x1e);
        iVar11 = iVar11 + 0x20;
      } while (uVar36 < uVar10);
    }
  }
  else if (iVar30 == 1) {
    *(undefined2 *)(this + 0x1f3e) = 0x2be;
    *(undefined2 *)(this + 0x1f4e) = 0x2c0;
    *(undefined2 *)(this + 0x1f56) = 0x2bf;
    *(undefined2 *)(this + 0x1f5e) = 0x2c2;
    *(undefined2 *)(this + 0x1f46) = 0x2bd;
    *(undefined2 *)(this + 8000) = 0;
    *(undefined2 *)(this + 0x1f42) = 0;
    *(undefined2 *)(this + 0x1f48) = 0;
    *(undefined2 *)(this + 0x1f4a) = 0;
    *(undefined2 *)(this + 0x1f50) = 0;
    *(undefined2 *)(this + 0x1f52) = 0;
    *(undefined2 *)(this + 0x1f58) = 0;
    *(undefined2 *)(this + 0x1f5a) = 0;
    *(undefined2 *)(this + 0x1f66) = 0x2c1;
    *(undefined2 *)(this + 0x1f60) = 0;
    *(undefined2 *)(this + 0x1f62) = 0;
    *(undefined2 *)(this + 0x1f68) = 0;
    *(undefined2 *)(this + 0x1f6a) = 0;
    *(undefined2 *)(this + 0x1f70) = 0;
    *(undefined2 *)(this + 0x1f72) = 0;
    *(undefined2 *)(this + 0x1f78) = 0;
    *(undefined2 *)(this + 0x1f7a) = 0;
    *(undefined2 *)(this + 0x1f6e) = 0x2c4;
    *(undefined2 *)(this + 0x1f76) = 0x2c3;
    *(undefined2 *)(this + 0x1f7e) = 0x2c6;
    *(undefined2 *)(this + 0x1f80) = 0;
    *(undefined2 *)(this + 0x1f82) = 0;
    *(undefined2 *)(this + 0x1f88) = 0;
    *(undefined2 *)(this + 0x1f8a) = 0;
    *(undefined2 *)(this + 0x1f90) = 0;
    *(undefined2 *)(this + 0x1f92) = 0;
    *(undefined2 *)(this + 0x1f86) = 0x2c5;
    *(undefined2 *)(this + 0x1f8e) = 0x2c8;
    *(undefined2 *)(this + 0x1f96) = 0x2c7;
    *(undefined2 *)(this + 0x1f98) = 0;
    *(undefined2 *)(this + 0x1f9a) = 0;
    *(undefined2 *)(this + 0x209e) = 0x2cc;
    *(undefined2 *)(this + 0x20a0) = 0;
    *(undefined2 *)(this + 0x20a2) = 0;
    *(undefined2 *)(this + 0x20a8) = 0;
    *(undefined2 *)(this + 0x20aa) = 0;
    *(undefined2 *)(this + 0x20b0) = 0;
    *(undefined2 *)(this + 0x20b2) = 0;
    *(undefined2 *)(this + 0x20b8) = 0;
    *(undefined2 *)(this + 0x20ba) = 0;
    *(undefined2 *)(this + 0x20a6) = 0x2cb;
    *(undefined2 *)(this + 0x20ae) = 0x2ca;
    *(undefined2 *)(this + 0x20b6) = 0x2c9;
    *(undefined2 *)(this + 0x20be) = 0x2ce;
    *(undefined2 *)(this + 0x20c6) = 0x2cd;
    *(undefined2 *)(this + 0x20ce) = 0x2d3;
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
    *(undefined2 *)(this + 0x20d6) = 0x2d4;
    *(undefined2 *)(this + 0x20de) = 0x2d5;
    *(undefined2 *)(this + 0x20e6) = 0x2d6;
    *(undefined2 *)(this + 0x20ee) = 0x2d7;
    *(undefined2 *)(this + 0x20f0) = 0;
    *(undefined2 *)(this + 0x20f2) = 0;
    *(undefined2 *)(this + 0x20f8) = 0;
    *(undefined2 *)(this + 0x20fa) = 0;
    *(undefined2 *)(this + 0x20f6) = 0x2d8;
    *(undefined2 *)(this + 0x20fe) = 0x2cf;
    *(undefined2 *)(this + 0x2100) = 0;
    *(undefined2 *)(this + 0x2102) = 0;
    *(undefined2 *)(this + 0x2108) = 0;
    *(undefined2 *)(this + 0x210a) = 0;
    *(undefined2 *)(this + 0x2130) = 0;
    *(undefined2 *)(this + 0x2132) = 0;
    *(undefined2 *)(this + 0x2138) = 0;
    *(undefined2 *)(this + 0x213a) = 0;
    *(undefined2 *)(this + 0x2106) = 0x2d0;
    *(undefined2 *)(this + 0x212e) = 0x2d9;
    *(undefined2 *)(this + 0x2136) = 0x2da;
    *(undefined2 *)(this + 0x213e) = 0x2d1;
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
    *(undefined2 *)(this + 0x2146) = 0x2d2;
    *(undefined2 *)(this + 0x2156) = 0x2db;
    *(undefined2 *)(this + 0x215e) = 0x2dc;
    *(undefined2 *)(this + 0x216e) = 0x2dd;
    *(undefined2 *)(this + 0x2166) = 0x2de;
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
LAB_0005ec08:
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
  *(undefined2 *)(this + 0x2596) = 0x15;
  *(undefined2 *)(this + 0x2586) = 0x13;
  *(undefined2 *)(this + 0x258e) = 0x14;
  *(undefined2 *)(this + 0x25ae) = 0xc;
  *(undefined2 *)(this + 0x25be) = 7;
  *(undefined2 *)(this + 0x25b6) = 0x16;
  *(undefined2 *)(this + 0x25b8) = 0;
  *(undefined2 *)(this + 0x25ba) = 0;
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
  iVar11 = *(int *)(this + 0x1e68);
  iVar16 = DAT_0005f2cc + 0x5ed2c;
  iVar32 = 0;
  if (iVar11 == 3) {
    *(undefined2 *)(this + 0x327e) = 0x1c1;
    *(undefined2 *)(this + 0x3282) = 0;
    *(undefined2 *)(this + 0x3288) = 0;
    *(undefined2 *)(this + 0x328a) = 0;
    *(undefined2 *)(this + 0x3290) = 0;
    *(undefined2 *)(this + 0x3292) = 0;
    *(undefined2 *)(this + 0x3298) = 0;
    *(undefined2 *)(this + 0x329a) = 0;
    *(undefined2 *)(this + 0x3286) = 0x1bf;
    *(undefined2 *)(this + 0x328e) = 0x1bd;
    *(undefined2 *)(this + 0x3280) = 0;
    *(undefined2 *)(this + 0x32a0) = 0;
    *(undefined2 *)(this + 0x32a2) = 0;
    *(undefined2 *)(this + 0x32b8) = 0;
    *(undefined2 *)(this + 0x32ba) = 0;
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
      sVar26 = *(short *)(iVar16 + iVar32);
      iVar23 = iVar16 + iVar32;
      iVar12 = iVar32 + 0x20;
      sVar27 = *(short *)(iVar16 + iVar32 + 8);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar23 + 2);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar23 + 4);
      iVar24 = iVar16 + iVar32 + 8;
      *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar23 + 6);
      iVar31 = iVar16 + iVar32 + 0x10;
      sVar26 = *(short *)(iVar16 + iVar32 + 0x10);
      *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
      *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
      iVar23 = iVar16 + iVar32 + 0x18;
      sVar29 = *(short *)(iVar16 + iVar32 + 0x18);
      *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar31 + 2);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 4);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 6);
      *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) = *(undefined2 *)(iVar23 + 2);
      *(undefined2 *)(this + sVar29 * 8 + 0x1e70) = *(undefined2 *)(iVar23 + 4);
      *(undefined2 *)(this + sVar29 * 8 + 0x1e72) = *(undefined2 *)(iVar23 + 6);
      iVar31 = DAT_00060ffc;
      iVar24 = DAT_00060ff8;
      iVar23 = DAT_00060268;
      iVar32 = iVar12;
    } while (iVar12 != 0x640);
    if (iVar11 == 0) {
      iVar32 = 0;
      do {
        sVar26 = *(short *)((int)&DAT_00060254 + iVar32 + iVar23);
        iVar16 = iVar32 + iVar23;
        sVar27 = *(short *)((int)&DAT_00060254 + iVar32 + 8 + iVar23);
        iVar24 = iVar32 + 8 + iVar23;
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
             *(undefined2 *)((int)&DAT_00060254 + iVar16 + 2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
             *(undefined2 *)((int)&DAT_00060254 + iVar16 + 4);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
             *(undefined2 *)((int)&DAT_00060254 + iVar16 + 6);
        iVar16 = iVar32 + 0x10 + iVar23;
        sVar29 = *(short *)((int)&DAT_00060254 + iVar32 + 0x10 + iVar23);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) =
             *(undefined2 *)((int)&DAT_00060254 + iVar24 + 2);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) =
             *(undefined2 *)((int)&DAT_00060254 + iVar24 + 4);
        iVar31 = iVar32 + 0x18 + iVar23;
        sVar26 = *(short *)((int)&DAT_00060254 + iVar32 + 0x18 + iVar23);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) =
             *(undefined2 *)((int)&DAT_00060254 + iVar24 + 6);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) =
             *(undefined2 *)((int)&DAT_00060254 + iVar16 + 2);
        iVar24 = iVar32 + 0x20 + iVar23;
        sVar27 = *(short *)((int)&DAT_00060254 + iVar32 + 0x20 + iVar23);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e70) =
             *(undefined2 *)((int)&DAT_00060254 + iVar16 + 4);
        iVar12 = iVar32 + 0x28;
        iVar32 = iVar32 + 0x30;
        *(undefined2 *)(this + sVar29 * 8 + 0x1e72) =
             *(undefined2 *)((int)&DAT_00060254 + iVar16 + 6);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
             *(undefined2 *)((int)&DAT_00060254 + iVar31 + 2);
        iVar16 = iVar12 + iVar23;
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
             *(undefined2 *)((int)&DAT_00060254 + iVar31 + 4);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
             *(undefined2 *)((int)&DAT_00060254 + iVar31 + 6);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) =
             *(undefined2 *)((int)&DAT_00060254 + iVar24 + 2);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) =
             *(undefined2 *)((int)&DAT_00060254 + iVar24 + 4);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) =
             *(undefined2 *)((int)&DAT_00060254 + iVar24 + 6);
        sVar26 = *(short *)((int)&DAT_00060254 + iVar12 + iVar23);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) =
             *(undefined2 *)((int)&DAT_00060254 + iVar16 + 2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) =
             *(undefined2 *)((int)&DAT_00060254 + iVar16 + 4);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) =
             *(undefined2 *)((int)&DAT_00060254 + iVar16 + 6);
      } while (iVar32 != 0x1b0);
    }
    else if (iVar11 == 1) {
      psVar15 = (short *)(DAT_00060ffc + 0x613c0);
      sVar26 = *psVar15;
      sVar27 = *(short *)(DAT_00060ffc + 0x613c8);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(DAT_00060ffc + 0x613c2);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 0x613c4);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 0x613c6);
      *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar31 + 0x613ca);
      *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 0x613cc);
      *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 0x613ce);
      iVar32 = 0x10;
      do {
        sVar27 = *(short *)((int)psVar15 + iVar32);
        iVar16 = iVar32 + 0x20;
        sVar26 = *(short *)((int)psVar15 + iVar32 + 8);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 2);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 4);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 6);
        sVar27 = *(short *)((int)psVar15 + iVar32 + 0x10);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 10);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 0xc);
        sVar29 = *(short *)((int)psVar15 + iVar32 + 0x18);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 0xe);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 0x12);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 0x14);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 0x16);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 0x1a);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 0x1c);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 0x1e);
        iVar32 = iVar16;
      } while (iVar16 != 0x310);
    }
    else if (iVar11 == 2) {
      psVar15 = (short *)(DAT_00060ff8 + 0x6160a);
      sVar26 = *psVar15;
      sVar27 = *(short *)(DAT_00060ff8 + 0x61612);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(DAT_00060ff8 + 0x6160c);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 0x6160e);
      *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 0x61610);
      *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 0x61614);
      *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 0x61616);
      *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 0x61618);
      iVar32 = 0x10;
      do {
        sVar27 = *(short *)((int)psVar15 + iVar32);
        iVar16 = iVar32 + 0x20;
        sVar26 = *(short *)((int)psVar15 + iVar32 + 8);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 2);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 4);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 6);
        sVar27 = *(short *)((int)psVar15 + iVar32 + 0x10);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 10);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 0xc);
        sVar29 = *(short *)((int)psVar15 + iVar32 + 0x18);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 0xe);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 0x12);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 0x14);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 0x16);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) = *(undefined2 *)((int)psVar15 + iVar32 + 0x1a);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e70) = *(undefined2 *)((int)psVar15 + iVar32 + 0x1c);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e72) = *(undefined2 *)((int)psVar15 + iVar32 + 0x1e);
        iVar32 = iVar16;
      } while (iVar16 != 0x310);
    }
    else if (iVar11 == 4) {
      *(undefined2 *)(this + 0x2fd6) = 0x4a1;
      *(undefined2 *)(this + 0x2fde) = 0x4a0;
      *(undefined2 *)(this + 0x2fe6) = 0x4a2;
      *(undefined2 *)(this + 0x2fe0) = 2;
      *(undefined2 *)(this + 0x2fd8) = 2;
      *(undefined2 *)(this + 0x2fe8) = 2;
      *(undefined2 *)(this + 0x2fe2) = 0;
      *(undefined2 *)(this + 0x2fda) = 0;
      *(undefined2 *)(this + 0x2fea) = 0;
      *(undefined2 *)(this + 0x3020) = 2;
      *(undefined2 *)(this + 0x3022) = 0;
      *(undefined2 *)(this + 0x3018) = 2;
      *(undefined2 *)(this + 0x301a) = 0;
      *(undefined2 *)(this + 0x3028) = 2;
      *(undefined2 *)(this + 0x302a) = 0;
      *(undefined2 *)(this + 0x301e) = 0x4a3;
      *(undefined2 *)(this + 0x3016) = 0x4a4;
      *(undefined2 *)(this + 0x3026) = 0x4a5;
      *(undefined2 *)(this + 0x2fb0) = 2;
      *(undefined2 *)(this + 0x2fb2) = 0;
      *(undefined2 *)(this + 0x2fb8) = 2;
      *(undefined2 *)(this + 0x2fba) = 0;
      *(undefined2 *)(this + 0x2fae) = 0x4a6;
      *(undefined2 *)(this + 0x2fb6) = 0x4a7;
      *(undefined2 *)(this + 0x2fbe) = 0x4a8;
      *(undefined2 *)(this + 0x2fc6) = 0x4a9;
      *(undefined2 *)(this + 0x2fce) = 0x4aa;
      *(undefined2 *)(this + 0x2fc0) = 2;
      *(undefined2 *)(this + 0x2fc2) = 0;
      *(undefined2 *)(this + 0x2fc8) = 2;
      *(undefined2 *)(this + 0x2fca) = 0;
      *(undefined2 *)(this + 0x2fd0) = 2;
      *(undefined2 *)(this + 0x2fd2) = 0;
      *(undefined2 *)(this + 0x2fee) = 0x4ab;
      *(undefined2 *)(this + 0x2ff6) = 0x4ac;
      *(undefined2 *)(this + 0x2ffe) = 0x4ad;
      *(undefined2 *)(this + 0x2ff0) = 2;
      *(undefined2 *)(this + 0x2ff2) = 0;
      *(undefined2 *)(this + 0x2ff8) = 2;
      *(undefined2 *)(this + 0x2ffa) = 0;
      *(undefined2 *)(this + 0x3002) = 0;
      *(undefined2 *)(this + 0x3008) = 2;
      *(undefined2 *)(this + 0x300a) = 0;
      *(undefined2 *)(this + 0x3010) = 2;
      *(undefined2 *)(this + 0x3012) = 0;
      *(undefined2 *)(this + 0x3006) = 0x4ae;
      *(undefined2 *)(this + 0x300e) = 0x4af;
      *(undefined2 *)(this + 0x3000) = 2;
      *(undefined2 *)(this + 0x3030) = 2;
      *(undefined2 *)(this + 0x3032) = 0;
      *(undefined2 *)(this + 0x3038) = 2;
      *(undefined2 *)(this + 0x303a) = 0;
      *(undefined2 *)(this + 0x302e) = 0x4b0;
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
      *(undefined2 *)(this + 0x304e) = 0x4b4;
      *(undefined2 *)(this + 0x3056) = 0x4b5;
      *(undefined2 *)(this + 0x305e) = 0x4b6;
      *(undefined2 *)(this + 0x3060) = 2;
      *(undefined2 *)(this + 0x3068) = 2;
      *(undefined2 *)(this + 0x3070) = 2;
      *(undefined2 *)(this + 0x3078) = 2;
      *(undefined2 *)(this + 0x307e) = 0x4ba;
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
      iVar16 = DAT_0005f2d0 + 0x5fc16;
      iVar32 = 0;
      do {
        sVar26 = *(short *)(iVar16 + iVar32);
        iVar24 = iVar16 + iVar32;
        iVar23 = iVar32 + 0x20;
        sVar27 = *(short *)(iVar16 + iVar32 + 8);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
        iVar31 = iVar16 + iVar32 + 8;
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
        iVar12 = iVar16 + iVar32 + 0x10;
        sVar26 = *(short *)(iVar16 + iVar32 + 0x10);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar31 + 2);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 4);
        iVar24 = iVar16 + iVar32 + 0x18;
        sVar29 = *(short *)(iVar16 + iVar32 + 0x18);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 6);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar12 + 2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar12 + 4);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar12 + 6);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
        iVar32 = iVar23;
      } while (iVar23 != 0x2a0);
    }
    else {
      iVar16 = DAT_0006026c + 0x600f2;
      iVar32 = 0;
      do {
        sVar26 = *(short *)(iVar16 + iVar32);
        iVar24 = iVar16 + iVar32;
        iVar23 = iVar32 + 0x20;
        sVar27 = *(short *)(iVar16 + iVar32 + 8);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
        iVar31 = iVar16 + iVar32 + 8;
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
        iVar12 = iVar16 + iVar32 + 0x10;
        sVar26 = *(short *)(iVar16 + iVar32 + 0x10);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e6e) = *(undefined2 *)(iVar31 + 2);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e70) = *(undefined2 *)(iVar31 + 4);
        iVar24 = iVar16 + iVar32 + 0x18;
        sVar29 = *(short *)(iVar16 + iVar32 + 0x18);
        *(undefined2 *)(this + sVar27 * 8 + 0x1e72) = *(undefined2 *)(iVar31 + 6);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e6e) = *(undefined2 *)(iVar12 + 2);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e70) = *(undefined2 *)(iVar12 + 4);
        *(undefined2 *)(this + sVar26 * 8 + 0x1e72) = *(undefined2 *)(iVar12 + 6);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e6e) = *(undefined2 *)(iVar24 + 2);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e70) = *(undefined2 *)(iVar24 + 4);
        *(undefined2 *)(this + sVar29 * 8 + 0x1e72) = *(undefined2 *)(iVar24 + 6);
        iVar32 = iVar23;
      } while (iVar23 != 0x2c0);
    }
  }
  else if (*(int *)(this + 0x1e58) == 1) {
    *(undefined2 *)(this + 0x335e) = 0x18;
    *(undefined2 *)(this + 0x3366) = 0x19;
    *(undefined2 *)(this + 0x336e) = 0x1a;
    *(undefined2 *)(this + 0x3376) = 0x1b;
    *(undefined2 *)(this + 0x337e) = 0x1c;
    *(undefined2 *)(this + 0x3360) = 0;
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
  *(undefined2 *)(this + 0x3646) = 0x47e;
  *(undefined2 *)(this + 0x365e) = 0x47f;
  *(undefined2 *)(this + 0x3640) = 0;
  *(undefined2 *)(this + 0x3656) = 0x47d;
  *(undefined2 *)(this + 0x3642) = 0;
  *(undefined2 *)(this + 0x3648) = 0;
  *(undefined2 *)(this + 0x364a) = 0;
  *(undefined2 *)(this + 0x3658) = 0;
  *(undefined2 *)(this + 0x365a) = 0;
  *(undefined2 *)(this + 0x3660) = 0;
  *(undefined2 *)(this + 0x3662) = 0;
  *(undefined2 *)(this + 0x24de) = 0x461;
  *(undefined2 *)(this + 0x24d6) = 0x45e;
  *(undefined2 *)(this + 0x24d8) = 0;
  *(undefined2 *)(this + 0x24da) = 0;
  *(undefined2 *)(this + 0x24e0) = 0;
  *(undefined2 *)(this + 0x24e2) = 0;
  *(undefined2 *)(this + 0x251a) = 0;
  *(undefined2 *)(this + 0x2516) = 0x460;
  *(undefined2 *)(this + 0x2518) = 1;
  *(undefined2 *)(this + 0x2520) = 1;
  *(undefined2 *)(this + 0x251e) = 0x45f;
  *(undefined2 *)(this + 0x2522) = 0;
  *(undefined2 *)(this + 0x2566) = 0x463;
  *(undefined2 *)(this + 0x2568) = 1;
  *(undefined2 *)(this + 0x2570) = 1;
  *(undefined2 *)(this + 0x256a) = 0;
  *(undefined2 *)(this + 0x2572) = 0;
  *(undefined2 *)(this + 0x256e) = 0x462;
  *(undefined2 *)(this + 0x257e) = 0x464;
  *(undefined2 *)(this + 0x2580) = 1;
  *(undefined2 *)(this + 0x2582) = 0;
  *(undefined2 *)(this + 0x25de) = 0x465;
  *(undefined2 *)(this + 0x25e6) = 0x46f;
  *(undefined2 *)(this + 0x25ee) = 0x471;
  *(undefined2 *)(this + 0x25e0) = 0;
  *(undefined2 *)(this + 0x25f6) = 0x473;
  *(undefined2 *)(this + 0x25fe) = 0x475;
  *(undefined2 *)(this + 0x25e2) = 0;
  *(undefined2 *)(this + 0x25e8) = 0;
  *(undefined2 *)(this + 0x25ea) = 0;
  *(undefined2 *)(this + 0x25f0) = 0;
  *(undefined2 *)(this + 0x25f2) = 0;
  *(undefined2 *)(this + 0x25f8) = 0;
  *(undefined2 *)(this + 0x25fa) = 0;
  *(undefined2 *)(this + 0x2606) = 0x467;
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
  *(undefined2 *)(this + 0x260e) = 0x469;
  *(undefined2 *)(this + 0x2616) = 0x46b;
  *(undefined2 *)(this + 0x261e) = 0x46d;
  *(undefined2 *)(this + 0x2626) = 0x470;
  *(undefined2 *)(this + 0x262e) = 0x472;
  *(undefined2 *)(this + 0x2636) = 0x474;
  *(undefined2 *)(this + 0x263e) = 0x476;
  *(undefined2 *)(this + 0x2638) = 0;
  *(undefined2 *)(this + 0x263a) = 0;
  *(undefined2 *)(this + 0x2656) = 0x46a;
  *(undefined2 *)(this + 0x2646) = 0x466;
  *(undefined2 *)(this + 0x264e) = 0x468;
  *(undefined2 *)(this + 0x265e) = 0x46c;
  *(undefined2 *)(this + 0x2666) = 0x46e;
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
  if (iVar30 == 0) {
    iVar32 = *(int *)local_50;
    if (iVar32 == 0) {
      uVar10 = 4;
      psVar15 = (short *)(DAT_00060fd8 + 0x611b4);
LAB_000604f6:
      uVar36 = 1;
      sVar26 = *psVar15;
      uVar14 = uVar10 - 1 & 3;
      *(short *)(this + sVar26 * 0xc + 0x7436) = psVar15[1];
      psVar19 = psVar15 + 0xb;
      *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar15 + 2);
      *(short *)(this + sVar26 * 0xc + 0x743e) = psVar15[5];
      if (1 < uVar10) {
        if (uVar14 != 0) {
          if (uVar14 != 1) {
            psVar18 = psVar19;
            if (uVar14 != 2) {
              sVar26 = psVar15[6];
              uVar36 = 2;
              *(short *)(this + sVar26 * 0xc + 0x7436) = psVar15[7];
              *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar15 + 8);
              psVar18 = psVar15 + 0x11;
              *(short *)(this + sVar26 * 0xc + 0x743e) = *psVar19;
            }
            sVar26 = psVar18[-5];
            uVar36 = uVar36 + 1;
            *(short *)(this + sVar26 * 0xc + 0x7436) = psVar18[-4];
            *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar18 + -3);
            psVar19 = psVar18 + 6;
            *(short *)(this + sVar26 * 0xc + 0x743e) = *psVar18;
          }
          sVar26 = psVar19[-5];
          uVar36 = uVar36 + 1;
          *(short *)(this + sVar26 * 0xc + 0x7436) = psVar19[-4];
          *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar19 + -3);
          *(short *)(this + sVar26 * 0xc + 0x743e) = *psVar19;
          psVar19 = psVar19 + 6;
          if (uVar10 <= uVar36) goto LAB_0005f032;
        }
        do {
          sVar26 = psVar19[-5];
          uVar36 = uVar36 + 4;
          *(short *)(this + sVar26 * 0xc + 0x7436) = psVar19[-4];
          *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar19 + -3);
          *(short *)(this + sVar26 * 0xc + 0x743e) = *psVar19;
          sVar26 = psVar19[1];
          *(short *)(this + sVar26 * 0xc + 0x7436) = psVar19[2];
          *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar19 + 3);
          *(short *)(this + sVar26 * 0xc + 0x743e) = psVar19[6];
          sVar26 = psVar19[7];
          *(short *)(this + sVar26 * 0xc + 0x7436) = psVar19[8];
          *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar19 + 9);
          *(short *)(this + sVar26 * 0xc + 0x743e) = psVar19[0xc];
          sVar26 = psVar19[0xd];
          *(short *)(this + sVar26 * 0xc + 0x7436) = psVar19[0xe];
          *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = *(undefined4 *)(psVar19 + 0xf);
          *(short *)(this + sVar26 * 0xc + 0x743e) = psVar19[0x12];
          psVar19 = psVar19 + 0x18;
        } while (uVar36 < uVar10);
      }
    }
    else {
      if (iVar32 == 1) {
        uVar10 = 2;
        psVar15 = (short *)(DAT_00060fe8 + 0x6169c);
        goto LAB_000604f6;
      }
      if (iVar32 == 2) {
        uVar10 = 4;
        psVar15 = (short *)(DAT_00061010 + 0x61b00);
        goto LAB_000604f6;
      }
    }
LAB_0005f032:
    iVar32 = DAT_0005f2d4;
    if (*(int *)(this + 0x1e5c) == 1) {
      sVar26 = *(short *)(DAT_0005f2d4 + 0x5fd7e);
      sVar27 = *(short *)(DAT_0005f2d4 + 0x5fd8a);
      uVar2 = *(undefined2 *)(DAT_0005f2d4 + 0x5fd8c);
      uVar3 = *(undefined2 *)(DAT_0005f2d4 + 0x5fd88);
      uVar17 = *(undefined4 *)(DAT_0005f2d4 + 0x5fd82);
      uVar4 = *(undefined2 *)(DAT_0005f2d4 + 0x5fd94);
      *(undefined2 *)(this + sVar26 * 0xc + 0x7436) = *(undefined2 *)(DAT_0005f2d4 + 0x5fd80);
      uVar28 = *(undefined4 *)(iVar32 + 0x5fd8e);
      *(undefined4 *)(this + sVar26 * 0xc + 0x7438) = uVar17;
      *(undefined2 *)(this + sVar26 * 0xc + 0x743e) = uVar3;
      *(undefined2 *)(this + sVar27 * 0xc + 0x7436) = uVar2;
      *(undefined4 *)(this + sVar27 * 0xc + 0x7438) = uVar28;
      *(undefined2 *)(this + sVar27 * 0xc + 0x743e) = uVar4;
    }
  }
  else if (iVar30 == 1) {
    *(undefined2 *)(this + 0x764e) = 0;
    *(undefined2 *)(this + 0x7646) = 0x19;
    *(undefined2 *)(this + 0x765a) = 0;
    *(undefined2 *)(this + 0x7666) = 0;
    *(undefined2 *)(this + 0x7672) = 0;
    *(undefined2 *)(this + 0x767e) = 0;
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
  if (iVar11 != 3) {
    *(undefined2 *)(this + 0x810a) = 0;
    *(undefined2 *)(this + 0x8102) = 10;
    *(undefined2 *)(this + 0x810e) = 0xb;
    *(undefined2 *)(this + 0x811a) = 0xc;
    *(undefined2 *)(this + 0x8126) = 0xd;
    *(undefined2 *)(this + 0x8132) = 0xe;
    *(undefined4 *)(this + 0x8104) = 0x8000;
    *(undefined2 *)(this + 0x813e) = 0xf;
    *(undefined4 *)(this + 0x8110) = 0x8000;
    *(undefined4 *)(this + 0x811c) = 0x8000;
    *(undefined4 *)(this + 0x8128) = 0x8000;
    *(undefined4 *)(this + 0x8134) = 0x8000;
    *(undefined4 *)(this + 0x8140) = 0x8000;
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
  if (iVar30 == 0) {
    if (*(int *)local_50 == 0) {
      uVar14 = *(uint *)(this + 0x240) >> 0x1c | (*(uint *)(this + 0x244) & 0x1ff) << 4;
      uVar10 = *(uint *)(this + 0x2a0) >> 0x1c | (*(uint *)(this + 0x2a4) & 0x1ff) << 4;
      if (uVar10 < uVar14) {
        iVar30 = uVar14 - uVar10;
      }
      else {
        iVar30 = uVar10 - uVar14;
      }
      *(int *)(this + 0x2ecad0) = iVar30;
    }
    else if (*(int *)local_50 == 1) {
      uVar10 = *(uint *)(this + 0x210) >> 0x1c | (*(uint *)(this + 0x214) & 0x1ff) << 4;
      uVar14 = *(uint *)(this + 0x290) >> 0x1c | (*(uint *)(this + 0x294) & 0x1ff) << 4;
      if (uVar14 < uVar10) {
        *(uint *)(this + 0x32d2d4) = uVar10 - uVar14;
      }
      else {
        *(uint *)(this + 0x32d2d4) = uVar14 - uVar10;
      }
    }
  }
  pCVar25 = this + 0x1820;
  pCVar7 = this + 0x1e6e;
  pCVar9 = pCVar25;
  do {
    if (-1 < *(short *)pCVar7) {
      if (*(short *)(pCVar7 + 4) == 0) {
        uVar13 = *(ushort *)pCVar9;
      }
      else {
        uVar1 = *(ushort *)pCVar9;
        if ((short)uVar1 < 0) {
          uVar34 = 0xc000;
          uVar13 = 0x4000;
        }
        else {
          uVar34 = 0x8000;
          uVar13 = 0;
        }
        if ((uVar1 & 0x4000) != 0) {
          uVar13 = uVar34;
        }
        if ((uVar1 & 0x2000) != 0) {
          uVar13 = uVar13 | 8;
        }
        if ((uVar1 & 0x1000) != 0) {
          uVar13 = uVar13 | 0x80;
        }
        if ((uVar1 & 0x800) != 0) {
          uVar13 = uVar13 | 1;
        }
        if ((uVar1 & 0x400) != 0) {
          uVar13 = uVar13 | 0x200;
        }
        if ((uVar1 & 0x200) != 0) {
          uVar13 = uVar13 | 0x100;
        }
        if ((uVar1 & 0x100) != 0) {
          uVar13 = uVar13 | 0x400;
        }
        if ((uVar1 & 0x80) != 0) {
          uVar13 = uVar13 | 0x10;
        }
        if ((uVar1 & 0x40) != 0) {
          uVar13 = uVar13 | 0x20;
        }
        if ((uVar1 & 0x20) != 0) {
          uVar13 = uVar13 | 0x1000;
        }
        if ((uVar1 & 0x10) != 0) {
          uVar13 = uVar13 | 0x2000;
        }
        if ((uVar1 & 8) != 0) {
          uVar13 = uVar13 | 4;
        }
        if ((uVar1 & 4) != 0) {
          uVar13 = uVar13 | 0x40;
        }
        if ((uVar1 & 2) != 0) {
          uVar13 = uVar13 | 2;
        }
        if ((int)((uint)uVar1 << 0x1f) < 0) {
          uVar13 = uVar13 | 0x800;
        }
      }
      *(int *)(this + (*(short *)pCVar7 + 0x125a) * 4 + 4) =
           (int)(short)uVar13 << ((int)*(short *)(pCVar7 + 2) & 0xffU);
    }
    pCVar7 = pCVar7 + 8;
    pCVar9 = pCVar9 + 2;
  } while (pCVar7 != this + 0x366e);
  pCVar7 = this + 0x7436;
  pCVar9 = this + 0x743c;
  do {
    if (-1 < *(short *)(pCVar9 + -6)) {
      if (*(short *)(pCVar7 + 8) == 0) {
        uVar13 = *(ushort *)pCVar25;
      }
      else {
        uVar1 = *(ushort *)pCVar25;
        if ((short)uVar1 < 0) {
          uVar34 = 0xc000;
          uVar13 = 0x4000;
        }
        else {
          uVar34 = 0x8000;
          uVar13 = 0;
        }
        if ((uVar1 & 0x4000) != 0) {
          uVar13 = uVar34;
        }
        if ((uVar1 & 0x2000) != 0) {
          uVar13 = uVar13 | 8;
        }
        if ((uVar1 & 0x1000) != 0) {
          uVar13 = uVar13 | 0x80;
        }
        if ((uVar1 & 0x800) != 0) {
          uVar13 = uVar13 | 1;
        }
        if ((uVar1 & 0x400) != 0) {
          uVar13 = uVar13 | 0x200;
        }
        if ((uVar1 & 0x200) != 0) {
          uVar13 = uVar13 | 0x100;
        }
        if ((uVar1 & 0x100) != 0) {
          uVar13 = uVar13 | 0x400;
        }
        if ((uVar1 & 0x80) != 0) {
          uVar13 = uVar13 | 0x10;
        }
        if ((uVar1 & 0x40) != 0) {
          uVar13 = uVar13 | 0x20;
        }
        if ((uVar1 & 0x20) != 0) {
          uVar13 = uVar13 | 0x1000;
        }
        if ((uVar1 & 0x10) != 0) {
          uVar13 = uVar13 | 0x2000;
        }
        if ((uVar1 & 8) != 0) {
          uVar13 = uVar13 | 4;
        }
        if ((uVar1 & 4) != 0) {
          uVar13 = uVar13 | 0x40;
        }
        if ((uVar1 & 2) != 0) {
          uVar13 = uVar13 | 2;
        }
        if ((int)((uint)uVar1 << 0x1f) < 0) {
          uVar13 = uVar13 | 0x800;
        }
      }
      *(int *)(this + (*(short *)(pCVar9 + -6) + 0x262a) * 4 + 4) =
           ((int)(short)uVar13 * *(int *)(pCVar9 + -4) << ((int)*(short *)(pCVar7 + 6) & 0xffU)) >>
           7;
    }
    pCVar7 = pCVar7 + 0xc;
    pCVar25 = pCVar25 + 2;
    pCVar9 = pCVar9 + 0xc;
  } while (pCVar7 != this + 0x9836);
LAB_0005c176:
  *(uint *)(this + 0x1e30) = param_1;
  *(uint *)(this + 0x1e34) = param_2;
  return;
}

