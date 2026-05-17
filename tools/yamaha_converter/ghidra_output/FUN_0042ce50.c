/* FUN_0042ce50 @ 0x0042ce50 137B */


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

