/* WTCONTROL_SetWTVoiceReg @ 0013b760 1456B */


/* ARM::WTCONTROL_SetWTVoiceReg(unsigned char, unsigned char, unsigned char, unsigned char) */

void ARM::WTCONTROL_SetWTVoiceReg(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  _tagWtVoiceInfo local_68;
  byte local_67;
  byte local_66;
  byte local_65;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  byte local_54;
  byte local_53;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11;
  byte local_10 [8];
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 < 0x40) {
    pbVar3 = (byte *)VIRTUALREGISTER_GetWtInfoPointer(param_1);
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
        if (param_4 == '\0') {
          local_10[1] = 2;
          uVar2 = (uint)pbVar3[1] << 8 | (uint)*pbVar3 << 0xf | (uVar5 & 0x7f) << 1;
          local_10[2] = 1;
          local_10[3] = 1;
          local_10[0] = param_4;
          if (uVar2 < 0x14000) {
            pbVar3 = (byte *)VIRTUALMEMORY_GetMemoryPointer(uVar2);
            local_68 = (_tagWtVoiceInfo)(*pbVar3 >> 3);
            local_65 = *pbVar3 & 7;
            local_63 = pbVar3[1] >> 6;
            local_67 = pbVar3[1] >> 5 & 1;
            local_66 = pbVar3[1] >> 4 & 1;
            local_5f = pbVar3[1] >> 2 & 1;
            uVar2 = VIRTUALREGISTER_GetRegM('\0','\x02');
            if (((uVar2 >> 7 & 1) == 0) || (local_64 = 0, param_1 < 0x20)) {
              local_64 = pbVar3[1] >> 3 & 1;
            }
            local_62 = pbVar3[1] & 3;
            local_40 = pbVar3[2] >> 2 & 1;
            local_61 = pbVar3[2] >> 3 & 1;
            local_60 = pbVar3[2] >> 1 & 1;
            local_5e = pbVar3[2] & 1;
            local_5a = pbVar3[7] >> 1 & 1 | (byte)((int)(uint)pbVar3[2] >> 3) & 0x1e;
            local_59 = (byte)((int)(uint)pbVar3[3] >> 3) & 0x1e | pbVar3[7] & 1;
            local_5b = pbVar3[7] >> 2 & 1 | (pbVar3[3] & 0xf) << 1;
            local_5c = pbVar3[7] >> 3 & 1 | (byte)((int)(uint)pbVar3[4] >> 3) & 0x1e;
            local_58 = pbVar3[4] & 0xf;
            local_57 = pbVar3[5] >> 2;
            local_5d = pbVar3[5] & 3;
            local_54 = pbVar3[6] >> 5 & 3;
            local_53 = pbVar3[6] >> 4 & 1;
            local_56 = pbVar3[6] >> 1 & 3;
            local_50 = 0;
            local_48 = 0;
            local_55 = pbVar3[6] & 1;
            local_44 = 0;
            uVar2 = (uint)pbVar3[9] << 1 | (uint)pbVar3[8] << 9;
            if (uVar2 < 0x14000) {
              local_50 = VIRTUALMEMORY_GetMemoryPointer(uVar2);
              uVar5 = CONCAT11(pbVar3[10],pbVar3[0xb]) & 0x7fff;
              if (uVar2 + ((uVar5 << (ulong)(local_10[local_62] & 0x1f)) + 1 >> 1) < 0x14000) {
                uVar1 = CONCAT11(pbVar3[0xc],pbVar3[0xd]) & 0x7fff;
                local_48 = uVar5;
                if (uVar2 + ((uVar1 << (ulong)(local_10[local_62] & 0x1f)) + 1 >> 1) < 0x14000) {
                  local_30 = pbVar3[0xe] & 0x1f;
                  local_14 = pbVar3[0xf] >> 5;
                  local_13 = pbVar3[0xf] >> 4 & 1;
                  local_11 = pbVar3[0xf] >> 3 & 1;
                  local_12 = pbVar3[0xf] & 7;
                  local_2c = (pbVar3[0x10] & 0x1f) << 8 | (uint)pbVar3[0x11];
                  local_28 = (pbVar3[0x12] & 0x1f) << 8 | (uint)pbVar3[0x13];
                  local_24 = (pbVar3[0x14] & 0x1f) << 8 | (uint)pbVar3[0x15];
                  local_20 = (pbVar3[0x16] & 0x1f) << 8 | (uint)pbVar3[0x17];
                  local_1c = (pbVar3[0x18] & 0x1f) << 8 | (uint)pbVar3[0x19];
                  local_34 = pbVar3[0x1a] >> 7;
                  local_18 = pbVar3[0x1a] & 0x1f;
                  local_33 = pbVar3[0x1b] >> 7;
                  local_17 = pbVar3[0x1b] & 0x1f;
                  local_32 = pbVar3[0x1c] >> 7;
                  local_16 = pbVar3[0x1c] & 0x1f;
                  local_31 = pbVar3[0x1d] >> 7;
                  local_15 = pbVar3[0x1d] & 0x1f;
                  local_3f = pbVar3[0x1e] >> 7;
                  local_3d = pbVar3[0x1e] & 0x1f;
                  local_3e = pbVar3[0x1f] >> 7;
                  local_3c = pbVar3[0x1f] & 0x1f;
                  local_3b = pbVar3[0x20] & 0x1f;
                  local_3a = pbVar3[0x21] & 0x1f;
                  local_39 = pbVar3[0x22];
                  local_38 = pbVar3[0x23];
                  local_37 = pbVar3[0x24];
                  local_36 = pbVar3[0x25];
                  local_35 = pbVar3[0x26];
                  local_44 = uVar1;
                  CWtSynth::SetVoice(*(CWtSynth **)PTR_gpVwt_00567608,uVar4,&local_68);
                }
              }
            }
          }
        }
        break;
      case 4:
        pbVar3[3] = param_3 & 0x3f;
        break;
      case 5:
        pbVar3[4] = (byte)(uVar5 & 0x7f);
        CWtSynth::SetFcOffset
                  (*(CWtSynth **)PTR_gpVwt_00567608,uVar4,uVar5 & 0x7f | (pbVar3[3] & 0x3f) << 7);
        break;
      case 6:
        pbVar3[5] = (byte)(uVar5 & 0x7d);
        CWtSynth::SetVelocity(*(CWtSynth **)PTR_gpVwt_00567608,uVar4,(uVar5 & 0x7d) >> 2,uVar5 & 1);
        break;
      case 7:
        pbVar3[6] = param_3 & 0x3f;
        break;
      case 8:
        pbVar3[7] = (byte)(uVar2 & 0x7f);
        CWtSynth::SetBlockFnum
                  (*(CWtSynth **)PTR_gpVwt_00567608,uVar4,pbVar3[6] >> 3 & 7,
                   uVar2 & 0x7f | (pbVar3[6] & 7) << 7);
        break;
      case 9:
        pbVar3[8] = (byte)(uVar2 & 0x7f);
        CWtSynth::SetCh(*(CWtSynth **)PTR_gpVwt_00567608,uVar4,uVar2 & 0x3f,(uVar2 & 0x7f) >> 6);
        break;
      case 10:
        pbVar3[9] = param_3 & 0x7f;
        uVar2 = VIRTUALREGISTER_GetRegM('\0','\x02');
        if (((uVar2 >> 7 & 1) != 0) || (param_1 < 0x20)) {
          CWtSynth::KeyOn(*(CWtSynth **)PTR_gpVwt_00567608,uVar4,param_3 >> 6 & 1,param_3 >> 4 & 1,
                          param_3 >> 5 & 1);
        }
      }
    }
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

