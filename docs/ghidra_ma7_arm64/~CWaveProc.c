/* ~CWaveProc @ 0012fbc0 4B */


/* CWaveProc::~CWaveProc() */

void __thiscall CWaveProc::~CWaveProc(CWaveProc *this)

{
  CWaveThread *this_00;
  
  if (*(long *)this != 0) {
    *(undefined8 *)PTR_g_pWaveProc_00567560 = 0;
    CWaveThread::KillThread();
    this_00 = *(CWaveThread **)this;
    if (this_00 != (CWaveThread *)0x0) {
      CWaveThread::~CWaveThread(this_00);
      operator_delete(this_00);
    }
    *(undefined8 *)this = 0;
  }
  return;
}

