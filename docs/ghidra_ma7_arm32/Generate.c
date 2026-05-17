/* Generate @ 00043350 15612B */


/* WARNING: Type propagation algorithm not settling */
/* ARM::CCsmSynth::Generate(unsigned int, ARM::_genbuf*) */

void __thiscall ARM::CCsmSynth::Generate(CCsmSynth *this,uint param_1,_genbuf *param_2)

{
  int *piVar1;
  CCsmSynth CVar2;
  CCsmSynth CVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  CCsmSynth *pCVar8;
  CCsmSynth *pCVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  CCsmSynth CVar13;
  bool bVar14;
  undefined4 uVar15;
  CCsmSynth *pCVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  CCsmSynth *pCVar20;
  int iVar21;
  CCsmSynth *pCVar22;
  int *piVar23;
  CCsmSynth *pCVar24;
  uint uVar25;
  undefined4 uVar26;
  byte bVar27;
  CCsmSynth *pCVar28;
  CCsmSynth *pCVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  CCsmSynth *pCVar41;
  CCsmSynth *pCVar42;
  int iVar43;
  int *piVar44;
  CCsmSynth *pCVar45;
  CCsmSynth *pCVar46;
  int iVar47;
  uint uVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  bool bVar54;
  CCsmSynth *local_238;
  CCsmSynth *local_230;
  CCsmSynth *local_228;
  int local_224;
  int local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint *local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint *local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  int local_1b4;
  CCsmSynth *local_1b0;
  int local_16c;
  CCsmSynth *local_148;
  uint local_144;
  int local_13c;
  undefined4 local_d0;
  undefined4 local_cc;
  uint local_c8;
  uint local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8 [4];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  CCsmSynth *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  CCsmSynth *local_4c;
  int local_48;
  int local_44;
  int local_40;
  code *local_3c;
  int local_38;
  int local_34;
  int local_30;
  CCsmSynth *local_2c;
  
  iVar12 = DAT_00047288;
  pCVar22 = this + 0x1804;
  pCVar28 = (CCsmSynth *)(DAT_0004401c + 0x4336a);
  if (this[0x18ca] == (CCsmSynth)0x1) {
    if (this[0x18e4] == (CCsmSynth)0x1) {
      memset(local_a8,0,0x80);
      local_a8[0] = iVar12 + 0x46df4;
      local_a8[2] = DAT_00047290 + 0x46d02;
      local_a8[1] = iVar12 + 0x475f4;
      local_a8[3] = DAT_00047290 + 0x47502;
      local_98 = DAT_00047290 + 0x47d02;
      local_88 = DAT_0004728c + 0x47b0e;
      local_8c = DAT_0004728c + 0x4730e;
      local_4c = this + 0x800;
      local_2c = this + 0x1000;
      local_94 = DAT_00047294 + 0x47440;
      local_90 = DAT_00047294 + 0x47c40;
      local_84 = DAT_00047298 + 0x47256;
      local_7c = DAT_0004729c + 0x47160;
      local_80 = DAT_00047298 + 0x47a56;
      local_78 = DAT_0004729c + 0x47960;
      local_74 = DAT_000472a0 + 0x4706c;
      local_70 = DAT_000472a0 + 0x4786c;
      local_68 = DAT_000472a4 + 0x46fb0;
      local_64 = DAT_000472a4 + 0x477b0;
      local_58 = DAT_000472ac + 0x46dc8;
      local_60 = DAT_000472a8 + 0x46ebe;
      local_5c = DAT_000472a8 + 0x476be;
      local_54 = DAT_000472ac + 0x475c8;
      local_50 = DAT_000472ac + 0x47dc8;
      local_48 = DAT_000472b0 + 0x474d4;
      local_44 = DAT_000472b0 + 0x47cd4;
      local_3c = CDinSynth::GetPos + DAT_000472b4;
      local_40 = DAT_000472b4 + 0x4741c;
      local_38 = DAT_000472b8 + 0x47326;
      local_34 = DAT_000472b8 + 0x47b26;
      local_30 = DAT_000472bc + 0x47232;
      uVar40 = *(uint *)(this + 0x18e0);
      uVar17 = *(uint *)(this + 0x18dc);
      this[0x18da] = this[0x18c9];
      this[0x18e4] = (CCsmSynth)0x1;
      lVar5 = (ulonglong)(uVar40 << (uVar17 & 0xff)) * 48000;
      *(undefined4 *)(this + 0x18e8) = **(undefined4 **)(this + 0x1984);
      lVar5 = (ulonglong)
              ((uint)lVar5 >> 0x14 |
              ((uVar40 << (uVar17 - 0x20 & 0xff) | uVar40 >> (0x20 - uVar17 & 0xff)) * 48000 +
              (int)((ulonglong)lVar5 >> 0x20)) * 0x1000) * (ulonglong)*(uint *)(this + 0x18f8);
      uVar17 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
      if (this[0x18c5] == (CCsmSynth)0x0) {
        uVar6 = (longlong)((ulonglong)uVar17 * (ulonglong)*(uint *)(this + 0x18f0)) >> 0x10;
        uVar17 = (uint)uVar6;
        if (this[0x18c6] == (CCsmSynth)0x1) {
          lVar5 = (uVar6 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f4);
          uVar17 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
        }
      }
      if (uVar17 == 0) {
        uVar17 = 1;
      }
      uVar26 = *(undefined4 *)(this + 0x1978);
      local_6c = this;
      uVar15 = __udivsi3(uVar26,uVar17);
      *(undefined4 *)(this + 0x1904) = uVar15;
      iVar10 = __udivsi3(0xbb80000,uVar26);
      iVar12 = DAT_000472c0;
      iVar11 = DAT_000472c4 + 0x4701e;
      *(int *)(this + 0x1848) = iVar10 * (*(int *)(this + 0x1824) << (sbyte)this[0x181c]);
      iVar19 = *(int *)(pCVar28 + iVar12);
      iVar12 = *(int *)(iVar19 + ((byte)this[0x1814] & 0x7f) * 4);
      *(int *)(this + 0x1850) = iVar12;
      *(int *)(this + 0x1844) = iVar11;
      if (this[0x180c] == (CCsmSynth)0x1) {
        *(int *)(this + 0x1850) = -iVar12;
      }
      iVar12 = DAT_000472c8 + 0x4705c;
      *(int *)(this + 0x1858) = iVar10 * (*(int *)(this + 0x1828) << (sbyte)this[0x181d]);
      iVar11 = *(int *)(iVar19 + ((byte)this[0x1815] & 0x7f) * 4);
      *(int *)(this + 0x1860) = iVar11;
      *(int *)(this + 0x1854) = iVar12;
      if (this[0x180d] == (CCsmSynth)0x1) {
        *(int *)(this + 0x1860) = -iVar11;
      }
      iVar12 = DAT_000472cc + 0x47094;
      *(int *)(this + 0x1868) = iVar10 * (*(int *)(this + 0x182c) << (sbyte)this[0x181e]);
      iVar11 = *(int *)(iVar19 + ((byte)this[0x1816] & 0x7f) * 4);
      *(int *)(this + 0x1870) = iVar11;
      *(int *)(this + 0x1864) = iVar12;
      if (this[0x180e] == (CCsmSynth)0x1) {
        *(int *)(this + 0x1870) = -iVar11;
      }
      iVar11 = DAT_000472d0 + 0x470d2;
      *(int *)(this + 0x1878) = iVar10 * (*(int *)(this + 0x1830) << (sbyte)this[0x181f]);
      iVar12 = *(int *)(iVar19 + ((byte)this[0x1817] & 0x7f) * 4);
      *(int *)(this + 0x1880) = iVar12;
      *(int *)(this + 0x1874) = iVar11;
      if (this[0x180f] == (CCsmSynth)0x1) {
        *(int *)(this + 0x1880) = -iVar12;
      }
      iVar11 = DAT_000472d4 + 0x47118;
      *(int *)(this + 0x1888) = iVar10 * (*(int *)(this + 0x1834) << (sbyte)this[0x1820]);
      iVar12 = *(int *)(iVar19 + ((byte)this[0x1818] & 0x7f) * 4);
      *(int *)(this + 0x1890) = iVar12;
      *(int *)(this + 0x1884) = iVar11;
      if (this[0x1810] == (CCsmSynth)0x1) {
        *(int *)(this + 0x1890) = -iVar12;
      }
      iVar11 = DAT_000472d8 + 0x47152;
      *(int *)(this + 0x1898) = iVar10 * (*(int *)(this + 0x1838) << (sbyte)this[0x1821]);
      iVar12 = *(int *)(iVar19 + ((byte)this[0x1819] & 0x7f) * 4);
      *(int *)(this + 0x18a0) = iVar12;
      *(int *)(this + 0x1894) = iVar11;
      if (this[0x1811] == (CCsmSynth)0x1) {
        *(int *)(this + 0x18a0) = -iVar12;
      }
      *(int *)(this + 0x18a8) = iVar10 * (*(int *)(this + 0x183c) << (sbyte)this[0x1822]);
      iVar12 = DAT_000472dc + 0x471a2;
      iVar11 = *(int *)(iVar19 + ((byte)this[0x181a] & 0x7f) * 4);
      *(int *)(this + 0x18b0) = iVar11;
      *(int *)(this + 0x18a4) = iVar12;
      if (this[0x1812] == (CCsmSynth)0x1) {
        *(int *)(this + 0x18b0) = -iVar11;
      }
      iVar12 = DAT_000472e0 + 0x471d0;
      *(int *)(this + 0x18b8) = iVar10 * (*(int *)(this + 0x1840) << (sbyte)this[0x1823]);
      iVar10 = *(int *)(iVar19 + ((byte)this[0x181b] & 0x7f) * 4);
      *(int *)(this + 0x18c0) = iVar10;
      *(int *)(this + 0x18b4) = iVar12;
      if (this[0x1813] == (CCsmSynth)0x1) {
        *(int *)(this + 0x18c0) = -iVar10;
      }
    }
  }
  else if ((this[0x18e4] == (CCsmSynth)0x1) && (1 < *(uint *)(this + 0x18fc))) {
    *(undefined4 *)(this + 0x18fc) = 1;
    *(undefined4 *)(this + 0x1900) = 0;
  }
  iVar10 = DAT_00044024;
  iVar12 = DAT_00044020;
  if (param_1 != 0) {
    piVar7 = (int *)(DAT_00044024 + 0x433a6);
    iVar19 = DAT_00044028 + 0x433aa;
    piVar23 = (int *)(DAT_00044024 + 0x434a6);
    pCVar41 = this + 0x1844;
    pCVar46 = this + 0x1854;
    iVar11 = DAT_00044020 + 0x432aa;
    iVar32 = DAT_00044028 + 0x43baa;
    pCVar45 = this + 0x1864;
    pCVar20 = this + 0x1874;
    pCVar16 = this + 0x1884;
    pCVar8 = this + 0x1894;
    pCVar29 = this + 0x18a4;
    pCVar42 = this + 0x18b4;
    local_1b0 = (CCsmSynth *)0x0;
    pCVar9 = (CCsmSynth *)0x0;
    pCVar24 = (CCsmSynth *)&local_c0;
    local_228 = (CCsmSynth *)param_1;
    do {
      if ((CCsmSynth *)&DAT_00000040 < local_228) {
        local_148 = local_228 + -0x40;
        pCVar24 = (CCsmSynth *)&DAT_00000040;
      }
      else {
        pCVar9 = (CCsmSynth *)0x0;
      }
      uVar17 = (uint)(byte)this[0x18c7];
      if (local_228 <= (CCsmSynth *)&DAT_00000040) {
        pCVar24 = local_228;
        local_148 = pCVar9;
      }
      local_228 = pCVar24;
      if (uVar17 - 0x40 < 0x40 || 0x8c < uVar17) {
        local_c8 = (uint)(byte)this[0x18c5];
        local_bc = 0xfffffffe;
        local_cc = 0xfffffffe;
        local_d0 = 0xfffffffe;
        local_b8 = 0xfffffffe;
      }
      else if (uVar17 < 0x40) {
        local_c8 = (uint)(byte)this[0x18c5];
        iVar30 = *(int *)(pCVar28 + DAT_0004402c) + uVar17 * 0x20;
        local_d0 = *(undefined4 *)(iVar30 + 0xc);
        local_bc = *(undefined4 *)(iVar30 + 0x10);
        iVar30 = *(int *)(pCVar28 + DAT_00044030) +
                 (*(byte *)(*(int *)(pCVar28 + DAT_0004402c) + uVar17 * 0x20) & 0xf) * 0x14;
        local_cc = *(undefined4 *)(iVar30 + 4);
        local_b8 = *(undefined4 *)(iVar30 + 8);
      }
      else {
        local_c8 = (uint)(byte)this[0x18c5];
        iVar30 = *(int *)(pCVar28 + DAT_00046880) + (uVar17 ^ 0x80) * 0x14;
        local_d0 = 0x1f;
        local_bc = 0x10;
        local_cc = *(undefined4 *)(iVar30 + 4);
        local_b8 = *(undefined4 *)(iVar30 + 8);
      }
      local_ac = (uint)(byte)this[0x18cb];
      local_c0 = *(undefined4 *)(this + 0x18d0);
      local_c4 = 0;
      if (*(int *)(this + 0x18ec) == 0) {
        local_c4 = (uint)(byte)this[0x18c9];
      }
      local_b4 = local_c8;
      local_b0 = local_c4;
      CVolIP::Generate(*(CVolIP **)(this + 0x1958),(_ipvol *)&local_d0,piVar7,(uint)local_228);
      CPanIP::Generate(*(CPanIP **)(this + 0x195c),(_ip_panpot *)&local_c0,piVar23,
                       (int *)(iVar10 + 0x435a6),(uint)local_228);
      CVar13 = this[0x18c5];
      if (CVar13 == (CCsmSynth)0x0) {
        uVar17 = (uint)(byte)this[0x18c7];
        if (uVar17 - 0x40 < 0x40 || 0x8c < uVar17) {
          iVar36 = -2;
          local_204 = -2;
          local_16c = -2;
          local_144 = 0xfffffffe;
          this[0x1960] = (CCsmSynth)0xc0;
          this[0x1961] = (CCsmSynth)0x2;
          bVar14 = true;
LAB_00046300:
          iVar30 = -2;
          bVar54 = *(int *)(this + 0x18f0) != iVar36;
          if (bVar54) {
            *(int *)(this + 0x18f0) = iVar36;
          }
          if (bVar14) goto LAB_0004363e;
        }
        else {
          if (uVar17 < 0x40) {
            iVar39 = uVar17 * 0x20;
            iVar30 = *(int *)(pCVar28 + DAT_0004402c);
            iVar43 = DAT_00044034 + 0x4356a;
            iVar47 = DAT_00044038 + 0x4356c;
            iVar21 = iVar30 + iVar39;
            iVar36 = iVar30 + iVar39;
            local_144 = *(uint *)(iVar47 + (uint)*(ushort *)
                                                  (iVar43 + (*(byte *)(iVar21 + 8) & 0x1f) * 4 +
                                                  0xa76) * 4 + 0xb68);
            local_16c = *(int *)(iVar47 + (uint)*(ushort *)
                                                 (iVar43 + (*(byte *)(iVar21 + 6) & 0x1f) * 4 +
                                                 0xa76) * 4 + 0xb68);
            local_204 = *(int *)(iVar47 + (uint)*(ushort *)
                                                 (iVar43 + (*(byte *)(iVar21 + 7) & 0x1f) * 4 +
                                                 0xa76) * 4 + 0xb68);
            if (*(char *)(iVar36 + 1) == '\x01') goto LAB_0004612a;
LAB_000435c4:
            uVar40 = *(byte *)(iVar30 + iVar39) & 0xf;
            iVar30 = *(int *)(pCVar28 + DAT_00044030);
          }
          else {
            local_144 = 0x8000;
            local_204 = 0;
            local_16c = 0;
LAB_0004667c:
            uVar40 = uVar17 ^ 0x80;
            iVar30 = *(int *)(pCVar28 + DAT_00046880);
          }
          bVar27 = *(byte *)(iVar30 + uVar40 * 0x14 + 1) | *(char *)(iVar30 + uVar40 * 0x14) << 6;
LAB_000435f0:
          this[0x1960] = (CCsmSynth)(bVar27 & 0xc0);
          this[0x1961] = (CCsmSynth)(bVar27 & 3);
          if (CVar13 == (CCsmSynth)0x0) {
            bVar14 = false;
            if (uVar17 < 0x40) {
              iVar36 = *(int *)(*(int *)(pCVar28 + DAT_0004687c) + uVar17 * 0x20 + 0x1c);
            }
            else {
              iVar36 = 0x10000;
            }
            goto LAB_00046300;
          }
          bVar14 = false;
          bVar54 = false;
        }
        if (uVar17 < 0x40) {
          uVar40 = *(byte *)(*(int *)(pCVar28 + DAT_0004402c) + uVar17 * 0x20) & 0xf;
        }
        else {
          uVar40 = uVar17 ^ 0x80;
        }
        iVar30 = *(int *)(*(int *)(pCVar28 + DAT_00044030) + uVar40 * 0x14 + 0xc);
      }
      else {
        uVar17 = (uint)(byte)this[0x18c7];
        local_144 = *(uint *)(this + 0x1964);
        local_16c = *(int *)(this + 0x1968);
        local_204 = *(int *)(this + 0x196c);
        bVar54 = uVar17 - 0x40 < 0x40;
        bVar14 = bVar54 || 0x8c < uVar17;
        if (!bVar54 && 0x8c >= uVar17) {
          if (0x3f < uVar17) goto LAB_0004667c;
          iVar39 = uVar17 * 0x20;
          iVar30 = *(int *)(pCVar28 + DAT_0004687c);
          iVar36 = iVar30 + iVar39;
          if (*(char *)(iVar36 + 1) != '\x01') goto LAB_000435c4;
LAB_0004612a:
          bVar27 = *(byte *)(iVar36 + 2) | 0x80;
          goto LAB_000435f0;
        }
        iVar30 = -2;
        this[0x1961] = (CCsmSynth)0x2;
        bVar54 = false;
        this[0x1960] = (CCsmSynth)0xc0;
      }
LAB_0004363e:
      uVar40 = 0xfffffffe;
      if (*(int *)(this + 0x18f4) != iVar30) {
        *(int *)(this + 0x18f4) = iVar30;
        bVar54 = true;
      }
      if (!bVar14) {
        if (uVar17 < 0x40) {
          uVar17 = *(byte *)(*(int *)(pCVar28 + DAT_0004402c) + uVar17 * 0x20) & 0xf;
        }
        else {
          uVar17 = uVar17 ^ 0x80;
        }
        uVar40 = *(uint *)(*(int *)(pCVar28 + DAT_00044030) + uVar17 * 0x14 + 0x10);
      }
      if (*(uint *)(this + 0x18f8) == uVar40) {
        if (bVar54) goto LAB_00043698;
        CVar2 = this[0x18c9];
      }
      else {
        *(uint *)(this + 0x18f8) = uVar40;
LAB_00043698:
        iVar30 = DAT_0004403c;
        memset(local_a8,0,0x80);
        local_94 = iVar30 + 0x43cb6;
        local_90 = iVar30 + 0x444b6;
        local_a8[3] = iVar12 + 0x43aaa;
        local_8c = DAT_00044040 + 0x43bd4;
        local_84 = DAT_00044044 + 0x43ae6;
        local_88 = DAT_00044040 + 0x443d4;
        local_80 = DAT_00044044 + 0x442e6;
        local_98 = iVar12 + 0x442aa;
        local_78 = DAT_0004404c + 0x44220;
        local_7c = DAT_0004404c + 0x43a20;
        local_74 = DAT_00044048 + 0x43926;
        local_68 = DAT_00044050 + 0x43834;
        local_70 = DAT_00044048 + 0x44126;
        local_64 = (int)&DAT_00044034 + DAT_00044050;
        local_5c = DAT_00044054 + 0x43f6e;
        local_60 = DAT_00044054 + 0x4376e;
        local_58 = DAT_00044058 + 0x43678;
        local_48 = DAT_0004405c + 0x43d86;
        local_50 = DAT_00044058 + 0x44678;
        local_54 = DAT_00044058 + 0x43e78;
        local_44 = DAT_0004405c + 0x44586;
        CVar2 = this[0x18c9];
        local_3c = (code *)(DAT_00044060 + 0x444ca);
        local_40 = DAT_00044060 + 0x43cca;
        local_38 = DAT_00044064 + 0x43bd4;
        local_4c = this + 0x800;
        local_30 = DAT_00044068 + 0x43ae2;
        local_34 = DAT_00044064 + 0x443d4;
        CVar3 = this[0x18ca];
        local_2c = this + 0x1000;
        this[0x18da] = CVar2;
        this[0x18e4] = CVar3;
        if (CVar3 == (CCsmSynth)0x0) {
          uVar15 = *(undefined4 *)(*(int *)(this + 0x1984) + 0xb0);
        }
        else {
          uVar15 = **(undefined4 **)(this + 0x1984);
        }
        uVar25 = *(uint *)(this + 0x18e0);
        uVar17 = *(uint *)(this + 0x18dc);
        *(undefined4 *)(this + 0x18e8) = uVar15;
        lVar5 = (ulonglong)(uVar25 << (uVar17 & 0xff)) * 48000;
        uVar6 = (ulonglong)
                ((uint)lVar5 >> 0x14 |
                ((uVar25 << (uVar17 - 0x20 & 0xff) | uVar25 >> (0x20 - uVar17 & 0xff)) * 48000 +
                (int)((ulonglong)lVar5 >> 0x20)) * 0x1000) * (ulonglong)uVar40;
        uVar17 = (uint)((longlong)uVar6 >> 0x10);
        if (CVar13 == (CCsmSynth)0x0) {
          uVar6 = (uVar6 >> 0x10 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f0);
          uVar17 = (uint)((longlong)uVar6 >> 0x10);
          if (this[0x18c6] == (CCsmSynth)0x1) {
            lVar5 = (uVar6 >> 0x10 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f4);
            uVar17 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
          }
        }
        if (uVar17 == 0) {
          uVar17 = 1;
        }
        uVar26 = *(undefined4 *)(this + 0x1978);
        local_a8[0] = iVar19;
        local_a8[1] = iVar32;
        local_a8[2] = iVar11;
        local_6c = this;
        uVar15 = __udivsi3(uVar26,uVar17);
        *(undefined4 *)(this + 0x1904) = uVar15;
        iVar36 = __udivsi3(0xbb80000,uVar26);
        iVar30 = DAT_0004406c;
        *(int *)(this + 0x1848) = iVar36 * (*(int *)(this + 0x1824) << (sbyte)this[0x181c]);
        iVar39 = *(int *)(pCVar28 + iVar30);
        iVar30 = *(int *)(iVar39 + ((byte)this[0x1814] & 0x7f) * 4);
        *(int *)(this + 0x1850) = iVar30;
        pCVar24 = pCVar28;
        if (this[0x180c] == (CCsmSynth)0x1) {
          iVar30 = -iVar30;
          pCVar24 = pCVar41;
        }
        iVar21 = DAT_00044070 + 0x438ec;
        if (this[0x180c] == (CCsmSynth)0x1) {
          *(int *)(pCVar24 + 0xc) = iVar30;
        }
        if (CVar3 == (CCsmSynth)0x0) {
          iVar21 = local_a8[(byte)*pCVar22 & 0x1f];
        }
        *(int *)pCVar41 = iVar21;
        *(int *)(this + 0x1858) = iVar36 * (*(int *)(this + 0x1828) << (sbyte)this[0x181d]);
        iVar21 = *(int *)(iVar39 + ((byte)this[0x1815] & 0x7f) * 4);
        *(int *)(this + 0x1860) = iVar21;
        iVar30 = DAT_00044074;
        if (this[0x180d] == (CCsmSynth)0x1) {
          *(int *)(this + 0x1860) = -iVar21;
        }
        iVar30 = iVar30 + 0x4394a;
        if (CVar3 == (CCsmSynth)0x0) {
          iVar30 = local_a8[(byte)this[0x1805] & 0x1f];
        }
        *(int *)pCVar46 = iVar30;
        *(int *)(this + 0x1868) = iVar36 * (*(int *)(this + 0x182c) << (sbyte)this[0x181e]);
        iVar21 = *(int *)(iVar39 + ((byte)this[0x1816] & 0x7f) * 4);
        *(int *)(this + 0x1870) = iVar21;
        iVar30 = DAT_00044078;
        if (this[0x180e] == (CCsmSynth)0x1) {
          *(int *)(this + 0x1870) = -iVar21;
        }
        iVar30 = iVar30 + 0x439aa;
        if (CVar3 == (CCsmSynth)0x0) {
          iVar30 = local_a8[(byte)this[0x1806] & 0x1f];
        }
        *(int *)pCVar45 = iVar30;
        *(int *)(this + 0x1878) = iVar36 * (*(int *)(this + 0x1830) << (sbyte)this[0x181f]);
        iVar21 = *(int *)(iVar39 + ((byte)this[0x1817] & 0x7f) * 4);
        *(int *)(this + 0x1880) = iVar21;
        iVar30 = DAT_0004407c;
        if (this[0x180f] == (CCsmSynth)0x1) {
          *(int *)(this + 0x1880) = -iVar21;
        }
        iVar30 = iVar30 + 0x43a0a;
        if (CVar3 == (CCsmSynth)0x0) {
          iVar30 = local_a8[(byte)this[0x1807] & 0x1f];
        }
        *(int *)pCVar20 = iVar30;
        *(int *)(this + 0x1888) = iVar36 * (*(int *)(this + 0x1834) << (sbyte)this[0x1820]);
        iVar21 = *(int *)(iVar39 + ((byte)this[0x1818] & 0x7f) * 4);
        *(int *)(this + 0x1890) = iVar21;
        iVar30 = DAT_00044080;
        if (this[0x1810] == (CCsmSynth)0x1) {
          *(int *)(this + 0x1890) = -iVar21;
        }
        iVar30 = iVar30 + 0x43a6a;
        if (CVar3 == (CCsmSynth)0x0) {
          iVar30 = local_a8[(byte)this[0x1808] & 0x1f];
        }
        *(int *)pCVar16 = iVar30;
        *(int *)(this + 0x1898) = iVar36 * (*(int *)(this + 0x1838) << (sbyte)this[0x1821]);
        iVar21 = *(int *)(iVar39 + ((byte)this[0x1819] & 0x7f) * 4);
        *(int *)(this + 0x18a0) = iVar21;
        iVar30 = DAT_00044084;
        if (this[0x1811] == (CCsmSynth)0x1) {
          *(int *)(this + 0x18a0) = -iVar21;
        }
        iVar30 = iVar30 + 0x43aca;
        if (CVar3 == (CCsmSynth)0x0) {
          iVar30 = local_a8[(byte)this[0x1809] & 0x1f];
        }
        *(int *)pCVar8 = iVar30;
        *(int *)(this + 0x18a8) = iVar36 * (*(int *)(this + 0x183c) << (sbyte)this[0x1822]);
        iVar21 = *(int *)(iVar39 + ((byte)this[0x181a] & 0x7f) * 4);
        *(int *)(this + 0x18b0) = iVar21;
        iVar30 = DAT_00044088;
        if (this[0x1812] == (CCsmSynth)0x1) {
          *(int *)(this + 0x18b0) = -iVar21;
        }
        iVar30 = iVar30 + 0x43b2a;
        if (CVar3 == (CCsmSynth)0x0) {
          iVar30 = local_a8[(byte)this[0x180a] & 0x1f];
        }
        *(int *)pCVar29 = iVar30;
        *(int *)(this + 0x18b8) = iVar36 * (*(int *)(this + 0x1840) << (sbyte)this[0x1823]);
        iVar30 = *(int *)(iVar39 + ((byte)this[0x181b] & 0x7f) * 4);
        *(int *)(this + 0x18c0) = iVar30;
        if (this[0x1813] == (CCsmSynth)0x1) {
          *(int *)(this + 0x18c0) = -iVar30;
        }
        iVar30 = DAT_0004408c + 0x43b8e;
        if (CVar3 == (CCsmSynth)0x0) {
          iVar30 = local_a8[(byte)this[0x180b] & 0x1f];
        }
        *(int *)pCVar42 = iVar30;
      }
      if (CVar2 == (CCsmSynth)0x0) {
        if (1 < *(uint *)(this + 0x18fc)) {
          *(undefined4 *)(this + 0x1900) = 0;
          *(undefined4 *)(this + 0x18fc) = 1;
          memset(local_a8,0,0x80);
          local_a8[2] = DAT_00044094;
          local_a8[1] = DAT_00044090;
          local_a8[0] = DAT_00044090 + 0x43bea;
          CVar3 = this[0x18ca];
          this[0x18da] = (CCsmSynth)0x0;
          local_a8[3] = local_a8[2] + 0x442f8;
          local_a8[1] = local_a8[1] + 0x443ea;
          local_98 = (int)&DAT_00044af8 + local_a8[2];
          local_a8[2] = local_a8[2] + 0x43af8;
          local_90 = DAT_00044098 + 0x44a24;
          local_94 = DAT_00044098 + 0x44224;
          local_88 = DAT_0004409c + 0x4492e;
          local_8c = DAT_0004409c + 0x4412e;
          local_80 = DAT_000440a0 + 0x4483a;
          local_84 = DAT_000440a0 + 0x4403a;
          local_78 = DAT_000440a4 + 0x44772;
          local_7c = DAT_000440a4 + 0x43f72;
          local_70 = DAT_000440a8 + 0x4467c;
          local_74 = DAT_000440a8 + 0x43e7c;
          local_64 = DAT_000440ac + 0x44588;
          local_68 = DAT_000440ac + 0x43d88;
          local_4c = this + 0x800;
          local_5c = DAT_000440b0 + 0x444c0;
          local_60 = DAT_000440b0 + 0x43cc0;
          local_58 = DAT_000440b4 + 0x43bcc;
          local_48 = DAT_000440b8 + 0x442d6;
          local_50 = DAT_000440b4 + 0x44bcc;
          local_54 = DAT_000440b4 + 0x443cc;
          local_44 = DAT_000440b8 + 0x44ad6;
          local_40 = DAT_000440bc + 0x44216;
          local_2c = this + 0x1000;
          local_3c = (code *)(DAT_000440bc + 0x44a16);
          local_38 = DAT_000440c0 + 0x44124;
          local_34 = DAT_000440c0 + 0x44924;
          local_30 = (int)&DAT_00044030 + DAT_000440c4;
          this[0x18e4] = CVar3;
          if (CVar3 == (CCsmSynth)0x0) {
            uVar15 = *(undefined4 *)(*(int *)(this + 0x1984) + 0xb0);
          }
          else {
            uVar15 = **(undefined4 **)(this + 0x1984);
          }
          uVar25 = *(uint *)(this + 0x18e0);
          uVar17 = *(uint *)(this + 0x18dc);
          *(undefined4 *)(this + 0x18e8) = uVar15;
          lVar5 = (ulonglong)(uVar25 << (uVar17 & 0xff)) * 48000;
          uVar6 = (ulonglong)
                  ((uint)lVar5 >> 0x14 |
                  ((uVar25 << (uVar17 - 0x20 & 0xff) | uVar25 >> (0x20 - uVar17 & 0xff)) * 48000 +
                  (int)((ulonglong)lVar5 >> 0x20)) * 0x1000) * (ulonglong)uVar40;
          uVar17 = (uint)((longlong)uVar6 >> 0x10);
          if (CVar13 == (CCsmSynth)0x0) {
            uVar6 = (uVar6 >> 0x10 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f0);
            uVar17 = (uint)((longlong)uVar6 >> 0x10);
            if (this[0x18c6] == (CCsmSynth)0x1) {
              lVar5 = (uVar6 >> 0x10 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f4);
              uVar17 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
            }
          }
          if (uVar17 == 0) {
            uVar17 = 1;
          }
          uVar26 = *(undefined4 *)(this + 0x1978);
          local_6c = this;
          uVar15 = __udivsi3(uVar26,uVar17);
          *(undefined4 *)(this + 0x1904) = uVar15;
          iVar39 = __udivsi3(0xbb80000,uVar26);
          iVar30 = DAT_0004406c;
          *(int *)(this + 0x1848) = iVar39 * (*(int *)(this + 0x1824) << (sbyte)this[0x181c]);
          iVar30 = *(int *)(pCVar28 + iVar30);
          iVar36 = *(int *)(iVar30 + ((byte)this[0x1814] & 0x7f) * 4);
          *(int *)(this + 0x1850) = iVar36;
          if (this[0x180c] == (CCsmSynth)0x1) {
            *(int *)(this + 0x1850) = -iVar36;
          }
          if (CVar3 == (CCsmSynth)0x0) {
            iVar36 = local_a8[(byte)*pCVar22 & 0x1f];
          }
          else {
            iVar36 = DAT_00046894 + 0x46732;
          }
          *(int *)pCVar41 = iVar36;
          *(int *)(this + 0x1858) = iVar39 * (*(int *)(this + 0x1828) << (sbyte)this[0x181d]);
          iVar36 = *(int *)(iVar30 + ((byte)this[0x1815] & 0x7f) * 4);
          *(int *)(this + 0x1860) = iVar36;
          if (this[0x180d] == (CCsmSynth)0x1) {
            *(int *)(this + 0x1860) = -iVar36;
          }
          if (CVar3 == (CCsmSynth)0x0) {
            iVar36 = local_a8[(byte)this[0x1805] & 0x1f];
          }
          else {
            iVar36 = DAT_00046890 + 0x46726;
          }
          *(int *)pCVar46 = iVar36;
          *(int *)(this + 0x1868) = iVar39 * (*(int *)(this + 0x182c) << (sbyte)this[0x181e]);
          iVar36 = *(int *)(iVar30 + ((byte)this[0x1816] & 0x7f) * 4);
          *(int *)(this + 0x1870) = iVar36;
          if (this[0x180e] == (CCsmSynth)0x1) {
            *(int *)(this + 0x1870) = -iVar36;
          }
          if (CVar3 == (CCsmSynth)0x0) {
            iVar36 = local_a8[(byte)this[0x1806] & 0x1f];
          }
          else {
            iVar36 = DAT_0004688c + 0x4671a;
          }
          *(int *)pCVar45 = iVar36;
          *(int *)(this + 0x1878) = iVar39 * (*(int *)(this + 0x1830) << (sbyte)this[0x181f]);
          iVar36 = *(int *)(iVar30 + ((byte)this[0x1817] & 0x7f) * 4);
          *(int *)(this + 0x1880) = iVar36;
          if (this[0x180f] == (CCsmSynth)0x1) {
            *(int *)(this + 0x1880) = -iVar36;
          }
          if (CVar3 == (CCsmSynth)0x0) {
            iVar36 = local_a8[(byte)this[0x1807] & 0x1f];
          }
          else {
            iVar36 = DAT_00046888 + 0x4670e;
          }
          *(int *)pCVar20 = iVar36;
          *(int *)(this + 0x1888) = iVar39 * (*(int *)(this + 0x1834) << (sbyte)this[0x1820]);
          iVar36 = *(int *)(iVar30 + ((byte)this[0x1818] & 0x7f) * 4);
          *(int *)(this + 0x1890) = iVar36;
          if (this[0x1810] == (CCsmSynth)0x1) {
            *(int *)(this + 0x1890) = -iVar36;
          }
          if (CVar3 == (CCsmSynth)0x0) {
            iVar36 = local_a8[(byte)this[0x1808] & 0x1f];
          }
          else {
            iVar36 = DAT_0004689c + 0x4674a;
          }
          *(int *)pCVar16 = iVar36;
          *(int *)(this + 0x1898) = iVar39 * (*(int *)(this + 0x1838) << (sbyte)this[0x1821]);
          iVar36 = *(int *)(iVar30 + ((byte)this[0x1819] & 0x7f) * 4);
          *(int *)(this + 0x18a0) = iVar36;
          if (this[0x1811] == (CCsmSynth)0x1) {
            *(int *)(this + 0x18a0) = -iVar36;
          }
          if (CVar3 == (CCsmSynth)0x0) {
            iVar36 = local_a8[(byte)this[0x1809] & 0x1f];
          }
          else {
            iVar36 = DAT_00046898 + 0x4673e;
          }
          *(int *)pCVar8 = iVar36;
          *(int *)(this + 0x18a8) = iVar39 * (*(int *)(this + 0x183c) << (sbyte)this[0x1822]);
          iVar36 = *(int *)(iVar30 + ((byte)this[0x181a] & 0x7f) * 4);
          *(int *)(this + 0x18b0) = iVar36;
          if (this[0x1812] == (CCsmSynth)0x1) {
            *(int *)(this + 0x18b0) = -iVar36;
          }
          if (CVar3 == (CCsmSynth)0x0) {
            iVar36 = local_a8[(byte)this[0x180a] & 0x1f];
          }
          else {
            iVar36 = DAT_00046884 + 0x4669c;
          }
          *(int *)pCVar29 = iVar36;
          iVar36 = DAT_000440c8 + 0x43ff8;
          *(int *)(this + 0x18b8) = iVar39 * (*(int *)(this + 0x1840) << (sbyte)this[0x1823]);
          iVar30 = *(int *)(iVar30 + ((byte)this[0x181b] & 0x7f) * 4);
          *(int *)(this + 0x18c0) = iVar30;
          if (this[0x1813] == (CCsmSynth)0x1) {
            *(int *)(this + 0x18c0) = -iVar30;
          }
joined_r0x0004609c:
          if (CVar3 == (CCsmSynth)0x0) {
            iVar36 = local_a8[(byte)this[0x180b] & 0x1f];
          }
          *(int *)pCVar42 = iVar36;
        }
      }
      else if (*(int *)(this + 0x18fc) == 0) {
        *(undefined4 *)(this + 0x18fc) = 3;
        memset(local_a8,0,0x80);
        local_a8[1] = DAT_00046840;
        local_a8[3] = DAT_0004683c;
        CVar3 = this[0x18ca];
        local_98 = DAT_0004683c + 0x46b82;
        local_a8[0] = DAT_00046840 + 0x45c84;
        this[0x18da] = CVar2;
        local_a8[1] = local_a8[1] + 0x46484;
        local_a8[2] = local_a8[3] + 0x45b82;
        local_a8[3] = local_a8[3] + 0x46382;
        local_90 = DAT_00046844 + 0x46ab4;
        local_94 = DAT_00046844 + 0x462b4;
        local_88 = DAT_00046848 + 0x469be;
        local_8c = DAT_00046848 + 0x461be;
        local_80 = DAT_0004684c + 0x468ca;
        local_84 = DAT_0004684c + 0x460ca;
        local_78 = DAT_00046850 + 0x46802;
        local_7c = DAT_00046850 + 0x46002;
        local_70 = DAT_00046854 + 0x4670c;
        local_74 = DAT_00046854 + 0x45f0c;
        local_64 = DAT_00046858 + 0x46618;
        local_68 = DAT_00046858 + 0x45e18;
        local_4c = this + 0x800;
        local_5c = DAT_0004685c + 0x46550;
        local_60 = DAT_0004685c + 0x45d50;
        local_58 = DAT_00046860 + 0x45c5c;
        local_48 = DAT_00046864 + 0x46366;
        local_50 = DAT_00046860 + 0x46c5c;
        local_54 = DAT_00046860 + 0x4645c;
        local_44 = DAT_00046864 + 0x46b66;
        local_40 = DAT_00046868 + 0x462a6;
        local_2c = this + 0x1000;
        local_3c = (code *)(DAT_00046868 + 0x46aa6);
        local_38 = DAT_0004686c + 0x461b4;
        local_34 = DAT_0004686c + 0x469b4;
        local_30 = DAT_00046870 + 0x460c0;
        this[0x18e4] = CVar3;
        if (CVar3 == (CCsmSynth)0x0) {
          uVar15 = *(undefined4 *)(*(int *)(this + 0x1984) + 0xb0);
        }
        else {
          uVar15 = **(undefined4 **)(this + 0x1984);
        }
        uVar25 = *(uint *)(this + 0x18e0);
        uVar17 = *(uint *)(this + 0x18dc);
        *(undefined4 *)(this + 0x18e8) = uVar15;
        lVar5 = (ulonglong)(uVar25 << (uVar17 & 0xff)) * 48000;
        uVar6 = (ulonglong)
                ((uint)lVar5 >> 0x14 |
                ((uVar25 << (uVar17 - 0x20 & 0xff) | uVar25 >> (0x20 - uVar17 & 0xff)) * 48000 +
                (int)((ulonglong)lVar5 >> 0x20)) * 0x1000) * (ulonglong)uVar40;
        uVar17 = (uint)((longlong)uVar6 >> 0x10);
        if (CVar13 == (CCsmSynth)0x0) {
          uVar6 = (uVar6 >> 0x10 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f0);
          uVar17 = (uint)((longlong)uVar6 >> 0x10);
          if (this[0x18c6] == (CCsmSynth)0x1) {
            lVar5 = (uVar6 >> 0x10 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f4);
            uVar17 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
          }
        }
        if (uVar17 == 0) {
          uVar17 = 1;
        }
        uVar26 = *(undefined4 *)(this + 0x1978);
        local_6c = this;
        uVar15 = __udivsi3(uVar26,uVar17);
        *(undefined4 *)(this + 0x1904) = uVar15;
        iVar36 = __udivsi3(0xbb80000,uVar26);
        iVar30 = DAT_00046874;
        *(int *)(this + 0x1848) = iVar36 * (*(int *)(this + 0x1824) << (sbyte)this[0x181c]);
        iVar30 = *(int *)(pCVar28 + iVar30);
        iVar39 = *(int *)(iVar30 + ((byte)this[0x1814] & 0x7f) * 4);
        *(int *)(this + 0x1850) = iVar39;
        if (this[0x180c] == (CCsmSynth)0x1) {
          *(int *)(this + 0x1850) = -iVar39;
        }
        if (CVar3 == (CCsmSynth)0x0) {
          iVar39 = local_a8[(byte)*pCVar22 & 0x1f];
        }
        else {
          iVar39 = DAT_000468b8 + 0x467ec;
        }
        *(int *)pCVar41 = iVar39;
        *(int *)(this + 0x1858) = iVar36 * (*(int *)(this + 0x1828) << (sbyte)this[0x181d]);
        iVar39 = *(int *)(iVar30 + ((byte)this[0x1815] & 0x7f) * 4);
        *(int *)(this + 0x1860) = iVar39;
        if (this[0x180d] == (CCsmSynth)0x1) {
          *(int *)(this + 0x1860) = -iVar39;
        }
        if (CVar3 == (CCsmSynth)0x0) {
          iVar39 = local_a8[(byte)this[0x1805] & 0x1f];
        }
        else {
          iVar39 = DAT_000468b4 + 0x467e0;
        }
        *(int *)pCVar46 = iVar39;
        *(int *)(this + 0x1868) = iVar36 * (*(int *)(this + 0x182c) << (sbyte)this[0x181e]);
        iVar39 = *(int *)(iVar30 + ((byte)this[0x1816] & 0x7f) * 4);
        *(int *)(this + 0x1870) = iVar39;
        if (this[0x180e] == (CCsmSynth)0x1) {
          *(int *)(this + 0x1870) = -iVar39;
        }
        if (CVar3 == (CCsmSynth)0x0) {
          iVar39 = local_a8[(byte)this[0x1806] & 0x1f];
        }
        else {
          iVar39 = DAT_000468b0 + 0x467d4;
        }
        *(int *)pCVar45 = iVar39;
        *(int *)(this + 0x1878) = iVar36 * (*(int *)(this + 0x1830) << (sbyte)this[0x181f]);
        iVar39 = *(int *)(iVar30 + ((byte)this[0x1817] & 0x7f) * 4);
        *(int *)(this + 0x1880) = iVar39;
        if (this[0x180f] == (CCsmSynth)0x1) {
          *(int *)(this + 0x1880) = -iVar39;
        }
        if (CVar3 == (CCsmSynth)0x0) {
          iVar39 = local_a8[(byte)this[0x1807] & 0x1f];
        }
        else {
          iVar39 = DAT_000468ac + 0x467c8;
        }
        *(int *)pCVar20 = iVar39;
        *(int *)(this + 0x1888) = iVar36 * (*(int *)(this + 0x1834) << (sbyte)this[0x1820]);
        iVar39 = *(int *)(iVar30 + ((byte)this[0x1818] & 0x7f) * 4);
        *(int *)(this + 0x1890) = iVar39;
        if (this[0x1810] == (CCsmSynth)0x1) {
          *(int *)(this + 0x1890) = -iVar39;
        }
        if (CVar3 == (CCsmSynth)0x0) {
          iVar39 = local_a8[(byte)this[0x1808] & 0x1f];
        }
        else {
          iVar39 = DAT_000468a8 + 0x467be;
        }
        *(int *)pCVar16 = iVar39;
        *(int *)(this + 0x1898) = iVar36 * (*(int *)(this + 0x1838) << (sbyte)this[0x1821]);
        iVar39 = *(int *)(iVar30 + ((byte)this[0x1819] & 0x7f) * 4);
        *(int *)(this + 0x18a0) = iVar39;
        if (this[0x1811] == (CCsmSynth)0x1) {
          *(int *)(this + 0x18a0) = -iVar39;
        }
        if (CVar3 == (CCsmSynth)0x0) {
          iVar39 = local_a8[(byte)this[0x1809] & 0x1f];
        }
        else {
          iVar39 = DAT_000468a4 + 0x467b4;
        }
        *(int *)pCVar8 = iVar39;
        *(int *)(this + 0x18a8) = iVar36 * (*(int *)(this + 0x183c) << (sbyte)this[0x1822]);
        iVar39 = *(int *)(iVar30 + ((byte)this[0x181a] & 0x7f) * 4);
        *(int *)(this + 0x18b0) = iVar39;
        if (this[0x1812] == (CCsmSynth)0x1) {
          *(int *)(this + 0x18b0) = -iVar39;
        }
        if (CVar3 == (CCsmSynth)0x0) {
          iVar39 = local_a8[(byte)this[0x180a] & 0x1f];
        }
        else {
          iVar39 = DAT_000468a0 + 0x467aa;
        }
        *(int *)pCVar29 = iVar39;
        *(int *)(this + 0x18b8) = iVar36 * (*(int *)(this + 0x1840) << (sbyte)this[0x1823]);
        iVar36 = DAT_00046878 + 0x46088;
        iVar30 = *(int *)(iVar30 + ((byte)this[0x181b] & 0x7f) * 4);
        *(int *)(this + 0x18c0) = iVar30;
        if (this[0x1813] == (CCsmSynth)0x1) {
          *(int *)(this + 0x18c0) = -iVar30;
        }
        goto joined_r0x0004609c;
      }
      iVar30 = CWnoise::Generate();
      iVar39 = *(int *)(this + 0x1914);
      iVar21 = *(int *)(this + 0x1918);
      *(int *)(this + 0x1914) = iVar30;
      iVar36 = *(int *)(this + 0x191c);
      iVar30 = iVar39 + iVar30 >> 1;
      *(int *)(this + 0x1918) = iVar30;
      iVar30 = iVar30 + iVar21 >> 1;
      *(int *)(this + 0x191c) = iVar30;
      local_1e8 = iVar30 + *(int *)(this + 0x1920) >> 2;
      *(int *)(this + 0x1920) = iVar36 + iVar30 >> 1;
      *(uint *)(this + 0x1924) = local_1e8;
      iVar36 = DAT_00044ac8;
      iVar30 = DAT_00044ac4;
      if (this[0x1928] == (CCsmSynth)0x0) {
        local_1e4 = (uint *)(DAT_00044abc + 0x44436);
        iVar47 = DAT_00044ac0 + 0x4414a;
        iVar43 = DAT_00044ac8 + 0x44766;
        iVar21 = DAT_00044ac0 + 0x4494a;
        iVar39 = (int)&DAT_0004405c + DAT_00044ac4;
        local_238 = (CCsmSynth *)0x0;
        pCVar24 = (CCsmSynth *)0x0;
        if (this[0x18d9] == (CCsmSynth)0x1) goto LAB_0004485c;
        do {
          switch(*(undefined4 *)(this + 0x18fc)) {
          case 1:
            uVar17 = *(int *)(this + 0x1900) + 1;
            *(uint *)(this + 0x1900) = uVar17;
            if (uVar17 < *(uint *)(this + 0x1980)) {
              CVar13 = this[0x18e4];
              lVar5 = (ulonglong)*(uint *)(this + 0x190c) *
                      (ulonglong)*(uint *)(*(int *)(this + 0x197c) + uVar17 * 4);
              local_230 = (CCsmSynth *)
                          ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
              *(CCsmSynth **)(this + 0x190c) = local_230;
              uVar17 = *(uint *)(this + 0x184c);
              uVar40 = *(uint *)(this + 0x185c);
              local_1f4 = *(uint *)(this + 0x186c);
              uVar38 = *(uint *)(this + 0x187c);
LAB_0004495e:
              local_1cc = uVar40 >> 0x16;
              uVar34 = uVar17 >> 0x16;
              local_1f0 = *(uint **)(this + 0x188c);
              local_1c8 = local_1f4 >> 0x16;
              local_1ec = *(uint *)(this + 0x18ac);
              uVar31 = *(uint *)(this + 0x189c);
              local_1c4 = uVar38 >> 0x16;
              local_1c0 = (uint)local_1f0 >> 0x16;
              local_224 = *(int *)(this + 0x1848);
              uVar48 = *(uint *)(this + 0x18bc);
              local_1bc = uVar31 >> 0x16;
              local_1b8 = local_1ec >> 0x16;
              local_1e0 = *(int *)(this + 0x1858);
              local_200 = *(uint *)(this + 0x1868);
              uVar25 = uVar48 >> 0x16;
            }
            else {
              CVar13 = this[0x18e4];
              *(undefined4 *)(this + 0x190c) = 0;
              if (CVar13 == (CCsmSynth)0x0) {
                if (this[0x18da] == (CCsmSynth)0x0) {
                  *(undefined4 *)(this + 0x18fc) = 0;
                  uVar40 = *(uint *)(this + 0x185c);
                  uVar17 = *(uint *)(this + 0x184c);
                  local_230 = (CCsmSynth *)0x0;
                  CVar13 = (CCsmSynth)0x0;
                }
                else {
                  local_230 = (CCsmSynth *)0x0;
                  *(undefined4 *)(this + 0x18fc) = 3;
                  uVar17 = *(uint *)(this + 0x184c);
                  uVar40 = *(uint *)(this + 0x185c);
                }
                goto LAB_00044950;
              }
              *(undefined4 *)(this + 0x18fc) = 0;
              uVar40 = *(uint *)(this + 0x185c);
              local_1f4 = *(uint *)(this + 0x186c);
              local_230 = (CCsmSynth *)0x0;
              local_1cc = uVar40 >> 0x16;
              local_1f0 = *(uint **)(this + 0x188c);
              local_1c8 = local_1f4 >> 0x16;
              local_1ec = *(uint *)(this + 0x18ac);
              uVar38 = *(uint *)(this + 0x187c);
              uVar48 = *(uint *)(this + 0x18bc);
              local_224 = *(int *)(this + 0x1848);
              local_1c4 = uVar38 >> 0x16;
              local_1c0 = (uint)local_1f0 >> 0x16;
              local_1e0 = *(int *)(this + 0x1858);
              uVar31 = *(uint *)(this + 0x189c);
              local_1bc = uVar31 >> 0x16;
              uVar17 = *(uint *)(this + 0x184c);
              local_1b8 = local_1ec >> 0x16;
              local_200 = *(uint *)(this + 0x1868);
              uVar25 = uVar48 >> 0x16;
              uVar34 = uVar17 >> 0x16;
            }
            break;
          case 2:
            *(undefined4 *)(this + 0x1900) = 0;
          case 3:
            iVar33 = DAT_00044acc;
            memset(local_a8,0,0x80);
            local_8c = iVar33 + 0x446ce;
            local_88 = iVar33 + 0x44ece;
            local_a8[3] = iVar30 + 0x4485c;
            local_7c = DAT_00044ad0 + 0x444fc;
            local_78 = DAT_00044ad0 + 0x44cfc;
            local_84 = DAT_00044ad4 + 0x445f8;
            local_80 = DAT_00044ad4 + 0x44df8;
            local_98 = iVar30 + 0x4505c;
            local_68 = DAT_00044ad8 + 0x4432c;
            local_64 = DAT_00044ad8 + 0x44b2c;
            local_74 = DAT_00044adc + 0x44436;
            local_70 = DAT_00044adc + 0x44c36;
            local_60 = DAT_00044ae4 + 0x4426c;
            local_5c = DAT_00044ae4 + 0x44a6c;
            local_44 = DAT_00044ae0 + 0x4507e;
            local_48 = DAT_00044ae0 + 0x4487e;
            local_58 = DAT_00044ae8 + 0x4417a;
            local_54 = DAT_00044ae8 + 0x4497a;
            local_50 = DAT_00044ae8 + 0x4517a;
            local_40 = DAT_00044af0 + 0x447c0;
            local_90 = iVar36 + 0x44f66;
            local_3c = (code *)(DAT_00044af0 + 0x44fc0);
            local_38 = DAT_00044aec + 0x446ca;
            local_34 = DAT_00044aec + 0x44eca;
            CVar13 = this[0x18ca];
            local_30 = DAT_00044af4 + 0x44600;
            local_4c = this + 0x800;
            local_2c = this + 0x1000;
            this[0x18da] = this[0x18c9];
            this[0x18e4] = CVar13;
            if (CVar13 == (CCsmSynth)0x0) {
              uVar15 = *(undefined4 *)(*(int *)(this + 0x1984) + 0xb0);
            }
            else {
              uVar15 = **(undefined4 **)(this + 0x1984);
            }
            uVar17 = *(uint *)(this + 0x18e0);
            uVar40 = *(uint *)(this + 0x18dc);
            *(undefined4 *)(this + 0x18e8) = uVar15;
            iVar33 = DAT_00044af8;
            lVar5 = (ulonglong)(uVar17 << (uVar40 & 0xff)) * 48000;
            uVar6 = (ulonglong)
                    ((uint)lVar5 >> 0x14 |
                    ((uVar17 << (uVar40 - 0x20 & 0xff) | uVar17 >> (0x20 - uVar40 & 0xff)) * 48000 +
                    (int)((ulonglong)lVar5 >> 0x20)) * 0x1000) * (ulonglong)*(uint *)(this + 0x18f8)
            ;
            uVar17 = (uint)((longlong)uVar6 >> 0x10);
            if (this[0x18c5] == (CCsmSynth)0x0) {
              uVar6 = (uVar6 >> 0x10 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f0);
              uVar17 = (uint)((longlong)uVar6 >> 0x10);
              if (this[0x18c6] == (CCsmSynth)0x1) {
                lVar5 = (uVar6 >> 0x10 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f4);
                uVar17 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
              }
            }
            if (uVar17 == 0) {
              uVar17 = 1;
            }
            uVar26 = *(undefined4 *)(this + 0x1978);
            local_a8[0] = iVar47;
            local_a8[1] = iVar21;
            local_a8[2] = iVar39;
            local_94 = iVar43;
            local_6c = this;
            uVar15 = __udivsi3(uVar26,uVar17);
            *(undefined4 *)(this + 0x1904) = uVar15;
            iVar49 = __udivsi3(0xbb80000,uVar26);
            local_224 = iVar49 * (*(int *)(this + 0x1824) << (sbyte)this[0x181c]);
            *(int *)(this + 0x1848) = local_224;
            iVar50 = *(int *)(pCVar28 + iVar33);
            iVar33 = *(int *)(iVar50 + ((byte)this[0x1814] & 0x7f) * 4);
            *(int *)(this + 0x1850) = iVar33;
            if (this[0x180c] == (CCsmSynth)0x1) {
              *(int *)(this + 0x1850) = -iVar33;
            }
            iVar33 = DAT_00044afc + 0x443f2;
            if (CVar13 == (CCsmSynth)0x0) {
              iVar33 = local_a8[(byte)*pCVar22 & 0x1f];
            }
            *(int *)pCVar41 = iVar33;
            local_1e0 = iVar49 * (*(int *)(this + 0x1828) << (sbyte)this[0x181d]);
            *(int *)(this + 0x1858) = local_1e0;
            iVar51 = *(int *)(iVar50 + ((byte)this[0x1815] & 0x7f) * 4);
            *(int *)(this + 0x1860) = iVar51;
            iVar33 = DAT_00044b00;
            if (this[0x180d] == (CCsmSynth)0x1) {
              *(int *)(this + 0x1860) = -iVar51;
            }
            iVar33 = iVar33 + 0x4443a;
            if (CVar13 == (CCsmSynth)0x0) {
              iVar33 = local_a8[(byte)this[0x1805] & 0x1f];
            }
            *(int *)pCVar46 = iVar33;
            local_200 = iVar49 * (*(int *)(this + 0x182c) << (sbyte)this[0x181e]);
            *(uint *)(this + 0x1868) = local_200;
            iVar33 = *(int *)(iVar50 + ((byte)this[0x1816] & 0x7f) * 4);
            *(int *)(this + 0x1870) = iVar33;
            if (this[0x180e] == (CCsmSynth)0x1) {
              *(int *)(this + 0x1870) = -iVar33;
            }
            iVar33 = DAT_00044b04 + 0x4447e;
            if (CVar13 == (CCsmSynth)0x0) {
              iVar33 = local_a8[(byte)this[0x1806] & 0x1f];
            }
            *(int *)pCVar45 = iVar33;
            local_1fc = iVar49 * (*(int *)(this + 0x1830) << (sbyte)this[0x181f]);
            *(uint *)(this + 0x1878) = local_1fc;
            iVar33 = *(int *)(iVar50 + ((byte)this[0x1817] & 0x7f) * 4);
            *(int *)(this + 0x1880) = iVar33;
            if (this[0x180f] == (CCsmSynth)0x1) {
              *(int *)(this + 0x1880) = -iVar33;
            }
            iVar33 = DAT_00044b08 + 0x444c4;
            if (CVar13 == (CCsmSynth)0x0) {
              iVar33 = local_a8[(byte)this[0x1807] & 0x1f];
            }
            *(int *)pCVar20 = iVar33;
            local_1dc = iVar49 * (*(int *)(this + 0x1834) << (sbyte)this[0x1820]);
            *(int *)(this + 0x1888) = local_1dc;
            iVar33 = *(int *)(iVar50 + ((byte)this[0x1818] & 0x7f) * 4);
            *(int *)(this + 0x1890) = iVar33;
            if (this[0x1810] == (CCsmSynth)0x1) {
              *(int *)(this + 0x1890) = -iVar33;
            }
            iVar33 = DAT_00044b0c + 0x44508;
            if (CVar13 == (CCsmSynth)0x0) {
              iVar33 = local_a8[(byte)this[0x1808] & 0x1f];
            }
            *(int *)pCVar16 = iVar33;
            local_1d8 = iVar49 * (*(int *)(this + 0x1838) << (sbyte)this[0x1821]);
            *(int *)(this + 0x1898) = local_1d8;
            iVar33 = *(int *)(iVar50 + ((byte)this[0x1819] & 0x7f) * 4);
            *(int *)(this + 0x18a0) = iVar33;
            if (this[0x1811] == (CCsmSynth)0x1) {
              *(int *)(this + 0x18a0) = -iVar33;
            }
            iVar33 = DAT_00044b10 + 0x44552;
            if (CVar13 == (CCsmSynth)0x0) {
              iVar33 = local_a8[(byte)this[0x1809] & 0x1f];
            }
            *(int *)pCVar8 = iVar33;
            local_1f8 = iVar49 * (*(int *)(this + 0x183c) << (sbyte)this[0x1822]);
            *(uint *)(this + 0x18a8) = local_1f8;
            iVar33 = *(int *)(iVar50 + ((byte)this[0x181a] & 0x7f) * 4);
            *(int *)(this + 0x18b0) = iVar33;
            if (this[0x1812] == (CCsmSynth)0x1) {
              *(int *)(this + 0x18b0) = -iVar33;
            }
            iVar33 = DAT_00044b14 + 0x445ac;
            if (CVar13 == (CCsmSynth)0x0) {
              iVar33 = local_a8[(byte)this[0x180a] & 0x1f];
            }
            *(int *)pCVar29 = iVar33;
            local_1d0 = iVar49 * (*(int *)(this + 0x1840) << (sbyte)this[0x1823]);
            *(uint *)(this + 0x18b8) = local_1d0;
            local_1b4 = *(int *)(iVar50 + ((byte)this[0x181b] & 0x7f) * 4);
            *(int *)(this + 0x18c0) = local_1b4;
            iVar33 = DAT_00044b18;
            if (this[0x1813] == (CCsmSynth)0x1) {
              local_1b4 = -local_1b4;
              *(int *)(this + 0x18c0) = local_1b4;
            }
            iVar33 = iVar33 + 0x44604;
            if (CVar13 == (CCsmSynth)0x0) {
              iVar33 = local_a8[(byte)this[0x180b] & 0x1f];
            }
            uVar48 = 0;
            *(int *)pCVar42 = iVar33;
            uVar38 = 0;
            uVar25 = 0;
            uVar31 = 0;
            *(undefined4 *)(this + 0x184c) = 0;
            uVar40 = 0;
            *(undefined4 *)(this + 0x185c) = 0;
            uVar34 = 0;
            local_1b8 = 0;
            uVar17 = 0;
            *(undefined4 *)(this + 0x186c) = 0;
            local_1ec = 0;
            *(undefined4 *)(this + 0x187c) = 0;
            local_1bc = 0;
            *(undefined4 *)(this + 0x188c) = 0;
            *(undefined4 *)(this + 0x189c) = 0;
            local_1c0 = 0;
            *(undefined4 *)(this + 0x18ac) = 0;
            local_1f0 = (uint *)0x0;
            *(undefined4 *)(this + 0x18bc) = 0;
            local_1c4 = 0;
            local_1c8 = 0;
            local_1f4 = 0;
            local_1cc = 0;
            *(undefined4 *)(this + 0x18fc) = 5;
            *(undefined4 *)(this + 0x190c) = 0x8000;
            local_230 = (CCsmSynth *)0x8000;
            goto LAB_0004467e;
          default:
            uVar40 = *(uint *)(this + 0x185c);
            local_1f4 = *(uint *)(this + 0x186c);
            local_1f0 = *(uint **)(this + 0x188c);
            local_1cc = uVar40 >> 0x16;
            local_1ec = *(uint *)(this + 0x18ac);
            local_1c8 = local_1f4 >> 0x16;
            local_1c0 = (uint)local_1f0 >> 0x16;
            uVar38 = *(uint *)(this + 0x187c);
            uVar31 = *(uint *)(this + 0x189c);
            local_230 = *(CCsmSynth **)(this + 0x190c);
            local_1c4 = uVar38 >> 0x16;
            uVar48 = *(uint *)(this + 0x18bc);
            uVar17 = *(uint *)(this + 0x184c);
            local_1bc = uVar31 >> 0x16;
            local_1b8 = local_1ec >> 0x16;
            local_224 = *(int *)(this + 0x1848);
            uVar34 = uVar17 >> 0x16;
            local_1e0 = *(int *)(this + 0x1858);
            uVar25 = uVar48 >> 0x16;
            CVar13 = this[0x18e4];
            local_200 = *(uint *)(this + 0x1868);
            local_1fc = *(uint *)(this + 0x1878);
            local_1dc = *(int *)(this + 0x1888);
            local_1d8 = *(int *)(this + 0x1898);
            local_1f8 = *(uint *)(this + 0x18a8);
            local_1d0 = *(uint *)(this + 0x18b8);
            local_1b4 = *(int *)(this + 0x18c0);
            goto LAB_0004467e;
          case 5:
            CVar13 = this[0x18e4];
            if (CVar13 == (CCsmSynth)0x0) {
              iVar33 = *(int *)(this + 0x1900);
              *(uint *)(this + 0x1900) = iVar33 + 1U;
              local_230 = (CCsmSynth *)
                          ((uint)((ulonglong)*(uint *)(this + 0x190c) *
                                 (ulonglong)*(uint *)(this + 0x18e8)) >> 0x1e |
                          (int)((ulonglong)*(uint *)(this + 0x190c) *
                                (ulonglong)*(uint *)(this + 0x18e8) >> 0x20) << 2);
              *(CCsmSynth **)(this + 0x190c) = local_230;
              if (iVar33 + 1U < *(uint *)(this + 0x1904)) {
                uVar17 = *(uint *)(this + 0x184c);
                uVar40 = *(uint *)(this + 0x185c);
              }
              else {
                *(undefined4 *)(this + 0x1900) = 0;
                *(undefined4 *)(this + 0x18fc) = 1;
                uVar17 = *(uint *)(this + 0x184c);
                uVar40 = *(uint *)(this + 0x185c);
              }
LAB_00044950:
              local_1f4 = *(uint *)(this + 0x186c);
              uVar38 = *(uint *)(this + 0x187c);
              goto LAB_0004495e;
            }
            local_1f4 = *(uint *)(this + 0x186c);
            uVar40 = *(uint *)(this + 0x185c);
            local_1f0 = *(uint **)(this + 0x188c);
            uVar38 = *(uint *)(this + 0x187c);
            local_1cc = uVar40 >> 0x16;
            local_1c8 = local_1f4 >> 0x16;
            local_1c4 = uVar38 >> 0x16;
            local_1ec = *(uint *)(this + 0x18ac);
            uVar31 = *(uint *)(this + 0x189c);
            local_1c0 = (uint)local_1f0 >> 0x16;
            uVar48 = *(uint *)(this + 0x18bc);
            local_1bc = uVar31 >> 0x16;
            local_1b8 = local_1ec >> 0x16;
            local_230 = *(CCsmSynth **)(this + 0x190c);
            uVar17 = *(uint *)(this + 0x184c);
            local_1e0 = *(int *)(this + 0x1858);
            uVar34 = uVar17 >> 0x16;
            local_224 = *(int *)(this + 0x1848);
            local_200 = *(uint *)(this + 0x1868);
            uVar25 = uVar48 >> 0x16;
          }
          local_1fc = *(uint *)(this + 0x1878);
          local_1dc = *(int *)(this + 0x1888);
          local_1d8 = *(int *)(this + 0x1898);
          local_1f8 = *(uint *)(this + 0x18a8);
          local_1d0 = *(uint *)(this + 0x18b8);
          local_1b4 = *(int *)(this + 0x18c0);
LAB_0004467e:
          while( true ) {
            iVar33 = 0;
            if (*(int *)(this + 0x1850) != 0) {
              iVar33 = (int)*(short *)(*(int *)pCVar41 + uVar34 * 2);
              if (CVar13 == (CCsmSynth)0x1) {
                iVar33 = iVar33 + local_1e8;
              }
              iVar49 = SignedSaturate(iVar33,0xf);
              SignedDoesSaturate(iVar33,0xf);
              iVar33 = iVar49 * *(int *)(this + 0x1850) >> 0xf;
            }
            *(uint *)(this + 0x184c) = uVar17 + local_224;
            iVar49 = 0;
            if (*(int *)(this + 0x1860) != 0) {
              iVar49 = (int)*(short *)(*(int *)pCVar46 + local_1cc * 2);
              if (CVar13 == (CCsmSynth)0x1) {
                iVar49 = iVar49 + local_1e8;
              }
              iVar50 = SignedSaturate(iVar49,0xf);
              SignedDoesSaturate(iVar49,0xf);
              iVar49 = iVar50 * *(int *)(this + 0x1860) >> 0xf;
            }
            *(uint *)(this + 0x185c) = local_1e0 + uVar40;
            iVar50 = 0;
            if (*(int *)(this + 0x1870) != 0) {
              iVar50 = (int)*(short *)(*(int *)pCVar45 + local_1c8 * 2);
              if (CVar13 == (CCsmSynth)0x1) {
                iVar50 = iVar50 + local_1e8;
              }
              iVar51 = SignedSaturate(iVar50,0xf);
              SignedDoesSaturate(iVar50,0xf);
              iVar50 = iVar51 * *(int *)(this + 0x1870) >> 0xf;
            }
            *(uint *)(this + 0x186c) = local_200 + local_1f4;
            iVar51 = 0;
            if (*(int *)(this + 0x1880) != 0) {
              iVar51 = (int)*(short *)(*(int *)pCVar20 + local_1c4 * 2);
              if (CVar13 == (CCsmSynth)0x1) {
                iVar51 = iVar51 + local_1e8;
              }
              iVar52 = SignedSaturate(iVar51,0xf);
              SignedDoesSaturate(iVar51,0xf);
              iVar51 = iVar52 * *(int *)(this + 0x1880) >> 0xf;
            }
            *(uint *)(this + 0x187c) = local_1fc + uVar38;
            iVar52 = 0;
            if (*(int *)(this + 0x1890) != 0) {
              iVar52 = (int)*(short *)(*(int *)pCVar16 + local_1c0 * 2);
              if (CVar13 == (CCsmSynth)0x1) {
                iVar52 = iVar52 + local_1e8;
              }
              iVar53 = SignedSaturate(iVar52,0xf);
              SignedDoesSaturate(iVar52,0xf);
              iVar52 = iVar53 * *(int *)(this + 0x1890) >> 0xf;
            }
            *(int *)(this + 0x188c) = local_1dc + (int)local_1f0;
            iVar53 = 0;
            if (*(int *)(this + 0x18a0) != 0) {
              if (CVar13 == (CCsmSynth)0x1) {
                local_1f0 = (uint *)local_1e8;
              }
              iVar53 = (int)*(short *)(*(int *)pCVar8 + local_1bc * 2);
              if (CVar13 == (CCsmSynth)0x1) {
                iVar53 = iVar53 + (int)local_1f0;
              }
              iVar37 = SignedSaturate(iVar53,0xf);
              SignedDoesSaturate(iVar53,0xf);
              iVar53 = iVar37 * *(int *)(this + 0x18a0) >> 0xf;
            }
            *(uint *)(this + 0x189c) = uVar31 + local_1d8;
            iVar37 = 0;
            if (*(int *)(this + 0x18b0) != 0) {
              iVar37 = (int)*(short *)(*(int *)pCVar29 + local_1b8 * 2);
              if (CVar13 == (CCsmSynth)0x1) {
                iVar37 = iVar37 + local_1e8;
              }
              iVar18 = SignedSaturate(iVar37,0xf);
              SignedDoesSaturate(iVar37,0xf);
              iVar37 = iVar18 * *(int *)(this + 0x18b0) >> 0xf;
            }
            *(uint *)(this + 0x18ac) = local_1f8 + local_1ec;
            iVar18 = 0;
            if (local_1b4 != 0) {
              iVar18 = (int)*(short *)(*(int *)pCVar42 + uVar25 * 2);
              if (CVar13 == (CCsmSynth)0x1) {
                iVar18 = iVar18 + local_1e8;
              }
              iVar4 = SignedSaturate(iVar18,0xf);
              SignedDoesSaturate(iVar18,0xf);
              iVar18 = local_1b4 * iVar4 >> 0xf;
            }
            uVar17 = iVar33 + iVar49 + iVar50 + iVar51 + iVar52 + iVar53 + iVar37 + iVar18;
            *(uint *)(this + 0x18bc) = local_1d0 + uVar48;
            local_238 = local_238 + 1;
            lVar5 = (ulonglong)uVar17 * ZEXT48(local_230);
            uVar17 = (uint)lVar5 >> 0xf |
                     ((int)((ulonglong)lVar5 >> 0x20) + (int)local_230 * ((int)uVar17 >> 0x1f)) *
                     0x20000;
            lVar5 = (ulonglong)uVar17 * (ulonglong)*(uint *)(this + 0x18cc);
            local_1e4 = local_1e4 + 1;
            *local_1e4 = (uint)lVar5 >> 0xf |
                         (*(uint *)(this + 0x18cc) * ((int)uVar17 >> 0x1f) +
                         (int)((ulonglong)lVar5 >> 0x20)) * 0x20000;
            pCVar24 = pCVar41;
            if (local_228 <= local_238) goto LAB_000451fa;
            local_1e8 = *(uint *)(this + 0x1924);
            pCVar24 = local_238;
            if (this[0x18d9] != (CCsmSynth)0x1) break;
LAB_0004485c:
            local_238 = pCVar24;
            local_230 = (CCsmSynth *)0x0;
            *(undefined4 *)(this + 0x190c) = 0;
            *(undefined4 *)(this + 0x18fc) = 0;
            this[0x18d9] = (CCsmSynth)0x0;
            local_1f4 = *(uint *)(this + 0x186c);
            local_1f0 = *(uint **)(this + 0x188c);
            uVar40 = *(uint *)(this + 0x185c);
            local_1cc = uVar40 >> 0x16;
            local_1c8 = local_1f4 >> 0x16;
            local_1ec = *(uint *)(this + 0x18ac);
            uVar38 = *(uint *)(this + 0x187c);
            uVar31 = *(uint *)(this + 0x189c);
            local_1c4 = uVar38 >> 0x16;
            local_1c0 = (uint)local_1f0 >> 0x16;
            local_1bc = uVar31 >> 0x16;
            uVar48 = *(uint *)(this + 0x18bc);
            local_224 = *(int *)(this + 0x1848);
            local_1e0 = *(int *)(this + 0x1858);
            uVar17 = *(uint *)(this + 0x184c);
            local_1b8 = local_1ec >> 0x16;
            uVar25 = uVar48 >> 0x16;
            uVar34 = uVar17 >> 0x16;
            local_200 = *(uint *)(this + 0x1868);
            local_1fc = *(uint *)(this + 0x1878);
            local_1dc = *(int *)(this + 0x1888);
            local_1d8 = *(int *)(this + 0x1898);
            local_1f8 = *(uint *)(this + 0x18a8);
            local_1d0 = *(uint *)(this + 0x18b8);
            local_1b4 = *(int *)(this + 0x18c0);
            CVar13 = this[0x18e4];
          }
        } while( true );
      }
      uVar17 = 0xfffffffe;
      uVar40 = (uint)(byte)this[0x18c7];
      if (0x3f < uVar40 - 0x40 && uVar40 < 0x8d) {
        if (uVar40 < 0x40) {
          uVar17 = *(uint *)(*(int *)(pCVar28 + DAT_00045c3c) + uVar40 * 0x20 + 0x14);
        }
        else {
          uVar17 = 0x20;
        }
      }
      CLpf::SetResonance(*(CLpf **)(this + 0x1950),uVar17);
      iVar30 = DAT_00045c40;
      uVar17 = 0xfffffffe;
      uVar40 = (uint)(byte)this[0x18c7];
      if (0x3f < uVar40 - 0x40 && uVar40 < 0x8d) {
        if (uVar40 < 0x40) {
          uVar17 = *(uint *)(*(int *)(pCVar28 + DAT_00045c3c) + uVar40 * 0x20 + 0x18);
        }
        else {
          uVar17 = 0x40;
        }
      }
      CLpf::SetBrightness(*(CLpf **)(this + 0x1950),uVar17);
      iVar36 = DAT_00045c4c;
      iVar39 = DAT_00045c44 + 0x45952;
      local_1f0 = (uint *)(DAT_00045c48 + 0x45c56);
      iVar21 = DAT_00045c4c + 0x45f7a;
      local_238 = (CCsmSynth *)0x0;
      iVar43 = DAT_00045c44 + 0x46152;
      do {
        if (this[0x18d9] == (CCsmSynth)0x1) {
          *(undefined4 *)(this + 0x190c) = 0;
          *(undefined4 *)(this + 0x18fc) = 0;
          this[0x18d9] = (CCsmSynth)0x0;
          local_200 = *(uint *)(this + 0x186c);
          local_1fc = *(uint *)(this + 0x188c);
          local_230 = (CCsmSynth *)0x0;
          local_1cc = local_200 >> 0x16;
          uVar25 = *(uint *)(this + 0x184c);
          local_1f4 = *(uint *)(this + 0x18ac);
          local_1f8 = uVar25 >> 0x16;
          uVar34 = *(uint *)(this + 0x185c);
          uVar31 = *(uint *)(this + 0x187c);
          uVar48 = *(uint *)(this + 0x189c);
          local_1d0 = uVar34 >> 0x16;
          local_1c8 = uVar31 >> 0x16;
          local_1c0 = uVar48 >> 0x16;
          local_13c = *(int *)(this + 0x1848);
          local_1c4 = local_1fc >> 0x16;
          local_1ec = *(uint *)(this + 0x1858);
          uVar38 = *(uint *)(this + 0x18bc);
          local_1bc = local_1f4 >> 0x16;
          uVar40 = uVar38 >> 0x16;
          local_224 = *(int *)(this + 0x1868);
          local_1e8 = *(uint *)(this + 0x1878);
          local_1e4 = *(uint **)(this + 0x1888);
          local_1e0 = *(int *)(this + 0x1898);
          local_1d8 = *(int *)(this + 0x18b8);
          local_1dc = *(int *)(this + 0x18a8);
          iVar47 = *(int *)(this + 0x18c0);
          uVar17 = (uint)(byte)this[0x18e4];
        }
        else {
          switch(*(undefined4 *)(this + 0x18fc)) {
          case 1:
            uVar40 = *(int *)(this + 0x1900) + 1;
            *(uint *)(this + 0x1900) = uVar40;
            if (uVar40 < *(uint *)(this + 0x1980)) {
              uVar17 = (uint)(byte)this[0x18e4];
              lVar5 = (ulonglong)*(uint *)(this + 0x190c) *
                      (ulonglong)*(uint *)(*(int *)(this + 0x197c) + uVar40 * 4);
              local_230 = (CCsmSynth *)
                          ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
              *(CCsmSynth **)(this + 0x190c) = local_230;
              uVar25 = *(uint *)(this + 0x184c);
              uVar34 = *(uint *)(this + 0x185c);
LAB_00045a02:
              local_1fc = *(uint *)(this + 0x188c);
              local_200 = *(uint *)(this + 0x186c);
              local_1f4 = *(uint *)(this + 0x18ac);
              uVar31 = *(uint *)(this + 0x187c);
              uVar48 = *(uint *)(this + 0x189c);
              uVar38 = *(uint *)(this + 0x18bc);
              local_13c = *(int *)(this + 0x1848);
              local_224 = *(int *)(this + 0x1868);
              local_1ec = *(uint *)(this + 0x1858);
            }
            else {
              uVar17 = (uint)(byte)this[0x18e4];
              *(undefined4 *)(this + 0x190c) = 0;
              if (uVar17 == 0) {
                if (this[0x18da] == (CCsmSynth)0x0) {
                  *(undefined4 *)(this + 0x18fc) = 0;
                  uVar34 = *(uint *)(this + 0x185c);
                  uVar25 = *(uint *)(this + 0x184c);
                  local_230 = (CCsmSynth *)0x0;
                  uVar17 = 0;
                }
                else {
                  local_230 = (CCsmSynth *)0x0;
                  *(undefined4 *)(this + 0x18fc) = 3;
                  uVar25 = *(uint *)(this + 0x184c);
                  uVar34 = *(uint *)(this + 0x185c);
                }
                goto LAB_00045a02;
              }
              *(undefined4 *)(this + 0x18fc) = 0;
              local_1fc = *(uint *)(this + 0x188c);
              local_230 = (CCsmSynth *)0x0;
              local_1f4 = *(uint *)(this + 0x18ac);
              local_200 = *(uint *)(this + 0x186c);
              uVar25 = *(uint *)(this + 0x184c);
              local_13c = *(int *)(this + 0x1848);
              uVar34 = *(uint *)(this + 0x185c);
              uVar31 = *(uint *)(this + 0x187c);
              uVar48 = *(uint *)(this + 0x189c);
              uVar38 = *(uint *)(this + 0x18bc);
              local_1ec = *(uint *)(this + 0x1858);
              local_224 = *(int *)(this + 0x1868);
            }
            local_1bc = local_1f4 >> 0x16;
            local_1c0 = uVar48 >> 0x16;
            local_1c4 = local_1fc >> 0x16;
            local_1c8 = uVar31 >> 0x16;
            local_1cc = local_200 >> 0x16;
            local_1d0 = uVar34 >> 0x16;
            local_1f8 = uVar25 >> 0x16;
            uVar40 = uVar38 >> 0x16;
            local_1e8 = *(uint *)(this + 0x1878);
            local_1e4 = *(uint **)(this + 0x1888);
            local_1e0 = *(int *)(this + 0x1898);
            local_1dc = *(int *)(this + 0x18a8);
            local_1d8 = *(int *)(this + 0x18b8);
            iVar47 = *(int *)(this + 0x18c0);
            break;
          case 2:
            *(undefined4 *)(this + 0x1900) = 0;
          case 3:
            memset(local_a8,0,0x80);
            local_8c = DAT_00045380 + 0x45050;
            local_88 = DAT_00045380 + 0x45850;
            local_a8[3] = iVar30 + 0x46054;
            local_98 = (int)&DAT_00046854 + iVar30;
            local_78 = DAT_00045384 + 0x45680;
            local_7c = DAT_00045384 + 0x44e80;
            local_84 = DAT_00045388 + 0x44f80;
            local_80 = DAT_00045388 + 0x45780;
            local_74 = DAT_0004538c + 0x44d92;
            local_70 = DAT_0004538c + 0x45592;
            local_68 = DAT_00045390 + 0x44cc6;
            local_64 = DAT_00045390 + 0x454c6;
            local_60 = DAT_00045394 + 0x44bd2;
            local_5c = DAT_00045394 + 0x453d2;
            local_58 = DAT_00045398 + 0x44afe;
            local_54 = DAT_00045398 + 0x452fe;
            local_50 = DAT_00045398 + 0x45afe;
            local_90 = iVar36 + 0x4677a;
            local_48 = DAT_0004539c + 0x4522e;
            local_40 = DAT_000453a0 + 0x4513c;
            local_44 = DAT_0004539c + 0x45a2e;
            local_3c = (code *)(DAT_000453a0 + 0x4593c);
            local_38 = DAT_000453a4 + 0x4504a;
            local_34 = DAT_000453a4 + 0x4584a;
            uVar17 = (uint)(byte)this[0x18ca];
            local_30 = DAT_000453a8 + 0x44f86;
            local_4c = this + 0x800;
            local_2c = this + 0x1000;
            this[0x18da] = this[0x18c9];
            this[0x18e4] = this[0x18ca];
            if (uVar17 == 0) {
              uVar15 = *(undefined4 *)(*(int *)(this + 0x1984) + 0xb0);
            }
            else {
              uVar15 = **(undefined4 **)(this + 0x1984);
            }
            uVar40 = *(uint *)(this + 0x18e0);
            uVar25 = *(uint *)(this + 0x18dc);
            *(undefined4 *)(this + 0x18e8) = uVar15;
            iVar47 = DAT_000453ac;
            lVar5 = (ulonglong)(uVar40 << (uVar25 & 0xff)) * 48000;
            uVar6 = (ulonglong)
                    ((uint)lVar5 >> 0x14 |
                    ((uVar40 << (uVar25 - 0x20 & 0xff) | uVar40 >> (0x20 - uVar25 & 0xff)) * 48000 +
                    (int)((ulonglong)lVar5 >> 0x20)) * 0x1000) * (ulonglong)*(uint *)(this + 0x18f8)
            ;
            uVar40 = (uint)((longlong)uVar6 >> 0x10);
            if (this[0x18c5] == (CCsmSynth)0x0) {
              uVar6 = (uVar6 >> 0x10 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f0);
              uVar40 = (uint)((longlong)uVar6 >> 0x10);
              if (this[0x18c6] == (CCsmSynth)0x1) {
                lVar5 = (uVar6 >> 0x10 & 0xffffffff) * (ulonglong)*(uint *)(this + 0x18f4);
                uVar40 = (uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10;
              }
            }
            if (uVar40 == 0) {
              uVar40 = 1;
            }
            uVar26 = *(undefined4 *)(this + 0x1978);
            local_a8[0] = iVar39;
            local_a8[1] = iVar43;
            local_a8[2] = iVar30 + 0x45854;
            local_94 = iVar21;
            local_6c = this;
            uVar15 = __udivsi3(uVar26,uVar40);
            *(undefined4 *)(this + 0x1904) = uVar15;
            local_1d8 = __udivsi3(0xbb80000,uVar26);
            local_13c = local_1d8 * (*(int *)(this + 0x1824) << (sbyte)this[0x181c]);
            *(int *)(this + 0x1848) = local_13c;
            iVar33 = *(int *)(pCVar28 + iVar47);
            iVar47 = *(int *)(iVar33 + ((byte)this[0x1814] & 0x7f) * 4);
            *(int *)(this + 0x1850) = iVar47;
            if (this[0x180c] == (CCsmSynth)0x1) {
              *(int *)(this + 0x1850) = -iVar47;
            }
            iVar47 = DAT_000453b0 + 0x44d6c;
            if (uVar17 == 0) {
              iVar47 = local_a8[(byte)*pCVar22 & 0x1f];
            }
            *(int *)pCVar41 = iVar47;
            local_1ec = local_1d8 * (*(int *)(this + 0x1828) << (sbyte)this[0x181d]);
            *(uint *)(this + 0x1858) = local_1ec;
            iVar47 = *(int *)(iVar33 + ((byte)this[0x1815] & 0x7f) * 4);
            *(int *)(this + 0x1860) = iVar47;
            if (this[0x180d] == (CCsmSynth)0x1) {
              *(int *)(this + 0x1860) = -iVar47;
            }
            iVar47 = DAT_000453b4 + 0x44db8;
            if (uVar17 == 0) {
              iVar47 = local_a8[(byte)this[0x1805] & 0x1f];
            }
            *(int *)pCVar46 = iVar47;
            local_224 = local_1d8 * (*(int *)(this + 0x182c) << (sbyte)this[0x181e]);
            *(int *)(this + 0x1868) = local_224;
            iVar47 = *(int *)(iVar33 + ((byte)this[0x1816] & 0x7f) * 4);
            *(int *)(this + 0x1870) = iVar47;
            if (this[0x180e] == (CCsmSynth)0x1) {
              *(int *)(this + 0x1870) = -iVar47;
            }
            iVar47 = DAT_000453b8 + 0x44dfe;
            if (uVar17 == 0) {
              iVar47 = local_a8[(byte)this[0x1806] & 0x1f];
            }
            *(int *)pCVar45 = iVar47;
            local_1e8 = local_1d8 * (*(int *)(this + 0x1830) << (sbyte)this[0x181f]);
            *(uint *)(this + 0x1878) = local_1e8;
            iVar49 = *(int *)(iVar33 + ((byte)this[0x1817] & 0x7f) * 4);
            *(int *)(this + 0x1880) = iVar49;
            iVar47 = DAT_000453bc;
            if (this[0x180f] == (CCsmSynth)0x1) {
              *(int *)(this + 0x1880) = -iVar49;
            }
            iVar47 = iVar47 + 0x44e48;
            if (uVar17 == 0) {
              iVar47 = local_a8[(byte)this[0x1807] & 0x1f];
            }
            *(int *)pCVar20 = iVar47;
            local_1e4 = (uint *)(local_1d8 * (*(int *)(this + 0x1834) << (sbyte)this[0x1820]));
            *(uint **)(this + 0x1888) = local_1e4;
            iVar47 = *(int *)(iVar33 + ((byte)this[0x1818] & 0x7f) * 4);
            *(int *)(this + 0x1890) = iVar47;
            if (this[0x1810] == (CCsmSynth)0x1) {
              *(int *)(this + 0x1890) = -iVar47;
            }
            iVar47 = DAT_000453c0 + 0x44e96;
            if (uVar17 == 0) {
              iVar47 = local_a8[(byte)this[0x1808] & 0x1f];
            }
            *(int *)pCVar16 = iVar47;
            local_1e0 = local_1d8 * (*(int *)(this + 0x1838) << (sbyte)this[0x1821]);
            *(int *)(this + 0x1898) = local_1e0;
            iVar47 = *(int *)(iVar33 + ((byte)this[0x1819] & 0x7f) * 4);
            *(int *)(this + 0x18a0) = iVar47;
            if (this[0x1811] == (CCsmSynth)0x1) {
              *(int *)(this + 0x18a0) = -iVar47;
            }
            iVar47 = DAT_000453c4 + 0x44eea;
            if (uVar17 == 0) {
              iVar47 = local_a8[(byte)this[0x1809] & 0x1f];
            }
            *(int *)pCVar8 = iVar47;
            local_1dc = local_1d8 * (*(int *)(this + 0x183c) << (sbyte)this[0x1822]);
            *(int *)(this + 0x18a8) = local_1dc;
            iVar47 = *(int *)(iVar33 + ((byte)this[0x181a] & 0x7f) * 4);
            *(int *)(this + 0x18b0) = iVar47;
            if (this[0x1812] == (CCsmSynth)0x1) {
              *(int *)(this + 0x18b0) = -iVar47;
            }
            iVar47 = DAT_000453c8 + 0x44f46;
            if (uVar17 == 0) {
              iVar47 = local_a8[(byte)this[0x180a] & 0x1f];
            }
            *(int *)pCVar29 = iVar47;
            local_1d8 = local_1d8 * (*(int *)(this + 0x1840) << (sbyte)this[0x1823]);
            *(int *)(this + 0x18b8) = local_1d8;
            iVar47 = *(int *)(iVar33 + ((byte)this[0x181b] & 0x7f) * 4);
            *(int *)(this + 0x18c0) = iVar47;
            iVar33 = DAT_000453cc;
            if (this[0x1813] == (CCsmSynth)0x1) {
              iVar47 = -iVar47;
              *(int *)(this + 0x18c0) = iVar47;
            }
            iVar33 = iVar33 + 0x44f94;
            if (uVar17 == 0) {
              iVar33 = local_a8[(byte)this[0x180b] & 0x1f];
            }
            *(int *)pCVar42 = iVar33;
            uVar40 = 0;
            uVar38 = 0;
            uVar48 = 0;
            uVar31 = 0;
            uVar34 = 0;
            *(undefined4 *)(this + 0x184c) = 0;
            *(undefined4 *)(this + 0x185c) = 0;
            uVar25 = 0;
            local_1bc = 0;
            *(undefined4 *)(this + 0x186c) = 0;
            local_1f4 = 0;
            *(undefined4 *)(this + 0x187c) = 0;
            local_1c0 = 0;
            *(undefined4 *)(this + 0x188c) = 0;
            *(undefined4 *)(this + 0x189c) = 0;
            local_1c4 = 0;
            *(undefined4 *)(this + 0x18ac) = 0;
            local_1fc = 0;
            *(undefined4 *)(this + 0x18bc) = 0;
            local_1c8 = 0;
            local_1cc = 0;
            local_200 = 0;
            local_1d0 = 0;
            local_1f8 = 0;
            *(undefined4 *)(this + 0x18fc) = 5;
            *(undefined4 *)(this + 0x190c) = 0x8000;
            local_230 = (CCsmSynth *)0x8000;
            break;
          default:
            local_200 = *(uint *)(this + 0x186c);
            local_1fc = *(uint *)(this + 0x188c);
            uVar31 = *(uint *)(this + 0x187c);
            local_1f4 = *(uint *)(this + 0x18ac);
            uVar25 = *(uint *)(this + 0x184c);
            uVar34 = *(uint *)(this + 0x185c);
            local_1f8 = uVar25 >> 0x16;
            local_230 = *(CCsmSynth **)(this + 0x190c);
            local_1cc = local_200 >> 0x16;
            local_1d0 = uVar34 >> 0x16;
            uVar48 = *(uint *)(this + 0x189c);
            local_1c8 = uVar31 >> 0x16;
            local_1c4 = local_1fc >> 0x16;
            local_1c0 = uVar48 >> 0x16;
            local_13c = *(int *)(this + 0x1848);
            local_1ec = *(uint *)(this + 0x1858);
            uVar38 = *(uint *)(this + 0x18bc);
            local_1bc = local_1f4 >> 0x16;
            uVar40 = uVar38 >> 0x16;
            uVar17 = (uint)(byte)this[0x18e4];
            local_224 = *(int *)(this + 0x1868);
            local_1e8 = *(uint *)(this + 0x1878);
            local_1e4 = *(uint **)(this + 0x1888);
            local_1e0 = *(int *)(this + 0x1898);
            local_1dc = *(int *)(this + 0x18a8);
            local_1d8 = *(int *)(this + 0x18b8);
            iVar47 = *(int *)(this + 0x18c0);
            break;
          case 5:
            uVar17 = (uint)(byte)this[0x18e4];
            if (uVar17 == 0) {
              iVar47 = *(int *)(this + 0x1900);
              *(uint *)(this + 0x1900) = iVar47 + 1U;
              local_230 = (CCsmSynth *)
                          ((uint)((ulonglong)*(uint *)(this + 0x190c) *
                                 (ulonglong)*(uint *)(this + 0x18e8)) >> 0x1e |
                          (int)((ulonglong)*(uint *)(this + 0x190c) *
                                (ulonglong)*(uint *)(this + 0x18e8) >> 0x20) << 2);
              *(CCsmSynth **)(this + 0x190c) = local_230;
              if (iVar47 + 1U < *(uint *)(this + 0x1904)) {
                uVar25 = *(uint *)(this + 0x184c);
                uVar34 = *(uint *)(this + 0x185c);
              }
              else {
                *(undefined4 *)(this + 0x1900) = 0;
                *(undefined4 *)(this + 0x18fc) = 1;
                uVar25 = *(uint *)(this + 0x184c);
                uVar34 = *(uint *)(this + 0x185c);
              }
              goto LAB_00045a02;
            }
            local_1fc = *(uint *)(this + 0x188c);
            local_200 = *(uint *)(this + 0x186c);
            uVar25 = *(uint *)(this + 0x184c);
            uVar34 = *(uint *)(this + 0x185c);
            uVar31 = *(uint *)(this + 0x187c);
            local_1f8 = uVar25 >> 0x16;
            local_1f4 = *(uint *)(this + 0x18ac);
            local_1d0 = uVar34 >> 0x16;
            local_1c8 = uVar31 >> 0x16;
            uVar48 = *(uint *)(this + 0x189c);
            local_230 = *(CCsmSynth **)(this + 0x190c);
            local_1c0 = uVar48 >> 0x16;
            uVar38 = *(uint *)(this + 0x18bc);
            local_1cc = local_200 >> 0x16;
            local_1c4 = local_1fc >> 0x16;
            local_1ec = *(uint *)(this + 0x1858);
            local_1bc = local_1f4 >> 0x16;
            local_224 = *(int *)(this + 0x1868);
            local_13c = *(int *)(this + 0x1848);
            uVar40 = uVar38 >> 0x16;
            local_1e8 = *(uint *)(this + 0x1878);
            local_1e4 = *(uint **)(this + 0x1888);
            local_1e0 = *(int *)(this + 0x1898);
            local_1dc = *(int *)(this + 0x18a8);
            local_1d8 = *(int *)(this + 0x18b8);
            iVar47 = *(int *)(this + 0x18c0);
          }
        }
        uVar35 = *(uint *)(this + 0x1924);
        iVar33 = 0;
        if (*(int *)(this + 0x1850) != 0) {
          iVar33 = *(int *)pCVar41;
          if (uVar17 == 1) {
            iVar33 = (int)*(short *)(iVar33 + local_1f8 * 2) + uVar35;
          }
          iVar49 = SignedSaturate(iVar33,0xf);
          SignedDoesSaturate(iVar33,0xf);
          iVar33 = iVar49 * *(int *)(this + 0x1850) >> 0xf;
        }
        *(uint *)(this + 0x184c) = uVar25 + local_13c;
        uVar25 = 0;
        if (*(int *)(this + 0x1860) != 0) {
          iVar49 = (int)*(short *)(*(int *)pCVar46 + local_1d0 * 2);
          if (uVar17 == 1) {
            iVar49 = iVar49 + uVar35;
          }
          iVar50 = SignedSaturate(iVar49,0xf);
          SignedDoesSaturate(iVar49,0xf);
          uVar25 = iVar50 * *(int *)(this + 0x1860) >> 0xf;
        }
        *(uint *)(this + 0x185c) = local_1ec + uVar34;
        iVar49 = 0;
        if (*(int *)(this + 0x1870) != 0) {
          uVar34 = uVar25;
          if (uVar17 == 1) {
            uVar34 = uVar35;
          }
          iVar49 = (int)*(short *)(*(int *)pCVar45 + local_1cc * 2);
          if (uVar17 == 1) {
            iVar49 = iVar49 + uVar34;
          }
          iVar50 = SignedSaturate(iVar49,0xf);
          SignedDoesSaturate(iVar49,0xf);
          iVar49 = iVar50 * *(int *)(this + 0x1870) >> 0xf;
        }
        *(uint *)(this + 0x186c) = local_224 + local_200;
        uVar34 = 0;
        if (*(int *)(this + 0x1880) != 0) {
          iVar50 = (int)*(short *)(*(int *)pCVar20 + local_1c8 * 2);
          if (uVar17 == 1) {
            iVar50 = iVar50 + uVar35;
          }
          iVar51 = SignedSaturate(iVar50,0xf);
          SignedDoesSaturate(iVar50,0xf);
          uVar34 = iVar51 * *(int *)(this + 0x1880) >> 0xf;
        }
        *(uint *)(this + 0x187c) = local_1e8 + uVar31;
        iVar50 = 0;
        if (*(int *)(this + 0x1890) != 0) {
          uVar31 = uVar34;
          if (uVar17 == 1) {
            uVar31 = uVar35;
          }
          iVar50 = (int)*(short *)(*(int *)pCVar16 + local_1c4 * 2);
          if (uVar17 == 1) {
            iVar50 = iVar50 + uVar31;
          }
          iVar51 = SignedSaturate(iVar50,0xf);
          SignedDoesSaturate(iVar50,0xf);
          iVar50 = iVar51 * *(int *)(this + 0x1890) >> 0xf;
        }
        *(uint *)(this + 0x188c) = (int)local_1e4 + local_1fc;
        uVar31 = 0;
        if (*(int *)(this + 0x18a0) != 0) {
          iVar51 = (int)*(short *)(*(int *)pCVar8 + local_1c0 * 2);
          if (uVar17 == 1) {
            iVar51 = iVar51 + uVar35;
          }
          iVar52 = SignedSaturate(iVar51,0xf);
          SignedDoesSaturate(iVar51,0xf);
          uVar31 = iVar52 * *(int *)(this + 0x18a0) >> 0xf;
        }
        *(uint *)(this + 0x189c) = local_1e0 + uVar48;
        iVar51 = 0;
        if (*(int *)(this + 0x18b0) != 0) {
          uVar48 = uVar31;
          if (uVar17 == 1) {
            uVar48 = uVar35;
          }
          iVar51 = (int)*(short *)(*(int *)pCVar29 + local_1bc * 2);
          if (uVar17 == 1) {
            iVar51 = iVar51 + uVar48;
          }
          iVar52 = SignedSaturate(iVar51,0xf);
          SignedDoesSaturate(iVar51,0xf);
          iVar51 = iVar52 * *(int *)(this + 0x18b0) >> 0xf;
        }
        *(uint *)(this + 0x18ac) = local_1dc + local_1f4;
        iVar52 = 0;
        if (iVar47 != 0) {
          uVar48 = uVar17;
          if (uVar17 == 1) {
            uVar48 = uVar35;
          }
          iVar52 = (int)*(short *)(*(int *)pCVar42 + uVar40 * 2);
          if (uVar17 == 1) {
            iVar52 = iVar52 + uVar48;
          }
          iVar53 = SignedSaturate(iVar52,0xf);
          SignedDoesSaturate(iVar52,0xf);
          iVar52 = iVar47 * iVar53 >> 0xf;
        }
        uVar17 = iVar33 + uVar25 + iVar49 + uVar34 + iVar50 + uVar31 + iVar51 + iVar52;
        *(uint *)(this + 0x18bc) = local_1d8 + uVar38;
        local_238 = local_238 + 1;
        lVar5 = (ulonglong)uVar17 * ZEXT48(local_230);
        uVar17 = CLpf::Generate(*(CLpf **)(this + 0x1950),
                                (uint)lVar5 >> 0xf |
                                ((int)((ulonglong)lVar5 >> 0x20) +
                                (int)local_230 * ((int)uVar17 >> 0x1f)) * 0x20000);
        lVar5 = (ulonglong)uVar17 * (ulonglong)*(uint *)(this + 0x18cc);
        local_1f0 = local_1f0 + 1;
        *local_1f0 = (uint)lVar5 >> 0xf |
                     (*(uint *)(this + 0x18cc) * ((int)uVar17 >> 0x1f) +
                     (int)((ulonglong)lVar5 >> 0x20)) * 0x20000;
        pCVar24 = pCVar46;
      } while (local_238 < local_228);
LAB_000451fa:
      iVar30 = DAT_000453d0;
      pCVar9 = (CCsmSynth *)0x1;
      iVar39 = 4;
      piVar44 = (int *)(DAT_000453d0 + 0x4520c);
      iVar36 = *(int *)(this + 0x1974);
      lVar5 = (longlong)*(int *)(DAT_000453d0 + 0x4550c) * (longlong)*piVar44;
      lVar5 = (longlong)(int)((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) *
              (longlong)iVar36;
      uVar17 = (uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11;
      *(uint *)(DAT_000453d0 + 0x4550c) = uVar17;
      *(uint *)(iVar30 + 0x4560c) =
           (uint)((ulonglong)uVar17 * (ulonglong)local_144) >> 0xf |
           (local_144 * ((int)uVar17 >> 0x1f) +
           (int)((ulonglong)uVar17 * (ulonglong)local_144 >> 0x20)) * 0x20000;
      if ((CCsmSynth *)0x1 < local_228) {
        if (((uint)(local_228 + -1) & 1) != 0) {
          iVar39 = 8;
          lVar5 = (longlong)*(int *)(iVar30 + 0x45510) * (longlong)*(int *)(iVar30 + 0x45210);
          lVar5 = (longlong)(int)((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) *
                  (longlong)iVar36;
          uVar17 = (uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11;
          *(uint *)(iVar30 + 0x45510) = uVar17;
          pCVar9 = pCVar24;
          if ((CCsmSynth *)0x2 < local_228) {
            pCVar9 = (CCsmSynth *)0x2;
          }
          iVar21 = 2;
          if ((CCsmSynth *)0x2 < local_228) {
            iVar21 = iVar36;
          }
          *(uint *)(iVar30 + 0x45610) =
               (uint)((ulonglong)uVar17 * (ulonglong)local_144) >> 0xf |
               (local_144 * ((int)uVar17 >> 0x1f) +
               (int)((ulonglong)uVar17 * (ulonglong)local_144 >> 0x20)) * 0x20000;
          iVar36 = iVar21;
          if (local_228 < (CCsmSynth *)0x3) goto LAB_0004534c;
        }
        do {
          iVar47 = iVar30 + 0x4550c;
          iVar43 = iVar39 + 4;
          pCVar9 = pCVar9 + 2;
          lVar5 = (longlong)*(int *)(iVar39 + iVar47) * (longlong)*(int *)(iVar39 + (int)piVar44);
          iVar21 = *(int *)((int)piVar44 + iVar43);
          lVar5 = (longlong)(int)((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) *
                  (longlong)iVar36;
          uVar40 = (uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11;
          *(uint *)(iVar39 + iVar47) = uVar40;
          lVar5 = (longlong)*(int *)(iVar47 + iVar43) * (longlong)iVar21;
          lVar5 = (longlong)(int)((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) *
                  (longlong)iVar36;
          uVar17 = (uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11;
          *(uint *)(iVar47 + iVar43) = uVar17;
          *(uint *)(iVar39 + iVar30 + 0x4560c) =
               (uint)((ulonglong)uVar40 * (ulonglong)local_144) >> 0xf |
               (local_144 * ((int)uVar40 >> 0x1f) +
               (int)((ulonglong)uVar40 * (ulonglong)local_144 >> 0x20)) * 0x20000;
          *(uint *)(iVar30 + 0x4560c + iVar43) =
               (uint)((ulonglong)uVar17 * (ulonglong)local_144) >> 0xf |
               (local_144 * ((int)uVar17 >> 0x1f) +
               (int)((ulonglong)uVar17 * (ulonglong)local_144 >> 0x20)) * 0x20000;
          iVar39 = iVar39 + 8;
        } while (pCVar9 < local_228);
      }
LAB_0004534c:
      if (local_144 != 0) {
        if (this[0x1960] == (CCsmSynth)0x0) {
          iVar39 = (int)local_1b0 * -4;
          iVar21 = iVar30 + 0x4560c + iVar39;
          iVar43 = iVar30 + 0x4530c + iVar39;
          iVar39 = iVar30 + 0x4540c + iVar39;
          iVar36 = (int)local_1b0 * 4 + 4;
          iVar30 = *(int *)(iVar21 + (int)local_1b0 * 4);
          lVar5 = (longlong)iVar30 * (longlong)*(int *)(iVar43 + (int)local_1b0 * 4);
          *(uint *)(*(int *)param_2 + (int)local_1b0 * 4) =
               *(int *)(*(int *)param_2 + (int)local_1b0 * 4) +
               ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
          pCVar24 = (CCsmSynth *)0x1;
          lVar5 = (longlong)iVar30 * (longlong)*(int *)(iVar39 + (int)local_1b0 * 4);
          *(uint *)(*(int *)(param_2 + 4) + (int)local_1b0 * 4) =
               *(int *)(*(int *)(param_2 + 4) + (int)local_1b0 * 4) +
               ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
          if ((CCsmSynth *)0x1 < local_228) {
            if (((uint)(local_228 + -1) & 1) != 0) {
              iVar30 = *(int *)(iVar21 + iVar36);
              pCVar24 = (CCsmSynth *)0x2;
              lVar5 = (longlong)iVar30 * (longlong)*(int *)(iVar43 + iVar36);
              *(uint *)(*(int *)param_2 + iVar36) =
                   *(int *)(*(int *)param_2 + iVar36) +
                   ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
              lVar5 = (longlong)iVar30 * (longlong)*(int *)(iVar39 + iVar36);
              *(uint *)(*(int *)(param_2 + 4) + iVar36) =
                   *(int *)(*(int *)(param_2 + 4) + iVar36) +
                   ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
              iVar36 = (int)local_1b0 * 4 + 8;
              if (local_228 < (CCsmSynth *)0x3) goto switchD_00045374_default;
            }
            do {
              iVar30 = *(int *)(iVar21 + iVar36);
              iVar47 = iVar36 + 4;
              pCVar24 = pCVar24 + 2;
              lVar5 = (longlong)iVar30 * (longlong)*(int *)(iVar43 + iVar36);
              *(uint *)(*(int *)param_2 + iVar36) =
                   *(int *)(*(int *)param_2 + iVar36) +
                   ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
              lVar5 = (longlong)iVar30 * (longlong)*(int *)(iVar39 + iVar36);
              *(uint *)(*(int *)(param_2 + 4) + iVar36) =
                   *(int *)(*(int *)(param_2 + 4) + iVar36) +
                   ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
              iVar30 = *(int *)(iVar21 + iVar47);
              iVar36 = iVar36 + 8;
              lVar5 = (longlong)iVar30 * (longlong)*(int *)(iVar43 + iVar47);
              *(uint *)(*(int *)param_2 + iVar47) =
                   *(int *)(*(int *)param_2 + iVar47) +
                   ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
              lVar5 = (longlong)iVar30 * (longlong)*(int *)(iVar39 + iVar47);
              *(uint *)(*(int *)(param_2 + 4) + iVar47) =
                   *(int *)(*(int *)(param_2 + 4) + iVar47) +
                   ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
            } while (pCVar24 < local_228);
          }
        }
        else if (this[0x1960] == (CCsmSynth)0x80) {
          switch(this[0x1961]) {
          case (CCsmSynth)0x0:
            pCVar24 = (CCsmSynth *)0x1;
            iVar30 = DAT_00047284 + 0x47010 + (int)local_1b0 * -4;
            uVar17 = (uint)(local_228 + -1) & 7;
            iVar36 = (int)local_1b0 * 4 + 4;
            *(int *)(*(int *)(param_2 + 0x14) + (int)local_1b0 * 4) =
                 *(int *)(iVar30 + (int)local_1b0 * 4) +
                 *(int *)(*(int *)(param_2 + 0x14) + (int)local_1b0 * 4);
            if ((CCsmSynth *)0x1 < local_228) {
              pCVar9 = local_228;
              if (uVar17 != 0) {
                if (uVar17 != 1) {
                  if (uVar17 != 2) {
                    if (uVar17 != 3) {
                      if (uVar17 != 4) {
                        if (uVar17 != 5) {
                          if (uVar17 != 6) {
                            pCVar24 = (CCsmSynth *)0x2;
                            *(int *)(*(int *)(param_2 + 0x14) + iVar36) =
                                 *(int *)(iVar30 + iVar36) +
                                 *(int *)(*(int *)(param_2 + 0x14) + iVar36);
                            iVar36 = (int)local_1b0 * 4 + 8;
                          }
                          pCVar24 = pCVar24 + 1;
                          *(int *)(*(int *)(param_2 + 0x14) + iVar36) =
                               *(int *)(iVar30 + iVar36) +
                               *(int *)(*(int *)(param_2 + 0x14) + iVar36);
                          iVar36 = iVar36 + 4;
                        }
                        pCVar24 = pCVar24 + 1;
                        *(int *)(*(int *)(param_2 + 0x14) + iVar36) =
                             *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x14) + iVar36)
                        ;
                        iVar36 = iVar36 + 4;
                      }
                      pCVar24 = pCVar24 + 1;
                      *(int *)(*(int *)(param_2 + 0x14) + iVar36) =
                           *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x14) + iVar36);
                      iVar36 = iVar36 + 4;
                    }
                    pCVar24 = pCVar24 + 1;
                    *(int *)(*(int *)(param_2 + 0x14) + iVar36) =
                         *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x14) + iVar36);
                    iVar36 = iVar36 + 4;
                  }
                  pCVar24 = pCVar24 + 1;
                  *(int *)(*(int *)(param_2 + 0x14) + iVar36) =
                       *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x14) + iVar36);
                  iVar36 = iVar36 + 4;
                }
                pCVar24 = pCVar24 + 1;
                pCVar9 = (CCsmSynth *)param_2;
                if (pCVar24 < local_228) {
                  pCVar9 = local_228;
                }
                *(int *)(*(int *)(param_2 + 0x14) + iVar36) =
                     *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x14) + iVar36);
                iVar36 = iVar36 + 4;
                if (local_228 <= pCVar24) break;
              }
              do {
                iVar39 = iVar36 + 4;
                iVar21 = iVar36 + 8;
                iVar43 = iVar36 + 0xc;
                iVar47 = iVar36 + 0x10;
                pCVar24 = pCVar24 + 8;
                *(int *)(*(int *)(param_2 + 0x14) + iVar36) =
                     *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x14) + iVar36);
                *(int *)(*(int *)(param_2 + 0x14) + iVar39) =
                     *(int *)(iVar30 + iVar39) + *(int *)(*(int *)(param_2 + 0x14) + iVar39);
                iVar39 = iVar36 + 0x1c;
                *(int *)(*(int *)(param_2 + 0x14) + iVar21) =
                     *(int *)(iVar30 + iVar21) + *(int *)(*(int *)(param_2 + 0x14) + iVar21);
                iVar21 = iVar36 + 0x14;
                *(int *)(*(int *)(param_2 + 0x14) + iVar43) =
                     *(int *)(iVar30 + iVar43) + *(int *)(*(int *)(param_2 + 0x14) + iVar43);
                iVar43 = iVar36 + 0x18;
                iVar36 = iVar36 + 0x20;
                *(int *)(*(int *)(param_2 + 0x14) + iVar47) =
                     *(int *)(iVar30 + iVar47) + *(int *)(*(int *)(param_2 + 0x14) + iVar47);
                *(int *)(*(int *)(param_2 + 0x14) + iVar21) =
                     *(int *)(iVar30 + iVar21) + *(int *)(*(int *)(param_2 + 0x14) + iVar21);
                *(int *)(*(int *)(param_2 + 0x14) + iVar43) =
                     *(int *)(iVar30 + iVar43) + *(int *)(*(int *)(param_2 + 0x14) + iVar43);
                *(int *)(*(int *)(param_2 + 0x14) + iVar39) =
                     *(int *)(iVar30 + iVar39) + *(int *)(*(int *)(param_2 + 0x14) + iVar39);
              } while (pCVar24 < pCVar9);
            }
            break;
          case (CCsmSynth)0x1:
            iVar30 = DAT_00047280 + 0x46e6e + (int)local_1b0 * -4;
            iVar36 = (int)local_1b0 * 4 + 4;
            pCVar24 = (CCsmSynth *)0x1;
            uVar17 = (uint)(local_228 + -1) & 7;
            *(int *)(*(int *)(param_2 + 0x18) + (int)local_1b0 * 4) =
                 *(int *)(iVar30 + (int)local_1b0 * 4) +
                 *(int *)(*(int *)(param_2 + 0x18) + (int)local_1b0 * 4);
            if ((CCsmSynth *)0x1 < local_228) {
              pCVar9 = local_228;
              if (uVar17 != 0) {
                if (uVar17 != 1) {
                  if (uVar17 != 2) {
                    if (uVar17 != 3) {
                      if (uVar17 != 4) {
                        if (uVar17 != 5) {
                          if (uVar17 != 6) {
                            pCVar24 = (CCsmSynth *)0x2;
                            *(int *)(*(int *)(param_2 + 0x18) + iVar36) =
                                 *(int *)(iVar30 + iVar36) +
                                 *(int *)(*(int *)(param_2 + 0x18) + iVar36);
                            iVar36 = (int)local_1b0 * 4 + 8;
                          }
                          pCVar24 = pCVar24 + 1;
                          *(int *)(*(int *)(param_2 + 0x18) + iVar36) =
                               *(int *)(iVar30 + iVar36) +
                               *(int *)(*(int *)(param_2 + 0x18) + iVar36);
                          iVar36 = iVar36 + 4;
                        }
                        pCVar24 = pCVar24 + 1;
                        *(int *)(*(int *)(param_2 + 0x18) + iVar36) =
                             *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x18) + iVar36)
                        ;
                        iVar36 = iVar36 + 4;
                      }
                      pCVar24 = pCVar24 + 1;
                      *(int *)(*(int *)(param_2 + 0x18) + iVar36) =
                           *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x18) + iVar36);
                      iVar36 = iVar36 + 4;
                    }
                    pCVar24 = pCVar24 + 1;
                    *(int *)(*(int *)(param_2 + 0x18) + iVar36) =
                         *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x18) + iVar36);
                    iVar36 = iVar36 + 4;
                  }
                  pCVar24 = pCVar24 + 1;
                  *(int *)(*(int *)(param_2 + 0x18) + iVar36) =
                       *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x18) + iVar36);
                  iVar36 = iVar36 + 4;
                }
                pCVar24 = pCVar24 + 1;
                pCVar9 = (CCsmSynth *)param_2;
                if (pCVar24 < local_228) {
                  pCVar9 = local_228;
                }
                *(int *)(*(int *)(param_2 + 0x18) + iVar36) =
                     *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x18) + iVar36);
                iVar36 = iVar36 + 4;
                if (local_228 <= pCVar24) break;
              }
              do {
                iVar39 = iVar36 + 4;
                iVar43 = iVar36 + 8;
                iVar47 = iVar36 + 0xc;
                iVar21 = iVar36 + 0x10;
                pCVar24 = pCVar24 + 8;
                *(int *)(*(int *)(param_2 + 0x18) + iVar36) =
                     *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x18) + iVar36);
                *(int *)(*(int *)(param_2 + 0x18) + iVar39) =
                     *(int *)(iVar30 + iVar39) + *(int *)(*(int *)(param_2 + 0x18) + iVar39);
                iVar39 = iVar36 + 0x1c;
                *(int *)(*(int *)(param_2 + 0x18) + iVar43) =
                     *(int *)(iVar30 + iVar43) + *(int *)(*(int *)(param_2 + 0x18) + iVar43);
                iVar43 = iVar36 + 0x14;
                *(int *)(*(int *)(param_2 + 0x18) + iVar47) =
                     *(int *)(iVar30 + iVar47) + *(int *)(*(int *)(param_2 + 0x18) + iVar47);
                iVar47 = iVar36 + 0x18;
                iVar36 = iVar36 + 0x20;
                *(int *)(*(int *)(param_2 + 0x18) + iVar21) =
                     *(int *)(iVar30 + iVar21) + *(int *)(*(int *)(param_2 + 0x18) + iVar21);
                *(int *)(*(int *)(param_2 + 0x18) + iVar43) =
                     *(int *)(iVar30 + iVar43) + *(int *)(*(int *)(param_2 + 0x18) + iVar43);
                *(int *)(*(int *)(param_2 + 0x18) + iVar47) =
                     *(int *)(iVar30 + iVar47) + *(int *)(*(int *)(param_2 + 0x18) + iVar47);
                *(int *)(*(int *)(param_2 + 0x18) + iVar39) =
                     *(int *)(iVar30 + iVar39) + *(int *)(*(int *)(param_2 + 0x18) + iVar39);
              } while (pCVar24 < pCVar9);
            }
            break;
          case (CCsmSynth)0x2:
            pCVar24 = (CCsmSynth *)0x1;
            iVar30 = DAT_0004727c + 290000 + (int)local_1b0 * -4;
            iVar36 = (int)local_1b0 * 4 + 4;
            uVar17 = (uint)(local_228 + -1) & 7;
            *(int *)(*(int *)(param_2 + 0x1c) + (int)local_1b0 * 4) =
                 *(int *)(iVar30 + (int)local_1b0 * 4) +
                 *(int *)(*(int *)(param_2 + 0x1c) + (int)local_1b0 * 4);
            if ((CCsmSynth *)0x1 < local_228) {
              pCVar9 = local_228;
              if (uVar17 != 0) {
                if (uVar17 != 1) {
                  if (uVar17 != 2) {
                    if (uVar17 != 3) {
                      if (uVar17 != 4) {
                        if (uVar17 != 5) {
                          if (uVar17 != 6) {
                            pCVar24 = (CCsmSynth *)0x2;
                            *(int *)(*(int *)(param_2 + 0x1c) + iVar36) =
                                 *(int *)(iVar30 + iVar36) +
                                 *(int *)(*(int *)(param_2 + 0x1c) + iVar36);
                            iVar36 = (int)local_1b0 * 4 + 8;
                          }
                          pCVar24 = pCVar24 + 1;
                          *(int *)(*(int *)(param_2 + 0x1c) + iVar36) =
                               *(int *)(iVar30 + iVar36) +
                               *(int *)(*(int *)(param_2 + 0x1c) + iVar36);
                          iVar36 = iVar36 + 4;
                        }
                        pCVar24 = pCVar24 + 1;
                        *(int *)(*(int *)(param_2 + 0x1c) + iVar36) =
                             *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x1c) + iVar36)
                        ;
                        iVar36 = iVar36 + 4;
                      }
                      pCVar24 = pCVar24 + 1;
                      *(int *)(*(int *)(param_2 + 0x1c) + iVar36) =
                           *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x1c) + iVar36);
                      iVar36 = iVar36 + 4;
                    }
                    pCVar24 = pCVar24 + 1;
                    *(int *)(*(int *)(param_2 + 0x1c) + iVar36) =
                         *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x1c) + iVar36);
                    iVar36 = iVar36 + 4;
                  }
                  pCVar24 = pCVar24 + 1;
                  *(int *)(*(int *)(param_2 + 0x1c) + iVar36) =
                       *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x1c) + iVar36);
                  iVar36 = iVar36 + 4;
                }
                pCVar24 = pCVar24 + 1;
                pCVar9 = (CCsmSynth *)param_2;
                if (pCVar24 < local_228) {
                  pCVar9 = local_228;
                }
                *(int *)(*(int *)(param_2 + 0x1c) + iVar36) =
                     *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x1c) + iVar36);
                iVar36 = iVar36 + 4;
                if (local_228 <= pCVar24) break;
              }
              do {
                iVar39 = iVar36 + 4;
                iVar43 = iVar36 + 8;
                iVar21 = iVar36 + 0xc;
                iVar47 = iVar36 + 0x10;
                pCVar24 = pCVar24 + 8;
                *(int *)(*(int *)(param_2 + 0x1c) + iVar36) =
                     *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x1c) + iVar36);
                *(int *)(*(int *)(param_2 + 0x1c) + iVar39) =
                     *(int *)(iVar30 + iVar39) + *(int *)(*(int *)(param_2 + 0x1c) + iVar39);
                iVar39 = iVar36 + 0x1c;
                *(int *)(*(int *)(param_2 + 0x1c) + iVar43) =
                     *(int *)(iVar30 + iVar43) + *(int *)(*(int *)(param_2 + 0x1c) + iVar43);
                iVar43 = iVar36 + 0x14;
                *(int *)(*(int *)(param_2 + 0x1c) + iVar21) =
                     *(int *)(iVar30 + iVar21) + *(int *)(*(int *)(param_2 + 0x1c) + iVar21);
                iVar21 = iVar36 + 0x18;
                iVar36 = iVar36 + 0x20;
                *(int *)(*(int *)(param_2 + 0x1c) + iVar47) =
                     *(int *)(iVar30 + iVar47) + *(int *)(*(int *)(param_2 + 0x1c) + iVar47);
                *(int *)(*(int *)(param_2 + 0x1c) + iVar43) =
                     *(int *)(iVar30 + iVar43) + *(int *)(*(int *)(param_2 + 0x1c) + iVar43);
                *(int *)(*(int *)(param_2 + 0x1c) + iVar21) =
                     *(int *)(iVar30 + iVar21) + *(int *)(*(int *)(param_2 + 0x1c) + iVar21);
                *(int *)(*(int *)(param_2 + 0x1c) + iVar39) =
                     *(int *)(iVar30 + iVar39) + *(int *)(*(int *)(param_2 + 0x1c) + iVar39);
              } while (pCVar24 < pCVar9);
            }
            break;
          case (CCsmSynth)0x3:
            uVar17 = (uint)(local_228 + -1) & 7;
            iVar30 = DAT_00045c30 + 0x457e4 + (int)local_1b0 * -4;
            iVar36 = (int)local_1b0 * 4 + 4;
            pCVar24 = (CCsmSynth *)0x1;
            *(int *)(*(int *)(param_2 + 0x20) + (int)local_1b0 * 4) =
                 *(int *)(iVar30 + (int)local_1b0 * 4) +
                 *(int *)(*(int *)(param_2 + 0x20) + (int)local_1b0 * 4);
            if ((CCsmSynth *)0x1 < local_228) {
              pCVar9 = local_228;
              if (uVar17 != 0) {
                if (uVar17 != 1) {
                  if (uVar17 != 2) {
                    if (uVar17 != 3) {
                      if (uVar17 != 4) {
                        if (uVar17 != 5) {
                          if (uVar17 != 6) {
                            pCVar24 = (CCsmSynth *)0x2;
                            *(int *)(*(int *)(param_2 + 0x20) + iVar36) =
                                 *(int *)(iVar30 + iVar36) +
                                 *(int *)(*(int *)(param_2 + 0x20) + iVar36);
                            iVar36 = (int)local_1b0 * 4 + 8;
                          }
                          pCVar24 = pCVar24 + 1;
                          *(int *)(*(int *)(param_2 + 0x20) + iVar36) =
                               *(int *)(iVar30 + iVar36) +
                               *(int *)(*(int *)(param_2 + 0x20) + iVar36);
                          iVar36 = iVar36 + 4;
                        }
                        pCVar24 = pCVar24 + 1;
                        *(int *)(*(int *)(param_2 + 0x20) + iVar36) =
                             *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x20) + iVar36)
                        ;
                        iVar36 = iVar36 + 4;
                      }
                      pCVar24 = pCVar24 + 1;
                      *(int *)(*(int *)(param_2 + 0x20) + iVar36) =
                           *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x20) + iVar36);
                      iVar36 = iVar36 + 4;
                    }
                    pCVar24 = pCVar24 + 1;
                    *(int *)(*(int *)(param_2 + 0x20) + iVar36) =
                         *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x20) + iVar36);
                    iVar36 = iVar36 + 4;
                  }
                  pCVar24 = pCVar24 + 1;
                  *(int *)(*(int *)(param_2 + 0x20) + iVar36) =
                       *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x20) + iVar36);
                  iVar36 = iVar36 + 4;
                }
                pCVar24 = pCVar24 + 1;
                pCVar9 = (CCsmSynth *)param_2;
                if (pCVar24 < local_228) {
                  pCVar9 = local_228;
                }
                *(int *)(*(int *)(param_2 + 0x20) + iVar36) =
                     *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x20) + iVar36);
                iVar36 = iVar36 + 4;
                if (local_228 <= pCVar24) break;
              }
              do {
                iVar39 = iVar36 + 4;
                iVar43 = iVar36 + 8;
                iVar47 = iVar36 + 0xc;
                iVar21 = iVar36 + 0x10;
                pCVar24 = pCVar24 + 8;
                *(int *)(*(int *)(param_2 + 0x20) + iVar36) =
                     *(int *)(iVar30 + iVar36) + *(int *)(*(int *)(param_2 + 0x20) + iVar36);
                *(int *)(*(int *)(param_2 + 0x20) + iVar39) =
                     *(int *)(iVar30 + iVar39) + *(int *)(*(int *)(param_2 + 0x20) + iVar39);
                iVar39 = iVar36 + 0x1c;
                *(int *)(*(int *)(param_2 + 0x20) + iVar43) =
                     *(int *)(iVar30 + iVar43) + *(int *)(*(int *)(param_2 + 0x20) + iVar43);
                iVar43 = iVar36 + 0x14;
                *(int *)(*(int *)(param_2 + 0x20) + iVar47) =
                     *(int *)(iVar30 + iVar47) + *(int *)(*(int *)(param_2 + 0x20) + iVar47);
                iVar47 = iVar36 + 0x18;
                iVar36 = iVar36 + 0x20;
                *(int *)(*(int *)(param_2 + 0x20) + iVar21) =
                     *(int *)(iVar30 + iVar21) + *(int *)(*(int *)(param_2 + 0x20) + iVar21);
                *(int *)(*(int *)(param_2 + 0x20) + iVar43) =
                     *(int *)(iVar30 + iVar43) + *(int *)(*(int *)(param_2 + 0x20) + iVar43);
                *(int *)(*(int *)(param_2 + 0x20) + iVar47) =
                     *(int *)(iVar30 + iVar47) + *(int *)(*(int *)(param_2 + 0x20) + iVar47);
                *(int *)(*(int *)(param_2 + 0x20) + iVar39) =
                     *(int *)(iVar30 + iVar39) + *(int *)(*(int *)(param_2 + 0x20) + iVar39);
              } while (pCVar24 < pCVar9);
            }
          }
        }
      }
