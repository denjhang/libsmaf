/* EmuTerm @ 0012cba0 240B */


/* CM7_EmuSmw7App::EmuTerm() */

undefined8 __thiscall CM7_EmuSmw7App::EmuTerm(CM7_EmuSmw7App *this)

{
  CWaveProc *this_00;
  CWinThread *this_01;
  
  if (*(int *)(this + 0x4b8) == 3) {
    MapiTerm(this);
    PreMms_winSystemStop();
    if (*(CWaveProc **)(this + 0x4c0) != (CWaveProc *)0x0) {
      CWaveProc::Terminate(*(CWaveProc **)(this + 0x4c0));
      this_00 = *(CWaveProc **)(this + 0x4c0);
      if (this_00 != (CWaveProc *)0x0) {
        CWaveProc::~CWaveProc(this_00);
        operator_delete(this_00);
      }
      *(undefined8 *)(this + 0x4c0) = 0;
    }
    if (*(void **)(this + 0x4e8) != (void *)0x0) {
      free(*(void **)(this + 0x4e8));
      *(undefined8 *)(this + 0x4e8) = 0;
    }
    if (*(void **)(this + 0x4f0) != (void *)0x0) {
      free(*(void **)(this + 0x4f0));
      *(undefined8 *)(this + 0x4f0) = 0;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      SetEvent(*(my_event_t **)(this + 0x508));
      WaitForSingleObject((CWinThread *)**(undefined8 **)(this + 0x4f8),0xffffffff);
      this_01 = *(CWinThread **)(this + 0x4f8);
      if (this_01 != (CWinThread *)0x0) {
        CWinThread::~CWinThread(this_01);
        operator_delete(this_01);
      }
      *(undefined8 *)(this + 0x4f8) = 0;
    }
    CBInfo_Terminate();
    if (*(code **)(this + 0x478) != (code *)0x0) {
      (**(code **)(this + 0x478))();
    }
    FreeHwLibrary(this);
    *(undefined4 *)(this + 0x4b8) = 1;
    return 0;
  }
  return 0xffffffff;
}

