/* AfxBeginThread @ 00129ea8 124B */


/* AfxBeginThread(void* (*)(void*), void*, int) */

CWinThread * AfxBeginThread(_func_void_ptr_void_ptr *param_1,void *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  CWinThread *pCVar3;
  CWinThread *this;
  
  pCVar3 = operator_new(0x10);
  CWinThread::CWinThread(pCVar3);
  puVar1 = PTR_pThread_00567418;
  *(CWinThread **)PTR_pThread_00567418 = pCVar3;
  iVar2 = pthread_create((pthread_t *)(pCVar3 + 8),(pthread_attr_t *)0x0,(__start_routine *)param_1,
                         param_2);
  this = *(CWinThread **)puVar1;
  pCVar3 = this;
  if ((iVar2 != 0) && (this != (CWinThread *)0x0)) {
    CWinThread::~CWinThread(this);
    pCVar3 = (CWinThread *)0x0;
    operator_delete(this);
    *(undefined8 *)puVar1 = 0;
  }
  return pCVar3;
}

