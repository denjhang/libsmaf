// ============================================================
// FUN_10001010 @ 0x10001010 30B
// ============================================================

undefined4 * __thiscall FUN_10001010(void *this,byte param_1)

{
  FUN_10001030(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10001040 @ 0x10001040 295B
// ============================================================

uint FUN_10001040(LPCSTR param_1,int param_2,byte *param_3)

{
  WCHAR WVar1;
  byte bVar2;
  LPWSTR lpWideCharStr;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  LPWSTR pWVar7;
  byte *pbVar8;
  byte local_200 [512];
  
  pbVar8 = local_200;
  for (iVar4 = 0x80; iVar4 != 0; iVar4 = iVar4 + -1) {
    pbVar8[0] = 0;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8 = pbVar8 + 4;
  }
  lpWideCharStr = FUN_10014cb8(param_2 * 2 + 0x14);
  iVar4 = MultiByteToWideChar(0,8,param_1,param_2,lpWideCharStr,0);
  if (0 < iVar4) {
    iVar3 = MultiByteToWideChar(0,8,param_1,param_2,lpWideCharStr,iVar4);
    if (iVar4 == iVar3) {
      uVar6 = 0;
      pWVar7 = lpWideCharStr;
      if (0 < iVar4) {
        do {
          WVar1 = *pWVar7;
          if ((ushort)WVar1 < 0x80) {
            local_200[uVar6] = (byte)WVar1;
          }
          else {
            if ((ushort)WVar1 < 0x800) {
              bVar2 = (byte)((ushort)WVar1 >> 6) & 0x1f | 0xc0;
              uVar5 = uVar6;
            }
            else {
              local_200[uVar6] = (byte)((ushort)WVar1 >> 0xc) | 0xe0;
              uVar5 = uVar6 + 1;
              bVar2 = (byte)((ushort)WVar1 >> 6) & 0x3f | 0x80;
            }
            WVar1 = *pWVar7;
            local_200[uVar5] = bVar2;
            uVar6 = uVar5 + 1;
            local_200[uVar5 + 1] = (byte)WVar1 & 0x3f | 0x80;
          }
          uVar6 = uVar6 + 1;
          iVar4 = iVar4 + -1;
          pWVar7 = pWVar7 + 1;
        } while (iVar4 != 0);
      }
      FUN_10014ce1((undefined *)lpWideCharStr);
      pbVar8 = local_200;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)param_3 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + 4;
        param_3 = param_3 + 4;
      }
      for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *param_3 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        param_3 = param_3 + 1;
      }
      return uVar6;
    }
    FUN_10014ce1((undefined *)lpWideCharStr);
    return 0;
  }
  FUN_10014ce1((undefined *)lpWideCharStr);
  return 0;
}



// ============================================================
// FUN_10001190 @ 0x10001190 30B
// ============================================================

undefined4 * __thiscall FUN_10001190(void *this,byte param_1)

{
  FUN_100011b0(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_100011d0 @ 0x100011d0 1887B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x1000164e) */
/* WARNING: Removing unreachable block (ram,0x10001651) */

int __thiscall FUN_100011d0(void *this,undefined *param_1,undefined4 param_2,uint *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int *piVar11;
  byte local_272;
  byte local_271;
  byte *local_270;
  void *local_26c;
  int local_268;
  int *local_264;
  uint local_260;
  int local_25c;
  uint local_258;
  undefined4 local_254;
  undefined **local_250;
  undefined *local_24c;
  undefined4 local_248;
  undefined4 local_244;
  char local_240;
  undefined **local_23c;
  undefined4 *local_238;
  undefined4 local_220 [5];
  uint local_20c;
  uint local_1e4;
  undefined4 local_1e0 [5];
  int local_1cc [16];
  int local_18c [16];
  int local_14c [16];
  undefined1 local_10c [4];
  byte abStack_108 [188];
  int local_4c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c5a2;
  pvStack_c = ExceptionList;
  local_268 = 1;
  ExceptionList = &pvStack_c;
  local_26c = this;
  FUN_100011c0((int)this);
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  FUN_10002210(local_220);
  local_4 = 0;
  iVar5 = FUN_10002360(local_220,(int)param_1);
  if (iVar5 != 1) {
    if (param_3 != (uint *)0x0) {
      *param_3 = 2;
    }
    goto LAB_100018fd;
  }
  local_25c = 0;
  FUN_100146ad(&local_23c,10);
  local_23c = &PTR_LAB_1001e3b8;
  piVar11 = local_14c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_1000b7f8(local_10c,0xc,0x10,&LAB_100019c0);
  piVar11 = local_18c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_1cc;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  piVar11 = local_4c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar11 = 0x1010101;
    piVar11 = piVar11 + 1;
  }
  local_258 = 0;
  if (local_20c != 0) {
    do {
      uVar10 = local_258;
      iVar5 = FUN_100025e0(local_220,local_258);
      local_254 = CONCAT31(local_254._1_3_,*(undefined1 *)(iVar5 + 4));
      switch(*(undefined1 *)(iVar5 + 4)) {
      case 0:
        iVar5 = FUN_100025e0(local_220,uVar10);
        iVar5 = *(int *)(iVar5 + 0xc);
        iVar6 = FUN_100025e0(local_220,uVar10);
        pbVar9 = *(byte **)(iVar6 + 0x20);
        if (pbVar9 == (byte *)0x0) {
          pbVar9 = (byte *)(iVar6 + 0x10);
        }
        if (iVar5 == 3) {
          uVar8 = (uint)*pbVar9;
          if ((*pbVar9 & 0xf0) == 0xb0) {
            bVar4 = pbVar9[1];
            if (bVar4 == 0) {
              abStack_108[(uVar8 & 0xf) * 0xc] = pbVar9[2];
            }
            else if (bVar4 == 0x20) {
              abStack_108[(uVar8 & 0xf) * 0xc + 1] = pbVar9[2];
            }
            else if ((bVar4 == 0x7e) && (pbVar9[2] == 1)) {
              local_14c[uVar8 & 0xf] = 1;
              *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 8;
            }
          }
        }
        else if ((iVar5 == 2) && ((*pbVar9 & 0xf0) == 0xc0)) {
          abStack_108[(*pbVar9 & 0xf) * 0xc + 2] = pbVar9[1];
          local_4c[*pbVar9 & 0xf] = 1;
        }
        break;
      case 1:
        iVar5 = FUN_100025e0(local_220,uVar10);
        local_270 = *(byte **)(iVar5 + 0x20);
        if (local_270 == (byte *)0x0) {
          local_270 = (byte *)(iVar5 + 0x10);
        }
        uVar8 = *local_270 & 0xf;
        if ((local_14c[uVar8] != 0) && (local_264 = local_4c + uVar8, local_4c[uVar8] != 0)) {
          iVar5 = uVar8 * 0xc;
          bVar4 = abStack_108[iVar5];
          if (bVar4 == 0) {
            if (uVar8 == 9) {
              switch(local_270[1]) {
              case 0x1f:
              case 0x21:
              case 0x23:
              case 0x24:
              case 0x26:
              case 0x28:
              case 0x29:
              case 0x2a:
              case 0x2b:
              case 0x2c:
              case 0x2d:
              case 0x2e:
              case 0x2f:
              case 0x30:
              case 0x31:
              case 0x32:
              case 0x33:
              case 0x37:
              case 0x39:
              case 0x3b:
switchD_100015f7_caseD_1f:
                local_1cc[uVar8] = 1;
                goto LAB_100016b4;
              }
            }
switchD_100015f7_caseD_20:
            local_18c[uVar8] = 1;
          }
          else if (bVar4 == 0x7c) {
            bVar4 = abStack_108[iVar5 + 1];
            puVar7 = local_238;
            if (bVar4 == 10) goto switchD_100015f7_caseD_20;
            while (puVar7 != (undefined4 *)0x0) {
              puVar1 = (undefined4 *)*puVar7;
              iVar6 = puVar7[2];
              puVar7 = puVar1;
              if (((*(byte *)(iVar6 + 4) == abStack_108[iVar5]) && (*(byte *)(iVar6 + 5) == bVar4))
                 && (*(byte *)(iVar6 + 6) == abStack_108[iVar5 + 2])) {
                if (*(char *)(iVar6 + 8) == '\0') {
                  local_18c[uVar8] = 1;
                }
                else if (*(char *)(iVar6 + 8) == '\x01') {
                  local_1cc[uVar8] = 1;
                }
              }
            }
          }
          else if (bVar4 == 0x7d) {
            bVar4 = abStack_108[iVar5 + 2];
            puVar7 = local_238;
            if (bVar4 == 10) {
              switch(local_270[1]) {
              case 0x1f:
              case 0x21:
              case 0x23:
              case 0x24:
              case 0x26:
              case 0x28:
              case 0x29:
              case 0x2a:
              case 0x2b:
              case 0x2c:
              case 0x2d:
              case 0x2e:
              case 0x2f:
              case 0x30:
              case 0x31:
              case 0x32:
              case 0x33:
              case 0x34:
              case 0x37:
              case 0x39:
              case 0x3b:
                goto switchD_100015f7_caseD_1f;
              }
              goto switchD_100015f7_caseD_20;
            }
            while (puVar7 != (undefined4 *)0x0) {
              puVar1 = (undefined4 *)*puVar7;
              iVar6 = puVar7[2];
              puVar7 = puVar1;
              if (((*(byte *)(iVar6 + 4) == abStack_108[iVar5]) &&
                  (*(byte *)(iVar6 + 5) == abStack_108[iVar5 + 1])) &&
                 (*(byte *)(iVar6 + 6) == bVar4)) {
                if (*(char *)(iVar6 + 8) == '\0') {
                  local_18c[uVar8] = 1;
                }
                else if ((*(char *)(iVar6 + 8) == '\x01') && (*(byte *)(iVar6 + 7) == local_270[1]))
                {
                  local_1cc[uVar8] = 1;
                }
              }
            }
          }
LAB_100016b4:
          *local_264 = 0;
          this = local_26c;
          uVar10 = local_258;
        }
        break;
      case 4:
        puVar7 = FUN_10014cb8(0xc);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = &PTR_LAB_1001e3b4;
          *(undefined1 *)(puVar7 + 1) = 0;
          *(undefined1 *)((int)puVar7 + 5) = 0;
          *(undefined1 *)((int)puVar7 + 6) = 0;
          *(undefined1 *)((int)puVar7 + 7) = 0;
          *(undefined1 *)(puVar7 + 2) = 0;
        }
        iVar6 = FUN_100025e0(local_220,uVar10);
        iVar5 = *(int *)(iVar6 + 0x20);
        if (iVar5 == 0) {
          iVar5 = iVar6 + 0x10;
        }
        *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(iVar5 + 7);
        *(undefined1 *)((int)puVar7 + 5) = *(undefined1 *)(iVar5 + 8);
        *(undefined1 *)((int)puVar7 + 6) = *(undefined1 *)(iVar5 + 9);
        *(undefined1 *)((int)puVar7 + 7) = *(undefined1 *)(iVar5 + 10);
        *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(iVar5 + 0xb);
        AddTail(&local_23c,puVar7);
        break;
      case 5:
        FUN_100025e0(local_220,uVar10);
        iVar6 = FUN_100025e0(local_220,uVar10);
        iVar5 = *(int *)(iVar6 + 0x20);
        if (iVar5 == 0) {
          iVar5 = iVar6 + 0x10;
        }
        local_260 = CONCAT31(local_260._1_3_,*(byte *)(iVar5 + 9)) & 0xffffff03;
        bVar4 = *(byte *)(iVar5 + 9) & 3;
        if (bVar4 == 2) {
          *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 1;
        }
        else if (bVar4 == 3) {
          *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
        }
        break;
      case 6:
        iVar6 = FUN_100025e0(local_220,uVar10);
        iVar5 = *(int *)(iVar6 + 0x20);
        if (iVar5 == 0) {
          iVar5 = iVar6 + 0x10;
        }
        if (*(char *)(iVar5 + 9) == '2') {
          local_25c = 0;
        }
        else if (*(char *)(iVar5 + 9) == '3') {
          local_25c = 1;
        }
        break;
      case 8:
        iVar5 = FUN_100025e0(local_220,uVar10);
        if (*(uint *)(iVar5 + 8) < local_1e4) {
          *(undefined4 *)((int)this + 0xc) = 2;
        }
        else {
          *(undefined4 *)((int)this + 0xc) = 1;
        }
      }
      local_258 = uVar10 + 1;
    } while (local_258 < local_20c);
  }
  bVar2 = false;
  bVar3 = false;
  iVar5 = 0;
  do {
    if (*(int *)((int)local_14c + iVar5) == 1) {
      if (*(int *)((int)local_18c + iVar5) == 1) {
        bVar2 = true;
      }
      if (*(int *)((int)local_1cc + iVar5) == 1) {
        bVar3 = true;
      }
    }
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x40);
  if ((bVar2) || (bVar3)) {
    FUN_100026e0(local_1e0);
    local_24c = param_1;
    local_250 = &PTR_FUN_1001e3b0;
    local_248 = param_2;
    local_244 = 0;
    local_240 = '\0';
    local_4._0_1_ = 4;
    FUN_100027a0(local_1e0,(uint)&local_250);
    local_4._0_1_ = 3;
    local_250 = &PTR_FUN_1001e3b0;
    if ((local_24c != (undefined *)0x0) && (local_240 != '\0')) {
      FUN_1000b70f(local_24c);
    }
    iVar5 = local_25c;
    local_268 = FUN_10002840(local_1e0,(char)local_25c,'\0',&local_272,&local_271,&local_264,
                             &local_260);
    if (local_268 == 1) {
      uVar10 = *(uint *)((int)local_26c + 8);
      uVar8 = uVar10 | 1;
      *(uint *)((int)local_26c + 8) = uVar8;
      if (bVar2) {
        if (iVar5 == 0) {
          if (0x10 < local_272) goto LAB_10001808;
        }
        else if ((iVar5 == 1) && (0x20 < local_272)) {
LAB_10001808:
          *(uint *)((int)local_26c + 8) = CONCAT31((int3)(uVar10 >> 8),(char)uVar8) | 0x10;
        }
      }
      if ((((bVar3) && (-1 < iVar5)) && (iVar5 < 2)) && (8 < local_271)) {
        *(uint *)((int)local_26c + 8) = *(uint *)((int)local_26c + 8) | 0x10;
      }
    }
    else {
      if (local_264 == (int *)0x0) {
        if (local_260 < 0x80000000) {
          if (local_260 == 0) goto LAB_1000185f;
          uVar10 = *(uint *)((int)local_26c + 8) | 0x12;
        }
        else {
          uVar10 = *(uint *)((int)local_26c + 8) | 0x14;
        }
        *(uint *)((int)local_26c + 8) = uVar10;
        local_268 = 1;
      }
LAB_1000185f:
      if (param_3 != (uint *)0x0) {
        if (local_264 == (int *)0x0) {
          if (0x7fffffff < local_260) {
            *param_3 = local_260;
          }
        }
        else {
          *param_3 = (-(uint)(local_264 != (int *)0x3) & 0xfffffffe) + 3;
        }
      }
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_10002720(local_1e0);
  }
  while (local_238 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)*local_238;
    piVar11 = local_238 + 2;
    local_238 = puVar7;
    if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar11)(1);
    }
  }
  RemoveAll((int)&local_23c);
  local_4._0_1_ = 1;
  FUN_1000b61b(local_10c,0xc,0x10,&LAB_100019e0);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1001470c();
LAB_100018fd:
  local_4 = 0xffffffff;
  FUN_100022b0(local_220);
  ExceptionList = pvStack_c;
  return local_268;
}



// ============================================================
// FUN_10001a10 @ 0x10001a10 28B
// ============================================================

void __fastcall FUN_10001a10(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1001e3b0;
  if (((undefined *)param_1[1] != (undefined *)0x0) && (*(char *)(param_1 + 4) != '\0')) {
    FUN_1000b70f((undefined *)param_1[1]);
  }
  return;
}



// ============================================================
// FUN_10001a30 @ 0x10001a30 54B
// ============================================================

undefined4 * __thiscall FUN_10001a30(void *this,byte param_1)

{
  *(undefined ***)this = &PTR_FUN_1001e3b0;
  if ((*(undefined **)((int)this + 4) != (undefined *)0x0) && (*(char *)((int)this + 0x10) != '\0'))
  {
    FUN_1000b70f(*(undefined **)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10001ab0 @ 0x10001ab0 30B
// ============================================================

undefined4 * __thiscall FUN_10001ab0(void *this,byte param_1)

{
  FUN_10001ad0(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10001ad0 @ 0x10001ad0 32B
// ============================================================

void __fastcall FUN_10001ad0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1001e3c4;
  if ((HMODULE)param_1[1] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}



// ============================================================
// FUN_10001af0 @ 0x10001af0 146B
// ============================================================

undefined4 __thiscall
FUN_10001af0(void *this,undefined4 param_1,undefined4 param_2,LPCSTR param_3,int param_4)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 uVar2;
  LPCSTR local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001c5c0;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffd8;
  ExceptionList = &pvStack_10;
  FUN_10001d20(&param_3,param_3);
  local_8 = 0;
  FUN_10001e90(&local_18,param_4);
  if (*(int *)(param_3 + -8) != 0) {
    if (*(HMODULE *)((int)this + 4) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)((int)this + 4));
    }
    hModule = LoadLibraryA(param_3);
    *(HMODULE *)((int)this + 4) = hModule;
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,local_18);
      if (pFVar1 != (FARPROC)0x0) {
        local_8 = CONCAT31(local_8._1_3_,2);
        (*pFVar1)(param_1,0x14);
        uVar2 = FUN_10001b8b();
        return uVar2;
      }
    }
  }
  local_8 = local_8 & 0xffffff00;
  FUN_10014f77((int *)&local_18);
  local_8 = 0xffffffff;
  FUN_10014f77((int *)&param_3);
  ExceptionList = pvStack_10;
  return 0;
}



// ============================================================
// FUN_10001b8b @ 0x10001b8b 55B
// ============================================================

void FUN_10001b8b(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_10014f77((int *)(unaff_EBP + -0x14));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_10014f77((int *)(unaff_EBP + 0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10001bd0 @ 0x10001bd0 182B
// ============================================================

undefined4 __thiscall FUN_10001bd0(void *this,LPCSTR param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  undefined4 uVar2;
  LPCSTR local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c5e0;
  local_c = ExceptionList;
  uVar2 = 0;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_10001d20(&param_1,param_1);
  local_4 = 0;
  FUN_10001e90(&local_10,param_2);
  if (*(int *)(param_1 + -8) != 0) {
    if (*(HMODULE *)((int)this + 4) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)((int)this + 4));
    }
    hModule = LoadLibraryA(param_1);
    *(HMODULE *)((int)this + 4) = hModule;
    if (hModule != (HMODULE)0x0) {
      pFVar1 = GetProcAddress(hModule,local_10);
      if (pFVar1 != (FARPROC)0x0) {
        uVar2 = 1;
      }
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_10014f77((int *)&local_10);
  local_4 = 0xffffffff;
  FUN_10014f77((int *)&param_1);
  ExceptionList = local_c;
  return uVar2;
}



// ============================================================
// FUN_10001c90 @ 0x10001c90 134B
// ============================================================

undefined4 __cdecl FUN_10001c90(undefined4 param_1)

{
  HMODULE hLibModule;
  undefined4 uVar1;
  LPCSTR local_18;
  undefined4 local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c600;
  local_c = ExceptionList;
  uVar1 = 0;
  ExceptionList = &local_c;
  FUN_10001aa0(local_14);
  local_4 = 0;
  FUN_10001d20(&local_18,param_1);
  if (*(int *)(local_18 + -8) != 0) {
    hLibModule = LoadLibraryA(local_18);
    if (hLibModule != (HMODULE)0x0) {
      uVar1 = 1;
      FreeLibrary(hLibModule);
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_10014f77((int *)&local_18);
  FUN_10001ad0(local_14);
  ExceptionList = local_c;
  return uVar1;
}



// ============================================================
// FUN_10001d20 @ 0x10001d20 278B
// ============================================================

void * FUN_10001d20(void *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1001c62f;
  local_c = ExceptionList;
  local_10 = 0;
  local_14 = PTR_DAT_10024d00;
  local_4 = 1;
  ExceptionList = &local_c;
  switch(param_2) {
  case 0:
    pcVar1 = s_CnvMA1SMF_DLL_100241fc;
    break;
  case 1:
    pcVar1 = s_CnvMA1SMAF_DLL_100241ec;
    break;
  case 2:
    pcVar1 = s_CnvMA1_DLL_100241e0;
    break;
  case 3:
    pcVar1 = s_CnvMA1MFi_DLL_100241d0;
    break;
  case 4:
    pcVar1 = s_CnvMA2SMF_DLL_100241c0;
    break;
  case 5:
    pcVar1 = s_CnvMA2SMAF_DLL_100241b0;
    break;
  case 6:
    pcVar1 = s_CnvMA2MFi_DLL_100241a0;
    break;
  case 7:
    pcVar1 = s_CnvMA3SMF_DLL_10024190;
    break;
  case 8:
    pcVar1 = s_CnvMA3SMAF_SC_DLL_1002417c;
    break;
  case 9:
    pcVar1 = s_CnvMA3HARD_DLL_1002416c;
    break;
  case 10:
    pcVar1 = s_CnvMA3MFi_DLL_1002415c;
    break;
  case 0xb:
    pcVar1 = s_CnvMA3MFi_N_DLL_1002414c;
    break;
  case 0xc:
    pcVar1 = s_CnvMA3MFi_F_DLL_1002413c;
    break;
  case 0xd:
    pcVar1 = s_CnvMA3MFi_S_DLL_1002412c;
    break;
  case 0xe:
    pcVar1 = s_CnvMA3MFiPhrase_DLL_10024118;
    break;
  case 0xf:
    pcVar1 = s_CnvMA3MFiPhrase_N_DLL_10024100;
    break;
  case 0x10:
    pcVar1 = s_CnvMA3MFiPhrase_SO_DLL_100240e8;
    break;
  case 0x11:
    pcVar1 = s_CnvMA3SMAFPhrase_DLL_100240d0;
    break;
  case 0x12:
    pcVar1 = s_CnvMA3SMAF_DLL_100240c0;
    break;
  case 0x13:
    pcVar1 = s_DVAchecker_DLL_100240b0;
    break;
  default:
    goto switchD_10001d5e_default;
  }
  ExceptionList = &local_c;
  FUN_100150b4(&local_14,pcVar1);
switchD_10001d5e_default:
  FUN_10014cec(param_1,(int *)&local_14);
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  FUN_10014f77((int *)&local_14);
  ExceptionList = local_c;
  return param_1;
}



// ============================================================
// FUN_10001e90 @ 0x10001e90 141B
// ============================================================

void * FUN_10001e90(void *param_1,int param_2)

{
  char *pcVar1;
  undefined *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1001c65f;
  local_c = ExceptionList;
  local_10 = 0;
  local_14 = PTR_DAT_10024d00;
  local_4 = 1;
  if (param_2 == 0) {
    pcVar1 = s_CnvFrom_1002420c;
  }
  else {
    ExceptionList = &local_c;
    if (param_2 != 1) goto LAB_10001ee2;
    pcVar1 = s_CnvTo_10024214;
  }
  ExceptionList = &local_c;
  FUN_100150b4(&local_14,pcVar1);
LAB_10001ee2:
  FUN_10014cec(param_1,(int *)&local_14);
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  FUN_10014f77((int *)&local_14);
  ExceptionList = local_c;
  return param_1;
}



// ============================================================
// FUN_10001f20 @ 0x10001f20 30B
// ============================================================

undefined4 * __thiscall FUN_10001f20(void *this,byte param_1)

{
  FUN_10001fd0(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10001f40 @ 0x10001f40 130B
// ============================================================

undefined4 * __thiscall FUN_10001f40(void *this,undefined4 param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_FUN_1001e3c8;
  FUN_10001ff0((int)this);
  *(undefined4 *)((int)this + 8) = param_1;
  *(uint *)((int)this + 0xc) = param_2;
  if (param_2 < 0x11) {
    puVar1 = (undefined4 *)((int)this + 0x10);
  }
  else {
    puVar1 = _malloc(param_2);
    *(undefined4 **)((int)this + 0x20) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      param_1 = 0xffffff94;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&param_1,&DAT_10020bc8);
    }
  }
  uVar3 = *(uint *)((int)this + 0xc);
  puVar4 = param_3;
  puVar5 = puVar1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  uVar3 = FUN_10002020((undefined1 *)puVar1);
  *(char *)((int)this + 4) = (char)uVar3;
  return this;
}



// ============================================================
// FUN_10001fd0 @ 0x10001fd0 21B
// ============================================================

void __fastcall FUN_10001fd0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1001e3c8;
  if ((undefined *)param_1[8] != (undefined *)0x0) {
    FUN_1000b70f((undefined *)param_1[8]);
  }
  return;
}



// ============================================================
// FUN_10001ff0 @ 0x10001ff0 33B
// ============================================================

void __fastcall FUN_10001ff0(int param_1)

{
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



// ============================================================
// FUN_10002020 @ 0x10002020 467B
// ============================================================

uint FUN_10002020(undefined1 *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar5;
  undefined3 extraout_var_01;
  undefined3 uVar6;
  byte *pbVar7;
  uint uVar8;
  char local_1;
  
  puVar1 = param_1;
  bVar2 = FUN_10002200(param_1);
  if ((bVar2 & 0xf0) != 0xf0) {
    param_1 = (undefined1 *)((uint)param_1._1_3_ << 8);
    uVar3 = FUN_10002200(puVar1);
    uVar5 = CONCAT31(extraout_var,uVar3) & 0xfffffff0;
    if ((char)uVar5 != -0x70) {
      uVar3 = FUN_10002200(puVar1);
      uVar5 = CONCAT31(extraout_var_00,uVar3) & 0xfffffff0;
      if ((char)uVar5 != -0x80) {
LAB_100021e7:
        return CONCAT31((int3)(uVar5 >> 8),param_1._0_1_);
      }
    }
    return CONCAT31((int3)(uVar5 >> 8),1);
  }
  param_1 = (undefined1 *)CONCAT31(param_1._1_3_,9);
  local_1 = FUN_10002200(puVar1);
  pbVar7 = puVar1 + 1;
  if (local_1 == -1) {
    pbVar7 = puVar1 + 2;
    local_1 = FUN_10002200(puVar1 + 1);
  }
  uVar8 = 1;
  do {
    if ((pbVar7[uVar8 - 1] & 0x80) == 0) {
      if (uVar8 < 5) {
        uVar5 = FUN_10002650(pbVar7,uVar8);
        if (local_1 == '\a') {
          cVar4 = puVar1[2];
          uVar6 = (undefined3)(uVar5 >> 8);
          uVar5 = CONCAT31(uVar6,cVar4);
          if (cVar4 == '\x05') {
            if (((puVar1[3] == 'S') && (uVar5 = CONCAT31(uVar6,0x54), puVar1[4] == 'T')) &&
               ((puVar1[5] == 'A' && ((puVar1[6] == 'R' && (puVar1[7] == 'T')))))) {
              return CONCAT31(uVar6,7);
            }
          }
          else if ((((cVar4 == '\x04') && (puVar1[3] == 'S')) && (puVar1[4] == 'T')) &&
                  ((puVar1[5] == 'O' && (puVar1[6] == 'P')))) {
            param_1 = (undefined1 *)0x8;
          }
        }
        else if ((local_1 == -0x10) && (4 < uVar5)) {
          pbVar7 = pbVar7 + uVar8 + 3;
          cVar4 = FUN_10002200(pbVar7);
          uVar5 = CONCAT31(extraout_var_01,cVar4);
          if (cVar4 == '\x7f') {
            bVar2 = FUN_10002200(pbVar7 + 1);
            uVar5 = (uint)bVar2;
            if (uVar5 == 0) {
              return 2;
            }
            if (uVar5 == 1) {
              return 4;
            }
            uVar5 = uVar5 - 5;
            if (uVar5 == 0) {
              return 5;
            }
          }
          else if (cVar4 == '}') {
            bVar2 = FUN_10002200(pbVar7 + 1);
            if (bVar2 == 1) {
              return 6;
            }
            uVar5 = bVar2 - 2;
            if (uVar5 == 0) {
              return 3;
            }
          }
        }
        goto LAB_100021e7;
      }
      break;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 5);
  param_1 = (undefined1 *)0xffffffff;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&param_1,&DAT_10020bc8);
}



// ============================================================
// FUN_10002210 @ 0x10002210 128B
// ============================================================

undefined4 * __fastcall FUN_10002210(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001c691;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = PTR_DAT_10024d00;
  local_4 = 0;
  FUN_100146ad(param_1 + 2,10);
  param_1[2] = &PTR_LAB_1001e3d0;
  param_1[0xb] = 0;
  param_1[10] = &PTR_FUN_1001e3b0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 1;
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = &PTR_FUN_1001e3cc;
  FUN_10014f02(param_1 + 1);
  param_1[0xf] = 0;
  ExceptionList = local_c;
  return param_1;
}



// ============================================================
// FUN_10002290 @ 0x10002290 30B
// ============================================================

undefined4 * __thiscall FUN_10002290(void *this,byte param_1)

{
  FUN_100022b0(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_100022b0 @ 0x100022b0 157B
// ============================================================

void __fastcall FUN_100022b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_1001c6c1;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1001e3cc;
  local_4 = 2;
  puVar3 = (undefined4 *)param_1[3];
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
    piVar1 = puVar3 + 2;
    puVar3 = puVar2;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
  RemoveAll((int)(param_1 + 2));
  param_1[10] = &PTR_FUN_1001e3b0;
  if (((undefined *)param_1[0xb] != (undefined *)0x0) && (*(char *)(param_1 + 0xe) != '\0')) {
    FUN_1000b70f((undefined *)param_1[0xb]);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_1001470c();
  local_4 = 0xffffffff;
  FUN_10014f77(param_1 + 1);
  ExceptionList = pvStack_c;
  return;
}



// ============================================================
// FUN_10002360 @ 0x10002360 517B
// ============================================================

undefined4 __thiscall FUN_10002360(void *this,int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  void *this_00;
  undefined4 *puVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  byte *local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  void *local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_1001c6db;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_28 = 1;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = this;
  uVar3 = FUN_10002600((undefined1 *)(param_1 + 0xc));
  pbVar9 = (byte *)(param_1 + 0x16);
  *(undefined2 *)((int)this + 0x24) = uVar3;
  iVar4 = FUN_10002620((undefined1 *)(param_1 + 0x12));
  local_2c = pbVar9 + iVar4;
  local_24 = 1;
  local_18 = 0;
  local_20 = 0;
  do {
    if (local_2c <= pbVar9) break;
    uVar10 = 1;
    pbVar5 = pbVar9;
    while( true ) {
      if (4 < uVar10) goto LAB_100023e9;
      if ((*pbVar5 & 0x80) == 0) break;
      pbVar5 = pbVar5 + 1;
      uVar10 = uVar10 + 1;
    }
    if (4 < uVar10) {
LAB_100023e9:
      local_30 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_30,&DAT_10020bc8);
    }
    uVar6 = FUN_10002650(pbVar9,uVar10);
    pbVar9 = pbVar9 + uVar10;
    local_18 = local_18 + uVar6;
    bVar1 = FUN_10002200(pbVar9);
    if ((bVar1 & 0xf0) == 0xf0) {
      cVar2 = FUN_10002200(pbVar9);
      pbVar5 = pbVar9 + 1;
      if (cVar2 == -1) {
        pbVar5 = pbVar9 + 2;
        cVar2 = FUN_10002200(pbVar9 + 1);
      }
      uVar10 = 1;
      pbVar7 = pbVar5;
      while( true ) {
        if (4 < uVar10) goto LAB_100024d1;
        if ((*pbVar7 & 0x80) == 0) break;
        pbVar7 = pbVar7 + 1;
        uVar10 = uVar10 + 1;
      }
      if (4 < uVar10) {
LAB_100024d1:
        local_38 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_38,&DAT_10020bc8);
      }
      uVar6 = FUN_10002650(pbVar5,uVar10);
      pbVar5 = pbVar5 + (uVar6 - (int)pbVar9) + uVar10;
      this = local_1c;
      if (cVar2 == '/') {
        local_24 = 0;
      }
    }
    else {
      bVar1 = FUN_10002200(pbVar9);
      if ((bVar1 & 0x80) == 0) {
        local_34 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_34,&DAT_10020bc8);
      }
      bVar1 = FUN_10002200(pbVar9);
      switch(bVar1 & 0xf0) {
      case 0x80:
        pbVar5 = (byte *)0x3;
        local_20 = local_18;
        break;
      case 0x90:
        cVar2 = FUN_10002200(pbVar9 + 2);
        if (cVar2 == '\0') {
          local_20 = local_18;
        }
      default:
        pbVar5 = (byte *)0x3;
        break;
      case 0xc0:
      case 0xd0:
        pbVar5 = (byte *)0x2;
      }
    }
    this_00 = FUN_10014cb8(0x24);
    local_8._0_1_ = 1;
    if (this_00 == (void *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8 = FUN_10001f40(this_00,local_18,(uint)pbVar5,(undefined4 *)pbVar9);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    AddTail((void *)((int)this + 8),puVar8);
    pbVar9 = pbVar9 + (int)pbVar5;
  } while (local_24 != 0);
  *(int *)((int)this + 0x3c) = local_20;
  ExceptionList = local_10;
  return local_28;
}



// ============================================================
// FUN_10002620 @ 0x10002620 36B
// ============================================================

undefined4 FUN_10002620(undefined1 *param_1)

{
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}



// ============================================================
// FUN_10002650 @ 0x10002650 106B
// ============================================================

uint FUN_10002650(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  bVar1 = 0;
  if (param_2 != 1) {
    uVar2 = 0;
    do {
      uVar3 = (param_1[uVar2] & 0x7f | uVar3) << 7;
      bVar1 = bVar1 + 1;
      uVar2 = (uint)bVar1;
    } while (uVar2 < param_2 - 1U);
    return param_1[bVar1] | uVar3;
  }
  return (uint)*param_1;
}



// ============================================================
// FUN_100026c0 @ 0x100026c0 30B
// ============================================================

undefined * __thiscall FUN_100026c0(void *this,byte param_1)

{
  thunk_FUN_1001470c();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_100026e0 @ 0x100026e0 29B
// ============================================================

undefined4 * __fastcall FUN_100026e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1001e3dc;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  FUN_10002730((int)param_1);
  return param_1;
}



// ============================================================
// FUN_10002700 @ 0x10002700 30B
// ============================================================

undefined4 * __thiscall FUN_10002700(void *this,byte param_1)

{
  FUN_10002720(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10002730 @ 0x10002730 34B
// ============================================================

void __fastcall FUN_10002730(int param_1)

{
  if (*(undefined **)(param_1 + 0xc) != (undefined *)0x0) {
    FUN_10014ce1(*(undefined **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}



// ============================================================
// FUN_10002760 @ 0x10002760 40B
// ============================================================

void __thiscall FUN_10002760(void *this,size_t param_1)

{
  void *pvVar1;
  
  FUN_10002730((int)this);
  pvVar1 = FUN_10014cb8(param_1);
  *(size_t *)((int)this + 8) = param_1;
  *(void **)((int)this + 0xc) = pvVar1;
  *(undefined4 *)((int)this + 0x10) = 0;
  return;
}



// ============================================================
// FUN_100027a0 @ 0x100027a0 156B
// ============================================================

void __thiscall FUN_100027a0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar3 = param_1;
  FUN_10002760(this,*(size_t *)(param_1 + 8));
  uVar4 = FUN_10001a90((int)this);
  param_1 = uVar4;
  puVar5 = (undefined4 *)FUN_10002790((int)this);
  iVar1 = *(int *)(uVar3 + 0xc);
  iVar2 = *(int *)(uVar3 + 8);
  if (iVar2 < (int)(iVar1 + uVar4)) {
    if (iVar2 != iVar1) {
      puVar7 = (undefined4 *)(*(int *)(uVar3 + 4) + iVar1);
      for (uVar4 = (uint)(iVar2 - iVar1) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = iVar2 - iVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      *(undefined4 *)(uVar3 + 0xc) = *(undefined4 *)(uVar3 + 8);
    }
    param_1 = 0xffffffd0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_1,&DAT_10020bc8);
  }
  puVar7 = (undefined4 *)(*(int *)(uVar3 + 4) + iVar1);
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar5 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(uint *)(uVar3 + 0xc) = *(int *)(uVar3 + 0xc) + param_1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(uVar3 + 8);
  return;
}



// ============================================================
// FUN_10002840 @ 0x10002840 425B
// ============================================================

undefined4 __thiscall
FUN_10002840(void *this,char param_1,char param_2,undefined1 *param_3,undefined1 *param_4,
            undefined4 *param_5,uint *param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 local_2c;
  undefined4 local_28 [2];
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined *local_14;
  size_t local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c6f8;
  local_c = ExceptionList;
  local_2c = 0;
  ExceptionList = &local_c;
  if (param_5 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_5 = 0;
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  iVar2 = FUN_10001a90((int)this);
  if (iVar2 != 0) {
    iVar2 = FUN_10001a90((int)this);
    puVar3 = FUN_10014cb8(iVar2 << 1);
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = (undefined *)0x0;
    local_10 = 0;
    if ((param_1 != '\0') && (param_1 == '\x01')) {
      local_20 = 2;
    }
    if ((param_2 != '\0') && (param_2 == '\x01')) {
      local_20 = local_20 | 8;
    }
    local_1c = FUN_10002790((int)this);
    local_18 = FUN_10001a90((int)this);
    local_14 = puVar3;
    local_10 = iVar2 << 1;
    FUN_10001aa0(local_28);
    local_4 = 0;
    iVar2 = FUN_10001bd0(local_28,(LPCSTR)0x13,1);
    if (iVar2 == 0) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 3;
      }
      local_2c = 0;
    }
    else {
      uVar4 = FUN_10001af0(local_28,&local_20,0x14,(LPCSTR)0x13,1);
      if (param_6 != (uint *)0x0) {
        *param_6 = uVar4;
      }
      uVar1 = (undefined1)(local_20 >> 0x10);
      uVar5 = (undefined1)(local_20 >> 0x18);
      if (uVar4 == 0) {
        local_2c = 1;
        *param_3 = uVar5;
        *param_4 = uVar1;
      }
      else if (uVar4 < 0x80000000) {
        *param_3 = uVar5;
        *param_4 = uVar1;
      }
    }
    local_4 = 0xffffffff;
    FUN_10001ad0(local_28);
    FUN_10014ce1(puVar3);
    ExceptionList = local_c;
    return local_2c;
  }
  ExceptionList = local_c;
  return 0;
}



// ============================================================
// FUN_100029f0 @ 0x100029f0 50B
// ============================================================

undefined4 * __fastcall FUN_100029f0(undefined4 *param_1)

{
  FUN_100146ad(param_1 + 6,10);
  param_1[6] = &PTR_LAB_1001e3e4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_1001e3e0;
  return param_1;
}



// ============================================================
// FUN_10002a30 @ 0x10002a30 30B
// ============================================================

undefined4 * __thiscall FUN_10002a30(void *this,byte param_1)

{
  FUN_10002a50(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10002a50 @ 0x10002a50 114B
// ============================================================

void __fastcall FUN_10002a50(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_1001c71b;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1001e3e0;
  local_4 = 0;
  puVar3 = (undefined4 *)param_1[7];
  while (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar3;
    piVar1 = puVar3 + 2;
    puVar3 = puVar2;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
  RemoveAll((int)(param_1 + 6));
  local_4 = 0xffffffff;
  FUN_1001470c();
  ExceptionList = pvStack_c;
  return;
}



// ============================================================
// FUN_10002ad0 @ 0x10002ad0 3406B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10002ad0(undefined1 *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  char cVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  void *pvVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined4 local_b4;
  undefined4 local_b0;
  byte *local_ac;
  undefined4 local_a8;
  byte local_a4;
  undefined3 uStack_a3;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  byte local_94;
  undefined3 uStack_93;
  double local_90;
  uint local_88;
  double local_84;
  undefined4 local_7c;
  undefined4 uStack_78;
  double local_74;
  byte *local_6c;
  void *local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined1 *local_54;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined8 local_30;
  uint local_28;
  uint local_24;
  undefined8 local_20;
  undefined *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1001c730;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffed4;
  local_18 = (undefined *)0x0;
  local_8 = 0;
  local_48 = param_3 * 1000;
  local_40 = (param_3 * 0x7d & 0x1fffffff) << 2;
  if ((param_2 < 0xe) ||
     (CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]) != 0x4d546864)) {
    local_a8 = 0;
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_a8,&DAT_10020bc8);
  }
  local_28 = (uint)CONCAT11(param_1[10],param_1[0xb]);
  local_88 = (uint)CONCAT11(param_1[0xc],param_1[0xd]);
  puVar15 = param_1 + 0xe;
  local_54 = puVar15;
  if (1 < CONCAT11(param_1[8],param_1[9])) {
    local_b4 = 0;
    ExceptionList = &local_10;
    local_14 = &stack0xfffffed4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_b4,&DAT_10020bc8);
  }
  ExceptionList = &local_10;
  local_14 = &stack0xfffffed4;
  local_18 = FUN_10014cb8(local_28 * 0x14);
  local_3c = 0;
  local_38 = 0;
  for (uVar16 = 0; uVar16 < local_28; uVar16 = uVar16 + 1) {
    piVar1 = (int *)(local_18 + uVar16 * 0x14);
    if (CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]),puVar15[3]) != 0x4d54726b) {
      local_a0 = 0;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_a0,&DAT_10020bc8);
    }
    *piVar1 = (int)(puVar15 + 8);
    uVar3 = puVar15[5];
    uVar4 = puVar15[4];
    uVar5 = puVar15[6];
    uVar6 = puVar15[7];
    piVar1[2] = 0;
    puVar15 = puVar15 + 8 + CONCAT31(CONCAT21(CONCAT11(uVar4,uVar3),uVar5),uVar6);
    *(undefined1 *)(piVar1 + 3) = 0;
    piVar1[1] = (int)puVar15;
    piVar1[4] = 1;
  }
  for (uVar16 = 0; uVar16 < local_28; uVar16 = uVar16 + 1) {
    uVar17 = 0;
    while( true ) {
      pbVar12 = *(byte **)(local_18 + uVar16 * 0x14);
      bVar7 = *pbVar12;
      *(byte **)(local_18 + uVar16 * 0x14) = pbVar12 + 1;
      if ((bVar7 & 0x80) == 0) break;
      uVar17 = (bVar7 & 0x7f | uVar17) << 7;
    }
    *(uint *)(local_18 + uVar16 * 0x14 + 8) = bVar7 | uVar17;
  }
  param_1 = (undefined1 *)0x0;
  do {
    puVar15 = *(undefined1 **)(local_18 + 8);
    local_24 = 0;
    for (uVar16 = 0; uVar16 < local_28; uVar16 = uVar16 + 1) {
      if (*(undefined1 **)(local_18 + uVar16 * 0x14 + 8) < puVar15) {
        puVar15 = *(undefined1 **)(local_18 + uVar16 * 0x14 + 8);
      }
    }
    if (param_1 < puVar15) {
      param_1 = puVar15;
    }
    for (uVar16 = 0; uVar16 < local_28; uVar16 = uVar16 + 1) {
      puVar2 = (uint *)(local_18 + uVar16 * 0x14);
      local_24 = local_24 | *(uint *)(local_18 + uVar16 * 0x14 + 0x10);
      if (*puVar2 < puVar2[1]) {
        while ((undefined1 *)puVar2[2] <= param_1) {
          pbVar12 = (byte *)*puVar2;
          if ((byte *)puVar2[1] <= pbVar12) goto LAB_10002ed5;
          pbVar14 = (byte *)0x0;
          if ((*pbVar12 & 0xf0) == 0xf0) {
            bVar7 = *pbVar12;
            pbVar11 = pbVar12 + 1;
            if (bVar7 == 0xff) {
              pbVar11 = pbVar12 + 2;
              bVar7 = pbVar12[1];
            }
            uVar17 = 0;
            while( true ) {
              bVar8 = *pbVar11;
              pbVar12 = pbVar11 + 1;
              local_64 = CONCAT31(local_64._1_3_,bVar8);
              if ((bVar8 & 0x80) == 0) break;
              uVar17 = (bVar8 & 0x7f | uVar17) << 7;
              pbVar11 = pbVar12;
            }
            pbVar14 = pbVar12 + ((bVar8 | uVar17) - *puVar2);
            local_6c = pbVar14;
            if (bVar7 == 0x51) {
              if (local_3c == 0) {
                local_3c = (uint)CONCAT21(CONCAT11(*pbVar12,pbVar11[2]),pbVar11[3]);
              }
            }
            else if (((((bVar7 == 0xf0) && (*pbVar12 == 0x43)) && (pbVar11[2] == 0x79)) &&
                     ((pbVar11[3] == 6 && (pbVar11[4] == 0x7d)))) &&
                    ((pbVar11[5] == 0x10 && (local_38 == 0)))) {
              uVar10 = (uint)pbVar11[6];
              if ((pbVar11[6] & 0x80) == 0) {
                if ((char)(bVar8 | uVar17) == '\n') {
                  bVar7 = pbVar11[9];
                  uVar17 = ((uVar10 & 0x7f) << 7 | pbVar11[7] & 0x7f) << 7 | pbVar11[8] & 0x7f;
                }
                else {
                  bVar7 = pbVar11[8];
                  uVar17 = (uVar10 & 0x7f) << 7 | pbVar11[7] & 0x7f;
                }
                local_38 = uVar17 << 7 | bVar7 & 0x7f;
              }
              else {
                bVar7 = pbVar11[8];
                if ((bVar7 & 0x80) == 0) {
                  local_38 = ((uVar10 & 0x7f) << 7 | pbVar11[7] & 0x7f) << 7 | bVar7 & 0x7f;
                }
                else {
                  local_38 = (((uVar10 & 0x7f) << 7 | pbVar11[7] & 0x7f) << 7 | bVar7 & 0x7f) << 7 |
                             pbVar11[9] & 0x7f;
                }
              }
            }
          }
          else {
            if ((*pbVar12 & 0x80) == 0) {
              if ((char)puVar2[3] == '\0') {
                local_b0 = 0;
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(&local_b0,&DAT_10020bc8);
              }
              *puVar2 = (uint)(pbVar12 + -1);
            }
            else {
              *(byte *)(puVar2 + 3) = *pbVar12;
            }
            switch((byte)puVar2[3] & 0xf0) {
            case 0x80:
            case 0x90:
            case 0xa0:
            case 0xb0:
            case 0xe0:
              pbVar14 = (byte *)0x3;
              break;
            case 0xc0:
            case 0xd0:
              pbVar14 = (byte *)0x2;
            }
          }
          uVar17 = 0;
          *puVar2 = (uint)(pbVar14 + *puVar2);
          while( true ) {
            bVar7 = *(byte *)*puVar2;
            local_58 = CONCAT31(local_58._1_3_,bVar7);
            *puVar2 = (uint)((byte *)*puVar2 + 1);
            if ((bVar7 & 0x80) == 0) break;
            uVar17 = (bVar7 & 0x7f | uVar17) << 7;
          }
          puVar2[2] = puVar2[2] + (bVar7 | uVar17);
        }
      }
      else {
LAB_10002ed5:
        puVar2[4] = 0;
      }
    }
    if (local_24 == 0) {
      if (local_3c == 0) {
        local_3c = 0x412;
      }
      if (local_38 == 0) {
        local_38 = 500000;
      }
      local_90 = (double)local_48;
      local_7c = 0;
      uStack_78 = 0;
      local_20 = (double)local_40;
      local_34 = 0;
      local_30 = 0.0;
      local_74 = local_90 + local_20;
      for (uVar16 = 0; uVar16 < local_28; uVar16 = uVar16 + 1) {
        piVar1 = (int *)(local_18 + uVar16 * 0x14);
        *piVar1 = (int)(local_54 + 8);
        uVar3 = local_54[4];
        uVar4 = local_54[5];
        uVar5 = local_54[6];
        uVar6 = local_54[7];
        piVar1[2] = 0;
        *(undefined1 *)(piVar1 + 3) = 0;
        local_54 = local_54 + 8 + CONCAT31(CONCAT21(CONCAT11(uVar3,uVar4),uVar5),uVar6);
        piVar1[4] = 1;
        piVar1[1] = (int)local_54;
      }
      for (uVar16 = 0; uVar16 < local_28; uVar16 = uVar16 + 1) {
        uVar17 = 0;
        while( true ) {
          pbVar12 = *(byte **)(local_18 + uVar16 * 0x14);
          bVar7 = *pbVar12;
          param_2 = (uint)bVar7;
          *(byte **)(local_18 + uVar16 * 0x14) = pbVar12 + 1;
          if ((bVar7 & 0x80) == 0) break;
          uVar17 = (bVar7 & 0x7f | uVar17) << 7;
        }
        *(uint *)(local_18 + uVar16 * 0x14 + 8) = param_2 | uVar17;
      }
      uVar16 = 0;
      local_84 = 0.0;
      local_44 = 0;
      param_2 = 0;
      local_24 = 0;
      local_58 = 0;
      local_60 = 0;
      uStack_5c = 0;
      param_1 = (undefined1 *)0x0;
      pvVar18 = local_68;
      do {
        local_54 = (undefined1 *)0x0;
        puVar15 = *(undefined1 **)(local_18 + 8);
        for (uVar17 = 0; uVar17 < local_28; uVar17 = uVar17 + 1) {
          if (*(undefined1 **)(local_18 + uVar17 * 0x14 + 8) < puVar15) {
            puVar15 = *(undefined1 **)(local_18 + uVar17 * 0x14 + 8);
          }
        }
        if (param_1 < puVar15) {
          param_1 = puVar15;
        }
        for (local_64 = 0; local_64 < local_28; local_64 = local_64 + 1) {
          puVar2 = (uint *)(local_18 + local_64 * 0x14);
          local_54 = (undefined1 *)((uint)local_54 | *(uint *)(local_18 + local_64 * 0x14 + 0x10));
          if (*puVar2 < puVar2[1]) {
LAB_10003077:
            pvVar18 = local_68;
            puVar15 = (undefined1 *)puVar2[2];
            if (puVar15 <= param_1) {
              if (*puVar2 < puVar2[1]) {
                if (local_88 == 0) {
                  local_50 = (double)(((int)puVar15 - local_44) * local_3c);
                }
                else {
                  local_50 = (double)((int)puVar15 - local_44) *
                             ((double)local_38 / (double)local_88);
                }
                local_50 = local_50 + local_84;
                if (_DAT_1001e3f8 < local_50 * _DAT_1001e400) {
                  local_98 = 0;
                    /* WARNING: Subroutine does not return */
                  __CxxThrowException_8(&local_98,&DAT_10020bc8);
                }
                if (local_90 <= local_50) {
                  if (local_74 < local_90) {
                    uVar17 = (uVar16 * 1000) / param_3;
                    lVar19 = __ftol();
                    FUN_10003950(pvVar18,(int)lVar19,uVar17);
                    if (local_34 < uVar16) {
                      local_7c = (undefined4)local_20;
                      uStack_78 = local_20._4_4_;
                      local_34 = uVar16;
                    }
                    uVar16 = 0;
                    local_24 = 0;
                    local_20 = (double)local_48 + local_20;
                    local_74 = (double)local_48 + local_20;
                  }
                  uVar17 = (param_2 * 1000) / param_3;
                  lVar19 = __ftol();
                  FUN_10003950(pvVar18,(int)lVar19,uVar17);
                  if (local_34 < param_2) {
                    local_34 = param_2;
                    local_7c = (undefined4)local_30;
                    uStack_78 = local_30._4_4_;
                  }
                  param_2 = 0;
                  local_30 = (double)local_48 + local_30;
                  local_90 = (double)local_48 + local_30;
                }
                if (local_74 <= local_50) {
                  uVar17 = (uVar16 * 1000) / param_3;
                  lVar19 = __ftol();
                  FUN_10003950(pvVar18,(int)lVar19,uVar17);
                  if (local_34 < uVar16) {
                    local_7c = (undefined4)local_20;
                    uStack_78 = local_20._4_4_;
                    local_34 = uVar16;
                  }
                  uVar16 = 0;
                  local_24 = 0;
                  local_20 = (double)local_48 + local_20;
                  local_74 = (double)local_48 + local_20;
                }
LAB_1000329c:
                if (local_90 <= local_50) {
                  uVar17 = (param_2 * 1000) / param_3;
                  lVar19 = __ftol();
                  FUN_10003950(pvVar18,(int)lVar19,uVar17);
                  local_30 = (double)local_48 + local_30;
                  local_90 = (double)local_48 + local_30;
                }
                else if (local_50 < local_74) goto code_r0x100032c1;
                if (local_74 <= local_50) {
                  uVar17 = (uVar16 * 1000) / param_3;
                  lVar19 = __ftol();
                  FUN_10003950(pvVar18,(int)lVar19,uVar17);
                  local_20 = (double)local_48 + local_20;
                  local_74 = (double)local_48 + local_20;
                }
                goto LAB_1000329c;
              }
              puVar2[4] = 0;
            }
            goto LAB_10003063;
          }
          puVar2[4] = 0;
LAB_10003063:
          pvVar18 = local_68;
        }
        if (local_54 == (undefined1 *)0x0) {
          if (local_20 < local_30) {
            uVar17 = (uVar16 * 1000) / param_3;
            lVar19 = __ftol();
            FUN_10003950(pvVar18,(int)lVar19,uVar17);
            uVar17 = param_2;
          }
          else {
            uVar17 = (param_2 * 1000) / param_3;
            lVar19 = __ftol();
            FUN_10003950(pvVar18,(int)lVar19,uVar17);
            uVar17 = uVar16;
          }
          uVar17 = (uVar17 * 1000) / param_3;
          lVar19 = __ftol();
          FUN_10003950(pvVar18,(int)lVar19,uVar17);
          uVar17 = local_34;
          if (local_34 < param_2) {
            uVar17 = param_2;
          }
          if (uVar17 < uVar16) {
            uVar17 = uVar16;
          }
          *(uint *)((int)pvVar18 + 4) = (uVar17 * 1000) / param_3;
          lVar19 = __ftol();
          iVar9 = local_58;
          *(int *)((int)pvVar18 + 8) = (int)lVar19;
          *(int *)((int)pvVar18 + 0xc) = local_58;
          uVar20 = __ftol();
          *(int *)((int)pvVar18 + 0x10) = (int)uVar20;
          if ((int)uVar20 == 0) {
            *(undefined4 *)((int)pvVar18 + 0x14) = 0;
          }
          else {
            *(int *)((int)pvVar18 + 0x14) =
                 (int)((ulonglong)(uint)(iVar9 * 1000) / (uVar20 & 0xffffffff));
          }
          FUN_10014ce1(local_18);
          ExceptionList = local_10;
          return 1;
        }
        param_1 = param_1 + 1;
      } while( true );
    }
    param_1 = param_1 + 1;
  } while( true );
code_r0x100032c1:
  pbVar12 = (byte *)*puVar2;
  local_40 = 0;
  if ((*pbVar12 & 0xf0) == 0xf0) {
    bVar7 = *pbVar12;
    pbVar14 = pbVar12 + 1;
    if (bVar7 == 0xff) {
      pbVar14 = pbVar12 + 2;
      bVar7 = pbVar12[1];
    }
    uVar16 = 0;
    while( true ) {
      bVar8 = *pbVar14;
      pbVar12 = pbVar14 + 1;
      _local_a4 = CONCAT31(uStack_a3,bVar8);
      if ((bVar8 & 0x80) == 0) break;
      uVar16 = (bVar8 & 0x7f | uVar16) << 7;
      pbVar14 = pbVar12;
    }
    uVar17 = bVar8 | uVar16;
    cVar13 = (char)uVar17;
    local_6c = (byte *)CONCAT31(local_6c._1_3_,cVar13);
    pbVar11 = pbVar12 + (uVar17 - *puVar2);
    local_ac = pbVar11;
    if (bVar7 == 0x2f) {
      puVar2[4] = 0;
    }
    else if (bVar7 == 0x51) {
      uVar16 = (uint)CONCAT21(CONCAT11(*pbVar12,pbVar14[2]),pbVar14[3]);
      if (local_3c != uVar16) {
        local_84 = (double)((puVar2[2] - local_44) * local_3c) + local_84;
        local_44 = puVar2[2];
        local_3c = uVar16;
      }
    }
    else if (bVar7 == 0xf0) {
      if (pbVar14[4] == 0x7f) {
        switch(pbVar14[5]) {
        case 0:
        case 8:
        case 0xb:
        case 0x10:
          local_40 = ((uint)bVar8 | uVar16 & 0xff) + 1;
        }
      }
      else if (((pbVar14[4] == 0x7d) && (local_88 != 0)) && (pbVar14[5] == 0x10)) {
        uVar16 = (uint)pbVar14[6];
        if ((pbVar14[6] & 0x80) == 0) {
          if (cVar13 == '\n') {
            bVar7 = pbVar14[9];
            uVar16 = ((uVar16 & 0x7f) << 7 | pbVar14[7] & 0x7f) << 7 | pbVar14[8] & 0x7f;
          }
          else {
            bVar7 = pbVar14[8];
            uVar16 = (uVar16 & 0x7f) << 7 | pbVar14[7] & 0x7f;
          }
          uVar16 = uVar16 << 7 | bVar7 & 0x7f;
        }
        else {
          bVar7 = pbVar14[8];
          if ((bVar7 & 0x80) == 0) {
            uVar16 = ((uVar16 & 0x7f) << 7 | pbVar14[7] & 0x7f) << 7 | bVar7 & 0x7f;
          }
          else {
            uVar16 = (((uVar16 & 0x7f) << 7 | pbVar14[7] & 0x7f) << 7 | bVar7 & 0x7f) << 7 |
                     pbVar14[9] & 0x7f;
          }
        }
        if (local_38 != uVar16) {
          local_84 = (double)(puVar2[2] - local_44) * ((double)local_38 / (double)local_88) +
                     local_84;
          local_44 = puVar2[2];
          local_38 = uVar16;
        }
      }
    }
  }
  else {
    if ((*pbVar12 & 0x80) == 0) {
      if ((byte)puVar2[3] == 0) {
        local_9c = 0;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_9c,&DAT_10020bc8);
      }
      *puVar2 = (uint)(pbVar12 + -1);
      pbVar12[-1] = (byte)puVar2[3];
    }
    else {
      *(byte *)(puVar2 + 3) = *pbVar12;
    }
    switch((byte)puVar2[3] & 0xf0) {
    case 0x80:
    case 0x90:
    case 0xa0:
    case 0xb0:
    case 0xe0:
      pbVar11 = (byte *)0x3;
      local_40 = 3;
      break;
    case 0xc0:
    case 0xd0:
      pbVar11 = (byte *)0x2;
      local_40 = 2;
      break;
    default:
      pbVar11 = (byte *)0x3;
    }
  }
  if ((local_30 <= local_50) && (local_50 < local_90)) {
    param_2 = param_2 + local_40;
  }
  if ((local_20 <= local_50) && (local_50 < local_74)) {
    local_24 = local_24 + local_40;
  }
  uVar16 = 0;
  *puVar2 = (uint)(pbVar11 + *puVar2);
  while( true ) {
    bVar7 = *(byte *)*puVar2;
    _local_94 = CONCAT31(uStack_93,bVar7);
    *puVar2 = (uint)((byte *)*puVar2 + 1);
    if ((bVar7 & 0x80) == 0) break;
    uVar16 = (bVar7 & 0x7f | uVar16) << 7;
  }
  uStack_5c = local_50._4_4_;
  puVar2[2] = puVar2[2] + (bVar7 | uVar16);
  local_60 = (undefined4)local_50;
  local_58 = local_58 + local_40;
  uVar16 = local_24;
  goto LAB_10003077;
}



// ============================================================
// FUN_10003950 @ 0x10003950 75B
// ============================================================

undefined4 __thiscall FUN_10003950(void *this,undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10014cb8(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_LAB_1001e408;
    puVar1[2] = param_2;
    AddTail((void *)((int)this + 0x18),puVar1);
    return 1;
  }
  AddTail((void *)((int)this + 0x18),0);
  return 1;
}



// ============================================================
// FUN_100039c0 @ 0x100039c0 30B
// ============================================================

void __fastcall FUN_100039c0(undefined4 *param_1)

{
  param_1[5] = &PTR_LAB_1001e410;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_1001e40c;
  return;
}



// ============================================================
// FUN_100039e0 @ 0x100039e0 30B
// ============================================================

undefined4 * __thiscall FUN_100039e0(void *this,byte param_1)

{
  FUN_10003a00(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10003a00 @ 0x10003a00 258B
// ============================================================

void __fastcall FUN_10003a00(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_1001c753;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1001e40c;
  iVar1 = param_1[7];
  local_4 = 0;
  local_18 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined **)(param_1[6] + local_18 * 4);
      puVar5 = *(undefined4 **)(puVar2 + 0xc);
      while (puVar5 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)*puVar5;
        puVar4 = (undefined *)puVar5[2];
        if (3 < *(int *)(puVar4 + 0xc)) {
          FUN_10014ce1(*(undefined **)(puVar4 + 8));
        }
        FUN_10014ce1(puVar4);
        puVar5 = puVar3;
      }
      if (puVar2 != (undefined *)0x0) {
        *(undefined ***)(puVar2 + 8) = &PTR_LAB_1001e41c;
        puVar5 = *(undefined4 **)(puVar2 + 0xc);
        local_4._1_3_ = (uint3)((uint)local_4 >> 8);
        local_4._0_1_ = 1;
        for (; puVar5 != (undefined4 *)0x0; puVar5 = (undefined4 *)*puVar5) {
        }
        *(undefined4 *)(puVar2 + 0x14) = 0;
        *(undefined4 *)(puVar2 + 0x18) = 0;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *(undefined4 *)(puVar2 + 0xc) = 0;
        FUN_10014839(*(undefined4 **)(puVar2 + 0x1c));
        *(undefined4 *)(puVar2 + 0x1c) = 0;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_10014ce1(puVar2);
      }
      local_18 = local_18 + 1;
    } while (local_18 < iVar1);
  }
  param_1[5] = &PTR_LAB_1001e410;
  if ((undefined *)param_1[6] != (undefined *)0x0) {
    FUN_10014ce1((undefined *)param_1[6]);
  }
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_10003b20 @ 0x10003b20 74B
// ============================================================

void __cdecl FUN_10003b20(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10003b70(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_10003b70(param_1[1]);
  param_1[1] = uVar1;
  uVar2 = FUN_10003ba0((ushort)param_1[2]);
  *(short *)(param_1 + 2) = (short)uVar2;
  uVar2 = FUN_10003ba0(*(ushort *)((int)param_1 + 10));
  *(short *)((int)param_1 + 10) = (short)uVar2;
  uVar2 = FUN_10003ba0((ushort)param_1[3]);
  *(short *)(param_1 + 3) = (short)uVar2;
  return;
}



// ============================================================
// FUN_10003b70 @ 0x10003b70 36B
// ============================================================

uint __cdecl FUN_10003b70(uint param_1)

{
  return (param_1 & 0xff00 | param_1 << 0x10 | param_1 >> 0x10 & 0xff) << 8 | param_1 >> 0x18;
}



// ============================================================
// FUN_10003bc0 @ 0x10003bc0 617B
// ============================================================

undefined4 __thiscall FUN_10003bc0(void *this,uint *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c770;
  local_c = ExceptionList;
  if (param_2 < 0xe) {
    return 0;
  }
  puVar4 = (uint *)((int)this + 4);
  ExceptionList = &local_c;
  *puVar4 = *param_1;
  *(uint *)((int)this + 8) = param_1[1];
  *(uint *)((int)this + 0xc) = param_1[2];
  *(short *)((int)this + 0x10) = (short)param_1[3];
  FUN_10003b20(puVar4);
  puVar7 = (uint *)((int)param_1 + 0xe);
  iVar8 = param_2 + -0xe;
  if (*puVar4 != 0x4d546864) {
    ExceptionList = local_c;
    return 0;
  }
  while( true ) {
    if (iVar8 == 0) {
      ExceptionList = local_c;
      return 1;
    }
    if (iVar8 < 8) {
      ExceptionList = local_c;
      return 0;
    }
    puVar4 = FUN_10014cb8(0x28);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      puVar4[2] = (uint)&PTR_LAB_1001e41c;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[4] = 0;
      puVar4[3] = 0;
      puVar4[7] = 0;
      puVar4[8] = 10;
    }
    *puVar4 = *puVar7;
    puVar4[1] = puVar7[1];
    uVar5 = FUN_10003b70(*puVar4);
    *puVar4 = uVar5;
    uVar5 = FUN_10003b70(puVar4[1]);
    puVar4[1] = uVar5;
    puVar4[9] = 0;
    if (iVar8 + -8 < (int)uVar5) {
      if (puVar4 == (uint *)0x0) {
        ExceptionList = local_c;
        return 0;
      }
      puVar4[2] = (uint)&PTR_LAB_1001e41c;
      puVar7 = (uint *)puVar4[3];
      local_4 = 0;
      for (; puVar7 != (uint *)0x0; puVar7 = (uint *)*puVar7) {
      }
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[4] = 0;
      puVar4[3] = 0;
      FUN_10014839((undefined4 *)puVar4[7]);
      puVar4[7] = 0;
      FUN_10014ce1((undefined *)puVar4);
      ExceptionList = local_c;
      return 0;
    }
    iVar6 = FUN_10003e30((uint)puVar4,(byte *)(puVar7 + 2),uVar5);
    if (iVar6 == 0) {
      puVar7 = (uint *)puVar4[3];
      while (puVar7 != (uint *)0x0) {
        puVar2 = (uint *)*puVar7;
        puVar3 = (undefined *)puVar7[2];
        if ((3 < *(int *)(puVar3 + 0xc)) && (*(undefined **)(puVar3 + 8) != (undefined *)0x0)) {
          FUN_10014ce1(*(undefined **)(puVar3 + 8));
        }
        FUN_10014ce1(puVar3);
        puVar7 = puVar2;
      }
      if (puVar4 != (uint *)0x0) {
        puVar4[2] = (uint)&PTR_LAB_1001e41c;
        puVar7 = (uint *)puVar4[3];
        local_4 = 1;
        for (; puVar7 != (uint *)0x0; puVar7 = (uint *)*puVar7) {
        }
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[4] = 0;
        puVar4[3] = 0;
        FUN_10014839((undefined4 *)puVar4[7]);
        puVar4[7] = 0;
        FUN_10014ce1((undefined *)puVar4);
      }
      ExceptionList = local_c;
      return 0;
    }
    iVar1 = *(int *)((int)this + 0x1c);
    FUN_10005e70((void *)((int)this + 0x14),iVar1 + 1,0xffffffff);
    *(uint **)(*(int *)((int)this + 0x18) + iVar1 * 4) = puVar4;
    if (*(short *)((int)this + 0xc) == 0) break;
    puVar7 = (uint *)((int)(puVar7 + 2) + iVar6);
    iVar8 = (iVar8 + -8) - iVar6;
  }
  ExceptionList = local_c;
  return 1;
}



// ============================================================
// FUN_10003e30 @ 0x10003e30 680B
// ============================================================

int FUN_10003e30(uint param_1,byte *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  bool bVar15;
  int local_14;
  uint local_10;
  int local_8;
  int local_4;
  
  uVar2 = param_1;
  local_14 = 0;
  do {
    if (param_3 == 0) {
      return local_14;
    }
    puVar4 = FUN_10014cb8(0x14);
    iVar5 = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[4] = *(undefined4 *)(uVar2 + 0x24);
    pbVar12 = param_2;
    do {
      param_2 = pbVar12;
      pbVar12 = param_2 + 1;
      *(byte *)(iVar5 + (int)puVar4) = *param_2;
      iVar9 = puVar4[1] + 1;
      puVar4[1] = iVar9;
      if (param_3 == iVar9 || param_3 - iVar9 < 0) goto LAB_100040c3;
    } while (((*(byte *)(iVar5 + (int)puVar4) & 0x80) != 0) && (iVar5 = iVar5 + 1, iVar5 < 4));
    iVar14 = param_3 - iVar9;
    iVar5 = 0;
    if (iVar14 < 1) {
LAB_100040c3:
      FUN_10014ce1((undefined *)puVar4);
      return 0;
    }
    bVar3 = *pbVar12;
    local_10 = 0;
    if (bVar3 < 0xf0) {
      bVar15 = (bVar3 & 0x80) == 0;
      if (bVar15) {
        bVar3 = (byte)param_1;
      }
      local_10 = (uint)bVar15;
      param_1 = (uint)bVar3;
      if (((bVar3 & 0xf0) == 0xd0) || (iVar5 = 3, (bVar3 & 0xf0) == 0xc0)) {
        iVar5 = 2;
      }
      puVar4[3] = iVar5 - local_10;
    }
    else if (bVar3 == 0xf0) {
      while( true ) {
        iVar6 = 4;
        if (iVar14 < 5) {
          iVar6 = iVar14;
        }
        if ((iVar6 <= iVar5) || ((pbVar12[iVar5] & 0x80) == 0)) break;
        iVar5 = iVar5 + 1;
      }
      iVar6 = 4;
      if (iVar14 < 5) {
        iVar6 = iVar14;
      }
      if (iVar5 == iVar6) goto LAB_100040c3;
      uVar11 = FUN_100040e0(param_2 + 2,&local_8);
      puVar4[3] = local_8 + 1 + uVar11;
    }
    else if (bVar3 == 0xff) {
      while( true ) {
        iVar6 = 4;
        if (iVar14 < 5) {
          iVar6 = iVar14;
        }
        if ((iVar6 <= iVar5) || ((pbVar12[iVar5] & 0x80) == 0)) break;
        iVar5 = iVar5 + 1;
      }
      iVar6 = 4;
      if (iVar14 < 5) {
        iVar6 = iVar14;
      }
      if (iVar5 == iVar6) goto LAB_100040c3;
      uVar11 = FUN_100040e0(param_2 + 3,&local_4);
      puVar4[3] = local_4 + 2 + uVar11;
    }
    uVar11 = puVar4[3];
    if ((int)(iVar14 - uVar11) < 0) goto LAB_100040c3;
    pbVar13 = pbVar12;
    if ((int)uVar11 < 4) {
      if (local_10 == 0) {
        pbVar7 = (byte *)(puVar4 + 2);
        for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pbVar7 = *(undefined4 *)pbVar13;
          pbVar13 = pbVar13 + 4;
          pbVar7 = pbVar7 + 4;
        }
        goto LAB_10004000;
      }
      pbVar7 = (byte *)((int)puVar4 + 9);
      for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar7 = *(undefined4 *)pbVar13;
        pbVar13 = pbVar13 + 4;
        pbVar7 = pbVar7 + 4;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar7 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        pbVar7 = pbVar7 + 1;
      }
      *(byte *)(puVar4 + 2) = (byte)param_1;
    }
    else {
      pbVar7 = FUN_10014cb8(uVar11);
      puVar4[2] = pbVar7;
      if (pbVar7 == (byte *)0x0) goto LAB_100040c3;
      uVar11 = puVar4[3];
      for (uVar10 = uVar11 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pbVar7 = *(undefined4 *)pbVar13;
        pbVar13 = pbVar13 + 4;
        pbVar7 = pbVar7 + 4;
      }
LAB_10004000:
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *pbVar7 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        pbVar7 = pbVar7 + 1;
      }
    }
    iVar5 = puVar4[3];
    param_2 = pbVar12 + iVar5;
    param_3 = iVar14 - iVar5;
    local_14 = local_14 + iVar9 + iVar5;
    uVar1 = *(undefined4 *)(uVar2 + 0x10);
    if (*(int *)(uVar2 + 0x18) == 0) {
      iVar9 = FUN_10014819((undefined4 *)(uVar2 + 0x1c),*(int *)(uVar2 + 0x20),0xc);
      iVar5 = *(int *)(uVar2 + 0x20);
      puVar8 = (undefined4 *)(iVar9 + -8 + iVar5 * 0xc);
      if (-1 < iVar5 + -1) {
        do {
          *puVar8 = *(undefined4 *)(uVar2 + 0x18);
          *(undefined4 **)(uVar2 + 0x18) = puVar8;
          puVar8 = puVar8 + -3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    puVar8 = *(undefined4 **)(uVar2 + 0x18);
    *(undefined4 *)(uVar2 + 0x18) = *puVar8;
    puVar8[1] = uVar1;
    *puVar8 = 0;
    *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
    puVar8[2] = 0;
    puVar8[2] = puVar4;
    if (*(undefined4 **)(uVar2 + 0x10) == (undefined4 *)0x0) {
      *(undefined4 **)(uVar2 + 0xc) = puVar8;
    }
    else {
      **(undefined4 **)(uVar2 + 0x10) = puVar8;
    }
    *(undefined4 **)(uVar2 + 0x10) = puVar8;
    if (local_10 != 0) {
      puVar4[3] = puVar4[3] + 1;
      *(int *)(uVar2 + 4) = *(int *)(uVar2 + 4) + 1;
    }
  } while( true );
}



// ============================================================
// FUN_100040e0 @ 0x100040e0 50B
// ============================================================

uint FUN_100040e0(byte *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  *param_2 = 0;
  do {
    uVar1 = uVar1 << 7 | *param_1 & 0x7f;
    *param_2 = *param_2 + 1;
    if ((*param_1 & 0x80) == 0) {
      return uVar1;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return uVar1;
}



// ============================================================
// FUN_10004120 @ 0x10004120 72B
// ============================================================

char * __fastcall FUN_10004120(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)0x0;
  puVar4 = *(undefined4 **)(**(int **)(param_1 + 0x18) + 0xc);
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      return pcVar3;
    }
    puVar1 = (undefined4 *)*puVar4;
    pcVar2 = (char *)puVar4[2];
    if (*pcVar2 != '\0') {
      return pcVar3;
    }
    if (pcVar2[1] != '\0') {
      return pcVar3;
    }
    if (pcVar2[2] != '\0') break;
    if (pcVar2[3] != '\0') {
      return pcVar3;
    }
    puVar4 = puVar1;
    if ((3 < *(int *)(pcVar2 + 0xc)) && (0xef < **(byte **)(pcVar2 + 8))) {
      pcVar3 = pcVar2;
    }
  }
  return pcVar3;
}



// ============================================================
// FUN_10004170 @ 0x10004170 219B
// ============================================================

int __thiscall FUN_10004170(void *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int local_8;
  
  iVar2 = param_3;
  local_8 = 0;
  piVar3 = *(int **)(**(int **)((int)this + 0x18) + 0xc);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  do {
    iVar1 = piVar3[2];
    piVar3 = (int *)*piVar3;
    if (((3 < *(int *)(iVar1 + 0xc)) && (**(char **)(iVar1 + 8) == -0x10)) &&
       (uVar4 = FUN_100040e0((byte *)(*(char **)(iVar1 + 8) + 1),&param_3), iVar2 <= (int)uVar4)) {
      iVar5 = 0;
      if (0 < iVar2) {
        pcVar8 = (char *)(*(int *)(iVar1 + 8) + 1 + param_3);
        do {
          if (*(char *)(iVar5 + param_2) != *pcVar8) break;
          iVar5 = iVar5 + 1;
          pcVar8 = pcVar8 + 1;
        } while (iVar5 < iVar2);
      }
      if (iVar5 == iVar2) {
        uVar4 = uVar4 + (-1 - iVar2);
        FUN_100148af(param_1,uVar4,0xffffffff);
        puVar7 = (undefined4 *)(*(int *)(iVar1 + 8) + param_3 + 1 + iVar2);
        puVar9 = *(undefined4 **)((int)param_1 + 4);
        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar4 & 3; local_8 = iVar1, uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
    }
    if (piVar3 == (int *)0x0) {
      return local_8;
    }
  } while( true );
}



// ============================================================
// FUN_10004250 @ 0x10004250 268B
// ============================================================

int __thiscall FUN_10004250(void *this,void *param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int local_8;
  int local_4;
  
  iVar3 = param_3;
  local_4 = 0;
  local_8 = 0;
  do {
    puVar1 = *(undefined4 **)(*(int *)(local_8 + *(int *)((int)this + 0x18)) + 0xc);
    while (puVar1 != (undefined4 *)0x0) {
      iVar2 = puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      if (((3 < *(int *)(iVar2 + 0xc)) && (**(char **)(iVar2 + 8) == -0x10)) &&
         (uVar4 = FUN_100040e0((byte *)(*(char **)(iVar2 + 8) + 1),&param_3), iVar3 <= (int)uVar4))
      {
        iVar5 = 0;
        if (0 < iVar3) {
          pcVar8 = (char *)(*(int *)(iVar2 + 8) + 1 + param_3);
          do {
            if (*(char *)(iVar5 + param_2) != *pcVar8) break;
            iVar5 = iVar5 + 1;
            pcVar8 = pcVar8 + 1;
          } while (iVar5 < iVar3);
        }
        if (iVar5 == iVar3) {
          uVar4 = uVar4 + (-1 - iVar3);
          FUN_100148af(param_1,uVar4,0xffffffff);
          puVar7 = (undefined4 *)(*(int *)(iVar2 + 8) + param_3 + 1 + iVar3);
          puVar9 = *(undefined4 **)((int)param_1 + 4);
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          local_4 = iVar2;
          if (param_4 == 0) {
            return iVar2;
          }
        }
      }
    }
    local_8 = local_8 + 4;
    if (3 < local_8) {
      return local_4;
    }
  } while( true );
}



// ============================================================
// FUN_10004360 @ 0x10004360 51B
// ============================================================

void __thiscall FUN_10004360(void *this,void *param_1)

{
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  local_8 = 0x43;
  local_7 = 0x79;
  local_6 = 6;
  local_5 = 0x7d;
  local_4 = 1;
  FUN_10004170(this,param_1,(int)&local_8,5);
  return;
}



// ============================================================
// FUN_100043a0 @ 0x100043a0 51B
// ============================================================

void __thiscall FUN_100043a0(void *this,void *param_1)

{
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  
  local_8 = 0x43;
  local_7 = 0x79;
  local_6 = 6;
  local_5 = 0x7d;
  local_4 = 3;
  FUN_10004170(this,param_1,(int)&local_8,5);
  return;
}



// ============================================================
// FUN_100043e0 @ 0x100043e0 205B
// ============================================================

void __thiscall FUN_100043e0(void *this,int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(uint *)(param_1 + 0xc) != param_3) {
    if (3 < (int)*(uint *)(param_1 + 0xc)) {
      FUN_10014ce1(*(undefined **)(param_1 + 8));
    }
    puVar4 = (undefined4 *)(param_1 + 8);
    *puVar4 = 0;
    if ((int)param_3 < 4) {
      puVar2 = puVar4;
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    else {
      puVar2 = FUN_10014cb8(param_3);
      *puVar4 = puVar2;
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *param_2;
        param_2 = param_2 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    iVar1 = *(int *)(*(int *)((int)this + 0x18) + *(int *)(param_1 + 0x10) * 4);
    *(uint *)(iVar1 + 4) = *(int *)(iVar1 + 4) + (param_3 - *(int *)(param_1 + 0xc));
    *(uint *)(param_1 + 0xc) = param_3;
    return;
  }
  if (3 < (int)param_3) {
    puVar4 = *(undefined4 **)(param_1 + 8);
    for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return;
  }
  puVar4 = (undefined4 *)(param_1 + 8);
  for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  return;
}



// ============================================================
// FUN_100044b0 @ 0x100044b0 33B
// ============================================================

int __fastcall FUN_100044b0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar2 = 0xe;
  if (0 < iVar4) {
    piVar3 = *(int **)(param_1 + 0x18);
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + 8 + *(int *)(iVar1 + 4);
    } while (iVar4 != 0);
  }
  return iVar2;
}



// ============================================================
// FUN_100044e0 @ 0x100044e0 329B
// ============================================================

void __thiscall FUN_100044e0(void *this,uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c788;
  local_c = ExceptionList;
  local_44 = *(uint *)((int)this + 4);
  local_40 = *(uint *)((int)this + 8);
  local_3c = *(uint *)((int)this + 0xc);
  local_38 = *(undefined4 *)((int)this + 0x10);
  ExceptionList = &local_c;
  FUN_10003b20(&local_44);
  puVar7 = (uint *)((int)param_1 + 0xe);
  *param_1 = local_44;
  param_1[1] = local_40;
  param_1 = (uint *)0x0;
  puVar2[2] = local_3c;
  *(undefined2 *)(puVar2 + 3) = (undefined2)local_38;
  iVar1 = *(int *)((int)this + 0x1c);
  if (0 < iVar1) {
    do {
      puVar2 = *(uint **)(*(int *)((int)this + 0x18) + (int)param_1 * 4);
      uVar4 = FUN_10003b70(*puVar2);
      uVar5 = FUN_10003b70(puVar2[1]);
      *puVar7 = uVar4;
      puVar7[1] = uVar5;
      puVar7 = puVar7 + 2;
      puVar2 = (uint *)puVar2[3];
      while (puVar2 != (uint *)0x0) {
        puVar3 = (uint *)*puVar2;
        puVar2 = (uint *)puVar2[2];
        uVar4 = puVar2[1];
        puVar8 = puVar2;
        puVar9 = puVar7;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(char *)puVar9 = (char)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar9 = (uint *)((int)puVar9 + 1);
        }
        uVar4 = puVar2[1];
        uVar5 = puVar2[3];
        puVar8 = puVar2 + 2;
        if (3 < (int)uVar5) {
          puVar8 = (uint *)puVar2[2];
        }
        puVar9 = (uint *)((int)puVar7 + uVar4);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(char *)puVar9 = (char)*puVar8;
          puVar8 = (uint *)((int)puVar8 + 1);
          puVar9 = (uint *)((int)puVar9 + 1);
        }
        puVar7 = (uint *)((int)((int)puVar7 + uVar4) + puVar2[3]);
        puVar2 = puVar3;
      }
      local_4 = 0;
      FUN_10014839((undefined4 *)0x0);
      param_1 = (uint *)((int)param_1 + 1);
      local_4 = 0xffffffff;
    } while ((int)param_1 < iVar1);
  }
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_10004630 @ 0x10004630 128B
// ============================================================

void FUN_10004630(undefined4 *param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar3 = (int)param_2 >> 7;
  iVar5 = (int)param_2 >> 0xe;
  uVar1 = (undefined1)param_2;
  param_2._0_2_ = (ushort)((byte)((int)param_2 >> 0x15) & 0x7f);
  param_2 = CONCAT13(uVar1,CONCAT12((char)iVar3,(ushort)param_2)) & 0x7f7fffff;
  param_2 = CONCAT22(param_2._2_2_,CONCAT11((char)iVar5,(undefined1)param_2)) & 0xffff7fff;
  uVar2 = 1;
  iVar3 = 0;
  do {
    if (*(char *)((int)&param_2 + iVar3) != '\0') {
      uVar2 = 4 - iVar3;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    *(byte *)((int)&param_2 + iVar3) = *(byte *)((int)&param_2 + iVar3) | 0x80;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  puVar6 = (undefined4 *)(&stack0x0000000c + -uVar2);
  for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return;
}



// ============================================================
// FUN_100046b0 @ 0x100046b0 628B
// ============================================================

void __thiscall
FUN_100046b0(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            byte param_5)

{
  HGLOBAL hMem;
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  ushort local_44;
  undefined1 local_42;
  undefined4 local_3c [5];
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined4 local_21;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c7a8;
  local_c = ExceptionList;
  local_50 = CONCAT13(param_4,CONCAT12(param_3,CONCAT11(param_2,param_1)));
  ExceptionList = &local_c;
  hMem = GlobalAlloc(0x42,6);
  if (hMem == (HGLOBAL)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = GlobalLock(hMem);
    local_48 = local_50;
    local_42 = 0;
    local_44 = (ushort)param_5;
    local_48._2_1_ = (byte)((uint)local_50 >> 0x10);
    local_48._3_1_ = (byte)((uint)local_50 >> 0x18);
    local_48._1_1_ = (byte)((uint)local_50 >> 8);
    local_48._0_1_ = (byte)local_50;
    local_50 = CONCAT31(local_50._1_3_,
                        (byte)((byte)((byte)((byte)((param_5 & 0x9f) >> 1 | local_48._3_1_ & 0x8f)
                                             >> 1 | local_48._2_1_ & 0x87) >> 1 |
                                     local_48._1_1_ & 0x83) >> 1 | (byte)local_48 & 0x81) >> 1);
    iVar2 = 0;
    do {
      *(byte *)((int)&local_50 + iVar2 + 1) = *(byte *)((int)&local_48 + iVar2) & 0x7f;
      uVar1 = iVar2 + 2;
      iVar2 = iVar2 + 1;
    } while (uVar1 < 6);
    *puVar4 = local_50;
    *(undefined2 *)(puVar4 + 1) = local_4c;
    local_48 = *puVar4;
    local_44 = *(ushort *)(puVar4 + 1);
    GlobalUnlock(hMem);
    GlobalFree(hMem);
    uVar1 = 6;
  }
  local_28._0_1_ = 0xf0;
  local_28._2_1_ = 0x43;
  local_28._3_1_ = 0x79;
  local_24 = 6;
  local_23 = 0x7d;
  local_22 = 1;
  local_21._0_1_ = 0;
  local_21._1_1_ = 0;
  local_21._2_1_ = 0;
  local_21._3_1_ = 0;
  local_1d = 0;
  local_1c = 0;
  local_1b = 0;
  local_1a = 0;
  local_19 = 0;
  local_18 = 0;
  local_17 = 0;
  local_16 = 0;
  local_15 = 0;
  local_14 = 0;
  local_13 = 0;
  local_12 = 0;
  local_11 = 0;
  local_10 = 0;
  local_f = 0;
  local_e = 0;
  puVar4 = &local_48;
  puVar6 = &local_21;
  for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(undefined1 *)((int)&local_21 + uVar1) = 0xf7;
  local_28._1_1_ = (char)uVar1 + '\x06';
  uVar1 = uVar1 + 8;
  FUN_1001484f(local_3c);
  local_4 = 0;
  iVar2 = FUN_10004360(this,local_3c);
  if (iVar2 == 0) {
    iVar2 = FUN_10004120();
    puVar3 = FUN_10014cb8(uVar1);
    puVar4 = &local_28;
    puVar6 = puVar3;
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar4 = FUN_10014cb8(0x14);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[3] = uVar1;
    puVar4[1] = 1;
    puVar4[2] = puVar3;
    puVar4[4] = 0;
    FUN_10004cf0(this,(int)puVar4,iVar2);
  }
  else {
    FUN_100043e0(this,iVar2,&local_28,uVar1);
  }
  local_4 = 0xffffffff;
  FUN_10014882();
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_10004930 @ 0x10004930 958B
// ============================================================

void __thiscall FUN_10004930(void *this,int param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint *puVar8;
  HGLOBAL hMem;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint local_4c;
  int local_48;
  undefined4 local_30;
  undefined2 local_2c;
  byte local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c7c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar8 = FUN_10014cb8(param_2 * 2);
  uVar14 = param_2 % 7;
  uVar16 = 0;
  if (uVar14 == 0) {
    local_4c = param_2 / 7 << 3;
  }
  else {
    local_4c = uVar14 + 1 + (param_2 / 7) * 8;
  }
  local_48 = 0;
  hMem = GlobalAlloc(0x42,local_4c);
  local_30 = hMem;
  if (hMem == (HGLOBAL)0x0) {
    param_2 = 0;
  }
  else {
    puVar9 = GlobalLock(hMem);
    uVar13 = param_2 - uVar14;
    if (uVar13 != 0) {
      local_48 = (uVar13 + 6) / 7 << 3;
      puVar15 = puVar9;
      do {
        bVar2 = *(byte *)(param_1 + 4 + uVar16);
        bVar3 = *(byte *)(param_1 + 5 + uVar16);
        bVar4 = *(byte *)(param_1 + 3 + uVar16);
        bVar5 = *(byte *)(param_1 + 6 + uVar16);
        bVar6 = *(byte *)(param_1 + 2 + uVar16);
        bVar7 = *(byte *)(param_1 + 1 + uVar16);
        pbVar1 = (byte *)(param_1 + uVar16);
        uVar16 = uVar16 + 7;
        local_28 = CONCAT13(bVar6,CONCAT12(bVar7,CONCAT11(*pbVar1,(byte)((byte)((byte)((byte)((byte)
                                                  ((byte)(bVar3 & 0xbf | bVar5 >> 1) >> 1 |
                                                  bVar2 & 0x9f) >> 1 | bVar4 & 0x8f) >> 1 |
                                                  bVar6 & 0x87) >> 1 | bVar7 & 0x83) >> 1 |
                                                  *pbVar1 & 0x81) >> 1))) & 0x7f7f7fff;
        local_24 = CONCAT31((int3)(((uint)(CONCAT11(bVar5,bVar3) & 0xff7f) << 0x10) >> 8),bVar4) &
                   0x7fffff7f;
        *puVar15 = local_28;
        local_24 = CONCAT22(local_24._2_2_,CONCAT11(bVar2,(undefined1)local_24)) & 0xffff7fff;
        puVar15[1] = local_24;
        hMem = local_30;
        puVar15 = puVar15 + 2;
      } while (uVar16 < uVar13);
    }
    if (uVar14 != 0) {
      local_30 = (HGLOBAL)0x0;
      local_2c = 0;
      local_2a = 0;
      puVar12 = (undefined4 *)(uVar16 + param_1);
      puVar10 = &local_30;
      for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar10 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar16 = uVar14 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      local_28 = CONCAT31(local_28._1_3_,
                          (byte)((byte)((byte)((byte)((byte)((byte)(local_2c._1_1_ & 0xbf |
                                                                   local_2a >> 1) >> 1 |
                                                            (byte)local_2c & 0x9f) >> 1 |
                                                     local_30._3_1_ & 0x8f) >> 1 |
                                              local_30._2_1_ & 0x87) >> 1 | local_30._1_1_ & 0x83)
                                 >> 1 | (byte)local_30 & 0x81) >> 1);
      if (uVar14 != 0) {
        iVar11 = 0;
        do {
          *(byte *)((int)&local_28 + iVar11 + 1) = *(byte *)((int)&local_30 + iVar11) & 0x7f;
          uVar16 = iVar11 + 2;
          iVar11 = iVar11 + 1;
        } while (uVar16 <= uVar14);
      }
      puVar12 = &local_28;
      puVar10 = (undefined4 *)((int)puVar9 + local_48);
      for (uVar16 = uVar14 + 1 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar10 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar14 = uVar14 + 1 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
    }
    puVar15 = puVar8;
    for (uVar14 = local_4c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar15 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar15 = puVar15 + 1;
    }
    for (uVar14 = local_4c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(char *)puVar15 = (char)*puVar9;
      puVar9 = (uint *)((int)puVar9 + 1);
      puVar15 = (uint *)((int)puVar15 + 1);
    }
    GlobalUnlock(hMem);
    GlobalFree(hMem);
    param_2 = local_4c;
  }
  uVar14 = param_2 + 0xb;
  puVar10 = FUN_10014cb8(uVar14);
  puVar12 = puVar10;
  for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
    *puVar12 = 0xf7f7f7f7;
    puVar12 = puVar12 + 1;
  }
  for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(undefined1 *)puVar12 = 0xf7;
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  iVar11 = FUN_10004630((undefined4 *)((int)puVar10 + 1),param_2 + 6);
  puVar9 = puVar8;
  puVar15 = (uint *)((int)puVar10 + iVar11 + 6);
  for (uVar14 = param_2 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
    *puVar15 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar15 = puVar15 + 1;
  }
  for (uVar14 = param_2 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
    *(char *)puVar15 = (char)*puVar9;
    puVar9 = (uint *)((int)puVar9 + 1);
    puVar15 = (uint *)((int)puVar15 + 1);
  }
  FUN_10014ce1((undefined *)puVar8);
  *(undefined1 *)puVar10 = 0xf0;
  *(undefined1 *)((int)puVar10 + iVar11 + 1) = 0x43;
  *(undefined1 *)((int)puVar10 + iVar11 + 2) = 0x79;
  *(undefined1 *)((int)puVar10 + iVar11 + 3) = 6;
  *(undefined1 *)((int)puVar10 + iVar11 + 4) = 0x7d;
  *(undefined1 *)((int)puVar10 + iVar11 + 5) = 3;
  uVar14 = param_2 + 7 + iVar11;
  FUN_1001484f(local_20);
  local_4 = 0;
  iVar11 = FUN_100043a0(this,local_20);
  if (iVar11 == 0) {
    iVar11 = FUN_10004360(this,local_20);
    if (iVar11 == 0) {
      iVar11 = FUN_10004120();
    }
    puVar12 = FUN_10014cb8(0x14);
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[4] = 0;
    puVar12[1] = 1;
    puVar12[2] = puVar10;
    puVar12[3] = uVar14;
    FUN_10004cf0(this,(int)puVar12,iVar11);
  }
  else {
    FUN_100043e0(this,iVar11,puVar10,uVar14);
    FUN_10014ce1((undefined *)puVar10);
  }
  local_4 = 0xffffffff;
  FUN_10014882();
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_10004cf0 @ 0x10004cf0 293B
// ============================================================

void __thiscall FUN_10004cf0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  if (param_2 == 0) {
    iVar1 = **(int **)((int)this + 0x18);
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 0x18) == 0) {
      iVar4 = FUN_10014819((undefined4 *)(iVar1 + 0x1c),*(int *)(iVar1 + 0x20),0xc);
      iVar3 = *(int *)(iVar1 + 0x20);
      puVar5 = (undefined4 *)(iVar4 + -8 + iVar3 * 0xc);
      if (-1 < iVar3 + -1) {
        do {
          *puVar5 = *(undefined4 *)(iVar1 + 0x18);
          *(undefined4 **)(iVar1 + 0x18) = puVar5;
          puVar5 = puVar5 + -3;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    puVar5 = *(undefined4 **)(iVar1 + 0x18);
    *(undefined4 *)(iVar1 + 0x18) = *puVar5;
    puVar5[1] = 0;
    *puVar5 = uVar2;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    puVar5[2] = 0;
    puVar5[2] = param_1;
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(undefined4 **)(iVar1 + 0x10) = puVar5;
    }
    else {
      *(undefined4 **)(*(int *)(iVar1 + 0xc) + 4) = puVar5;
    }
    *(undefined4 **)(iVar1 + 0xc) = puVar5;
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4);
    return;
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x18) + *(int *)(param_2 + 0x10) * 4);
  for (piVar6 = *(int **)(iVar1 + 0xc); piVar6 != (int *)0x0; piVar6 = (int *)*piVar6) {
    if (piVar6[2] == param_2) goto LAB_10004d1c;
  }
  piVar6 = (int *)0x0;
LAB_10004d1c:
  if (piVar6 == (int *)0x0) {
    iVar3 = FUN_10005e00((void *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),0);
    *(int *)(iVar3 + 8) = param_1;
    if (*(int **)(iVar1 + 0x10) == (int *)0x0) {
      *(int *)(iVar1 + 0xc) = iVar3;
      *(int *)(iVar1 + 0x10) = iVar3;
    }
    else {
      **(int **)(iVar1 + 0x10) = iVar3;
      *(int *)(iVar1 + 0x10) = iVar3;
    }
  }
  else {
    iVar3 = FUN_10005e00((void *)(iVar1 + 8),piVar6,*piVar6);
    *(int *)(iVar3 + 8) = param_1;
    if (*piVar6 == 0) {
      *(int *)(iVar1 + 0x10) = iVar3;
    }
    else {
      *(int *)(*piVar6 + 4) = iVar3;
    }
    *piVar6 = iVar3;
  }
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + *(int *)(param_1 + 0xc) + *(int *)(param_1 + 4);
  return;
}



// ============================================================
// FUN_10004e20 @ 0x10004e20 206B
// ============================================================

int __thiscall FUN_10004e20(void *this,undefined *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x18) + *(int *)(param_1 + 0x10) * 4);
  for (piVar5 = *(int **)(iVar1 + 0xc); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
    if ((undefined *)piVar5[2] == param_1) goto LAB_10004e47;
  }
  piVar5 = (int *)0x0;
LAB_10004e47:
  iVar4 = *(int *)(param_1 + 4);
  iVar6 = 0;
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      iVar6 = iVar6 * 0x80 + ((byte)param_1[iVar3] & 0x7f);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) - (*(int *)(param_1 + 0xc) + iVar4);
  if (param_1 != (undefined *)0x0) {
    FUN_10014ce1(param_1);
  }
  if (piVar5 == *(int **)(iVar1 + 0xc)) {
    *(int *)(iVar1 + 0xc) = *piVar5;
  }
  else {
    *(int *)piVar5[1] = *piVar5;
  }
  if (piVar5 == *(int **)(iVar1 + 0x10)) {
    *(int *)(iVar1 + 0x10) = piVar5[1];
  }
  else {
    *(int *)(*piVar5 + 4) = piVar5[1];
  }
  *piVar5 = *(int *)(iVar1 + 0x18);
  iVar4 = *(int *)(iVar1 + 0x14) + -1;
  *(int **)(iVar1 + 0x18) = piVar5;
  *(int *)(iVar1 + 0x14) = iVar4;
  if (iVar4 == 0) {
    for (puVar2 = *(undefined4 **)(iVar1 + 0xc); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_10014839(*(undefined4 **)(iVar1 + 0x1c));
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return iVar6;
}



// ============================================================
// FUN_10004ef0 @ 0x10004ef0 145B
// ============================================================

void __thiscall FUN_10004ef0(void *this,int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x18) + *(int *)(param_1 + 0x10) * 4);
  for (puVar2 = *(undefined4 **)(iVar1 + 0xc);
      (puVar2 != (undefined4 *)0x0 && (puVar2[2] != param_1)); puVar2 = (undefined4 *)*puVar2) {
  }
  if (param_2 != 0) {
    iVar6 = *(int *)(param_1 + 4);
    iVar7 = 0;
    iVar4 = 0;
    if (0 < iVar6) {
      do {
        iVar7 = iVar7 * 0x80 + (*(byte *)(iVar4 + param_1) & 0x7f);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar6);
    }
    iVar4 = 0;
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) - iVar6;
    iVar6 = 0;
    do {
      uVar5 = (uint)(iVar7 + param_2) >> ((char)iVar6 * -7 + 0x15U & 0x1f);
      bVar3 = (byte)uVar5 & 0x7f;
      if (iVar6 == 3) {
LAB_10004f65:
        *(byte *)(iVar4 + param_1) = bVar3;
        iVar4 = iVar4 + 1;
      }
      else if ((uVar5 & 0x7f) != 0) {
        bVar3 = bVar3 + 0x80;
        goto LAB_10004f65;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    *(int *)(param_1 + 4) = iVar4;
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + iVar4;
  }
  return;
}



// ============================================================
// FUN_10004f90 @ 0x10004f90 25B
// ============================================================

undefined4 __thiscall FUN_10004f90(void *this,int param_1)

{
  if (*(int *)((int)this + 0x1c) <= param_1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)((int)this + 0x18) + param_1 * 4);
}



// ============================================================
// FUN_10004fb0 @ 0x10004fb0 1019B
// ============================================================

void __thiscall
FUN_10004fb0(void *this,undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined4 *param_6,uint param_7)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  HGLOBAL hMem;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint local_50;
  int local_48;
  int local_40;
  undefined4 local_38;
  undefined2 local_34;
  byte local_32;
  HGLOBAL local_30;
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c7e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_2c = this;
  FUN_1001484f(local_20);
  local_4 = 0;
  local_48 = FUN_100043a0(this,local_20);
  if ((local_48 == 0) && (local_48 = FUN_10004360(this,local_20), local_48 == 0)) {
    local_48 = FUN_10004120();
  }
  puVar8 = FUN_10014cb8(param_7);
  puVar9 = FUN_10014cb8(param_7 * 2);
  puVar12 = puVar8;
  for (uVar13 = param_7 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar12 = *param_6;
    param_6 = param_6 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar13 = param_7 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(undefined1 *)puVar12 = *(undefined1 *)param_6;
    param_6 = (undefined4 *)((int)param_6 + 1);
    puVar12 = (undefined4 *)((int)puVar12 + 1);
  }
  uVar13 = param_7 % 7;
  uVar16 = 0;
  if (uVar13 == 0) {
    local_50 = param_7 / 7 << 3;
  }
  else {
    local_50 = uVar13 + 1 + (param_7 / 7) * 8;
  }
  local_40 = 0;
  local_30 = GlobalAlloc(0x42,local_50);
  if (local_30 == (HGLOBAL)0x0) {
    param_7 = 0;
  }
  else {
    puVar10 = GlobalLock(local_30);
    uVar15 = param_7 - uVar13;
    if (uVar15 != 0) {
      local_40 = (uVar15 + 6) / 7 << 3;
      puVar18 = puVar10;
      do {
        bVar2 = *(byte *)(uVar16 + 4 + (int)puVar8);
        bVar3 = *(byte *)(uVar16 + 5 + (int)puVar8);
        bVar4 = *(byte *)(uVar16 + 3 + (int)puVar8);
        bVar5 = *(byte *)(uVar16 + 6 + (int)puVar8);
        bVar6 = *(byte *)(uVar16 + 2 + (int)puVar8);
        bVar7 = *(byte *)(uVar16 + 1 + (int)puVar8);
        pbVar1 = (byte *)(uVar16 + (int)puVar8);
        uVar16 = uVar16 + 7;
        local_28 = CONCAT13(bVar6,CONCAT12(bVar7,CONCAT11(*pbVar1,(byte)((byte)((byte)((byte)((byte)
                                                  ((byte)(bVar3 & 0xbf | bVar5 >> 1) >> 1 |
                                                  bVar2 & 0x9f) >> 1 | bVar4 & 0x8f) >> 1 |
                                                  bVar6 & 0x87) >> 1 | bVar7 & 0x83) >> 1 |
                                                  *pbVar1 & 0x81) >> 1))) & 0x7f7f7fff;
        local_24 = CONCAT31((int3)(((uint)(CONCAT11(bVar5,bVar3) & 0xff7f) << 0x10) >> 8),bVar4) &
                   0x7fffff7f;
        *puVar18 = local_28;
        local_24 = CONCAT22(local_24._2_2_,CONCAT11(bVar2,(undefined1)local_24)) & 0xffff7fff;
        puVar18[1] = local_24;
        puVar18 = puVar18 + 2;
      } while (uVar16 < uVar15);
    }
    local_38 = puVar10;
    if (uVar13 != 0) {
      local_38 = (uint *)0x0;
      local_34 = 0;
      local_32 = 0;
      puVar12 = (undefined4 *)(uVar16 + (int)puVar8);
      puVar17 = &local_38;
      for (uVar15 = uVar13 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
        *puVar17 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar16 = uVar13 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      local_28 = CONCAT31(local_28._1_3_,
                          (byte)((byte)((byte)((byte)((byte)((byte)(local_34._1_1_ & 0xbf |
                                                                   local_32 >> 1) >> 1 |
                                                            (byte)local_34 & 0x9f) >> 1 |
                                                     local_38._3_1_ & 0x8f) >> 1 |
                                              local_38._2_1_ & 0x87) >> 1 | local_38._1_1_ & 0x83)
                                 >> 1 | (byte)local_38 & 0x81) >> 1);
      if (uVar13 != 0) {
        iVar14 = 0;
        do {
          *(byte *)((int)&local_28 + iVar14 + 1) = *(byte *)((int)&local_38 + iVar14) & 0x7f;
          uVar16 = iVar14 + 2;
          iVar14 = iVar14 + 1;
        } while (uVar16 <= uVar13);
      }
      puVar12 = &local_28;
      puVar17 = (undefined4 *)((int)puVar10 + local_40);
      for (uVar16 = uVar13 + 1 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar17 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar13 = uVar13 + 1 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar17 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
    }
    hMem = local_30;
    puVar18 = puVar9;
    for (uVar13 = local_50 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar18 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar18 = puVar18 + 1;
    }
    for (uVar13 = local_50 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(char *)puVar18 = (char)*puVar10;
      puVar10 = (uint *)((int)puVar10 + 1);
      puVar18 = (uint *)((int)puVar18 + 1);
    }
    GlobalUnlock(local_30);
    GlobalFree(hMem);
    param_7 = local_50;
  }
  puVar11 = FUN_10014cb8(param_7 + 0xd);
  puVar11[7] = param_1;
  puVar11[1] = (char)param_7 + '\v';
  puVar11[8] = param_2;
  puVar11[9] = param_3;
  puVar11[10] = param_4;
  puVar11[0xb] = param_5;
  *puVar11 = 0xf0;
  uVar13 = param_7 >> 2;
  puVar11[2] = 0x43;
  puVar11[3] = 0x79;
  puVar11[4] = 6;
  puVar11[5] = 0x7f;
  puVar11[6] = 1;
  puVar10 = puVar9;
  puVar18 = (uint *)(puVar11 + 0xc);
  for (; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar18 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar18 = puVar18 + 1;
  }
  for (uVar13 = param_7 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
    *(char *)puVar18 = (char)*puVar10;
    puVar10 = (uint *)((int)puVar10 + 1);
    puVar18 = (uint *)((int)puVar18 + 1);
  }
  puVar11[param_7 + 0xc] = 0xf7;
  FUN_10014ce1((undefined *)puVar8);
  FUN_10014ce1((undefined *)puVar9);
  puVar12 = FUN_10014cb8(0x14);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[3] = param_7 + 0xd;
  puVar12[1] = 1;
  puVar12[2] = puVar11;
  puVar12[4] = 0;
  FUN_10004cf0(local_2c,(int)puVar12,local_48);
  local_4 = 0xffffffff;
  FUN_10014882();
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_100053b0 @ 0x100053b0 1280B
// ============================================================

void __thiscall
FUN_100053b0(void *this,undefined1 param_1,byte param_2,undefined4 *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  HGLOBAL hMem;
  uint *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint local_88;
  int local_80;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  byte local_52;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [5];
  undefined4 local_34;
  uint *local_30;
  undefined4 local_20;
  undefined4 *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001484f(local_48);
  local_4 = 0;
  local_68 = 0x43;
  local_67 = 0x79;
  local_66 = 6;
  local_65 = 0x7f;
  local_64 = 3;
  local_60 = 0x43;
  local_5f = 0x79;
  local_5e = 6;
  local_5d = 0x7f;
  local_5c = 1;
  puVar8 = (undefined4 *)FUN_10004250(this,local_48,(int)&local_68,5,1);
  if ((((puVar8 == (undefined4 *)0x0) &&
       (puVar8 = (undefined4 *)FUN_10004250(this,local_48,(int)&local_60,5,1),
       puVar8 == (undefined4 *)0x0)) &&
      (puVar8 = (undefined4 *)FUN_100043a0(this,local_48), puVar8 == (undefined4 *)0x0)) &&
     (puVar8 = (undefined4 *)FUN_10004360(this,local_48), puVar8 == (undefined4 *)0x0)) {
    puVar8 = (undefined4 *)FUN_10004120();
  }
  while (param_4 != 0) {
    uVar14 = 0xdac;
    if ((int)param_4 < 0xdad) {
      uVar14 = param_4;
    }
    param_4 = param_4 - uVar14;
    FUN_1001484f(&local_20);
    local_4._0_1_ = 1;
    FUN_1001484f(&local_34);
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_100148af(&local_20,uVar14,0xffffffff);
    FUN_100148af(&local_34,uVar14 * 2,0xffffffff);
    puVar12 = local_1c;
    puVar17 = local_30;
    puVar15 = param_3;
    puVar18 = local_1c;
    for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar18 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar18 = puVar18 + 1;
    }
    param_3 = (undefined4 *)((int)param_3 + uVar14);
    for (uVar13 = uVar14 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)puVar18 = *(undefined1 *)puVar15;
      puVar15 = (undefined4 *)((int)puVar15 + 1);
      puVar18 = (undefined4 *)((int)puVar18 + 1);
    }
    uVar13 = uVar14 % 7;
    uVar16 = 0;
    if (uVar13 == 0) {
      local_88 = (uVar14 / 7) * 8;
    }
    else {
      local_88 = uVar13 + 1 + (uVar14 / 7) * 8;
    }
    local_80 = 0;
    hMem = GlobalAlloc(0x42,local_88);
    if (hMem == (HGLOBAL)0x0) {
      local_88 = 0;
    }
    else {
      puVar9 = GlobalLock(hMem);
      uVar14 = uVar14 - uVar13;
      if (uVar14 != 0) {
        local_80 = (uVar14 + 6) / 7 << 3;
        puVar19 = puVar9;
        do {
          bVar2 = *(byte *)(uVar16 + 4 + (int)puVar12);
          bVar3 = *(byte *)(uVar16 + 5 + (int)puVar12);
          bVar4 = *(byte *)(uVar16 + 3 + (int)puVar12);
          bVar5 = *(byte *)(uVar16 + 6 + (int)puVar12);
          bVar6 = *(byte *)(uVar16 + 2 + (int)puVar12);
          bVar7 = *(byte *)(uVar16 + 1 + (int)puVar12);
          pbVar1 = (byte *)(uVar16 + (int)puVar12);
          uVar16 = uVar16 + 7;
          local_50 = CONCAT13(bVar6,CONCAT12(bVar7,CONCAT11(*pbVar1,(byte)((byte)((byte)((byte)((
                                                  byte)((byte)(bVar3 & 0xbf | bVar5 >> 1) >> 1 |
                                                       bVar2 & 0x9f) >> 1 | bVar4 & 0x8f) >> 1 |
                                                  bVar6 & 0x87) >> 1 | bVar7 & 0x83) >> 1 |
                                                  *pbVar1 & 0x81) >> 1))) & 0x7f7f7fff;
          local_4c = CONCAT31((int3)(((uint)(CONCAT11(bVar5,bVar3) & 0xff7f) << 0x10) >> 8),bVar4) &
                     0x7fffff7f;
          *puVar19 = local_50;
          local_4c = CONCAT22(local_4c._2_2_,CONCAT11(bVar2,(undefined1)local_4c)) & 0xffff7fff;
          puVar19[1] = local_4c;
          puVar19 = puVar19 + 2;
        } while (uVar16 < uVar14);
      }
      if (uVar13 != 0) {
        local_58 = 0;
        local_54 = 0;
        local_52 = 0;
        puVar12 = (undefined4 *)(uVar16 + (int)puVar12);
        puVar15 = &local_58;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar15 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar14 = uVar13 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        local_50 = CONCAT31(local_50._1_3_,
                            (byte)((byte)((byte)((byte)((byte)((byte)(local_54._1_1_ & 0xbf |
                                                                     local_52 >> 1) >> 1 |
                                                              (byte)local_54 & 0x9f) >> 1 |
                                                       local_58._3_1_ & 0x8f) >> 1 |
                                                local_58._2_1_ & 0x87) >> 1 | local_58._1_1_ & 0x83)
                                   >> 1 | (byte)local_58 & 0x81) >> 1);
        if (uVar13 != 0) {
          iVar11 = 0;
          do {
            *(byte *)((int)&local_50 + iVar11 + 1) = *(byte *)((int)&local_58 + iVar11) & 0x7f;
            uVar14 = iVar11 + 2;
            iVar11 = iVar11 + 1;
          } while (uVar14 <= uVar13);
        }
        puVar12 = &local_50;
        puVar15 = (undefined4 *)((int)puVar9 + local_80);
        for (uVar14 = uVar13 + 1 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar15 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar14 = uVar13 + 1 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
      }
      puVar19 = puVar17;
      for (uVar14 = local_88 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar19 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar19 = puVar19 + 1;
      }
      for (uVar14 = local_88 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(char *)puVar19 = (char)*puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar19 = (uint *)((int)puVar19 + 1);
      }
      GlobalUnlock(hMem);
      GlobalFree(hMem);
    }
    puVar10 = FUN_10014cb8(local_88 + 0xd);
    *puVar10 = 0xf0;
    iVar11 = FUN_10004630((undefined4 *)(puVar10 + 1),local_88 + 8);
    puVar10[iVar11 + 1] = 0x43;
    puVar10[iVar11 + 2] = 0x79;
    puVar10[iVar11 + 3] = 6;
    puVar10[iVar11 + 4] = 0x7f;
    puVar10[iVar11 + 5] = 3;
    puVar10[iVar11 + 6] = param_1;
    puVar10[iVar11 + 7] = param_2;
    if (param_4 != 0) {
      puVar10[iVar11 + 7] = param_2 | 0x20;
    }
    puVar9 = (uint *)(puVar10 + iVar11 + 8);
    for (uVar14 = local_88 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar9 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar14 = local_88 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(char *)puVar9 = (char)*puVar17;
      puVar17 = (uint *)((int)puVar17 + 1);
      puVar9 = (uint *)((int)puVar9 + 1);
    }
    puVar10[local_88 + iVar11 + 8] = 0xf7;
    puVar12 = FUN_10014cb8(0x14);
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[1] = 1;
    puVar12[2] = puVar10;
    puVar12[3] = iVar11 + 9 + local_88;
    puVar12[4] = 0;
    FUN_10004cf0(this,(int)puVar12,(int)puVar8);
    local_4._0_1_ = 1;
    FUN_10014882();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_10014882();
    puVar8 = puVar12;
  }
  local_4 = 0xffffffff;
  FUN_10014882();
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_100058b0 @ 0x100058b0 687B
// ============================================================

undefined4 __thiscall FUN_100058b0(void *this,int param_1)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  ushort uVar10;
  undefined3 uVar11;
  int iVar12;
  HGLOBAL hMem;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined2 local_24;
  undefined1 local_22;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c838;
  local_c = ExceptionList;
  local_4c = 0x43;
  local_4b = 0x79;
  local_4a = 6;
  local_49 = 0x7d;
  local_48 = 2;
  ExceptionList = &local_c;
  FUN_1001484f(local_20);
  local_4 = 0;
  iVar12 = FUN_10004170(this,local_20,(int)&local_4c,5);
  if (iVar12 == 0) {
    local_4 = 0xffffffff;
    FUN_10014882();
    ExceptionList = local_c;
    return 0;
  }
  hMem = GlobalAlloc(0x42,0x13);
  if (hMem != (HGLOBAL)0x0) {
    puVar13 = GlobalLock(hMem);
    uVar15 = 0;
    puVar16 = puVar13;
    do {
      bVar3 = *(byte *)(param_1 + 4 + uVar15);
      bVar4 = *(byte *)(param_1 + 5 + uVar15);
      bVar5 = *(byte *)(param_1 + 3 + uVar15);
      bVar6 = *(byte *)(param_1 + 2 + uVar15);
      bVar7 = *(byte *)(param_1 + 6 + uVar15);
      bVar8 = *(byte *)(param_1 + 1 + uVar15);
      pbVar2 = (byte *)(param_1 + uVar15);
      uVar15 = uVar15 + 7;
      uVar11 = CONCAT12(bVar6,CONCAT11(bVar8,*pbVar2));
      local_38 = CONCAT31((int3)(((uint)(CONCAT11(bVar7,bVar4) & 0xff7f) << 0x10) >> 8),bVar5) &
                 0x7fffff7f;
      local_3c = CONCAT31(uVar11,(byte)((byte)((byte)((byte)((byte)((byte)(bVar4 & 0xbf | bVar7 >> 1
                                                                          ) >> 1 | bVar3 & 0x9f) >>
                                                             1 | bVar5 & 0x8f) >> 1 | bVar6 & 0x87)
                                               >> 1 | bVar8 & 0x83) >> 1 | *pbVar2 & 0x81) >> 1) &
                 0x7f7f7fff;
      local_38 = CONCAT22(local_38._2_2_,CONCAT11(bVar3,(undefined1)local_38)) & 0xffff7fff;
      *puVar16 = local_3c;
      puVar16[1] = local_38;
      puVar16 = puVar16 + 2;
    } while (uVar15 < 0xe);
    local_40 = 0;
    uVar10 = *(ushort *)(uVar15 + param_1);
    local_3e = 0;
    local_44 = (uint)uVar10;
    uVar15 = local_44;
    local_44._1_1_ = (byte)(uVar10 >> 8);
    local_44._0_1_ = (byte)uVar10;
    local_3c = CONCAT31(uVar11,(byte)((local_44._1_1_ & 0x83) >> 1 | (byte)local_44 & 0x81) >> 1) &
               0x7f7f7fff;
    iVar14 = 0;
    do {
      *(byte *)((int)&local_3c + iVar14 + 1) = *(byte *)((int)&local_44 + iVar14) & 0x7f;
      uVar1 = iVar14 + 2;
      iVar14 = iVar14 + 1;
    } while (uVar1 < 3);
    *(undefined2 *)(puVar13 + 4) = (undefined2)local_3c;
    *(undefined1 *)((int)puVar13 + 0x12) = local_3c._2_1_;
    local_34 = *puVar13;
    local_30 = puVar13[1];
    local_2c = puVar13[2];
    uVar1 = puVar13[4];
    uVar9 = *(undefined1 *)((int)puVar13 + 0x12);
    local_28 = puVar13[3];
    local_44 = uVar15;
    GlobalUnlock(hMem);
    GlobalFree(hMem);
    local_24 = (short)uVar1;
    local_22 = uVar9;
  }
  iVar12 = *(int *)(iVar12 + 8);
  local_4 = 0xffffffff;
  *(uint *)(iVar12 + 7) = local_34;
  *(uint *)(iVar12 + 0xb) = local_30;
  *(uint *)(iVar12 + 0xf) = local_2c;
  *(uint *)(iVar12 + 0x13) = local_28;
  *(undefined2 *)(iVar12 + 0x17) = local_24;
  *(undefined1 *)(iVar12 + 0x19) = local_22;
  FUN_10014882();
  ExceptionList = local_c;
  return 1;
}



// ============================================================
// FUN_10005b60 @ 0x10005b60 180B
// ============================================================

undefined4 __thiscall FUN_10005b60(void *this,undefined1 param_1)

{
  int iVar1;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined4 local_20 [5];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001c858;
  local_c = ExceptionList;
  local_28 = 0x43;
  local_27 = 0x79;
  local_26 = 6;
  local_25 = 0x7f;
  local_24 = 0;
  ExceptionList = &local_c;
  FUN_1001484f(local_20);
  local_4 = 0;
  iVar1 = FUN_10004250(this,local_20,(int)&local_28,5,0);
  if (iVar1 != 0) {
    local_4 = 0xffffffff;
    *(undefined1 *)(*(int *)(iVar1 + 8) + 7) = param_1;
    FUN_10014882();
    ExceptionList = local_c;
    return 1;
  }
  local_4 = 0xffffffff;
  FUN_10014882();
  ExceptionList = local_c;
  return 0;
}



// ============================================================
// FUN_10005d40 @ 0x10005d40 21B
// ============================================================

void __fastcall FUN_10005d40(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1001e410;
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_10014ce1((undefined *)param_1[1]);
  }
  return;
}



// ============================================================
// FUN_10005d60 @ 0x10005d60 30B
// ============================================================

undefined4 * __thiscall FUN_10005d60(void *this,byte param_1)

{
  FUN_10005d80(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10005d80 @ 0x10005d80 95B
// ============================================================

void __fastcall FUN_10005d80(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1001c878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_1001e41c;
  puVar1 = (undefined4 *)param_1[1];
  local_4 = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  FUN_10014839((undefined4 *)param_1[5]);
  param_1[5] = 0;
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_10005de0 @ 0x10005de0 30B
// ============================================================

undefined4 * __thiscall FUN_10005de0(void *this,byte param_1)

{
  FUN_10005d40(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10005e00 @ 0x10005e00 97B
// ============================================================

void __thiscall FUN_10005e00(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x10) == 0) {
    iVar1 = FUN_10014819((undefined4 *)((int)this + 0x14),*(int *)((int)this + 0x18),0xc);
    iVar3 = *(int *)((int)this + 0x18);
    puVar2 = (undefined4 *)(iVar1 + -8 + iVar3 * 0xc);
    if (-1 < iVar3 + -1) {
      do {
        *puVar2 = *(undefined4 *)((int)this + 0x10);
        *(undefined4 **)((int)this + 0x10) = puVar2;
        puVar2 = puVar2 + -3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar2 = *(undefined4 **)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = *puVar2;
  puVar2[1] = param_1;
  *puVar2 = param_2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  puVar2[2] = 0;
  return;
}



// ============================================================
// FUN_10005e70 @ 0x10005e70 307B
// ============================================================

void __thiscall FUN_10005e70(void *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_2 != 0xffffffff) {
    *(uint *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(undefined **)((int)this + 4) != (undefined *)0x0) {
      FUN_10014ce1(*(undefined **)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  if (*(int *)((int)this + 4) == 0) {
    puVar1 = FUN_10014cb8(param_1 * 4);
    uVar3 = param_1 & 0x3fffffff;
    *(undefined4 **)((int)this + 4) = puVar1;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar1 = 0;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
    *(uint *)((int)this + 0xc) = param_1;
    *(uint *)((int)this + 8) = param_1;
    return;
  }
  if ((int)param_1 <= *(int *)((int)this + 0xc)) {
    iVar4 = *(int *)((int)this + 8);
    if (iVar4 < (int)param_1) {
      puVar1 = (undefined4 *)(*(int *)((int)this + 4) + iVar4 * 4);
      for (iVar5 = param_1 - iVar4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
    }
    *(uint *)((int)this + 8) = param_1;
    return;
  }
  iVar4 = *(int *)((int)this + 0x10);
  if (iVar4 == 0) {
    iVar4 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
    if (iVar4 < 4) {
      iVar4 = 4;
    }
    else if (0x400 < iVar4) {
      iVar4 = 0x400;
    }
  }
  param_2 = iVar4 + *(int *)((int)this + 0xc);
  if ((int)param_2 <= (int)param_1) {
    param_2 = param_1;
  }
  puVar2 = FUN_10014cb8(param_2 * 4);
  puVar1 = *(undefined4 **)((int)this + 4);
  puVar6 = puVar2;
  for (uVar3 = *(uint *)((int)this + 8) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar1;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  puVar1 = puVar2 + *(int *)((int)this + 8);
  for (iVar4 = param_1 - *(int *)((int)this + 8); iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  FUN_10014ce1(*(undefined **)((int)this + 4));
  *(uint *)((int)this + 8) = param_1;
  *(undefined4 **)((int)this + 4) = puVar2;
  *(uint *)((int)this + 0xc) = param_2;
  return;
}



// ============================================================
// FUN_10005fc0 @ 0x10005fc0 20B
// ============================================================

undefined4 * __fastcall FUN_10005fc0(undefined4 *param_1)

{
  FUN_1001ab37();
  *param_1 = &PTR_LAB_1001e94c;
  return param_1;
}



// ============================================================
// FUN_10005fe0 @ 0x10005fe0 30B
// ============================================================

undefined * __thiscall FUN_10005fe0(void *this,byte param_1)

{
  thunk_FUN_1001ac81();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// SscCnv @ 0x10006050 46B
// ============================================================

void __cdecl
SscCnv(uint *param_1,int param_2,int param_3,undefined4 param_4,size_t param_5,uint *param_6,
      undefined4 param_7)

{
                    /* 0x6050  1  SscCnv */
  FUN_10006080(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// ============================================================
// FUN_10006080 @ 0x10006080 5835B
// ============================================================

uint FUN_10006080(uint *param_1,int param_2,int param_3,undefined4 param_4,size_t param_5,
                 uint *param_6,undefined4 param_7)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  HMODULE hLibModule;
  int *piVar4;
  HFILE HVar5;
  HFILE HVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  LPCSTR pCVar12;
  CHAR *pCVar13;
  LPCSTR pCStack_158;
  uint local_154;
  LPCSTR local_150;
  undefined4 uStack_14c;
  byte local_145;
  undefined *local_144;
  undefined *puStack_140;
  undefined *puStack_13c;
  undefined *puStack_138;
  undefined *puStack_134;
  undefined *puStack_130;
  undefined *puStack_12c;
  undefined *puStack_128;
  undefined *puStack_124;
  undefined *puStack_120;
  undefined *puStack_11c;
  undefined *puStack_118;
  undefined *puStack_114;
  LPCSTR local_110;
  uint local_10c;
  uint *local_108;
  size_t local_104;
  uint *local_100;
  size_t local_fc;
  undefined4 local_f4 [2];
  int iStack_ec;
  uint local_e8;
  undefined4 auStack_e4 [10];
  undefined4 local_bc;
  int local_b8;
  short local_b0;
  _OFSTRUCT local_94;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001ca11;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_10001c90(7);
  if (iVar3 == 0) {
    *param_6 = 0x31000004;
  }
  else {
    iVar3 = FUN_10001c90(8);
    if (iVar3 == 0) {
      *param_6 = 0x31000006;
    }
    else {
      hLibModule = LoadLibraryA(s_DVAChecker_dll_10024ca4);
      if (hLibModule == (HMODULE)0x0) {
        *param_6 = 0x31000005;
      }
      else {
        FreeLibrary(hLibModule);
        iVar3 = FUN_1001b31e();
        FUN_10014fe5(&local_154,*(LPCSTR *)(*(int *)(iVar3 + 4) + 0x8c));
        local_4 = 0;
        FUN_10014522(&local_154,0x5c);
        piVar4 = (int *)FUN_100144aa();
        local_4._0_1_ = 1;
        FUN_10015064(&local_154,piVar4);
        local_4._0_1_ = 0;
        FUN_10014f77((int *)&local_144);
        FUN_10015119();
        local_4._0_1_ = 2;
        FUN_10015119();
        HVar5 = OpenFile(local_150,&local_94,0x4000);
        HVar6 = OpenFile(local_110,&local_94,0x4000);
        if ((HVar5 == -1) || (HVar6 == -1)) {
          local_4._0_1_ = 2;
          *param_6 = 0x31000007;
          FUN_10014f77((int *)&local_110);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_10014f77((int *)&local_150);
          local_4 = 0xffffffff;
          FUN_10014f77((int *)&local_154);
        }
        else {
          local_4._0_1_ = 2;
          FUN_10014f77((int *)&local_110);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_10014f77((int *)&local_150);
          local_4 = 0xffffffff;
          FUN_10014f77((int *)&local_154);
          if ((*(byte *)(param_3 + 1) < 3) || (*(byte *)(param_3 + 1) == 0x23)) {
            if (*(byte *)(param_3 + 2) < 0xf8) {
              *param_6 = 0xf1f00000;
            }
            else {
              bVar11 = (byte)((uint)param_7 >> 8);
              if ((bVar11 == 0) || ((0x2f < bVar11 && (bVar11 < 0x32)))) {
                local_110 = (LPCSTR)0x64;
                local_150 = (LPCSTR)0x0;
                local_145 = bVar11;
                FUN_100039c0(&local_bc);
                local_4 = 4;
                iVar3 = FUN_10003bc0(&local_bc,param_1,param_2);
                if (iVar3 == 0) {
                  if (local_b8 == 0x4d546864) {
                    *param_6 = 0xf1000001;
                  }
                  else {
                    *param_6 = 0xf1000000;
                  }
                }
                else if (local_b0 == 0) {
                  iVar3 = FUN_10004f90(&local_bc,0);
                  if ((iVar3 != 0) &&
                     (piVar4 = *(int **)(iVar3 + 0xc), *(int **)(iVar3 + 0xc) != (int *)0x0)) {
                    do {
                      piVar1 = (int *)*piVar4;
                      iVar3 = piVar4[2];
                      if ((*(int *)(iVar3 + 0xc) == 8) &&
                         (pcVar2 = *(char **)(iVar3 + 8), pcVar2 != (char *)0x0)) {
                        if ((((*pcVar2 == -0x10) && (pcVar2[1] == '\x7f')) &&
                            ((pcVar2[2] == '\x7f' &&
                             ((pcVar2[3] == '\x04' && (pcVar2[4] == '\x01')))))) &&
                           (pcVar2[7] == -9)) {
                          local_110 = (LPCSTR)(uint)(byte)pcVar2[6];
                        }
                      }
                      else if (((*(int *)(iVar3 + 0xc) == 3) &&
                               ((*(byte *)(iVar3 + 8) & 0xf0) == 0x90)) &&
                              (*(char *)(iVar3 + 10) != '\0')) {
                        local_150 = (LPCSTR)0x1;
                      }
                      piVar4 = piVar1;
                    } while (piVar1 != (int *)0x0);
                    if (local_150 != (LPCSTR)0x0) {
                      FUN_10001aa0(local_f4);
                      local_10c = 0;
                      local_4._0_1_ = 5;
                      local_108 = param_1;
                      local_104 = param_2;
                      local_100 = (uint *)0x0;
                      local_fc = param_5;
                      local_100 = FUN_10014cb8(param_5);
                      uVar9 = (bVar11 != 0x31) - 1 & 2;
                      local_10c = uVar9;
                      local_e8 = uVar9;
                      uVar7 = FUN_10001af0(local_f4,&local_10c,0,(LPCSTR)0x7,0);
                      if ((uVar7 & 0x80000000) != 0) {
                        FUN_10014ce1((undefined *)local_100);
                        switch(uVar7) {
                        case 0x80000000:
                          uVar7 = 0x31000100;
                          break;
                        case 0x80000001:
                          uVar7 = 0x31000101;
                          break;
                        case 0x80000002:
                          uVar7 = 0x31000102;
                          break;
                        case 0x80000004:
                          uVar7 = 0x31000103;
                          break;
                        case 0x80000008:
                          uVar7 = 0x31000104;
                          break;
                        case 0x80000010:
                          uVar7 = 0x31000105;
                          break;
                        case 0x80000020:
                          uVar7 = 0x31000106;
                          break;
                        case 0x80000040:
                          uVar7 = 0x31000107;
                        }
                        *param_6 = uVar7;
                        local_4 = CONCAT31(local_4._1_3_,4);
                        FUN_10001ad0(local_f4);
                        local_4 = 0xffffffff;
                        FUN_10003a00(&local_bc);
                        ExceptionList = local_c;
                        return (uVar7 != 0x31000101) - 2;
                      }
                      FUN_100039c0(auStack_e4);
                      local_4._0_1_ = 6;
                      iVar3 = FUN_10003bc0(auStack_e4,local_100,local_fc);
                      if (iVar3 != 0) {
                        local_144 = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 7;
                        if (*(char *)(param_3 + 0xd10) != '\0') {
                          do {
                            FUN_10015213(&local_144);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd10));
                        }
                        puStack_12c = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 8;
                        if (*(char *)(param_3 + 0xd11) != '\0') {
                          do {
                            FUN_10015213(&puStack_12c);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd11));
                        }
                        puStack_134 = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 9;
                        if (*(char *)(param_3 + 0xd12) != '\0') {
                          do {
                            FUN_10015213(&puStack_134);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd12));
                        }
                        puStack_140 = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 10;
                        if (*(char *)(param_3 + 0xd19) != '\0') {
                          do {
                            FUN_10015213(&puStack_140);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd19));
                        }
                        puStack_114 = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 0xb;
                        if (*(char *)(param_3 + 0xd1a) != '\0') {
                          do {
                            FUN_10015213(&puStack_114);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd1a));
                        }
                        puStack_128 = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 0xc;
                        if (*(char *)(param_3 + 0xd1b) != '\0') {
                          do {
                            FUN_10015213(&puStack_128);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd1b));
                        }
                        puStack_120 = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 0xd;
                        if (*(char *)(param_3 + 0xd1c) != '\0') {
                          do {
                            FUN_10015213(&puStack_120);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd1c));
                        }
                        puStack_130 = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 0xe;
                        if (*(char *)(param_3 + 0xd13) != '\0') {
                          do {
                            FUN_10015213(&puStack_130);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd13));
                        }
                        puStack_118 = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 0xf;
                        if (*(char *)(param_3 + 0xd14) != '\0') {
                          do {
                            FUN_10015213(&puStack_118);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd14));
                        }
                        puStack_124 = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 0x10;
                        if (*(char *)(param_3 + 0xd16) != '\0') {
                          do {
                            FUN_10015213(&puStack_124);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd16));
                        }
                        puStack_11c = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 0x11;
                        if (*(char *)(param_3 + 0xd15) != '\0') {
                          do {
                            FUN_10015213(&puStack_11c);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd15));
                        }
                        puStack_13c = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 0x12;
                        if (*(char *)(param_3 + 0xd17) != '\0') {
                          do {
                            FUN_10015213(&puStack_13c);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd17));
                        }
                        puStack_138 = PTR_DAT_10024d00;
                        iVar3 = 0;
                        local_4._0_1_ = 0x13;
                        if (*(char *)(param_3 + 0xd18) != '\0') {
                          do {
                            FUN_10015213(&puStack_138);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < (int)(uint)*(byte *)(param_3 + 0xd18));
                        }
                        if (0xff < *(int *)(local_144 + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x14;
                          FUN_10015064(&local_144,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_12c + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x15;
                          FUN_10015064(&puStack_12c,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_134 + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x16;
                          FUN_10015064(&puStack_134,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_140 + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x17;
                          FUN_10015064(&puStack_140,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_114 + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x18;
                          FUN_10015064(&puStack_114,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_128 + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x19;
                          FUN_10015064(&puStack_128,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_120 + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x1a;
                          FUN_10015064(&puStack_120,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_130 + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x1b;
                          FUN_10015064(&puStack_130,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_118 + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x1c;
                          FUN_10015064(&puStack_118,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_124 + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x1d;
                          FUN_10015064(&puStack_124,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_11c + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x1e;
                          FUN_10015064(&puStack_11c,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_13c + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x1f;
                          FUN_10015064(&puStack_13c,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77((int *)&local_150);
                        }
                        if (0xff < *(int *)(puStack_138 + -8)) {
                          piVar4 = (int *)FUN_100144aa();
                          local_4._0_1_ = 0x20;
                          FUN_10015064(&puStack_138,piVar4);
                          local_4._0_1_ = 0x13;
                          FUN_10014f77(&iStack_ec);
                        }
                        FUN_100046b0(auStack_e4,0,(local_145 == 0x31) + '2',
                                     *(undefined1 *)(param_3 + 1),*(undefined1 *)(param_3 + 2),0);
                        local_154 = 8;
                        if (*(int *)(local_144 + -8) != 0) {
                          local_154 = *(int *)(local_144 + -8) + 0xc;
                        }
                        if (*(int *)(puStack_12c + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_12c + -8);
                        }
                        if (*(int *)(puStack_134 + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_134 + -8);
                        }
                        if (*(int *)(puStack_130 + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_130 + -8);
                        }
                        if (*(int *)(puStack_118 + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_118 + -8);
                        }
                        if (*(int *)(puStack_11c + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_11c + -8);
                        }
                        if (*(int *)(puStack_124 + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_124 + -8);
                        }
                        if (*(int *)(puStack_13c + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_13c + -8);
                        }
                        if (*(int *)(puStack_138 + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_138 + -8);
                        }
                        if (*(int *)(puStack_140 + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_140 + -8);
                        }
                        if (*(int *)(puStack_114 + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_114 + -8);
                        }
                        if (*(int *)(puStack_128 + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_128 + -8);
                        }
                        if (*(int *)(puStack_120 + -8) != 0) {
                          local_154 = local_154 + 4 + *(int *)(puStack_120 + -8);
                        }
                        puVar8 = FUN_10014cb8(local_154 * 10);
                        uVar9 = 8;
                        *puVar8 = 0x44;
                        puVar8[1] = 99;
                        puVar8[2] = 0x68;
                        puVar8[3] = *(undefined1 *)(param_3 + 1);
                        pCStack_158 = PTR_DAT_10024d00;
                        local_4._0_1_ = 0x21;
                        FUN_10001000(&uStack_14c);
                        local_4 = CONCAT31(local_4._1_3_,0x22);
                        FUN_10015064(&pCStack_158,(int *)&local_144);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + 8) = DAT_10024c80;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + 0xc);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + 0xc;
                            for (uVar9 = (uVar7 & 0xffff) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar9 = uVar7 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[10] = (char)(uVar7 >> 8);
                          puVar8[0xb] = (char)uVar7;
                          uVar9 = (uVar7 & 0xffff) + 0xc;
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_12c);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c7c;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_134);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c78;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_130);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c74;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_118);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c70;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_11c);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c6c;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_124);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c68;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_13c);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c64;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_138);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c60;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_140);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c5c;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_114);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c58;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_128);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c54;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        FUN_10015064(&pCStack_158,(int *)&puStack_120);
                        uVar7 = *(uint *)(pCStack_158 + -8);
                        if ((short)uVar7 != 0) {
                          *(undefined2 *)(puVar8 + uVar9) = DAT_10024c50;
                          if (*(char *)(param_3 + 1) == '#') {
                            uVar7 = FUN_10001040(pCStack_158,uVar7 & 0xffff,puVar8 + uVar9 + 4);
                          }
                          else {
                            pCVar12 = pCStack_158;
                            pCVar13 = puVar8 + uVar9 + 4;
                            for (uVar10 = (uVar7 & 0xffff) >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *(undefined4 *)pCVar13 = *(undefined4 *)pCVar12;
                              pCVar12 = pCVar12 + 4;
                              pCVar13 = pCVar13 + 4;
                            }
                            for (uVar10 = uVar7 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                              *pCVar13 = *pCVar12;
                              pCVar12 = pCVar12 + 1;
                              pCVar13 = pCVar13 + 1;
                            }
                          }
                          puVar8[uVar9 + 2] = (char)(uVar7 >> 8);
                          puVar8[uVar9 + 3] = (char)uVar7;
                          uVar9 = uVar9 + 4 + (uVar7 & 0xffff);
                        }
                        if (*(char *)(param_3 + 1) != '#') {
                          uVar9 = local_154;
                        }
                        iVar3 = uVar9 - 8;
                        puVar8[4] = (char)((uint)iVar3 >> 0x18);
                        puVar8[5] = (char)((uint)iVar3 >> 0x10);
                        puVar8[6] = (char)((uint)iVar3 >> 8);
                        puVar8[7] = (char)uVar9 + -8;
                        FUN_10004930(auStack_e4,(int)puVar8,uVar9);
                        FUN_10014ce1(puVar8);
                        FUN_10005b60(auStack_e4,(char)local_110);
                        FUN_10007850(auStack_e4,(uint)(local_145 == 0x31));
                        FUN_10014ce1((undefined *)local_100);
                        local_fc = FUN_100044b0((int)auStack_e4);
                        local_100 = FUN_10014cb8(local_fc);
                        FUN_100044e0(auStack_e4,local_100);
                        local_4._0_1_ = 0x21;
                        FUN_10001030(&uStack_14c);
                        local_4._0_1_ = 0x13;
                        FUN_10014f77((int *)&pCStack_158);
                        local_4._0_1_ = 0x12;
                        FUN_10014f77((int *)&puStack_138);
                        local_4._0_1_ = 0x11;
                        FUN_10014f77((int *)&puStack_13c);
                        local_4._0_1_ = 0x10;
                        FUN_10014f77((int *)&puStack_11c);
                        local_4._0_1_ = 0xf;
                        FUN_10014f77((int *)&puStack_124);
                        local_4._0_1_ = 0xe;
                        FUN_10014f77((int *)&puStack_118);
                        local_4._0_1_ = 0xd;
                        FUN_10014f77((int *)&puStack_130);
                        local_4._0_1_ = 0xc;
                        FUN_10014f77((int *)&puStack_120);
                        local_4._0_1_ = 0xb;
                        FUN_10014f77((int *)&puStack_128);
                        local_4._0_1_ = 10;
                        FUN_10014f77((int *)&puStack_114);
                        local_4._0_1_ = 9;
                        FUN_10014f77((int *)&puStack_140);
                        local_4._0_1_ = 8;
                        FUN_10014f77((int *)&puStack_134);
                        local_4._0_1_ = 7;
                        FUN_10014f77((int *)&puStack_12c);
                        local_4._0_1_ = 6;
                        FUN_10014f77((int *)&local_144);
                        uVar9 = local_e8;
                      }
                      uVar7 = FUN_10007cd0(auStack_e4);
                      if ((uVar7 == 0) && (uVar7 = FUN_10007d80(auStack_e4), uVar7 == 0)) {
                        local_104 = local_fc;
                        local_108 = local_100;
                        local_fc = param_5;
                        local_100 = (uint *)param_4;
                        local_10c = uVar9;
                        uVar7 = FUN_10001af0(local_f4,&local_10c,0,(LPCSTR)0x8,1);
                        FUN_10014ce1((undefined *)local_108);
                        uVar9 = uVar7;
                        if ((uVar7 & 0x80000000) != 0) {
                          switch(uVar7) {
                          case 0x80000000:
                            uVar7 = 0x31000200;
                            break;
                          case 0x80000001:
                            uVar7 = 0x31000201;
                            break;
                          case 0x80000002:
                            uVar7 = 0x31000202;
                            break;
                          case 0x80000004:
                            uVar7 = 0x31000203;
                            break;
                          case 0x80000008:
                            uVar7 = 0x31000204;
                            break;
                          case 0x80000010:
                            uVar7 = 0x31000205;
                            break;
                          case 0x80000020:
                            uVar7 = 0x31000206;
                            break;
                          case 0x80000040:
                            uVar7 = 0x31000207;
                          }
                          uVar9 = (uVar7 != 0x31000201) - 2;
                          *param_6 = uVar7;
                        }
                        local_4._0_1_ = 5;
                        FUN_10003a00(auStack_e4);
                        local_4 = CONCAT31(local_4._1_3_,4);
                        FUN_10001ad0(local_f4);
                        local_4 = 0xffffffff;
                        FUN_10003a00(&local_bc);
                        ExceptionList = local_c;
                        return uVar9;
                      }
                      FUN_10014ce1((undefined *)local_100);
                      local_4._0_1_ = 5;
                      *param_6 = uVar7;
                      FUN_10003a00(auStack_e4);
                      local_4 = CONCAT31(local_4._1_3_,4);
                      FUN_10001ad0(local_f4);
                      local_4 = 0xffffffff;
                      FUN_10003a00(&local_bc);
                      ExceptionList = local_c;
                      return 0xffffffff;
                    }
                  }
                  *param_6 = 0xf1000003;
                }
                else {
                  *param_6 = 0xf1000002;
                }
                local_4 = 0xffffffff;
                FUN_10003a00(&local_bc);
              }
              else {
                *param_6 = 0xf1f00002;
              }
            }
          }
          else {
            *param_6 = 0xf1f00000;
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return 0xffffffff;
}



// ============================================================
// FUN_10007820 @ 0x10007820 38B
// ============================================================

uint FUN_10007820(uint param_1)

{
  return (param_1 & 0xff00 | param_1 << 0x10 | param_1 >> 0x10 & 0xff) << 8 | param_1 >> 0x18;
}



// ============================================================
// FUN_10007850 @ 0x10007850 1137B
// ============================================================

undefined4 FUN_10007850(void *param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  size_t sVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  bool bVar18;
  char *pcVar19;
  undefined **local_90;
  undefined4 *local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  char cStack_67;
  char cStack_66;
  byte bStack_65;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54 [3];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_1001ca4b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff64;
  local_90 = &PTR_LAB_1001e9e8;
  local_8c = (undefined4 *)0x0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  auStack_64[0] = 0;
  auStack_64[1] = 0;
  auStack_64[2] = 0;
  auStack_64[3] = 0;
  local_48 = 0;
  local_60 = 0;
  local_7c = 0;
  local_44 = 0;
  local_5c = 0;
  local_78 = 0;
  local_40 = 0;
  local_58 = 0;
  local_74 = 0;
  local_8 = 0;
  local_3c = 0;
  local_70 = 0;
  ExceptionList = &local_10;
  iVar6 = FUN_10004f90(param_1,0);
  puVar4 = *(undefined4 **)(iVar6 + 0xc);
  iVar6 = local_88;
joined_r0x100078d8:
  if (puVar4 != (undefined4 *)0x0) {
    iVar16 = puVar4[2];
    local_28 = (undefined4 *)*puVar4;
    puVar4 = local_28;
    if (*(int *)(iVar16 + 0xc) < 4) {
      bVar1 = *(byte *)(iVar16 + 8);
      bVar13 = bVar1 & 0xf0;
      local_20._1_3_ = (undefined3)(local_20 >> 8);
      local_20 = CONCAT31(local_20._1_3_,bVar1) & 0xffffff0f;
      if (bVar13 == 0xb0) {
        if (*(char *)(iVar16 + 9) == '\0') {
          *(undefined1 *)((int)&local_48 + (bVar1 & 0xf)) = *(undefined1 *)(iVar16 + 10);
          puVar4 = local_28;
        }
        else if (*(char *)(iVar16 + 9) == ' ') {
          uVar2 = *(undefined1 *)(iVar16 + 10);
          *(undefined1 *)(iVar16 + 10) = 0;
          auStack_64[bVar1 & 0xf] = uVar2;
          puVar4 = local_28;
          iVar6 = local_88;
        }
      }
      else if (bVar13 == 0xc0) {
        cVar3 = *(char *)(iVar16 + 9);
        uVar11 = bVar1 & 0xf;
        *(char *)((int)&local_7c + uVar11) = cVar3;
        puVar4 = local_28;
        if (*(char *)((int)&local_48 + uVar11) == '|') {
          iVar16 = 0;
          puVar7 = local_8c;
          if (0 < iVar6) {
            do {
              local_2c = *puVar7;
              uVar5 = local_2c;
              if (((char)local_2c == '|') &&
                 (local_2c._2_1_ = (char)((uint)local_2c >> 0x10), bVar18 = local_2c._2_1_ == cVar3,
                 local_2c = uVar5, bVar18)) goto joined_r0x100078d8;
              iVar16 = iVar16 + 1;
              puVar7 = puVar7 + 1;
              local_2c = uVar5;
            } while (iVar16 < iVar6);
          }
          local_1c = (uint)CONCAT12(cVar3,CONCAT11(auStack_64[uVar11],0x7c));
          FUN_10005e70(&local_90,iVar6 + 1,0xffffffff);
          local_8c[iVar6] = local_1c;
          puVar4 = local_28;
          iVar6 = local_88;
        }
        else if (*(char *)((int)&local_48 + uVar11) == '}') {
          *(undefined1 *)(iVar16 + 9) = 0;
          *(char *)((int)&local_7c + uVar11) = '\0';
          puVar4 = local_28;
          iVar6 = local_88;
        }
      }
      else if (((bVar13 == 0x90) && (*(char *)(iVar16 + 10) != '\0')) &&
              (uVar11 = bVar1 & 0xf, *(char *)((int)&local_48 + uVar11) == '}')) {
        iVar14 = 0;
        puVar7 = local_8c;
        if (0 < iVar6) {
          do {
            local_2c = *puVar7;
            if ((((char)local_2c == '}') &&
                ((char)((uint)local_2c >> 0x10) == *(char *)((int)&local_7c + uVar11))) &&
               ((char)((uint)local_2c >> 0x18) == *(char *)(iVar16 + 9))) goto joined_r0x100078d8;
            iVar14 = iVar14 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar14 < iVar6);
        }
        local_24 = (uint *)CONCAT31((uint3)CONCAT11(*(undefined1 *)((int)&local_7c + uVar11),
                                                    auStack_64[uVar11]),0x7d);
        local_24 = (uint *)CONCAT13(*(undefined1 *)(iVar16 + 9),(undefined3)local_24);
        FUN_10005e70(&local_90,iVar6 + 1,0xffffffff);
        local_8c[iVar6] = local_24;
        puVar4 = local_28;
        iVar6 = local_88;
      }
    }
    goto joined_r0x100078d8;
  }
  if (iVar6 == 0) {
    local_90 = &PTR_LAB_1001e9e8;
    if (local_8c != (undefined4 *)0x0) {
      FUN_10014ce1((undefined *)local_8c);
    }
    ExceptionList = local_10;
    return 1;
  }
  iVar6 = FUN_1001b31e();
  FUN_10014fe5(&local_18,*(LPCSTR *)(*(int *)(iVar6 + 4) + 0x8c));
  local_8._0_1_ = 1;
  iVar6 = FUN_10014522(&local_18,0x5c);
  if (iVar6 != -1) {
    piVar8 = (int *)FUN_100144aa();
    local_8._0_1_ = 2;
    FUN_10015064(&local_18,piVar8);
    local_8._0_1_ = 1;
    FUN_10014f77(&local_34);
  }
  if (param_2 == 0) {
    pcVar19 = s_DefMA3_16_vm3_10024c94;
  }
  else {
    pcVar19 = s_DefMA3_32_vm3_10024c84;
  }
  FUN_100151ec(&local_18,pcVar19);
  local_20 = 0;
  FUN_1001531c(&local_30);
  local_8._0_1_ = 4;
  FUN_100153b3();
  local_8 = CONCAT31(local_8._1_3_,5);
  sVar9 = FUN_1001580a(&local_7c);
  puVar10 = FUN_10014cb8(sVar9);
  local_24 = puVar10;
  FUN_1001562d(&local_7c,puVar10,sVar9);
  FUN_1001572b((int)&local_7c);
  uVar11 = FUN_10007820(*puVar10);
  if (uVar11 == 0x464d4d33) {
    param_2 = FUN_10007820(puVar10[1]);
    puVar15 = puVar10 + 2;
LAB_10007b83:
    if (0 < (int)param_2) {
      puVar10 = puVar15 + 6;
      puVar17 = &local_6c;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar17 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar17 = puVar17 + 1;
      }
      uVar11 = (-(uint)((bStack_65 & 1) != 0) & 0xfffffff1) + 0x1f;
      puVar15 = (uint *)((int)puVar10 + uVar11);
      puVar17 = local_54;
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar17 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar17 = puVar17 + 1;
      }
      for (uVar12 = uVar11 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(char *)puVar17 = (char)*puVar10;
        puVar10 = (uint *)((int)puVar10 + 1);
        puVar17 = (uint *)((int)puVar17 + 1);
      }
      param_2 = param_2 + (-0x18 - uVar11);
      for (iVar6 = 0; puVar10 = local_24, iVar6 < local_88; iVar6 = iVar6 + 1) {
        puVar4 = (undefined4 *)local_8c[iVar6];
        local_28._2_1_ = (char)((uint)puVar4 >> 0x10);
        local_28 = puVar4;
        if (local_6c._3_1_ == '|') {
          if (((char)puVar4 == '|') && (local_28._2_1_ == cStack_67)) {
            *(undefined1 *)(local_8c + iVar6) = 0;
LAB_10007c36:
            FUN_10004fb0(param_1,local_6c._3_1_,0,cStack_67,cStack_66,bStack_65,local_54,uVar11);
            puVar10 = local_24;
            break;
          }
        }
        else if ((((char)puVar4 == local_6c._3_1_) && (local_28._2_1_ == cStack_67)) &&
                ((char)((uint)puVar4 >> 0x18) == cStack_66)) {
          *(undefined1 *)(local_8c + iVar6) = 0;
          goto LAB_10007c36;
        }
      }
      goto LAB_10007b83;
    }
    local_20 = 1;
  }
  FUN_10014ce1((undefined *)puVar10);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_10015453();
  local_8 = 1;
  FUN_1001535a();
  local_8 = local_8 & 0xffffff00;
  FUN_10014f77(&local_18);
  local_90 = &PTR_LAB_1001e9e8;
  if (local_8c != (undefined4 *)0x0) {
    FUN_10014ce1((undefined *)local_8c);
  }
  ExceptionList = local_10;
  return local_20;
}



// ============================================================
// FUN_10007cd0 @ 0x10007cd0 170B
// ============================================================

undefined4 FUN_10007cd0(void *param_1)

{
  size_t sVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001ca68;
  local_c = ExceptionList;
  uVar5 = 0;
  ExceptionList = &local_c;
  sVar1 = FUN_100044b0((int)param_1);
  puVar2 = FUN_10014cb8(sVar1);
  FUN_100044e0(param_1,puVar2);
  FUN_10001170(local_1c);
  local_4 = 0;
  iVar3 = FUN_100011d0(local_1c,(undefined *)puVar2,sVar1,(uint *)0x0);
  if (iVar3 != 0) {
    uVar4 = FUN_10001a90((int)local_1c);
    if (((byte)uVar4 & 10) == 10) {
      uVar5 = 0x31000001;
    }
    FUN_10001a80((int)local_1c);
  }
  FUN_10014ce1((undefined *)puVar2);
  local_4 = 0xffffffff;
  FUN_100011b0(local_1c);
  ExceptionList = local_c;
  return uVar5;
}



// ============================================================
// FUN_10007d80 @ 0x10007d80 176B
// ============================================================

undefined4 FUN_10007d80(void *param_1)

{
  size_t sVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_40;
  uint local_3c;
  uint local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001ca88;
  local_c = ExceptionList;
  uVar4 = 0;
  ExceptionList = &local_c;
  sVar1 = FUN_100044b0((int)param_1);
  puVar2 = FUN_10014cb8(sVar1);
  FUN_100044e0(param_1,puVar2);
  FUN_100029f0(&local_40);
  local_4 = 0;
  iVar3 = FUN_10002ad0((undefined1 *)puVar2,sVar1,500);
  if (iVar3 != 0) {
    if (local_3c < 0x3e9) {
      if (500 < local_2c) {
        uVar4 = 0x31000003;
      }
    }
    else {
      uVar4 = 0x31000002;
    }
  }
  FUN_10014ce1((undefined *)puVar2);
  local_4 = 0xffffffff;
  FUN_10002a50(&local_40);
  ExceptionList = local_c;
  return uVar4;
}



// ============================================================
// Ssd_SscCnv_Rsrc @ 0x10007e30 41B
// ============================================================

void __cdecl
Ssd_SscCnv_Rsrc(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
                    /* 0x7e30  3  Ssd_SscCnv_Rsrc */
  FUN_10007e80(&DAT_100281d0,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// ============================================================
// Ssd_SscCnv @ 0x10007e60 31B
// ============================================================

void __cdecl Ssd_SscCnv(undefined4 param_1,size_t param_2,uint *param_3,uint param_4)

{
                    /* 0x7e60  2  Ssd_SscCnv */
  FUN_10007f10(&DAT_100281d0,param_1,param_2,param_3,param_4);
  return;
}



// ============================================================
// FUN_10007e80 @ 0x10007e80 129B
// ============================================================

undefined4 __thiscall
FUN_10007e80(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0xfffffffe;
  }
  *(int *)((int)this + 0xc4) = param_2;
  *(int *)((int)this + 0xc0) = param_1;
  if (param_3 == 0) {
    return 0xfffffffd;
  }
  *(int *)((int)this + 200) = param_3;
  if (param_4 == 0) {
    return 0xfffffffc;
  }
  *(int *)((int)this + 0xcc) = param_4;
  if (param_5 == 0) {
    return 0xfffffffb;
  }
  *(int *)((int)this + 0xd0) = param_5;
  if (param_6 == 0) {
    return 0xfffffffa;
  }
  *(int *)((int)this + 0xd4) = param_6;
  return 0;
}



// ============================================================
// FUN_10007f10 @ 0x10007f10 8548B
// ============================================================

/* WARNING: Type propagation algorithm not settling */

uint __thiscall
FUN_10007f10(void *this,undefined4 param_1,size_t param_2,uint *param_3,uint param_4)

{
  int *piVar1;
  char cVar2;
  byte *pbVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  HMODULE hLibModule;
  int *piVar7;
  HFILE HVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  char *pcVar13;
  size_t sVar14;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  byte *pbVar21;
  int iVar22;
  LPCSTR pCVar23;
  void *this_00;
  CHAR *pCVar24;
  bool bVar25;
  bool bVar26;
  size_t sVar27;
  LPCSTR pCStack_300;
  uint local_2fc;
  int *local_2f8;
  void *local_2f4;
  undefined4 uStack_2f0;
  undefined *local_2ec;
  undefined *puStack_2e8;
  undefined *puStack_2e4;
  undefined *puStack_2e0;
  undefined *puStack_2dc;
  undefined *puStack_2d8;
  undefined *puStack_2d4;
  undefined *puStack_2d0;
  undefined *puStack_2cc;
  undefined *puStack_2c8;
  undefined *puStack_2c4;
  undefined *puStack_2c0;
  undefined *puStack_2bc;
  undefined4 local_2b8;
  uint *local_2b4;
  size_t local_2b0;
  uint *local_2ac;
  size_t local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_294 [2];
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  int local_278;
  short local_270;
  undefined4 local_254;
  uint *local_250;
  undefined4 local_24c;
  int iStack_240;
  int local_23c [26];
  int local_1d4 [16];
  int local_194 [9];
  int local_170;
  int local_154 [9];
  int local_130;
  int local_114 [9];
  int local_f0;
  int local_d4 [9];
  int local_b0;
  _OFSTRUCT local_94;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cc21;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_2f4 = this;
  iVar6 = FUN_10001c90(7);
  if (iVar6 == 0) {
    *param_3 = 0x31000004;
    ExceptionList = local_c;
    return 0xffffffff;
  }
  iVar6 = FUN_10001c90(8);
  if (iVar6 == 0) {
    *param_3 = 0x31000006;
    ExceptionList = local_c;
    return 0xffffffff;
  }
  hLibModule = LoadLibraryA(s_DVAChecker_dll_10024ca4);
  if (hLibModule == (HMODULE)0x0) {
    *param_3 = 0x31000005;
    ExceptionList = local_c;
    return 0xffffffff;
  }
  FreeLibrary(hLibModule);
  iVar6 = FUN_1001b31e();
  FUN_10014fe5(&local_2fc,*(LPCSTR *)(*(int *)(iVar6 + 4) + 0x8c));
  local_4 = 0;
  FUN_10014522(&local_2fc,0x5c);
  piVar7 = (int *)FUN_100144aa();
  local_4._0_1_ = 1;
  FUN_10015064(&local_2fc,piVar7);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10014f77((int *)&local_2ec);
  FUN_10015119();
  HVar8 = OpenFile((LPCSTR)local_2f8,&local_94,0x4000);
  if (HVar8 == -1) {
    local_4 = (uint)local_4._1_3_ << 8;
    *param_3 = 0x31000007;
    FUN_10014f77((int *)&local_2f8);
    local_4 = 0xffffffff;
    FUN_10014f77((int *)&local_2fc);
    ExceptionList = local_c;
    return 0xffffffff;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10014f77((int *)&local_2f8);
  local_4 = 0xffffffff;
  FUN_10014f77((int *)&local_2fc);
  pcVar13 = *(char **)((int)this + 0xd0);
  if (*pcVar13 != '\0') {
    *param_3 = 0xf1f00000;
    ExceptionList = local_c;
    return 0xffffffff;
  }
  if (((2 < (byte)pcVar13[1]) && (pcVar13[1] != 0x23)) || ((byte)pcVar13[2] < 0xf8)) {
    *param_3 = 0xf1f00000;
    ExceptionList = local_c;
    return 0xffffffff;
  }
  if ((param_4 & 0xff00) != 0x3000) {
    *param_3 = 0xf1f00002;
    ExceptionList = local_c;
    return 0xffffffff;
  }
  local_2fc = 0;
  local_23c[0] = 0;
  local_23c[1] = 0;
  local_23c[2] = 0;
  local_23c[3] = 0;
  local_23c[4] = 0;
  local_23c[5] = 0;
  local_23c[6] = 0;
  local_23c[7] = 0;
  local_23c[8] = 0;
  local_23c[9] = 0;
  local_23c[10] = 0;
  local_23c[0xb] = 0;
  local_23c[0xc] = 0;
  local_23c[0xd] = 0;
  local_23c[0xe] = 0;
  local_23c[0xf] = 0;
  FUN_100039c0(&local_27c);
  local_4 = 3;
  iVar6 = FUN_10003bc0(&local_27c,*(uint **)((int)this + 0xc0),*(int *)((int)this + 0xc4));
  if (iVar6 == 0) {
    if (local_278 == 0x4d546864) {
      *param_3 = 0xf1000001;
    }
    else {
      *param_3 = 0xf1000000;
    }
    goto LAB_1000a035;
  }
  if (local_270 != 0) {
    *param_3 = 0xf1000002;
    goto LAB_1000a035;
  }
  iVar6 = FUN_10004f90(&local_27c,0);
  if ((iVar6 != 0) &&
     (piVar7 = *(int **)(iVar6 + 0xc), puVar11 = (undefined4 *)0x0,
     *(int **)(iVar6 + 0xc) != (int *)0x0)) {
LAB_100081dc:
    local_2f8 = (int *)*piVar7;
    puVar9 = (undefined4 *)piVar7[2];
    bVar5 = *(byte *)(puVar9 + 2);
    if ((puVar9[3] == 9) && (pcVar13 = (char *)puVar9[2], pcVar13 != (char *)0x0)) {
      if ((((*pcVar13 == -0x10) && (pcVar13[1] == '\a')) && (pcVar13[2] == '\x7f')) &&
         (((pcVar13[3] == '\x7f' && (pcVar13[4] == '\x04')) &&
          ((pcVar13[5] == '\x01' && (pcVar13[8] == -9)))))) {
        local_2fc = 1;
      }
    }
    else if (puVar9[3] == 3) {
      if (((bVar5 & 0xf0) == 0xb0) && (*(char *)((int)puVar9 + 9) == '\a')) {
        local_23c[(char)(bVar5 & 0xf)] = 1;
      }
      else if (((bVar5 & 0xf0) == 0x90) && (*(char *)((int)puVar9 + 10) != '\0')) {
        puVar9 = puVar11;
        if (local_2fc == 0) {
          puVar9 = FUN_10014cb8(0x14);
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[1] = 1;
          puVar10 = FUN_10014cb8(9);
          *puVar10 = 0xf0;
          puVar10[1] = 7;
          puVar10[2] = 0x7f;
          puVar10[3] = 0x7f;
          puVar10[4] = 4;
          puVar10[5] = 1;
          puVar10[6] = 0;
          puVar10[7] = 100;
          puVar10[8] = 0xf7;
          puVar9[2] = puVar10;
          puVar9[3] = 9;
          puVar9[4] = 0;
          FUN_10004cf0(&local_27c,(int)puVar9,(int)puVar11);
        }
        iVar6 = 0;
        piVar7 = local_23c;
        do {
          puVar11 = puVar9;
          if ((*piVar7 == 0) && (*(char *)(*(int *)((int)local_2f4 + 0xcc) + 1 + iVar6) != -1)) {
            puVar11 = FUN_10014cb8(0x14);
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            puVar11[4] = 0;
            puVar11[4] = 0;
            puVar11[1] = 1;
            *(byte *)(puVar11 + 2) = (byte)iVar6 | 0xb0;
            *(undefined1 *)((int)puVar11 + 9) = 7;
            *(undefined1 *)((int)puVar11 + 10) = 100;
            puVar11[3] = 3;
            FUN_10004cf0(&local_27c,(int)puVar11,(int)puVar9);
          }
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 1;
          puVar9 = puVar11;
        } while (iVar6 < 0x10);
        iVar22 = 0;
        bVar4 = false;
        iVar6 = *(int *)((int)local_2f4 + 0xcc);
        local_2a4 = *(undefined4 *)(iVar6 + 0x32);
        local_2a0 = *(undefined4 *)(iVar6 + 0x36);
        local_29c = *(uint *)(iVar6 + 0x3a);
        local_298 = *(undefined4 *)(iVar6 + 0x3e);
        piVar7 = local_d4;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        piVar7 = local_114;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        piVar7 = local_194;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        piVar7 = local_23c;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        piVar7 = local_154;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        local_28c = 0;
        local_288 = 0;
        local_284 = 0;
        piVar7 = local_1d4;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        local_280 = 0;
        local_2ec = (undefined *)FUN_10004f90(&local_27c,0);
        if (local_2ec != (undefined *)0x0) {
          piVar7 = *(int **)(local_2ec + 0xc);
joined_r0x10008437:
          if (piVar7 != (int *)0x0) {
            local_2f8 = (int *)*piVar7;
            puVar16 = (undefined *)piVar7[2];
            if (bVar4) {
              FUN_10004ef0(&local_27c,(int)puVar16,iVar22);
            }
            bVar4 = false;
            bVar5 = puVar16[8];
            iVar6 = *(int *)(puVar16 + 0xc);
            bVar18 = bVar5 & 0xf;
            piVar7 = local_2f8;
            if (((iVar6 == 3) && ((bVar5 & 0xf0) == 0xb0)) && (puVar16[9] == '\0')) {
              cVar2 = puVar16[10];
              iVar6 = (int)(char)bVar18;
              *(char *)((int)&local_28c + iVar6) = cVar2;
              if ((cVar2 == '}') || (cVar2 == '{')) {
                local_d4[iVar6] = 1;
              }
              else if ((cVar2 == '|') || (cVar2 == 'z')) {
                local_114[iVar6] = 1;
              }
            }
            else if ((iVar6 == 2) && ((bVar5 & 0xf0) == 0xc0)) {
              iVar6 = (int)(char)bVar18;
              cVar2 = *(char *)((int)&local_28c + iVar6);
              if ((cVar2 == '}') || (cVar2 == '{')) {
                local_194[iVar6] = 1;
              }
              else if ((cVar2 == '|') || (cVar2 == 'z')) {
                local_23c[iVar6] = 1;
              }
              else {
                local_154[iVar6] = 1;
              }
            }
            else if (iVar6 == 3) {
              if (((bVar5 & 0xf0) == 0x90) && (puVar16[10] != '\0')) {
                cVar2 = *(char *)((int)&local_28c + (int)(char)bVar18);
                if ((cVar2 == '}') || (cVar2 == '{')) {
                  bVar5 = puVar16[9];
                  if (0x17 < bVar5) {
                    bVar25 = bVar5 < 0x54;
                    bVar26 = bVar5 == 0x54;
                    goto LAB_10008587;
                  }
                }
                else if (((cVar2 == '|') || (cVar2 == 'z')) || (bVar18 != 9)) {
                  bVar25 = (byte)puVar16[9] < 0x72;
                  bVar26 = puVar16[9] == 0x72;
LAB_10008587:
                  if (bVar25 || bVar26) {
                    local_1d4[(char)bVar18] = 1;
                    goto joined_r0x10008437;
                  }
                }
                else if ((0x17 < (byte)puVar16[9]) && ((byte)puVar16[9] < 0x55)) {
                  local_1d4[9] = 1;
                  goto joined_r0x10008437;
                }
              }
              else {
                if ((((bVar5 & 0xf0) != 0x90) || (puVar16[10] != '\0')) && ((bVar5 & 0xf0) != 0x80))
                goto joined_r0x10008437;
                cVar2 = *(char *)((int)&local_28c + (int)(char)bVar18);
                if ((cVar2 == '}') || (cVar2 == '{')) {
                  bVar5 = puVar16[9];
                }
                else {
                  if (((cVar2 == '|') || (cVar2 == 'z')) || (bVar18 != 9)) {
                    if (0x72 < (byte)puVar16[9]) goto LAB_100085eb;
                    goto joined_r0x10008437;
                  }
                  bVar5 = puVar16[9];
                }
                if ((0x17 < bVar5) && (bVar5 < 0x55)) goto joined_r0x10008437;
              }
LAB_100085eb:
              iVar22 = FUN_10004e20(&local_27c,puVar16);
              bVar4 = true;
              piVar7 = local_2f8;
            }
            goto joined_r0x10008437;
          }
        }
        bVar4 = false;
        iVar6 = 0;
        do {
          if (local_1d4[iVar6] == 1) {
            bVar4 = true;
          }
          if ((iVar6 == 0xf) && (!bVar4)) {
            *param_3 = 0xf1000003;
            goto LAB_10009c42;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x10);
        iVar6 = *(int *)((int)local_2f4 + 0xcc);
        iVar22 = 0;
        do {
          if (*(char *)(iVar22 + 1 + iVar6) == -1) goto LAB_1000868e;
          if (iVar22 == 9) {
            iVar19 = local_23c[9];
            if (local_f0 == 0) {
              if ((local_b0 == 0) && (local_130 == 0)) {
                iVar19 = local_170;
                if (local_23c[9] != 0) goto LAB_100086e5;
                goto joined_r0x100086de;
              }
            }
            else {
joined_r0x100086de:
              if (iVar19 != 0) goto LAB_100086e5;
            }
            local_29c = local_29c | 0x4000;
          }
          else if (local_114[iVar22] == 0) {
            if ((local_d4[iVar22] != 0) && (local_194[iVar22] != 0)) goto LAB_1000868e;
          }
          else if ((local_194[iVar22] != 0) &&
                  ((local_23c[iVar22] == 0 && (local_154[iVar22] == 0)))) {
LAB_1000868e:
            *(byte *)((int)&local_2a4 + iVar22) = *(byte *)((int)&local_2a4 + iVar22) | 0x40;
          }
LAB_100086e5:
          iVar22 = iVar22 + 1;
        } while (iVar22 < 0x10);
        if (local_2ec != (undefined *)0x0) {
          puVar11 = *(undefined4 **)(local_2ec + 0xc);
          while (puVar11 != (undefined4 *)0x0) {
            puVar9 = (undefined4 *)*puVar11;
            iVar6 = puVar11[2];
            puVar11 = puVar9;
            if ((*(int *)(iVar6 + 0xc) == 9) &&
               (pcVar13 = *(char **)(iVar6 + 8), pcVar13 != (char *)0x0)) {
              if (((((*pcVar13 == -0x10) && (pcVar13[1] == '\a')) && (pcVar13[2] == '\x7f')) &&
                  ((pcVar13[3] == '\x7f' && (pcVar13[4] == '\x04')))) &&
                 ((pcVar13[5] == '\x01' && (pcVar13[8] == -9)))) {
                uVar12 = FUN_1000a8b0();
                *(char *)(*(int *)(iVar6 + 8) + 7) = (char)uVar12;
              }
            }
            else if ((*(int *)(iVar6 + 0xc) == 3) &&
                    (((*(byte *)(iVar6 + 8) & 0xf0) == 0xb0 && (*(char *)(iVar6 + 9) == '\a')))) {
              uVar12 = FUN_1000a8b0();
              *(char *)(iVar6 + 10) = (char)uVar12;
            }
          }
        }
        iVar6 = 0;
        pcVar13 = (char *)(*(int *)((int)local_2f4 + 0xcc) + 0x11);
        do {
          if (*pcVar13 != -1) goto LAB_100089c8;
          iVar6 = iVar6 + 1;
          pcVar13 = pcVar13 + 1;
        } while (iVar6 < 0x10);
        piVar7 = local_23c;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        local_28c = 0;
        local_288 = 0;
        local_284 = 0;
        local_280 = 0;
        iVar6 = FUN_10004f90(&local_27c,0);
        if (iVar6 != 0) {
          piVar7 = *(int **)(iVar6 + 0xc);
joined_r0x10008811:
          if (piVar7 != (int *)0x0) {
            iVar6 = piVar7[2];
            local_2f8 = (int *)*piVar7;
            bVar5 = *(byte *)(iVar6 + 8);
            iVar22 = *(int *)(iVar6 + 0xc);
            bVar18 = bVar5 & 0xf;
            if (((iVar22 == 3) && ((bVar5 & 0xf0) == 0xb0)) && (*(char *)(iVar6 + 9) == '\0')) {
              *(undefined1 *)((int)&local_28c + (int)(char)bVar18) = *(undefined1 *)(iVar6 + 10);
            }
            piVar7 = local_2f8;
            if ((iVar22 == 2) && ((bVar5 & 0xf0) == 0xc0)) {
              iVar22 = (int)(char)bVar18;
              cVar2 = *(char *)((int)&local_28c + iVar22);
              if ((cVar2 != '|') && (cVar2 != 'z')) {
                if (cVar2 != '}') {
                  if ((cVar2 != '{') && (bVar18 != 9)) goto LAB_100088a7;
                  if ((cVar2 != '}') && (cVar2 != '{')) goto joined_r0x10008811;
                }
                iVar19 = local_23c[iVar22];
                piVar1 = local_23c + iVar22;
joined_r0x1000896b:
                if (iVar19 != 0) {
                  puVar11 = FUN_10014cb8(0x14);
                  *puVar11 = 0;
                  puVar11[1] = 0;
                  puVar11[2] = 0;
                  puVar11[3] = 0;
                  puVar11[4] = 0;
                  puVar11[1] = 1;
                  *(byte *)(puVar11 + 2) = bVar18 | 0xb0;
                  *(undefined1 *)((int)puVar11 + 9) = 1;
                  *(undefined1 *)((int)puVar11 + 10) = 0;
                  puVar11[3] = 3;
                  puVar11[4] = 0;
                  FUN_10004cf0(&local_27c,(int)puVar11,iVar6);
                  *piVar1 = 0;
                  piVar7 = local_2f8;
                }
                goto joined_r0x10008811;
              }
LAB_100088a7:
              iVar22 = 0;
              pbVar3 = *(byte **)((int)local_2f4 + 200);
              if (*pbVar3 != 0) {
                pbVar21 = pbVar3 + 4;
                do {
                  if (*pbVar21 == *(byte *)(iVar6 + 9)) {
                    piVar1 = local_23c + (char)bVar18;
                    iVar19 = local_23c[(char)bVar18];
                    if (*(int *)(&DAT_10024250 +
                                ((uint)pbVar3[iVar22 * 0x6e + 0x1a] + (uint)*(byte *)(iVar6 + 9) * 5
                                ) * 4) == 0) goto joined_r0x1000896b;
                    if (iVar19 == 0) {
                      puVar11 = FUN_10014cb8(0x14);
                      *puVar11 = 0;
                      puVar11[1] = 0;
                      puVar11[2] = 0;
                      puVar11[3] = 0;
                      puVar11[4] = 0;
                      puVar11[4] = 0;
                      puVar11[1] = 1;
                      *(byte *)(puVar11 + 2) = bVar18 | 0xb0;
                      *(undefined1 *)((int)puVar11 + 9) = 1;
                      *(undefined1 *)((int)puVar11 + 10) = 1;
                      puVar11[3] = 3;
                      FUN_10004cf0(&local_27c,(int)puVar11,iVar6);
                      *piVar1 = 1;
                      piVar7 = local_2f8;
                    }
                    break;
                  }
                  iVar22 = iVar22 + 1;
                  pbVar21 = pbVar21 + 0x6e;
                } while (iVar22 < (int)(uint)*pbVar3);
              }
            }
            goto joined_r0x10008811;
          }
        }
LAB_100089c8:
        FUN_1001484f(&local_254);
        sVar27 = 0xffffffff;
        local_4._0_1_ = 4;
        sVar14 = FUN_100044b0((int)&local_27c);
        FUN_100148af(&local_254,sVar14,sVar27);
        FUN_100044e0(&local_27c,local_250);
        FUN_10001aa0(local_294);
        local_2b8 = 0;
        local_2b4 = local_250;
        local_2ac = (uint *)0x0;
        local_4._0_1_ = 5;
        local_2b0 = local_24c;
        local_2a8 = param_2;
        local_2ac = FUN_10014cb8(param_2);
        local_2b8 = 0;
        uVar15 = FUN_10001af0(local_294,&local_2b8,0,(LPCSTR)0x7,0);
        bVar5 = (byte)((uint)local_2b8 >> 0x18);
        if (bVar5 != 0) {
          iVar6 = 0;
          iVar22 = 0;
          do {
            iVar19 = iVar22;
            if (param_3[iVar22 + 0x14] == 0) {
              iVar19 = 10;
              iVar6 = iVar22;
            }
            iVar22 = iVar19 + 1;
          } while (iVar22 < 10);
          if ((bVar5 & 8) == 8) {
            param_3[iVar6 + 0x14] = 0x32000000;
          }
        }
        if ((uVar15 & 0x80000000) != 0) {
          FUN_10014ce1((undefined *)local_2ac);
          switch(uVar15) {
          case 0x80000000:
            uVar15 = 0x31000100;
            break;
          case 0x80000001:
            uVar15 = 0x31000101;
            break;
          case 0x80000002:
            uVar15 = 0x31000102;
            break;
          case 0x80000004:
            uVar15 = 0x31000103;
            break;
          case 0x80000008:
            uVar15 = 0x31000104;
            break;
          case 0x80000010:
            uVar15 = 0x31000105;
            break;
          case 0x80000020:
            uVar15 = 0x31000106;
            break;
          case 0x80000040:
            uVar15 = 0x31000107;
          }
          *param_3 = uVar15;
          local_4._0_1_ = 4;
          FUN_10001ad0(local_294);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_10014882();
          local_4 = 0xffffffff;
          FUN_10003a00(&local_27c);
          ExceptionList = local_c;
          return (uVar15 != 0x31000101) - 2;
        }
        FUN_100039c0(local_23c + 0x10);
        local_4._0_1_ = 6;
        iVar6 = FUN_10003bc0(local_23c + 0x10,local_2ac,local_2a8);
        this_00 = local_2f4;
        if (iVar6 != 0) {
          local_2ec = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 7;
          if (*(char *)(*(int *)((int)local_2f4 + 0xd0) + 0xd10) != '\0') {
            do {
              FUN_10015213(&local_2ec);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd10));
          }
          puStack_2d4 = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 8;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd11) != '\0') {
            do {
              FUN_10015213(&puStack_2d4);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd11));
          }
          puStack_2dc = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 9;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd12) != '\0') {
            do {
              FUN_10015213(&puStack_2dc);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd12));
          }
          puStack_2e4 = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 10;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd19) != '\0') {
            do {
              FUN_10015213(&puStack_2e4);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd19));
          }
          puStack_2e8 = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 0xb;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd1a) != '\0') {
            do {
              FUN_10015213(&puStack_2e8);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd1a));
          }
          puStack_2d0 = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 0xc;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd1b) != '\0') {
            do {
              FUN_10015213(&puStack_2d0);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd1b));
          }
          puStack_2bc = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 0xd;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd1c) != '\0') {
            do {
              FUN_10015213(&puStack_2bc);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd1c));
          }
          puStack_2d8 = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 0xe;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd13) != '\0') {
            do {
              FUN_10015213(&puStack_2d8);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd13));
          }
          puStack_2c8 = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 0xf;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd14) != '\0') {
            do {
              FUN_10015213(&puStack_2c8);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd14));
          }
          puStack_2e0 = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 0x10;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd16) != '\0') {
            do {
              FUN_10015213(&puStack_2e0);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd16));
          }
          puStack_2c0 = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 0x11;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd15) != '\0') {
            do {
              FUN_10015213(&puStack_2c0);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd15));
          }
          puStack_2c4 = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 0x12;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd17) != '\0') {
            do {
              FUN_10015213(&puStack_2c4);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd17));
          }
          puStack_2cc = PTR_DAT_10024d00;
          iVar6 = 0;
          local_4._0_1_ = 0x13;
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 0xd18) != '\0') {
            do {
              FUN_10015213(&puStack_2cc);
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)(uint)*(byte *)(*(int *)((int)this_00 + 0xd0) + 0xd18));
          }
          if (0xff < *(int *)(local_2ec + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x14;
            FUN_10015064(&local_2ec,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2d4 + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x15;
            FUN_10015064(&puStack_2d4,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2dc + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x16;
            FUN_10015064(&puStack_2dc,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2e4 + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x17;
            FUN_10015064(&puStack_2e4,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2e8 + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x18;
            FUN_10015064(&puStack_2e8,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2d0 + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x19;
            FUN_10015064(&puStack_2d0,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2bc + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x1a;
            FUN_10015064(&puStack_2bc,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2d8 + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x1b;
            FUN_10015064(&puStack_2d8,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2c8 + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x1c;
            FUN_10015064(&puStack_2c8,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2e0 + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x1d;
            FUN_10015064(&puStack_2e0,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2c0 + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x1e;
            FUN_10015064(&puStack_2c0,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2c4 + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x1f;
            FUN_10015064(&puStack_2c4,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&local_2f8);
          }
          if (0xff < *(int *)(puStack_2cc + -8)) {
            piVar7 = (int *)FUN_100144aa();
            local_4._0_1_ = 0x20;
            FUN_10015064(&puStack_2cc,piVar7);
            local_4._0_1_ = 0x13;
            FUN_10014f77(&iStack_240);
          }
          FUN_100046b0(local_23c + 0x10,0,0x32,*(undefined1 *)(*(int *)((int)this_00 + 0xd0) + 1),
                       *(undefined1 *)(*(int *)((int)this_00 + 0xd0) + 2),0);
          local_2fc = 8;
          if (*(int *)(local_2ec + -8) != 0) {
            local_2fc = *(int *)(local_2ec + -8) + 0xc;
          }
          if (*(int *)(puStack_2d4 + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2d4 + -8);
          }
          if (*(int *)(puStack_2dc + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2dc + -8);
          }
          if (*(int *)(puStack_2d8 + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2d8 + -8);
          }
          if (*(int *)(puStack_2c8 + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2c8 + -8);
          }
          if (*(int *)(puStack_2c0 + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2c0 + -8);
          }
          if (*(int *)(puStack_2e0 + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2e0 + -8);
          }
          if (*(int *)(puStack_2c4 + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2c4 + -8);
          }
          if (*(int *)(puStack_2cc + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2cc + -8);
          }
          if (*(int *)(puStack_2e4 + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2e4 + -8);
          }
          if (*(int *)(puStack_2e8 + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2e8 + -8);
          }
          if (*(int *)(puStack_2d0 + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2d0 + -8);
          }
          if (*(int *)(puStack_2bc + -8) != 0) {
            local_2fc = local_2fc + 4 + *(int *)(puStack_2bc + -8);
          }
          puVar16 = FUN_10014cb8(local_2fc * 10);
          uVar15 = 8;
          *puVar16 = 0x44;
          puVar16[1] = 99;
          puVar16[2] = 0x68;
          puVar16[3] = *(undefined1 *)(*(int *)((int)this_00 + 0xd0) + 1);
          pCStack_300 = PTR_DAT_10024d00;
          local_4._0_1_ = 0x21;
          FUN_10001000(&uStack_2f0);
          local_4 = CONCAT31(local_4._1_3_,0x22);
          FUN_10015064(&pCStack_300,(int *)&local_2ec);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + 8) = DAT_10024c80;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + 0xc);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + 0xc;
              for (uVar15 = (uVar17 & 0xffff) >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar15 = uVar17 & 3; this_00 = local_2f4, uVar15 != 0; uVar15 = uVar15 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[10] = (char)(uVar17 >> 8);
            puVar16[0xb] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 0xc;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2d4);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c7c;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2dc);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c78;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2d8);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c74;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2c8);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c70;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2c0);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c6c;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2e0);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c68;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2c4);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c64;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2cc);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c60;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2e4);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c5c;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2e8);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c58;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2d0);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c54;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          FUN_10015064(&pCStack_300,(int *)&puStack_2bc);
          uVar17 = *(uint *)(pCStack_300 + -8);
          if ((short)uVar17 != 0) {
            *(undefined2 *)(puVar16 + uVar15) = DAT_10024c50;
            if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) == '#') {
              uVar17 = FUN_10001040(pCStack_300,uVar17 & 0xffff,puVar16 + uVar15 + 4);
            }
            else {
              pCVar23 = pCStack_300;
              pCVar24 = puVar16 + uVar15 + 4;
              for (uVar20 = (uVar17 & 0xffff) >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                *(undefined4 *)pCVar24 = *(undefined4 *)pCVar23;
                pCVar23 = pCVar23 + 4;
                pCVar24 = pCVar24 + 4;
              }
              for (uVar20 = uVar17 & 3; this_00 = local_2f4, uVar20 != 0; uVar20 = uVar20 - 1) {
                *pCVar24 = *pCVar23;
                pCVar23 = pCVar23 + 1;
                pCVar24 = pCVar24 + 1;
              }
            }
            puVar16[uVar15 + 2] = (char)(uVar17 >> 8);
            puVar16[uVar15 + 3] = (char)uVar17;
            uVar15 = (uVar17 & 0xffff) + 4 + uVar15;
          }
          if (*(char *)(*(int *)((int)this_00 + 0xd0) + 1) != '#') {
            uVar15 = local_2fc;
          }
          iVar6 = uVar15 - 8;
          puVar16[4] = (char)((uint)iVar6 >> 0x18);
          puVar16[6] = (char)((uint)iVar6 >> 8);
          puVar16[5] = (char)((uint)iVar6 >> 0x10);
          puVar16[7] = (char)uVar15 + -8;
          FUN_10004930(local_23c + 0x10,(int)puVar16,uVar15);
          FUN_10014ce1(puVar16);
          FUN_100058b0(local_23c + 0x10,(int)&local_2a4);
          FUN_1000a150(this_00,local_23c + 0x10);
          if (0x1ff0 < *(uint *)((int)this_00 + 0xd8)) {
            local_4._0_1_ = 0x21;
            *param_3 = 0x31000009;
            FUN_10001030(&uStack_2f0);
            local_4._0_1_ = 0x13;
            FUN_10014f77((int *)&pCStack_300);
            local_4._0_1_ = 0x12;
            FUN_10014f77((int *)&puStack_2cc);
            local_4._0_1_ = 0x11;
            FUN_10014f77((int *)&puStack_2c4);
            local_4._0_1_ = 0x10;
            FUN_10014f77((int *)&puStack_2c0);
            local_4._0_1_ = 0xf;
            FUN_10014f77((int *)&puStack_2e0);
            local_4._0_1_ = 0xe;
            FUN_10014f77((int *)&puStack_2c8);
            local_4._0_1_ = 0xd;
            FUN_10014f77((int *)&puStack_2d8);
            local_4._0_1_ = 0xc;
            FUN_10014f77((int *)&puStack_2bc);
            local_4._0_1_ = 0xb;
            FUN_10014f77((int *)&puStack_2d0);
            local_4._0_1_ = 10;
            FUN_10014f77((int *)&puStack_2e8);
            local_4._0_1_ = 9;
            FUN_10014f77((int *)&puStack_2e4);
            local_4._0_1_ = 8;
            FUN_10014f77((int *)&puStack_2dc);
            local_4._0_1_ = 7;
            FUN_10014f77((int *)&puStack_2d4);
            local_4._0_1_ = 6;
            FUN_10014f77((int *)&local_2ec);
            local_4._0_1_ = 5;
            FUN_10003a00(local_23c + 0x10);
            local_4._0_1_ = 4;
            FUN_10001ad0(local_294);
            local_4 = CONCAT31(local_4._1_3_,3);
            FUN_10014882();
LAB_10009c42:
            local_4 = 0xffffffff;
            FUN_10003a00(&local_27c);
            ExceptionList = local_c;
            return 0xffffffff;
          }
          FUN_1000a620(local_23c + 0x10);
          FUN_10014ce1((undefined *)local_2ac);
          local_2a8 = FUN_100044b0((int)(local_23c + 0x10));
          local_2ac = FUN_10014cb8(local_2a8);
          FUN_100044e0(local_23c + 0x10,local_2ac);
          local_4._0_1_ = 0x21;
          FUN_10001030(&uStack_2f0);
          local_4._0_1_ = 0x13;
          FUN_10014f77((int *)&pCStack_300);
          local_4._0_1_ = 0x12;
          FUN_10014f77((int *)&puStack_2cc);
          local_4._0_1_ = 0x11;
          FUN_10014f77((int *)&puStack_2c4);
          local_4._0_1_ = 0x10;
          FUN_10014f77((int *)&puStack_2c0);
          local_4._0_1_ = 0xf;
          FUN_10014f77((int *)&puStack_2e0);
          local_4._0_1_ = 0xe;
          FUN_10014f77((int *)&puStack_2c8);
          local_4._0_1_ = 0xd;
          FUN_10014f77((int *)&puStack_2d8);
          local_4._0_1_ = 0xc;
          FUN_10014f77((int *)&puStack_2bc);
          local_4._0_1_ = 0xb;
          FUN_10014f77((int *)&puStack_2d0);
          local_4._0_1_ = 10;
          FUN_10014f77((int *)&puStack_2e8);
          local_4._0_1_ = 9;
          FUN_10014f77((int *)&puStack_2e4);
          local_4._0_1_ = 8;
          FUN_10014f77((int *)&puStack_2dc);
          local_4._0_1_ = 7;
          FUN_10014f77((int *)&puStack_2d4);
          local_4._0_1_ = 6;
          FUN_10014f77((int *)&local_2ec);
        }
        uVar15 = FUN_10007cd0(local_23c + 0x10);
        if (uVar15 != 0) {
          FUN_10014ce1((undefined *)local_2ac);
          local_4._0_1_ = 5;
          *param_3 = uVar15;
          FUN_10003a00(local_23c + 0x10);
          local_4._0_1_ = 4;
          FUN_10001ad0(local_294);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_10014882();
          local_4 = 0xffffffff;
          FUN_10003a00(&local_27c);
          ExceptionList = local_c;
          return 0xffffffff;
        }
        uVar15 = FUN_10007d80(local_23c + 0x10);
        if (uVar15 == 0) {
          local_2b4 = local_2ac;
          local_2b0 = local_2a8;
          local_2a8 = param_2;
          local_2ac = (uint *)param_1;
          local_2b8 = 0;
          uVar15 = FUN_10001af0(local_294,&local_2b8,0,(LPCSTR)0x8,1);
          FUN_10014ce1((undefined *)local_2b4);
          bVar5 = (byte)((uint)local_2b8 >> 0x10);
          if (((char)((uint)local_2b8 >> 0x18) != '\0') || (bVar5 != 0)) {
            iVar6 = 0;
            iVar22 = 0;
            do {
              iVar19 = iVar22;
              if (param_3[iVar22 + 0x14] == 0) {
                iVar19 = 10;
                iVar6 = iVar22;
              }
              iVar22 = iVar19 + 1;
            } while (iVar22 < 10);
            if ((bVar5 & 8) == 8) {
              param_3[iVar6 + 0x14] = 0x32000002;
            }
          }
          uVar17 = uVar15;
          if ((uVar15 & 0x80000000) != 0) {
            switch(uVar15) {
            case 0x80000000:
              uVar15 = 0x31000200;
              break;
            case 0x80000001:
              uVar15 = 0x31000201;
              break;
            case 0x80000002:
              uVar15 = 0x31000202;
              break;
            case 0x80000004:
              uVar15 = 0x31000203;
              break;
            case 0x80000008:
              uVar15 = 0x31000204;
              break;
            case 0x80000010:
              uVar15 = 0x31000205;
              break;
            case 0x80000020:
              uVar15 = 0x31000206;
              break;
            case 0x80000040:
              uVar15 = 0x31000207;
            }
            uVar17 = (uVar15 != 0x31000201) - 2;
            *param_3 = uVar15;
          }
          local_4._0_1_ = 5;
          FUN_10003a00(local_23c + 0x10);
          local_4._0_1_ = 4;
          FUN_10001ad0(local_294);
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_10014882();
          local_4 = 0xffffffff;
          FUN_10003a00(&local_27c);
          ExceptionList = local_c;
          return uVar17;
        }
        FUN_10014ce1((undefined *)local_2ac);
        local_4._0_1_ = 5;
        *param_3 = uVar15;
        FUN_10003a00(local_23c + 0x10);
        local_4._0_1_ = 4;
        FUN_10001ad0(local_294);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_10014882();
        local_4 = 0xffffffff;
        FUN_10003a00(&local_27c);
        ExceptionList = local_c;
        return 0xffffffff;
      }
    }
    piVar7 = local_2f8;
    puVar11 = puVar9;
    if (local_2f8 == (int *)0x0) goto code_r0x10008276;
    goto LAB_100081dc;
  }
LAB_10008279:
  *param_3 = 0xf1000003;
LAB_1000a035:
  local_4 = 0xffffffff;
  FUN_10003a00(&local_27c);
  ExceptionList = local_c;
  return 0xffffffff;
code_r0x10008276:
  local_2f8 = (int *)0x0;
  goto LAB_10008279;
}



// ============================================================
// FUN_1000a150 @ 0x1000a150 1212B
// ============================================================

void __thiscall FUN_1000a150(void *this,void *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  size_t sVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int local_2c8 [128];
  uint local_c8 [3];
  byte local_b9;
  undefined4 local_a8;
  uint *local_a4;
  undefined4 local_94 [3];
  undefined4 local_88;
  uint *local_84;
  undefined4 local_74;
  int local_60 [4];
  uint local_50;
  byte bStack_4b;
  byte bStack_4a;
  byte local_49;
  uint local_38;
  uint local_34;
  uint *local_30;
  int local_2c;
  int local_28;
  void *local_24;
  uint local_20;
  size_t local_1c;
  uint *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001cc71;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd2c;
  ExceptionList = &local_10;
  local_24 = this;
  iVar3 = FUN_1001b31e();
  FUN_10014fe5(&local_28,*(LPCSTR *)(*(int *)(iVar3 + 4) + 0x8c));
  local_8 = 0;
  FUN_10014522(&local_28,0x5c);
  piVar4 = (int *)FUN_100144aa();
  local_8._0_1_ = 1;
  FUN_10015064(&local_28,piVar4);
  local_8._0_1_ = 0;
  FUN_10014f77((int *)&local_1c);
  FUN_10015119();
  local_8._0_1_ = 2;
  *(undefined4 *)((int)this + 0xd8) = 0;
  FUN_1001531c(local_94);
  local_8._0_1_ = 4;
  FUN_100153b3();
  local_8._0_1_ = 5;
  sVar5 = FUN_1001580a(local_60);
  local_1c = sVar5;
  FUN_1001484f(&local_88);
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_100148af(&local_88,sVar5,0xffffffff);
  FUN_1001562d(local_60,local_84,sVar5);
  FUN_1001572b((int)local_60);
  piVar4 = local_2c8;
  for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_18 = local_84;
  do {
    while( true ) {
      puVar11 = local_18;
      if (local_1c == 0) {
        local_8._0_1_ = 5;
        FUN_10014882();
        local_8 = CONCAT31(local_8._1_3_,4);
        FUN_10015453();
        local_8 = 2;
        FUN_1001535a();
        local_8 = local_8 & 0xffffff00;
        FUN_10014f77(&local_2c);
        local_8 = 0xffffffff;
        FUN_10014f77(&local_28);
        ExceptionList = local_10;
        return;
      }
      uVar6 = FUN_10007820(*local_18);
      if (uVar6 == 0x464d4d33) break;
      uVar6 = FUN_10007820(*puVar11);
      if (uVar6 == 0x57564d33) {
        uVar6 = FUN_10007820(puVar11[1]);
        local_18 = puVar11 + 2;
        local_1c = local_1c + (-8 - uVar6);
        while (0 < (int)uVar6) {
          puVar11 = local_18;
          puVar12 = &local_74;
          for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          uVar9 = (CONCAT11(local_74._3_1_,local_74._2_1_) & 0xff) - 0x11;
          uVar10 = uVar9 | (CONCAT12(local_74._3_1_,CONCAT11(local_74._2_1_,local_74._1_1_)) & 0xff)
                           << 8;
          local_20 = uVar6 - 0x14;
          local_18 = local_18 + 5;
          FUN_1001484f(&local_a8);
          local_8 = CONCAT31(local_8._1_3_,7);
          FUN_100148af(&local_a8,uVar10,0xffffffff);
          local_30 = local_a4;
          puVar11 = local_18;
          puVar12 = local_a4;
          for (uVar6 = uVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          local_18 = (uint *)((int)local_18 + uVar10);
          for (uVar6 = uVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(char *)puVar12 = (char)*puVar11;
            puVar11 = (uint *)((int)puVar11 + 1);
            puVar12 = (uint *)((int)puVar12 + 1);
          }
          uVar6 = CONCAT12(local_74._2_1_,CONCAT11(local_74._1_1_,(undefined1)local_74)) & 0xff;
          local_20 = local_20 - uVar10;
          if (local_2c8[uVar6] != 0) {
            FUN_100053b0(param_1,(undefined1)local_74,local_74._3_1_,local_a4,uVar10);
            while (iVar3 = local_2c8[uVar6], 0 < iVar3) {
              iVar7 = *(int *)((int)local_24 + 0xd8) + uVar10;
              uVar13 = uVar9 & 0x80000001;
              *(int *)((int)local_24 + 0xd8) = iVar7;
              if ((int)uVar13 < 0) {
                uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
              }
              if (uVar13 == 1) {
                *(int *)((int)local_24 + 0xd8) = iVar7 + 1;
              }
              local_2c8[uVar6] = iVar3 + -1;
            }
          }
          local_8 = CONCAT31(local_8._1_3_,6);
          FUN_10014882();
          uVar6 = local_20;
        }
      }
      else {
        uVar6 = FUN_10007820(puVar11[1]);
        local_18 = (uint *)((int)puVar11 + uVar6 + 8);
        local_1c = local_1c + (-8 - uVar6);
      }
    }
    local_20 = FUN_10007820(puVar11[1]);
    local_18 = puVar11 + 2;
    local_1c = local_1c + (-8 - local_20);
LAB_1000a2a1:
  } while ((int)local_20 < 1);
  puVar11 = local_18;
  puVar12 = &local_50;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar11 = local_18 + 6;
  uVar9 = (-(uint)((local_49 & 1) != 0) & 0xfffffff1) + 0x1f;
  local_18 = (uint *)((int)puVar11 + uVar9);
  puVar12 = local_c8;
  for (uVar6 = uVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  for (uVar6 = uVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(char *)puVar12 = (char)*puVar11;
    puVar11 = (uint *)((int)puVar11 + 1);
    puVar12 = (uint *)((int)puVar12 + 1);
  }
  local_20 = local_20 + (-0x18 - uVar9);
  for (iVar3 = 0; pbVar1 = *(byte **)((int)local_24 + 200), iVar3 < (int)(uint)*pbVar1;
      iVar3 = iVar3 + 1) {
    bVar2 = pbVar1[iVar3 * 0x6e + 2];
    bVar8 = (byte)stack0xffffffb3;
    if ((bVar2 == 0x7c) || (bVar2 == 0x7a)) {
      if ((bVar8 == bVar2) &&
         (((byte)((ushort)stack0xffffffb3 >> 8) == pbVar1[iVar3 * 0x6e + 0x1a] &&
          (bStack_4b == pbVar1[iVar3 * 0x6e + 4])))) {
        FUN_10004fb0(param_1,bVar8,1,bStack_4b,bStack_4a,local_49,local_c8,uVar9);
        if ((uVar9 == 0x10) && ((local_b9 & 0x80) == 0)) {
          local_38 = CONCAT31(local_38._1_3_,local_b9) & 0xffffff7f;
          local_2c8[local_b9 & 0x7f] = local_2c8[local_b9 & 0x7f] + 1;
        }
        bVar2 = local_49 & 1;
        if (bVar2 != 0) goto LAB_1000a43d;
        *(int *)((int)local_24 + 0xd8) = *(int *)((int)local_24 + 0xd8) + 0x1e;
        break;
      }
    }
    else if ((((bVar2 == 0x7d) || (bVar2 == 0x7b)) && (bVar8 == bVar2)) &&
            ((bStack_4b == pbVar1[iVar3 * 0x6e + 0x1a] && (bStack_4a == pbVar1[iVar3 * 0x6e + 5]))))
    {
      FUN_10004fb0(param_1,bVar8,0,2,bStack_4a,local_49,local_c8,uVar9);
      if ((uVar9 == 0x10) && ((local_b9 & 0x80) == 0)) {
        local_34 = CONCAT31(local_34._1_3_,local_b9) & 0xffffff7f;
        local_2c8[local_b9 & 0x7f] = local_2c8[local_b9 & 0x7f] + 1;
      }
      bVar2 = local_49 & 1;
      if (bVar2 == 0) {
        *(int *)((int)local_24 + 0xd8) = *(int *)((int)local_24 + 0xd8) + 0x1e;
      }
      else {
LAB_1000a43d:
        if (bVar2 == 1) {
          *(int *)((int)local_24 + 0xd8) = *(int *)((int)local_24 + 0xd8) + 0xe;
        }
      }
      break;
    }
  }
  goto LAB_1000a2a1;
}



// ============================================================
// FUN_1000a620 @ 0x1000a620 611B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x1000a69d) */
/* WARNING: Removing unreachable block (ram,0x1000a7f9) */

void FUN_1000a620(void *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int local_134;
  undefined4 *local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  uint local_110;
  undefined1 local_10c [4];
  uint local_108 [63];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1001cc96;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_10004f90(param_1,0);
  if (iVar4 != 0) {
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    local_114 = 0;
    FUN_1000b7f8(local_10c,0x10,0x10,&LAB_1000a890);
    local_4 = 0;
    puVar7 = local_108 + 1;
    iVar8 = 0x10;
    do {
      local_12c = *puVar7;
      *puVar7 = puVar7[-1];
      puVar7 = puVar7 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar3 = *(undefined4 **)(iVar4 + 0xc);
    while (puVar3 != (undefined4 *)0x0) {
      local_130 = (undefined4 *)*puVar3;
      local_134 = puVar3[2];
      puVar3 = local_130;
      if ((*(int *)(local_134 + 0xc) == 3) &&
         (bVar1 = *(byte *)(local_134 + 8), (bVar1 & 0xf0) == 0xb0)) {
        if (*(char *)(local_134 + 9) == '\0') {
          if ((*(byte *)(local_134 + 10) < 0x7a) || (0x7d < *(byte *)(local_134 + 10))) {
            *(char *)(local_134 + 10) = ((bVar1 & 0xf) == 9) + '|';
          }
          local_124._1_3_ = (undefined3)(local_124 >> 8);
          local_124 = CONCAT31(local_124._1_3_,*(byte *)(local_134 + 8)) & 0xffffff0f;
          *(undefined1 *)((int)&local_120 + (*(byte *)(local_134 + 8) & 0xf)) =
               *(undefined1 *)(local_134 + 10);
        }
        else if (*(char *)(local_134 + 9) == ' ') {
          local_128._1_3_ = (undefined3)(local_128 >> 8);
          local_128 = CONCAT31(local_128._1_3_,bVar1) & 0xffffff0f;
          FUN_1000a920(local_10c + (bVar1 & 0xf) * 0x10,
                       (undefined4 *)local_108[(bVar1 & 0xf) * 4 + 1],1,&local_134);
          puVar3 = local_130;
        }
      }
      else if ((*(int *)(local_134 + 0xc) == 2) &&
              (bVar1 = *(byte *)(local_134 + 8), (bVar1 & 0xf0) == 0xc0)) {
        uVar6 = 0;
        local_12c._1_3_ = (undefined3)(local_12c >> 8);
        local_12c = CONCAT31(local_12c._1_3_,bVar1) & 0xffffff0f;
        uVar5 = bVar1 & 0xf;
        while ((local_108[uVar5 * 4] != 0 &&
               (uVar6 < (uint)((int)(local_108[uVar5 * 4 + 1] - local_108[uVar5 * 4]) >> 2)))) {
          iVar4 = *(int *)(local_108[uVar5 * 4] + uVar6 * 4);
          cVar2 = *(char *)((int)&local_120 + uVar5);
          if (((cVar2 == '|') || (cVar2 == 'z')) ||
             (((cVar2 != '}' && (cVar2 != '{')) && ((*(byte *)(local_134 + 8) & 0xf) != 9)))) {
            *(undefined1 *)(iVar4 + 10) = 1;
            uVar6 = uVar6 + 1;
          }
          else {
            *(undefined1 *)(iVar4 + 10) = 0;
            uVar6 = uVar6 + 1;
          }
        }
        cVar2 = *(char *)((int)&local_120 + uVar5);
        local_110 = local_108[uVar5 * 4 + 1];
        local_108[uVar5 * 4 + 1] = local_108[uVar5 * 4];
        if (((cVar2 == '}') || (cVar2 == '{')) ||
           ((cVar2 != '|' && ((cVar2 != 'z' && ((*(byte *)(local_134 + 8) & 0xf) == 9)))))) {
          *(undefined1 *)(local_134 + 9) = 2;
        }
      }
    }
    local_4 = 0xffffffff;
    FUN_1000b61b(local_10c,0x10,0x10,&LAB_1000a8f0);
  }
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_1000a8b0 @ 0x1000a8b0 62B
// ============================================================

undefined4 FUN_1000a8b0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  iVar1 = (int)lVar2;
  if (0xc0 < iVar1) {
    return DAT_1001e948;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return (&DAT_1001e648)[iVar1];
}



// ============================================================
// FUN_1000a920 @ 0x1000a920 521B
// ============================================================

void __thiscall FUN_1000a920(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar7 >> 2)) {
    if ((uint)((int)puVar7 - (int)param_1 >> 2) < param_2) {
      puVar5 = param_1 + param_2;
      if (param_1 != puVar7) {
        puVar4 = puVar5 + -param_2;
        do {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar4;
          }
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar4 != puVar7);
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (iVar2 = param_2 - ((int)puVar7 - (int)param_1 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *param_3;
        }
        puVar7 = puVar7 + 1;
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (; param_1 != puVar7; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
      return;
    }
    if (param_2 != 0) {
      puVar5 = puVar7;
      for (puVar4 = puVar7 + -param_2; puVar4 != puVar7; puVar4 = puVar4 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
      }
      puVar7 = *(undefined4 **)((int)this + 8);
      for (puVar5 = puVar7 + -param_2; param_1 != puVar5; puVar5 = puVar5 + -1) {
        puVar7 = puVar7 + -1;
        *puVar7 = puVar5[-1];
      }
      puVar7 = param_1 + param_2;
      for (; param_1 != puVar7; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 4;
    }
    return;
  }
  iVar2 = *(int *)((int)this + 4);
  if ((iVar2 == 0) || (uVar6 = (int)puVar7 - iVar2 >> 2, uVar6 <= param_2)) {
    uVar6 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar7 - iVar2 >> 2;
  }
  iVar2 = iVar2 + uVar6;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  puVar4 = FUN_10014cb8(iVar3 * 4);
  puVar5 = puVar4;
  for (puVar7 = *(undefined4 **)((int)this + 4); uVar6 = param_2, puVar1 = puVar5, puVar7 != param_1
      ; puVar7 = puVar7 + 1) {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar7;
    }
    puVar5 = puVar5 + 1;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar7 = puVar5 + param_2;
  if (param_1 != puVar1) {
    puVar5 = (undefined4 *)((int)puVar7 + (param_2 * -4 - (int)puVar5) + (int)param_1);
    do {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar5;
      }
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar1);
  }
  FUN_10014ce1(*(undefined **)((int)this + 4));
  *(undefined4 **)((int)this + 0xc) = puVar4 + iVar2;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    *(undefined4 **)((int)this + 4) = puVar4;
    *(undefined4 **)((int)this + 8) = puVar4 + param_2;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar4;
  *(undefined4 **)((int)this + 8) = puVar4 + (*(int *)((int)this + 8) - iVar2 >> 2) + param_2;
  return;
}



// ============================================================
// FUN_1000ab30 @ 0x1000ab30 21B
// ============================================================

void __fastcall FUN_1000ab30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1001e9e8;
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_10014ce1((undefined *)param_1[1]);
  }
  return;
}



// ============================================================
// FUN_1000ace0 @ 0x1000ace0 30B
// ============================================================

undefined4 * __thiscall FUN_1000ace0(void *this,byte param_1)

{
  FUN_1000ab30(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1000ad00 @ 0x1000ad00 201B
// ============================================================

int FUN_1000ad00(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 != 1) {
    if (param_2 == 0) {
      iVar3 = FUN_1001b31e();
      if (*(int **)(iVar3 + 4) != (int *)0x0) {
        (**(code **)(**(int **)(iVar3 + 4) + 0x68))();
      }
      FUN_100167aa();
      FUN_100167b3(0xffffffff);
      FUN_1001c49a();
      FUN_1001b9fc(param_1,1);
    }
    else if (param_2 == 3) {
      FUN_100167aa();
      FUN_100167b3(0xffffffff);
      FUN_10015d26();
    }
    return 1;
  }
  param_2 = 0;
  iVar3 = FUN_1001b0ec();
  uVar1 = *(undefined4 *)(iVar3 + 8);
  iVar4 = FUN_1001ba45(param_1,0,&DAT_1001e9f4,0);
  if (iVar4 != 0) {
    iVar4 = FUN_1001b31e();
    piVar2 = *(int **)(iVar4 + 4);
    if ((piVar2 == (int *)0x0) || (iVar4 = (**(code **)(*piVar2 + 0x50))(), iVar4 != 0)) {
      *(undefined4 *)(iVar3 + 8) = uVar1;
      FUN_1001b9e6(param_1);
      param_2 = 1;
      goto LAB_1000ad67;
    }
    (**(code **)(*piVar2 + 0x68))();
  }
  FUN_1001c49a();
LAB_1000ad67:
  *(undefined4 *)(iVar3 + 8) = uVar1;
  return param_2;
}



// ============================================================
// FUN_1000adf7 @ 0x1000adf7 42B
// ============================================================

undefined4 * __thiscall FUN_1000adf7(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_100152a9(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined ***)this = &PTR_LAB_1001eab8;
  return this;
}



// ============================================================
// FUN_1000ae21 @ 0x1000ae21 28B
// ============================================================

undefined4 * __thiscall FUN_1000ae21(void *this,byte param_1)

{
  FUN_1000ae3d(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1000ae44 @ 0x1000ae44 42B
// ============================================================

undefined4 * __thiscall FUN_1000ae44(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_100152a9(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined ***)this = &PTR_LAB_1001ead0;
  return this;
}



// ============================================================
// FUN_1000ae6e @ 0x1000ae6e 28B
// ============================================================

undefined4 * __thiscall FUN_1000ae6e(void *this,byte param_1)

{
  FUN_1000ae8a(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1000ae91 @ 0x1000ae91 28B
// ============================================================

undefined * __thiscall FUN_1000ae91(void *this,byte param_1)

{
  FUN_1000aead();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1000aead @ 0x1000aead 44B
// ============================================================

void FUN_1000aead(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001eb64;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10014f77(extraout_ECX + 4);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000aee8 @ 0x1000aee8 39B
// ============================================================

int __thiscall FUN_1000aee8(void *this,undefined2 param_1)

{
  if (*(uint *)((int)this + 0x28) < *(int *)((int)this + 0x24) + 2U) {
    FUN_10019b25((int)this);
  }
  **(undefined2 **)((int)this + 0x24) = param_1;
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 2;
  return (int)this;
}



// ============================================================
// FUN_1000af0f @ 0x1000af0f 38B
// ============================================================

int __thiscall FUN_1000af0f(void *this,undefined4 param_1)

{
  if (*(uint *)((int)this + 0x28) < *(int *)((int)this + 0x24) + 4U) {
    FUN_10019b25((int)this);
  }
  **(undefined4 **)((int)this + 0x24) = param_1;
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 4;
  return (int)this;
}



// ============================================================
// FUN_1000af35 @ 0x1000af35 51B
// ============================================================

void * __thiscall FUN_1000af35(void *this,undefined2 *param_1)

{
  if (*(uint *)((int)this + 0x28) < *(int *)((int)this + 0x24) + 2U) {
    FUN_10019ba1(this,(*(int *)((int)this + 0x24) - *(uint *)((int)this + 0x28)) + 2);
  }
  *param_1 = **(undefined2 **)((int)this + 0x24);
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 2;
  return this;
}



// ============================================================
// FUN_1000af68 @ 0x1000af68 50B
// ============================================================

void * __thiscall FUN_1000af68(void *this,undefined4 *param_1)

{
  if (*(uint *)((int)this + 0x28) < *(int *)((int)this + 0x24) + 4U) {
    FUN_10019ba1(this,(*(int *)((int)this + 0x24) - *(uint *)((int)this + 0x28)) + 4);
  }
  *param_1 = **(undefined4 **)((int)this + 0x24);
  *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 4;
  return this;
}



// ============================================================
// FUN_1000af9b @ 0x1000af9b 20B
// ============================================================

undefined4 FUN_1000af9b(void)

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
// FUN_1000afbc @ 0x1000afbc 28B
// ============================================================

undefined * __thiscall FUN_1000afbc(void *this,byte param_1)

{
  FUN_1000afd8();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1000afd8 @ 0x1000afd8 72B
// ============================================================

void FUN_1000afd8(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1001eef4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_100169d1((int)extraout_ECX);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_10014aa6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_10014aa6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000b020 @ 0x1000b020 40B
// ============================================================

undefined4 * __thiscall FUN_1000b020(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  return this;
}



// ============================================================
// FUN_1000b048 @ 0x1000b048 20B
// ============================================================

void __fastcall FUN_1000b048(int param_1)

{
  FUN_1000b05c(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// ============================================================
// FUN_1000b05c @ 0x1000b05c 40B
// ============================================================

void __fastcall FUN_1000b05c(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  FUN_10014839(*(undefined4 **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// ============================================================
// FUN_1000b084 @ 0x1000b084 121B
// ============================================================

int * FUN_1000b084(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  int iVar3;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  EnterCriticalSection((LPCRITICAL_SECTION)(extraout_ECX + 4));
  if (extraout_ECX[3] == 0) {
    iVar3 = *extraout_ECX;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_10014819(extraout_ECX + 2,extraout_ECX[1],iVar3);
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
// Catch@1000b0fd @ 0x1000b0fd 22B
// ============================================================

void Catch_1000b0fd(void)

{
  int unaff_EBP;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x14) + 0x10));
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}



// ============================================================
// FUN_1000b113 @ 0x1000b113 44B
// ============================================================

void __thiscall FUN_1000b113(void *this,undefined4 *param_1)

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
// FUN_1000b13f @ 0x1000b13f 28B
// ============================================================

undefined * __thiscall FUN_1000b13f(void *this,byte param_1)

{
  FUN_1000b15b();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1000b15b @ 0x1000b15b 44B
// ============================================================

void FUN_1000b15b(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001ef60;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10014f77(extraout_ECX + 3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000b187 @ 0x1000b187 42B
// ============================================================

undefined4 * __thiscall FUN_1000b187(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_100152a9(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined ***)this = &PTR_LAB_1001f188;
  return this;
}



// ============================================================
// FUN_1000b1b1 @ 0x1000b1b1 28B
// ============================================================

undefined4 * __thiscall FUN_1000b1b1(void *this,byte param_1)

{
  FUN_1000b1cd(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1000b1d4 @ 0x1000b1d4 42B
// ============================================================

undefined4 * __thiscall FUN_1000b1d4(void *this,undefined4 param_1,undefined4 param_2)

{
  FUN_100152a9(this,param_1);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x94) = param_2;
  *(undefined ***)this = &PTR_LAB_1001f1a0;
  return this;
}



// ============================================================
// FUN_1000b1fe @ 0x1000b1fe 28B
// ============================================================

undefined4 * __thiscall FUN_1000b1fe(void *this,byte param_1)

{
  FUN_1000b21a(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1000b221 @ 0x1000b221 28B
// ============================================================

undefined * __thiscall FUN_1000b221(void *this,byte param_1)

{
  FUN_1000b23d();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1000b23d @ 0x1000b23d 41B
// ============================================================

void FUN_1000b23d(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001f0f0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1001a4eb((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000b2a6 @ 0x1000b2a6 37B
// ============================================================

void __thiscall
FUN_1000b2a6(void *this,int param_1,int param_2,UINT param_3,RECT *param_4,LPCSTR param_5,
            UINT param_6,INT *param_7)

{
  ExtTextOutA(*(HDC *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// ============================================================
// FUN_1000b2cb @ 0x1000b2cb 56B
// ============================================================

int * __thiscall
FUN_1000b2cb(void *this,int *param_1,int param_2,int param_3,LPCSTR param_4,int param_5,int param_6,
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
// FUN_1000b31f @ 0x1000b31f 48B
// ============================================================

void __thiscall
FUN_1000b31f(void *this,int param_1,GRAYSTRINGPROC param_2,LPARAM param_3,int param_4,int param_5,
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
// FUN_1000b36b @ 0x1000b36b 216B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1000b36b(void)

{
  HMODULE hModule;
  bool bVar1;
  
  if (DAT_1002a1b0 == 0) {
    hModule = GetModuleHandleA("USER32");
    if ((((hModule != (HMODULE)0x0) &&
         (_DAT_1002a198 = GetProcAddress(hModule,"GetSystemMetrics"), _DAT_1002a198 != (FARPROC)0x0)
         ) && (DAT_1002a19c = GetProcAddress(hModule,"MonitorFromWindow"),
              DAT_1002a19c != (FARPROC)0x0)) &&
       (((DAT_1002a1a0 = GetProcAddress(hModule,"MonitorFromRect"), DAT_1002a1a0 != (FARPROC)0x0 &&
         (_DAT_1002a1a4 = GetProcAddress(hModule,"MonitorFromPoint"), _DAT_1002a1a4 != (FARPROC)0x0)
         ) && ((_DAT_1002a1ac = GetProcAddress(hModule,"EnumDisplayMonitors"),
               _DAT_1002a1ac != (FARPROC)0x0 &&
               (DAT_1002a1a8 = GetProcAddress(hModule,"GetMonitorInfoA"),
               DAT_1002a1a8 != (FARPROC)0x0)))))) {
      DAT_1002a1b0 = 1;
      return true;
    }
    _DAT_1002a198 = (FARPROC)0x0;
    DAT_1002a19c = (FARPROC)0x0;
    DAT_1002a1a0 = (FARPROC)0x0;
    _DAT_1002a1a4 = (FARPROC)0x0;
    DAT_1002a1a8 = (FARPROC)0x0;
    _DAT_1002a1ac = (FARPROC)0x0;
    DAT_1002a1b0 = 1;
    bVar1 = false;
  }
  else {
    bVar1 = DAT_1002a1a8 != (FARPROC)0x0;
  }
  return bVar1;
}



// ============================================================
// FUN_1000b443 @ 0x1000b443 86B
// ============================================================

undefined4 FUN_1000b443(int *param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = FUN_1000b36b();
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
  uVar2 = (*DAT_1002a1a0)(param_1,param_2);
  return uVar2;
}



// ============================================================
// xMonitorFromWindow @ 0x1000b499 107B
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
  
  bVar1 = FUN_1000b36b();
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
        uVar2 = FUN_1000b443(&local_30.rcNormalPosition.left,param_2);
      }
    }
    else {
      uVar2 = 0x12340042;
    }
  }
  else {
    uVar2 = (*DAT_1002a19c)(param_1,param_2);
  }
  return uVar2;
}



// ============================================================
// FUN_1000b504 @ 0x1000b504 147B
// ============================================================

undefined4 FUN_1000b504(int param_1,uint *param_2)

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
  
  bVar1 = FUN_1000b36b();
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
    uVar2 = (*DAT_1002a1a8)(param_1,param_2);
  }
  return uVar2;
}



// ============================================================
// GetOwner @ 0x1000b597 23B
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
  pCVar1 = FUN_100176a5();
  return pCVar1;
}



// ============================================================
// FUN_1000b5d6 @ 0x1000b5d6 28B
// ============================================================

undefined * __thiscall FUN_1000b5d6(void *this,byte param_1)

{
  FUN_1000b5f2();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1000b5f2 @ 0x1000b5f2 41B
// ============================================================

void FUN_1000b5f2(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001f7ec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10019970((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1000b61b @ 0x1000b61b 104B
// ============================================================

void FUN_1000b61b(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1001f818;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_1000b683();
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_1000b683 @ 0x1000b683 24B
// ============================================================

void FUN_1000b683(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    FUN_1000b69b(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(int *)(unaff_EBP + 0x10),*(undefined **)(unaff_EBP + 0x14));
  }
  return;
}



// ============================================================
// FUN_1000b69b @ 0x1000b69b 81B
// ============================================================

void FUN_1000b69b(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1001f828;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_1000b70f @ 0x1000b70f 215B
// ============================================================

void __cdecl FUN_1000b70f(undefined *param_1)

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
  puStack_c = &DAT_1001f838;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1002b764 == 3) {
    ExceptionList = &local_14;
    FUN_1000f14e(9);
    local_8 = 0;
    local_20 = (uint *)FUN_1000deed((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_1000df18(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_1000b779();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1002b764 != 2) goto LAB_1000b7db;
    ExceptionList = &local_14;
    FUN_1000f14e(9);
    local_8 = 1;
    local_28 = (uint *)FUN_1000ec48(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_1000ec9f(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_1000b7d1();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_1000b7db:
  HeapFree(DAT_1002b760,0,param_1);
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_1000b7f8 @ 0x1000b7f8 106B
// ============================================================

void FUN_1000b7f8(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1001f850;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_1000b862();
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_1000b862 @ 0x1000b862 24B
// ============================================================

void FUN_1000b862(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    FUN_1000b69b(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                 *(int *)(unaff_EBP + -0x1c),*(undefined **)(unaff_EBP + 0x18));
  }
  return;
}



// ============================================================
// FUN_1000b87a @ 0x1000b87a 45B
// ============================================================

void FUN_1000b87a(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000b8a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// ============================================================
// FUN_1000b8bc @ 0x1000b8bc 79B
// ============================================================

void FUN_1000b8bc(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x1000b8e4,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// ============================================================
// FUN_1000b90b @ 0x1000b90b 54B
// ============================================================

undefined4 __cdecl
FUN_1000b90b(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_1000f1c4(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



// ============================================================
// FUN_1000b941 @ 0x1000b941 84B
// ============================================================

undefined4 __cdecl
FUN_1000b941(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_1000b995;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// ============================================================
// FUN_1000b995 @ 0x1000b995 37B
// ============================================================

void __cdecl FUN_1000b995(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_1000f1c4(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



// ============================================================
// FUN_1000b9ba @ 0x1000b9ba 182B
// ============================================================

undefined4 __cdecl
FUN_1000b9ba(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_28 = FUN_1000ba70;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x1000ba42;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_1000faa1();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// ============================================================
// FUN_1000ba70 @ 0x1000ba70 114B
// ============================================================

undefined4 __cdecl FUN_1000ba70(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_1000f1c4(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_1000b8bc(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1000bada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// ============================================================
// FUN_1000bae5 @ 0x1000bae5 123B
// ============================================================

int __cdecl FUN_1000bae5(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

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
      FUN_1000dbd5();
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
    FUN_1000dbd5();
  }
  return iVar1 + uVar5 * 0x14;
}



// ============================================================
// __global_unwind2 @ 0x1000bb60 32B
// ============================================================

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000bb78,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// ============================================================
// __local_unwind2 @ 0x1000bba2 104B
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
  puStack_18 = &LAB_1000bb80;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000bc36();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// ============================================================
// __abnormal_termination @ 0x1000bc0a 35B
// ============================================================

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_1000bb80) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// ============================================================
// FUN_1000bc36 @ 0x1000bc36 24B
// ============================================================

void FUN_1000bc36(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_10025210 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1002520c = in_EAX;
  DAT_10025214 = unaff_EBP;
  return;
}



// ============================================================
// FUN_1000bc4e @ 0x1000bc4e 41B
// ============================================================

void __fastcall FUN_1000bc4e(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_1000f14e(0x1b);
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_1000b70f((undefined *)param_1[1]);
  }
  FUN_1000f1af(0x1b);
  return;
}



// ============================================================
// FUN_1000bc77 @ 0x1000bc77 28B
// ============================================================

undefined4 * __thiscall FUN_1000bc77(void *this,byte param_1)

{
  FUN_1000bc4e(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// __nh_malloc @ 0x1000bca5 44B
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
      pvVar1 = (void *)FUN_1000bcd1((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1000fc34(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// ============================================================
// FUN_1000bcd1 @ 0x1000bcd1 231B
// ============================================================

void __cdecl FUN_1000bcd1(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1001f868;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  if (DAT_1002b764 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1002b75c) {
      ExceptionList = &local_14;
      FUN_1000f14e(9);
      local_8 = 0;
      piVar1 = FUN_1000e241(param_1);
      local_8 = 0xffffffff;
      FUN_1000bd38();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1002b764 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10027594) {
        ExceptionList = &local_14;
        FUN_1000f14e(9);
        local_8 = 1;
        piVar1 = FUN_1000ece4(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_1000bd97();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_1000bdb0;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_1000bdb0:
  HeapAlloc(DAT_1002b760,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// ============================================================
// __CxxThrowException@8 @ 0x1000bdcd 58B
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
  
  pDVar2 = &DAT_1001f880;
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
// FUN_1000be07 @ 0x1000be07 781B
// ============================================================

byte * __cdecl FUN_1000be07(byte *param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined4 *unaff_FS_OFFSET;
  int local_3c;
  uint *local_38;
  byte *local_34;
  int *local_30;
  uint *local_2c;
  byte *local_28;
  uint *local_24;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1001f8a0;
  puStack_10 = &LAB_1000da9c;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    local_28 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      FUN_1000b70f(param_1);
    }
    else if (DAT_1002b764 == 3) {
      do {
        local_28 = (byte *)0x0;
        if (param_2 < (uint *)0xffffffe1) {
          FUN_1000f14e(9);
          local_8 = 0;
          local_2c = (uint *)FUN_1000deed((int)param_1);
          if (local_2c != (uint *)0x0) {
            if (param_2 <= DAT_1002b75c) {
              iVar1 = FUN_1000e6f6(local_2c,(int)param_1,(int)param_2);
              if (iVar1 == 0) {
                local_28 = (byte *)FUN_1000e241(param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_1000c440((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  local_2c = (uint *)FUN_1000deed((int)param_1);
                  FUN_1000df18(local_2c,(int)param_1);
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
              local_28 = HeapAlloc(DAT_1002b760,0,(SIZE_T)param_2);
              if (local_28 != (byte *)0x0) {
                local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                puVar2 = local_24;
                if (param_2 <= local_24) {
                  puVar2 = param_2;
                }
                FUN_1000c440((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                FUN_1000df18(local_2c,(int)param_1);
              }
            }
          }
          local_8 = 0xffffffff;
          FUN_1000bf92();
          if (local_2c == (uint *)0x0) {
            if (param_2 == (uint *)0x0) {
              param_2 = (uint *)0x1;
            }
            param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
            local_28 = HeapReAlloc(DAT_1002b760,0,param_1,(SIZE_T)param_2);
          }
        }
        if ((local_28 != (byte *)0x0) || (DAT_1002a368 == (byte *)0x0)) goto LAB_1000c127;
        iVar1 = FUN_1000fc34(param_2);
      } while (iVar1 != 0);
    }
    else if (DAT_1002b764 == 2) {
      if (param_2 < (uint *)0xffffffe1) {
        if (param_2 == (uint *)0x0) {
          param_2 = (uint *)0x10;
        }
        else {
          param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
        }
      }
      do {
        local_28 = pbVar3;
        if (param_2 < (uint *)0xffffffe1) {
          FUN_1000f14e(9);
          local_8 = 1;
          pbVar3 = (byte *)FUN_1000ec48(param_1,&local_3c,(uint *)&local_30);
          local_34 = pbVar3;
          if (pbVar3 == (byte *)0x0) {
            local_28 = HeapReAlloc(DAT_1002b760,0,param_1,(SIZE_T)param_2);
          }
          else {
            if (param_2 < DAT_10027594) {
              iVar1 = FUN_1000f010(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
              if (iVar1 == 0) {
                local_28 = (byte *)FUN_1000ece4((uint)param_2 >> 4);
                if (local_28 != (byte *)0x0) {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_1000c440((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_1000ec9f(local_3c,(int)local_30,pbVar3);
                }
              }
              else {
                local_28 = param_1;
              }
            }
            if ((local_28 == (byte *)0x0) &&
               (local_28 = HeapAlloc(DAT_1002b760,0,(SIZE_T)param_2), local_28 != (byte *)0x0)) {
              local_38 = (uint *)((uint)*pbVar3 << 4);
              puVar2 = local_38;
              if (param_2 <= local_38) {
                puVar2 = param_2;
              }
              FUN_1000c440((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
              FUN_1000ec9f(local_3c,(int)local_30,pbVar3);
            }
          }
          local_8 = 0xffffffff;
          FUN_1000c0e0();
        }
        if ((local_28 != pbVar3) || (DAT_1002a368 == pbVar3)) goto LAB_1000c127;
        iVar1 = FUN_1000fc34(param_2);
      } while (iVar1 != 0);
    }
    else {
      do {
        local_28 = (byte *)0x0;
        if (param_2 < (uint *)0xffffffe1) {
          if (param_2 == (uint *)0x0) {
            param_2 = (uint *)0x1;
          }
          param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
          local_28 = HeapReAlloc(DAT_1002b760,0,param_1,(SIZE_T)param_2);
        }
        if ((local_28 != (byte *)0x0) || (DAT_1002a368 == (byte *)0x0)) goto LAB_1000c127;
        iVar1 = FUN_1000fc34(param_2);
      } while (iVar1 != 0);
    }
    local_28 = (byte *)0x0;
  }
LAB_1000c127:
  *unaff_FS_OFFSET = local_14;
  return local_28;
}



// ============================================================
// FUN_1000c136 @ 0x1000c136 23B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c136(void)

{
  void *extraout_ECX;
  
  FUN_1000c14e();
  _DAT_1002a264 = FUN_10010030();
  FUN_1000ffe0(extraout_ECX);
  return;
}



// ============================================================
// FUN_1000c14e @ 0x1000c14e 56B
// ============================================================

void FUN_1000c14e(void)

{
  PTR_LAB_10027674 = &LAB_100100b3;
  PTR_LAB_10027670 = __cfltcvt;
  PTR_LAB_10027678 = __fassign;
  PTR_LAB_1002767c = FUN_10010059;
  PTR_LAB_10027680 = &LAB_10010101;
  PTR_LAB_10027684 = __cfltcvt;
  return;
}



// ============================================================
// __ftol @ 0x1000c188 39B
// ============================================================

/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}



// ============================================================
// FUN_1000c1af @ 0x1000c1af 126B
// ============================================================

undefined4 __cdecl FUN_1000c1af(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_1000ce8c();
  pbVar1 = (byte *)FUN_1000cf6c(DAT_1002b994);
  if (pbVar1 < DAT_1002b990 + (4 - (int)DAT_1002b994)) {
    SVar2 = FUN_1000cf6c(DAT_1002b994);
    pbVar1 = FUN_1000be07(DAT_1002b994,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_1000c224;
    }
    DAT_1002b990 = pbVar1 + ((int)DAT_1002b990 - (int)DAT_1002b994 >> 2) * 4;
    DAT_1002b994 = pbVar1;
  }
  *(undefined4 *)DAT_1002b990 = param_1;
  DAT_1002b990 = DAT_1002b990 + 4;
LAB_1000c224:
  FUN_1000ce95();
  return param_1;
}



// ============================================================
// FUN_1000c26e @ 0x1000c26e 217B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000c26e(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1002a280 = GetVersion();
    iVar1 = FUN_1000dda0(1);
    if (iVar1 != 0) {
      _DAT_1002a28c = DAT_1002a280 >> 8 & 0xff;
      _DAT_1002a288 = DAT_1002a280 & 0xff;
      DAT_1002a280 = DAT_1002a280 >> 0x10;
      _DAT_1002a284 = _DAT_1002a288 * 0x100 + _DAT_1002a28c;
      iVar1 = FUN_1000fa1c();
      if (iVar1 != 0) {
        DAT_1002b998 = GetCommandLineA();
        DAT_1002a26c = FUN_10010995();
        FUN_1001047f();
        FUN_10010748();
        FUN_1001068f();
        FUN_1000cd9a();
        DAT_1002a268 = DAT_1002a268 + 1;
        goto LAB_1000c341;
      }
      FUN_1000ddfd();
    }
LAB_1000c2ce:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1002a268 < 1) goto LAB_1000c2ce;
      DAT_1002a268 = DAT_1002a268 + -1;
      if (DAT_1002a2b8 == 0) {
        FUN_1000cdd8();
      }
      FUN_1001063b();
      FUN_1000fa70();
      FUN_1000ddfd();
    }
    else if (param_2 == 3) {
      FUN_1000fb08((undefined *)0x0);
    }
LAB_1000c341:
    uVar2 = 1;
  }
  return uVar2;
}



// ============================================================
// entry @ 0x1000c347 157B
// ============================================================

int entry(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1002a268;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_1000c38f;
    if ((DAT_1002b99c != (code *)0x0) &&
       (iVar2 = (*DAT_1002b99c)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_1000c26e(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_1000c38f:
  iVar2 = FUN_1000ad00(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_1000c26e(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_1000c26e(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1002b99c != (code *)0x0) {
      iVar2 = (*DAT_1002b99c)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// ============================================================
// __amsg_exit @ 0x1000c3e4 48B
// ============================================================

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1002a274 == 1) || ((DAT_1002a274 == 0 && (DAT_1002a278 == 1)))) {
    FUN_10010ac7();
  }
  FUN_10010b00(param_1);
  (*(code *)PTR___exit_10025248)(0xff);
  return;
}



// ============================================================
// FUN_1000c418 @ 0x1000c418 31B
// ============================================================

void FUN_1000c418(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}



// ============================================================
// FUN_1000c440 @ 0x1000c440 664B
// ============================================================

undefined4 * __cdecl FUN_1000c440(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_1000c5f7_caseD_2;
        case 3:
          goto switchD_1000c5f7_caseD_3;
        }
        goto switchD_1000c5f7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1000c5f7_caseD_0;
      case 1:
        goto switchD_1000c5f7_caseD_1;
      case 2:
        goto switchD_1000c5f7_caseD_2;
      case 3:
        goto switchD_1000c5f7_caseD_3;
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
              goto switchD_1000c5f7_caseD_2;
            case 3:
              goto switchD_1000c5f7_caseD_3;
            }
            goto switchD_1000c5f7_caseD_1;
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
              goto switchD_1000c5f7_caseD_2;
            case 3:
              goto switchD_1000c5f7_caseD_3;
            }
            goto switchD_1000c5f7_caseD_1;
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
              goto switchD_1000c5f7_caseD_2;
            case 3:
              goto switchD_1000c5f7_caseD_3;
            }
            goto switchD_1000c5f7_caseD_1;
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
switchD_1000c5f7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1000c5f7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1000c5f7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1000c5f7_caseD_0:
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
        goto switchD_1000c475_caseD_2;
      case 3:
        goto switchD_1000c475_caseD_3;
      }
      goto switchD_1000c475_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1000c475_caseD_0;
    case 1:
      goto switchD_1000c475_caseD_1;
    case 2:
      goto switchD_1000c475_caseD_2;
    case 3:
      goto switchD_1000c475_caseD_3;
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
            goto switchD_1000c475_caseD_2;
          case 3:
            goto switchD_1000c475_caseD_3;
          }
          goto switchD_1000c475_caseD_1;
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
            goto switchD_1000c475_caseD_2;
          case 3:
            goto switchD_1000c475_caseD_3;
          }
          goto switchD_1000c475_caseD_1;
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
            goto switchD_1000c475_caseD_2;
          case 3:
            goto switchD_1000c475_caseD_3;
          }
          goto switchD_1000c475_caseD_1;
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
switchD_1000c475_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1000c475_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1000c475_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1000c475_caseD_0:
  return param_1;
}



// ============================================================
// FUN_1000c775 @ 0x1000c775 151B
// ============================================================

byte * __cdecl FUN_1000c775(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (DAT_1002b77c == 0) {
    pbVar2 = (byte *)_strchr((char *)param_1,param_2);
  }
  else {
    FUN_1000f14e(0x19);
    while( true ) {
      bVar1 = *param_1;
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) break;
      if ((*(byte *)((int)&DAT_1002b880 + uVar3 + 1) & 4) == 0) {
        pbVar2 = param_1;
        if (param_2 == uVar3) break;
      }
      else {
        pbVar2 = param_1 + 1;
        if (param_1[1] == 0) {
          FUN_1000f1af(0x19);
          return (byte *)0x0;
        }
        if (param_2 == CONCAT11(bVar1,param_1[1])) {
          FUN_1000f1af(0x19);
          return param_1;
        }
      }
      param_1 = pbVar2 + 1;
    }
    FUN_1000f1af(0x19);
    pbVar2 = (byte *)(~-(uint)(param_2 != uVar3) & (uint)param_1);
  }
  return pbVar2;
}



// ============================================================
// _memset @ 0x1000c810 88B
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
// FUN_1000c868 @ 0x1000c868 23B
// ============================================================

byte * __cdecl FUN_1000c868(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + 1;
  if ((*(byte *)((int)&DAT_1002b880 + *param_1 + 1) & 4) != 0) {
    pbVar1 = param_1 + 2;
  }
  return pbVar1;
}



// ============================================================
// FUN_1000c880 @ 0x1000c880 664B
// ============================================================

undefined4 * __cdecl FUN_1000c880(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_1000ca37_caseD_2;
        case 3:
          goto switchD_1000ca37_caseD_3;
        }
        goto switchD_1000ca37_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1000ca37_caseD_0;
      case 1:
        goto switchD_1000ca37_caseD_1;
      case 2:
        goto switchD_1000ca37_caseD_2;
      case 3:
        goto switchD_1000ca37_caseD_3;
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
              goto switchD_1000ca37_caseD_2;
            case 3:
              goto switchD_1000ca37_caseD_3;
            }
            goto switchD_1000ca37_caseD_1;
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
              goto switchD_1000ca37_caseD_2;
            case 3:
              goto switchD_1000ca37_caseD_3;
            }
            goto switchD_1000ca37_caseD_1;
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
              goto switchD_1000ca37_caseD_2;
            case 3:
              goto switchD_1000ca37_caseD_3;
            }
            goto switchD_1000ca37_caseD_1;
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
switchD_1000ca37_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_1000ca37_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_1000ca37_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_1000ca37_caseD_0:
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
        goto switchD_1000c8b5_caseD_2;
      case 3:
        goto switchD_1000c8b5_caseD_3;
      }
      goto switchD_1000c8b5_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_1000c8b5_caseD_0;
    case 1:
      goto switchD_1000c8b5_caseD_1;
    case 2:
      goto switchD_1000c8b5_caseD_2;
    case 3:
      goto switchD_1000c8b5_caseD_3;
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
            goto switchD_1000c8b5_caseD_2;
          case 3:
            goto switchD_1000c8b5_caseD_3;
          }
          goto switchD_1000c8b5_caseD_1;
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
            goto switchD_1000c8b5_caseD_2;
          case 3:
            goto switchD_1000c8b5_caseD_3;
          }
          goto switchD_1000c8b5_caseD_1;
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
            goto switchD_1000c8b5_caseD_2;
          case 3:
            goto switchD_1000c8b5_caseD_3;
          }
          goto switchD_1000c8b5_caseD_1;
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
switchD_1000c8b5_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_1000c8b5_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_1000c8b5_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_1000c8b5_caseD_0:
  return param_1;
}



// ============================================================
// FUN_1000cbb5 @ 0x1000cbb5 114B
// ============================================================

byte * __cdecl FUN_1000cbb5(byte *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar5 = (byte *)0x0;
  if (DAT_1002b77c == 0) {
    pbVar5 = (byte *)_strrchr((char *)param_1,param_2);
  }
  else {
    FUN_1000f14e(0x19);
    do {
      bVar4 = *param_1;
      if ((*(byte *)((int)&DAT_1002b880 + bVar4 + 1) & 4) == 0) {
        bVar6 = param_2 == bVar4;
LAB_1000cc10:
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
          goto LAB_1000cc10;
        }
        uVar2 = CONCAT11(bVar4,bVar1);
        bVar4 = bVar1;
        if (param_2 == uVar2) {
          pbVar5 = param_1;
        }
      }
      param_1 = pbVar3 + 1;
    } while (bVar4 != 0);
    FUN_1000f1af(0x19);
  }
  return pbVar5;
}



// ============================================================
// _strlen @ 0x1000cc30 123B
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
    if (((uint)puVar2 & 3) == 0) goto LAB_1000cc50;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_1000cc83:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_1000cc50:
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
  goto LAB_1000cc83;
}



// ============================================================
// FUN_1000ccab @ 0x1000ccab 139B
// ============================================================

int __thiscall FUN_1000ccab(void *this,byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined *puVar6;
  
  while( true ) {
    if (DAT_1002795c < 2) {
      uVar1 = (byte)PTR_DAT_10027750[(uint)*param_1 * 2] & 8;
      this = PTR_DAT_10027750;
    }
    else {
      puVar6 = (undefined *)0x8;
      uVar1 = FUN_10010f08(this,(uint)*param_1,8);
      this = puVar6;
    }
    if (uVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar1 = (uint)*param_1;
  pbVar5 = param_1 + 1;
  if ((uVar1 == 0x2d) || (uVar4 = uVar1, uVar1 == 0x2b)) {
    uVar4 = (uint)*pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar3 = 0;
  while( true ) {
    if (DAT_1002795c < 2) {
      uVar2 = (byte)PTR_DAT_10027750[uVar4 * 2] & 4;
    }
    else {
      puVar6 = (undefined *)0x4;
      uVar2 = FUN_10010f08(this,uVar4,4);
      this = puVar6;
    }
    if (uVar2 == 0) break;
    iVar3 = (uVar4 - 0x30) + iVar3 * 10;
    uVar4 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar1 == 0x2d) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



// ============================================================
// FUN_1000cd40 @ 0x1000cd40 47B
// ============================================================

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000cd40(void)

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
// FUN_1000cd6f @ 0x1000cd6f 43B
// ============================================================

uint * __cdecl FUN_1000cd6f(uint *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  if (param_1 != (uint *)0x0) {
    sVar1 = _strlen((char *)param_1);
    puVar2 = _malloc(sVar1 + 1);
    if (puVar2 != (uint *)0x0) {
      puVar2 = FUN_10011110(puVar2,param_1);
      return puVar2;
    }
  }
  return (uint *)0x0;
}



// ============================================================
// FUN_1000cd9a @ 0x1000cd9a 45B
// ============================================================

void FUN_1000cd9a(void)

{
  if (PTR_FUN_1002523c != (undefined *)0x0) {
    (*(code *)PTR_FUN_1002523c)();
  }
  FUN_1000ce9e((undefined4 *)&DAT_10024074,(undefined4 *)&DAT_10024088);
  FUN_1000ce9e((undefined4 *)&DAT_10024000,(undefined4 *)&DAT_10024070);
  return;
}



// ============================================================
// FUN_1000cde7 @ 0x1000cde7 163B
// ============================================================

void __cdecl FUN_1000cde7(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_1000ce8c();
  if (DAT_1002a2bc == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1002a2b8 = 1;
  DAT_1002a2b4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1002b994 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1002b990 - 4), DAT_1002b994 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1002b994 <= puVar1);
    }
    FUN_1000ce9e((undefined4 *)&DAT_1002408c,(undefined4 *)&DAT_10024094);
  }
  FUN_1000ce9e((undefined4 *)&DAT_10024098,(undefined4 *)&DAT_100240a0);
  if (param_3 == 0) {
    DAT_1002a2bc = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_1000ce95();
  return;
}



// ============================================================
// FUN_1000ce9e @ 0x1000ce9e 26B
// ============================================================

void __cdecl FUN_1000ce9e(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// ============================================================
// _memcmp @ 0x1000cec0 172B
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
          goto LAB_1000cf3a;
        }
      }
      if (uVar2 != 0) {
        uVar5 = *(uint *)_Buf1;
        uVar1 = *(uint *)_Buf2;
        bVar9 = (byte)uVar5 < (byte)uVar1;
        if ((byte)uVar5 != (byte)uVar1) {
LAB_1000cf3a:
          return (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        }
        iVar3 = 0;
        if (uVar2 != 1) {
          bVar6 = (byte)(uVar5 >> 8);
          bVar4 = (byte)(uVar1 >> 8);
          bVar9 = bVar6 < bVar4;
          if (bVar6 != bVar4) goto LAB_1000cf3a;
          iVar3 = 0;
          if (uVar2 != 2) {
            bVar9 = (uVar5 & 0xff0000) < (uVar1 & 0xff0000);
            if ((uVar5 & 0xff0000) != (uVar1 & 0xff0000)) goto LAB_1000cf3a;
            iVar3 = uVar2 - 3;
          }
        }
        return iVar3;
      }
    }
    else {
      if ((_Size & 1) == 0) goto LAB_1000ceed;
      bVar9 = *(byte *)_Buf1 < *(byte *)_Buf2;
      if (*(byte *)_Buf1 != *(byte *)_Buf2) goto LAB_1000cf3a;
      _Buf1 = (void *)((int)_Buf1 + 1);
      _Buf2 = (void *)((int)_Buf2 + 1);
      for (_Size = _Size - 1; _Size != 0; _Size = _Size - 2) {
LAB_1000ceed:
        bVar9 = *(byte *)_Buf1 < *(byte *)_Buf2;
        if ((*(byte *)_Buf1 != *(byte *)_Buf2) ||
           (bVar9 = *(byte *)((int)_Buf1 + 1) < *(byte *)((int)_Buf2 + 1),
           *(byte *)((int)_Buf1 + 1) != *(byte *)((int)_Buf2 + 1))) goto LAB_1000cf3a;
        _Buf2 = (void *)((int)_Buf2 + 2);
        _Buf1 = (void *)((int)_Buf1 + 2);
      }
    }
  }
  return 0;
}



// ============================================================
// FUN_1000cf6c @ 0x1000cf6c 214B
// ============================================================

SIZE_T __cdecl FUN_1000cf6c(undefined *param_1)

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
  puStack_c = &DAT_1001f8b8;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  if (DAT_1002b764 == 3) {
    ExceptionList = &local_14;
    FUN_1000f14e(9);
    local_8 = 0;
    local_20 = (byte *)FUN_1000deed((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_1000cfd6();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1002b764 != 2) goto LAB_1000d02a;
    ExceptionList = &local_14;
    FUN_1000f14e(9);
    local_8 = 1;
    local_2c = (byte *)FUN_1000ec48(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_1000d051();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_1000d02a:
  SVar2 = HeapSize(DAT_1002b760,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}



// ============================================================
// FUN_1000d05a @ 0x1000d05a 115B
// ============================================================

void __cdecl FUN_1000d05a(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_1000d0d6();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10025250;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_1000d0cd();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10025254);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x100253b8);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_1000d0cd();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_1000d0cd();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_1000d0cd();
  *pDVar1 = 0x16;
  return;
}



// ============================================================
// FUN_1000d0df @ 0x1000d0df 280B
// ============================================================

undefined * FUN_1000d0df(undefined *param_1,uint param_2)

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
  puStack_c = &DAT_1001f8d0;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  if (param_2 < 0xffffffe1) {
    if (DAT_1002b764 == 3) {
      ExceptionList = &local_14;
      FUN_1000f14e(9);
      local_8 = 0;
      local_24 = (uint *)FUN_1000deed((int)param_1);
      if (((local_24 != (uint *)0x0) && (local_20 = (undefined *)0x0, param_2 <= DAT_1002b75c)) &&
         (iVar1 = FUN_1000e6f6(local_24,(int)param_1,param_2), iVar1 != 0)) {
        local_20 = param_1;
      }
      local_8 = 0xffffffff;
      FUN_1000d171();
      if (local_24 == (uint *)0x0) {
        puVar2 = (undefined *)FUN_1000d20f();
        return puVar2;
      }
    }
    else {
      if (DAT_1002b764 == 2) {
        if (param_2 == 0) {
          param_2 = 1;
        }
        dwBytes = param_2 + 0xf & 0xfffffff0;
        ExceptionList = &local_14;
        FUN_1000f14e(9);
        local_8 = 1;
        local_2c = (byte *)FUN_1000ec48(param_1,&local_30,(uint *)&local_28);
        if (local_2c != (byte *)0x0) {
          local_20 = (undefined *)0x0;
          if ((dwBytes <= DAT_10027594) &&
             (iVar1 = FUN_1000f010(local_30,local_28,local_2c,param_2 + 0xf >> 4), iVar1 != 0)) {
            local_20 = param_1;
          }
          __local_unwind2((int)&local_14,-1);
          ExceptionList = local_14;
          return local_20;
        }
        local_8 = 0xffffffff;
        FUN_1000d206();
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
      local_20 = HeapReAlloc(DAT_1002b760,0x10,param_1,dwBytes);
    }
  }
  else {
    local_20 = (undefined *)0x0;
  }
  ExceptionList = local_14;
  return local_20;
}



// ============================================================
// FUN_1000d20f @ 0x1000d20f 52B
// ============================================================

undefined4 FUN_1000d20f(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    unaff_ESI = 1;
  }
  pvVar1 = HeapReAlloc(DAT_1002b760,0x10,*(LPVOID *)(unaff_EBP + 8),unaff_ESI + 0xfU & 0xfffffff0);
  *(LPVOID *)(unaff_EBP + -0x1c) = pvVar1;
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}



// ============================================================
// FUN_1000d243 @ 0x1000d243 429B
// ============================================================

undefined4 __cdecl FUN_1000d243(UINT param_1)

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
  
  FUN_1000f14e(0x19);
  CodePage = FUN_1000d3f0(param_1);
  if (CodePage != DAT_1002b768) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_100253c0;
LAB_1000d280:
      if (*pUVar5 != CodePage) goto code_r0x1000d284;
      local_8 = 0;
      puVar15 = &DAT_1002b880;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x100253d0);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_100253b8)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1002b880 + uVar8 + 1);
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
      DAT_1002b77c = 1;
      DAT_1002b768 = CodePage;
      DAT_1002b984 = FUN_1000d43a(CodePage);
      DAT_1002b770 = *(undefined4 *)(iVar12 + 0x100253c4);
      DAT_1002b774 = *(undefined4 *)(iVar12 + 0x100253c8);
      DAT_1002b778 = *(undefined4 *)(iVar12 + 0x100253cc);
      goto LAB_1000d3d4;
    }
    goto LAB_1000d3cf;
  }
  goto LAB_1000d26a;
code_r0x1000d284:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x100254af < (int)pUVar5) goto code_r0x1000d28f;
  goto LAB_1000d280;
code_r0x1000d28f:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1002b984 = 0;
    puVar15 = &DAT_1002b880;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      DAT_1002b77c = 0;
      DAT_1002b768 = CodePage;
    }
    else {
      DAT_1002b768 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1002b880 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1002b880 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1002b984 = FUN_1000d43a(CodePage);
      DAT_1002b77c = 1;
    }
    DAT_1002b770 = 0;
    DAT_1002b774 = 0;
    DAT_1002b778 = 0;
  }
  else {
    if (DAT_1002a2c0 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1000d3e1;
    }
LAB_1000d3cf:
    FUN_1000d46d();
  }
LAB_1000d3d4:
  FUN_1000d496();
LAB_1000d26a:
  uVar14 = 0;
LAB_1000d3e1:
  FUN_1000f1af(0x19);
  return uVar14;
}



// ============================================================
// FUN_1000d3f0 @ 0x1000d3f0 74B
// ============================================================

UINT __cdecl FUN_1000d3f0(UINT param_1)

{
  UINT UVar1;
  bool bVar2;
  
  if (param_1 == 0xfffffffe) {
    DAT_1002a2c0 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000d40a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetOEMCP();
    return UVar1;
  }
  if (param_1 == 0xfffffffd) {
    DAT_1002a2c0 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000d41f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    UVar1 = GetACP();
    return UVar1;
  }
  bVar2 = param_1 == 0xfffffffc;
  if (bVar2) {
    param_1 = DAT_1002a4a0;
  }
  DAT_1002a2c0 = (uint)bVar2;
  return param_1;
}



// ============================================================
// FUN_1000d43a @ 0x1000d43a 51B
// ============================================================

undefined4 __cdecl FUN_1000d43a(int param_1)

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
// FUN_1000d46d @ 0x1000d46d 41B
// ============================================================

void FUN_1000d46d(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1002b880;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1002b768 = 0;
  DAT_1002b77c = 0;
  DAT_1002b984 = 0;
  DAT_1002b770 = 0;
  DAT_1002b774 = 0;
  DAT_1002b778 = 0;
  return;
}



// ============================================================
// FUN_1000d496 @ 0x1000d496 389B
// ============================================================

void FUN_1000d496(void)

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
  
  BVar2 = GetCPInfo(DAT_1002b768,&local_18);
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
    FUN_10010f7d(1,local_118,0x100,local_518,DAT_1002b768,DAT_1002b984,0);
    FUN_1000fcb3(DAT_1002b984,0x100,local_118,0x100,local_218,0x100,DAT_1002b768,0);
    FUN_1000fcb3(DAT_1002b984,0x200,local_118,0x100,local_318,0x100,DAT_1002b768,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1002b880 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000d5a2;
        }
        (&DAT_1002b780)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1002b880 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000d5a2:
        (&DAT_1002b780)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1002b880 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1000d5ec;
        }
        (&DAT_1002b780)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1002b880 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1000d5ec:
        (&DAT_1002b780)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// ============================================================
// FUN_1000d61b @ 0x1000d61b 28B
// ============================================================

void FUN_1000d61b(void)

{
  if (DAT_1002b98c == 0) {
    FUN_1000d243(0xfffffffd);
    DAT_1002b98c = 1;
  }
  return;
}



// ============================================================
// FUN_1000d645 @ 0x1000d645 484B
// ============================================================

int __cdecl FUN_1000d645(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = param_1;
  uVar3 = param_1[5];
  if ((0x44 < (int)uVar3) && ((int)uVar3 < 0x8c)) {
    iVar5 = param_1[4];
    if ((iVar5 < 0) || (0xb < iVar5)) {
      uVar3 = uVar3 + iVar5 / 0xc;
      iVar5 = iVar5 % 0xc;
      param_1[4] = iVar5;
      if (iVar5 < 0) {
        uVar3 = uVar3 - 1;
        param_1[4] = iVar5 + 0xc;
      }
      if ((int)uVar3 < 0x45) {
        return -1;
      }
      if (0x8b < (int)uVar3) {
        return -1;
      }
    }
    iVar5 = *(int *)(&DAT_10027ae0 + param_1[4] * 4);
    if (((uVar3 & 3) == 0) && (1 < param_1[4])) {
      iVar5 = iVar5 + 1;
    }
    iVar4 = uVar3 * 0x16d + -0x63df + iVar5 + ((int)(uVar3 - 1) >> 2);
    iVar1 = param_1[3];
    iVar5 = iVar4 + iVar1;
    if (iVar4 < 0) {
      if ((iVar1 < 0) && (-1 < iVar5)) {
        return -1;
      }
    }
    else if ((-1 < iVar1) && (iVar5 < 0)) {
      return -1;
    }
    iVar4 = iVar5 * 0x18;
    if (iVar5 == 0 || iVar4 / iVar5 == 0x18) {
      iVar1 = param_1[2];
      iVar5 = iVar1 + iVar4;
      if (iVar4 < 0) {
        if ((iVar1 < 0) && (-1 < iVar5)) {
          return -1;
        }
      }
      else if ((-1 < iVar1) && (iVar5 < 0)) {
        return -1;
      }
      iVar4 = iVar5 * 0x3c;
      if (iVar5 == 0 || iVar4 / iVar5 == 0x3c) {
        iVar1 = param_1[1];
        iVar5 = iVar1 + iVar4;
        if (iVar4 < 0) {
          if ((iVar1 < 0) && (-1 < iVar5)) {
            return -1;
          }
        }
        else if ((-1 < iVar1) && (iVar5 < 0)) {
          return -1;
        }
        iVar4 = iVar5 * 0x3c;
        if (iVar5 == 0 || iVar4 / iVar5 == 0x3c) {
          iVar5 = *param_1;
          param_1 = (int *)(iVar5 + iVar4);
          if (iVar4 < 0) {
            if ((iVar5 < 0) && (-1 < (int)param_1)) {
              return -1;
            }
          }
          else if ((-1 < iVar5) && ((int)param_1 < 0)) {
            return -1;
          }
          if (param_2 == 0) {
            piVar2 = FUN_1000d829((int *)&param_1);
            if (piVar2 != (int *)0x0) goto LAB_1000d816;
          }
          else {
            FUN_1001133d();
            param_1 = (int *)((int)param_1 + DAT_100279f8);
            piVar2 = FUN_1000d933((int *)&param_1);
            if (piVar2 != (int *)0x0) {
              iVar5 = piVar6[8];
              if ((0 < iVar5) || ((iVar5 < 0 && (0 < piVar2[8])))) {
                param_1 = (int *)((int)param_1 + DAT_10027a00);
                piVar2 = FUN_1000d933((int *)&param_1);
              }
LAB_1000d816:
              for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
                *piVar6 = *piVar2;
                piVar2 = piVar2 + 1;
                piVar6 = piVar6 + 1;
              }
              return (int)param_1;
            }
          }
        }
      }
    }
  }
  return -1;
}



// ============================================================
// FUN_1000d829 @ 0x1000d829 266B
// ============================================================

int * __cdecl FUN_1000d829(int *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  iVar4 = *param_1;
  bVar1 = false;
  pDVar2 = FUN_1000faa1();
  if (iVar4 < 0) {
    return (int *)0x0;
  }
  if (pDVar2[0x10] == 0) {
    pvVar3 = _malloc(0x24);
    pDVar2[0x10] = (DWORD)pvVar3;
    piVar5 = (int *)&DAT_1002a2e0;
    if (pvVar3 == (void *)0x0) goto LAB_1000d863;
  }
  piVar5 = (int *)pDVar2[0x10];
LAB_1000d863:
  iVar8 = iVar4 % 0x7861f80;
  iVar4 = (iVar4 / 0x7861f80) * 4;
  iVar6 = iVar4 + 0x46;
  iVar9 = iVar8;
  if (0x1e1337f < iVar8) {
    iVar9 = iVar8 + -0x1e13380;
    iVar6 = iVar4 + 0x47;
    if (0x1e1337f < iVar9) {
      iVar9 = iVar8 + -0x3c26700;
      iVar6 = iVar4 + 0x48;
      if (iVar9 < 0x1e28500) {
        bVar1 = true;
      }
      else {
        iVar6 = iVar4 + 0x49;
        iVar9 = iVar8 + -0x5a4ec00;
      }
    }
  }
  piVar5[5] = iVar6;
  piVar10 = (int *)&DAT_10027aac;
  piVar5[7] = iVar9 / 0x15180;
  if (!bVar1) {
    piVar10 = (int *)&DAT_10027ae0;
  }
  iVar4 = 1;
  piVar7 = piVar10;
  while (piVar7 = piVar7 + 1, *piVar7 < piVar5[7]) {
    iVar4 = iVar4 + 1;
  }
  piVar5[4] = iVar4 + -1;
  piVar5[3] = piVar5[7] - piVar10[iVar4 + -1];
  piVar5[6] = (*param_1 / 0x15180 + 4) % 7;
  piVar5[2] = (iVar9 % 0x15180) / 0xe10;
  iVar4 = (iVar9 % 0x15180) % 0xe10;
  piVar5[1] = iVar4 / 0x3c;
  piVar5[8] = 0;
  *piVar5 = iVar4 % 0x3c;
  return piVar5;
}



// ============================================================
// FUN_1000d933 @ 0x1000d933 352B
// ============================================================

int * __cdecl FUN_1000d933(int *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  
  piVar2 = param_1;
  if (*param_1 < 0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_1001133d();
    iVar3 = *piVar2;
    if ((iVar3 < 0x3f481) || (0x7ffc0b7e < iVar3)) {
      piVar2 = FUN_1000d829(piVar2);
      bVar1 = FUN_100115f2(piVar2);
      iVar3 = *piVar2;
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        iVar3 = iVar3 - DAT_10027a00;
      }
      param_1 = (int *)(iVar3 - DAT_100279f8);
      iVar3 = (int)param_1 % 0x3c;
      *piVar2 = iVar3;
      if (iVar3 < 0) {
        *piVar2 = iVar3 + 0x3c;
        param_1 = param_1 + -0xf;
      }
      param_1 = (int *)((int)param_1 / 0x3c + piVar2[1]);
      iVar3 = (int)param_1 % 0x3c;
      piVar2[1] = iVar3;
      if (iVar3 < 0) {
        piVar2[1] = iVar3 + 0x3c;
        param_1 = param_1 + -0xf;
      }
      param_1 = (int *)((int)param_1 / 0x3c + piVar2[2]);
      iVar3 = (int)param_1 % 0x18;
      piVar2[2] = iVar3;
      if (iVar3 < 0) {
        piVar2[2] = iVar3 + 0x18;
        param_1 = param_1 + -6;
      }
      iVar3 = (int)param_1 / 0x18;
      if (iVar3 < 1) {
        if (-1 < iVar3) {
          return piVar2;
        }
        piVar2[6] = (piVar2[6] + 7 + iVar3) % 7;
        piVar2[3] = piVar2[3] + iVar3;
        if (piVar2[3] < 1) {
          piVar2[5] = piVar2[5] + -1;
          piVar2[3] = piVar2[3] + 0x1f;
          piVar2[7] = 0x16c;
          piVar2[4] = 0xb;
          return piVar2;
        }
      }
      else {
        piVar2[6] = (piVar2[6] + iVar3) % 7;
        piVar2[3] = piVar2[3] + iVar3;
      }
      piVar2[7] = piVar2[7] + iVar3;
    }
    else {
      param_1 = (int *)(iVar3 - DAT_100279f8);
      piVar2 = FUN_1000d829((int *)&param_1);
      if ((DAT_100279fc != 0) && (bVar1 = FUN_100115f2(piVar2), CONCAT31(extraout_var,bVar1) != 0))
      {
        param_1 = (int *)((int)param_1 - DAT_10027a00);
        piVar2 = FUN_1000d829((int *)&param_1);
        piVar2[8] = 1;
      }
    }
  }
  return piVar2;
}



// ============================================================
// FUN_1000db59 @ 0x1000db59 27B
// ============================================================

void FUN_1000db59(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// ============================================================
// FUN_1000db74 @ 0x1000db74 86B
// ============================================================

void FUN_1000db74(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1001fa10;
  puStack_10 = &LAB_1000da9c;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_1000faa1();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_1000faa1();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_100118ff();
  return;
}



// ============================================================
// FUN_1000dbd5 @ 0x1000dbd5 79B
// ============================================================

void FUN_1000dbd5(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1001fa28;
  puStack_10 = &LAB_1000da9c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10025564 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10025564)();
  }
  local_8 = 0xffffffff;
  FUN_1000db74();
  return;
}



// ============================================================
// FUN_1000dc2b @ 0x1000dc2b 45B
// ============================================================

void __cdecl FUN_1000dc2b(undefined4 *param_1)

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
// FUN_1000dc58 @ 0x1000dc58 328B
// ============================================================

int FUN_1000dc58(void)

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
  
  FUN_1000cd40();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x4e;
    aCStackY_18[1] = -0x24;
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
      aCStackY_18[0] = -0x10;
      aCStackY_18[1] = -0x24;
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = '\x12';
        aCStackY_18[1] = -0x23;
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
        aCStackY_18[0] = 'x';
        aCStackY_18[1] = -0x23;
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_10011916(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_1000dc2b((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// ============================================================
// FUN_1000dda0 @ 0x1000dda0 93B
// ============================================================

undefined4 __cdecl FUN_1000dda0(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1002b760 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1002b760 != (HANDLE)0x0) {
    DAT_1002b764 = FUN_1000dc58();
    if (DAT_1002b764 == 3) {
      ppuVar1 = (undefined **)FUN_1000dea5(0x3f8);
    }
    else {
      if (DAT_1002b764 != 2) {
        return 1;
      }
      ppuVar1 = FUN_1000e9ec();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1002b760);
  }
  return 0;
}



// ============================================================
// FUN_1000ddfd @ 0x1000ddfd 168B
// ============================================================

void FUN_1000ddfd(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1002b764 == 3) {
    iVar1 = 0;
    if (0 < DAT_1002b754) {
      puVar2 = (undefined4 *)((int)DAT_1002b758 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1002b760,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1002b754);
    }
    HeapFree(DAT_1002b760,0,DAT_1002b758);
  }
  else if (DAT_1002b764 == 2) {
    ppuVar3 = &PTR_LOOP_10025570;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10025570);
  }
  HeapDestroy(DAT_1002b760);
  return;
}



// ============================================================
// FUN_1000dea5 @ 0x1000dea5 72B
// ============================================================

undefined4 __cdecl FUN_1000dea5(undefined4 param_1)

{
  DAT_1002b758 = HeapAlloc(DAT_1002b760,0,0x140);
  if (DAT_1002b758 == (LPVOID)0x0) {
    return 0;
  }
  DAT_1002b750 = 0;
  DAT_1002b754 = 0;
  DAT_1002b74c = DAT_1002b758;
  DAT_1002b75c = param_1;
  DAT_1002b744 = 0x10;
  return 1;
}



// ============================================================
// FUN_1000deed @ 0x1000deed 43B
// ============================================================

uint __cdecl FUN_1000deed(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1002b758;
  while( true ) {
    if (DAT_1002b758 + DAT_1002b754 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// ============================================================
// FUN_1000df18 @ 0x1000df18 809B
// ============================================================

void __cdecl FUN_1000df18(uint *param_1,int param_2)

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
      if (DAT_1002b750 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1002b748 * 0x8000 + DAT_1002b750[3]),0x8000,0x4000);
        DAT_1002b750[2] = DAT_1002b750[2] | 0x80000000U >> ((byte)DAT_1002b748 & 0x1f);
        *(undefined4 *)(DAT_1002b750[4] + 0xc4 + DAT_1002b748 * 4) = 0;
        *(char *)(DAT_1002b750[4] + 0x43) = *(char *)(DAT_1002b750[4] + 0x43) + -1;
        if (*(char *)(DAT_1002b750[4] + 0x43) == '\0') {
          DAT_1002b750[1] = DAT_1002b750[1] & 0xfffffffe;
        }
        if (DAT_1002b750[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1002b750[3],0,0x8000);
          HeapFree(DAT_1002b760,0,(LPVOID)DAT_1002b750[4]);
          FUN_1000c880(DAT_1002b750,DAT_1002b750 + 5,
                       (DAT_1002b754 * 0x14 - (int)DAT_1002b750) + -0x14 + DAT_1002b758);
          DAT_1002b754 = DAT_1002b754 + -1;
          if (DAT_1002b750 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1002b74c = DAT_1002b758;
        }
      }
      DAT_1002b750 = param_1;
      DAT_1002b748 = uVar14;
    }
  }
  return;
}



// ============================================================
// FUN_1000e241 @ 0x1000e241 777B
// ============================================================

int * __cdecl FUN_1000e241(uint *param_1)

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
  
  puVar8 = DAT_1002b758 + DAT_1002b754 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1002b74c;
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
  puVar11 = DAT_1002b758;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1002b74c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1002b74c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1002b758;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1002b74c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1002b74c) && (param_1 = FUN_1000e54a(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_1000e5fb((int)param_1);
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
  DAT_1002b74c = param_1;
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
    if (iVar9 == 0) goto LAB_1000e507;
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
LAB_1000e507:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1002b750)) && (local_8 == DAT_1002b748)) {
    DAT_1002b750 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// ============================================================
// FUN_1000e54a @ 0x1000e54a 177B
// ============================================================

undefined4 * FUN_1000e54a(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1002b754 == DAT_1002b744) {
    pvVar2 = HeapReAlloc(DAT_1002b760,0,DAT_1002b758,(DAT_1002b744 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1002b744 = DAT_1002b744 + 0x10;
    DAT_1002b758 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1002b758 + DAT_1002b754 * 0x14);
  pvVar2 = HeapAlloc(DAT_1002b760,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1002b754 = DAT_1002b754 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1002b760,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// ============================================================
// FUN_1000e5fb @ 0x1000e5fb 251B
// ============================================================

int __cdecl FUN_1000e5fb(int param_1)

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
// FUN_1000e6f6 @ 0x1000e6f6 758B
// ============================================================

undefined4 __cdecl FUN_1000e6f6(uint *param_1,int param_2,int param_3)

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
// FUN_1000e9ec @ 0x1000e9ec 324B
// ============================================================

undefined ** FUN_1000e9ec(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10025580 == -1) {
    lpMem = &PTR_LOOP_10025570;
  }
  else {
    lpMem = HeapAlloc(DAT_1002b760,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10025570) {
        if (PTR_LOOP_10025570 == (undefined *)0x0) {
          PTR_LOOP_10025570 = (undefined *)&PTR_LOOP_10025570;
        }
        if (PTR_LOOP_10025574 == (undefined *)0x0) {
          PTR_LOOP_10025574 = (undefined *)&PTR_LOOP_10025570;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10025570;
        lpMem[1] = PTR_LOOP_10025574;
        PTR_LOOP_10025574 = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_10025570) {
    HeapFree(DAT_1002b760,0,lpMem);
  }
  return (undefined **)0x0;
}



// ============================================================
// FUN_1000eb30 @ 0x1000eb30 86B
// ============================================================

void __cdecl FUN_1000eb30(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10027590 == param_1) {
    PTR_LOOP_10027590 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10025570) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1002b760,0,param_1);
    return;
  }
  DAT_10025580 = 0xffffffff;
  return;
}



// ============================================================
// FUN_1000eb86 @ 0x1000eb86 194B
// ============================================================

void __cdecl FUN_1000eb86(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_10025574;
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
            DAT_1002a304 = DAT_1002a304 + -1;
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
          FUN_1000eb30(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_10025574) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// ============================================================
// FUN_1000ec48 @ 0x1000ec48 87B
// ============================================================

int __cdecl FUN_1000ec48(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10025570;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10025570) {
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
// FUN_1000ec9f @ 0x1000ec9f 69B
// ============================================================

void __cdecl FUN_1000ec9f(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1002a304 = DAT_1002a304 + 1, DAT_1002a304 == 0x20)) {
    FUN_1000eb86(0x10);
  }
  return;
}



// ============================================================
// FUN_1000ece4 @ 0x1000ece4 520B
// ============================================================

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_1000ece4(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_10027590;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_1000eeec(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_1000edaf;
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
          piVar5 = (int *)FUN_1000eeec(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_1000edaf:
            PTR_LOOP_10027590 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_10027590) {
      ppuVar9 = &PTR_LOOP_10025570;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_10025570) {
          ppuVar9 = FUN_1000e9ec();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10027590 = (undefined *)ppuVar9;
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
      PTR_LOOP_10027590 = (undefined *)ppuVar9;
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
// FUN_1000eeec @ 0x1000eeec 292B
// ============================================================

int __cdecl FUN_1000eeec(int *param_1,uint param_2,uint param_3)

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
          goto LAB_1000efff;
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
LAB_1000efff:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// ============================================================
// FUN_1000f010 @ 0x1000f010 169B
// ============================================================

undefined4 __cdecl FUN_1000f010(int param_1,int *param_2,byte *param_3,uint param_4)

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
// FUN_1000f0b9 @ 0x1000f0b9 41B
// ============================================================

void FUN_1000f0b9(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100275dc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100275cc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100275bc);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002759c);
  return;
}



// ============================================================
// FUN_1000f0e2 @ 0x1000f0e2 108B
// ============================================================

void FUN_1000f0e2(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10027598;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100275dc)) && (ppuVar1 != &PTR_DAT_100275cc)) &&
       ((ppuVar1 != &PTR_DAT_100275bc && (ppuVar1 != &PTR_DAT_1002759c)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_1000b70f(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10027658);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100275bc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100275cc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100275dc);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1002759c);
  return;
}



// ============================================================
// FUN_1000f14e @ 0x1000f14e 97B
// ============================================================

void __cdecl FUN_1000f14e(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10027598 + param_1;
  if ((&DAT_10027598)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_1000f14e(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_1000b70f((undefined *)lpCriticalSection);
    }
    FUN_1000f1af(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// ============================================================
// FUN_1000f1af @ 0x1000f1af 21B
// ============================================================

void __cdecl FUN_1000f1af(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10027598)[param_1]);
  return;
}



// ============================================================
// FUN_1000f1c4 @ 0x1000f1c4 155B
// ============================================================

undefined4 __cdecl
FUN_1000f1c4(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_1000dbd5();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_1000f25f(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_1000f519((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// ============================================================
// FUN_1000f25f @ 0x1000f25f 435B
// ============================================================

void __cdecl
FUN_1000f25f(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
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
    FUN_1000dbd5();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_1000faa1();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_1000faa1();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_1000faa1();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_10011b32(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_1000dbd5();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_1000f3e7;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_1000dbd5();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_1000bae5(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_1000f93b((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_1000f4bc(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1000f5b7(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                iVar5 = local_14;
                goto LAB_1000f3c7;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_1000f3c7:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_1000f3e7:
  if (param_6 == '\0') {
    FUN_1000f412(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_1000db74();
  return;
}



// ============================================================
// FUN_1000f412 @ 0x1000f412 170B
// ============================================================

void __cdecl
FUN_1000f412(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_1000faa1();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_1000b9ba(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_1000bae5(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1000f5b7(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



// ============================================================
// FUN_1000f4bc @ 0x1000f4bc 93B
// ============================================================

undefined4 __cdecl FUN_1000f4bc(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_1000f513:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1000f4ed:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_1000f513;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1000f4ed;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// FUN_1000f519 @ 0x1000f519 132B
// ============================================================

void __cdecl FUN_1000f519(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1001fa70;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_1000dbd5();
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
// FUN_1000f5b7 @ 0x1000f5b7 123B
// ============================================================

void __cdecl
FUN_1000f5b7(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_1000f777((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_1000b8bc(param_10,param_1);
  FUN_1000f519((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_1000f632((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000b87a(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// ============================================================
// FUN_1000f632 @ 0x1000f632 165B
// ============================================================

undefined4 __cdecl
FUN_1000f632(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1001fa80;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1000faa1();
  FUN_1000faa1();
  pDVar1 = FUN_1000faa1();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_1000faa1();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_1000b941(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_1000f6ff();
  ExceptionList = local_14;
  return uVar2;
}



// ============================================================
// FUN_1000f6ff @ 0x1000f6ff 78B
// ============================================================

void FUN_1000f6ff(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_1000faa1();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_1000faa1();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_1000f93b((int)unaff_EDI);
  }
  return;
}



// ============================================================
// FUN_1000f777 @ 0x1000f777 440B
// ============================================================

void __cdecl FUN_1000f777(int param_1,int param_2,byte *param_3,byte *param_4)

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
  
  puStack_c = &DAT_1001fa98;
  puStack_10 = &LAB_1000da9c;
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
        bVar2 = FUN_10011b32(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_10011b4e(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_1000f9a2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1000c880(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_10011b32(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_10011b4e(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_10011b6a(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_1000f9a2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_1000b8b5(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_1000f9a2(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_1000b8ae(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_10011b32(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_10011b4e(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_1000c880(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_1000f805;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_10011b32(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_10011b4e(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_1000f805:
      iVar3 = FUN_1000f9a2(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_1000dbd5();
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_1000f93b @ 0x1000f93b 86B
// ============================================================

void __cdecl FUN_1000f93b(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1001faa8;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_1000b8ae(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_1000f9a2 @ 0x1000f9a2 35B
// ============================================================

int __cdecl FUN_1000f9a2(int param_1,int *param_2)

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
// __CallSettingFrame@12 @ 0x1000f9d0 76B
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
// FUN_1000fa1c @ 0x1000fa1c 84B
// ============================================================

undefined4 FUN_1000fa1c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000f0b9();
  DAT_10027660 = TlsAlloc();
  if (DAT_10027660 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10011200(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10027660,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000fa8e((int)lpTlsValue);
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
// FUN_1000fa70 @ 0x1000fa70 30B
// ============================================================

void FUN_1000fa70(void)

{
  FUN_1000f0e2();
  if (DAT_10027660 != 0xffffffff) {
    TlsFree(DAT_10027660);
    DAT_10027660 = 0xffffffff;
  }
  return;
}



// ============================================================
// FUN_1000faa1 @ 0x1000faa1 103B
// ============================================================

DWORD * FUN_1000faa1(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10027660);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10011200(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10027660,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1000fa8e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_1000fafc;
      }
    }
    __amsg_exit(0x10);
  }
LAB_1000fafc:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// ============================================================
// FUN_1000fb08 @ 0x1000fb08 160B
// ============================================================

void __cdecl FUN_1000fb08(undefined *param_1)

{
  if (DAT_10027660 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10027660), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_1000b70f(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_1000b70f(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_1000b70f(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_1000b70f(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_1000b70f(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_1000b70f(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10027970) {
        FUN_1000b70f(*(undefined **)(param_1 + 0x50));
      }
      FUN_1000b70f(param_1);
    }
    TlsSetValue(DAT_10027660,(LPVOID)0x0);
    return;
  }
  return;
}



// ============================================================
// _strcmp @ 0x1000fbb0 129B
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
      if (bVar4 != *_Str2) goto LAB_1000fbf4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1000fbc0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_1000fbf4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_1000fbf4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1000fbc0:
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
LAB_1000fbf4:
  return (uint)bVar5 * -2 + 1;
}



// ============================================================
// FUN_1000fc34 @ 0x1000fc34 27B
// ============================================================

undefined4 __cdecl FUN_1000fc34(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1002a36c != (code *)0x0) {
    iVar1 = (*DAT_1002a36c)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// ============================================================
// FUN_1000fc4f @ 0x1000fc4f 70B
// ============================================================

int FUN_1000fc4f(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_1000db74();
    return iVar3;
  }
  if ((DAT_1002a370 != (FARPROC)0x0) &&
     (bVar2 = FUN_10011b6a(DAT_1002a370), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_1002a370)(param_1);
    return iVar3;
  }
  return 0;
}



// ============================================================
// FUN_1000fcb3 @ 0x1000fcb3 511B
// ============================================================

int __cdecl
FUN_1000fcb3(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1001fac0;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1002a374 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1002a374 = 2;
    }
    else {
      DAT_1002a374 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000fed7(param_3,param_4);
  }
  if (DAT_1002a374 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1002a374 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1002a4a0;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_1000cd40();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_1000cd40();
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
// FUN_1000fed7 @ 0x1000fed7 43B
// ============================================================

int __cdecl FUN_1000fed7(char *param_1,int param_2)

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
// FUN_1000ff10 @ 0x1000ff10 208B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000ff10(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1002b628;
  if (DAT_1002a490 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000ff5e;
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
LAB_1000ff5e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1002b628 = _DAT_1002b628 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1002b624;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1002b628 = iVar2;
      FUN_1000f14e(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000ffbf;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_10011bf1(this,uVar8);
      uVar7 = FUN_10011bf1(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000ffbf:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1002b628 = _DAT_1002b628 + -1;
      UNLOCK();
    }
    else {
      FUN_1000f1af(0x13);
    }
  }
  return uVar7;
}



// ============================================================
// FUN_1000fff2 @ 0x1000fff2 62B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000fff2(void)

{
  if (_DAT_1001fad8 < _DAT_1001fae0 - (_DAT_1001fae0 / _DAT_1001fae8) * _DAT_1001fae8) {
    return 1;
  }
  return 0;
}



// ============================================================
// FUN_10010030 @ 0x10010030 41B
// ============================================================

void FUN_10010030(void)

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
  FUN_1000fff2();
  return;
}



// ============================================================
// FUN_10010059 @ 0x10010059 90B
// ============================================================

void __cdecl FUN_10010059(char *param_1)

{
  char cVar1;
  char cVar2;
  undefined *this;
  uint uVar3;
  undefined *puVar4;
  
  this = (undefined *)(int)*param_1;
  uVar3 = FUN_10011b82((uint)this);
  if (uVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_1002795c < 2) {
        uVar3 = (byte)PTR_DAT_10027750[*param_1 * 2] & 4;
        this = PTR_DAT_10027750;
      }
      else {
        puVar4 = (undefined *)0x4;
        uVar3 = FUN_10010f08(this,(int)*param_1,4);
        this = puVar4;
      }
    } while (uVar3 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_10027960;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}



// ============================================================
// __fassign @ 0x10010119 62B
// ============================================================

/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_100121b4(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_100121e1(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}



// ============================================================
// FUN_10010157 @ 0x10010157 97B
// ============================================================

undefined1 * __cdecl FUN_10010157(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_2c [6];
  int local_14 [4];
  
  FUN_10012285((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),local_14,local_2c);
  FUN_1001220e(param_2 + (uint)(0 < param_3) + (uint)(local_14[0] == 0x2d),param_3 + 1,(int)local_14
              );
  FUN_100101b8(param_2,param_3,param_4,local_14,'\0');
  return param_2;
}



// ============================================================
// FUN_100101b8 @ 0x100101b8 194B
// ============================================================

undefined1 * __cdecl
FUN_100101b8(undefined1 *param_1,int param_2,int param_3,int *param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_5 != '\0') {
    FUN_1001045a(param_1 + (*param_4 == 0x2d),(uint)(0 < param_2));
  }
  puVar1 = param_1;
  if (*param_4 == 0x2d) {
    *param_1 = 0x2d;
    puVar1 = param_1 + 1;
  }
  puVar2 = puVar1;
  if (0 < param_2) {
    puVar2 = puVar1 + 1;
    *puVar1 = puVar1[1];
    *puVar2 = DAT_10027960;
  }
  puVar3 = FUN_10011110((uint *)(puVar2 + param_2 + (uint)(param_5 == '\0')),(uint *)"e+000");
  if (param_3 != 0) {
    *(undefined1 *)puVar3 = 0x45;
  }
  if (*(char *)param_4[3] != '0') {
    iVar4 = param_4[1] + -1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      *(undefined1 *)((int)puVar3 + 1) = 0x2d;
    }
    if (99 < iVar4) {
      *(char *)((int)puVar3 + 2) = *(char *)((int)puVar3 + 2) + (char)(iVar4 / 100);
      iVar4 = iVar4 % 100;
    }
    if (9 < iVar4) {
      *(char *)((int)puVar3 + 3) = *(char *)((int)puVar3 + 3) + (char)(iVar4 / 10);
      iVar4 = iVar4 % 10;
    }
    *(char *)(puVar3 + 1) = (char)puVar3[1] + (char)iVar4;
  }
  return param_1;
}



// ============================================================
// FUN_1001027a @ 0x1001027a 85B
// ============================================================

char * __cdecl FUN_1001027a(undefined8 *param_1,char *param_2,size_t param_3)

{
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10012285((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  FUN_1001220e(param_2 + (local_14 == 0x2d),local_10 + param_3,(int)&local_14);
  FUN_100102cf(param_2,param_3,&local_14,'\0');
  return param_2;
}



// ============================================================
// FUN_100102cf @ 0x100102cf 167B
// ============================================================

char * __cdecl FUN_100102cf(char *param_1,size_t param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = param_3[1];
  if ((param_4 != '\0') && (iVar1 - 1U == param_2)) {
    iVar2 = *param_3;
    param_1[(uint)(iVar2 == 0x2d) + (iVar1 - 1U)] = '0';
    (param_1 + (uint)(iVar2 == 0x2d) + (iVar1 - 1U))[1] = '\0';
  }
  pcVar3 = param_1;
  if (*param_3 == 0x2d) {
    *param_1 = '-';
    pcVar3 = param_1 + 1;
  }
  if (param_3[1] < 1) {
    FUN_1001045a(pcVar3,1);
    *pcVar3 = '0';
    pcVar3 = pcVar3 + 1;
  }
  else {
    pcVar3 = pcVar3 + param_3[1];
  }
  if (0 < (int)param_2) {
    FUN_1001045a(pcVar3,1);
    *pcVar3 = DAT_10027960;
    iVar1 = param_3[1];
    if (iVar1 < 0) {
      if ((param_4 != '\0') || (-iVar1 <= (int)param_2)) {
        param_2 = -iVar1;
      }
      FUN_1001045a(pcVar3 + 1,param_2);
      _memset(pcVar3 + 1,0x30,param_2);
    }
  }
  return param_1;
}



// ============================================================
// FUN_10010376 @ 0x10010376 147B
// ============================================================

void __cdecl FUN_10010376(undefined8 *param_1,char *param_2,size_t param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  uint local_2c [6];
  int local_14;
  int local_10;
  
  FUN_10012285((int)*param_1,(int)((ulonglong)*param_1 >> 0x20),&local_14,local_2c);
  iVar1 = local_10 + -1;
  FUN_1001220e(param_2 + (local_14 == 0x2d),param_3,(int)&local_14);
  local_10 = local_10 + -1;
  if ((local_10 < -4) || ((int)param_3 <= local_10)) {
    FUN_100101b8(param_2,param_3,param_4,&local_14,'\x01');
  }
  else {
    pcVar2 = param_2 + (local_14 == 0x2d);
    if (iVar1 < local_10) {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + 1;
      } while (*pcVar3 != '\0');
      pcVar3[-1] = '\0';
    }
    FUN_100102cf(param_2,param_3,&local_14,'\x01');
  }
  return;
}



// ============================================================
// __cfltcvt @ 0x10010409 81B
// ============================================================

/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  char *pcVar1;
  undefined1 *puVar2;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    puVar2 = FUN_10010157(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      pcVar1 = FUN_1001027a(arg,buffer,format);
      return (errno_t)pcVar1;
    }
    puVar2 = (undefined1 *)FUN_10010376(arg,buffer,format,precision);
  }
  return (errno_t)puVar2;
}



// ============================================================
// FUN_1001045a @ 0x1001045a 37B
// ============================================================

void __cdecl FUN_1001045a(char *param_1,int param_2)

{
  size_t sVar1;
  
  if (param_2 != 0) {
    sVar1 = _strlen(param_1);
    FUN_1000c880((undefined4 *)(param_1 + param_2),(undefined4 *)param_1,sVar1 + 1);
  }
  return;
}



// ============================================================
// FUN_1001047f @ 0x1001047f 444B
// ============================================================

void FUN_1001047f(void)

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
  DAT_1002b740 = 0x20;
  DAT_1002b640 = puVar2;
  for (; puVar2 < DAT_1002b640 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1002b740 < (int)UVar8) {
      puVar2 = &DAT_1002b644;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1002b740;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1002b740 = DAT_1002b740 + 0x20;
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
      } while ((int)DAT_1002b740 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1002b640)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1002b640 + iVar6 * 9;
    if (DAT_1002b640[iVar6 * 9] == -1) {
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
          goto LAB_10010624;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_10010624:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1002b740);
      return;
    }
  } while( true );
}



// ============================================================
// FUN_1001063b @ 0x1001063b 84B
// ============================================================

void FUN_1001063b(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1002b640;
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
      FUN_1000b70f((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1002b740);
  return;
}



// ============================================================
// FUN_1001068f @ 0x1001068f 185B
// ============================================================

void FUN_1001068f(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1002b98c == 0) {
    FUN_1000d61b();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1002a26c; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  DAT_1002a29c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1002a26c;
  puVar6 = DAT_1002a26c;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10011110((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_1000b70f((undefined *)DAT_1002a26c);
  DAT_1002a26c = (uint *)0x0;
  *puVar3 = 0;
  DAT_1002b988 = 1;
  return;
}



// ============================================================
// FUN_10010748 @ 0x10010748 153B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010748(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1002b98c == 0) {
    FUN_1000d61b();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1002a378,0x104);
  _DAT_1002a2ac = &DAT_1002a378;
  pbVar2 = &DAT_1002a378;
  if (*DAT_1002b998 != 0) {
    pbVar2 = DAT_1002b998;
  }
  FUN_100107e1(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100107e1(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1002a294 = puVar1;
  _DAT_1002a290 = local_8 + -1;
  return;
}



// ============================================================
// FUN_100107e1 @ 0x100107e1 436B
// ============================================================

void __cdecl FUN_100107e1(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1002b880 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1002b880 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_1001088c;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_1001088c:
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
          if ((*(byte *)((int)&DAT_1002b880 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1002b880 + bVar1 + 1) & 4) != 0) {
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
// FUN_10010995 @ 0x10010995 306B
// ============================================================

LPSTR FUN_10010995(void)

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
  if (DAT_1002a47c == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1002a47c = 1;
LAB_100109ec:
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
        FUN_1000b70f(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1002a47c = 2;
  }
  else {
    if (DAT_1002a47c == 1) goto LAB_100109ec;
    if (DAT_1002a47c != 2) {
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
    FUN_1000c440((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// ============================================================
// FUN_10010ac7 @ 0x10010ac7 57B
// ============================================================

void FUN_10010ac7(void)

{
  if ((DAT_1002a274 == 1) || ((DAT_1002a274 == 0 && (DAT_1002a278 == 1)))) {
    FUN_10010b00(0xfc);
    if (DAT_1002a480 != (code *)0x0) {
      (*DAT_1002a480)();
    }
    FUN_10010b00(0xff);
  }
  return;
}



// ============================================================
// FUN_10010b00 @ 0x10010b00 339B
// ============================================================

void __cdecl FUN_10010b00(DWORD param_1)

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
  pDVar2 = &DAT_100276b0;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10027740);
  if (param_1 == (&DAT_100276b0)[iVar5 * 2]) {
    if ((DAT_1002a274 == 1) || ((DAT_1002a274 == 0 && (DAT_1002a278 == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x100276b4);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10011110(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10011110(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10011120(local_a4,_Dest);
      FUN_10011120(local_a4,(uint *)&DAT_1001fddc);
      FUN_10011120(local_a4,*(uint **)(iVar5 * 8 + 0x100276b4));
      auStackY_1e3._3_4_ = 0x10010c24;
      FUN_100123a0(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// ============================================================
// _strchr @ 0x10010c70 193B
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
// FUN_10010d30 @ 0x10010d30 58B
// ============================================================

byte * __cdecl FUN_10010d30(byte *param_1,byte *param_2)

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
// __strrev @ 0x10010d70 48B
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
// _strstr @ 0x10010da0 128B
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
LAB_10010e13:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_10010e13;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// ============================================================
// FUN_10010e20 @ 0x10010e20 62B
// ============================================================

int __cdecl FUN_10010e20(byte *param_1,byte *param_2)

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
  } while ((abStack_28[(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0);
  return iVar2;
}



// ============================================================
// FUN_10010e60 @ 0x10010e60 62B
// ============================================================

int __cdecl FUN_10010e60(byte *param_1,byte *param_2)

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
// _strrchr @ 0x10010ea0 39B
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
// _strncmp @ 0x10010ed0 56B
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
// FUN_10010f08 @ 0x10010f08 117B
// ============================================================

uint __thiscall FUN_10010f08(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_10027750 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_10027750[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_10010f7d(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// ============================================================
// FUN_10010f7d @ 0x10010f7d 318B
// ============================================================

BOOL __cdecl
FUN_10010f7d(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1001fe90;
  puStack_10 = &LAB_1000da9c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1002a484;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1002a484 == 0) {
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
  DAT_1002a484 = iVar3;
  if (DAT_1002a484 != 2) {
    if (DAT_1002a484 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1002a4a0;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_1000cd40();
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
    param_6 = DAT_1002a490;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// ============================================================
// FUN_10011120 @ 0x10011120 224B
// ============================================================

uint * __cdecl FUN_10011120(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1001113c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1001116f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1001118b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1001113c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1001118b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1001118b;
    }
  }
LAB_1001116f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1001118b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_100111f8:
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
    if (bVar1 == 0) goto LAB_100111f8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// ============================================================
// FUN_10011200 @ 0x10011200 289B
// ============================================================

int * __cdecl FUN_10011200(int param_1,int param_2)

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
  puStack_c = &DAT_1001fea0;
  puStack_10 = &LAB_1000da9c;
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
      if (DAT_1002b764 == 3) {
        if (puVar2 <= DAT_1002b75c) {
          FUN_1000f14e(9);
          local_8 = 0;
          local_24 = FUN_1000e241(puVar2);
          local_8 = 0xffffffff;
          FUN_10011299();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_100112ed;
LAB_100112dc:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_100112e8:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1002b764 != 2) || (DAT_10027594 < puVar3)) goto LAB_100112e8;
        FUN_1000f14e(9);
        local_8 = 1;
        local_24 = FUN_1000ece4((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_10011322();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_100112dc;
      }
LAB_100112ed:
      local_24 = HeapAlloc(DAT_1002b760,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1002a368 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1000fc34(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// ============================================================
// FUN_1001133d @ 0x1001133d 46B
// ============================================================

void FUN_1001133d(void)

{
  if (DAT_1002a560 == 0) {
    FUN_1000f14e(0xb);
    if (DAT_1002a560 == 0) {
      FUN_1001136b();
      DAT_1002a560 = DAT_1002a560 + 1;
    }
    FUN_1000f1af(0xb);
  }
  return;
}



// ============================================================
// FUN_1001136b @ 0x1001136b 647B
// ============================================================

void FUN_1001136b(void)

{
  char cVar1;
  char cVar2;
  uint *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  void *this;
  uint *_Source;
  int local_8;
  
  FUN_1000f14e(0xc);
  DAT_10027aa0 = 0xffffffff;
  DAT_10027a90 = 0xffffffff;
  DAT_1002a4a8 = 0;
  _Str1 = (uint *)FUN_100129e5("TZ");
  if (_Str1 == (uint *)0x0) {
    FUN_1000f1af(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1002a4b0);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_100279f8 = (void *)(DAT_1002a4b0 * 0x3c);
    DAT_1002a4a8 = 1;
    if (DAT_1002a4f6 != 0) {
      DAT_100279f8 = (void *)((int)DAT_100279f8 + DAT_1002a504 * 0x3c);
    }
    if ((DAT_1002a54a == 0) || (DAT_1002a558 == 0)) {
      DAT_100279fc = 0;
      DAT_10027a00 = 0;
    }
    else {
      DAT_100279fc = 1;
      DAT_10027a00 = (DAT_1002a558 - DAT_1002a504) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_1002a4a0,0x220,(LPCWSTR)&DAT_1002a4b4,-1,PTR_DAT_10027a84,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_10027a84 = 0;
    }
    else {
      PTR_DAT_10027a84[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_1002a4a0,0x220,(LPCWSTR)&DAT_1002a508,-1,PTR_DAT_10027a88,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_10027a88[0x3f] = 0;
      return;
    }
LAB_100115dc:
    *PTR_DAT_10027a88 = 0;
  }
  else {
    if (((char)*_Str1 != '\0') &&
       ((DAT_1002a55c == (uint *)0x0 ||
        (iVar4 = _strcmp((char *)_Str1,(char *)DAT_1002a55c), iVar4 != 0)))) {
      FUN_1000b70f((undefined *)DAT_1002a55c);
      sVar5 = _strlen((char *)_Str1);
      DAT_1002a55c = _malloc(sVar5 + 1);
      if (DAT_1002a55c != (uint *)0x0) {
        FUN_10011110(DAT_1002a55c,_Str1);
        FUN_1000f1af(0xc);
        _strncpy(PTR_DAT_10027a84,(char *)_Str1,3);
        _Source = (uint *)((int)_Str1 + 3);
        PTR_DAT_10027a84[3] = 0;
        cVar1 = *(char *)_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 1;
        }
        iVar4 = FUN_1000ccab(this,(byte *)_Source);
        DAT_100279f8 = (void *)(iVar4 * 0xe10);
        for (; (cVar2 = (char)*_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = (uint *)((int)_Source + 1)) {
        }
        if ((char)*_Source == ':') {
          _Source = (uint *)((int)_Source + 1);
          iVar4 = FUN_1000ccab(DAT_100279f8,(byte *)_Source);
          DAT_100279f8 = (void *)((int)DAT_100279f8 + iVar4 * 0x3c);
          for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
              _Source = (uint *)((int)_Source + 1)) {
          }
          if ((char)*_Source == ':') {
            _Source = (uint *)((int)_Source + 1);
            iVar4 = FUN_1000ccab(DAT_100279f8,(byte *)_Source);
            DAT_100279f8 = (void *)((int)DAT_100279f8 + iVar4);
            for (; ('/' < (char)*_Source && ((char)*_Source < ':'));
                _Source = (uint *)((int)_Source + 1)) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_100279f8 = (void *)-(int)DAT_100279f8;
        }
        DAT_100279fc = (int)(char)*_Source;
        if (DAT_100279fc != 0) {
          _strncpy(PTR_DAT_10027a88,(char *)_Source,3);
          PTR_DAT_10027a88[3] = 0;
          return;
        }
        goto LAB_100115dc;
      }
    }
    FUN_1000f1af(0xc);
  }
  return;
}



// ============================================================
// FUN_100115f2 @ 0x100115f2 33B
// ============================================================

bool __cdecl FUN_100115f2(int *param_1)

{
  bool bVar1;
  
  FUN_1000f14e(0xb);
  bVar1 = FUN_10011613(param_1);
  FUN_1000f1af(0xb);
  return bVar1;
}



// ============================================================
// FUN_10011613 @ 0x10011613 428B
// ============================================================

bool __cdecl FUN_10011613(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (DAT_100279fc != 0) {
    uVar5 = param_1[5];
    if ((uVar5 != DAT_10027a90) || (uVar5 != DAT_10027aa0)) {
      if (DAT_1002a4a8 == 0) {
        FUN_100117bf(1,1,uVar5,4,1,0,0,2,0,0,0);
        FUN_100117bf(0,1,param_1[5],10,5,0,0,2,0,0,0);
      }
      else {
        if (DAT_1002a548 != 0) {
          uVar6 = (uint)DAT_1002a54e;
          uVar3 = 0;
          uVar4 = 0;
        }
        else {
          uVar3 = (uint)DAT_1002a54c;
          uVar6 = 0;
          uVar4 = (uint)DAT_1002a54e;
        }
        FUN_100117bf(1,(uint)(DAT_1002a548 == 0),uVar5,(uint)DAT_1002a54a,uVar4,uVar3,uVar6,
                     (uint)DAT_1002a550,(uint)DAT_1002a552,(uint)DAT_1002a554,(uint)DAT_1002a556);
        if (DAT_1002a4f4 != 0) {
          uVar6 = (uint)DAT_1002a4fa;
          uVar3 = 0;
          uVar4 = 0;
          uVar5 = param_1[5];
        }
        else {
          uVar3 = (uint)DAT_1002a4f8;
          uVar6 = 0;
          uVar4 = (uint)DAT_1002a4fa;
          uVar5 = param_1[5];
        }
        FUN_100117bf(0,(uint)(DAT_1002a4f4 == 0),uVar5,(uint)DAT_1002a4f6,uVar4,uVar3,uVar6,
                     (uint)DAT_1002a4fc,(uint)DAT_1002a4fe,(uint)DAT_1002a500,(uint)DAT_1002a502);
      }
    }
    iVar1 = param_1[7];
    if (DAT_10027a94 < DAT_10027aa4) {
      if ((DAT_10027a94 <= iVar1) && (iVar1 <= DAT_10027aa4)) {
        if ((DAT_10027a94 < iVar1) && (iVar1 < DAT_10027aa4)) {
          return true;
        }
LAB_1001178b:
        iVar2 = ((param_1[2] * 0x3c + param_1[1]) * 0x3c + *param_1) * 1000;
        if (iVar1 == DAT_10027a94) {
          return DAT_10027a98 <= iVar2;
        }
        return iVar2 < DAT_10027aa8;
      }
    }
    else {
      if (iVar1 < DAT_10027aa4) {
        return true;
      }
      if (DAT_10027a94 < iVar1) {
        return true;
      }
      if ((iVar1 <= DAT_10027aa4) || (DAT_10027a94 <= iVar1)) goto LAB_1001178b;
    }
  }
  return false;
}



// ============================================================
// FUN_100117bf @ 0x100117bf 320B
// ============================================================

void __cdecl
FUN_100117bf(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_10027aa8)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_10027adc + param_4 * 4);
    }
    iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
    if (param_6 < iVar2) {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_10027aac + param_4 * 4);
      }
      else {
        iVar2 = *(int *)(&DAT_10027ae0 + param_4 * 4);
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = (&DAT_10027aa8)[param_4];
    }
    else {
      iVar1 = *(int *)(&DAT_10027adc + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_10027a90 = param_3;
    DAT_10027a98 = ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11;
    DAT_10027a94 = iVar1;
  }
  else {
    DAT_10027aa8 = ((param_8 * 0x3c + param_9) * 0x3c + DAT_10027a00 + param_10) * 1000 + param_11;
    if (DAT_10027aa8 < 0) {
      DAT_10027aa8 = DAT_10027aa8 + 86400000;
      DAT_10027aa4 = iVar1 + -1;
    }
    else {
      DAT_10027aa4 = iVar1;
      if (86399999 < DAT_10027aa8) {
        DAT_10027aa8 = DAT_10027aa8 + -86400000;
        DAT_10027aa4 = iVar1 + 1;
      }
    }
    DAT_10027aa0 = param_3;
  }
  return;
}



// ============================================================
// FUN_100118ff @ 0x100118ff 23B
// ============================================================

void FUN_100118ff(void)

{
  FUN_10010b00(10);
  FUN_10012a62((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// ============================================================
// FUN_10011916 @ 0x10011916 23B
// ============================================================

void __thiscall FUN_10011916(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_1001192d(this,param_1,param_2,param_3,0);
  return;
}



// ============================================================
// FUN_1001192d @ 0x1001192d 517B
// ============================================================

void * __thiscall FUN_1001192d(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1002795c < 2) {
      uVar3 = (byte)PTR_DAT_10027750[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_10027750;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_10010f08(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10011988:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10011988;
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
      goto LAB_100119f2;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_100119f2;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_100119f2:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1002795c < 2) {
      uVar5 = (byte)PTR_DAT_10027750[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_10010f08(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1002795c < 2) {
        uVar3 = *(ushort *)(PTR_DAT_10027750 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_10010f08(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10011a9e:
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
          pDVar6 = FUN_1000d0cd();
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
      uVar3 = FUN_10012c21((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10011a9e;
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
// FUN_10011b32 @ 0x10011b32 28B
// ============================================================

bool __cdecl FUN_10011b32(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// ============================================================
// FUN_10011b4e @ 0x10011b4e 28B
// ============================================================

bool __cdecl FUN_10011b4e(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// ============================================================
// FUN_10011b6a @ 0x10011b6a 24B
// ============================================================

bool __cdecl FUN_10011b6a(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



// ============================================================
// FUN_10011b82 @ 0x10011b82 111B
// ============================================================

uint __cdecl FUN_10011b82(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1002a490 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1002b628);
    bVar1 = DAT_1002b624 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1002b628);
      this = (void *)0x13;
      FUN_1000f14e(0x13);
    }
    param_1 = FUN_10011bf1(this,param_1);
    if (bVar1) {
      FUN_1000f1af(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1002b628);
    }
  }
  return param_1;
}



// ============================================================
// FUN_10011bf1 @ 0x10011bf1 203B
// ============================================================

uint __thiscall FUN_10011bf1(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1002a490 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1002795c < 2) {
        uVar2 = (byte)PTR_DAT_10027750[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_10010f08(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10027750[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000fcb3(DAT_1002a490,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
// FUN_10011cbc @ 0x10011cbc 53B
// ============================================================

uint __thiscall FUN_10011cbc(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined2 in_FPUControlWord;
  undefined4 local_8;
  
  local_8 = CONCAT22((short)((uint)this >> 0x10),in_FPUControlWord);
  uVar1 = FUN_10011d07(local_8);
  uVar1 = uVar1 & ~param_2 | param_1 & param_2;
  FUN_10011d99(uVar1);
  return uVar1;
}



// ============================================================
// FUN_10011cf1 @ 0x10011cf1 22B
// ============================================================

void __thiscall FUN_10011cf1(void *this,uint param_1,uint param_2)

{
  FUN_10011cbc(this,param_1,param_2 & 0xfff7ffff);
  return;
}



// ============================================================
// FUN_10011d07 @ 0x10011d07 146B
// ============================================================

uint __cdecl FUN_10011d07(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = param_1 & 0xc00;
  if (uVar2 != 0) {
    if (uVar2 == 0x400) {
      uVar1 = uVar1 | 0x100;
    }
    else if (uVar2 == 0x800) {
      uVar1 = uVar1 | 0x200;
    }
    else if (uVar2 == 0xc00) {
      uVar1 = uVar1 | 0x300;
    }
  }
  if ((param_1 & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((param_1 & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}



// ============================================================
// FUN_10011d99 @ 0x10011d99 137B
// ============================================================

uint __cdecl FUN_10011d99(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((param_1 & 0x10) != 0);
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = param_1 & 0x300;
  if (uVar2 != 0) {
    if (uVar2 == 0x100) {
      uVar1 = uVar1 | 0x400;
    }
    else if (uVar2 == 0x200) {
      uVar1 = uVar1 | 0x800;
    }
    else if (uVar2 == 0x300) {
      uVar1 = uVar1 | 0xc00;
    }
  }
  if ((param_1 & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((param_1 & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}



// ============================================================
// FUN_10011e22 @ 0x10011e22 73B
// ============================================================

undefined4 __cdecl FUN_10011e22(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + (param_2 / 0x20) * 4) & ~(-1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f)))
      != 0) {
    return 0;
  }
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    piVar1 = (int *)(param_1 + iVar2 * 4);
    do {
      if (*piVar1 != 0) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}



// ============================================================
// FUN_10011e6b @ 0x10011e6b 86B
// ============================================================

void __cdecl FUN_10011e6b(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  iVar1 = FUN_10012d5c(*puVar3,1 << (0x1fU - (char)(param_2 % 0x20) & 0x1f),puVar3);
  iVar2 = param_2 / 0x20 + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = FUN_10012d5c(*puVar3,1,puVar3);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  return;
}



// ============================================================
// FUN_10011ec1 @ 0x10011ec1 140B
// ============================================================

undefined4 __cdecl FUN_10011ec1(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  
  local_8 = 0;
  puVar1 = (uint *)(param_1 + (param_2 / 0x20) * 4);
  bVar3 = 0x1f - (char)(param_2 % 0x20);
  if (((*puVar1 & 1 << (bVar3 & 0x1f)) != 0) &&
     (iVar2 = FUN_10011e22(param_1,param_2 + 1), iVar2 == 0)) {
    local_8 = FUN_10011e6b(param_1,param_2 + -1);
  }
  *puVar1 = *puVar1 & -1 << (bVar3 & 0x1f);
  iVar2 = param_2 / 0x20 + 1;
  if (iVar2 < 3) {
    puVar5 = (undefined4 *)(param_1 + iVar2 * 4);
    for (iVar4 = 3 - iVar2; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return local_8;
}



// ============================================================
// FUN_10011f4d @ 0x10011f4d 27B
// ============================================================

void __cdecl FUN_10011f4d(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 - (int)param_2;
  iVar2 = 3;
  do {
    *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



// ============================================================
// FUN_10011f74 @ 0x10011f74 27B
// ============================================================

undefined4 __cdecl FUN_10011f74(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 3);
  return 1;
}



// ============================================================
// FUN_10011f8f @ 0x10011f8f 141B
// ============================================================

void __cdecl FUN_10011f8f(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_8;
  
  local_8 = 3;
  iVar2 = (int)param_2 / 0x20;
  iVar5 = (int)param_2 % 0x20;
  param_2 = 0;
  bVar3 = (byte)iVar5;
  puVar6 = param_1;
  do {
    uVar1 = *puVar6;
    *puVar6 = uVar1 >> (bVar3 & 0x1f) | param_2;
    puVar6 = puVar6 + 1;
    param_2 = (uVar1 & ~(-1 << (bVar3 & 0x1f))) << (0x20 - bVar3 & 0x1f);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  iVar5 = 2;
  iVar4 = 8;
  do {
    if (iVar5 < iVar2) {
      *(undefined4 *)(iVar4 + (int)param_1) = 0;
    }
    else {
      *(undefined4 *)(iVar4 + (int)param_1) = *(undefined4 *)(iVar4 + iVar2 * -4 + (int)param_1);
    }
    iVar5 = iVar5 + -1;
    iVar4 = iVar4 + -4;
  } while (-1 < iVar4);
  return;
}



// ============================================================
// FUN_1001201c @ 0x1001201c 364B
// ============================================================

undefined4 __cdecl FUN_1001201c(ushort *param_1,uint *param_2,int *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c [3];
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar1 = param_1[5];
  local_10 = *(uint *)(param_1 + 3);
  local_c = *(uint *)(param_1 + 1);
  uVar3 = uVar1 & 0x7fff;
  iVar4 = uVar3 - 0x3fff;
  local_8 = (uint)*param_1 << 0x10;
  if (iVar4 == -0x3fff) {
    iVar4 = 0;
    iVar2 = FUN_10011f74((int *)&local_10);
    if (iVar2 != 0) {
LAB_10012148:
      uVar5 = 0;
      goto LAB_1001214a;
    }
    FUN_10011f68(&local_10);
  }
  else {
    FUN_10011f4d((int)local_1c,&local_10);
    iVar2 = FUN_10011ec1((int)&local_10,param_3[2]);
    if (iVar2 != 0) {
      iVar4 = uVar3 - 0x3ffe;
    }
    iVar2 = param_3[1];
    if (iVar4 < iVar2 - param_3[2]) {
      FUN_10011f68(&local_10);
    }
    else {
      if (iVar2 < iVar4) {
        if (*param_3 <= iVar4) {
          FUN_10011f68(&local_10);
          local_10 = local_10 | 0x80000000;
          FUN_10011f8f(&local_10,param_3[3]);
          iVar4 = param_3[5] + *param_3;
          uVar5 = 1;
          goto LAB_1001214a;
        }
        local_10 = local_10 & 0x7fffffff;
        iVar4 = param_3[5] + iVar4;
        FUN_10011f8f(&local_10,param_3[3]);
        goto LAB_10012148;
      }
      FUN_10011f4d((int)&local_10,local_1c);
      FUN_10011f8f(&local_10,iVar2 - iVar4);
      FUN_10011ec1((int)&local_10,param_3[2]);
      FUN_10011f8f(&local_10,param_3[3] + 1);
    }
  }
  iVar4 = 0;
  uVar5 = 2;
LAB_1001214a:
  local_10 = iVar4 << (0x1fU - (char)param_3[3] & 0x1f) |
             -(uint)((uVar1 & 0x8000) != 0) & 0x80000000 | local_10;
  if (param_3[4] == 0x40) {
    param_2[1] = local_10;
    *param_2 = local_c;
  }
  else if (param_3[4] == 0x20) {
    *param_2 = local_10;
  }
  return uVar5;
}



// ============================================================
// FUN_10012188 @ 0x10012188 22B
// ============================================================

void __cdecl FUN_10012188(ushort *param_1,uint *param_2)

{
  FUN_1001201c(param_1,param_2,(int *)&DAT_10027c20);
  return;
}



// ============================================================
// FUN_1001219e @ 0x1001219e 22B
// ============================================================

void __cdecl FUN_1001219e(ushort *param_1,uint *param_2)

{
  FUN_1001201c(param_1,param_2,(int *)&DAT_10027c38);
  return;
}



// ============================================================
// FUN_100121b4 @ 0x100121b4 45B
// ============================================================

void __thiscall FUN_100121b4(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_10012efd(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_10012188(local_10,param_1);
  return;
}



// ============================================================
// FUN_100121e1 @ 0x100121e1 45B
// ============================================================

void __thiscall FUN_100121e1(void *this,uint *param_1,byte *param_2)

{
  ushort local_10 [6];
  
  FUN_10012efd(this,local_10,(int *)&param_2,param_2,0,0,0,0);
  FUN_1001219e(local_10,param_1);
  return;
}



// ============================================================
// FUN_1001220e @ 0x1001220e 119B
// ============================================================

void __cdecl FUN_1001220e(char *param_1,int param_2,int param_3)

{
  char *_Str;
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  char cVar5;
  
  pcVar1 = param_1;
  pcVar4 = *(char **)(param_3 + 0xc);
  _Str = param_1 + 1;
  *param_1 = '0';
  pcVar2 = _Str;
  if (0 < param_2) {
    param_1 = (char *)param_2;
    param_2 = 0;
    do {
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        cVar5 = '0';
      }
      else {
        pcVar4 = pcVar4 + 1;
      }
      *pcVar2 = cVar5;
      pcVar2 = pcVar2 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != (char *)0x0);
  }
  *pcVar2 = '\0';
  if ((-1 < param_2) && ('4' < *pcVar4)) {
    while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
      *pcVar2 = '0';
    }
    *pcVar2 = *pcVar2 + '\x01';
  }
  if (*pcVar1 == '1') {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  else {
    sVar3 = _strlen(_Str);
    FUN_1000c880((undefined4 *)pcVar1,(undefined4 *)_Str,sVar3 + 1);
  }
  return;
}



// ============================================================
// FUN_10012285 @ 0x10012285 92B
// ============================================================

int * __cdecl FUN_10012285(undefined4 param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined2 uVar4;
  short local_2c;
  char local_2a;
  uint local_28 [6];
  uint local_10;
  uint uStack_c;
  undefined2 uStack_8;
  
  uVar4 = (undefined2)((uint)in_stack_ffffffbc >> 0x10);
  FUN_100122e1(&local_10,&param_1);
  iVar3 = FUN_100133ce(local_10,uStack_c,CONCAT22(uVar4,uStack_8),0x11,0,&local_2c);
  puVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2a;
  param_3[1] = (int)local_2c;
  FUN_10011110(param_4,local_28);
  piVar1[3] = (int)puVar2;
  return piVar1;
}



// ============================================================
// FUN_100122e1 @ 0x100122e1 182B
// ============================================================

void __cdecl FUN_100122e1(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar1 = *(ushort *)((int)param_2 + 6);
  uVar3 = (uVar1 & 0x7ff0) >> 4;
  uVar2 = *param_2;
  local_8 = 0x80000000;
  if (uVar3 == 0) {
    if (((param_2[1] & 0xfffff) == 0) && (uVar2 == 0)) {
      param_1[1] = 0;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 2) = 0;
      return;
    }
    iVar4 = 0x3c01;
    local_8 = 0;
  }
  else if (uVar3 == 0x7ff) {
    iVar4 = 0x7fff;
  }
  else {
    iVar4 = uVar3 + 0x3c00;
  }
  local_8 = uVar2 >> 0x15 | (param_2[1] & 0xfffff) << 0xb | local_8;
  param_1[1] = local_8;
  *param_1 = uVar2 << 0xb;
  while ((local_8 & 0x80000000) == 0) {
    local_8 = *param_1 >> 0x1f | local_8 * 2;
    *param_1 = *param_1 * 2;
    param_1[1] = local_8;
    iVar4 = iVar4 + 0xffff;
  }
  *(ushort *)(param_1 + 2) = uVar1 & 0x8000 | (ushort)iVar4;
  return;
}



// ============================================================
// FUN_100123a0 @ 0x100123a0 137B
// ============================================================

int __cdecl FUN_100123a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1002a570 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1002a570 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1002a570 != (FARPROC)0x0) {
        DAT_1002a574 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1002a578 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_100123ef;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_100123ef:
    if (DAT_1002a574 != (FARPROC)0x0) {
      iVar1 = (*DAT_1002a574)();
      if ((iVar1 != 0) && (DAT_1002a578 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1002a578)(iVar1);
      }
    }
    iVar1 = (*DAT_1002a570)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// ============================================================
// _strncpy @ 0x10012430 254B
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
        goto joined_r0x1001246e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_100124ab;
        goto LAB_10012519;
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
joined_r0x10012515:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10012519:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_100124ab;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10012515;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10012515;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10012515;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1001246e:
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
LAB_100124ab:
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
// FUN_1001252e @ 0x1001252e 115B
// ============================================================

DWORD __cdecl FUN_1001252e(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_100136e0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_1000d0cd();
    *pDVar2 = 9;
  }
  else {
    DVar3 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
    if (DVar3 == 0xffffffff) {
      uVar4 = GetLastError();
    }
    else {
      uVar4 = 0;
    }
    if (uVar4 == 0) {
      pbVar1 = (byte *)((&DAT_1002b640)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_1000d05a(uVar4);
  }
  return 0xffffffff;
}



// ============================================================
// FUN_100125a1 @ 0x100125a1 101B
// ============================================================

int __cdecl FUN_100125a1(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1002b740) &&
     ((*(byte *)((&DAT_1002b640)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10013722(param_1);
    iVar1 = FUN_10012606(param_1,param_2,param_3);
    FUN_10013781(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1000d0cd();
  *pDVar2 = 9;
  pDVar2 = FUN_1000d0d6();
  *pDVar2 = 0;
  return -1;
}



// ============================================================
// FUN_10012606 @ 0x10012606 395B
// ============================================================

int __cdecl FUN_10012606(DWORD param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  BOOL BVar6;
  DWORD *pDVar7;
  char local_418 [1028];
  int local_14;
  DWORD local_10;
  DWORD local_c;
  char *local_8;
  
  local_c = 0;
  local_14 = 0;
  if (param_3 == 0) {
LAB_1001261f:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_1002b640 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1001252e(param_1,0,2);
    }
    if ((*(byte *)((undefined4 *)(*piVar1 + iVar4) + 1) & 0x80) == 0) {
      BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),param_2,param_3,&local_10,(LPOVERLAPPED)0x0);
      if (BVar6 == 0) {
        param_1 = GetLastError();
      }
      else {
        local_c = local_10;
        param_1 = 0;
      }
LAB_100126ee:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_10012760;
      if (param_1 == 5) {
        pDVar7 = FUN_1000d0cd();
        *pDVar7 = 9;
        pDVar7 = FUN_1000d0d6();
        *pDVar7 = 5;
      }
      else {
        FUN_1000d05a(param_1);
      }
    }
    else {
      local_8 = param_2;
      param_1 = 0;
      if (param_3 != 0) {
        do {
          pcVar5 = local_418;
          do {
            if (param_3 <= (uint)((int)local_8 - (int)param_2)) break;
            pcVar2 = local_8 + 1;
            cVar3 = *local_8;
            local_8 = pcVar2;
            if (cVar3 == '\n') {
              local_14 = local_14 + 1;
              *pcVar5 = '\r';
              pcVar5 = pcVar5 + 1;
            }
            *pcVar5 = cVar3;
            pcVar5 = pcVar5 + 1;
          } while ((int)pcVar5 - (int)local_418 < 0x400);
          BVar6 = WriteFile(*(HANDLE *)(*piVar1 + iVar4),local_418,(int)pcVar5 - (int)local_418,
                            &local_10,(LPOVERLAPPED)0x0);
          if (BVar6 == 0) {
            param_1 = GetLastError();
            goto LAB_100126ee;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_100126ee;
        } while( true );
      }
LAB_10012760:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_1001261f;
      pDVar7 = FUN_1000d0cd();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_1000d0d6();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// ============================================================
// FUN_1001284d @ 0x1001284d 47B
// ============================================================

void __cdecl FUN_1001284d(uint param_1)

{
  if ((0x10027c4f < param_1) && (param_1 < 0x10027eb1)) {
    FUN_1000f14e(((int)(param_1 + 0xeffd83b0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// ============================================================
// FUN_1001287c @ 0x1001287c 35B
// ============================================================

void __cdecl FUN_1001287c(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000f14e(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// ============================================================
// FUN_1001289f @ 0x1001289f 47B
// ============================================================

void __cdecl FUN_1001289f(uint param_1)

{
  if ((0x10027c4f < param_1) && (param_1 < 0x10027eb1)) {
    FUN_1000f1af(((int)(param_1 + 0xeffd83b0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// ============================================================
// FUN_100128ce @ 0x100128ce 35B
// ============================================================

void __cdecl FUN_100128ce(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_1000f1af(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// ============================================================
// FUN_100129e5 @ 0x100129e5 125B
// ============================================================

int __cdecl FUN_100129e5(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_1002b988 != 0) &&
      ((DAT_1002a29c != (int *)0x0 ||
       (((DAT_1002a2a4 != 0 && (iVar1 = FUN_1001399a(), iVar1 == 0)) && (DAT_1002a29c != (int *)0x0)
        ))))) && (piVar3 = DAT_1002a29c, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar3 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}



// ============================================================
// FUN_10012a62 @ 0x10012a62 386B
// ============================================================

undefined4 __cdecl FUN_10012a62(DWORD *param_1)

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
    puVar7 = &DAT_1002a5e4;
    pcVar6 = DAT_1002a5e4;
LAB_10012ae8:
    bVar1 = true;
    FUN_1000f14e(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_1002a5f0;
        pcVar6 = DAT_1002a5f0;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_1002a5e8;
        pcVar6 = DAT_1002a5e8;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_1002a5ec;
        pcVar6 = DAT_1002a5ec;
      }
      goto LAB_10012ae8;
    }
    pDVar2 = FUN_1000faa1();
    uVar3 = FUN_10012be4((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_1000f1af(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_1000f1af(1);
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
      goto LAB_10012b5c;
    }
  }
  else {
LAB_10012b5c:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_100279e8 < DAT_100279ec + DAT_100279e8) {
        iVar4 = DAT_100279e8 * 0xc;
        iVar5 = DAT_100279e8;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_100279ec + DAT_100279e8);
      }
      goto LAB_10012b9a;
    }
  }
  *puVar7 = 0;
LAB_10012b9a:
  if (bVar1) {
    FUN_1000f1af(1);
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
// FUN_10012be4 @ 0x10012be4 61B
// ============================================================

uint __cdecl FUN_10012be4(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_100279f4 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_100279f4 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// FUN_10012c21 @ 0x10012c21 111B
// ============================================================

uint __cdecl FUN_10012c21(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1002a490 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1002b628);
    bVar1 = DAT_1002b624 != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1002b628);
      this = (void *)0x13;
      FUN_1000f14e(0x13);
    }
    param_1 = FUN_10012c90(this,param_1);
    if (bVar1) {
      FUN_1000f1af(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1002b628);
    }
  }
  return param_1;
}



// ============================================================
// FUN_10012c90 @ 0x10012c90 204B
// ============================================================

uint __thiscall FUN_10012c90(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1002a490 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1002795c < 2) {
        uVar2 = (byte)PTR_DAT_10027750[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_10010f08(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_10027750[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000fcb3(DAT_1002a490,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
// FUN_10012d5c @ 0x10012d5c 33B
// ============================================================

undefined4 __cdecl FUN_10012d5c(uint param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_1 + param_2;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}



// ============================================================
// ___add_12 @ 0x10012d7d 94B
// ============================================================

/* Library Function - Single Match
    ___add_12
   
   Library: Visual Studio 2003 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10012d5c(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_10012d5c(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = FUN_10012d5c(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  FUN_10012d5c(param_1[2],param_2[2],param_1 + 2);
  return;
}



// ============================================================
// FUN_10012ddb @ 0x10012ddb 46B
// ============================================================

void __cdecl FUN_10012ddb(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] << 1 | uVar2 >> 0x1f;
  return;
}



// ============================================================
// FUN_10012e09 @ 0x10012e09 45B
// ============================================================

void __cdecl FUN_10012e09(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}



// ============================================================
// FUN_10012e36 @ 0x10012e36 199B
// ============================================================

void __cdecl FUN_10012e36(char *param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puVar1 = param_3;
  local_8 = 0x404e;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_2 != 0) {
    param_3 = (uint *)param_2;
    do {
      local_14 = *puVar1;
      local_10 = puVar1[1];
      local_c = puVar1[2];
      FUN_10012ddb(puVar1);
      FUN_10012ddb(puVar1);
      ___add_12(puVar1,&local_14);
      FUN_10012ddb(puVar1);
      local_10 = 0;
      local_c = 0;
      local_14 = (uint)*param_1;
      ___add_12(puVar1,&local_14);
      param_1 = param_1 + 1;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  while (puVar1[2] == 0) {
    puVar1[2] = puVar1[1] >> 0x10;
    local_8 = local_8 + 0xfff0;
    puVar1[1] = *puVar1 >> 0x10 | puVar1[1] << 0x10;
    *puVar1 = *puVar1 << 0x10;
  }
  while ((puVar1[2] & 0x8000) == 0) {
    FUN_10012ddb(puVar1);
    local_8 = local_8 + 0xffff;
  }
  *(undefined2 *)((int)puVar1 + 10) = (undefined2)local_8;
  return;
}



// ============================================================
// FUN_10012efd @ 0x10012efd 1185B
// ============================================================

undefined4 __thiscall
FUN_10012efd(void *this,ushort *param_1,int *param_2,byte *param_3,int param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  char local_60 [23];
  char local_49;
  ushort local_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  byte *local_3e;
  ushort local_3a;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  byte *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  char *local_10;
  int local_c;
  uint local_8;
  
  local_10 = local_60;
  local_2c = 0;
  local_1c = 1;
  local_8 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_30 = 0;
  local_34 = 0;
  local_20 = (byte *)0x0;
  local_c = 0;
  local_18 = 0;
  pbVar8 = param_3;
  while( true ) {
    bVar6 = *pbVar8;
    this = (void *)CONCAT31((int3)((uint)this >> 8),bVar6);
    if ((((bVar6 != 0x20) && (bVar6 != 9)) && (bVar6 != 10)) && (bVar6 != 0xd)) break;
    pbVar8 = pbVar8 + 1;
  }
  iVar1 = 4;
  iVar9 = 0;
  iVar5 = local_14;
LAB_10012f54:
  local_14 = iVar5;
  pbVar7 = pbVar8;
  iVar5 = 1;
  bVar6 = *pbVar7;
  pbVar8 = pbVar7 + 1;
  iVar2 = local_14;
  switch(iVar9) {
  case 0:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) {
LAB_10012f71:
      local_14 = iVar2;
      iVar9 = 3;
      goto LAB_10013196;
    }
    if (bVar6 == DAT_10027960) goto LAB_10012f80;
    if (bVar6 == 0x2b) {
      local_2c = 0;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else if (bVar6 == 0x2d) {
      local_2c = 0x8000;
      iVar9 = 2;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_10013270;
    }
    goto LAB_10012f54;
  case 1:
    local_14 = 1;
    if (('0' < (char)bVar6) && (iVar2 = iVar5, (char)bVar6 < ':')) goto LAB_10012f71;
    iVar9 = iVar1;
    if (bVar6 != DAT_10027960) {
      iVar9 = iVar5;
      if ((bVar6 == 0x2b) || (iVar9 = local_14, bVar6 == 0x2d)) goto LAB_10013005;
      iVar9 = iVar5;
      local_14 = iVar5;
      if (bVar6 != 0x30) goto LAB_10012fde;
    }
    goto LAB_10012f54;
  case 2:
    if (('0' < (char)bVar6) && ((char)bVar6 < ':')) goto LAB_10012f71;
    if (bVar6 == DAT_10027960) {
LAB_10012f80:
      iVar9 = 5;
      iVar5 = local_14;
    }
    else {
      iVar9 = iVar5;
      pbVar7 = param_3;
      iVar5 = local_14;
      if (bVar6 != 0x30) goto LAB_10013275;
    }
    goto LAB_10012f54;
  case 3:
    local_14 = iVar5;
    while( true ) {
      if (DAT_1002795c < 2) {
        uVar3 = (byte)PTR_DAT_10027750[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10027750;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10010f08(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      else {
        local_c = local_c + 1;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    iVar9 = iVar1;
    iVar5 = local_14;
    if (bVar6 != DAT_10027960) goto LAB_100130f2;
    goto LAB_10012f54;
  case 4:
    local_14 = 1;
    local_28 = 1;
    iVar9 = iVar5;
    if (local_8 == 0) {
      while (iVar5 = local_28, iVar9 = local_14, bVar6 == 0x30) {
        local_c = local_c + -1;
        bVar6 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      }
    }
    while( true ) {
      local_14 = iVar9;
      local_28 = iVar5;
      if (DAT_1002795c < 2) {
        uVar3 = (byte)PTR_DAT_10027750[(uint)bVar6 * 2] & 4;
        this = PTR_DAT_10027750;
      }
      else {
        pbVar7 = (byte *)0x4;
        uVar3 = FUN_10010f08(this,(uint)bVar6,4);
        this = pbVar7;
      }
      if (uVar3 == 0) break;
      if (local_8 < 0x19) {
        local_8 = local_8 + 1;
        local_c = local_c + -1;
        pcVar4 = local_10 + 1;
        *local_10 = bVar6 - 0x30;
        local_10 = pcVar4;
      }
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      iVar5 = local_28;
      iVar9 = local_14;
    }
LAB_100130f2:
    iVar9 = local_14;
    if ((bVar6 == 0x2b) || (bVar6 == 0x2d)) {
LAB_10013005:
      local_14 = iVar9;
      iVar9 = 0xb;
      pbVar8 = pbVar8 + -1;
      iVar5 = local_14;
    }
    else {
LAB_10012fde:
      if (((char)bVar6 < 'D') ||
         (('E' < (char)bVar6 && (((char)bVar6 < 'd' || ('e' < (char)bVar6)))))) goto LAB_10013270;
      iVar9 = 6;
      iVar5 = local_14;
    }
    goto LAB_10012f54;
  case 5:
    local_28 = iVar5;
    if (DAT_1002795c < 2) {
      uVar3 = (byte)PTR_DAT_10027750[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10027750;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10010f08(this,(uint)bVar6,4);
      this = pbVar7;
    }
    iVar9 = iVar1;
    pbVar7 = param_3;
    if (uVar3 != 0) goto LAB_10013196;
    goto LAB_10013275;
  case 6:
    pbVar7 = pbVar7 + -1;
    this = pbVar7;
    param_3 = pbVar7;
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      if (bVar6 == 0x2b) goto LAB_100131cb;
      if (bVar6 == 0x2d) goto LAB_100131bf;
      if (bVar6 != 0x30) goto LAB_10013275;
LAB_10013164:
      iVar9 = 8;
      iVar5 = local_14;
      goto LAB_10012f54;
    }
    break;
  case 7:
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) {
      pbVar7 = param_3;
      if (bVar6 == 0x30) goto LAB_10013164;
      goto LAB_10013275;
    }
    break;
  case 8:
    local_24 = 1;
    while (bVar6 == 0x30) {
      bVar6 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    }
    if (((char)bVar6 < '1') || ('9' < (char)bVar6)) goto LAB_10013270;
    break;
  case 9:
    local_24 = 1;
    pbVar7 = (byte *)0x0;
    goto LAB_100131f6;
  default:
    goto switchD_10012f60_caseD_a;
  case 0xb:
    if (param_7 != 0) {
      if (bVar6 == 0x2b) {
LAB_100131cb:
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      else {
        param_3 = pbVar7;
        if (bVar6 != 0x2d) goto LAB_10013275;
LAB_100131bf:
        local_1c = -1;
        iVar9 = 7;
        this = pbVar7;
        param_3 = pbVar7;
        iVar5 = local_14;
      }
      goto LAB_10012f54;
    }
    iVar9 = 10;
    pbVar8 = pbVar7;
switchD_10012f60_caseD_a:
    pbVar7 = pbVar8;
    iVar5 = local_14;
    if (iVar9 != 10) goto LAB_10012f54;
    goto LAB_10013275;
  }
  iVar9 = 9;
LAB_10013196:
  pbVar8 = pbVar8 + -1;
  iVar5 = local_14;
  goto LAB_10012f54;
LAB_100131f6:
  if (DAT_1002795c < 2) {
    uVar3 = (byte)PTR_DAT_10027750[(uint)bVar6 * 2] & 4;
    this = PTR_DAT_10027750;
  }
  else {
    pbVar10 = (byte *)0x4;
    uVar3 = FUN_10010f08(this,(uint)bVar6,4);
    this = pbVar10;
  }
  if (uVar3 == 0) goto LAB_10013240;
  this = (void *)(int)(char)bVar6;
  pbVar7 = (byte *)((int)this + (int)pbVar7 * 10 + -0x30);
  if (0x1450 < (int)pbVar7) goto LAB_10013238;
  bVar6 = *pbVar8;
  pbVar8 = pbVar8 + 1;
  goto LAB_100131f6;
LAB_10013238:
  pbVar7 = (byte *)0x1451;
LAB_10013240:
  while( true ) {
    local_20 = pbVar7;
    if (DAT_1002795c < 2) {
      uVar3 = (byte)PTR_DAT_10027750[(uint)bVar6 * 2] & 4;
      this = PTR_DAT_10027750;
    }
    else {
      pbVar7 = (byte *)0x4;
      uVar3 = FUN_10010f08(this,(uint)bVar6,4);
      this = pbVar7;
    }
    if (uVar3 == 0) break;
    bVar6 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar7 = local_20;
  }
LAB_10013270:
  pbVar7 = pbVar8 + -1;
LAB_10013275:
  *param_2 = (int)pbVar7;
  if (local_14 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
    local_18 = 4;
    goto LAB_10013383;
  }
  pcVar4 = local_10;
  if (0x18 < local_8) {
    if ('\x04' < local_49) {
      local_49 = local_49 + '\x01';
    }
    local_8 = 0x18;
    local_c = local_c + 1;
    pcVar4 = local_10 + -1;
  }
  if (local_8 == 0) {
    local_44 = 0;
    local_3a = 0;
    local_3e = (byte *)0x0;
    param_3 = (byte *)0x0;
  }
  else {
    while (pcVar4 = pcVar4 + -1, *pcVar4 == '\0') {
      local_8 = local_8 - 1;
      local_c = local_c + 1;
    }
    FUN_10012e36(local_60,local_8,(uint *)&local_44);
    pbVar8 = local_20;
    if (local_1c < 0) {
      pbVar8 = (byte *)-(int)local_20;
    }
    pbVar8 = pbVar8 + local_c;
    if (local_24 == 0) {
      pbVar8 = pbVar8 + param_5;
    }
    if (local_28 == 0) {
      pbVar8 = pbVar8 + -param_6;
    }
    if ((int)pbVar8 < 0x1451) {
      if (-0x1451 < (int)pbVar8) {
        FUN_10013d31((int *)&local_44,(uint)pbVar8,param_4);
        param_3 = (byte *)CONCAT22(uStack_40,uStack_42);
        goto LAB_10013308;
      }
      local_34 = 1;
    }
    else {
      local_30 = 1;
    }
    local_3a = (ushort)param_3;
    local_3e = param_3;
    local_44 = local_3a;
  }
LAB_10013308:
  if (local_30 == 0) {
    if (local_34 != 0) {
      local_44 = 0;
      local_3a = 0;
      local_3e = (byte *)0x0;
      param_3 = (byte *)0x0;
      local_18 = 1;
    }
  }
  else {
    param_3 = (byte *)0x0;
    local_3a = 0x7fff;
    local_3e = (byte *)0x80000000;
    local_44 = 0;
    local_18 = 2;
  }
LAB_10013383:
  *(byte **)(param_1 + 3) = local_3e;
  *(byte **)(param_1 + 1) = param_3;
  param_1[5] = local_3a | (ushort)local_2c;
  *param_1 = local_44;
  return local_18;
}



// ============================================================
// FUN_100133ce @ 0x100133ce 659B
// ============================================================

undefined4 __cdecl
FUN_100133ce(uint param_1,uint param_2,uint param_3,int param_4,byte param_5,short *param_6)

{
  short *psVar1;
  uint uVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined2 local_14;
  undefined4 local_12;
  undefined4 local_e;
  undefined1 local_a;
  char cStack_9;
  undefined4 local_8;
  
  psVar3 = param_6;
  uVar5 = param_3 & 0x7fff;
  local_20 = 0xcc;
  local_1f = 0xcc;
  local_1e = 0xcc;
  local_1d = 0xcc;
  local_1c = 0xcc;
  local_1b = 0xcc;
  local_1a = 0xcc;
  local_19 = 0xcc;
  local_18 = 0xcc;
  local_17 = 0xcc;
  local_16 = 0xfb;
  local_15 = 0x3f;
  local_8 = 1;
  if ((param_3 & 0x8000) == 0) {
    *(undefined1 *)(param_6 + 1) = 0x20;
  }
  else {
    *(undefined1 *)(param_6 + 1) = 0x2d;
  }
  if ((((short)uVar5 != 0) || (param_2 != 0)) || (param_1 != 0)) {
    if ((short)uVar5 == 0x7fff) {
      *param_6 = 1;
      if (((param_2 == 0x80000000) && (param_1 == 0)) || ((param_2 & 0x40000000) != 0)) {
        if (((param_3 & 0x8000) == 0) || (param_2 != 0xc0000000)) {
          if ((param_2 != 0x80000000) || (param_1 != 0)) goto LAB_100134c3;
          pcVar11 = "1#INF";
        }
        else {
          if (param_1 != 0) {
LAB_100134c3:
            pcVar11 = "1#QNAN";
            goto LAB_100134c8;
          }
          pcVar11 = "1#IND";
        }
        FUN_10011110((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 5;
      }
      else {
        pcVar11 = "1#SNAN";
LAB_100134c8:
        FUN_10011110((uint *)(param_6 + 2),(uint *)pcVar11);
        *(undefined1 *)((int)psVar3 + 3) = 6;
      }
      return 0;
    }
    local_14 = 0;
    local_a = (undefined1)uVar5;
    cStack_9 = (char)(uVar5 >> 8);
    sVar8 = (short)(((uVar5 >> 8) + (param_2 >> 0x18) * 2) * 0x4d + -0x134312f4 + uVar5 * 0x4d10 >>
                   0x10);
    local_e = param_2;
    local_12 = param_1;
    FUN_10013d31((int *)&local_14,-(int)sVar8,1);
    if (0x3ffe < CONCAT11(cStack_9,local_a)) {
      sVar8 = sVar8 + 1;
      FUN_10013b11((int *)&local_14,(int *)&local_20);
    }
    *psVar3 = sVar8;
    iVar10 = param_4;
    if (((param_5 & 1) == 0) || (iVar10 = param_4 + sVar8, 0 < param_4 + sVar8)) {
      if (0x15 < iVar10) {
        iVar10 = 0x15;
      }
      iVar9 = CONCAT11(cStack_9,local_a) - 0x3ffe;
      local_a = 0;
      cStack_9 = '\0';
      param_6 = (short *)0x8;
      do {
        FUN_10012ddb((uint *)&local_14);
        param_6 = (short *)((int)param_6 + -1);
      } while (param_6 != (short *)0x0);
      if (iVar9 < 0) {
        param_6 = (short *)0x0;
        for (uVar5 = -iVar9 & 0xff; uVar5 != 0; uVar5 = uVar5 - 1) {
          FUN_10012e09((uint *)&local_14);
        }
      }
      param_4 = iVar10 + 1;
      psVar6 = psVar3 + 2;
      param_6 = psVar6;
      uVar5 = local_12;
      uVar2 = local_e;
      if (0 < param_4) {
        do {
          local_e._2_2_ = (undefined2)(uVar2 >> 0x10);
          local_e._0_2_ = (undefined2)uVar2;
          local_12._2_2_ = (undefined2)(uVar5 >> 0x10);
          local_12._0_2_ = (undefined2)uVar5;
          param_1 = CONCAT22((undefined2)local_12,local_14);
          param_2 = CONCAT22((undefined2)local_e,local_12._2_2_);
          param_3 = CONCAT13(cStack_9,CONCAT12(local_a,local_e._2_2_));
          local_12 = uVar5;
          local_e = uVar2;
          FUN_10012ddb((uint *)&local_14);
          FUN_10012ddb((uint *)&local_14);
          ___add_12((uint *)&local_14,&param_1);
          FUN_10012ddb((uint *)&local_14);
          cVar4 = cStack_9;
          cStack_9 = '\0';
          psVar6 = (short *)((int)param_6 + 1);
          param_4 = param_4 + -1;
          *(char *)param_6 = cVar4 + '0';
          param_6 = psVar6;
          uVar5 = local_12;
          uVar2 = local_e;
        } while (param_4 != 0);
      }
      psVar7 = psVar6 + -1;
      psVar1 = psVar3 + 2;
      if ('4' < *(char *)((int)psVar6 + -1)) {
        for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
          if ((char)*psVar7 != '9') {
            if (psVar1 <= psVar7) goto LAB_10013620;
            break;
          }
          *(char *)psVar7 = '0';
        }
        psVar7 = (short *)((int)psVar7 + 1);
        *psVar3 = *psVar3 + 1;
LAB_10013620:
        *(char *)psVar7 = (char)*psVar7 + '\x01';
LAB_10013622:
        cVar4 = ((char)psVar7 - (char)psVar3) + -3;
        *(char *)((int)psVar3 + 3) = cVar4;
        *(undefined1 *)(cVar4 + 4 + (int)psVar3) = 0;
        return local_8;
      }
      for (; psVar1 <= psVar7; psVar7 = (short *)((int)psVar7 + -1)) {
        if ((char)*psVar7 != '0') {
          if (psVar1 <= psVar7) goto LAB_10013622;
          break;
        }
      }
      *psVar3 = 0;
      *(undefined1 *)(psVar3 + 1) = 0x20;
      *(undefined1 *)((int)psVar3 + 3) = 1;
      *(char *)psVar1 = '0';
      goto LAB_10013658;
    }
  }
  *psVar3 = 0;
  *(undefined1 *)(psVar3 + 1) = 0x20;
  *(undefined1 *)((int)psVar3 + 3) = 1;
  *(undefined1 *)(psVar3 + 2) = 0x30;
LAB_10013658:
  *(undefined1 *)((int)psVar3 + 5) = 0;
  return 1;
}



// ============================================================
// FUN_10013661 @ 0x10013661 127B
// ============================================================

undefined4 __cdecl FUN_10013661(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_1002b740) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_1002b640)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_1002a278 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_100136bd;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_100136bd:
      *(undefined4 *)((&DAT_1002b640)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000d0cd();
  *pDVar2 = 9;
  pDVar2 = FUN_1000d0d6();
  *pDVar2 = 0;
  return 0xffffffff;
}



// ============================================================
// FUN_100136e0 @ 0x100136e0 66B
// ============================================================

undefined4 __cdecl FUN_100136e0(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_1002b740) &&
     ((*(byte *)((&DAT_1002b640)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_1002b640)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_1000d0cd();
  *pDVar1 = 9;
  pDVar1 = FUN_1000d0d6();
  *pDVar1 = 0;
  return 0xffffffff;
}



// ============================================================
// FUN_10013722 @ 0x10013722 95B
// ============================================================

void __cdecl FUN_10013722(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_1002b640)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_1000f14e(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_1000f1af(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_1002b640)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// ============================================================
// FUN_10013781 @ 0x10013781 34B
// ============================================================

void __cdecl FUN_10013781(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_1002b640)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// ============================================================
// FUN_10013824 @ 0x10013824 46B
// ============================================================

int __cdecl FUN_10013824(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10013852(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_10013e2a(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// ============================================================
// FUN_10013852 @ 0x10013852 92B
// ============================================================

undefined4 __cdecl FUN_10013852(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_100125a1(param_1[4],(char *)param_1[2],uVar3);
      if (uVar1 == uVar3) {
        if ((param_1[3] & 0x80U) != 0) {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}



// ============================================================
// FUN_100138b7 @ 0x100138b7 164B
// ============================================================

int __cdecl FUN_100138b7(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_1000f14e(2);
  iVar4 = 0;
  if (0 < DAT_1002b620) {
    do {
      iVar2 = *(int *)(DAT_1002a614 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_1001287c(iVar4,iVar2);
        piVar1 = *(int **)(DAT_1002a614 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10013824(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10013824(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_100128ce(iVar4,*(int *)(DAT_1002a614 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_1002b620);
  }
  FUN_1000f1af(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// ============================================================
// __mbsnbicoll @ 0x1001395b 63B
// ============================================================

/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_10013ebd(DAT_1002b984,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_1002b768);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



// ============================================================
// FUN_1001399a @ 0x1001399a 110B
// ============================================================

undefined4 FUN_1001399a(void)

{
  LPCWSTR lpWideCharStr;
  size_t _Size;
  uint *lpMultiByteStr;
  int iVar1;
  undefined4 *puVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_1002a2a4;
  puVar2 = DAT_1002a2a4;
  while( true ) {
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
    _Size = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    if (((_Size == 0) || (lpMultiByteStr = _malloc(_Size), lpMultiByteStr == (uint *)0x0)) ||
       (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*puVar2,-1,(LPSTR)lpMultiByteStr,_Size,(LPCSTR)0x0,
                                    (LPBOOL)0x0), iVar1 == 0)) break;
    FUN_1001413a(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)puVar2[1];
    puVar2 = puVar2 + 1;
  }
  return 0xffffffff;
}



// ============================================================
// FUN_10013a10 @ 0x10013a10 257B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10013a10(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1002b628;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1002a490 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_10013a6f;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_10013a6f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1002b628 = _DAT_1002b628 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1002b624;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1002b628 = iVar2;
        FUN_1000f14e(0x13);
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
        uVar7 = FUN_10011bf1(param_3,uVar7);
        uVar5 = FUN_10011bf1(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_10013ae5;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_10013ae5:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1002b628 = _DAT_1002b628 + -1;
        UNLOCK();
      }
      else {
        FUN_1000f1af(0x13);
      }
    }
  }
  return uVar6;
}



// ============================================================
// FUN_10013b11 @ 0x10013b11 544B
// ============================================================

void __cdecl FUN_10013b11(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ushort uVar9;
  uint uVar10;
  ushort uVar11;
  byte local_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  short local_24;
  undefined2 uStack_22;
  undefined2 local_20;
  undefined1 uStack_1e;
  byte bStack_1d;
  int *local_1c;
  int local_18;
  int local_14;
  ushort *local_10;
  ushort *local_c;
  short *local_8;
  
  piVar5 = param_2;
  piVar4 = param_1;
  local_18 = 0;
  local_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  local_24 = 0;
  uStack_22 = 0;
  local_20 = 0;
  uStack_1e = 0;
  bStack_1d = 0;
  uVar7 = *(ushort *)((int)param_1 + 10) & 0x7fff;
  uVar10 = *(ushort *)((int)param_2 + 10) & 0x7fff;
  uVar11 = (*(ushort *)((int)param_2 + 10) ^ *(ushort *)((int)param_1 + 10)) & 0x8000;
  uVar6 = (ushort)uVar7;
  piVar1 = (int *)(uVar10 + uVar7);
  if (((uVar6 < 0x7fff) && (uVar9 = (ushort)uVar10, uVar9 < 0x7fff)) && ((ushort)piVar1 < 0xbffe)) {
    if ((ushort)piVar1 < 0x3fc0) {
LAB_10013bb4:
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar4 = 0;
      return;
    }
    if (((uVar6 != 0) || (piVar1 = (int *)((int)piVar1 + 1), (param_1[2] & 0x7fffffffU) != 0)) ||
       ((uVar6 = 0, param_1[1] != 0 || (*param_1 != 0)))) {
      param_1 = piVar1;
      if (((uVar9 == 0) && (param_1 = (int *)((int)param_1 + 1), (param_2[2] & 0x7fffffffU) == 0))
         && ((param_2[1] == 0 && (*param_2 == 0)))) goto LAB_10013bb4;
      local_14 = 0;
      local_8 = &local_24;
      param_2 = (int *)0x5;
      do {
        if (0 < (int)param_2) {
          local_c = (ushort *)(local_14 * 2 + (int)piVar4);
          local_10 = (ushort *)(piVar5 + 2);
          local_1c = param_2;
          do {
            iVar8 = FUN_10012d5c(*(uint *)(local_8 + -2),(uint)*local_c * (uint)*local_10,
                                 (uint *)(local_8 + -2));
            if (iVar8 != 0) {
              *local_8 = *local_8 + 1;
            }
            local_c = local_c + 1;
            local_10 = local_10 + -1;
            local_1c = (int *)((int)local_1c + -1);
          } while (local_1c != (int *)0x0);
        }
        local_8 = local_8 + 1;
        local_14 = local_14 + 1;
        param_2 = (int *)((int)param_2 + -1);
      } while (0 < (int)param_2);
      param_1 = (int *)((int)param_1 + 0xc002);
      if ((short)(ushort)param_1 < 1) {
LAB_10013c68:
        param_1._0_2_ = (ushort)param_1 - 1;
        if ((short)(ushort)param_1 < 0) {
          iVar8 = -(int)(short)(ushort)param_1;
          param_1._0_2_ = (ushort)param_1 + (short)iVar8;
          do {
            if ((local_28 & 1) != 0) {
              local_18 = local_18 + 1;
            }
            FUN_10012e09((uint *)&local_28);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          if (local_18 != 0) {
            local_28 = local_28 | 1;
          }
        }
      }
      else {
        do {
          if ((bStack_1d & 0x80) != 0) break;
          FUN_10012ddb((uint *)&local_28);
          param_1 = (int *)((int)param_1 + 0xffff);
        } while (0 < (short)(ushort)param_1);
        if ((short)(ushort)param_1 < 1) goto LAB_10013c68;
      }
      if ((0x8000 < CONCAT11(uStack_27,local_28)) ||
         (sVar2 = CONCAT11(bStack_1d,uStack_1e), iVar3 = CONCAT22(local_20,uStack_22),
         iVar8 = CONCAT22(local_24,uStack_26),
         (CONCAT22(uStack_26,CONCAT11(uStack_27,local_28)) & 0x1ffff) == 0x18000)) {
        if (CONCAT22(local_24,uStack_26) == -1) {
          iVar8 = 0;
          if (CONCAT22(local_20,uStack_22) == -1) {
            if (CONCAT11(bStack_1d,uStack_1e) == -1) {
              param_1._0_2_ = (ushort)param_1 + 1;
              sVar2 = -0x8000;
              iVar3 = 0;
              iVar8 = 0;
            }
            else {
              sVar2 = CONCAT11(bStack_1d,uStack_1e) + 1;
              iVar3 = 0;
              iVar8 = 0;
            }
          }
          else {
            sVar2 = CONCAT11(bStack_1d,uStack_1e);
            iVar3 = CONCAT22(local_20,uStack_22) + 1;
          }
        }
        else {
          iVar8 = CONCAT22(local_24,uStack_26) + 1;
          sVar2 = CONCAT11(bStack_1d,uStack_1e);
          iVar3 = CONCAT22(local_20,uStack_22);
        }
      }
      local_24 = (short)((uint)iVar8 >> 0x10);
      uStack_26 = (undefined2)iVar8;
      local_20 = (undefined2)((uint)iVar3 >> 0x10);
      uStack_22 = (undefined2)iVar3;
      bStack_1d = (byte)((ushort)sVar2 >> 8);
      uStack_1e = (undefined1)sVar2;
      if (0x7ffe < (ushort)param_1) goto LAB_10013d11;
      uVar6 = (ushort)param_1 | uVar11;
      *(undefined2 *)piVar4 = uStack_26;
      *(uint *)((int)piVar4 + 2) = CONCAT22(uStack_22,local_24);
      *(uint *)((int)piVar4 + 6) = CONCAT13(bStack_1d,CONCAT12(uStack_1e,local_20));
    }
    *(ushort *)((int)piVar4 + 10) = uVar6;
  }
  else {
LAB_10013d11:
    piVar4[1] = 0;
    *piVar4 = 0;
    piVar4[2] = (-(uint)(uVar11 != 0) & 0x80000000) + 0x7fff8000;
  }
  return;
}



// ============================================================
// FUN_10013d31 @ 0x10013d31 124B
// ============================================================

void __cdecl FUN_10013d31(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 uStack_a;
  int iStack_8;
  
  puVar3 = &DAT_10027eb0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      puVar3 = (undefined *)0x10028010;
    }
    if (param_3 == 0) {
      *(undefined2 *)param_1 = 0;
    }
    while (param_2 != 0) {
      puVar3 = puVar3 + 0x54;
      uVar1 = (int)param_2 >> 3;
      uVar2 = param_2 & 7;
      param_2 = uVar1;
      if (uVar2 != 0) {
        piVar4 = (int *)(puVar3 + uVar2 * 0xc);
        if (0x7fff < *(ushort *)(puVar3 + uVar2 * 0xc)) {
          local_10 = (undefined2)*piVar4;
          local_e._0_2_ = (undefined2)((uint)*piVar4 >> 0x10);
          local_e._2_2_ = (undefined2)piVar4[1];
          uStack_a = (undefined2)((uint)piVar4[1] >> 0x10);
          iStack_8 = piVar4[2];
          local_e = CONCAT22(local_e._2_2_,(undefined2)local_e) + -1;
          piVar4 = (int *)&local_10;
        }
        FUN_10013b11(param_1,piVar4);
      }
    }
  }
  return;
}



// ============================================================
// FUN_10013dad @ 0x10013dad 49B
// ============================================================

undefined4 __cdecl FUN_10013dad(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    FUN_1001284d((uint)param_1);
    uVar1 = FUN_10013dde(param_1);
    FUN_1001289f((uint)param_1);
  }
  else {
    param_1[3] = 0;
  }
  return uVar1;
}



// ============================================================
// FUN_10013dde @ 0x10013dde 76B
// ============================================================

undefined4 __cdecl FUN_10013dde(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(byte *)(param_1 + 3) & 0x83) != 0) {
    uVar2 = FUN_10013852(param_1);
    FUN_10014460(param_1);
    iVar1 = FUN_10014380(param_1[4]);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if ((undefined *)param_1[7] != (undefined *)0x0) {
      FUN_1000b70f((undefined *)param_1[7]);
      param_1[7] = 0;
    }
  }
  param_1[3] = 0;
  return uVar2;
}



// ============================================================
// FUN_10013e2a @ 0x10013e2a 147B
// ============================================================

undefined4 __cdecl FUN_10013e2a(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_1002b740 <= param_1) {
LAB_10013eab:
    pDVar3 = FUN_1000d0cd();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_1002b640)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_10013eab;
  FUN_10013722(param_1);
  if ((*(byte *)((&DAT_1002b640)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_100136e0(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_10013ea0;
    pDVar3 = FUN_1000d0d6();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1000d0cd();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_10013ea0:
  FUN_10013781(param_1);
  return uVar5;
}



// ============================================================
// FUN_10013ebd @ 0x10013ebd 597B
// ============================================================

int __cdecl
FUN_10013ebd(LCID param_1,DWORD param_2,byte *param_3,int param_4,byte *param_5,int param_6,
            UINT param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  undefined4 *unaff_FS_OFFSET;
  _cpinfo local_40;
  undefined1 *local_2c;
  PCNZWCH local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1001ff58;
  puStack_10 = &LAB_1000da9c;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  local_1c = &stack0xffffffb0;
  iVar3 = 1;
  puVar1 = &stack0xffffffb0;
  if (DAT_1002a608 == 0) {
    iVar2 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar2 != 0) {
      DAT_1002a608 = 1;
      puVar1 = local_1c;
      goto LAB_10013f30;
    }
    iVar2 = CompareStringA(0,0,"",1,"",1);
    if (iVar2 != 0) {
      DAT_1002a608 = 2;
      puVar1 = local_1c;
      goto LAB_10013f30;
    }
  }
  else {
LAB_10013f30:
    local_1c = puVar1;
    if (0 < param_4) {
      param_4 = FUN_1000fed7((char *)param_3,param_4);
    }
    if (0 < param_6) {
      param_6 = FUN_1000fed7((char *)param_5,param_6);
    }
    if (DAT_1002a608 == 2) {
      iVar3 = CompareStringA(param_1,param_2,(PCNZCH)param_3,param_4,(PCNZCH)param_5,param_6);
      goto LAB_10014128;
    }
    if (DAT_1002a608 == 1) {
      if (param_7 == 0) {
        param_7 = DAT_1002a4a0;
      }
      if ((param_4 == 0) || (param_6 == 0)) {
        if (param_4 == param_6) {
LAB_10013fa8:
          iVar3 = 2;
          goto LAB_10014128;
        }
        if (1 < param_6) goto LAB_10014128;
        if (param_4 < 2) {
          BVar4 = GetCPInfo(param_7,&local_40);
          if (BVar4 == 0) goto LAB_10014126;
          if (param_4 < 1) {
            if (0 < param_6) {
              if (1 < local_40.MaxCharSize) {
                pBVar5 = local_40.LeadByte;
                while ((local_40.LeadByte[0] != 0 && (pBVar5[1] != 0))) {
                  if ((*pBVar5 <= *param_5) && (*param_5 <= pBVar5[1])) goto LAB_10013fa8;
                  pBVar5 = pBVar5 + 2;
                  local_40.LeadByte[0] = *pBVar5;
                }
              }
              goto LAB_10014128;
            }
            goto LAB_1001403b;
          }
          if (1 < local_40.MaxCharSize) {
            pBVar5 = local_40.LeadByte;
            while ((local_40.LeadByte[0] != 0 && (pBVar5[1] != 0))) {
              if ((*pBVar5 <= *param_3) && (*param_3 <= pBVar5[1])) goto LAB_10013fa8;
              pBVar5 = pBVar5 + 2;
              local_40.LeadByte[0] = *pBVar5;
            }
          }
        }
        iVar3 = 3;
        goto LAB_10014128;
      }
LAB_1001403b:
      local_20 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,param_4,(LPWSTR)0x0,0);
      if (local_20 != 0) {
        local_8 = 0;
        FUN_1000cd40();
        local_8 = 0xffffffff;
        if ((&stack0x00000000 != (undefined1 *)0x50) &&
           (local_28 = (PCNZWCH)&stack0xffffffb0, local_1c = &stack0xffffffb0,
           iVar3 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,param_4,(LPWSTR)&stack0xffffffb0,
                                       local_20), iVar3 != 0)) {
          iVar3 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0);
          if (iVar3 != 0) {
            local_8 = 1;
            local_24 = iVar3;
            FUN_1000cd40();
            local_8 = 0xffffffff;
            if ((&stack0x00000000 != (undefined1 *)0x50) &&
               (local_2c = &stack0xffffffb0, local_1c = &stack0xffffffb0,
               iVar2 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,
                                           (LPWSTR)&stack0xffffffb0,iVar3), iVar2 != 0)) {
              iVar3 = CompareStringW(param_1,param_2,local_28,local_20,(PCNZWCH)&stack0xffffffb0,
                                     iVar3);
              goto LAB_10014128;
            }
          }
        }
      }
    }
  }
LAB_10014126:
  iVar3 = 0;
LAB_10014128:
  *unaff_FS_OFFSET = local_14;
  return iVar3;
}



// ============================================================
// FUN_1001413a @ 0x1001413a 391B
// ============================================================

undefined4 __cdecl FUN_1001413a(uint *param_1,int param_2)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  size_t sVar5;
  uint *lpName;
  byte *pbVar6;
  bool bVar7;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  puVar2 = (uint *)FUN_1000c775((byte *)param_1,0x3d);
  if (puVar2 == (uint *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == puVar2) {
    return 0xffffffff;
  }
  bVar7 = *(byte *)((int)puVar2 + 1) == 0;
  if (DAT_1002a29c == DAT_1002a2a0) {
    DAT_1002a29c = (byte *)FUN_10014319((int *)DAT_1002a29c);
  }
  if (DAT_1002a29c == (byte *)0x0) {
    if ((param_2 == 0) || (DAT_1002a2a4 == (undefined4 *)0x0)) {
      if (bVar7) {
        return 0;
      }
      DAT_1002a29c = _malloc(4);
      if (DAT_1002a29c == (byte *)0x0) {
        return 0xffffffff;
      }
      pbVar4 = DAT_1002a29c + 1;
      pbVar6 = DAT_1002a29c + 2;
      pbVar1 = DAT_1002a29c + 3;
      DAT_1002a29c[0] = 0;
      *pbVar4 = 0;
      *pbVar6 = 0;
      *pbVar1 = 0;
      if (DAT_1002a2a4 == (undefined4 *)0x0) {
        DAT_1002a2a4 = _malloc(4);
        if (DAT_1002a2a4 == (undefined4 *)0x0) {
          return 0xffffffff;
        }
        *DAT_1002a2a4 = 0;
      }
    }
    else {
      iVar3 = FUN_1001399a();
      if (iVar3 != 0) {
        return 0xffffffff;
      }
    }
  }
  pbVar4 = DAT_1002a29c;
  iVar3 = FUN_100142c1((uchar *)param_1,(int)puVar2 - (int)param_1);
  if ((iVar3 < 0) || (*(int *)pbVar4 == 0)) {
    if (bVar7) {
      return 0;
    }
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    pbVar4 = FUN_1000be07(pbVar4,(uint *)(iVar3 * 4 + 8));
    if (pbVar4 == (byte *)0x0) {
      return 0xffffffff;
    }
    *(uint **)(pbVar4 + iVar3 * 4) = param_1;
    pbVar6 = pbVar4 + iVar3 * 4 + 4;
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
  }
  else {
    if (!bVar7) {
      *(uint **)(pbVar4 + iVar3 * 4) = param_1;
      goto LAB_1001426e;
    }
    pbVar6 = pbVar4 + iVar3 * 4;
    FUN_1000b70f(*(undefined **)(pbVar4 + iVar3 * 4));
    for (; *(int *)pbVar6 != 0; pbVar6 = pbVar6 + 4) {
      iVar3 = iVar3 + 1;
      *(int *)pbVar6 = *(int *)(pbVar6 + 4);
    }
    pbVar4 = FUN_1000be07(pbVar4,(uint *)(iVar3 << 2));
    if (pbVar4 == (byte *)0x0) goto LAB_1001426e;
  }
  DAT_1002a29c = pbVar4;
LAB_1001426e:
  if (param_2 != 0) {
    sVar5 = _strlen((char *)param_1);
    lpName = _malloc(sVar5 + 2);
    if (lpName != (uint *)0x0) {
      FUN_10011110(lpName,param_1);
      pbVar4 = (byte *)(((int)lpName - (int)param_1) + (int)puVar2);
      *pbVar4 = 0;
      SetEnvironmentVariableA((LPCSTR)lpName,(LPCSTR)(~-(uint)bVar7 & (uint)(pbVar4 + 1)));
      FUN_1000b70f((undefined *)lpName);
    }
  }
  return 0;
}



// ============================================================
// FUN_100142c1 @ 0x100142c1 88B
// ============================================================

int __cdecl FUN_100142c1(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_1002a29c;
  piVar2 = DAT_1002a29c;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_1002a29c >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_1002a29c >> 2;
}



// ============================================================
// FUN_10014319 @ 0x10014319 103B
// ============================================================

undefined4 * __cdecl FUN_10014319(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = _malloc(iVar5 * 4 + 4);
    if (puVar3 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    puVar4 = (uint *)*param_1;
    puVar6 = puVar3;
    while (puVar4 != (uint *)0x0) {
      param_1 = param_1 + 1;
      puVar4 = FUN_1000cd6f(puVar4);
      *puVar6 = puVar4;
      puVar6 = puVar6 + 1;
      puVar4 = (uint *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (undefined4 *)0x0;
}



// ============================================================
// FUN_10014380 @ 0x10014380 93B
// ============================================================

undefined4 __cdecl FUN_10014380(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_1002b740) &&
     ((*(byte *)((&DAT_1002b640)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10013722(param_1);
    uVar1 = FUN_100143dd(param_1);
    FUN_10013781(param_1);
    return uVar1;
  }
  pDVar2 = FUN_1000d0cd();
  *pDVar2 = 9;
  pDVar2 = FUN_1000d0d6();
  *pDVar2 = 0;
  return 0xffffffff;
}



// ============================================================
// FUN_100143dd @ 0x100143dd 131B
// ============================================================

undefined4 __cdecl FUN_100143dd(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_100136e0(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100136e0(2);
      iVar2 = FUN_100136e0(1);
      if (iVar2 == iVar1) goto LAB_1001442b;
    }
    hObject = (HANDLE)FUN_100136e0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1001442d;
    }
  }
LAB_1001442b:
  DVar4 = 0;
LAB_1001442d:
  FUN_10013661(param_1);
  *(undefined1 *)((&DAT_1002b640)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1000d05a(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// ============================================================
// FUN_10014460 @ 0x10014460 43B
// ============================================================

void __cdecl FUN_10014460(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_1000b70f((undefined *)param_1[2]);
    *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) & 0xfbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}



// ============================================================
// FUN_100144aa @ 0x100144aa 120B
// ============================================================

undefined4 FUN_100144aa(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *this;
  int unaff_EBP;
  
  FUN_1000c418();
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  if ((int)uVar1 < *(int *)(*this + -8)) {
    *(undefined **)(unaff_EBP + 0xc) = PTR_DAT_10024d00;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_10014fa1(this,(undefined4 *)(unaff_EBP + 0xc),uVar1,0,0);
    FUN_10014cec(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + 0xc));
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    FUN_10014f77((int *)(unaff_EBP + 0xc));
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
  }
  else {
    FUN_10014cec(*(void **)(unaff_EBP + 8),this);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



// ============================================================
// FUN_10014522 @ 0x10014522 34B
// ============================================================

int __thiscall FUN_10014522(void *this,byte param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = FUN_1000cbb5(*(byte **)this,(uint)param_1);
  if (pbVar1 == (byte *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (int)pbVar1 - *(int *)this;
  }
  return iVar2;
}



// ============================================================
// InitString @ 0x10014544 41B
// ============================================================

/* Library Function - Single Match
    public: void __thiscall CSimpleException::InitString(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CSimpleException::InitString(CSimpleException *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 0xc) = 1;
  iVar1 = FUN_10016aba(*(UINT *)(this + 0x94),(LPSTR)(this + 0x14),0x80);
  *(uint *)(this + 0x10) = (uint)(iVar1 != 0);
  return;
}



// ============================================================
// FUN_100145b0 @ 0x100145b0 25B
// ============================================================

void FUN_100145b0(void)

{
  undefined *local_8;
  
  local_8 = &DAT_100283f8;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_8,&DAT_10021438);
}



// ============================================================
// FUN_100145c9 @ 0x100145c9 76B
// ============================================================

undefined4 * __thiscall
FUN_100145c9(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  
  local_28 = param_6;
  local_24 = param_5;
  local_20 = param_4;
  local_1c = param_3;
  local_18 = param_2 + -1;
  local_14 = param_1 + -0x76c;
  local_8 = param_7;
  uVar1 = FUN_1000d637(&local_28);
  *(undefined4 *)this = uVar1;
  return this;
}



// ============================================================
// FUN_10014615 @ 0x10014615 76B
// ============================================================

undefined4 * __thiscall FUN_10014615(void *this,ushort *param_1,undefined4 param_2)

{
  if (*param_1 < 0x76c) {
    *(undefined4 *)this = 0;
  }
  else {
    FUN_100145c9(&param_1,(uint)*param_1,(uint)param_1[1],(uint)param_1[3],(uint)param_1[4],
                 (uint)param_1[5],(uint)param_1[6],param_2);
    *(ushort **)this = param_1;
  }
  return this;
}



// ============================================================
// FUN_10014661 @ 0x10014661 76B
// ============================================================

undefined4 * __thiscall FUN_10014661(void *this,FILETIME *param_1,undefined4 param_2)

{
  BOOL BVar1;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  BVar1 = FileTimeToLocalFileTime(param_1,&local_c);
  if ((BVar1 != 0) && (BVar1 = FileTimeToSystemTime(&local_c,&local_1c), BVar1 != 0)) {
    FUN_10014615(&param_1,&local_1c.wYear,param_2);
    *(FILETIME **)this = param_1;
    return this;
  }
  *(undefined4 *)this = 0;
  return this;
}



// ============================================================
// FUN_100146ad @ 0x100146ad 35B
// ============================================================

void __thiscall FUN_100146ad(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined ***)this = &PTR_LAB_1001ea20;
  *(undefined4 *)((int)this + 0x18) = param_1;
  return;
}



// ============================================================
// FUN_100146d0 @ 0x100146d0 28B
// ============================================================

undefined * __thiscall FUN_100146d0(void *this,byte param_1)

{
  FUN_1001470c();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// RemoveAll @ 0x100146ec 32B
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
  FUN_10014839(*(undefined4 **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// ============================================================
// FUN_1001470c @ 0x1001470c 41B
// ============================================================

void FUN_1001470c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001ea20;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  RemoveAll((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10014735 @ 0x10014735 88B
// ============================================================

void __thiscall FUN_10014735(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x10) == 0) {
    iVar1 = FUN_10014819((undefined4 *)((int)this + 0x14),*(int *)((int)this + 0x18),0xc);
    iVar3 = *(int *)((int)this + 0x18);
    puVar2 = (undefined4 *)(iVar1 + -8 + iVar3 * 0xc);
    if (-1 < iVar3 + -1) {
      do {
        *puVar2 = *(undefined4 *)((int)this + 0x10);
        *(undefined4 **)((int)this + 0x10) = puVar2;
        puVar2 = puVar2 + -3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar2 = *(undefined4 **)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = *puVar2;
  puVar2[1] = param_1;
  *puVar2 = param_2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  puVar2[2] = 0;
  return;
}



// ============================================================
// FUN_1001478d @ 0x1001478d 25B
// ============================================================

void __thiscall FUN_1001478d(void *this,undefined4 *param_1)

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
// AddTail @ 0x100147a6 41B
// ============================================================

/* Library Function - Multiple Matches With Same Base Name
    public: struct __POSITION * __thiscall CList<struct HWND__ *,struct HWND__ *>::AddTail(struct
   HWND__ *)
    public: struct __POSITION * __thiscall CList<class IControlSiteFactory *,class
   IControlSiteFactory *>::AddTail(class IControlSiteFactory *)
    public: struct __POSITION * __thiscall CObList::AddTail(class CObject *)
    public: struct __POSITION * __thiscall CPtrList::AddTail(void *)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall AddTail(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_10014735(this,*(undefined4 *)((int)this + 8),0);
  *(undefined4 *)(iVar1 + 8) = param_1;
  if (*(int **)((int)this + 8) == (int *)0x0) {
    *(int *)((int)this + 4) = iVar1;
  }
  else {
    **(int **)((int)this + 8) = iVar1;
  }
  *(int *)((int)this + 8) = iVar1;
  return;
}



// ============================================================
// FUN_100147cf @ 0x100147cf 36B
// ============================================================

int __fastcall FUN_100147cf(void *param_1)

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
  FUN_1001478d(param_1,piVar1);
  return iVar3;
}



// ============================================================
// FUN_100147f3 @ 0x100147f3 38B
// ============================================================

undefined4 * __thiscall FUN_100147f3(void *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((param_1 < *(int *)((int)this + 0xc)) && (-1 < param_1)) {
    puVar1 = *(undefined4 **)((int)this + 4);
    for (; param_1 != 0; param_1 = param_1 + -1) {
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}



// ============================================================
// FUN_10014819 @ 0x10014819 32B
// ============================================================

void FUN_10014819(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10014cb8(param_2 * param_3 + 4);
  *puVar1 = *param_1;
  *param_1 = puVar1;
  return;
}



// ============================================================
// FUN_10014839 @ 0x10014839 22B
// ============================================================

void __fastcall FUN_10014839(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    FUN_10014ce1((undefined *)param_1);
    param_1 = puVar1;
  }
  return;
}



// ============================================================
// FUN_1001484f @ 0x1001484f 23B
// ============================================================

void __fastcall FUN_1001484f(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1001eba8;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



// ============================================================
// FUN_10014866 @ 0x10014866 28B
// ============================================================

undefined * __thiscall FUN_10014866(void *this,byte param_1)

{
  FUN_10014882();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10014882 @ 0x10014882 45B
// ============================================================

void FUN_10014882(void)

{
  undefined *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001eba8;
  puVar1 = (undefined *)extraout_ECX[1];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10014ce1(puVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_100148af @ 0x100148af 247B
// ============================================================

void __thiscall FUN_100148af(void *this,size_t param_1,size_t param_2)

{
  void *_Dst;
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0xffffffff) {
    *(size_t *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    FUN_10014ce1(*(undefined **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    return;
  }
  if (*(int *)((int)this + 4) == 0) {
    _Dst = FUN_10014cb8(param_1);
    *(void **)((int)this + 4) = _Dst;
    _memset(_Dst,0,param_1);
    *(size_t *)((int)this + 0xc) = param_1;
LAB_10014900:
    *(size_t *)((int)this + 8) = param_1;
    return;
  }
  if ((int)param_1 <= *(int *)((int)this + 0xc)) {
    iVar1 = *(int *)((int)this + 8);
    if (iVar1 < (int)param_1) {
      _memset((void *)(iVar1 + *(int *)((int)this + 4)),0,param_1 - iVar1);
    }
    goto LAB_10014900;
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 != 0) goto LAB_10014954;
  iVar1 = *(int *)((int)this + 8) / 8;
  if (3 < iVar1) {
    if (0x400 < iVar1) {
      iVar1 = 0x400;
      goto LAB_10014954;
    }
    if (3 < iVar1) goto LAB_10014954;
  }
  iVar1 = 4;
LAB_10014954:
  param_2 = iVar1 + *(int *)((int)this + 0xc);
  if ((int)param_2 <= (int)param_1) {
    param_2 = param_1;
  }
  puVar2 = FUN_10014cb8(param_2);
  FUN_1000c440(puVar2,*(undefined4 **)((int)this + 4),*(uint *)((int)this + 8));
  _memset((void *)(*(int *)((int)this + 8) + (int)puVar2),0,param_1 - *(int *)((int)this + 8));
  FUN_10014ce1(*(undefined **)((int)this + 4));
  *(undefined4 **)((int)this + 4) = puVar2;
  *(size_t *)((int)this + 8) = param_1;
  *(size_t *)((int)this + 0xc) = param_2;
  return;
}



// ============================================================
// CMap<> @ 0x100149f3 39B
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
  *(undefined ***)this = &PTR_LAB_1001f794;
  *(undefined4 *)((int)this + 8) = 0x11;
  *(undefined4 *)((int)this + 0x18) = param_1;
  return;
}



// ============================================================
// FUN_10014a1a @ 0x10014a1a 28B
// ============================================================

undefined * __thiscall FUN_10014a1a(void *this,byte param_1)

{
  FUN_10014aa6();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10014a36 @ 0x10014a36 69B
// ============================================================

void __thiscall FUN_10014a36(void *this,int param_1,int param_2)

{
  void *_Dst;
  
  if (*(undefined **)((int)this + 4) != (undefined *)0x0) {
    FUN_10014ce1(*(undefined **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_2 != 0) {
    _Dst = FUN_10014cb8(param_1 << 2);
    *(void **)((int)this + 4) = _Dst;
    _memset(_Dst,0,param_1 << 2);
  }
  *(int *)((int)this + 8) = param_1;
  return;
}



// ============================================================
// RemoveAll @ 0x10014a7b 43B
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
    FUN_10014ce1(*(undefined **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_10014839(*(undefined4 **)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// ============================================================
// FUN_10014aa6 @ 0x10014aa6 41B
// ============================================================

void FUN_10014aa6(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001f794;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  RemoveAll((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10014acf @ 0x10014acf 77B
// ============================================================

void __fastcall FUN_10014acf(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = FUN_10014819((undefined4 *)(param_1 + 0x14),*(int *)(param_1 + 0x18),0xc);
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
// FUN_10014b1c @ 0x10014b1c 25B
// ============================================================

void __thiscall FUN_10014b1c(void *this,undefined4 *param_1)

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
// FUN_10014b35 @ 0x10014b35 50B
// ============================================================

undefined4 * __thiscall FUN_10014b35(void *this,uint param_1,uint *param_2)

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
// FUN_10014b67 @ 0x10014b67 51B
// ============================================================

undefined4 __thiscall FUN_10014b67(void *this,uint param_1)

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
// FUN_10014b9a @ 0x10014b9a 80B
// ============================================================

undefined4 * __thiscall FUN_10014b9a(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  
  uVar1 = param_1;
  puVar2 = FUN_10014b35(this,param_1,&param_1);
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      FUN_10014a36(this,*(int *)((int)this + 8),1);
    }
    puVar2 = (undefined4 *)FUN_10014acf((int)this);
    puVar2[1] = uVar1;
    *puVar2 = *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
    *(undefined4 **)(*(int *)((int)this + 4) + param_1 * 4) = puVar2;
  }
  return puVar2 + 2;
}



// ============================================================
// FUN_10014bea @ 0x10014bea 66B
// ============================================================

undefined4 __thiscall FUN_10014bea(void *this,uint param_1)

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
        FUN_10014b1c(this,puVar3);
        return 1;
      }
      puVar5 = puVar3;
      puVar2 = (undefined4 *)*puVar3;
    }
  }
  return 0;
}



// ============================================================
// FUN_10014c2c @ 0x10014c2c 114B
// ============================================================

void __thiscall FUN_10014c2c(void *this,int *param_1,int *param_2,int *param_3)

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
// FUN_10014cb8 @ 0x10014cb8 41B
// ============================================================

void * __cdecl FUN_10014cb8(size_t param_1)

{
  void *pvVar1;
  int iVar2;
  
  while( true ) {
    pvVar1 = _malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (PTR_FUN_10024cc8 == (undefined *)0x0) break;
    iVar2 = (*(code *)PTR_FUN_10024cc8)(param_1);
    if (iVar2 == 0) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



// ============================================================
// FUN_10014cec @ 0x10014cec 51B
// ============================================================

int * __thiscall FUN_10014cec(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + -0xc) < 0) {
    *(undefined **)this = PTR_DAT_10024d00;
    FUN_100150b4(this,(LPCSTR)*param_1);
  }
  else {
    *(int *)this = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + -0xc));
  }
  return this;
}



// ============================================================
// FUN_10014de4 @ 0x10014de4 130B
// ============================================================

void __thiscall FUN_10014de4(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == 0) {
    *(undefined **)this = PTR_DAT_10024d00;
  }
  else {
    iVar2 = 0x40;
    if ((((param_1 < 0x41) || (iVar2 = 0x80, param_1 < 0x81)) || (iVar2 = 0x100, param_1 < 0x101))
       || (iVar2 = 0x200, param_1 < 0x201)) {
      piVar1 = FUN_1000b084();
      piVar1[2] = iVar2;
    }
    else {
      piVar1 = FUN_10014cb8(param_1 + 0xd);
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
// FUN_10014e66 @ 0x10014e66 72B
// ============================================================

void __fastcall FUN_10014e66(undefined4 *param_1)

{
  int iVar1;
  undefined *this;
  
  iVar1 = param_1[2];
  if (iVar1 == 0x40) {
    this = &DAT_10028330;
  }
  else if (iVar1 == 0x80) {
    this = &DAT_10028308;
  }
  else if (iVar1 == 0x100) {
    this = &DAT_100282e0;
  }
  else {
    if (iVar1 != 0x200) {
      FUN_10014ce1((undefined *)param_1);
      return;
    }
    this = &DAT_100282b8;
  }
  FUN_1000b113(this,param_1);
  return;
}



// ============================================================
// FUN_10014eae @ 0x10014eae 49B
// ============================================================

void __fastcall FUN_10014eae(int *param_1)

{
  LONG LVar1;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_10024d04) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_10014e66((undefined4 *)(*param_1 + -0xc));
    }
    *param_1 = (int)PTR_DAT_10024d00;
  }
  return;
}



// ============================================================
// FUN_10014edf @ 0x10014edf 35B
// ============================================================

void FUN_10014edf(LONG *param_1)

{
  LONG LVar1;
  
  if (param_1 != (LONG *)PTR_DAT_10024d04) {
    LVar1 = InterlockedDecrement(param_1);
    if (LVar1 < 1) {
      FUN_10014e66(param_1);
    }
  }
  return;
}



// ============================================================
// FUN_10014f02 @ 0x10014f02 30B
// ============================================================

void __fastcall FUN_10014f02(int *param_1)

{
  if (*(int *)(*param_1 + -8) != 0) {
    if (-1 < *(int *)(*param_1 + -0xc)) {
      FUN_10014eae(param_1);
      return;
    }
    FUN_100150b4(param_1,&DAT_10028358);
  }
  return;
}



// ============================================================
// FUN_10014f20 @ 0x10014f20 46B
// ============================================================

void __fastcall FUN_10014f20(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (1 < (int)puVar1[-3]) {
    FUN_10014eae(param_1);
    FUN_10014de4(param_1,puVar1[-2]);
    FUN_1000c440((undefined4 *)*param_1,puVar1,puVar1[-2] + 1);
  }
  return;
}



// ============================================================
// FUN_10014f4e @ 0x10014f4e 41B
// ============================================================

void __thiscall FUN_10014f4e(void *this,int param_1)

{
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_10014eae(this);
    FUN_10014de4(this,param_1);
  }
  return;
}



// ============================================================
// FUN_10014f77 @ 0x10014f77 42B
// ============================================================

void __fastcall FUN_10014f77(int *param_1)

{
  LONG LVar1;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_10024d04) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_10014e66((undefined4 *)(*param_1 + -0xc));
    }
  }
  return;
}



// ============================================================
// FUN_10014fa1 @ 0x10014fa1 68B
// ============================================================

void __thiscall FUN_10014fa1(void *this,undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  if (param_4 + param_2 == 0) {
    *param_1 = PTR_DAT_10024d00;
  }
  else {
    FUN_10014de4(param_1,param_4 + param_2);
    FUN_1000c440((undefined4 *)*param_1,(undefined4 *)(*(int *)this + param_3),param_2);
  }
  return;
}



// ============================================================
// FUN_10014fe5 @ 0x10014fe5 82B
// ============================================================

undefined4 * __thiscall FUN_10014fe5(void *this,LPCSTR param_1)

{
  uint uVar1;
  
  *(undefined **)this = PTR_DAT_10024d00;
  if (param_1 != (LPCSTR)0x0) {
    if ((short)((uint)param_1 >> 0x10) == 0) {
      FUN_10016a36((uint)param_1 & 0xffff);
    }
    else {
      uVar1 = lstrlenA(param_1);
      if (uVar1 != 0) {
        FUN_10014de4(this,uVar1);
        FUN_1000c440(*(undefined4 **)this,(undefined4 *)param_1,uVar1);
      }
    }
  }
  return this;
}



// ============================================================
// FUN_10015037 @ 0x10015037 45B
// ============================================================

void __thiscall FUN_10015037(void *this,uint param_1,undefined4 *param_2)

{
  FUN_10014f4e(this,param_1);
  FUN_1000c440(*(undefined4 **)this,param_2,param_1);
  *(uint *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return;
}



// ============================================================
// FUN_10015064 @ 0x10015064 80B
// ============================================================

int * __thiscall FUN_10015064(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)this;
  puVar2 = (undefined4 *)*param_1;
  if (puVar1 != puVar2) {
    if ((((int)puVar1[-3] < 0) && (puVar1 + -3 != (undefined4 *)PTR_DAT_10024d04)) ||
       ((int)puVar2[-3] < 0)) {
      FUN_10015037(this,puVar2[-2],puVar2);
    }
    else {
      FUN_10014eae(this);
      iVar3 = *param_1;
      *(int *)this = iVar3;
      InterlockedIncrement((LONG *)(iVar3 + -0xc));
    }
  }
  return this;
}



// ============================================================
// FUN_100150b4 @ 0x100150b4 39B
// ============================================================

void * __thiscall FUN_100150b4(void *this,LPCSTR param_1)

{
  uint uVar1;
  
  if (param_1 == (LPCSTR)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = lstrlenA(param_1);
  }
  FUN_10015037(this,uVar1,(undefined4 *)param_1);
  return this;
}



// ============================================================
// FUN_100150db @ 0x100150db 62B
// ============================================================

void __thiscall
FUN_100150db(void *this,uint param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  if (param_1 + param_3 != 0) {
    FUN_10014de4(this,param_1 + param_3);
    FUN_1000c440(*(undefined4 **)this,param_2,param_1);
    FUN_1000c440((undefined4 *)(*(int *)this + param_1),param_4,param_3);
  }
  return;
}



// ============================================================
// FUN_10015119 @ 0x10015119 116B
// ============================================================

undefined4 FUN_10015119(void)

{
  undefined *puVar1;
  uint uVar2;
  int unaff_EBP;
  
  FUN_1000c418();
  puVar1 = PTR_DAT_10024d00;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = lstrlenA(*(LPCSTR *)(unaff_EBP + 0x10));
  }
  FUN_100150db((void *)(unaff_EBP + -0x10),((undefined4 *)**(undefined4 **)(unaff_EBP + 0xc))[-2],
               (undefined4 *)**(undefined4 **)(unaff_EBP + 0xc),uVar2,
               *(undefined4 **)(unaff_EBP + 0x10));
  FUN_10014cec(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_10014f77((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}



// ============================================================
// FUN_1001518d @ 0x1001518d 95B
// ============================================================

void __thiscall FUN_1001518d(void *this,uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)this;
    if (((int)puVar1[-3] < 2) && ((int)(puVar1[-2] + param_1) <= (int)puVar1[-1])) {
      FUN_1000c440((undefined4 *)(puVar1[-2] + (int)puVar1),param_2,param_1);
      *(int *)(*(int *)this + -8) = *(int *)(*(int *)this + -8) + param_1;
      *(undefined1 *)(*(int *)(*(int *)this + -8) + *(int *)this) = 0;
    }
    else {
      FUN_100150db(this,puVar1[-2],puVar1,param_1,param_2);
      FUN_10014edf(puVar1 + -3);
    }
  }
  return;
}



// ============================================================
// FUN_100151ec @ 0x100151ec 39B
// ============================================================

void * __thiscall FUN_100151ec(void *this,LPCSTR param_1)

{
  uint uVar1;
  
  if (param_1 == (LPCSTR)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = lstrlenA(param_1);
  }
  FUN_1001518d(this,uVar1,(undefined4 *)param_1);
  return this;
}



// ============================================================
// FUN_10015213 @ 0x10015213 21B
// ============================================================

void * __fastcall FUN_10015213(void *param_1)

{
  FUN_1001518d(param_1,1,(undefined4 *)&stack0x00000004);
  return param_1;
}



// ============================================================
// FUN_10015228 @ 0x10015228 79B
// ============================================================

int __thiscall FUN_10015228(void *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  if ((1 < (int)puVar1[-3]) || ((int)puVar1[-1] < param_1)) {
    iVar2 = puVar1[-2];
    if (param_1 < iVar2) {
      param_1 = iVar2;
    }
    FUN_10014de4(this,param_1);
    FUN_1000c440(*(undefined4 **)this,puVar1,iVar2 + 1);
    *(int *)(*(int *)this + -8) = iVar2;
    FUN_10014edf(puVar1 + -3);
  }
  return *(int *)this;
}



// ============================================================
// FUN_10015277 @ 0x10015277 40B
// ============================================================

void __thiscall FUN_10015277(void *this,int param_1)

{
  FUN_10014f20(this);
  if (param_1 == -1) {
    param_1 = lstrlenA(*(LPCSTR *)this);
  }
  *(int *)(*(int *)this + -8) = param_1;
  *(undefined1 *)(*(int *)this + param_1) = 0;
  return;
}



// ============================================================
// FUN_100152c7 @ 0x100152c7 85B
// ============================================================

void __thiscall FUN_100152c7(void *this,UINT param_1)

{
  int iVar1;
  CHAR local_208 [512];
  int local_8;
  
  iVar1 = (**(code **)(*(int *)this + 0xc))(local_208,0x200,&local_8);
  if (iVar1 == 0) {
    FUN_1001a757();
  }
  else {
    FUN_1001a71f(local_208,param_1,local_8);
  }
  return;
}



// ============================================================
// FUN_1001531c @ 0x1001531c 22B
// ============================================================

undefined4 * __fastcall FUN_1001531c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[1] = 0;
  puVar1 = (undefined4 *)FUN_10015332();
  *param_1 = *puVar1;
  *puVar1 = param_1;
  return param_1;
}



// ============================================================
// FUN_10015332 @ 0x10015332 40B
// ============================================================

int FUN_10015332(void)

{
  DWORD dwErrCode;
  int iVar1;
  
  dwErrCode = GetLastError();
  iVar1 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
  SetLastError(dwErrCode);
  return iVar1 + 0x10;
}



// ============================================================
// FUN_1001535a @ 0x1001535a 30B
// ============================================================

void FUN_1001535a(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_10015332();
  piVar1 = (int *)*piVar3;
  piVar2 = (int *)piVar1[1];
  if (piVar2 != (int *)0x0) {
    FUN_100152b5(piVar2);
  }
  *piVar3 = *piVar1;
  return;
}



// ============================================================
// FUN_10015378 @ 0x10015378 28B
// ============================================================

undefined * __thiscall FUN_10015378(void *this,byte param_1)

{
  FUN_10015453();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10015394 @ 0x10015394 31B
// ============================================================

void __thiscall FUN_10015394(void *this,undefined4 param_1)

{
  *(undefined **)((int)this + 0xc) = PTR_DAT_10024d00;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_1001eb0c;
  *(undefined4 *)((int)this + 4) = param_1;
  return;
}



// ============================================================
// FUN_100153b3 @ 0x100153b3 160B
// ============================================================

undefined4 * FUN_100153b3(void)

{
  undefined *puVar1;
  DWORD DVar2;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  puVar1 = PTR_DAT_10024d00;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this[3] = puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *this = &PTR_LAB_1001eb0c;
  FUN_1001529f(unaff_EBP + -0x24);
  *(undefined **)(unaff_EBP + -0x14) = PTR_DAT_10024d00;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined ***)(unaff_EBP + -0x24) = &PTR_LAB_1001eb64;
  FUN_100150b4((void *)(unaff_EBP + -0x14),(LPCSTR)0x0);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  DVar2 = FUN_10015510(this,*(LPCSTR *)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),unaff_EBP + -0x24)
  ;
  if (DVar2 == 0) {
    FUN_10016daf();
  }
  *(undefined ***)(unaff_EBP + -0x24) = &PTR_LAB_1001eb64;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_10014f77((int *)(unaff_EBP + -0x14));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}



// ============================================================
// FUN_10015453 @ 0x10015453 72B
// ============================================================

void FUN_10015453(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001eb0c;
  iVar1 = extraout_ECX[1];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((iVar1 != -1) && (extraout_ECX[2] != 0)) {
    FUN_1001572b((int)extraout_ECX);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_10014f77(extraout_ECX + 3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1001549b @ 0x1001549b 117B
// ============================================================

int * __fastcall FUN_1001549b(HANDLE param_1)

{
  void *this;
  int *piVar1;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  HANDLE hSourceHandle;
  HANDLE *lpTargetHandle;
  DWORD DVar2;
  BOOL BVar3;
  DWORD dwOptions;
  HANDLE local_8;
  
  local_8 = param_1;
  this = FUN_10014cb8(0x10);
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)FUN_10015394(this,0xffffffff);
  }
  dwOptions = 2;
  BVar3 = 0;
  lpTargetHandle = &local_8;
  DVar2 = 0;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = *(HANDLE *)((int)param_1 + 4);
  hSourceProcessHandle = GetCurrentProcess();
  BVar3 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          DVar2,BVar3,dwOptions);
  if (BVar3 == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(1);
    }
    DVar2 = GetLastError();
    FUN_10016cee(DVar2);
  }
  piVar1[1] = (int)local_8;
  piVar1[2] = *(int *)((int)param_1 + 8);
  return piVar1;
}



// ============================================================
// FUN_10015510 @ 0x10015510 285B
// ============================================================

DWORD __thiscall FUN_10015510(void *this,LPCSTR param_1,uint param_2,int param_3)

{
  uint uVar1;
  HANDLE pvVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  DWORD dwCreationDisposition;
  DWORD dwShareMode;
  CHAR local_114 [260];
  _SECURITY_ATTRIBUTES local_10;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  FUN_10014f02((int *)((int)this + 0xc));
  FUN_1001583c();
  FUN_100150b4((int *)((int)this + 0xc),local_114);
  DVar5 = 0;
  uVar1 = param_2 & 3;
  if (uVar1 == 0) {
    DVar5 = 0x80000000;
  }
  else if (uVar1 == 1) {
    DVar5 = 0x40000000;
  }
  else if (uVar1 == 2) {
    DVar5 = 0xc0000000;
  }
  uVar1 = param_2 & 0x70;
  DVar4 = 1;
  if ((uVar1 != 0) && (uVar1 != 0x10)) {
    dwShareMode = DVar4;
    if (uVar1 == 0x20) goto LAB_100155a7;
    if (uVar1 == 0x30) {
      dwShareMode = 2;
      goto LAB_100155a7;
    }
    if (uVar1 == 0x40) {
      dwShareMode = 3;
      goto LAB_100155a7;
    }
  }
  dwShareMode = 0;
LAB_100155a7:
  local_10.lpSecurityDescriptor = (LPVOID)0x0;
  local_10.bInheritHandle = ~(param_2 & 0xffff7fff) >> 7 & 1;
  local_10.nLength = 0xc;
  if ((param_2 & 0x1000) == 0) {
    dwCreationDisposition = 3;
  }
  else {
    dwCreationDisposition = (-(uint)((param_2 & 0x2000) != 0) & 2) + 2;
  }
  pvVar2 = CreateFileA(param_1,DVar5,dwShareMode,&local_10,dwCreationDisposition,0x80,(HANDLE)0x0);
  if (pvVar2 == (HANDLE)0xffffffff) {
    if (param_3 != 0) {
      DVar5 = GetLastError();
      *(DWORD *)(param_3 + 0xc) = DVar5;
      uVar3 = FUN_10016e1a(DVar5);
      *(undefined4 *)(param_3 + 8) = uVar3;
      FUN_100150b4((void *)(param_3 + 0x10),param_1);
    }
    DVar4 = 0;
  }
  else {
    *(HANDLE *)((int)this + 4) = pvVar2;
    *(undefined4 *)((int)this + 8) = 1;
  }
  return DVar4;
}



// ============================================================
// FUN_1001562d @ 0x1001562d 58B
// ============================================================

DWORD __thiscall FUN_1001562d(void *this,LPVOID param_1,DWORD param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    BVar1 = ReadFile(*(HANDLE *)((int)this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      FUN_10016cee(DVar2);
    }
  }
  return param_2;
}



// ============================================================
// FUN_10015667 @ 0x10015667 75B
// ============================================================

void __thiscall FUN_10015667(void *this,LPCVOID param_1,DWORD param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  
  DVar1 = param_2;
  if (param_2 != 0) {
    BVar2 = WriteFile(*(HANDLE *)((int)this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_10016cee(DVar3);
    }
    if (param_2 != DVar1) {
      FUN_10016daf();
    }
  }
  return;
}



// ============================================================
// FUN_1001572b @ 0x1001572b 65B
// ============================================================

void __fastcall FUN_1001572b(int param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    BVar1 = CloseHandle(*(HANDLE *)(param_1 + 4));
    bVar3 = BVar1 == 0;
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_10014f02((int *)(param_1 + 0xc));
  if (bVar3) {
    DVar2 = GetLastError();
    FUN_10016cee(DVar2);
  }
  return;
}



// ============================================================
// FUN_1001576c @ 0x1001576c 32B
// ============================================================

void __fastcall FUN_1001576c(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
  }
  FUN_10014f02((int *)(param_1 + 0xc));
  return;
}



// ============================================================
// FUN_100157de @ 0x100157de 44B
// ============================================================

void __thiscall FUN_100157de(void *this,undefined4 param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  (**(code **)(*(int *)this + 0x28))(param_1,0);
  BVar1 = SetEndOfFile(*(HANDLE *)((int)this + 4));
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    FUN_10016cee(DVar2);
  }
  return;
}



// ============================================================
// FUN_1001580a @ 0x1001580a 45B
// ============================================================

undefined4 __fastcall FUN_1001580a(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x28))(0,1);
  uVar2 = (**(code **)(*param_1 + 0x28))(0,2);
  (**(code **)(*param_1 + 0x28))(uVar1,0);
  return uVar2;
}



// ============================================================
// FUN_1001583c @ 0x1001583c 208B
// ============================================================

undefined4 FUN_1001583c(void)

{
  LPSTR lpBuffer;
  DWORD DVar1;
  undefined4 uVar2;
  BOOL BVar3;
  HANDLE hFindFile;
  int unaff_EBP;
  
  FUN_1000c418();
  lpBuffer = *(LPSTR *)(unaff_EBP + 8);
  DVar1 = GetFullPathNameA(*(LPCSTR *)(unaff_EBP + 0xc),0x104,lpBuffer,(LPSTR *)(unaff_EBP + -0x14))
  ;
  if (DVar1 == 0) {
    lstrcpynA(lpBuffer,*(LPCSTR *)(unaff_EBP + 0xc),0x104);
    uVar2 = 0;
  }
  else {
    *(undefined **)(unaff_EBP + 8) = PTR_DAT_10024d00;
    uVar2 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_1001590c(lpBuffer,(void *)(unaff_EBP + 8));
    BVar3 = GetVolumeInformationA
                      (*(LPCSTR *)(unaff_EBP + 8),(LPSTR)0x0,0,(LPDWORD)0x0,
                       (LPDWORD)(unaff_EBP + -0x18),(LPDWORD)(unaff_EBP + -0x10),(LPSTR)0x0,0);
    if (BVar3 != 0) {
      if ((*(byte *)(unaff_EBP + -0x10) & 2) == 0) {
        CharUpperA(lpBuffer);
      }
      if ((*(byte *)(unaff_EBP + -0x10) & 4) == 0) {
        hFindFile = FindFirstFileA(*(LPCSTR *)(unaff_EBP + 0xc),
                                   (LPWIN32_FIND_DATAA)(unaff_EBP + -0x158));
        if (hFindFile != (HANDLE)0xffffffff) {
          FindClose(hFindFile);
          lstrcpyA(*(LPSTR *)(unaff_EBP + -0x14),(LPCSTR)(unaff_EBP + -300));
        }
      }
      uVar2 = 1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_10014f77((int *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



// ============================================================
// FUN_1001590c @ 0x1001590c 198B
// ============================================================

void FUN_1001590c(LPCSTR param_1,void *param_2)

{
  byte *lpString1;
  byte *pbVar1;
  byte bVar2;
  
  lpString1 = (byte *)FUN_10015228(param_2,0x104);
  _memset(lpString1,0,0x104);
  lstrcpynA((LPSTR)lpString1,param_1,0x104);
  bVar2 = *lpString1;
  pbVar1 = lpString1;
  while ((bVar2 != 0 &&
         (((bVar2 != 0x5c && (bVar2 != 0x2f)) || ((pbVar1[1] != 0x5c && (pbVar1[1] != 0x2f))))))) {
    pbVar1 = FUN_1000c868(pbVar1);
    bVar2 = *pbVar1;
  }
  if (*pbVar1 == 0) {
    bVar2 = *lpString1;
    while (((bVar2 != 0 && (bVar2 != 0x5c)) && (bVar2 != 0x2f))) {
      lpString1 = FUN_1000c868(lpString1);
      bVar2 = *lpString1;
    }
  }
  else {
    for (lpString1 = pbVar1 + 2;
        ((bVar2 = *lpString1, bVar2 != 0 && (bVar2 != 0x5c)) && (bVar2 != 0x2f));
        lpString1 = FUN_1000c868(lpString1)) {
    }
    if (*lpString1 == 0) goto LAB_1001598d;
    do {
      lpString1 = FUN_1000c868(lpString1);
LAB_1001598d:
      bVar2 = *lpString1;
    } while (((bVar2 != 0) && (bVar2 != 0x5c)) && (bVar2 != 0x2f));
  }
  if (*lpString1 != 0) {
    lpString1[1] = 0;
  }
  FUN_10015277(param_2,-1);
  return;
}



// ============================================================
// FUN_100159d2 @ 0x100159d2 86B
// ============================================================

int FUN_100159d2(byte *param_1,LPSTR param_2,int param_3)

{
  short sVar1;
  int iVar2;
  CHAR *Buf;
  CHAR local_108 [260];
  
  Buf = param_2;
  if (param_2 == (LPSTR)0x0) {
    Buf = local_108;
    param_3 = 0x104;
  }
  sVar1 = GetFileTitleA((LPCSTR)param_1,Buf,(WORD)param_3);
  if (sVar1 == 0) {
    if (param_2 == (LPSTR)0x0) {
      iVar2 = lstrlenA(Buf);
      iVar2 = iVar2 + 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = FUN_1001bbc5(param_1,param_2,param_3);
  }
  return iVar2;
}



// ============================================================
// FUN_10015a40 @ 0x10015a40 56B
// ============================================================

undefined4 FUN_10015a40(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
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
// FUN_10015a86 @ 0x10015a86 38B
// ============================================================

void FUN_10015a86(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001b31e();
  FUN_1001bcae(0);
  FUN_1001b3d8((void *)(iVar1 + 0x1c),param_1);
  FUN_1001bd1e(0);
  return;
}



// ============================================================
// FUN_10015aac @ 0x10015aac 25B
// ============================================================

undefined4 __thiscall FUN_10015aac(void *this,int param_1)

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
// FUN_10015acb @ 0x10015acb 34B
// ============================================================

void __fastcall FUN_10015acb(int *param_1)

{
  int iVar1;
  
  if (param_1[7] == 0) {
    iVar1 = FUN_1001aa2d();
    if (iVar1 != 0) {
      AfxPostQuitMessage(0);
    }
  }
  FUN_10015dc8(param_1);
  return;
}



// ============================================================
// FUN_10015aed @ 0x10015aed 55B
// ============================================================

void __thiscall FUN_10015aed(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000af9b();
  *(undefined4 *)((int)this + 0x84) = 0;
  PostMessageA((HWND)piVar1[7],0x36a,0,0);
  (**(code **)(*piVar1 + 0x6c))(param_1,param_2);
  return;
}



// ============================================================
// FUN_10015b9b @ 0x10015b9b 106B
// ============================================================

bool __thiscall FUN_10015b9b(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1;
  if (param_1 < 1) {
    FUN_10015ea4(this,param_1);
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
    FUN_10015ea4(this,1);
  }
  return iVar1 < 1;
}



// ============================================================
// FUN_10015c05 @ 0x10015c05 173B
// ============================================================

void __thiscall FUN_10015c05(void *this,LPSTR param_1)

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
          FUN_10019f09(*(HGLOBAL *)((int)this + 0x94));
        }
        dwBytes = DocumentPropertiesA((HWND)0x0,local_8,param_1,(PDEVMODEA)0x0,(PDEVMODEA)0x0,0);
        hMem = GlobalAlloc(0x42,dwBytes);
        *(HGLOBAL *)((int)this + 0x94) = hMem;
        pDevModeOutput = GlobalLock(hMem);
        LVar4 = DocumentPropertiesA((HWND)0x0,local_8,param_1,pDevModeOutput,(PDEVMODEA)0x0,2);
        if (LVar4 != 1) {
          FUN_10019f09(*(HGLOBAL *)((int)this + 0x94));
          *(undefined4 *)((int)this + 0x94) = 0;
        }
        ClosePrinter(local_8);
      }
    }
  }
  return;
}



// ============================================================
// AfxGetThread @ 0x10015cb2 21B
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
    iVar2 = FUN_1001b31e();
    pCVar3 = *(CWinThread **)(iVar2 + 4);
  }
  return pCVar3;
}



// ============================================================
// FUN_10015cc7 @ 0x10015cc7 95B
// ============================================================

void FUN_10015cc7(void)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  int iVar3;
  
  iVar1 = FUN_1001b31e();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_1001b0ec();
    dwThreadId = GetCurrentThreadId();
    pHVar2 = SetWindowsHookExA(-1,(HOOKPROC)&LAB_100160ac,(HINSTANCE)0x0,dwThreadId);
    *(HHOOK *)(iVar1 + 0x30) = pHVar2;
    iVar1 = FUN_1001b966();
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar3 = FUN_1001b31e();
      (**(code **)(iVar1 + 0x14))(*(undefined4 *)(iVar3 + 8));
    }
    FUN_1001b8a4(&DAT_1002a224,&LAB_1001af1b);
  }
  return;
}



// ============================================================
// FUN_10015d26 @ 0x10015d26 130B
// ============================================================

void FUN_10015d26(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100167aa();
  FUN_100167b3(0xffffffff);
  if (*(int *)(unaff_EBP + 8) == 0) {
    iVar1 = FUN_1001b91b((int *)&DAT_100284a4);
    if ((iVar1 != 0) && (*(int **)(iVar1 + 0xcc) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar1 + 0xcc) + 0x58))();
      if (*(int **)(iVar1 + 0xcc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0xcc) + 4))(1);
      }
      *(undefined4 *)(iVar1 + 0xcc) = 0;
    }
  }
  if (DAT_100284ac != (void *)0x0) {
    FUN_1001b84b(DAT_100284ac,*(int *)(unaff_EBP + 8),0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10015dc8 @ 0x10015dc8 127B
// ============================================================

void __fastcall FUN_10015dc8(int *param_1)

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
// FUN_10015ea4 @ 0x10015ea4 267B
// ============================================================

bool __thiscall FUN_10015ea4(void *this,int param_1)

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
        FUN_100174e4();
        FUN_10018c3e(*(HWND *)((int)pvVar1 + 0x1c),0x363,1,0,1,1);
      }
    }
    iVar3 = FUN_1001b31e();
    iVar3 = FUN_1001b8a4((void *)(iVar3 + 0x1070),&LAB_1001ae44);
    for (this_00 = *(void **)(iVar3 + 8); this_00 != (void *)0x0;
        this_00 = *(void **)((int)this_00 + 0x54)) {
      if ((*(int *)((int)this_00 + 0x1c) != 0) && (this_00 != pvVar1)) {
        if (*(int *)((int)this_00 + 0x88) == 0) {
          FUN_10017132(this_00,0);
        }
        BVar2 = IsWindowVisible(*(HWND *)((int)this_00 + 0x1c));
        if ((BVar2 != 0) || (-1 < *(int *)((int)this_00 + 0x88))) {
          FUN_100174e4();
          FUN_10018c3e(*(HWND *)((int)this_00 + 0x1c),0x363,1,0,1,1);
        }
        if (0 < *(int *)((int)this_00 + 0x88)) {
          FUN_10017132(this_00,*(int *)((int)this_00 + 0x88));
        }
        *(undefined4 *)((int)this_00 + 0x88) = 0xffffffff;
      }
    }
  }
  else {
    iVar3 = FUN_1001b31e();
    iVar3 = FUN_1001b8a4((void *)(iVar3 + 0x1070),&LAB_1001ae44);
    if (*(int *)(iVar3 + 0x10) == 0) {
      FUN_100167aa();
      FUN_100167b3(1);
    }
  }
  return param_1 < 0;
}



// ============================================================
// FUN_10015faf @ 0x10015faf 123B
// ============================================================

undefined4 __thiscall FUN_10015faf(void *this,int param_1)

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
LAB_1001600e:
        (**(code **)(pAVar2 + 0x14))(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        return 1;
      }
    }
    else {
      pAVar2 = (AFX_MSGMAP_ENTRY *)puVar1[1];
      while (pAVar2 = AfxFindMessageEntry(pAVar2,0xc000,0,0), pAVar2 != (AFX_MSGMAP_ENTRY *)0x0) {
        if (**(int **)(pAVar2 + 0x10) == *(int *)(param_1 + 4)) goto LAB_1001600e;
        pAVar2 = pAVar2 + 0x18;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}



// ============================================================
// AfxInternalProcessWndProcException @ 0x10016087 37B
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
// FUN_10016104 @ 0x10016104 75B
// ============================================================

undefined4 FUN_10016104(int param_1)

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
// FUN_1001614f @ 0x1001614f 330B
// ============================================================

undefined4 FUN_1001614f(int param_1,undefined4 *param_2)

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
    piVar1 = FUN_100176a5();
    if (((((piVar1 != (int *)0x0) && (piVar1 = FUN_10018b84(piVar1), piVar1 != (int *)0x0)) &&
         (iVar2 = FUN_100197d7((int)piVar1), iVar2 != 0)) &&
        ((piVar1[0x14] != 0 && (iVar2 = FUN_1000af9b(), *(int *)((int)local_8 + 0x1c) != 0)))) &&
       (((param_2[1] == 0x100 && (param_2[2] == 0xd)) || (param_2[1] == 0x202)))) {
      hWnd = *(HWND *)(iVar2 + 0x1c);
      goto LAB_100161d9;
    }
  }
  iVar2 = FUN_1000af9b();
  if (((0x332 < DAT_1002a20c) || (iVar2 == 0)) || (iVar3 = FUN_10016104((int)param_2), iVar3 == 0))
  {
    if ((((param_1 != 0) || (local_8[8] == 0)) || ((uint)param_2[1] < 0x100)) ||
       ((0x108 < (uint)param_2[1] ||
        (iVar2 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac), *(int *)(iVar2 + 0xbc) != 0)))) {
      return 0;
    }
    *(undefined4 *)(iVar2 + 0xbc) = 1;
    puVar4 = local_24;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar3 = FUN_10017159(local_8[8]);
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*local_8 + 0x58))(local_24), iVar3 != 0)) {
      *(undefined4 *)(iVar2 + 0xbc) = 0;
      return 1;
    }
    *(undefined4 *)(iVar2 + 0xbc) = 0;
    return 0;
  }
  hWnd = *(HWND *)(iVar2 + 0x1c);
LAB_100161d9:
  SendMessageA(hWnd,0x111,0xe146,0);
  return 1;
}



// ============================================================
// FUN_100162b4 @ 0x100162b4 64B
// ============================================================

undefined4 __fastcall FUN_100162b4(int *param_1)

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
// FUN_100162f4 @ 0x100162f4 26B
// ============================================================

void __fastcall FUN_100162f4(int param_1)

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
// FUN_1001630e @ 0x1001630e 43B
// ============================================================

void FUN_1001630e(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
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
// FUN_10016339 @ 0x10016339 263B
// ============================================================

uint FUN_10016339(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,
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
LAB_100163eb:
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
LAB_100163f6:
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
          goto LAB_100163eb;
        }
        goto LAB_100163f6;
      }
      (*(code *)param_4)(param_5,param_2);
    }
    uVar1 = (uint)(param_5[7] == 0);
    param_5[7] = 0;
  }
  return uVar1;
}



// ============================================================
// FUN_10016440 @ 0x10016440 271B
// ============================================================

uint __thiscall
FUN_10016440(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  void *_Buf1;
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  AFX_MSGMAP_ENTRY *pAVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_2 == 0xfffffffe) {
    iVar1 = FUN_1001b31e();
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
            if ((void *)*piVar6 == (void *)0x0) goto LAB_100164e3;
            iVar1 = _memcmp(_Buf1,(void *)*piVar6,0x10);
          }
          if (iVar1 == 0) {
            param_2 = 1;
            param_3[1] = piVar6[2];
          }
        }
LAB_100164e3:
        piVar6 = piVar6 + 3;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while( true );
  }
  if (param_2 != 0xffffffff) {
    uVar2 = param_2 & 0xffff;
    uVar5 = param_2 >> 0x10;
    param_2 = uVar2;
    if (uVar5 != 0) goto LAB_10016508;
  }
  uVar5 = 0x111;
LAB_10016508:
  puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x28))();
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    pAVar4 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)puVar3[1],uVar5,param_2,(uint)param_1);
    if (pAVar4 != (AFX_MSGMAP_ENTRY *)0x0) break;
    puVar3 = (undefined4 *)*puVar3;
  }
  uVar2 = FUN_10016339(this,param_1,param_2,*(undefined **)(pAVar4 + 0x14),param_3,
                       *(uint *)(pAVar4 + 0x10),param_4);
  return uVar2;
}



// ============================================================
// FUN_10016560 @ 0x10016560 21B
// ============================================================

void FUN_10016560(void)

{
  int iVar1;
  
  iVar1 = FUN_1001b31e();
  (**(code **)(**(int **)(iVar1 + 4) + 0x90))(1);
  return;
}



// ============================================================
// FUN_10016575 @ 0x10016575 21B
// ============================================================

void FUN_10016575(void)

{
  int iVar1;
  
  iVar1 = FUN_1001b31e();
  (**(code **)(**(int **)(iVar1 + 4) + 0x90))(0xffffffff);
  return;
}



// ============================================================
// FUN_100165a2 @ 0x100165a2 50B
// ============================================================

void __fastcall FUN_100165a2(int *param_1)

{
  CTypeLibCache *this;
  
  FUN_1001bcae(0xd);
  this = (CTypeLibCache *)(**(code **)(*param_1 + 0x20))();
  if (this != (CTypeLibCache *)0x0) {
    CTypeLibCache::Unlock(this);
  }
  FUN_1001bd1e(0xd);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}



// ============================================================
// CCmdUI @ 0x100165e5 38B
// ============================================================

/* Library Function - Single Match
    public: __thiscall CCmdUI::CCmdUI(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release, Visual Studio 2008 Release,
   Visual Studio 2010 Release */

void __thiscall CCmdUI::CCmdUI(CCmdUI *this)

{
  *(undefined ***)this = &PTR_FUN_1001eeb8;
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
// FUN_1001660b @ 0x1001660b 144B
// ============================================================

void __thiscall FUN_1001660b(void *this,int param_1)

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
        pvVar3 = FUN_100176a5();
        pHVar2 = (HWND)0x0;
        if (*(int *)((int)this + 0x14) != 0) {
          pHVar2 = *(HWND *)(*(int *)((int)this + 0x14) + 0x1c);
        }
        GetNextDlgTabItem(*(HWND *)((int)pvVar3 + 0x1c),pHVar2,0);
        pvVar3 = FUN_100176a5();
        FUN_1001719b((int)pvVar3);
      }
    }
    FUN_10017174(*(void **)((int)this + 0x14),param_1);
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
// FUN_1001669b @ 0x1001669b 98B
// ============================================================

void __thiscall FUN_1001669b(void *this,WPARAM param_1)

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
// FUN_100166fd @ 0x100166fd 86B
// ============================================================

void __thiscall FUN_100166fd(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))(param_1 != 0);
  if ((*(int *)((int)this + 0xc) != 0) && (*(int *)((int)this + 0x10) == 0)) {
    if ((DAT_1002a208 == (HBITMAP)0x0) && (FUN_1001af66(), DAT_1002a208 == (HBITMAP)0x0)) {
      return;
    }
    SetMenuItemBitmaps(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),0x400,
                       (HBITMAP)0x0,DAT_1002a208);
  }
  return;
}



// ============================================================
// FUN_10016753 @ 0x10016753 87B
// ============================================================

void __thiscall FUN_10016753(void *this,LPCSTR param_1)

{
  UINT UVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_10019e98(*(HWND *)(*(int *)((int)this + 0x14) + 0x1c),param_1);
  }
  else if (*(int *)((int)this + 0x10) == 0) {
    UVar1 = GetMenuState(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),0x400);
    ModifyMenuA(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),
                UVar1 & 0xfffff6fb | 0x400,*(UINT_PTR *)((int)this + 4),param_1);
  }
  return;
}



// ============================================================
// FUN_100167b3 @ 0x100167b3 250B
// ============================================================

bool FUN_100167b3(SIZE_T param_1)

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
      FUN_100169d1(*(int *)(pAVar1 + 0x20));
      FUN_100169d1(*(int *)(pAVar1 + 0x1c));
      FUN_100169d1(*(int *)(pAVar1 + 0x18));
      FUN_100169d1(*(int *)(pAVar1 + 0x14));
      FUN_100169d1(*(int *)(pAVar1 + 0x24));
    }
    iVar2 = FUN_1001b31e();
    iVar2 = *(int *)(iVar2 + 4);
    iVar4 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
    if (iVar2 != 0) {
      if (*(undefined **)(iVar4 + 0xc) != (undefined *)0x0) {
        SVar5 = FUN_1000cf6c(*(undefined **)(iVar4 + 0xc));
        if (*(uint *)(iVar2 + 0xb8) <= SVar5) goto LAB_1001689e;
      }
      if (*(int *)(iVar2 + 0xb8) != 0) {
        param_1 = 0;
        if (*(undefined **)(iVar4 + 0xc) != (undefined *)0x0) {
          param_1 = FUN_1000cf6c(*(undefined **)(iVar4 + 0xc));
          FUN_1000b70f(*(undefined **)(iVar4 + 0xc));
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
LAB_1001689e:
  return *(int *)(pAVar1 + 0x10) != 0;
}



// ============================================================
// FUN_100168ad @ 0x100168ad 101B
// ============================================================

undefined4 * FUN_100168ad(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  CMap<>(extraout_ECX + 1,10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  CMap<>(extraout_ECX + 8,4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_1001eef4;
  FUN_10014a36(extraout_ECX + 8,7,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xf] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x10] = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[0x11] = *(undefined4 *)(unaff_EBP + 0x10);
  return extraout_ECX;
}



// ============================================================
// FUN_10016912 @ 0x10016912 174B
// ============================================================

int FUN_10016912(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  uVar1 = *(uint *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_10014b67((void *)(extraout_ECX + 4),uVar1);
    if (iVar3 == 0) {
      iVar3 = FUN_10014b67((void *)(extraout_ECX + 0x20),uVar1);
      if (iVar3 == 0) {
        puVar4 = FUN_10014ca6(&LAB_10019f3f);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(undefined **)(unaff_EBP + 8) = puVar4;
        iVar3 = FUN_10015a40();
        if (iVar3 == 0) {
          FUN_100145b0();
        }
        piVar5 = FUN_10014b9a((void *)(extraout_ECX + 0x20),uVar1);
        puVar4 = *(undefined **)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *piVar5 = iVar3;
        FUN_10014ca6(puVar4);
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
// FUN_100169d1 @ 0x100169d1 101B
// ============================================================

void __fastcall FUN_100169d1(int param_1)

{
  undefined4 *puVar1;
  int local_10;
  int local_c;
  int *local_8;
  
  if (param_1 != 0) {
    local_c = -(uint)(*(int *)(param_1 + 0x2c) != 0);
    if (local_c != 0) {
      do {
        FUN_10014c2c((void *)(param_1 + 0x20),&local_c,&local_10,(int *)&local_8);
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
// FUN_10016a36 @ 0x10016a36 132B
// ============================================================

bool FUN_10016a36(UINT param_1)

{
  int iVar1;
  LPSTR pCVar2;
  int iVar3;
  int iVar4;
  CHAR local_108 [256];
  void *local_8;
  
  iVar1 = FUN_10016aba(param_1,local_108,0x100);
  if (0x100U - iVar1 < 3) {
    iVar3 = 0x100;
    do {
      iVar4 = iVar3 + 0x100;
      iVar1 = iVar4;
      pCVar2 = (LPSTR)FUN_10015228(local_8,iVar3 + 0xff);
      iVar1 = FUN_10016aba(param_1,pCVar2,iVar1);
      iVar3 = iVar4;
    } while (iVar4 - iVar1 < 3);
    FUN_10015277(local_8,-1);
  }
  else {
    FUN_100150b4(local_8,local_108);
  }
  return 0 < iVar1;
}



// ============================================================
// FUN_10016aba @ 0x10016aba 39B
// ============================================================

void FUN_10016aba(UINT param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1001b31e();
  iVar1 = LoadStringA(*(HINSTANCE *)(iVar1 + 0xc),param_1,param_2,param_3);
  if (iVar1 == 0) {
    *param_2 = '\0';
  }
  return;
}



// ============================================================
// FUN_10016ae1 @ 0x10016ae1 130B
// ============================================================

undefined4 FUN_10016ae1(void)

{
  LPSTR pCVar1;
  void *this;
  int unaff_EBP;
  int iVar2;
  
  FUN_1000c418();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_10016c14(this,(int *)(unaff_EBP + -300));
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_10024d00;
  iVar2 = 0x100;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  pCVar1 = (LPSTR)FUN_10015228((void *)(unaff_EBP + -0x10),0x100);
  FUN_1001bbc5((byte *)(unaff_EBP + -0x11a),pCVar1,iVar2);
  FUN_10015277((void *)(unaff_EBP + -0x10),-1);
  FUN_10014cec(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_10014f77((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}



// ============================================================
// FUN_10016b63 @ 0x10016b63 130B
// ============================================================

undefined4 FUN_10016b63(void)

{
  LPSTR pCVar1;
  void *this;
  int unaff_EBP;
  int iVar2;
  
  FUN_1000c418();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_10016c14(this,(int *)(unaff_EBP + -300));
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_10024d00;
  iVar2 = 0x100;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  pCVar1 = (LPSTR)FUN_10015228((void *)(unaff_EBP + -0x10),0x100);
  FUN_100159d2((byte *)(unaff_EBP + -0x11a),pCVar1,iVar2);
  FUN_10015277((void *)(unaff_EBP + -0x10),-1);
  FUN_10014cec(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_10014f77((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}



// ============================================================
// FUN_10016be5 @ 0x10016be5 47B
// ============================================================

void * __thiscall FUN_10016be5(void *this,void *param_1)

{
  int local_120 [4];
  CHAR local_10e [262];
  undefined4 local_8;
  
  local_8 = 0;
  FUN_10016c14(this,local_120);
  FUN_10014fe5(param_1,local_10e);
  return param_1;
}



// ============================================================
// FUN_10016c14 @ 0x10016c14 218B
// ============================================================

undefined4 __thiscall FUN_10016c14(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  int *piVar6;
  _FILETIME local_1c;
  _FILETIME local_14;
  _FILETIME local_c;
  
  piVar2 = param_1;
  _memset(param_1,0,0x118);
  lstrcpynA((LPSTR)((int)piVar2 + 0x12),*(LPCSTR *)((int)this + 0xc),0x104);
  if (*(HANDLE *)((int)this + 4) == (HANDLE)0xffffffff) {
LAB_10016ce4:
    uVar5 = 1;
  }
  else {
    BVar3 = GetFileTime(*(HANDLE *)((int)this + 4),&local_c,&local_14,&local_1c);
    if (BVar3 != 0) {
      DVar4 = GetFileSize(*(HANDLE *)((int)this + 4),(LPDWORD)0x0);
      piVar2[3] = DVar4;
      if (DVar4 != 0xffffffff) {
        if (*(int *)(*(LPCSTR *)((int)this + 0xc) + -8) == 0) {
LAB_10016c88:
          *(undefined1 *)(piVar2 + 4) = 0;
        }
        else {
          DVar4 = GetFileAttributesA(*(LPCSTR *)((int)this + 0xc));
          if (DVar4 == 0xffffffff) goto LAB_10016c88;
          *(char *)(piVar2 + 4) = (char)DVar4;
        }
        piVar6 = FUN_10014661(&param_1,&local_c,0xffffffff);
        *piVar2 = *piVar6;
        piVar6 = FUN_10014661(&param_1,&local_14,0xffffffff);
        piVar2[2] = *piVar6;
        piVar6 = FUN_10014661(&param_1,&local_1c,0xffffffff);
        iVar1 = *piVar6;
        piVar2[1] = iVar1;
        if (*piVar2 == 0) {
          *piVar2 = iVar1;
        }
        if (piVar2[2] == 0) {
          piVar2[2] = piVar2[1];
        }
        goto LAB_10016ce4;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



// ============================================================
// FUN_10016cee @ 0x10016cee 33B
// ============================================================

void FUN_10016cee(uint param_1)

{
  if (param_1 != 0) {
    FUN_10016e1a(param_1);
    FUN_10016daf();
  }
  return;
}



// ============================================================
// FUN_10016d0f @ 0x10016d0f 160B
// ============================================================

undefined4 FUN_10016d0f(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    **(int **)(unaff_EBP + 0x10) = *(int *)(extraout_ECX + 8) + 0xf1a0;
  }
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_10024d00;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10014cec((void *)(unaff_EBP + 0x10),(int *)(extraout_ECX + 0x10));
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(*(int *)(unaff_EBP + 0x10) + -8) == 0) {
    FUN_10016a36(0xf006);
  }
  FUN_1001aa06((int *)(unaff_EBP + -0x10),*(int *)(extraout_ECX + 8) + 0xf1a0);
  lstrcpynA(*(LPSTR *)(unaff_EBP + 8),*(LPCSTR *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 0xc));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_10014f77((int *)(unaff_EBP + 0x10));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_10014f77((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}



// ============================================================
// FUN_10016daf @ 0x10016daf 106B
// ============================================================

void FUN_10016daf(void)

{
  LPCSTR pCVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_1000c418();
  puVar3 = FUN_10014cb8(0x14);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_1001529f((int)puVar3);
    puVar3[4] = PTR_DAT_10024d00;
    pCVar1 = *(LPCSTR *)(unaff_EBP + 0x10);
    puVar3[2] = *(undefined4 *)(unaff_EBP + 8);
    uVar2 = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *puVar3 = &PTR_LAB_1001eb64;
    puVar3[3] = uVar2;
    FUN_100150b4(puVar3 + 4,pCVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x10) = puVar3;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x10,&DAT_10021a08);
}



// ============================================================
// FUN_10016e1a @ 0x10016e1a 502B
// ============================================================

undefined4 FUN_10016e1a(uint param_1)

{
  int iVar1;
  
  if (0x10b < param_1) {
    if (param_1 == 0x3e3) {
      return 10;
    }
    if (param_1 == 0x3e4) {
      return 10;
    }
    if (param_1 == 0x3e5) {
      return 10;
    }
    if (param_1 == 999) {
      return 5;
    }
    return 1;
  }
  if (param_1 == 0x10b) {
    return 3;
  }
  if (param_1 < 0x3f) {
    if (param_1 == 0x3e) {
      return 8;
    }
    if (param_1 < 0x1a) {
      if (param_1 == 0x19) {
        return 9;
      }
      switch(param_1) {
      case 0:
        return 0;
      default:
        return 1;
      case 2:
      case 6:
      case 0x12:
        goto LAB_10016f1c;
      case 3:
      case 0xf:
      case 0x11:
        goto LAB_10016f1c;
      case 4:
        return 4;
      case 5:
      case 0xc:
      case 0x13:
LAB_10016f1c:
        return 5;
      case 0xb:
LAB_10016f1c:
        return 6;
      case 0x10:
        return 7;
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
LAB_10016f1c:
        return 10;
      case 0x18:
        return 9;
      }
    }
    if (0x27 < param_1) {
      switch(param_1) {
      case 0x34:
      case 0x35:
      case 0x37:
        goto LAB_10016f1c;
      case 0x36:
      case 0x3a:
        goto LAB_10016f1c;
      default:
        return 1;
      case 0x39:
      case 0x3b:
        goto LAB_10016f1c;
      case 0x3c:
        goto LAB_10016f1c;
      }
    }
    if (param_1 == 0x27) {
      return 0xd;
    }
    if (0x20 < param_1) {
      if (param_1 == 0x21) {
        return 0xc;
      }
      if (param_1 == 0x22) {
        return 3;
      }
      if (param_1 == 0x24) {
        return 4;
      }
      if (param_1 == 0x26) {
        return 0xe;
      }
      return 1;
    }
    if (param_1 == 0x20) {
      return 0xb;
    }
    if (param_1 == 0x1a) {
      return 6;
    }
    if (param_1 == 0x1b) {
      return 9;
    }
    iVar1 = param_1 - 0x1d;
    if (iVar1 == 0) {
      return 5;
    }
LAB_10016e92:
    if (iVar1 == 1) {
      return 9;
    }
  }
  else {
    if (param_1 < 0x6c) {
      if (param_1 == 0x6b) {
LAB_10016f1c:
        return 2;
      }
      if (0x47 < param_1) {
        if (param_1 == 0x50) {
          return 5;
        }
        if (param_1 == 0x52) {
          return 5;
        }
        if (param_1 == 0x55) {
          return 3;
        }
        if (param_1 != 0x56) {
          if (param_1 == 0x58) {
            return 10;
          }
          return 1;
        }
        return 5;
      }
      if (param_1 == 0x47) {
        return 5;
      }
      if (param_1 == 0x40) {
        return 5;
      }
      if (param_1 == 0x41) {
        return 5;
      }
      if (param_1 == 0x42) {
        return 6;
      }
      if (param_1 == 0x43) {
        return 3;
      }
      iVar1 = param_1 - 0x44;
      if (iVar1 == 0) {
        return 4;
      }
    }
    else {
      if (param_1 < 0x91) {
        if (param_1 == 0x90) {
          return 3;
        }
        if (param_1 < 0x76) {
          if (param_1 == 0x75) {
            return 10;
          }
          if (param_1 == 0x6c) {
            return 0xc;
          }
          if (param_1 == 0x6f) {
            return 3;
          }
          if (param_1 == 0x70) {
            return 0xd;
          }
          if (param_1 == 0x71) {
            return 4;
          }
          if (param_1 != 0x72) {
            return 1;
          }
          return 6;
        }
        if (param_1 == 0x7b) {
          return 3;
        }
        if (param_1 == 0x7c) {
          return 3;
        }
        if (param_1 == 0x7d) {
          return 3;
        }
        iVar1 = param_1 - 0x83;
        if (iVar1 == 0) {
          return 9;
        }
        goto LAB_10016e92;
      }
      if (param_1 < 0xb7) {
        if (param_1 == 0xb6) {
          return 6;
        }
        if (param_1 == 0x91) {
          return 7;
        }
        if (param_1 == 0x9a) {
          return 3;
        }
        if (param_1 != 0xa1) {
          if (param_1 == 0xa7) {
            return 0xc;
          }
          if (param_1 == 0xaa) {
            return 5;
          }
          return 1;
        }
        return 3;
      }
      if (param_1 == 0xb7) {
        return 5;
      }
      if (param_1 == 0xbf) {
        return 6;
      }
      if (param_1 == 0xc1) {
        return 6;
      }
      iVar1 = param_1 - 0xce;
      if (iVar1 == 0) {
        return 3;
      }
    }
    if (iVar1 == 2) {
LAB_10016f1c:
      return 3;
    }
  }
  return 1;
}



// ============================================================
// FUN_100170af @ 0x100170af 26B
// ============================================================

void __fastcall FUN_100170af(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowLongA(*(HWND *)(param_1 + 0x1c),-0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100170c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x70))();
  return;
}



// ============================================================
// FUN_100170c9 @ 0x100170c9 26B
// ============================================================

void __fastcall FUN_100170c9(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowLongA(*(HWND *)(param_1 + 0x1c),-0x14);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100170e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0x74))();
  return;
}



// ============================================================
// FUN_100170e3 @ 0x100170e3 79B
// ============================================================

void __thiscall
FUN_100170e3(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,UINT param_6)

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
// FUN_10017132 @ 0x10017132 39B
// ============================================================

void __thiscall FUN_10017132(void *this,int param_1)

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
// FUN_10017159 @ 0x10017159 27B
// ============================================================

void __fastcall FUN_10017159(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    IsWindowEnabled(*(HWND *)(param_1 + 0x1c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x1001716e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0xa4))();
  return;
}



// ============================================================
// FUN_10017174 @ 0x10017174 39B
// ============================================================

void __thiscall FUN_10017174(void *this,BOOL param_1)

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
// FUN_1001719b @ 0x1001719b 33B
// ============================================================

void __fastcall FUN_1001719b(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    SetFocus(*(HWND *)(param_1 + 0x1c));
    FUN_100176a5();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100171b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x38) + 0xac))();
  return;
}



// ============================================================
// FUN_100171bc @ 0x100171bc 61B
// ============================================================

void __thiscall FUN_100171bc(void *this,int param_1)

{
  HWND pHVar1;
  int iVar2;
  
  if ((this != (void *)0x0) && (*(int *)((int)this + 0x38) == 0)) {
    pHVar1 = GetParent(*(HWND *)((int)this + 0x1c));
    iVar2 = FUN_10014b67((void *)(param_1 + 4),(uint)pHVar1);
    if ((iVar2 != 0) && (*(int **)(iVar2 + 0x34) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar2 + 0x34) + 0x8c))(this);
    }
  }
  return;
}



// ============================================================
// FUN_10017307 @ 0x10017307 34B
// ============================================================

undefined4 * __fastcall FUN_10017307(undefined4 *param_1)

{
  FUN_100162f4((int)param_1);
  *param_1 = &PTR_LAB_1001f5b0;
  _memset(param_1 + 7,0,0x20);
  return param_1;
}



// ============================================================
// `scalar_deleting_destructor' @ 0x10017329 28B
// ============================================================

/* Library Function - Single Match
    public: virtual void * __thiscall CWnd::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CWnd::_scalar_deleting_destructor_(CWnd *this,uint param_1)

{
  ~CWnd(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10017345 @ 0x10017345 44B
// ============================================================

undefined4 * __thiscall FUN_10017345(void *this,undefined4 param_1)

{
  FUN_100162f4((int)this);
  *(undefined ***)this = &PTR_LAB_1001f5b0;
  _memset((undefined4 *)((int)this + 0x1c),0,0x20);
  *(undefined4 *)((int)this + 0x1c) = param_1;
  return this;
}



// ============================================================
// FUN_10017371 @ 0x10017371 35B
// ============================================================

void FUN_10017371(int param_1,LPRECT param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  GetWindowRect(*(HWND *)(param_1 + 0x1c),param_2);
  uVar1 = FUN_100170af(param_1);
  *param_3 = uVar1;
  return;
}



// ============================================================
// FUN_10017394 @ 0x10017394 121B
// ============================================================

void FUN_10017394(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  tagRECT local_14;
  
  if (((((param_3 & 0x10000000) == 0) &&
       (uVar1 = FUN_100170af((int)param_1), (uVar1 & 0x50000000) == 0)) &&
      (GetWindowRect((HWND)param_1[7],&local_14), *param_2 == local_14.left)) &&
     (param_2[1] == local_14.top)) {
    GetWindow((HWND)param_1[7],4);
    pvVar2 = FUN_100176a5();
    if ((pvVar2 != (void *)0x0) && (iVar3 = FUN_10017159((int)pvVar2), iVar3 != 0)) {
      return;
    }
    iVar3 = (**(code **)(*param_1 + 0xac))();
    if (iVar3 != 0) {
      FUN_10019284(param_1,0);
    }
  }
  return;
}



// ============================================================
// FUN_1001740d @ 0x1001740d 97B
// ============================================================

void FUN_1001740d(int param_1,WPARAM param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = FUN_100170af(param_1);
  if ((uVar1 & 0x40000000) == 0) {
    pvVar2 = FUN_10018b5c(param_1);
    pvVar3 = FUN_10018b5c(param_3);
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
// FUN_1001746e @ 0x1001746e 118B
// ============================================================

undefined4 FUN_1001746e(int param_1,int param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  
  if (((param_2 == -2) && (((param_3 == 0x201 || (param_3 == 0x207)) || (param_3 == 0x204)))) &&
     (pvVar1 = FUN_10018b5c(param_1), pvVar1 != (void *)0x0)) {
    GetLastActivePopup(*(HWND *)((int)pvVar1 + 0x1c));
    pvVar1 = FUN_100176a5();
    if (pvVar1 != (void *)0x0) {
      GetForegroundWindow();
      pvVar2 = FUN_100176a5();
      if ((pvVar1 != pvVar2) && (iVar3 = FUN_10017159((int)pvVar1), iVar3 != 0)) {
        SetForegroundWindow(*(HWND *)((int)pvVar1 + 0x1c));
        return 1;
      }
    }
  }
  return 0;
}



// ============================================================
// FUN_100174e4 @ 0x100174e4 170B
// ============================================================

undefined4 FUN_100174e4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_1000c418();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc0;
  iVar2 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
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
    FUN_10017371((int)piVar1,(LPRECT)(unaff_EBP + -0x24),(undefined4 *)(unaff_EBP + 8));
  }
  uVar3 = (**(code **)(*piVar1 + 0x98))
                    (iVar4,*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18));
  *(undefined4 *)(unaff_EBP + 0x18) = uVar3;
  if (iVar4 == 0x110) {
    FUN_10017394(piVar1,(int *)(unaff_EBP + -0x24),*(uint *)(unaff_EBP + 8));
    uVar3 = FUN_100175b8();
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
// Catch@1001758e @ 0x1001758e 39B
// ============================================================

undefined * Catch_1001758e(void)

{
  CWinThread *pCVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  pCVar1 = AfxGetThread();
  uVar2 = (**(code **)(*(int *)pCVar1 + 0x6c))
                    (*(undefined4 *)(unaff_EBP + 0xc),*(int *)(unaff_EBP + -0x14) + 0x34);
  *(undefined4 *)(unaff_EBP + 0x18) = uVar2;
  FUN_100152b5(*(int **)(unaff_EBP + 0xc));
  return &DAT_100175b5;
}



// ============================================================
// FUN_100175b8 @ 0x100175b8 31B
// ============================================================

undefined4 FUN_100175b8(void)

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
// FUN_100175d7 @ 0x100175d7 53B
// ============================================================

int FUN_100175d7(void)

{
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  
  iVar1 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
  LVar2 = GetMessageTime();
  *(LONG *)(iVar1 + 0x44) = LVar2;
  DVar3 = GetMessagePos();
  *(int *)(iVar1 + 0x48) = (int)(short)DVar3;
  *(int *)(iVar1 + 0x4c) = (int)(short)(DVar3 >> 0x10);
  return iVar1 + 0x34;
}



// ============================================================
// FUN_1001760c @ 0x1001760c 39B
// ============================================================

void __fastcall FUN_1001760c(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
  (**(code **)(*param_1 + 0xa0))
            (*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c),
             *(undefined4 *)(iVar1 + 0x40));
  return;
}



// ============================================================
// FUN_10017633 @ 0x10017633 114B
// ============================================================

undefined4 FUN_10017633(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_1000c418();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x14) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    puVar2 = FUN_10014ca6(&LAB_10019f3f);
    pvVar3 = FUN_10014cb8(0x48);
    *(void **)(unaff_EBP + 8) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_100168ad();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 **)(pAVar1 + 0x14) = puVar4;
    FUN_10014ca6(puVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x14);
}



// ============================================================
// FUN_100176a5 @ 0x100176a5 39B
// ============================================================

void * FUN_100176a5(void)

{
  int iVar1;
  void *this;
  
  iVar1 = FUN_10017633();
  this = (void *)FUN_10016912();
  FUN_100171bc(this,iVar1);
  return this;
}



// ============================================================
// FUN_100176cc @ 0x100176cc 30B
// ============================================================

undefined4 FUN_100176cc(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10017633();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_10014b67((void *)(iVar1 + 4),param_1);
  }
  return uVar2;
}



// ============================================================
// FUN_100176ea @ 0x100176ea 57B
// ============================================================

bool __thiscall FUN_100176ea(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_10017633();
    *(uint *)((int)this + 0x1c) = param_1;
    puVar2 = FUN_10014b9a((void *)(iVar1 + 4),param_1);
    *puVar2 = this;
    FUN_100171bc(this,iVar1);
  }
  return param_1 != 0;
}



// ============================================================
// Detach @ 0x10017723 46B
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
    iVar2 = FUN_10017633();
    if (iVar2 != 0) {
      FUN_10014bea((void *)(iVar2 + 4),*(uint *)(this + 0x1c));
    }
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(undefined4 *)(this + 0x38) = 0;
  return pHVar1;
}



// ============================================================
// FUN_10017752 @ 0x10017752 47B
// ============================================================

undefined4 FUN_10017752(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x360) {
    uVar1 = 1;
  }
  else {
    FUN_100176cc(param_1);
    uVar1 = FUN_100174e4();
  }
  return uVar1;
}



// ============================================================
// FUN_10017787 @ 0x10017787 291B
// ============================================================

undefined4 FUN_10017787(void)

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
  
  FUN_1000c418();
  hWnd = *(HWND *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb4;
  pvVar1 = GetPropA(hWnd,"AfxOldWndProc423");
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(HANDLE *)(unaff_EBP + -0x18) = pvVar1;
  iVar5 = *(int *)(unaff_EBP + 0xc);
  bVar7 = true;
  if (iVar5 == 6) {
    pvVar4 = FUN_100176a5();
    pvVar6 = FUN_100176a5();
    FUN_1001740d((int)pvVar6,*(WPARAM *)(unaff_EBP + 0x10),(int)pvVar4);
LAB_1001788b:
    if (!bVar7) goto LAB_10017818;
  }
  else {
    if (iVar5 == 0x20) {
      pvVar4 = FUN_100176a5();
      iVar5 = FUN_1001746e((int)pvVar4,(int)*(short *)(unaff_EBP + 0x14),
                           *(uint *)(unaff_EBP + 0x14) >> 0x10);
      bVar7 = iVar5 == 0;
      goto LAB_1001788b;
    }
    if (iVar5 == 0x82) {
      SetWindowLongA(hWnd,-4,*(LONG *)(unaff_EBP + -0x18));
      RemovePropA(hWnd,"AfxOldWndProc423");
      nAtom = GlobalFindAtomA("AfxOldWndProc423");
      GlobalDeleteAtom(nAtom);
    }
    else if (iVar5 == 0x110) {
      piVar2 = FUN_100176a5();
      FUN_10017371((int)piVar2,(LPRECT)(unaff_EBP + -0x30),(undefined4 *)(unaff_EBP + -0x1c));
      LVar3 = CallWindowProcA(*(WNDPROC *)(unaff_EBP + -0x18),hWnd,0x110,
                              *(WPARAM *)(unaff_EBP + 0x10),*(LPARAM *)(unaff_EBP + 0x14));
      *(LRESULT *)(unaff_EBP + -0x14) = LVar3;
      FUN_10017394(piVar2,(int *)(unaff_EBP + -0x30),*(uint *)(unaff_EBP + -0x1c));
      goto LAB_10017818;
    }
  }
  LVar3 = CallWindowProcA(*(WNDPROC *)(unaff_EBP + -0x18),hWnd,*(UINT *)(unaff_EBP + 0xc),
                          *(WPARAM *)(unaff_EBP + 0x10),*(LPARAM *)(unaff_EBP + 0x14));
  *(LRESULT *)(unaff_EBP + -0x14) = LVar3;
LAB_10017818:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}



// ============================================================
// Catch@100178aa @ 0x100178aa 60B
// ============================================================

undefined4 Catch_100178aa(void)

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
  FUN_100152b5(*(int **)(unaff_EBP + -0x20));
  return 0x10017818;
}



// ============================================================
// FUN_100178e6 @ 0x100178e6 124B
// ============================================================

undefined4 FUN_100178e6(undefined4 param_1,int param_2,HDC param_3,HWND param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_1001b966();
  if (((*(HANDLE *)(iVar1 + 4) != (HANDLE)0x0) &&
      ((((param_2 == 0x135 || (param_2 == 0x136)) || (param_2 == 0x138)) ||
       ((param_2 == 0x137 || (param_2 == 0x134)))))) &&
     (iVar2 = FUN_1001920f(param_3,param_4,param_2 + -0x132,*(HANDLE *)(iVar1 + 4),
                           *(COLORREF *)(iVar1 + 8)), iVar2 != 0)) {
    return *(undefined4 *)(iVar1 + 4);
  }
  uVar3 = FUN_10017787();
  return uVar3;
}



// ============================================================
// FUN_10017962 @ 0x10017962 502B
// ============================================================

LRESULT FUN_10017962(int param_1,HWND param_2,int *param_3)

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
  
  local_8 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
  if (param_1 != 3) {
    LVar1 = CallNextHookEx(*(HHOOK *)(local_8 + 0x2c),param_1,(WPARAM)param_2,(LPARAM)param_3);
    return LVar1;
  }
  this = *(int **)(local_8 + 0x14);
  iVar4 = *param_3;
  iVar2 = FUN_1001b31e();
  local_c = (uint)*(byte *)(iVar2 + 0x14);
  if ((this == (int *)0x0) && (((*(byte *)(iVar4 + 0x23) & 0x40) != 0 || (local_c != 0))))
  goto LAB_10017b2b;
  if (DAT_1002a22c != 0) {
    DVar3 = GetClassLongA(param_2,-0x1a);
    if ((DVar3 & 0x10000) != 0) goto LAB_10017b2b;
    lpString1 = *(int **)(iVar4 + 0x28);
    if ((short)((uint)lpString1 >> 0x10) == 0) {
      local_14[0] = CONCAT31(local_14[0]._1_3_,(byte)local_14[0] & (byte)((uint)lpString1 >> 0x10));
      GlobalGetAtomNameA(*(ATOM *)(iVar4 + 0x28),(LPSTR)local_14,5);
      lpString1 = local_14;
    }
    iVar4 = lstrcmpiA((LPCSTR)lpString1,"ime");
    if (iVar4 == 0) goto LAB_10017b2b;
  }
  if (this == (int *)0x0) {
    hData = (HANDLE)GetWindowLongA(param_2,-4);
    if ((hData != (HANDLE)0x0) &&
       (pvVar8 = GetPropA(param_2,"AfxOldWndProc423"), pvVar8 == (HANDLE)0x0)) {
      SetPropA(param_2,"AfxOldWndProc423",hData);
      pvVar8 = GetPropA(param_2,"AfxOldWndProc423");
      if (pvVar8 == hData) {
        GlobalAddAtomA("AfxOldWndProc423");
        dwNewLong = FUN_100178e6;
        if (*(int *)(local_8 + 0x28) == 0) {
          dwNewLong = FUN_10017787;
        }
        SetWindowLongA(param_2,-4,(LONG)dwNewLong);
      }
    }
    goto LAB_10017b2b;
  }
  FUN_100176ea(this,(uint)param_2);
  (**(code **)(*this + 0x50))();
  pLVar5 = (LONG *)(**(code **)(*this + 0x80))();
  iVar4 = DAT_1002a228;
  if ((((DAT_1002a214 == 0) && (local_c == 0)) && (DAT_1002a228 != 0)) &&
     ((*(int *)(DAT_1002a228 + 0x20) != 0 && (local_14[0] = FUN_100174e4(), local_14[0] != 0)))) {
    puVar6 = FUN_10017781();
    puVar7 = (undefined *)GetWindowLongA(param_2,-4);
    (**(code **)(iVar4 + 0x20))(param_2,local_14[0]);
    if (puVar7 != puVar6) {
      puVar7 = (undefined *)SetWindowLongA(param_2,-4,(LONG)puVar6);
LAB_10017abf:
      *pLVar5 = (LONG)puVar7;
    }
  }
  else {
    puVar6 = FUN_10017781();
    puVar7 = (undefined *)SetWindowLongA(param_2,-4,(LONG)puVar6);
    if (puVar7 != puVar6) goto LAB_10017abf;
  }
  *(undefined4 *)(local_8 + 0x14) = 0;
LAB_10017b2b:
  iVar4 = local_8;
  LVar1 = CallNextHookEx(*(HHOOK *)(local_8 + 0x2c),3,(WPARAM)param_2,(LPARAM)param_3);
  if (local_c != 0) {
    UnhookWindowsHookEx(*(HHOOK *)(iVar4 + 0x2c));
    *(undefined4 *)(iVar4 + 0x2c) = 0;
  }
  return LVar1;
}



// ============================================================
// FUN_10017b58 @ 0x10017b58 76B
// ============================================================

void FUN_10017b58(int param_1)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  
  iVar1 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
  if (*(int *)(iVar1 + 0x14) != param_1) {
    if (*(int *)(iVar1 + 0x2c) == 0) {
      dwThreadId = GetCurrentThreadId();
      pHVar2 = SetWindowsHookExA(5,FUN_10017962,(HINSTANCE)0x0,dwThreadId);
      *(HHOOK *)(iVar1 + 0x2c) = pHVar2;
      if (pHVar2 == (HHOOK)0x0) {
        FUN_100145b0();
      }
    }
    *(int *)(iVar1 + 0x14) = param_1;
  }
  return;
}



// ============================================================
// FUN_10017ba4 @ 0x10017ba4 66B
// ============================================================

undefined4 FUN_10017ba4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
  iVar2 = FUN_1001b31e();
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
// FUN_10017be6 @ 0x10017be6 198B
// ============================================================

bool __thiscall
FUN_10017be6(void *this,DWORD param_1,LPCSTR param_2,LPCSTR param_3,DWORD param_4,int param_5,
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
  iVar1 = FUN_1001b31e();
  local_30 = *(HINSTANCE *)(iVar1 + 8);
  local_34 = param_11;
  iVar1 = (**(code **)(*(int *)this + 0x5c))(&local_34);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0xa4))();
    bVar3 = false;
  }
  else {
    FUN_10017b58((int)this);
    pHVar2 = CreateWindowExA(local_8,local_c,local_10,local_14,local_18,local_1c,local_20,local_24,
                             local_28,local_2c,local_30,local_34);
    iVar1 = FUN_10017ba4();
    if (iVar1 == 0) {
      (**(code **)(*(int *)this + 0xa4))();
    }
    bVar3 = pHVar2 != (HWND)0x0;
  }
  return bVar3;
}



// ============================================================
// FUN_10017cac @ 0x10017cac 32B
// ============================================================

undefined4 FUN_10017cac(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    FUN_10019520(1);
    *(char **)(param_1 + 0x28) = "AfxWnd42s";
  }
  return 1;
}



// ============================================================
// FUN_10017ccc @ 0x10017ccc 76B
// ============================================================

void __thiscall
FUN_10017ccc(void *this,LPCSTR param_1,LPCSTR param_2,uint param_3,int *param_4,int param_5,
            HMENU param_6,LPVOID param_7)

{
  HWND pHVar1;
  
  if (param_5 == 0) {
    pHVar1 = (HWND)0x0;
  }
  else {
    pHVar1 = *(HWND *)(param_5 + 0x1c);
  }
  FUN_10017be6(this,0,param_1,param_2,param_3 | 0x40000000,*param_4,param_4[1],param_4[2] - *param_4
               ,param_4[3] - param_4[1],pHVar1,param_6,param_7);
  return;
}



// ============================================================
// ~CWnd @ 0x10017d18 124B
// ============================================================

/* Library Function - Single Match
    public: virtual __thiscall CWnd::~CWnd(void)
   
   Library: Visual Studio 2003 Release */

void __thiscall CWnd::~CWnd(CWnd *this)

{
  int iVar1;
  CWnd *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(CWnd **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined ***)extraout_ECX = &PTR_LAB_1001f5b0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((((*(int *)(extraout_ECX + 0x1c) != 0) && (extraout_ECX != (CWnd *)&DAT_1002a158)) &&
      (extraout_ECX != (CWnd *)&DAT_1002a118)) &&
     ((extraout_ECX != (CWnd *)&DAT_1002a0d8 && (extraout_ECX != (CWnd *)&DAT_1002a098)))) {
    FUN_10017ed5(extraout_ECX);
  }
  if (*(int **)(extraout_ECX + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x34) + 4))(1);
  }
  iVar1 = *(int *)(extraout_ECX + 0x38);
  if ((iVar1 != 0) && (*(CWnd **)(iVar1 + 0x24) == extraout_ECX)) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1001630e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10017d94 @ 0x10017d94 30B
// ============================================================

void __fastcall FUN_10017d94(int *param_1)

{
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))(1);
  }
  param_1[0xd] = 0;
  FUN_1001760c(param_1);
  return;
}



// ============================================================
// FUN_10017db2 @ 0x10017db2 274B
// ============================================================

void __fastcall FUN_10017db2(CWnd *param_1)

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
  if (pCVar2 == (CWinThread *)0x0) goto LAB_10017dfd;
  if (*(CWnd **)(pCVar2 + 0x1c) == param_1) {
    iVar3 = FUN_1001b31e();
    if (*(char *)(iVar3 + 0x14) == '\0') {
      iVar3 = FUN_1001b31e();
      if (pCVar2 == *(CWinThread **)(iVar3 + 4)) {
        bVar1 = FUN_1001aa1d();
        if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_10017df2;
      }
      AfxPostQuitMessage(0);
    }
LAB_10017df2:
    *(undefined4 *)(pCVar2 + 0x1c) = 0;
  }
  if (*(CWnd **)(pCVar2 + 0x20) == param_1) {
    *(undefined4 *)(pCVar2 + 0x20) = 0;
  }
LAB_10017dfd:
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x50))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (((byte)param_1[0x24] & 1) != 0) {
    iVar3 = FUN_1001b0ec();
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
  FUN_1001760c((int *)param_1);
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
// FUN_10017ed5 @ 0x10017ed5 77B
// ============================================================

BOOL __fastcall FUN_10017ed5(CWnd *param_1)

{
  int iVar1;
  BOOL BVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  iVar1 = FUN_10017633();
  iVar1 = FUN_10014b67((void *)(iVar1 + 4),*(uint *)(param_1 + 0x1c));
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
// FUN_10017f22 @ 0x10017f22 71B
// ============================================================

void __thiscall FUN_10017f22(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

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
// FUN_10017f6d @ 0x10017f6d 31B
// ============================================================

undefined4 __thiscall FUN_10017f6d(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001b31e();
  if (*(code **)(iVar1 + 0x1034) != (code *)0x0) {
    (**(code **)(iVar1 + 0x1034))(param_1,this);
  }
  return 0;
}



// ============================================================
// FUN_10017fe3 @ 0x10017fe3 113B
// ============================================================

uint __thiscall FUN_10017fe3(void *this,LONG param_1,LONG param_2,uint *param_3)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  
  hWnd = FUN_10019e23(*(HWND *)((int)this + 0x1c),param_1,param_2);
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
// FUN_10018054 @ 0x10018054 61B
// ============================================================

void __thiscall FUN_10018054(void *this,undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 == 1) {
    piVar1 = (int *)FUN_10019928(param_2[5]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))(param_2);
      return;
    }
  }
  else {
    iVar2 = FUN_10018d55();
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_1001760c(this);
  return;
}



// ============================================================
// FUN_10018091 @ 0x10018091 42B
// ============================================================

undefined4 __thiscall FUN_10018091(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_10018d55();
  if (iVar1 == 0) {
    param_2 = FUN_1001760c(this);
  }
  return param_2;
}



// ============================================================
// FUN_100180db @ 0x100180db 43B
// ============================================================

void * __thiscall FUN_100180db(void *this,undefined4 param_1,void *param_2)

{
  int iVar1;
  
  if ((param_2 == (void *)0x0) || (iVar1 = FUN_10018d28(param_2,&param_2), iVar1 == 0)) {
    param_2 = (void *)FUN_1001760c(this);
  }
  return param_2;
}



// ============================================================
// FUN_100181e1 @ 0x100181e1 145B
// ============================================================

undefined4 FUN_100181e1(void)

{
  WNDCLASSA *lpWndClass;
  ATOM AVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_1000c418();
  lpWndClass = *(WNDCLASSA **)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  BVar2 = GetClassInfoA(lpWndClass->hInstance,lpWndClass->lpszClassName,
                        (LPWNDCLASSA)(unaff_EBP + -0x38));
  if (BVar2 == 0) {
    AVar1 = RegisterClassA(lpWndClass);
    if (AVar1 == 0) {
      uVar3 = 0;
      goto LAB_10018261;
    }
    iVar4 = FUN_1001b31e();
    if (*(char *)(iVar4 + 0x14) != '\0') {
      FUN_1001bcae(1);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_1001b31e();
      lstrcatA((LPSTR)(iVar4 + 0x34),lpWndClass->lpszClassName);
      *(undefined1 *)(unaff_EBP + 10) = 10;
      *(undefined1 *)(unaff_EBP + 0xb) = 0;
      lstrcatA((LPSTR)(iVar4 + 0x34),(LPCSTR)(unaff_EBP + 10));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_1001bd1e(1);
    }
  }
  uVar3 = 1;
LAB_10018261:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



// ============================================================
// FUN_100182c8 @ 0x100182c8 226B
// ============================================================

void FUN_100182c8(void)

{
  int iVar1;
  void *pvVar2;
  HWND hWnd;
  BOOL BVar3;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  iVar1 = FUN_1001b31e();
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar1 + 4);
  FUN_1001b31e();
  FUN_10016560();
  iVar1 = *extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = (**(code **)(iVar1 + 0xb0))();
  if (iVar1 != 0) {
    (**(code **)(*extraout_ECX + 0xf0))();
  }
  SendMessageA((HWND)extraout_ECX[7],0x1f,0,0);
  FUN_10018c3e((HWND)extraout_ECX[7],0x1f,0,0,1,1);
  pvVar2 = FUN_10018b5c((int)extraout_ECX);
  SendMessageA(*(HWND *)((int)pvVar2 + 0x1c),0x1f,0,0);
  FUN_10018c3e(*(HWND *)((int)pvVar2 + 0x1c),0x1f,0,0,1,1);
  hWnd = GetCapture();
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x1f,0,0);
  }
  BVar3 = WinHelpA(*(HWND *)((int)pvVar2 + 0x1c),*(LPCSTR *)(*(int *)(unaff_EBP + -0x10) + 0x8c),
                   *(UINT *)(unaff_EBP + 0xc),*(ULONG_PTR *)(unaff_EBP + 8));
  if (BVar3 == 0) {
    FUN_1001a757();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_1001b31e();
  FUN_10016575();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// AfxFindMessageEntry @ 0x100183b0 64B
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
// FUN_100183f0 @ 0x100183f0 68B
// ============================================================

undefined4 __thiscall
FUN_100183f0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
// FUN_10018434 @ 0x10018434 1198B
// ============================================================

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_10018434(void)

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
  
  FUN_1000c418();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == 0x111) {
    iVar2 = (**(code **)(*extraout_ECX + 0x78))
                      (*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar2 != 0) {
LAB_1001888a:
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      goto switchD_10018608_caseD_26;
    }
LAB_100185bd:
    uVar14 = 0;
    goto LAB_100185bf;
  }
  if (iVar2 == 0x4e) {
    if (**(int **)(unaff_EBP + 0x10) != 0) {
      iVar2 = (**(code **)(*extraout_ECX + 0x7c))
                        (*(undefined4 *)(unaff_EBP + 0xc),*(int **)(unaff_EBP + 0x10),
                         unaff_EBP + -0x10);
LAB_1001848d:
      if (iVar2 != 0) goto switchD_10018608_caseD_26;
    }
    goto LAB_100185bd;
  }
  puVar8 = *(uint **)(unaff_EBP + 0x10);
  if (iVar2 == 6) {
    pvVar3 = FUN_100176a5();
    FUN_1001740d((int)extraout_ECX,*(WPARAM *)(unaff_EBP + 0xc),(int)pvVar3);
  }
  sVar13 = (short)puVar8;
  if ((iVar2 == 0x20) &&
     (iVar2 = FUN_1001746e((int)extraout_ECX,(int)sVar13,(uint)puVar8 >> 0x10), iVar2 != 0))
  goto LAB_1001888a;
  uVar4 = (**(code **)(*extraout_ECX + 0x28))();
  *(uint *)(unaff_EBP + -0x14) = uVar4;
  uVar11 = uVar4 & 0x1ff ^ *(uint *)(unaff_EBP + 8) & 0x1ff;
  FUN_1001bcae(7);
  uVar4 = *(uint *)(unaff_EBP + 8);
  iVar2 = uVar11 * 0xc;
  iVar5 = *(int *)(unaff_EBP + -0x14);
  if ((uVar4 != *(uint *)(&DAT_10028870 + uVar11 * 0xc)) ||
     (iVar5 != *(int *)(&DAT_10028878 + iVar2))) {
    *(uint *)(&DAT_10028870 + iVar2) = uVar4;
    *(int *)(&DAT_10028878 + iVar2) = iVar5;
    if (iVar5 != 0) {
      while( true ) {
        if (uVar4 < 0xc000) {
          pAVar6 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(iVar5 + 4),uVar4,0,0);
          *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
          if (pAVar6 != (AFX_MSGMAP_ENTRY *)0x0) {
            *(AFX_MSGMAP_ENTRY **)(&DAT_10028874 + iVar2) = pAVar6;
            FUN_1001bd1e(7);
            iVar2 = *(int *)(unaff_EBP + 0x10);
            goto LAB_100185dd;
          }
        }
        else {
          pAVar6 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(iVar5 + 4),0xc000,0,0);
          *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
          if (pAVar6 != (AFX_MSGMAP_ENTRY *)0x0) {
            while( true ) {
              if (**(int **)(pAVar6 + 0x10) == *(int *)(unaff_EBP + 8)) {
                *(AFX_MSGMAP_ENTRY **)(&DAT_10028874 + iVar2) = pAVar6;
                FUN_1001bd1e(7);
                iVar2 = *(int *)(unaff_EBP + 0x10);
                goto LAB_100188c0;
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
    *(undefined4 *)(&DAT_10028874 + iVar2) = 0;
    FUN_1001bd1e(7);
    goto LAB_100185bd;
  }
  iVar2 = *(int *)(&DAT_10028874 + iVar2);
  *(int *)(unaff_EBP + 0x10) = iVar2;
  FUN_1001bd1e(7);
  if (iVar2 == 0) goto LAB_100185bd;
  if (0xbfff < *(uint *)(unaff_EBP + 8)) {
LAB_100188c0:
    pcVar12 = *(code **)(iVar2 + 0x14);
switchD_10018608_caseD_a:
    pvVar3 = *(void **)(unaff_EBP + 0xc);
    goto LAB_100188c7;
  }
LAB_100185dd:
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
    puVar8 = (uint *)FUN_1001a033();
    goto LAB_10018718;
  case 2:
    puVar8 = *(uint **)(unaff_EBP + 0xc);
    goto LAB_10018718;
  case 3:
  case 8:
    uVar4 = (uint)puVar8 >> 0x10;
    pvVar3 = (void *)(int)sVar13;
    pvVar9 = FUN_100176a5();
    goto LAB_10018733;
  case 4:
    FUN_10019f91((undefined4 *)(unaff_EBP + -0x24));
    uVar4 = puVar8[1];
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(uint *)(unaff_EBP + -0x20) = uVar4;
    FUN_10017307((undefined4 *)(unaff_EBP + -0x60));
    uVar4 = *puVar8;
    uVar11 = puVar8[2];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(uint *)(unaff_EBP + -0x44) = uVar4;
    iVar2 = FUN_100176cc(uVar4);
    if (iVar2 == 0) {
      if ((extraout_ECX[0xd] != 0) &&
         (iVar2 = FUN_10014b67((void *)(extraout_ECX[0xd] + 0x20),*(uint *)(unaff_EBP + -0x44)),
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
    goto LAB_100186ee;
  case 5:
    FUN_10019f91((undefined4 *)(unaff_EBP + -0x24));
    uVar4 = puVar8[2];
    *(uint *)(unaff_EBP + -0x20) = puVar8[1];
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uVar14 = (*pcVar12)(unaff_EBP + -0x24,uVar4);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar14;
LAB_100186ee:
    FUN_1001a079();
    break;
  case 6:
    uVar4 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
    pvVar3 = FUN_100176a5();
    goto LAB_1001872e;
  case 7:
    puVar8 = (uint *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    pvVar3 = (void *)(uint)*(ushort *)(unaff_EBP + 0xc);
    goto LAB_100188c7;
  case 9:
  case 0x2a:
LAB_10018718:
    uVar14 = (*pcVar12)(puVar8);
LAB_100188cb:
    *(undefined4 *)(unaff_EBP + -0x10) = uVar14;
    break;
  case 10:
  case 0x21:
    goto switchD_10018608_caseD_a;
  case 0xb:
    uVar4 = FUN_10019913();
    pvVar3 = (void *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
LAB_1001872e:
    pvVar9 = (void *)(uint)*(ushort *)(unaff_EBP + 0xc);
LAB_10018733:
    uVar14 = (*pcVar12)(pvVar9,pvVar3,uVar4);
    goto LAB_100188cb;
  case 0xc:
    (*pcVar12)();
    break;
  case 0xd:
    puVar8 = *(uint **)(unaff_EBP + 0xc);
    goto LAB_10018857;
  case 0xe:
  case 0x12:
  case 0x25:
  case 0x2f:
    goto LAB_10018837;
  case 0xf:
    puVar8 = (uint *)(int)sVar1;
    pvVar3 = (void *)(int)sVar13;
    goto LAB_1001883a;
  case 0x10:
  case 0x11:
    puVar10 = (uint *)((uint)puVar8 >> 0x10);
    pvVar3 = (void *)((uint)puVar8 & 0xffff);
    goto LAB_10018878;
  case 0x13:
    puVar10 = FUN_100176a5();
    pvVar3 = FUN_100176a5();
    pvVar9 = (void *)(uint)((uint *)extraout_ECX[7] == puVar8);
    goto LAB_1001887c;
  case 0x14:
    puVar8 = (uint *)FUN_1001a033();
    goto LAB_10018857;
  case 0x15:
    puVar8 = (uint *)FUN_10019913();
    goto LAB_10018857;
  case 0x16:
    puVar10 = (uint *)((uint)puVar8 >> 0x10);
    pvVar3 = (void *)((uint)puVar8 & 0xffff);
    pvVar9 = (void *)FUN_10019913();
    goto LAB_1001887c;
  case 0x17:
    goto LAB_100187be;
  case 0x18:
    puVar10 = (uint *)((uint)puVar8 >> 0x10);
    pvVar3 = (void *)((uint)puVar8 & 0xffff);
    goto LAB_100187da;
  case 0x19:
    pvVar3 = (void *)(int)sVar13;
    puVar10 = (uint *)(int)sVar1;
LAB_100187da:
    pvVar9 = FUN_100176a5();
    goto LAB_1001887c;
  case 0x1a:
    pvVar3 = FUN_100176a5();
    goto LAB_1001883a;
  case 0x1b:
    puVar8 = FUN_100176a5();
LAB_10018837:
    pvVar3 = *(void **)(unaff_EBP + 0xc);
    goto LAB_1001883a;
  case 0x1c:
    puVar10 = (uint *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    pvVar3 = FUN_100176a5();
    goto LAB_10018864;
  case 0x1d:
  case 0x1e:
    pvVar3 = (void *)(int)(short)*(undefined4 *)(unaff_EBP + 0xc);
    iVar2 = *(int *)(iVar5 + 0x10);
    *(void **)(unaff_EBP + 8) = pvVar3;
    puVar8 = (uint *)(int)(short)((uint)*(undefined4 *)(unaff_EBP + 0xc) >> 0x10);
    *(uint **)(unaff_EBP + 0xc) = puVar8;
    if (iVar2 == 0x1d) {
      puVar10 = FUN_100176a5();
      pvVar3 = *(void **)(unaff_EBP + 0xc);
      pvVar9 = *(void **)(unaff_EBP + 8);
      goto LAB_1001887c;
    }
LAB_1001883a:
    (*pcVar12)(pvVar3,puVar8);
    break;
  case 0x1f:
  case 0x24:
    goto LAB_10018857;
  case 0x20:
  case 0x2b:
    (*pcVar12)(*(undefined4 *)(unaff_EBP + 0xc),puVar8);
    goto LAB_1001888a;
  case 0x22:
    pvVar3 = (void *)(int)sVar13;
    puVar8 = (uint *)(int)sVar1;
    goto LAB_100188c7;
  case 0x23:
    uVar14 = (*pcVar12)();
    goto LAB_100188cb;
  case 0x2c:
LAB_100187be:
    puVar8 = FUN_100176a5();
LAB_10018857:
    (*pcVar12)(puVar8);
    break;
  case 0x2d:
    pvVar3 = FUN_100176a5();
LAB_100188c7:
    uVar14 = (*pcVar12)(pvVar3,puVar8);
    goto LAB_100188cb;
  case 0x2e:
    iVar2 = (*pcVar12)(*(undefined2 *)(unaff_EBP + 0xc),*(uint *)(unaff_EBP + 0xc) >> 0x10,
                       (uint)puVar8 & 0xffff,(uint)puVar8 >> 0x10);
    *(int *)(unaff_EBP + -0x10) = iVar2;
    goto LAB_1001848d;
  case 0x30:
    pvVar3 = (void *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    puVar10 = puVar8;
LAB_10018864:
    pvVar9 = (void *)(uint)*(ushort *)(unaff_EBP + 0xc);
    goto LAB_1001887c;
  case 0x31:
    pvVar3 = (void *)(int)sVar13;
    puVar10 = (uint *)(int)sVar1;
LAB_10018878:
    pvVar9 = *(void **)(unaff_EBP + 0xc);
LAB_1001887c:
    (*pcVar12)(pvVar9,pvVar3,puVar10);
  }
switchD_10018608_caseD_26:
  if (*(undefined4 **)(unaff_EBP + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x10);
  }
  uVar14 = 1;
LAB_100185bf:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar14;
}



// ============================================================
// FUN_100189a6 @ 0x100189a6 25B
// ============================================================

CCmdUI * __fastcall FUN_100189a6(CCmdUI *param_1)

{
  CCmdUI::CCmdUI(param_1);
  *(undefined ***)param_1 = &PTR_LAB_1001f670;
  *(undefined4 *)(param_1 + 0x28) = 1;
  return param_1;
}



// ============================================================
// FUN_100189d3 @ 0x100189d3 140B
// ============================================================

undefined4 __thiscall FUN_100189d3(void *this,uint param_1,int param_2)

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
    FUN_100189a6(local_30);
    local_2c = uVar3;
    (**(code **)(*(int *)this + 0xc))(uVar3,0xffffffff,local_30,0);
    if (local_8 != 0) {
      param_1 = 0;
LAB_10018a17:
      uVar1 = (**(code **)(*(int *)this + 0xc))(uVar3,param_1,0,0);
      return uVar1;
    }
  }
  else {
    iVar2 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
    if ((*(int *)(iVar2 + 0xb8) != *(int *)((int)this + 0x1c)) &&
       (iVar2 = FUN_10018d55(), iVar2 == 0)) {
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_10018a17;
    }
  }
  return 1;
}



// ============================================================
// FUN_10018a5f @ 0x10018a5f 122B
// ============================================================

undefined4 __thiscall
FUN_10018a5f(void *this,undefined4 param_1,undefined4 *param_2,undefined4 param_3)

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
  iVar2 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
  if ((*(int *)(iVar2 + 0xb8) != *(int *)((int)this + 0x1c)) && (iVar2 = FUN_10018d55(), iVar2 == 0)
     ) {
    local_10 = param_3;
    local_c = param_2;
    uVar3 = (**(code **)(*(int *)this + 0xc))(local_8,uVar1 & 0xffff | 0x4e0000,&local_10,0);
    return uVar3;
  }
  return 1;
}



// ============================================================
// FUN_10018ad9 @ 0x10018ad9 62B
// ============================================================

int * __fastcall FUN_10018ad9(int param_1)

{
  int *piVar1;
  int iVar2;
  HWND hWnd;
  
  if ((param_1 != 0) && (hWnd = *(HWND *)(param_1 + 0x1c), hWnd != (HWND)0x0)) {
    while( true ) {
      GetParent(hWnd);
      piVar1 = FUN_100176a5();
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
// AfxGetParentOwner @ 0x10018b17 69B
// ============================================================

/* Library Function - Single Match
    struct HWND__ * __stdcall AfxGetParentOwner(struct HWND__ *)
   
   Library: Visual Studio 2003 Release */

HWND__ * AfxGetParentOwner(HWND__ *param_1)

{
  CWnd *pCVar1;
  uint uVar2;
  HWND__ *pHVar3;
  
  pCVar1 = (CWnd *)FUN_100176cc((uint)param_1);
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
// FUN_10018b5c @ 0x10018b5c 40B
// ============================================================

void * __fastcall FUN_10018b5c(int param_1)

{
  HWND__ *pHVar1;
  void *pvVar2;
  
  if ((param_1 != 0) && (pHVar1 = *(HWND__ **)(param_1 + 0x1c), pHVar1 != (HWND__ *)0x0)) {
    do {
      pHVar1 = AfxGetParentOwner(pHVar1);
    } while (pHVar1 != (HWND__ *)0x0);
    pvVar2 = FUN_100176a5();
    return pvVar2;
  }
  return (void *)0x0;
}



// ============================================================
// FUN_10018b84 @ 0x10018b84 65B
// ============================================================

int * __fastcall FUN_10018b84(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_1 != (int *)0x0) && (param_1[7] != 0)) {
    iVar2 = (**(code **)(*param_1 + 0xb0))();
    piVar3 = param_1;
    if (iVar2 == 0) {
      param_1 = FUN_10018ad9((int)param_1);
      piVar3 = param_1;
    }
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar3 = FUN_10018ad9((int)piVar1);
      param_1 = piVar1;
    }
    return param_1;
  }
  return (int *)0x0;
}



// ============================================================
// FUN_10018bc5 @ 0x10018bc5 121B
// ============================================================

void * FUN_10018bc5(HWND param_1,int param_2,int param_3)

{
  HWND pHVar1;
  HWND pHVar2;
  void *pvVar3;
  
  pHVar1 = GetDlgItem(param_1,param_2);
  if (pHVar1 != (HWND)0x0) {
    pHVar2 = GetTopWindow(pHVar1);
    if ((pHVar2 != (HWND)0x0) &&
       (pvVar3 = FUN_10018bc5(pHVar1,param_2,param_3), pvVar3 != (void *)0x0)) {
      return pvVar3;
    }
    if (param_3 == 0) {
      pvVar3 = FUN_100176a5();
      return pvVar3;
    }
    pvVar3 = (void *)FUN_100176cc((uint)pHVar1);
    if (pvVar3 != (void *)0x0) {
      return pvVar3;
    }
  }
  pHVar1 = GetTopWindow(param_1);
  while( true ) {
    if (pHVar1 == (HWND)0x0) {
      return (void *)0x0;
    }
    pvVar3 = FUN_10018bc5(pHVar1,param_2,param_3);
    if (pvVar3 != (void *)0x0) break;
    pHVar1 = GetWindow(pHVar1,2);
  }
  return pvVar3;
}



// ============================================================
// FUN_10018c3e @ 0x10018c3e 125B
// ============================================================

void FUN_10018c3e(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5,int param_6)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  
  for (hWnd = GetTopWindow(param_1); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    if (param_6 == 0) {
      SendMessageA(hWnd,param_2,param_3,param_4);
    }
    else {
      iVar1 = FUN_100176cc((uint)hWnd);
      if (iVar1 != 0) {
        FUN_100174e4();
      }
    }
    if (param_5 != 0) {
      pHVar2 = GetTopWindow(hWnd);
      if (pHVar2 != (HWND)0x0) {
        FUN_10018c3e(hWnd,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}



// ============================================================
// FUN_10018cbb @ 0x10018cbb 43B
// ============================================================

void __thiscall FUN_10018cbb(void *this,LPRECT param_1,int param_2)

{
  uint dwExStyle;
  DWORD dwStyle;
  BOOL bMenu;
  
  dwExStyle = FUN_100170c9((int)this);
  if (param_2 == 0) {
    dwExStyle = dwExStyle & 0xfffffdff;
  }
  bMenu = 0;
  dwStyle = FUN_100170af((int)this);
  AdjustWindowRectEx(param_1,dwStyle,bMenu,dwExStyle);
  return;
}



// ============================================================
// FUN_10018ce6 @ 0x10018ce6 66B
// ============================================================

undefined4 FUN_10018ce6(HWND param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  HWND hWnd;
  
  hWnd = (HWND)*param_2;
  while( true ) {
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    piVar1 = (int *)FUN_100176cc((uint)hWnd);
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
// FUN_10018d28 @ 0x10018d28 45B
// ============================================================

void __thiscall FUN_10018d28(void *this,undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
  (**(code **)(*(int *)this + 0xa8))
            (*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar1 + 0x3c),
             *(undefined4 *)(iVar1 + 0x40),param_1);
  return;
}



// ============================================================
// FUN_10018d55 @ 0x10018d55 164B
// ============================================================

undefined4 FUN_10018d55(void)

{
  HWND hWnd;
  int iVar1;
  void *this;
  HWND pHVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_1000c418();
  iVar1 = FUN_10017633();
  if (iVar1 != 0) {
    hWnd = *(HWND *)(unaff_EBP + 8);
    this = (void *)FUN_10014b67((void *)(iVar1 + 4),(uint)hWnd);
    if (this != (void *)0x0) {
      uVar3 = FUN_10018d28(this,*(undefined4 *)(unaff_EBP + 0xc));
      goto LAB_10018de9;
    }
    pHVar2 = GetParent(hWnd);
    iVar1 = FUN_10014b67((void *)(iVar1 + 4),(uint)pHVar2);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) != 0)) {
      iVar1 = FUN_10014b67((void *)(*(int *)(iVar1 + 0x34) + 0x20),(uint)hWnd);
      if (iVar1 != 0) {
        FUN_10017345((void *)(unaff_EBP + -0x48),hWnd);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(int *)(unaff_EBP + -0x10) = iVar1;
        uVar3 = FUN_10018d28((void *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + 0xc));
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        CWnd::~CWnd((CWnd *)(unaff_EBP + -0x48));
        goto LAB_10018de9;
      }
    }
  }
  uVar3 = 0;
LAB_10018de9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



// ============================================================
// FUN_10018df9 @ 0x10018df9 91B
// ============================================================

uint __thiscall FUN_10018df9(void *this,uint param_1,int *param_2,int param_3,int *param_4)

{
  LRESULT LVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x38) == 0) {
    uVar2 = FUN_10018e54(this,param_1,param_2,param_3,param_4);
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
// FUN_10018e54 @ 0x10018e54 232B
// ============================================================

uint __thiscall FUN_10018e54(void *this,uint param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int *local_c;
  int local_8;
  
  if (param_1 < 0x112) {
    if (param_1 == 0x111) {
      uVar1 = FUN_10016440(this,(undefined4 *)0x0,(uint)param_2 >> 0x10 | 0xbd110000,
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
      if ((param_1 < 0x30) || (param_1 == 0x39)) goto LAB_10018ee8;
      if (param_1 == 0x4e) {
        local_c = param_4;
        local_8 = param_3;
        uVar1 = FUN_10016440(this,(undefined4 *)0x0,*(uint *)(param_3 + 8) & 0xffff | 0xbc4e0000,
                             &local_c,(undefined4 *)0x0);
        return uVar1;
      }
    }
  }
  else if ((0x113 < param_1) && ((param_1 < 0x116 || (param_1 == 0x210)))) {
LAB_10018ee8:
    uVar1 = FUN_10018434();
    return uVar1;
  }
  if ((0x131 < param_1) && (param_1 < 0x139)) {
    local_8 = param_1 - 0x132;
    local_c = param_2;
    uVar1 = FUN_10018434();
    if (*param_4 != 0) {
      return uVar1;
    }
  }
  return 0;
}



// ============================================================
// FUN_10018f8b @ 0x10018f8b 125B
// ============================================================

void __fastcall FUN_10018f8b(int *param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  uint uVar3;
  
  iVar1 = FUN_1001b31e();
  if ((*(int *)(iVar1 + 4) != 0) && (*(int **)(*(int *)(iVar1 + 4) + 0x1c) == param_1)) {
    FUN_10019805(0x1002a1b8);
  }
  iVar1 = FUN_1001b31e();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if (*(int **)(pCVar2 + 0x1c) == param_1) {
        iVar1 = FUN_1001b966();
        if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
          (**(code **)(iVar1 + 0x1c))();
        }
      }
    }
  }
  uVar3 = FUN_100170af((int)param_1);
  if ((uVar3 & 0x40000000) == 0) {
    FUN_10018c3e((HWND)param_1[7],0x15,0,0,1,1);
  }
  FUN_1001760c(param_1);
  return;
}



// ============================================================
// FUN_10019008 @ 0x10019008 83B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10019008(CWnd *param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  
  iVar1 = FUN_1001b31e();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_1001b966();
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if ((*(CWnd **)(pCVar2 + 0x1c) == param_1) && (*(code **)(iVar1 + 0x24) != (code *)0x0)) {
        (**(code **)(iVar1 + 0x24))();
      }
    }
  }
  _DAT_1002886c = 0;
  CWnd::OnDisplayChange(param_1,0,0);
  return;
}



// ============================================================
// OnDevModeChange @ 0x1001905b 75B
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
  
  iVar1 = FUN_1001b31e();
  this_00 = *(void **)(iVar1 + 4);
  if ((this_00 != (void *)0x0) && (*(void **)((int)this_00 + 0x1c) == this)) {
    FUN_10015c05(this_00,param_1);
  }
  uVar2 = FUN_100170af((int)this);
  if ((uVar2 & 0x40000000) == 0) {
    iVar1 = FUN_100175d7();
    FUN_10018c3e(*(HWND *)((int)this + 0x1c),*(UINT *)(iVar1 + 4),*(WPARAM *)(iVar1 + 8),
                 *(LPARAM *)(iVar1 + 0xc),1,1);
  }
  return;
}



// ============================================================
// FUN_100190a6 @ 0x100190a6 100B
// ============================================================

undefined4 __fastcall FUN_100190a6(int *param_1)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = FUN_100170af((int)param_1);
  if (((((uVar2 & 0x40000000) == 0) && (iVar3 = FUN_1000af9b(), iVar3 != 0)) &&
      (SVar1 = GetKeyState(0x10), -1 < SVar1)) &&
     ((SVar1 = GetKeyState(0x11), -1 < SVar1 && (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    SendMessageA(*(HWND *)(iVar3 + 0x1c),0x111,0xe146,0);
    return 1;
  }
  uVar4 = FUN_1001760c(param_1);
  return uVar4;
}



// ============================================================
// OnDisplayChange @ 0x1001910a 73B
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
  
  pCVar1 = (CWnd *)FUN_1000af9b();
  if (pCVar1 == this) {
    FUN_10019849(0x1002a1b8);
  }
  uVar2 = FUN_100170af((int)this);
  if ((uVar2 & 0x40000000) == 0) {
    iVar3 = FUN_100175d7();
    FUN_10018c3e(*(HWND *)(this + 0x1c),*(UINT *)(iVar3 + 4),*(WPARAM *)(iVar3 + 8),
                 *(LPARAM *)(iVar3 + 0xc),1,1);
  }
  lVar4 = FUN_1001760c((int *)this);
  return lVar4;
}



// ============================================================
// FUN_10019153 @ 0x10019153 42B
// ============================================================

undefined4 __thiscall FUN_10019153(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_10018d55();
  if (iVar1 == 0) {
    param_2 = FUN_1001760c(this);
  }
  return param_2;
}



// ============================================================
// FUN_1001917d @ 0x1001917d 33B
// ============================================================

void __thiscall FUN_1001917d(void *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  
  if ((param_3 != (void *)0x0) && (iVar1 = FUN_10018d28(param_3,0), iVar1 != 0)) {
    return;
  }
  FUN_1001760c(this);
  return;
}



// ============================================================
// FUN_1001919e @ 0x1001919e 74B
// ============================================================

void __fastcall FUN_1001919e(int *param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0x121,0x121,1);
    if (BVar1 == 0) break;
    DispatchMessageA(&local_20);
  }
  FUN_1001760c(param_1);
  return;
}



// ============================================================
// FUN_100191e8 @ 0x100191e8 39B
// ============================================================

void * __thiscall FUN_100191e8(void *this,undefined4 param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FUN_10018d28(param_2,&param_2);
  if (iVar1 == 0) {
    param_2 = (void *)FUN_1001760c(this);
  }
  return param_2;
}



// ============================================================
// FUN_1001920f @ 0x1001920f 117B
// ============================================================

undefined4 FUN_1001920f(HDC param_1,HWND param_2,int param_3,HANDLE param_4,COLORREF param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined4 uVar2;
  undefined1 local_10 [4];
  COLORREF local_c;
  
  if ((((param_1 == (HDC)0x0) || (param_4 == (HANDLE)0x0)) || (param_3 == 1)) ||
     ((param_3 == 0 || (param_3 == 5)))) {
LAB_1001927e:
    uVar2 = 0;
  }
  else {
    if (param_3 == 2) {
      bVar1 = FUN_10019dd9(param_2,2);
      if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_1001927e;
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
// FUN_10019284 @ 0x10019284 437B
// ============================================================

void __thiscall FUN_10019284(void *this,int param_1)

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
  local_8 = FUN_100170af((int)this);
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
      iVar2 = FUN_1000af9b();
      pHVar5 = (HWND)0x0;
      if (iVar2 != 0) {
        pHVar5 = *(HWND *)(iVar2 + 0x1c);
      }
      puVar6 = local_64;
      iVar2 = xMonitorFromWindow(pHVar5,1);
      FUN_1000b504(iVar2,puVar6);
      CopyRect(&local_3c,&local_50);
      CopyRect(&local_1c,&local_50);
    }
    else {
      GetWindowRect(pHVar5,&local_3c);
      puVar6 = local_64;
      iVar2 = xMonitorFromWindow(pHVar5,2);
      FUN_1000b504(iVar2,puVar6);
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
  FUN_100170e3(local_c,0,local_1c.left,local_1c.top,-1,-1,0x15);
  return;
}



// ============================================================
// AfxRegisterWithIcon @ 0x10019468 65B
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
  iVar1 = FUN_1001b31e();
  pHVar2 = LoadIconA(*(HINSTANCE *)(iVar1 + 0xc),(LPCSTR)(uint)param_3);
  *(HICON *)(param_1 + 0x14) = pHVar2;
  if (pHVar2 == (HICON)0x0) {
    pHVar2 = LoadIconA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    *(HICON *)(param_1 + 0x14) = pHVar2;
  }
  FUN_100181e1();
  return;
}



// ============================================================
// FUN_100194a9 @ 0x100194a9 119B
// ============================================================

uint FUN_100194a9(undefined4 param_1,uint param_2)

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
// FUN_10019520 @ 0x10019520 695B
// ============================================================

bool FUN_10019520(uint param_1)

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
  
  local_8 = FUN_1001b31e();
  param_1 = param_1 & ~*(uint *)(local_8 + 0x18);
  if (param_1 == 0) {
    cVar1 = '\x01';
  }
  else {
    uVar4 = 0;
    _memset(&local_38,0,0x28);
    local_34 = DefWindowProcA_exref;
    iVar2 = FUN_1001b31e();
    local_28 = *(undefined4 *)(iVar2 + 8);
    local_20 = DAT_1002a1f8;
    local_10 = 8;
    if ((param_1 & 1) != 0) {
      local_38 = 0xb;
      local_14 = "AfxWnd42s";
      iVar2 = FUN_100181e1();
      if (iVar2 != 0) {
        uVar4 = 1;
      }
    }
    if ((param_1 & 0x20) != 0) {
      local_38 = local_38 | 0x8b;
      local_14 = "AfxOleControl42s";
      iVar2 = FUN_100181e1();
      if (iVar2 != 0) {
        uVar4 = uVar4 | 0x20;
      }
    }
    if ((param_1 & 2) != 0) {
      local_38 = 0;
      local_14 = "AfxControlBar42s";
      local_1c = 0x10;
      iVar2 = FUN_100181e1();
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
      uVar3 = FUN_100194a9(&local_10,0x3fc0);
      uVar4 = uVar4 | uVar3;
      param_1 = param_1 & 0xffffc03f;
    }
    if ((param_1 & 0x40) != 0) {
      local_c = 0x10;
      uVar3 = FUN_100194a9(&local_10,0x40);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x80) != 0) {
      local_c = 2;
      uVar3 = FUN_100194a9(&local_10,0x80);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x100) != 0) {
      local_c = 8;
      uVar3 = FUN_100194a9(&local_10,0x100);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x200) != 0) {
      local_c = 0x20;
      uVar3 = FUN_100194a9(&local_10,0x200);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x400) != 0) {
      local_c = 1;
      uVar3 = FUN_100194a9(&local_10,0x400);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x800) != 0) {
      local_c = 0x40;
      uVar3 = FUN_100194a9(&local_10,0x800);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x1000) != 0) {
      local_c = 4;
      uVar3 = FUN_100194a9(&local_10,0x1000);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x2000) != 0) {
      local_c = 0x80;
      uVar3 = FUN_100194a9(&local_10,0x2000);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x4000) != 0) {
      local_c = 0x800;
      uVar3 = FUN_100194a9(&local_10,0x4000);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x8000) != 0) {
      local_c = 0x400;
      uVar3 = FUN_100194a9(&local_10,0x8000);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x10000) != 0) {
      local_c = 0x200;
      uVar3 = FUN_100194a9(&local_10,0x10000);
      uVar4 = uVar4 | uVar3;
    }
    if ((param_1 & 0x20000) != 0) {
      local_c = 0x100;
      uVar3 = FUN_100194a9(&local_10,0x20000);
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
// FUN_100197d7 @ 0x100197d7 31B
// ============================================================

undefined4 __fastcall FUN_100197d7(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (((iVar1 != 0) && (iVar1 != 0xe002)) && (iVar1 != 0xe001)) {
    return 1;
  }
  return 0;
}



// ============================================================
// FUN_10019805 @ 0x10019805 68B
// ============================================================

void __fastcall FUN_10019805(int param_1)

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
// FUN_10019849 @ 0x10019849 88B
// ============================================================

void __fastcall FUN_10019849(int param_1)

{
  int iVar1;
  HDC hdc;
  
  iVar1 = GetSystemMetrics(0xb);
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = GetSystemMetrics(0xc);
  *(int *)(param_1 + 0xc) = iVar1;
  if (*(int *)(param_1 + 0x68) == 0) {
    FUN_1001c17c();
  }
  else {
    FUN_1001c14c();
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
// FUN_100198a1 @ 0x100198a1 114B
// ============================================================

undefined4 FUN_100198a1(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_1000c418();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x18) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    puVar2 = FUN_10014ca6(&LAB_10019f3f);
    pvVar3 = FUN_10014cb8(0x48);
    *(void **)(unaff_EBP + 8) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_100168ad();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 **)(pAVar1 + 0x18) = puVar4;
    FUN_10014ca6(puVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x18);
}



// ============================================================
// FUN_10019913 @ 0x10019913 21B
// ============================================================

void FUN_10019913(void)

{
  FUN_100198a1();
  FUN_10016912();
  return;
}



// ============================================================
// FUN_10019928 @ 0x10019928 30B
// ============================================================

undefined4 FUN_10019928(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100198a1();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_10014b67((void *)(iVar1 + 4),param_1);
  }
  return uVar2;
}



// ============================================================
// Detach @ 0x10019946 42B
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
    iVar2 = FUN_100198a1();
    if (iVar2 != 0) {
      FUN_10014bea((void *)(iVar2 + 4),*(uint *)(param_1 + 4));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}



// ============================================================
// FUN_10019970 @ 0x10019970 22B
// ============================================================

BOOL __fastcall FUN_10019970(int param_1)

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
// FUN_10019986 @ 0x10019986 271B
// ============================================================

int __thiscall FUN_10019986(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    uVar4 = *(int *)((int)this + 0x28) - (int)*(undefined4 **)((int)this + 0x24);
    if (param_2 < uVar4) {
      uVar4 = param_2;
    }
    FUN_1000c440(param_1,*(undefined4 **)((int)this + 0x24),uVar4);
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar4;
    param_1 = (undefined4 *)((int)param_1 + uVar4);
    uVar4 = param_2 - uVar4;
    if (uVar4 != 0) {
      iVar1 = uVar4 - uVar4 % *(uint *)((int)this + 0x1c);
      local_c = 0;
      local_8 = iVar1;
      do {
        iVar2 = (**(code **)(**(int **)((int)this + 0x20) + 0x34))(param_1,local_8);
        param_1 = (undefined4 *)((int)param_1 + iVar2);
        local_c = local_c + iVar2;
        local_8 = local_8 - iVar2;
        if (iVar2 == 0) break;
      } while (local_8 != 0);
      uVar4 = uVar4 - local_c;
      if (local_c == iVar1) {
        uVar5 = 0;
        if (*(int *)((int)this + 8) == 0) {
          local_8 = uVar4;
          if (uVar4 <= *(uint *)((int)this + 0x1c)) {
            local_8 = *(uint *)((int)this + 0x1c);
          }
          local_c = *(int *)((int)this + 0x2c);
          do {
            iVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x34))(local_c,local_8);
            local_c = local_c + iVar1;
            local_8 = local_8 - iVar1;
            uVar5 = uVar5 + iVar1;
            if ((iVar1 == 0) || (local_8 == 0)) break;
          } while (uVar5 < uVar4);
          puVar3 = *(undefined4 **)((int)this + 0x2c);
          *(undefined4 **)((int)this + 0x24) = puVar3;
          *(uint *)((int)this + 0x28) = (int)puVar3 + uVar5;
        }
        else {
          (**(code **)(**(int **)((int)this + 0x20) + 0x50))
                    (0,*(undefined4 *)((int)this + 0x1c),(undefined4 *)((int)this + 0x2c),
                     (int)this + 0x28);
          puVar3 = *(undefined4 **)((int)this + 0x2c);
          *(undefined4 **)((int)this + 0x24) = puVar3;
        }
        uVar5 = *(int *)((int)this + 0x28) - (int)puVar3;
        if (uVar4 < uVar5) {
          uVar5 = uVar4;
        }
        FUN_1000c440(param_1,puVar3,uVar5);
        *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar5;
        uVar4 = uVar4 - uVar5;
      }
    }
    iVar1 = param_2 - uVar4;
  }
  return iVar1;
}



// ============================================================
// FUN_10019a95 @ 0x10019a95 144B
// ============================================================

void __thiscall FUN_10019a95(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    uVar2 = *(int *)((int)this + 0x28) - (int)*(undefined4 **)((int)this + 0x24);
    if (param_2 < uVar2) {
      uVar2 = param_2;
    }
    FUN_1000c440(*(undefined4 **)((int)this + 0x24),param_1,uVar2);
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + uVar2;
    uVar1 = param_2 - uVar2;
    if (uVar1 != 0) {
      FUN_10019b25((int)this);
      iVar3 = uVar1 - uVar1 % *(uint *)((int)this + 0x1c);
      (**(code **)(**(int **)((int)this + 0x20) + 0x38))((int)param_1 + uVar2,iVar3);
      if (*(int *)((int)this + 8) != 0) {
        (**(code **)(**(int **)((int)this + 0x20) + 0x50))
                  (1,*(undefined4 *)((int)this + 0x1c),(undefined4 *)((int)this + 0x2c),
                   (int)this + 0x28);
        *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x2c);
      }
      FUN_1000c440(*(undefined4 **)((int)this + 0x24),(undefined4 *)((int)param_1 + uVar2 + iVar3),
                   uVar1 - iVar3);
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + (uVar1 - iVar3);
    }
  }
  return;
}



// ============================================================
// FUN_10019b25 @ 0x10019b25 124B
// ============================================================

void __fastcall FUN_10019b25(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    iVar2 = *(int *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 8) == 0) {
      if (iVar1 != iVar2) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0x38))(iVar2,iVar1 - iVar2);
      }
    }
    else {
      if (iVar1 != iVar2) {
        (**(code **)(**(int **)(param_1 + 0x20) + 0x50))(2,iVar1 - iVar2,0,0);
      }
      (**(code **)(**(int **)(param_1 + 0x20) + 0x50))
                (1,*(undefined4 *)(param_1 + 0x1c),(undefined4 *)(param_1 + 0x2c),param_1 + 0x28);
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x24)) {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x28))
                (*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x28),1);
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x28);
  }
  return;
}



// ============================================================
// FUN_10019ba1 @ 0x10019ba1 194B
// ============================================================

void __thiscall FUN_10019ba1(void *this,uint param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_8;
  
  puVar1 = *(undefined4 **)((int)this + 0x24);
  local_8 = *(int *)((int)this + 0x28) - (int)puVar1;
  uVar2 = param_1 + local_8;
  if (*(int *)((int)this + 8) == 0) {
    puVar3 = *(undefined4 **)((int)this + 0x2c);
    if (puVar3 < puVar1) {
      if (0 < (int)local_8) {
        FUN_1000c880(puVar3,puVar1,local_8);
        puVar3 = *(undefined4 **)((int)this + 0x2c);
        *(undefined4 **)((int)this + 0x24) = puVar3;
        *(int *)((int)this + 0x28) = (int)puVar3 + local_8;
      }
      iVar5 = *(int *)((int)this + 0x1c) - local_8;
      iVar6 = local_8 + (int)puVar3;
      do {
        iVar4 = (**(code **)(**(int **)((int)this + 0x20) + 0x34))(iVar6,iVar5);
        local_8 = local_8 + iVar4;
        iVar6 = iVar6 + iVar4;
        iVar5 = iVar5 - iVar4;
        if ((iVar4 == 0) || (iVar5 == 0)) break;
      } while (local_8 < param_1);
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x2c);
      *(uint *)((int)this + 0x28) = *(int *)((int)this + 0x2c) + local_8;
    }
  }
  else {
    if (local_8 != 0) {
      (**(code **)(**(int **)((int)this + 0x20) + 0x28))(-local_8,1);
    }
    (**(code **)(**(int **)((int)this + 0x20) + 0x50))
              (0,*(undefined4 *)((int)this + 0x1c),(undefined4 *)((int)this + 0x2c),
               (int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x2c);
  }
  if ((uint)(*(int *)((int)this + 0x28) - *(int *)((int)this + 0x24)) < uVar2) {
    FUN_10019d74();
  }
  return;
}



// ============================================================
// FUN_10019c63 @ 0x10019c63 46B
// ============================================================

void __thiscall FUN_10019c63(void *this,uint param_1)

{
  if (param_1 < 0xffff) {
    FUN_1000aee8(this,(short)param_1);
  }
  else {
    FUN_1000aee8(this,0xffff);
    FUN_1000af0f(this,param_1);
  }
  return;
}



// ============================================================
// FUN_10019c91 @ 0x10019c91 48B
// ============================================================

void * __fastcall FUN_10019c91(void *param_1)

{
  void *local_c;
  undefined4 uStack_8;
  
  local_c = param_1;
  uStack_8 = param_1;
  FUN_1000af35(param_1,(undefined2 *)((int)&uStack_8 + 2));
  if (uStack_8._2_2_ == 0xffff) {
    FUN_1000af68(param_1,&local_c);
  }
  else {
    local_c = (void *)(uint)uStack_8._2_2_;
  }
  return local_c;
}



// ============================================================
// FUN_10019d74 @ 0x10019d74 100B
// ============================================================

void FUN_10019d74(void)

{
  undefined4 uVar1;
  LPCSTR pCVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_1000c418();
  puVar3 = FUN_10014cb8(0x10);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_1001529f((int)puVar3);
    puVar3[3] = PTR_DAT_10024d00;
    uVar1 = *(undefined4 *)(unaff_EBP + 8);
    pCVar2 = *(LPCSTR *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    *puVar3 = &PTR_LAB_1001ef60;
    puVar3[2] = uVar1;
    FUN_100150b4(puVar3 + 3,pCVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 **)(unaff_EBP + -0x10) = puVar3;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x10,&DAT_10021ab8);
}



// ============================================================
// FUN_10019dd9 @ 0x10019dd9 74B
// ============================================================

bool FUN_10019dd9(HWND param_1,uint param_2)

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
// FUN_10019e23 @ 0x10019e23 117B
// ============================================================

HWND FUN_10019e23(HWND param_1,LONG param_2,LONG param_3)

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
// FUN_10019e98 @ 0x10019e98 88B
// ============================================================

void FUN_10019e98(HWND param_1,LPCSTR param_2)

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
// FUN_10019ef0 @ 0x10019ef0 25B
// ============================================================

void FUN_10019ef0(undefined4 *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}



// ============================================================
// FUN_10019f09 @ 0x10019f09 54B
// ============================================================

void FUN_10019f09(HGLOBAL param_1)

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
// FUN_10019f91 @ 0x10019f91 20B
// ============================================================

void __fastcall FUN_10019f91(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_1001f078;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// ============================================================
// FUN_10019fa5 @ 0x10019fa5 28B
// ============================================================

undefined * __thiscall FUN_10019fa5(void *this,byte param_1)

{
  FUN_1001a079();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_10019fc1 @ 0x10019fc1 114B
// ============================================================

undefined4 FUN_10019fc1(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_1000c418();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x1c) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    puVar2 = FUN_10014ca6(&LAB_10019f3f);
    pvVar3 = FUN_10014cb8(0x48);
    *(void **)(unaff_EBP + 8) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_100168ad();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 **)(pAVar1 + 0x1c) = puVar4;
    FUN_10014ca6(puVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x1c);
}



// ============================================================
// FUN_1001a033 @ 0x1001a033 21B
// ============================================================

void FUN_1001a033(void)

{
  FUN_10019fc1();
  FUN_10016912();
  return;
}



// ============================================================
// Detach @ 0x1001a048 49B
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
    iVar2 = FUN_10019fc1();
    if (iVar2 != 0) {
      FUN_10014bea((void *)(iVar2 + 4),*(uint *)(this + 4));
    }
  }
  (**(code **)(*(int *)this + 0x14))();
  *(undefined4 *)(this + 4) = 0;
  return pHVar1;
}



// ============================================================
// FUN_1001a079 @ 0x1001a079 54B
// ============================================================

void FUN_1001a079(void)

{
  HDC__ *hdc;
  CDC *this;
  int unaff_EBP;
  
  FUN_1000c418();
  *(CDC **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_1001f078;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(this + 4) != 0) {
    hdc = CDC::Detach(this);
    DeleteDC(hdc);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1001a0cd @ 0x1001a0cd 49B
// ============================================================

int __fastcall FUN_1001a0cd(int param_1)

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
// FUN_1001a0fe @ 0x1001a0fe 62B
// ============================================================

int __thiscall FUN_1001a0fe(void *this,int param_1)

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
// FUN_1001a13c @ 0x1001a13c 60B
// ============================================================

void __thiscall FUN_1001a13c(void *this,int param_1)

{
  HGDIOBJ h;
  
  h = GetStockObject(param_1);
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SelectObject(*(HDC *)((int)this + 4),h);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SelectObject(*(HDC *)((int)this + 8),h);
  }
  FUN_1001a4ac();
  return;
}



// ============================================================
// FUN_1001a178 @ 0x1001a178 70B
// ============================================================

void __thiscall FUN_1001a178(void *this,int param_1)

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
  FUN_1001a4ac();
  return;
}



// ============================================================
// FUN_1001a1be @ 0x1001a1be 47B
// ============================================================

COLORREF __thiscall FUN_1001a1be(void *this,COLORREF param_1)

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
// FUN_1001a1ed @ 0x1001a1ed 47B
// ============================================================

COLORREF __thiscall FUN_1001a1ed(void *this,COLORREF param_1)

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
// FUN_1001a21c @ 0x1001a21c 46B
// ============================================================

int __thiscall FUN_1001a21c(void *this,int param_1)

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
// FUN_1001a24a @ 0x1001a24a 76B
// ============================================================

void __thiscall FUN_1001a24a(void *this,int *param_1,int param_2,int param_3)

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
// FUN_1001a296 @ 0x1001a296 76B
// ============================================================

void __thiscall FUN_1001a296(void *this,int *param_1,int param_2,int param_3)

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
// FUN_1001a2e2 @ 0x1001a2e2 76B
// ============================================================

void __thiscall FUN_1001a2e2(void *this,int *param_1,int param_2,int param_3)

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
// FUN_1001a32e @ 0x1001a32e 88B
// ============================================================

void __thiscall
FUN_1001a32e(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

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
// FUN_1001a386 @ 0x1001a386 76B
// ============================================================

void __thiscall FUN_1001a386(void *this,int *param_1,int param_2,int param_3)

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
// FUN_1001a3d2 @ 0x1001a3d2 88B
// ============================================================

void __thiscall
FUN_1001a3d2(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

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
// FUN_1001a43a @ 0x1001a43a 114B
// ============================================================

undefined4 FUN_1001a43a(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_1000c418();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x20) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    puVar2 = FUN_10014ca6(&LAB_10019f3f);
    pvVar3 = FUN_10014cb8(0x48);
    *(void **)(unaff_EBP + 8) = pvVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (pvVar3 == (void *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = FUN_100168ad();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 **)(pAVar1 + 0x20) = puVar4;
    FUN_10014ca6(puVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(pAVar1 + 0x20);
}



// ============================================================
// FUN_1001a4ac @ 0x1001a4ac 21B
// ============================================================

void FUN_1001a4ac(void)

{
  FUN_1001a43a();
  FUN_10016912();
  return;
}



// ============================================================
// Detach @ 0x1001a4c1 42B
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
    iVar2 = FUN_1001a43a();
    if (iVar2 != 0) {
      FUN_10014bea((void *)(iVar2 + 4),*(uint *)(param_1 + 4));
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return iVar1;
}



// ============================================================
// FUN_1001a4eb @ 0x1001a4eb 22B
// ============================================================

BOOL __fastcall FUN_1001a4eb(int param_1)

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
// FUN_1001a501 @ 0x1001a501 95B
// ============================================================

void __thiscall FUN_1001a501(void *this,int param_1)

{
  HCURSOR pHVar1;
  
  FUN_1001bcae(2);
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + param_1;
  if (*(int *)((int)this + 0xa0) < 1) {
    *(undefined4 *)((int)this + 0xa0) = 0;
    SetCursor(*(HCURSOR *)((int)this + 0xa4));
  }
  else {
    pHVar1 = SetCursor(DAT_1002a1f4);
    if ((0 < param_1) && (*(int *)((int)this + 0xa0) == 1)) {
      *(HCURSOR *)((int)this + 0xa4) = pHVar1;
    }
  }
  FUN_1001bd1e(2);
  return;
}



// ============================================================
// FUN_1001a60a @ 0x1001a60a 46B
// ============================================================

void FUN_1001a60a(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_1000af9b();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xb0))();
    if ((iVar2 != 0) && ((int *)piVar1[0x1a] != (int *)0x0)) {
      (**(code **)(*(int *)piVar1[0x1a] + 100))(param_1);
    }
  }
  return;
}



// ============================================================
// FUN_1001a638 @ 0x1001a638 231B
// ============================================================

int __thiscall FUN_1001a638(void *this,LPCSTR param_1,UINT param_2,int param_3)

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
  FUN_1001a60a(0);
  local_10 = FUN_1001a7b0((HWND)0x0,&local_8);
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
  FUN_1001a60a(1);
  return iVar3;
}



// ============================================================
// FUN_1001a71f @ 0x1001a71f 56B
// ============================================================

void FUN_1001a71f(LPCSTR param_1,UINT param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_1001b31e();
  if (*(int **)(iVar1 + 4) == (int *)0x0) {
    FUN_1001a638((void *)0x0,param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)(iVar1 + 4) + 0x8c))(param_1,param_2,param_3);
  }
  return;
}



// ============================================================
// FUN_1001a757 @ 0x1001a757 89B
// ============================================================

undefined4 FUN_1001a757(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined **)(unaff_EBP + -0x10) = PTR_DAT_10024d00;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10016a36(*(UINT *)(unaff_EBP + 8));
  iVar1 = *(int *)(unaff_EBP + 0x10);
  if (iVar1 == -1) {
    iVar1 = *(int *)(unaff_EBP + 8);
  }
  uVar2 = FUN_1001a71f(*(LPCSTR *)(unaff_EBP + -0x10),*(UINT *)(unaff_EBP + 0xc),iVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_10014f77((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



// ============================================================
// FUN_1001a7b0 @ 0x1001a7b0 156B
// ============================================================

HWND FUN_1001a7b0(HWND param_1,undefined4 *param_2)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  HWND hWnd_00;
  BOOL BVar3;
  uint uVar4;
  HWND hWnd_01;
  
  hWnd_01 = param_1;
  if (param_1 != (HWND)0x0) goto LAB_1001a829;
  iVar1 = FUN_1001a84c();
  if ((iVar1 == 0) && (iVar1 = FUN_1000af9b(), iVar1 == 0)) {
    hWnd_01 = (HWND)0x0;
    pHVar2 = hWnd_01;
    hWnd_00 = hWnd_01;
  }
  else {
    for (hWnd_01 = *(HWND *)(iVar1 + 0x1c); pHVar2 = hWnd_01, hWnd_00 = hWnd_01,
        hWnd_01 != (HWND)0x0; hWnd_01 = GetParent(hWnd_01)) {
LAB_1001a829:
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
// FUN_1001a858 @ 0x1001a858 117B
// ============================================================

uint __thiscall FUN_1001a858(void *this,LPCSTR param_1,LPCSTR param_2,undefined4 param_3)

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
// FUN_1001a8cd @ 0x1001a8cd 58B
// ============================================================

void FUN_1001a8cd(int *param_1,UINT param_2,int param_3,int param_4)

{
  int iVar1;
  byte local_104 [256];
  
  iVar1 = FUN_10016aba(param_2,(LPSTR)local_104,0x100);
  if (iVar1 != 0) {
    FUN_1001a907(param_1,local_104,param_3,param_4);
  }
  return;
}



// ============================================================
// FUN_1001a907 @ 0x1001a907 255B
// ============================================================

void FUN_1001a907(int *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  LPCSTR pCVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = 0;
  bVar1 = *param_2;
  pbVar6 = param_2;
  while (bVar1 != 0) {
    if (*pbVar6 == 0x25) {
      bVar1 = pbVar6[1];
      if (((char)bVar1 < '0') || ('9' < (char)bVar1)) {
        if (((char)bVar1 < 'A') || ('Z' < (char)bVar1)) goto LAB_1001a960;
        if ((char)bVar1 < ':') goto LAB_1001a93e;
        iVar4 = (char)bVar1 + -0x38;
      }
      else {
LAB_1001a93e:
        iVar4 = (char)bVar1 + -0x31;
      }
      pbVar6 = pbVar6 + 2;
      if (param_4 <= iVar4) goto LAB_1001a96f;
      pCVar3 = *(LPCSTR *)(param_3 + iVar4 * 4);
      if (pCVar3 != (LPCSTR)0x0) {
        iVar4 = lstrlenA(pCVar3);
        iVar5 = iVar5 + iVar4;
      }
    }
    else {
LAB_1001a960:
      if ((*(byte *)((int)&DAT_1002b880 + *pbVar6 + 1) & 4) != 0) {
        iVar5 = iVar5 + 1;
        pbVar6 = pbVar6 + 1;
      }
      pbVar6 = pbVar6 + 1;
LAB_1001a96f:
      iVar5 = iVar5 + 1;
    }
    bVar1 = *pbVar6;
  }
  pbVar6 = (byte *)FUN_10015228(param_1,iVar5);
  do {
    while( true ) {
      if (*param_2 == 0) {
        FUN_10015277(param_1,(int)pbVar6 - *param_1);
        return;
      }
      bVar1 = *param_2;
      if (bVar1 == 0x25) break;
LAB_1001a9dd:
      if ((*(byte *)((int)&DAT_1002b880 + bVar1 + 1) & 4) != 0) {
        *pbVar6 = bVar1;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 1;
      }
      *pbVar6 = *param_2;
      pbVar6 = pbVar6 + 1;
      param_2 = param_2 + 1;
    }
    bVar2 = param_2[1];
    if (((char)bVar2 < '0') || ('9' < (char)bVar2)) {
      if (((char)bVar2 < 'A') || ('Z' < (char)bVar2)) goto LAB_1001a9dd;
      if ((char)bVar2 < ':') goto LAB_1001a9ad;
      iVar5 = (char)bVar2 + -0x38;
    }
    else {
LAB_1001a9ad:
      iVar5 = (char)bVar2 + -0x31;
    }
    param_2 = param_2 + 2;
    if (iVar5 < param_4) {
      pCVar3 = *(LPCSTR *)(param_3 + iVar5 * 4);
      if (pCVar3 != (LPCSTR)0x0) {
        lstrcpyA((LPSTR)pbVar6,pCVar3);
        iVar5 = lstrlenA((LPCSTR)pbVar6);
        pbVar6 = pbVar6 + iVar5;
      }
    }
    else {
      *pbVar6 = 0x3f;
      pbVar6 = pbVar6 + 1;
    }
  } while( true );
}



// ============================================================
// FUN_1001aa06 @ 0x1001aa06 23B
// ============================================================

void FUN_1001aa06(int *param_1,UINT param_2)

{
  FUN_1001a8cd(param_1,param_2,(int)&stack0x0000000c,1);
  return;
}



// ============================================================
// FUN_1001ab1c @ 0x1001ab1c 27B
// ============================================================

HLOCAL __thiscall FUN_1001ab1c(void *this,byte param_1)

{
  FUN_1001c3fb();
  if ((param_1 & 1) != 0) {
    FUN_1001b44f(this);
  }
  return this;
}



// ============================================================
// FUN_1001ab37 @ 0x1001ab37 234B
// ============================================================

CWinThread * FUN_1001ab37(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  CWinThread *this;
  int unaff_EBP;
  
  FUN_1000c418();
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  CWinThread::CWinThread(this);
  *(undefined ***)this = &PTR_LAB_1001ec68;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(this + 0x78) = 0;
  }
  else {
    puVar1 = FUN_1000cd6f(*(uint **)(unaff_EBP + 8));
    *(uint **)(this + 0x78) = puVar1;
  }
  iVar2 = FUN_1001b31e();
  iVar3 = FUN_1001b8a4((void *)(iVar2 + 0x1070),&LAB_1001ae44);
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
// FUN_1001ac21 @ 0x1001ac21 28B
// ============================================================

undefined * __thiscall FUN_1001ac21(void *this,byte param_1)

{
  FUN_1001ac81();
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// FUN_1001ac81 @ 0x1001ac81 310B
// ============================================================

void FUN_1001ac81(void)

{
  int *piVar1;
  int iVar2;
  CWinThread *this;
  int unaff_EBP;
  
  FUN_1000c418();
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_1001ec68;
  piVar1 = *(int **)(this + 0x80);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(1);
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 0x14))(1);
  }
  iVar2 = FUN_1001b31e();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    if (DAT_1002849c != (int *)0x0) {
      (**(code **)(*DAT_1002849c + 4))(1);
      DAT_1002849c = (int *)0x0;
    }
    if (DAT_10028498 != (int *)0x0) {
      (**(code **)(*DAT_10028498 + 4))(1);
      DAT_10028498 = (int *)0x0;
    }
  }
  if (*(HGLOBAL *)(this + 0x94) != (HGLOBAL)0x0) {
    FUN_10019f09(*(HGLOBAL *)(this + 0x94));
  }
  if (*(HGLOBAL *)(this + 0x98) != (HGLOBAL)0x0) {
    FUN_10019f09(*(HGLOBAL *)(this + 0x98));
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
  iVar2 = FUN_1001b31e();
  if (*(int *)(iVar2 + 0x10) == *(int *)(this + 0x78)) {
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  if (*(CWinThread **)(iVar2 + 4) == this) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  FUN_1000b70f(*(undefined **)(this + 0x78));
  FUN_1000b70f(*(undefined **)(this + 0x7c));
  FUN_1000b70f(*(undefined **)(this + 0x88));
  FUN_1000b70f(*(undefined **)(this + 0x8c));
  FUN_1000b70f(*(undefined **)(this + 0x90));
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0;
  CWinThread::~CWinThread(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1001adb7 @ 0x1001adb7 48B
// ============================================================

void __fastcall FUN_1001adb7(void *param_1)

{
  if (*(int **)((int)param_1 + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xa8) + 0x10))();
  }
  if (*(int *)((int)param_1 + 0xb4) != 0) {
    FUN_1001a858(param_1,"Settings","PreviewPages",*(int *)((int)param_1 + 0xb4));
  }
  return;
}



// ============================================================
// FUN_1001ade7 @ 0x1001ade7 54B
// ============================================================

undefined4 __fastcall FUN_1001ade7(void *param_1)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 0xac) == 0) || (*(int *)(*(int *)((int)param_1 + 0xac) + 0x10) != 5))
  {
    iVar1 = FUN_1001b31e();
    if (*(char *)(iVar1 + 0x14) == '\0') {
      FUN_1001adb7(param_1);
    }
  }
  if (*(code **)((int)param_1 + 0xbc) != (code *)0x0) {
    (**(code **)((int)param_1 + 0xbc))();
  }
  return *(undefined4 *)((int)param_1 + 0x38);
}



// ============================================================
// `scalar_deleting_destructor' @ 0x1001ae75 28B
// ============================================================

/* Library Function - Single Match
    public: virtual void * __thiscall CWinThread::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2003 Release */

void * __thiscall CWinThread::_scalar_deleting_destructor_(CWinThread *this,uint param_1)

{
  ~CWinThread(this);
  if ((param_1 & 1) != 0) {
    FUN_10014ce1(this);
  }
  return this;
}



// ============================================================
// CWinThread @ 0x1001ae91 61B
// ============================================================

/* Library Function - Single Match
    public: __thiscall CWinThread::CWinThread(void)
   
   Library: Visual Studio 2003 Release */

undefined4 * __thiscall CWinThread::CWinThread(CWinThread *this)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_100162f4((int)extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_1001ed30;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  FUN_1001aece((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



// ============================================================
// FUN_1001aece @ 0x1001aece 50B
// ============================================================

void __fastcall FUN_1001aece(int param_1)

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
// FUN_1001af30 @ 0x1001af30 27B
// ============================================================

HLOCAL __thiscall FUN_1001af30(void *this,byte param_1)

{
  FUN_1001c239();
  if ((param_1 & 1) != 0) {
    FUN_1001b44f(this);
  }
  return this;
}



// ============================================================
// FUN_1001af4b @ 0x1001af4b 27B
// ============================================================

HLOCAL __thiscall FUN_1001af4b(void *this,byte param_1)

{
  FUN_1001c27a();
  if ((param_1 & 1) != 0) {
    FUN_1001b44f(this);
  }
  return this;
}



// ============================================================
// FUN_1001af66 @ 0x1001af66 224B
// ============================================================

void FUN_1001af66(void)

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
  local_8 = &DAT_1001ede4;
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
  DAT_1002a208 = CreateBitmap(nWidth,local_10,1,1,local_94);
  if (DAT_1002a208 == (HBITMAP)0x0) {
    DAT_1002a208 = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7fe3);
  }
  return;
}



// ============================================================
// FUN_1001b046 @ 0x1001b046 23B
// ============================================================

void __fastcall FUN_1001b046(undefined4 *param_1)

{
  param_1[0x35] = 0xffffffff;
  param_1[0x41] = 0xffffffff;
  *param_1 = &PTR_FUN_1001eecc;
  return;
}



// ============================================================
// FUN_1001b05d @ 0x1001b05d 27B
// ============================================================

HLOCAL __thiscall FUN_1001b05d(void *this,byte param_1)

{
  FUN_1001b078();
  if ((param_1 & 1) != 0) {
    FUN_1001b44f(this);
  }
  return this;
}



// ============================================================
// FUN_1001b078 @ 0x1001b078 116B
// ============================================================

void FUN_1001b078(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1001eecc;
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
    FUN_1000b70f((undefined *)extraout_ECX[3]);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1001b11d @ 0x1001b11d 99B
// ============================================================

void __thiscall FUN_1001b11d(void *this,undefined1 param_1)

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
  *(undefined ***)this = &PTR_FUN_1001eed4;
  *(undefined4 *)((int)this + 0x28) = 0x1c;
  *(undefined4 *)((int)this + 0x20) = 0x14;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 0x1040) = 0x18;
  return;
}



// ============================================================
// FUN_1001b180 @ 0x1001b180 27B
// ============================================================

HLOCAL __thiscall FUN_1001b180(void *this,byte param_1)

{
  FUN_1001b19b();
  if ((param_1 & 1) != 0) {
    FUN_1001b44f(this);
  }
  return this;
}



// ============================================================
// FUN_1001b19b @ 0x1001b19b 117B
// ============================================================

void FUN_1001b19b(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1001eed4;
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
  FUN_1001b948(extraout_ECX + 0x41c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1001b210 @ 0x1001b210 31B
// ============================================================

void __fastcall FUN_1001b210(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_1001eedc;
  param_1[3] = 0x54;
  param_1[10] = FUN_10014c9e;
  return;
}



// ============================================================
// FUN_1001b22f @ 0x1001b22f 27B
// ============================================================

HLOCAL __thiscall FUN_1001b22f(void *this,byte param_1)

{
  FUN_1001b24a();
  if ((param_1 & 1) != 0) {
    FUN_1001b44f(this);
  }
  return this;
}



// ============================================================
// FUN_1001b24a @ 0x1001b24a 174B
// ============================================================

void FUN_1001b24a(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 *extraout_ECX;
  void *pvVar3;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1001eedc;
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
      puVar2 = (undefined *)FUN_100147cf(pvVar3);
      FUN_10014ce1(puVar2);
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
// FUN_1001b31e @ 0x1001b31e 38B
// ============================================================

void FUN_1001b31e(void)

{
  int iVar1;
  
  iVar1 = FUN_1001b8a4(&DAT_100284a4,&LAB_1001aaac);
  if (*(int *)(iVar1 + 4) == 0) {
    FUN_1001b966();
  }
  return;
}



// ============================================================
// AfxGetModuleThreadState @ 0x1001b344 23B
// ============================================================

/* Library Function - Single Match
    class AFX_MODULE_THREAD_STATE * __stdcall AfxGetModuleThreadState(void)
   
   Library: Visual Studio 2003 Release */

AFX_MODULE_THREAD_STATE * AfxGetModuleThreadState(void)

{
  int iVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  iVar1 = FUN_1001b31e();
  pAVar2 = (AFX_MODULE_THREAD_STATE *)FUN_1001b8a4((void *)(iVar1 + 0x1070),&LAB_1001ae44);
  return pAVar2;
}



// ============================================================
// Unlock @ 0x1001b35b 53B
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
// FUN_1001b3b8 @ 0x1001b3b8 27B
// ============================================================

HLOCAL __thiscall FUN_1001b3b8(void *this,byte param_1)

{
  thunk_FUN_1001b19b();
  if ((param_1 & 1) != 0) {
    FUN_1001b44f(this);
  }
  return this;
}



// ============================================================
// FUN_1001b3eb @ 0x1001b3eb 70B
// ============================================================

undefined4 __thiscall FUN_1001b3eb(void *this,int param_1)

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
// FUN_1001b431 @ 0x1001b431 30B
// ============================================================

HLOCAL FUN_1001b431(SIZE_T param_1)

{
  HLOCAL pvVar1;
  
  pvVar1 = LocalAlloc(0x40,param_1);
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_100145b0();
  }
  return pvVar1;
}



// ============================================================
// FUN_1001b44f @ 0x1001b44f 20B
// ============================================================

void FUN_1001b44f(HLOCAL param_1)

{
  if (param_1 != (HLOCAL)0x0) {
    LocalFree(param_1);
  }
  return;
}



// ============================================================
// FUN_1001b463 @ 0x1001b463 66B
// ============================================================

DWORD * __fastcall FUN_1001b463(DWORD *param_1)

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
    FUN_100145b0();
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return param_1;
}



// ============================================================
// FUN_1001b4a5 @ 0x1001b4a5 87B
// ============================================================

void __fastcall FUN_1001b4a5(DWORD *param_1)

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
    FUN_1001b7b2(param_1,puVar2,0);
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
// FUN_1001b4fc @ 0x1001b4fc 274B
// ============================================================

int __fastcall FUN_1001b4fc(int param_1)

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
      if (iVar6 < iVar5) goto LAB_1001b5e1;
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
      FUN_100145b0();
    }
    pvVar4 = GlobalLock(pvVar3);
    _memset((void *)((int)pvVar4 + *(int *)(param_1 + 4) * 8),0,
            (*(int *)(param_1 + 4) * 0x1fffffff + iVar5) * 8);
    *(LPVOID *)(param_1 + 0x10) = pvVar4;
    *(int *)(param_1 + 4) = iVar5;
  }
LAB_1001b5e1:
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
// FUN_1001b60e @ 0x1001b60e 93B
// ============================================================

void __thiscall FUN_1001b60e(void *this,int param_1)

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
// FUN_1001b66b @ 0x1001b66b 234B
// ============================================================

void __thiscall FUN_1001b66b(void *this,int param_1,int param_2)

{
  undefined4 *lpTlsValue;
  HLOCAL pvVar1;
  int *piVar2;
  
  lpTlsValue = TlsGetValue(*(DWORD *)this);
  if (lpTlsValue == (undefined4 *)0x0) {
    lpTlsValue = FUN_1001b431(0x10);
    if (lpTlsValue == (undefined4 *)0x0) {
      lpTlsValue = (undefined4 *)0x0;
    }
    else {
      *lpTlsValue = &PTR_FUN_1001eeec;
    }
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    piVar2 = lpTlsValue + 2;
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
    FUN_1001b3d8((void *)((int)this + 0x14),(int)lpTlsValue);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  }
  else {
    piVar2 = lpTlsValue + 2;
    if ((param_1 < *piVar2) || (param_2 == 0)) goto LAB_1001b742;
  }
  if ((HLOCAL)lpTlsValue[3] == (HLOCAL)0x0) {
    pvVar1 = LocalAlloc(0,*(int *)((int)this + 0xc) << 2);
  }
  else {
    pvVar1 = LocalReAlloc((HLOCAL)lpTlsValue[3],*(int *)((int)this + 0xc) << 2,2);
  }
  lpTlsValue[3] = pvVar1;
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_100145b0();
  }
  _memset((void *)(lpTlsValue[3] + *piVar2 * 4),0,
          (*piVar2 * 0x3fffffff + *(int *)((int)this + 0xc)) * 4);
  *piVar2 = *(int *)((int)this + 0xc);
  TlsSetValue(*(DWORD *)this,lpTlsValue);
LAB_1001b742:
  *(int *)(lpTlsValue[3] + param_1 * 4) = param_2;
  return;
}



// ============================================================
// FUN_1001b755 @ 0x1001b755 27B
// ============================================================

HLOCAL __thiscall FUN_1001b755(void *this,byte param_1)

{
  FUN_1001b770();
  if ((param_1 & 1) != 0) {
    FUN_1001b44f(this);
  }
  return this;
}



// ============================================================
// FUN_1001b771 @ 0x1001b771 65B
// ============================================================

void __thiscall FUN_1001b771(void *this,undefined4 param_1)

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
// FUN_1001b7b2 @ 0x1001b7b2 153B
// ============================================================

void __thiscall FUN_1001b7b2(void *this,undefined4 *param_1,int param_2)

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
  FUN_1001b3eb((void *)((int)this + 0x14),(int)param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  LocalFree((HLOCAL)param_1[3]);
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  TlsSetValue(*(DWORD *)this,(LPVOID)0x0);
  return;
}



// ============================================================
// FUN_1001b84b @ 0x1001b84b 89B
// ============================================================

void __thiscall FUN_1001b84b(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  if (param_2 == 0) {
    puVar2 = TlsGetValue(*(DWORD *)this);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_1001b7b2(this,puVar2,param_1);
    }
  }
  else {
    puVar2 = *(undefined4 **)((int)this + 0x14);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[1];
      FUN_1001b7b2(this,puVar2,param_1);
      puVar2 = puVar1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}



// ============================================================
// FUN_1001b8a4 @ 0x1001b8a4 119B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x1001b8cb) */

int __thiscall FUN_1001b8a4(void *this,undefined *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  if (*(int *)this == 0) {
    if (DAT_100284ac == (DWORD *)0x0) {
      DAT_100284ac = FUN_1001b463((DWORD *)&DAT_100284b0);
    }
    iVar1 = FUN_1001b4fc((int)DAT_100284ac);
    *(int *)this = iVar1;
  }
  iVar1 = *(int *)this;
  pvVar2 = TlsGetValue(*DAT_100284ac);
  if ((pvVar2 == (LPVOID)0x0) || (*(int *)((int)pvVar2 + 8) <= iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
  }
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1)();
    FUN_1001b66b(DAT_100284ac,*(int *)this,iVar1);
  }
  return iVar1;
}



// ============================================================
// FUN_1001b91b @ 0x1001b91b 45B
// ============================================================

undefined4 __fastcall FUN_1001b91b(int *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *param_1;
  if ((iVar1 != 0) && (DAT_100284ac != (DWORD *)0x0)) {
    pvVar2 = TlsGetValue(*DAT_100284ac);
    if ((pvVar2 != (LPVOID)0x0) && (iVar1 < *(int *)((int)pvVar2 + 8))) {
      return *(undefined4 *)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
    }
  }
  return 0;
}



// ============================================================
// FUN_1001b948 @ 0x1001b948 30B
// ============================================================

void __fastcall FUN_1001b948(int *param_1)

{
  if ((*param_1 != 0) && (DAT_100284ac != (void *)0x0)) {
    FUN_1001b60e(DAT_100284ac,*param_1);
  }
  *param_1 = 0;
  return;
}



// ============================================================
// FUN_1001b966 @ 0x1001b966 75B
// ============================================================

int FUN_1001b966(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (*extraout_ECX == 0) {
    FUN_1001bcae(0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*extraout_ECX == 0) {
      iVar1 = (**(code **)(unaff_EBP + 8))();
      *extraout_ECX = iVar1;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_1001bd1e(0x10);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *extraout_ECX;
}



// ============================================================
// FUN_1001b9e6 @ 0x1001b9e6 22B
// ============================================================

void FUN_1001b9e6(undefined4 param_1)

{
  if (DAT_100284ac != (void *)0x0) {
    FUN_1001b771(DAT_100284ac,param_1);
  }
  return;
}



// ============================================================
// FUN_1001b9fc @ 0x1001b9fc 26B
// ============================================================

void FUN_1001b9fc(int param_1,int param_2)

{
  if (DAT_100284ac != (void *)0x0) {
    FUN_1001b84b(DAT_100284ac,param_1,param_2);
  }
  return;
}



// ============================================================
// FUN_1001ba45 @ 0x1001ba45 99B
// ============================================================

undefined4 FUN_1001ba45(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UINT UVar1;
  int iVar2;
  
  UVar1 = SetErrorMode(0);
  SetErrorMode(UVar1 | 0x8001);
  iVar2 = FUN_1001b31e();
  *(undefined4 *)(iVar2 + 8) = param_1;
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  iVar2 = FUN_1001b31e();
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x68) = param_1;
    *(undefined4 *)(iVar2 + 0x6c) = param_2;
    *(undefined4 *)(iVar2 + 0x70) = param_3;
    *(undefined4 *)(iVar2 + 0x74) = param_4;
    FUN_1001baa8(iVar2);
  }
  iVar2 = FUN_1001b31e();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    FUN_10015cc7();
  }
  return 1;
}



// ============================================================
// FUN_1001baa8 @ 0x1001baa8 285B
// ============================================================

void __fastcall FUN_1001baa8(int param_1)

{
  byte *pbVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint local_310 [64];
  uint local_210 [65];
  uint local_10c [65];
  byte *local_8;
  
  iVar2 = FUN_1001b31e();
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x68);
  GetModuleFileNameA(*(HMODULE *)(param_1 + 0x68),(LPSTR)local_210,0x104);
  local_8 = FUN_1000cbb5((byte *)local_210,0x2e);
  *local_8 = 0;
  FUN_1001bbc5((byte *)local_210,(LPSTR)local_10c,0x104);
  if (*(int *)(param_1 + 0x88) == 0) {
    puVar3 = FUN_1000cd6f(local_10c);
    *(uint **)(param_1 + 0x88) = puVar3;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar4 = FUN_10016aba(0xe000,(LPSTR)local_310,0x100);
    if (iVar4 == 0) {
      puVar3 = *(uint **)(param_1 + 0x88);
    }
    else {
      puVar3 = local_310;
    }
    puVar3 = FUN_1000cd6f(puVar3);
    *(uint **)(param_1 + 0x78) = puVar3;
  }
  pbVar1 = local_8;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x8c) == 0) {
    lstrcpyA((LPSTR)local_8,".HLP");
    puVar3 = FUN_1000cd6f(local_210);
    *(uint **)(param_1 + 0x8c) = puVar3;
    *pbVar1 = 0;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    lstrcatA((LPSTR)local_10c,".INI");
    puVar3 = FUN_1000cd6f(local_10c);
    *(uint **)(param_1 + 0x90) = puVar3;
  }
  return;
}



// ============================================================
// FUN_1001bbc5 @ 0x1001bbc5 86B
// ============================================================

int FUN_1001bbc5(byte *param_1,LPSTR param_2,int param_3)

{
  byte bVar1;
  byte *lpString2;
  int iVar2;
  
  lpString2 = param_1;
  for (; *param_1 != 0; param_1 = FUN_1000c868(param_1)) {
    bVar1 = *param_1;
    if (((bVar1 == 0x5c) || (bVar1 == 0x2f)) || (bVar1 == 0x3a)) {
      lpString2 = FUN_1000c868(param_1);
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
// FUN_1001bc1b @ 0x1001bc1b 69B
// ============================================================

int FUN_1001bc1b(void)

{
  DWORD DVar1;
  
  if (DAT_100286dc == 0) {
    DAT_100286dc = 1;
    DVar1 = GetVersion();
    if (((byte)DVar1 < 4) && ((DVar1 & 0x80000000) != 0)) {
      DAT_100286d8 = 1;
    }
    else {
      DAT_100286d8 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_10028528);
    }
  }
  return DAT_100286dc;
}



// ============================================================
// FUN_1001bc60 @ 0x1001bc60 78B
// ============================================================

void FUN_1001bc60(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  
  if ((DAT_100286dc != 0) && (DAT_100286dc = DAT_100286dc + -1, DAT_100286d8 == 0)) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_10028528);
    piVar1 = &DAT_100284e4;
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_10028540;
    do {
      if (*piVar1 != 0) {
        DeleteCriticalSection(lpCriticalSection);
        *piVar1 = *piVar1 + -1;
      }
      lpCriticalSection = lpCriticalSection + 1;
      piVar1 = piVar1 + 1;
    } while ((int)lpCriticalSection < 0x100286d8);
  }
  return;
}



// ============================================================
// FUN_1001bcae @ 0x1001bcae 112B
// ============================================================

void FUN_1001bcae(int param_1)

{
  int *piVar1;
  
  if (DAT_100286dc == 0) {
    FUN_1001bc1b();
  }
  if (DAT_100286d8 == 0) {
    piVar1 = &DAT_100284e4 + param_1;
    if ((&DAT_100284e4)[param_1] == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10028528);
      if (*piVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_10028540 + param_1 * 0x18));
        *piVar1 = *piVar1 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10028528);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_10028540 + param_1 * 0x18));
  }
  return;
}



// ============================================================
// FUN_1001bd1e @ 0x1001bd1e 33B
// ============================================================

void FUN_1001bd1e(int param_1)

{
  if (DAT_100286d8 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10028540 + param_1 * 0x18));
  }
  return;
}



// ============================================================
// FUN_1001bd4b @ 0x1001bd4b 148B
// ============================================================

HKEY __fastcall FUN_1001bd4b(int param_1)

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
// GetSectionKey @ 0x1001bddf 70B
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
  hKey = FUN_1001bd4b((int)this);
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
// FUN_1001bef8 @ 0x1001bef8 32B
// ============================================================

undefined4 * __thiscall FUN_1001bef8(void *this,byte param_1)

{
  thunk_FUN_1001a079();
  if ((param_1 & 1) != 0) {
    FUN_1000b113(&DAT_10028840,this);
  }
  return this;
}



// ============================================================
// FUN_1001bf3f @ 0x1001bf3f 32B
// ============================================================

undefined4 * __thiscall FUN_1001bf3f(void *this,byte param_1)

{
  FUN_1001bf5f();
  if ((param_1 & 1) != 0) {
    FUN_1000b113(&DAT_10028818,this);
  }
  return this;
}



// ============================================================
// FUN_1001bf5f @ 0x1001bf5f 41B
// ============================================================

void FUN_1001bf5f(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001f0f0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_1001a4eb((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1001c086 @ 0x1001c086 32B
// ============================================================

CWnd * __thiscall FUN_1001c086(void *this,byte param_1)

{
  CWnd::~CWnd(this);
  if ((param_1 & 1) != 0) {
    FUN_1000b113(&DAT_1002a070,this);
  }
  return this;
}



// ============================================================
// FUN_1001c14c @ 0x1001c14c 48B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c14c(void)

{
  if (DAT_1002a214 != 0) {
    _DAT_1002a1b8 = GetSystemMetrics(2);
    _DAT_1002a1b8 = _DAT_1002a1b8 + 1;
    _DAT_1002a1bc = GetSystemMetrics(3);
    _DAT_1002a1bc = _DAT_1002a1bc + 1;
    _DAT_1002a220 = 1;
  }
  return;
}



// ============================================================
// FUN_1001c17c @ 0x1001c17c 34B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c17c(void)

{
  _DAT_1002a1b8 = GetSystemMetrics(2);
  _DAT_1002a1bc = GetSystemMetrics(3);
  _DAT_1002a220 = 0;
  return;
}



// ============================================================
// FUN_1001c19e @ 0x1001c19e 155B
// ============================================================

int __fastcall FUN_1001c19e(int param_1)

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
  FUN_10019849(param_1);
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_10019805(param_1);
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
// FUN_1001c239 @ 0x1001c239 65B
// ============================================================

void FUN_1001c239(void)

{
  code *pcVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1001edb0;
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
// FUN_1001c27a @ 0x1001c27a 54B
// ============================================================

void FUN_1001c27a(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1001edb8;
  iVar2 = DAT_1002a228;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar2 != 0) && (pcVar1 = *(code **)(iVar2 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(extraout_ECX);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1001c2fd @ 0x1001c2fd 35B
// ============================================================

bool FUN_1001c2fd(void)

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
// FUN_1001c36c @ 0x1001c36c 32B
// ============================================================

undefined4 * __thiscall FUN_1001c36c(void *this,byte param_1)

{
  FUN_1001c38c();
  if ((param_1 & 1) != 0) {
    FUN_1000b113(&DAT_1002a238,this);
  }
  return this;
}



// ============================================================
// FUN_1001c38c @ 0x1001c38c 41B
// ============================================================

void FUN_1001c38c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001f7ec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10019970((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1001c3fb @ 0x1001c3fb 45B
// ============================================================

void FUN_1001c3fb(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1001ec60;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10019ef0(extraout_ECX + 1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// AfxPostQuitMessage @ 0x1001c428 35B
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
// ~CWinThread @ 0x1001c44b 79B
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
  
  FUN_1000c418();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_1001ed30;
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
  FUN_1001630e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_1001c49a @ 0x1001c49a 181B
// ============================================================

void FUN_1001c49a(void)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *lpClassName;
  
  iVar2 = FUN_1001b31e();
  FUN_1001bcae(1);
  lpClassName = (byte *)(iVar2 + 0x34);
  while (*lpClassName != 0) {
    pbVar3 = FUN_1000c775(lpClassName,10);
    *pbVar3 = 0;
    iVar4 = FUN_1001b31e();
    UnregisterClassA((LPCSTR)lpClassName,*(HINSTANCE *)(iVar4 + 8));
    lpClassName = pbVar3 + 1;
  }
  *(byte *)(iVar2 + 0x34) = 0;
  FUN_1001bd1e(1);
  iVar2 = FUN_1001b31e();
  if ((*(int *)(iVar2 + 4) != 0) &&
     (pcVar1 = *(code **)(*(int *)(iVar2 + 4) + 0x54), pcVar1 != (code *)0x0)) {
    (*pcVar1)(1,0);
  }
  iVar2 = FUN_1001b0ec();
  if (*(int **)(iVar2 + 0xcc) != (int *)0x0) {
    iVar4 = (**(code **)(**(int **)(iVar2 + 0xcc) + 0xb8))();
    if (iVar4 != 0) {
      *(undefined4 *)(iVar2 + 0xcc) = 0;
    }
  }
  iVar4 = FUN_1001b31e();
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



// ============================================================
// Unwind@1001c576 @ 0x1001c576 22B
// ============================================================

void Unwind_1001c576(void)

{
  int unaff_EBP;
  
  FUN_1000b61b(unaff_EBP + -0x10c,0xc,0x10,&LAB_100019e0);
  return;
}



// ============================================================
// Unwind@1001c618 @ 0x1001c618 23B
// ============================================================

void Unwind_1001c618(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10014f77(*(int **)(unaff_EBP + 4));
    return;
  }
  return;
}



// ============================================================
// Unwind@1001c648 @ 0x1001c648 23B
// ============================================================

void Unwind_1001c648(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10014f77(*(int **)(unaff_EBP + 4));
    return;
  }
  return;
}



// ============================================================
// Unwind@1001cc80 @ 0x1001cc80 22B
// ============================================================

void Unwind_1001cc80(void)

{
  int unaff_EBP;
  
  FUN_1000b61b(unaff_EBP + -0x10c,0x10,0x10,&LAB_1000a8f0);
  return;
}



// ============================================================
// Unwind@1001ccbc @ 0x1001ccbc 23B
// ============================================================

void Unwind_1001ccbc(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_10014f77(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



// ============================================================
// Unwind@1001cce0 @ 0x1001cce0 23B
// ============================================================

void Unwind_1001cce0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10014f77(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



// ============================================================
// Unwind@1001cf28 @ 0x1001cf28 23B
// ============================================================

void Unwind_1001cf28(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_10014f77(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



// ============================================================
// Unwind@1001cf54 @ 0x1001cf54 23B
// ============================================================

void Unwind_1001cf54(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_10014f77(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



