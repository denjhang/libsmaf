/* Hw_Generate @ 00131934 4268B */


/* WARNING: Type propagation algorithm not settling */

void Hw_Generate(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar37;
  int iVar38;
  int iVar39;
  undefined8 uVar40;
  int iVar41;
  bool bVar42;
  undefined *puVar43;
  byte bVar44;
  ushort uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  ulong uVar49;
  undefined8 *puVar50;
  undefined8 *puVar51;
  undefined1 (*pauVar52) [16];
  undefined1 (*pauVar53) [16];
  int iVar54;
  ulong uVar55;
  undefined4 *puVar56;
  uint *puVar57;
  undefined4 *puVar58;
  uint *puVar59;
  undefined4 *puVar60;
  undefined4 *puVar61;
  undefined4 *puVar62;
  undefined4 *puVar63;
  undefined4 *puVar64;
  undefined4 *puVar65;
  undefined4 *puVar66;
  undefined1 (*pauVar67) [16];
  undefined4 *puVar68;
  undefined4 *puVar69;
  undefined4 *puVar70;
  undefined4 *puVar71;
  long lVar72;
  ulong uVar73;
  ulong uVar74;
  undefined1 (*pauVar75) [16];
  undefined1 (*pauVar76) [16];
  ulong uVar77;
  undefined8 *puVar78;
  undefined8 *puVar79;
  undefined1 (*pauVar80) [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  uint uVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  
  if (DAT_00568030 != -1) {
    if (param_3 == 0) {
      bVar42 = true;
    }
    else {
      if (param_1 == (undefined2 *)0x0) {
        return;
      }
      bVar42 = false;
      if (param_2 == (undefined2 *)0x0) {
        return;
      }
    }
    uVar73 = 0;
    uVar74 = 0;
    while( true ) {
      uVar121 = (uint)uVar73;
      uVar48 = (uint)uVar74;
      if ((!bVar42) && (param_3 == 0)) break;
      EnterCriticalSection((critical_section *)&DAT_00582978);
      uVar11 = param_3;
      if (DAT_005829a8 < param_3) {
        uVar11 = DAT_005829a8;
      }
      uVar77 = (ulong)uVar11;
      DAT_005829b0 = uVar77 + DAT_005829b0;
      DAT_005829b8 = 0;
      if ((ulong)DAT_00568034 != 0) {
        DAT_005829b8 = (DAT_005829b0 * 1000) / (long)(ulong)DAT_00568034;
      }
      uVar45 = ARM::Timer_Generate(DAT_005829b8);
      DAT_005829c0 = (uVar45 & 3) << 5 | DAT_005829c0;
      uVar49 = ARM::Sequencer_Generate(DAT_005829b8);
      uVar46 = (uint)uVar49;
      DAT_005829c0 = (ushort)(uVar49 >> 1) & 0x80 | DAT_005829c0 | (ushort)((uVar46 & 1) << 0xe);
      if ((uVar46 >> 1 & 1) != 0) {
        bVar44 = ARM::SIrqFifo_SetData(0xf000);
        DAT_00582971 = bVar44 | DAT_00582971;
      }
      if ((uVar46 >> 9 & 1) != 0) {
        bVar44 = ARM::SIrqFifo_SetData(0xf001);
        DAT_00582971 = bVar44 | DAT_00582971;
      }
      if (uVar11 != 0) {
        uVar46 = uVar11 - 1 & 3;
        lVar72 = 1;
        puVar71 = *(undefined4 **)PTR_gOutBuf_005673d0;
        puVar70 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 8);
        puVar69 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x10);
        puVar68 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x18);
        puVar66 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x20);
        puVar65 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x28);
        puVar64 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x30);
        puVar63 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x38);
        puVar62 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x40);
        puVar61 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x48);
        puVar60 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x50);
        puVar58 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x58);
        puVar56 = *(undefined4 **)((long)PTR_gOutBuf_005673d0 + 0x60);
        *param_1 = 0;
        *param_2 = 0;
        *puVar71 = 0;
        *puVar70 = 0;
        *puVar69 = 0;
        *puVar68 = 0;
        *puVar66 = 0;
        *puVar65 = 0;
        *puVar64 = 0;
        *puVar63 = 0;
        *puVar62 = 0;
        *puVar61 = 0;
        *puVar60 = 0;
        *puVar58 = 0;
        *puVar56 = 0;
        if (1 < uVar11) {
          if (uVar46 != 0) {
            if (uVar46 != 1) {
              if (uVar46 != 2) {
                param_1[1] = 0;
                lVar72 = 2;
                param_2[1] = 0;
                puVar71[1] = 0;
                puVar70[1] = 0;
                puVar69[1] = 0;
                puVar68[1] = 0;
                puVar66[1] = 0;
                puVar65[1] = 0;
                puVar64[1] = 0;
                puVar63[1] = 0;
                puVar62[1] = 0;
                puVar61[1] = 0;
                puVar60[1] = 0;
                puVar58[1] = 0;
                puVar56[1] = 0;
              }
              param_1[lVar72] = 0;
              param_2[lVar72] = 0;
              puVar71[lVar72] = 0;
              puVar70[lVar72] = 0;
              puVar69[lVar72] = 0;
              puVar68[lVar72] = 0;
              puVar66[lVar72] = 0;
              puVar65[lVar72] = 0;
              puVar64[lVar72] = 0;
              puVar63[lVar72] = 0;
              puVar62[lVar72] = 0;
              puVar61[lVar72] = 0;
              puVar60[lVar72] = 0;
              puVar58[lVar72] = 0;
              puVar56[lVar72] = 0;
              lVar72 = lVar72 + 1;
            }
            param_1[lVar72] = 0;
            param_2[lVar72] = 0;
            puVar71[lVar72] = 0;
            puVar70[lVar72] = 0;
            puVar69[lVar72] = 0;
            puVar68[lVar72] = 0;
            puVar66[lVar72] = 0;
            puVar65[lVar72] = 0;
            puVar64[lVar72] = 0;
            puVar63[lVar72] = 0;
            puVar62[lVar72] = 0;
            puVar61[lVar72] = 0;
            puVar60[lVar72] = 0;
            puVar58[lVar72] = 0;
            puVar56[lVar72] = 0;
            lVar72 = lVar72 + 1;
            if (uVar11 <= (uint)lVar72) goto LAB_00131ca4;
          }
          do {
            param_1[lVar72] = 0;
            lVar1 = lVar72 + 1;
            param_2[lVar72] = 0;
            lVar2 = lVar72 + 2;
            puVar71[lVar72] = 0;
            lVar3 = lVar72 + 3;
            puVar70[lVar72] = 0;
            puVar69[lVar72] = 0;
            puVar68[lVar72] = 0;
            puVar66[lVar72] = 0;
            puVar65[lVar72] = 0;
            puVar64[lVar72] = 0;
            puVar63[lVar72] = 0;
            puVar62[lVar72] = 0;
            puVar61[lVar72] = 0;
            puVar60[lVar72] = 0;
            puVar58[lVar72] = 0;
            puVar56[lVar72] = 0;
            lVar72 = lVar72 + 4;
            param_1[lVar1] = 0;
            param_2[lVar1] = 0;
            puVar71[lVar1] = 0;
            puVar70[lVar1] = 0;
            puVar69[lVar1] = 0;
            puVar68[lVar1] = 0;
            puVar66[lVar1] = 0;
            puVar65[lVar1] = 0;
            puVar64[lVar1] = 0;
            puVar63[lVar1] = 0;
            puVar62[lVar1] = 0;
            puVar61[lVar1] = 0;
            puVar60[lVar1] = 0;
            puVar58[lVar1] = 0;
            puVar56[lVar1] = 0;
            param_1[lVar2] = 0;
            param_2[lVar2] = 0;
            puVar71[lVar2] = 0;
            puVar70[lVar2] = 0;
            puVar69[lVar2] = 0;
            puVar68[lVar2] = 0;
            puVar66[lVar2] = 0;
            puVar65[lVar2] = 0;
            puVar64[lVar2] = 0;
            puVar63[lVar2] = 0;
            puVar62[lVar2] = 0;
            puVar61[lVar2] = 0;
            puVar60[lVar2] = 0;
            puVar58[lVar2] = 0;
            puVar56[lVar2] = 0;
            param_1[lVar3] = 0;
            param_2[lVar3] = 0;
            puVar71[lVar3] = 0;
            puVar70[lVar3] = 0;
            puVar69[lVar3] = 0;
            puVar68[lVar3] = 0;
            puVar66[lVar3] = 0;
            puVar65[lVar3] = 0;
            puVar64[lVar3] = 0;
            puVar63[lVar3] = 0;
            puVar62[lVar3] = 0;
            puVar61[lVar3] = 0;
            puVar60[lVar3] = 0;
            puVar58[lVar3] = 0;
            puVar56[lVar3] = 0;
          } while ((uint)lVar72 < uVar11);
        }
      }
