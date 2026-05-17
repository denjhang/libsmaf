/* CCsmSynth @ 000472e4 1692B */


/* ARM::CCsmSynth::CCsmSynth(unsigned int, ARM::CCh*) */

CCsmSynth * __thiscall ARM::CCsmSynth::CCsmSynth(CCsmSynth *this,uint param_1,CCh *param_2)

{
  CCsmSynth CVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CLpf *this_00;
  CVolIP *this_01;
  CPanIP *this_02;
  CWnoise *this_03;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int local_a8 [3];
  code *local_9c;
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
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  CCsmSynth *local_2c;
  
  *(CCh **)(this + 0x1800) = param_2;
  *(undefined4 *)(this + 0x1970) = 0;
  *(undefined4 *)(this + 0x1974) = 0x8000;
  iVar5 = DAT_00047a08;
  iVar4 = DAT_00047a00;
  iVar3 = DAT_000479fc;
  iVar2 = DAT_000479f4;
  iVar8 = DAT_000479ec;
  iVar10 = DAT_00047988;
  iVar6 = DAT_00047980;
  if (param_1 == 0x5622) {
    puVar9 = (undefined4 *)(DAT_00047a04 + 0x484ce);
    *(undefined4 **)(this + 0x1984) = puVar9;
    *(code **)(this + 0x197c) = CDinSynth::SetPanpot + iVar5;
    iVar6 = 0x22d4;
    *(undefined4 *)(this + 0x1980) = 5;
    *(int *)(this + 0x1988) = iVar5 + 0x47b2c;
    *(undefined4 *)(this + 0x1978) = 0x5622;
    goto LAB_000473b0;
  }
  if (param_1 < 0x5623) {
    if (param_1 == 0x2b11) {
      iVar6 = 0x45a8;
      puVar9 = (undefined4 *)(DAT_000479f8 + 0x48568);
      *(undefined4 **)(this + 0x1984) = puVar9;
      *(undefined **)(this + 0x197c) = &UNK_00047a7a + iVar3;
      *(undefined4 *)(this + 0x1980) = 3;
      *(int *)(this + 0x1988) = iVar3 + 0x47a86;
      *(undefined4 *)(this + 0x1978) = 0x2b11;
      goto LAB_000473b0;
    }
    if (param_1 == 16000) {
      iVar6 = 0x3000;
      puVar9 = (undefined4 *)(DAT_00047984 + 0x48102);
      *(undefined4 **)(this + 0x1984) = puVar9;
      *(int *)(this + 0x197c) = iVar10 + 0x4752e;
      *(undefined4 *)(this + 0x1980) = 4;
      *(int *)(this + 0x1988) = iVar10 + 0x4753e;
      *(undefined4 *)(this + 0x1978) = 16000;
      goto LAB_000473b0;
    }
  }
  else {
    if (param_1 == 32000) {
      iVar6 = 0x1800;
      puVar9 = (undefined4 *)(DAT_000479e8 + 0x487f2);
      *(undefined4 **)(this + 0x1984) = puVar9;
      *(int *)(this + 0x197c) = iVar8 + 0x47a8c;
      *(undefined4 *)(this + 0x1980) = 7;
      *(int *)(this + 0x1988) = iVar8 + 0x47aa8;
      *(undefined4 *)(this + 0x1978) = 32000;
      goto LAB_000473b0;
    }
    if (param_1 == 0xac44) {
      iVar6 = 0x116a;
      puVar9 = (undefined4 *)(DAT_00047a00 + 0x478a6);
      iVar10 = DAT_00047a00 + 0x47b5a;
      *(undefined4 **)(this + 0x1984) = puVar9;
      *(int *)(this + 0x197c) = iVar10;
      *(int *)(this + 0x1988) = iVar4 + 0x47b7e;
      *(undefined4 *)(this + 0x1980) = 9;
      *(undefined4 *)(this + 0x1978) = 0xac44;
      goto LAB_000473b0;
    }
    if (param_1 == 24000) {
      iVar6 = 0x2000;
      puVar9 = (undefined4 *)(DAT_000479f0 + 0x4872a);
      *(undefined4 **)(this + 0x1984) = puVar9;
      *(int *)(this + 0x197c) = iVar2 + 0x47a9c;
      *(undefined4 *)(this + 0x1980) = 6;
      *(int *)(this + 0x1988) = iVar2 + 0x47ab4;
      *(undefined4 *)(this + 0x1978) = 24000;
      goto LAB_000473b0;
    }
  }
  puVar9 = (undefined4 *)(DAT_00047980 + 0x473ba);
  iVar10 = DAT_00047980 + 0x475a2;
  *(undefined4 **)(this + 0x1984) = puVar9;
  *(int *)(this + 0x197c) = iVar10;
  *(int *)(this + 0x1988) = iVar6 + 0x475ca;
  *(undefined4 *)(this + 0x1980) = 10;
  *(uint *)(this + 0x1978) = param_1;
  iVar6 = __udivsi3(0xbb80000,param_1);
LAB_000473b0:
  *(undefined4 *)(this + 0x18f0) = 0x10000;
  *(undefined4 *)(this + 0x1964) = 0x7fff;
  *(undefined4 *)(this + 0x18f4) = 0x10000;
  *(undefined4 *)(this + 0x18f8) = 0x10000;
  this[0x18c7] = (CCsmSynth)0x0;
  this[0x18c8] = (CCsmSynth)0x0;
  this[0x18c5] = (CCsmSynth)0x0;
  *(undefined4 *)(this + 0x18ec) = 0;
  this[0x18d9] = (CCsmSynth)0x0;
  this[0x18c4] = (CCsmSynth)0x0;
  *(undefined4 *)(this + 0x190c) = 0;
  *(undefined4 *)(this + 0x18fc) = 0;
  *(undefined4 *)(this + 0x1900) = 0;
  *(undefined4 *)(this + 0x1904) = 0;
  *(undefined4 *)(this + 0x18d4) = 0;
  *(undefined4 *)(this + 0x18dc) = 0;
  *(undefined4 *)(this + 0x18e0) = 0;
  *(undefined4 *)(this + 0x1908) = 0;
  *(undefined4 *)(this + 0x1968) = 0;
  *(undefined4 *)(this + 0x196c) = 0;
  memset(local_a8,0,0x80);
  local_a8[0] = DAT_00047990 + 0x4742e;
  local_a8[2] = DAT_0004798c + 0x47330;
  local_a8[1] = DAT_00047990 + 0x47c2e;
  local_9c = CDinSynth::SetVelocity + DAT_0004798c;
  local_98 = DAT_0004798c + 0x48330;
  local_94 = DAT_00047994 + 0x47a58;
  local_90 = DAT_00047994 + 0x48258;
  local_8c = DAT_00047998 + 0x47962;
  local_88 = DAT_00047998 + 0x48162;
  local_84 = DAT_0004799c + 0x47870;
  local_7c = DAT_000479a0 + 0x477b4;
  local_74 = DAT_000479a4 + 0x476c6;
  local_70 = DAT_000479a4 + 0x47ec6;
  local_80 = DAT_0004799c + 0x48070;
  local_78 = DAT_000479a0 + 0x47fb4;
  local_68 = DAT_000479a8 + 0x475d4;
  local_64 = DAT_000479a8 + 0x47dd4;
  local_60 = DAT_000479b0 + 0x47512;
  local_5c = DAT_000479b0 + 0x47d12;
  local_58 = DAT_000479b4 + 0x47424;
  local_54 = DAT_000479b4 + 0x47c24;
  local_50 = DAT_000479b4 + 0x48424;
  local_48 = DAT_000479ac + 0x47b1a;
  local_44 = DAT_000479ac + 0x4831a;
  local_3c = DAT_000479b8 + 0x48276;
  local_6c = this;
  local_40 = DAT_000479b8 + 0x47a76;
  local_30 = DAT_000479c0 + 0x4788e;
  local_38 = (int)&DAT_00047980 + DAT_000479bc;
  local_34 = DAT_000479bc + 0x48180;
  local_4c = this + 0x800;
  local_2c = this + 0x1000;
  this[0x18da] = this[0x18c9];
  CVar1 = this[0x18ca];
  this[0x18e4] = CVar1;
  if (CVar1 == (CCsmSynth)0x0) {
    uVar7 = puVar9[0x2c];
  }
  else {
    uVar7 = *puVar9;
  }
  *(undefined4 *)(this + 0x18e8) = uVar7;
  *(uint *)(this + 0x1904) = param_1;
  iVar8 = *(int *)(DAT_000479c4 + 0x4758a);
  *(int *)(this + 0x1848) = (*(int *)(this + 0x1824) << (sbyte)this[0x181c]) * iVar6;
  iVar10 = *(int *)(iVar8 + ((byte)this[0x1814] & 0x7f) * 4);
  *(int *)(this + 0x1850) = iVar10;
  if (this[0x180c] == (CCsmSynth)0x1) {
    *(int *)(this + 0x1850) = -iVar10;
  }
  iVar10 = DAT_000479c8 + 0x475b0;
  if (CVar1 == (CCsmSynth)0x0) {
    iVar10 = local_a8[(byte)this[0x1804] & 0x1f];
  }
  *(int *)(this + 0x1844) = iVar10;
  *(int *)(this + 0x1858) = (*(int *)(this + 0x1828) << (sbyte)this[0x181d]) * iVar6;
  iVar10 = *(int *)(iVar8 + ((byte)this[0x1815] & 0x7f) * 4);
  *(int *)(this + 0x1860) = iVar10;
  if (this[0x180d] == (CCsmSynth)0x1) {
    *(int *)(this + 0x1860) = -iVar10;
  }
  iVar10 = DAT_000479cc + 0x475f4;
  if (CVar1 == (CCsmSynth)0x0) {
    iVar10 = local_a8[(byte)this[0x1805] & 0x1f];
  }
  *(int *)(this + 0x1854) = iVar10;
  *(int *)(this + 0x1868) = (*(int *)(this + 0x182c) << (sbyte)this[0x181e]) * iVar6;
  iVar10 = *(int *)(iVar8 + ((byte)this[0x1816] & 0x7f) * 4);
  *(int *)(this + 0x1870) = iVar10;
  if (this[0x180e] == (CCsmSynth)0x1) {
    *(int *)(this + 0x1870) = -iVar10;
  }
  iVar10 = DAT_000479d0 + 0x4763c;
  if (CVar1 == (CCsmSynth)0x0) {
    iVar10 = local_a8[(byte)this[0x1806] & 0x1f];
  }
  *(int *)(this + 0x1864) = iVar10;
  *(int *)(this + 0x1878) = (*(int *)(this + 0x1830) << (sbyte)this[0x181f]) * iVar6;
  iVar10 = *(int *)(iVar8 + ((byte)this[0x1817] & 0x7f) * 4);
  *(int *)(this + 0x1880) = iVar10;
  if (this[0x180f] == (CCsmSynth)0x1) {
    *(int *)(this + 0x1880) = -iVar10;
  }
  iVar10 = DAT_000479d4 + 0x47680;
  if (CVar1 == (CCsmSynth)0x0) {
    iVar10 = local_a8[(byte)this[0x1807] & 0x1f];
  }
  *(int *)(this + 0x1874) = iVar10;
  *(int *)(this + 0x1888) = (*(int *)(this + 0x1834) << (sbyte)this[0x1820]) * iVar6;
  iVar10 = *(int *)(iVar8 + ((byte)this[0x1818] & 0x7f) * 4);
  *(int *)(this + 0x1890) = iVar10;
  if (this[0x1810] == (CCsmSynth)0x1) {
    *(int *)(this + 0x1890) = -iVar10;
  }
  iVar10 = DAT_000479d8 + 0x476c8;
  if (CVar1 == (CCsmSynth)0x0) {
    iVar10 = local_a8[(byte)this[0x1808] & 0x1f];
  }
  *(int *)(this + 0x1884) = iVar10;
  *(int *)(this + 0x1898) = (*(int *)(this + 0x1838) << (sbyte)this[0x1821]) * iVar6;
  iVar10 = *(int *)(iVar8 + ((byte)this[0x1819] & 0x7f) * 4);
  *(int *)(this + 0x18a0) = iVar10;
  if (this[0x1811] == (CCsmSynth)0x1) {
    *(int *)(this + 0x18a0) = -iVar10;
  }
  iVar10 = DAT_000479dc + 0x4770c;
  if (CVar1 == (CCsmSynth)0x0) {
    iVar10 = local_a8[(byte)this[0x1809] & 0x1f];
  }
  *(int *)(this + 0x1894) = iVar10;
  *(int *)(this + 0x18a8) = (*(int *)(this + 0x183c) << (sbyte)this[0x1822]) * iVar6;
  iVar10 = *(int *)(iVar8 + ((byte)this[0x181a] & 0x7f) * 4);
  *(int *)(this + 0x18b0) = iVar10;
  if (this[0x1812] == (CCsmSynth)0x1) {
    *(int *)(this + 0x18b0) = -iVar10;
  }
  iVar10 = DAT_000479e0 + 0x47754;
  if (CVar1 == (CCsmSynth)0x0) {
    iVar10 = local_a8[(byte)this[0x180a] & 0x1f];
  }
  *(int *)(this + 0x18a4) = iVar10;
  *(int *)(this + 0x18b8) = (*(int *)(this + 0x1840) << (sbyte)this[0x1823]) * iVar6;
  iVar10 = *(int *)(iVar8 + ((byte)this[0x181b] & 0x7f) * 4);
  iVar6 = DAT_000479e4 + 0x4778c;
  *(int *)(this + 0x18c0) = iVar10;
  if (this[0x1813] == (CCsmSynth)0x1) {
    *(int *)(this + 0x18c0) = -iVar10;
  }
  if (CVar1 == (CCsmSynth)0x0) {
    iVar6 = local_a8[(byte)this[0x180b] & 0x1f];
  }
  *(int *)(this + 0x18b4) = iVar6;
  this_00 = operator_new(0xa4);
  CLpf::CLpf(this_00,param_1);
  *(CLpf **)(this + 0x1950) = this_00;
  this_01 = operator_new(0x1c);
  CVolIP::CVolIP(this_01,param_1);
  *(CVolIP **)(this + 0x1958) = this_01;
  this_02 = operator_new(0x28);
  CPanIP::CPanIP(this_02,param_1);
  *(CPanIP **)(this + 0x195c) = this_02;
  this_03 = operator_new(1);
  CWnoise::CWnoise(this_03,0,'\0');
  *(CWnoise **)(this + 0x1910) = this_03;
  *(undefined4 *)(this + 0x1934) = 0x1ff8;
  *(undefined4 *)(this + 0x1914) = 0;
  *(undefined4 *)(this + 0x1918) = 0;
  *(undefined4 *)(this + 0x191c) = 0;
  *(undefined4 *)(this + 0x1920) = 0;
  *(undefined4 *)(this + 0x1924) = 0;
  this[0x1928] = (CCsmSynth)0x0;
  this[0x192c] = (CCsmSynth)0x0;
  this[0x192d] = (CCsmSynth)0x0;
  this[0x192e] = (CCsmSynth)0x0;
  this[0x192f] = (CCsmSynth)0x0;
  this[0x1930] = (CCsmSynth)0x0;
  *(undefined4 *)(this + 0x1940) = 0;
  *(undefined4 *)(this + 0x1944) = 0;
  this[0x194a] = (CCsmSynth)0x0;
  this[0x194c] = (CCsmSynth)0x0;
  this[0x194d] = (CCsmSynth)0x0;
  this[0x194e] = (CCsmSynth)0x0;
  this[0x194f] = (CCsmSynth)0x0;
  this[0x18d8] = (CCsmSynth)0x0;
  *(undefined4 *)(this + 0x1938) = 0x1ff8;
  *(undefined4 *)(this + 0x193c) = 0x1ff8;
  this[0x1948] = (CCsmSynth)0x1f;
  this[0x1949] = (CCsmSynth)0x1f;
  this[0x194b] = (CCsmSynth)0x1f;
  return this;
}

