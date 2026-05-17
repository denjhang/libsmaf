/* ATRTMIDIMgr_DelHVParam @ 000dc580 42B */


/* YAMAHA::ATRTMIDIMgr_DelHVParam() */

undefined4 YAMAHA::ATRTMIDIMgr_DelHVParam(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000dc5ac + 0xdc588);
  if (*(void **)(&UNK_001648f8 + iVar1) != (void *)0x0) {
    free(*(void **)(&UNK_001648f8 + iVar1));
    *(undefined4 *)(&UNK_001648f8 + iVar1) = 0;
    *(undefined4 *)(&UNK_001648fc + iVar1) = 0;
    return 0;
  }
  return 0xffffffff;
}

