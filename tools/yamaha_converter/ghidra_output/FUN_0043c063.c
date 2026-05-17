/* FUN_0043c063 @ 0x0043c063 54B */


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

