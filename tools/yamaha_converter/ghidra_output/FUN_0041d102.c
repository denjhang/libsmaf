/* FUN_0041d102 @ 0x0041d102 216B */


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

