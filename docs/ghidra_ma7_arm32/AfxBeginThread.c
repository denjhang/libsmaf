/* AfxBeginThread @ 0002f294 70B */


/* AfxBeginThread(void* (*)(void*), void*, int) */

undefined4 AfxBeginThread(_func_void_ptr_void_ptr *param_1,void *param_2,int param_3)

{
  CWinThread *pCVar1;
  int iVar2;
  undefined4 *puVar3;
  
  pCVar1 = operator_new(8);
  iVar2 = DAT_0002f2dc;
  CWinThread::CWinThread(pCVar1);
  puVar3 = *(undefined4 **)(iVar2 + 0x2f2ac);
  *puVar3 = pCVar1;
  iVar2 = pthread_create((pthread_t *)(pCVar1 + 4),(pthread_attr_t *)0x0,(__start_routine *)param_1,
                         param_2);
  if (iVar2 == 0) {
    return *puVar3;
  }
  pCVar1 = (CWinThread *)*puVar3;
  if (pCVar1 != (CWinThread *)0x0) {
    CWinThread::~CWinThread(pCVar1);
    operator_delete(pCVar1);
    *puVar3 = 0;
    return 0;
  }
  return 0;
}

