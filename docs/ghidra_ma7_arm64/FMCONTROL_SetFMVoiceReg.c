/* FMCONTROL_SetFMVoiceReg @ 001465a8 1724B */


/* ARM::FMCONTROL_SetFMVoiceReg(unsigned char, unsigned char, unsigned char, unsigned char) */

void ARM::FMCONTROL_SetFMVoiceReg(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  _tagFmVoiceInfo local_98;
  byte local_97;
  byte local_96;
  byte local_95;
  byte local_94;
  byte local_93;
  byte local_92;
  byte local_90;
  byte local_8f;
  byte local_8e;
  byte local_8d;
  byte local_8c;
  byte local_8b;
  byte local_8a;
  byte local_89;
  byte local_88;
  byte local_87;
  byte local_86;
  byte local_85;
  byte local_84;
  byte local_83;
  byte local_82;
  byte local_81;
  byte local_80;
  byte local_7f;
  byte local_7e;
  byte local_7d;
  uint local_7c;
  byte local_78;
  byte local_77;
  byte local_76;
  byte local_75;
  byte local_74;
  byte local_73;
  byte local_72;
  byte local_71;
  byte local_70;
  byte local_6f;
  byte local_6e;
  byte local_6d;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  byte local_68;
  byte local_67;
  byte local_66;
  byte local_65;
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 < 0x40) {
    pbVar3 = (byte *)VIRTUALREGISTER_GetFmInfoPointer(param_1);
    if (param_2 - 1 < 10) {
      uVar4 = (uint)param_1;
      uVar2 = (uint)param_3;
      uVar5 = (uint)param_3;
      switch((uint)param_2) {
      case 1:
        *pbVar3 = param_3 & 3;
        break;
      case 2:
        pbVar3[1] = param_3 & 0x7f;
        break;
      case 3:
        pbVar3[2] = (byte)(uVar5 & 0x7f);
        if ((param_4 == '\0') &&
           (uVar2 = (uint)pbVar3[1] << 8 | (uint)*pbVar3 << 0xf | (uVar5 & 0x7f) << 1,
           uVar2 < 0x14000)) {
          pbVar3 = (byte *)VIRTUALMEMORY_GetMemoryPointer(uVar2);
          local_98 = (_tagFmVoiceInfo)(*pbVar3 >> 3);
          local_95 = *pbVar3 & 3;
          local_94 = pbVar3[1] >> 6;
          local_97 = pbVar3[1] >> 5 & 1;
          local_96 = pbVar3[1] >> 4 & 1;
          uVar2 = VIRTUALREGISTER_GetRegM('\0','\x02');
          if (((uVar2 >> 7 & 1) == 0) || (local_92 = 0, param_1 < 0x20)) {
            local_92 = pbVar3[1] >> 3 & 1;
          }
          local_93 = pbVar3[1] & 7;
          if (pbVar3 != (byte *)0xfffffffffffffffe) {
            local_90 = pbVar3[2] >> 3 & 1;
            local_8f = pbVar3[2] >> 2 & 1;
            local_8e = pbVar3[2] >> 1 & 1;
            local_8d = pbVar3[2] & 1;
            local_8a = 0;
            if (pbVar3[2] >> 4 != 0) {
              local_8a = pbVar3[7] >> 1 & 1 | (byte)((int)(uint)pbVar3[2] >> 3) & 0x1e;
            }
            local_89 = 0;
            if (pbVar3[3] >> 4 != 0) {
              local_89 = (byte)((int)(uint)pbVar3[3] >> 3) & 0x1e | pbVar3[7] & 1;
            }
            bVar1 = pbVar3[3];
            local_8b = bVar1 & 0xf;
            if ((bVar1 & 0xf) != 0) {
              local_8b = pbVar3[7] >> 2 & 1 | (bVar1 & 0xf) << 1;
            }
            local_8c = 0;
            if (pbVar3[4] >> 4 != 0) {
              local_8c = pbVar3[7] >> 3 & 1 | (byte)((int)(uint)pbVar3[4] >> 3) & 0x1e;
            }
            local_88 = pbVar3[4] & 0xf;
            local_87 = pbVar3[5] >> 2;
            local_86 = pbVar3[5] & 3;
            local_85 = pbVar3[6] >> 5 & 3;
            local_84 = pbVar3[6] >> 4 & 1;
            local_83 = pbVar3[6] >> 1 & 3;
            local_82 = pbVar3[6] & 1;
            local_7f = pbVar3[8] >> 3;
            local_7e = pbVar3[8] & 7;
            local_7d = pbVar3[9] >> 2 & 7;
            local_7c = (pbVar3[9] & 3) << 8 | (uint)pbVar3[10];
            local_81 = pbVar3[0xb] >> 4;
            local_80 = pbVar3[0xb] & 0xf;
          }
          pbVar6 = pbVar3 + 0xc;
          local_78 = pbVar3[0xc] >> 3 & 1;
          local_77 = pbVar3[0xc] >> 2 & 1;
          local_76 = pbVar3[0xc] >> 1 & 1;
          local_75 = pbVar3[0xc] & 1;
          local_72 = 0;
          if (pbVar3[0xc] >> 4 != 0) {
            local_72 = pbVar3[0x11] >> 1 & 1 | (byte)((int)(uint)pbVar3[0xc] >> 3) & 0x1e;
          }
          local_71 = 0;
          if (pbVar3[0xd] >> 4 != 0) {
            local_71 = (byte)((int)(uint)pbVar3[0xd] >> 3) & 0x1e | pbVar3[0x11] & 1;
          }
          bVar1 = pbVar3[0xd];
          local_73 = bVar1 & 0xf;
          if ((bVar1 & 0xf) != 0) {
            local_73 = pbVar3[0x11] >> 2 & 1 | (bVar1 & 0xf) << 1;
          }
          local_74 = 0;
          if (pbVar3[0xe] >> 4 != 0) {
            local_74 = pbVar3[0x11] >> 3 & 1 | (byte)((int)(uint)pbVar3[0xe] >> 3) & 0x1e;
          }
          local_70 = pbVar3[0xe] & 0xf;
          local_6f = pbVar3[0xf] >> 2;
          local_6e = pbVar3[0xf] & 3;
          local_6d = pbVar3[0x10] >> 5 & 3;
          local_6c = pbVar3[0x10] >> 4 & 1;
          local_6b = pbVar3[0x10] >> 1 & 3;
          local_6a = pbVar3[0x10] & 1;
          local_67 = pbVar3[0x12] >> 3;
          local_66 = pbVar3[0x12] & 7;
          local_65 = pbVar3[0x13] >> 2 & 7;
          local_64 = (pbVar3[0x13] & 3) << 8 | (uint)pbVar3[0x14];
          local_69 = pbVar3[0x15] >> 4;
          local_68 = pbVar3[0x15] & 0xf;
          if (local_93 < 2) {
            local_38 = 0;
            local_48 = 0;
            uStack_40 = 0;
            local_60 = 0;
            uStack_58 = 0;
            local_50 = 0;
          }
          else {
            pbVar6 = pbVar3 + 0x20;
            FUN_0014631c(&local_60,pbVar3 + 0x16);
            FUN_0014631c(&local_48,pbVar6);
          }
          local_66 = 0;
          local_38._0_3_ = (uint3)(ushort)local_38;
          if (pbVar6 != (byte *)0xfffffffffffffff6) {
            local_2c = pbVar6[10] & 0x1f;
            local_10 = pbVar6[0xb] >> 5;
            local_f = pbVar6[0xb] >> 4 & 1;
            local_d = pbVar6[0xb] >> 3 & 1;
            local_e = pbVar6[0xb] & 7;
            local_28 = (pbVar6[0xc] & 0x1f) << 8 | (uint)pbVar6[0xd];
            local_24 = (pbVar6[0xe] & 0x1f) << 8 | (uint)pbVar6[0xf];
            local_20 = (pbVar6[0x10] & 0x1f) << 8 | (uint)pbVar6[0x11];
            local_1c = (pbVar6[0x12] & 0x1f) << 8 | (uint)pbVar6[0x13];
            local_18 = (pbVar6[0x14] & 0x1f) << 8 | (uint)pbVar6[0x15];
            local_30 = pbVar6[0x16] >> 7;
            local_14 = pbVar6[0x16] & 0x1f;
            local_2f = pbVar6[0x17] >> 7;
            local_13 = pbVar6[0x17] & 0x1f;
            local_2e = pbVar6[0x18] >> 7;
            local_12 = pbVar6[0x18] & 0x1f;
            local_2d = pbVar6[0x19] >> 7;
            local_11 = pbVar6[0x19] & 0x1f;
          }
          CFmSynth::SetVoice(*(CFmSynth **)PTR_gpVfm_00567348,uVar4,&local_98);
        }
        break;
      case 4:
        pbVar3[3] = param_3 & 0x3f;
        break;
      case 5:
        pbVar3[4] = (byte)(uVar5 & 0x7f);
        CFmSynth::SetFcOffset
                  (*(CFmSynth **)PTR_gpVfm_00567348,uVar4,uVar5 & 0x7f | (pbVar3[3] & 0x3f) << 7);
        break;
      case 6:
        pbVar3[5] = (byte)(uVar5 & 0x7d);
        CFmSynth::SetVelocity(*(CFmSynth **)PTR_gpVfm_00567348,uVar4,(uVar5 & 0x7d) >> 2,uVar5 & 1);
        break;
      case 7:
        pbVar3[6] = param_3 & 0x3f;
        break;
      case 8:
        pbVar3[7] = (byte)(uVar2 & 0x7f);
        CFmSynth::SetBlockFnum
                  (*(CFmSynth **)PTR_gpVfm_00567348,uVar4,pbVar3[6] >> 3 & 7,
                   uVar2 & 0x7f | (pbVar3[6] & 7) << 7);
        break;
      case 9:
        pbVar3[8] = (byte)(uVar2 & 0x7f);
        CFmSynth::SetCh(*(CFmSynth **)PTR_gpVfm_00567348,uVar4,uVar2 & 0x3f,(uVar2 & 0x7f) >> 6);
        break;
      case 10:
        uVar2 = VIRTUALREGISTER_GetRegM('\0','\x02');
        if (((uVar2 >> 7 & 1) != 0) || (param_1 < 0x20)) {
          CFmSynth::KeyOn(*(CFmSynth **)PTR_gpVfm_00567348,uVar4,param_3 >> 6 & 1,param_3 >> 4 & 1,
                          param_3 >> 5 & 1);
        }
        pbVar3[9] = param_3 & 0x7f;
      }
    }
  }
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