LAB_00131ca4:
      puVar43 = PTR_gOutBuf_005673d0;
      ARM::FMCONTROL_Generate(uVar11,(_genbuf *)PTR_gOutBuf_005673d0);
      ARM::WTCONTROL_Generate(uVar11,(_genbuf *)puVar43);
      uVar45 = ARM::STMCONTROL_Generate(uVar11,(_genbuf *)puVar43);
      DAT_005829c0 = uVar45 & 0xf | DAT_005829c0;
      ARM::HVCONTROL_Generate(uVar11,(_genbuf *)puVar43);
      ARM::DINCONTROL_Generate(uVar11,(_genbuf *)puVar43);
      ARM::DTMFCONTROL_Generate(uVar11,(_genbuf *)puVar43);
      uVar46 = ARM::VIRTUALREGISTER_GetRegM('\0','\x18');
      iVar54 = *(int *)(&DAT_0027be30 + (long)(int)(uVar46 >> 2 & 0x1f) * 4);
      uVar47 = ARM::VIRTUALREGISTER_GetRegM('\0','\x19');
      ARM::DSPCONTROL_SetMasterVol
                (iVar54 << (ulong)(uVar46 & 3),
                 *(int *)(&DAT_0027be30 + (long)(int)(uVar47 >> 2 & 0x1f) * 4) <<
                 (ulong)(uVar47 & 3));
      ARM::DSPCONTROL_Generate(uVar11,(_genbuf *)puVar43,0);
      if (uVar11 != 0) {
        puVar57 = *(uint **)puVar43;
        puVar59 = *(uint **)(puVar43 + 8);
        uVar46 = -((uint)((ulong)puVar57 >> 2) & 3) & 3;
        uVar47 = uVar11;
        if (uVar46 < uVar11) {
          uVar47 = uVar46;
        }
        uVar49 = (ulong)uVar47;
        if (uVar11 < 5) {
          uVar49 = (ulong)uVar11;
LAB_00131d9c:
          uVar46 = *puVar57;
          uVar47 = *puVar59;
          if ((int)uVar46 < 0) {
            uVar46 = ~uVar46;
          }
          if ((int)uVar48 < (int)uVar46) {
            uVar48 = uVar46;
          }
          if ((int)uVar47 < 0) {
            uVar47 = ~uVar47;
          }
          if ((int)uVar121 < (int)uVar47) {
            uVar121 = uVar47;
          }
          uVar46 = (uint)uVar49;
          uVar55 = uVar49;
          if (uVar46 == 1) {
LAB_0013278c:
            uVar74 = (ulong)uVar48;
            uVar73 = (ulong)uVar121;
          }
          else {
            uVar47 = puVar57[1];
            uVar12 = puVar59[1];
            if ((int)uVar47 < 0) {
              uVar47 = ~uVar47;
            }
            if ((int)uVar48 < (int)uVar47) {
              uVar48 = uVar47;
            }
            if ((int)uVar12 < 0) {
              uVar12 = ~uVar12;
            }
            if ((int)uVar121 < (int)uVar12) {
              uVar121 = uVar12;
            }
            if (uVar46 == 2) goto LAB_0013278c;
            uVar47 = puVar57[2];
            uVar12 = puVar59[2];
            if ((int)uVar47 < 0) {
              uVar47 = ~uVar47;
            }
            if ((int)uVar48 < (int)uVar47) {
              uVar48 = uVar47;
            }
            uVar74 = (ulong)uVar48;
            if ((int)uVar12 < 0) {
              uVar12 = ~uVar12;
            }
            if ((int)uVar121 < (int)uVar12) {
              uVar121 = uVar12;
            }
            uVar73 = (ulong)uVar121;
            if (uVar46 == 4) {
              uVar47 = puVar57[3];
              uVar12 = puVar59[3];
              if ((int)uVar47 < 0) {
                uVar47 = ~uVar47;
              }
              if ((int)uVar48 < (int)uVar47) {
                uVar48 = uVar47;
              }
              uVar74 = (ulong)uVar48;
              if ((int)uVar12 < 0) {
                uVar12 = ~uVar12;
              }
              if ((int)uVar121 < (int)uVar12) {
                uVar121 = uVar12;
              }
              uVar73 = (ulong)uVar121;
            }
            else {
              uVar55 = 3;
            }
          }
          uVar121 = (uint)uVar73;
          uVar48 = (uint)uVar74;
          if (uVar46 == uVar11) goto LAB_001320f4;
        }
        else {
          uVar55 = 0;
          if (uVar47 != 0) goto LAB_00131d9c;
        }
        iVar54 = uVar11 - (int)uVar49;
        uVar47 = iVar54 - 4U >> 2;
        uVar46 = uVar47 + 1;
        if (2 < (uVar11 - 1) - (int)uVar49) {
          auVar97._4_4_ = uVar48;
          auVar97._0_4_ = uVar48;
          auVar97._8_4_ = uVar48;
          auVar97._12_4_ = uVar48;
          pauVar80 = (undefined1 (*) [16])(puVar59 + uVar49);
          pauVar67 = (undefined1 (*) [16])(puVar57 + uVar49);
          auVar93._4_4_ = uVar121;
          auVar93._0_4_ = uVar121;
          auVar93._8_4_ = uVar121;
          auVar93._12_4_ = uVar121;
          pauVar76 = pauVar67 + 1;
          auVar81 = *pauVar67;
          uVar47 = uVar47 & 3;
          pauVar53 = pauVar80 + 1;
          auVar161 = *pauVar80;
          uVar48 = 1;
          auVar164[0] = ~auVar81[0];
          auVar164[1] = ~auVar81[1];
          auVar164[2] = ~auVar81[2];
          auVar164[3] = ~auVar81[3];
          auVar164[4] = ~auVar81[4];
          auVar164[5] = ~auVar81[5];
          auVar164[6] = ~auVar81[6];
          auVar164[7] = ~auVar81[7];
          auVar164[8] = ~auVar81[8];
          auVar164[9] = ~auVar81[9];
          auVar164[10] = ~auVar81[10];
          auVar164[0xb] = ~auVar81[0xb];
          auVar164[0xc] = ~auVar81[0xc];
          auVar164[0xd] = ~auVar81[0xd];
          auVar164[0xe] = ~auVar81[0xe];
          auVar164[0xf] = ~auVar81[0xf];
          auVar163[0] = ~auVar161[0];
          auVar163[1] = ~auVar161[1];
          auVar163[2] = ~auVar161[2];
          auVar163[3] = ~auVar161[3];
          auVar163[4] = ~auVar161[4];
          auVar163[5] = ~auVar161[5];
          auVar163[6] = ~auVar161[6];
          auVar163[7] = ~auVar161[7];
          auVar163[8] = ~auVar161[8];
          auVar163[9] = ~auVar161[9];
          auVar163[10] = ~auVar161[10];
          auVar163[0xb] = ~auVar161[0xb];
          auVar163[0xc] = ~auVar161[0xc];
          auVar163[0xd] = ~auVar161[0xd];
          auVar163[0xe] = ~auVar161[0xe];
          auVar163[0xf] = ~auVar161[0xf];
          auVar87._0_4_ = -(uint)(-1 < auVar81._0_4_);
          auVar87._4_4_ = -(uint)(-1 < auVar81._4_4_);
          auVar87._8_4_ = -(uint)(-1 < auVar81._8_4_);
          auVar87._12_4_ = -(uint)(-1 < auVar81._12_4_);
          auVar83._0_4_ = -(uint)(-1 < auVar161._0_4_);
          auVar83._4_4_ = -(uint)(-1 < auVar161._4_4_);
          auVar83._8_4_ = -(uint)(-1 < auVar161._8_4_);
          auVar83._12_4_ = -(uint)(-1 < auVar161._12_4_);
          auVar87 = NEON_smax(auVar97,auVar164 ^ (auVar164 ^ auVar81) & auVar87,4);
          auVar81 = NEON_smax(auVar93,auVar163 ^ (auVar163 ^ auVar161) & auVar83,4);
          if (1 < uVar46) {
            if (uVar47 != 0) {
              if (uVar47 != 1) {
                pauVar52 = pauVar53;
                pauVar75 = pauVar76;
                if (uVar47 != 2) {
                  pauVar75 = pauVar67 + 2;
                  lVar1 = *(long *)((long)pauVar67[1] + 8);
                  bVar44 = (byte)((ulong)lVar1 >> 8);
                  bVar105 = (byte)((ulong)lVar1 >> 0x10);
                  bVar106 = (byte)((ulong)lVar1 >> 0x18);
                  bVar107 = (byte)((ulong)lVar1 >> 0x20);
                  bVar108 = (byte)((ulong)lVar1 >> 0x28);
                  bVar109 = (byte)((ulong)lVar1 >> 0x30);
                  bVar110 = (byte)((ulong)lVar1 >> 0x38);
                  lVar72 = *(long *)*pauVar76;
                  uVar48 = 2;
                  pauVar52 = pauVar80 + 2;
                  auVar163 = *pauVar53;
                  auVar103[0] = ~(byte)lVar72;
                  auVar103[1] = ~(byte)((ulong)lVar72 >> 8);
                  auVar103[2] = ~(byte)((ulong)lVar72 >> 0x10);
                  auVar103[3] = ~(byte)((ulong)lVar72 >> 0x18);
                  auVar103[4] = ~(byte)((ulong)lVar72 >> 0x20);
                  auVar103[5] = ~(byte)((ulong)lVar72 >> 0x28);
                  auVar103[6] = ~(byte)((ulong)lVar72 >> 0x30);
                  auVar103[7] = ~(byte)((ulong)lVar72 >> 0x38);
                  auVar103[8] = ~(byte)lVar1;
                  auVar103[9] = ~bVar44;
                  auVar103[10] = ~bVar105;
                  auVar103[0xb] = ~bVar106;
                  auVar103[0xc] = ~bVar107;
                  auVar103[0xd] = ~bVar108;
                  auVar103[0xe] = ~bVar109;
                  auVar103[0xf] = ~bVar110;
                  auVar112._0_4_ = -(uint)(-1 < (int)lVar72);
                  auVar112._4_4_ = -(uint)(-1 < lVar72);
                  auVar112._8_4_ = -(uint)(-1 < (int)lVar1);
                  auVar112._12_4_ = -(uint)(-1 < lVar1);
                  auVar122._0_4_ = -(uint)(-1 < auVar163._0_4_);
                  auVar122._4_4_ = -(uint)(-1 < auVar163._4_4_);
                  auVar122._8_4_ = -(uint)(-1 < auVar163._8_4_);
                  auVar122._12_4_ = -(uint)(-1 < auVar163._12_4_);
                  auVar161[9] = bVar44;
                  auVar161._0_9_ = *(unkbyte9 *)*pauVar76;
                  auVar161[10] = bVar105;
                  auVar161[0xb] = bVar106;
                  auVar161[0xc] = bVar107;
                  auVar161[0xd] = bVar108;
                  auVar161[0xe] = bVar109;
                  auVar161[0xf] = bVar110;
                  auVar16[1] = ~auVar163[1];
                  auVar16[0] = ~auVar163[0];
                  auVar16[2] = ~auVar163[2];
                  auVar16[3] = ~auVar163[3];
                  auVar16[4] = ~auVar163[4];
                  auVar16[5] = ~auVar163[5];
                  auVar16[6] = ~auVar163[6];
                  auVar16[7] = ~auVar163[7];
                  auVar16[8] = ~auVar163[8];
                  auVar16[9] = ~auVar163[9];
                  auVar16[10] = ~auVar163[10];
                  auVar16[0xb] = ~auVar163[0xb];
                  auVar16[0xc] = ~auVar163[0xc];
                  auVar16[0xd] = ~auVar163[0xd];
                  auVar16[0xe] = ~auVar163[0xe];
                  auVar16[0xf] = ~auVar163[0xf];
                  auVar17[1] = ~auVar163[1];
                  auVar17[0] = ~auVar163[0];
                  auVar17[2] = ~auVar163[2];
                  auVar17[3] = ~auVar163[3];
                  auVar17[4] = ~auVar163[4];
                  auVar17[5] = ~auVar163[5];
                  auVar17[6] = ~auVar163[6];
                  auVar17[7] = ~auVar163[7];
                  auVar17[8] = ~auVar163[8];
                  auVar17[9] = ~auVar163[9];
                  auVar17[10] = ~auVar163[10];
                  auVar17[0xb] = ~auVar163[0xb];
                  auVar17[0xc] = ~auVar163[0xc];
                  auVar17[0xd] = ~auVar163[0xd];
                  auVar17[0xe] = ~auVar163[0xe];
                  auVar17[0xf] = ~auVar163[0xf];
                  auVar87 = NEON_smax(auVar87,auVar103 ^ (auVar103 ^ auVar161) & auVar112,4);
                  auVar81 = NEON_smax(auVar81,auVar17 ^ (auVar16 ^ auVar163) & auVar122,4);
                }
                pauVar76 = pauVar75 + 1;
                lVar1 = *(long *)((long)*pauVar75 + 8);
                bVar44 = (byte)((ulong)lVar1 >> 8);
                bVar105 = (byte)((ulong)lVar1 >> 0x10);
                bVar106 = (byte)((ulong)lVar1 >> 0x18);
                bVar107 = (byte)((ulong)lVar1 >> 0x20);
                bVar108 = (byte)((ulong)lVar1 >> 0x28);
                bVar109 = (byte)((ulong)lVar1 >> 0x30);
                bVar110 = (byte)((ulong)lVar1 >> 0x38);
                lVar72 = *(long *)*pauVar75;
                uVar48 = uVar48 + 1;
                pauVar53 = pauVar52 + 1;
                lVar3 = *(long *)((long)*pauVar52 + 8);
                bVar114 = (byte)((ulong)lVar3 >> 8);
                bVar115 = (byte)((ulong)lVar3 >> 0x10);
                bVar116 = (byte)((ulong)lVar3 >> 0x18);
                bVar117 = (byte)((ulong)lVar3 >> 0x20);
                bVar118 = (byte)((ulong)lVar3 >> 0x28);
                bVar119 = (byte)((ulong)lVar3 >> 0x30);
                bVar120 = (byte)((ulong)lVar3 >> 0x38);
                lVar2 = *(long *)*pauVar52;
                bVar125 = ~(byte)((ulong)lVar72 >> 8);
                bVar126 = ~(byte)((ulong)lVar72 >> 0x10);
                bVar127 = ~(byte)((ulong)lVar72 >> 0x18);
                bVar128 = ~(byte)((ulong)lVar72 >> 0x20);
                bVar129 = ~(byte)((ulong)lVar72 >> 0x28);
                bVar130 = ~(byte)((ulong)lVar72 >> 0x30);
                bVar131 = ~(byte)((ulong)lVar72 >> 0x38);
                bVar132 = ~bVar44;
                bVar133 = ~bVar105;
                bVar134 = ~bVar106;
                bVar135 = ~bVar107;
                bVar136 = ~bVar108;
                bVar137 = ~bVar109;
                bVar138 = ~bVar110;
                auVar139._0_4_ = -(uint)(-1 < (int)lVar72);
                auVar139._4_4_ = -(uint)(-1 < lVar72);
                auVar139._8_4_ = -(uint)(-1 < (int)lVar1);
                auVar139._12_4_ = -(uint)(-1 < lVar1);
                bVar141 = ~(byte)((ulong)lVar2 >> 8);
                bVar142 = ~(byte)((ulong)lVar2 >> 0x10);
                bVar143 = ~(byte)((ulong)lVar2 >> 0x18);
                bVar144 = ~(byte)((ulong)lVar2 >> 0x20);
                bVar145 = ~(byte)((ulong)lVar2 >> 0x28);
                bVar146 = ~(byte)((ulong)lVar2 >> 0x30);
                bVar147 = ~(byte)((ulong)lVar2 >> 0x38);
                bVar148 = ~bVar114;
                bVar149 = ~bVar115;
                bVar150 = ~bVar116;
                bVar151 = ~bVar117;
                bVar152 = ~bVar118;
                bVar153 = ~bVar119;
                bVar154 = ~bVar120;
                auVar155._0_4_ = -(uint)(-1 < (int)lVar2);
                auVar155._4_4_ = -(uint)(-1 < lVar2);
                auVar155._8_4_ = -(uint)(-1 < (int)lVar3);
                auVar155._12_4_ = -(uint)(-1 < lVar3);
                auVar19[9] = bVar44;
                auVar19._0_9_ = *(unkbyte9 *)*pauVar75;
                auVar19[10] = bVar105;
                auVar19[0xb] = bVar106;
                auVar19[0xc] = bVar107;
                auVar19[0xd] = bVar108;
                auVar19[0xe] = bVar109;
                auVar19[0xf] = bVar110;
                auVar26[1] = bVar125;
                auVar26[0] = ~(byte)lVar72;
                auVar26[2] = bVar126;
                auVar26[3] = bVar127;
                auVar26[4] = bVar128;
                auVar26[5] = bVar129;
                auVar26[6] = bVar130;
                auVar26[7] = bVar131;
                auVar26[8] = ~(byte)lVar1;
                auVar26[9] = bVar132;
                auVar26[10] = bVar133;
                auVar26[0xb] = bVar134;
                auVar26[0xc] = bVar135;
                auVar26[0xd] = bVar136;
                auVar26[0xe] = bVar137;
                auVar26[0xf] = bVar138;
                auVar27[1] = bVar125;
                auVar27[0] = ~(byte)lVar72;
                auVar27[2] = bVar126;
                auVar27[3] = bVar127;
                auVar27[4] = bVar128;
                auVar27[5] = bVar129;
                auVar27[6] = bVar130;
                auVar27[7] = bVar131;
                auVar27[8] = ~(byte)lVar1;
                auVar27[9] = bVar132;
                auVar27[10] = bVar133;
                auVar27[0xb] = bVar134;
                auVar27[0xc] = bVar135;
                auVar27[0xd] = bVar136;
                auVar27[0xe] = bVar137;
                auVar27[0xf] = bVar138;
                auVar21[9] = bVar114;
                auVar21._0_9_ = *(unkbyte9 *)*pauVar52;
                auVar21[10] = bVar115;
                auVar21[0xb] = bVar116;
                auVar21[0xc] = bVar117;
                auVar21[0xd] = bVar118;
                auVar21[0xe] = bVar119;
                auVar21[0xf] = bVar120;
                auVar30[1] = bVar141;
                auVar30[0] = ~(byte)lVar2;
                auVar30[2] = bVar142;
                auVar30[3] = bVar143;
                auVar30[4] = bVar144;
                auVar30[5] = bVar145;
                auVar30[6] = bVar146;
                auVar30[7] = bVar147;
                auVar30[8] = ~(byte)lVar3;
                auVar30[9] = bVar148;
                auVar30[10] = bVar149;
                auVar30[0xb] = bVar150;
                auVar30[0xc] = bVar151;
                auVar30[0xd] = bVar152;
                auVar30[0xe] = bVar153;
                auVar30[0xf] = bVar154;
                auVar31[1] = bVar141;
                auVar31[0] = ~(byte)lVar2;
                auVar31[2] = bVar142;
                auVar31[3] = bVar143;
                auVar31[4] = bVar144;
                auVar31[5] = bVar145;
                auVar31[6] = bVar146;
                auVar31[7] = bVar147;
                auVar31[8] = ~(byte)lVar3;
                auVar31[9] = bVar148;
                auVar31[10] = bVar149;
                auVar31[0xb] = bVar150;
                auVar31[0xc] = bVar151;
                auVar31[0xd] = bVar152;
                auVar31[0xe] = bVar153;
                auVar31[0xf] = bVar154;
                auVar87 = NEON_smax(auVar87,auVar27 ^ (auVar26 ^ auVar19) & auVar139,4);
                auVar81 = NEON_smax(auVar81,auVar31 ^ (auVar30 ^ auVar21) & auVar155,4);
              }
              auVar161 = *pauVar76;
              uVar48 = uVar48 + 1;
              lVar1 = *(long *)((long)*pauVar53 + 8);
              bVar44 = (byte)((ulong)lVar1 >> 8);
              bVar105 = (byte)((ulong)lVar1 >> 0x10);
              bVar106 = (byte)((ulong)lVar1 >> 0x18);
              bVar107 = (byte)((ulong)lVar1 >> 0x20);
              bVar108 = (byte)((ulong)lVar1 >> 0x28);
              bVar109 = (byte)((ulong)lVar1 >> 0x30);
              bVar110 = (byte)((ulong)lVar1 >> 0x38);
              lVar72 = *(long *)*pauVar53;
              auVar160[0] = ~auVar161[0];
              auVar160[1] = ~auVar161[1];
              auVar160[2] = ~auVar161[2];
              auVar160[3] = ~auVar161[3];
              auVar160[4] = ~auVar161[4];
              auVar160[5] = ~auVar161[5];
              auVar160[6] = ~auVar161[6];
              auVar160[7] = ~auVar161[7];
              auVar160[8] = ~auVar161[8];
              auVar160[9] = ~auVar161[9];
              auVar160[10] = ~auVar161[10];
              auVar160[0xb] = ~auVar161[0xb];
              auVar160[0xc] = ~auVar161[0xc];
              auVar160[0xd] = ~auVar161[0xd];
              auVar160[0xe] = ~auVar161[0xe];
              auVar160[0xf] = ~auVar161[0xf];
              auVar162._0_4_ = -(uint)(-1 < auVar161._0_4_);
              auVar162._4_4_ = -(uint)(-1 < auVar161._4_4_);
              auVar162._8_4_ = -(uint)(-1 < auVar161._8_4_);
              auVar162._12_4_ = -(uint)(-1 < auVar161._12_4_);
              auVar98[0] = ~(byte)lVar72;
              auVar98[1] = ~(byte)((ulong)lVar72 >> 8);
              auVar98[2] = ~(byte)((ulong)lVar72 >> 0x10);
              auVar98[3] = ~(byte)((ulong)lVar72 >> 0x18);
              auVar98[4] = ~(byte)((ulong)lVar72 >> 0x20);
              auVar98[5] = ~(byte)((ulong)lVar72 >> 0x28);
              auVar98[6] = ~(byte)((ulong)lVar72 >> 0x30);
              auVar98[7] = ~(byte)((ulong)lVar72 >> 0x38);
              auVar98[8] = ~(byte)lVar1;
              auVar98[9] = ~bVar44;
              auVar98[10] = ~bVar105;
              auVar98[0xb] = ~bVar106;
              auVar98[0xc] = ~bVar107;
              auVar98[0xd] = ~bVar108;
              auVar98[0xe] = ~bVar109;
              auVar98[0xf] = ~bVar110;
              auVar94._0_4_ = -(uint)(-1 < (int)lVar72);
              auVar94._4_4_ = -(uint)(-1 < lVar72);
              auVar94._8_4_ = -(uint)(-1 < (int)lVar1);
              auVar94._12_4_ = -(uint)(-1 < lVar1);
              auVar35[9] = bVar44;
              auVar35._0_9_ = *(unkbyte9 *)*pauVar53;
              auVar35[10] = bVar105;
              auVar35[0xb] = bVar106;
              auVar35[0xc] = bVar107;
              auVar35[0xd] = bVar108;
              auVar35[0xe] = bVar109;
              auVar35[0xf] = bVar110;
              auVar87 = NEON_smax(auVar87,auVar160 ^ (auVar160 ^ auVar161) & auVar162,4);
              auVar81 = NEON_smax(auVar81,auVar98 ^ (auVar98 ^ auVar35) & auVar94,4);
              pauVar53 = pauVar53 + 1;
              pauVar76 = pauVar76 + 1;
              if (uVar46 <= uVar48) goto LAB_0013203c;
            }
            do {
              auVar161 = *pauVar76;
              uVar48 = uVar48 + 4;
              auVar163 = *pauVar53;
              auVar83 = pauVar76[3];
              lVar3 = *(long *)((long)pauVar53[3] + 8);
              bVar114 = (byte)((ulong)lVar3 >> 8);
              bVar115 = (byte)((ulong)lVar3 >> 0x10);
              bVar116 = (byte)((ulong)lVar3 >> 0x18);
              bVar117 = (byte)((ulong)lVar3 >> 0x20);
              bVar118 = (byte)((ulong)lVar3 >> 0x28);
              bVar119 = (byte)((ulong)lVar3 >> 0x30);
              bVar120 = (byte)((ulong)lVar3 >> 0x38);
              lVar2 = *(long *)pauVar53[3];
              lVar1 = *(long *)((long)pauVar76[1] + 8);
              bVar44 = (byte)((ulong)lVar1 >> 8);
              bVar105 = (byte)((ulong)lVar1 >> 0x10);
              bVar106 = (byte)((ulong)lVar1 >> 0x18);
              bVar107 = (byte)((ulong)lVar1 >> 0x20);
              bVar108 = (byte)((ulong)lVar1 >> 0x28);
              bVar109 = (byte)((ulong)lVar1 >> 0x30);
              bVar110 = (byte)((ulong)lVar1 >> 0x38);
              lVar72 = *(long *)pauVar76[1];
              auVar113[0] = ~auVar161[0];
              auVar113[1] = ~auVar161[1];
              auVar113[2] = ~auVar161[2];
              auVar113[3] = ~auVar161[3];
              auVar113[4] = ~auVar161[4];
              auVar113[5] = ~auVar161[5];
              auVar113[6] = ~auVar161[6];
              auVar113[7] = ~auVar161[7];
              auVar113[8] = ~auVar161[8];
              auVar113[9] = ~auVar161[9];
              auVar113[10] = ~auVar161[10];
              auVar113[0xb] = ~auVar161[0xb];
              auVar113[0xc] = ~auVar161[0xc];
              auVar113[0xd] = ~auVar161[0xd];
              auVar113[0xe] = ~auVar161[0xe];
              auVar113[0xf] = ~auVar161[0xf];
              auVar93 = pauVar53[1];
              auVar111[0] = ~auVar163[0];
              auVar111[1] = ~auVar163[1];
              auVar111[2] = ~auVar163[2];
              auVar111[3] = ~auVar163[3];
              auVar111[4] = ~auVar163[4];
              auVar111[5] = ~auVar163[5];
              auVar111[6] = ~auVar163[6];
              auVar111[7] = ~auVar163[7];
              auVar111[8] = ~auVar163[8];
              auVar111[9] = ~auVar163[9];
              auVar111[10] = ~auVar163[10];
              auVar111[0xb] = ~auVar163[0xb];
              auVar111[0xc] = ~auVar163[0xc];
              auVar111[0xd] = ~auVar163[0xd];
              auVar111[0xe] = ~auVar163[0xe];
              auVar111[0xf] = ~auVar163[0xf];
              auVar90._0_4_ = -(uint)(-1 < auVar161._0_4_);
              auVar90._4_4_ = -(uint)(-1 < auVar161._4_4_);
              auVar90._8_4_ = -(uint)(-1 < auVar161._8_4_);
              auVar90._12_4_ = -(uint)(-1 < auVar161._12_4_);
              auVar84._0_4_ = -(uint)(-1 < auVar163._0_4_);
              auVar84._4_4_ = -(uint)(-1 < auVar163._4_4_);
              auVar84._8_4_ = -(uint)(-1 < auVar163._8_4_);
              auVar84._12_4_ = -(uint)(-1 < auVar163._12_4_);
              auVar140._0_8_ = CONCAT44(-(uint)(-1 < auVar83._4_4_),-(uint)(-1 < auVar83._0_4_));
              auVar140._8_4_ = -(uint)(-1 < auVar83._8_4_);
              auVar140._12_4_ = -(uint)(-1 < auVar83._12_4_);
              auVar156._0_8_ = CONCAT44(-(uint)(-1 < lVar72),-(uint)(-1 < (int)lVar72));
              auVar156._8_4_ = -(uint)(-1 < (int)lVar1);
              auVar156._12_4_ = -(uint)(-1 < lVar1);
              lVar5 = *(long *)((long)pauVar76[2] + 8);
              bVar125 = (byte)((ulong)lVar5 >> 8);
              bVar126 = (byte)((ulong)lVar5 >> 0x10);
              bVar127 = (byte)((ulong)lVar5 >> 0x18);
              bVar128 = (byte)((ulong)lVar5 >> 0x20);
              bVar129 = (byte)((ulong)lVar5 >> 0x28);
              bVar130 = (byte)((ulong)lVar5 >> 0x30);
              bVar131 = (byte)((ulong)lVar5 >> 0x38);
              lVar4 = *(long *)pauVar76[2];
              lVar7 = *(long *)((long)pauVar53[2] + 8);
              bVar148 = (byte)((ulong)lVar7 >> 8);
              bVar149 = (byte)((ulong)lVar7 >> 0x10);
              bVar150 = (byte)((ulong)lVar7 >> 0x18);
              bVar151 = (byte)((ulong)lVar7 >> 0x20);
              bVar152 = (byte)((ulong)lVar7 >> 0x28);
              bVar153 = (byte)((ulong)lVar7 >> 0x30);
              bVar154 = (byte)((ulong)lVar7 >> 0x38);
              lVar6 = *(long *)pauVar53[2];
              bVar132 = ~(byte)((ulong)lVar72 >> 8);
              bVar133 = ~(byte)((ulong)lVar72 >> 0x10);
              bVar134 = ~(byte)((ulong)lVar72 >> 0x18);
              bVar135 = ~(byte)((ulong)lVar72 >> 0x20);
              bVar136 = ~(byte)((ulong)lVar72 >> 0x28);
              bVar137 = ~(byte)((ulong)lVar72 >> 0x30);
              bVar138 = ~(byte)((ulong)lVar72 >> 0x38);
              bVar141 = ~bVar44;
              bVar142 = ~bVar105;
              bVar143 = ~bVar106;
              bVar144 = ~bVar107;
              bVar145 = ~bVar108;
              bVar146 = ~bVar109;
              bVar147 = ~bVar110;
              auVar158[0] = ~auVar93[0];
              auVar158[1] = ~auVar93[1];
              auVar158[2] = ~auVar93[2];
              auVar158[3] = ~auVar93[3];
              auVar158[4] = ~auVar93[4];
              auVar158[5] = ~auVar93[5];
              auVar158[6] = ~auVar93[6];
              auVar158[7] = ~auVar93[7];
              auVar158[8] = ~auVar93[8];
              auVar158[9] = ~auVar93[9];
              auVar158[10] = ~auVar93[10];
              auVar158[0xb] = ~auVar93[0xb];
              auVar158[0xc] = ~auVar93[0xc];
              auVar158[0xd] = ~auVar93[0xd];
              auVar158[0xe] = ~auVar93[0xe];
              auVar158[0xf] = ~auVar93[0xf];
              iVar38 = -(uint)(-1 < auVar93._4_4_);
              iVar39 = -(uint)(-1 < auVar93._8_4_);
              iVar41 = -(uint)(-1 < auVar93._12_4_);
              auVar99._8_8_ = auVar156._8_8_;
              auVar99._0_8_ = auVar156._0_8_;
              auVar161 = NEON_smax(auVar87,auVar113 ^ (auVar113 ^ auVar161) & auVar90,4);
              auVar163 = NEON_smax(auVar81,auVar111 ^ (auVar111 ^ auVar163) & auVar84,4);
              auVar36[4] = (char)iVar38;
              auVar36._0_4_ = -(uint)(-1 < auVar93._0_4_);
              auVar36[5] = (char)((uint)iVar38 >> 8);
              auVar36[6] = (char)((uint)iVar38 >> 0x10);
              auVar36[7] = (char)((uint)iVar38 >> 0x18);
              auVar36[8] = (char)iVar39;
              auVar36[9] = (char)((uint)iVar39 >> 8);
              auVar36[10] = (char)((uint)iVar39 >> 0x10);
              auVar36[0xb] = (char)((uint)iVar39 >> 0x18);
              auVar36[0xc] = (char)iVar41;
              auVar36[0xd] = (char)((uint)iVar41 >> 8);
              auVar36[0xe] = (char)((uint)iVar41 >> 0x10);
              auVar36[0xf] = (char)((uint)iVar41 >> 0x18);
              auVar81[9] = bVar44;
              auVar81._0_9_ = *(unkbyte9 *)pauVar76[1];
              auVar81[10] = bVar105;
              auVar81[0xb] = bVar106;
              auVar81[0xc] = bVar107;
              auVar81[0xd] = bVar108;
              auVar81[0xe] = bVar109;
              auVar81[0xf] = bVar110;
              auVar28[1] = bVar132;
              auVar28[0] = ~(byte)lVar72;
              auVar28[2] = bVar133;
              auVar28[3] = bVar134;
              auVar28[4] = bVar135;
              auVar28[5] = bVar136;
              auVar28[6] = bVar137;
              auVar28[7] = bVar138;
              auVar28[8] = ~(byte)lVar1;
              auVar28[9] = bVar141;
              auVar28[10] = bVar142;
              auVar28[0xb] = bVar143;
              auVar28[0xc] = bVar144;
              auVar28[0xd] = bVar145;
              auVar28[0xe] = bVar146;
              auVar28[0xf] = bVar147;
              auVar29[1] = bVar132;
              auVar29[0] = ~(byte)lVar72;
              auVar29[2] = bVar133;
              auVar29[3] = bVar134;
              auVar29[4] = bVar135;
              auVar29[5] = bVar136;
              auVar29[6] = bVar137;
              auVar29[7] = bVar138;
              auVar29[8] = ~(byte)lVar1;
              auVar29[9] = bVar141;
              auVar29[10] = bVar142;
              auVar29[0xb] = bVar143;
              auVar29[0xc] = bVar144;
              auVar29[0xd] = bVar145;
              auVar29[0xe] = bVar146;
              auVar29[0xf] = bVar147;
              auVar82._0_4_ = -(uint)(-1 < (int)lVar6);
              auVar82._4_4_ = -(uint)(-1 < lVar6);
              auVar82._8_4_ = -(uint)(-1 < (int)lVar7);
              auVar82._12_4_ = -(uint)(-1 < lVar7);
              auVar95[0] = ~(byte)lVar4;
              auVar95[1] = ~(byte)((ulong)lVar4 >> 8);
              auVar95[2] = ~(byte)((ulong)lVar4 >> 0x10);
              auVar95[3] = ~(byte)((ulong)lVar4 >> 0x18);
              auVar95[4] = ~(byte)((ulong)lVar4 >> 0x20);
              auVar95[5] = ~(byte)((ulong)lVar4 >> 0x28);
              auVar95[6] = ~(byte)((ulong)lVar4 >> 0x30);
              auVar95[7] = ~(byte)((ulong)lVar4 >> 0x38);
              auVar95[8] = ~(byte)lVar5;
              auVar95[9] = ~bVar125;
              auVar95[10] = ~bVar126;
              auVar95[0xb] = ~bVar127;
              auVar95[0xc] = ~bVar128;
              auVar95[0xd] = ~bVar129;
              auVar95[0xe] = ~bVar130;
              auVar95[0xf] = ~bVar131;
              auVar88._0_4_ = -(uint)(-1 < (int)lVar4);
              auVar88._4_4_ = -(uint)(-1 < lVar4);
              auVar88._8_4_ = -(uint)(-1 < (int)lVar5);
              auVar88._12_4_ = -(uint)(-1 < lVar5);
              auVar102[0] = ~(byte)lVar6;
              auVar102[1] = ~(byte)((ulong)lVar6 >> 8);
              auVar102[2] = ~(byte)((ulong)lVar6 >> 0x10);
              auVar102[3] = ~(byte)((ulong)lVar6 >> 0x18);
              auVar102[4] = ~(byte)((ulong)lVar6 >> 0x20);
              auVar102[5] = ~(byte)((ulong)lVar6 >> 0x28);
              auVar102[6] = ~(byte)((ulong)lVar6 >> 0x30);
              auVar102[7] = ~(byte)((ulong)lVar6 >> 0x38);
              auVar102[8] = ~(byte)lVar7;
              auVar102[9] = ~bVar148;
              auVar102[10] = ~bVar149;
              auVar102[0xb] = ~bVar150;
              auVar102[0xc] = ~bVar151;
              auVar102[0xd] = ~bVar152;
              auVar102[0xe] = ~bVar153;
              auVar102[0xf] = ~bVar154;
              auVar161 = NEON_smax(auVar161,auVar29 ^ (auVar28 ^ auVar81) & auVar99,4);
              auVar20[9] = bVar125;
              auVar20._0_9_ = *(unkbyte9 *)pauVar76[2];
              auVar20[10] = bVar126;
              auVar20[0xb] = bVar127;
              auVar20[0xc] = bVar128;
              auVar20[0xd] = bVar129;
              auVar20[0xe] = bVar130;
              auVar20[0xf] = bVar131;
              auVar32[9] = bVar148;
              auVar32._0_9_ = *(unkbyte9 *)pauVar53[2];
              auVar32[10] = bVar149;
              auVar32[0xb] = bVar150;
              auVar32[0xc] = bVar151;
              auVar32[0xd] = bVar152;
              auVar32[0xe] = bVar153;
              auVar32[0xf] = bVar154;
              auVar81 = NEON_smax(auVar163,auVar158 ^ (auVar158 ^ auVar93) & auVar36,4);
              auVar91[0] = ~(byte)lVar2;
              auVar91[1] = ~(byte)((ulong)lVar2 >> 8);
              auVar91[2] = ~(byte)((ulong)lVar2 >> 0x10);
              auVar91[3] = ~(byte)((ulong)lVar2 >> 0x18);
              auVar91[4] = ~(byte)((ulong)lVar2 >> 0x20);
              auVar91[5] = ~(byte)((ulong)lVar2 >> 0x28);
              auVar91[6] = ~(byte)((ulong)lVar2 >> 0x30);
              auVar91[7] = ~(byte)((ulong)lVar2 >> 0x38);
              auVar91[8] = ~(byte)lVar3;
              auVar91[9] = ~bVar114;
              auVar91[10] = ~bVar115;
              auVar91[0xb] = ~bVar116;
              auVar91[0xc] = ~bVar117;
              auVar91[0xd] = ~bVar118;
              auVar91[0xe] = ~bVar119;
              auVar91[0xf] = ~bVar120;
              iVar38 = -(uint)(-1 < lVar2);
              iVar39 = -(uint)(-1 < (int)lVar3);
              iVar41 = -(uint)(-1 < lVar3);
              auVar85._8_8_ = auVar140._8_8_;
              auVar85._0_8_ = auVar140._0_8_;
              auVar161 = NEON_smax(auVar161,auVar95 ^ (auVar95 ^ auVar20) & auVar88,4);
              auVar81 = NEON_smax(auVar81,auVar102 ^ (auVar102 ^ auVar32) & auVar82,4);
              auVar18[9] = bVar114;
              auVar18._0_9_ = *(unkbyte9 *)pauVar53[3];
              auVar18[10] = bVar115;
              auVar18[0xb] = bVar116;
              auVar18[0xc] = bVar117;
              auVar18[0xd] = bVar118;
              auVar18[0xe] = bVar119;
              auVar18[0xf] = bVar120;
              auVar13[4] = (char)iVar38;
              auVar13._0_4_ = -(uint)(-1 < (int)lVar2);
              auVar13[5] = (char)((uint)iVar38 >> 8);
              auVar13[6] = (char)((uint)iVar38 >> 0x10);
              auVar13[7] = (char)((uint)iVar38 >> 0x18);
              auVar13[8] = (char)iVar39;
              auVar13[9] = (char)((uint)iVar39 >> 8);
              auVar13[10] = (char)((uint)iVar39 >> 0x10);
              auVar13[0xb] = (char)((uint)iVar39 >> 0x18);
              auVar13[0xc] = (char)iVar41;
              auVar13[0xd] = (char)((uint)iVar41 >> 8);
              auVar13[0xe] = (char)((uint)iVar41 >> 0x10);
              auVar13[0xf] = (char)((uint)iVar41 >> 0x18);
              auVar22[1] = ~auVar83[1];
              auVar22[0] = ~auVar83[0];
              auVar22[2] = ~auVar83[2];
              auVar22[3] = ~auVar83[3];
              auVar22[4] = ~auVar83[4];
              auVar22[5] = ~auVar83[5];
              auVar22[6] = ~auVar83[6];
              auVar22[7] = ~auVar83[7];
              auVar22[8] = ~auVar83[8];
              auVar22[9] = ~auVar83[9];
              auVar22[10] = ~auVar83[10];
              auVar22[0xb] = ~auVar83[0xb];
              auVar22[0xc] = ~auVar83[0xc];
              auVar22[0xd] = ~auVar83[0xd];
              auVar22[0xe] = ~auVar83[0xe];
              auVar22[0xf] = ~auVar83[0xf];
              auVar23[1] = ~auVar83[1];
              auVar23[0] = ~auVar83[0];
              auVar23[2] = ~auVar83[2];
              auVar23[3] = ~auVar83[3];
              auVar23[4] = ~auVar83[4];
              auVar23[5] = ~auVar83[5];
              auVar23[6] = ~auVar83[6];
              auVar23[7] = ~auVar83[7];
              auVar23[8] = ~auVar83[8];
              auVar23[9] = ~auVar83[9];
              auVar23[10] = ~auVar83[10];
              auVar23[0xb] = ~auVar83[0xb];
              auVar23[0xc] = ~auVar83[0xc];
              auVar23[0xd] = ~auVar83[0xd];
              auVar23[0xe] = ~auVar83[0xe];
              auVar23[0xf] = ~auVar83[0xf];
              auVar81 = NEON_smax(auVar81,auVar91 ^ (auVar91 ^ auVar18) & auVar13,4);
              auVar87 = NEON_smax(auVar161,auVar23 ^ (auVar22 ^ auVar83) & auVar85,4);
              pauVar53 = pauVar53 + 4;
              pauVar76 = pauVar76 + 4;
            } while (uVar48 < uVar46);
          }
LAB_0013203c:
          uVar121 = NEON_smaxv(auVar81,4);
          uVar48 = NEON_smaxv(auVar87,4);
          uVar55 = (ulong)((int)uVar55 + uVar46 * 4);
          uVar73 = (ulong)uVar121;
          uVar74 = (ulong)uVar48;
          if (uVar46 * 4 == iVar54) goto LAB_001320f4;
        }
        uVar46 = (int)uVar55 + 1;
        uVar47 = puVar57[uVar55];
        uVar12 = puVar59[uVar55];
        if ((int)uVar47 < 0) {
          uVar47 = ~uVar47;
        }
        if ((int)uVar48 < (int)uVar47) {
          uVar48 = uVar47;
        }
        uVar74 = (ulong)uVar48;
        if ((int)uVar12 < 0) {
          uVar12 = ~uVar12;
        }
        if ((int)uVar121 < (int)uVar12) {
          uVar121 = uVar12;
        }
        uVar73 = (ulong)uVar121;
        if (uVar46 < uVar11) {
          uVar47 = (int)uVar55 + 2;
          uVar12 = puVar57[uVar46];
          uVar46 = puVar59[uVar46];
          if ((int)uVar12 < 0) {
            uVar12 = ~uVar12;
          }
          if ((int)uVar48 < (int)uVar12) {
            uVar48 = uVar12;
          }
          uVar74 = (ulong)uVar48;
          if ((int)uVar46 < 0) {
            uVar46 = ~uVar46;
          }
          if ((int)uVar121 < (int)uVar46) {
            uVar121 = uVar46;
          }
          uVar73 = (ulong)uVar121;
          if (uVar47 < uVar11) {
            uVar46 = puVar57[uVar47];
            uVar47 = puVar59[uVar47];
            if ((int)uVar46 < 0) {
              uVar46 = ~uVar46;
            }
            if ((int)uVar48 < (int)uVar46) {
              uVar48 = uVar46;
            }
            uVar74 = (ulong)uVar48;
            if ((int)uVar47 < 0) {
              uVar47 = ~uVar47;
            }
            if ((int)uVar121 < (int)uVar47) {
              uVar121 = uVar47;
            }
            uVar73 = (ulong)uVar121;
          }
        }
      }
