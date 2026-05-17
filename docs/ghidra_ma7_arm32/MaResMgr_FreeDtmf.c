/* MaResMgr_FreeDtmf @ 000ea4e8 30B */


/* YAMAHA::MaResMgr_FreeDtmf() */

void YAMAHA::MaResMgr_FreeDtmf(void)

{
  if (*(char *)(*(int *)(DAT_000ea508 + 0xea4ee) + 0x1433) == '\x01') {
    *(undefined1 *)(*(int *)(DAT_000ea508 + 0xea4ee) + 0x1433) = 0;
  }
  return;
}

