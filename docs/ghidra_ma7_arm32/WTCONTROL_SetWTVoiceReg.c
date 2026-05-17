/* WTCONTROL_SetWTVoiceReg @ 000396a0 1106B */


/* ARM::WTCONTROL_SetWTVoiceReg(unsigned char, unsigned char, unsigned char, unsigned char) */

void ARM::WTCONTROL_SetWTVoiceReg(uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_70;
  _tagWtVoiceInfo local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  byte local_68;
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
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  byte local_40;
  byte local_3f;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  byte local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  byte local_19;
  
  uVar5 = (uint)param_3;
  uVar1 = (uint)param_1;
  iVar4 = DAT_00039b08 + 0x396b4;
  if (uVar1 < 0x40) {
    pbVar2 = (byte *)VIRTUALREGISTER_GetWtInfoPointer(param_1);
    iVar3 = DAT_00039b0c;
    switch(param_2) {
    case '\x01':
      *pbVar2 = param_3 & 3;
      break;
    case '\x02':
      pbVar2[1] = param_3 & 0x7f;
      break;
    case '\x03':
      pbVar2[2] = (byte)(uVar5 & 0x7f);
      if (param_4 == '\0') {
        uVar5 = (uint)pbVar2[1] << 8 | (uint)*pbVar2 << 0xf | (uVar5 & 0x7f) << 1;
        local_70 = *(undefined4 *)(DAT_00039b10 + 0x3974a);
        if (uVar5 < 0x14000) {
          pbVar2 = (byte *)VIRTUALMEMORY_GetMemoryPointer(uVar5);
          local_6c = (_tagWtVoiceInfo)(*pbVar2 >> 3);
          local_69 = *pbVar2 & 7;
          local_67 = pbVar2[1] >> 6;
          local_6b = (byte)(((uint)pbVar2[1] << 0x1a) >> 0x1f);
          local_6a = (byte)(((uint)pbVar2[1] << 0x1b) >> 0x1f);
          local_63 = (byte)(((uint)pbVar2[1] << 0x1d) >> 0x1f);
          uVar5 = VIRTUALREGISTER_GetRegM('\0','\x02');
          if (((uVar5 & 0x7fff) >> 7 == 1) && (0x1f < uVar1)) {
            local_68 = 0;
          }
          else {
            local_68 = (byte)(((uint)pbVar2[1] << 0x1c) >> 0x1f);
          }
          local_66 = pbVar2[1] & 3;
          local_48 = (byte)(((uint)pbVar2[2] << 0x1d) >> 0x1f);
          local_65 = (byte)(((uint)pbVar2[2] << 0x1c) >> 0x1f);
          local_64 = (byte)(((uint)pbVar2[2] << 0x1e) >> 0x1f);
          local_62 = pbVar2[2] & 1;
          local_5e = (byte)(((uint)pbVar2[7] << 0x1e) >> 0x1f) |
                     (byte)((int)(uint)pbVar2[2] >> 3) & 0x1e;
          local_5d = (byte)((int)(uint)pbVar2[3] >> 3) & 0x1e | pbVar2[7] & 1;
          local_5f = (byte)(((uint)pbVar2[7] << 0x1d) >> 0x1f) | (pbVar2[3] & 0xf) << 1;
          local_60 = (byte)(((uint)pbVar2[7] << 0x1c) >> 0x1f) |
                     (byte)((int)(uint)pbVar2[4] >> 3) & 0x1e;
          local_5c = pbVar2[4] & 0xf;
          local_5b = pbVar2[5] >> 2;
          local_61 = pbVar2[5] & 3;
          local_58 = (byte)(((uint)pbVar2[6] << 0x19) >> 0x1e);
          local_57 = (byte)(((uint)pbVar2[6] << 0x1b) >> 0x1f);
          local_5a = (byte)(((uint)pbVar2[6] << 0x1d) >> 0x1e);
          local_54 = 0;
          local_50 = 0;
          local_59 = pbVar2[6] & 1;
          local_4c = 0;
          uVar5 = (uint)pbVar2[9] << 1 | (uint)pbVar2[8] << 9;
          if (uVar5 < 0x14000) {
            local_54 = VIRTUALMEMORY_GetMemoryPointer(uVar5);
            local_50 = CONCAT11(pbVar2[10],pbVar2[0xb]) & 0x7fff;
            if ((uVar5 + ((local_50 << *(sbyte *)((int)&local_70 + (uint)local_66)) + 1 >> 1) <
                 0x14000) &&
               (local_4c = CONCAT11(pbVar2[0xc],pbVar2[0xd]) & 0x7fff,
               uVar5 + ((local_4c << *(sbyte *)((int)&local_70 + (uint)local_66)) + 1 >> 1) <
               0x14000)) {
              local_38 = pbVar2[0xe] & 0x1f;
              local_1c = pbVar2[0xf] >> 5;
              local_1b = (byte)(((uint)pbVar2[0xf] << 0x1b) >> 0x1f);
              local_19 = (byte)(((uint)pbVar2[0xf] << 0x1c) >> 0x1f);
              local_1a = pbVar2[0xf] & 7;
              local_34 = (uint)pbVar2[0x11] | (pbVar2[0x10] & 0x1f) << 8;
              local_30 = (uint)pbVar2[0x13] | (pbVar2[0x12] & 0x1f) << 8;
              local_2c = (uint)pbVar2[0x15] | (pbVar2[0x14] & 0x1f) << 8;
              local_28 = (uint)pbVar2[0x17] | (pbVar2[0x16] & 0x1f) << 8;
              local_24 = (uint)pbVar2[0x19] | (pbVar2[0x18] & 0x1f) << 8;
              local_3c = pbVar2[0x1a] >> 7;
              local_20 = pbVar2[0x1a] & 0x1f;
              local_3b = pbVar2[0x1b] >> 7;
              local_1f = pbVar2[0x1b] & 0x1f;
              local_3a = pbVar2[0x1c] >> 7;
              local_1e = pbVar2[0x1c] & 0x1f;
              local_39 = pbVar2[0x1d] >> 7;
              local_1d = pbVar2[0x1d] & 0x1f;
              local_47 = pbVar2[0x1e] >> 7;
              local_45 = pbVar2[0x1e] & 0x1f;
              local_46 = pbVar2[0x1f] >> 7;
              local_44 = pbVar2[0x1f] & 0x1f;
              local_43 = pbVar2[0x20] & 0x1f;
              local_42 = pbVar2[0x21] & 0x1f;
              local_41 = pbVar2[0x22];
              local_40 = pbVar2[0x23];
              local_3f = pbVar2[0x24];
              local_3e = pbVar2[0x25];
              local_3d = pbVar2[0x26];
              CWtSynth::SetVoice((CWtSynth *)**(undefined4 **)(iVar4 + DAT_00039b0c),uVar1,&local_6c
                                );
            }
          }
        }
      }
      break;
    case '\x04':
      pbVar2[3] = param_3 & 0x3f;
      break;
    case '\x05':
      pbVar2[4] = (byte)(uVar5 & 0x7f);
      CWtSynth::SetFcOffset
                ((CWtSynth *)**(undefined4 **)(iVar4 + iVar3),uVar1,
                 uVar5 & 0x7f | (pbVar2[3] & 0x3f) << 7);
      break;
    case '\x06':
      pbVar2[5] = (byte)(uVar5 & 0x7d);
      CWtSynth::SetVelocity
                ((CWtSynth *)**(undefined4 **)(iVar4 + iVar3),uVar1,(uVar5 & 0x7d) >> 2,uVar5 & 1);
      break;
    case '\a':
      pbVar2[6] = param_3 & 0x3f;
      break;
    case '\b':
      pbVar2[7] = (byte)(uVar5 & 0x7f);
      CWtSynth::SetBlockFnum
                ((CWtSynth *)**(undefined4 **)(iVar4 + iVar3),uVar1,(pbVar2[6] & 0x3f) >> 3,
                 uVar5 & 0x7f | (pbVar2[6] & 7) << 7);
      break;
    case '\t':
      pbVar2[8] = (byte)(uVar5 & 0x7f);
      CWtSynth::SetCh((CWtSynth *)**(undefined4 **)(iVar4 + iVar3),uVar1,uVar5 & 0x3f,
                      (uVar5 & 0x7f) >> 6);
      break;
    case '\n':
      pbVar2[9] = param_3 & 0x7f;
      iVar3 = VIRTUALREGISTER_GetRegM('\0','\x02');
      if ((iVar3 << 0x18 < 0) || (uVar1 < 0x20)) {
        CWtSynth::KeyOn((CWtSynth *)**(undefined4 **)(iVar4 + DAT_00039b0c),uVar1,
                        (uVar5 & 0x7f) >> 6,(uVar5 & 0x1f) >> 4,(uVar5 & 0x3f) >> 5);
      }
    }
  }
  return;
}

