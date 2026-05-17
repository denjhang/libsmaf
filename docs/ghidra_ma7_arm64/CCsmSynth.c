/* CCsmSynth @ 0014bcfc 1964B */


/* ARM::CCsmSynth::CCsmSynth(unsigned int, ARM::CCh*) */

void __thiscall ARM::CCsmSynth::CCsmSynth(CCsmSynth *this,uint param_1,CCh *param_2)

{
  int iVar1;
  CCsmSynth CVar2;
  CLpf *this_00;
  CVolIP *this_01;
  CPanIP *this_02;
  CWnoise *this_03;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined *local_108 [4];
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  CCsmSynth *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  CCsmSynth *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  CCsmSynth *local_10;
  long local_8;
  
  puVar3 = PTR___stack_chk_guard_00567868;
  *(CCh **)(this + 0x1800) = param_2;
  local_8 = *(long *)puVar3;
  *(undefined4 *)(this + 0x19d0) = 0;
  *(undefined4 *)(this + 0x19d4) = 0x8000;
  if (param_1 == 0x5622) {
    puVar6 = (undefined4 *)&DAT_00331370;
    *(undefined4 *)(this + 0x19e8) = 5;
    *(undefined **)(this + 0x19f0) = &DAT_00331370;
    uVar4 = 0x22d4;
    *(undefined **)(this + 0x19e0) = &DAT_00331ab0;
    *(undefined **)(this + 0x19f8) = &DAT_00331ad0;
    *(undefined4 *)(this + 0x19d8) = 0x5622;
    goto LAB_0014bdec;
  }
  if (param_1 < 0x5623) {
    if (param_1 == 0x2b11) {
      *(undefined4 *)(this + 0x19e8) = 3;
      puVar6 = (undefined4 *)&DAT_00331470;
      *(undefined **)(this + 0x19f0) = &DAT_00331470;
      *(undefined **)(this + 0x19e0) = &DAT_00331a70;
      uVar4 = 0x45a8;
      *(undefined **)(this + 0x19f8) = &DAT_00331a80;
      *(undefined4 *)(this + 0x19d8) = 0x2b11;
      goto LAB_0014bdec;
    }
    if (param_1 == 16000) {
      *(undefined4 *)(this + 0x19e8) = 4;
      puVar6 = (undefined4 *)&DAT_00331570;
      *(undefined **)(this + 0x19f0) = &DAT_00331570;
      *(undefined **)(this + 0x19e0) = &DAT_00331a90;
      uVar4 = 0x3000;
      *(undefined **)(this + 0x19f8) = &DAT_00331aa0;
      *(undefined4 *)(this + 0x19d8) = 16000;
      goto LAB_0014bdec;
    }
  }
  else {
    if (param_1 == 32000) {
      *(undefined4 *)(this + 0x19e8) = 7;
      puVar6 = (undefined4 *)&DAT_00331770;
      *(undefined **)(this + 0x19f0) = &DAT_00331770;
      *(undefined **)(this + 0x19e0) = &DAT_00331b10;
      uVar4 = 0x1800;
      *(undefined **)(this + 0x19f8) = &DAT_00331b30;
      *(undefined4 *)(this + 0x19d8) = 32000;
      goto LAB_0014bdec;
    }
    if (param_1 == 0xac44) {
      *(undefined4 *)(this + 0x19e8) = 9;
      puVar6 = (undefined4 *)&DAT_00331870;
      *(undefined **)(this + 0x19f0) = &DAT_00331870;
      *(undefined **)(this + 0x19e0) = &DAT_00331b40;
      uVar4 = 0x116a;
      *(undefined **)(this + 0x19f8) = &DAT_00331b70;
      *(undefined4 *)(this + 0x19d8) = 0xac44;
      goto LAB_0014bdec;
    }
    if (param_1 == 24000) {
      *(undefined4 *)(this + 0x19e8) = 6;
      puVar6 = (undefined4 *)&DAT_00331670;
      *(undefined **)(this + 0x19f0) = &DAT_00331670;
      *(undefined **)(this + 0x19e0) = &DAT_00331ae0;
      uVar4 = 0x2000;
      *(undefined **)(this + 0x19f8) = &DAT_00331b00;
      *(undefined4 *)(this + 0x19d8) = 24000;
      goto LAB_0014bdec;
    }
  }
  puVar6 = &DAT_00331970;
  *(undefined4 **)(this + 0x19f0) = &DAT_00331970;
  *(undefined **)(this + 0x19e0) = &DAT_00331b80;
  *(undefined4 *)(this + 0x19e8) = 10;
  *(undefined **)(this + 0x19f8) = &DAT_00331bb0;
  *(uint *)(this + 0x19d8) = param_1;
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = 0xbb80000 / param_1;
  }
