/* CreateThread @ 0012fae4 72B */


/* CWaveThread::CreateThread() */

undefined8 __thiscall CWaveThread::CreateThread(CWaveThread *this)

{
  undefined *__start_routine;
  
  __start_routine = PTR_GenerateThread_005676f8;
  *(undefined4 *)PTR_g_bLoop_00567178 = 1;
  pthread_create(&DAT_00582528,(pthread_attr_t *)0x0,(__start_routine *)__start_routine,this);
  return 1;
}

