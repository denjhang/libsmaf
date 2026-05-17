// ============================================================
// FUN_0041b640 @ 0x0041b640 327B
// ============================================================

undefined4 __fastcall FUN_0041b640(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  FUN_00441937();
  hModule = LoadLibraryA(*(LPCSTR *)(param_1 + 8));
  *(HMODULE *)(param_1 + 4) = hModule;
  if (hModule == (HMODULE)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    FUN_0043d8af(0x3ea,0,0xffffffff);
    FUN_0043ac18(0x3ea);
    return 0;
  }
  pFVar1 = GetProcAddress(hModule,s_Ssd_SmfFmt10Cnv_00459b34);
  *(FARPROC *)(param_1 + 0x110) = pFVar1;
  if (pFVar1 != (FARPROC)0x0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_Ssd_SmfParse_Rsrc_00459b20);
    *(FARPROC *)(param_1 + 0x114) = pFVar1;
  }
  if (*(int *)(param_1 + 0x114) != 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_Ssd_SmfParse_00459b10);
    *(FARPROC *)(param_1 + 0x118) = pFVar1;
  }
  if (*(int *)(param_1 + 0x118) != 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_Ssd_VoiceCtrl_00459b00);
    *(FARPROC *)(param_1 + 0x11c) = pFVar1;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_Ssd_SscCnv_Rsrc_00459af0);
    *(FARPROC *)(param_1 + 0x120) = pFVar1;
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_Ssd_SscCnv_00459ae4);
    *(FARPROC *)(param_1 + 0x124) = pFVar1;
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_Ssd_SmafPlay_Rsrc_00459ad0);
    *(FARPROC *)(param_1 + 0x128) = pFVar1;
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_Ssd_SmafPlay_00459ac0);
    *(FARPROC *)(param_1 + 300) = pFVar1;
  }
  if (*(int *)(param_1 + 300) != 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xfffffffe;
  FUN_0043d8af(0x3f6,0,0xffffffff);
  FUN_0043ac18(0x3f6);
  return 0;
}



// ============================================================
// FUN_0041d102 @ 0x0041d102 216B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0041d102(void)

{
  HMODULE hModule;
  bool bVar1;
  
  if (DAT_004608a8 == 0) {
    hModule = GetModuleHandleA("USER32");
    if ((((hModule != (HMODULE)0x0) &&
         (_DAT_00460890 = GetProcAddress(hModule,"GetSystemMetrics"), _DAT_00460890 != (FARPROC)0x0)
         ) && (DAT_00460894 = GetProcAddress(hModule,"MonitorFromWindow"),
              DAT_00460894 != (FARPROC)0x0)) &&
       (((DAT_00460898 = GetProcAddress(hModule,"MonitorFromRect"), DAT_00460898 != (FARPROC)0x0 &&
         (_DAT_0046089c = GetProcAddress(hModule,"MonitorFromPoint"), _DAT_0046089c != (FARPROC)0x0)
         ) && ((_DAT_004608a4 = GetProcAddress(hModule,"EnumDisplayMonitors"),
               _DAT_004608a4 != (FARPROC)0x0 &&
               (DAT_004608a0 = GetProcAddress(hModule,"GetMonitorInfoA"),
               DAT_004608a0 != (FARPROC)0x0)))))) {
      DAT_004608a8 = 1;
      return true;
    }
    _DAT_00460890 = (FARPROC)0x0;
    DAT_00460894 = (FARPROC)0x0;
    DAT_00460898 = (FARPROC)0x0;
    _DAT_0046089c = (FARPROC)0x0;
    DAT_004608a0 = (FARPROC)0x0;
    _DAT_004608a4 = (FARPROC)0x0;
    DAT_004608a8 = 1;
    bVar1 = false;
  }
  else {
    bVar1 = DAT_004608a0 != (FARPROC)0x0;
  }
  return bVar1;
}



// ============================================================
// FUN_00428c44 @ 0x00428c44 41B
// ============================================================

void FUN_00428c44(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_00428c06();
  return;
}



