/* KillThread @ 0012fb34 52B */


/* CWaveThread::KillThread() */

undefined8 CWaveThread::KillThread(void)

{
  pthread_t __th;
  
  __th = DAT_00582528;
  *(undefined4 *)PTR_g_bLoop_00567178 = 0;
  pthread_join(__th,(void **)0x0);
  return 1;
}

