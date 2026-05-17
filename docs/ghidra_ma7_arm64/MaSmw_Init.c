/* MaSmw_Init @ 001a4970 1752B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaSmw_Init() */

int YAMAHA::MaSmw_Init(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  
  machdep_EnterCriticalSection();
  iVar2 = MaDevDrv_Initialize();
  if (-1 < iVar2) {
    MaSrm_Init();
    MaDva_Initialize(4);
    MaResMgr_Init();
    iVar2 = MaDsp_Init();
    if (-1 < iVar2) {
      pbVar4 = &DAT_0048aa70;
      iVar2 = 0;
      do {
        if (*pbVar4 != 0xff) {
          *(int *)(&DAT_005a0058 + (ulong)*pbVar4 * 0x10) = iVar2 << 8;
        }
        if (pbVar4[1] != 0xff) {
          *(uint *)(&DAT_005a0058 + (ulong)pbVar4[1] * 0x10) = iVar2 << 8 | 1;
        }
        if (pbVar4[2] != 0xff) {
          *(uint *)(&DAT_005a0058 + (ulong)pbVar4[2] * 0x10) = iVar2 << 8 | 2;
        }
        if (pbVar4[3] != 0xff) {
          *(uint *)(&DAT_005a0058 + (ulong)pbVar4[3] * 0x10) = iVar2 << 8 | 3;
        }
        iVar1 = iVar2 + 1;
        if (pbVar4[4] != 0xff) {
          *(int *)(&DAT_005a0058 + (ulong)pbVar4[4] * 0x10) = iVar1 * 0x100;
        }
        if (pbVar4[5] != 0xff) {
          *(uint *)(&DAT_005a0058 + (ulong)pbVar4[5] * 0x10) = iVar1 * 0x100 | 1;
        }
        if (pbVar4[6] != 0xff) {
          *(uint *)(&DAT_005a0058 + (ulong)pbVar4[6] * 0x10) = iVar1 * 0x100 | 2;
        }
        if (pbVar4[7] != 0xff) {
          *(uint *)(&DAT_005a0058 + (ulong)pbVar4[7] * 0x10) = iVar1 * 0x100 | 3;
        }
        iVar2 = iVar2 + 2;
        pbVar4 = pbVar4 + 8;
      } while (iVar2 != 10);
      DAT_0059a420 = &DAT_005a1078;
      iVar2 = 0x16;
      DAT_0059a428 = &DAT_0059a430;
      puVar3 = &DAT_005a1078;
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        iVar2 = iVar2 + -1;
        puVar3[2] = 0;
        *(undefined1 *)(puVar3 + 3) = 0;
        puVar3[0xf] = 1;
        *(undefined1 *)((long)puVar3 + 0xd) = 0;
        *(undefined1 *)((long)puVar3 + 0xe) = 0;
        *(undefined1 *)((long)puVar3 + 0xf) = 0;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(undefined1 *)((long)puVar3 + 0x11) = 0;
        *(undefined1 *)((long)puVar3 + 0x12) = 0;
        *(undefined1 *)((long)puVar3 + 0x13) = 0;
        *(undefined1 *)(puVar3 + 5) = 0;
        *(undefined1 *)((long)puVar3 + 0x15) = 0;
        *(undefined1 *)((long)puVar3 + 0x16) = 0;
        *(undefined1 *)((long)puVar3 + 0x17) = 0;
        *(undefined1 *)(puVar3 + 6) = 0;
        *(undefined1 *)((long)puVar3 + 0x19) = 0;
        *(undefined1 *)((long)puVar3 + 0x1a) = 0;
        *(undefined1 *)((long)puVar3 + 0x1b) = 0;
        *(undefined1 *)(puVar3 + 7) = 0;
        *(undefined1 *)((long)puVar3 + 0x1d) = 100;
        *(undefined1 *)((long)puVar3 + 0x1e) = 0x40;
        *(undefined1 *)((long)puVar3 + 0x1f) = 0x7f;
        *(undefined1 *)(puVar3 + 8) = 0x7f;
        *(undefined1 *)((long)puVar3 + 0x21) = 0x7f;
        *(undefined1 *)((long)puVar3 + 0x22) = 0;
        *(undefined1 *)((long)puVar3 + 0x23) = 0;
        *(undefined1 *)((long)puVar3 + 0x27) = 0;
        *(undefined1 *)(puVar3 + 10) = 0;
        *(undefined1 *)((long)puVar3 + 0x2a) = 4;
        *(undefined1 *)(puVar3 + 0xb) = 0;
        *(undefined1 *)((long)puVar3 + 0x2d) = 0;
        *(undefined1 *)((long)puVar3 + 0x2e) = 0xff;
        *(undefined1 *)((long)puVar3 + 0x2f) = 1;
        *(undefined1 *)(puVar3 + 0xc) = 0;
        *(undefined1 *)(puVar3 + 0xd) = 0;
        *(undefined1 *)((long)puVar3 + 0x31) = 0;
        *(undefined1 *)((long)puVar3 + 0x35) = 0;
        *(undefined1 *)((long)puVar3 + 0x32) = 0;
        *(undefined1 *)((long)puVar3 + 0x36) = 0;
        *(undefined1 *)((long)puVar3 + 0x33) = 0;
        *(undefined1 *)((long)puVar3 + 0x37) = 0;
        *(undefined1 *)(puVar3 + 9) = 0;
        puVar3[0x11] = 0;
        puVar3[0x12] = 0;
        puVar3[0x13] = 0;
        puVar3[0x14] = 0;
        puVar3[0x15] = 0;
        puVar3[0x16] = 100;
        *(undefined8 *)(puVar3 + 0x18) = 0;
        puVar3[0x1a] = 0;
        *(undefined8 *)(puVar3 + 0x1c) = 0;
        *(undefined8 *)(puVar3 + 0x1e) = 0;
        puVar3 = puVar3 + 0x30;
      } while (iVar2 != 0);
      iVar2 = 0x16;
      puVar3 = &DAT_0059a430;
      do {
        *puVar3 = 0;
        iVar2 = iVar2 + -1;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 7) = 0;
        *(undefined1 *)((long)puVar3 + 0x1d) = 0xff;
        *(undefined1 *)((long)puVar3 + 0x1e) = 0;
        *(undefined1 *)((long)puVar3 + 0x1f) = 0xff;
        *(undefined1 *)(puVar3 + 8) = 0x80;
        *(undefined1 *)((long)puVar3 + 0x21) = 0x80;
        *(undefined8 *)(puVar3 + 10) = 0;
        *(undefined8 *)(puVar3 + 0xc) = 0;
        puVar3[0xe] = 0;
        *(undefined8 *)(puVar3 + 0x10) = 0;
        puVar3[0x12] = 0;
        *(undefined8 *)(puVar3 + 0x14) = 0;
        puVar3[0x16] = 0;
        *(undefined8 *)(puVar3 + 0x18) = 0;
        puVar3[0x1a] = 0;
        *(undefined8 *)(puVar3 + 0x1c) = 0;
        puVar3[0x1e] = 0;
        *(undefined8 *)(puVar3 + 0x20) = 0;
        puVar3[0x22] = 0;
        *(undefined8 *)(puVar3 + 0x24) = 0;
        puVar3[0x26] = 0;
        *(undefined8 *)(puVar3 + 0x28) = 0;
        puVar3[0x2a] = 0;
        *(undefined8 *)(puVar3 + 0x2c) = 0;
        puVar3[0x2e] = 0;
        *(undefined8 *)(puVar3 + 0x30) = 0;
        puVar3[0x32] = 0;
        *(undefined8 *)(puVar3 + 0x34) = 0;
        puVar3[0x36] = 0;
        *(undefined8 *)(puVar3 + 0x38) = 0;
        puVar3[0x3a] = 0;
        *(undefined8 *)(puVar3 + 0x3c) = 0;
        puVar3[0x3e] = 0;
        *(undefined8 *)(puVar3 + 0x40) = 0;
        puVar3[0x42] = 0;
        *(undefined8 *)(puVar3 + 0x44) = 0;
        puVar3[0x46] = 0;
        *(undefined8 *)(puVar3 + 0x48) = 0;
        puVar3[0x4a] = 0;
        *(undefined8 *)(puVar3 + 0x4c) = 0;
        puVar3[0x4e] = 0;
        *(undefined8 *)(puVar3 + 0x50) = 0;
        puVar3[0x52] = 0;
        *(undefined8 *)(puVar3 + 0x54) = 0;
        puVar3[0x56] = 0;
        *(undefined8 *)(puVar3 + 0x58) = 0;
        puVar3[0x5a] = 0;
        *(undefined8 *)(puVar3 + 0x5c) = 0;
        puVar3[0x5e] = 0;
        *(undefined8 *)(puVar3 + 0x60) = 0;
        puVar3[0x62] = 0;
        *(undefined8 *)(puVar3 + 100) = 0;
        puVar3[0x66] = 0;
        *(undefined8 *)(puVar3 + 0x68) = 0;
        puVar3[0x6a] = 0;
        *(undefined8 *)(puVar3 + 0x6c) = 0;
        puVar3[0x6e] = 0;
        *(undefined8 *)(puVar3 + 0x70) = 0;
        puVar3[0x72] = 0;
        *(undefined8 *)(puVar3 + 0x74) = 0;
        puVar3[0x76] = 0;
        *(undefined8 *)(puVar3 + 0x78) = 0;
        puVar3[0x7a] = 0;
        *(undefined8 *)(puVar3 + 0x7c) = 0;
        puVar3[0x7e] = 0;
        *(undefined8 *)(puVar3 + 0x80) = 0;
        puVar3[0x82] = 0;
        *(undefined8 *)(puVar3 + 0x84) = 0;
        puVar3[0x86] = 0;
        *(undefined8 *)(puVar3 + 0x88) = 0;
        puVar3[0x8a] = 0;
        *(undefined8 *)(puVar3 + 0x8c) = 0;
        puVar3[0x8e] = 0;
        *(undefined8 *)(puVar3 + 0x90) = 0;
        puVar3[0x92] = 0;
        *(undefined8 *)(puVar3 + 0x94) = 0;
        puVar3[0x96] = 0;
        *(undefined8 *)(puVar3 + 0x98) = 0;
        puVar3[0x9a] = 0;
        *(undefined8 *)(puVar3 + 0x9c) = 0;
        puVar3[0x9e] = 0;
        *(undefined8 *)(puVar3 + 0xa0) = 0;
        puVar3[0xa2] = 0;
        *(undefined8 *)(puVar3 + 0xa4) = 0;
        puVar3[0xa6] = 0;
        *(undefined8 *)(puVar3 + 0xa8) = 0;
        puVar3[0xaa] = 0;
        *(undefined8 *)(puVar3 + 0xac) = 0;
        puVar3[0xae] = 0;
        *(undefined8 *)(puVar3 + 0xb0) = 0;
        puVar3[0xb2] = 0;
        *(undefined8 *)(puVar3 + 0xb4) = 0;
        puVar3[0xb6] = 0;
        *(undefined8 *)(puVar3 + 0xb8) = 0;
        puVar3[0xba] = 0;
        *(undefined8 *)(puVar3 + 0xbc) = 0;
        puVar3[0xbe] = 0;
        *(undefined8 *)(puVar3 + 0xc0) = 0;
        puVar3[0xc2] = 0;
        *(undefined8 *)(puVar3 + 0xc4) = 0;
        puVar3[0xc6] = 0;
        *(undefined8 *)(puVar3 + 200) = 0;
        puVar3[0xca] = 0;
        *(undefined8 *)(puVar3 + 0xcc) = 0;
        puVar3[0xce] = 0;
        *(undefined8 *)(puVar3 + 0xd0) = 0;
        puVar3[0xd2] = 0;
        *(undefined8 *)(puVar3 + 0xd4) = 0;
        puVar3[0xd6] = 0;
        *(undefined8 *)(puVar3 + 0xd8) = 0;
        puVar3[0xda] = 0;
        *(undefined8 *)(puVar3 + 0xdc) = 0;
        puVar3[0xde] = 0;
        *(undefined8 *)(puVar3 + 0xe0) = 0;
        puVar3[0xe2] = 0;
        *(undefined8 *)(puVar3 + 0xe4) = 0;
        puVar3[0xe6] = 0;
        *(undefined8 *)(puVar3 + 0xe8) = 0;
        puVar3[0xea] = 0;
        *(undefined8 *)(puVar3 + 0xec) = 0;
        puVar3[0xee] = 0;
        *(undefined8 *)(puVar3 + 0xf0) = 0;
        puVar3[0xf2] = 0;
        *(undefined8 *)(puVar3 + 0xf4) = 0;
        puVar3[0xf6] = 0;
        *(undefined8 *)(puVar3 + 0xf8) = 0;
        puVar3[0xfa] = 0;
        *(undefined8 *)(puVar3 + 0xfc) = 0;
        puVar3[0xfe] = 0;
        *(undefined8 *)(puVar3 + 0x100) = 0;
        puVar3[0x102] = 0;
        *(undefined8 *)(puVar3 + 0x104) = 0;
        puVar3[0x106] = 0;
        *(undefined8 *)(puVar3 + 0x108) = 0;
        puVar3[0x10a] = 0;
        puVar3 = puVar3 + 0x10c;
      } while (iVar2 != 0);
      _DAT_0057c4ca = 0;
      _DAT_0057c4c2 = 0;
      _DAT_0057c4da = 0;
      _DAT_0057c4d2 = 0;
      DAT_0057c4a4 = 0;
      DAT_0057c4ac = 0;
      DAT_005a0050 = &DAT_0057c488;
      DAT_0057c4b4 = 0;
      DAT_0057c4b5 = 0;
      DAT_0057c4b6 = 0;
      DAT_0057c4b7 = 0;
      DAT_0057c4b8 = 0;
      DAT_0057c4b9 = 0;
      DAT_0057c4ba = 1;
      DAT_0057c4bb = 0;
      DAT_0057c4bc = 0;
      DAT_0057c4bd = 0;
      DAT_0057c4be = 2;
      DAT_0057c4bf = 2;
      DAT_0057c4c0 = 2;
      DAT_0057c4c1 = 2;
      DAT_0057c4f8 = 1;
      DAT_0057c500 = 1;
      DAT_0057c504 = 1;
      DAT_0057c494 = 0;
      DAT_0057c49c = 0;
      DAT_0057c488 = iVar2;
      DAT_0057c48c = iVar2;
      DAT_0057c4e4 = iVar2;
      DAT_0057c4e8 = iVar2;
      DAT_0057c4ec = iVar2;
      DAT_0057c4f0 = iVar2;
      DAT_0057c4f4 = iVar2;
      DAT_0057c4fc = iVar2;
      DAT_0057c508 = iVar2;
      DAT_0057c50c = iVar2;
      DAT_0057c510 = iVar2;
      DAT_0057c514 = iVar2;
      MaCmd_VoiceInit(0,0,0,0,0);
      MaCmd_VoiceInit(1,0,0,0,0);
      MaCmd_VoiceInit(2,0,0,0,0);
      MaCmd_VoiceInit(3,0,0,0,0);
      DAT_005a1024 = 0;
      DAT_005a102c = 0;
      DAT_005a1034 = 0;
      DAT_005a103c = 0;
      DAT_005a00a0 = &DAT_005bcfc0;
      DAT_005a00b0 = &DAT_005c5f58;
      DAT_005a0060 = &DAT_005a20f8;
      DAT_005a0070 = &DAT_005a20f8;
      DAT_005a0080 = &DAT_005ab090;
      DAT_005a0090 = &DAT_005b4028;
      DAT_005a00c0 = &DAT_005c5fb0;
      DAT_005a00d0 = &DAT_005c6008;
      DAT_005a00e0 = &DAT_005c6060;
      DAT_005a00f0 = &DAT_005c60b8;
      DAT_005a0180 = &DAT_005c6490;
      DAT_005a0100 = 0;
      DAT_005a0190 = 0;
      DAT_005a0110 = 0;
      DAT_005a0120 = 0;
      DAT_005a0130 = 0;
      DAT_005a0140 = 0;
      DAT_005a0150 = 0;
      DAT_005a01a0 = 0;
      DAT_005a01b0 = 0;
      DAT_005a0160 = &DAT_005c6868;
      DAT_005a0170 = &DAT_005cf800;
      DAT_005a1020 = iVar2;
      DAT_005a1028 = iVar2;
      DAT_005a1030 = iVar2;
      DAT_005a1038 = iVar2;
      machdep_LeaveCriticalSection();
      return 0;
    }
  }
  machdep_LeaveCriticalSection();
  return iVar2;
}

