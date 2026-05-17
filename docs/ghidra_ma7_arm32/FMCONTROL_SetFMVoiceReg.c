/* FMCONTROL_SetFMVoiceReg @ 00041e58 1456B */


/* ARM::FMCONTROL_SetFMVoiceReg(unsigned char, unsigned char, unsigned char, unsigned char) */

void ARM::FMCONTROL_SetFMVoiceReg(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  _tagFmVoiceInfo local_b0;
  byte local_af;
  byte local_ae;
  byte local_ad;
  byte local_ac;
  byte local_ab;
  byte local_aa;
  byte local_a8;
  byte local_a7;
  byte local_a6;
  byte local_a5;
  byte local_a4;
  byte local_a3;
  byte local_a2;
  byte local_a1;
  byte local_a0;
  byte local_9f;
  byte local_9e;
  byte local_9d;
  byte local_9c;
  byte local_9b;
  byte local_9a;
  byte local_99;
  byte local_98;
  byte local_97;
  byte local_96;
  byte local_95;
  uint local_94;
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
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [18];
  undefined1 local_4e;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  
  uVar5 = (uint)param_3;
  uVar2 = (uint)param_1;
  iVar6 = DAT_0004241c + 0x41e6c;
  if (uVar2 < 0x40) {
    pbVar3 = (byte *)VIRTUALREGISTER_GetFmInfoPointer(param_1);
    iVar4 = DAT_00042420;
    switch(param_2) {
    case '\x01':
      *pbVar3 = param_3 & 3;
      break;
    case '\x02':
      pbVar3[1] = param_3 & 0x7f;
      break;
    case '\x03':
      pbVar3[2] = (byte)(uVar5 & 0x7f);
      if ((param_4 == '\0') &&
         (uVar5 = (uint)pbVar3[1] << 8 | (uint)*pbVar3 << 0xf | (uVar5 & 0x7f) << 1, uVar5 < 0x14000
         )) {
        pbVar3 = (byte *)VIRTUALMEMORY_GetMemoryPointer(uVar5);
        local_b0 = (_tagFmVoiceInfo)(*pbVar3 >> 3);
        local_ad = *pbVar3 & 3;
        local_ac = pbVar3[1] >> 6;
        local_af = (byte)(((uint)pbVar3[1] << 0x1a) >> 0x1f);
        local_ae = (byte)(((uint)pbVar3[1] << 0x1b) >> 0x1f);
        uVar5 = VIRTUALREGISTER_GetRegM('\0','\x02');
        if (((uVar5 & 0x7fff) >> 7 == 1) && (0x1f < uVar2)) {
          local_aa = 0;
        }
        else {
          local_aa = (byte)(((uint)pbVar3[1] << 0x1c) >> 0x1f);
        }
        local_ab = pbVar3[1] & 7;
        if (pbVar3 != (byte *)0xfffffffe) {
          local_a8 = (byte)(((uint)pbVar3[2] << 0x1c) >> 0x1f);
          local_a7 = (byte)(((uint)pbVar3[2] << 0x1d) >> 0x1f);
          local_a6 = (byte)(((uint)pbVar3[2] << 0x1e) >> 0x1f);
          local_a5 = pbVar3[2] & 1;
          if (pbVar3[2] >> 4 == 0) {
            local_a2 = 0;
          }
          else {
            local_a2 = (byte)((pbVar3[7] & 3) >> 1) | (byte)((int)(uint)pbVar3[2] >> 3) & 0x1e;
          }
          if (pbVar3[3] >> 4 == 0) {
            local_a1 = 0;
          }
          else {
            local_a1 = pbVar3[7] & 1 | (byte)((int)(uint)pbVar3[3] >> 3) & 0x1e;
          }
          bVar1 = pbVar3[3];
          local_a3 = bVar1 & 0xf;
          if ((bVar1 & 0xf) != 0) {
            local_a3 = (bVar1 & 0xf) << 1 | (byte)((pbVar3[7] & 7) >> 2);
          }
          if (pbVar3[4] >> 4 == 0) {
            local_a4 = 0;
          }
          else {
            local_a4 = (byte)((pbVar3[7] & 0xf) >> 3) | (byte)((int)(uint)pbVar3[4] >> 3) & 0x1e;
          }
          local_a0 = pbVar3[4] & 0xf;
          local_9f = pbVar3[5] >> 2;
          local_9e = pbVar3[5] & 3;
          local_9d = (byte)(((uint)pbVar3[6] << 0x19) >> 0x1e);
          local_9c = (byte)(((uint)pbVar3[6] << 0x1b) >> 0x1f);
          local_9b = (byte)(((uint)pbVar3[6] << 0x1d) >> 0x1e);
          local_9a = pbVar3[6] & 1;
          local_97 = pbVar3[8] >> 3;
          local_96 = pbVar3[8] & 7;
          local_95 = (byte)(((uint)pbVar3[9] << 0x1b) >> 0x1d);
          local_94 = (pbVar3[9] & 3) << 8 | (uint)pbVar3[10];
          local_99 = pbVar3[0xb] >> 4;
          local_98 = pbVar3[0xb] & 0xf;
        }
        local_90 = (byte)(((uint)pbVar3[0xc] << 0x1c) >> 0x1f);
        local_8f = (byte)(((uint)pbVar3[0xc] << 0x1d) >> 0x1f);
        local_8e = (byte)(((uint)pbVar3[0xc] << 0x1e) >> 0x1f);
        local_8d = pbVar3[0xc] & 1;
        if (pbVar3[0xc] >> 4 == 0) {
          local_8a = 0;
        }
        else {
          local_8a = (byte)((pbVar3[0x11] & 3) >> 1) | (byte)((int)(uint)pbVar3[0xc] >> 3) & 0x1e;
        }
        if (pbVar3[0xd] >> 4 == 0) {
          local_89 = 0;
        }
        else {
          local_89 = (byte)((int)(uint)pbVar3[0xd] >> 3) & 0x1e | pbVar3[0x11] & 1;
        }
        bVar1 = pbVar3[0xd];
        local_8b = bVar1 & 0xf;
        if ((bVar1 & 0xf) != 0) {
          local_8b = (bVar1 & 0xf) << 1 | (byte)((pbVar3[0x11] & 7) >> 2);
        }
        if (pbVar3[0xe] >> 4 == 0) {
          local_8c = 0;
        }
        else {
          local_8c = (byte)((int)(uint)pbVar3[0xe] >> 3) & 0x1e | (byte)((pbVar3[0x11] & 0xf) >> 3);
        }
        local_88 = pbVar3[0xe] & 0xf;
        local_87 = pbVar3[0xf] >> 2;
        local_86 = pbVar3[0xf] & 3;
        local_85 = (byte)(((uint)pbVar3[0x10] << 0x19) >> 0x1e);
        local_84 = (byte)(((uint)pbVar3[0x10] << 0x1b) >> 0x1f);
        local_83 = (byte)(((uint)pbVar3[0x10] << 0x1d) >> 0x1e);
        local_82 = pbVar3[0x10] & 1;
        local_7f = pbVar3[0x12] >> 3;
        local_7e = pbVar3[0x12] & 7;
        local_7d = (byte)(((uint)pbVar3[0x13] << 0x1b) >> 0x1d);
        local_7c = (pbVar3[0x13] & 3) << 8 | (uint)pbVar3[0x14];
        local_81 = pbVar3[0x15] >> 4;
        local_80 = pbVar3[0x15] & 0xf;
        if ((pbVar3[1] & 7) < 2) {
          memset(auStack_78,0,0x18);
          pbVar7 = pbVar3 + 0xc;
          memset(auStack_60,0,0x18);
        }
        else {
          pbVar7 = pbVar3 + 0x20;
          FUN_00041ca8(auStack_78,pbVar3 + 0x16);
          FUN_00041ca8(auStack_60,pbVar7);
        }
        local_7e = 0;
        local_4e = 0;
        if (pbVar7 != (byte *)0xfffffff6) {
          local_44 = pbVar7[10] & 0x1f;
          local_28 = pbVar7[0xb] >> 5;
          local_27 = (byte)(((uint)pbVar7[0xb] << 0x1b) >> 0x1f);
          local_25 = (byte)(((uint)pbVar7[0xb] << 0x1c) >> 0x1f);
          local_26 = pbVar7[0xb] & 7;
          local_40 = (uint)pbVar7[0xd] | (pbVar7[0xc] & 0x1f) << 8;
          local_3c = (uint)pbVar7[0xf] | (pbVar7[0xe] & 0x1f) << 8;
          local_38 = (uint)pbVar7[0x11] | (pbVar7[0x10] & 0x1f) << 8;
          local_34 = (uint)pbVar7[0x13] | (pbVar7[0x12] & 0x1f) << 8;
          local_30 = (uint)pbVar7[0x15] | (pbVar7[0x14] & 0x1f) << 8;
          local_48 = pbVar7[0x16] >> 7;
          local_2c = pbVar7[0x16] & 0x1f;
          local_47 = pbVar7[0x17] >> 7;
          local_2b = pbVar7[0x17] & 0x1f;
          local_46 = pbVar7[0x18] >> 7;
          local_2a = pbVar7[0x18] & 0x1f;
          local_45 = pbVar7[0x19] >> 7;
          local_29 = pbVar7[0x19] & 0x1f;
        }
        CFmSynth::SetVoice((CFmSynth *)**(undefined4 **)(iVar6 + DAT_00042420),uVar2,&local_b0);
      }
      break;
    case '\x04':
      pbVar3[3] = param_3 & 0x3f;
      break;
    case '\x05':
      pbVar3[4] = (byte)(uVar5 & 0x7f);
      CFmSynth::SetFcOffset
                ((CFmSynth *)**(undefined4 **)(iVar6 + iVar4),uVar2,
                 uVar5 & 0x7f | (pbVar3[3] & 0x3f) << 7);
      break;
    case '\x06':
      pbVar3[5] = (byte)(uVar5 & 0x7d);
      CFmSynth::SetVelocity
                ((CFmSynth *)**(undefined4 **)(iVar6 + iVar4),uVar2,(uVar5 & 0x7d) >> 2,uVar5 & 1);
      break;
    case '\a':
      pbVar3[6] = param_3 & 0x3f;
      break;
    case '\b':
      pbVar3[7] = (byte)(uVar5 & 0x7f);
      CFmSynth::SetBlockFnum
                ((CFmSynth *)**(undefined4 **)(iVar6 + iVar4),uVar2,(pbVar3[6] & 0x3f) >> 3,
                 uVar5 & 0x7f | (pbVar3[6] & 7) << 7);
      break;
    case '\t':
      pbVar3[8] = (byte)(uVar5 & 0x7f);
      CFmSynth::SetCh((CFmSynth *)**(undefined4 **)(iVar6 + iVar4),uVar2,uVar5 & 0x3f,
                      (uVar5 & 0x7f) >> 6);
      break;
    case '\n':
      iVar4 = VIRTUALREGISTER_GetRegM('\0','\x02');
      if ((iVar4 << 0x18 < 0) || (uVar2 < 0x20)) {
        CFmSynth::KeyOn((CFmSynth *)**(undefined4 **)(iVar6 + DAT_00042420),uVar2,
                        (uVar5 & 0x7f) >> 6,(uVar5 & 0x1f) >> 4,(uVar5 & 0x3f) >> 5);
      }
      pbVar3[9] = param_3 & 0x7f;
    }
  }
  return;
}

