/* _machdep_Sleep @ 000db9ac 4B */


/* YAMAHA::_machdep_Sleep(unsigned int) */

void YAMAHA::_machdep_Sleep(uint param_1)

{
  timespec tStack_10;
  
  tStack_10.tv_nsec = param_1 * 1000000;
  tStack_10.tv_sec = 0;
  nanosleep(&tStack_10,(timespec *)0x0);
  return;
}

