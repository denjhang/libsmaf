/* MaSound_Initialize @ 0018aa08 204B */


/* YAMAHA::MaSound_Initialize() */

void YAMAHA::MaSound_Initialize(void)

{
  if (DAT_0057c414 == -2) {
    MaSmw_Stop(0,(void *)0x0);
    MaSmw_Close(0,(void *)0x0);
    MaSmw_Unload(0,(void *)0x0);
  }
  PTR_FUN_0057c418 = FUN_0018aa00;
  DAT_0057c414 = 0xfe;
  DAT_0057c420 = 0;
  DAT_0057c428 = 0;
  DAT_0057c42c = 0;
  DAT_0057c430 = 0;
  DAT_0057c438 = 0;
  DAT_0057c440 = 2;
  DAT_0057c444 = 0;
  DAT_0057c448 = 8000;
  DAT_0057c43c = 0;
  DAT_0057c43d = 0;
  PTR_FUN_0057c450 = FUN_0018aa00;
  DAT_0057c458 = 0;
  DAT_0057c460 = 0;
  DAT_0057c464 = 0;
  DAT_0057c468 = 0;
  DAT_0057c470 = 0;
  DAT_0057c478 = 2;
  DAT_0057c47c = 0;
  DAT_0057c480 = 8000;
  DAT_0057c474 = 0;
  DAT_0057c475 = 0;
  DAT_0057c410 = 0;
  return;
}

