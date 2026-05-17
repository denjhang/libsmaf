/* MaDsp_Init @ 000d7688 544B */


/* YAMAHA::MaDsp_Init() */

undefined4 YAMAHA::MaDsp_Init(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  puVar6 = *(undefined4 **)(DAT_000d78a8 + 0xd769c);
  puVar6[7] = 0x7f;
  *(undefined1 *)(puVar6 + 2) = 0xfe;
  puVar6[8] = 0x2000;
  iVar7 = 0;
  *(undefined1 *)((int)puVar6 + 9) = 0xfe;
  *puVar6 = 0;
  puVar6[3] = 0;
  *(undefined2 *)(puVar6 + 6) = 0;
  *(undefined1 *)(puVar6 + 9) = 0;
  *(undefined1 *)(puVar6 + 0xdd) = 0;
  puVar6[1] = 0;
  memset((void *)((int)puVar6 + 0x26),0,0x200);
  iVar1 = DAT_000d78ac;
  memset((void *)((int)puVar6 + 0x226),0,0x40);
  memset((void *)((int)puVar6 + 0x266),0,0x80);
  memset((void *)((int)puVar6 + 0x2e6),0,0x20);
  memset((void *)((int)puVar6 + 0x306),0,0x20);
  **(undefined1 **)(DAT_000d78b0 + 0xd770c) = 0;
  lup_calc('\v',0xfb);
  lup_calc('\x02',0xfb);
  lup_calc('\x0e',0xfb);
  lup_calc('\x05',0xfb);
  iVar2 = DAT_000d78b8;
  iVar5 = DAT_000d78b4;
  puVar6 = (undefined4 *)(DAT_000d78b4 + 0xd7738);
  *(undefined4 *)(DAT_000d78b4 + 0xd7778) = 1;
  *(undefined4 *)(iVar5 + 0xd777c) = 1;
  *(undefined4 *)(iVar5 + 0xd77c0) = 1;
  *(undefined4 *)(iVar5 + 0xd77c4) = 1;
  *(undefined4 *)(iVar5 + 0xd7748) = 0x10000;
  *(undefined4 *)(iVar5 + 0xd7790) = 0x10000;
  *(undefined4 *)(iVar5 + 0xd7750) = 100;
  *(undefined4 *)(iVar5 + 0xd7758) = 100;
  *(undefined4 *)(iVar5 + 0xd7760) = 100;
  *(undefined4 *)(iVar5 + 0xd7798) = 100;
  *(undefined4 *)(iVar5 + 0xd77a0) = 100;
  *(undefined4 *)(iVar5 + 0xd77a8) = 100;
  *(undefined4 *)(iVar5 + 0xd775c) = 9;
  *(undefined4 *)(iVar5 + 0xd77a4) = 9;
  *(undefined4 *)(iVar5 + 0xd7768) = 0x8fc;
  *(undefined4 *)(iVar5 + 0xd77b0) = 0x8fc;
  *(undefined4 *)(iVar5 + 0xd773c) = 0;
  *puVar6 = 0;
  *(undefined4 *)(iVar5 + 0xd7740) = 0;
  *(undefined4 *)(iVar5 + 0xd7744) = 0;
  *(undefined4 *)(iVar5 + 0xd774c) = 0;
  *(undefined4 *)(iVar5 + 0xd7754) = 0;
  *(undefined4 *)(iVar5 + 0xd7764) = 0;
  *(undefined4 *)(iVar5 + 0xd7774) = 0;
  *(undefined4 *)(iVar5 + 0xd7784) = 0;
  *(undefined4 *)(iVar5 + 0xd7780) = 0;
  *(undefined4 *)(iVar5 + 0xd7788) = 0;
  *(undefined4 *)(iVar5 + 0xd778c) = 0;
  *(undefined4 *)(iVar5 + 0xd7794) = 0;
  *(undefined4 *)(iVar5 + 0xd779c) = 0;
  *(undefined4 *)(iVar5 + 0xd77ac) = 0;
  *(undefined4 *)(iVar5 + 0xd776c) = 0x8000;
  *(undefined4 *)(iVar5 + 0xd7770) = 0x100;
  *(undefined4 *)(iVar5 + 0xd77b4) = 0x8000;
  *(undefined4 *)(iVar5 + 0xd77b8) = 0x100;
  *(undefined4 *)(iVar5 + 0xd77bc) = 0;
  do {
    iVar5 = iVar2 + 0xd77cc;
    if (iVar7 != 0) {
      iVar5 = iVar1 + 0xd7a20;
    }
    iVar3 = 0;
    iVar4 = iVar5;
    do {
      *(undefined4 *)(iVar5 + iVar3) = 0;
      iVar8 = iVar5 + iVar3;
      iVar3 = iVar3 + 0xa0;
      *(undefined4 *)(iVar8 + 4) = 0xff;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x18) = 1;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 1000;
      *(undefined4 *)(iVar4 + 0x28) = 0;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x38) = 0;
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      *(undefined4 *)(iVar4 + 0x40) = 0;
      *(undefined4 *)(iVar4 + 0x44) = 0;
      *(undefined4 *)(iVar4 + 0x48) = 0xb4;
      *(undefined4 *)(iVar4 + 0x4c) = 0;
      *(undefined4 *)(iVar4 + 0x50) = 10000;
      *(undefined4 *)(iVar4 + 0x54) = 1000;
      *(undefined4 *)(iVar4 + 0x58) = 0x10000;
      *(undefined4 *)(iVar4 + 0x5c) = 0;
      *(undefined4 *)(iVar4 + 0x60) = 1;
      *(undefined4 *)(iVar4 + 100) = 0;
      *(undefined4 *)(iVar4 + 0x68) = 0;
      *(undefined4 *)(iVar4 + 0x6c) = 0;
      *(undefined4 *)(iVar4 + 0x70) = 0;
      *(undefined4 *)(iVar4 + 0x74) = 0;
      *(undefined4 *)(iVar4 + 0x78) = 1000;
      *(undefined4 *)(iVar4 + 0x7c) = 0;
      *(undefined4 *)(iVar4 + 0x80) = 1000;
      *(undefined4 *)(iVar4 + 0x84) = 0;
      *(undefined4 *)(iVar4 + 0x88) = 0;
      *(undefined4 *)(iVar4 + 0x8c) = 100;
      *(undefined4 *)(iVar4 + 0x90) = 0;
      *(undefined4 *)(iVar4 + 0x94) = 0;
      *(undefined4 *)(iVar4 + 0x98) = 0;
      *(undefined4 *)(iVar4 + 0x9c) = 1;
      iVar8 = DAT_000d78bc;
      iVar4 = iVar4 + 0xa0;
    } while (iVar3 != 0x280);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 2);
  MaDsp_3DEngInit((_MASMW_P3DASNDSRCMOVE *)(DAT_000d78bc + 0xd7e12));
  MaDsp_3DEngInit((_MASMW_P3DASNDSRCMOVE *)(iVar8 + 0xd8016));
  MaDsp_3DEngInit((_MASMW_P3DASNDSRCMOVE *)(iVar8 + 0xd821a));
  MaDsp_3DEngInit((_MASMW_P3DASNDSRCMOVE *)(iVar8 + 0xd841e));
  return 0;
}

