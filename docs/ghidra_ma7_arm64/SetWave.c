/* SetWave @ 001563e4 496B */


/* ARM::CFmSynth::SetWave(unsigned int, unsigned char*) */

void __thiscall ARM::CFmSynth::SetWave(CFmSynth *this,uint param_1,uchar *param_2)

{
  byte *pbVar1;
  CFmSynth *pCVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte *pbVar12;
  CFmSynth *pCVar35;
  long lVar36;
  byte bVar37;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar38 [16];
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte *pbVar30;
  byte *pbVar31;
  byte *pbVar32;
  byte *pbVar33;
  byte *pbVar34;
  
  lVar36 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_2 != (uchar *)0x0) {
    if (param_1 == 0x17) {
      this = this + 0x800;
    }
    else if (param_1 == 0x1f) {
      this = this + 0x1000;
    }
    else if (param_1 != 0xf) goto LAB_00156418;
    if ((param_2 < this + 0x20) && (this < (CFmSynth *)(param_2 + 0x20))) {
      pCVar35 = this;
      do {
        pCVar2 = pCVar35 + 0x10;
        *(ushort *)pCVar35 = (ushort)param_2[1] + (ushort)*param_2 * 0x100;
        *(ushort *)(pCVar35 + 2) = (ushort)param_2[3] + (ushort)param_2[2] * 0x100;
        *(ushort *)(pCVar35 + 4) = (ushort)param_2[5] + (ushort)param_2[4] * 0x100;
        *(ushort *)(pCVar35 + 6) = (ushort)param_2[7] + (ushort)param_2[6] * 0x100;
        *(ushort *)(pCVar35 + 8) = (ushort)param_2[9] + (ushort)param_2[8] * 0x100;
        *(ushort *)(pCVar35 + 10) = (ushort)param_2[0xb] + (ushort)param_2[10] * 0x100;
        *(ushort *)(pCVar35 + 0xc) = (ushort)param_2[0xd] + (ushort)param_2[0xc] * 0x100;
        *(ushort *)(pCVar35 + 0xe) = (ushort)param_2[0xf] + (ushort)param_2[0xe] * 0x100;
        pCVar35 = pCVar2;
        param_2 = param_2 + 0x10;
      } while (pCVar2 != this + 0x800);
    }
    else {
      pbVar1 = param_2 + 0x800;
      do {
        bVar37 = *param_2;
        pbVar12 = param_2 + 1;
        pbVar13 = param_2 + 2;
        pbVar14 = param_2 + 3;
        pbVar15 = param_2 + 4;
        pbVar16 = param_2 + 5;
        pbVar17 = param_2 + 6;
        pbVar18 = param_2 + 7;
        pbVar19 = param_2 + 8;
        pbVar20 = param_2 + 9;
        pbVar21 = param_2 + 10;
        pbVar22 = param_2 + 0xb;
        pbVar23 = param_2 + 0xc;
        pbVar24 = param_2 + 0xd;
        pbVar25 = param_2 + 0xe;
        pbVar26 = param_2 + 0xf;
        pbVar27 = param_2 + 0x10;
        pbVar28 = param_2 + 0x11;
        pbVar29 = param_2 + 0x12;
        pbVar30 = param_2 + 0x13;
        pbVar31 = param_2 + 0x14;
        pbVar32 = param_2 + 0x15;
        pbVar33 = param_2 + 0x16;
        pbVar34 = param_2 + 0x17;
        bVar39 = param_2[0x18];
        bVar43 = param_2[0x19];
        bVar40 = param_2[0x1a];
        bVar44 = param_2[0x1b];
        bVar41 = param_2[0x1c];
        bVar45 = param_2[0x1d];
        bVar42 = param_2[0x1e];
        bVar46 = param_2[0x1f];
        param_2 = param_2 + 0x20;
        auVar47._0_4_ =
             (CONCAT12(*pbVar13,(ushort)bVar37) & 0xffff) * 0x100 +
             (CONCAT12(*pbVar14,(ushort)*pbVar12) & 0xffff);
        auVar47._4_4_ = (uint)*pbVar13 * 0x100 + (uint)*pbVar14;
        auVar47._8_4_ = (uint)*pbVar15 * 0x100 + (uint)*pbVar16;
        auVar47._12_4_ = (uint)*pbVar17 * 0x100 + (uint)*pbVar18;
        auVar48._0_4_ =
             (CONCAT12(*pbVar21,(ushort)*pbVar19) & 0xffff) * 0x100 +
             (CONCAT12(*pbVar22,(ushort)*pbVar20) & 0xffff);
        auVar48._4_4_ = (uint)*pbVar21 * 0x100 + (uint)*pbVar22;
        auVar48._8_4_ = (uint)*pbVar23 * 0x100 + (uint)*pbVar24;
        auVar48._12_4_ = (uint)*pbVar25 * 0x100 + (uint)*pbVar26;
        iVar5 = -(uint)(0x7fff < auVar47._4_4_);
        iVar6 = -(uint)(0x7fff < auVar47._8_4_);
        iVar7 = -(uint)(0x7fff < auVar47._12_4_);
        auVar38._0_4_ =
             (CONCAT12(*pbVar29,(ushort)*pbVar27) & 0xffff) * 0x100 +
             (CONCAT12(*pbVar30,(ushort)*pbVar28) & 0xffff);
        auVar38._4_4_ = (uint)*pbVar29 * 0x100 + (uint)*pbVar30;
        auVar38._8_4_ = (uint)*pbVar31 * 0x100 + (uint)*pbVar32;
        auVar38._12_4_ = (uint)*pbVar33 * 0x100 + (uint)*pbVar34;
        auVar11._4_4_ = auVar47._4_4_ - 0x10000;
        auVar11._0_4_ = auVar47._0_4_ - 0x10000;
        auVar11._8_4_ = auVar47._8_4_ - 0x10000;
        auVar11._12_4_ = auVar47._12_4_ - 0x10000;
        auVar4[6] = 0;
        auVar4._0_6_ = CONCAT15((char)((uint)iVar5 >> 8),
                                CONCAT14((char)iVar5,-(uint)(0x7fff < auVar47._0_4_))) &
                       0xffff0000ffff;
        auVar4[7] = (char)((uint)iVar5 >> 0x18);
        auVar4[8] = (char)iVar6;
        auVar4[9] = (char)((uint)iVar6 >> 8);
        auVar4[10] = (char)((uint)iVar6 >> 0x10);
        auVar4[0xb] = (char)((uint)iVar6 >> 0x18);
        auVar4[0xc] = (char)iVar7;
        auVar4[0xd] = (char)((uint)iVar7 >> 8);
        auVar4[0xe] = (char)((uint)iVar7 >> 0x10);
        auVar4[0xf] = (char)((uint)iVar7 >> 0x18);
        auVar47 = auVar47 ^ (auVar47 ^ auVar11) & auVar4;
        auVar10._4_2_ = (short)(auVar48._4_4_ - 0x10000);
        auVar10._0_4_ = auVar48._0_4_;
        auVar10._6_2_ = (short)(auVar48._4_4_ - 0x10000 >> 0x10);
        auVar10._8_2_ = (short)(auVar48._8_4_ - 0x10000);
        auVar10._10_2_ = (short)(auVar48._8_4_ - 0x10000 >> 0x10);
        auVar10._12_2_ = (short)(auVar48._12_4_ - 0x10000);
        auVar10._14_2_ = (short)(auVar48._12_4_ - 0x10000 >> 0x10);
        auVar3._4_4_ = -(uint)(0x7fff < auVar48._4_4_);
        auVar3._0_4_ = -(uint)(0x7fff < auVar48._0_4_);
        auVar3._8_4_ = -(uint)(0x7fff < auVar48._8_4_);
        auVar3._12_4_ = -(uint)(0x7fff < auVar48._12_4_);
        auVar48 = auVar48 ^ (auVar48 ^ auVar10) & auVar3;
        auVar9._4_2_ = (short)(auVar38._4_4_ - 0x10000);
        auVar9._0_4_ = auVar38._0_4_;
        auVar9._6_2_ = (short)(auVar38._4_4_ - 0x10000 >> 0x10);
        auVar9._8_2_ = (short)(auVar38._8_4_ - 0x10000);
        auVar9._10_2_ = (short)(auVar38._8_4_ - 0x10000 >> 0x10);
        auVar9._12_2_ = (short)(auVar38._12_4_ - 0x10000);
        auVar9._14_2_ = (short)(auVar38._12_4_ - 0x10000 >> 0x10);
        auVar8._2_2_ = 0;
        auVar8._0_2_ = -(ushort)(0x7fff < auVar38._0_4_);
        auVar8._4_2_ = (short)-(uint)(0x7fff < auVar38._4_4_);
        auVar8._6_2_ = (short)(-(uint)(0x7fff < auVar38._4_4_) >> 0x10);
        auVar8._8_2_ = (short)-(uint)(0x7fff < auVar38._8_4_);
        auVar8._10_2_ = (short)(-(uint)(0x7fff < auVar38._8_4_) >> 0x10);
        auVar8._12_2_ = (short)-(uint)(0x7fff < auVar38._12_4_);
        auVar8._14_2_ = (short)(-(uint)(0x7fff < auVar38._12_4_) >> 0x10);
        auVar38 = auVar38 ^ (auVar38 ^ auVar9) & auVar8;
        *(ulong *)(this + 8) =
             CONCAT26(auVar48._12_2_,CONCAT24(auVar48._8_2_,CONCAT22(auVar48._4_2_,auVar48._0_2_)));
        *(ulong *)this =
             CONCAT26(auVar47._12_2_,CONCAT24(auVar47._8_2_,CONCAT22(auVar47._4_2_,auVar47._0_2_)));
        *(ulong *)(this + 0x18) =
             CONCAT26((ushort)bVar42 * 0x100 + (ushort)bVar46,
                      CONCAT24((ushort)bVar41 * 0x100 + (ushort)bVar45,
                               CONCAT22((ushort)bVar40 * 0x100 + (ushort)bVar44,
                                        (ushort)bVar39 * 0x100 + (ushort)bVar43)));
        *(ulong *)(this + 0x10) =
             CONCAT26(auVar38._12_2_,CONCAT24(auVar38._8_2_,CONCAT22(auVar38._4_2_,auVar38._0_2_)));
        this = this + 0x20;
      } while (param_2 != pbVar1);
    }
  }
LAB_00156418:
  if (lVar36 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

