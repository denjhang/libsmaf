/* HVCONTROL_SetHvVoiceReg @ 00146eb8 1468B */


/* ARM::HVCONTROL_SetHvVoiceReg(unsigned char, unsigned char) */

void ARM::HVCONTROL_SetHvVoiceReg(uchar param_1,uchar param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  ulong local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  byte local_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint uStack_c;
  uint local_8;
  uint local_4;
  
  puVar10 = PTR_gHVprm_00567ee8;
  uVar13 = (uint)param_1;
  uVar14 = uVar13 - 0x32;
  uVar15 = (uint)param_2;
  if ((uVar14 & 0xff) < 0x21) {
    switch(uVar14) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 9:
    case 0xc:
    case 0xf:
    case 0x12:
    case 0x15:
    case 0x18:
    case 0x1b:
    case 0x1e:
      bVar2 = 0x3f;
      break;
    default:
      bVar2 = 0x7f;
    }
    PTR_gHVprm_00567ee8[(int)uVar14] = param_2 & bVar2;
  }
  else if (uVar13 - 0x53 < 10) {
    switch(uVar13) {
    case 0x53:
      lVar16 = 2;
      PTR_gHVprm_00567ee8[0x21] = param_2 & 0x7f;
      VIRTUALREGISTER_SetRegC(0x32,*puVar10);
      VIRTUALREGISTER_SetRegC(0x33,puVar10[1]);
      do {
        puVar11 = PTR_gHVprm_00567ee8;
        VIRTUALREGISTER_SetRegC((short)lVar16 + 0x32,PTR_gHVprm_00567ee8[lVar16]);
        VIRTUALREGISTER_SetRegC((short)(lVar16 + 1) + 0x32,puVar11[lVar16 + 1]);
        VIRTUALREGISTER_SetRegC((short)(lVar16 + 2) + 0x32,puVar11[lVar16 + 2]);
        VIRTUALREGISTER_SetRegC((short)(lVar16 + 3) + 0x32,puVar11[lVar16 + 3]);
        VIRTUALREGISTER_SetRegC((short)(lVar16 + 4) + 0x32,puVar11[lVar16 + 4]);
        VIRTUALREGISTER_SetRegC((short)(lVar16 + 5) + 0x32,puVar11[lVar16 + 5]);
        VIRTUALREGISTER_SetRegC((short)(lVar16 + 6) + 0x32,puVar11[lVar16 + 6]);
        lVar1 = lVar16 + 7;
        lVar16 = lVar16 + 8;
        VIRTUALREGISTER_SetRegC((short)lVar1 + 0x32,puVar11[lVar1]);
        puVar10 = PTR_gpVHV_00567ec0;
      } while (lVar16 != 0x22);
      CCsmSynth::SetVoice(*(undefined8 *)PTR_gpVHV_00567ec0,
                          (ulong)((byte)*puVar11 & 0x1f) | (ulong)((byte)puVar11[1] & 0x1f) << 8 |
                          (ulong)((byte)puVar11[2] & 0x1f) << 0x10 |
                          (ulong)((byte)puVar11[3] & 0x1f) << 0x18 |
                          (ulong)((byte)puVar11[4] & 0x1f) << 0x20 |
                          (ulong)((byte)puVar11[5] & 0x1f) << 0x28 |
                          (ulong)((byte)puVar11[6] & 0x1f) << 0x30 |
                          (ulong)((byte)puVar11[7] & 0x1f) << 0x38,
                          (ulong)((byte)*puVar11 >> 5) & 1 |
                          ((ulong)((byte)puVar11[1] >> 5) & 1) << 8 |
                          ((ulong)((byte)puVar11[2] >> 5) & 1) << 0x10 |
                          ((ulong)((byte)puVar11[3] >> 5) & 1) << 0x18 |
                          ((ulong)((byte)puVar11[4] >> 5) & 1) << 0x20 |
                          ((ulong)((byte)puVar11[5] >> 5) & 1) << 0x28 |
                          ((ulong)((byte)puVar11[6] >> 5) & 1) << 0x30 |
                          ((ulong)((byte)puVar11[7] >> 5) & 1) << 0x38);
      bVar2 = (byte)puVar11[9] >> 3;
      local_28 = bVar2 & 7;
      bVar3 = (byte)puVar11[0xc] >> 3;
      local_27 = bVar3 & 7;
      bVar4 = (byte)puVar11[0xf] >> 3;
      local_26 = bVar4 & 7;
      bVar5 = (byte)puVar11[0x12] >> 3;
      local_25 = bVar5 & 7;
      bVar6 = (byte)puVar11[0x15] >> 3;
      local_24 = bVar6 & 7;
      local_30 = puVar11[8] & 0x7f;
      uStack_1c = (uint)(byte)puVar11[0xd] | ((byte)puVar11[0xc] & 7) << 7;
      bStack_2e = puVar11[0xe] & 0x7f;
      local_18 = (uint)(byte)puVar11[0x10] | ((byte)puVar11[0xf] & 7) << 7;
      local_14 = (uint)(byte)puVar11[0x13] | ((byte)puVar11[0x12] & 7) << 7;
      bStack_2b = puVar11[0x17] & 0x7f;
      bStack_2c = puVar11[0x14] & 0x7f;
      bStack_2d = puVar11[0x11] & 0x7f;
      local_20 = (uint)(byte)puVar11[10] | ((byte)puVar11[9] & 7) << 7;
      local_10 = (uint)(byte)puVar11[0x16] | ((byte)puVar11[0x15] & 7) << 7;
      bStack_2f = puVar11[0xb] & 0x7f;
      bVar7 = (byte)puVar11[0x18] >> 3;
      local_23 = bVar7 & 7;
      bVar8 = (byte)puVar11[0x1b] >> 3;
      local_22 = bVar8 & 7;
      bVar9 = (byte)puVar11[0x1e] >> 3;
      local_21 = bVar9 & 7;
      uStack_c = (uint)(byte)puVar11[0x19] | ((byte)puVar11[0x18] & 7) << 7;
      local_8 = (uint)(byte)puVar11[0x1c] | ((byte)puVar11[0x1b] & 7) << 7;
      local_4 = (uint)(byte)puVar11[0x1f] | ((byte)puVar11[0x1e] & 7) << 7;
      bStack_29 = puVar11[0x1d] & 0x7f;
      bStack_2a = puVar11[0x1a] & 0x7f;
      local_50 = CONCAT44(uStack_1c,local_20);
      uStack_48 = CONCAT44(local_14,local_18);
      local_40 = CONCAT44(uStack_c,local_10);
      uStack_38 = CONCAT44(local_4,local_8);
      local_60 = CONCAT17(puVar11[0x1d],
                          CONCAT16(puVar11[0x1a],
                                   CONCAT15(puVar11[0x17],
                                            CONCAT14(puVar11[0x14],
                                                     CONCAT13(puVar11[0x11],
                                                              CONCAT12(puVar11[0xe],
                                                                       CONCAT11(puVar11[0xb],
                                                                                puVar11[8]))))))) &
                 0x7f7f7f7f7f7f7f7f;
      uStack_58 = CONCAT17(bVar9,CONCAT16(bVar8,CONCAT15(bVar7,CONCAT14(bVar6,CONCAT13(bVar5,
                                                  CONCAT12(bVar4,CONCAT11(bVar3,bVar2))))))) &
                  0x707070707070707;
      CCsmSynth::SetFseq(*(CCsmSynth **)puVar10,&local_60);
      bVar2 = puVar11[0x20];
      CCsmSynth::SetBlockFnum
                (*(CCsmSynth **)puVar10,bVar2 >> 6 & 1,bVar2 >> 3 & 7,
                 (uint)(byte)puVar11[0x21] | (bVar2 & 7) << 7);
      return;
    case 0x54:
      VIRTUALREGISTER_SetRegC(0x54,param_2 & 0x7f);
      CCsmSynth::SetCh(*(CCsmSynth **)PTR_gpVHV_00567ec0,uVar15 & 0x3f,param_2 >> 6 & 1);
      return;
    case 0x55:
      uVar14 = VIRTUALREGISTER_GetRegM('\0','\x02');
      if ((uVar14 >> 7 & 1) == 0) {
        CCsmSynth::KeyOn(*(CCsmSynth **)PTR_gpVHV_00567ec0,param_2 >> 6 & 1,param_2 >> 5 & 1,
                         param_2 >> 4 & 1);
      }
      uVar14 = VIRTUALREGISTER_GetRegC(0x55);
      if (((uVar14 >> 6 & 1) == 0) && ((param_2 >> 6 & 1) != 0)) {
        uVar14 = VIRTUALREGISTER_GetRegC(0x59);
        CCsmSynth::SetLpfSr(*(CCsmSynth **)PTR_gpVHV_00567ec0,1,uVar14 & 0x1f);
        VIRTUALREGISTER_SetRegC(0x59,(byte)(uVar14 & 0x1f) | 0x40);
      }
      uVar12 = 0x55;
      bVar2 = 0x7f;
      break;
    case 0x56:
      VIRTUALREGISTER_SetRegC(0x56,param_2 & 0x5f);
      CCsmSynth::SetLpfQ(*(CCsmSynth **)PTR_gpVHV_00567ec0,param_2 >> 6 & 1,param_2 & 0x1f);
      return;
    case 0x57:
      uVar12 = 0x57;
      bVar2 = 0x3f;
      break;
    case 0x58:
      VIRTUALREGISTER_SetRegC(0x58,param_2 & 0x7f);
      uVar14 = VIRTUALREGISTER_GetRegC(0x57);
      CCsmSynth::SetLpfFc3(*(CCsmSynth **)PTR_gpVHV_00567ec0,(uVar14 & 0x3f) << 7 | (uint)param_2);
      return;
    case 0x59:
      VIRTUALREGISTER_SetRegC(0x59,param_2 & 0x5f);
      CCsmSynth::SetLpfSr(*(CCsmSynth **)PTR_gpVHV_00567ec0,param_2 >> 6 & 1,uVar15 & 0x1f);
      return;
    case 0x5a:
      VIRTUALREGISTER_SetRegC(0x5a,param_2 & 0x7f);
      CCsmSynth::SetLpfMode
                (*(CCsmSynth **)PTR_gpVHV_00567ec0,param_2 >> 4 & 7,param_2 >> 3 & 1,uVar15 & 7);
      return;
    case 0x5b:
      VIRTUALREGISTER_SetRegC(0x5b,param_2 & 0x7d);
      CCsmSynth::SetPanpot(*(CCsmSynth **)PTR_gpVHV_00567ec0,param_2 >> 2 & 0x1f,uVar15 & 1);
      return;
    case 0x5c:
      VIRTUALREGISTER_SetRegC(0x5c,param_2 & 0x7d);
      CCsmSynth::SetVelocity(*(CCsmSynth **)PTR_gpVHV_00567ec0,param_2 >> 2 & 0x1f,uVar15 & 1);
      return;
    }
    VIRTUALREGISTER_SetRegC(uVar12,param_2 & bVar2);
    return;
  }
  return;
}