// ============================================================
// FUN_0042ce50 @ 0x0042ce50 137B
// ============================================================

int FUN_0042ce50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_004612f8 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_004612f8 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_004612f8 != (FARPROC)0x0) {
        DAT_004612fc = GetProcAddress(hModule,"GetActiveWindow");
        DAT_00461300 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_0042ce9f;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_0042ce9f:
    if (DAT_004612fc != (FARPROC)0x0) {
      iVar1 = (*DAT_004612fc)();
      if ((iVar1 != 0) && (DAT_00461300 != (FARPROC)0x0)) {
        iVar1 = (*DAT_00461300)(iVar1);
      }
    }
    iVar1 = (*DAT_004612f8)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// ============================================================
// FUN_004322a0 @ 0x004322a0 203B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004322a0(undefined4 param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  DWORD DVar2;
  int iVar3;
  
  if (param_2 == 1) {
    hModule = GetModuleHandleA(s_KERNEL32_DLL_0045ddf0);
    pFVar1 = GetProcAddress(hModule,s_DisableThreadLibraryCalls_0045ddd4);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00462740);
    DAT_0046277c = param_1;
    DAT_00462778 = param_1;
    DVar2 = GetVersion();
    DAT_00462780 = CONCAT11((char)DVar2,(char)(DVar2 >> 8));
    if (((DVar2 & 0x80000000) == 0) || (DAT_00462782 = 0x10, 0x35e < DAT_00462780)) {
      DAT_00462782 = 0x20;
    }
    _DAT_00463254 = GetSystemMetrics(7);
    _DAT_00463254 = _DAT_00463254 + -1;
    iVar3 = GetSystemMetrics(8);
    DAT_00463258 = iVar3 + -1;
    DAT_0046325c = GetSystemMetrics(4);
    _DAT_00463260 = GetSystemMetrics(0x1e);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00462740);
  }
  return 1;
}



// ============================================================
// FUN_00437df2 @ 0x00437df2 119B
// ============================================================

uint FUN_00437df2(undefined4 param_1,uint param_2)

{
  HMODULE pHVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int iVar3;
  uint uVar4;
  
  pHVar1 = GetModuleHandleA("COMCTL32.DLL");
  hModule = LoadLibraryA("COMCTL32.DLL");
  uVar4 = 0;
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"InitCommonControlsEx");
    uVar4 = 0;
    if (pFVar2 == (FARPROC)0x0) {
      if ((param_2 & 0x3fc0) == param_2) {
        InitCommonControls();
        uVar4 = 0x3fc0;
      }
    }
    else {
      iVar3 = (*pFVar2)(param_1);
      if ((iVar3 != 0) && (uVar4 = param_2, pHVar1 == (HMODULE)0x0)) {
        InitCommonControls();
        uVar4 = param_2 | 0x3fc0;
      }
    }
    FreeLibrary(hModule);
  }
  return uVar4;
}



// ============================================================
// FUN_0043c063 @ 0x0043c063 54B
// ============================================================

int __fastcall FUN_0043c063(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  hModule = GetModuleHandleA("GDI32.DLL");
  pFVar1 = GetProcAddress(hModule,"GetLayout");
  if (pFVar1 == (FARPROC)0x0) {
    iVar2 = -1;
    SetLastError(0x78);
  }
  else {
    iVar2 = (*pFVar1)(*(undefined4 *)(param_1 + 4));
  }
  return iVar2;
}



// ============================================================
// FUN_0043c099 @ 0x0043c099 70B
// ============================================================

int __thiscall FUN_0043c099(int param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  
  hModule = GetModuleHandleA("GDI32.DLL");
  iVar2 = 0;
  pFVar1 = GetProcAddress(hModule,"SetLayout");
  if (pFVar1 == (FARPROC)0x0) {
    if (param_2 != 0) {
      iVar2 = -1;
      SetLastError(0x78);
    }
  }
  else {
    iVar2 = (*pFVar1)(*(undefined4 *)(param_1 + 4),param_2);
  }
  return iVar2;
}



