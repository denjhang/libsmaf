/* MaResMgr_FreeLed @ 000ea32c 30B */


/* YAMAHA::MaResMgr_FreeLed() */

void YAMAHA::MaResMgr_FreeLed(void)

{
  if (*(char *)(*(int *)(DAT_000ea34c + 0xea332) + 0x1431) == '\x01') {
    *(undefined1 *)(*(int *)(DAT_000ea34c + 0xea332) + 0x1431) = 0;
  }
  return;
}

