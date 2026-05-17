/* MaResMgr_FreeHv @ 000ea2e8 30B */


/* YAMAHA::MaResMgr_FreeHv() */

void YAMAHA::MaResMgr_FreeHv(void)

{
  if (*(char *)(*(int *)(DAT_000ea308 + 0xea2ee) + 0x1430) == '\x01') {
    *(undefined1 *)(*(int *)(DAT_000ea308 + 0xea2ee) + 0x1430) = 0;
  }
  return;
}

