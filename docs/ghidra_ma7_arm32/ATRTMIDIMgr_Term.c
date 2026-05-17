/* ATRTMIDIMgr_Term @ 000dcd5c 462B */


/* YAMAHA::ATRTMIDIMgr_Term() */

undefined4 YAMAHA::ATRTMIDIMgr_Term(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_000dcf2c + 0xdcd68);
  iVar3 = iVar2;
  do {
    if (*(void **)(iVar3 + 8) != (void *)0x0) {
      free(*(void **)(iVar3 + 8));
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    if (*(void **)(iVar3 + 0x10) != (void *)0x0) {
      free(*(void **)(iVar3 + 0x10));
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0;
    }
    if (*(void **)(iVar3 + 0x18) != (void *)0x0) {
      free(*(void **)(iVar3 + 0x18));
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    if (*(void **)(iVar3 + 0x20) != (void *)0x0) {
      free(*(void **)(iVar3 + 0x20));
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
    }
    if (*(void **)(iVar3 + 0x28) != (void *)0x0) {
      free(*(void **)(iVar3 + 0x28));
      *(undefined4 *)(iVar3 + 0x28) = 0;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
    }
    if (*(void **)(iVar3 + 0x30) != (void *)0x0) {
      free(*(void **)(iVar3 + 0x30));
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
    }
    if (*(void **)(iVar3 + 0x38) != (void *)0x0) {
      free(*(void **)(iVar3 + 0x38));
      *(undefined4 *)(iVar3 + 0x38) = 0;
      *(undefined4 *)(iVar3 + 0x3c) = 0;
    }
    if (*(void **)(iVar3 + 0x40) != (void *)0x0) {
      free(*(void **)(iVar3 + 0x40));
      *(undefined4 *)(iVar3 + 0x40) = 0;
      *(undefined4 *)(iVar3 + 0x44) = 0;
    }
    iVar3 = iVar3 + 0x40;
  } while (iVar3 != iVar2 + 0x400);
  if (*(void **)(iVar2 + 0x408) != (void *)0x0) {
    free(*(void **)(iVar2 + 0x408));
    *(undefined4 *)(iVar2 + 0x408) = 0;
    *(undefined4 *)(iVar2 + 0x40c) = 0;
  }
  if (*(void **)(iVar2 + 0x410) != (void *)0x0) {
    free(*(void **)(iVar2 + 0x410));
    *(undefined4 *)(iVar2 + 0x410) = 0;
    *(undefined4 *)(iVar2 + 0x414) = 0;
  }
  if (*(void **)(iVar2 + 0x418) != (void *)0x0) {
    free(*(void **)(iVar2 + 0x418));
    *(undefined4 *)(iVar2 + 0x418) = 0;
    *(undefined4 *)(iVar2 + 0x41c) = 0;
  }
  if (*(void **)(&UNK_001648f8 + iVar2) != (void *)0x0) {
    free(*(void **)(&UNK_001648f8 + iVar2));
    *(undefined4 *)(&UNK_001648f8 + iVar2) = 0;
    *(undefined4 *)(&UNK_001648fc + iVar2) = 0;
  }
  iVar3 = 0;
  do {
    iVar1 = iVar2 + iVar3;
    if (*(void **)(&UNK_001646f8 + iVar1) != (void *)0x0) {
      free(*(void **)(&UNK_001646f8 + iVar1));
      *(undefined4 *)(&UNK_001646f8 + iVar1) = 0;
      *(undefined4 *)(&UNK_001646fc + iVar1) = 0;
    }
    iVar1 = iVar2 + iVar3 + 8;
    if (*(void **)(&UNK_001646f8 + iVar1) != (void *)0x0) {
      free(*(void **)(&UNK_001646f8 + iVar1));
      *(undefined4 *)(&UNK_001646f8 + iVar1) = 0;
      *(undefined4 *)(&UNK_001646fc + iVar1) = 0;
    }
    iVar1 = iVar3 + 0x10 + iVar2;
    if (*(void **)(&UNK_001646f8 + iVar1) != (void *)0x0) {
      free(*(void **)(&UNK_001646f8 + iVar1));
      *(undefined4 *)(&UNK_001646f8 + iVar1) = 0;
      *(undefined4 *)(&UNK_001646fc + iVar1) = 0;
    }
    iVar1 = iVar3 + 0x18 + iVar2;
    if (*(void **)(&UNK_001646f8 + iVar1) != (void *)0x0) {
      free(*(void **)(&UNK_001646f8 + iVar1));
      *(undefined4 *)(&UNK_001646f8 + iVar1) = 0;
      *(undefined4 *)(&UNK_001646fc + iVar1) = 0;
    }
    iVar1 = iVar3 + 0x20 + iVar2;
    if (*(void **)(&UNK_001646f8 + iVar1) != (void *)0x0) {
      free(*(void **)(&UNK_001646f8 + iVar1));
      *(undefined4 *)(&UNK_001646f8 + iVar1) = 0;
      *(undefined4 *)(&UNK_001646fc + iVar1) = 0;
    }
    iVar1 = iVar3 + 0x28 + iVar2;
    if (*(void **)(&UNK_001646f8 + iVar1) != (void *)0x0) {
      free(*(void **)(&UNK_001646f8 + iVar1));
      *(undefined4 *)(&UNK_001646f8 + iVar1) = 0;
      *(undefined4 *)(&UNK_001646fc + iVar1) = 0;
    }
    iVar1 = iVar3 + 0x30 + iVar2;
    if (*(void **)(&UNK_001646f8 + iVar1) != (void *)0x0) {
      free(*(void **)(&UNK_001646f8 + iVar1));
      *(undefined4 *)(&UNK_001646f8 + iVar1) = 0;
      *(undefined4 *)(&UNK_001646fc + iVar1) = 0;
    }
    iVar1 = iVar3 + 0x38 + iVar2;
    if (*(void **)(&UNK_001646f8 + iVar1) != (void *)0x0) {
      free(*(void **)(&UNK_001646f8 + iVar1));
      *(undefined4 *)(&UNK_001646f8 + iVar1) = 0;
      *(undefined4 *)(&UNK_001646fc + iVar1) = 0;
    }
    iVar3 = iVar3 + 0x40;
  } while (iVar3 != 0x200);
  return 0;
}

