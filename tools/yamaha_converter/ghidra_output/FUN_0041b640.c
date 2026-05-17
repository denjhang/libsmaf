/* FUN_0041b640 @ 0x0041b640 327B */


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

