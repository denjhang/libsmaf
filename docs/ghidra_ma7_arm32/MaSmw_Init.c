/* MaSmw_Init @ 00087fb8 1534B */


/* YAMAHA::MaSmw_Init() */

int YAMAHA::MaSmw_Init(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint unaff_r7;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  machdep_EnterCriticalSection();
  iVar1 = MaDevDrv_Initialize();
  if (-1 < iVar1) {
    MaSrm_Init();
    MaDva_Initialize(4);
    MaResMgr_Init();
    iVar1 = MaDsp_Init();
    if (-1 < iVar1) {
      iVar1 = 0;
      iVar8 = DAT_000885bc + 0x87ffc;
      iVar7 = DAT_000885c0 + 0x88002;
      iVar5 = DAT_000885c4 + 0x88004;
      iVar2 = DAT_000885c8 + 0x88006;
      pbVar10 = (byte *)(DAT_000885b8 + 0x87ff6);
      do {
        uVar3 = (uint)*pbVar10;
        bVar15 = uVar3 != 0xff;
        if (bVar15) {
          uVar3 = iVar8 + uVar3 * 8;
          unaff_r7 = iVar1 << 8;
        }
        if (bVar15) {
          *(uint *)(uVar3 + 0xc) = unaff_r7;
        }
        uVar3 = (uint)pbVar10[1];
        bVar15 = uVar3 != 0xff;
        if (bVar15) {
          uVar3 = iVar7 + uVar3 * 8;
          unaff_r7 = iVar1 << 8 | 1;
        }
        if (bVar15) {
          *(uint *)(uVar3 + 0xc) = unaff_r7;
        }
        uVar3 = (uint)pbVar10[2];
        bVar15 = uVar3 != 0xff;
        if (bVar15) {
          uVar3 = iVar5 + uVar3 * 8;
          unaff_r7 = iVar1 << 8 | 2;
        }
        if (bVar15) {
          *(uint *)(uVar3 + 0xc) = unaff_r7;
        }
        uVar3 = (uint)pbVar10[3];
        bVar15 = uVar3 != 0xff;
        if (bVar15) {
          uVar3 = iVar2 + uVar3 * 8;
          unaff_r7 = iVar1 << 8 | 3;
        }
        iVar4 = iVar1 + 1;
        if (bVar15) {
          *(uint *)(uVar3 + 0xc) = unaff_r7;
        }
        uVar3 = (uint)pbVar10[4];
        bVar15 = uVar3 != 0xff;
        if (bVar15) {
          uVar3 = iVar8 + uVar3 * 8;
          unaff_r7 = iVar4 * 0x100;
        }
        if (bVar15) {
          *(uint *)(uVar3 + 0xc) = unaff_r7;
        }
        uVar3 = (uint)pbVar10[5];
        bVar15 = uVar3 != 0xff;
        if (bVar15) {
          uVar3 = iVar7 + uVar3 * 8;
          unaff_r7 = iVar4 * 0x100 | 1;
        }
        if (bVar15) {
          *(uint *)(uVar3 + 0xc) = unaff_r7;
        }
        uVar3 = (uint)pbVar10[6];
        bVar15 = uVar3 != 0xff;
        if (bVar15) {
          uVar3 = iVar5 + uVar3 * 8;
          unaff_r7 = iVar4 * 0x100 | 2;
        }
        if (bVar15) {
          *(uint *)(uVar3 + 0xc) = unaff_r7;
        }
        uVar3 = (uint)pbVar10[7];
        bVar15 = uVar3 != 0xff;
        if (bVar15) {
          uVar3 = iVar2 + uVar3 * 8;
          unaff_r7 = iVar4 * 0x100 | 3;
        }
        iVar1 = iVar1 + 2;
        if (bVar15) {
          *(uint *)(uVar3 + 0xc) = unaff_r7;
        }
        iVar4 = DAT_000885d0;
        pbVar10 = pbVar10 + 8;
      } while (iVar1 != 10);
      iVar1 = 0x16;
      puVar12 = (undefined4 *)(DAT_000885cc + 0x88cb2);
      iVar2 = DAT_000885d0 + 0x8817e;
      *(undefined4 **)(DAT_000885d0 + 0x880c2) = puVar12;
      *(int *)(iVar4 + 0x880c6) = iVar2;
      do {
        iVar1 = iVar1 + -1;
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 0;
        puVar12[0xf] = 1;
        *(undefined1 *)((int)puVar12 + 0xd) = 0;
        *(undefined1 *)((int)puVar12 + 0xe) = 0;
        *(undefined1 *)((int)puVar12 + 0xf) = 0;
        *(undefined1 *)(puVar12 + 4) = 0;
        *(undefined1 *)((int)puVar12 + 0x11) = 0;
        *(undefined1 *)((int)puVar12 + 0x12) = 0;
        *(undefined1 *)((int)puVar12 + 0x13) = 0;
        *(undefined1 *)(puVar12 + 5) = 0;
        *(undefined1 *)((int)puVar12 + 0x15) = 0;
        *(undefined1 *)((int)puVar12 + 0x16) = 0;
        *(undefined1 *)((int)puVar12 + 0x17) = 0;
        *(undefined1 *)(puVar12 + 6) = 0;
        *(undefined1 *)((int)puVar12 + 0x19) = 0;
        *(undefined1 *)((int)puVar12 + 0x1a) = 0;
        *(undefined1 *)((int)puVar12 + 0x1b) = 0;
        *(undefined1 *)(puVar12 + 7) = 0;
        *(undefined1 *)((int)puVar12 + 0x1d) = 100;
        *(undefined1 *)((int)puVar12 + 0x1e) = 0x40;
        *(undefined1 *)((int)puVar12 + 0x1f) = 0x7f;
        *(undefined1 *)(puVar12 + 8) = 0x7f;
        *(undefined1 *)((int)puVar12 + 0x21) = 0x7f;
        *(undefined1 *)((int)puVar12 + 0x22) = 0;
        *(undefined1 *)((int)puVar12 + 0x23) = 0;
        *(undefined1 *)((int)puVar12 + 0x27) = 0;
        *(undefined1 *)(puVar12 + 10) = 0;
        *(undefined1 *)((int)puVar12 + 0x2a) = 4;
        *(undefined1 *)(puVar12 + 0xb) = 0;
        *(undefined1 *)((int)puVar12 + 0x2d) = 0;
        *(undefined1 *)((int)puVar12 + 0x2e) = 0xff;
        *(undefined1 *)((int)puVar12 + 0x2f) = 1;
        *(undefined1 *)(puVar12 + 0xc) = 0;
        *(undefined1 *)(puVar12 + 0xd) = 0;
        *(undefined1 *)((int)puVar12 + 0x31) = 0;
        *(undefined1 *)((int)puVar12 + 0x35) = 0;
        *(undefined1 *)((int)puVar12 + 0x32) = 0;
        *(undefined1 *)((int)puVar12 + 0x36) = 0;
        *(undefined1 *)((int)puVar12 + 0x33) = 0;
        *(undefined1 *)((int)puVar12 + 0x37) = 0;
        *(undefined1 *)(puVar12 + 9) = 0;
        puVar12[0x11] = 0;
        puVar12[0x12] = 0;
        puVar12[0x13] = 0;
        puVar12[0x14] = 0;
        puVar12[0x15] = 0;
        puVar12[0x16] = 100;
        puVar12[0x17] = 0;
        puVar12[0x18] = 0;
        puVar12[0x19] = 0;
        puVar12[0x1a] = 0;
        puVar12 = puVar12 + 0x26;
      } while (iVar1 != 0);
      iVar1 = 0x16;
      puVar12 = (undefined4 *)(DAT_000885d4 + 0x88282);
      do {
        iVar1 = iVar1 + -1;
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 0;
        *(undefined1 *)(puVar12 + 7) = 0;
        *(undefined1 *)((int)puVar12 + 0x1d) = 0xff;
        *(undefined1 *)((int)puVar12 + 0x1e) = 0;
        *(undefined1 *)((int)puVar12 + 0x1f) = 0xff;
        *(undefined1 *)(puVar12 + 8) = 0x80;
        *(undefined1 *)((int)puVar12 + 0x21) = 0x80;
        puVar12[9] = 0;
        puVar12[10] = 0;
        puVar12[0xb] = 0;
        puVar12[0xc] = 0;
        puVar12[0xd] = 0;
        puVar12[0xe] = 0;
        puVar12[0xf] = 0;
        puVar12[0x10] = 0;
        puVar12[0x11] = 0;
        puVar12[0x12] = 0;
        puVar12[0x13] = 0;
        puVar12[0x14] = 0;
        puVar12[0x15] = 0;
        puVar12[0x16] = 0;
        puVar12[0x17] = 0;
        puVar12[0x18] = 0;
        puVar12[0x19] = 0;
        puVar12[0x1a] = 0;
        puVar12[0x1b] = 0;
        puVar12[0x1c] = 0;
        puVar12[0x1d] = 0;
        puVar12[0x1e] = 0;
        puVar12[0x1f] = 0;
        puVar12[0x20] = 0;
        puVar12[0x21] = 0;
        puVar12[0x22] = 0;
        puVar12[0x23] = 0;
        puVar12[0x24] = 0;
        puVar12[0x25] = 0;
        puVar12[0x26] = 0;
        puVar12[0x27] = 0;
        puVar12[0x28] = 0;
        puVar12[0x29] = 0;
        puVar12[0x2a] = 0;
        puVar12[0x2b] = 0;
        puVar12[0x2c] = 0;
        puVar12[0x2d] = 0;
        puVar12[0x2e] = 0;
        puVar12[0x2f] = 0;
        puVar12[0x30] = 0;
        puVar12[0x31] = 0;
        puVar12[0x32] = 0;
        puVar12[0x33] = 0;
        puVar12[0x34] = 0;
        puVar12[0x35] = 0;
        puVar12[0x36] = 0;
        puVar12[0x37] = 0;
        puVar12[0x38] = 0;
        puVar12[0x39] = 0;
        puVar12[0x3a] = 0;
        puVar12[0x3b] = 0;
        puVar12[0x3c] = 0;
        puVar12[0x3d] = 0;
        puVar12[0x3e] = 0;
        puVar12[0x3f] = 0;
        puVar12[0x40] = 0;
        puVar12[0x41] = 0;
        puVar12[0x42] = 0;
        puVar12[0x43] = 0;
        puVar12[0x44] = 0;
        puVar12[0x45] = 0;
        puVar12[0x46] = 0;
        puVar12[0x47] = 0;
        puVar12[0x48] = 0;
        puVar12[0x49] = 0;
        puVar12[0x4a] = 0;
        puVar12[0x4b] = 0;
        puVar12[0x4c] = 0;
        puVar12[0x4d] = 0;
        puVar12[0x4e] = 0;
        puVar12[0x4f] = 0;
        puVar12[0x50] = 0;
        puVar12[0x51] = 0;
        puVar12[0x52] = 0;
        puVar12[0x53] = 0;
        puVar12[0x54] = 0;
        puVar12[0x55] = 0;
        puVar12[0x56] = 0;
        puVar12[0x57] = 0;
        puVar12[0x58] = 0;
        puVar12[0x59] = 0;
        puVar12[0x5a] = 0;
        puVar12[0x5b] = 0;
        puVar12[0x5c] = 0;
        puVar12[0x5d] = 0;
        puVar12[0x5e] = 0;
        puVar12[0x5f] = 0;
        puVar12[0x60] = 0;
        puVar12[0x61] = 0;
        puVar12[0x62] = 0;
        puVar12[99] = 0;
        puVar12[100] = 0;
        puVar12[0x65] = 0;
        puVar12[0x66] = 0;
        puVar12[0x67] = 0;
        puVar12[0x68] = 0;
        puVar12[0x69] = 0;
        puVar12[0x6a] = 0;
        puVar12[0x6b] = 0;
        puVar12[0x6c] = 0;
        puVar12[0x6d] = 0;
        puVar12[0x6e] = 0;
        puVar12[0x6f] = 0;
        puVar12[0x70] = 0;
        puVar12[0x71] = 0;
        puVar12[0x72] = 0;
        puVar12[0x73] = 0;
        puVar12[0x74] = 0;
        puVar12[0x75] = 0;
        puVar12[0x76] = 0;
        puVar12[0x77] = 0;
        puVar12[0x78] = 0;
        puVar12[0x79] = 0;
        puVar12[0x7a] = 0;
        puVar12[0x7b] = 0;
        puVar12[0x7c] = 0;
        puVar12[0x7d] = 0;
        puVar12[0x7e] = 0;
        puVar12[0x7f] = 0;
        puVar12[0x80] = 0;
        puVar12[0x81] = 0;
        puVar12[0x82] = 0;
        puVar12[0x83] = 0;
        puVar12[0x84] = 0;
        puVar12[0x85] = 0;
        puVar12[0x86] = 0;
        puVar12[0x87] = 0;
        puVar12[0x88] = 0;
        puVar12[0x89] = 0;
        iVar5 = DAT_000885dc;
        iVar2 = DAT_000885d8;
        puVar12 = puVar12 + 0x8a;
      } while (iVar1 != 0);
      puVar12 = (undefined4 *)(DAT_000885dc + 0x8841e);
      *(undefined4 **)(DAT_000885d8 + 0x88422) = puVar12;
      *puVar12 = 0;
      *(undefined4 *)(iVar5 + 0x88422) = 0;
      *(undefined4 *)(iVar5 + 0x8842a) = 0;
      *(undefined4 *)(iVar5 + 0x8842e) = 0;
      *(undefined4 *)(iVar5 + 0x88432) = 0;
      *(undefined4 *)(iVar5 + 0x88436) = 0;
      *(undefined4 *)(iVar5 + 0x8843a) = 0;
      *(undefined4 *)(iVar5 + 0x8843e) = 0;
      *(undefined4 *)(iVar5 + 0x88442) = 0;
      *(undefined4 *)(iVar5 + 0x88446) = 0;
      *(undefined1 *)(iVar5 + 0x8844a) = 0;
      *(undefined1 *)(iVar5 + 0x8844b) = 0;
      *(undefined1 *)(iVar5 + 0x8844c) = 0;
      *(undefined1 *)(iVar5 + 0x8844d) = 0;
      *(undefined1 *)(iVar5 + 0x8844e) = 0;
      *(undefined1 *)(iVar5 + 0x8844f) = 0;
      *(undefined1 *)(iVar5 + 0x88451) = 0;
      *(undefined1 *)(iVar5 + 0x88452) = 0;
      *(undefined1 *)(iVar5 + 0x88453) = 0;
      *(undefined1 *)(iVar5 + 0x88458) = 0;
      *(undefined1 *)(iVar5 + 0x88459) = 0;
      *(undefined4 *)(iVar5 + 0x8845a) = 0;
      *(undefined4 *)(iVar5 + 0x8845e) = 0;
      *(undefined4 *)(iVar5 + 0x88462) = 0;
      *(undefined4 *)(iVar5 + 0x88466) = 0;
      *(undefined4 *)(iVar5 + 0x8846a) = 0;
      *(undefined4 *)(iVar5 + 0x8846e) = 0;
      *(undefined1 *)(iVar5 + 0x88450) = 1;
      *(undefined1 *)(iVar5 + 0x88454) = 2;
      *(undefined1 *)(iVar5 + 0x88455) = 2;
      *(undefined1 *)(iVar5 + 0x88456) = 2;
      *(undefined1 *)(iVar5 + 0x88457) = 2;
      *(undefined4 *)(iVar5 + 0x88472) = 0;
      *(undefined1 *)(iVar5 + 0x88476) = 0;
      *(undefined1 *)(iVar5 + 0x88477) = 0;
      *(undefined4 *)(iVar5 + 0x8847a) = 0;
      *(undefined4 *)(iVar5 + 0x8847e) = 0;
      *(undefined4 *)(iVar5 + 0x88482) = 0;
      *(undefined4 *)(iVar5 + 0x88486) = 0;
      *(undefined4 *)(iVar5 + 0x8848a) = 0;
      *(undefined4 *)(iVar5 + 0x8848e) = 1;
      *(undefined4 *)(iVar5 + 0x88492) = 0;
      *(undefined4 *)(iVar5 + 0x88496) = 1;
      *(undefined4 *)(iVar5 + 0x8849a) = 1;
      *(undefined4 *)(iVar5 + 0x8849e) = 0;
      *(undefined4 *)(iVar5 + 0x884a2) = 0;
      *(undefined4 *)(iVar5 + 0x884a6) = 0;
      *(undefined4 *)(iVar5 + 0x884aa) = 0;
      MaCmd_VoiceInit(0,0,0,0,0);
      MaCmd_VoiceInit(1,0,0,0,0);
      MaCmd_VoiceInit(2,0,0,0,0);
      MaCmd_VoiceInit(3,0,0,0,0);
      iVar7 = DAT_000885ec;
      iVar5 = DAT_000885e8;
      iVar1 = DAT_000885e4;
      iVar4 = DAT_000885e4 + 0x88d02;
      iVar9 = DAT_000885e0 + 0x884b8;
      iVar13 = DAT_000885ec + 0x88d82;
      iVar14 = DAT_000885ec + 0x88dbe;
      iVar6 = DAT_000885e4 + 0x91092;
      iVar8 = DAT_000885e0 + 0x90848;
      iVar11 = DAT_000885ec + 0x88d46;
      *(int *)(iVar2 + 0x8842a) = iVar4;
      *(int *)(iVar2 + 0x88432) = iVar4;
      *(int *)(iVar2 + 0x8843a) = iVar6;
      *(int *)(iVar2 + 0x884b2) = iVar8;
      *(undefined4 *)(iVar2 + 0x8847a) = 0;
      *(undefined4 *)(iVar2 + 0x884c2) = 0;
      *(undefined4 *)(iVar2 + 0x88482) = 0;
      *(undefined4 *)(iVar2 + 0x8848a) = 0;
      *(undefined4 *)(iVar2 + 0x88492) = 0;
      *(undefined4 *)(iVar2 + 0x8849a) = 0;
      *(undefined4 *)(iVar2 + 0x884a2) = 0;
      *(undefined4 *)(iVar2 + 0x884ca) = 0;
      *(undefined4 *)(iVar2 + 0x884d2) = 0;
      *(int *)(iVar2 + 0x88442) = iVar1 + 0x99422;
      *(int *)(iVar2 + 0x8844a) = iVar1 + 0xa17b2;
      *(int *)(iVar2 + 0x88452) = iVar11;
      *(int *)(iVar2 + 0x8845a) = iVar13;
      *(int *)(iVar2 + 0x88462) = iVar14;
      *(int *)(iVar2 + 0x8846a) = iVar7 + 0x88dfa;
      *(int *)(iVar2 + 0x88472) = iVar7 + 0x88e36;
      *(int *)(iVar2 + 0x884ba) = iVar7 + 0x891fa;
      *(int *)(iVar2 + 0x884aa) = iVar9;
      *(undefined4 *)(iVar5 + 0x8909e) = 0;
      *(undefined1 *)(iVar5 + 0x890a2) = 0;
      *(undefined4 *)(iVar5 + 0x890a6) = 0;
      *(undefined1 *)(iVar5 + 0x890aa) = 0;
      *(undefined4 *)(iVar5 + 0x890ae) = 0;
      *(undefined1 *)(iVar5 + 0x890b2) = 0;
      *(undefined4 *)(iVar5 + 0x890b6) = 0;
      *(undefined1 *)(iVar5 + 0x890ba) = 0;
      machdep_LeaveCriticalSection();
      return 0;
    }
  }
  machdep_LeaveCriticalSection();
  return iVar1;
}

