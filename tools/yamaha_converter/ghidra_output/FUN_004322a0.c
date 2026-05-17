/* FUN_004322a0 @ 0x004322a0 203B */


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