LAB_0014bdec:
  *(undefined4 *)(this + 0x1934) = 0x10000;
  *(undefined4 *)(this + 0x1938) = 0x10000;
  *(undefined4 *)(this + 0x193c) = 0x10000;
  this[0x190b] = (CCsmSynth)0x0;
  this[0x190c] = (CCsmSynth)0x0;
  this[0x1909] = (CCsmSynth)0x0;
  *(undefined4 *)(this + 0x1930) = 0;
  this[0x191d] = (CCsmSynth)0x0;
  this[0x1908] = (CCsmSynth)0x0;
  *(undefined4 *)(this + 0x1950) = 0;
  *(undefined4 *)(this + 0x1940) = 0;
  *(undefined4 *)(this + 0x1944) = 0;
  *(undefined4 *)(this + 0x1948) = 0;
  *(undefined4 *)(this + 0x1918) = 0;
  *(undefined4 *)(this + 0x1920) = 0;
  *(undefined4 *)(this + 0x1924) = 0;
  *(undefined4 *)(this + 0x194c) = 0;
  *(undefined4 *)(this + 0x19c4) = 0x7fff;
  *(undefined4 *)(this + 0x19c8) = 0;
  *(undefined4 *)(this + 0x19cc) = 0;
  memset(local_108,0,0x100);
  local_90 = this;
  local_108[0] = &DAT_00321a60;
  local_108[1] = &DAT_00322260;
  local_b8 = &DAT_00326a60;
  local_108[3] = &DAT_00323260;
  local_b0 = &DAT_00327260;
  local_108[2] = &DAT_00322a60;
  local_e8 = &DAT_00323a60;
  local_e0 = &DAT_00324260;
  local_d8 = &DAT_00324a60;
  local_d0 = &DAT_00325260;
  local_c8 = &DAT_00325a60;
  local_c0 = &DAT_00326260;
  local_a8 = &DAT_00327a60;
  local_a0 = &DAT_00328260;
  local_98 = &DAT_00328a60;
  local_78 = &DAT_0032a260;
  local_88 = &DAT_00329260;
  local_80 = &DAT_00329a60;
  local_70 = &DAT_0032aa60;
  local_68 = &DAT_0032b260;
  local_60 = &DAT_0032ba60;
  local_58 = &DAT_0032c260;
  local_48 = &DAT_0032ca60;
  local_40 = &DAT_0032d260;
  local_38 = &DAT_0032da60;
  local_30 = &DAT_0032e260;
  local_28 = &DAT_0032ea60;
  local_20 = &DAT_0032f260;
  local_18 = &DAT_0032fa60;
  local_50 = this + 0x800;
  local_10 = this + 0x1000;
  this[0x191e] = this[0x190d];
  CVar2 = this[0x190e];
  this[0x1928] = CVar2;
  if (CVar2 == (CCsmSynth)0x0) {
    uVar5 = puVar6[0x2c];
  }
  else {
    uVar5 = *puVar6;
  }
  *(undefined4 *)(this + 0x192c) = uVar5;
  *(uint *)(this + 0x1948) = param_1;
  *(uint *)(this + 0x1850) = uVar4 * (*(int *)(this + 0x1828) << (ulong)((byte)this[0x1820] & 0x1f))
  ;
  iVar1 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)this[0x1818] & 0x7f) * 4);
  *(int *)(this + 0x1858) = iVar1;
  if (this[0x1810] == (CCsmSynth)0x1) {
    *(int *)(this + 0x1858) = -iVar1;
  }
  puVar3 = &DAT_00321a60;
  if (CVar2 == (CCsmSynth)0x0) {
    puVar3 = local_108[(int)((byte)this[0x1808] & 0x1f)];
  }
  *(undefined **)(this + 0x1848) = puVar3;
  *(uint *)(this + 0x1868) = uVar4 * (*(int *)(this + 0x182c) << (ulong)((byte)this[0x1821] & 0x1f))
  ;
  iVar1 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)this[0x1819] & 0x7f) * 4);
  *(int *)(this + 0x1870) = iVar1;
  if (this[0x1811] == (CCsmSynth)0x1) {
    *(int *)(this + 0x1870) = -iVar1;
  }
  puVar3 = &DAT_00321a60;
  if (CVar2 == (CCsmSynth)0x0) {
    puVar3 = local_108[(int)((byte)this[0x1809] & 0x1f)];
  }
  *(undefined **)(this + 0x1860) = puVar3;
  *(uint *)(this + 0x1880) = uVar4 * (*(int *)(this + 0x1830) << (ulong)((byte)this[0x1822] & 0x1f))
  ;
  iVar1 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)this[0x181a] & 0x7f) * 4);
  *(int *)(this + 0x1888) = iVar1;
  if (this[0x1812] == (CCsmSynth)0x1) {
    *(int *)(this + 0x1888) = -iVar1;
  }
  puVar3 = &DAT_00321a60;
  if (CVar2 == (CCsmSynth)0x0) {
    puVar3 = local_108[(int)((byte)this[0x180a] & 0x1f)];
  }
  *(undefined **)(this + 0x1878) = puVar3;
  *(uint *)(this + 0x1898) = uVar4 * (*(int *)(this + 0x1834) << (ulong)((byte)this[0x1823] & 0x1f))
  ;
  iVar1 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)this[0x181b] & 0x7f) * 4);
  *(int *)(this + 0x18a0) = iVar1;
  if (this[0x1813] == (CCsmSynth)0x1) {
    *(int *)(this + 0x18a0) = -iVar1;
  }
  puVar3 = &DAT_00321a60;
  if (CVar2 == (CCsmSynth)0x0) {
    puVar3 = local_108[(int)((byte)this[0x180b] & 0x1f)];
  }
  *(undefined **)(this + 0x1890) = puVar3;
  *(uint *)(this + 0x18b0) = uVar4 * (*(int *)(this + 0x1838) << (ulong)((byte)this[0x1824] & 0x1f))
  ;
  iVar1 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)this[0x181c] & 0x7f) * 4);
  *(int *)(this + 0x18b8) = iVar1;
  if (this[0x1814] == (CCsmSynth)0x1) {
    *(int *)(this + 0x18b8) = -iVar1;
  }
  puVar3 = &DAT_00321a60;
  if (CVar2 == (CCsmSynth)0x0) {
    puVar3 = local_108[(int)((byte)this[0x180c] & 0x1f)];
  }
  *(undefined **)(this + 0x18a8) = puVar3;
  *(uint *)(this + 0x18c8) = uVar4 * (*(int *)(this + 0x183c) << (ulong)((byte)this[0x1825] & 0x1f))
  ;
  iVar1 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)this[0x181d] & 0x7f) * 4);
  *(int *)(this + 0x18d0) = iVar1;
  if (this[0x1815] == (CCsmSynth)0x1) {
    *(int *)(this + 0x18d0) = -iVar1;
  }
  puVar3 = &DAT_00321a60;
  if (CVar2 == (CCsmSynth)0x0) {
    puVar3 = local_108[(int)((byte)this[0x180d] & 0x1f)];
  }
  *(undefined **)(this + 0x18c0) = puVar3;
  *(uint *)(this + 0x18e0) = uVar4 * (*(int *)(this + 0x1840) << (ulong)((byte)this[0x1826] & 0x1f))
  ;
  iVar1 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)this[0x181e] & 0x7f) * 4);
  *(int *)(this + 0x18e8) = iVar1;
  if (this[0x1816] == (CCsmSynth)0x1) {
    *(int *)(this + 0x18e8) = -iVar1;
  }
  puVar3 = &DAT_00321a60;
  if (CVar2 == (CCsmSynth)0x0) {
    puVar3 = local_108[(int)((byte)this[0x180e] & 0x1f)];
  }
  *(undefined **)(this + 0x18d8) = puVar3;
  *(uint *)(this + 0x18f8) = uVar4 * (*(int *)(this + 0x1844) << (ulong)((byte)this[0x1827] & 0x1f))
  ;
  iVar1 = *(int *)(PTR_sdHmtVol_00567428 + (long)(int)((byte)this[0x181f] & 0x7f) * 4);
  *(int *)(this + 0x1900) = iVar1;
  if (this[0x1817] == (CCsmSynth)0x1) {
    *(int *)(this + 0x1900) = -iVar1;
  }
  puVar3 = &DAT_00321a60;
  if (CVar2 == (CCsmSynth)0x0) {
    puVar3 = local_108[(int)((byte)this[0x180f] & 0x1f)];
  }
  *(undefined **)(this + 0x18f0) = puVar3;
  this_00 = operator_new(200);
  CLpf::CLpf(this_00,param_1);
  *(CLpf **)(this + 0x19a0) = this_00;
  this_01 = operator_new(0x1c);
  CVolIP::CVolIP(this_01,param_1);
  *(CVolIP **)(this + 0x19b0) = this_01;
  this_02 = operator_new(0x28);
  CPanIP::CPanIP(this_02,param_1);
  *(CPanIP **)(this + 0x19b8) = this_02;
  this_03 = operator_new(1);
  CWnoise::CWnoise(this_03,0,'\0');
  *(CWnoise **)(this + 0x1958) = this_03;
  *(undefined4 *)(this + 0x1960) = 0;
  *(undefined4 *)(this + 0x1964) = 0;
  *(undefined4 *)(this + 0x1968) = 0;
  *(undefined4 *)(this + 0x196c) = 0;
  *(undefined4 *)(this + 0x1970) = 0;
  this[0x1974] = (CCsmSynth)0x0;
  this[0x1978] = (CCsmSynth)0x0;
  this[0x1979] = (CCsmSynth)0x0;
  this[0x197a] = (CCsmSynth)0x0;
  this[0x197b] = (CCsmSynth)0x0;
  this[0x197c] = (CCsmSynth)0x0;
  *(undefined4 *)(this + 0x1980) = 0x1ff8;
  *(undefined4 *)(this + 0x1984) = 0x1ff8;
  *(undefined4 *)(this + 0x1988) = 0x1ff8;
  *(undefined4 *)(this + 0x198c) = 0;
  *(undefined4 *)(this + 0x1990) = 0;
  this[0x1994] = (CCsmSynth)0x1f;
  this[0x1995] = (CCsmSynth)0x1f;
  this[0x1996] = (CCsmSynth)0x0;
  this[0x1997] = (CCsmSynth)0x1f;
  this[0x1998] = (CCsmSynth)0x0;
  this[0x1999] = (CCsmSynth)0x0;
  this[0x199a] = (CCsmSynth)0x0;
  this[0x199b] = (CCsmSynth)0x0;
  this[0x191c] = (CCsmSynth)0x0;
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