LAB_001320f4:
      uVar48 = ARM::VIRTUALREGISTER_GetRegM('\0',0xfc);
      if ((uVar48 & 0xff) < ((uint)(uVar74 >> 7) & 0xff)) {
        ARM::VIRTUALREGISTER_SetRegM('\0',0xfc,(uchar)(uVar74 >> 7));
      }
      uVar48 = ARM::VIRTUALREGISTER_GetRegM('\0',0xfd);
      if ((uVar48 & 0xff) < ((uint)(uVar73 >> 7) & 0xff)) {
        ARM::VIRTUALREGISTER_SetRegM('\0',0xfd,(uchar)(uVar73 >> 7));
      }
      if (uVar11 != 0) {
        puVar56 = *(undefined4 **)PTR_gOutBuf_005673d0;
        puVar58 = *(undefined4 **)(PTR_gOutBuf_005673d0 + 8);
        if ((param_1 < param_2 + 8 && param_2 < param_1 + 8) || (uVar11 < 10)) {
          *param_1 = (short)*puVar56;
          uVar48 = uVar11 - 1 & 7;
          *param_2 = (short)*puVar58;
          lVar72 = 1;
          if (1 < uVar11) {
            if (uVar48 != 0) {
              if (uVar48 != 1) {
                if (uVar48 != 2) {
                  if (uVar48 != 3) {
                    if (uVar48 != 4) {
                      if (uVar48 != 5) {
                        if (uVar48 != 6) {
                          lVar72 = 2;
                          param_1[1] = (short)puVar56[1];
                          param_2[1] = (short)puVar58[1];
                        }
                        param_1[lVar72] = (short)puVar56[lVar72];
                        param_2[lVar72] = (short)puVar58[lVar72];
                        lVar72 = lVar72 + 1;
                      }
                      param_1[lVar72] = (short)puVar56[lVar72];
                      param_2[lVar72] = (short)puVar58[lVar72];
                      lVar72 = lVar72 + 1;
                    }
                    param_1[lVar72] = (short)puVar56[lVar72];
                    param_2[lVar72] = (short)puVar58[lVar72];
                    lVar72 = lVar72 + 1;
                  }
                  param_1[lVar72] = (short)puVar56[lVar72];
                  param_2[lVar72] = (short)puVar58[lVar72];
                  lVar72 = lVar72 + 1;
                }
                param_1[lVar72] = (short)puVar56[lVar72];
                param_2[lVar72] = (short)puVar58[lVar72];
                lVar72 = lVar72 + 1;
              }
              param_1[lVar72] = (short)puVar56[lVar72];
              param_2[lVar72] = (short)puVar58[lVar72];
              lVar72 = lVar72 + 1;
              if (uVar11 <= (uint)lVar72) goto LAB_00132518;
            }
            do {
              lVar1 = lVar72 + 1;
              param_1[lVar72] = (short)puVar56[lVar72];
              lVar2 = lVar72 + 2;
              lVar3 = lVar72 + 3;
              param_2[lVar72] = (short)puVar58[lVar72];
              lVar4 = lVar72 + 4;
              lVar5 = lVar72 + 5;
              param_1[lVar1] = (short)puVar56[lVar1];
              lVar6 = lVar72 + 6;
              lVar7 = lVar72 + 7;
              param_2[lVar1] = (short)puVar58[lVar1];
              lVar72 = lVar72 + 8;
              param_1[lVar2] = (short)puVar56[lVar2];
              param_2[lVar2] = (short)puVar58[lVar2];
              param_1[lVar3] = (short)puVar56[lVar3];
              param_2[lVar3] = (short)puVar58[lVar3];
              param_1[lVar4] = (short)puVar56[lVar4];
              param_2[lVar4] = (short)puVar58[lVar4];
              param_1[lVar5] = (short)puVar56[lVar5];
              param_2[lVar5] = (short)puVar58[lVar5];
              param_1[lVar6] = (short)puVar56[lVar6];
              param_2[lVar6] = (short)puVar58[lVar6];
              param_1[lVar7] = (short)puVar56[lVar7];
              param_2[lVar7] = (short)puVar58[lVar7];
            } while ((uint)lVar72 < uVar11);
          }
        }
        else {
          uVar48 = -((uint)((ulong)puVar56 >> 2) & 3) & 3;
          uVar121 = uVar11;
          if (uVar48 < uVar11) {
            uVar121 = uVar48;
          }
          if (uVar121 == 0) {
LAB_00132778:
            uVar49 = (ulong)uVar121;
          }
          else {
            *param_1 = (short)*puVar56;
            *param_2 = (short)*puVar58;
            if (uVar121 == 1) goto LAB_00132778;
            param_1[1] = (short)puVar56[1];
            param_2[1] = (short)puVar58[1];
            if (uVar121 == 3) {
              uVar49 = 3;
              param_1[2] = (short)puVar56[2];
              param_2[2] = (short)puVar58[2];
            }
            else {
              uVar49 = 2;
            }
          }
          uVar46 = (uVar11 - uVar121) - 8 >> 3;
          uVar48 = uVar46 + 1;
          if (uVar11 - 7 != uVar121) {
            uVar47 = 1;
            pauVar53 = (undefined1 (*) [16])(puVar58 + uVar121);
            puVar8 = (undefined8 *)(puVar56 + uVar121);
            uVar25 = puVar8[1];
            uVar24 = *puVar8;
            puVar9 = (undefined8 *)(param_1 + uVar121);
            auVar81 = *pauVar53;
            puVar10 = (undefined8 *)(param_2 + uVar121);
            uVar15 = puVar8[3];
            uVar14 = puVar8[2];
            uVar46 = uVar46 & 3;
            pauVar80 = pauVar53 + 2;
            pauVar67 = (undefined1 (*) [16])(puVar8 + 4);
            uVar34 = *(undefined8 *)((long)pauVar53[1] + 8);
            uVar33 = *(undefined8 *)pauVar53[1];
            puVar79 = puVar9 + 2;
            puVar9[1] = CONCAT17((char)((ulong)uVar15 >> 0x28),
                                 CONCAT16((char)((ulong)uVar15 >> 0x20),
                                          CONCAT15((char)((ulong)uVar15 >> 8),
                                                   CONCAT14((char)uVar15,
                                                            CONCAT13((char)((ulong)uVar14 >> 0x28),
                                                                     CONCAT12((char)((ulong)uVar14
                                                                                    >> 0x20),
                                                                              (short)uVar14))))));
            *puVar9 = CONCAT17((char)((ulong)uVar25 >> 0x28),
                               CONCAT16((char)((ulong)uVar25 >> 0x20),
                                        CONCAT15((char)((ulong)uVar25 >> 8),
                                                 CONCAT14((char)uVar25,
                                                          CONCAT13((char)((ulong)uVar24 >> 0x28),
                                                                   CONCAT12((char)((ulong)uVar24 >>
                                                                                  0x20),
                                                                            (short)uVar24))))));
            auVar157._0_8_ =
                 CONCAT26(auVar81._12_2_,
                          CONCAT24(auVar81._8_2_,CONCAT22(auVar81._4_2_,auVar81._0_2_)));
            auVar157._8_2_ = (short)uVar33;
            auVar157._10_2_ = (short)((ulong)uVar33 >> 0x20);
            auVar157._12_2_ = (short)uVar34;
            auVar157._14_2_ = (short)((ulong)uVar34 >> 0x20);
            puVar51 = puVar10 + 2;
            puVar10[1] = auVar157._8_8_;
            *puVar10 = auVar157._0_8_;
            if (1 < uVar48) {
              puVar50 = puVar79;
              if (uVar46 != 0) {
                if (uVar46 != 1) {
                  puVar50 = puVar51;
                  puVar78 = puVar79;
                  if (uVar46 != 2) {
                    auVar81 = *pauVar67;
                    uVar47 = 2;
                    pauVar67 = (undefined1 (*) [16])(puVar8 + 8);
                    auVar161 = *pauVar80;
                    pauVar80 = pauVar53 + 4;
                    auVar163 = pauVar53[3];
                    auVar100._0_8_ =
                         CONCAT26(auVar81._12_2_,
                                  CONCAT24(auVar81._8_2_,CONCAT22(auVar81._4_2_,auVar81._0_2_)));
                    auVar100._8_2_ = (short)puVar8[6];
                    auVar100._10_2_ = (short)((ulong)puVar8[6] >> 0x20);
                    auVar100._12_2_ = (short)puVar8[7];
                    auVar100._14_2_ = (short)((ulong)puVar8[7] >> 0x20);
                    auVar96._0_8_ =
                         CONCAT26(auVar161._12_2_,
                                  CONCAT24(auVar161._8_2_,CONCAT22(auVar161._4_2_,auVar161._0_2_)));
                    auVar96._8_2_ = auVar163._0_2_;
                    auVar96._10_2_ = auVar163._4_2_;
                    auVar96._12_2_ = auVar163._8_2_;
                    auVar96._14_2_ = auVar163._12_2_;
                    puVar78 = puVar9 + 4;
                    puVar9[3] = auVar100._8_8_;
                    *puVar79 = auVar100._0_8_;
                    puVar50 = puVar10 + 4;
                    puVar10[3] = auVar96._8_8_;
                    *puVar51 = auVar96._0_8_;
                  }
                  auVar81 = *pauVar67;
                  uVar47 = uVar47 + 1;
                  pauVar53 = pauVar80 + 1;
                  auVar161 = *pauVar80;
                  pauVar80 = pauVar80 + 2;
                  auVar163 = pauVar67[1];
                  pauVar67 = pauVar67 + 2;
                  auVar83 = *pauVar53;
                  puVar79 = puVar78 + 2;
                  *(short *)(puVar78 + 1) = auVar163._0_2_;
                  *(short *)((long)puVar78 + 10) = auVar163._4_2_;
                  *(short *)((long)puVar78 + 0xc) = auVar163._8_2_;
                  *(short *)((long)puVar78 + 0xe) = auVar163._12_2_;
                  *(short *)puVar78 = auVar81._0_2_;
                  *(short *)((long)puVar78 + 2) = auVar81._4_2_;
                  *(short *)((long)puVar78 + 4) = auVar81._8_2_;
                  *(short *)((long)puVar78 + 6) = auVar81._12_2_;
                  auVar92._0_8_ =
                       CONCAT26(auVar161._12_2_,
                                CONCAT24(auVar161._8_2_,CONCAT22(auVar161._4_2_,auVar161._0_2_)));
                  auVar92._8_2_ = auVar83._0_2_;
                  auVar92._10_2_ = auVar83._4_2_;
                  auVar92._12_2_ = auVar83._8_2_;
                  auVar92._14_2_ = auVar83._12_2_;
                  puVar51 = puVar50 + 2;
                  puVar50[1] = auVar92._8_8_;
                  *puVar50 = auVar92._0_8_;
                }
                puVar9 = (undefined8 *)*pauVar67;
                puVar8 = (undefined8 *)*pauVar67;
                uVar47 = uVar47 + 1;
                pauVar53 = pauVar80 + 1;
                auVar81 = *pauVar80;
                auVar161 = pauVar67[1];
                pauVar80 = pauVar80 + 2;
                pauVar67 = pauVar67 + 2;
                auVar163 = *pauVar53;
                auVar123._0_8_ =
                     CONCAT26((short)((ulong)puVar9[1] >> 0x20),
                              CONCAT24((short)puVar9[1],
                                       CONCAT22((short)((ulong)*puVar8 >> 0x20),(short)*puVar8)));
                auVar123._8_2_ = auVar161._0_2_;
                auVar123._10_2_ = auVar161._4_2_;
                auVar123._12_2_ = auVar161._8_2_;
                auVar123._14_2_ = auVar161._12_2_;
                puVar50 = puVar79 + 2;
                puVar79[1] = auVar123._8_8_;
                *puVar79 = auVar123._0_8_;
                puVar51[1] = CONCAT17(auVar163[0xd],
                                      CONCAT16(auVar163[0xc],
                                               CONCAT15(auVar163[9],
                                                        CONCAT14(auVar163[8],
                                                                 CONCAT13(auVar163[5],
                                                                          CONCAT12(auVar163[4],
                                                                                   auVar163._0_2_)))
                                                       )));
                *puVar51 = CONCAT17(auVar81[0xd],
                                    CONCAT16(auVar81[0xc],
                                             CONCAT15(auVar81[9],
                                                      CONCAT14(auVar81[8],
                                                               CONCAT13(auVar81[5],
                                                                        CONCAT12(auVar81[4],
                                                                                 auVar81._0_2_))))))
                ;
                puVar51 = puVar51 + 2;
                if (uVar48 <= uVar47) goto LAB_00132418;
              }
              do {
                auVar81 = *pauVar80;
                uVar34 = *(undefined8 *)((long)pauVar67[2] + 8);
                uVar33 = *(undefined8 *)pauVar67[2];
                uVar25 = *(undefined8 *)((long)pauVar67[3] + 8);
                uVar24 = *(undefined8 *)pauVar67[3];
                uVar40 = *(undefined8 *)((long)pauVar80[2] + 8);
                uVar37 = *(undefined8 *)pauVar80[2];
                auVar161 = pauVar80[1];
                auVar163 = pauVar80[3];
                auVar159._0_8_ =
                     CONCAT26((short)((ulong)*(undefined8 *)((long)*pauVar67 + 8) >> 0x20),
                              CONCAT24((short)*(undefined8 *)((long)*pauVar67 + 8),
                                       CONCAT22((short)((ulong)*(undefined8 *)*pauVar67 >> 0x20),
                                                (short)*(undefined8 *)*pauVar67)));
                auVar159._8_2_ = (short)*(undefined8 *)pauVar67[1];
                auVar159._10_2_ = (short)((ulong)*(undefined8 *)pauVar67[1] >> 0x20);
                auVar159._12_2_ = (short)*(undefined8 *)((long)pauVar67[1] + 8);
                auVar159._14_2_ = (short)((ulong)*(undefined8 *)((long)pauVar67[1] + 8) >> 0x20);
                puVar50[1] = auVar159._8_8_;
                *puVar50 = auVar159._0_8_;
                auVar164 = pauVar67[4];
                auVar101._0_8_ =
                     CONCAT26(auVar81._12_2_,
                              CONCAT24(auVar81._8_2_,CONCAT22(auVar81._4_2_,auVar81._0_2_)));
                auVar101._8_2_ = auVar161._0_2_;
                auVar101._10_2_ = auVar161._4_2_;
                auVar101._12_2_ = auVar161._8_2_;
                auVar101._14_2_ = auVar161._12_2_;
                auVar81 = pauVar67[5];
                auVar161 = pauVar80[4];
                puVar51[1] = auVar101._8_8_;
                *puVar51 = auVar101._0_8_;
                uVar15 = *(undefined8 *)((long)pauVar80[5] + 8);
                uVar14 = *(undefined8 *)pauVar80[5];
                auVar89._0_8_ =
                     CONCAT26((short)((ulong)uVar34 >> 0x20),
                              CONCAT24((short)uVar34,
                                       CONCAT22((short)((ulong)uVar33 >> 0x20),(short)uVar33)));
                auVar89._8_2_ = (short)uVar24;
                auVar89._10_2_ = (short)((ulong)uVar24 >> 0x20);
                auVar89._12_2_ = (short)uVar25;
                auVar89._14_2_ = (short)((ulong)uVar25 >> 0x20);
                auVar83 = pauVar67[6];
                auVar87 = pauVar67[7];
                auVar93 = pauVar80[6];
                puVar50[3] = auVar89._8_8_;
                puVar50[2] = auVar89._0_8_;
                auVar97 = pauVar80[7];
                *(short *)(puVar51 + 3) = auVar163._0_2_;
                *(short *)((long)puVar51 + 0x1a) = auVar163._4_2_;
                *(short *)((long)puVar51 + 0x1c) = auVar163._8_2_;
                *(short *)((long)puVar51 + 0x1e) = auVar163._12_2_;
                *(short *)(puVar51 + 2) = (short)uVar37;
                *(short *)((long)puVar51 + 0x12) = (short)((ulong)uVar37 >> 0x20);
                *(short *)((long)puVar51 + 0x14) = (short)uVar40;
                *(short *)((long)puVar51 + 0x16) = (short)((ulong)uVar40 >> 0x20);
                auVar104._0_8_ =
                     CONCAT26(auVar164._12_2_,
                              CONCAT24(auVar164._8_2_,CONCAT22(auVar164._4_2_,auVar164._0_2_)));
                auVar104._8_2_ = auVar81._0_2_;
                auVar104._10_2_ = auVar81._4_2_;
                auVar104._12_2_ = auVar81._8_2_;
                auVar104._14_2_ = auVar81._12_2_;
                auVar124._0_8_ =
                     CONCAT26(auVar161._12_2_,
                              CONCAT24(auVar161._8_2_,CONCAT22(auVar161._4_2_,auVar161._0_2_)));
                auVar124._8_2_ = (short)uVar14;
                auVar124._10_2_ = (short)((ulong)uVar14 >> 0x20);
                auVar124._12_2_ = (short)uVar15;
                auVar124._14_2_ = (short)((ulong)uVar15 >> 0x20);
                puVar50[5] = auVar104._8_8_;
                puVar50[4] = auVar104._0_8_;
                auVar86._0_8_ =
                     CONCAT26(auVar83._12_2_,
                              CONCAT24(auVar83._8_2_,CONCAT22(auVar83._4_2_,auVar83._0_2_)));
                auVar86._8_2_ = auVar87._0_2_;
                auVar86._10_2_ = auVar87._4_2_;
                auVar86._12_2_ = auVar87._8_2_;
                auVar86._14_2_ = auVar87._12_2_;
                puVar51[5] = auVar124._8_8_;
                puVar51[4] = auVar124._0_8_;
                uVar47 = uVar47 + 4;
                puVar50[7] = auVar86._8_8_;
                puVar50[6] = auVar86._0_8_;
                puVar51[7] = CONCAT17(auVar97[0xd],
                                      CONCAT16(auVar97[0xc],
                                               CONCAT15(auVar97[9],
                                                        CONCAT14(auVar97[8],
                                                                 CONCAT13(auVar97[5],
                                                                          CONCAT12(auVar97[4],
                                                                                   auVar97._0_2_))))
                                              ));
                puVar51[6] = CONCAT17(auVar93[0xd],
                                      CONCAT16(auVar93[0xc],
                                               CONCAT15(auVar93[9],
                                                        CONCAT14(auVar93[8],
                                                                 CONCAT13(auVar93[5],
                                                                          CONCAT12(auVar93[4],
                                                                                   auVar93._0_2_))))
                                              ));
                pauVar80 = pauVar80 + 8;
                puVar50 = puVar50 + 8;
                pauVar67 = pauVar67 + 8;
                puVar51 = puVar51 + 8;
              } while (uVar47 < uVar48);
            }
LAB_00132418:
            uVar49 = (ulong)((int)uVar49 + uVar48 * 8);
            if (uVar48 * 8 == uVar11 - uVar121) goto LAB_00132518;
          }
          iVar54 = (int)uVar49;
          uVar48 = iVar54 + 1;
          param_1[uVar49] = (short)puVar56[uVar49];
          param_2[uVar49] = (short)puVar58[uVar49];
          if (uVar48 < uVar11) {
            uVar121 = iVar54 + 2;
            param_1[uVar48] = (short)puVar56[uVar48];
            param_2[uVar48] = (short)puVar58[uVar48];
            if (uVar121 < uVar11) {
              uVar48 = iVar54 + 3;
              param_1[uVar121] = (short)puVar56[uVar121];
              param_2[uVar121] = (short)puVar58[uVar121];
              if (uVar48 < uVar11) {
                uVar121 = iVar54 + 4;
                param_1[uVar48] = (short)puVar56[uVar48];
                param_2[uVar48] = (short)puVar58[uVar48];
                if (uVar121 < uVar11) {
                  uVar48 = iVar54 + 5;
                  param_1[uVar121] = (short)puVar56[uVar121];
                  param_2[uVar121] = (short)puVar58[uVar121];
                  if (uVar48 < uVar11) {
                    uVar121 = iVar54 + 6;
                    param_1[uVar48] = (short)puVar56[uVar48];
                    param_2[uVar48] = (short)puVar58[uVar48];
                    if (uVar121 < uVar11) {
                      param_1[uVar121] = (short)puVar56[uVar121];
                      param_2[uVar121] = (short)puVar58[uVar121];
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_00132518:
      param_3 = param_3 - uVar11;
      DAT_005829c4 = uVar11 + DAT_005829c4;
      param_1 = param_1 + uVar77;
      param_2 = param_2 + uVar77;
LAB_00132540:
      uVar46 = (uint)DAT_00582971;
      uVar48 = DAT_005829c4 - DAT_005829c8;
      uVar121 = DAT_005829c8;
      bVar44 = DAT_00582971;
      if (DAT_005829c8 <= DAT_005829c4) {
        do {
          uVar47 = 0xff;
          DAT_005829cc = 1 - DAT_005829cc;
          DAT_005829c4 = uVar48;
          if ((bVar44 & 8) == 0) {
            uVar48 = ARM::VIRTUALREGISTER_GetRegM('\0',0x88);
            if ((uVar48 >> 7 & 1) == 0) goto LAB_00132540;
            uVar46 = (uint)DAT_00582971;
            if ((DAT_00582971 & 8) == 0) {
              uVar47 = ARM::VIRTUALREGISTER_GetRegM(DAT_00582971 & 8,0x88);
              uVar47 = uVar47 & 0xff;
              uVar46 = (uint)DAT_00582971;
              uVar121 = DAT_005829c8;
            }
            else {
              uVar47 = 0xff;
              uVar121 = DAT_005829c8;
            }
          }
          uVar48 = (uint)DAT_005829d0;
          bVar44 = DAT_005829d0 + 1;
          DAT_005829d0 = 0;
          if (((int)uVar47 >> (uVar48 & 0x1f) & 1U) == 0) {
            DAT_005829d0 = bVar44;
          }
          bVar44 = (byte)uVar46;
          uVar48 = DAT_005829c4 - uVar121;
          if (DAT_005829c4 < uVar121) break;
        } while( true );
      }
      for (DAT_005829d4 = uVar11 + DAT_005829d4; DAT_005829d8 <= DAT_005829d4;
          DAT_005829d4 = DAT_005829d4 - DAT_005829d8) {
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829d4 = DAT_005829d4 - DAT_005829d8;
        DAT_005829dc = 1 - DAT_005829dc;
        if (DAT_005829d4 < DAT_005829d8) break;
        DAT_005829dc = 1 - DAT_005829dc;
      }
      if (uVar46 >> 7 == 0) {
        LeaveCriticalSection((critical_section *)&DAT_00582978);
LAB_001326d4:
        bVar42 = false;
      }
      else {
        uVar77 = ARM::SIrqFifo_GetStatus();
        if ((uVar77 & 1) == 0) {
          DAT_005829c0 = DAT_005829c0 | 0x10;
        }
        else {
          DAT_005829c0 = DAT_005829c0 & 0xffef;
        }
        uVar45 = DAT_005829c0 & DAT_00568038 & DAT_005829e0;
        LeaveCriticalSection((critical_section *)&DAT_00582978);
        if ((uVar45 == 0) || (DAT_005829e8 == (code *)0x0)) goto LAB_001326d4;
        (*DAT_005829e8)();
        bVar42 = false;
      }
    }
  }
  return;
}

