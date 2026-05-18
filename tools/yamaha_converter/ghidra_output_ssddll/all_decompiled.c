// ============================================================
// FUN_10001000 @ 0x10001000 39B
// ============================================================

void __fastcall FUN_10001000(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000f340;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  return;
}



// ============================================================
// FUN_10001030 @ 0x10001030 30B
// ============================================================

undefined4 * __thiscall FUN_10001030(void *this,byte param_1)

{
  FUN_10001050(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10001060 @ 0x10001060 75B
// ============================================================

undefined4 __thiscall FUN_10001060(void *this,int param_1,int param_2,char param_3,int param_4)

{
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0xffffffde;
  }
  *(int *)((int)this + 0x14) = param_1;
  *(int *)((int)this + 0x18) = param_2;
  if (param_3 != '\x02') {
    return 0xffffffdd;
  }
  *(undefined1 *)((int)this + 0x1c) = 2;
  if (param_4 != 0) {
    *(int *)((int)this + 0x20) = param_4;
    return 0;
  }
  return 0xffffffdc;
}



// ============================================================
// FUN_100010b0 @ 0x100010b0 276B
// ============================================================

FARPROC __thiscall FUN_100010b0(void *this,undefined1 param_1,uint param_2,undefined4 param_3)

{
  FARPROC pFVar1;
  
  DAT_10016170 = param_3;
  switch(param_1) {
  case 0:
    pFVar1 = (FARPROC)FUN_10001260((int)this);
    break;
  case 1:
    pFVar1 = (FARPROC)FUN_10001380((int)this);
    break;
  case 2:
    pFVar1 = (FARPROC)FUN_100013e0((int)this);
    break;
  case 3:
    pFVar1 = FUN_10001500(this);
    break;
  case 4:
    pFVar1 = (FARPROC)FUN_100015d0(this,param_2 & 1);
    break;
  case 5:
    pFVar1 = (FARPROC)FUN_100016e0((int)this);
    break;
  case 6:
    pFVar1 = (FARPROC)FUN_10001730((int)this);
    break;
  case 7:
    pFVar1 = (FARPROC)FUN_10001780((int)this);
    break;
  default:
    pFVar1 = (FARPROC)0xffffffdb;
  }
  if ((code *)0x24 < pFVar1 + 0x25) {
    return pFVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x10001127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FARPROC)(*(code *)(&switchD_10001127::switchdataD_100011e4)[(byte)pFVar1[0x10001259]])()
  ;
  return pFVar1;
}



// ============================================================
// FUN_10001260 @ 0x10001260 283B
// ============================================================

int __fastcall FUN_10001260(int param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  int iVar4;
  
  hModule = LoadLibraryA(s_M5_EmuSmw5_dll_100130f8);
  *(HMODULE *)(param_1 + 4) = hModule;
  if (hModule == (HMODULE)0x0) {
    return -0x21;
  }
  pFVar1 = GetProcAddress(hModule,s_MaSound_GetEmuInfo_100130e4);
  pFVar2 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_EmuInitialize_100130cc);
  pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Initialize_100130b8);
  if (((pFVar1 != (FARPROC)0x0) && (pFVar2 != (FARPROC)0x0)) && (pFVar3 != (FARPROC)0x0)) {
    iVar4 = (*pFVar1)(2);
    if (-1 < iVar4) {
      iVar4 = (*pFVar2)(32000,(uint)*(byte *)(param_1 + 0x1c),0x81);
      if (iVar4 == 0) {
        iVar4 = (*pFVar3)();
        iVar4 = -(uint)(iVar4 != 0);
      }
      else {
        iVar4 = -1;
      }
    }
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_DeviceControl_100130a0);
    if (pFVar1 == (FARPROC)0x0) {
      return 0;
    }
    (*pFVar1)(0xd,0,0,0);
    (*pFVar1)(2,0x1f,0,0);
    (*pFVar1)(3,0,0x1f,0x1f);
    (*pFVar1)(4,0x1f,0,0);
    (*pFVar1)(5,2,0,0);
    (*pFVar1)(6,0,0,0);
    (*pFVar1)(8,2,0,0);
    (*pFVar1)(9,0,0,0);
    return iVar4;
  }
  return -1;
}



// ============================================================
// FUN_10001380 @ 0x10001380 87B
// ============================================================

undefined4 __fastcall FUN_10001380(int param_1)

{
  FARPROC pFVar1;
  FARPROC pFVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0xffffffff;
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Terminate_10013120);
  pFVar2 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_EmuTerminate_10013108);
  if ((pFVar1 != (FARPROC)0x0) && (pFVar2 != (FARPROC)0x0)) {
    iVar3 = (*pFVar1)();
    if (iVar3 == 0) {
      iVar3 = (*pFVar2)();
      if (iVar3 == 0) {
        uVar4 = 0;
      }
    }
  }
  FreeLibrary(*(HMODULE *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return uVar4;
}



// ============================================================
// FUN_100013e0 @ 0x100013e0 243B
// ============================================================

int __fastcall FUN_100013e0(int param_1)

{
  FARPROC pFVar1;
  FARPROC pFVar2;
  int iVar3;
  int iVar4;
  
  pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Create_10013174);
  pFVar2 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Load_10013164);
  iVar4 = param_1;
  if ((pFVar1 != (FARPROC)0x0) && (pFVar2 != (FARPROC)0x0)) {
    iVar3 = (*pFVar1)(1);
    *(int *)(param_1 + 0xc) = iVar3;
    iVar3 = (*pFVar2)(iVar3,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),1,
                      &LAB_100014e0,0);
    *(int *)(param_1 + 0x10) = iVar3;
    if (iVar3 < 1) {
      pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Delete_10013154);
      if (pFVar1 != (FARPROC)0x0) {
        (*pFVar1)(*(undefined4 *)(param_1 + 0xc));
        return *(int *)(param_1 + 0x10);
      }
    }
    else {
      pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Open_10013144);
      pFVar2 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Standby_10013134);
      if ((((pFVar1 != (FARPROC)0x0) && (pFVar2 != (FARPROC)0x0)) &&
          (iVar4 = (*pFVar1)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0,0),
          iVar4 == 0)) &&
         (iVar4 = (*pFVar2)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0),
         iVar4 == 0)) {
        *(undefined4 *)(param_1 + 8) = 1;
        FUN_100017d0(param_1);
        return 0;
      }
    }
  }
  FUN_100017d0(param_1);
  return iVar4;
}



// ============================================================
// FUN_10001500 @ 0x10001500 202B
// ============================================================

FARPROC __fastcall FUN_10001500(FARPROC param_1)

{
  FARPROC pFVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  
  pFVar5 = param_1;
  if (*(int *)(param_1 + 8) != 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Stop_100131a4);
    pFVar2 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Close_10013194);
    pFVar3 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Unload_10013184);
    pFVar4 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Delete_10013154);
    pFVar5 = pFVar3;
    if (((((pFVar1 != (FARPROC)0x0) && (pFVar2 != (FARPROC)0x0)) && (pFVar3 != (FARPROC)0x0)) &&
        ((pFVar4 != (FARPROC)0x0 &&
         (pFVar5 = (FARPROC)(*pFVar1)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10)
                                      ,0), pFVar5 == (FARPROC)0x0)))) &&
       ((pFVar5 = (FARPROC)(*pFVar2)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                                     0), pFVar5 == (FARPROC)0x0 &&
        ((pFVar5 = (FARPROC)(*pFVar3)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10)
                                      ,0), pFVar5 == (FARPROC)0x0 &&
         (pFVar5 = (FARPROC)(*pFVar4)(*(undefined4 *)(param_1 + 0xc)), pFVar5 == (FARPROC)0x0))))))
    {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return (FARPROC)0x0;
    }
  }
  return pFVar5;
}



// ============================================================
// FUN_100015d0 @ 0x100015d0 269B
// ============================================================

uint __thiscall FUN_100015d0(void *this,uint param_1)

{
  FARPROC pFVar1;
  FARPROC pFVar2;
  uint uVar3;
  undefined4 uStack_4;
  
  uStack_4 = this;
  if (*(int *)((int)this + 8) != 1) {
    uVar3 = FUN_10001730((int)this);
    FUN_100017d0((int)this);
    return uVar3;
  }
  pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),s_MaSound_Control_100131c4);
  pFVar2 = GetProcAddress(*(HMODULE *)((int)this + 4),s_MaSound_Start_100131b4);
  uVar3 = param_1;
  if ((pFVar1 != (FARPROC)0x0) && (pFVar2 != (FARPROC)0x0)) {
    param_1 = (uint)(param_1 != 1);
    uStack_4._0_3_ = (uint3)uStack_4 & 0xffff;
    uStack_4 = (void *)CONCAT13(100,(uint3)uStack_4);
    uVar3 = (*pFVar1)(*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x10),2,
                      (int)&uStack_4 + 2,0);
    if ((uVar3 == 0) &&
       (((uVar3 = (*pFVar1)(*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x10),0,
                            (int)&uStack_4 + 3,0), uVar3 == 0 &&
         (uVar3 = (*pFVar1)(*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x10),0x1b,
                            &param_1,0), uVar3 == 0)) &&
        (uVar3 = (*pFVar2)(*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x10),1,0),
        uVar3 == 0)))) {
      *(undefined4 *)((int)this + 8) = 2;
      FUN_100017d0((int)this);
      return 0;
    }
  }
  FUN_100017d0((int)this);
  return uVar3;
}



// ============================================================
// FUN_100016e0 @ 0x100016e0 65B
// ============================================================

int __fastcall FUN_100016e0(int param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (((*(int *)(param_1 + 8) == 2) &&
      (pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Pause_100131d4),
      pFVar1 != (FARPROC)0x0)) &&
     (iVar2 = (*pFVar1)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0),
     iVar2 == 0)) {
    *(undefined4 *)(param_1 + 8) = 3;
    return 0;
  }
  return iVar2;
}



// ============================================================
// FUN_10001730 @ 0x10001730 65B
// ============================================================

int __fastcall FUN_10001730(int param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (((*(int *)(param_1 + 8) == 3) &&
      (pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Restart_100131e4),
      pFVar1 != (FARPROC)0x0)) &&
     (iVar2 = (*pFVar1)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0),
     iVar2 == 0)) {
    *(undefined4 *)(param_1 + 8) = 2;
    return 0;
  }
  return iVar2;
}



// ============================================================
// FUN_10001780 @ 0x10001780 72B
// ============================================================

int __fastcall FUN_10001780(int param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 8) == 3)) &&
      (pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Stop_100131a4),
      pFVar1 != (FARPROC)0x0)) &&
     (iVar2 = (*pFVar1)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0),
     iVar2 == 0)) {
    *(undefined4 *)(param_1 + 8) = 1;
    return 0;
  }
  return iVar2;
}



// ============================================================
// FUN_100017d0 @ 0x100017d0 55B
// ============================================================

void __fastcall FUN_100017d0(int param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    pFVar1 = GetProcAddress(*(HMODULE *)(param_1 + 4),s_MaSound_Control_100131c4);
    if (pFVar1 != (FARPROC)0x0) {
      iVar2 = (*pFVar1)(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),5,0,0);
      **(int **)(param_1 + 0x20) = iVar2;
    }
  }
  return;
}



// ============================================================
// FUN_10001820 @ 0x10001820 30B
// ============================================================

undefined4 * __thiscall FUN_10001820(void *this,byte param_1)

{
  FUN_10001840(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10001850 @ 0x10001850 200B
// ============================================================

uint FUN_10001850(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  HMODULE hModule;
  FARPROC pFVar1;
  uint uVar2;
  uint uVar3;
  
  hModule = LoadLibraryA(s_Fc10_dll_10013208);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_ConvertSMF1ToSMF0_100131f4);
    if (pFVar1 == (FARPROC)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = (*pFVar1)(param_1,param_2,param_3,param_4);
      switch(uVar2) {
      case 0xfffffffa:
        uVar2 = 0xffffffee;
        break;
      case 0xfffffffb:
        uVar2 = 0xfffffffb;
        break;
      case 0xfffffffc:
        *param_5 = 0xf1000004;
        uVar2 = 0xffffffef;
        break;
      case 0xfffffffd:
        *param_5 = 0xf1000002;
        uVar2 = 0xffffffef;
        break;
      case 0xfffffffe:
        for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_3 = *param_1;
          param_1 = param_1 + 1;
          param_3 = param_3 + 1;
        }
        for (uVar3 = param_2 & 3; uVar2 = param_2, uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)param_3 = *(undefined1 *)param_1;
          param_1 = (undefined4 *)((int)param_1 + 1);
          param_3 = (undefined4 *)((int)param_3 + 1);
        }
        break;
      case 0xffffffff:
        *param_5 = 0xf1000001;
        uVar2 = 0xffffffef;
      }
    }
    FreeLibrary(hModule);
    return uVar2;
  }
  return 0xffffffff;
}



// ============================================================
// FUN_10001940 @ 0x10001940 30B
// ============================================================

undefined4 * __thiscall FUN_10001940(void *this,byte param_1)

{
  FUN_10001960(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10001970 @ 0x10001970 107B
// ============================================================

undefined4 __thiscall
FUN_10001970(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  hModule = LoadLibraryA(s_Ssd_Parser_dll_10013228);
  *(HMODULE *)((int)this + 4) = hModule;
  if (hModule == (HMODULE)0x0) {
    return 0xffffffff;
  }
  pFVar1 = GetProcAddress(hModule,s_Ssd_SmfParse_Rsrc_10013214);
  if (pFVar1 == (FARPROC)0x0) {
    return 0xffffffff;
  }
  iVar2 = (*pFVar1)(param_1,param_2,param_3,param_4,param_5);
  if (iVar2 != 0) {
    uVar3 = FUN_10001a40(iVar2);
  }
  return uVar3;
}



// ============================================================
// FUN_100019e0 @ 0x100019e0 86B
// ============================================================

undefined4 __thiscall FUN_100019e0(void *this,undefined4 param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  pFVar1 = GetProcAddress(*(HMODULE *)((int)this + 4),s_Ssd_SmfParse_10013238);
  if (pFVar1 == (FARPROC)0x0) {
    return 0xffffffff;
  }
  iVar2 = (*pFVar1)(param_1,param_2);
  if (iVar2 != 0) {
    uVar3 = FUN_10001a40(iVar2);
  }
  FreeLibrary(*(HMODULE *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  return uVar3;
}



// ============================================================
// FUN_10001a40 @ 0x10001a40 128B
// ============================================================

undefined4 FUN_10001a40(undefined4 param_1)

{
  switch(param_1) {
  case 0xffffffea:
    return 0xffffffea;
  case 0xffffffeb:
    return 0xffffffeb;
  case 0xffffffec:
    return 0xffffffec;
  default:
    return param_1;
  case 0xffffffee:
    return 0xffffffee;
  case 0xffffffef:
    return 0xffffffef;
  case 0xfffffff9:
    return 0xfffffff9;
  case 0xfffffffa:
    return 0xfffffffa;
  case 0xfffffffb:
    return 0xfffffffb;
  case 0xfffffffc:
    return 0xfffffffc;
  case 0xfffffffd:
    return 0xfffffffd;
  case 0xfffffffe:
    return 0xfffffffe;
  case 0xffffffff:
    return 0xffffffff;
  }
}



// ============================================================
// FUN_10001b10 @ 0x10001b10 29B
// ============================================================

void __fastcall FUN_10001b10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1000f34c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}



// ============================================================
// FUN_10001b30 @ 0x10001b30 30B
// ============================================================

undefined4 * __thiscall FUN_10001b30(void *this,byte param_1)

{
  FUN_10001b50(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10001b60 @ 0x10001b60 113B
// ============================================================

undefined4 __thiscall
FUN_10001b60(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0xfffffffe;
  }
  *(int *)((int)this + 8) = param_2;
  *(int *)((int)this + 4) = param_1;
  if (param_3 == 0) {
    return 0xfffffffd;
  }
  *(int *)((int)this + 0xc) = param_3;
  if (param_4 != 0) {
    *(int *)((int)this + 0x10) = param_4;
    if (param_5 == 0) {
      return 0xfffffffb;
    }
    *(int *)((int)this + 0x14) = param_5;
    if (param_6 != 0) {
      *(int *)((int)this + 0x18) = param_6;
      return 0;
    }
    return 0xfffffffa;
  }
  return 0xfffffffc;
}



// ============================================================
// FUN_10001be0 @ 0x10001be0 333B
// ============================================================

int __thiscall
FUN_10001be0(void *this,undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  uint uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  FARPROC pFVar3;
  int iVar4;
  char *lpLibFileName;
  
  uVar1 = (param_4 >> 8 & 0xff) >> 4;
  if (uVar1 == 2) {
    lpLibFileName = s_Ssd_sscma2_dll_10013264;
  }
  else if (uVar1 == 3) {
    lpLibFileName = s_Ssd_sscma3_dll_10013274;
  }
  else {
    if (uVar1 != 5) {
      return -9;
    }
    lpLibFileName = s_Ssd_sscma5_dll_10013284;
  }
  hModule = LoadLibraryA(lpLibFileName);
  if (hModule == (HMODULE)0x0) {
    return -1;
  }
  pFVar2 = GetProcAddress(hModule,s_Ssd_SscCnv_Rsrc_10013254);
  pFVar3 = GetProcAddress(hModule,s_Ssd_SscCnv_10013248);
  if ((pFVar2 == (FARPROC)0x0) || (pFVar3 == (FARPROC)0x0)) {
    iVar4 = -1;
  }
  else {
    iVar4 = (*pFVar2)(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),
                      *(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x10),
                      *(undefined4 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x18));
    if (iVar4 == 0) {
      iVar4 = (*pFVar3)(param_1,param_2,param_3,param_4);
      if (iVar4 == -1) {
        iVar4 = *param_3;
        if (iVar4 == -0xeffffff) {
          FreeLibrary(hModule);
          return -2;
        }
        if (iVar4 != -0xe100000) {
          FreeLibrary(hModule);
          return (-(uint)(iVar4 != -0xe0fffff) & 0xfffffff7) - 8;
        }
        FreeLibrary(hModule);
        return -5;
      }
      if (iVar4 == -2) {
        FreeLibrary(hModule);
        return -0x12;
      }
    }
  }
  FreeLibrary(hModule);
  return iVar4;
}



// ============================================================
// FUN_10001d40 @ 0x10001d40 30B
// ============================================================

undefined4 * __thiscall FUN_10001d40(void *this,byte param_1)

{
  FUN_10001d60(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10001d70 @ 0x10001d70 102B
// ============================================================

undefined4 FUN_10001d70(undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  hModule = LoadLibraryA(s_Ssd_VoiceCtrl_dll_100132a4);
  if (hModule == (HMODULE)0x0) {
    return 0xffffffff;
  }
  pFVar1 = GetProcAddress(hModule,s_Ssd_VoiceCtrl_10013294);
  if (pFVar1 == (FARPROC)0x0) {
    return 0xffffffff;
  }
  iVar2 = (*pFVar1)(param_1,param_2);
  if (iVar2 != 0) {
    uVar3 = FUN_10001de0(iVar2);
  }
  FreeLibrary(hModule);
  return uVar3;
}



// ============================================================
// FUN_10001de0 @ 0x10001de0 96B
// ============================================================

undefined4 FUN_10001de0(undefined4 param_1)

{
  switch(param_1) {
  case 0xffffffeb:
    return 0xffffffeb;
  case 0xffffffec:
    return 0xffffffec;
  case 0xffffffed:
    return 0xffffffed;
  case 0xffffffee:
    return 0xffffffee;
  case 0xffffffef:
    return 0xffffffef;
  default:
    return param_1;
  case 0xfffffffd:
    return 0xfffffffd;
  case 0xfffffffe:
    return 0xfffffffe;
  case 0xffffffff:
    return 0xffffffff;
  }
}



// ============================================================
// FUN_10001e90 @ 0x10001e90 143B
// ============================================================

undefined4 * __fastcall FUN_10001e90(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000eb70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1000d070();
  local_4 = 0;
  FUN_10001810(param_1 + 0x30);
  local_4._0_1_ = 1;
  FUN_10001930(param_1 + 0x31);
  local_4._0_1_ = 2;
  FUN_10001d30(param_1 + 0x33);
  local_4._0_1_ = 3;
  FUN_10001b10(param_1 + 0x34);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_10001000(param_1 + 0x3b);
  *param_1 = &PTR_LAB_1000f378;
  ExceptionList = local_c;
  return param_1;
}



// ============================================================
// FUN_10001f30 @ 0x10001f30 30B
// ============================================================

undefined * __thiscall FUN_10001f30(void *this,byte param_1)

{
  FUN_10001f50((int)this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10001f50 @ 0x10001f50 143B
// ============================================================

void __fastcall FUN_10001f50(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1000ebc0;
  local_c = ExceptionList;
  local_4 = 4;
  ExceptionList = &local_c;
  FUN_10001050((undefined4 *)(param_1 + 0xec));
  local_4._0_1_ = 3;
  FUN_10001b50((undefined4 *)(param_1 + 0xd0));
  local_4._0_1_ = 2;
  FUN_10001d60((undefined4 *)(param_1 + 0xcc));
  local_4._0_1_ = 1;
  FUN_10001960((undefined4 *)(param_1 + 0xc4));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10001840((undefined4 *)(param_1 + 0xc0));
  local_4 = 0xffffffff;
  FUN_1000d1ba();
  ExceptionList = local_c;
  return;
}



// ============================================================
// Ssd_SmfFmt10Cnv @ 0x10002020 36B
// ============================================================

void __cdecl
Ssd_SmfFmt10Cnv(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 param_4,
               undefined4 *param_5)

{
                    /* 0x2020  3  Ssd_SmfFmt10Cnv */
  FUN_10001850(param_1,param_2,param_3,param_4,param_5);
  return;
}



// ============================================================
// Ssd_SmfParse_Rsrc @ 0x10002050 36B
// ============================================================

void __cdecl
Ssd_SmfParse_Rsrc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
                    /* 0x2050  5  Ssd_SmfParse_Rsrc */
  FUN_10001970(&DAT_1001623c,param_1,param_2,param_3,param_4,param_5);
  return;
}



// ============================================================
// Ssd_SmfParse @ 0x10002080 21B
// ============================================================

void __cdecl Ssd_SmfParse(undefined4 param_1,undefined4 param_2)

{
                    /* 0x2080  4  Ssd_SmfParse */
  FUN_100019e0(&DAT_1001623c,param_1,param_2);
  return;
}



// ============================================================
// Ssd_VoiceCtrl @ 0x100020a0 21B
// ============================================================

void __cdecl Ssd_VoiceCtrl(undefined4 param_1,undefined4 param_2)

{
                    /* 0x20a0  8  Ssd_VoiceCtrl */
  FUN_10001d70(param_1,param_2);
  return;
}



// ============================================================
// Ssd_SscCnv_Rsrc @ 0x100020c0 41B
// ============================================================

void __cdecl
Ssd_SscCnv_Rsrc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
                    /* 0x20c0  7  Ssd_SscCnv_Rsrc */
  FUN_10001b60(&DAT_10016248,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// ============================================================
// Ssd_SscCnv @ 0x100020f0 31B
// ============================================================

void __cdecl Ssd_SscCnv(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
                    /* 0x20f0  6  Ssd_SscCnv */
  FUN_10001be0(&DAT_10016248,param_1,param_2,param_3,param_4);
  return;
}



// ============================================================
// Ssd_SmafPlay_Rsrc @ 0x10002110 31B
// ============================================================

void __cdecl Ssd_SmafPlay_Rsrc(int param_1,int param_2,char param_3,int param_4)

{
                    /* 0x2110  2  Ssd_SmafPlay_Rsrc */
  FUN_10001060(&DAT_10016264,param_1,param_2,param_3,param_4);
  return;
}



// ============================================================
// Ssd_SmafPlay @ 0x10002130 26B
// ============================================================

void __cdecl Ssd_SmafPlay(undefined1 param_1,uint param_2,undefined4 param_3)

{
                    /* 0x2130  1  Ssd_SmafPlay */
  FUN_100010b0(&DAT_10016264,param_1,param_2,param_3);
  return;
}



// ============================================================
// FUN_10002150 @ 0x10002150 201B
// ============================================================

int FUN_10002150(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 1) {
    if (param_2 == 0) {
      iVar3 = FUN_1000def3();
      if (*(int **)(iVar3 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 4) + 0x68))();
      }
      FUN_100094f0();
      FUN_100094f9(0xffffffff);
      FUN_1000ea6b();
      FUN_1000dbd7(param_1,1);
    }
    else if (param_2 == 3) {
      FUN_100094f0();
      FUN_100094f9(0xffffffff);
      FUN_10008a70();
    }
    return 1;
  }
  param_2 = 0;
  iVar3 = FUN_1000dcc6();
  uVar1 = *(undefined4 *)(iVar3 + 8);
  iVar4 = FUN_1000dfad(param_1,0,&DAT_1000f414,0);
  if (iVar4 != 0) {
    iVar4 = FUN_1000def3();
    piVar2 = *(int **)(iVar4 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x50))(), iVar4 != 0)) {
      *(undefined4 *)(iVar3 + 8) = uVar1;
      FUN_1000dbc1(param_1);
      param_2 = 1;
      goto LAB_100021b7;
    }
    (**(code **)(*piVar2 + 0x68))();
  }
  FUN_1000ea6b();
LAB_100021b7:
  *(undefined4 *)(iVar3 + 8) = uVar1;
  return param_2;
}



// ============================================================
// FUN_10002248 @ 0x10002248 20B
// ============================================================

undefined4 FUN_10002248(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  
  pCVar1 = AfxGetThread();
  if (pCVar1 != (CWinThread *)0x0) {
    uVar2 = (**(code **)(*(int *)pCVar1 + 0x74))();
    return uVar2;
  }
  return 0;
}



// ============================================================
// FUN_10002269 @ 0x10002269 28B
// ============================================================

undefined * __thiscall FUN_10002269(void *this,byte param_1)

{
  FUN_10002285();
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10002285 @ 0x10002285 72B
// ============================================================

void FUN_10002285(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f734;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_10009717((int)extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_100085c9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_100085c9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_100022cd @ 0x100022cd 42B
// ============================================================

undefined4 * __thiscall FUN_100022cd(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_1000977c(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined ***)this = &PTR_LAB_1000f7f0;
  return this;
}



// ============================================================
// FUN_100022f7 @ 0x100022f7 28B
// ============================================================

undefined4 * __thiscall FUN_100022f7(void *this,byte param_1)

{
  FUN_10002313(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_1000231a @ 0x1000231a 42B
// ============================================================

undefined4 * __thiscall FUN_1000231a(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_1000977c(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined ***)this = &PTR_LAB_1000f808;
  return this;
}



// ============================================================
// FUN_10002344 @ 0x10002344 28B
// ============================================================

undefined4 * __thiscall FUN_10002344(void *this,byte param_1)

{
  FUN_10002360(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10002367 @ 0x10002367 42B
// ============================================================

undefined4 * __thiscall FUN_10002367(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_1000977c(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined ***)this = &PTR_LAB_1000fa50;
  return this;
}



// ============================================================
// FUN_10002391 @ 0x10002391 28B
// ============================================================

undefined4 * __thiscall FUN_10002391(void *this,byte param_1)

{
  FUN_100023ad(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_100023b4 @ 0x100023b4 42B
// ============================================================

undefined4 * __thiscall FUN_100023b4(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_1000977c(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined ***)this = &PTR_LAB_1000fa68;
  return this;
}



// ============================================================
// FUN_100023de @ 0x100023de 28B
// ============================================================

undefined4 * __thiscall FUN_100023de(void *this,byte param_1)

{
  FUN_100023fa(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10002401 @ 0x10002401 28B
// ============================================================

undefined * __thiscall FUN_10002401(void *this,byte param_1)

{
  FUN_1000241d();
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_1000241d @ 0x1000241d 41B
// ============================================================

void FUN_1000241d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1000f9b8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1000cc51((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10002486 @ 0x10002486 37B
// ============================================================

void __thiscall
FUN_10002486(void *this,int param_1,int param_2,UINT param_3,RECT *param_4,LPCSTR param_5,
            UINT param_6,INT *param_7)

{
  ExtTextOutA(*(HDC *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// ============================================================
// FUN_100024ab @ 0x100024ab 56B
// ============================================================

int * __thiscall
FUN_100024ab(void *this,int *param_1,int param_2,int param_3,LPCSTR param_4,int param_5,int param_6,
            INT *param_7,int param_8)

{
  LONG LVar1;
  
  LVar1 = TabbedTextOutA(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
  param_1[1] = (int)(short)((uint)LVar1 >> 0x10);
  *param_1 = (int)(short)LVar1;
  return param_1;
}



// ============================================================
// FUN_100024ff @ 0x100024ff 48B
// ============================================================

void __thiscall
FUN_100024ff(void *this,int param_1,GRAYSTRINGPROC param_2,LPARAM param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  HBRUSH hBrush;
  
  hBrush = (HBRUSH)0x0;
  if (param_1 != 0) {
    hBrush = *(HBRUSH *)(param_1 + 4);
  }
  GrayStringA(*(HDC *)((int)this + 4),hBrush,param_2,param_3,param_4,param_5,param_6,param_7,param_8
             );
  return;
}



// ============================================================
// FUN_1000254b @ 0x1000254b 216B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1000254b(void)

{
  HMODULE hModule;
  bool bVar1;
  
  if (DAT_10018188 == 0) {
    hModule = GetModuleHandleA("USER32");
    if ((((hModule != (HMODULE)0x0) &&
         (_DAT_10018170 = GetProcAddress(hModule,"GetSystemMetrics"), _DAT_10018170 != (FARPROC)0x0)
         ) && (DAT_10018174 = GetProcAddress(hModule,"MonitorFromWindow"),
              DAT_10018174 != (FARPROC)0x0)) &&
       (((DAT_10018178 = GetProcAddress(hModule,"MonitorFromRect"), DAT_10018178 != (FARPROC)0x0 &&
         (_DAT_1001817c = GetProcAddress(hModule,"MonitorFromPoint"), _DAT_1001817c != (FARPROC)0x0)
         ) && ((_DAT_10018184 = GetProcAddress(hModule,"EnumDisplayMonitors"),
               _DAT_10018184 != (FARPROC)0x0 &&
               (DAT_10018180 = GetProcAddress(hModule,"GetMonitorInfoA"),
               DAT_10018180 != (FARPROC)0x0)))))) {
      DAT_10018188 = 1;
      return true;
    }
    _DAT_10018170 = (FARPROC)0x0;
    DAT_10018174 = (FARPROC)0x0;
    DAT_10018178 = (FARPROC)0x0;
    _DAT_1001817c = (FARPROC)0x0;
    DAT_10018180 = (FARPROC)0x0;
    _DAT_10018184 = (FARPROC)0x0;
    DAT_10018188 = 1;
    bVar1 = false;
  }
  else {
    bVar1 = DAT_10018180 != (FARPROC)0x0;
  }
  return bVar1;
}



// ============================================================
// FUN_10002623 @ 0x10002623 86B
// ============================================================

undefined4 FUN_10002623(int *param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = FUN_1000254b();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (((param_2 & 3) == 0) &&
       ((((param_1[2] < 1 || (param_1[3] < 1)) || (iVar3 = GetSystemMetrics(0), iVar3 <= *param_1))
        || (iVar3 = GetSystemMetrics(1), iVar3 <= param_1[1])))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x12340042;
    }
    return uVar2;
  }
  uVar2 = (*DAT_10018178)(param_1,param_2);
  return uVar2;
}



// ============================================================
// xMonitorFromWindow @ 0x10002679 107B
// ============================================================

/* Library Function - Single Match
    _xMonitorFromWindow@8
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release
   __stdcall xMonitorFromWindow,8 */

undefined4 xMonitorFromWindow(HWND param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  BOOL BVar3;
  int iVar4;
  WINDOWPLACEMENT local_30;
  
  bVar1 = FUN_1000254b();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((param_2 & 3) == 0) {
      BVar3 = IsIconic(param_1);
      if (BVar3 == 0) {
        iVar4 = GetWindowRect(param_1,&local_30.rcNormalPosition);
      }
      else {
        iVar4 = GetWindowPlacement(param_1,&local_30);
      }
      if (iVar4 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_10002623(&local_30.rcNormalPosition.left,param_2);
      }
    }
    else {
      uVar2 = 0x12340042;
    }
  }
  else {
    uVar2 = (*DAT_10018174)(param_1,param_2);
  }
  return uVar2;
}



// ============================================================
// FUN_100026e4 @ 0x100026e4 147B
// ============================================================

undefined4 FUN_100026e4(int param_1,uint *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  BOOL BVar3;
  uint uVar4;
  uint local_14;
  uint uStack_10;
  uint uStack_c;
  uint uStack_8;
  
  bVar1 = FUN_1000254b();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if ((((param_1 == 0x12340042) && (param_2 != (uint *)0x0)) && (0x27 < *param_2)) &&
       (BVar3 = SystemParametersInfoA(0x30,0,&local_14,0), BVar3 != 0)) {
      param_2[1] = 0;
      param_2[2] = 0;
      uVar4 = GetSystemMetrics(0);
      param_2[3] = uVar4;
      uVar4 = GetSystemMetrics(1);
      param_2[5] = local_14;
      param_2[6] = uStack_10;
      param_2[7] = uStack_c;
      param_2[8] = uStack_8;
      uVar2 = 1;
      param_2[4] = uVar4;
      param_2[9] = 1;
      if (0x47 < *param_2) {
        lstrcpyA((LPSTR)(param_2 + 10),"DISPLAY");
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*DAT_10018180)(param_1,param_2);
  }
  return uVar2;
}



// ============================================================
// GetOwner @ 0x10002777 23B
// ============================================================

/* Library Function - Single Match
    public: class CWnd * __thiscall CWnd::GetOwner(void)const 
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

CWnd * __thiscall CWnd::GetOwner(CWnd *this)

{
  CWnd *pCVar1;
  
  if (*(int *)(this + 0x20) == 0) {
    GetParent(*(HWND *)(this + 0x1c));
  }
  pCVar1 = FUN_1000a19c();
  return pCVar1;
}



// ============================================================
// FUN_100027b6 @ 0x100027b6 40B
// ============================================================

undefined4 * __thiscall FUN_100027b6(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  return this;
}



// ============================================================
// FUN_100027de @ 0x100027de 20B
// ============================================================

void __fastcall FUN_100027de(int param_1)

{
  FUN_100027f2(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// ============================================================
// FUN_100027f2 @ 0x100027f2 40B
// ============================================================

void __fastcall FUN_100027f2(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  FUN_10008500(*(undefined4 **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// ============================================================
// FUN_1000281a @ 0x1000281a 121B
// ============================================================

int * FUN_1000281a(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 4));
  if (extraout_ECX[3] == 0) {
    iVar3 = *extraout_ECX;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_100084e0(extraout_ECX + 2,extraout_ECX[1],iVar3);
    iVar3 = extraout_ECX[1];
    piVar2 = (int *)((iVar3 + -1) * *extraout_ECX + 4 + iVar1);
    if (-1 < iVar3 + -1) {
      do {
        *piVar2 = extraout_ECX[3];
        extraout_ECX[3] = (int)piVar2;
        piVar2 = (int *)((int)piVar2 - *extraout_ECX);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  piVar2 = (int *)extraout_ECX[3];
  extraout_ECX[3] = *piVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 4));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar2;
}



// ============================================================
// Catch@10002893 @ 0x10002893 22B
// ============================================================

void Catch_10002893(undefined4 *param_1)

{
  int extraout_ECX;
  int unaff_EBP;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x14) + 0x10));
  __CxxThrowException_8(0,0);
  if (param_1 != (undefined4 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x10));
    *param_1 = *(undefined4 *)(extraout_ECX + 0xc);
    *(undefined4 **)(extraout_ECX + 0xc) = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 0x10));
  }
  return;
}



// ============================================================
// FUN_100028a9 @ 0x100028a9 44B
// ============================================================

void __thiscall FUN_100028a9(void *this,undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
    *param_1 = *(undefined4 *)((int)this + 0xc);
    *(undefined4 **)((int)this + 0xc) = param_1;
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return;
}



// ============================================================
// FUN_100028d5 @ 0x100028d5 28B
// ============================================================

undefined * __thiscall FUN_100028d5(void *this,byte param_1)

{
  FUN_100028f1();
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_100028f1 @ 0x100028f1 41B
// ============================================================

void FUN_100028f1(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_100100b4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1000c516((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000291a @ 0x1000291a 45B
// ============================================================

void FUN_1000291a(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x10002945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// ============================================================
// FUN_1000295c @ 0x1000295c 79B
// ============================================================

void FUN_1000295c(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x10002984,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// ============================================================
// FUN_100029ab @ 0x100029ab 54B
// ============================================================

undefined4 __cdecl
FUN_100029ab(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_10004295(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



// ============================================================
// FUN_100029e1 @ 0x100029e1 84B
// ============================================================

undefined4 __cdecl
FUN_100029e1(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_10002a35;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// ============================================================
// FUN_10002a35 @ 0x10002a35 37B
// ============================================================

void __cdecl FUN_10002a35(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_10004295(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



// ============================================================
// FUN_10002a5a @ 0x10002a5a 182B
// ============================================================

undefined4 __cdecl
FUN_10002a5a(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  code *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_10002b10;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x10002ae2;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_10004b81();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// ============================================================
// FUN_10002b10 @ 0x10002b10 114B
// ============================================================

undefined4 __cdecl FUN_10002b10(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_10004295(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1000295c(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x10002b7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// ============================================================
// FUN_10002b85 @ 0x10002b85 123B
// ============================================================

int __cdecl FUN_10002b85(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar5;
  uVar3 = uVar5;
  while (uVar2 = uVar4, -1 < param_2) {
    if (uVar5 == 0xffffffff) {
      FUN_10004ce9();
    }
    uVar5 = uVar5 - 1;
    if (((*(int *)(iVar1 + 4 + uVar5 * 0x14) < param_3) &&
        (param_3 <= *(int *)(iVar1 + uVar5 * 0x14 + 8))) || (uVar4 = uVar2, uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      uVar3 = uVar2;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(uint *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_10004ce9();
  }
  return iVar1 + uVar5 * 0x14;
}



// ============================================================
// __global_unwind2 @ 0x10002c00 32B
// ============================================================

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10002c18,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// ============================================================
// __local_unwind2 @ 0x10002c42 104B
// ============================================================

/* Library Function - Single Match
    __local_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __local_unwind2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  int iStack_10;
  
  iStack_10 = param_1;
  puStack_18 = &LAB_10002c20;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_10002cd6();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// ============================================================
// __abnormal_termination @ 0x10002caa 35B
// ============================================================

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10002c20) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// ============================================================
// FUN_10002cd6 @ 0x10002cd6 24B
// ============================================================

void FUN_10002cd6(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10013730 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1001372c = in_EAX;
  DAT_10013734 = unaff_EBP;
  return;
}



// ============================================================
// FUN_10002cee @ 0x10002cee 126B
// ============================================================

undefined4 __cdecl FUN_10002cee(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_100032fc();
  pbVar1 = (byte *)FUN_10003476(DAT_10018954);
  if (pbVar1 < DAT_10018950 + (4 - (int)DAT_10018954)) {
    SVar2 = FUN_10003476(DAT_10018954);
    pbVar1 = FUN_10004d3f(DAT_10018954,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_10002d63;
    }
    DAT_10018950 = pbVar1 + ((int)DAT_10018950 - (int)DAT_10018954 >> 2) * 4;
    DAT_10018954 = pbVar1;
  }
  *(undefined4 *)DAT_10018950 = param_1;
  DAT_10018950 = DAT_10018950 + 4;
LAB_10002d63:
  FUN_10003305();
  return param_1;
}



// ============================================================
// FUN_10002dad @ 0x10002dad 217B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002dad(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10018250 = GetVersion();
    iVar1 = FUN_1000582b(1);
    if (iVar1 != 0) {
      _DAT_1001825c = DAT_10018250 >> 8 & 0xff;
      _DAT_10018258 = DAT_10018250 & 0xff;
      DAT_10018250 = DAT_10018250 >> 0x10;
      _DAT_10018254 = _DAT_10018258 * 0x100 + _DAT_1001825c;
      iVar1 = FUN_10004afc();
      if (iVar1 != 0) {
        DAT_1001895c = GetCommandLineA();
        DAT_1001823c = FUN_10005584();
        FUN_1000506e();
        FUN_10005337();
        FUN_1000527e();
        FUN_1000320a();
        DAT_10018238 = DAT_10018238 + 1;
        goto LAB_10002e80;
      }
      FUN_10005888();
    }
LAB_10002e0d:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_10018238 < 1) goto LAB_10002e0d;
      DAT_10018238 = DAT_10018238 + -1;
      if (DAT_10018288 == 0) {
        FUN_10003248();
      }
      FUN_1000522a();
      FUN_10004b50();
      FUN_10005888();
    }
    else if (param_2 == 3) {
      FUN_10004be8((undefined *)0x0);
    }
LAB_10002e80:
    uVar2 = 1;
  }
  return uVar2;
}



// ============================================================
// entry @ 0x10002e86 157B
// ============================================================

int entry(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_10018238;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10002ece;
    if ((DAT_10018960 != (code *)0x0) &&
       (iVar2 = (*DAT_10018960)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10002dad(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10002ece:
  iVar2 = FUN_10002150(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10002dad(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10002dad(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10018960 != (code *)0x0) {
      iVar2 = (*DAT_10018960)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// ============================================================
// __amsg_exit @ 0x10002f23 48B
// ============================================================

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10018244 == 1) || ((DAT_10018244 == 0 && (DAT_10018248 == 1)))) {
    FUN_10005930();
  }
  FUN_10005969(param_1);
  (*(code *)PTR___exit_10013738)(0xff);
  return;
}



// ============================================================
// __nh_malloc @ 0x10002f68 44B
// ============================================================

/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_10002f94((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10005abc(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// ============================================================
// FUN_10002f94 @ 0x10002f94 231B
// ============================================================

void __cdecl FUN_10002f94(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100100e0;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  if (DAT_10018610 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10018608) {
      ExceptionList = &local_14;
      FUN_10006d80(9);
      local_8 = 0;
      piVar1 = FUN_10005e73(param_1);
      local_8 = 0xffffffff;
      FUN_10002ffb();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10018610 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10015b84) {
        ExceptionList = &local_14;
        FUN_10006d80(9);
        local_8 = 1;
        piVar1 = FUN_10006916(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_1000305a();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_10003073;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_10003073:
  HeapAlloc(DAT_1001860c,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10003090 @ 0x10003090 215B
// ============================================================

void __cdecl FUN_10003090(undefined *param_1)

{
  uint *puVar1;
  int local_2c;
  uint *local_28;
  uint local_24;
  uint *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100100f8;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10018610 == 3) {
    ExceptionList = &local_14;
    FUN_10006d80(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10005b1f((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10005b4a(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_100030fa();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10018610 != 2) goto LAB_1000315c;
    ExceptionList = &local_14;
    FUN_10006d80(9);
    local_8 = 1;
    local_28 = (uint *)FUN_1000687a(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_100068d1(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10003152();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_1000315c:
  HeapFree(DAT_1001860c,0,param_1);
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10003179 @ 0x10003179 41B
// ============================================================

void __fastcall FUN_10003179(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_10006d80(0x1b);
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_10003090((undefined *)param_1[1]);
  }
  FUN_10006de1(0x1b);
  return;
}



// ============================================================
// FUN_100031a2 @ 0x100031a2 28B
// ============================================================

undefined4 * __thiscall FUN_100031a2(void *this,byte param_1)

{
  FUN_10003179(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_100031c0 @ 0x100031c0 31B
// ============================================================

void FUN_100031c0(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}



// ============================================================
// FUN_100031df @ 0x100031df 43B
// ============================================================

uint * __cdecl FUN_100031df(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10006f70(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}



// ============================================================
// FUN_1000320a @ 0x1000320a 45B
// ============================================================

void FUN_1000320a(void)

{
  if (DAT_10018958 != (code *)0x0) {
    (*DAT_10018958)();
  }
  FUN_1000330e((undefined4 *)&DAT_10013070,(undefined4 *)&DAT_10013080);
  FUN_1000330e((undefined4 *)&DAT_10013000,(undefined4 *)&DAT_1001306c);
  return;
}



// ============================================================
// FUN_10003257 @ 0x10003257 163B
// ============================================================

void __cdecl FUN_10003257(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100032fc();
  if (DAT_1001828c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10018288 = 1;
  DAT_10018284 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10018954 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10018950 - 4), DAT_10018954 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10018954 <= puVar1);
    }
    FUN_1000330e((undefined4 *)&DAT_10013084,(undefined4 *)&DAT_10013088);
  }
  FUN_1000330e((undefined4 *)&DAT_1001308c,(undefined4 *)&DAT_10013094);
  if (param_3 == 0) {
    DAT_1001828c = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10003305();
  return;
}



// ============================================================
// FUN_1000330e @ 0x1000330e 26B
// ============================================================

void __cdecl FUN_1000330e(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// ============================================================
// _memset @ 0x10003330 88B
// ============================================================

/* Library Function - Single Match
    _memset
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

void * __cdecl _memset(void *_Dst,int _Val,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  uint *puVar4;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  puVar4 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(undefined1 *)puVar4 = (undefined1)_Val;
        puVar4 = (uint *)((int)puVar4 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    _Size = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      }
      if (_Size == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar4 = (char)uVar1;
    puVar4 = (uint *)((int)puVar4 + 1);
    _Size = _Size - 1;
  } while (_Size != 0);
  return _Dst;
}



// ============================================================
// _memcmp @ 0x10003390 172B
// ============================================================

/* Library Function - Single Match
    _memcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  
  if (_Size != 0) {
    if ((((uint)_Buf1 | (uint)_Buf2) & 3) == 0) {
      uVar2 = _Size & 3;
      uVar5 = _Size >> 2;
      bVar9 = false;
      puVar7 = _Buf1;
      puVar8 = _Buf2;
      if (uVar5 != 0) {
        do {
          _Buf1 = puVar7;
          _Buf2 = puVar8;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          _Buf2 = puVar8 + 1;
          _Buf1 = puVar7 + 1;
          bVar9 = *puVar7 == *puVar8;
          puVar7 = _Buf1;
          puVar8 = _Buf2;
        } while (bVar9);
        if (!bVar9) {
          uVar2 = *(uint *)((int)_Buf1 + -4);
          uVar5 = *(uint *)((int)_Buf2 + -4);
          bVar9 = (byte)uVar2 < (byte)uVar5;
          if ((((byte)uVar2 == (byte)uVar5) &&
              (bVar4 = (byte)(uVar2 >> 8), bVar6 = (byte)(uVar5 >> 8), bVar9 = bVar4 < bVar6,
              bVar4 == bVar6)) &&
             (bVar4 = (byte)(uVar2 >> 0x10), bVar6 = (byte)(uVar5 >> 0x10), bVar9 = bVar4 < bVar6,
             bVar4 == bVar6)) {
            bVar9 = (byte)(uVar2 >> 0x18) < (byte)(uVar5 >> 0x18);
          }
          goto LAB_1000340a;
        }
      }
      if (uVar2 != 0) {
        uVar5 = *(uint *)_Buf1;
        uVar1 = *(uint *)_Buf2;
        bVar9 = (byte)uVar5 < (byte)uVar1;
        if ((byte)uVar5 != (byte)uVar1) {
LAB_1000340a:
          return (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        iVar3 = 0;
        if (uVar2 != 1) {
          bVar6 = (byte)(uVar5 >> 8);
          bVar4 = (byte)(uVar1 >> 8);
          bVar9 = bVar6 < bVar4;
          if (bVar6 != bVar4) goto LAB_1000340a;
          iVar3 = 0;
          if (uVar2 != 2) {
            bVar9 = (uVar5 & 0xff0000) < (uVar1 & 0xff0000);
            if ((uVar5 & 0xff0000) != (uVar1 & 0xff0000)) goto LAB_1000340a;
            iVar3 = uVar2 - 3;
          }
        }
        return iVar3;
      }
    }
    else {
      if ((_Size & 1) == 0) goto LAB_100033bd;
      bVar9 = *(byte *)_Buf1 < *(byte *)_Buf2;
      if (*(byte *)_Buf1 != *(byte *)_Buf2) goto LAB_1000340a;
      _Buf1 = (void *)((int)_Buf1 + 1);
      _Buf2 = (void *)((int)_Buf2 + 1);
      for (_Size = _Size - 1; _Size != 0; _Size = _Size - 2) {
LAB_100033bd:
        bVar9 = *(byte *)_Buf1 < *(byte *)_Buf2;
        if ((*(byte *)_Buf1 != *(byte *)_Buf2) ||
           (bVar9 = *(byte *)((int)_Buf1 + 1) < *(byte *)((int)_Buf2 + 1),
           *(byte *)((int)_Buf1 + 1) != *(byte *)((int)_Buf2 + 1))) goto LAB_1000340a;
        _Buf2 = (void *)((int)_Buf2 + 2);
        _Buf1 = (void *)((int)_Buf1 + 2);
      }
    }
  }
  return 0;
}



// ============================================================
// __CxxThrowException@8 @ 0x1000343c 58B
// ============================================================

/* Library Function - Single Match
    __CxxThrowException@8
   
   Library: Visual Studio 2003 Release */

void __CxxThrowException_8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_24 [4];
  DWORD local_14;
  ULONG_PTR local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  pDVar2 = &DAT_10010118;
  pDVar3 = local_24;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_c = param_1;
  local_8 = param_2;
  RaiseException(local_24[0],local_24[1],local_14,&local_10);
  return;
}



// ============================================================
// FUN_10003476 @ 0x10003476 214B
// ============================================================

SIZE_T __cdecl FUN_10003476(undefined *param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined4 local_30;
  byte *local_2c;
  uint local_28;
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10010138;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  if (DAT_10018610 == 3) {
    ExceptionList = &local_14;
    FUN_10006d80(9);
    local_8 = 0;
    local_20 = (byte *)FUN_10005b1f((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_100034e0();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10018610 != 2) goto LAB_10003534;
    ExceptionList = &local_14;
    FUN_10006d80(9);
    local_8 = 1;
    local_2c = (byte *)FUN_1000687a(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_1000355b();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_10003534:
  SVar2 = HeapSize(DAT_1001860c,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}



// ============================================================
// FUN_10003564 @ 0x10003564 151B
// ============================================================

byte * __cdecl FUN_10003564(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (DAT_1001873c == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_10006d80(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_10018840 + uVar3 + 1) & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_10006de1(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_10006de1(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2 + 1;
    }
    FUN_10006de1(0x19);
    pbVar2 = (byte *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return pbVar2;
}



// ============================================================
// FUN_100035fb @ 0x100035fb 114B
// ============================================================

byte * __cdecl FUN_100035fb(byte *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar5 = (byte *)0x0;
  if (DAT_1001873c == 0) {
    pbVar5 = (byte *)_strrchr((char *)param_1,param_2);
  }
  else {
    FUN_10006d80(0x19);
    do {
      bVar4 = *param_1;
      if ((*(byte *)((int)&DAT_10018840 + bVar4 + 1) & 4) == 0) {
        bVar6 = param_2 == bVar4;
LAB_10003656:
        pbVar3 = param_1;
        if (bVar6) {
          pbVar5 = param_1;
        }
      }
      else {
        bVar1 = param_1[1];
        pbVar3 = param_1 + 1;
        if (bVar1 == 0) {
          bVar6 = pbVar5 == (byte *)0x0;
          param_1 = pbVar3;
          bVar4 = bVar1;
          goto LAB_10003656;
        }
        uVar2 = CONCAT11(bVar4,bVar1);
        bVar4 = bVar1;
        if (param_2 == uVar2) {
          pbVar5 = param_1;
        }
      }
      param_1 = pbVar3 + 1;
    } while (bVar4 != 0);
    FUN_10006de1(0x19);
  }
  return pbVar5;
}



// ============================================================
// FUN_1000366d @ 0x1000366d 23B
// ============================================================

byte * __cdecl FUN_1000366d(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + 1;
  if ((*(byte *)((int)&DAT_10018840 + *param_1 + 1) & 4) != 0) {
    pbVar1 = param_1 + 2;
  }
  return pbVar1;
}



// ============================================================
// FUN_10003684 @ 0x10003684 280B
// ============================================================

undefined * FUN_10003684(undefined *param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  SIZE_T dwBytes;
  int local_30;
  byte *local_2c;
  int *local_28;
  uint *local_24;
  undefined *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10010150;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  if (param_2 < 0xffffffe1) {
    if (DAT_10018610 == 3) {
      ExceptionList = &local_14;
      FUN_10006d80(9);
      local_8 = 0;
      local_24 = (uint *)FUN_10005b1f((int)param_1);
      if (((local_24 != (uint *)0x0) && (local_20 = (undefined *)0x0, param_2 <= DAT_10018608)) &&
         (iVar1 = FUN_10006328(local_24,(int)param_1,param_2), iVar1 != 0)) {
        local_20 = param_1;
      }
      local_8 = 0xffffffff;
      FUN_10003716();
      if (local_24 == (uint *)0x0) {
        puVar2 = (undefined *)FUN_100037b4();
        return puVar2;
      }
    }
    else {
      if (DAT_10018610 == 2) {
        if (param_2 == 0) {
          param_2 = 1;
        }
        dwBytes = param_2 + 0xf & 0xfffffff0;
        ExceptionList = &local_14;
        FUN_10006d80(9);
        local_8 = 1;
        local_2c = (byte *)FUN_1000687a(param_1,&local_30,(uint *)&local_28);
        if (local_2c != (byte *)0x0) {
          local_20 = (undefined *)0x0;
          if ((dwBytes <= DAT_10015b84) &&
             (iVar1 = FUN_10006c42(local_30,local_28,local_2c,param_2 + 0xf >> 4), iVar1 != 0)) {
            local_20 = param_1;
          }
          __local_unwind2((int)&local_14,-1);
          ExceptionList = local_14;
          return local_20;
        }
        local_8 = 0xffffffff;
        FUN_100037ab();
        if (local_2c != (byte *)0x0) {
          ExceptionList = local_14;
          return local_20;
        }
      }
      else {
        if (param_2 == 0) {
          param_2 = 1;
        }
        dwBytes = param_2 + 0xf & 0xfffffff0;
        ExceptionList = &local_14;
      }
      local_20 = HeapReAlloc(DAT_1001860c,0x10,param_1,dwBytes);
    }
  }
  else {
    local_20 = (undefined *)0x0;
  }
  ExceptionList = local_14;
  return local_20;
}



// ============================================================
// FUN_100037b4 @ 0x100037b4 52B
// ============================================================

undefined4 FUN_100037b4(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    unaff_ESI = 1;
  }
  pvVar1 = HeapReAlloc(DAT_1001860c,0x10,*(LPVOID *)(unaff_EBP + 8),unaff_ESI + 0xfU & 0xfffffff0);
  *(LPVOID *)(unaff_EBP + -0x1c) = pvVar1;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}



// ============================================================
// FUN_100037f0 @ 0x100037f0 47B
// ============================================================

/* WARNING: Unable to track spacebase fully for stack */

void FUN_100037f0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



// ============================================================
// FUN_1000381f @ 0x1000381f 429B
// ============================================================

undefined4 __cdecl FUN_1000381f(UINT param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  BYTE *pBVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  _cpinfo local_1c;
  uint local_8;
  
  FUN_10006d80(0x19);
  CodePage = FUN_100039cc(param_1);
  if (CodePage != DAT_10018724) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10013778;
LAB_1000385c:
      if (*pUVar5 != CodePage) goto code_r0x10003860;
      local_8 = 0;
      puVar15 = &DAT_10018840;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10013788);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10013770)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10018840 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          pbVar11 = pbVar11 + 2;
          bVar3 = *pbVar11;
        }
        local_8 = local_8 + 1;
        pbVar13 = pbVar13 + 8;
      } while (local_8 < 4);
      DAT_1001873c = 1;
      DAT_10018724 = CodePage;
      DAT_10018944 = FUN_10003a16(CodePage);
      DAT_10018730 = *(undefined4 *)(iVar12 + 0x1001377c);
      DAT_10018734 = *(undefined4 *)(iVar12 + 0x10013780);
      DAT_10018738 = *(undefined4 *)(iVar12 + 0x10013784);
      goto LAB_100039b0;
    }
    goto LAB_100039ab;
  }
  goto LAB_10003846;
code_r0x10003860:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10013867 < (int)pUVar5) goto code_r0x1000386b;
  goto LAB_1000385c;
code_r0x1000386b:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10018944 = 0;
    puVar15 = &DAT_10018840;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_1001873c = 0;
      DAT_10018724 = CodePage;
    }
    else {
      DAT_10018724 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10018840 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10018840 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10018944 = FUN_10003a16(CodePage);
      DAT_1001873c = 1;
    }
    DAT_10018730 = 0;
    DAT_10018734 = 0;
    DAT_10018738 = 0;
  }
  else {
    if (DAT_10018290 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_100039bd;
    }
LAB_100039ab:
    FUN_10003a49();
  }
LAB_100039b0:
  FUN_10003a72();
LAB_10003846:
  uVar14 = 0;
LAB_100039bd:
  FUN_10006de1(0x19);
  return uVar14;
}



// ============================================================
// FUN_100039cc @ 0x100039cc 74B
// ============================================================

UINT __cdecl FUN_100039cc(UINT param_1)

{
  UINT UVar1;
  bool bVar2;
  
  if (param_1 == 0xfffffffe) {
    DAT_10018290 = 1;
                    /* WARNING: Could not recover jumptable at 0x100039e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetOEMCP();
    return UVar1;
  }
  if (param_1 == 0xfffffffd) {
    DAT_10018290 = 1;
                    /* WARNING: Could not recover jumptable at 0x100039fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetACP();
    return UVar1;
  }
  bVar2 = param_1 == 0xfffffffc;
  if (bVar2) {
    param_1 = DAT_1001846c;
  }
  DAT_10018290 = (uint)bVar2;
  return param_1;
}



// ============================================================
// FUN_10003a16 @ 0x10003a16 51B
// ============================================================

undefined4 __cdecl FUN_10003a16(int param_1)

{
  if (param_1 == 0x3a4) {
    return 0x411;
  }
  if (param_1 == 0x3a8) {
    return 0x804;
  }
  if (param_1 == 0x3b5) {
    return 0x412;
  }
  if (param_1 != 0x3b6) {
    return 0;
  }
  return 0x404;
}



// ============================================================
// FUN_10003a49 @ 0x10003a49 41B
// ============================================================

void FUN_10003a49(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10018840;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10018724 = 0;
  DAT_1001873c = 0;
  DAT_10018944 = 0;
  DAT_10018730 = 0;
  DAT_10018734 = 0;
  DAT_10018738 = 0;
  return;
}



// ============================================================
// FUN_10003a72 @ 0x10003a72 389B
// ============================================================

void FUN_10003a72(void)

{
  byte *pbVar1;
  BOOL BVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined1 uVar8;
  BYTE *pBVar9;
  CHAR *pCVar10;
  WORD local_518 [256];
  WCHAR local_318 [128];
  WCHAR local_218 [128];
  CHAR local_118 [256];
  _cpinfo local_18;
  
  BVar2 = GetCPInfo(DAT_10018724,&local_18);
  if (BVar2 == 1) {
    uVar3 = 0;
    do {
      local_118[uVar3] = (CHAR)uVar3;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
    local_118[0] = ' ';
    if (local_18.LeadByte[0] != 0) {
      pBVar9 = local_18.LeadByte + 1;
      do {
        uVar3 = (uint)local_18.LeadByte[0];
        if (uVar3 <= *pBVar9) {
          uVar5 = (*pBVar9 - uVar3) + 1;
          uVar6 = uVar5 >> 2;
          pCVar10 = local_118 + uVar3;
          while (uVar6 != 0) {
            uVar6 = uVar6 - 1;
            builtin_memcpy(pCVar10,"    ",4);
            pCVar10 = pCVar10 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pCVar10 = ' ';
            pCVar10 = pCVar10 + 1;
          }
        }
        local_18.LeadByte[0] = pBVar9[1];
        pBVar9 = pBVar9 + 2;
      } while (local_18.LeadByte[0] != 0);
    }
    FUN_10007673(1,local_118,0x100,local_518,DAT_10018724,DAT_10018944,0);
    FUN_10007424(DAT_10018944,0x100,local_118,0x100,local_218,0x100,DAT_10018724,0);
    FUN_10007424(DAT_10018944,0x200,local_118,0x100,local_318,0x100,DAT_10018724,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10018840 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10003b7e;
        }
        (&DAT_10018740)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10018840 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10003b7e:
        (&DAT_10018740)[uVar3] = uVar8;
      }
      uVar3 = uVar3 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar3 < 0x100);
  }
  else {
    uVar3 = 0;
    do {
      if ((uVar3 < 0x41) || (0x5a < uVar3)) {
        if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
          pbVar1 = (byte *)((int)&DAT_10018840 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_10003bc8;
        }
        (&DAT_10018740)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10018840 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_10003bc8:
        (&DAT_10018740)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// ============================================================
// FUN_10003bf7 @ 0x10003bf7 28B
// ============================================================

void FUN_10003bf7(void)

{
  if (DAT_1001894c == 0) {
    FUN_1000381f(0xfffffffd);
    DAT_1001894c = 1;
  }
  return;
}



// ============================================================
// FUN_10003c20 @ 0x10003c20 664B
// ============================================================

undefined4 * __cdecl FUN_10003c20(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10003dd7_caseD_2;
        case 3:
          goto switchD_10003dd7_caseD_3;
        }
        goto switchD_10003dd7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10003dd7_caseD_0;
      case 1:
        goto switchD_10003dd7_caseD_1;
      case 2:
        goto switchD_10003dd7_caseD_2;
      case 3:
        goto switchD_10003dd7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10003dd7_caseD_2;
            case 3:
              goto switchD_10003dd7_caseD_3;
            }
            goto switchD_10003dd7_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10003dd7_caseD_2;
            case 3:
              goto switchD_10003dd7_caseD_3;
            }
            goto switchD_10003dd7_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10003dd7_caseD_2;
            case 3:
              goto switchD_10003dd7_caseD_3;
            }
            goto switchD_10003dd7_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10003dd7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10003dd7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10003dd7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10003dd7_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10003c55_caseD_2;
      case 3:
        goto switchD_10003c55_caseD_3;
      }
      goto switchD_10003c55_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10003c55_caseD_0;
    case 1:
      goto switchD_10003c55_caseD_1;
    case 2:
      goto switchD_10003c55_caseD_2;
    case 3:
      goto switchD_10003c55_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10003c55_caseD_2;
          case 3:
            goto switchD_10003c55_caseD_3;
          }
          goto switchD_10003c55_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10003c55_caseD_2;
          case 3:
            goto switchD_10003c55_caseD_3;
          }
          goto switchD_10003c55_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10003c55_caseD_2;
          case 3:
            goto switchD_10003c55_caseD_3;
          }
          goto switchD_10003c55_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10003c55_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10003c55_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10003c55_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10003c55_caseD_0:
  return param_1;
}



// ============================================================
// FUN_10003f60 @ 0x10003f60 664B
// ============================================================

undefined4 * __cdecl FUN_10003f60(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = (undefined4 *)((param_3 - 4) + (int)param_2);
    puVar4 = (undefined4 *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10004117_caseD_2;
        case 3:
          goto switchD_10004117_caseD_3;
        }
        goto switchD_10004117_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10004117_caseD_0;
      case 1:
        goto switchD_10004117_caseD_1;
      case 2:
        goto switchD_10004117_caseD_2;
      case 3:
        goto switchD_10004117_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10004117_caseD_2;
            case 3:
              goto switchD_10004117_caseD_3;
            }
            goto switchD_10004117_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10004117_caseD_2;
            case 3:
              goto switchD_10004117_caseD_3;
            }
            goto switchD_10004117_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10004117_caseD_2;
            case 3:
              goto switchD_10004117_caseD_3;
            }
            goto switchD_10004117_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_10004117_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10004117_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10004117_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10004117_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10003f95_caseD_2;
      case 3:
        goto switchD_10003f95_caseD_3;
      }
      goto switchD_10003f95_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10003f95_caseD_0;
    case 1:
      goto switchD_10003f95_caseD_1;
    case 2:
      goto switchD_10003f95_caseD_2;
    case 3:
      goto switchD_10003f95_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar3 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10003f95_caseD_2;
          case 3:
            goto switchD_10003f95_caseD_3;
          }
          goto switchD_10003f95_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10003f95_caseD_2;
          case 3:
            goto switchD_10003f95_caseD_3;
          }
          goto switchD_10003f95_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10003f95_caseD_2;
          case 3:
            goto switchD_10003f95_caseD_3;
          }
          goto switchD_10003f95_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_10003f95_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10003f95_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10003f95_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10003f95_caseD_0:
  return param_1;
}



// ============================================================
// FUN_10004295 @ 0x10004295 155B
// ============================================================

undefined4 __cdecl
FUN_10004295(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_10004ce9();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_10004330(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_100045ea((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// ============================================================
// FUN_10004330 @ 0x10004330 435B
// ============================================================

void __cdecl
FUN_10004330(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte *pbVar1;
  bool bVar2;
  DWORD *pDVar3;
  undefined3 extraout_var;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_18 = local_18 & 0xffffff00;
  local_14 = *(int *)((int)param_2 + 8);
  if ((local_14 < -1) || (*(int *)(param_5 + 4) <= local_14)) {
    FUN_10004ce9();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_10004b81();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_10004b81();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_10004b81();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_10007900(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_10004ce9();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_100044b8;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_10004ce9();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_10002b85(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_10004a22((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_1000458d(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1000469e(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                iVar5 = local_14;
                goto LAB_10004498;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_10004498:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_100044b8:
  if (param_6 == '\0') {
    FUN_100044e3(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_10004c88();
  return;
}



// ============================================================
// FUN_100044e3 @ 0x100044e3 170B
// ============================================================

void __cdecl
FUN_100044e3(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_10004b81();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_10002a5a(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_10002b85(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1000469e(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



// ============================================================
// FUN_1000458d @ 0x1000458d 93B
// ============================================================

undefined4 __cdecl FUN_1000458d(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100045e4:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_100045be:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100045e4;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_100045be;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// FUN_100045ea @ 0x100045ea 132B
// ============================================================

void __cdecl FUN_100045ea(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10010290;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_10004ce9();
    }
    local_8 = 0;
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      __CallSettingFrame_12(iVar1,param_1,0x103);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10004688 @ 0x10004688 22B
// ============================================================

undefined4 __cdecl FUN_10004688(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_10004c88();
  return uVar1;
}



// ============================================================
// FUN_1000469e @ 0x1000469e 123B
// ============================================================

void __cdecl
FUN_1000469e(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_1000485e((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_1000295c(param_10,param_1);
  FUN_100045ea((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_10004719((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000291a(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// ============================================================
// FUN_10004719 @ 0x10004719 165B
// ============================================================

undefined4 __cdecl
FUN_10004719(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_100102a0;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10004b81();
  FUN_10004b81();
  pDVar1 = FUN_10004b81();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10004b81();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_100029e1(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_100047e6();
  ExceptionList = local_14;
  return uVar2;
}



// ============================================================
// FUN_100047e6 @ 0x100047e6 78B
// ============================================================

void FUN_100047e6(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_10004b81();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_10004b81();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_10004a22((int)unaff_EDI);
  }
  return;
}



// ============================================================
// FUN_10004834 @ 0x10004834 42B
// ============================================================

undefined4 __cdecl FUN_10004834(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     (piVar1[7] == 0)) {
    return 1;
  }
  return 0;
}



// ============================================================
// FUN_1000485e @ 0x1000485e 440B
// ============================================================

void __cdecl FUN_1000485e(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined4 *puVar4;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100102b8;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  if (*(int *)(param_3 + 4) == 0) {
    return;
  }
  if (*(char *)(*(int *)(param_3 + 4) + 8) == '\0') {
    return;
  }
  if (*(int *)(param_3 + 8) == 0) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_3 + 8) + 0xc + param_2);
  local_8 = 0;
  if ((*param_3 & 8) == 0) {
    if ((*param_4 & 1) == 0) {
      if (*(int *)(param_4 + 0x18) == 0) {
        ExceptionList = &local_14;
        bVar2 = FUN_10007900(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_1000791c(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_10004a89(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_10003f60(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_10007900(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_1000791c(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_10007938(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_10004a89(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_10002955(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_10004a89(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1000294e(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_10007900(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_1000791c(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_10003f60(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_100048ec;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_10007900(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_1000791c(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_100048ec:
      iVar3 = FUN_10004a89(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_10004ce9();
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10004a22 @ 0x10004a22 86B
// ============================================================

void __cdecl FUN_10004a22(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100102c8;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_1000294e(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10004a89 @ 0x10004a89 35B
// ============================================================

int __cdecl FUN_10004a89(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[1];
  iVar2 = *param_2 + param_1;
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(iVar1 + param_1) + param_2[2]) + iVar1;
  }
  return iVar2;
}



// ============================================================
// __CallSettingFrame@12 @ 0x10004ab0 76B
// ============================================================

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Library Function - Single Match
    __CallSettingFrame@12
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = (code *)__NLG_Notify1(param_3);
  (*pcVar1)();
  if (param_3 == 0x100) {
    param_3 = 2;
  }
  __NLG_Notify1(param_3);
  return;
}



// ============================================================
// FUN_10004afc @ 0x10004afc 84B
// ============================================================

undefined4 FUN_10004afc(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10006ceb();
  DAT_10013aa0 = TlsAlloc();
  if (DAT_10013aa0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100070db(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10013aa0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10004b6e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}



// ============================================================
// FUN_10004b50 @ 0x10004b50 30B
// ============================================================

void FUN_10004b50(void)

{
  FUN_10006d14();
  if (DAT_10013aa0 != 0xffffffff) {
    TlsFree(DAT_10013aa0);
    DAT_10013aa0 = 0xffffffff;
  }
  return;
}



// ============================================================
// FUN_10004b81 @ 0x10004b81 103B
// ============================================================

DWORD * FUN_10004b81(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10013aa0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_100070db(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10013aa0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10004b6e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10004bdc;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10004bdc:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// ============================================================
// FUN_10004be8 @ 0x10004be8 160B
// ============================================================

void __cdecl FUN_10004be8(undefined *param_1)

{
  if (DAT_10013aa0 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10013aa0), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10003090(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10003090(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10003090(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10003090(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10003090(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10003090(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10015c50) {
        FUN_10003090(*(undefined **)(param_1 + 0x50));
      }
      FUN_10003090(param_1);
    }
    TlsSetValue(DAT_10013aa0,(LPVOID)0x0);
    return;
  }
  return;
}



// ============================================================
// FUN_10004c88 @ 0x10004c88 86B
// ============================================================

void FUN_10004c88(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100102d8;
  puStack_10 = &LAB_10006e00;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10004b81();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10004b81();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_10007950();
  return;
}



// ============================================================
// FUN_10004ce9 @ 0x10004ce9 79B
// ============================================================

void FUN_10004ce9(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_100102f0;
  puStack_10 = &LAB_10006e00;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10013aa4 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10013aa4)();
  }
  local_8 = 0xffffffff;
  FUN_10004c88();
  return;
}



// ============================================================
// FUN_10004d3f @ 0x10004d3f 781B
// ============================================================

byte * __cdecl FUN_10004d3f(byte *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  int local_3c;
  uint *local_38;
  byte *local_34;
  int *local_30;
  uint *local_2c;
  byte *local_28;
  uint *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10010308;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_10003090(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_10018610 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10006d80(9);
            local_8 = 0;
            local_2c = (uint *)FUN_10005b1f((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_10018608) {
                iVar1 = FUN_10006328(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_10005e73(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_10003c20((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_10005b1f((int)param_1);
                    FUN_10005b4a(local_2c,(int)param_1);
                  }
                }
                else {
                  local_28 = param_1;
                }
              }
              if (local_28 == (byte *)0x0) {
                if (param_2 == (uint *)0x0) {
                  param_2 = (uint *)0x1;
                }
                param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
                local_28 = HeapAlloc(DAT_1001860c,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_10003c20((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10005b4a(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_10004eca();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_1001860c,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_100183e0 == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_10005abc(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_10018610 == 2) {
          ExceptionList = &local_14;
          if (param_2 < (uint *)0xffffffe1) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x10;
              ExceptionList = &local_14;
            }
            else {
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              ExceptionList = &local_14;
            }
          }
          do {
            local_28 = pbVar3;
            if (param_2 < (uint *)0xffffffe1) {
              FUN_10006d80(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_1000687a(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_1001860c,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_10015b84) {
                  iVar1 = FUN_10006c42(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_10006916((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_10003c20((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_100068d1(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_1001860c,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_10003c20((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_100068d1(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_10005018();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_100183e0 == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_10005abc(param_2);
          } while (iVar1 != 0);
        }
        else {
          do {
            pbVar3 = (byte *)0x0;
            if (param_2 < (uint *)0xffffffe1) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              pbVar3 = HeapReAlloc(DAT_1001860c,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_100183e0 == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_10005abc(param_2);
          } while (iVar1 != 0);
        }
      }
    }
    pbVar3 = (byte *)0x0;
  }
  ExceptionList = local_14;
  return pbVar3;
}



// ============================================================
// FUN_1000506e @ 0x1000506e 444B
// ============================================================

void FUN_1000506e(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  HANDLE hFile;
  UINT *pUVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  UINT UVar9;
  _STARTUPINFOA local_4c;
  byte *local_8;
  
  puVar2 = _malloc(0x480);
  if (puVar2 == (undefined4 *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_10018720 = 0x20;
  DAT_10018620 = puVar2;
  for (; puVar2 < DAT_10018620 + 0x120; puVar2 = puVar2 + 9) {
    *(undefined1 *)(puVar2 + 1) = 0;
    *puVar2 = 0xffffffff;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 5) = 10;
  }
  GetStartupInfoA(&local_4c);
  if ((local_4c.cbReserved2 != 0) && ((UINT *)local_4c.lpReserved2 != (UINT *)0x0)) {
    UVar8 = *(UINT *)local_4c.lpReserved2;
    pUVar5 = (UINT *)((int)local_4c.lpReserved2 + 4);
    local_8 = (byte *)((int)pUVar5 + UVar8);
    if (0x7ff < (int)UVar8) {
      UVar8 = 0x800;
    }
    UVar9 = UVar8;
    if ((int)DAT_10018720 < (int)UVar8) {
      puVar2 = &DAT_10018624;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10018720;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10018720 = DAT_10018720 + 0x20;
        *puVar2 = puVar3;
        puVar1 = puVar3;
        for (; puVar3 < puVar1 + 0x120; puVar3 = puVar3 + 9) {
          *(undefined1 *)(puVar3 + 1) = 0;
          *puVar3 = 0xffffffff;
          puVar3[2] = 0;
          *(undefined1 *)((int)puVar3 + 5) = 10;
          puVar1 = (undefined4 *)*puVar2;
        }
        puVar2 = puVar2 + 1;
        UVar9 = UVar8;
      } while ((int)DAT_10018720 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10018620)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(undefined4 *)local_8;
          *(byte *)(puVar2 + 1) = (byte)*pUVar5;
        }
        local_8 = local_8 + 4;
        uVar7 = uVar7 + 1;
        pUVar5 = (UINT *)((int)pUVar5 + 1);
      } while ((int)uVar7 < (int)UVar9);
    }
  }
  iVar6 = 0;
  do {
    puVar2 = DAT_10018620 + iVar6 * 9;
    if (DAT_10018620[iVar6 * 9] == -1) {
      *(undefined1 *)(puVar2 + 1) = 0x81;
      if (iVar6 == 0) {
        DVar4 = 0xfffffff6;
      }
      else {
        DVar4 = 0xfffffff5 - (iVar6 != 1);
      }
      hFile = GetStdHandle(DVar4);
      if ((hFile != (HANDLE)0xffffffff) && (DVar4 = GetFileType(hFile), DVar4 != 0)) {
        *puVar2 = hFile;
        if ((DVar4 & 0xff) != 2) {
          if ((DVar4 & 0xff) == 3) {
            *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 8;
          }
          goto LAB_10005213;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10005213:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10018720);
      return;
    }
  } while( true );
}



// ============================================================
// FUN_1000522a @ 0x1000522a 84B
// ============================================================

void FUN_1000522a(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10018620;
  do {
    uVar2 = *puVar1;
    if (uVar2 != 0) {
      if (uVar2 < uVar2 + 0x480) {
        lpCriticalSection = (LPCRITICAL_SECTION)(uVar2 + 0xc);
        do {
          if (lpCriticalSection[-1].SpinCount != 0) {
            DeleteCriticalSection(lpCriticalSection);
          }
          uVar2 = uVar2 + 0x24;
          lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].OwningThread;
        } while (uVar2 < *puVar1 + 0x480);
      }
      FUN_10003090((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10018720);
  return;
}



// ============================================================
// FUN_1000527e @ 0x1000527e 185B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000527e(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1001894c == 0) {
    FUN_10003bf7();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1001823c; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1001826c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1001823c;
  puVar6 = DAT_1001823c;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10006f70((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10003090((undefined *)DAT_1001823c);
  DAT_1001823c = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10018948 = 1;
  return;
}



// ============================================================
// FUN_10005337 @ 0x10005337 153B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005337(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1001894c == 0) {
    FUN_10003bf7();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100182d4,0x104);
  _DAT_1001827c = &DAT_100182d4;
  pbVar2 = &DAT_100182d4;
  if (*DAT_1001895c != 0) {
    pbVar2 = DAT_1001895c;
  }
  FUN_100053d0(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100053d0(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10018264 = puVar1;
  _DAT_10018260 = local_8 + -1;
  return;
}



// ============================================================
// FUN_100053d0 @ 0x100053d0 436B
// ============================================================

void __cdecl FUN_100053d0(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    while( true ) {
      bVar1 = param_1[1];
      pbVar4 = param_1 + 1;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      if (((*(byte *)((int)&DAT_10018840 + bVar1 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
        pbVar4 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      param_1 = pbVar4;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar4;
        param_3 = param_3 + 1;
      }
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar4 == 0x22) {
      pbVar4 = param_1 + 2;
    }
  }
  else {
    do {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar1 = *param_1;
      pbVar4 = param_1 + 1;
      if ((*(byte *)((int)&DAT_10018840 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_1000547b;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_1000547b:
      pbVar4 = pbVar4 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar2 = false;
  puVar7 = param_2;
  while (*pbVar4 != 0) {
    for (; (*pbVar4 == 0x20 || (*pbVar4 == 9)); pbVar4 = pbVar4 + 1) {
    }
    if (*pbVar4 == 0) break;
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = param_3;
      puVar7 = puVar7 + 1;
      param_2 = puVar7;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      uVar6 = 0;
      for (; *pbVar4 == 0x5c; pbVar4 = pbVar4 + 1) {
        uVar6 = uVar6 + 1;
      }
      if (*pbVar4 == 0x22) {
        pbVar5 = pbVar4;
        if ((uVar6 & 1) == 0) {
          if ((!bVar2) || (pbVar5 = pbVar4 + 1, pbVar4[1] != 0x22)) {
            bVar3 = false;
            pbVar5 = pbVar4;
          }
          bVar2 = !bVar2;
          puVar7 = param_2;
        }
        uVar6 = uVar6 >> 1;
        pbVar4 = pbVar5;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      bVar1 = *pbVar4;
      if ((bVar1 == 0) || ((!bVar2 && ((bVar1 == 0x20 || (bVar1 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_10018840 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10018840 + bVar1 + 1) & 4) != 0) {
            *param_3 = bVar1;
            param_3 = param_3 + 1;
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      pbVar4 = pbVar4 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



// ============================================================
// FUN_10005584 @ 0x10005584 306B
// ============================================================

LPSTR FUN_10005584(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  WCHAR *pWVar4;
  int iVar5;
  size_t _Size;
  LPSTR pCVar6;
  char *pcVar7;
  LPWCH lpWideCharStr;
  LPCH pCVar9;
  LPSTR local_8;
  char *pcVar8;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar9 = (LPCH)0x0;
  if (DAT_100183d8 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_100183d8 = 1;
LAB_100055db:
      if ((lpWideCharStr == (LPWCH)0x0) &&
         (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr == (LPWCH)0x0)) {
        return (LPSTR)0x0;
      }
      WVar2 = *lpWideCharStr;
      pWVar4 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar3 = pWVar4;
          pWVar4 = pWVar3 + 1;
        } while (*pWVar4 != L'\0');
        pWVar4 = pWVar3 + 2;
        WVar2 = *pWVar4;
      }
      iVar5 = ((int)pWVar4 - (int)lpWideCharStr >> 1) + 1;
      _Size = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      local_8 = (LPSTR)0x0;
      if (((_Size != 0) && (pCVar6 = _malloc(_Size), pCVar6 != (LPSTR)0x0)) &&
         (iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar6,_Size,(LPCSTR)0x0,(LPBOOL)0x0),
         local_8 = pCVar6, iVar5 == 0)) {
        FUN_10003090(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_100183d8 = 2;
  }
  else {
    if (DAT_100183d8 == 1) goto LAB_100055db;
    if (DAT_100183d8 != 2) {
      return (LPSTR)0x0;
    }
  }
  if ((pCVar9 == (LPCH)0x0) && (pCVar9 = GetEnvironmentStrings(), pCVar9 == (LPCH)0x0)) {
    return (LPSTR)0x0;
  }
  cVar1 = *pCVar9;
  pcVar7 = pCVar9;
  while (cVar1 != '\0') {
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = pcVar8 + 2;
    cVar1 = *pcVar7;
  }
  pCVar6 = _malloc((size_t)(pcVar7 + (1 - (int)pCVar9)));
  if (pCVar6 == (LPSTR)0x0) {
    pCVar6 = (LPSTR)0x0;
  }
  else {
    FUN_10003c20((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// ============================================================
// FUN_100056b6 @ 0x100056b6 45B
// ============================================================

void __cdecl FUN_100056b6(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}



// ============================================================
// FUN_100056e3 @ 0x100056e3 328B
// ============================================================

int FUN_100056e3(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *this;
  byte unaff_BL;
  char local_1230 [4240];
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_100037f0();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = '=';
    aCStackY_18[1] = 'W';
    aCStackY_18[2] = '\0';
    aCStackY_18[3] = '\x10';
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",local_1230,0x1090);
    if (DVar4 != 0) {
      pcVar7 = local_1230;
      while (local_1230[0] != '\0') {
        cVar1 = *pcVar7;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar7 = cVar1 + -0x20;
        }
        pcVar7 = pcVar7 + 1;
        local_1230[0] = *pcVar7;
      }
      aCStackY_18[0] = '{';
      aCStackY_18[1] = 'W';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -99;
        aCStackY_18[1] = 'W';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar7 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar7;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar7 = cVar1 + -0x20;
          }
          pcVar7 = pcVar7 + 1;
          local_1a0[0] = *pcVar7;
        }
        pcVar7 = _strstr(local_1230,local_1a0);
      }
      if ((pcVar7 != (char *)0x0) && (pcVar7 = _strchr(pcVar7,0x2c), pcVar7 != (char *)0x0)) {
        pbVar6 = (byte *)(pcVar7 + 1);
        bVar2 = *pbVar6;
        this = pbVar6;
        while (bVar2 != 0) {
          if (*this == 0x3b) {
            *this = 0;
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = '\x03';
        aCStackY_18[1] = 'X';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10007967(this,pbVar6,(int *)0x0,(void *)0xa);
        if (iVar5 == 2) {
          return 2;
        }
        if (iVar5 == 3) {
          return 3;
        }
        if (iVar5 == 1) {
          return 1;
        }
      }
    }
    FUN_100056b6((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// ============================================================
// FUN_1000582b @ 0x1000582b 93B
// ============================================================

undefined4 __cdecl FUN_1000582b(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1001860c = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1001860c != (HANDLE)0x0) {
    DAT_10018610 = FUN_100056e3();
    if (DAT_10018610 == 3) {
      ppuVar1 = (undefined **)FUN_10005ad7(0x3f8);
    }
    else {
      if (DAT_10018610 != 2) {
        return 1;
      }
      ppuVar1 = FUN_1000661e();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1001860c);
  }
  return 0;
}



// ============================================================
// FUN_10005888 @ 0x10005888 168B
// ============================================================

void FUN_10005888(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10018610 == 3) {
    iVar1 = 0;
    if (0 < DAT_10018600) {
      puVar2 = (undefined4 *)((int)DAT_10018604 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1001860c,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10018600);
    }
    HeapFree(DAT_1001860c,0,DAT_10018604);
  }
  else if (DAT_10018610 == 2) {
    ppuVar3 = &PTR_LOOP_10013b60;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10013b60);
  }
  HeapDestroy(DAT_1001860c);
  return;
}



// ============================================================
// FUN_10005930 @ 0x10005930 57B
// ============================================================

void FUN_10005930(void)

{
  if ((DAT_10018244 == 1) || ((DAT_10018244 == 0 && (DAT_10018248 == 1)))) {
    FUN_10005969(0xfc);
    if (DAT_100183dc != (code *)0x0) {
      (*DAT_100183dc)();
    }
    FUN_10005969(0xff);
  }
  return;
}



// ============================================================
// FUN_10005969 @ 0x10005969 339B
// ============================================================

void __cdecl FUN_10005969(DWORD param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  size_t sVar4;
  HANDLE hFile;
  int iVar5;
  uint *_Dest;
  undefined1 auStackY_1e3 [7];
  LPCVOID lpBuffer;
  LPOVERLAPPED lpOverlapped;
  uint local_1a8 [65];
  uint local_a4 [40];
  
  iVar5 = 0;
  pDVar2 = &DAT_10013ad0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10013b60);
  if (param_1 == (&DAT_10013ad0)[iVar5 * 2]) {
    if ((DAT_10018244 == 1) || ((DAT_10018244 == 0 && (DAT_10018248 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10013ad4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10006f70(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10006f70(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10006f80(local_a4,_Dest);
      FUN_10006f80(local_a4,(uint *)&DAT_10010604);
      FUN_10006f80(local_a4,*(uint **)(iVar5 * 8 + 0x10013ad4));
      auStackY_1e3._3_4_ = 0x10005a8d;
      FUN_10007c48(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// ============================================================
// FUN_10005abc @ 0x10005abc 27B
// ============================================================

undefined4 __cdecl FUN_10005abc(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_100183e4 != (code *)0x0) {
    iVar1 = (*DAT_100183e4)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// ============================================================
// FUN_10005ad7 @ 0x10005ad7 72B
// ============================================================

undefined4 __cdecl FUN_10005ad7(undefined4 param_1)

{
  DAT_10018604 = HeapAlloc(DAT_1001860c,0,0x140);
  if (DAT_10018604 == (LPVOID)0x0) {
    return 0;
  }
  DAT_100185fc = 0;
  DAT_10018600 = 0;
  DAT_100185f8 = DAT_10018604;
  DAT_10018608 = param_1;
  DAT_100185f0 = 0x10;
  return 1;
}



// ============================================================
// FUN_10005b1f @ 0x10005b1f 43B
// ============================================================

uint __cdecl FUN_10005b1f(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10018604;
  while( true ) {
    if (DAT_10018604 + DAT_10018600 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// ============================================================
// FUN_10005b4a @ 0x10005b4a 809B
// ============================================================

void __cdecl FUN_10005b4a(uint *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_8;
  
  uVar5 = param_1[4];
  puVar12 = (uint *)(param_2 + -4);
  uVar14 = param_2 - param_1[3] >> 0xf;
  piVar3 = (int *)(uVar14 * 0x204 + 0x144 + uVar5);
  uVar13 = *puVar12;
  local_8 = uVar13 - 1;
  if ((local_8 & 1) == 0) {
    uVar6 = *(uint *)(local_8 + (int)puVar12);
    uVar7 = *(uint *)(param_2 + -8);
    if ((uVar6 & 1) == 0) {
      uVar9 = ((int)uVar6 >> 4) - 1;
      if (0x3f < uVar9) {
        uVar9 = 0x3f;
      }
      if (*(int *)((int)puVar12 + uVar13 + 3) == *(int *)((int)puVar12 + uVar13 + 7)) {
        if (uVar9 < 0x20) {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar9;
          }
        }
        else {
          pcVar1 = (char *)(uVar9 + 4 + uVar5);
          uVar9 = ~(0x80000000U >> ((byte)uVar9 - 0x20 & 0x1f));
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 & uVar9;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar9;
          }
        }
      }
      local_8 = local_8 + uVar6;
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 7) + 4) =
           *(undefined4 *)((int)puVar12 + uVar13 + 3);
      *(undefined4 *)(*(int *)((int)puVar12 + uVar13 + 3) + 8) =
           *(undefined4 *)((int)puVar12 + uVar13 + 7);
    }
    puVar10 = (uint *)(((int)local_8 >> 4) - 1);
    if ((uint *)0x3f < puVar10) {
      puVar10 = (uint *)0x3f;
    }
    puVar11 = param_1;
    if ((uVar7 & 1) == 0) {
      puVar12 = (uint *)((int)puVar12 - uVar7);
      puVar11 = (uint *)(((int)uVar7 >> 4) - 1);
      if ((uint *)0x3f < puVar11) {
        puVar11 = (uint *)0x3f;
      }
      local_8 = local_8 + uVar7;
      puVar10 = (uint *)(((int)local_8 >> 4) - 1);
      if ((uint *)0x3f < puVar10) {
        puVar10 = (uint *)0x3f;
      }
      if (puVar11 != puVar10) {
        if (puVar12[1] == puVar12[2]) {
          if (puVar11 < (uint *)0x20) {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              *param_1 = *param_1 & uVar13;
            }
          }
          else {
            uVar13 = ~(0x80000000U >> ((byte)puVar11 - 0x20 & 0x1f));
            puVar2 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
            *puVar2 = *puVar2 & uVar13;
            pcVar1 = (char *)((int)puVar11 + uVar5 + 4);
            *pcVar1 = *pcVar1 + -1;
            if (*pcVar1 == '\0') {
              param_1[1] = param_1[1] & uVar13;
            }
          }
        }
        *(uint *)(puVar12[2] + 4) = puVar12[1];
        *(uint *)(puVar12[1] + 8) = puVar12[2];
      }
    }
    if (((uVar7 & 1) != 0) || (puVar11 != puVar10)) {
      puVar12[1] = piVar3[(int)puVar10 * 2 + 1];
      puVar12[2] = (uint)(piVar3 + (int)puVar10 * 2);
      (piVar3 + (int)puVar10 * 2)[1] = (int)puVar12;
      *(uint **)(puVar12[1] + 8) = puVar12;
      if (puVar12[1] == puVar12[2]) {
        cVar4 = *(char *)((int)puVar10 + uVar5 + 4);
        *(char *)((int)puVar10 + uVar5 + 4) = cVar4 + '\x01';
        bVar8 = (byte)puVar10;
        if (puVar10 < (uint *)0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0x44 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 & 0x1f);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar10 = (uint *)(uVar5 + 0xc4 + uVar14 * 4);
          *puVar10 = *puVar10 | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
      }
    }
    *puVar12 = local_8;
    *(uint *)((local_8 - 4) + (int)puVar12) = local_8;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      if (DAT_100185fc != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_100185f4 * 0x8000 + DAT_100185fc[3]),0x8000,0x4000);
        DAT_100185fc[2] = DAT_100185fc[2] | 0x80000000U >> ((byte)DAT_100185f4 & 0x1f);
        *(undefined4 *)(DAT_100185fc[4] + 0xc4 + DAT_100185f4 * 4) = 0;
        *(char *)(DAT_100185fc[4] + 0x43) = *(char *)(DAT_100185fc[4] + 0x43) + -1;
        if (*(char *)(DAT_100185fc[4] + 0x43) == '\0') {
          DAT_100185fc[1] = DAT_100185fc[1] & 0xfffffffe;
        }
        if (DAT_100185fc[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_100185fc[3],0,0x8000);
          HeapFree(DAT_1001860c,0,(LPVOID)DAT_100185fc[4]);
          FUN_10003f60(DAT_100185fc,DAT_100185fc + 5,
                       (DAT_10018600 * 0x14 - (int)DAT_100185fc) + -0x14 + DAT_10018604);
          DAT_10018600 = DAT_10018600 + -1;
          if (DAT_100185fc < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_100185f8 = DAT_10018604;
        }
      }
      DAT_100185fc = param_1;
      DAT_100185f4 = uVar14;
    }
  }
  return;
}



// ============================================================
// FUN_10005e73 @ 0x10005e73 777B
// ============================================================

int * __cdecl FUN_10005e73(uint *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar8 = DAT_10018604 + DAT_10018600 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_100185f8;
  if (iVar7 < 0x20) {
    local_10 = 0xffffffff >> (bVar5 & 0x1f);
    local_c = 0xffffffff;
  }
  else {
    local_c = 0xffffffff >> (bVar5 - 0x20 & 0x1f);
    local_10 = 0;
  }
  for (; (param_1 < puVar8 && ((param_1[1] & local_c) == 0 && (*param_1 & local_10) == 0));
      param_1 = param_1 + 5) {
  }
  puVar11 = DAT_10018604;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_100185f8 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_100185f8) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10018604;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_100185f8 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_100185f8) && (param_1 = FUN_1000617c(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_1000622d((int)param_1);
      *(int *)param_1[4] = iVar7;
      if (*(int *)param_1[4] == -1) {
        return (int *)0x0;
      }
    }
  }
  piVar4 = (int *)param_1[4];
  local_8 = *piVar4;
  if ((local_8 == -1) ||
     ((piVar4[local_8 + 0x31] & local_c) == 0 && (piVar4[local_8 + 0x11] & local_10) == 0)) {
    local_8 = 0;
    puVar8 = (uint *)(piVar4 + 0x11);
    if ((piVar4[0x31] & local_c) == 0 && (piVar4[0x11] & local_10) == 0) {
      do {
        puVar11 = puVar8 + 0x21;
        local_8 = local_8 + 1;
        puVar8 = puVar8 + 1;
      } while ((*puVar11 & local_c) == 0 && (local_10 & *puVar8) == 0);
    }
  }
  iVar7 = 0;
  piVar2 = piVar4 + local_8 * 0x81 + 0x51;
  local_10 = piVar4[local_8 + 0x11] & local_10;
  if (local_10 == 0) {
    local_10 = piVar4[local_8 + 0x31] & local_c;
    iVar7 = 0x20;
  }
  for (; -1 < (int)local_10; local_10 = local_10 << 1) {
    iVar7 = iVar7 + 1;
  }
  piVar10 = (int *)piVar2[iVar7 * 2 + 1];
  iVar9 = *piVar10 - uVar6;
  iVar14 = (iVar9 >> 4) + -1;
  if (0x3f < iVar14) {
    iVar14 = 0x3f;
  }
  DAT_100185f8 = param_1;
  if (iVar14 != iVar7) {
    if (piVar10[1] == piVar10[2]) {
      if (iVar7 < 0x20) {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 & 0x1f));
        piVar4[local_8 + 0x11] = uVar13 & piVar4[local_8 + 0x11];
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar13;
        }
      }
      else {
        pcVar1 = (char *)((int)piVar4 + iVar7 + 4);
        uVar13 = ~(0x80000000U >> ((byte)iVar7 - 0x20 & 0x1f));
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] & uVar13;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar13;
        }
      }
    }
    *(int *)(piVar10[2] + 4) = piVar10[1];
    *(int *)(piVar10[1] + 8) = piVar10[2];
    if (iVar9 == 0) goto LAB_10006139;
    piVar10[1] = piVar2[iVar14 * 2 + 1];
    piVar10[2] = (int)(piVar2 + iVar14 * 2);
    (piVar2 + iVar14 * 2)[1] = (int)piVar10;
    *(int **)(piVar10[1] + 8) = piVar10;
    if (piVar10[1] == piVar10[2]) {
      cVar3 = *(char *)(iVar14 + 4 + (int)piVar4);
      bVar5 = (byte)iVar14;
      if (iVar14 < 0x20) {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar5 & 0x1f);
        }
        piVar4[local_8 + 0x11] = piVar4[local_8 + 0x11] | 0x80000000U >> (bVar5 & 0x1f);
      }
      else {
        *(char *)(iVar14 + 4 + (int)piVar4) = cVar3 + '\x01';
        if (cVar3 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
        }
        piVar4[local_8 + 0x31] = piVar4[local_8 + 0x31] | 0x80000000U >> (bVar5 - 0x20 & 0x1f);
      }
    }
  }
  if (iVar9 != 0) {
    *piVar10 = iVar9;
    *(int *)(iVar9 + -4 + (int)piVar10) = iVar9;
  }
LAB_10006139:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_100185fc)) && (local_8 == DAT_100185f4)) {
    DAT_100185fc = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// ============================================================
// FUN_1000617c @ 0x1000617c 177B
// ============================================================

undefined4 * FUN_1000617c(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10018600 == DAT_100185f0) {
    pvVar2 = HeapReAlloc(DAT_1001860c,0,DAT_10018604,(DAT_100185f0 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_100185f0 = DAT_100185f0 + 0x10;
    DAT_10018604 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10018604 + DAT_10018600 * 0x14);
  pvVar2 = HeapAlloc(DAT_1001860c,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10018600 = DAT_10018600 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1001860c,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// ============================================================
// FUN_1000622d @ 0x1000622d 251B
// ============================================================

int __cdecl FUN_1000622d(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPVOID pvVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *lpAddress;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar9 = 0;
  for (iVar4 = *(int *)(param_1 + 8); -1 < iVar4; iVar4 = iVar4 << 1) {
    iVar9 = iVar9 + 1;
  }
  iVar8 = 0x3f;
  iVar4 = iVar9 * 0x204 + 0x144 + iVar3;
  iVar5 = iVar4;
  do {
    *(int *)(iVar5 + 8) = iVar5;
    *(int *)(iVar5 + 4) = iVar5;
    iVar5 = iVar5 + 8;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  lpAddress = (int *)(iVar9 * 0x8000 + *(int *)(param_1 + 0xc));
  pvVar6 = VirtualAlloc(lpAddress,0x8000,0x1000,4);
  if (pvVar6 == (LPVOID)0x0) {
    iVar9 = -1;
  }
  else {
    if (lpAddress <= lpAddress + 0x1c00) {
      piVar7 = lpAddress + 4;
      do {
        piVar7[-2] = -1;
        piVar7[0x3fb] = -1;
        piVar7[-1] = 0xff0;
        *piVar7 = (int)(piVar7 + 0x3ff);
        piVar7[1] = (int)(piVar7 + -0x401);
        piVar7[0x3fa] = 0xff0;
        piVar1 = piVar7 + 0x3fc;
        piVar7 = piVar7 + 0x400;
      } while (piVar1 <= lpAddress + 0x1c00);
    }
    *(int **)(iVar4 + 0x1fc) = lpAddress + 3;
    lpAddress[5] = iVar4 + 0x1f8;
    *(int **)(iVar4 + 0x200) = lpAddress + 0x1c03;
    lpAddress[0x1c04] = iVar4 + 0x1f8;
    *(undefined4 *)(iVar3 + 0x44 + iVar9 * 4) = 0;
    *(undefined4 *)(iVar3 + 0xc4 + iVar9 * 4) = 1;
    cVar2 = *(char *)(iVar3 + 0x43);
    *(char *)(iVar3 + 0x43) = cVar2 + '\x01';
    if (cVar2 == '\0') {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & ~(0x80000000U >> ((byte)iVar9 & 0x1f));
  }
  return iVar9;
}



// ============================================================
// FUN_10006328 @ 0x10006328 758B
// ============================================================

undefined4 __cdecl FUN_10006328(uint *param_1,int param_2,int param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint local_c;
  
  uVar5 = param_1[4];
  uVar12 = param_3 + 0x17U & 0xfffffff0;
  uVar10 = param_2 - param_1[3] >> 0xf;
  iVar3 = uVar10 * 0x204 + 0x144 + uVar5;
  iVar6 = *(int *)(param_2 + -4);
  iVar9 = iVar6 + -1;
  uVar13 = *(uint *)(iVar6 + -5 + param_2);
  iVar6 = iVar6 + -5 + param_2;
  if (iVar9 < (int)uVar12) {
    if (((uVar13 & 1) != 0) || ((int)(uVar13 + iVar9) < (int)uVar12)) {
      return 0;
    }
    local_c = ((int)uVar13 >> 4) - 1;
    if (0x3f < local_c) {
      local_c = 0x3f;
    }
    if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
      if (local_c < 0x20) {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)local_c & 0x1f));
        puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          *param_1 = *param_1 & uVar11;
        }
      }
      else {
        pcVar1 = (char *)(local_c + 4 + uVar5);
        uVar11 = ~(0x80000000U >> ((byte)local_c - 0x20 & 0x1f));
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        *puVar7 = *puVar7 & uVar11;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          param_1[1] = param_1[1] & uVar11;
        }
      }
    }
    *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
    iVar6 = uVar13 + (iVar9 - uVar12);
    if (0 < iVar6) {
      uVar13 = (iVar6 >> 4) - 1;
      iVar9 = param_2 + -4 + uVar12;
      if (0x3f < uVar13) {
        uVar13 = 0x3f;
      }
      iVar3 = iVar3 + uVar13 * 8;
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar3 + 4);
      *(int *)(iVar9 + 8) = iVar3;
      *(int *)(iVar3 + 4) = iVar9;
      *(int *)(*(int *)(iVar9 + 4) + 8) = iVar9;
      if (*(int *)(iVar9 + 4) == *(int *)(iVar9 + 8)) {
        cVar4 = *(char *)(uVar13 + 4 + uVar5);
        *(char *)(uVar13 + 4 + uVar5) = cVar4 + '\x01';
        bVar8 = (byte)uVar13;
        if (uVar13 < 0x20) {
          if (cVar4 == '\0') {
            *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
        }
        else {
          if (cVar4 == '\0') {
            param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
          }
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          bVar8 = bVar8 - 0x20;
        }
        *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
      }
      piVar2 = (int *)(param_2 + -4 + uVar12);
      *piVar2 = iVar6;
      *(int *)(iVar6 + -4 + (int)piVar2) = iVar6;
    }
    *(uint *)(param_2 + -4) = uVar12 + 1;
    *(uint *)(param_2 + -8 + uVar12) = uVar12 + 1;
  }
  else if ((int)uVar12 < iVar9) {
    param_3 = iVar9 - uVar12;
    *(uint *)(param_2 + -4) = uVar12 + 1;
    piVar2 = (int *)(param_2 + -4 + uVar12);
    uVar11 = (param_3 >> 4) - 1;
    piVar2[-1] = uVar12 + 1;
    if (0x3f < uVar11) {
      uVar11 = 0x3f;
    }
    if ((uVar13 & 1) == 0) {
      uVar12 = ((int)uVar13 >> 4) - 1;
      if (0x3f < uVar12) {
        uVar12 = 0x3f;
      }
      if (*(int *)(iVar6 + 4) == *(int *)(iVar6 + 8)) {
        if (uVar12 < 0x20) {
          pcVar1 = (char *)(uVar12 + 4 + uVar5);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            *param_1 = *param_1 & uVar12;
          }
        }
        else {
          pcVar1 = (char *)(uVar12 + 4 + uVar5);
          uVar12 = ~(0x80000000U >> ((byte)uVar12 - 0x20 & 0x1f));
          puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
          *puVar7 = *puVar7 & uVar12;
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 == '\0') {
            param_1[1] = param_1[1] & uVar12;
          }
        }
      }
      *(undefined4 *)(*(int *)(iVar6 + 8) + 4) = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(*(int *)(iVar6 + 4) + 8) = *(undefined4 *)(iVar6 + 8);
      param_3 = param_3 + uVar13;
      uVar11 = (param_3 >> 4) - 1;
      if (0x3f < uVar11) {
        uVar11 = 0x3f;
      }
    }
    iVar6 = iVar3 + uVar11 * 8;
    piVar2[1] = *(int *)(iVar3 + 4 + uVar11 * 8);
    piVar2[2] = iVar6;
    *(int **)(iVar6 + 4) = piVar2;
    *(int **)(piVar2[1] + 8) = piVar2;
    if (piVar2[1] == piVar2[2]) {
      cVar4 = *(char *)(uVar11 + 4 + uVar5);
      *(char *)(uVar11 + 4 + uVar5) = cVar4 + '\x01';
      bVar8 = (byte)uVar11;
      if (uVar11 < 0x20) {
        if (cVar4 == '\0') {
          *param_1 = *param_1 | 0x80000000U >> (bVar8 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0x44 + uVar10 * 4);
      }
      else {
        if (cVar4 == '\0') {
          param_1[1] = param_1[1] | 0x80000000U >> (bVar8 - 0x20 & 0x1f);
        }
        puVar7 = (uint *)(uVar5 + 0xc4 + uVar10 * 4);
        bVar8 = bVar8 - 0x20;
      }
      *puVar7 = *puVar7 | 0x80000000U >> (bVar8 & 0x1f);
    }
    *piVar2 = param_3;
    *(int *)(param_3 + -4 + (int)piVar2) = param_3;
  }
  return 1;
}



// ============================================================
// FUN_1000661e @ 0x1000661e 324B
// ============================================================

undefined ** FUN_1000661e(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10013b70 == -1) {
    lpMem = &PTR_LOOP_10013b60;
  }
  else {
    lpMem = HeapAlloc(DAT_1001860c,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10013b60) {
        if (PTR_LOOP_10013b60 == (undefined *)0x0) {
          PTR_LOOP_10013b60 = (undefined *)&PTR_LOOP_10013b60;
        }
        if (PTR_LOOP_10013b64 == (undefined *)0x0) {
          PTR_LOOP_10013b64 = (undefined *)&PTR_LOOP_10013b60;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10013b60;
        lpMem[1] = PTR_LOOP_10013b64;
        PTR_LOOP_10013b64 = (undefined *)lpMem;
        *(undefined ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (undefined *)(lpAddress + 0x100000);
      ppuVar3 = lpMem + 6;
      lpMem[3] = (undefined *)(lpMem + 0x26);
      lpMem[4] = (undefined *)lpAddress;
      lpMem[2] = (undefined *)ppuVar3;
      iVar4 = 0;
      do {
        bVar1 = 0xf < iVar4;
        iVar4 = iVar4 + 1;
        *ppuVar3 = (undefined *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar3[1] = (undefined *)0xf1;
        ppuVar3 = ppuVar3 + 2;
      } while (iVar4 < 0x400);
      _memset(lpAddress,0,0x10000);
      for (; lpAddress < lpMem[4] + 0x10000; lpAddress = lpAddress + 0x400) {
        *(undefined1 *)(lpAddress + 0x3e) = 0xff;
        *lpAddress = (int)(lpAddress + 2);
        lpAddress[1] = 0xf0;
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_10013b60) {
    HeapFree(DAT_1001860c,0,lpMem);
  }
  return (undefined **)0x0;
}



// ============================================================
// FUN_10006762 @ 0x10006762 86B
// ============================================================

void __cdecl FUN_10006762(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10015b80 == param_1) {
    PTR_LOOP_10015b80 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10013b60) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1001860c,0,param_1);
    return;
  }
  DAT_10013b70 = 0xffffffff;
  return;
}



// ============================================================
// FUN_100067b8 @ 0x100067b8 194B
// ============================================================

void __cdecl FUN_100067b8(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_10013b64;
  do {
    ppuVar5 = ppuVar4;
    if (ppuVar4[4] != (undefined *)0xffffffff) {
      local_8 = 0;
      ppuVar5 = ppuVar4 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (undefined *)0xf0) {
          BVar1 = VirtualFree(ppuVar4[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (undefined *)0xffffffff;
            DAT_100183e8 = DAT_100183e8 + -1;
            if (((undefined **)ppuVar4[3] == (undefined **)0x0) || (ppuVar5 < ppuVar4[3])) {
              ppuVar4[3] = (undefined *)ppuVar5;
            }
            local_8 = local_8 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (undefined **)ppuVar4[1];
      if ((local_8 != 0) && (ppuVar4[6] == (undefined *)0xffffffff)) {
        ppuVar2 = ppuVar4 + 8;
        iVar3 = 1;
        do {
          if (*ppuVar2 != (undefined *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_10006762(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_10013b64) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// ============================================================
// FUN_1000687a @ 0x1000687a 87B
// ============================================================

int __cdecl FUN_1000687a(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10013b60;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10013b60) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



// ============================================================
// FUN_100068d1 @ 0x100068d1 69B
// ============================================================

void __cdecl FUN_100068d1(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_100183e8 = DAT_100183e8 + 1, DAT_100183e8 == 0x20)) {
    FUN_100067b8(0x10);
  }
  return;
}



// ============================================================
// FUN_10006916 @ 0x10006916 520B
// ============================================================

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10006916(uint param_1)

{
  uint *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  undefined **ppuVar6;
  int *piVar7;
  uint *puVar8;
  undefined **ppuVar9;
  int local_8;
  
  piVar7 = (int *)PTR_LOOP_10015b80;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10006b1e(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_100069e1;
            puVar8[1] = param_1;
          }
          puVar8 = puVar8 + 2;
          piVar4 = piVar4 + 0x400;
        } while (puVar8 < piVar7 + 0x806);
      }
      puVar1 = (uint *)piVar7[2];
      piVar4 = (int *)piVar7[4];
      for (puVar8 = (uint *)(piVar7 + 6); puVar8 < puVar1; puVar8 = puVar8 + 2) {
        if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
          piVar5 = (int *)FUN_10006b1e(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_100069e1:
            PTR_LOOP_10015b80 = (undefined *)piVar7;
            *puVar8 = *puVar8 - param_1;
            piVar7[2] = (int)puVar8;
            return piVar5;
          }
          puVar8[1] = param_1;
        }
        piVar4 = piVar4 + 0x400;
      }
    }
    piVar7 = (int *)*piVar7;
    if (piVar7 == (int *)PTR_LOOP_10015b80) {
      ppuVar9 = &PTR_LOOP_10013b60;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_10013b60) {
          ppuVar9 = FUN_1000661e();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10015b80 = (undefined *)ppuVar9;
          *piVar7 = (int)piVar7 + param_1 + 8;
          piVar7[1] = 0xf0 - param_1;
          ppuVar9[6] = ppuVar9[6] + -(param_1 & 0xff);
          return piVar7 + 0x40;
        }
      }
      ppuVar2 = (undefined **)ppuVar9[3];
      local_8 = 0;
      piVar7 = (int *)(ppuVar9[4] + ((int)ppuVar2 + (-0x18 - (int)ppuVar9) >> 3) * 0x1000);
      puVar3 = *ppuVar2;
      ppuVar6 = ppuVar2;
      for (; (puVar3 == (undefined *)0xffffffff && (local_8 < 0x10)); local_8 = local_8 + 1) {
        ppuVar6 = ppuVar6 + 2;
        puVar3 = *ppuVar6;
      }
      piVar4 = VirtualAlloc(piVar7,local_8 << 0xc,0x1000,4);
      if (piVar4 != piVar7) {
        return (int *)0x0;
      }
      _memset(piVar7,local_8 << 0xc,0);
      ppuVar6 = ppuVar2;
      if (0 < local_8) {
        piVar4 = piVar7 + 1;
        do {
          *(undefined1 *)(piVar4 + 0x3d) = 0xff;
          piVar4[-1] = (int)(piVar4 + 1);
          *piVar4 = 0xf0;
          *ppuVar6 = (undefined *)0xf0;
          ppuVar6[1] = (undefined *)0xf1;
          piVar4 = piVar4 + 0x400;
          ppuVar6 = ppuVar6 + 2;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      for (; (ppuVar6 < ppuVar9 + 0x806 && (*ppuVar6 != (undefined *)0xffffffff));
          ppuVar6 = ppuVar6 + 2) {
      }
      PTR_LOOP_10015b80 = (undefined *)ppuVar9;
      ppuVar9[3] = (undefined *)(-(uint)(ppuVar6 < ppuVar9 + 0x806) & (uint)ppuVar6);
      *(char *)(piVar7 + 2) = (char)param_1;
      ppuVar9[2] = (undefined *)ppuVar2;
      *ppuVar2 = *ppuVar2 + -param_1;
      piVar7[1] = piVar7[1] - param_1;
      *piVar7 = (int)piVar7 + param_1 + 8;
      return piVar7 + 0x40;
    }
  } while( true );
}



// ============================================================
// FUN_10006b1e @ 0x10006b1e 292B
// ============================================================

int __cdecl FUN_10006b1e(int *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  pbVar1 = (byte *)(param_1 + 0x3e);
  bVar3 = (byte)param_3;
  if ((uint)param_1[1] < param_3) {
    pbVar6 = pbVar2;
    if (pbVar2[param_1[1]] != 0) {
      pbVar6 = pbVar2 + param_1[1];
    }
    while( true ) {
      while( true ) {
        if (pbVar1 <= pbVar6 + param_3) {
          pbVar6 = (byte *)(param_1 + 2);
          while( true ) {
            while( true ) {
              if (pbVar2 <= pbVar6) {
                return 0;
              }
              if (pbVar1 <= pbVar6 + param_3) {
                return 0;
              }
              if (*pbVar6 == 0) break;
              pbVar6 = pbVar6 + *pbVar6;
            }
            uVar5 = 1;
            pbVar4 = pbVar6;
            while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
              uVar5 = uVar5 + 1;
            }
            if (param_3 <= uVar5) break;
            param_2 = param_2 - uVar5;
            pbVar6 = pbVar4;
            if (param_2 < param_3) {
              return 0;
            }
          }
          if (pbVar6 + param_3 < pbVar1) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            param_1[1] = 0;
            *param_1 = (int)(param_1 + 2);
          }
          *pbVar6 = bVar3;
          pbVar2 = pbVar6 + 8;
          goto LAB_10006c31;
        }
        if (*pbVar6 == 0) break;
        pbVar6 = pbVar6 + *pbVar6;
      }
      uVar5 = 1;
      pbVar4 = pbVar6;
      while (pbVar4 = pbVar4 + 1, *pbVar4 == 0) {
        uVar5 = uVar5 + 1;
      }
      if (param_3 <= uVar5) break;
      if (pbVar6 == pbVar2) {
        param_1[1] = uVar5;
        pbVar6 = pbVar4;
      }
      else {
        param_2 = param_2 - uVar5;
        pbVar6 = pbVar4;
        if (param_2 < param_3) {
          return 0;
        }
      }
    }
    if (pbVar6 + param_3 < pbVar1) {
      *param_1 = (int)(pbVar6 + param_3);
      param_1[1] = uVar5 - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    *pbVar6 = bVar3;
    pbVar2 = pbVar6 + 8;
  }
  else {
    *pbVar2 = bVar3;
    if (pbVar2 + param_3 < pbVar1) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    pbVar2 = pbVar2 + 8;
  }
LAB_10006c31:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// ============================================================
// FUN_10006c42 @ 0x10006c42 169B
// ============================================================

undefined4 __cdecl FUN_10006c42(int param_1,int *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*param_3;
  piVar2 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  if (param_4 < uVar6) {
    *param_3 = (byte)param_4;
    *piVar2 = *piVar2 + (uVar6 - param_4);
    piVar2[1] = 0xf1;
  }
  else {
    if (param_4 <= uVar6) {
      return 0;
    }
    pbVar1 = param_3 + param_4;
    if (param_2 + 0x3e < pbVar1) {
      return 0;
    }
    for (pbVar4 = param_3 + uVar6; (pbVar4 < pbVar1 && (*pbVar4 == 0)); pbVar4 = pbVar4 + 1) {
    }
    if (pbVar4 != pbVar1) {
      return 0;
    }
    *param_3 = (byte)param_4;
    if ((param_3 <= (byte *)*param_2) && ((byte *)*param_2 < pbVar1)) {
      if (pbVar1 < param_2 + 0x3e) {
        iVar5 = 0;
        *param_2 = (int)pbVar1;
        bVar3 = *pbVar1;
        while (bVar3 == 0) {
          iVar5 = iVar5 + 1;
          bVar3 = pbVar1[iVar5];
        }
        param_2[1] = iVar5;
      }
      else {
        param_2[1] = 0;
        *param_2 = (int)(param_2 + 2);
      }
    }
    *piVar2 = *piVar2 + (uVar6 - param_4);
  }
  return 1;
}



// ============================================================
// FUN_10006ceb @ 0x10006ceb 41B
// ============================================================

void FUN_10006ceb(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015bcc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015bbc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015bac);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015b8c);
  return;
}



// ============================================================
// FUN_10006d14 @ 0x10006d14 108B
// ============================================================

void FUN_10006d14(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10015b88;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_10015bcc)) && (ppuVar1 != &PTR_DAT_10015bbc)) &&
       ((ppuVar1 != &PTR_DAT_10015bac && (ppuVar1 != &PTR_DAT_10015b8c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10003090(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10015c48);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015bac);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015bbc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015bcc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10015b8c);
  return;
}



// ============================================================
// FUN_10006d80 @ 0x10006d80 97B
// ============================================================

void __cdecl FUN_10006d80(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10015b88 + param_1;
  if ((&DAT_10015b88)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10006d80(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10003090((undefined *)lpCriticalSection);
    }
    FUN_10006de1(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// ============================================================
// FUN_10006de1 @ 0x10006de1 21B
// ============================================================

void __cdecl FUN_10006de1(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10015b88)[param_1]);
  return;
}



// ============================================================
// FUN_10006ebd @ 0x10006ebd 27B
// ============================================================

void FUN_10006ebd(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// ============================================================
// _strcmp @ 0x10006ee0 129B
// ============================================================

/* Library Function - Single Match
    _strcmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strcmp(char *_Str1,char *_Str2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (((uint)_Str1 & 3) != 0) {
    if (((uint)_Str1 & 1) != 0) {
      bVar4 = *_Str1;
      _Str1 = _Str1 + 1;
      bVar5 = bVar4 < (byte)*_Str2;
      if (bVar4 != *_Str2) goto LAB_10006f24;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10006ef0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10006f24;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10006f24;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10006ef0:
  while( true ) {
    uVar2 = *(undefined4 *)_Str1;
    bVar4 = (byte)uVar2;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) break;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((uint)uVar2 >> 0x10);
    bVar5 = bVar4 < (byte)_Str2[2];
    if (bVar4 != _Str2[2]) break;
    bVar3 = (byte)((uint)uVar2 >> 0x18);
    if (bVar4 == 0) {
      return 0;
    }
    bVar5 = bVar3 < (byte)_Str2[3];
    if (bVar3 != _Str2[3]) break;
    _Str2 = _Str2 + 4;
    _Str1 = _Str1 + 4;
    if (bVar3 == 0) {
      return 0;
    }
  }
LAB_10006f24:
  return (uint)bVar5 * -2 + 1;
}



// ============================================================
// FUN_10006f80 @ 0x10006f80 224B
// ============================================================

uint * __cdecl FUN_10006f80(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10006f9c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10006fcf;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10006feb;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10006f9c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10006feb;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10006feb;
    }
  }
LAB_10006fcf:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10006feb:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10007058:
            *(byte *)puVar5 = (byte)uVar4;
            return param_1;
          }
          if ((char)(uVar4 >> 8) == '\0') {
            *(short *)puVar5 = (short)uVar4;
            return param_1;
          }
          if ((uVar4 & 0xff0000) == 0) {
            *(short *)puVar5 = (short)uVar4;
            *(byte *)((int)puVar5 + 2) = 0;
            return param_1;
          }
          if ((uVar4 & 0xff000000) == 0) {
            *puVar5 = uVar4;
            return param_1;
          }
        }
        *puVar5 = uVar4;
        puVar5 = puVar5 + 1;
      } while( true );
    }
    bVar1 = (byte)*param_2;
    uVar4 = (uint)bVar1;
    param_2 = (uint *)((int)param_2 + 1);
    if (bVar1 == 0) goto LAB_10007058;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// ============================================================
// _strlen @ 0x10007060 123B
// ============================================================

/* Library Function - Single Match
    _strlen
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

size_t __cdecl _strlen(char *_Str)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar2 = (uint *)_Str;
  do {
    if (((uint)puVar2 & 3) == 0) goto LAB_10007080;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100070b3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10007080:
  do {
    do {
      puVar3 = puVar2;
      puVar2 = puVar3 + 1;
    } while (((*puVar3 ^ 0xffffffff ^ *puVar3 + 0x7efefeff) & 0x81010100) == 0);
    uVar1 = *puVar3;
    if ((char)uVar1 == '\0') {
      return (int)puVar3 - (int)_Str;
    }
    if ((char)(uVar1 >> 8) == '\0') {
      return (size_t)((int)puVar3 + (1 - (int)_Str));
    }
    if ((uVar1 & 0xff0000) == 0) {
      return (size_t)((int)puVar3 + (2 - (int)_Str));
    }
  } while ((uVar1 & 0xff000000) != 0);
  goto LAB_100070b3;
}



// ============================================================
// FUN_100070db @ 0x100070db 289B
// ============================================================

int * __cdecl FUN_100070db(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *_Size;
  int *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10010640;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  puVar2 = (uint *)(param_1 * param_2);
  puVar3 = puVar2;
  ExceptionList = &local_14;
  if (puVar2 < (uint *)0xffffffe1) {
    if (puVar2 == (uint *)0x0) {
      puVar3 = (uint *)0x1;
    }
    puVar3 = (uint *)((int)puVar3 + 0xfU & 0xfffffff0);
    ExceptionList = &local_14;
  }
  do {
    local_24 = (int *)0x0;
    if (puVar3 < (uint *)0xffffffe1) {
      if (DAT_10018610 == 3) {
        if (puVar2 <= DAT_10018608) {
          FUN_10006d80(9);
          local_8 = 0;
          local_24 = FUN_10005e73(puVar2);
          local_8 = 0xffffffff;
          FUN_10007174();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_100071c8;
LAB_100071b7:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_100071c3:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10018610 != 2) || (DAT_10015b84 < puVar3)) goto LAB_100071c3;
        FUN_10006d80(9);
        local_8 = 1;
        local_24 = FUN_10006916((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_100071fd();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_100071b7;
      }
LAB_100071c8:
      local_24 = HeapAlloc(DAT_1001860c,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_100183e0 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10005abc(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// ============================================================
// FUN_10007218 @ 0x10007218 70B
// ============================================================

int FUN_10007218(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_10004c88();
    return iVar3;
  }
  if ((DAT_10018450 != (FARPROC)0x0) &&
     (bVar2 = FUN_10007938(DAT_10018450), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_10018450)(param_1);
    return iVar3;
  }
  return 0;
}



// ============================================================
// _strchr @ 0x10007290 193B
// ============================================================

/* Library Function - Single Match
    _strchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strchr(char *_Str,int _Val)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)_Str & 3) != 0) {
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    _Str = (char *)((int)_Str + 1);
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *(uint *)_Str;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11((char)_Val,(char)_Val),CONCAT11((char)_Val,(char)_Val));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = (uint *)((int)_Str + 4);
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      _Str = (char *)puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (char *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (char *)0x0;
        }
      }
    }
    uVar1 = *(uint *)_Str;
    if ((char)uVar1 == (char)_Val) {
      return (char *)(uint *)_Str;
    }
    if ((char)uVar1 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 1);
    }
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == (char)_Val) {
      return (char *)((int)_Str + 3);
    }
    _Str = (char *)puVar5;
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



// ============================================================
// _strrchr @ 0x10007350 39B
// ============================================================

/* Library Function - Single Match
    _strrchr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strrchr(char *_Str,int _Ch)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  do {
    pcVar4 = _Str;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = _Str + 1;
    cVar1 = *_Str;
    _Str = pcVar4;
  } while (cVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  pcVar4 = pcVar4 + -1;
  do {
    pcVar3 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar4 + -1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar3;
  } while ((char)_Ch != cVar1);
  pcVar3 = pcVar3 + 1;
  if (*pcVar3 != (char)_Ch) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



// ============================================================
// FUN_10007377 @ 0x10007377 117B
// ============================================================

uint __thiscall FUN_10007377(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10015ce0 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10015ce0[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10007673(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// ============================================================
// FUN_10007424 @ 0x10007424 511B
// ============================================================

int __cdecl
FUN_10007424(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10010660;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_10018474 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_10018474 = 2;
    }
    else {
      DAT_10018474 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_10007648(param_3,param_4);
  }
  if (DAT_10018474 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_10018474 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1001846c;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_100037f0();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_100037f0();
            local_8 = 0xffffffff;
            if (&stack0x00000000 == (undefined1 *)0x3c) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,
                                 (LPWSTR)&stack0xffffffc4,iVar2);
            if (iVar1 == 0) {
              ExceptionList = local_14;
              return 0;
            }
            if (param_6 == 0) {
              param_6 = 0;
              param_5 = (LPWSTR)0x0;
            }
            iVar2 = WideCharToMultiByte(param_7,0x220,(LPCWSTR)&stack0xffffffc4,iVar2,(LPSTR)param_5
                                        ,param_6,(LPCSTR)0x0,(LPBOOL)0x0);
            iVar1 = iVar2;
          }
          else {
            if (param_6 == 0) {
              ExceptionList = local_14;
              return iVar2;
            }
            if (param_6 < iVar2) {
              ExceptionList = local_14;
              return 0;
            }
            iVar1 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,param_5,param_6);
          }
          if (iVar1 != 0) {
            ExceptionList = local_14;
            return iVar2;
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return 0;
}



// ============================================================
// FUN_10007648 @ 0x10007648 43B
// ============================================================

int __cdecl FUN_10007648(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}



// ============================================================
// FUN_10007673 @ 0x10007673 318B
// ============================================================

BOOL __cdecl
FUN_10007673(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  undefined1 *puVar1;
  BOOL BVar2;
  int iVar3;
  WORD local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10010678;
  puStack_10 = &LAB_10006e00;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10018478;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10018478 == 0) {
    ExceptionList = &local_14;
    BVar2 = GetStringTypeW(1,L"",1,local_20);
    iVar3 = 1;
    puVar1 = local_1c;
    if (BVar2 == 0) {
      BVar2 = GetStringTypeA(0,1,"",1,local_20);
      if (BVar2 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      iVar3 = 2;
      puVar1 = local_1c;
    }
  }
  local_1c = puVar1;
  DAT_10018478 = iVar3;
  if (DAT_10018478 != 2) {
    if (DAT_10018478 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1001846c;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_100037f0();
        local_1c = &stack0xffffffc8;
        _memset(&stack0xffffffc8,0,iVar3 * 2);
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x38) &&
           (iVar3 = MultiByteToWideChar(param_5,1,param_2,param_3,(LPWSTR)&stack0xffffffc8,iVar3),
           iVar3 != 0)) {
          BVar2 = GetStringTypeW(param_1,(LPCWSTR)&stack0xffffffc8,iVar3,param_4);
          ExceptionList = local_14;
          return BVar2;
        }
      }
    }
    ExceptionList = local_14;
    return 0;
  }
  if (param_6 == 0) {
    param_6 = DAT_1001845c;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// ============================================================
// FUN_100077c0 @ 0x100077c0 58B
// ============================================================

byte * __cdecl FUN_100077c0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  do {
    pbVar2 = param_1;
    bVar1 = *pbVar2;
    if (bVar1 == 0) {
      return (byte *)0x0;
    }
    param_1 = pbVar2 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return pbVar2;
}



// ============================================================
// __strrev @ 0x10007800 48B
// ============================================================

/* Library Function - Single Match
    __strrev
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl __strrev(char *_Str)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar2 = -1;
  pcVar3 = _Str;
  do {
    pcVar4 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar4;
  } while (cVar1 != '\0');
  if (iVar2 != -2) {
    pcVar4 = pcVar4 + -2;
    for (pcVar3 = _Str; pcVar3 < pcVar4; pcVar3 = pcVar3 + 1) {
      cVar1 = *pcVar3;
      *pcVar3 = *pcVar4;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + -1;
    }
  }
  return _Str;
}



// ============================================================
// FUN_10007830 @ 0x10007830 208B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_10007830(void *this,byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  void *extraout_ECX;
  void *this_00;
  void *extraout_ECX_00;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = _DAT_100185ec;
  if (DAT_1001845c == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000787e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1000787e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_100185ec = _DAT_100185ec + 1;
    UNLOCK();
    bVar1 = 0 < DAT_100185e8;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_100185ec = iVar2;
      FUN_10006d80(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_100078df;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10007e1e(this,uVar8);
      uVar7 = FUN_10007e1e(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_100078df:
    if (uVar9 == 0) {
      LOCK();
      _DAT_100185ec = _DAT_100185ec + -1;
      UNLOCK();
    }
    else {
      FUN_10006de1(0x13);
    }
  }
  return uVar7;
}



// ============================================================
// FUN_10007900 @ 0x10007900 28B
// ============================================================

bool __cdecl FUN_10007900(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// ============================================================
// FUN_1000791c @ 0x1000791c 28B
// ============================================================

bool __cdecl FUN_1000791c(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// ============================================================
// FUN_10007938 @ 0x10007938 24B
// ============================================================

bool __cdecl FUN_10007938(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



// ============================================================
// FUN_10007950 @ 0x10007950 23B
// ============================================================

void FUN_10007950(void)

{
  FUN_10005969(10);
  FUN_10007ee9((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// ============================================================
// FUN_10007967 @ 0x10007967 23B
// ============================================================

void __thiscall FUN_10007967(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_1000797e(this,param_1,param_2,param_3,0);
  return;
}



// ============================================================
// FUN_1000797e @ 0x1000797e 517B
// ============================================================

void * __thiscall FUN_1000797e(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  DWORD *pDVar6;
  void *this_00;
  byte bVar7;
  undefined *puVar8;
  void *local_c;
  byte *local_8;
  
  local_c = (void *)0x0;
  bVar7 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_10015eec < 2) {
      uVar3 = (byte)PTR_DAT_10015ce0[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_10015ce0;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10007377(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_100079d9:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_100079d9;
  if ((((int)param_3 < 0) || (param_3 == (void *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (void *)0x0;
  }
  this_00 = (void *)0x10;
  if (param_3 == (void *)0x0) {
    if (bVar7 != 0x30) {
      param_3 = (void *)0xa;
      goto LAB_10007a43;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_10007a43;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10007a43:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_10015eec < 2) {
      uVar5 = (byte)PTR_DAT_10015ce0[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10007377(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_10015eec < 2) {
        uVar3 = *(ushort *)(PTR_DAT_10015ce0 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10007377(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10007aef:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (void *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && ((void *)0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && ((void *)0x7fffffff < local_c)))))))) {
          pDVar6 = FUN_10003f55();
          *pDVar6 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (void *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (void *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return (void *)-(int)local_c;
      }
      uVar3 = FUN_100080a8((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10007aef;
    if ((local_c < pvVar4) ||
       ((local_c == pvVar4 && (this_00 <= (void *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = (void *)((int)local_c * (int)param_3 + (int)this_00);
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar7 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}



// ============================================================
// _strstr @ 0x10007b90 128B
// ============================================================

/* Library Function - Single Match
    _strstr
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  
  cVar3 = *_SubStr;
  if (cVar3 == '\0') {
    return _Str;
  }
  if (_SubStr[1] == '\0') {
    while (((uint)_Str & 3) != 0) {
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      _Str = (char *)((int)_Str + 1);
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar4 = *(uint *)_Str;
        uVar7 = uVar4 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar6 = uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff;
        puVar9 = (uint *)((int)_Str + 4);
        if (((uVar7 ^ 0xffffffff ^ uVar7 + 0x7efefeff) & 0x81010100) != 0) break;
        _Str = (char *)puVar9;
        if ((uVar6 & 0x81010100) != 0) {
          if ((uVar6 & 0x1010100) != 0) {
            return (char *)0x0;
          }
          if ((uVar4 + 0x7efefeff & 0x80000000) == 0) {
            return (char *)0x0;
          }
        }
      }
      uVar4 = *(uint *)_Str;
      if ((char)uVar4 == cVar3) {
        return (char *)(uint *)_Str;
      }
      if ((char)uVar4 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 8);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 1);
      }
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
      cVar5 = (char)(uVar4 >> 0x10);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 2);
      }
      if (cVar5 == '\0') break;
      cVar5 = (char)(uVar4 >> 0x18);
      if (cVar5 == cVar3) {
        return (char *)((int)_Str + 3);
      }
      _Str = (char *)puVar9;
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
    }
    return (char *)0x0;
  }
  do {
    cVar5 = *_Str;
    do {
      while (_Str = _Str + 1, cVar5 != cVar3) {
        if (cVar5 == '\0') {
          return (char *)0x0;
        }
        cVar5 = *_Str;
      }
      cVar5 = *_Str;
      pcVar10 = _Str + 1;
      pcVar8 = _SubStr;
    } while (cVar5 != _SubStr[1]);
    do {
      if (pcVar8[2] == '\0') {
LAB_10007c03:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10007c03;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// ============================================================
// _strncmp @ 0x10007c10 56B
// ============================================================

/* Library Function - Single Match
    _strncmp
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

int __cdecl _strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  char cVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar5 = 0;
  sVar3 = _MaxCount;
  pcVar6 = _Str1;
  if (_MaxCount != 0) {
    do {
      if (sVar3 == 0) break;
      sVar3 = sVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar4 = _MaxCount - sVar3;
    do {
      pcVar6 = _Str2;
      pcVar7 = _Str1;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar7 = _Str1 + 1;
      pcVar6 = _Str2 + 1;
      cVar2 = *_Str1;
      cVar1 = *_Str2;
      _Str2 = pcVar6;
      _Str1 = pcVar7;
    } while (cVar1 == cVar2);
    uVar5 = 0;
    if ((byte)pcVar6[-1] <= (byte)pcVar7[-1]) {
      if (pcVar6[-1] == pcVar7[-1]) {
        return 0;
      }
      uVar5 = 0xfffffffe;
    }
    uVar5 = ~uVar5;
  }
  return uVar5;
}



// ============================================================
// FUN_10007c48 @ 0x10007c48 137B
// ============================================================

int __cdecl FUN_10007c48(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10018548 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10018548 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10018548 != (FARPROC)0x0) {
        DAT_1001854c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10018550 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10007c97;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10007c97:
    if (DAT_1001854c != (FARPROC)0x0) {
      iVar1 = (*DAT_1001854c)();
      if ((iVar1 != 0) && (DAT_10018550 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10018550)(iVar1);
      }
    }
    iVar1 = (*DAT_10018548)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// ============================================================
// _strncpy @ 0x10007ce0 254B
// ============================================================

/* Library Function - Single Match
    _strncpy
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release */

char * __cdecl _strncpy(char *_Dest,char *_Source,size_t _Count)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (_Count == 0) {
    return _Dest;
  }
  puVar5 = (uint *)_Dest;
  if (((uint)_Source & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
      if (_Count == 0) {
        return _Dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)_Source & 3) == 0) {
        uVar4 = _Count >> 2;
        goto joined_r0x10007d1e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10007d5b;
        goto LAB_10007dc9;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      _Count = _Count - 1;
    } while (_Count != 0);
    return _Dest;
  }
  uVar4 = _Count >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)_Source;
      uVar2 = *(uint *)_Source;
      _Source = (char *)((int)_Source + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x10007dc5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10007dc9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10007d5b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10007dc5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10007dc5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10007dc5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10007d1e:
    } while (uVar4 != 0);
    _Count = _Count & 3;
    if (_Count == 0) {
      return _Dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)_Source;
    _Source = (char *)((int)_Source + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (_Count = _Count - 1, _Count != 0) {
LAB_10007d5b:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return _Dest;
    }
    _Count = _Count - 1;
  } while (_Count != 0);
  return _Dest;
}



// ============================================================
// FUN_10007de0 @ 0x10007de0 62B
// ============================================================

int __cdecl FUN_10007de0(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte abStack_28 [32];
  
  abStack_28[0x1c] = 0;
  abStack_28[0x1d] = 0;
  abStack_28[0x1e] = 0;
  abStack_28[0x1f] = 0;
  abStack_28[0x18] = 0;
  abStack_28[0x19] = 0;
  abStack_28[0x1a] = 0;
  abStack_28[0x1b] = 0;
  abStack_28[0x14] = 0;
  abStack_28[0x15] = 0;
  abStack_28[0x16] = 0;
  abStack_28[0x17] = 0;
  abStack_28[0x10] = 0;
  abStack_28[0x11] = 0;
  abStack_28[0x12] = 0;
  abStack_28[0x13] = 0;
  abStack_28[0xc] = 0;
  abStack_28[0xd] = 0;
  abStack_28[0xe] = 0;
  abStack_28[0xf] = 0;
  abStack_28[8] = 0;
  abStack_28[9] = 0;
  abStack_28[10] = 0;
  abStack_28[0xb] = 0;
  abStack_28[4] = 0;
  abStack_28[5] = 0;
  abStack_28[6] = 0;
  abStack_28[7] = 0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  while( true ) {
    bVar1 = *param_2;
    if (bVar1 == 0) break;
    param_2 = param_2 + 1;
    abStack_28[(int)(uint)bVar1 >> 3] = abStack_28[(int)(uint)bVar1 >> 3] | '\x01' << (bVar1 & 7);
  }
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    bVar1 = *param_1;
    if (bVar1 == 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
  return iVar2;
}



// ============================================================
// FUN_10007e1e @ 0x10007e1e 203B
// ============================================================

uint __thiscall FUN_10007e1e(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1001845c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10015eec < 2) {
        uVar2 = (byte)PTR_DAT_10015ce0[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10007377(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10015ce0[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10007424(DAT_1001845c,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}



// ============================================================
// FUN_10007ee9 @ 0x10007ee9 386B
// ============================================================

undefined4 __cdecl FUN_10007ee9(DWORD *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  DWORD local_10;
  DWORD local_c;
  
  bVar1 = false;
  if (param_1 == (DWORD *)0x2) {
    puVar7 = &DAT_100185b8;
    pcVar6 = DAT_100185b8;
LAB_10007f6f:
    bVar1 = true;
    FUN_10006d80(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_100185c4;
        pcVar6 = DAT_100185c4;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_100185bc;
        pcVar6 = DAT_100185bc;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_100185c0;
        pcVar6 = DAT_100185c0;
      }
      goto LAB_10007f6f;
    }
    pDVar2 = FUN_10004b81();
    uVar3 = FUN_1000806b((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_10006de1(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_10006de1(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)0x8) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_10007fe3;
    }
  }
  else {
LAB_10007fe3:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_10015cc8 < DAT_10015ccc + DAT_10015cc8) {
        iVar4 = DAT_10015cc8 * 0xc;
        iVar5 = DAT_10015cc8;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_10015ccc + DAT_10015cc8);
      }
      goto LAB_10008021;
    }
  }
  *puVar7 = 0;
LAB_10008021:
  if (bVar1) {
    FUN_10006de1(1);
  }
  if (param_1 == (DWORD *)0x8) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)0x8) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}



// ============================================================
// FUN_1000806b @ 0x1000806b 61B
// ============================================================

uint __cdecl FUN_1000806b(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_10015cd4 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_10015cd4 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// FUN_100080a8 @ 0x100080a8 111B
// ============================================================

uint __cdecl FUN_100080a8(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1001845c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_100185ec);
    bVar1 = DAT_100185e8 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_100185ec);
      this = (void *)0x13;
      FUN_10006d80(0x13);
    }
    param_1 = FUN_10008117(this,param_1);
    if (bVar1) {
      FUN_10006de1(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_100185ec);
    }
  }
  return param_1;
}



// ============================================================
// FUN_10008117 @ 0x10008117 204B
// ============================================================

uint __thiscall FUN_10008117(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1001845c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10015eec < 2) {
        uVar2 = (byte)PTR_DAT_10015ce0[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10007377(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10015ce0[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10007424(DAT_1001845c,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        uVar1 = (uint)local_8 & 0xff;
      }
      else {
        uVar1 = (uint)local_8 & 0xffff;
      }
    }
  }
  return uVar1;
}



// ============================================================
// FUN_100081f0 @ 0x100081f0 257B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100081f0(byte *param_1,char *param_2,void *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  void *this;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_100185ec;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1001845c == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_1000824f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000824f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_100185ec = _DAT_100185ec + 1;
      UNLOCK();
      bVar8 = 0 < DAT_100185e8;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_100185ec = iVar2;
        FUN_10006d80(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar5 = 0;
      uVar7 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_10007e1e(param_3,uVar7);
        uVar5 = FUN_10007e1e(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_100082c5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_100082c5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_100185ec = _DAT_100185ec + -1;
        UNLOCK();
      }
      else {
        FUN_10006de1(0x13);
      }
    }
  }
  return uVar6;
}



// ============================================================
// InitString @ 0x100083fe 41B
// ============================================================

/* Library Function - Single Match
    public: void __thiscall CSimpleException::InitString(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CSimpleException::InitString(CSimpleException *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 0xc) = 1;
  iVar1 = FUN_1000c420(*(UINT *)(this + 0x94),(LPSTR)(this + 0x14),0x80);
  *(uint *)(this + 0x10) = (uint)(iVar1 != 0);
  return;
}



// ============================================================
// FUN_1000846a @ 0x1000846a 25B
// ============================================================

void FUN_1000846a(void)

{
  int extraout_ECX;
  undefined *local_8;
  
  local_8 = &DAT_10016578;
  __CxxThrowException_8(&local_8,&DAT_100114c8);
  *(undefined4 *)(extraout_ECX + 0xc) = 0;
  *(undefined4 *)(extraout_ECX + 0x10) = 0;
  *(undefined4 *)(extraout_ECX + 8) = 0;
  *(undefined4 *)(extraout_ECX + 4) = 0;
  FUN_10008500(*(undefined4 **)(extraout_ECX + 0x14));
  *(undefined4 *)(extraout_ECX + 0x14) = 0;
  return;
}



// ============================================================
// RemoveAll @ 0x10008483 32B
// ============================================================

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CObList::RemoveAll(void)
    public: void __thiscall CPtrList::RemoveAll(void)
   
   Library: Visual Studio 2015 Release */

void __fastcall RemoveAll(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_10008500(*(undefined4 **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// ============================================================
// FUN_100084a3 @ 0x100084a3 25B
// ============================================================

void __thiscall FUN_100084a3(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x10);
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = *piVar1 + -1;
  *(undefined4 **)((int)this + 0x10) = param_1;
  if (*piVar1 == 0) {
    RemoveAll((int)this);
  }
  return;
}



// ============================================================
// FUN_100084bc @ 0x100084bc 36B
// ============================================================

int __fastcall FUN_100084bc(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)param_1 + 4);
  iVar2 = *piVar1;
  iVar3 = piVar1[2];
  *(int *)((int)param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((int)param_1 + 8) = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  FUN_100084a3(param_1,piVar1);
  return iVar3;
}



// ============================================================
// FUN_100084e0 @ 0x100084e0 32B
// ============================================================

void FUN_100084e0(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_100087db(param_2 * param_3 + 4);
  *puVar1 = *param_1;
  *param_1 = puVar1;
  return;
}



// ============================================================
// FUN_10008500 @ 0x10008500 22B
// ============================================================

void __fastcall FUN_10008500(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    FUN_10008804((undefined *)param_1);
    param_1 = puVar1;
  }
  return;
}



// ============================================================
// CMap<> @ 0x10008516 39B
// ============================================================

/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CMap<void *,void *,void *,void *>::CMap<void *,void *,void *,void *>(int)
    public: __thiscall CMap<class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsOS<wchar_t> > >,wchar_t const *,void *,void *>::CMap<class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> > >,wchar_t const
   *,void *,void *>(int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void __thiscall CMap<>(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined ***)this = &PTR_LAB_1001005c;
  *(undefined4 *)((int)this + 8) = 0x11;
  *(undefined4 *)((int)this + 0x18) = param_1;
  return;
}



// ============================================================
// FUN_1000853d @ 0x1000853d 28B
// ============================================================

undefined * __thiscall FUN_1000853d(void *this,byte param_1)

{
  FUN_100085c9();
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10008559 @ 0x10008559 69B
// ============================================================

void __thiscall FUN_10008559(void *this,int param_1,int param_2)

{
  void *_Dst;
  
  if (*(undefined **)((int)this + 4) != (undefined *)0x0) {
    FUN_10008804(*(undefined **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_2 != 0) {
    _Dst = FUN_100087db(param_1 << 2);
    *(void **)((int)this + 4) = _Dst;
    _memset(_Dst,0,param_1 << 2);
  }
  *(int *)((int)this + 8) = param_1;
  return;
}



// ============================================================
// RemoveAll @ 0x1000859e 43B
// ============================================================

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CMapPtrToPtr::RemoveAll(void)
    public: void __thiscall CMapPtrToWord::RemoveAll(void)
    public: void __thiscall CMapWordToOb::RemoveAll(void)
    public: void __thiscall CMapWordToPtr::RemoveAll(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __fastcall RemoveAll(int param_1)

{
  if (*(undefined **)(param_1 + 4) != (undefined *)0x0) {
    FUN_10008804(*(undefined **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10008500(*(undefined4 **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// ============================================================
// FUN_100085c9 @ 0x100085c9 41B
// ============================================================

void FUN_100085c9(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001005c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  RemoveAll((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_100085f2 @ 0x100085f2 77B
// ============================================================

void __fastcall FUN_100085f2(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = FUN_100084e0((undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x18),0xc);
    iVar4 = *(int *)(param_1 + 0x18);
    puVar3 = (undefined4 *)(iVar2 + -8 + iVar4 * 0xc);
    if (-1 < iVar4 + -1) {
      do {
        *puVar3 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 **)(param_1 + 0x10) = puVar3;
        puVar3 = puVar3 + -3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  uVar1 = *puVar3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  return;
}



// ============================================================
// FUN_1000863f @ 0x1000863f 25B
// ============================================================

void __thiscall FUN_1000863f(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x10);
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = *piVar1 + -1;
  *(undefined4 **)((int)this + 0x10) = param_1;
  if (*piVar1 == 0) {
    RemoveAll((int)this);
  }
  return;
}



// ============================================================
// FUN_10008658 @ 0x10008658 50B
// ============================================================

undefined4 * __thiscall FUN_10008658(void *this,uint param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = (param_1 >> 4) % *(uint *)((int)this + 8);
  *param_2 = uVar2;
  if (*(int *)((int)this + 4) != 0) {
    for (puVar1 = *(undefined4 **)(*(int *)((int)this + 4) + uVar2 * 4); puVar1 != (undefined4 *)0x0
        ; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[1] == param_1) {
        return puVar1;
      }
    }
  }
  return (undefined4 *)0x0;
}



// ============================================================
// FUN_1000868a @ 0x1000868a 51B
// ============================================================

undefined4 __thiscall FUN_1000868a(void *this,uint param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    for (puVar1 = *(undefined4 **)
                   (*(int *)((int)this + 4) + ((param_1 >> 4) % *(uint *)((int)this + 8)) * 4);
        puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[1] == param_1) {
        return puVar1[2];
      }
    }
  }
  return 0;
}



// ============================================================
// FUN_100086bd @ 0x100086bd 80B
// ============================================================

undefined4 * __thiscall FUN_100086bd(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_1;
  puVar2 = FUN_10008658(this,param_1,&param_1);
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      FUN_10008559(this,*(int *)((int)this + 8),1);
    }
    puVar2 = (undefined4 *)FUN_100085f2((int)this);
    puVar2[1] = uVar1;
    *puVar2 = *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
    *(undefined4 **)(*(int *)((int)this + 4) + param_1 * 4) = puVar2;
  }
  return puVar2 + 2;
}



// ============================================================
// FUN_1000870d @ 0x1000870d 66B
// ============================================================

undefined4 __thiscall FUN_1000870d(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    uVar4 = (param_1 >> 4) % *(uint *)((int)this + 8);
    puVar2 = *(undefined4 **)(iVar1 + uVar4 * 4);
    puVar5 = (undefined4 *)(iVar1 + uVar4 * 4);
    while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
      if (puVar3[1] == param_1) {
        *puVar5 = *puVar3;
        FUN_1000863f(this,puVar3);
        return 1;
      }
      puVar5 = puVar3;
      puVar2 = (undefined4 *)*puVar3;
    }
  }
  return 0;
}



// ============================================================
// FUN_1000874f @ 0x1000874f 114B
// ============================================================

void __thiscall FUN_1000874f(void *this,int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0xffffffff) {
    uVar4 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar1 = *(int **)((int)this + 4);
      do {
        piVar3 = (int *)*piVar1;
        if (piVar3 != (int *)0x0) break;
        uVar4 = uVar4 + 1;
        piVar1 = piVar1 + 1;
      } while (uVar4 < *(uint *)((int)this + 8));
    }
  }
  iVar5 = *piVar3;
  if (iVar5 == 0) {
    uVar4 = *(uint *)((int)this + 8);
    uVar2 = ((uint)piVar3[1] >> 4) % uVar4 + 1;
    if (uVar2 < uVar4) {
      piVar1 = (int *)(*(int *)((int)this + 4) + uVar2 * 4);
      do {
        iVar5 = *piVar1;
        if (iVar5 != 0) break;
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 1;
      } while (uVar2 < uVar4);
    }
  }
  *param_1 = iVar5;
  *param_2 = piVar3[1];
  *param_3 = piVar3[2];
  return;
}



// ============================================================
// FUN_100087db @ 0x100087db 41B
// ============================================================

void * __cdecl FUN_100087db(size_t param_1)

{
  void *pvVar1;
  int iVar2;
  
  while( true ) {
    pvVar1 = _malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (PTR_FUN_100132b8 == (undefined *)0x0) break;
    iVar2 = (*(code *)PTR_FUN_100132b8)(param_1);
    if (iVar2 == 0) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



// ============================================================
// FUN_10008815 @ 0x10008815 34B
// ============================================================

void __fastcall FUN_10008815(int *param_1)

{
  int iVar1;
  
  if (param_1[7] == 0) {
    iVar1 = FUN_1000d043();
    if (iVar1 != 0) {
      AfxPostQuitMessage(0);
    }
  }
  FUN_10008b12(param_1);
  return;
}



// ============================================================
// FUN_10008837 @ 0x10008837 55B
// ============================================================

void __thiscall FUN_10008837(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_10002248();
  *(undefined4 *)((int)this + 0x84) = 0;
  PostMessageA((HWND)piVar1[7],0x36a,0,0);
  (**(code **)(*piVar1 + 0x6c))(param_1,param_2);
  return;
}



// ============================================================
// FUN_100088e5 @ 0x100088e5 106B
// ============================================================

bool __thiscall FUN_100088e5(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1;
  if (param_1 < 1) {
    FUN_10008bee(this,param_1);
    param_1 = 0;
    if (*(int **)((int)this + 0x80) != (int *)0x0) {
      param_1 = (**(code **)(**(int **)((int)this + 0x80) + 0x10))();
      while (param_1 != 0) {
        piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x80) + 0x14))(&param_1);
        (**(code **)(*piVar2 + 0x88))();
      }
    }
  }
  else if (param_1 == 1) {
    FUN_10008bee(this,1);
  }
  return iVar1 < 1;
}



// ============================================================
// FUN_1000894f @ 0x1000894f 173B
// ============================================================

void __thiscall FUN_1000894f(void *this,LPSTR param_1)

{
  LPVOID pvVar1;
  int iVar2;
  BOOL BVar3;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  PDEVMODEA pDevModeOutput;
  LONG LVar4;
  void *local_8;
  
  if (*(HGLOBAL *)((int)this + 0x98) != (HGLOBAL)0x0) {
    local_8 = this;
    pvVar1 = GlobalLock(*(HGLOBAL *)((int)this + 0x98));
    iVar2 = lstrcmpA((LPCSTR)((uint)*(ushort *)((int)pvVar1 + 2) + (int)pvVar1),param_1);
    if (iVar2 == 0) {
      BVar3 = OpenPrinterA(param_1,&local_8,(LPPRINTER_DEFAULTSA)0x0);
      if (BVar3 != 0) {
        if (*(HGLOBAL *)((int)this + 0x94) != (HGLOBAL)0x0) {
          FUN_1000c66f(*(HGLOBAL *)((int)this + 0x94));
        }
        dwBytes = DocumentPropertiesA((HWND)0x0,local_8,param_1,(PDEVMODEA)0x0,(PDEVMODEA)0x0,0);
        hMem = GlobalAlloc(0x42,dwBytes);
        *(HGLOBAL *)((int)this + 0x94) = hMem;
        pDevModeOutput = GlobalLock(hMem);
        LVar4 = DocumentPropertiesA((HWND)0x0,local_8,param_1,pDevModeOutput,(PDEVMODEA)0x0,2);
        if (LVar4 != 1) {
          FUN_1000c66f(*(HGLOBAL *)((int)this + 0x94));
          *(undefined4 *)((int)this + 0x94) = 0;
        }
        ClosePrinter(local_8);
      }
    }
  }
  return;
}



// ============================================================
// AfxGetThread @ 0x100089fc 21B
// ============================================================

/* Library Function - Single Match
    class CWinThread * __stdcall AfxGetThread(void)
   
   Library: Visual Studio 1998 Release */

CWinThread * AfxGetThread(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  CWinThread *pCVar3;
  
  pAVar1 = AfxGetModuleThreadState();
  pCVar3 = *(CWinThread **)(pAVar1 + 4);
  if (pCVar3 == (CWinThread *)0x0) {
    iVar2 = FUN_1000def3();
    pCVar3 = *(CWinThread **)(iVar2 + 4);
  }
  return pCVar3;
}



// ============================================================
// FUN_10008a11 @ 0x10008a11 95B
// ============================================================

void FUN_10008a11(void)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  int iVar3;
  
  iVar1 = FUN_1000def3();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_1000dcc6();
    dwThreadId = GetCurrentThreadId();
    pHVar2 = SetWindowsHookExA(-1,(HOOKPROC)&LAB_10008df6,(HINSTANCE)0x0,dwThreadId);
    *(HHOOK *)(iVar1 + 0x30) = pHVar2;
    iVar1 = FUN_1000db41();
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar3 = FUN_1000def3();
      (**(code **)(iVar1 + 0x14))(*(undefined4 *)(iVar3 + 8));
    }
    FUN_1000da7f(&DAT_100181fc,&LAB_1000d488);
  }
  return;
}



// ============================================================
// FUN_10008a70 @ 0x10008a70 130B
// ============================================================

void FUN_10008a70(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100094f0();
  FUN_100094f9(0xffffffff);
  if (*(int *)(unaff_EBP + 8) == 0) {
    iVar1 = FUN_1000daf6((int *)&DAT_100162e0);
    if ((iVar1 != 0) && (*(int **)(iVar1 + 0xcc) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar1 + 0xcc) + 0x58))();
      if (*(int **)(iVar1 + 0xcc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0xcc) + 4))(1);
      }
      *(undefined4 *)(iVar1 + 0xcc) = 0;
    }
  }
  if (DAT_100162a4 != (void *)0x0) {
    FUN_1000da26(DAT_100162a4,*(int *)(unaff_EBP + 8),0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10008b12 @ 0x10008b12 127B
// ============================================================

void __fastcall FUN_10008b12(int *param_1)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  bVar1 = true;
  local_4 = 0;
  do {
    if (bVar1) {
      do {
        BVar2 = PeekMessageA((LPMSG)(param_1 + 0xc),(HWND)0x0,0,0,0);
        if (BVar2 != 0) break;
        iVar4 = local_4 + 1;
        iVar3 = (**(code **)(*param_1 + 0x60))(local_4);
        if (iVar3 == 0) {
          bVar1 = false;
        }
        local_4 = iVar4;
      } while (bVar1);
    }
    do {
      iVar4 = (**(code **)(*param_1 + 0x5c))();
      if (iVar4 == 0) {
        (**(code **)(*param_1 + 0x68))();
        return;
      }
      iVar4 = (**(code **)(*param_1 + 100))((LPMSG)(param_1 + 0xc));
      if (iVar4 != 0) {
        local_4 = 0;
        bVar1 = true;
      }
      BVar2 = PeekMessageA((LPMSG)(param_1 + 0xc),(HWND)0x0,0,0,0);
    } while (BVar2 != 0);
  } while( true );
}



// ============================================================
// FUN_10008bee @ 0x10008bee 267B
// ============================================================

bool __thiscall FUN_10008bee(void *this,int param_1)

{
  void *pvVar1;
  BOOL BVar2;
  int iVar3;
  void *this_00;
  
  if (param_1 < 1) {
    pvVar1 = *(void **)((int)this + 0x1c);
    if ((pvVar1 != (void *)0x0) && (*(HWND *)((int)pvVar1 + 0x1c) != (HWND)0x0)) {
      BVar2 = IsWindowVisible(*(HWND *)((int)pvVar1 + 0x1c));
      if (BVar2 != 0) {
        FUN_10009fdb();
        FUN_1000b735(*(HWND *)((int)pvVar1 + 0x1c),0x363,1,0,1,1);
      }
    }
    iVar3 = FUN_1000def3();
    iVar3 = FUN_1000da7f((void *)(iVar3 + 0x1070),&LAB_1000d37d);
    for (this_00 = *(void **)(iVar3 + 8); this_00 != (void *)0x0;
        this_00 = *(void **)((int)this_00 + 0x54)) {
      if ((*(int *)((int)this_00 + 0x1c) != 0) && (this_00 != pvVar1)) {
        if (*(int *)((int)this_00 + 0x88) == 0) {
          FUN_10009c29(this_00,0);
        }
        BVar2 = IsWindowVisible(*(HWND *)((int)this_00 + 0x1c));
        if ((BVar2 != 0) || (-1 < *(int *)((int)this_00 + 0x88))) {
          FUN_10009fdb();
          FUN_1000b735(*(HWND *)((int)this_00 + 0x1c),0x363,1,0,1,1);
        }
        if (0 < *(int *)((int)this_00 + 0x88)) {
          FUN_10009c29(this_00,*(int *)((int)this_00 + 0x88));
        }
        *(undefined4 *)((int)this_00 + 0x88) = 0xffffffff;
      }
    }
  }
  else {
    iVar3 = FUN_1000def3();
    iVar3 = FUN_1000da7f((void *)(iVar3 + 0x1070),&LAB_1000d37d);
    if (*(int *)(iVar3 + 0x10) == 0) {
      FUN_100094f0();
      FUN_100094f9(1);
    }
  }
  return param_1 < 0;
}



// ============================================================
// FUN_10008cf9 @ 0x10008cf9 123B
// ============================================================

undefined4 __thiscall FUN_10008cf9(void *this,int param_1)

{
  undefined4 *puVar1;
  AFX_MSGMAP_ENTRY *pAVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)this + 0x28))();
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (*(uint *)(param_1 + 4) < 0xc000) {
      pAVar2 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)puVar1[1],*(uint *)(param_1 + 4),0,0);
      if (pAVar2 != (AFX_MSGMAP_ENTRY *)0x0) {
LAB_10008d58:
        (**(code **)(pAVar2 + 0x14))(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        return 1;
      }
    }
    else {
      pAVar2 = (AFX_MSGMAP_ENTRY *)puVar1[1];
      while (pAVar2 = AfxFindMessageEntry(pAVar2,0xc000,0,0), pAVar2 != (AFX_MSGMAP_ENTRY *)0x0) {
        if (**(int **)(pAVar2 + 0x10) == *(int *)(param_1 + 4)) goto LAB_10008d58;
        pAVar2 = pAVar2 + 0x18;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}



// ============================================================
// AfxInternalProcessWndProcException @ 0x10008dd1 37B
// ============================================================

/* Library Function - Single Match
    long __stdcall AfxInternalProcessWndProcException(class CException *,struct tagMSG const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

long AfxInternalProcessWndProcException(CException *param_1,tagMSG *param_2)

{
  long lVar1;
  
  if (param_2->message == 1) {
    lVar1 = -1;
  }
  else {
    if (param_2->message == 0xf) {
      ValidateRect(param_2->hwnd,(RECT *)0x0);
    }
    lVar1 = 0;
  }
  return lVar1;
}



// ============================================================
// FUN_10008e4e @ 0x10008e4e 75B
// ============================================================

undefined4 FUN_10008e4e(int param_1)

{
  SHORT SVar1;
  
  if ((((*(int *)(param_1 + 4) == 0x100) && (*(int *)(param_1 + 8) == 0x70)) &&
      ((*(uint *)(param_1 + 0xc) >> 0x10 & 0x4000) == 0)) &&
     (((SVar1 = GetKeyState(0x10), -1 < SVar1 && (SVar1 = GetKeyState(0x11), -1 < SVar1)) &&
      (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    return 1;
  }
  return 0;
}



// ============================================================
// FUN_10008e99 @ 0x10008e99 330B
// ============================================================

undefined4 FUN_10008e99(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  HWND hWnd;
  undefined4 local_24 [7];
  int *local_8;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 != 2) {
      return 0;
    }
    piVar1 = FUN_1000a19c();
    if (((((piVar1 != (int *)0x0) && (piVar1 = FUN_1000b67b(piVar1), piVar1 != (int *)0x0)) &&
         (iVar2 = FUN_1000c2d2((int)piVar1), iVar2 != 0)) &&
        ((piVar1[0x14] != 0 && (iVar2 = FUN_10002248(), *(int *)((int)local_8 + 0x1c) != 0)))) &&
       (((param_2[1] == 0x100 && (param_2[2] == 0xd)) || (param_2[1] == 0x202)))) {
      hWnd = *(HWND *)(iVar2 + 0x1c);
      goto LAB_10008f23;
    }
  }
  iVar2 = FUN_10002248();
  if (((0x332 < DAT_100181e4) || (iVar2 == 0)) || (iVar3 = FUN_10008e4e((int)param_2), iVar3 == 0))
  {
    if ((((param_1 != 0) || (local_8[8] == 0)) || ((uint)param_2[1] < 0x100)) ||
       ((0x108 < (uint)param_2[1] ||
        (iVar2 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f), *(int *)(iVar2 + 0xbc) != 0)))) {
      return 0;
    }
    *(undefined4 *)(iVar2 + 0xbc) = 1;
    puVar4 = local_24;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar3 = FUN_10009c50(local_8[8]);
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*local_8 + 0x58))(local_24), iVar3 != 0)) {
      *(undefined4 *)(iVar2 + 0xbc) = 0;
      return 1;
    }
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    return 0;
  }
  hWnd = *(HWND *)(iVar2 + 0x1c);
LAB_10008f23:
  SendMessageA(hWnd,0x111,0xe146,0);
  return 1;
}



// ============================================================
// FUN_10008ffe @ 0x10008ffe 64B
// ============================================================

undefined4 __fastcall FUN_10008ffe(int *param_1)

{
  LPMSG lpMsg;
  BOOL BVar1;
  int iVar2;
  undefined4 uVar3;
  
  lpMsg = (LPMSG)(param_1 + 0xc);
  BVar1 = GetMessageA(lpMsg,(HWND)0x0,0,0);
  uVar3 = 0;
  if (BVar1 != 0) {
    if (param_1[0xd] != 0x36a) {
      iVar2 = (**(code **)(*param_1 + 0x58))(lpMsg);
      if (iVar2 == 0) {
        TranslateMessage(lpMsg);
        DispatchMessageA(lpMsg);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// ============================================================
// FUN_1000903e @ 0x1000903e 26B
// ============================================================

void __fastcall FUN_1000903e(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// FUN_10009058 @ 0x10009058 43B
// ============================================================

void FUN_10009058(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x1c))(extraout_ECX);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10009083 @ 0x10009083 263B
// ============================================================

uint FUN_10009083(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,
                 undefined4 *param_5,uint param_6,undefined4 *param_7)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = param_1;
    param_7[1] = param_4;
    return 1;
  }
  if (param_6 < 0x29) {
    if (param_6 == 0x28) {
      (*(code *)param_4)(param_2,param_5[1],*param_5);
      return 1;
    }
    if (param_6 == 2) {
LAB_10009135:
      uVar1 = (*(code *)param_4)(param_2);
      return uVar1;
    }
    if (param_6 == 0xc) {
      (*(code *)param_4)();
      return 1;
    }
    if (param_6 != 0xd) {
      if (param_6 == 0x23) {
        uVar1 = (*(code *)param_4)();
        return uVar1;
      }
      if (param_6 != 0x26) {
        if (param_6 != 0x27) {
          return 0;
        }
        uVar1 = (*(code *)param_4)(param_5[1],*param_5);
        return uVar1;
      }
      (*(code *)param_4)(param_5[1],*param_5);
      return 1;
    }
LAB_10009140:
    (*(code *)param_4)(param_2);
  }
  else {
    if (param_6 == 0x29) {
      uVar1 = (*(code *)param_4)(param_2,param_5[1],*param_5);
      return uVar1;
    }
    if (param_6 == 0x2c) {
      (*(code *)param_4)(param_5);
    }
    else {
      if (param_6 != 0x2d) {
        param_2 = param_5;
        if (param_6 != 0x2e) {
          if (param_6 != 0x2f) {
            return 0;
          }
          goto LAB_10009135;
        }
        goto LAB_10009140;
      }
      (*(code *)param_4)(param_5,param_2);
    }
    uVar1 = (uint)(param_5[7] == 0);
    param_5[7] = 0;
  }
  return uVar1;
}



// ============================================================
// FUN_1000918a @ 0x1000918a 271B
// ============================================================

uint __thiscall
FUN_1000918a(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *_Buf1;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  AFX_MSGMAP_ENTRY *pAVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_2 == 0xfffffffe) {
    iVar1 = FUN_1000def3();
    uVar2 = (**(code **)(**(int **)(iVar1 + 0x1038) + 4))(this,param_1,param_3,param_4);
    return uVar2;
  }
  if (param_2 == 0xfffffffd) {
    param_2 = 0;
    _Buf1 = (void *)param_3[0xc];
    puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x2c))();
    do {
      if (puVar3 == (undefined4 *)0x0) {
        return param_2;
      }
      if (param_2 != 0) {
        return param_2;
      }
      piVar6 = (int *)puVar3[1];
      while ((((undefined4 *)piVar6[1] != (undefined4 *)0x0 && (piVar6[2] != 0)) && (param_2 == 0)))
      {
        if (param_1 == (undefined4 *)piVar6[1]) {
          if (_Buf1 == (void *)0x0) {
            iVar1 = *piVar6;
          }
          else {
            if ((void *)*piVar6 == (void *)0x0) goto LAB_1000922d;
            iVar1 = _memcmp(_Buf1,(void *)*piVar6,0x10);
          }
          if (iVar1 == 0) {
            param_2 = 1;
            param_3[1] = piVar6[2];
          }
        }
LAB_1000922d:
        piVar6 = piVar6 + 3;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while( true );
  }
  if (param_2 != 0xffffffff) {
    uVar2 = param_2 & 0xffff;
    uVar5 = param_2 >> 0x10;
    param_2 = uVar2;
    if (uVar5 != 0) goto LAB_10009252;
  }
  uVar5 = 0x111;
LAB_10009252:
  puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x28))();
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    pAVar4 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)puVar3[1],uVar5,param_2,(uint)param_1);
    if (pAVar4 != (AFX_MSGMAP_ENTRY *)0x0) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar2 = FUN_10009083(this,param_1,param_2,*(undefined **)(pAVar4 + 0x14),param_3,
                       *(uint *)(pAVar4 + 0x10),param_4);
  return uVar2;
}



// ============================================================
// FUN_100092a7 @ 0x100092a7 21B
// ============================================================

void FUN_100092a7(void)

{
  int iVar1;
  
  iVar1 = FUN_1000def3();
  (**(code **)(**(int **)(iVar1 + 4) + 0x90))(1);
  return;
}



// ============================================================
// FUN_100092bc @ 0x100092bc 21B
// ============================================================

void FUN_100092bc(void)

{
  int iVar1;
  
  iVar1 = FUN_1000def3();
  (**(code **)(**(int **)(iVar1 + 4) + 0x90))(0xffffffff);
  return;
}



// ============================================================
// FUN_100092e9 @ 0x100092e9 50B
// ============================================================

void __fastcall FUN_100092e9(int *param_1)

{
  CTypeLibCache *this;
  
  FUN_1000e216(0xd);
  this = (CTypeLibCache *)(**(code **)(*param_1 + 0x20))();
  if (this != (CTypeLibCache *)0x0) {
    CTypeLibCache::Unlock(this);
  }
  FUN_1000e286(0xd);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}



// ============================================================
// CCmdUI @ 0x1000932b 38B
// ============================================================

/* Library Function - Single Match
    public: __thiscall CCmdUI::CCmdUI(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall CCmdUI::CCmdUI(CCmdUI *this)

{
  *(undefined ***)this = &PTR_FUN_1000f718;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}



// ============================================================
// FUN_10009351 @ 0x10009351 144B
// ============================================================

void __thiscall FUN_10009351(void *this,int param_1)

{
  int iVar1;
  HWND pHVar2;
  void *pvVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    if (param_1 == 0) {
      iVar1 = *(int *)((int)this + 0x14);
      pHVar2 = GetFocus();
      if (pHVar2 == *(HWND *)(iVar1 + 0x1c)) {
        GetParent(*(HWND *)(iVar1 + 0x1c));
        pvVar3 = FUN_1000a19c();
        pHVar2 = (HWND)0x0;
        if (*(int *)((int)this + 0x14) != 0) {
          pHVar2 = *(HWND *)(*(int *)((int)this + 0x14) + 0x1c);
        }
        GetNextDlgTabItem(*(HWND *)((int)pvVar3 + 0x1c),pHVar2,0);
        pvVar3 = FUN_1000a19c();
        FUN_10009c92((int)pvVar3);
      }
    }
    FUN_10009c6b(*(void **)((int)this + 0x14),param_1);
  }
  else {
    if (*(int *)((int)this + 0x10) != 0) {
      return;
    }
    EnableMenuItem(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),
                   (-(uint)(param_1 != 0) & 0xfffffffd) + 3 | 0x400);
  }
  *(undefined4 *)((int)this + 0x18) = 1;
  return;
}



// ============================================================
// FUN_100093e1 @ 0x100093e1 98B
// ============================================================

void __thiscall FUN_100093e1(void *this,WPARAM param_1)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    uVar1 = SendMessageA(*(HWND *)(*(int *)((int)this + 0x14) + 0x1c),0x87,0,0);
    if ((uVar1 & 0x2000) != 0) {
      SendMessageA(*(HWND *)(*(int *)((int)this + 0x14) + 0x1c),0xf1,param_1,0);
    }
  }
  else if (*(int *)((int)this + 0x10) == 0) {
    CheckMenuItem(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),
                  (uint)CONCAT11(4,-(param_1 != 0) & 8));
  }
  return;
}



// ============================================================
// FUN_10009443 @ 0x10009443 86B
// ============================================================

void __thiscall FUN_10009443(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))(param_1 != 0);
  if ((*(int *)((int)this + 0xc) != 0) && (*(int *)((int)this + 0x10) == 0)) {
    if ((DAT_100181e0 == (HBITMAP)0x0) && (FUN_1000d4d3(), DAT_100181e0 == (HBITMAP)0x0)) {
      return;
    }
    SetMenuItemBitmaps(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),0x400,
                       (HBITMAP)0x0,DAT_100181e0);
  }
  return;
}



// ============================================================
// FUN_10009499 @ 0x10009499 87B
// ============================================================

void __thiscall FUN_10009499(void *this,LPCSTR param_1)

{
  UINT UVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_1000c5fe(*(HWND *)(*(int *)((int)this + 0x14) + 0x1c),param_1);
  }
  else if (*(int *)((int)this + 0x10) == 0) {
    UVar1 = GetMenuState(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),0x400);
    ModifyMenuA(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),
                UVar1 & 0xfffff6fb | 0x400,*(UINT_PTR *)((int)this + 4),param_1);
  }
  return;
}



// ============================================================
// FUN_100094f9 @ 0x100094f9 250B
// ============================================================

bool FUN_100094f9(SIZE_T param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  CWinThread *pCVar3;
  int iVar4;
  SIZE_T SVar5;
  void *pvVar6;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x10) != 0) &&
     (iVar2 = *(int *)(pAVar1 + 0x10) + -1, *(int *)(pAVar1 + 0x10) = iVar2, iVar2 == 0)) {
    if (param_1 != 0) {
      if (param_1 != 0xffffffff) {
        pCVar3 = AfxGetThread();
        if ((pCVar3 != (CWinThread *)0x0) && (*(code **)(pCVar3 + 0x54) != (code *)0x0)) {
          (**(code **)(pCVar3 + 0x54))(0,0);
        }
      }
      FUN_10009717(*(int *)(pAVar1 + 0x20));
      FUN_10009717(*(int *)(pAVar1 + 0x1c));
      FUN_10009717(*(int *)(pAVar1 + 0x18));
      FUN_10009717(*(int *)(pAVar1 + 0x14));
      FUN_10009717(*(int *)(pAVar1 + 0x24));
    }
    iVar2 = FUN_1000def3();
    iVar2 = *(int *)(iVar2 + 4);
    iVar4 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
    if (iVar2 != 0) {
      if (*(undefined **)(iVar4 + 0xc) != (undefined *)0x0) {
        SVar5 = FUN_10003476(*(undefined **)(iVar4 + 0xc));
        if (*(uint *)(iVar2 + 0xb8) <= SVar5) goto LAB_100095e4;
      }
      if (*(int *)(iVar2 + 0xb8) != 0) {
        param_1 = 0;
        if (*(undefined **)(iVar4 + 0xc) != (undefined *)0x0) {
          param_1 = FUN_10003476(*(undefined **)(iVar4 + 0xc));
          FUN_10003090(*(undefined **)(iVar4 + 0xc));
        }
        pvVar6 = _malloc(*(size_t *)(iVar2 + 0xb8));
        *(void **)(iVar4 + 0xc) = pvVar6;
        if ((pvVar6 == (void *)0x0) && (param_1 != 0)) {
          pvVar6 = _malloc(param_1);
          *(void **)(iVar4 + 0xc) = pvVar6;
        }
      }
    }
  }
LAB_100095e4:
  return *(int *)(pAVar1 + 0x10) != 0;
}



// ============================================================
// FUN_100095f3 @ 0x100095f3 101B
// ============================================================

undefined4 * FUN_100095f3(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  CMap<>(extraout_ECX + 1,10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CMap<>(extraout_ECX + 8,4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_1000f734;
  FUN_10008559(extraout_ECX + 8,7,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xf] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x10] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x11] = *(undefined4 *)(unaff_EBP + 0x10);
  return extraout_ECX;
}



// ============================================================
// FUN_10009658 @ 0x10009658 174B
// ============================================================

int FUN_10009658(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  uVar1 = *(uint *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1000868a((void *)(extraout_ECX + 4),uVar1);
    if (iVar3 == 0) {
      iVar3 = FUN_1000868a((void *)(extraout_ECX + 0x20),uVar1);
      if (iVar3 == 0) {
        puVar4 = FUN_100087c9(&LAB_1000c6a5);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(undefined **)(unaff_EBP + 8) = puVar4;
        iVar3 = FUN_10009801();
        if (iVar3 == 0) {
          FUN_1000846a();
        }
        piVar5 = FUN_100086bd((void *)(extraout_ECX + 0x20),uVar1);
        puVar4 = *(undefined **)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *piVar5 = iVar3;
        FUN_100087c9(puVar4);
        iVar2 = *(int *)(extraout_ECX + 0x40);
        *(uint *)(iVar2 + iVar3) = uVar1;
        if (*(int *)(extraout_ECX + 0x44) == 2) {
          *(uint *)(iVar2 + iVar3 + 4) = uVar1;
        }
      }
      else {
        iVar2 = *(int *)(extraout_ECX + 0x40);
        *(uint *)(iVar2 + iVar3) = uVar1;
        if (*(int *)(extraout_ECX + 0x44) == 2) {
          *(uint *)(iVar2 + iVar3 + 4) = uVar1;
        }
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}



// ============================================================
// FUN_10009717 @ 0x10009717 101B
// ============================================================

void __fastcall FUN_10009717(int param_1)

{
  undefined4 *puVar1;
  int local_10;
  int local_c;
  int *local_8;
  
  if (param_1 != 0) {
    local_c = -(uint)(*(int *)(param_1 + 0x2c) != 0);
    if (local_c != 0) {
      do {
        FUN_1000874f((void *)(param_1 + 0x20),&local_c,&local_10,(int *)&local_8);
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0x40) + (int)local_8);
        *puVar1 = 0;
        if (*(int *)(param_1 + 0x44) == 2) {
          puVar1[1] = 0;
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 4))(1);
        }
      } while (local_c != 0);
    }
    RemoveAll(param_1 + 0x20);
  }
  return;
}



// ============================================================
// FUN_1000979a @ 0x1000979a 85B
// ============================================================

void __thiscall FUN_1000979a(void *this,UINT param_1)

{
  int iVar1;
  CHAR local_208 [512];
  int local_8;
  
  iVar1 = (**(code **)(*(int *)this + 0xc))(local_208,0x200,&local_8);
  if (iVar1 == 0) {
    FUN_1000cebd();
  }
  else {
    FUN_1000ce85(local_208,param_1,local_8);
  }
  return;
}



// ============================================================
// FUN_10009801 @ 0x10009801 56B
// ============================================================

undefined4 FUN_10009801(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  uVar2 = 0;
  iVar1 = *(int *)(extraout_ECX + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar2 = (**(code **)(extraout_ECX + 0xc))();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
    uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



// ============================================================
// FUN_10009847 @ 0x10009847 25B
// ============================================================

undefined4 __thiscall FUN_10009847(void *this,int param_1)

{
  while( true ) {
    if (this == (void *)0x0) {
      return 0;
    }
    if (this == (void *)param_1) break;
    this = *(void **)((int)this + 0x10);
  }
  return 1;
}



// ============================================================
// FUN_10009925 @ 0x10009925 130B
// ============================================================

void __thiscall FUN_10009925(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    *(undefined **)this = PTR_DAT_100135b8;
  }
  else {
    iVar2 = 0x40;
    if ((((param_1 < 0x41) || (iVar2 = 0x80, param_1 < 0x81)) || (iVar2 = 0x100, param_1 < 0x101))
       || (iVar2 = 0x200, param_1 < 0x201)) {
      piVar1 = FUN_1000281a();
      piVar1[2] = iVar2;
    }
    else {
      piVar1 = FUN_100087db(param_1 + 0xd);
      piVar1[2] = param_1;
    }
    *piVar1 = 1;
    *(undefined1 *)((int)piVar1 + param_1 + 0xc) = 0;
    piVar1[1] = param_1;
    *(int **)this = piVar1 + 3;
  }
  return;
}



// ============================================================
// FUN_100099a7 @ 0x100099a7 72B
// ============================================================

void __fastcall FUN_100099a7(undefined4 *param_1)

{
  int iVar1;
  undefined *this;
  
  iVar1 = param_1[2];
  if (iVar1 == 0x40) {
    this = &DAT_10016688;
  }
  else if (iVar1 == 0x80) {
    this = &DAT_10016660;
  }
  else if (iVar1 == 0x100) {
    this = &DAT_10016638;
  }
  else {
    if (iVar1 != 0x200) {
      FUN_10008804((undefined *)param_1);
      return;
    }
    this = &DAT_10016610;
  }
  FUN_100028a9(this,param_1);
  return;
}



// ============================================================
// FUN_100099ef @ 0x100099ef 49B
// ============================================================

void __fastcall FUN_100099ef(int *param_1)

{
  LONG LVar1;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_100135bc) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_100099a7((undefined4 *)(*param_1 + -0xc));
    }
    *param_1 = (int)PTR_DAT_100135b8;
  }
  return;
}



// ============================================================
// FUN_10009a20 @ 0x10009a20 35B
// ============================================================

void FUN_10009a20(LONG *param_1)

{
  LONG LVar1;
  
  if (param_1 != (LONG *)PTR_DAT_100135bc) {
    LVar1 = InterlockedDecrement(param_1);
    if (LVar1 < 1) {
      FUN_100099a7(param_1);
    }
  }
  return;
}



// ============================================================
// FUN_10009a43 @ 0x10009a43 46B
// ============================================================

void __fastcall FUN_10009a43(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (1 < (int)puVar1[-3]) {
    FUN_100099ef(param_1);
    FUN_10009925(param_1,puVar1[-2]);
    FUN_10003c20((undefined4 *)*param_1,puVar1,puVar1[-2] + 1);
  }
  return;
}



// ============================================================
// FUN_10009a71 @ 0x10009a71 41B
// ============================================================

void __thiscall FUN_10009a71(void *this,int param_1)

{
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_100099ef(this);
    FUN_10009925(this,param_1);
  }
  return;
}



// ============================================================
// FUN_10009a9a @ 0x10009a9a 42B
// ============================================================

void __fastcall FUN_10009a9a(int *param_1)

{
  LONG LVar1;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_100135bc) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_100099a7((undefined4 *)(*param_1 + -0xc));
    }
  }
  return;
}



// ============================================================
// FUN_10009ac4 @ 0x10009ac4 45B
// ============================================================

void __thiscall FUN_10009ac4(void *this,uint param_1,undefined4 *param_2)

{
  FUN_10009a71(this,param_1);
  FUN_10003c20(*(undefined4 **)this,param_2,param_1);
  *(uint *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return;
}



// ============================================================
// FUN_10009af1 @ 0x10009af1 39B
// ============================================================

void * __thiscall FUN_10009af1(void *this,LPCSTR param_1)

{
  uint uVar1;
  
  if (param_1 == (LPCSTR)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = lstrlenA(param_1);
  }
  FUN_10009ac4(this,uVar1,(undefined4 *)param_1);
  return this;
}



// ============================================================
// FUN_10009b18 @ 0x10009b18 79B
// ============================================================

int __thiscall FUN_10009b18(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  if ((1 < (int)puVar1[-3]) || ((int)puVar1[-1] < param_1)) {
    iVar2 = puVar1[-2];
    if (param_1 < iVar2) {
      param_1 = iVar2;
    }
    FUN_10009925(this,param_1);
    FUN_10003c20(*(undefined4 **)this,puVar1,iVar2 + 1);
    *(int *)(*(int *)this + -8) = iVar2;
    FUN_10009a20(puVar1 + -3);
  }
  return *(int *)this;
}



// ============================================================
// FUN_10009b67 @ 0x10009b67 40B
// ============================================================

void __thiscall FUN_10009b67(void *this,int param_1)

{
  FUN_10009a43(this);
  if (param_1 == -1) {
    param_1 = lstrlenA(*(LPCSTR *)this);
  }
  *(int *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return;
}



// ============================================================
// FUN_10009ba6 @ 0x10009ba6 26B
// ============================================================

void __fastcall FUN_10009ba6(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowLongA(*(HWND *)(param_1 + 0x1c),-0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10009bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x70))();
  return;
}



// ============================================================
// FUN_10009bc0 @ 0x10009bc0 26B
// ============================================================

void __fastcall FUN_10009bc0(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowLongA(*(HWND *)(param_1 + 0x1c),-0x14);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10009bd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x74))();
  return;
}



// ============================================================
// FUN_10009bda @ 0x10009bda 79B
// ============================================================

void __thiscall
FUN_10009bda(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,UINT param_6)

{
  HWND hWndInsertAfter;
  
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    hWndInsertAfter = (HWND)0x0;
    if (param_1 != 0) {
      hWndInsertAfter = *(HWND *)(param_1 + 0x1c);
    }
    SetWindowPos(*(HWND *)((int)this + 0x1c),hWndInsertAfter,param_2,param_3,param_4,param_5,param_6
                );
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0x9c))
              (param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



// ============================================================
// FUN_10009c29 @ 0x10009c29 39B
// ============================================================

void __thiscall FUN_10009c29(void *this,int param_1)

{
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    ShowWindow(*(HWND *)((int)this + 0x1c),param_1);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0xa0))(param_1);
  }
  return;
}



// ============================================================
// FUN_10009c50 @ 0x10009c50 27B
// ============================================================

void __fastcall FUN_10009c50(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    IsWindowEnabled(*(HWND *)(param_1 + 0x1c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10009c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0xa4))();
  return;
}



// ============================================================
// FUN_10009c6b @ 0x10009c6b 39B
// ============================================================

void __thiscall FUN_10009c6b(void *this,BOOL param_1)

{
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    EnableWindow(*(HWND *)((int)this + 0x1c),param_1);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0xa8))(param_1);
  }
  return;
}



// ============================================================
// FUN_10009c92 @ 0x10009c92 33B
// ============================================================

void __fastcall FUN_10009c92(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    SetFocus(*(HWND *)(param_1 + 0x1c));
    FUN_1000a19c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10009cad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0xac))();
  return;
}



// ============================================================
// FUN_10009cb3 @ 0x10009cb3 61B
// ============================================================

void __thiscall FUN_10009cb3(void *this,int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  if ((this != (void *)0x0) && (*(int *)((int)this + 0x38) == 0)) {
    pHVar1 = GetParent(*(HWND *)((int)this + 0x1c));
    iVar2 = FUN_1000868a((void *)(param_1 + 4),(uint)pHVar1);
    if ((iVar2 != 0) && (*(int **)(iVar2 + 0x34) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar2 + 0x34) + 0x8c))(this);
    }
  }
  return;
}



// ============================================================
// FUN_10009dfe @ 0x10009dfe 34B
// ============================================================

undefined4 * __fastcall FUN_10009dfe(undefined4 *param_1)

{
  FUN_1000903e((int)param_1);
  *param_1 = &PTR_LAB_1000fe78;
  _memset(param_1 + 7,0,0x20);
  return param_1;
}



// ============================================================
// `scalar_deleting_destructor' @ 0x10009e20 28B
// ============================================================

/* Library Function - Single Match
    public: virtual void * __thiscall CWnd::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CWnd::_scalar_deleting_destructor_(CWnd *this,uint param_1)

{
  ~CWnd(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_10009e3c @ 0x10009e3c 44B
// ============================================================

undefined4 * __thiscall FUN_10009e3c(void *this,undefined4 param_1)

{
  FUN_1000903e((int)this);
  *(undefined ***)this = &PTR_LAB_1000fe78;
  _memset((undefined4 *)((int)this + 0x1c),0,0x20);
  *(undefined4 *)((int)this + 0x1c) = param_1;
  return this;
}



// ============================================================
// FUN_10009e68 @ 0x10009e68 35B
// ============================================================

void FUN_10009e68(int param_1,LPRECT param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  GetWindowRect(*(HWND *)(param_1 + 0x1c),param_2);
  uVar1 = FUN_10009ba6(param_1);
  *param_3 = uVar1;
  return;
}



// ============================================================
// FUN_10009e8b @ 0x10009e8b 121B
// ============================================================

void FUN_10009e8b(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  tagRECT local_14;
  
  if (((((param_3 & 0x10000000) == 0) &&
       (uVar1 = FUN_10009ba6((int)param_1), (uVar1 & 0x50000000) == 0)) &&
      (GetWindowRect((HWND)param_1[7],&local_14), *param_2 == local_14.left)) &&
     (param_2[1] == local_14.top)) {
    GetWindow((HWND)param_1[7],4);
    pvVar2 = FUN_1000a19c();
    if ((pvVar2 != (void *)0x0) && (iVar3 = FUN_10009c50((int)pvVar2), iVar3 != 0)) {
      return;
    }
    iVar3 = (**(code **)(*param_1 + 0xac))();
    if (iVar3 != 0) {
      FUN_1000bd80(param_1,0);
    }
  }
  return;
}



// ============================================================
// FUN_10009f04 @ 0x10009f04 97B
// ============================================================

void FUN_10009f04(int param_1,WPARAM param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = FUN_10009ba6(param_1);
  if ((uVar1 & 0x40000000) == 0) {
    pvVar2 = FUN_1000b653(param_1);
    pvVar3 = FUN_1000b653(param_3);
    if (pvVar2 != pvVar3) {
      local_c = *(undefined4 *)(param_1 + 0x1c);
      if (param_3 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = *(undefined4 *)(param_3 + 0x1c);
      }
      SendMessageA(*(HWND *)((int)pvVar2 + 0x1c),0x36e,param_2,(LPARAM)&local_c);
    }
  }
  return;
}



// ============================================================
// FUN_10009f65 @ 0x10009f65 118B
// ============================================================

undefined4 FUN_10009f65(int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  
  if (((param_2 == -2) && (((param_3 == 0x201 || (param_3 == 0x207)) || (param_3 == 0x204)))) &&
     (pvVar1 = FUN_1000b653(param_1), pvVar1 != (void *)0x0)) {
    GetLastActivePopup(*(HWND *)((int)pvVar1 + 0x1c));
    pvVar1 = FUN_1000a19c();
    if (pvVar1 != (void *)0x0) {
      GetForegroundWindow();
      pvVar2 = FUN_1000a19c();
      if ((pvVar1 != pvVar2) && (iVar3 = FUN_10009c50((int)pvVar1), iVar3 != 0)) {
        SetForegroundWindow(*(HWND *)((int)pvVar1 + 0x1c));
        return 1;
      }
    }
  }
  return 0;
}



// ============================================================
// FUN_10009fdb @ 0x10009fdb 170B
// ============================================================

undefined4 FUN_10009fdb(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_100031c0();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc0;
  iVar2 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar2;
  puVar5 = (undefined4 *)(iVar2 + 0x34);
  puVar6 = (undefined4 *)(unaff_EBP + -0x40);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar4 = *(int *)(unaff_EBP + 0x10);
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(unaff_EBP + 0x14);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x18);
  *(int *)(iVar2 + 0x38) = iVar4;
  *(undefined4 *)(iVar2 + 0x40) = uVar3;
  if ((iVar4 == 2) && ((int *)piVar1[0xd] != (int *)0x0)) {
    (**(code **)(*(int *)piVar1[0xd] + 0x5c))(0);
  }
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar4 == 0x110) {
    FUN_10009e68((int)piVar1,(LPRECT)(unaff_EBP + -0x24),(undefined4 *)(unaff_EBP + 8));
  }
  uVar3 = (**(code **)(*piVar1 + 0x98))
                    (iVar4,*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18));
  *(undefined4 *)(unaff_EBP + 0x18) = uVar3;
  if (iVar4 == 0x110) {
    FUN_10009e8b(piVar1,(int *)(unaff_EBP + -0x24),*(uint *)(unaff_EBP + 8));
    uVar3 = FUN_1000a0af();
    return uVar3;
  }
  uVar3 = *(undefined4 *)(unaff_EBP + 0x18);
  puVar5 = (undefined4 *)(unaff_EBP + -0x40);
  puVar6 = (undefined4 *)(iVar2 + 0x34);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



// ============================================================
// Catch@1000a085 @ 0x1000a085 39B
// ============================================================

undefined * Catch_1000a085(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pCVar1 = AfxGetThread();
  uVar2 = (**(code **)(*(int *)pCVar1 + 0x6c))
                    (*(undefined4 *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x14) + 0x34);
  *(undefined4 *)(unaff_EBP + 0x18) = uVar2;
  FUN_10009788(*(int **)(unaff_EBP + 0xc));
  return &DAT_1000a0ac;
}



// ============================================================
// FUN_1000a0af @ 0x1000a0af 31B
// ============================================================

undefined4 FUN_1000a0af(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(undefined4 *)(unaff_EBP + 0x18);
  puVar3 = (undefined4 *)(unaff_EBP + -0x40);
  puVar4 = (undefined4 *)(unaff_EBX + 0x34);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}



// ============================================================
// FUN_1000a0ce @ 0x1000a0ce 53B
// ============================================================

int FUN_1000a0ce(void)

{
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  
  iVar1 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
  LVar2 = GetMessageTime();
  *(LONG *)(iVar1 + 0x44) = LVar2;
  DVar3 = GetMessagePos();
  *(int *)(iVar1 + 0x48) = (int)(short)DVar3;
  *(int *)(iVar1 + 0x4c) = (int)(short)(DVar3 >> 0x10);
  return iVar1 + 0x34;
}



// ============================================================
// FUN_1000a103 @ 0x1000a103 39B
// ============================================================

void __fastcall FUN_1000a103(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
  (**(code **)(*param_1 + 0xa0))
            (*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c),
             *(undefined4 *)(iVar1 + 0x40));
  return;
}



// ============================================================
// FUN_1000a12a @ 0x1000a12a 114B
// ============================================================

undefined4 FUN_1000a12a(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_100031c0();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x14) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    puVar2 = FUN_100087c9(&LAB_1000c6a5);
    pvVar3 = FUN_100087db(0x48);
    *(void **)(unaff_EBP + 8) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_100095f3();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 **)(pAVar1 + 0x14) = puVar4;
    FUN_100087c9(puVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x14);
}



// ============================================================
// FUN_1000a19c @ 0x1000a19c 39B
// ============================================================

void * FUN_1000a19c(void)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_1000a12a();
  this = (void *)FUN_10009658();
  FUN_10009cb3(this,iVar1);
  return this;
}



// ============================================================
// FUN_1000a1c3 @ 0x1000a1c3 30B
// ============================================================

undefined4 FUN_1000a1c3(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1000a12a();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_1000868a((void *)(iVar1 + 4),param_1);
  }
  return uVar2;
}



// ============================================================
// FUN_1000a1e1 @ 0x1000a1e1 57B
// ============================================================

bool __thiscall FUN_1000a1e1(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_1000a12a();
    *(uint *)((int)this + 0x1c) = param_1;
    puVar2 = FUN_100086bd((void *)(iVar1 + 4),param_1);
    *puVar2 = this;
    FUN_10009cb3(this,iVar1);
  }
  return param_1 != 0;
}



// ============================================================
// Detach @ 0x1000a21a 46B
// ============================================================

/* Library Function - Single Match
    public: struct HWND__ * __thiscall CWnd::Detach(void)
   
   Library: Visual Studio */

HWND__ * __thiscall CWnd::Detach(CWnd *this)

{
  HWND__ *pHVar1;
  int iVar2;
  
  pHVar1 = *(HWND__ **)(this + 0x1c);
  if (pHVar1 != (HWND__ *)0x0) {
    iVar2 = FUN_1000a12a();
    if (iVar2 != 0) {
      FUN_1000870d((void *)(iVar2 + 4),*(uint *)(this + 0x1c));
    }
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x38) = 0;
  return pHVar1;
}



// ============================================================
// FUN_1000a249 @ 0x1000a249 47B
// ============================================================

undefined4 FUN_1000a249(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x360) {
    uVar1 = 1;
  }
  else {
    FUN_1000a1c3(param_1);
    uVar1 = FUN_10009fdb();
  }
  return uVar1;
}



// ============================================================
// FUN_1000a27e @ 0x1000a27e 291B
// ============================================================

undefined4 FUN_1000a27e(void)

{
  HWND hWnd;
  ATOM nAtom;
  HANDLE pvVar1;
  int *piVar2;
  LRESULT LVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  int unaff_EBP;
  bool bVar7;
  
  FUN_100031c0();
  hWnd = *(HWND *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb4;
  pvVar1 = GetPropA(hWnd,"AfxOldWndProc423");
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(HANDLE *)(unaff_EBP + -0x18) = pvVar1;
  iVar5 = *(int *)(unaff_EBP + 0xc);
  bVar7 = true;
  if (iVar5 == 6) {
    pvVar4 = FUN_1000a19c();
    pvVar6 = FUN_1000a19c();
    FUN_10009f04((int)pvVar6,*(WPARAM *)(unaff_EBP + 0x10),(int)pvVar4);
LAB_1000a382:
    if (!bVar7) goto LAB_1000a30f;
  }
  else {
    if (iVar5 == 0x20) {
      pvVar4 = FUN_1000a19c();
      iVar5 = FUN_10009f65((int)pvVar4,(int)*(short *)(unaff_EBP + 0x14),
                           *(uint *)(unaff_EBP + 0x14) >> 0x10);
      bVar7 = iVar5 == 0;
      goto LAB_1000a382;
    }
    if (iVar5 == 0x82) {
      SetWindowLongA(hWnd,-4,*(LONG *)(unaff_EBP + -0x18));
      RemovePropA(hWnd,"AfxOldWndProc423");
      nAtom = GlobalFindAtomA("AfxOldWndProc423");
      GlobalDeleteAtom(nAtom);
    }
    else if (iVar5 == 0x110) {
      piVar2 = FUN_1000a19c();
      FUN_10009e68((int)piVar2,(LPRECT)(unaff_EBP + -0x30),(undefined4 *)(unaff_EBP + -0x1c));
      LVar3 = CallWindowProcA(*(WNDPROC *)(unaff_EBP + -0x18),hWnd,0x110,
                              *(WPARAM *)(unaff_EBP + 0x10),*(LPARAM *)(unaff_EBP + 0x14));
      *(LRESULT *)(unaff_EBP + -0x14) = LVar3;
      FUN_10009e8b(piVar2,(int *)(unaff_EBP + -0x30),*(uint *)(unaff_EBP + -0x1c));
      goto LAB_1000a30f;
    }
  }
  LVar3 = CallWindowProcA(*(WNDPROC *)(unaff_EBP + -0x18),hWnd,*(UINT *)(unaff_EBP + 0xc),
                          *(WPARAM *)(unaff_EBP + 0x10),*(LPARAM *)(unaff_EBP + 0x14));
  *(LRESULT *)(unaff_EBP + -0x14) = LVar3;
LAB_1000a30f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}



// ============================================================
// Catch@1000a3a1 @ 0x1000a3a1 60B
// ============================================================

undefined4 Catch_1000a3a1(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x48) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + 0x14);
  pCVar1 = AfxGetThread();
  uVar2 = (**(code **)(*(int *)pCVar1 + 0x6c))(*(undefined4 *)(unaff_EBP + -0x20),unaff_EBP + -0x4c)
  ;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  FUN_10009788(*(int **)(unaff_EBP + -0x20));
  return 0x1000a30f;
}



// ============================================================
// FUN_1000a3dd @ 0x1000a3dd 124B
// ============================================================

undefined4 FUN_1000a3dd(undefined4 param_1,int param_2,HDC param_3,HWND param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1000db41();
  if (((*(HANDLE *)(iVar1 + 4) != (HANDLE)0x0) &&
      ((((param_2 == 0x135 || (param_2 == 0x136)) || (param_2 == 0x138)) ||
       ((param_2 == 0x137 || (param_2 == 0x134)))))) &&
     (iVar2 = FUN_1000bd0b(param_3,param_4,param_2 + -0x132,*(HANDLE *)(iVar1 + 4),
                           *(COLORREF *)(iVar1 + 8)), iVar2 != 0)) {
    return *(undefined4 *)(iVar1 + 4);
  }
  uVar3 = FUN_1000a27e();
  return uVar3;
}



// ============================================================
// FUN_1000a459 @ 0x1000a459 502B
// ============================================================

LRESULT FUN_1000a459(int param_1,HWND param_2,int *param_3)

{
  int *this;
  LRESULT LVar1;
  int iVar2;
  DWORD DVar3;
  int *lpString1;
  int iVar4;
  LONG *pLVar5;
  undefined *puVar6;
  undefined *puVar7;
  HANDLE hData;
  HANDLE pvVar8;
  code *dwNewLong;
  int local_14 [2];
  uint local_c;
  int local_8;
  
  local_8 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
  if (param_1 != 3) {
    LVar1 = CallNextHookEx(*(HHOOK *)(local_8 + 0x2c),param_1,(WPARAM)param_2,(LPARAM)param_3);
    return LVar1;
  }
  this = *(int **)(local_8 + 0x14);
  iVar4 = *param_3;
  iVar2 = FUN_1000def3();
  local_c = (uint)*(byte *)(iVar2 + 0x14);
  if ((this == (int *)0x0) && (((*(byte *)(iVar4 + 0x23) & 0x40) != 0 || (local_c != 0))))
  goto LAB_1000a622;
  if (DAT_10018204 != 0) {
    DVar3 = GetClassLongA(param_2,-0x1a);
    if ((DVar3 & 0x10000) != 0) goto LAB_1000a622;
    lpString1 = *(int **)(iVar4 + 0x28);
    if ((short)((uint)lpString1 >> 0x10) == 0) {
      local_14[0] = CONCAT31(local_14[0]._1_3_,(byte)local_14[0] & (byte)((uint)lpString1 >> 0x10));
      GlobalGetAtomNameA(*(ATOM *)(iVar4 + 0x28),(LPSTR)local_14,5);
      lpString1 = local_14;
    }
    iVar4 = lstrcmpiA((LPCSTR)lpString1,"ime");
    if (iVar4 == 0) goto LAB_1000a622;
  }
  if (this == (int *)0x0) {
    hData = (HANDLE)GetWindowLongA(param_2,-4);
    if ((hData != (HANDLE)0x0) &&
       (pvVar8 = GetPropA(param_2,"AfxOldWndProc423"), pvVar8 == (HANDLE)0x0)) {
      SetPropA(param_2,"AfxOldWndProc423",hData);
      pvVar8 = GetPropA(param_2,"AfxOldWndProc423");
      if (pvVar8 == hData) {
        GlobalAddAtomA("AfxOldWndProc423");
        dwNewLong = FUN_1000a3dd;
        if (*(int *)(local_8 + 0x28) == 0) {
          dwNewLong = FUN_1000a27e;
        }
        SetWindowLongA(param_2,-4,(LONG)dwNewLong);
      }
    }
    goto LAB_1000a622;
  }
  FUN_1000a1e1(this,(uint)param_2);
  (**(code **)(*this + 0x50))();
  pLVar5 = (LONG *)(**(code **)(*this + 0x80))();
  iVar4 = DAT_10018200;
  if ((((DAT_100181ec == 0) && (local_c == 0)) && (DAT_10018200 != 0)) &&
     ((*(int *)(DAT_10018200 + 0x20) != 0 && (local_14[0] = FUN_10009fdb(), local_14[0] != 0)))) {
    puVar6 = FUN_1000a278();
    puVar7 = (undefined *)GetWindowLongA(param_2,-4);
    (**(code **)(iVar4 + 0x20))(param_2,local_14[0]);
    if (puVar7 != puVar6) {
      puVar7 = (undefined *)SetWindowLongA(param_2,-4,(LONG)puVar6);
LAB_1000a5b6:
      *pLVar5 = (LONG)puVar7;
    }
  }
  else {
    puVar6 = FUN_1000a278();
    puVar7 = (undefined *)SetWindowLongA(param_2,-4,(LONG)puVar6);
    if (puVar7 != puVar6) goto LAB_1000a5b6;
  }
  *(undefined4 *)(local_8 + 0x14) = 0;
LAB_1000a622:
  iVar4 = local_8;
  LVar1 = CallNextHookEx(*(HHOOK *)(local_8 + 0x2c),3,(WPARAM)param_2,(LPARAM)param_3);
  if (local_c != 0) {
    UnhookWindowsHookEx(*(HHOOK *)(iVar4 + 0x2c));
    *(undefined4 *)(iVar4 + 0x2c) = 0;
  }
  return LVar1;
}



// ============================================================
// FUN_1000a64f @ 0x1000a64f 76B
// ============================================================

void FUN_1000a64f(int param_1)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  
  iVar1 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
  if (*(int *)(iVar1 + 0x14) != param_1) {
    if (*(int *)(iVar1 + 0x2c) == 0) {
      dwThreadId = GetCurrentThreadId();
      pHVar2 = SetWindowsHookExA(5,FUN_1000a459,(HINSTANCE)0x0,dwThreadId);
      *(HHOOK *)(iVar1 + 0x2c) = pHVar2;
      if (pHVar2 == (HHOOK)0x0) {
        FUN_1000846a();
      }
    }
    *(int *)(iVar1 + 0x14) = param_1;
  }
  return;
}



// ============================================================
// FUN_1000a69b @ 0x1000a69b 66B
// ============================================================

undefined4 FUN_1000a69b(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
  iVar2 = FUN_1000def3();
  if ((*(char *)(iVar2 + 0x14) != '\0') && (*(HHOOK *)(iVar1 + 0x2c) != (HHOOK)0x0)) {
    UnhookWindowsHookEx(*(HHOOK *)(iVar1 + 0x2c));
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    return 0;
  }
  return 1;
}



// ============================================================
// FUN_1000a6dd @ 0x1000a6dd 198B
// ============================================================

bool __thiscall
FUN_1000a6dd(void *this,DWORD param_1,LPCSTR param_2,LPCSTR param_3,DWORD param_4,int param_5,
            int param_6,int param_7,int param_8,HWND param_9,HMENU param_10,LPVOID param_11)

{
  int iVar1;
  HWND pHVar2;
  bool bVar3;
  LPVOID local_34;
  HINSTANCE local_30;
  HMENU local_2c;
  HWND local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  DWORD local_14;
  LPCSTR local_10;
  LPCSTR local_c;
  DWORD local_8;
  
  local_8 = param_1;
  local_c = param_2;
  local_10 = param_3;
  local_14 = param_4;
  local_18 = param_5;
  local_1c = param_6;
  local_20 = param_7;
  local_24 = param_8;
  local_28 = param_9;
  local_2c = param_10;
  iVar1 = FUN_1000def3();
  local_30 = *(HINSTANCE *)(iVar1 + 8);
  local_34 = param_11;
  iVar1 = (**(code **)(*(int *)this + 0x5c))(&local_34);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0xa4))();
    bVar3 = false;
  }
  else {
    FUN_1000a64f((int)this);
    pHVar2 = CreateWindowExA(local_8,local_c,local_10,local_14,local_18,local_1c,local_20,local_24,
                             local_28,local_2c,local_30,local_34);
    iVar1 = FUN_1000a69b();
    if (iVar1 == 0) {
      (**(code **)(*(int *)this + 0xa4))();
    }
    bVar3 = pHVar2 != (HWND)0x0;
  }
  return bVar3;
}



// ============================================================
// FUN_1000a7a3 @ 0x1000a7a3 32B
// ============================================================

undefined4 FUN_1000a7a3(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_1000c018(1);
    *(char **)(param_1 + 0x28) = "AfxWnd42s";
  }
  return 1;
}



// ============================================================
// FUN_1000a7c3 @ 0x1000a7c3 76B
// ============================================================

void __thiscall
FUN_1000a7c3(void *this,LPCSTR param_1,LPCSTR param_2,uint param_3,int *param_4,int param_5,
            HMENU param_6,LPVOID param_7)

{
  HWND pHVar1;
  
  if (param_5 == 0) {
    pHVar1 = (HWND)0x0;
  }
  else {
    pHVar1 = *(HWND *)(param_5 + 0x1c);
  }
  FUN_1000a6dd(this,0,param_1,param_2,param_3 | 0x40000000,*param_4,param_4[1],param_4[2] - *param_4
               ,param_4[3] - param_4[1],pHVar1,param_6,param_7);
  return;
}



// ============================================================
// ~CWnd @ 0x1000a80f 124B
// ============================================================

/* Library Function - Single Match
    public: virtual __thiscall CWnd::~CWnd(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CWnd::~CWnd(CWnd *this)

{
  int iVar1;
  CWnd *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(CWnd **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined ***)extraout_ECX = &PTR_LAB_1000fe78;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((((*(int *)(extraout_ECX + 0x1c) != 0) && (extraout_ECX != (CWnd *)&DAT_10018130)) &&
      (extraout_ECX != (CWnd *)&DAT_100180f0)) &&
     ((extraout_ECX != (CWnd *)&DAT_100180b0 && (extraout_ECX != (CWnd *)&DAT_10018070)))) {
    FUN_1000a9cc(extraout_ECX);
  }
  if (*(int **)(extraout_ECX + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x34) + 4))(1);
  }
  iVar1 = *(int *)(extraout_ECX + 0x38);
  if ((iVar1 != 0) && (*(CWnd **)(iVar1 + 0x24) == extraout_ECX)) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_10009058();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000a88b @ 0x1000a88b 30B
// ============================================================

void __fastcall FUN_1000a88b(int *param_1)

{
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))(1);
  }
  param_1[0xd] = 0;
  FUN_1000a103(param_1);
  return;
}



// ============================================================
// FUN_1000a8a9 @ 0x1000a8a9 274B
// ============================================================

void __fastcall FUN_1000a8a9(CWnd *param_1)

{
  bool bVar1;
  CWinThread *pCVar2;
  int iVar3;
  undefined3 extraout_var;
  LONG LVar4;
  LONG LVar5;
  int *piVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  pCVar2 = AfxGetThread();
  if (pCVar2 == (CWinThread *)0x0) goto LAB_1000a8f4;
  if (*(CWnd **)(pCVar2 + 0x1c) == param_1) {
    iVar3 = FUN_1000def3();
    if (*(char *)(iVar3 + 0x14) == '\0') {
      iVar3 = FUN_1000def3();
      if (pCVar2 == *(CWinThread **)(iVar3 + 4)) {
        bVar1 = FUN_1000d033();
        if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_1000a8e9;
      }
      AfxPostQuitMessage(0);
    }
LAB_1000a8e9:
    *(undefined4 *)(pCVar2 + 0x1c) = 0;
  }
  if (*(CWnd **)(pCVar2 + 0x20) == param_1) {
    *(undefined4 *)(pCVar2 + 0x20) = 0;
  }
LAB_1000a8f4:
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x50))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (((byte)param_1[0x24] & 1) != 0) {
    iVar3 = FUN_1000dcc6();
    iVar3 = *(int *)(iVar3 + 0xcc);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) != 0)) {
      _memset(&local_30,0,0x2c);
      local_28 = *(undefined4 *)(param_1 + 0x1c);
      local_30 = 0x28;
      local_2c = 1;
      local_24 = local_28;
      SendMessageA(*(HWND *)(iVar3 + 0x1c),0x405,0,(LPARAM)&local_30);
    }
  }
  LVar4 = GetWindowLongA(*(HWND *)(param_1 + 0x1c),-4);
  FUN_1000a103((int *)param_1);
  LVar5 = GetWindowLongA(*(HWND *)(param_1 + 0x1c),-4);
  if (LVar5 == LVar4) {
    piVar6 = (int *)(**(code **)(*(int *)param_1 + 0x80))();
    if (*piVar6 != 0) {
      SetWindowLongA(*(HWND *)(param_1 + 0x1c),-4,*piVar6);
    }
  }
  CWnd::Detach(param_1);
  (**(code **)(*(int *)param_1 + 0xa4))();
  return;
}



// ============================================================
// FUN_1000a9cc @ 0x1000a9cc 77B
// ============================================================

BOOL __fastcall FUN_1000a9cc(CWnd *param_1)

{
  int iVar1;
  BOOL BVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  iVar1 = FUN_1000a12a();
  iVar1 = FUN_1000868a((void *)(iVar1 + 4),*(uint *)(param_1 + 0x1c));
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    BVar2 = DestroyWindow(*(HWND *)(param_1 + 0x1c));
  }
  else {
    BVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x50))();
  }
  if (iVar1 == 0) {
    CWnd::Detach(param_1);
  }
  return BVar2;
}



// ============================================================
// FUN_1000aa19 @ 0x1000aa19 71B
// ============================================================

void __thiscall FUN_1000aa19(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  int *piVar1;
  WNDPROC lpPrevWndFunc;
  
  lpPrevWndFunc = *(WNDPROC *)((int)this + 0x28);
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x80))();
    lpPrevWndFunc = (WNDPROC)*piVar1;
    if (lpPrevWndFunc == (WNDPROC)0x0) {
      DefWindowProcA(*(HWND *)((int)this + 0x1c),param_1,param_2,param_3);
      return;
    }
  }
  CallWindowProcA(lpPrevWndFunc,*(HWND *)((int)this + 0x1c),param_1,param_2,param_3);
  return;
}



// ============================================================
// FUN_1000aa64 @ 0x1000aa64 31B
// ============================================================

undefined4 __thiscall FUN_1000aa64(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000def3();
  if (*(code **)(iVar1 + 0x1034) != (code *)0x0) {
    (**(code **)(iVar1 + 0x1034))(param_1,this);
  }
  return 0;
}



// ============================================================
// FUN_1000aada @ 0x1000aada 113B
// ============================================================

uint __thiscall FUN_1000aada(void *this,LONG param_1,LONG param_2,uint *param_3)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  
  hWnd = FUN_1000c589(*(HWND *)((int)this + 0x1c),param_1,param_2);
  if (hWnd == (HWND)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = GetDlgCtrlID(hWnd);
    uVar1 = uVar1 & 0xffff;
    if ((param_3 != (uint *)0x0) && (0x27 < *param_3)) {
      uVar2 = *(uint *)((int)this + 0x1c);
      param_3[1] = param_3[1] | 1;
      param_3[9] = 0xffffffff;
      param_3[2] = uVar2;
      param_3[3] = (uint)hWnd;
      uVar2 = SendMessageA(hWnd,0x87,0,0);
      if ((uVar2 & 0x2000) == 0) {
        param_3[1] = param_3[1] | 0x80000002;
      }
    }
  }
  return uVar1;
}



// ============================================================
// FUN_1000ab4b @ 0x1000ab4b 61B
// ============================================================

void __thiscall FUN_1000ab4b(void *this,undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 == 1) {
    piVar1 = (int *)FUN_1000c4ce(param_2[5]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(param_2);
      return;
    }
  }
  else {
    iVar2 = FUN_1000b851();
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_1000a103(this);
  return;
}



// ============================================================
// FUN_1000ab88 @ 0x1000ab88 42B
// ============================================================

undefined4 __thiscall FUN_1000ab88(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000b851();
  if (iVar1 == 0) {
    param_2 = FUN_1000a103(this);
  }
  return param_2;
}



// ============================================================
// FUN_1000abd2 @ 0x1000abd2 43B
// ============================================================

void * __thiscall FUN_1000abd2(void *this,undefined4 param_1,void *param_2)

{
  int iVar1;
  
  if ((param_2 == (void *)0x0) || (iVar1 = FUN_1000b824(param_2,&param_2), iVar1 == 0)) {
    param_2 = (void *)FUN_1000a103(this);
  }
  return param_2;
}



// ============================================================
// FUN_1000acd8 @ 0x1000acd8 145B
// ============================================================

undefined4 FUN_1000acd8(void)

{
  WNDCLASSA *lpWndClass;
  ATOM AVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_100031c0();
  lpWndClass = *(WNDCLASSA **)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  BVar2 = GetClassInfoA(lpWndClass->hInstance,lpWndClass->lpszClassName,
                        (LPWNDCLASSA)(unaff_EBP + -0x38));
  if (BVar2 == 0) {
    AVar1 = RegisterClassA(lpWndClass);
    if (AVar1 == 0) {
      uVar3 = 0;
      goto LAB_1000ad58;
    }
    iVar4 = FUN_1000def3();
    if (*(char *)(iVar4 + 0x14) != '\0') {
      FUN_1000e216(1);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_1000def3();
      lstrcatA((LPSTR)(iVar4 + 0x34),lpWndClass->lpszClassName);
      *(undefined1 *)(unaff_EBP + 10) = 10;
      *(undefined1 *)(unaff_EBP + 0xb) = 0;
      lstrcatA((LPSTR)(iVar4 + 0x34),(LPCSTR)(unaff_EBP + 10));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_1000e286(1);
    }
  }
  uVar3 = 1;
LAB_1000ad58:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



// ============================================================
// Catch@1000ad69 @ 0x1000ad69 86B
// ============================================================

void Catch_1000ad69(undefined4 param_1,undefined4 param_2)

{
  int *extraout_ECX;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_1000e286(1);
  local_c = 0x1000ad79;
  __CxxThrowException_8(0,0);
  local_c = param_1;
  local_10 = param_2;
  FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
  (**(code **)(*extraout_ECX + 0x98))(0x19,0,&local_10);
  return;
}



// ============================================================
// FUN_1000adbf @ 0x1000adbf 226B
// ============================================================

void FUN_1000adbf(void)

{
  int iVar1;
  void *pvVar2;
  HWND hWnd;
  BOOL BVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  iVar1 = FUN_1000def3();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar1 + 4);
  FUN_1000def3();
  FUN_100092a7();
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = (**(code **)(iVar1 + 0xb0))();
  if (iVar1 != 0) {
    (**(code **)(*extraout_ECX + 0xf0))();
  }
  SendMessageA((HWND)extraout_ECX[7],0x1f,0,0);
  FUN_1000b735((HWND)extraout_ECX[7],0x1f,0,0,1,1);
  pvVar2 = FUN_1000b653((int)extraout_ECX);
  SendMessageA(*(HWND *)((int)pvVar2 + 0x1c),0x1f,0,0);
  FUN_1000b735(*(HWND *)((int)pvVar2 + 0x1c),0x1f,0,0,1,1);
  hWnd = GetCapture();
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x1f,0,0);
  }
  BVar3 = WinHelpA(*(HWND *)((int)pvVar2 + 0x1c),*(LPCSTR *)(*(int *)(unaff_EBP + -0x10) + 0x8c),
                   *(UINT *)(unaff_EBP + 0xc),*(ULONG_PTR *)(unaff_EBP + 8));
  if (BVar3 == 0) {
    FUN_1000cebd();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1000def3();
  FUN_100092bc();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// AfxFindMessageEntry @ 0x1000aea7 64B
// ============================================================

/* Library Function - Single Match
    struct AFX_MSGMAP_ENTRY const * __stdcall AfxFindMessageEntry(struct AFX_MSGMAP_ENTRY const
   *,unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio */

AFX_MSGMAP_ENTRY *
AfxFindMessageEntry(AFX_MSGMAP_ENTRY *param_1,uint param_2,uint param_3,uint param_4)

{
  while( true ) {
    if (*(int *)(param_1 + 0x10) == 0) {
      return (AFX_MSGMAP_ENTRY *)0x0;
    }
    if ((((param_2 == *(uint *)param_1) && (param_3 == *(uint *)(param_1 + 4))) &&
        (*(uint *)(param_1 + 8) <= param_4)) && (param_4 <= *(uint *)(param_1 + 0xc))) break;
    param_1 = param_1 + 0x18;
  }
  return param_1;
}



// ============================================================
// FUN_1000aee7 @ 0x1000aee7 68B
// ============================================================

undefined4 __thiscall
FUN_1000aee7(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x9c))(param_1,param_2,param_3,&local_8);
  if (iVar1 == 0) {
    local_8 = (**(code **)(*(int *)this + 0xa0))(param_1,param_2,param_3);
  }
  return local_8;
}



// ============================================================
// FUN_1000af2b @ 0x1000af2b 1198B
// ============================================================

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_1000af2b(void)

{
  short sVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  AFX_MSGMAP_ENTRY *pAVar6;
  DWORD DVar7;
  uint *puVar8;
  void *pvVar9;
  int *extraout_ECX;
  uint *puVar10;
  uint uVar11;
  code *pcVar12;
  int unaff_EBP;
  short sVar13;
  undefined4 uVar14;
  
  FUN_100031c0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == 0x111) {
    iVar2 = (**(code **)(*extraout_ECX + 0x78))
                      (*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar2 != 0) {
LAB_1000b381:
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      goto switchD_1000b0ff_caseD_26;
    }
LAB_1000b0b4:
    uVar14 = 0;
    goto LAB_1000b0b6;
  }
  if (iVar2 == 0x4e) {
    if (**(int **)(unaff_EBP + 0x10) != 0) {
      iVar2 = (**(code **)(*extraout_ECX + 0x7c))
                        (*(undefined4 *)(unaff_EBP + 0xc),*(int **)(unaff_EBP + 0x10),
                         unaff_EBP + -0x10);
LAB_1000af84:
      if (iVar2 != 0) goto switchD_1000b0ff_caseD_26;
    }
    goto LAB_1000b0b4;
  }
  puVar8 = *(uint **)(unaff_EBP + 0x10);
  if (iVar2 == 6) {
    pvVar3 = FUN_1000a19c();
    FUN_10009f04((int)extraout_ECX,*(WPARAM *)(unaff_EBP + 0xc),(int)pvVar3);
  }
  sVar13 = (short)puVar8;
  if ((iVar2 == 0x20) &&
     (iVar2 = FUN_10009f65((int)extraout_ECX,(int)sVar13,(uint)puVar8 >> 0x10), iVar2 != 0))
  goto LAB_1000b381;
  uVar4 = (**(code **)(*extraout_ECX + 0x28))();
  *(uint *)(unaff_EBP + -0x14) = uVar4;
  uVar11 = uVar4 & 0x1ff ^ *(uint *)(unaff_EBP + 8) & 0x1ff;
  FUN_1000e216(7);
  uVar4 = *(uint *)(unaff_EBP + 8);
  iVar2 = uVar11 * 0xc;
  iVar5 = *(int *)(unaff_EBP + -0x14);
  if ((uVar4 != *(uint *)(&DAT_10016848 + uVar11 * 0xc)) ||
     (iVar5 != *(int *)(&DAT_10016850 + iVar2))) {
    *(uint *)(&DAT_10016848 + iVar2) = uVar4;
    *(int *)(&DAT_10016850 + iVar2) = iVar5;
    if (iVar5 != 0) {
      while( true ) {
        if (uVar4 < 0xc000) {
          pAVar6 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(iVar5 + 4),uVar4,0,0);
          *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
          if (pAVar6 != (AFX_MSGMAP_ENTRY *)0x0) {
            *(AFX_MSGMAP_ENTRY **)(&DAT_1001684c + iVar2) = pAVar6;
            FUN_1000e286(7);
            iVar2 = *(int *)(unaff_EBP + 0x10);
            goto LAB_1000b0d4;
          }
        }
        else {
          pAVar6 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(iVar5 + 4),0xc000,0,0);
          *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
          if (pAVar6 != (AFX_MSGMAP_ENTRY *)0x0) {
            while( true ) {
              if (**(int **)(pAVar6 + 0x10) == *(int *)(unaff_EBP + 8)) {
                *(AFX_MSGMAP_ENTRY **)(&DAT_1001684c + iVar2) = pAVar6;
                FUN_1000e286(7);
                iVar2 = *(int *)(unaff_EBP + 0x10);
                goto LAB_1000b3b7;
              }
              pAVar6 = AfxFindMessageEntry(pAVar6 + 0x18,0xc000,0,0);
              *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
              if (pAVar6 == (AFX_MSGMAP_ENTRY *)0x0) break;
              pAVar6 = *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10);
            }
          }
        }
        iVar5 = **(int **)(unaff_EBP + -0x14);
        *(int *)(unaff_EBP + -0x14) = iVar5;
        if (iVar5 == 0) break;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar4 = *(uint *)(unaff_EBP + 8);
      }
    }
    *(undefined4 *)(&DAT_1001684c + iVar2) = 0;
    FUN_1000e286(7);
    goto LAB_1000b0b4;
  }
  iVar2 = *(int *)(&DAT_1001684c + iVar2);
  *(int *)(unaff_EBP + 0x10) = iVar2;
  FUN_1000e286(7);
  if (iVar2 == 0) goto LAB_1000b0b4;
  if (0xbfff < *(uint *)(unaff_EBP + 8)) {
LAB_1000b3b7:
    pcVar12 = *(code **)(iVar2 + 0x14);
switchD_1000b0ff_caseD_a:
    pvVar3 = *(void **)(unaff_EBP + 0xc);
    goto LAB_1000b3be;
  }
LAB_1000b0d4:
  iVar5 = *(int *)(unaff_EBP + 0x10);
  pcVar12 = *(code **)(iVar2 + 0x14);
  iVar2 = *(int *)(iVar5 + 0x10);
  if (*(int *)(iVar5 + 8) == 0x1a) {
    DVar7 = GetVersion();
    iVar5 = *(int *)(unaff_EBP + 0x10);
    iVar2 = (-(uint)((byte)DVar7 < 4) & 0xfffffff0) + 0x2f;
  }
  sVar1 = (short)((uint)puVar8 >> 0x10);
  switch(iVar2) {
  case 1:
    puVar8 = (uint *)FUN_1000c799();
    goto LAB_1000b20f;
  case 2:
    puVar8 = *(uint **)(unaff_EBP + 0xc);
    goto LAB_1000b20f;
  case 3:
  case 8:
    uVar4 = (uint)puVar8 >> 0x10;
    pvVar3 = (void *)(int)sVar13;
    pvVar9 = FUN_1000a19c();
    goto LAB_1000b22a;
  case 4:
    FUN_1000c6f7((undefined4 *)(unaff_EBP + -0x24));
    uVar4 = puVar8[1];
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(uint *)(unaff_EBP + -0x20) = uVar4;
    FUN_10009dfe((undefined4 *)(unaff_EBP + -0x60));
    uVar4 = *puVar8;
    uVar11 = puVar8[2];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(uint *)(unaff_EBP + -0x44) = uVar4;
    iVar2 = FUN_1000a1c3(uVar4);
    if (iVar2 == 0) {
      if ((extraout_ECX[0xd] != 0) &&
         (iVar2 = FUN_1000868a((void *)(extraout_ECX[0xd] + 0x20),*(uint *)(unaff_EBP + -0x44)),
         iVar2 != 0)) {
        *(int *)(unaff_EBP + -0x28) = iVar2;
      }
      iVar2 = unaff_EBP + -0x60;
    }
    uVar14 = (*pcVar12)(unaff_EBP + -0x24,iVar2,uVar11);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar14;
    CWnd::~CWnd((CWnd *)(unaff_EBP + -0x60));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_1000b1e5;
  case 5:
    FUN_1000c6f7((undefined4 *)(unaff_EBP + -0x24));
    uVar4 = puVar8[2];
    *(uint *)(unaff_EBP + -0x20) = puVar8[1];
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uVar14 = (*pcVar12)(unaff_EBP + -0x24,uVar4);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar14;
LAB_1000b1e5:
    FUN_1000c7df();
    break;
  case 6:
    uVar4 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
    pvVar3 = FUN_1000a19c();
    goto LAB_1000b225;
  case 7:
    puVar8 = (uint *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    pvVar3 = (void *)(uint)*(ushort *)(unaff_EBP + 0xc);
    goto LAB_1000b3be;
  case 9:
  case 0x2a:
LAB_1000b20f:
    uVar14 = (*pcVar12)(puVar8);
LAB_1000b3c2:
    *(undefined4 *)(unaff_EBP + -0x10) = uVar14;
    break;
  case 10:
  case 0x21:
    goto switchD_1000b0ff_caseD_a;
  case 0xb:
    uVar4 = FUN_1000c4b9();
    pvVar3 = (void *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
LAB_1000b225:
    pvVar9 = (void *)(uint)*(ushort *)(unaff_EBP + 0xc);
LAB_1000b22a:
    uVar14 = (*pcVar12)(pvVar9,pvVar3,uVar4);
    goto LAB_1000b3c2;
  case 0xc:
    (*pcVar12)();
    break;
  case 0xd:
    puVar8 = *(uint **)(unaff_EBP + 0xc);
    goto LAB_1000b34e;
  case 0xe:
  case 0x12:
  case 0x25:
  case 0x2f:
    goto LAB_1000b32e;
  case 0xf:
    puVar8 = (uint *)(int)sVar1;
    pvVar3 = (void *)(int)sVar13;
    goto LAB_1000b331;
  case 0x10:
  case 0x11:
    puVar10 = (uint *)((uint)puVar8 >> 0x10);
    pvVar3 = (void *)((uint)puVar8 & 0xffff);
    goto LAB_1000b36f;
  case 0x13:
    puVar10 = FUN_1000a19c();
    pvVar3 = FUN_1000a19c();
    pvVar9 = (void *)(uint)((uint *)extraout_ECX[7] == puVar8);
    goto LAB_1000b373;
  case 0x14:
    puVar8 = (uint *)FUN_1000c799();
    goto LAB_1000b34e;
  case 0x15:
    puVar8 = (uint *)FUN_1000c4b9();
    goto LAB_1000b34e;
  case 0x16:
    puVar10 = (uint *)((uint)puVar8 >> 0x10);
    pvVar3 = (void *)((uint)puVar8 & 0xffff);
    pvVar9 = (void *)FUN_1000c4b9();
    goto LAB_1000b373;
  case 0x17:
    goto LAB_1000b2b5;
  case 0x18:
    puVar10 = (uint *)((uint)puVar8 >> 0x10);
    pvVar3 = (void *)((uint)puVar8 & 0xffff);
    goto LAB_1000b2d1;
  case 0x19:
    pvVar3 = (void *)(int)sVar13;
    puVar10 = (uint *)(int)sVar1;
LAB_1000b2d1:
    pvVar9 = FUN_1000a19c();
    goto LAB_1000b373;
  case 0x1a:
    pvVar3 = FUN_1000a19c();
    goto LAB_1000b331;
  case 0x1b:
    puVar8 = FUN_1000a19c();
LAB_1000b32e:
    pvVar3 = *(void **)(unaff_EBP + 0xc);
    goto LAB_1000b331;
  case 0x1c:
    puVar10 = (uint *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    pvVar3 = FUN_1000a19c();
    goto LAB_1000b35b;
  case 0x1d:
  case 0x1e:
    pvVar3 = (void *)(int)(short)*(undefined4 *)(unaff_EBP + 0xc);
    iVar2 = *(int *)(iVar5 + 0x10);
    *(void **)(unaff_EBP + 8) = pvVar3;
    puVar8 = (uint *)(int)(short)((uint)*(undefined4 *)(unaff_EBP + 0xc) >> 0x10);
    *(uint **)(unaff_EBP + 0xc) = puVar8;
    if (iVar2 == 0x1d) {
      puVar10 = FUN_1000a19c();
      pvVar3 = *(void **)(unaff_EBP + 0xc);
      pvVar9 = *(void **)(unaff_EBP + 8);
      goto LAB_1000b373;
    }
LAB_1000b331:
    (*pcVar12)(pvVar3,puVar8);
    break;
  case 0x1f:
  case 0x24:
    goto LAB_1000b34e;
  case 0x20:
  case 0x2b:
    (*pcVar12)(*(undefined4 *)(unaff_EBP + 0xc),puVar8);
    goto LAB_1000b381;
  case 0x22:
    pvVar3 = (void *)(int)sVar13;
    puVar8 = (uint *)(int)sVar1;
    goto LAB_1000b3be;
  case 0x23:
    uVar14 = (*pcVar12)();
    goto LAB_1000b3c2;
  case 0x2c:
LAB_1000b2b5:
    puVar8 = FUN_1000a19c();
LAB_1000b34e:
    (*pcVar12)(puVar8);
    break;
  case 0x2d:
    pvVar3 = FUN_1000a19c();
LAB_1000b3be:
    uVar14 = (*pcVar12)(pvVar3,puVar8);
    goto LAB_1000b3c2;
  case 0x2e:
    iVar2 = (*pcVar12)(*(undefined2 *)(unaff_EBP + 0xc),*(uint *)(unaff_EBP + 0xc) >> 0x10,
                       (uint)puVar8 & 0xffff,(uint)puVar8 >> 0x10);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    goto LAB_1000af84;
  case 0x30:
    pvVar3 = (void *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    puVar10 = puVar8;
LAB_1000b35b:
    pvVar9 = (void *)(uint)*(ushort *)(unaff_EBP + 0xc);
    goto LAB_1000b373;
  case 0x31:
    pvVar3 = (void *)(int)sVar13;
    puVar10 = (uint *)(int)sVar1;
LAB_1000b36f:
    pvVar9 = *(void **)(unaff_EBP + 0xc);
LAB_1000b373:
    (*pcVar12)(pvVar9,pvVar3,puVar10);
  }
switchD_1000b0ff_caseD_26:
  if (*(undefined4 **)(unaff_EBP + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x10);
  }
  uVar14 = 1;
LAB_1000b0b6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar14;
}



// ============================================================
// FUN_1000b49d @ 0x1000b49d 25B
// ============================================================

CCmdUI * __fastcall FUN_1000b49d(CCmdUI *param_1)

{
  CCmdUI::CCmdUI(param_1);
  *(undefined ***)param_1 = &PTR_LAB_1000ff38;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return param_1;
}



// ============================================================
// FUN_1000b4ca @ 0x1000b4ca 140B
// ============================================================

undefined4 __thiscall FUN_1000b4ca(void *this,uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  CCmdUI local_30 [4];
  uint local_2c;
  int local_8;
  
  uVar3 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 == 0) {
    if (uVar3 == 0) {
      return 0;
    }
    FUN_1000b49d(local_30);
    local_2c = uVar3;
    (**(code **)(*(int *)this + 0xc))(uVar3,0xffffffff,local_30,0);
    if (local_8 != 0) {
      param_1 = 0;
LAB_1000b50e:
      uVar1 = (**(code **)(*(int *)this + 0xc))(uVar3,param_1,0,0);
      return uVar1;
    }
  }
  else {
    iVar2 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
    if ((*(int *)(iVar2 + 0xb8) != *(int *)((int)this + 0x1c)) &&
       (iVar2 = FUN_1000b851(), iVar2 == 0)) {
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_1000b50e;
    }
  }
  return 1;
}



// ============================================================
// FUN_1000b556 @ 0x1000b556 122B
// ============================================================

undefined4 __thiscall
FUN_1000b556(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = GetDlgCtrlID((HWND)*param_2);
  local_8 = local_8 & 0xffff;
  uVar1 = param_2[2];
  iVar2 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
  if ((*(int *)(iVar2 + 0xb8) != *(int *)((int)this + 0x1c)) && (iVar2 = FUN_1000b851(), iVar2 == 0)
     ) {
    local_10 = param_3;
    local_c = param_2;
    uVar3 = (**(code **)(*(int *)this + 0xc))(local_8,uVar1 & 0xffff | 0x4e0000,&local_10,0);
    return uVar3;
  }
  return 1;
}



// ============================================================
// FUN_1000b5d0 @ 0x1000b5d0 62B
// ============================================================

int * __fastcall FUN_1000b5d0(int param_1)

{
  int *piVar1;
  int iVar2;
  HWND hWnd;
  
  if ((param_1 != 0) && (hWnd = *(HWND *)(param_1 + 0x1c), hWnd != (HWND)0x0)) {
    while( true ) {
      GetParent(hWnd);
      piVar1 = FUN_1000a19c();
      if (piVar1 == (int *)0x0) break;
      iVar2 = (**(code **)(*piVar1 + 0xb0))();
      if (iVar2 != 0) {
        return piVar1;
      }
      hWnd = (HWND)piVar1[7];
    }
  }
  return (int *)0x0;
}



// ============================================================
// AfxGetParentOwner @ 0x1000b60e 69B
// ============================================================

/* Library Function - Single Match
    struct HWND__ * __stdcall AfxGetParentOwner(struct HWND__ *)
   
   Library: Visual Studio 2003 Release */

HWND__ * AfxGetParentOwner(HWND__ *param_1)

{
  CWnd *pCVar1;
  uint uVar2;
  HWND__ *pHVar3;
  
  pCVar1 = (CWnd *)FUN_1000a1c3((uint)param_1);
  if (pCVar1 == (CWnd *)0x0) {
    uVar2 = GetWindowLongA(param_1,-0x10);
    if ((uVar2 & 0x40000000) == 0) {
      pHVar3 = GetWindow(param_1,4);
    }
    else {
      pHVar3 = GetParent(param_1);
    }
  }
  else {
    pCVar1 = CWnd::GetOwner(pCVar1);
    pHVar3 = (HWND__ *)0x0;
    if (pCVar1 != (CWnd *)0x0) {
      pHVar3 = *(HWND__ **)(pCVar1 + 0x1c);
    }
  }
  return pHVar3;
}



// ============================================================
// FUN_1000b653 @ 0x1000b653 40B
// ============================================================

void * __fastcall FUN_1000b653(int param_1)

{
  HWND__ *pHVar1;
  void *pvVar2;
  
  if ((param_1 != 0) && (pHVar1 = *(HWND__ **)(param_1 + 0x1c), pHVar1 != (HWND__ *)0x0)) {
    do {
      pHVar1 = AfxGetParentOwner(pHVar1);
    } while (pHVar1 != (HWND__ *)0x0);
    pvVar2 = FUN_1000a19c();
    return pvVar2;
  }
  return (void *)0x0;
}



// ============================================================
// FUN_1000b67b @ 0x1000b67b 65B
// ============================================================

int * __fastcall FUN_1000b67b(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != (int *)0x0) && (param_1[7] != 0)) {
    iVar2 = (**(code **)(*param_1 + 0xb0))();
    piVar3 = param_1;
    if (iVar2 == 0) {
      param_1 = FUN_1000b5d0((int)param_1);
      piVar3 = param_1;
    }
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar3 = FUN_1000b5d0((int)piVar1);
      param_1 = piVar1;
    }
    return param_1;
  }
  return (int *)0x0;
}



// ============================================================
// FUN_1000b6bc @ 0x1000b6bc 121B
// ============================================================

void * FUN_1000b6bc(HWND param_1,int param_2,int param_3)

{
  HWND pHVar1;
  HWND pHVar2;
  void *pvVar3;
  
  pHVar1 = GetDlgItem(param_1,param_2);
  if (pHVar1 != (HWND)0x0) {
    pHVar2 = GetTopWindow(pHVar1);
    if ((pHVar2 != (HWND)0x0) &&
       (pvVar3 = FUN_1000b6bc(pHVar1,param_2,param_3), pvVar3 != (void *)0x0)) {
      return pvVar3;
    }
    if (param_3 == 0) {
      pvVar3 = FUN_1000a19c();
      return pvVar3;
    }
    pvVar3 = (void *)FUN_1000a1c3((uint)pHVar1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
  }
  pHVar1 = GetTopWindow(param_1);
  while( true ) {
    if (pHVar1 == (HWND)0x0) {
      return (void *)0x0;
    }
    pvVar3 = FUN_1000b6bc(pHVar1,param_2,param_3);
    if (pvVar3 != (void *)0x0) break;
    pHVar1 = GetWindow(pHVar1,2);
  }
  return pvVar3;
}



// ============================================================
// FUN_1000b735 @ 0x1000b735 125B
// ============================================================

void FUN_1000b735(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5,int param_6)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  
  for (hWnd = GetTopWindow(param_1); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    if (param_6 == 0) {
      SendMessageA(hWnd,param_2,param_3,param_4);
    }
    else {
      iVar1 = FUN_1000a1c3((uint)hWnd);
      if (iVar1 != 0) {
        FUN_10009fdb();
      }
    }
    if (param_5 != 0) {
      pHVar2 = GetTopWindow(hWnd);
      if (pHVar2 != (HWND)0x0) {
        FUN_1000b735(hWnd,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}



// ============================================================
// FUN_1000b7b7 @ 0x1000b7b7 43B
// ============================================================

void __thiscall FUN_1000b7b7(void *this,LPRECT param_1,int param_2)

{
  uint dwExStyle;
  DWORD dwStyle;
  BOOL bMenu;
  
  dwExStyle = FUN_10009bc0((int)this);
  if (param_2 == 0) {
    dwExStyle = dwExStyle & 0xfffffdff;
  }
  bMenu = 0;
  dwStyle = FUN_10009ba6((int)this);
  AdjustWindowRectEx(param_1,dwStyle,bMenu,dwExStyle);
  return;
}



// ============================================================
// FUN_1000b7e2 @ 0x1000b7e2 66B
// ============================================================

undefined4 FUN_1000b7e2(HWND param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  HWND hWnd;
  
  hWnd = (HWND)*param_2;
  while( true ) {
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    piVar1 = (int *)FUN_1000a1c3((uint)hWnd);
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x90))(param_2), iVar2 != 0))
    break;
    if (hWnd == param_1) {
      return 0;
    }
    hWnd = GetParent(hWnd);
  }
  return 1;
}



// ============================================================
// FUN_1000b824 @ 0x1000b824 45B
// ============================================================

void __thiscall FUN_1000b824(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
  (**(code **)(*(int *)this + 0xa8))
            (*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c),
             *(undefined4 *)(iVar1 + 0x40),param_1);
  return;
}



// ============================================================
// FUN_1000b851 @ 0x1000b851 164B
// ============================================================

undefined4 FUN_1000b851(void)

{
  HWND hWnd;
  int iVar1;
  void *this;
  HWND pHVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_100031c0();
  iVar1 = FUN_1000a12a();
  if (iVar1 != 0) {
    hWnd = *(HWND *)(unaff_EBP + 8);
    this = (void *)FUN_1000868a((void *)(iVar1 + 4),(uint)hWnd);
    if (this != (void *)0x0) {
      uVar3 = FUN_1000b824(this,*(undefined4 *)(unaff_EBP + 0xc));
      goto LAB_1000b8e5;
    }
    pHVar2 = GetParent(hWnd);
    iVar1 = FUN_1000868a((void *)(iVar1 + 4),(uint)pHVar2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) != 0)) {
      iVar1 = FUN_1000868a((void *)(*(int *)(iVar1 + 0x34) + 0x20),(uint)hWnd);
      if (iVar1 != 0) {
        FUN_10009e3c((void *)(unaff_EBP + -0x48),hWnd);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(int *)(unaff_EBP + -0x10) = iVar1;
        uVar3 = FUN_1000b824((void *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        CWnd::~CWnd((CWnd *)(unaff_EBP + -0x48));
        goto LAB_1000b8e5;
      }
    }
  }
  uVar3 = 0;
LAB_1000b8e5:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



// ============================================================
// FUN_1000b8f5 @ 0x1000b8f5 91B
// ============================================================

uint __thiscall FUN_1000b8f5(void *this,uint param_1,int *param_2,int param_3,int *param_4)

{
  LRESULT LVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x38) == 0) {
    uVar2 = FUN_1000b950(this,param_1,param_2,param_3,param_4);
  }
  else {
    LVar1 = SendMessageA(*(HWND *)((int)this + 0x1c),param_1 + 0x2000,(WPARAM)param_2,param_3);
    if (((param_1 < 0x132) || (0x138 < param_1)) || (uVar2 = 0, LVar1 != 0)) {
      if (param_4 != (int *)0x0) {
        *param_4 = LVar1;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



// ============================================================
// FUN_1000b950 @ 0x1000b950 232B
// ============================================================

uint __thiscall FUN_1000b950(void *this,uint param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int *local_c;
  int local_8;
  
  if (param_1 < 0x112) {
    if (param_1 == 0x111) {
      uVar1 = FUN_1000918a(this,(undefined4 *)0x0,(uint)param_2 >> 0x10 | 0xbd110000,
                           (undefined4 *)0x0,(undefined4 *)0x0);
      if (uVar1 == 0) {
        return 0;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = 1;
        return 1;
      }
      return 1;
    }
    if (0x2a < param_1) {
      if ((param_1 < 0x30) || (param_1 == 0x39)) goto LAB_1000b9e4;
      if (param_1 == 0x4e) {
        local_c = param_4;
        local_8 = param_3;
        uVar1 = FUN_1000918a(this,(undefined4 *)0x0,*(uint *)(param_3 + 8) & 0xffff | 0xbc4e0000,
                             &local_c,(undefined4 *)0x0);
        return uVar1;
      }
    }
  }
  else if ((0x113 < param_1) && ((param_1 < 0x116 || (param_1 == 0x210)))) {
LAB_1000b9e4:
    uVar1 = FUN_1000af2b();
    return uVar1;
  }
  if ((0x131 < param_1) && (param_1 < 0x139)) {
    local_8 = param_1 - 0x132;
    local_c = param_2;
    uVar1 = FUN_1000af2b();
    if (*param_4 != 0) {
      return uVar1;
    }
  }
  return 0;
}



// ============================================================
// FUN_1000ba87 @ 0x1000ba87 125B
// ============================================================

void __fastcall FUN_1000ba87(int *param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  uint uVar3;
  
  iVar1 = FUN_1000def3();
  if ((*(int *)(iVar1 + 4) != 0) && (*(int **)(*(int *)(iVar1 + 4) + 0x1c) == param_1)) {
    FUN_1000c300(0x10018190);
  }
  iVar1 = FUN_1000def3();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if (*(int **)(pCVar2 + 0x1c) == param_1) {
        iVar1 = FUN_1000db41();
        if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
          (**(code **)(iVar1 + 0x1c))();
        }
      }
    }
  }
  uVar3 = FUN_10009ba6((int)param_1);
  if ((uVar3 & 0x40000000) == 0) {
    FUN_1000b735((HWND)param_1[7],0x15,0,0,1,1);
  }
  FUN_1000a103(param_1);
  return;
}



// ============================================================
// FUN_1000bb04 @ 0x1000bb04 83B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000bb04(CWnd *param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  
  iVar1 = FUN_1000def3();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_1000db41();
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if ((*(CWnd **)(pCVar2 + 0x1c) == param_1) && (*(code **)(iVar1 + 0x24) != (code *)0x0)) {
        (**(code **)(iVar1 + 0x24))();
      }
    }
  }
  _DAT_10016844 = 0;
  CWnd::OnDisplayChange(param_1,0,0);
  return;
}



// ============================================================
// OnDevModeChange @ 0x1000bb57 75B
// ============================================================

/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CWnd::OnDevModeChange(char *)
    protected: void __thiscall CWnd::OnDevModeChange(wchar_t *)
   
   Library: Visual Studio 2003 Release */

void __thiscall OnDevModeChange(void *this,LPSTR param_1)

{
  void *this_00;
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_1000def3();
  this_00 = *(void **)(iVar1 + 4);
  if ((this_00 != (void *)0x0) && (*(void **)((int)this_00 + 0x1c) == this)) {
    FUN_1000894f(this_00,param_1);
  }
  uVar2 = FUN_10009ba6((int)this);
  if ((uVar2 & 0x40000000) == 0) {
    iVar1 = FUN_1000a0ce();
    FUN_1000b735(*(HWND *)((int)this + 0x1c),*(UINT *)(iVar1 + 4),*(WPARAM *)(iVar1 + 8),
                 *(LPARAM *)(iVar1 + 0xc),1,1);
  }
  return;
}



// ============================================================
// FUN_1000bba2 @ 0x1000bba2 100B
// ============================================================

undefined4 __fastcall FUN_1000bba2(int *param_1)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_10009ba6((int)param_1);
  if (((((uVar2 & 0x40000000) == 0) && (iVar3 = FUN_10002248(), iVar3 != 0)) &&
      (SVar1 = GetKeyState(0x10), -1 < SVar1)) &&
     ((SVar1 = GetKeyState(0x11), -1 < SVar1 && (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    SendMessageA(*(HWND *)(iVar3 + 0x1c),0x111,0xe146,0);
    return 1;
  }
  uVar4 = FUN_1000a103(param_1);
  return uVar4;
}



// ============================================================
// OnDisplayChange @ 0x1000bc06 73B
// ============================================================

/* Library Function - Single Match
    protected: long __thiscall CWnd::OnDisplayChange(unsigned int,long)
   
   Library: Visual Studio 2003 Release */

long __thiscall CWnd::OnDisplayChange(CWnd *this,uint param_1,long param_2)

{
  CWnd *pCVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  pCVar1 = (CWnd *)FUN_10002248();
  if (pCVar1 == this) {
    FUN_1000c344(0x10018190);
  }
  uVar2 = FUN_10009ba6((int)this);
  if ((uVar2 & 0x40000000) == 0) {
    iVar3 = FUN_1000a0ce();
    FUN_1000b735(*(HWND *)(this + 0x1c),*(UINT *)(iVar3 + 4),*(WPARAM *)(iVar3 + 8),
                 *(LPARAM *)(iVar3 + 0xc),1,1);
  }
  lVar4 = FUN_1000a103((int *)this);
  return lVar4;
}



// ============================================================
// FUN_1000bc4f @ 0x1000bc4f 42B
// ============================================================

undefined4 __thiscall FUN_1000bc4f(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000b851();
  if (iVar1 == 0) {
    param_2 = FUN_1000a103(this);
  }
  return param_2;
}



// ============================================================
// FUN_1000bc79 @ 0x1000bc79 33B
// ============================================================

void __thiscall FUN_1000bc79(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  
  if ((param_3 != (void *)0x0) && (iVar1 = FUN_1000b824(param_3,0), iVar1 != 0)) {
    return;
  }
  FUN_1000a103(this);
  return;
}



// ============================================================
// FUN_1000bc9a @ 0x1000bc9a 74B
// ============================================================

void __fastcall FUN_1000bc9a(int *param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0x121,0x121,1);
    if (BVar1 == 0) break;
    DispatchMessageA(&local_20);
  }
  FUN_1000a103(param_1);
  return;
}



// ============================================================
// FUN_1000bce4 @ 0x1000bce4 39B
// ============================================================

void * __thiscall FUN_1000bce4(void *this,undefined4 param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1000b824(param_2,&param_2);
  if (iVar1 == 0) {
    param_2 = (void *)FUN_1000a103(this);
  }
  return param_2;
}



// ============================================================
// FUN_1000bd0b @ 0x1000bd0b 117B
// ============================================================

undefined4 FUN_1000bd0b(HDC param_1,HWND param_2,int param_3,HANDLE param_4,COLORREF param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined1 local_10 [4];
  COLORREF local_c;
  
  if ((((param_1 == (HDC)0x0) || (param_4 == (HANDLE)0x0)) || (param_3 == 1)) ||
     ((param_3 == 0 || (param_3 == 5)))) {
LAB_1000bd7a:
    uVar2 = 0;
  }
  else {
    if (param_3 == 2) {
      bVar1 = FUN_1000c53f(param_2,2);
      if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_1000bd7a;
    }
    GetObjectA(param_4,0xc,local_10);
    SetBkColor(param_1,local_c);
    if (param_5 == 0xffffffff) {
      param_5 = GetSysColor(8);
    }
    SetTextColor(param_1,param_5);
    uVar2 = 1;
  }
  return uVar2;
}



// ============================================================
// FUN_1000bd80 @ 0x1000bd80 437B
// ============================================================

void __thiscall FUN_1000bd80(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  HWND pHVar3;
  int iVar4;
  HWND pHVar5;
  uint *puVar6;
  uint local_64 [5];
  RECT local_50;
  tagRECT local_3c;
  tagRECT local_2c;
  tagRECT local_1c;
  void *local_c;
  uint local_8;
  
  local_c = this;
  local_8 = FUN_10009ba6((int)this);
  if (param_1 == 0) {
    if ((local_8 & 0x40000000) == 0) {
      pHVar5 = GetWindow(*(HWND *)((int)this + 0x1c),4);
    }
    else {
      pHVar5 = GetParent(*(HWND *)((int)this + 0x1c));
    }
    if ((pHVar5 != (HWND)0x0) &&
       (pHVar3 = (HWND)SendMessageA(pHVar5,0x36b,0,0), pHVar3 != (HWND)0x0)) {
      pHVar5 = pHVar3;
    }
  }
  else {
    pHVar5 = *(HWND *)(param_1 + 0x1c);
  }
  GetWindowRect(*(HWND *)((int)this + 0x1c),&local_2c);
  if ((local_8 & 0x40000000) == 0) {
    if ((pHVar5 != (HWND)0x0) &&
       ((uVar1 = GetWindowLongA(pHVar5,-0x10), (uVar1 & 0x10000000) == 0 ||
        ((uVar1 & 0x20000000) != 0)))) {
      pHVar5 = (HWND)0x0;
    }
    local_64[0] = 0x28;
    if (pHVar5 == (HWND)0x0) {
      iVar2 = FUN_10002248();
      pHVar5 = (HWND)0x0;
      if (iVar2 != 0) {
        pHVar5 = *(HWND *)(iVar2 + 0x1c);
      }
      puVar6 = local_64;
      iVar2 = xMonitorFromWindow(pHVar5,1);
      FUN_100026e4(iVar2,puVar6);
      CopyRect(&local_3c,&local_50);
      CopyRect(&local_1c,&local_50);
    }
    else {
      GetWindowRect(pHVar5,&local_3c);
      puVar6 = local_64;
      iVar2 = xMonitorFromWindow(pHVar5,2);
      FUN_100026e4(iVar2,puVar6);
      CopyRect(&local_1c,&local_50);
    }
  }
  else {
    pHVar3 = GetParent(*(HWND *)((int)this + 0x1c));
    GetClientRect(pHVar3,&local_1c);
    GetClientRect(pHVar5,&local_3c);
    MapWindowPoints(pHVar5,pHVar3,(LPPOINT)&local_3c,2);
  }
  iVar2 = (local_3c.left + local_3c.right) / 2 - (local_2c.right - local_2c.left) / 2;
  iVar4 = (local_3c.top + local_3c.bottom) / 2 - (local_2c.bottom - local_2c.top) / 2;
  if ((local_1c.left <= iVar2) &&
     (local_1c.left = iVar2, local_1c.right < (local_2c.right - local_2c.left) + iVar2)) {
    local_1c.left = (local_1c.right - local_2c.right) + local_2c.left;
  }
  if ((local_1c.top <= iVar4) &&
     (local_1c.top = iVar4, local_1c.bottom < (local_2c.bottom - local_2c.top) + iVar4)) {
    local_1c.top = (local_2c.top - local_2c.bottom) + local_1c.bottom;
  }
  FUN_10009bda(local_c,0,local_1c.left,local_1c.top,-1,-1,0x15);
  return;
}



// ============================================================
// AfxRegisterWithIcon @ 0x1000bf60 65B
// ============================================================

/* Library Function - Multiple Matches With Same Base Name
    int __stdcall _AfxRegisterWithIcon(struct tagWNDCLASSA *,char const *,unsigned int)
    int __stdcall _AfxRegisterWithIcon(struct tagWNDCLASSW *,wchar_t const *,unsigned int)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void AfxRegisterWithIcon(int param_1,undefined4 param_2,ushort param_3)

{
  int iVar1;
  HICON pHVar2;
  
  *(undefined4 *)(param_1 + 0x24) = param_2;
  iVar1 = FUN_1000def3();
  pHVar2 = LoadIconA(*(HINSTANCE *)(iVar1 + 0xc),(LPCSTR)(uint)param_3);
  *(HICON *)(param_1 + 0x14) = pHVar2;
  if (pHVar2 == (HICON)0x0) {
    pHVar2 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    *(HICON *)(param_1 + 0x14) = pHVar2;
  }
  FUN_1000acd8();
  return;
}



// ============================================================
// FUN_1000bfa1 @ 0x1000bfa1 119B
// ============================================================

uint FUN_1000bfa1(undefined4 param_1,uint param_2)

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
// FUN_1000c018 @ 0x1000c018 695B
// ============================================================

bool FUN_1000c018(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_38;
  code *local_34;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  char *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = FUN_1000def3();
  param_1 = param_1 & ~*(uint *)(local_8 + 0x18);
  if (param_1 == 0) {
    cVar1 = '\x01';
  }
  else {
    uVar4 = 0;
    _memset(&local_38,0,0x28);
    local_34 = DefWindowProcA_exref;
    iVar2 = FUN_1000def3();
    local_28 = *(undefined4 *)(iVar2 + 8);
    local_20 = DAT_100181d0;
    local_10 = 8;
    if ((param_1 & 1) != 0) {
      local_38 = 0xb;
      local_14 = "AfxWnd42s";
      iVar2 = FUN_1000acd8();
      if (iVar2 != 0) {
        uVar4 = 1;
      }
    }
    if ((param_1 & 0x20) != 0) {
      local_38 = local_38 | 0x8b;
      local_14 = "AfxOleControl42s";
      iVar2 = FUN_1000acd8();
      if (iVar2 != 0) {
        uVar4 = uVar4 | 0x20;
      }
    }
    if ((param_1 & 2) != 0) {
      local_38 = 0;
      local_14 = "AfxControlBar42s";
      local_1c = 0x10;
      iVar2 = FUN_1000acd8();
      if (iVar2 != 0) {
        uVar4 = uVar4 | 2;
      }
    }
    if ((param_1 & 4) != 0) {
      local_38 = 8;
      local_1c = 0;
      iVar2 = AfxRegisterWithIcon((int)&local_38,"AfxMDIFrame42s",0x7a01);
      if (iVar2 != 0) {
        uVar4 = uVar4 | 4;
      }
    }
    if ((param_1 & 8) != 0) {
      local_38 = 0xb;
      local_1c = 6;
      iVar2 = AfxRegisterWithIcon((int)&local_38,"AfxFrameOrView42s",0x7a02);
      if (iVar2 != 0) {
        uVar4 = uVar4 | 8;
      }
    }
    if ((param_1 & 0x10) != 0) {
      local_c = 0xff;
      uVar3 = FUN_1000bfa1(&local_10,0x3fc0);
      uVar4 = uVar4 | uVar3;
      param_1 = param_1 & 0xffffc03f;
    }
    if ((param_1 & 0x40) != 0) {
      local_c = 0x10;
      uVar3 = FUN_1000bfa1(&local_10,0x40);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x80) != 0) {
      local_c = 2;
      uVar3 = FUN_1000bfa1(&local_10,0x80);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x100) != 0) {
      local_c = 8;
      uVar3 = FUN_1000bfa1(&local_10,0x100);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x200) != 0) {
      local_c = 0x20;
      uVar3 = FUN_1000bfa1(&local_10,0x200);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x400) != 0) {
      local_c = 1;
      uVar3 = FUN_1000bfa1(&local_10,0x400);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x800) != 0) {
      local_c = 0x40;
      uVar3 = FUN_1000bfa1(&local_10,0x800);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x1000) != 0) {
      local_c = 4;
      uVar3 = FUN_1000bfa1(&local_10,0x1000);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x2000) != 0) {
      local_c = 0x80;
      uVar3 = FUN_1000bfa1(&local_10,0x2000);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x4000) != 0) {
      local_c = 0x800;
      uVar3 = FUN_1000bfa1(&local_10,0x4000);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x8000) != 0) {
      local_c = 0x400;
      uVar3 = FUN_1000bfa1(&local_10,0x8000);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x10000) != 0) {
      local_c = 0x200;
      uVar3 = FUN_1000bfa1(&local_10,0x10000);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x20000) != 0) {
      local_c = 0x100;
      uVar3 = FUN_1000bfa1(&local_10,0x20000);
      uVar4 = uVar4 | uVar3;
    }
    *(uint *)(local_8 + 0x18) = *(uint *)(local_8 + 0x18) | uVar4;
    if ((*(uint *)(local_8 + 0x18) & 0x3fc0) == 0x3fc0) {
      uVar4 = uVar4 | 0x10;
      *(uint *)(local_8 + 0x18) = *(uint *)(local_8 + 0x18) | 0x10;
    }
    cVar1 = '\x01' - ((uVar4 & param_1) != param_1);
  }
  return (bool)cVar1;
}



// ============================================================
// FUN_1000c2d2 @ 0x1000c2d2 31B
// ============================================================

undefined4 __fastcall FUN_1000c2d2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (((iVar1 != 0) && (iVar1 != 0xe002)) && (iVar1 != 0xe001)) {
    return 1;
  }
  return 0;
}



// ============================================================
// FUN_1000c300 @ 0x1000c300 68B
// ============================================================

void __fastcall FUN_1000c300(int param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  
  DVar1 = GetSysColor(0xf);
  *(DWORD *)(param_1 + 0x28) = DVar1;
  DVar1 = GetSysColor(0x10);
  *(DWORD *)(param_1 + 0x2c) = DVar1;
  DVar1 = GetSysColor(0x14);
  *(DWORD *)(param_1 + 0x30) = DVar1;
  DVar1 = GetSysColor(0x12);
  *(DWORD *)(param_1 + 0x34) = DVar1;
  DVar1 = GetSysColor(6);
  *(DWORD *)(param_1 + 0x38) = DVar1;
  pHVar2 = GetSysColorBrush(0xf);
  *(HBRUSH *)(param_1 + 0x24) = pHVar2;
  pHVar2 = GetSysColorBrush(6);
  *(HBRUSH *)(param_1 + 0x20) = pHVar2;
  return;
}



// ============================================================
// FUN_1000c344 @ 0x1000c344 88B
// ============================================================

void __fastcall FUN_1000c344(int param_1)

{
  int iVar1;
  HDC hdc;
  
  iVar1 = GetSystemMetrics(0xb);
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = GetSystemMetrics(0xc);
  *(int *)(param_1 + 0xc) = iVar1;
  if (*(int *)(param_1 + 0x68) == 0) {
    FUN_1000e748();
  }
  else {
    FUN_1000e718();
  }
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = GetDeviceCaps(hdc,0x5a);
  *(int *)(param_1 + 0x1c) = iVar1;
  ReleaseDC((HWND)0x0,hdc);
  return;
}



// ============================================================
// FUN_1000c39c @ 0x1000c39c 132B
// ============================================================

bool FUN_1000c39c(UINT param_1)

{
  int iVar1;
  LPSTR pCVar2;
  int iVar3;
  int iVar4;
  CHAR local_108 [256];
  void *local_8;
  
  iVar1 = FUN_1000c420(param_1,local_108,0x100);
  if (0x100U - iVar1 < 3) {
    iVar3 = 0x100;
    do {
      iVar4 = iVar3 + 0x100;
      iVar1 = iVar4;
      pCVar2 = (LPSTR)FUN_10009b18(local_8,iVar3 + 0xff);
      iVar1 = FUN_1000c420(param_1,pCVar2,iVar1);
      iVar3 = iVar4;
    } while (iVar4 - iVar1 < 3);
    FUN_10009b67(local_8,-1);
  }
  else {
    FUN_10009af1(local_8,local_108);
  }
  return 0 < iVar1;
}



// ============================================================
// FUN_1000c420 @ 0x1000c420 39B
// ============================================================

void FUN_1000c420(UINT param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1000def3();
  iVar1 = LoadStringA(*(HINSTANCE *)(iVar1 + 0xc),param_1,param_2,param_3);
  if (iVar1 == 0) {
    *param_2 = '\0';
  }
  return;
}



// ============================================================
// FUN_1000c447 @ 0x1000c447 114B
// ============================================================

undefined4 FUN_1000c447(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_100031c0();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x18) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    puVar2 = FUN_100087c9(&LAB_1000c6a5);
    pvVar3 = FUN_100087db(0x48);
    *(void **)(unaff_EBP + 8) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_100095f3();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 **)(pAVar1 + 0x18) = puVar4;
    FUN_100087c9(puVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x18);
}



// ============================================================
// FUN_1000c4b9 @ 0x1000c4b9 21B
// ============================================================

void FUN_1000c4b9(void)

{
  FUN_1000c447();
  FUN_10009658();
  return;
}



// ============================================================
// FUN_1000c4ce @ 0x1000c4ce 30B
// ============================================================

undefined4 FUN_1000c4ce(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1000c447();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_1000868a((void *)(iVar1 + 4),param_1);
  }
  return uVar2;
}



// ============================================================
// Detach @ 0x1000c4ec 42B
// ============================================================

/* Library Function - Multiple Matches With Same Base Name
    public: void * __thiscall CGdiObject::Detach(void)
    public: struct _IMAGELIST * __thiscall CImageList::Detach(void)
    public: struct HMENU__ * __thiscall CMenu::Detach(void)
   
   Library: Visual Studio */

int __fastcall Detach(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar2 = FUN_1000c447();
    if (iVar2 != 0) {
      FUN_1000870d((void *)(iVar2 + 4),*(uint *)(param_1 + 4));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}



// ============================================================
// FUN_1000c516 @ 0x1000c516 22B
// ============================================================

BOOL __fastcall FUN_1000c516(int param_1)

{
  HMENU hMenu;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  hMenu = (HMENU)Detach(param_1);
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}



// ============================================================
// FUN_1000c53f @ 0x1000c53f 74B
// ============================================================

bool FUN_1000c53f(HWND param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  CHAR local_10 [12];
  
  if ((param_1 != (HWND)0x0) && (uVar1 = GetWindowLongA(param_1,-0x10), (uVar1 & 0xf) == param_2)) {
    GetClassNameA(param_1,local_10,10);
    iVar2 = lstrcmpiA(local_10,"combobox");
    return (bool)('\x01' - (iVar2 != 0));
  }
  return false;
}



// ============================================================
// FUN_1000c589 @ 0x1000c589 117B
// ============================================================

HWND FUN_1000c589(HWND param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  UINT uCmd;
  tagRECT local_14;
  
  ClientToScreen(param_1,(LPPOINT)&param_2);
  uCmd = 5;
  do {
    param_1 = GetWindow(param_1,uCmd);
    if (param_1 == (HWND)0x0) {
      return (HWND)0x0;
    }
    iVar1 = GetDlgCtrlID(param_1);
    if (((short)iVar1 != -1) && (uVar2 = GetWindowLongA(param_1,-0x10), (uVar2 & 0x10000000) != 0))
    {
      GetWindowRect(param_1,&local_14);
      pt.y = param_3;
      pt.x = param_2;
      BVar3 = PtInRect(&local_14,pt);
      if (BVar3 != 0) {
        return param_1;
      }
    }
    uCmd = 2;
  } while( true );
}



// ============================================================
// FUN_1000c5fe @ 0x1000c5fe 88B
// ============================================================

void FUN_1000c5fe(HWND param_1,LPCSTR param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CHAR local_104 [256];
  
  uVar1 = lstrlenA(param_2);
  if (((uVar1 < 0x101) && (uVar2 = GetWindowTextA(param_1,local_104,0x100), uVar2 == uVar1)) &&
     (iVar3 = lstrcmpA(local_104,param_2), iVar3 == 0)) {
    return;
  }
  SetWindowTextA(param_1,param_2);
  return;
}



// ============================================================
// FUN_1000c656 @ 0x1000c656 25B
// ============================================================

void FUN_1000c656(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}



// ============================================================
// FUN_1000c66f @ 0x1000c66f 54B
// ============================================================

void FUN_1000c66f(HGLOBAL param_1)

{
  UINT UVar1;
  uint uVar2;
  
  if (param_1 != (HGLOBAL)0x0) {
    UVar1 = GlobalFlags(param_1);
    for (uVar2 = UVar1 & 0xff; uVar2 != 0; uVar2 = uVar2 - 1) {
      GlobalUnlock(param_1);
    }
    GlobalFree(param_1);
  }
  return;
}



// ============================================================
// FUN_1000c6f7 @ 0x1000c6f7 20B
// ============================================================

void __fastcall FUN_1000c6f7(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1000f940;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ============================================================
// FUN_1000c70b @ 0x1000c70b 28B
// ============================================================

undefined * __thiscall FUN_1000c70b(void *this,byte param_1)

{
  FUN_1000c7df();
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_1000c727 @ 0x1000c727 114B
// ============================================================

undefined4 FUN_1000c727(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_100031c0();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x1c) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    puVar2 = FUN_100087c9(&LAB_1000c6a5);
    pvVar3 = FUN_100087db(0x48);
    *(void **)(unaff_EBP + 8) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_100095f3();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 **)(pAVar1 + 0x1c) = puVar4;
    FUN_100087c9(puVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x1c);
}



// ============================================================
// FUN_1000c799 @ 0x1000c799 21B
// ============================================================

void FUN_1000c799(void)

{
  FUN_1000c727();
  FUN_10009658();
  return;
}



// ============================================================
// Detach @ 0x1000c7ae 49B
// ============================================================

/* Library Function - Single Match
    public: struct HDC__ * __thiscall CDC::Detach(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

HDC__ * __thiscall CDC::Detach(CDC *this)

{
  HDC__ *pHVar1;
  int iVar2;
  
  pHVar1 = *(HDC__ **)(this + 4);
  if (pHVar1 != (HDC__ *)0x0) {
    iVar2 = FUN_1000c727();
    if (iVar2 != 0) {
      FUN_1000870d((void *)(iVar2 + 4),*(uint *)(this + 4));
    }
  }
  (**(code **)(*(int *)this + 0x14))();
  *(undefined4 *)(this + 4) = 0;
  return pHVar1;
}



// ============================================================
// FUN_1000c7df @ 0x1000c7df 54B
// ============================================================

void FUN_1000c7df(void)

{
  HDC__ *hdc;
  CDC *this;
  int unaff_EBP;
  
  FUN_100031c0();
  *(CDC **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_1000f940;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(this + 4) != 0) {
    hdc = CDC::Detach(this);
    DeleteDC(hdc);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000c833 @ 0x1000c833 49B
// ============================================================

int __fastcall FUN_1000c833(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    iVar2 = SaveDC(*(HDC *)(param_1 + 8));
  }
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    iVar1 = SaveDC(*(HDC *)(param_1 + 4));
    if (iVar1 != 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}



// ============================================================
// FUN_1000c864 @ 0x1000c864 62B
// ============================================================

int __thiscall FUN_1000c864(void *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  
  iVar1 = 1;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    iVar1 = RestoreDC(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    if ((iVar1 != 0) && (BVar2 = RestoreDC(*(HDC *)((int)this + 8),param_1), BVar2 != 0)) {
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



// ============================================================
// FUN_1000c8a2 @ 0x1000c8a2 60B
// ============================================================

void __thiscall FUN_1000c8a2(void *this,int param_1)

{
  HGDIOBJ h;
  
  h = GetStockObject(param_1);
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SelectObject(*(HDC *)((int)this + 4),h);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SelectObject(*(HDC *)((int)this + 8),h);
  }
  FUN_1000cc12();
  return;
}



// ============================================================
// FUN_1000c8de @ 0x1000c8de 70B
// ============================================================

void __thiscall FUN_1000c8de(void *this,int param_1)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = (HGDIOBJ)0x0;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    if (param_1 != 0) {
      pvVar1 = *(HGDIOBJ *)(param_1 + 4);
    }
    SelectObject(*(HDC *)((int)this + 4),pvVar1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    if (param_1 == 0) {
      pvVar1 = (HGDIOBJ)0x0;
    }
    else {
      pvVar1 = *(HGDIOBJ *)(param_1 + 4);
    }
    SelectObject(*(HDC *)((int)this + 8),pvVar1);
  }
  FUN_1000cc12();
  return;
}



// ============================================================
// FUN_1000c924 @ 0x1000c924 47B
// ============================================================

COLORREF __thiscall FUN_1000c924(void *this,COLORREF param_1)

{
  COLORREF CVar1;
  
  CVar1 = 0xffffffff;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    CVar1 = SetBkColor(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    CVar1 = SetBkColor(*(HDC *)((int)this + 8),param_1);
  }
  return CVar1;
}



// ============================================================
// FUN_1000c953 @ 0x1000c953 47B
// ============================================================

COLORREF __thiscall FUN_1000c953(void *this,COLORREF param_1)

{
  COLORREF CVar1;
  
  CVar1 = 0xffffffff;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    CVar1 = SetTextColor(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    CVar1 = SetTextColor(*(HDC *)((int)this + 8),param_1);
  }
  return CVar1;
}



// ============================================================
// FUN_1000c982 @ 0x1000c982 46B
// ============================================================

int __thiscall FUN_1000c982(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    iVar1 = SetMapMode(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    iVar1 = SetMapMode(*(HDC *)((int)this + 8),param_1);
  }
  return iVar1;
}



// ============================================================
// FUN_1000c9b0 @ 0x1000c9b0 76B
// ============================================================

void __thiscall FUN_1000c9b0(void *this,int *param_1,int param_2,int param_3)

{
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SetViewportOrgEx(*(HDC *)((int)this + 4),param_2,param_3,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SetViewportOrgEx(*(HDC *)((int)this + 8),param_2,param_3,&local_c);
  }
  *param_1 = local_c.x;
  param_1[1] = local_c.y;
  return;
}



// ============================================================
// FUN_1000c9fc @ 0x1000c9fc 76B
// ============================================================

void __thiscall FUN_1000c9fc(void *this,int *param_1,int param_2,int param_3)

{
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    OffsetViewportOrgEx(*(HDC *)((int)this + 4),param_2,param_3,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    OffsetViewportOrgEx(*(HDC *)((int)this + 8),param_2,param_3,&local_c);
  }
  *param_1 = local_c.x;
  param_1[1] = local_c.y;
  return;
}



// ============================================================
// FUN_1000ca48 @ 0x1000ca48 76B
// ============================================================

void __thiscall FUN_1000ca48(void *this,int *param_1,int param_2,int param_3)

{
  tagSIZE local_c;
  
  local_c.cx = (LONG)this;
  local_c.cy = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SetViewportExtEx(*(HDC *)((int)this + 4),param_2,param_3,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SetViewportExtEx(*(HDC *)((int)this + 8),param_2,param_3,&local_c);
  }
  *param_1 = local_c.cx;
  param_1[1] = local_c.cy;
  return;
}



// ============================================================
// FUN_1000ca94 @ 0x1000ca94 88B
// ============================================================

void __thiscall
FUN_1000ca94(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  tagSIZE local_c;
  
  local_c.cx = (LONG)this;
  local_c.cy = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    ScaleViewportExtEx(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    ScaleViewportExtEx(*(HDC *)((int)this + 8),param_2,param_3,param_4,param_5,&local_c);
  }
  *param_1 = local_c.cx;
  param_1[1] = local_c.cy;
  return;
}



// ============================================================
// FUN_1000caec @ 0x1000caec 76B
// ============================================================

void __thiscall FUN_1000caec(void *this,int *param_1,int param_2,int param_3)

{
  tagSIZE local_c;
  
  local_c.cx = (LONG)this;
  local_c.cy = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SetWindowExtEx(*(HDC *)((int)this + 4),param_2,param_3,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SetWindowExtEx(*(HDC *)((int)this + 8),param_2,param_3,&local_c);
  }
  *param_1 = local_c.cx;
  param_1[1] = local_c.cy;
  return;
}



// ============================================================
// FUN_1000cb38 @ 0x1000cb38 88B
// ============================================================

void __thiscall
FUN_1000cb38(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  tagSIZE local_c;
  
  local_c.cx = (LONG)this;
  local_c.cy = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    ScaleWindowExtEx(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    ScaleWindowExtEx(*(HDC *)((int)this + 8),param_2,param_3,param_4,param_5,&local_c);
  }
  *param_1 = local_c.cx;
  param_1[1] = local_c.cy;
  return;
}



// ============================================================
// FUN_1000cba0 @ 0x1000cba0 114B
// ============================================================

undefined4 FUN_1000cba0(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_100031c0();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x20) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    puVar2 = FUN_100087c9(&LAB_1000c6a5);
    pvVar3 = FUN_100087db(0x48);
    *(void **)(unaff_EBP + 8) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_100095f3();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 **)(pAVar1 + 0x20) = puVar4;
    FUN_100087c9(puVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x20);
}



// ============================================================
// FUN_1000cc12 @ 0x1000cc12 21B
// ============================================================

void FUN_1000cc12(void)

{
  FUN_1000cba0();
  FUN_10009658();
  return;
}



// ============================================================
// Detach @ 0x1000cc27 42B
// ============================================================

/* Library Function - Multiple Matches With Same Base Name
    public: void * __thiscall CGdiObject::Detach(void)
    public: struct _IMAGELIST * __thiscall CImageList::Detach(void)
    public: struct HMENU__ * __thiscall CMenu::Detach(void)
   
   Library: Visual Studio */

int __fastcall Detach(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar2 = FUN_1000cba0();
    if (iVar2 != 0) {
      FUN_1000870d((void *)(iVar2 + 4),*(uint *)(param_1 + 4));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}



// ============================================================
// FUN_1000cc51 @ 0x1000cc51 22B
// ============================================================

BOOL __fastcall FUN_1000cc51(int param_1)

{
  HGDIOBJ ho;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  ho = (HGDIOBJ)Detach(param_1);
  BVar1 = DeleteObject(ho);
  return BVar1;
}



// ============================================================
// FUN_1000cc67 @ 0x1000cc67 95B
// ============================================================

void __thiscall FUN_1000cc67(void *this,int param_1)

{
  HCURSOR pHVar1;
  
  FUN_1000e216(2);
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + param_1;
  if (*(int *)((int)this + 0xa0) < 1) {
    *(undefined4 *)((int)this + 0xa0) = 0;
    SetCursor(*(HCURSOR *)((int)this + 0xa4));
  }
  else {
    pHVar1 = SetCursor(DAT_100181cc);
    if ((0 < param_1) && (*(int *)((int)this + 0xa0) == 1)) {
      *(HCURSOR *)((int)this + 0xa4) = pHVar1;
    }
  }
  FUN_1000e286(2);
  return;
}



// ============================================================
// FUN_1000cd70 @ 0x1000cd70 46B
// ============================================================

void FUN_1000cd70(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_10002248();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xb0))();
    if ((iVar2 != 0) && ((int *)piVar1[0x1a] != (int *)0x0)) {
      (**(code **)(*(int *)piVar1[0x1a] + 100))(param_1);
    }
  }
  return;
}



// ============================================================
// FUN_1000cd9e @ 0x1000cd9e 231B
// ============================================================

int __thiscall FUN_1000cd9e(void *this,LPCSTR param_1,UINT param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  CHAR *lpCaption;
  CHAR local_118 [260];
  void *local_14;
  HWND local_10;
  int local_c;
  HWND local_8;
  
  local_14 = this;
  FUN_1000cd70(0);
  local_10 = FUN_1000cf16((HWND)0x0,&local_8);
  if (((local_10 == (HWND)0x0) ||
      (piVar1 = (int *)SendMessageA(local_8,0x376,0,0), piVar1 == (int *)0x0)) &&
     (piVar1 = (int *)0x0, this != (void *)0x0)) {
    piVar1 = (int *)((int)this + 0x9c);
  }
  local_c = 0;
  if ((piVar1 != (int *)0x0) && (local_c = *piVar1, param_3 != 0)) {
    *piVar1 = param_3 + 0x30000;
  }
  if (((param_2 & 0xf0) == 0) &&
     ((uVar2 = param_2 & 0xf, uVar2 < 2 || ((2 < uVar2 && (uVar2 < 5)))))) {
    param_2 = param_2 | 0x30;
  }
  if (this == (void *)0x0) {
    lpCaption = local_118;
    GetModuleFileNameA((HMODULE)0x0,local_118,0x104);
  }
  else {
    lpCaption = *(CHAR **)((int)this + 0x78);
  }
  iVar3 = MessageBoxA(local_10,param_1,lpCaption,param_2);
  if (piVar1 != (int *)0x0) {
    *piVar1 = local_c;
  }
  if (local_8 != (HWND)0x0) {
    EnableWindow(local_8,1);
  }
  FUN_1000cd70(1);
  return iVar3;
}



// ============================================================
// FUN_1000ce85 @ 0x1000ce85 56B
// ============================================================

void FUN_1000ce85(LPCSTR param_1,UINT param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1000def3();
  if (*(int **)(iVar1 + 4) == (int *)0x0) {
    FUN_1000cd9e((void *)0x0,param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)(iVar1 + 4) + 0x8c))(param_1,param_2,param_3);
  }
  return;
}



// ============================================================
// FUN_1000cebd @ 0x1000cebd 89B
// ============================================================

undefined4 FUN_1000cebd(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_100135b8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1000c39c(*(UINT *)(unaff_EBP + 8));
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (iVar1 == -1) {
    iVar1 = *(int *)(unaff_EBP + 8);
  }
  uVar2 = FUN_1000ce85(*(LPCSTR *)(unaff_EBP + -0x10),*(UINT *)(unaff_EBP + 0xc),iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_10009a9a((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



// ============================================================
// FUN_1000cf16 @ 0x1000cf16 156B
// ============================================================

HWND FUN_1000cf16(HWND param_1,undefined4 *param_2)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  HWND hWnd_00;
  BOOL BVar3;
  uint uVar4;
  HWND hWnd_01;
  
  hWnd_01 = param_1;
  if (param_1 != (HWND)0x0) goto LAB_1000cf8f;
  iVar1 = FUN_1000cfb2();
  if ((iVar1 == 0) && (iVar1 = FUN_10002248(), iVar1 == 0)) {
    hWnd_01 = (HWND)0x0;
    pHVar2 = hWnd_01;
    hWnd_00 = hWnd_01;
  }
  else {
    for (hWnd_01 = *(HWND *)(iVar1 + 0x1c); pHVar2 = hWnd_01, hWnd_00 = hWnd_01,
        hWnd_01 != (HWND)0x0; hWnd_01 = GetParent(hWnd_01)) {
LAB_1000cf8f:
      uVar4 = GetWindowLongA(hWnd_01,-0x10);
      pHVar2 = hWnd_01;
      hWnd_00 = hWnd_01;
      if ((uVar4 & 0x40000000) == 0) break;
    }
  }
  while (hWnd = pHVar2, hWnd != (HWND)0x0) {
    pHVar2 = GetParent(hWnd);
    hWnd_01 = hWnd;
  }
  if ((param_1 == (HWND)0x0) && (hWnd_00 != (HWND)0x0)) {
    hWnd_00 = GetLastActivePopup(hWnd_00);
  }
  if (param_2 != (undefined4 *)0x0) {
    if (((hWnd_01 == (HWND)0x0) || (BVar3 = IsWindowEnabled(hWnd_01), BVar3 == 0)) ||
       (hWnd_01 == hWnd_00)) {
      *param_2 = 0;
    }
    else {
      *param_2 = hWnd_01;
      EnableWindow(hWnd_01,0);
    }
  }
  return hWnd_00;
}



// ============================================================
// FUN_1000cfbe @ 0x1000cfbe 117B
// ============================================================

uint __thiscall FUN_1000cfbe(void *this,LPCSTR param_1,LPCSTR param_2,undefined4 param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  uint uVar2;
  CHAR local_14 [16];
  
  if (*(int *)((int)this + 0x7c) == 0) {
    wsprintfA(local_14,"%d",param_3);
    uVar2 = WritePrivateProfileStringA(param_1,param_2,local_14,*(LPCSTR *)((int)this + 0x90));
  }
  else {
    hKey = GetSectionKey(this,param_1);
    uVar2 = 0;
    if (hKey != (HKEY)0x0) {
      LVar1 = RegSetValueExA(hKey,param_2,0,4,(BYTE *)&param_3,4);
      RegCloseKey(hKey);
      uVar2 = (uint)(LVar1 == 0);
    }
  }
  return uVar2;
}



// ============================================================
// FUN_1000d055 @ 0x1000d055 27B
// ============================================================

HLOCAL __thiscall FUN_1000d055(void *this,byte param_1)

{
  FUN_1000e9cc();
  if ((param_1 & 1) != 0) {
    FUN_1000d62a(this);
  }
  return this;
}



// ============================================================
// FUN_1000d070 @ 0x1000d070 234B
// ============================================================

CWinThread * FUN_1000d070(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  CWinThread *this;
  int unaff_EBP;
  
  FUN_100031c0();
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  CWinThread::CWinThread(this);
  *(undefined ***)this = &PTR_LAB_1000f4c8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(this + 0x78) = 0;
  }
  else {
    puVar1 = FUN_100031df(*(uint **)(unaff_EBP + 8));
    *(uint **)(this + 0x78) = puVar1;
  }
  iVar2 = FUN_1000def3();
  iVar3 = FUN_1000da7f((void *)(iVar2 + 0x1070),&LAB_1000d37d);
  *(CWinThread **)(iVar3 + 4) = this;
  pvVar4 = GetCurrentThread();
  *(HANDLE *)(this + 0x28) = pvVar4;
  DVar5 = GetCurrentThreadId();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(DWORD *)(this + 0x2c) = DVar5;
  *(CWinThread **)(iVar2 + 4) = this;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined2 *)(this + 0xb2) = 0;
  *(undefined2 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0xb8) = 0x200;
  return this;
}



// ============================================================
// FUN_1000d15a @ 0x1000d15a 28B
// ============================================================

undefined * __thiscall FUN_1000d15a(void *this,byte param_1)

{
  FUN_1000d1ba();
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// FUN_1000d1ba @ 0x1000d1ba 310B
// ============================================================

void FUN_1000d1ba(void)

{
  int *piVar1;
  int iVar2;
  CWinThread *this;
  int unaff_EBP;
  
  FUN_100031c0();
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_1000f4c8;
  piVar1 = *(int **)(this + 0x80);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(1);
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 0x14))(1);
  }
  iVar2 = FUN_1000def3();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    if (DAT_1001629c != (int *)0x0) {
      (**(code **)(*DAT_1001629c + 4))(1);
      DAT_1001629c = (int *)0x0;
    }
    if (DAT_10016298 != (int *)0x0) {
      (**(code **)(*DAT_10016298 + 4))(1);
      DAT_10016298 = (int *)0x0;
    }
  }
  if (*(HGLOBAL *)(this + 0x94) != (HGLOBAL)0x0) {
    FUN_1000c66f(*(HGLOBAL *)(this + 0x94));
  }
  if (*(HGLOBAL *)(this + 0x98) != (HGLOBAL)0x0) {
    FUN_1000c66f(*(HGLOBAL *)(this + 0x98));
  }
  if (*(ATOM *)(this + 0xb0) != 0) {
    GlobalDeleteAtom(*(ATOM *)(this + 0xb0));
  }
  if (*(ATOM *)(this + 0xb2) != 0) {
    GlobalDeleteAtom(*(ATOM *)(this + 0xb2));
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))(1);
  }
  iVar2 = FUN_1000def3();
  if (*(int *)(iVar2 + 0x10) == *(int *)(this + 0x78)) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  if (*(CWinThread **)(iVar2 + 4) == this) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  FUN_10003090(*(undefined **)(this + 0x78));
  FUN_10003090(*(undefined **)(this + 0x7c));
  FUN_10003090(*(undefined **)(this + 0x88));
  FUN_10003090(*(undefined **)(this + 0x8c));
  FUN_10003090(*(undefined **)(this + 0x90));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0;
  CWinThread::~CWinThread(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000d2f0 @ 0x1000d2f0 48B
// ============================================================

void __fastcall FUN_1000d2f0(void *param_1)

{
  if (*(int **)((int)param_1 + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xa8) + 0x10))();
  }
  if (*(int *)((int)param_1 + 0xb4) != 0) {
    FUN_1000cfbe(param_1,"Settings","PreviewPages",*(int *)((int)param_1 + 0xb4));
  }
  return;
}



// ============================================================
// FUN_1000d320 @ 0x1000d320 54B
// ============================================================

undefined4 __fastcall FUN_1000d320(void *param_1)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 0xac) == 0) || (*(int *)(*(int *)((int)param_1 + 0xac) + 0x10) != 5))
  {
    iVar1 = FUN_1000def3();
    if (*(char *)(iVar1 + 0x14) == '\0') {
      FUN_1000d2f0(param_1);
    }
  }
  if (*(code **)((int)param_1 + 0xbc) != (code *)0x0) {
    (**(code **)((int)param_1 + 0xbc))();
  }
  return *(undefined4 *)((int)param_1 + 0x38);
}



// ============================================================
// `scalar_deleting_destructor' @ 0x1000d3ae 28B
// ============================================================

/* Library Function - Single Match
    public: virtual void * __thiscall CWinThread::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CWinThread::_scalar_deleting_destructor_(CWinThread *this,uint param_1)

{
  ~CWinThread(this);
  if ((param_1 & 1) != 0) {
    FUN_10008804(this);
  }
  return this;
}



// ============================================================
// CWinThread @ 0x1000d3ca 61B
// ============================================================

/* Library Function - Single Match
    public: __thiscall CWinThread::CWinThread(void)
   
   Library: Visual Studio 2003 Release */

undefined4 * __thiscall CWinThread::CWinThread(CWinThread *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_1000903e((int)extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_1000f590;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  FUN_1000d407((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



// ============================================================
// FUN_1000d407 @ 0x1000d407 50B
// ============================================================

void __fastcall FUN_1000d407(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  GetCursorPos((LPPOINT)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}



// ============================================================
// FUN_1000d49d @ 0x1000d49d 27B
// ============================================================

HLOCAL __thiscall FUN_1000d49d(void *this,byte param_1)

{
  FUN_1000e805();
  if ((param_1 & 1) != 0) {
    FUN_1000d62a(this);
  }
  return this;
}



// ============================================================
// FUN_1000d4b8 @ 0x1000d4b8 27B
// ============================================================

HLOCAL __thiscall FUN_1000d4b8(void *this,byte param_1)

{
  FUN_1000e846();
  if ((param_1 & 1) != 0) {
    FUN_1000d62a(this);
  }
  return this;
}



// ============================================================
// FUN_1000d4d3 @ 0x1000d4d3 224B
// ============================================================

void FUN_1000d4d3(void)

{
  byte bVar1;
  LONG LVar2;
  uint uVar3;
  undefined1 *puVar4;
  int nWidth;
  int iVar5;
  int iVar6;
  undefined1 local_94 [132];
  int local_10;
  int local_c;
  byte *local_8;
  
  LVar2 = GetMenuCheckMarkDimensions();
  nWidth = (int)(short)LVar2;
  local_10 = (int)(short)((uint)LVar2 >> 0x10);
  if (0x20 < nWidth) {
    nWidth = 0x20;
  }
  iVar5 = nWidth + 0xf >> 4;
  iVar6 = ((nWidth + -4) / 2 + iVar5 * 0x10) - nWidth;
  if (0xc < iVar6) {
    iVar6 = 0xc;
  }
  if (0x20 < local_10) {
    local_10 = 0x20;
  }
  _memset(local_94,0xff,0x80);
  local_8 = &DAT_1000f644;
  local_c = 5;
  puVar4 = local_94 + (local_10 + -6 >> 1) * iVar5 * 2;
  do {
    bVar1 = *local_8;
    uVar3 = (uint)local_8 >> 0x10;
    local_8 = local_8 + 1;
    uVar3 = ~(CONCAT22((short)uVar3,(ushort)bVar1) << ((byte)iVar6 & 0x1f));
    puVar4[1] = (char)uVar3;
    *puVar4 = (char)(uVar3 >> 8);
    puVar4 = puVar4 + iVar5 * 2;
    local_c = local_c + -1;
  } while (local_c != 0);
  DAT_100181e0 = CreateBitmap(nWidth,local_10,1,1,local_94);
  if (DAT_100181e0 == (HBITMAP)0x0) {
    DAT_100181e0 = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7fe3);
  }
  return;
}



// ============================================================
// FUN_1000d5c6 @ 0x1000d5c6 70B
// ============================================================

undefined4 __thiscall FUN_1000d5c6(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)this;
  if (iVar3 == 0) {
    return 0;
  }
  if (iVar3 == param_1) {
    *(undefined4 *)this = *(undefined4 *)(*(int *)((int)this + 4) + param_1);
  }
  else {
    if (iVar3 == 0) {
      return 0;
    }
    iVar1 = *(int *)((int)this + 4);
    do {
      iVar2 = *(int *)(iVar1 + iVar3);
      if (iVar2 == param_1) break;
      iVar3 = iVar2;
    } while (iVar2 != 0);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar1 + iVar3) = *(undefined4 *)(iVar1 + param_1);
  }
  return 1;
}



// ============================================================
// FUN_1000d60c @ 0x1000d60c 30B
// ============================================================

HLOCAL FUN_1000d60c(SIZE_T param_1)

{
  HLOCAL pvVar1;
  
  pvVar1 = LocalAlloc(0x40,param_1);
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_1000846a();
  }
  return pvVar1;
}



// ============================================================
// FUN_1000d62a @ 0x1000d62a 20B
// ============================================================

void FUN_1000d62a(HLOCAL param_1)

{
  if (param_1 != (HLOCAL)0x0) {
    LocalFree(param_1);
  }
  return;
}



// ============================================================
// FUN_1000d63e @ 0x1000d63e 66B
// ============================================================

DWORD * __fastcall FUN_1000d63e(DWORD *param_1)

{
  DWORD DVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[6] = 4;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  DVar1 = TlsAlloc();
  *param_1 = DVar1;
  if (DVar1 == 0xffffffff) {
    FUN_1000846a();
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return param_1;
}



// ============================================================
// FUN_1000d680 @ 0x1000d680 87B
// ============================================================

void __fastcall FUN_1000d680(DWORD *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  HGLOBAL hMem;
  
  if (*param_1 != 0xffffffff) {
    TlsFree(*param_1);
  }
  puVar2 = (undefined4 *)param_1[5];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[1];
    FUN_1000d98d(param_1,puVar2,0);
    puVar2 = puVar1;
  }
  if ((LPCVOID)param_1[4] != (LPCVOID)0x0) {
    hMem = GlobalHandle((LPCVOID)param_1[4]);
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return;
}



// ============================================================
// FUN_1000d6d7 @ 0x1000d6d7 274B
// ============================================================

int __fastcall FUN_1000d6d7(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  byte *pbVar2;
  HGLOBAL pvVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  iVar5 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 8);
  if ((iVar5 <= iVar6) || ((*(byte *)(*(int *)(param_1 + 0x10) + iVar6 * 8) & 1) != 0)) {
    iVar6 = 1;
    if (1 < iVar5) {
      pbVar2 = *(byte **)(param_1 + 0x10);
      do {
        pbVar2 = pbVar2 + 8;
        if ((*pbVar2 & 1) == 0) break;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
      if (iVar6 < iVar5) goto LAB_1000d7bc;
    }
    iVar5 = iVar5 + 0x20;
    if (*(LPCVOID *)(param_1 + 0x10) == (LPCVOID)0x0) {
      pvVar3 = GlobalAlloc(0x2002,iVar5 * 8);
    }
    else {
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x10));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalReAlloc(pvVar3,iVar5 * 8,0x2002);
    }
    if (pvVar3 == (HGLOBAL)0x0) {
      hMem = GlobalHandle(*(LPCVOID *)(param_1 + 0x10));
      GlobalLock(hMem);
      LeaveCriticalSection(lpCriticalSection);
      FUN_1000846a();
    }
    pvVar4 = GlobalLock(pvVar3);
    _memset((void *)((int)pvVar4 + *(int *)(param_1 + 4) * 8),0,
            (*(int *)(param_1 + 4) * 0x1fffffff + iVar5) * 8);
    *(LPVOID *)(param_1 + 0x10) = pvVar4;
    *(int *)(param_1 + 4) = iVar5;
  }
LAB_1000d7bc:
  if (*(int *)(param_1 + 0xc) <= iVar6) {
    *(int *)(param_1 + 0xc) = iVar6 + 1;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 0x10) + iVar6 * 8);
  *puVar1 = *puVar1 | 1;
  *(int *)(param_1 + 8) = iVar6 + 1;
  LeaveCriticalSection(lpCriticalSection);
  return iVar6;
}



// ============================================================
// FUN_1000d7e9 @ 0x1000d7e9 93B
// ============================================================

void __thiscall FUN_1000d7e9(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  for (iVar2 = *(int *)((int)this + 0x14); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (param_1 < *(int *)(iVar2 + 8)) {
      puVar3 = *(undefined4 **)(*(int *)(iVar2 + 0xc) + param_1 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(*(int *)(iVar2 + 0xc) + param_1 * 4) = 0;
    }
  }
  puVar1 = (uint *)(*(int *)((int)this + 0x10) + param_1 * 8);
  *puVar1 = *puVar1 & 0xfffffffe;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}



// ============================================================
// FUN_1000d846 @ 0x1000d846 234B
// ============================================================

void __thiscall FUN_1000d846(void *this,int param_1,int param_2)

{
  undefined4 *lpTlsValue;
  HLOCAL pvVar1;
  int *piVar2;
  
  lpTlsValue = TlsGetValue(*(DWORD *)this);
  if (lpTlsValue == (undefined4 *)0x0) {
    lpTlsValue = FUN_1000d60c(0x10);
    if (lpTlsValue == (undefined4 *)0x0) {
      lpTlsValue = (undefined4 *)0x0;
    }
    else {
      *lpTlsValue = &PTR_FUN_1000f72c;
    }
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    piVar2 = lpTlsValue + 2;
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
    FUN_1000d5b3((void *)((int)this + 0x14),(int)lpTlsValue);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  }
  else {
    piVar2 = lpTlsValue + 2;
    if ((param_1 < *piVar2) || (param_2 == 0)) goto LAB_1000d91d;
  }
  if ((HLOCAL)lpTlsValue[3] == (HLOCAL)0x0) {
    pvVar1 = LocalAlloc(0,*(int *)((int)this + 0xc) << 2);
  }
  else {
    pvVar1 = LocalReAlloc((HLOCAL)lpTlsValue[3],*(int *)((int)this + 0xc) << 2,2);
  }
  lpTlsValue[3] = pvVar1;
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_1000846a();
  }
  _memset((void *)(lpTlsValue[3] + *piVar2 * 4),0,
          (*piVar2 * 0x3fffffff + *(int *)((int)this + 0xc)) * 4);
  *piVar2 = *(int *)((int)this + 0xc);
  TlsSetValue(*(DWORD *)this,lpTlsValue);
LAB_1000d91d:
  *(int *)(lpTlsValue[3] + param_1 * 4) = param_2;
  return;
}



// ============================================================
// FUN_1000d930 @ 0x1000d930 27B
// ============================================================

HLOCAL __thiscall FUN_1000d930(void *this,byte param_1)

{
  FUN_1000d94b();
  if ((param_1 & 1) != 0) {
    FUN_1000d62a(this);
  }
  return this;
}



// ============================================================
// FUN_1000d94c @ 0x1000d94c 65B
// ============================================================

void __thiscall FUN_1000d94c(void *this,undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  iVar2 = 1;
  if (1 < *(int *)((int)this + 0xc)) {
    do {
      pbVar1 = (byte *)(*(int *)((int)this + 0x10) + iVar2 * 8);
      if ((*(int *)(*(int *)((int)this + 0x10) + 4 + iVar2 * 8) == 0) && ((*pbVar1 & 1) != 0)) {
        *(undefined4 *)(pbVar1 + 4) = param_1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0xc));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}



// ============================================================
// FUN_1000d98d @ 0x1000d98d 153B
// ============================================================

void __thiscall FUN_1000d98d(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 1;
  bVar2 = true;
  if (1 < (int)param_1[2]) {
    do {
      if ((param_2 == 0) || (*(int *)(*(int *)((int)this + 0x10) + 4 + iVar3 * 8) == param_2)) {
        puVar1 = *(undefined4 **)(param_1[3] + iVar3 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(param_1[3] + iVar3 * 4) = 0;
      }
      else if (*(int *)(param_1[3] + iVar3 * 4) != 0) {
        bVar2 = false;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[2]);
    if (!bVar2) {
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  FUN_1000d5c6((void *)((int)this + 0x14),(int)param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  LocalFree((HLOCAL)param_1[3]);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  TlsSetValue(*(DWORD *)this,(LPVOID)0x0);
  return;
}



// ============================================================
// FUN_1000da26 @ 0x1000da26 89B
// ============================================================

void __thiscall FUN_1000da26(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  if (param_2 == 0) {
    puVar2 = TlsGetValue(*(DWORD *)this);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_1000d98d(this,puVar2,param_1);
    }
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x14);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[1];
      FUN_1000d98d(this,puVar2,param_1);
      puVar2 = puVar1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}



// ============================================================
// FUN_1000da7f @ 0x1000da7f 119B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x1000daa6) */

int __thiscall FUN_1000da7f(void *this,undefined *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  if (*(int *)this == 0) {
    if (DAT_100162a4 == (DWORD *)0x0) {
      DAT_100162a4 = FUN_1000d63e((DWORD *)&DAT_100162a8);
    }
    iVar1 = FUN_1000d6d7((int)DAT_100162a4);
    *(int *)this = iVar1;
  }
  iVar1 = *(int *)this;
  pvVar2 = TlsGetValue(*DAT_100162a4);
  if ((pvVar2 == (LPVOID)0x0) || (*(int *)((int)pvVar2 + 8) <= iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
  }
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1)();
    FUN_1000d846(DAT_100162a4,*(int *)this,iVar1);
  }
  return iVar1;
}



// ============================================================
// FUN_1000daf6 @ 0x1000daf6 45B
// ============================================================

undefined4 __fastcall FUN_1000daf6(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (DAT_100162a4 != (DWORD *)0x0)) {
    pvVar2 = TlsGetValue(*DAT_100162a4);
    if ((pvVar2 != (LPVOID)0x0) && (iVar1 < *(int *)((int)pvVar2 + 8))) {
      return *(undefined4 *)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
    }
  }
  return 0;
}



// ============================================================
// FUN_1000db23 @ 0x1000db23 30B
// ============================================================

void __fastcall FUN_1000db23(int *param_1)

{
  if ((*param_1 != 0) && (DAT_100162a4 != (void *)0x0)) {
    FUN_1000d7e9(DAT_100162a4,*param_1);
  }
  *param_1 = 0;
  return;
}



// ============================================================
// FUN_1000db41 @ 0x1000db41 75B
// ============================================================

int FUN_1000db41(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (*extraout_ECX == 0) {
    FUN_1000e216(0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*extraout_ECX == 0) {
      iVar1 = (**(code **)(unaff_EBP + 8))();
      *extraout_ECX = iVar1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_1000e286(0x10);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *extraout_ECX;
}



// ============================================================
// Catch@1000db8c @ 0x1000db8c 53B
// ============================================================

void Catch_1000db8c(void)

{
  int *extraout_ECX;
  
  FUN_1000e286(0x10);
  __CxxThrowException_8(0,0);
  if (*extraout_ECX != 0) {
    if ((undefined4 *)*extraout_ECX != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*extraout_ECX)(1);
    }
  }
  return;
}



// ============================================================
// FUN_1000dbc1 @ 0x1000dbc1 22B
// ============================================================

void FUN_1000dbc1(undefined4 param_1)

{
  if (DAT_100162a4 != (void *)0x0) {
    FUN_1000d94c(DAT_100162a4,param_1);
  }
  return;
}



// ============================================================
// FUN_1000dbd7 @ 0x1000dbd7 26B
// ============================================================

void FUN_1000dbd7(int param_1,int param_2)

{
  if (DAT_100162a4 != (void *)0x0) {
    FUN_1000da26(DAT_100162a4,param_1,param_2);
  }
  return;
}



// ============================================================
// FUN_1000dc20 @ 0x1000dc20 23B
// ============================================================

void __fastcall FUN_1000dc20(undefined4 *param_1)

{
  param_1[0x35] = 0xffffffff;
  param_1[0x41] = 0xffffffff;
  *param_1 = &PTR_FUN_1000f73c;
  return;
}



// ============================================================
// FUN_1000dc37 @ 0x1000dc37 27B
// ============================================================

HLOCAL __thiscall FUN_1000dc37(void *this,byte param_1)

{
  FUN_1000dc52();
  if ((param_1 & 1) != 0) {
    FUN_1000d62a(this);
  }
  return this;
}



// ============================================================
// FUN_1000dc52 @ 0x1000dc52 116B
// ============================================================

void FUN_1000dc52(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f73c;
  piVar1 = (int *)extraout_ECX[0x33];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x58))();
    if ((int *)extraout_ECX[0x33] != (int *)0x0) {
      (**(code **)(*(int *)extraout_ECX[0x33] + 4))(1);
    }
  }
  if ((HHOOK)extraout_ECX[0xc] != (HHOOK)0x0) {
    UnhookWindowsHookEx((HHOOK)extraout_ECX[0xc]);
  }
  if ((HHOOK)extraout_ECX[0xb] != (HHOOK)0x0) {
    UnhookWindowsHookEx((HHOOK)extraout_ECX[0xb]);
  }
  if ((undefined *)extraout_ECX[3] != (undefined *)0x0) {
    FUN_10003090((undefined *)extraout_ECX[3]);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000dcf7 @ 0x1000dcf7 99B
// ============================================================

void __thiscall FUN_1000dcf7(void *this,undefined1 param_1)

{
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x103c) = 0;
  *(undefined4 *)((int)this + 0x1040) = 0;
  *(undefined4 *)((int)this + 0x104c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1050) = 0;
  *(undefined4 *)((int)this + 0x1064) = 0;
  *(undefined4 *)((int)this + 0x1068) = 0;
  *(undefined ***)this = &PTR_FUN_1000f744;
  *(undefined4 *)((int)this + 0x28) = 0x1c;
  *(undefined4 *)((int)this + 0x20) = 0x14;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 0x1040) = 0x18;
  return;
}



// ============================================================
// FUN_1000dd5a @ 0x1000dd5a 27B
// ============================================================

HLOCAL __thiscall FUN_1000dd5a(void *this,byte param_1)

{
  FUN_1000dd75();
  if ((param_1 & 1) != 0) {
    FUN_1000d62a(this);
  }
  return this;
}



// ============================================================
// FUN_1000dd75 @ 0x1000dd75 117B
// ============================================================

void FUN_1000dd75(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f744;
  puVar1 = (undefined4 *)extraout_ECX[0x411];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if ((int *)extraout_ECX[0x41b] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0x41b] + 0xc))(extraout_ECX + 0x412);
    if ((int *)extraout_ECX[0x41b] != (int *)0x0) {
      (**(code **)(*(int *)extraout_ECX[0x41b] + 4))(1);
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_1000db23(extraout_ECX + 0x41c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000ddea @ 0x1000ddea 31B
// ============================================================

void __fastcall FUN_1000ddea(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_1000f74c;
  param_1[3] = 0x54;
  param_1[10] = FUN_100087c1;
  return;
}



// ============================================================
// FUN_1000de09 @ 0x1000de09 27B
// ============================================================

HLOCAL __thiscall FUN_1000de09(void *this,byte param_1)

{
  FUN_1000de24();
  if ((param_1 & 1) != 0) {
    FUN_1000d62a(this);
  }
  return this;
}



// ============================================================
// FUN_1000de24 @ 0x1000de24 174B
// ============================================================

void FUN_1000de24(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *extraout_ECX;
  void *pvVar3;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f74c;
  puVar1 = (undefined4 *)extraout_ECX[5];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if ((undefined4 *)extraout_ECX[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[6])(1);
  }
  if ((undefined4 *)extraout_ECX[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[7])(1);
  }
  if ((undefined4 *)extraout_ECX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[8])(1);
  }
  if ((undefined4 *)extraout_ECX[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)extraout_ECX[9])(1);
  }
  pvVar3 = (void *)extraout_ECX[0xe];
  if (pvVar3 != (void *)0x0) {
    while (*(int *)((int)pvVar3 + 0xc) != 0) {
      puVar2 = (undefined *)FUN_100084bc(pvVar3);
      FUN_10008804(puVar2);
      pvVar3 = (void *)extraout_ECX[0xe];
    }
  }
  if ((int *)extraout_ECX[0xc] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xc] + 4))(1);
  }
  if ((int *)extraout_ECX[0xd] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xd] + 4))(1);
  }
  if ((int *)extraout_ECX[0xe] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xe] + 4))(1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000def3 @ 0x1000def3 38B
// ============================================================

void FUN_1000def3(void)

{
  int iVar1;
  
  iVar1 = FUN_1000da7f(&DAT_100162e0,&LAB_1000d43f);
  if (*(int *)(iVar1 + 4) == 0) {
    FUN_1000db41();
  }
  return;
}



// ============================================================
// AfxGetModuleThreadState @ 0x1000df19 23B
// ============================================================

/* Library Function - Single Match
    class AFX_MODULE_THREAD_STATE * __stdcall AfxGetModuleThreadState(void)
   
   Library: Visual Studio 2003 Release */

AFX_MODULE_THREAD_STATE * AfxGetModuleThreadState(void)

{
  int iVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  iVar1 = FUN_1000def3();
  pAVar2 = (AFX_MODULE_THREAD_STATE *)FUN_1000da7f((void *)(iVar1 + 0x1070),&LAB_1000d37d);
  return pAVar2;
}



// ============================================================
// Unlock @ 0x1000df30 53B
// ============================================================

/* Library Function - Single Match
    public: void __thiscall CTypeLibCache::Unlock(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall CTypeLibCache::Unlock(CTypeLibCache *this)

{
  int *piVar1;
  LONG LVar2;
  
  LVar2 = InterlockedDecrement((LONG *)(this + 0x20));
  if (LVar2 == 0) {
    piVar1 = *(int **)(this + 0x1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(this + 0x1c) = 0;
    }
    piVar1 = *(int **)(this + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(this + 8) = 0;
    }
  }
  return;
}



// ============================================================
// FUN_1000df8d @ 0x1000df8d 27B
// ============================================================

HLOCAL __thiscall FUN_1000df8d(void *this,byte param_1)

{
  thunk_FUN_1000dd75();
  if ((param_1 & 1) != 0) {
    FUN_1000d62a(this);
  }
  return this;
}



// ============================================================
// FUN_1000dfad @ 0x1000dfad 99B
// ============================================================

undefined4 FUN_1000dfad(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UINT UVar1;
  int iVar2;
  
  UVar1 = SetErrorMode(0);
  SetErrorMode(UVar1 | 0x8001);
  iVar2 = FUN_1000def3();
  *(undefined4 *)(iVar2 + 8) = param_1;
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  iVar2 = FUN_1000def3();
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x68) = param_1;
    *(undefined4 *)(iVar2 + 0x6c) = param_2;
    *(undefined4 *)(iVar2 + 0x70) = param_3;
    *(undefined4 *)(iVar2 + 0x74) = param_4;
    FUN_1000e010(iVar2);
  }
  iVar2 = FUN_1000def3();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    FUN_10008a11();
  }
  return 1;
}



// ============================================================
// FUN_1000e010 @ 0x1000e010 285B
// ============================================================

void __fastcall FUN_1000e010(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint local_310 [64];
  uint local_210 [65];
  uint local_10c [65];
  byte *local_8;
  
  iVar2 = FUN_1000def3();
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x68);
  GetModuleFileNameA(*(HMODULE *)(param_1 + 0x68),(LPSTR)local_210,0x104);
  local_8 = FUN_100035fb((byte *)local_210,0x2e);
  *local_8 = 0;
  FUN_1000e12d((byte *)local_210,(LPSTR)local_10c,0x104);
  if (*(int *)(param_1 + 0x88) == 0) {
    puVar3 = FUN_100031df(local_10c);
    *(uint **)(param_1 + 0x88) = puVar3;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar4 = FUN_1000c420(0xe000,(LPSTR)local_310,0x100);
    if (iVar4 == 0) {
      puVar3 = *(uint **)(param_1 + 0x88);
    }
    else {
      puVar3 = local_310;
    }
    puVar3 = FUN_100031df(puVar3);
    *(uint **)(param_1 + 0x78) = puVar3;
  }
  pbVar1 = local_8;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x8c) == 0) {
    lstrcpyA((LPSTR)local_8,".HLP");
    puVar3 = FUN_100031df(local_210);
    *(uint **)(param_1 + 0x8c) = puVar3;
    *pbVar1 = 0;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    lstrcatA((LPSTR)local_10c,".INI");
    puVar3 = FUN_100031df(local_10c);
    *(uint **)(param_1 + 0x90) = puVar3;
  }
  return;
}



// ============================================================
// FUN_1000e12d @ 0x1000e12d 86B
// ============================================================

int FUN_1000e12d(byte *param_1,LPSTR param_2,int param_3)

{
  byte bVar1;
  byte *lpString2;
  int iVar2;
  
  lpString2 = param_1;
  for (; *param_1 != 0; param_1 = FUN_1000366d(param_1)) {
    bVar1 = *param_1;
    if (((bVar1 == 0x5c) || (bVar1 == 0x2f)) || (bVar1 == 0x3a)) {
      lpString2 = FUN_1000366d(param_1);
    }
  }
  if (param_2 == (LPSTR)0x0) {
    iVar2 = lstrlenA((LPCSTR)lpString2);
    iVar2 = iVar2 + 1;
  }
  else {
    lstrcpynA(param_2,(LPCSTR)lpString2,param_3);
    iVar2 = 0;
  }
  return iVar2;
}



// ============================================================
// FUN_1000e183 @ 0x1000e183 69B
// ============================================================

int FUN_1000e183(void)

{
  DWORD DVar1;
  
  if (DAT_100164dc == 0) {
    DAT_100164dc = 1;
    DVar1 = GetVersion();
    if (((byte)DVar1 < 4) && ((DVar1 & 0x80000000) != 0)) {
      DAT_100164d8 = 1;
    }
    else {
      DAT_100164d8 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_10016328);
    }
  }
  return DAT_100164dc;
}



// ============================================================
// FUN_1000e1c8 @ 0x1000e1c8 78B
// ============================================================

void FUN_1000e1c8(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  
  if ((DAT_100164dc != 0) && (DAT_100164dc = DAT_100164dc + -1, DAT_100164d8 == 0)) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_10016328);
    piVar1 = &DAT_100162e4;
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_10016340;
    do {
      if (*piVar1 != 0) {
        DeleteCriticalSection(lpCriticalSection);
        *piVar1 = *piVar1 + -1;
      }
      lpCriticalSection = lpCriticalSection + 1;
      piVar1 = piVar1 + 1;
    } while ((int)lpCriticalSection < 0x100164d8);
  }
  return;
}



// ============================================================
// FUN_1000e216 @ 0x1000e216 112B
// ============================================================

void FUN_1000e216(int param_1)

{
  int *piVar1;
  
  if (DAT_100164dc == 0) {
    FUN_1000e183();
  }
  if (DAT_100164d8 == 0) {
    piVar1 = &DAT_100162e4 + param_1;
    if ((&DAT_100162e4)[param_1] == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10016328);
      if (*piVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_10016340 + param_1 * 0x18));
        *piVar1 = *piVar1 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10016328);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10016340 + param_1 * 0x18));
  }
  return;
}



// ============================================================
// FUN_1000e286 @ 0x1000e286 33B
// ============================================================

void FUN_1000e286(int param_1)

{
  if (DAT_100164d8 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10016340 + param_1 * 0x18));
  }
  return;
}



// ============================================================
// FUN_1000e317 @ 0x1000e317 148B
// ============================================================

HKEY __fastcall FUN_1000e317(int param_1)

{
  LSTATUS LVar1;
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_10 = (HKEY)0x0;
  local_8 = (HKEY)0x0;
  local_c = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"software",0,0x2001f,&local_8);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_8,*(LPCSTR *)(param_1 + 0x7c),0,(LPSTR)0x0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_14);
    if (LVar1 == 0) {
      RegCreateKeyExA(local_c,*(LPCSTR *)(param_1 + 0x90),0,(LPSTR)0x0,0,0x2001f,
                      (LPSECURITY_ATTRIBUTES)0x0,&local_10,&local_14);
    }
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  return local_10;
}



// ============================================================
// GetSectionKey @ 0x1000e3ab 70B
// ============================================================

/* Library Function - Multiple Matches With Same Base Name
    public: struct HKEY__ * __thiscall CWinApp::GetSectionKey(char const *)
    public: struct HKEY__ * __thiscall CWinApp::GetSectionKey(wchar_t const *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release */

HKEY __thiscall GetSectionKey(void *this,LPCSTR param_1)

{
  HKEY hKey;
  void *local_c;
  HKEY local_8;
  
  local_8 = (HKEY)0x0;
  local_c = this;
  hKey = FUN_1000e317((int)this);
  if (hKey == (HKEY)0x0) {
    local_8 = (HKEY)0x0;
  }
  else {
    RegCreateKeyExA(hKey,param_1,0,(LPSTR)0x0,0,0x2001f,(LPSECURITY_ATTRIBUTES)0x0,&local_8,
                    (LPDWORD)&local_c);
    RegCloseKey(hKey);
  }
  return local_8;
}



// ============================================================
// FUN_1000e4c4 @ 0x1000e4c4 32B
// ============================================================

undefined4 * __thiscall FUN_1000e4c4(void *this,byte param_1)

{
  thunk_FUN_1000c7df();
  if ((param_1 & 1) != 0) {
    FUN_100028a9(&DAT_10016818,this);
  }
  return this;
}



// ============================================================
// FUN_1000e50b @ 0x1000e50b 32B
// ============================================================

undefined4 * __thiscall FUN_1000e50b(void *this,byte param_1)

{
  FUN_1000e52b();
  if ((param_1 & 1) != 0) {
    FUN_100028a9(&DAT_100167f0,this);
  }
  return this;
}



// ============================================================
// FUN_1000e52b @ 0x1000e52b 41B
// ============================================================

void FUN_1000e52b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1000f9b8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1000cc51((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000e652 @ 0x1000e652 32B
// ============================================================

CWnd * __thiscall FUN_1000e652(void *this,byte param_1)

{
  CWnd::~CWnd(this);
  if ((param_1 & 1) != 0) {
    FUN_100028a9(&DAT_10018048,this);
  }
  return this;
}



// ============================================================
// FUN_1000e718 @ 0x1000e718 48B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e718(void)

{
  if (DAT_100181ec != 0) {
    _DAT_10018190 = GetSystemMetrics(2);
    _DAT_10018190 = _DAT_10018190 + 1;
    _DAT_10018194 = GetSystemMetrics(3);
    _DAT_10018194 = _DAT_10018194 + 1;
    _DAT_100181f8 = 1;
  }
  return;
}



// ============================================================
// FUN_1000e748 @ 0x1000e748 34B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000e748(void)

{
  _DAT_10018190 = GetSystemMetrics(2);
  _DAT_10018194 = GetSystemMetrics(3);
  _DAT_100181f8 = 0;
  return;
}



// ============================================================
// FUN_1000e76a @ 0x1000e76a 155B
// ============================================================

int __fastcall FUN_1000e76a(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  HCURSOR pHVar3;
  int iVar4;
  
  DVar2 = GetVersion();
  *(DWORD *)(param_1 + 0x54) = (DVar2 >> 8 & 0xff) + (DVar2 & 0xff) * 0x100;
  *(DWORD *)(param_1 + 0x58) = DVar2 >> 0x1f;
  uVar1 = (uint)(3 < (byte)DVar2);
  *(uint *)(param_1 + 0x5c) = uVar1;
  *(uint *)(param_1 + 0x60) = 1 - uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (uVar1 != 0) {
    DVar2 = GetProcessVersion(0);
    *(uint *)(param_1 + 0x68) = (uint)(0x3ffff < DVar2);
  }
  FUN_1000c344(param_1);
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_1000c300(param_1);
  pHVar3 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  *(HCURSOR *)(param_1 + 0x3c) = pHVar3;
  pHVar3 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  *(HCURSOR *)(param_1 + 0x40) = pHVar3;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  iVar4 = (*(int *)(param_1 + 0x5c) != 0) + 1;
  *(int *)(param_1 + 0x10) = iVar4;
  *(int *)(param_1 + 0x14) = iVar4;
  return param_1;
}



// ============================================================
// FUN_1000e805 @ 0x1000e805 65B
// ============================================================

void FUN_1000e805(void)

{
  code *pcVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f610;
  pcVar1 = (code *)extraout_ECX[4];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0);
  }
  if ((HMODULE)extraout_ECX[2] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)extraout_ECX[2]);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000e846 @ 0x1000e846 54B
// ============================================================

void FUN_1000e846(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f618;
  iVar2 = DAT_10018200;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar2 != 0) && (pcVar1 = *(code **)(iVar2 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(extraout_ECX);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000e8ce @ 0x1000e8ce 35B
// ============================================================

bool FUN_1000e8ce(void)

{
  UINT CodePage;
  _cpinfo *lpCPInfo;
  _cpinfo local_18;
  
  lpCPInfo = &local_18;
  CodePage = GetOEMCP();
  GetCPInfo(CodePage,lpCPInfo);
  return 1 < local_18.MaxCharSize;
}



// ============================================================
// FUN_1000e93d @ 0x1000e93d 32B
// ============================================================

undefined4 * __thiscall FUN_1000e93d(void *this,byte param_1)

{
  FUN_1000e95d();
  if ((param_1 & 1) != 0) {
    FUN_100028a9(&DAT_10018210,this);
  }
  return this;
}



// ============================================================
// FUN_1000e95d @ 0x1000e95d 41B
// ============================================================

void FUN_1000e95d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_100100b4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1000c516((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000e9cc @ 0x1000e9cc 45B
// ============================================================

void FUN_1000e9cc(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f4c0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1000c656(extraout_ECX + 1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// AfxPostQuitMessage @ 0x1000e9f9 35B
// ============================================================

/* Library Function - Single Match
    void __stdcall AfxPostQuitMessage(int)
   
   Library: Visual Studio 1998 Release */

void AfxPostQuitMessage(int param_1)

{
  CWinThread *pCVar1;
  
  pCVar1 = AfxGetThread();
  if ((pCVar1 != (CWinThread *)0x0) && (*(code **)(pCVar1 + 0x54) != (code *)0x0)) {
    (**(code **)(pCVar1 + 0x54))(1,1);
  }
  PostQuitMessage(param_1);
  return;
}



// ============================================================
// ~CWinThread @ 0x1000ea1c 79B
// ============================================================

/* Library Function - Single Match
    public: virtual __thiscall CWinThread::~CWinThread(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CWinThread::~CWinThread(CWinThread *this)

{
  HANDLE hObject;
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_100031c0();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1000f590;
  hObject = (HANDLE)extraout_ECX[10];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (hObject != (HANDLE)0x0) {
    CloseHandle(hObject);
  }
  pAVar1 = AfxGetModuleThreadState();
  if (*(undefined4 **)(pAVar1 + 4) == extraout_ECX) {
    *(undefined4 *)(pAVar1 + 4) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_10009058();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000ea6b @ 0x1000ea6b 181B
// ============================================================

void FUN_1000ea6b(void)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *lpClassName;
  
  iVar2 = FUN_1000def3();
  FUN_1000e216(1);
  lpClassName = (byte *)(iVar2 + 0x34);
  while (*lpClassName != 0) {
    pbVar3 = FUN_10003564(lpClassName,10);
    *pbVar3 = 0;
    iVar4 = FUN_1000def3();
    UnregisterClassA((LPCSTR)lpClassName,*(HINSTANCE *)(iVar4 + 8));
    lpClassName = pbVar3 + 1;
  }
  *(byte *)(iVar2 + 0x34) = 0;
  FUN_1000e286(1);
  iVar2 = FUN_1000def3();
  if ((*(int *)(iVar2 + 4) != 0) &&
     (pcVar1 = *(code **)(*(int *)(iVar2 + 4) + 0x54), pcVar1 != (code *)0x0)) {
    (*pcVar1)(1,0);
  }
  iVar2 = FUN_1000dcc6();
  if (*(int **)(iVar2 + 0xcc) != (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(iVar2 + 0xcc) + 0xb8))();
    if (iVar4 != 0) {
      *(undefined4 *)(iVar2 + 0xcc) = 0;
    }
  }
  iVar4 = FUN_1000def3();
  if (*(char *)(iVar4 + 0x14) == '\0') {
    if (*(HHOOK *)(iVar2 + 0x30) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(iVar2 + 0x30));
      *(undefined4 *)(iVar2 + 0x30) = 0;
    }
    if (*(HHOOK *)(iVar2 + 0x2c) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(iVar2 + 0x2c));
      *(undefined4 *)(iVar2 + 0x2c) = 0;
    }
  }
  return;
}



