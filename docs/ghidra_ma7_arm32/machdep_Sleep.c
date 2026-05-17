/* machdep_Sleep @ 00066820 4B */


/* YAMAHA::machdep_Sleep(unsigned int) */

void YAMAHA::machdep_Sleep(uint param_1)

{
  timespec tStack_10;
  
  tStack_10.tv_nsec = param_1 * 1000000;
  tStack_10.tv_sec = 0;
  nanosleep(&tStack_10,(timespec *)0x0);
  return;
}

