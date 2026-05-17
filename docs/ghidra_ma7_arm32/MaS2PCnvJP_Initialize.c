/* MaS2PCnvJP_Initialize @ 000c73a8 170B */


/* YAMAHA::MaS2PCnvJP_Initialize(unsigned int) */

undefined4 YAMAHA::MaS2PCnvJP_Initialize(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = DAT_000c7454;
  piVar3 = (int *)(DAT_000c7454 + 0xc73b2);
  if (*piVar3 == 0) {
    if (param_1 == 0x14) {
      *(undefined4 *)(DAT_000c7454 + 0xc73b6) = 0x14;
      *(undefined4 *)(iVar1 + 0xc73be) = 0;
      *(undefined4 *)(iVar1 + 0xc73c6) = 0;
      *(undefined4 *)(iVar1 + 0xc73c2) = 0;
      *(undefined1 *)(iVar1 + 0xc73d3) = 0;
      *(undefined2 *)(iVar1 + 0xc73d8) = 0;
      *(undefined1 *)(iVar1 + 0xc73d6) = 0;
      *(undefined1 *)(iVar1 + 0xc73d7) = 0;
      (&UNK_000c8062)[iVar1] = 0;
      *(undefined4 *)(&UNK_000c8066 + iVar1) = 0;
      *(undefined4 *)(&UNK_000c8086 + iVar1) = 0;
      *(undefined4 *)(&UNK_000c808a + iVar1) = 0;
      (&UNK_000c8072)[iVar1] = 0;
      *(undefined4 *)(&UNK_000c808e + iVar1) = 0;
      *(undefined4 *)(&UNK_000c8076 + iVar1) = 0;
      *(undefined4 *)(&UNK_000c807a + iVar1) = 0;
      *(undefined2 *)(&UNK_000c807e + iVar1) = 0;
      (&UNK_000c8080)[iVar1] = 0;
      *(undefined4 *)(&UNK_000c8082 + iVar1) = 0;
      *(undefined4 *)(&UNK_000c806a + iVar1) = 0;
      (&UNK_000c806e)[iVar1] = 0;
      (&UNK_000c806f)[iVar1] = 0;
      (&UNK_000c8070)[iVar1] = 0;
      (&UNK_000c8071)[iVar1] = 0;
      *(undefined4 *)(iVar1 + 0xc73ba) = 0x666;
      *(undefined1 *)(iVar1 + 0xc73de) = 0x59;
      *(undefined1 *)(iVar1 + 0xc73d4) = 0x3c;
      *(undefined1 *)(iVar1 + 0xc73d5) = 2;
      *(undefined1 *)(iVar1 + 0xc73d2) = 4;
      (&UNK_000c8064)[iVar1] = 1;
      (&UNK_000c8065)[iVar1] = 1;
      (&UNK_000c8063)[iVar1] = 1;
      *piVar3 = 1;
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

