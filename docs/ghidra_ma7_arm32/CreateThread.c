/* CreateThread @ 00032ddc 38B */


/* CWaveThread::CreateThread() */

undefined4 __thiscall CWaveThread::CreateThread(CWaveThread *this)

{
  pthread_t *__newthread;
  __start_routine *__start_routine;
  
  __newthread = (pthread_t *)(DAT_00032e08 + 0x32e20);
  __start_routine = *(__start_routine **)(DAT_00032e0c + 0x32df6);
  **(undefined4 **)(DAT_00032e04 + 0x32dec) = 1;
  pthread_create(__newthread,(pthread_attr_t *)0x0,__start_routine,this);
  return 1;
}