switchD_00045374_default:
      if (local_16c != 0) {
        iVar36 = DAT_00045c34 + 0x45882 + (int)local_1b0 * -4;
        pCVar24 = (CCsmSynth *)0x1;
        iVar30 = (int)local_1b0 * 4 + 4;
        uVar17 = (uint)(local_228 + -1) & 3;
        lVar5 = (longlong)*(int *)(iVar36 + (int)local_1b0 * 4) * (longlong)local_16c;
        *(uint *)(*(int *)(param_2 + 8) + (int)local_1b0 * 4) =
             ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) +
             *(int *)(*(int *)(param_2 + 8) + (int)local_1b0 * 4);
        if ((CCsmSynth *)0x1 < local_228) {
          if (uVar17 != 0) {
            if (uVar17 != 1) {
              if (uVar17 != 2) {
                pCVar24 = (CCsmSynth *)0x2;
                lVar5 = (longlong)*(int *)(iVar36 + iVar30) * (longlong)local_16c;
                *(uint *)(*(int *)(param_2 + 8) + iVar30) =
                     ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) +
                     *(int *)(*(int *)(param_2 + 8) + iVar30);
                iVar30 = (int)local_1b0 * 4 + 8;
              }
              pCVar24 = pCVar24 + 1;
              lVar5 = (longlong)*(int *)(iVar36 + iVar30) * (longlong)local_16c;
              *(uint *)(*(int *)(param_2 + 8) + iVar30) =
                   ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) +
                   *(int *)(*(int *)(param_2 + 8) + iVar30);
              iVar30 = iVar30 + 4;
            }
            pCVar24 = pCVar24 + 1;
            lVar5 = (longlong)*(int *)(iVar36 + iVar30) * (longlong)local_16c;
            *(uint *)(*(int *)(param_2 + 8) + iVar30) =
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) +
                 *(int *)(*(int *)(param_2 + 8) + iVar30);
            iVar30 = iVar30 + 4;
            if (local_228 <= pCVar24) goto LAB_000456d8;
          }
          do {
            iVar39 = iVar30 + 4;
            iVar43 = iVar30 + 8;
            iVar21 = iVar30 + 0xc;
            pCVar24 = pCVar24 + 4;
            lVar5 = (longlong)*(int *)(iVar36 + iVar30) * (longlong)local_16c;
            *(uint *)(*(int *)(param_2 + 8) + iVar30) =
                 *(int *)(*(int *)(param_2 + 8) + iVar30) +
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
            iVar30 = iVar30 + 0x10;
            lVar5 = (longlong)*(int *)(iVar36 + iVar39) * (longlong)local_16c;
            *(uint *)(*(int *)(param_2 + 8) + iVar39) =
                 *(int *)(*(int *)(param_2 + 8) + iVar39) +
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
            lVar5 = (longlong)*(int *)(iVar36 + iVar43) * (longlong)local_16c;
            *(uint *)(*(int *)(param_2 + 8) + iVar43) =
                 *(int *)(*(int *)(param_2 + 8) + iVar43) +
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
            lVar5 = (longlong)*(int *)(iVar36 + iVar21) * (longlong)local_16c;
            *(uint *)(*(int *)(param_2 + 8) + iVar21) =
                 *(int *)(*(int *)(param_2 + 8) + iVar21) +
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
          } while (pCVar24 < local_228);
        }
      }
