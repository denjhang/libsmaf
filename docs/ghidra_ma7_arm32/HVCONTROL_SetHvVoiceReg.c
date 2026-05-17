/* HVCONTROL_SetHvVoiceReg @ 0004258c 1174B */


/* ARM::HVCONTROL_SetHvVoiceReg(unsigned char, unsigned char) */

void ARM::HVCONTROL_SetHvVoiceReg(uchar param_1,uchar param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  uVar6 = (uint)param_2;
  uVar4 = (uint)param_1;
  uVar7 = uVar4 - 0x32 & 0xff;
  iVar10 = DAT_00042a38 + 0x425a4;
  if (uVar7 < 0x21) {
    if ((uVar7 < 0x1f) && ((1 << uVar7 & 0x492492ffU) != 0)) {
      bVar1 = 0x3f;
    }
    else {
      bVar1 = 0x7f;
    }
    *(byte *)(uVar4 + *(int *)(iVar10 + DAT_00042a3c) + -0x32) = param_2 & bVar1;
switchD_000425c4_default:
    return;
  }
  switch(uVar4) {
  case 0x53:
    iVar8 = 2;
    puVar9 = *(uint **)(iVar10 + DAT_00042a3c);
    *(byte *)((int)puVar9 + 0x21) = param_2 & 0x7f;
    VIRTUALREGISTER_SetRegC(0x32,(byte)*puVar9);
    VIRTUALREGISTER_SetRegC(0x33,*(byte *)((int)puVar9 + 1));
    do {
      sVar2 = (short)iVar8;
      VIRTUALREGISTER_SetRegC(sVar2 + 0x32,*(byte *)((int)puVar9 + iVar8));
      VIRTUALREGISTER_SetRegC(sVar2 + 0x33,*(byte *)((int)puVar9 + iVar8 + 1));
      VIRTUALREGISTER_SetRegC(sVar2 + 0x34,*(byte *)((int)puVar9 + iVar8 + 2));
      VIRTUALREGISTER_SetRegC(sVar2 + 0x35,*(byte *)((int)puVar9 + iVar8 + 3));
      VIRTUALREGISTER_SetRegC(sVar2 + 0x36,*(byte *)((int)puVar9 + iVar8 + 4));
      VIRTUALREGISTER_SetRegC(sVar2 + 0x37,*(byte *)((int)puVar9 + iVar8 + 5));
      VIRTUALREGISTER_SetRegC(sVar2 + 0x38,*(byte *)((int)puVar9 + iVar8 + 6));
      iVar5 = iVar8 + 7;
      iVar8 = iVar8 + 8;
      VIRTUALREGISTER_SetRegC(sVar2 + 0x39,*(byte *)((int)puVar9 + iVar5));
    } while (iVar8 != 0x22);
    local_60 = CONCAT13((byte)(((uint)*(byte *)((int)puVar9 + 3) << 0x1a) >> 0x1f),
                        CONCAT12((byte)(((uint)*(byte *)((int)puVar9 + 2) << 0x1a) >> 0x1f),
                                 CONCAT11((byte)(((uint)*(byte *)((int)puVar9 + 1) << 0x1a) >> 0x1f)
                                          ,(byte)(((uint)(byte)*puVar9 << 0x1a) >> 0x1f))));
    local_5c = CONCAT13((byte)(((uint)*(byte *)((int)puVar9 + 7) << 0x1a) >> 0x1f),
                        CONCAT12((byte)(((uint)*(byte *)((int)puVar9 + 6) << 0x1a) >> 0x1f),
                                 CONCAT11((byte)(((uint)*(byte *)((int)puVar9 + 5) << 0x1a) >> 0x1f)
                                          ,(byte)(((uint)(byte)puVar9[1] << 0x1a) >> 0x1f))));
    local_68 = *puVar9 & 0x1f1f1f1f;
    local_64 = puVar9[1] & 0x1f1f1f1f;
    puVar11 = *(undefined4 **)(iVar10 + DAT_00042a40);
    CCsmSynth::SetVoice(*puVar11,local_68,local_64,local_60,local_5c);
    local_50 = CONCAT13((byte)(((uint)*(byte *)((int)puVar9 + 0x12) << 0x1a) >> 0x1d),
                        CONCAT12((byte)(((uint)*(byte *)((int)puVar9 + 0xf) << 0x1a) >> 0x1d),
                                 CONCAT11((byte)(((uint)(byte)puVar9[3] << 0x1a) >> 0x1d),
                                          (byte)(((uint)*(byte *)((int)puVar9 + 9) << 0x1a) >> 0x1d)
                                         )));
    local_58 = CONCAT13(*(byte *)((int)puVar9 + 0x11),
                        CONCAT12(*(byte *)((int)puVar9 + 0xe),
                                 CONCAT11(*(byte *)((int)puVar9 + 0xb),(byte)puVar9[2]))) &
               0x7f7f7f7f;
    local_4c = CONCAT13((byte)(((uint)*(byte *)((int)puVar9 + 0x1e) << 0x1a) >> 0x1d),
                        CONCAT12((byte)(((uint)*(byte *)((int)puVar9 + 0x1b) << 0x1a) >> 0x1d),
                                 CONCAT11((byte)(((uint)(byte)puVar9[6] << 0x1a) >> 0x1d),
                                          (byte)(((uint)*(byte *)((int)puVar9 + 0x15) << 0x1a) >>
                                                0x1d))));
    local_54 = CONCAT13(*(byte *)((int)puVar9 + 0x1d),
                        CONCAT12(*(byte *)((int)puVar9 + 0x1a),
                                 CONCAT11(*(byte *)((int)puVar9 + 0x17),(byte)puVar9[5]))) &
               0x7f7f7f7f;
    CCsmSynth::SetFseq(*puVar11,local_58,local_54,local_50,local_4c,
                       (uint)*(byte *)((int)puVar9 + 10) | (*(byte *)((int)puVar9 + 9) & 7) << 7,
                       (uint)*(byte *)((int)puVar9 + 0xd) | ((byte)puVar9[3] & 7) << 7,
                       (uint)(byte)puVar9[4] | (*(byte *)((int)puVar9 + 0xf) & 7) << 7,
                       (uint)*(byte *)((int)puVar9 + 0x13) |
                       (*(byte *)((int)puVar9 + 0x12) & 7) << 7,
                       (uint)*(byte *)((int)puVar9 + 0x16) |
                       (*(byte *)((int)puVar9 + 0x15) & 7) << 7,
                       (uint)*(byte *)((int)puVar9 + 0x19) | ((byte)puVar9[6] & 7) << 7,
                       (uint)(byte)puVar9[7] | (*(byte *)((int)puVar9 + 0x1b) & 7) << 7,
                       (uint)*(byte *)((int)puVar9 + 0x1f) |
                       (*(byte *)((int)puVar9 + 0x1e) & 7) << 7);
    uVar4 = (uint)(byte)puVar9[8];
    CCsmSynth::SetBlockFnum
              ((CCsmSynth *)*puVar11,(uVar4 & 0x7f) >> 6,(uVar4 & 0x3f) >> 3,
               (uint)*(byte *)((int)puVar9 + 0x21) | (uVar4 & 7) << 7);
    return;
  case 0x54:
    VIRTUALREGISTER_SetRegC(0x54,param_2 & 0x7f);
    CCsmSynth::SetCh((CCsmSynth *)**(undefined4 **)(iVar10 + DAT_00042a40),uVar6 & 0x3f,
                     (uVar6 & 0x7f) >> 6);
    return;
  case 0x55:
    uVar4 = VIRTUALREGISTER_GetRegM('\0','\x02');
    if ((uVar4 & 0x7fff) >> 7 != 1) {
      CCsmSynth::KeyOn((CCsmSynth *)**(undefined4 **)(iVar10 + DAT_00042a40),(uVar6 & 0x7f) >> 6,
                       (uVar6 & 0x3f) >> 5,(uVar6 & 0x1f) >> 4);
    }
    iVar5 = VIRTUALREGISTER_GetRegC(0x55);
    iVar8 = DAT_00042a40;
    if ((-1 < iVar5 << 0x19) && ((int)(uVar6 << 0x19) < 0)) {
      uVar4 = VIRTUALREGISTER_GetRegC(0x59);
      CCsmSynth::SetLpfSr((CCsmSynth *)**(undefined4 **)(iVar10 + iVar8),1,uVar4 & 0x1f);
      VIRTUALREGISTER_SetRegC(0x59,(byte)(uVar4 & 0x1f) | 0x40);
    }
    bVar1 = 0x7f;
    uVar3 = 0x55;
    break;
  case 0x56:
    VIRTUALREGISTER_SetRegC(0x56,param_2 & 0x5f);
    CCsmSynth::SetLpfQ((CCsmSynth *)**(undefined4 **)(iVar10 + DAT_00042a40),(uVar6 & 0x7f) >> 6,
                       uVar6 & 0x1f);
    return;
  case 0x57:
    bVar1 = 0x3f;
    uVar3 = 0x57;
    break;
  case 0x58:
    VIRTUALREGISTER_SetRegC(0x58,param_2 & 0x7f);
    uVar4 = VIRTUALREGISTER_GetRegC(0x57);
    CCsmSynth::SetLpfFc3
              ((CCsmSynth *)**(undefined4 **)(iVar10 + DAT_00042a40),uVar6 | (uVar4 & 0x3f) << 7);
    return;
  case 0x59:
    VIRTUALREGISTER_SetRegC(0x59,param_2 & 0x5f);
    CCsmSynth::SetLpfSr((CCsmSynth *)**(undefined4 **)(iVar10 + DAT_00042a40),(uVar6 & 0x7f) >> 6,
                        uVar6 & 0x1f);
    return;
  case 0x5a:
    VIRTUALREGISTER_SetRegC(0x5a,param_2 & 0x7f);
    CCsmSynth::SetLpfMode
              ((CCsmSynth *)**(undefined4 **)(iVar10 + DAT_00042a40),(uVar6 & 0x7f) >> 4,
               (uVar6 & 0xf) >> 3,uVar6 & 7);
    return;
  case 0x5b:
    VIRTUALREGISTER_SetRegC(0x5b,param_2 & 0x7d);
    CCsmSynth::SetPanpot
              ((CCsmSynth *)**(undefined4 **)(iVar10 + DAT_00042a40),(uVar6 & 0x7f) >> 2,uVar6 & 1);
    return;
  case 0x5c:
    VIRTUALREGISTER_SetRegC(0x5c,param_2 & 0x7d);
    CCsmSynth::SetVelocity
              ((CCsmSynth *)**(undefined4 **)(iVar10 + DAT_00042a40),(uVar6 & 0x7f) >> 2,uVar6 & 1);
    return;
  default:
    goto switchD_000425c4_default;
  }
  VIRTUALREGISTER_SetRegC(uVar3,param_2 & bVar1);
  return;
}

