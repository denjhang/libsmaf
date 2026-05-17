/* Sleep @ 0002f1b4 34B */


/* Sleep(unsigned int) */

void Sleep(uint param_1)

{
  timespec local_10;
  
  local_10.tv_nsec = param_1 * 1000000;
  local_10.tv_sec = 0;
  nanosleep(&local_10,(timespec *)0x0);
  return;
}