LAB_000456d8:
      iVar30 = DAT_00045c38;
      if (local_204 != 0) {
        iVar36 = (int)local_1b0 * 4;
        piVar44 = (int *)(DAT_00045c38 + 0x457ee);
        lVar5 = (longlong)*(int *)(DAT_00045c38 + 0x459ee) * (longlong)local_204;
        uVar17 = (uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11;
        *(uint *)(DAT_00045c38 + 0x459ee) = uVar17;
        lVar5 = (longlong)(int)uVar17 * (longlong)*piVar44;
        iVar39 = 4;
        *(uint *)(*(int *)(param_2 + 0xc) + (int)local_1b0 * 4) =
             ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) +
             *(int *)(*(int *)(param_2 + 0xc) + (int)local_1b0 * 4);
        lVar5 = (longlong)*(int *)(iVar30 + 0x459ee) * (longlong)*(int *)(iVar30 + 0x458ee);
        *(uint *)(*(int *)(param_2 + 0x10) + (int)local_1b0 * 4) =
             *(int *)(*(int *)(param_2 + 0x10) + (int)local_1b0 * 4) +
             ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
        if ((CCsmSynth *)0x1 < local_228) {
          if (((uint)(local_228 + -1) & 1) == 0) {
            local_230 = (CCsmSynth *)0x1;
          }
          else {
            iVar39 = 8;
            lVar5 = (longlong)*(int *)(iVar30 + 0x459f2) * (longlong)local_204;
            iVar21 = iVar36 + 4;
            uVar17 = (uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11;
            *(uint *)(iVar30 + 0x459f2) = uVar17;
            lVar5 = (longlong)(int)uVar17 * (longlong)*(int *)(iVar30 + 0x457f2);
            *(uint *)(*(int *)(param_2 + 0xc) + iVar21) =
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) +
                 *(int *)(*(int *)(param_2 + 0xc) + iVar21);
            lVar5 = (longlong)*(int *)(iVar30 + 0x459f2) * (longlong)*(int *)(iVar30 + 0x458f2);
            *(uint *)(*(int *)(param_2 + 0x10) + iVar21) =
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) +
                 *(int *)(*(int *)(param_2 + 0x10) + iVar21);
            if (local_228 < (CCsmSynth *)0x3) goto LAB_00045892;
            local_230 = (CCsmSynth *)0x2;
          }
          do {
            iVar33 = iVar30 + 0x459ee;
            local_230 = local_230 + 2;
            iVar21 = iVar39 + 4;
            lVar5 = (longlong)*(int *)(iVar39 + iVar33) * (longlong)local_204;
            iVar43 = iVar36 + iVar39;
            iVar47 = iVar36 + iVar21;
            uVar17 = (uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11;
            *(uint *)(iVar39 + iVar33) = uVar17;
            lVar5 = (longlong)(int)uVar17 * (longlong)*(int *)(iVar39 + iVar30 + 0x457ee);
            *(uint *)(*(int *)(param_2 + 0xc) + iVar43) =
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) +
                 *(int *)(*(int *)(param_2 + 0xc) + iVar43);
            piVar44 = (int *)(iVar39 + iVar33);
            piVar1 = (int *)(iVar39 + iVar30 + 0x458ee);
            iVar39 = iVar39 + 8;
            lVar5 = (longlong)*piVar44 * (longlong)*piVar1;
            *(uint *)(*(int *)(param_2 + 0x10) + iVar43) =
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) +
                 *(int *)(*(int *)(param_2 + 0x10) + iVar43);
            lVar5 = (longlong)*(int *)(iVar33 + iVar21) * (longlong)local_204;
            uVar17 = (uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11;
            *(uint *)(iVar33 + iVar21) = uVar17;
            lVar5 = (longlong)(int)uVar17 * (longlong)*(int *)(iVar30 + 0x457ee + iVar21);
            *(uint *)(*(int *)(param_2 + 0xc) + iVar47) =
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11) +
                 *(int *)(*(int *)(param_2 + 0xc) + iVar47);
            lVar5 = (longlong)*(int *)(iVar33 + iVar21) *
                    (longlong)*(int *)(iVar30 + 0x458ee + iVar21);
            *(uint *)(*(int *)(param_2 + 0x10) + iVar47) =
                 *(int *)(*(int *)(param_2 + 0x10) + iVar47) +
                 ((uint)lVar5 >> 0xf | (int)((ulonglong)lVar5 >> 0x20) << 0x11);
          } while (local_230 < local_228);
        }
      }
LAB_00045892:
      local_1b0 = local_1b0 + (int)local_228;
      pCVar9 = local_148;
      pCVar24 = local_148;
      local_228 = local_148;
    } while (local_148 != (CCsmSynth *)0x0);
  }
  return;
}

