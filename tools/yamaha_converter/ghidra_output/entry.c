/* entry @ 00425f6b 253B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0044ead8;
  puStack_10 = &LAB_0042909c;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_0046100c = DVar1 >> 8 & 0xff;
  _DAT_00461008 = DVar1 & 0xff;
  _DAT_00461004 = _DAT_00461008 * 0x100 + _DAT_0046100c;
  _DAT_00461000 = DVar1 >> 0x10;
  iVar2 = FUN_00429383(1);
  if (iVar2 == 0) {
    FUN_00426098(0x1c);
  }
  iVar2 = FUN_0042843c();
  if (iVar2 == 0) {
    FUN_00426098(0x10);
  }
  local_8 = 0;
  FUN_0042ac17();
  DAT_00462738 = GetCommandLineA();
  DAT_00460ff0 = FUN_0042aae5();
  FUN_0042a898();
  FUN_0042a7df();
  FUN_00426a15();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_0042a787();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_00432507(pHVar5,uVar6,uVar3,uVar4);
  FUN_00426a42(uVar3);
  FUN_0042a60f(*(undefined4 *)*local_18,local_18);
  return;
}

