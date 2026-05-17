/* EmuTerm @ 00030ff8 172B */


/* CM7_EmuSmw7App::EmuTerm() */

undefined4 __thiscall CM7_EmuSmw7App::EmuTerm(CM7_EmuSmw7App *this)

{
  CWaveProc *this_00;
  CWinThread *this_01;
  
  if (*(int *)(this + 0x230) == 3) {
    MapiTerm(this);
    PreMms_winSystemStop();
    if (*(CWaveProc **)(this + 0x234) != (CWaveProc *)0x0) {
      CWaveProc::Terminate(*(CWaveProc **)(this + 0x234));
      this_00 = *(CWaveProc **)(this + 0x234);
      if (this_00 != (CWaveProc *)0x0) {
        CWaveProc::~CWaveProc(this_00);
        operator_delete(this_00);
      }
      *(undefined4 *)(this + 0x234) = 0;
    }
    if (*(void **)(this + 0x250) != (void *)0x0) {
      free(*(void **)(this + 0x250));
      *(undefined4 *)(this + 0x250) = 0;
    }
    if (*(void **)(this + 0x254) != (void *)0x0) {
      free(*(void **)(this + 0x254));
      *(undefined4 *)(this + 0x254) = 0;
    }
    if (*(int *)(this + 600) != 0) {
      SetEvent(*(my_event_t **)(this + 0x260));
      WaitForSingleObject((CWinThread *)**(undefined4 **)(this + 600),0xffffffff);
      this_01 = *(CWinThread **)(this + 600);
      if (this_01 != (CWinThread *)0x0) {
        CWinThread::~CWinThread(this_01);
        operator_delete(this_01);
      }
      *(undefined4 *)(this + 600) = 0;
    }
    CBInfo_Terminate();
    if (*(code **)(this + 0x210) != (code *)0x0) {
      (**(code **)(this + 0x210))();
    }
    FreeHwLibrary(this);
    *(undefined4 *)(this + 0x230) = 1;
    return 0;
  }
  return 0xffffffff;
}

