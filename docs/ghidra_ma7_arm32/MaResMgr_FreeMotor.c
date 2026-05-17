/* MaResMgr_FreeMotor @ 000ea370 30B */


/* YAMAHA::MaResMgr_FreeMotor() */

void YAMAHA::MaResMgr_FreeMotor(void)

{
  if (*(char *)(*(int *)(DAT_000ea390 + 0xea376) + 0x1432) == '\x01') {
    *(undefined1 *)(*(int *)(DAT_000ea390 + 0xea376) + 0x1432) = 0;
  }
  return;
}

