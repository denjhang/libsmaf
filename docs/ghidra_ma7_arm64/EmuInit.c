/* EmuInit @ 0012f350 992B */


/* CM7_EmuSmw7App::EmuInit(unsigned int, tagMAPIWIN_CONF*, void (*)(int, short, short, short*,
   short*), void (*)(int, short, short, tagMAPIWIN_RECT*, tagMAPIWIN_PNT*), void (*)(int, short,
   short, tagMAPIWIN_RECT*, tagMAPIWIN_PNT*, unsigned short*, short, short), unsigned int) */

int CM7_EmuSmw7App::EmuInit
              (uint param_1,tagMAPIWIN_CONF *param_2,
              _func_void_int_short_short_short_ptr_short_ptr *param_3,
              _func_void_int_short_short_tagMAPIWIN_RECT_ptr_tagMAPIWIN_PNT_ptr *param_4,
              _func_void_int_short_short_tagMAPIWIN_RECT_ptr_tagMAPIWIN_PNT_ptr_ushort_ptr_short_short
              *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  CM7_EmuSmw7App CVar3;
  char cVar4;
  int iVar5;
  CM7_EmuSmw7App *this;
  void *pvVar6;
  CWinThread *pCVar7;
  CWaveProc *pCVar8;
  
  this = (CM7_EmuSmw7App *)(ulong)param_1;
  if (*(int *)(this + 0x4b8) != 1) {
    return -3;
  }
  if (param_3 != (_func_void_int_short_short_short_ptr_short_ptr *)0x0) {
    uVar1 = *(uint *)(param_3 + 4);
    uVar2 = *(uint *)(param_3 + 0xc);
    CVar3 = *(CM7_EmuSmw7App *)(param_3 + 8);
    if ((((((uVar1 == 0x2b11) || (uVar1 == 16000)) || (uVar1 == 0x5622)) ||
         ((uVar1 == 24000 || (uVar1 == 32000 || uVar1 == 0xac44)))) || (uVar1 == 48000)) &&
       (((uVar2 == 9 || (uVar2 < 6)) && ((CVar3 == (CM7_EmuSmw7App)0x81 || ((byte)CVar3 < 3)))))) {
      EmuGetInfo(this,3,0,(void *)0x0);
      if (CVar3 == (CM7_EmuSmw7App)0x2) {
        iVar5 = LoadHwLibrary((signed *)this);
        if (iVar5 != 0) {
          return -3;
        }
      }
      else {
        if (((DAT_00581fa4 == '\x01') || (iVar5 = LoadHwLibrary((signed *)this), iVar5 != 0)) &&
           (iVar5 = LoadHwLibrary((signed *)this), iVar5 != 0)) {
          return -3;
        }
        if (CVar3 == (CM7_EmuSmw7App)0x0) {
          *(uint *)(this + 0x4d0) = uVar1 / 100;
        }
        else if (((byte)CVar3 & 0x7f) == 1) {
          pCVar8 = operator_new(8);
          CWaveProc::CWaveProc(pCVar8);
          *(CWaveProc **)(this + 0x4c0) = pCVar8;
          cVar4 = CWaveProc::Initialize
                            (pCVar8,CVar3 != (CM7_EmuSmw7App)0x1,uVar1,
                             (_func_void_short_ptr_uint *)PTR_GenerateWrapper_00567fd0);
          if ((cVar4 == '\0') && (*(long *)(this + 0x4c8) != 0)) {
            FreeHwLibrary(this);
            return -3;
          }
          pvVar6 = malloc(0x4b00);
          *(void **)(this + 0x4e8) = pvVar6;
          pvVar6 = malloc(0x4b00);
          *(void **)(this + 0x4f0) = pvVar6;
        }
      }
      this[0xc] = CVar3;
      *(uint *)(this + 8) = uVar2;
      InitMaSmwApi(this);
      CBInfo_Initialize(*(my_event_t **)(this + 0x4d8));
      *(undefined4 *)(this + 0x500) = 0;
      ResetEvent(*(my_event_t **)(this + 0x510));
      ResetEvent(*(my_event_t **)(this + 0x508));
      if ((*(code **)(this + 0x470) == (code *)0x0) ||
         (iVar5 = (**(code **)(this + 0x470))(uVar1,0,PTR_IntHandler_005671e0), -1 < iVar5)) {
        if ((1 < uVar2 - 5) &&
           ((iVar5 = PreMms_winSystemStart
                               ((tagSMMSWIN_CONF *)param_3,
                                (_func_void_int_short_short_short_ptr_short_ptr *)param_4,
                                (_func_void_int_short_short_tagSMMSWIN_RECT_ptr_tagSMMSWIN_PNT_ptr *
                                )param_5,(_func_void_int_short_short_tagSMMSWIN_RECT_ptr_tagSMMSWIN_PNT_ptr_ushort_ptr_short_short
                                          *)(ulong)param_6,(char *)&DAT_00581ea0), iVar5 < 0 &&
            (iVar5 != -100)))) {
          if (iVar5 != -2) {
            iVar5 = -1;
          }
          if (*(CWaveProc **)(this + 0x4c0) != (CWaveProc *)0x0) {
            CWaveProc::Terminate(*(CWaveProc **)(this + 0x4c0));
            pCVar8 = *(CWaveProc **)(this + 0x4c0);
            if (pCVar8 != (CWaveProc *)0x0) {
              CWaveProc::~CWaveProc(pCVar8);
              operator_delete(pCVar8);
            }
            *(undefined8 *)(this + 0x4c0) = 0;
          }
          if (*(long *)(this + 0x4f8) != 0) {
            SetEvent(*(my_event_t **)(this + 0x508));
            WaitForSingleObject((CWinThread *)**(undefined8 **)(this + 0x4f8),0xffffffff);
            pCVar7 = *(CWinThread **)(this + 0x4f8);
            if (pCVar7 != (CWinThread *)0x0) {
              CWinThread::~CWinThread(pCVar7);
              operator_delete(pCVar7);
            }
            *(undefined8 *)(this + 0x4f8) = 0;
          }
          CBInfo_Terminate();
          if (*(code **)(this + 0x478) != (code *)0x0) {
            (**(code **)(this + 0x478))();
          }
          FreeHwLibrary(this);
          return iVar5;
        }
        iVar5 = 0;
        *(undefined4 *)(this + 0x4b8) = 3;
      }
      else {
        if (*(CWaveProc **)(this + 0x4c0) != (CWaveProc *)0x0) {
          CWaveProc::Terminate(*(CWaveProc **)(this + 0x4c0));
          pCVar8 = *(CWaveProc **)(this + 0x4c0);
          if (pCVar8 != (CWaveProc *)0x0) {
            CWaveProc::~CWaveProc(pCVar8);
            operator_delete(pCVar8);
          }
          *(undefined8 *)(this + 0x4c0) = 0;
        }
        if (*(long *)(this + 0x4f8) != 0) {
          SetEvent(*(my_event_t **)(this + 0x508));
          WaitForSingleObject((CWinThread *)**(undefined8 **)(this + 0x4f8),0xffffffff);
          pCVar7 = *(CWinThread **)(this + 0x4f8);
          if (pCVar7 != (CWinThread *)0x0) {
            CWinThread::~CWinThread(pCVar7);
            operator_delete(pCVar7);
          }
          *(undefined8 *)(this + 0x4f8) = 0;
        }
        CBInfo_Terminate();
        FreeHwLibrary(this);
        iVar5 = -3;
      }
      return iVar5;
    }
  }
  return -2;
}

