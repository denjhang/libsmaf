/* KillThread @ 00032e14 28B */


/* CWaveThread::KillThread() */

undefined4 CWaveThread::KillThread(void)

{
  pthread_t __th;
  
  __th = *(pthread_t *)(DAT_00032e30 + 0x32e4e);
  **(undefined4 **)(DAT_00032e34 + 0x32e26) = 0;
  pthread_join(__th,(void **)0x0);
  return 1;
}

