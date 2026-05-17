/* EmuInit @ 00032860 728B */


/* CM7_EmuSmw7App::EmuInit(unsigned int, tagMAPIWIN_CONF*, void (*)(int, short, short, short*,
   short*), void (*)(int, short, short, tagMAPIWIN_RECT*, tagMAPIWIN_PNT*), void (*)(int, short,
   short, tagMAPIWIN_RECT*, tagMAPIWIN_PNT*, unsigned short*, short, short), unsigned int) */

undefined4
CM7_EmuSmw7App::EmuInit
          (uint param_1,tagMAPIWIN_CONF *param_2,
          _func_void_int_short_short_short_ptr_short_ptr *param_3,
          _func_void_int_short_short_tagMAPIWIN_RECT_ptr_tagMAPIWIN_PNT_ptr *param_4,
          _func_void_int_short_short_tagMAPIWIN_RECT_ptr_tagMAPIWIN_PNT_ptr_ushort_ptr_short_short
          *param_5,uint param_6)

{
  code cVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  CWinThread *pCVar7;
  uint uVar8;
  CWaveProc *pCVar9;
  undefined4 uVar10;
  uint unaff_r11;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  if (*(int *)(param_1 + 0x230) != 1) {
    return 0xfffffffd;
  }
  if (param_3 == (_func_void_int_short_short_short_ptr_short_ptr *)0x0) {
    return 0xfffffffe;
  }
  uVar8 = *(uint *)(param_3 + 4);
  uVar6 = *(uint *)(param_3 + 0xc);
  cVar1 = param_3[8];
  uVar5 = 1;
  if ((((uVar8 != 0x2b11 && uVar8 != 16000) && (uVar8 != 0x5622 && uVar8 != 24000)) &&
      (uVar5 = 0xac44, uVar8 != 32000 && uVar8 != 0xac44)) && (uVar8 != 48000)) {
    return 0xfffffffe;
  }
  bVar13 = 8 < uVar6;
  bVar11 = uVar6 == 9;
  if (!bVar11) {
    bVar13 = 4 < uVar6;
  }
  bVar12 = uVar6 != 5;
  if (!bVar13 || (bVar11 || !bVar12)) {
    uVar5 = 0;
  }
  if (bVar13 && (!bVar11 && bVar12)) {
    uVar5 = 1;
  }
  if (bVar13 && (!bVar11 && bVar12)) {
    return 0xfffffffe;
  }
  bVar13 = 0x80 < (byte)cVar1;
  bVar11 = cVar1 == (code)0x81;
  if (!bVar11) {
    bVar13 = cVar1 != (code)0x0;
  }
  if (!bVar13 || (bVar11 || cVar1 == (code)0x1)) {
    unaff_r11 = 0;
  }
  if (bVar13 && (!bVar11 && cVar1 != (code)0x1)) {
    if (cVar1 != (code)0x2) {
      return 0xfffffffe;
    }
    EmuGetInfo((CM7_EmuSmw7App *)param_1,3,uVar5,(void *)uVar5);
  }
  else {
    EmuGetInfo((CM7_EmuSmw7App *)param_1,3,unaff_r11,(void *)unaff_r11);
    if (cVar1 != (code)0x2) {
      if (((*(char *)((int)&DAT_00032d30 + DAT_00032b44) == '\x01') ||
          (iVar2 = LoadHwLibrary((signed *)param_1), iVar2 != 0)) &&
         (iVar2 = LoadHwLibrary((signed *)param_1), iVar2 != 0)) {
        return 0xfffffffd;
      }
      if (cVar1 == (code)0x0) {
        *(uint *)(param_1 + 0x23c) = uVar8 / 100;
      }
      else if (((byte)cVar1 & 0x7f) == 1) {
        pCVar9 = operator_new(4);
        CWaveProc::CWaveProc(pCVar9);
        *(CWaveProc **)(param_1 + 0x234) = pCVar9;
        if (((pCVar9 == (CWaveProc *)0x0) && (*(int *)(param_1 + 0x238) != 0)) ||
           ((iVar2 = CWaveProc::Initialize
                               (pCVar9,cVar1 != (code)0x1,uVar8,
                                *(_func_void_short_ptr_uint **)(DAT_00032b50 + 0x32a9c)), iVar2 == 0
            && (*(int *)(param_1 + 0x238) != 0)))) {
          FreeHwLibrary((CM7_EmuSmw7App *)param_1);
          return 0xfffffffd;
        }
        pvVar4 = malloc(0x4b00);
        *(void **)(param_1 + 0x250) = pvVar4;
        pvVar4 = malloc(0x4b00);
        *(void **)(param_1 + 0x254) = pvVar4;
      }
      goto LAB_000328e4;
    }
  }
  iVar2 = LoadHwLibrary((signed *)param_1);
  if (iVar2 != 0) {
    return 0xfffffffd;
  }
LAB_000328e4:
  *(code *)(param_1 + 8) = cVar1;
  *(uint *)(param_1 + 4) = uVar6;
  InitMaSmwApi((CM7_EmuSmw7App *)param_1);
  CBInfo_Initialize(*(my_event_t **)(param_1 + 0x244));
  *(undefined4 *)(param_1 + 0x25c) = 0;
  ResetEvent(*(my_event_t **)(param_1 + 0x264));
  ResetEvent(*(my_event_t **)(param_1 + 0x260));
  if ((*(code **)(param_1 + 0x20c) == (code *)0x0) ||
     (iVar2 = (**(code **)(param_1 + 0x20c))(uVar8,0,*(undefined4 *)(DAT_00032b3c + 0x3291c)),
     -1 < iVar2)) {
    if (1 < uVar6 - 5) {
      iVar3 = PreMms_winSystemStart
                        ((tagSMMSWIN_CONF *)param_3,
                         (_func_void_int_short_short_short_ptr_short_ptr *)param_4,
                         (_func_void_int_short_short_tagSMMSWIN_RECT_ptr_tagSMMSWIN_PNT_ptr *)
                         param_5,(_func_void_int_short_short_tagSMMSWIN_RECT_ptr_tagSMMSWIN_PNT_ptr_ushort_ptr_short_short
                                  *)param_6,(char *)((int)&DAT_00032b3c + DAT_00032b40 + 2));
      iVar2 = iVar3 + 100;
      if (iVar3 != -100) {
        iVar2 = iVar3;
      }
      if (iVar2 < 0 != (iVar3 == -100 && SCARRY4(iVar3,100))) {
        if (iVar3 == -2) {
          uVar10 = 0xfffffffe;
        }
        else {
          uVar10 = 0xffffffff;
        }
        if (*(CWaveProc **)(param_1 + 0x234) != (CWaveProc *)0x0) {
          CWaveProc::Terminate(*(CWaveProc **)(param_1 + 0x234));
          pCVar9 = *(CWaveProc **)(param_1 + 0x234);
          if (pCVar9 != (CWaveProc *)0x0) {
            CWaveProc::~CWaveProc(pCVar9);
            operator_delete(pCVar9);
          }
          *(undefined4 *)(param_1 + 0x234) = 0;
        }
        if (*(int *)(param_1 + 600) != 0) {
          SetEvent(*(my_event_t **)(param_1 + 0x260));
          WaitForSingleObject((CWinThread *)**(undefined4 **)(param_1 + 600),0xffffffff);
          pCVar7 = *(CWinThread **)(param_1 + 600);
          if (pCVar7 != (CWinThread *)0x0) {
            CWinThread::~CWinThread(pCVar7);
            operator_delete(pCVar7);
          }
          *(undefined4 *)(param_1 + 600) = 0;
        }
        CBInfo_Terminate();
        if (*(code **)(param_1 + 0x210) != (code *)0x0) {
          (**(code **)(param_1 + 0x210))();
        }
        FreeHwLibrary((CM7_EmuSmw7App *)param_1);
        return uVar10;
      }
    }
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x230) = 3;
  }
  else {
    if (*(CWaveProc **)(param_1 + 0x234) != (CWaveProc *)0x0) {
      CWaveProc::Terminate(*(CWaveProc **)(param_1 + 0x234));
      pCVar9 = *(CWaveProc **)(param_1 + 0x234);
      if (pCVar9 != (CWaveProc *)0x0) {
        CWaveProc::~CWaveProc(pCVar9);
        operator_delete(pCVar9);
      }
      *(undefined4 *)(param_1 + 0x234) = 0;
    }
    if (*(int *)(param_1 + 600) != 0) {
      SetEvent(*(my_event_t **)(param_1 + 0x260));
      WaitForSingleObject((CWinThread *)**(undefined4 **)(param_1 + 600),0xffffffff);
      pCVar7 = *(CWinThread **)(param_1 + 600);
      if (pCVar7 != (CWinThread *)0x0) {
        CWinThread::~CWinThread(pCVar7);
        operator_delete(pCVar7);
      }
      *(undefined4 *)(param_1 + 600) = 0;
    }
    CBInfo_Terminate();
    FreeHwLibrary((CM7_EmuSmw7App *)param_1);
    uVar10 = 0xfffffffd;
  }
  return uVar10;
}

