/* FUN_00437df2 @ 0x00437df2 119B */


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

