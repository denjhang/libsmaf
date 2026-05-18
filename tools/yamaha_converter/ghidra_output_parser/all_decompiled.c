// ============================================================
// FUN_10001080 @ 0x10001080 273B
// ============================================================

undefined4 * __fastcall FUN_10001080(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000e7eb;
  pvStack_c = ExceptionList;
  puVar5 = param_1 + 2;
  ExceptionList = &pvStack_c;
  *(undefined1 *)puVar5 = local_11;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = 0xffffffff;
  *param_1 = &PTR_LAB_1000f108;
  param_1[1] = 0;
  local_4 = 0;
  pcVar6 = (char *)&DAT_1001417c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_10006577();
  }
  iVar2 = param_1[3];
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_10001290(puVar5,'\x01');
      ExceptionList = pvStack_c;
      return param_1;
    }
    if (((uint)param_1[5] < 0x20) && (uVar3 <= (uint)param_1[5])) goto LAB_10001158;
    FUN_10001290(puVar5,'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_10001290(puVar5,'\0');
    ExceptionList = pvStack_c;
    return param_1;
  }
  FUN_100012e0(uVar3);
LAB_10001158:
  puVar5 = &DAT_1001417c;
  puVar7 = (undefined4 *)param_1[3];
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  param_1[4] = uVar3;
  *(undefined1 *)(uVar3 + param_1[3]) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}



// ============================================================
// FUN_100011a0 @ 0x100011a0 68B
// ============================================================

void __fastcall FUN_100011a0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_1000f108;
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_1000675f((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// ============================================================
// FUN_100011f0 @ 0x100011f0 91B
// ============================================================

int FUN_100011f0(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if ((byte *)(*param_2 + param_1) != (byte *)0x0) {
    bVar1 = *(byte *)(*param_2 + param_1);
    iVar3 = 0;
    while( true ) {
      if ((bVar1 & 0x80) != 0x80) {
        bVar1 = *(byte *)(*param_2 + param_1);
        *param_2 = *param_2 + 1;
        return (uint)bVar1 + iVar3 * 0x80;
      }
      iVar2 = *param_2;
      iVar3 = iVar3 * 0x80 + (*(byte *)(iVar2 + param_1) & 0x7f);
      if (iVar2 + 1 + param_1 == 0) break;
      *param_2 = iVar2 + 1;
      bVar1 = *(byte *)(iVar2 + 1 + param_1);
    }
  }
  return -1;
}



// ============================================================
// FUN_10001250 @ 0x10001250 62B
// ============================================================

void __fastcall FUN_10001250(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_1000675f((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// ============================================================
// FUN_10001290 @ 0x10001290 72B
// ============================================================

void __thiscall FUN_10001290(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != '\0') && (iVar2 = *(int *)((int)this + 4), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_1000675f((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}



// ============================================================
// FUN_100012e0 @ 0x100012e0 89B
// ============================================================

void FUN_100012e0(uint param_1)

{
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000e800;
  pvStack_10 = ExceptionList;
  uVar1 = param_1 | 0x1f;
  if (0xfffffffd < (param_1 | 0x1f)) {
    uVar1 = param_1;
  }
  uVar1 = uVar1 + 2;
  local_8 = 0;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  ExceptionList = &pvStack_10;
  operator_new(uVar1);
  FUN_10001360();
  return;
}



// ============================================================
// Catch@10001339 @ 0x10001339 33B
// ============================================================

undefined * Catch_10001339(void)

{
  uint uVar1;
  void *pvVar2;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 8);
  uVar1 = *(int *)(unaff_EBP + 8) + 2;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  pvVar2 = operator_new(uVar1);
  *(void **)(unaff_EBP + 8) = pvVar2;
  return &DAT_1000135a;
}



// ============================================================
// FUN_10001360 @ 0x10001360 136B
// ============================================================

void FUN_10001360(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  uVar5 = *(uint *)(unaff_EBX + 8);
  if (uVar5 != 0) {
    if (unaff_ESI < uVar5) {
      uVar5 = unaff_ESI;
    }
    puVar6 = *(undefined4 **)(unaff_EBX + 4);
    puVar7 = (undefined4 *)(*(int *)(unaff_EBP + 8) + 1);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    unaff_ESI = *(uint *)(unaff_EBP + -0x14);
  }
  iVar2 = *(int *)(unaff_EBX + 4);
  uVar5 = *(uint *)(unaff_EBX + 8);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_1000675f((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  puVar3 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBX + 8) = 0;
  *(undefined1 **)(unaff_EBX + 4) = puVar3 + 1;
  *puVar3 = 0;
  *(uint *)(unaff_EBX + 0xc) = unaff_ESI;
  if (uVar5 <= unaff_ESI) {
    unaff_ESI = uVar5;
  }
  *(uint *)(unaff_EBX + 8) = unaff_ESI;
  *(undefined1 *)(*(int *)(unaff_EBX + 4) + unaff_ESI) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_100013f0 @ 0x100013f0 512B
// ============================================================

void * __thiscall FUN_100013f0(void *this,void *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (*(uint *)((int)param_1 + 8) < param_2) {
    FUN_100066c3();
  }
  uVar7 = DAT_1000f10c;
  uVar6 = *(uint *)((int)param_1 + 8) - param_2;
  if (param_3 < uVar6) {
    uVar6 = param_3;
  }
  if (this == param_1) {
    uVar6 = uVar6 + param_2;
    if (*(uint *)((int)this + 8) < uVar6) {
      FUN_100066c3();
    }
    FUN_10001740(this);
    uVar3 = *(int *)((int)this + 8) - uVar6;
    if (uVar3 < uVar7) {
      uVar7 = uVar3;
    }
    if (uVar7 != 0) {
      puVar5 = (undefined4 *)(*(int *)((int)this + 4) + uVar6);
      FUN_10007500(puVar5,(undefined4 *)((int)puVar5 + uVar7),uVar3 - uVar7);
      uVar7 = *(int *)((int)this + 8) - uVar7;
      uVar4 = FUN_10001610(this,uVar7,'\0');
      if ((char)uVar4 != '\0') {
        *(uint *)((int)this + 8) = uVar7;
        *(undefined1 *)(uVar7 + *(int *)((int)this + 4)) = 0;
      }
    }
    FUN_10001740(this);
    uVar7 = *(uint *)((int)this + 8);
    if (uVar7 < param_2) {
      param_2 = uVar7;
    }
    if (param_2 == 0) {
      return this;
    }
    FUN_10007500(*(undefined4 **)((int)this + 4),
                 (undefined4 *)((int)*(undefined4 **)((int)this + 4) + param_2),uVar7 - param_2);
    uVar7 = *(int *)((int)this + 8) - param_2;
    uVar4 = FUN_10001610(this,uVar7,'\0');
    if ((char)uVar4 == '\0') {
      return this;
    }
    FUN_100015f0(this,uVar7);
    return this;
  }
  if ((uVar6 != 0) && (uVar6 == *(uint *)((int)param_1 + 8))) {
    puVar5 = *(undefined4 **)((int)param_1 + 4);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = &DAT_1000f110;
    }
    if (*(byte *)((int)puVar5 + -1) < 0xfe) {
      iVar2 = *(int *)((int)this + 4);
      if (iVar2 != 0) {
        cVar1 = *(char *)(iVar2 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_1000675f((char *)(iVar2 + -1));
        }
        else {
          *(char *)(iVar2 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      puVar5 = *(undefined4 **)((int)param_1 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_1000f110;
      }
      *(undefined4 **)((int)this + 4) = puVar5;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_1 + 0xc);
      *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
      return this;
    }
  }
  uVar7 = FUN_10001730();
  if (uVar7 < uVar6) {
    FUN_10006577();
  }
  iVar2 = *(int *)((int)this + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar6 == 0) {
      FUN_10001290(this,'\x01');
      return this;
    }
    if ((*(uint *)((int)this + 0xc) < 0x20) && (uVar6 <= *(uint *)((int)this + 0xc)))
    goto LAB_100015bc;
    FUN_10001290(this,'\x01');
  }
  else if (uVar6 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_10001290(this,'\0');
    return this;
  }
  FUN_100012e0(uVar6);
LAB_100015bc:
  puVar5 = *(undefined4 **)((int)param_1 + 4);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = &DAT_1000f110;
  }
  puVar5 = (undefined4 *)(param_2 + (int)puVar5);
  puVar8 = *(undefined4 **)((int)this + 4);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(uint *)((int)this + 8) = uVar6;
  *(undefined1 *)(uVar6 + *(int *)((int)this + 4)) = 0;
  return this;
}



// ============================================================
// FUN_10001610 @ 0x10001610 282B
// ============================================================

int __thiscall FUN_10001610(void *this,uint param_1,char param_2)

{
  char cVar1;
  uint3 uVar5;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  if (0xfffffffd < param_1) {
    FUN_10006577();
  }
  puVar4 = *(undefined1 **)((int)this + 4);
  uVar5 = (uint3)((uint)puVar4 >> 8);
  if (((puVar4 == (undefined1 *)0x0) || (cVar1 = puVar4[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (param_1 == 0) {
      if (param_2 == '\0') {
        if (puVar4 != (undefined1 *)0x0) {
          *(undefined4 *)((int)this + 8) = 0;
          *puVar4 = 0;
        }
        return (uint)uVar5 << 8;
      }
      uVar2 = 0;
      if (puVar4 != (undefined1 *)0x0) {
        cVar1 = puVar4[-1];
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          puVar4[-1] = cVar1 + -1;
          *(undefined4 *)((int)this + 4) = 0;
          *(undefined4 *)((int)this + 8) = 0;
          *(undefined4 *)((int)this + 0xc) = 0;
          return (uint)uVar5 << 8;
        }
        uVar2 = FUN_1000675f(puVar4 + -1);
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      return uVar2 & 0xffffff00;
    }
    if (param_2 != '\0') {
      if ((0x1f < *(uint *)((int)this + 0xc)) || (*(uint *)((int)this + 0xc) < param_1)) {
        if (puVar4 != (undefined1 *)0x0) {
          cVar1 = puVar4[-1];
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            puVar4[-1] = cVar1 + -1;
            *(undefined4 *)((int)this + 4) = 0;
            *(undefined4 *)((int)this + 8) = 0;
            *(undefined4 *)((int)this + 0xc) = 0;
            uVar3 = FUN_100012e0(param_1);
            return CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
          FUN_1000675f(puVar4 + -1);
        }
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        uVar3 = FUN_100012e0(param_1);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_10001722;
    }
    if (param_1 <= *(uint *)((int)this + 0xc)) goto LAB_10001722;
  }
  else if (param_1 == 0) {
    puVar4[-1] = cVar1 + -1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)uVar5 << 8;
  }
  puVar4 = (undefined1 *)FUN_100012e0(param_1);
LAB_10001722:
  return CONCAT31((int3)((uint)puVar4 >> 8),1);
}



// ============================================================
// FUN_10001740 @ 0x10001740 201B
// ============================================================

void __fastcall FUN_10001740(void *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = *(char **)((int)param_1 + 4);
  if (pcVar5 == (char *)0x0) {
    return;
  }
  cVar1 = pcVar5[-1];
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == -1) {
    return;
  }
  pcVar5[-1] = cVar1 + -1;
  uVar3 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_10006577();
  }
  iVar2 = *(int *)((int)param_1 + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_10001290(param_1,'\x01');
      return;
    }
    if ((*(uint *)((int)param_1 + 0xc) < 0x20) && (uVar3 <= *(uint *)((int)param_1 + 0xc)))
    goto LAB_100017e7;
    FUN_10001290(param_1,'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_10001290(param_1,'\0');
    return;
  }
  FUN_100012e0(uVar3);
LAB_100017e7:
  pcVar6 = *(char **)((int)param_1 + 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  *(uint *)((int)param_1 + 8) = uVar3;
  *(undefined1 *)(uVar3 + *(int *)((int)param_1 + 4)) = 0;
  return;
}



// ============================================================
// FUN_100018d0 @ 0x100018d0 50B
// ============================================================

undefined4 * __fastcall FUN_100018d0(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_10001080(param_1);
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 0x27) = local_1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = &DAT_1000f114;
  return param_1;
}



// ============================================================
// FUN_10001950 @ 0x10001950 44B
// ============================================================

void __thiscall FUN_10001950(void *this,undefined4 param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(param_2);
  *(void **)((int)this + 0x18) = pvVar2;
  uVar1 = param_2 * 2 + 2000;
  *(uint *)((int)this + 0x34) = uVar1;
  pvVar2 = operator_new(uVar1);
  *(void **)((int)this + 0x30) = pvVar2;
  return;
}



// ============================================================
// FUN_10001980 @ 0x10001980 26B
// ============================================================

void __fastcall FUN_10001980(int param_1)

{
  FUN_1000675f(*(undefined **)(param_1 + 0x18));
  FUN_1000675f(*(undefined **)(param_1 + 0x30));
  return;
}



// ============================================================
// FUN_100019a0 @ 0x100019a0 41B
// ============================================================

void __thiscall FUN_100019a0(void *this,undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)((int)this + 0x18);
  for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *(uint *)((int)this + 0x1c) = param_2;
  return;
}



// ============================================================
// FUN_100019d0 @ 0x100019d0 24B
// ============================================================

void __thiscall FUN_100019d0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_3;
  return;
}



// ============================================================
// FUN_100019f0 @ 0x100019f0 92B
// ============================================================

int __thiscall FUN_100019f0(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)((int)this + 0x2c) = param_2;
  FUN_100022d0(this,param_1);
  FUN_100022f0((int)this);
  iVar1 = FUN_10002320(this,param_1);
  if (-1 < iVar1) {
    iVar1 = (*(code *)**(undefined4 **)this)
                      (*(undefined4 *)((int)this + 0x30),*(undefined4 *)((int)this + 0x34));
    if (iVar1 == -1) {
      return -0x11;
    }
    iVar1 = FUN_10002450((int)this);
    iVar1 = (-(uint)(iVar1 != -1) & 0x11) - 0x11;
  }
  return iVar1;
}



// ============================================================
// FUN_10001ac0 @ 0x10001ac0 457B
// ============================================================

undefined4 __thiscall FUN_10001ac0(void *this,int *param_1,uint param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int **ppiVar5;
  uint *puVar6;
  
  piVar3 = param_3;
  piVar2 = param_1;
  if (param_2 < 0xe) {
    *(int *)((int)this + 4) = *param_3;
    **(undefined4 **)((int)this + 0x2c) = 0xf1000000;
    return 0xffffffff;
  }
  param_2 = 0x6468544d;
  if (*param_1 != 0x6468544d) {
    *(int *)((int)this + 4) = *param_3;
    **(undefined4 **)((int)this + 0x2c) = 0xf1000000;
    return 0xffffffff;
  }
  iVar1 = *param_3;
  ppiVar5 = &param_1;
  *param_3 = iVar1 + 4;
  param_1 = (int *)0x6000000;
  do {
    if (*(char *)ppiVar5 != *(char *)((int)ppiVar5 + (int)piVar2 + (4 - (int)&param_1))) {
      if (ppiVar5 != (int **)&param_2) {
        *(int *)((int)this + 4) = iVar1 + 4;
        **(undefined4 **)((int)this + 0x2c) = 0xf1000000;
        return 0xffffffff;
      }
      break;
    }
    ppiVar5 = (int **)((int)ppiVar5 + 1);
  } while (ppiVar5 != (int **)&param_2);
  *param_3 = iVar1 + 8;
  param_3 = (int *)((uint)param_3 & 0xffff0000);
  ppiVar5 = &param_3;
  do {
    if (*(char *)ppiVar5 != *(char *)((int)ppiVar5 + (int)piVar2 + (8 - (int)&param_3))) {
      if (ppiVar5 != (int **)((int)&param_3 + 2)) {
        *(int *)((int)this + 4) = iVar1 + 8;
        **(undefined4 **)((int)this + 0x2c) = 0xf1000001;
        return 0xffffffff;
      }
      break;
    }
    ppiVar5 = (int **)((int)ppiVar5 + 1);
  } while (ppiVar5 != (int **)((int)&param_3 + 2));
  iVar4 = iVar1 + 10;
  *piVar3 = iVar4;
  param_2 = 0x64680100;
  puVar6 = &param_2;
  do {
    if ((char)*puVar6 != *(char *)((int)puVar6 + (int)piVar2 + (10 - (int)&param_2))) {
      if (puVar6 != (uint *)((int)&param_2 + 2)) {
        *(int *)((int)this + 4) = iVar4;
        **(undefined4 **)((int)this + 0x2c) = 0xf1000001;
        return 0xffffffff;
      }
      break;
    }
    puVar6 = (uint *)((int)puVar6 + 1);
  } while (puVar6 != (uint *)((int)&param_2 + 2));
  *param_4 = (uint)*(byte *)(iVar1 + 0xb + (int)piVar2) +
             (uint)*(byte *)(iVar4 + (int)piVar2) * 0x100;
  iVar1 = *piVar3;
  iVar4 = iVar1 + 2;
  *piVar3 = iVar4;
  if ((*(byte *)(piVar2 + 3) & 0x80) != 0x80) {
    *piVar3 = iVar1 + 4;
    return 0;
  }
  *(int *)((int)this + 4) = iVar4;
  **(undefined4 **)((int)this + 0x2c) = 0xf1000004;
  return 0xffffffff;
}



// ============================================================
// FUN_10001c90 @ 0x10001c90 284B
// ============================================================

uint __thiscall FUN_10001c90(void *this,int param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar6 = param_3;
  if (param_2 < 0x16) {
    *(uint *)((int)this + 4) = *param_3;
    **(undefined4 **)((int)this + 0x2c) = 0xf1000000;
    return 0xffffffff;
  }
  uVar5 = *param_3;
  if ((uVar5 < param_2) && (*(int *)(uVar5 + param_1) != 0x6b72544d)) {
    *(uint *)((int)this + 4) = uVar5;
    **(undefined4 **)((int)this + 0x2c) = 0xf1000000;
    return 0xffffffff;
  }
  uVar7 = uVar5 + 4;
  *param_3 = uVar7;
  bVar1 = *(byte *)(uVar7 + param_1);
  bVar2 = *(byte *)(uVar5 + 5 + param_1);
  bVar3 = *(byte *)(uVar5 + 6 + param_1);
  bVar4 = *(byte *)(uVar5 + 7 + param_1);
  *param_3 = uVar5 + 8;
  uVar7 = bVar4 + 4 + uVar7 + (((uint)bVar1 * 0x100 + (uint)bVar2) * 0x100 + (uint)bVar3) * 0x100;
  if (param_2 < uVar7) {
    *(uint *)((int)this + 4) = uVar5 + 8;
    **(undefined4 **)((int)this + 0x2c) = 0xf1000000;
    return 0xffffffff;
  }
  param_3 = (uint *)((uint)param_3 & 0xffffff00);
  param_2 = param_2 & 0xffffff00;
  puVar8 = param_3;
  if (*(int *)((int)this + 0x10) == 0) {
    while (*puVar6 < uVar7) {
      if ((char)param_3 == '\0') {
        FUN_100011f0(param_1,(int *)puVar6);
      }
      puVar8 = (uint *)FUN_10001db0(this,param_1,uVar7,(int *)puVar6,(char *)&param_3,
                                    (byte *)&param_2);
      if ((int)puVar8 < 0) {
        return (uint)puVar8;
      }
      if (*(int *)((int)this + 0x10) != 0) {
        return (uint)puVar8;
      }
    }
  }
  return (uint)puVar8;
}



// ============================================================
// FUN_10001db0 @ 0x10001db0 1054B
// ============================================================

undefined4 __thiscall
FUN_10001db0(void *this,int param_1,undefined4 param_2,int *param_3,char *param_4,byte *param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  
  if (*param_4 == '\0') {
    bVar6 = *(byte *)(*param_3 + param_1);
  }
  else {
    bVar6 = *param_5;
  }
  bVar2 = *(byte *)(*param_3 + param_1 + 1);
  bVar3 = *(byte *)(*param_3 + param_1 + 2);
  if (0x7f < (bVar6 & 0xf0)) {
    *param_5 = bVar6;
    *param_4 = '\0';
  }
  param_5 = (byte *)(CONCAT31(param_5._1_3_,bVar6) & 0xffffff0f);
  switch(bVar6 >> 4) {
  case 8:
  case 10:
  case 0xe:
    break;
  case 9:
    if (0x7f < bVar2) break;
    FUN_10002590(this,(uint)param_5);
    uVar7 = bVar6 & 0xf;
    cVar4 = *(char *)((int)this + uVar7 * 4 + 0x5e);
    pbVar1 = (byte *)((int)this + uVar7 * 4 + 0x5e);
    *pbVar1 = bVar2;
    cVar5 = *(char *)((int)this + uVar7 * 4 + 0x5b);
    if ((cVar5 == '{') || (cVar5 == '}')) {
      if ((bVar2 < 0x18) || (0x54 < bVar2)) {
        *param_3 = *param_3 + 3;
        if (cVar4 != -1) {
          return 0;
        }
        *pbVar1 = 0xff;
        return 0;
      }
      iVar8 = FUN_10002710(this,(uint)param_5);
LAB_10001ef2:
      if (iVar8 != 0) {
        return 0xffffffff;
      }
    }
    else {
      if (((cVar5 != 'z') && (cVar5 != '|')) && ((char)param_5 == '\t')) {
        if ((bVar2 < 0x18) || (0x54 < bVar2)) {
          *param_3 = *param_3 + 3;
          if (cVar4 != -1) {
            return 0;
          }
          *(undefined1 *)((int)this + 0x82) = 0xff;
          return 0;
        }
        iVar8 = FUN_10002710(this,9);
        goto LAB_10001ef2;
      }
      iVar8 = FUN_100028e0(this,(uint)param_5);
      if (iVar8 != 0) {
        return 0xffffffff;
      }
      if (*(char *)((int)this + uVar7 + 0x48) == -1) {
        cVar4 = *(char *)((int)this + uVar7 * 4 + 0x5b);
        if ((cVar4 == 'z') || (cVar4 == '|')) {
          *(byte *)((int)this + uVar7 + 0x48) = *pbVar1;
        }
        else {
          if (((cVar4 == '{') || (cVar4 == '}')) || ((char)param_5 == '\t')) goto LAB_10001f26;
          *(byte *)((int)this + uVar7 + 0x48) = *pbVar1;
        }
        iVar8 = FUN_100025e0(this,(uint)param_5);
        goto LAB_10001ef2;
      }
    }
LAB_10001f26:
    if (*(char *)((int)this + 0x58) == '\0') {
      *(undefined1 *)((int)this + 0x58) = 1;
      *param_3 = *param_3 + 3;
      return 0;
    }
    break;
  case 0xb:
    switch(bVar2) {
    case 0:
      *(byte *)((bVar6 & 0xf) + 0x38 + (int)this) = bVar3;
      *param_3 = *param_3 + 3;
      return 0;
    case 1:
      if (*(char *)(*(int *)((int)this + 0x24) + 0x11 + (bVar6 & 0xf)) == -1) {
        *(byte *)(*(int *)((int)this + 0x24) + 0x11 + (bVar6 & 0xf)) = bVar3;
        *param_3 = *param_3 + 3;
        return 0;
      }
      break;
    case 7:
      if (*(char *)((int)this + (bVar6 & 0xf) * 4 + 0x5e) == -1) {
        *(byte *)(*(int *)((int)this + 0x24) + 1 + (bVar6 & 0xf)) = bVar3;
      }
      break;
    case 0x20:
      *(byte *)((int)this + (bVar6 & 0xf) * 4 + 0x5c) = bVar3;
      *param_3 = *param_3 + 3;
      return 0;
    }
    break;
  case 0xc:
    uVar7 = bVar6 & 0xf;
    *(byte *)((int)this + uVar7 * 4 + 0x5d) = bVar2;
    *(undefined1 *)((int)this + uVar7 * 4 + 0x5b) = *(undefined1 *)(uVar7 + 0x38 + (int)this);
    *(undefined1 *)(uVar7 + 0x48 + (int)this) = 0xff;
  case 0xd:
    *param_3 = *param_3 + 2;
    return 0;
  case 0xf:
    if ((bVar6 & 0xf) == 0) {
      bVar6 = *(byte *)((int)this + 0x5a) & 0xf0;
      if (((((bVar6 == 0x30) || (bVar6 == 0x50)) && (bVar2 == 7)) &&
          (((iVar8 = *param_3 + param_1, *(char *)(*param_3 + 2 + param_1) == '\x7f' &&
            (*(char *)(iVar8 + 3) == '\x7f')) &&
           ((*(char *)(iVar8 + 4) == '\x04' &&
            ((*(char *)(iVar8 + 5) == '\x01' && (*(char *)(iVar8 + 8) == -9)))))))) &&
         (*(char *)((int)this + 0x58) == '\0')) {
        **(undefined1 **)((int)this + 0x24) = *(undefined1 *)(iVar8 + 7);
      }
    }
    else if ((bVar6 & 0xf) != 7) {
      if ((bVar6 & 0xf) != 0xf) {
        *(int *)((int)this + 4) = *param_3;
        **(undefined4 **)((int)this + 0x2c) = 0xf1000001;
        return 0xffffffff;
      }
      switch(bVar2) {
      case 1:
        iVar8 = FUN_10002920(param_1,*param_3);
        if (iVar8 < 0) {
          return 0xffffffff;
        }
        break;
      case 2:
        iVar8 = FUN_10003630(this,param_1,*param_3);
        if (iVar8 < 0) {
          return 0xffffffff;
        }
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        break;
      default:
        *param_3 = *param_3 + bVar3 + 3;
        return 0;
      case 0x20:
      case 0x58:
        *param_3 = *param_3 + bVar3 + 3;
        return 0;
      case 0x2f:
      case 0x59:
        *param_3 = *param_3 + bVar3 + 3;
        return 0;
      case 0x7f:
        iVar8 = FUN_100037a0(this,param_1,*param_3);
        if (iVar8 != 0) {
          return 0xffffffff;
        }
      }
      iVar8 = *param_3 + 2;
      goto LAB_10002131;
    }
    iVar8 = *param_3 + 1;
LAB_10002131:
    *param_3 = iVar8;
    iVar8 = FUN_100011f0(param_1,param_3);
    *param_3 = *param_3 + iVar8;
    return 0;
  default:
    *param_4 = '\x01';
    *param_3 = *param_3 + -1;
    return 0;
  }
  *param_3 = *param_3 + 3;
  return 0;
}



// ============================================================
// FUN_100022d0 @ 0x100022d0 21B
// ============================================================

void __thiscall FUN_100022d0(void *this,undefined4 param_1)

{
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x59) = 0;
  *(char *)((int)this + 0x5a) = (char)((uint)param_1 >> 8);
  return;
}



// ============================================================
// FUN_100022f0 @ 0x100022f0 48B
// ============================================================

void __fastcall FUN_100022f0(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(param_1 + 0x48);
  puVar1 = (undefined1 *)(param_1 + 0x5c);
  do {
    puVar1[-1] = 0xff;
    *puVar1 = 0xff;
    puVar1[1] = 0xff;
    puVar1[2] = 0xff;
    puVar2[-0x10] = 0xff;
    *puVar2 = 0xff;
    puVar1 = puVar1 + 4;
    puVar2 = puVar2 + 1;
  } while ((int)(puVar2 + (-0x48 - param_1)) < 0x10);
  return;
}



// ============================================================
// FUN_10002320 @ 0x10002320 295B
// ============================================================

int __thiscall FUN_10002320(void *this,undefined4 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((*(byte *)((int)this + 0x5a) & 0xf0) != 0x20) {
    uVar3 = *(uint *)((int)this + 0x1c);
    puVar6 = *(undefined4 **)((int)this + 0x18);
    puVar7 = *(undefined4 **)((int)this + 0x30);
    for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)this + 0x1c);
    return 0;
  }
  hModule = LoadLibraryA(s_Ssd_sscma2_dll_100110d4);
  *(HMODULE *)((int)this + 0xac) = hModule;
  if (hModule == (HMODULE)0x0) {
    return -0x12;
  }
  pFVar1 = GetProcAddress(hModule,s_Ssd_SmfParse_Filter_100110c0);
  *(FARPROC *)((int)this + 0xb0) = pFVar1;
  if (pFVar1 == (FARPROC)0x0) {
    FreeLibrary(*(HMODULE *)((int)this + 0xac));
    return -0x13;
  }
  do {
    iVar2 = (**(code **)((int)this + 0xb0))
                      (*(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),
                       *(undefined4 *)((int)this + 0x30),*(undefined4 *)((int)this + 0x34),param_1,
                       *(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x2c));
    if (iVar2 < 1) {
      if (iVar2 != -0x16) break;
      if (0x7ffffffe < *(int *)((int)this + 0x34)) {
        FreeLibrary(*(HMODULE *)((int)this + 0xac));
        return -0x16;
      }
      FUN_1000675f(*(undefined **)((int)this + 0x30));
      uVar3 = *(int *)((int)this + 0x34) * 2 + 2000;
      if (0x7fffffff < uVar3) {
        uVar3 = 0x7fffffff;
      }
      *(uint *)((int)this + 0x34) = uVar3;
      pvVar4 = operator_new(uVar3);
      *(void **)((int)this + 0x30) = pvVar4;
    }
    else {
      *(int *)((int)this + 0x34) = iVar2;
    }
  } while (iVar2 == -0x16);
  FreeLibrary(*(HMODULE *)((int)this + 0xac));
  return iVar2;
}



// ============================================================
// FUN_10002450 @ 0x10002450 313B
// ============================================================

undefined4 __fastcall FUN_10002450(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  int local_78;
  int local_74;
  undefined4 local_70 [28];
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    **(undefined4 **)(param_1 + 0x2c) = 0xf1000003;
    return 0xffffffff;
  }
  if ((*(byte *)(param_1 + 0x5a) & 0xf0) != 0x20) {
LAB_100024cb:
    FUN_10003830(param_1);
    FUN_10003850(param_1);
    uVar10 = (uint)**(byte **)(param_1 + 0x20);
    local_74 = 0;
    if (uVar10 != 0) {
      do {
        local_78 = uVar10 - 1;
        if (local_74 < local_78) {
          iVar6 = local_78 * 0x6e;
          local_78 = local_78 - local_74;
          do {
            iVar3 = *(int *)(param_1 + 0x20) + iVar6;
            iVar3 = FUN_100038a0(*(ushort *)(iVar3 + -0x68),*(ushort *)(iVar3 + 6));
            if (iVar3 != 0) {
              iVar3 = *(int *)(param_1 + 0x20) + iVar6;
              puVar9 = (undefined4 *)(iVar3 + -0x6c);
              puVar8 = puVar9;
              puVar11 = local_70;
              for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar11 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar11 = puVar11 + 1;
              }
              *(undefined2 *)puVar11 = *(undefined2 *)puVar8;
              puVar8 = (undefined4 *)(iVar3 + 2);
              for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar9 = *puVar8;
                puVar8 = puVar8 + 1;
                puVar9 = puVar9 + 1;
              }
              *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
              puVar9 = local_70;
              puVar8 = (undefined4 *)(iVar6 + 2 + *(int *)(param_1 + 0x20));
              for (iVar3 = 0x1b; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar8 = puVar8 + 1;
              }
              *(undefined2 *)puVar8 = *(undefined2 *)puVar9;
            }
            iVar6 = iVar6 + -0x6e;
            local_78 = local_78 + -1;
          } while (local_78 != 0);
        }
        local_74 = local_74 + 1;
        uVar10 = (uint)**(byte **)(param_1 + 0x20);
      } while (local_74 < (int)uVar10);
    }
    return 0;
  }
  bVar2 = false;
  bVar1 = **(byte **)(param_1 + 0x20);
  if (bVar1 != 0) {
    uVar10 = (uint)bVar1;
    pbVar7 = *(byte **)(param_1 + 0x20) + 8;
    do {
      iVar6 = 0;
      pbVar4 = pbVar7;
      do {
        if ((*pbVar4 != 0) && (*pbVar4 < 0x11)) {
          bVar2 = true;
          break;
        }
        iVar6 = iVar6 + 1;
        pbVar4 = pbVar4 + 1;
      } while (iVar6 < 0x10);
      pbVar7 = pbVar7 + 0x6e;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (bVar2) goto LAB_100024cb;
  }
  **(undefined4 **)(param_1 + 0x2c) = 0x21000029;
  return 0xffffffff;
}



// ============================================================
// FUN_10002590 @ 0x10002590 69B
// ============================================================

void __thiscall FUN_10002590(void *this,uint param_1)

{
  char *pcVar1;
  
  if ((*(byte *)((int)this + 0x5a) & 0xf0) == 0x20) {
    **(undefined1 **)((int)this + 0x24) = 0xff;
  }
  else if ((*(char *)((int)this + 0x58) == '\0') && (**(char **)((int)this + 0x24) == -1)) {
    **(char **)((int)this + 0x24) = 'd';
  }
  if ((*(char *)((int)this + (param_1 & 0xff) * 4 + 0x5e) == -1) &&
     (pcVar1 = (char *)(*(int *)((int)this + 0x24) + 1 + (param_1 & 0xff)), *pcVar1 == -1)) {
    *pcVar1 = 'd';
  }
  return;
}



// ============================================================
// FUN_100025e0 @ 0x100025e0 299B
// ============================================================

undefined4 __thiscall FUN_100025e0(void *this,uint param_1)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  
  bVar2 = **(byte **)((int)this + 0x20);
  FUN_10002860(this,param_1);
  bVar4 = *(byte *)((int)this + 0x5a) & 0xf0;
  if (bVar4 != 0x20) {
    iVar5 = 0;
    if (bVar2 != 0) {
      pcVar6 = (char *)(*(int *)((int)this + 0x20) + 4);
      do {
        if ((*(char *)((int)this + (param_1 & 0xff) * 4 + 0x5b) == pcVar6[-2]) &&
           (*(char *)((int)this + (param_1 & 0xff) * 4 + 0x5d) == *pcVar6)) {
          puVar1 = (ushort *)(*(int *)((int)this + 0x20) + 6 + iVar5 * 0x6e);
          *puVar1 = *puVar1 | (ushort)(1 << ((byte)param_1 & 0x1f));
          return 0;
        }
        iVar5 = iVar5 + 1;
        pcVar6 = pcVar6 + 0x6e;
      } while (iVar5 < (int)(uint)bVar2);
    }
    if (((bVar4 == 0x30) || (bVar4 == 0x50)) && (0x7f < bVar2)) {
      **(undefined4 **)((int)this + 0x2c) = 0xf1000005;
      return 0xffffffff;
    }
    iVar3 = (uint)bVar2 * 0x6e;
    *(undefined1 *)(iVar3 + 2 + *(int *)((int)this + 0x20)) =
         *(undefined1 *)((int)this + (param_1 & 0xff) * 4 + 0x5b);
    *(undefined1 *)(iVar3 + 3 + *(int *)((int)this + 0x20)) = 0;
    *(undefined1 *)(iVar3 + 4 + *(int *)((int)this + 0x20)) =
         *(undefined1 *)((int)this + (param_1 & 0xff) * 4 + 0x5d);
    *(undefined1 *)(iVar3 + 5 + *(int *)((int)this + 0x20)) = 0xff;
    puVar1 = (ushort *)(*(int *)((int)this + 0x20) + 6 + iVar5 * 0x6e);
    *puVar1 = *puVar1 | (ushort)(1 << ((byte)param_1 & 0x1f));
    **(char **)((int)this + 0x20) = **(char **)((int)this + 0x20) + '\x01';
  }
  return 0;
}



// ============================================================
// FUN_10002710 @ 0x10002710 326B
// ============================================================

undefined4 __thiscall FUN_10002710(void *this,uint param_1)

{
  ushort *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  uint uVar7;
  
  bVar2 = **(byte **)((int)this + 0x20);
  if ((*(byte *)((int)this + 0x5a) & 0xf0) != 0x20) {
    uVar7 = param_1 & 0xff;
    bVar5 = *(byte *)((int)this + uVar7 * 4 + 0x5e);
    if ((0x17 < bVar5) && (bVar5 < 0x55)) {
      FUN_100028a0(this,param_1);
      iVar4 = 0;
      if (bVar2 != 0) {
        pcVar6 = (char *)(*(int *)((int)this + 0x20) + 5);
        do {
          if ((*(char *)((int)this + uVar7 * 4 + 0x5b) == pcVar6[-3]) &&
             (*(char *)((int)this + uVar7 * 4 + 0x5e) == *pcVar6)) {
            puVar1 = (ushort *)(*(int *)((int)this + 0x20) + 6 + iVar4 * 0x6e);
            *puVar1 = *puVar1 | (ushort)(1 << ((byte)param_1 & 0x1f));
            return 0;
          }
          iVar4 = iVar4 + 1;
          pcVar6 = pcVar6 + 0x6e;
        } while (iVar4 < (int)(uint)bVar2);
      }
      bVar5 = *(byte *)((int)this + 0x5a) & 0xf0;
      if (((bVar5 == 0x30) || (bVar5 == 0x50)) && (0x7f < bVar2)) {
        **(undefined4 **)((int)this + 0x2c) = 0xf1000005;
        return 0xffffffff;
      }
      if ((bVar5 == 0x20) && (0x7f < bVar2)) {
        **(int **)((int)this + 0x2c) = (param_1 & 0xf) * 0x10000 + 0x21000009;
        return 0xffffffff;
      }
      iVar3 = (uint)bVar2 * 0x6e;
      *(undefined1 *)(iVar3 + 2 + *(int *)((int)this + 0x20)) =
           *(undefined1 *)((int)this + uVar7 * 4 + 0x5b);
      *(undefined1 *)(iVar3 + 3 + *(int *)((int)this + 0x20)) = 0xff;
      *(undefined1 *)(iVar3 + 4 + *(int *)((int)this + 0x20)) = 0;
      *(undefined1 *)(iVar3 + 5 + *(int *)((int)this + 0x20)) =
           *(undefined1 *)((int)this + uVar7 * 4 + 0x5e);
      puVar1 = (ushort *)(*(int *)((int)this + 0x20) + 6 + iVar4 * 0x6e);
      *puVar1 = *puVar1 | (ushort)(1 << ((byte)param_1 & 0x1f));
      **(char **)((int)this + 0x20) = **(char **)((int)this + 0x20) + '\x01';
    }
  }
  return 0;
}



// ============================================================
// FUN_10002860 @ 0x10002860 62B
// ============================================================

void __thiscall FUN_10002860(void *this,uint param_1)

{
  char *pcVar1;
  
  if ((*(byte *)((int)this + 0x5a) & 0xf0) == 0x20) {
    if (*(char *)((int)this + (param_1 & 0xff) * 4 + 0x5b) != 'z') {
      *(undefined1 *)((int)this + (param_1 & 0xff) * 4 + 0x5b) = 0x7a;
      return;
    }
  }
  else {
    pcVar1 = (char *)((int)this + (param_1 & 0xff) * 4 + 0x5b);
    if (*pcVar1 != '|') {
      *pcVar1 = '|';
    }
  }
  return;
}



// ============================================================
// FUN_100028a0 @ 0x100028a0 62B
// ============================================================

void __thiscall FUN_100028a0(void *this,uint param_1)

{
  char *pcVar1;
  
  if ((*(byte *)((int)this + 0x5a) & 0xf0) == 0x20) {
    if (*(char *)((int)this + (param_1 & 0xff) * 4 + 0x5b) != '{') {
      *(undefined1 *)((int)this + (param_1 & 0xff) * 4 + 0x5b) = 0x7b;
      return;
    }
  }
  else {
    pcVar1 = (char *)((int)this + (param_1 & 0xff) * 4 + 0x5b);
    if (*pcVar1 != '}') {
      *pcVar1 = '}';
    }
  }
  return;
}



// ============================================================
// FUN_100028e0 @ 0x100028e0 58B
// ============================================================

int __thiscall FUN_100028e0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 & 0xff;
  if (*(char *)((int)this + uVar1 * 4 + 0x5d) != -1) {
    return 0;
  }
  *(undefined1 *)((int)this + uVar1 * 4 + 0x5d) = 0;
  *(undefined1 *)(uVar1 + 0x48 + (int)this) = *(undefined1 *)((int)this + uVar1 * 4 + 0x5e);
  iVar2 = FUN_100025e0(this,param_1);
  return (-1 < iVar2) - 1;
}



// ============================================================
// FUN_10002920 @ 0x10002920 137B
// ============================================================

undefined4 FUN_10002920(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2;
  param_2 = param_2 + 2;
  uVar1 = FUN_100011f0(param_1,&param_2);
  if ((int)uVar1 < 0) {
    return 0xffffffff;
  }
  if ((int)uVar1 < 0x80) {
    iVar2 = iVar2 + 3;
  }
  else if ((int)uVar1 < 0x4000) {
    iVar2 = iVar2 + 4;
  }
  else if ((int)uVar1 < 0x200000) {
    iVar2 = iVar2 + 5;
  }
  else {
    iVar2 = iVar2 + 6;
  }
  if ((((*(char *)(iVar2 + param_1) == 'X') && (*(char *)(iVar2 + 1 + param_1) == 'F')) &&
      (*(char *)(iVar2 + 2 + param_1) == 'l')) && (*(char *)(iVar2 + 3 + param_1) == 'n')) {
    FUN_100029b0(iVar2 + 5 + param_1,uVar1);
  }
  return 0;
}



// ============================================================
// FUN_100029b0 @ 0x100029b0 694B
// ============================================================

void FUN_100029b0(int param_1,uint param_2)

{
  void *this;
  char cVar1;
  undefined2 uVar2;
  void *pvVar3;
  ushort *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  undefined4 uStack_48;
  void *local_44;
  ushort *local_40;
  undefined1 local_3c [4];
  undefined2 *puStack_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  uint local_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  uVar12 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e828;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar4 = operator_new(param_2 * 4 + 0x14);
  uVar10 = uVar12 * 2 + 10;
  puVar11 = puVar4;
  for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    puVar11[0] = 0;
    puVar11[1] = 0;
    puVar11 = puVar11 + 2;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar11 = 0;
    puVar11 = (ushort *)((int)puVar11 + 1);
  }
  local_40 = puVar4;
  FUN_10002cc0(param_1,uVar12,puVar4);
  local_2c[0] = (undefined1)param_2;
  FUN_10003fd0(local_2c,'\0');
  local_4 = 0;
  local_3c[0] = (undefined1)param_2;
  FUN_10003fd0(local_3c,'\0');
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar10 = FUN_10007879((short *)puVar4);
  FUN_10004400(local_3c,puVar4,uVar10);
  param_1 = 0;
  while (local_34 != 0) {
    uVar10 = FUN_10007879((short *)&DAT_100110e4);
    uVar10 = FUN_10003cd0(local_3c,(ushort *)&DAT_100110e4,0,uVar10);
    puVar4 = local_40;
    if ((int)uVar10 < 0) break;
    if (0 < (int)uVar10) {
      puVar5 = FUN_10003a40(local_3c,local_1c,0,uVar10);
      local_4._0_1_ = 2;
      FUN_100041f0(local_2c,puVar5,0,DAT_1000f118);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_10003fd0(local_1c,'\x01');
      pvVar3 = local_44;
      this = (void *)((int)local_44 + 0x9c);
      uVar6 = FUN_100045d0(*(undefined1 **)((int)local_44 + 0xa4),
                           *(undefined1 **)((int)local_44 + 0xa4),
                           *(undefined1 **)((int)local_44 + 0xa0));
      FUN_10003be0();
      *(undefined4 *)((int)pvVar3 + 0xa4) = uVar6;
      uVar12 = 0;
      if (local_24 != 0) {
        if (local_24 == 0) {
          FUN_100066c3();
        }
        do {
          if (local_28 != 0) {
            if ((*(char *)(local_28 + -1) != '\0') && (*(char *)(local_28 + -1) != -1)) {
              FUN_10003dc0(local_2c,local_24,'\0');
            }
            if (local_28 != 0) {
              *(undefined1 *)(local_28 + -1) = 0xff;
            }
          }
          uVar2 = *(undefined2 *)(local_28 + uVar12 * 2);
          param_2 = CONCAT31(param_2._1_3_,(char)uVar2);
          bVar8 = (byte)((ushort)uVar2 >> 8);
          uStack_48 = CONCAT31(uStack_48._1_3_,bVar8);
          iVar7 = FUN_10007835(bVar8,0);
          if (iVar7 == 1) {
            FUN_10004020(this,*(undefined1 **)((int)pvVar3 + 0xa4),1,(undefined1 *)&uStack_48);
          }
          FUN_10004020(this,*(undefined1 **)((int)pvVar3 + 0xa4),1,(undefined1 *)&param_2);
          uVar12 = uVar12 + 1;
        } while (uVar12 < local_24);
      }
      FUN_10002d30(local_44,param_1);
    }
    FUN_10003ef0(local_3c);
    uVar12 = uVar10 + 1;
    if (local_34 < uVar10 + 1) {
      uVar12 = local_34;
    }
    if (uVar12 != 0) {
      FUN_10002c70(puStack_38,puStack_38 + uVar12,local_34 - uVar12);
      uVar12 = local_34 - uVar12;
      uVar6 = FUN_10003dc0(local_3c,uVar12,'\0');
      if ((char)uVar6 != '\0') {
        puStack_38[uVar12] = 0;
        local_34 = uVar12;
      }
    }
    param_1 = param_1 + 1;
    puVar4 = local_40;
  }
  FUN_1000675f((undefined *)puVar4);
  local_4 = local_4 & 0xffffff00;
  FUN_10003fd0(local_3c,'\x01');
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_1000675f((undefined *)(local_28 + -2));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return;
}



// ============================================================
// FUN_10002c70 @ 0x10002c70 77B
// ============================================================

void __cdecl FUN_10002c70(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  if ((param_2 < param_1) && (puVar3 = param_2 + param_3, param_1 < puVar3)) {
    puVar4 = param_1 + param_3;
    if (param_3 != 0) {
      do {
        puVar1 = puVar3 + -1;
        puVar3 = puVar3 + -1;
        puVar4 = puVar4 + -1;
        param_3 = param_3 + -1;
        *puVar4 = *puVar1;
      } while (param_3 != 0);
      return;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar2;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// ============================================================
// FUN_10002cc0 @ 0x10002cc0 98B
// ============================================================

void FUN_10002cc0(int param_1,uint param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    *param_3 = 0;
    return;
  }
  do {
    iVar1 = FUN_10007896((uint)CONCAT11(*(undefined1 *)(uVar2 + param_1),
                                        *(undefined1 *)(param_1 + 1 + uVar2)));
    if (iVar1 != 0) {
      *param_3 = (ushort)*(byte *)(uVar2 + param_1);
      param_3 = param_3 + 1;
      uVar2 = uVar2 + 1;
    }
    *param_3 = (ushort)*(byte *)(uVar2 + param_1);
    param_3 = param_3 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < param_2);
  *param_3 = 0;
  return;
}



// ============================================================
// FUN_10002d30 @ 0x10002d30 748B
// ============================================================

void __thiscall FUN_10002d30(void *this,int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  undefined1 local_48 [4];
  byte *pbStack_44;
  uint local_40;
  undefined4 auStack_38 [4];
  undefined1 auStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e850;
  local_c = ExceptionList;
  uVar7 = 0;
  if (param_1 == 0) {
    local_48[0] = 0;
    ExceptionList = &local_c;
    FUN_10001290(local_48,'\0');
    local_4 = 0;
    for (; (iVar4 = *(int *)((int)this + 0xa0), iVar4 != 0 &&
           (uVar7 < (uint)(*(int *)((int)this + 0xa4) - iVar4))); uVar7 = uVar7 + 1) {
      if ((iVar4 == 0) || ((uint)(*(int *)((int)this + 0xa4) - iVar4) <= uVar7)) {
        FUN_10003940(auStack_38,s_invalid_vector<T>_subscript_1001114c,(undefined1 *)&param_1);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_10003200(auStack_28,auStack_38);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(auStack_28,&DAT_10010150);
      }
      bVar2 = *(byte *)(iVar4 + uVar7);
      if (DAT_1000f10c - local_40 < 2) {
        FUN_10006577();
      }
      uVar5 = local_40 + 1;
      uVar3 = FUN_10001610(local_48,uVar5,'\0');
      if ((char)uVar3 != '\0') {
        pbStack_44[local_40] = bVar2;
        pbStack_44[uVar5] = 0;
        local_40 = uVar5;
      }
    }
    uVar7 = 0xffffffff;
    param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(*(int *)((int)this + 0x28) + 1));
    pcVar8 = &DAT_10011148;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar7 = FUN_100045f0(local_48,0,local_40,&DAT_10011148,~uVar7 - 1);
    if (uVar7 == 0) {
      *(undefined1 *)(*(int *)((int)this + 0x28) + 1) = 1;
    }
    else {
      uVar7 = 0xffffffff;
      pcVar8 = &DAT_10011144;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar7 - 1;
      uVar7 = uVar5;
      if (local_40 < uVar5) {
        uVar7 = local_40;
      }
      bVar10 = false;
      iVar4 = 0;
      bVar11 = true;
      pbVar6 = pbStack_44;
      pbVar9 = &DAT_10011144;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        bVar10 = *pbVar6 < *pbVar9;
        bVar11 = *pbVar6 == *pbVar9;
        pbVar6 = pbVar6 + 1;
        pbVar9 = pbVar9 + 1;
      } while (bVar11);
      if (!bVar11) {
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      }
      if (((iVar4 == 0) && (uVar5 <= local_40)) && (local_40 == uVar5)) {
        *(undefined1 *)(*(int *)((int)this + 0x28) + 1) = 0;
      }
      else {
        uVar7 = 0xffffffff;
        pcVar8 = &DAT_10011140;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar7 - 1;
        uVar7 = local_40;
        if (uVar5 <= local_40) {
          uVar7 = uVar5;
        }
        bVar10 = false;
        iVar4 = 0;
        bVar11 = true;
        pbVar6 = pbStack_44;
        pbVar9 = &DAT_10011140;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          bVar10 = *pbVar6 < *pbVar9;
          bVar11 = *pbVar6 == *pbVar9;
          pbVar6 = pbVar6 + 1;
          pbVar9 = pbVar9 + 1;
        } while (bVar11);
        if (!bVar11) {
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        }
        if (((iVar4 == 0) && (uVar5 <= local_40)) && (local_40 == uVar5)) {
          *(undefined1 *)(*(int *)((int)this + 0x28) + 1) = 2;
        }
      }
    }
    if ((char)param_1 != *(char *)(*(int *)((int)this + 0x28) + 1)) {
      FUN_100038f0(*(int *)((int)this + 0x2c),-0xd000000);
    }
    if (pbStack_44 != (byte *)0x0) {
      bVar2 = pbStack_44[-1];
      if ((bVar2 == 0) || (bVar2 == 0xff)) {
        FUN_1000675f(pbStack_44 + -1);
      }
      else {
        pbStack_44[-1] = bVar2 - 1;
      }
    }
  }
  else if (param_1 == 1) {
    ExceptionList = &local_c;
    bVar2 = FUN_10003510(this,*(int *)((int)this + 0x28) + 0x306,
                         *(byte *)(*(int *)((int)this + 0x28) + 0xd13));
    *(byte *)(*(int *)((int)this + 0x28) + 0xd13) = bVar2;
  }
  else if (param_1 == 2) {
    ExceptionList = &local_c;
    bVar2 = FUN_10003510(this,*(int *)((int)this + 0x28) + 0x609,
                         *(byte *)(*(int *)((int)this + 0x28) + 0xd16));
    *(byte *)(*(int *)((int)this + 0x28) + 0xd16) = bVar2;
  }
  else if (param_1 == 3) {
    ExceptionList = &local_c;
    bVar2 = FUN_10003510(this,*(int *)((int)this + 0x28) + 0x508,
                         *(byte *)(*(int *)((int)this + 0x28) + 0xd15));
    *(byte *)(*(int *)((int)this + 0x28) + 0xd15) = bVar2;
  }
  else if (param_1 == 4) {
    ExceptionList = &local_c;
    bVar2 = FUN_10003510(this,*(int *)((int)this + 0x28) + 0x70a,
                         *(byte *)(*(int *)((int)this + 0x28) + 0xd17));
    *(byte *)(*(int *)((int)this + 0x28) + 0xd17) = bVar2;
  }
  else if (param_1 == 5) {
    ExceptionList = &local_c;
    bVar2 = FUN_10003510(this,*(int *)((int)this + 0x28) + 0x407,
                         *(byte *)(*(int *)((int)this + 0x28) + 0xd14));
    *(byte *)(*(int *)((int)this + 0x28) + 0xd14) = bVar2;
  }
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_10003020 @ 0x10003020 349B
// ============================================================

undefined4 * __thiscall FUN_10003020(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e868;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10007917(param_1,param_2);
  puVar5 = param_1 + 3;
  local_4 = 0;
  *(undefined1 *)puVar5 = *(undefined1 *)(param_2 + 0xc);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar7 = DAT_1000f10c;
  uVar2 = *(uint *)(param_2 + 0x14);
  uVar6 = uVar2;
  if (DAT_1000f10c < uVar2) {
    uVar6 = DAT_1000f10c;
  }
  if (puVar5 == (undefined4 *)(param_2 + 0xc)) {
    if (uVar6 != 0) {
      FUN_100066c3();
    }
    FUN_10001740(puVar5);
    uVar2 = param_1[5] - uVar6;
    if (uVar2 < uVar7) {
      uVar7 = uVar2;
    }
    if (uVar7 != 0) {
      FUN_10007500((undefined4 *)(uVar6 + param_1[4]),
                   (undefined4 *)((int)(uVar6 + param_1[4]) + uVar7),uVar2 - uVar7);
      iVar1 = param_1[5];
      uVar3 = FUN_10001610(puVar5,iVar1 - uVar7,'\0');
      if ((char)uVar3 != '\0') {
        FUN_100015f0(puVar5,iVar1 - uVar7);
      }
    }
    FUN_10001740(puVar5);
  }
  else {
    if ((uVar6 != 0) && (uVar6 == uVar2)) {
      puVar4 = *(undefined4 **)(param_2 + 0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = &DAT_1000f110;
      }
      if (*(byte *)((int)puVar4 + -1) < 0xfe) {
        FUN_10001290(puVar5,'\x01');
        puVar5 = *(undefined4 **)(param_2 + 0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = &DAT_1000f110;
        }
        param_1[4] = puVar5;
        param_1[5] = *(undefined4 *)(param_2 + 0x14);
        param_1[6] = *(undefined4 *)(param_2 + 0x18);
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        goto LAB_100030d2;
      }
    }
    uVar3 = FUN_10001610(puVar5,uVar6,'\x01');
    if ((char)uVar3 != '\0') {
      puVar5 = *(undefined4 **)(param_2 + 0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_1000f110;
      }
      puVar4 = (undefined4 *)param_1[4];
      for (uVar2 = uVar6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = uVar6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      param_1[5] = uVar6;
      *(undefined1 *)(param_1[4] + uVar6) = 0;
      *param_1 = &PTR_FUN_1000f274;
      ExceptionList = local_c;
      return local_c;
    }
  }
LAB_100030d2:
  *param_1 = &PTR_FUN_1000f274;
  ExceptionList = local_c;
  return local_c;
}



// ============================================================
// FUN_100031b0 @ 0x100031b0 75B
// ============================================================

void __fastcall FUN_100031b0(exception *param_1)

{
  char cVar1;
  int iVar2;
  
  *(undefined ***)param_1 = &PTR_FUN_1000f274;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_1000675f((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  exception::~exception(param_1);
  return;
}



// ============================================================
// FUN_10003200 @ 0x10003200 356B
// ============================================================

undefined4 * __thiscall FUN_10003200(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e888;
  local_c = ExceptionList;
  local_14 = &DAT_1001417c;
  ExceptionList = &local_c;
  local_10 = this;
  FUN_100078da(this,&local_14);
  puVar4 = (undefined4 *)((int)this + 0xc);
  uVar1 = *(undefined1 *)param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)puVar4 = uVar1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar7 = DAT_1000f10c;
  uVar2 = param_1[2];
  local_4 = 0;
  uVar5 = uVar2;
  if (DAT_1000f10c < uVar2) {
    uVar5 = DAT_1000f10c;
  }
  if (puVar4 == param_1) {
    if (uVar5 != 0) {
      FUN_100066c3();
    }
    FUN_10001740(puVar4);
    uVar2 = *(int *)((int)this + 0x14) - uVar5;
    if (uVar2 < uVar7) {
      uVar7 = uVar2;
    }
    if (uVar7 != 0) {
      puVar6 = (undefined4 *)(uVar5 + *(int *)((int)this + 0x10));
      FUN_10007500(puVar6,(undefined4 *)(uVar7 + (int)puVar6),uVar2 - uVar7);
      uVar7 = *(int *)((int)this + 0x14) - uVar7;
      uVar3 = FUN_10001610(puVar4,uVar7,'\0');
      if ((char)uVar3 != '\0') {
        FUN_100015f0(puVar4,uVar7);
      }
    }
    FUN_10001740(puVar4);
  }
  else {
    if ((uVar5 != 0) && (uVar5 == uVar2)) {
      puVar6 = (undefined4 *)param_1[1];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_1000f110;
      }
      if (*(byte *)((int)puVar6 + -1) < 0xfe) {
        FUN_10001290(puVar4,'\x01');
        puVar4 = (undefined4 *)param_1[1];
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = &DAT_1000f110;
        }
        *(undefined4 **)((int)this + 0x10) = puVar4;
        *(undefined4 *)((int)this + 0x14) = param_1[2];
        *(undefined4 *)((int)this + 0x18) = param_1[3];
        *(char *)((int)puVar4 + -1) = *(char *)((int)puVar4 + -1) + '\x01';
        goto LAB_100032bb;
      }
    }
    uVar3 = FUN_10001610(puVar4,uVar5,'\x01');
    if ((char)uVar3 != '\0') {
      puVar6 = (undefined4 *)param_1[1];
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_1000f110;
      }
      puVar8 = *(undefined4 **)((int)this + 0x10);
      for (uVar2 = uVar5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar2 = uVar5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_100015f0(puVar4,uVar5);
      *local_10 = &PTR_FUN_1000f284;
      ExceptionList = local_c;
      return local_10;
    }
  }
LAB_100032bb:
  *(undefined ***)this = &PTR_FUN_1000f284;
  ExceptionList = local_c;
  return this;
}



// ============================================================
// FUN_10003390 @ 0x10003390 30B
// ============================================================

exception * __thiscall FUN_10003390(void *this,byte param_1)

{
  FUN_100031b0(this);
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_100033b0 @ 0x100033b0 346B
// ============================================================

undefined4 * __thiscall FUN_100033b0(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e8a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10007917(param_1,param_2);
  puVar5 = param_1 + 3;
  local_4 = 0;
  *(undefined1 *)puVar5 = *(undefined1 *)(param_2 + 0xc);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar7 = DAT_1000f10c;
  uVar2 = *(uint *)(param_2 + 0x14);
  uVar6 = uVar2;
  if (DAT_1000f10c < uVar2) {
    uVar6 = DAT_1000f10c;
  }
  if (puVar5 == (undefined4 *)(param_2 + 0xc)) {
    if (uVar6 != 0) {
      FUN_100066c3();
    }
    FUN_10001740(puVar5);
    uVar2 = param_1[5] - uVar6;
    if (uVar2 < uVar7) {
      uVar7 = uVar2;
    }
    if (uVar7 != 0) {
      FUN_10007500((undefined4 *)(uVar6 + param_1[4]),
                   (undefined4 *)(uVar7 + (int)(uVar6 + param_1[4])),uVar2 - uVar7);
      iVar1 = param_1[5];
      uVar3 = FUN_10001610(puVar5,iVar1 - uVar7,'\0');
      if ((char)uVar3 != '\0') {
        FUN_100015f0(puVar5,iVar1 - uVar7);
      }
    }
    FUN_10001740(puVar5);
  }
  else {
    if ((uVar6 != 0) && (uVar6 == uVar2)) {
      puVar4 = *(undefined4 **)(param_2 + 0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = &DAT_1000f110;
      }
      if (*(byte *)((int)puVar4 + -1) < 0xfe) {
        FUN_10001290(puVar5,'\x01');
        puVar5 = *(undefined4 **)(param_2 + 0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = &DAT_1000f110;
        }
        param_1[4] = puVar5;
        param_1[5] = *(undefined4 *)(param_2 + 0x14);
        param_1[6] = *(undefined4 *)(param_2 + 0x18);
        *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
        goto LAB_10003461;
      }
    }
    uVar3 = FUN_10001610(puVar5,uVar6,'\x01');
    if ((char)uVar3 != '\0') {
      puVar4 = *(undefined4 **)(param_2 + 0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = &DAT_1000f110;
      }
      puVar8 = (undefined4 *)param_1[4];
      for (uVar2 = uVar6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar2 = uVar6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      FUN_100015f0(puVar5,uVar6);
      *param_1 = &PTR_FUN_1000f284;
      ExceptionList = local_c;
      return local_c;
    }
  }
LAB_10003461:
  *param_1 = &PTR_FUN_1000f284;
  ExceptionList = local_c;
  return local_c;
}



// ============================================================
// FUN_10003510 @ 0x10003510 278B
// ============================================================

byte __thiscall FUN_10003510(void *this,int param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((*(int *)((int)this + 0xa0) == 0) ||
     ((uint)(*(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0)) < 0x100)) {
    if (*(int *)((int)this + 0xa0) == 0) {
      bVar1 = 0;
    }
    else {
      bVar1 = *(char *)((int)this + 0xa4) - (char)*(int *)((int)this + 0xa0);
    }
  }
  else {
    bVar1 = 0xff;
  }
  if (param_2 != 0) {
    if (bVar1 == param_2) {
      uVar2 = 0;
      if (bVar1 != 0) {
        do {
          if ((*(int *)((int)this + 0xa0) == 0) ||
             ((uint)(*(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0)) <= uVar2)) {
            FUN_10003bf0();
          }
          if (*(char *)(uVar2 + param_1) != *(char *)(*(int *)((int)this + 0xa0) + uVar2)) {
            iVar5 = *(int *)((int)this + 0x2c);
            goto LAB_100035b8;
          }
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < (int)(uint)bVar1);
      }
    }
    else {
      iVar5 = *(int *)((int)this + 0x2c);
LAB_100035b8:
      FUN_100038f0(iVar5,-0xd000000);
    }
  }
  uVar3 = 0;
  uVar2 = (uint)bVar1;
  if (uVar2 != 0) {
    do {
      if ((*(int *)((int)this + 0xa0) == 0) ||
         ((uint)(*(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0)) <= uVar3)) {
        FUN_10003bf0();
      }
      *(undefined1 *)(uVar3 + param_1) = *(undefined1 *)(uVar3 + *(int *)((int)this + 0xa0));
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < (int)uVar2);
  }
  if (uVar2 < 0xff) {
    puVar4 = (undefined4 *)(param_1 + uVar2);
    for (uVar3 = 0xff - uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = 0xff - uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return bVar1;
}



// ============================================================
// FUN_10003630 @ 0x10003630 151B
// ============================================================

undefined4 __thiscall FUN_10003630(void *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2;
  param_2 = param_2 + 2;
  uVar2 = FUN_100011f0(param_1,&param_2);
  if ((int)uVar2 < 0) {
    return 0xffffffff;
  }
  if ((int)uVar2 < 0x80) {
    FUN_100036d0(this,iVar1 + 3 + param_1,uVar2);
    return 0;
  }
  if ((int)uVar2 < 0x4000) {
    FUN_100036d0(this,iVar1 + 4 + param_1,uVar2);
    return 0;
  }
  if ((int)uVar2 < 0x200000) {
    FUN_100036d0(this,iVar1 + 5 + param_1,uVar2);
    return 0;
  }
  FUN_100036d0(this,iVar1 + 6 + param_1,uVar2);
  return 0;
}



// ============================================================
// FUN_100036d0 @ 0x100036d0 204B
// ============================================================

void __thiscall FUN_100036d0(void *this,int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  
  bVar1 = *(byte *)(*(int *)((int)this + 0x28) + 0xd18);
  if (bVar1 != 0) {
    if (param_2 == bVar1) {
      uVar2 = 0;
      if (param_2 != 0) {
        pcVar5 = (char *)(*(int *)((int)this + 0x28) + 0x80b);
        do {
          if (*pcVar5 != *(char *)(uVar2 + param_1)) {
            iVar6 = *(int *)((int)this + 0x2c);
            goto LAB_10003722;
          }
          uVar2 = uVar2 + 1;
          pcVar5 = pcVar5 + 1;
        } while (uVar2 < param_2);
      }
    }
    else {
      iVar6 = *(int *)((int)this + 0x2c);
LAB_10003722:
      FUN_100038f0(iVar6,-0xd000000);
    }
  }
  if (param_2 < 0x100) {
    *(char *)(*(int *)((int)this + 0x28) + 0xd18) = (char)param_2;
  }
  else {
    *(undefined1 *)(*(int *)((int)this + 0x28) + 0xd18) = 0xff;
  }
  iVar6 = *(int *)((int)this + 0x28);
  iVar3 = 0;
  if (*(char *)(iVar6 + 0xd18) != '\0') {
    do {
      *(undefined1 *)(iVar6 + 0x80b + iVar3) = *(undefined1 *)(iVar3 + param_1);
      iVar6 = *(int *)((int)this + 0x28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(iVar6 + 0xd18));
  }
  uVar2 = (uint)*(byte *)(*(int *)((int)this + 0x28) + 0xd18);
  if (uVar2 < 0xff) {
    do {
      uVar4 = uVar2 + 1;
      *(undefined1 *)(uVar2 + 0x80b + *(int *)((int)this + 0x28)) = 0;
      uVar2 = uVar4;
    } while ((int)uVar4 < 0xff);
  }
  return;
}



// ============================================================
// FUN_100037a0 @ 0x100037a0 140B
// ============================================================

undefined4 __thiscall FUN_100037a0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  param_2 = param_2 + 2;
  iVar2 = FUN_100011f0(param_1,&param_2);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  if (((((*(byte *)((int)this + 0x5a) & 0xf0) != 0x20) && (*(char *)(param_1 + 1 + iVar1) == '\x7f')
       ) && (*(char *)(param_1 + 2 + iVar1) == '\x14')) &&
     (((*(char *)(param_1 + 3 + iVar1) == 'C' && (*(char *)(param_1 + 4 + iVar1) == '\x02')) &&
      ((*(char *)(param_1 + 5 + iVar1) == '\0' && (*(char *)(param_1 + 6 + iVar1) == '\x04')))))) {
    *(undefined1 *)((int)this + 0x59) = 1;
    iVar2 = 0;
    do {
      *(byte *)(*(int *)((int)this + 0x24) + 0x32 + iVar2) =
           (*(byte *)(param_1 + 7 + iVar1 + iVar2) & 3) << 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
  }
  return 0;
}



// ============================================================
// FUN_10003830 @ 0x10003830 30B
// ============================================================

void __fastcall FUN_10003830(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x5e);
  do {
    if (*pcVar2 == -1) {
      *(undefined1 *)(*(int *)(param_1 + 0x24) + 1 + iVar1) = 0xff;
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 4;
  } while (iVar1 < 0x10);
  return;
}



// ============================================================
// FUN_10003850 @ 0x10003850 66B
// ============================================================

void __fastcall FUN_10003850(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x59) == '\x01') {
    iVar1 = 0;
    pcVar2 = (char *)(param_1 + 0x5e);
    do {
      if (*pcVar2 == -1) {
        *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x32 + iVar1) = 0;
      }
      iVar1 = iVar1 + 1;
      pcVar2 = pcVar2 + 4;
    } while (iVar1 < 0x10);
    return;
  }
  iVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x5e);
  do {
    if (*pcVar2 != -1) {
      *(undefined1 *)(*(int *)(param_1 + 0x24) + 0x32 + iVar1) = 0x10;
      return;
    }
    iVar1 = iVar1 + 1;
    pcVar2 = pcVar2 + 4;
  } while (iVar1 < 0x10);
  return;
}



// ============================================================
// FUN_100038a0 @ 0x100038a0 69B
// ============================================================

undefined4 FUN_100038a0(ushort param_1,ushort param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar3 = 0;
    do {
      uVar1 = param_1 >> ((byte)iVar3 & 0x1f) & 1;
      uVar2 = param_2 >> ((byte)iVar3 & 0x1f) & 1;
      if (uVar2 < uVar1) {
        return 0;
      }
      if (uVar1 < uVar2) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
  }
  return 0;
}



// ============================================================
// FUN_100038f0 @ 0x100038f0 69B
// ============================================================

void FUN_100038f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = 0;
  piVar4 = (int *)(param_1 + 0xa0);
  piVar2 = piVar4;
  do {
    if (*piVar2 == 0) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 10);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (*piVar4 == param_2) {
        return;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < iVar1);
    if (9 < iVar3) {
      return;
    }
  }
  *(int *)(param_1 + 0xa0 + iVar3 * 4) = param_2;
  return;
}



// ============================================================
// FUN_10003940 @ 0x10003940 189B
// ============================================================

undefined1 * __thiscall FUN_10003940(void *this,char *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  *(undefined1 *)this = *param_2;
  uVar3 = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  if (0xfffffffd < uVar3) {
    FUN_10006577();
  }
  iVar2 = *(int *)((int)this + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_10001290(this,'\x01');
      return this;
    }
    if ((*(uint *)((int)this + 0xc) < 0x20) && (uVar3 <= *(uint *)((int)this + 0xc)))
    goto LAB_100039d3;
    FUN_10001290(this,'\x01');
  }
  else if (uVar3 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_10001290(this,'\0');
    return this;
  }
  FUN_100012e0(uVar3);
LAB_100039d3:
  pcVar5 = *(char **)((int)this + 4);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar5 = *param_1;
    param_1 = param_1 + 1;
    pcVar5 = pcVar5 + 1;
  }
  *(uint *)((int)this + 8) = uVar3;
  *(undefined1 *)(*(int *)((int)this + 4) + uVar3) = 0;
  return this;
}



// ============================================================
// FUN_10003a00 @ 0x10003a00 63B
// ============================================================

void __fastcall FUN_10003a00(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_1000675f((undefined *)(iVar2 + -2));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// ============================================================
// FUN_10003a40 @ 0x10003a40 408B
// ============================================================

undefined1 * __thiscall FUN_10003a40(void *this,undefined1 *param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  
  *param_1 = param_1._0_1_;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(uint *)((int)this + 8) < param_2) {
    FUN_100066c3();
  }
  uVar8 = DAT_1000f118;
  uVar9 = *(uint *)((int)this + 8) - param_2;
  if (param_3 < uVar9) {
    uVar9 = param_3;
  }
  if (param_1 == this) {
    uVar9 = uVar9 + param_2;
    if (*(uint *)(param_1 + 8) < uVar9) {
      FUN_100066c3();
    }
    FUN_10003ef0(param_1);
    uVar3 = *(int *)(param_1 + 8) - uVar9;
    if (uVar3 < uVar8) {
      uVar8 = uVar3;
    }
    if (uVar8 != 0) {
      FUN_10002c70((undefined2 *)(*(int *)(param_1 + 4) + uVar9 * 2),
                   (undefined2 *)(*(int *)(param_1 + 4) + (uVar9 + uVar8) * 2),uVar3 - uVar8);
      iVar2 = *(int *)(param_1 + 8);
      uVar4 = FUN_10003dc0(param_1,iVar2 - uVar8,'\0');
      if ((char)uVar4 != '\0') {
        FUN_10003da0(param_1,iVar2 - uVar8);
      }
    }
    FUN_10003ef0(param_1);
    uVar8 = *(uint *)(param_1 + 8);
    if (uVar8 < param_2) {
      param_2 = uVar8;
    }
    if (param_2 != 0) {
      FUN_10002c70(*(undefined2 **)(param_1 + 4),*(undefined2 **)(param_1 + 4) + param_2,
                   uVar8 - param_2);
      iVar2 = *(int *)(param_1 + 8);
      uVar4 = FUN_10003dc0(param_1,iVar2 - param_2,'\0');
      if ((char)uVar4 != '\0') {
        FUN_10003da0(param_1,iVar2 - param_2);
        return param_1;
      }
    }
  }
  else {
    if ((uVar9 != 0) && (uVar9 == *(uint *)((int)this + 8))) {
      puVar5 = *(undefined **)((int)this + 4);
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_1000f11c;
      }
      if ((byte)puVar5[-1] < 0xfe) {
        FUN_10003fd0(param_1,'\x01');
        puVar5 = *(undefined **)((int)this + 4);
        if (puVar5 == (undefined *)0x0) {
          puVar5 = &DAT_1000f11c;
        }
        *(undefined **)(param_1 + 4) = puVar5;
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0xc);
        puVar5[-1] = puVar5[-1] + '\x01';
        return param_1;
      }
    }
    uVar4 = FUN_10003dc0(param_1,uVar9,'\x01');
    if ((char)uVar4 != '\0') {
      puVar5 = *(undefined **)((int)this + 4);
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_1000f11c;
      }
      puVar7 = (undefined2 *)(puVar5 + param_2 * 2);
      puVar6 = *(undefined2 **)(param_1 + 4);
      for (uVar8 = uVar9; uVar8 != 0; uVar8 = uVar8 - 1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      }
      *(uint *)(param_1 + 8) = uVar9;
      *(undefined2 *)(*(int *)(param_1 + 4) + uVar9 * 2) = 0;
    }
  }
  return param_1;
}



// ============================================================
// FUN_10003bf0 @ 0x10003bf0 217B
// ============================================================

void FUN_10003bf0(void)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_3d;
  undefined4 *local_3c;
  undefined1 local_38 [4];
  char *local_34;
  uint local_30;
  undefined4 local_2c;
  undefined **local_28 [3];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000e8d0;
  pvStack_c = ExceptionList;
  local_38[0] = local_3d;
  uVar3 = 0xffffffff;
  pcVar5 = s_invalid_vector<T>_subscript_1001114c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_34 = (char *)0x0;
  local_30 = 0;
  local_2c = 0;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_10001610(local_38,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = s_invalid_vector<T>_subscript_1001114c;
    pcVar6 = local_34;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_34[uVar3] = '\0';
    local_30 = uVar3;
  }
  local_4 = 0;
  local_3c = &DAT_1001417c;
  FUN_100078da(local_28,&local_3c);
  local_4._0_1_ = 1;
  local_1c[0] = local_38[0];
  FUN_10001290(local_1c,'\0');
  FUN_100013f0(local_1c,local_38,0,DAT_1000f10c);
  local_4 = (uint)local_4._1_3_ << 8;
  local_28[0] = &PTR_FUN_1000f284;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_28,&DAT_10010150);
}



// ============================================================
// FUN_10003cd0 @ 0x10003cd0 201B
// ============================================================

uint __thiscall FUN_10003cd0(void *this,ushort *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((((param_3 != 0) || (uVar5 = param_2, *(uint *)((int)this + 8) < param_2)) &&
      (uVar5 = DAT_1000f118, param_2 < *(uint *)((int)this + 8))) &&
     (uVar7 = *(uint *)((int)this + 8) - param_2, param_3 <= uVar7)) {
    puVar3 = (ushort *)(*(int *)((int)this + 4) + param_2 * 2);
    for (iVar8 = uVar7 + (1 - param_3); iVar8 != 0; iVar8 = iVar8 + (-1 - (iVar6 >> 1))) {
      puVar4 = puVar3;
      iVar6 = iVar8;
      while (*puVar4 != *param_1) {
        puVar4 = puVar4 + 1;
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) {
          return DAT_1000f118;
        }
      }
      puVar1 = param_1;
      uVar7 = param_3;
      puVar2 = puVar4;
      if (puVar4 == (ushort *)0x0) {
        return DAT_1000f118;
      }
      while( true ) {
        if (uVar7 == 0) goto LAB_10003d7c;
        if (*puVar2 != *puVar1) break;
        puVar1 = puVar1 + 1;
        uVar7 = uVar7 - 1;
        puVar2 = puVar2 + 1;
      }
      if ((-(uint)(*puVar2 < *puVar1) & 0xfffffffe) == 0xffffffff) {
LAB_10003d7c:
        return (int)puVar4 - *(int *)((int)this + 4) >> 1;
      }
      iVar6 = (int)puVar4 - (int)puVar3;
      puVar3 = puVar4 + 1;
    }
  }
  return uVar5;
}



// ============================================================
// FUN_10003dc0 @ 0x10003dc0 290B
// ============================================================

int __thiscall FUN_10003dc0(void *this,uint param_1,char param_2)

{
  char cVar1;
  uint3 uVar5;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  
  if (0x7ffffffd < param_1) {
    FUN_10006577();
  }
  puVar4 = *(undefined2 **)((int)this + 4);
  uVar5 = (uint3)((uint)puVar4 >> 8);
  if (((puVar4 == (undefined2 *)0x0) || (cVar1 = *(char *)((int)puVar4 + -1), cVar1 == '\0')) ||
     (cVar1 == -1)) {
    if (param_1 == 0) {
      if (param_2 == '\0') {
        if (puVar4 != (undefined2 *)0x0) {
          *(undefined4 *)((int)this + 8) = 0;
          *puVar4 = 0;
        }
        return (uint)uVar5 << 8;
      }
      uVar2 = 0;
      if (puVar4 != (undefined2 *)0x0) {
        cVar1 = *(char *)((int)puVar4 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)((int)puVar4 + -1) = cVar1 + -1;
          *(undefined4 *)((int)this + 4) = 0;
          *(undefined4 *)((int)this + 8) = 0;
          *(undefined4 *)((int)this + 0xc) = 0;
          return (uint)uVar5 << 8;
        }
        uVar2 = FUN_1000675f((undefined *)(puVar4 + -1));
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      return uVar2 & 0xffffff00;
    }
    if (param_2 != '\0') {
      if ((0x1f < *(uint *)((int)this + 0xc)) || (*(uint *)((int)this + 0xc) < param_1)) {
        if (puVar4 != (undefined2 *)0x0) {
          cVar1 = *(char *)((int)puVar4 + -1);
          if ((cVar1 != '\0') && (cVar1 != -1)) {
            *(char *)((int)puVar4 + -1) = cVar1 + -1;
            *(undefined4 *)((int)this + 4) = 0;
            *(undefined4 *)((int)this + 8) = 0;
            *(undefined4 *)((int)this + 0xc) = 0;
            uVar3 = FUN_100044c0(param_1);
            return CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
          FUN_1000675f((undefined *)(puVar4 + -1));
        }
        *(undefined4 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
        *(undefined4 *)((int)this + 0xc) = 0;
        uVar3 = FUN_100044c0(param_1);
        return CONCAT31((int3)((uint)uVar3 >> 8),1);
      }
      goto LAB_10003eda;
    }
    if (param_1 <= *(uint *)((int)this + 0xc)) goto LAB_10003eda;
  }
  else if (param_1 == 0) {
    *(char *)((int)puVar4 + -1) = cVar1 + -1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)uVar5 << 8;
  }
  puVar4 = (undefined2 *)FUN_100044c0(param_1);
LAB_10003eda:
  return CONCAT31((int3)((uint)puVar4 >> 8),1);
}



// ============================================================
// FUN_10003ef0 @ 0x10003ef0 214B
// ============================================================

void __fastcall FUN_10003ef0(void *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  
  psVar6 = *(short **)((int)param_1 + 4);
  if (psVar6 == (short *)0x0) {
    return;
  }
  cVar1 = *(char *)((int)psVar6 + -1);
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == -1) {
    return;
  }
  *(char *)((int)psVar6 + -1) = cVar1 + -1;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  uVar4 = FUN_10007879(psVar6);
  if (0x7ffffffd < uVar4) {
    FUN_10006577();
  }
  iVar3 = *(int *)((int)param_1 + 4);
  if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      FUN_10003fd0(param_1,'\x01');
      return;
    }
    if ((*(uint *)((int)param_1 + 0xc) < 0x20) && (uVar4 <= *(uint *)((int)param_1 + 0xc)))
    goto LAB_10003f9c;
    FUN_10003fd0(param_1,'\x01');
  }
  else if (uVar4 == 0) {
    *(char *)(iVar3 + -1) = cVar1 + -1;
    FUN_10003fd0(param_1,'\0');
    return;
  }
  FUN_100044c0(uVar4);
LAB_10003f9c:
  psVar5 = *(short **)((int)param_1 + 4);
  for (uVar7 = uVar4; uVar7 != 0; uVar7 = uVar7 - 1) {
    sVar2 = *psVar6;
    psVar6 = psVar6 + 1;
    *psVar5 = sVar2;
    psVar5 = psVar5 + 1;
  }
  *(uint *)((int)param_1 + 8) = uVar4;
  *(undefined2 *)(*(int *)((int)param_1 + 4) + uVar4 * 2) = 0;
  return;
}



// ============================================================
// FUN_10003fd0 @ 0x10003fd0 73B
// ============================================================

void __thiscall FUN_10003fd0(void *this,char param_1)

{
  char cVar1;
  int iVar2;
  
  if ((param_1 != '\0') && (iVar2 = *(int *)((int)this + 4), iVar2 != 0)) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_1000675f((undefined *)(iVar2 + -2));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}



// ============================================================
// FUN_10004020 @ 0x10004020 450B
// ============================================================

void __thiscall FUN_10004020(void *this,undefined1 *param_1,uint param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  puVar6 = *(undefined1 **)((int)this + 8);
  if (param_2 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar6)) {
    if ((uint)((int)puVar6 - (int)param_1) < param_2) {
      puVar7 = param_1 + param_2;
      if (param_1 != puVar6) {
        puVar5 = puVar7 + -param_2;
        do {
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = *puVar5;
          }
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar6);
      }
      puVar6 = *(undefined1 **)((int)this + 8);
      for (puVar7 = param_1 + (param_2 - (int)puVar6); puVar7 != (undefined1 *)0x0;
          puVar7 = puVar7 + -1) {
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = *param_3;
        }
        puVar6 = puVar6 + 1;
      }
      puVar6 = *(undefined1 **)((int)this + 8);
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
    }
    else {
      if (param_2 == 0) {
        return;
      }
      puVar7 = puVar6;
      for (puVar5 = puVar6 + -param_2; puVar5 != puVar6; puVar5 = puVar5 + 1) {
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = *puVar5;
        }
        puVar7 = puVar7 + 1;
      }
      puVar6 = *(undefined1 **)((int)this + 8);
      for (puVar7 = puVar6 + -param_2; param_1 != puVar7; puVar7 = puVar7 + -1) {
        puVar6 = puVar6 + -1;
        *puVar6 = puVar7[-1];
      }
      puVar6 = param_1 + param_2;
      for (; param_1 != puVar6; param_1 = param_1 + 1) {
        *param_1 = *param_3;
      }
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2;
    return;
  }
  iVar2 = *(int *)((int)this + 4);
  if ((iVar2 == 0) || (uVar3 = (int)puVar6 - iVar2, (uint)((int)puVar6 - iVar2) <= param_2)) {
    uVar3 = param_2;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)puVar6 - iVar2;
  }
  uVar3 = iVar2 + uVar3;
  uVar4 = uVar3;
  if ((int)uVar3 < 0) {
    uVar4 = 0;
  }
  puVar5 = operator_new(uVar4);
  puVar7 = puVar5;
  for (puVar6 = *(undefined1 **)((int)this + 4); uVar4 = param_2, puVar1 = puVar7, puVar6 != param_1
      ; puVar6 = puVar6 + 1) {
    if (puVar7 != (undefined1 *)0x0) {
      *puVar7 = *puVar6;
    }
    puVar7 = puVar7 + 1;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  puVar1 = *(undefined1 **)((int)this + 8);
  puVar6 = puVar7 + param_2;
  if (param_1 != puVar1) {
    puVar7 = param_1 + (int)(puVar6 + (-param_2 - (int)puVar7));
    do {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar7;
      }
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar1);
  }
  FUN_1000675f(*(undefined **)((int)this + 4));
  *(undefined1 **)((int)this + 0xc) = puVar5 + uVar3;
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    *(undefined1 **)((int)this + 4) = puVar5;
    *(undefined1 **)((int)this + 8) = puVar5 + param_2 + (*(int *)((int)this + 8) - iVar2);
    return;
  }
  *(undefined1 **)((int)this + 4) = puVar5;
  *(undefined1 **)((int)this + 8) = puVar5 + param_2;
  return;
}



// ============================================================
// FUN_100041f0 @ 0x100041f0 525B
// ============================================================

void * __thiscall FUN_100041f0(void *this,void *param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(uint *)((int)param_1 + 8) < param_2) {
    FUN_100066c3();
  }
  uVar10 = DAT_1000f118;
  uVar9 = *(uint *)((int)param_1 + 8) - param_2;
  if (param_3 < uVar9) {
    uVar9 = param_3;
  }
  if (this == param_1) {
    uVar9 = uVar9 + param_2;
    if (*(uint *)((int)this + 8) < uVar9) {
      FUN_100066c3();
    }
    FUN_10003ef0(this);
    uVar4 = *(int *)((int)this + 8) - uVar9;
    if (uVar4 < uVar10) {
      uVar10 = uVar4;
    }
    if (uVar10 != 0) {
      FUN_10002c70((undefined2 *)(*(int *)((int)this + 4) + uVar9 * 2),
                   (undefined2 *)(*(int *)((int)this + 4) + (uVar9 + uVar10) * 2),uVar4 - uVar10);
      uVar10 = *(int *)((int)this + 8) - uVar10;
      uVar5 = FUN_10003dc0(this,uVar10,'\0');
      if ((char)uVar5 != '\0') {
        *(uint *)((int)this + 8) = uVar10;
        *(undefined2 *)(*(int *)((int)this + 4) + uVar10 * 2) = 0;
      }
    }
    FUN_10003ef0(this);
    uVar10 = *(uint *)((int)this + 8);
    if (uVar10 < param_2) {
      param_2 = uVar10;
    }
    if (param_2 == 0) {
      return this;
    }
    FUN_10002c70(*(undefined2 **)((int)this + 4),*(undefined2 **)((int)this + 4) + param_2,
                 uVar10 - param_2);
    uVar10 = *(int *)((int)this + 8) - param_2;
    uVar5 = FUN_10003dc0(this,uVar10,'\0');
    if ((char)uVar5 == '\0') {
      return this;
    }
    FUN_10003da0(this,uVar10);
    return this;
  }
  if ((uVar9 != 0) && (uVar9 == *(uint *)((int)param_1 + 8))) {
    puVar6 = *(undefined **)((int)param_1 + 4);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = &DAT_1000f11c;
    }
    if ((byte)puVar6[-1] < 0xfe) {
      iVar3 = *(int *)((int)this + 4);
      if (iVar3 != 0) {
        cVar1 = *(char *)(iVar3 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_1000675f((undefined *)(iVar3 + -2));
        }
        else {
          *(char *)(iVar3 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      puVar6 = *(undefined **)((int)param_1 + 4);
      if (puVar6 == (undefined *)0x0) {
        puVar6 = &DAT_1000f11c;
      }
      *(undefined **)((int)this + 4) = puVar6;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_1 + 0xc);
      puVar6[-1] = puVar6[-1] + '\x01';
      return this;
    }
  }
  uVar10 = FUN_100044b0();
  if (uVar10 < uVar9) {
    FUN_10006577();
  }
  iVar3 = *(int *)((int)this + 4);
  if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar9 == 0) {
      FUN_10003fd0(this,'\x01');
      return this;
    }
    if ((*(uint *)((int)this + 0xc) < 0x20) && (uVar9 <= *(uint *)((int)this + 0xc)))
    goto LAB_100043c1;
    FUN_10003fd0(this,'\x01');
  }
  else if (uVar9 == 0) {
    *(char *)(iVar3 + -1) = cVar1 + -1;
    FUN_10003fd0(this,'\0');
    return this;
  }
  FUN_100044c0(uVar9);
LAB_100043c1:
  puVar6 = *(undefined **)((int)param_1 + 4);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = &DAT_1000f11c;
  }
  puVar8 = (undefined2 *)(puVar6 + param_2 * 2);
  puVar7 = *(undefined2 **)((int)this + 4);
  for (uVar10 = uVar9; uVar10 != 0; uVar10 = uVar10 - 1) {
    uVar2 = *puVar8;
    puVar8 = puVar8 + 1;
    *puVar7 = uVar2;
    puVar7 = puVar7 + 1;
  }
  *(uint *)((int)this + 8) = uVar9;
  *(undefined2 *)(*(int *)((int)this + 4) + uVar9 * 2) = 0;
  return this;
}



// ============================================================
// FUN_10004400 @ 0x10004400 162B
// ============================================================

void * __thiscall FUN_10004400(void *this,undefined2 *param_1,uint param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  if (0x7ffffffd < param_2) {
    FUN_10006577();
  }
  iVar3 = *(int *)((int)this + 4);
  if (((iVar3 == 0) || (cVar1 = *(char *)(iVar3 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (param_2 == 0) {
      FUN_10003fd0(this,'\x01');
      return this;
    }
    if ((*(uint *)((int)this + 0xc) < 0x20) && (param_2 <= *(uint *)((int)this + 0xc)))
    goto LAB_10004471;
    FUN_10003fd0(this,'\x01');
  }
  else if (param_2 == 0) {
    *(char *)(iVar3 + -1) = cVar1 + -1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return this;
  }
  FUN_100044c0(param_2);
LAB_10004471:
  puVar4 = *(undefined2 **)((int)this + 4);
  for (uVar5 = param_2; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
  }
  *(uint *)((int)this + 8) = param_2;
  *(undefined2 *)(*(int *)((int)this + 4) + param_2 * 2) = 0;
  return this;
}



// ============================================================
// FUN_100044c0 @ 0x100044c0 88B
// ============================================================

void FUN_100044c0(uint param_1)

{
  int iVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1000e8e0;
  pvStack_10 = ExceptionList;
  uVar2 = param_1 | 0x1f;
  if (0x7ffffffd < (param_1 | 0x1f)) {
    uVar2 = param_1;
  }
  iVar1 = uVar2 + 2;
  local_8 = 0;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  ExceptionList = &pvStack_10;
  operator_new(iVar1 * 2);
  FUN_10004542();
  return;
}



// ============================================================
// Catch@10004518 @ 0x10004518 36B
// ============================================================

undefined * Catch_10004518(void)

{
  int iVar1;
  void *pvVar2;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(unaff_EBP + 8) + 2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  pvVar2 = operator_new(iVar1 * 2);
  *(void **)(unaff_EBP + 8) = pvVar2;
  return &DAT_1000453c;
}



// ============================================================
// FUN_10004542 @ 0x10004542 142B
// ============================================================

void FUN_10004542(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int unaff_EBP;
  int unaff_ESI;
  uint unaff_EDI;
  
  uVar6 = *(uint *)(unaff_ESI + 8);
  if (uVar6 != 0) {
    if (unaff_EDI < uVar6) {
      uVar6 = unaff_EDI;
    }
    puVar4 = *(undefined2 **)(unaff_EBP + 8);
    puVar5 = *(undefined2 **)(unaff_ESI + 4);
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar4 = puVar4 + 1;
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar4 = uVar2;
    }
  }
  iVar3 = *(int *)(unaff_ESI + 4);
  uVar6 = *(uint *)(unaff_ESI + 8);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_1000675f((undefined *)(iVar3 + -2));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  iVar3 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(int *)(unaff_ESI + 4) = iVar3 + 2;
  *(undefined1 *)(iVar3 + 1) = 0;
  *(uint *)(unaff_ESI + 0xc) = unaff_EDI;
  if (uVar6 <= unaff_EDI) {
    unaff_EDI = uVar6;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(uint *)(unaff_ESI + 8) = unaff_EDI;
  *(undefined2 *)(*(int *)(unaff_ESI + 4) + unaff_EDI * 2) = 0;
  return;
}



// ============================================================
// FUN_100045d0 @ 0x100045d0 29B
// ============================================================

void __cdecl FUN_100045d0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return;
}



// ============================================================
// FUN_100045f0 @ 0x100045f0 105B
// ============================================================

uint __thiscall FUN_100045f0(void *this,uint param_1,uint param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_100066c3();
  }
  uVar1 = *(int *)((int)this + 8) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  uVar1 = param_2;
  if (param_4 <= param_2) {
    uVar1 = param_4;
  }
  if (*(int *)((int)this + 4) == 0) {
    pbVar3 = (byte *)0x0;
  }
  else {
    pbVar3 = (byte *)(*(int *)((int)this + 4) + param_1);
  }
  bVar4 = false;
  uVar2 = 0;
  bVar5 = true;
  do {
    if (uVar1 == 0) break;
    uVar1 = uVar1 - 1;
    bVar4 = *pbVar3 < *param_3;
    bVar5 = *pbVar3 == *param_3;
    pbVar3 = pbVar3 + 1;
    param_3 = param_3 + 1;
  } while (bVar5);
  if (!bVar5) {
    uVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
  }
  if (uVar2 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar2 = (uint)(param_2 != param_4);
  }
  return uVar2;
}



// ============================================================
// Ssd_SmfParse_Rsrc @ 0x10004760 132B
// ============================================================

undefined4 __cdecl
Ssd_SmfParse_Rsrc(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5)

{
                    /* 0x4760  2  Ssd_SmfParse_Rsrc */
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    return 0xfffffffe;
  }
  if (param_3 == 0) {
    return 0xfffffffd;
  }
  if (param_4 == 0) {
    return 0xfffffffc;
  }
  if (param_5 == 0) {
    return 0xfffffffb;
  }
  FUN_10001950(&DAT_10014188,param_1,param_2);
  FUN_100019a0(&DAT_10014188,param_1,param_2);
  FUN_100019d0(&DAT_10014188,param_3,param_4,param_5);
  return 0;
}



// ============================================================
// Ssd_SmfParse @ 0x100047f0 81B
// ============================================================

int __cdecl Ssd_SmfParse(int param_1,int param_2)

{
  int iVar1;
  
                    /* 0x47f0  1  Ssd_SmfParse */
  if ((((param_1 != 0x3002) && (param_1 != 0x5002)) && (param_1 != 0x2002)) && (param_1 != 0x2003))
  {
    return -6;
  }
  if (param_2 == 0) {
    return -7;
  }
  iVar1 = FUN_100019f0(&DAT_10014188,param_1,param_2);
  FUN_10001980(0x10014188);
  return iVar1;
}



// ============================================================
// FUN_10004909 @ 0x10004909 21B
// ============================================================

void __fastcall FUN_10004909(int *param_1)

{
  *(undefined ***)(*(int *)(*param_1 + 4) + -8 + (int)(param_1 + 2)) = &PTR_LAB_1000f124;
  FUN_10004cc2(param_1 + 2);
  return;
}



// ============================================================
// FUN_1000494d @ 0x1000494d 21B
// ============================================================

void __fastcall FUN_1000494d(int *param_1)

{
  *(undefined ***)(*(int *)(*param_1 + 4) + -4 + (int)(param_1 + 1)) = &PTR_LAB_1000f12c;
  FUN_10004cc2(param_1 + 1);
  return;
}



// ============================================================
// FUN_100049ed @ 0x100049ed 383B
// ============================================================

undefined4 FUN_100049ed(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar2;
  
  FUN_10007d0c();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_1000676a(unaff_EBP + -0x10);
  bVar2 = DAT_10011168 < 0;
  if (bVar2) {
    DAT_10011168 = 1;
  }
  else {
    DAT_10011168 = DAT_10011168 + 1;
  }
  FUN_10006806();
  if (bVar2) {
    *(undefined **)(unaff_EBP + -0x10) = &DAT_100143a0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_10004d94();
    *(undefined **)(unaff_EBP + -0x10) = &DAT_10014278;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_10004d94();
    *(int **)(unaff_EBP + -0x10) = &DAT_10014360;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_10004ccd();
    *(undefined **)(unaff_EBP + -0x10) = &DAT_100142d0;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_10004baf();
    iVar1 = DAT_10014360;
    *(undefined **)(unaff_EBP + -0x10) = &DAT_10014308;
    *(undefined **)(&DAT_1001438c + *(int *)(iVar1 + 4)) = &DAT_100142d0;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_10004d94();
    *(int **)(unaff_EBP + -0x10) = &DAT_100143f8;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_10004baf();
    iVar1 = DAT_100143f8;
    *(int **)(unaff_EBP + -0x10) = &DAT_10014240;
    *(undefined **)(&DAT_10014424 + *(int *)(iVar1 + 4)) = &DAT_100142d0;
    *(uint *)(&DAT_10014404 + *(int *)(DAT_100143f8 + 4)) =
         *(uint *)(&DAT_10014404 + *(int *)(DAT_100143f8 + 4)) | 2;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_10004baf();
    *(undefined **)(&DAT_1001426c + *(int *)(DAT_10014240 + 4)) = &DAT_100142d0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}



// ============================================================
// FUN_10004b6c @ 0x10004b6c 67B
// ============================================================

void FUN_10004b6c(void)

{
  bool bVar1;
  undefined1 local_8 [4];
  
  FUN_1000676a(local_8);
  DAT_10011168 = DAT_10011168 + -1;
  bVar1 = DAT_10011168 == 0;
  FUN_10006806();
  if (bVar1) {
    FUN_10004c78((int *)&DAT_100142d0);
    FUN_10004c78(&DAT_100143f8);
    FUN_10004c78(&DAT_10014240);
  }
  return;
}



// ============================================================
// FUN_10004baf @ 0x10004baf 106B
// ============================================================

int * FUN_10004baf(void)

{
  char cVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *extraout_ECX = (int)&DAT_1000f138;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_1000f134;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  cVar1 = *(char *)(unaff_EBP + 0x10);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000f12c;
  if (cVar1 != '\0') {
    FUN_100055a2((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),
                 *(undefined4 *)(unaff_EBP + 8),(char)*(undefined4 *)(unaff_EBP + 0xc));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



// ============================================================
// FUN_10004c19 @ 0x10004c19 95B
// ============================================================

int * FUN_10004c19(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000f138;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_1000f134;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000f12c;
  FUN_10006b17(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



// ============================================================
// FUN_10004c78 @ 0x10004c78 74B
// ============================================================

int * __fastcall FUN_10004c78(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (((*(byte *)((int)param_1 + *(int *)(*param_1 + 4) + 4) & 6) == 0) &&
     (iVar2 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x28) + 0x2c))(),
     iVar2 == -1)) {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1000681b();
  }
  return param_1;
}



// ============================================================
// FUN_10004ccd @ 0x10004ccd 104B
// ============================================================

int * FUN_10004ccd(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    *extraout_ECX = (int)&DAT_1000f140;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_1000f134;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  extraout_ECX[1] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000f124;
  FUN_100055a2((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),uVar2,(char)uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



// ============================================================
// FUN_10004d35 @ 0x10004d35 95B
// ============================================================

int * FUN_10004d35(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000f140;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_1000f134;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000f124;
  FUN_10006b17(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



// ============================================================
// FUN_10004d94 @ 0x10004d94 96B
// ============================================================

undefined4 * FUN_10004d94(void)

{
  int iVar1;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  FUN_10004df4(this + 0xd);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *this = &PTR_FUN_1000f184;
  FUN_100064f3((int)this);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_10004df4(this + 0x13);
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *this = &PTR_FUN_1000f14c;
  FUN_10005673(this,iVar1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}



// ============================================================
// FUN_10004df4 @ 0x10004df4 46B
// ============================================================

undefined4 * __fastcall FUN_10004df4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_8;
  
  local_8 = param_1;
  puVar1 = FUN_10006c00();
  *param_1 = puVar1;
  FUN_1000676a(&local_8);
  FUN_10004e22(DAT_10014680);
  FUN_10006806();
  return param_1;
}



// ============================================================
// FUN_10004e22 @ 0x10004e22 38B
// ============================================================

void __fastcall FUN_10004e22(int param_1)

{
  int local_8;
  
  local_8 = param_1;
  FUN_1000676a(&local_8);
  if (*(int *)(param_1 + 4) != -1) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  FUN_10006806();
  return;
}



// ============================================================
// FUN_10004e48 @ 0x10004e48 24B
// ============================================================

void __fastcall FUN_10004e48(uint *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_10004e60(*param_1);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



// ============================================================
// FUN_10004e60 @ 0x10004e60 57B
// ============================================================

uint __fastcall FUN_10004e60(uint param_1)

{
  int iVar1;
  uint local_8;
  
  local_8 = param_1;
  FUN_1000676a(&local_8);
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (iVar1 != -1)) {
    *(int *)(param_1 + 4) = iVar1 + -1;
  }
  iVar1 = *(int *)(param_1 + 4);
  FUN_10006806();
  return ~-(uint)(iVar1 != 0) & param_1;
}



// ============================================================
// uflow @ 0x10004eb1 29B
// ============================================================

/* Library Function - Single Match
    protected: virtual int __thiscall std::basic_streambuf<char,struct std::char_traits<char>
   >::uflow(void)
   
   Library: Visual Studio 2003 Release */

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::uflow
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x10))();
  if (iVar1 == -1) {
    return -1;
  }
  pbVar2 = (byte *)_Gninc(this);
  return (uint)*pbVar2;
}



// ============================================================
// FUN_10004ece @ 0x10004ece 116B
// ============================================================

int __thiscall FUN_10004ece(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    while( true ) {
      if ((int)param_2 < 1) {
        return local_8;
      }
      if (((undefined4 *)**(undefined4 **)((int)this + 0x1c) == (undefined4 *)0x0) ||
         (uVar2 = **(uint **)((int)this + 0x2c), (int)uVar2 < 1)) break;
      if ((int)param_2 < (int)uVar2) {
        uVar2 = param_2;
      }
      FUN_10007d30(param_1,(undefined4 *)**(undefined4 **)((int)this + 0x1c),uVar2);
      local_8 = local_8 + uVar2;
      param_2 = param_2 - uVar2;
      **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) - uVar2;
      param_1 = (undefined4 *)((int)param_1 + uVar2);
      **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + uVar2;
    }
    iVar1 = (**(code **)(*(int *)this + 0x14))();
    if (iVar1 == -1) break;
    *(char *)param_1 = (char)iVar1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    local_8 = local_8 + 1;
    param_2 = param_2 - 1;
  }
  return local_8;
}



// ============================================================
// FUN_10004f42 @ 0x10004f42 118B
// ============================================================

int __thiscall FUN_10004f42(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    while( true ) {
      if ((int)param_2 < 1) {
        return local_8;
      }
      if (((undefined4 *)**(undefined4 **)((int)this + 0x20) == (undefined4 *)0x0) ||
         (uVar2 = **(uint **)((int)this + 0x30), (int)uVar2 < 1)) break;
      if ((int)param_2 < (int)uVar2) {
        uVar2 = param_2;
      }
      FUN_10007d30((undefined4 *)**(undefined4 **)((int)this + 0x20),param_1,uVar2);
      local_8 = local_8 + uVar2;
      param_2 = param_2 - uVar2;
      **(int **)((int)this + 0x30) = **(int **)((int)this + 0x30) - uVar2;
      param_1 = (undefined4 *)((int)param_1 + uVar2);
      **(int **)((int)this + 0x20) = **(int **)((int)this + 0x20) + uVar2;
    }
    iVar1 = (**(code **)(*(int *)this + 4))(*(undefined1 *)param_1);
    if (iVar1 == -1) break;
    param_1 = (undefined4 *)((int)param_1 + 1);
    local_8 = local_8 + 1;
    param_2 = param_2 - 1;
  }
  return local_8;
}



// ============================================================
// FUN_10004fb8 @ 0x10004fb8 36B
// ============================================================

void FUN_10004fb8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_1c [24];
  
  puVar1 = FUN_100055e2(local_1c,0xffffffff);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// ============================================================
// FUN_10004fdc @ 0x10004fdc 36B
// ============================================================

void FUN_10004fdc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_1c [24];
  
  puVar1 = FUN_100055e2(local_1c,0xffffffff);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// ============================================================
// FUN_10005013 @ 0x10005013 101B
// ============================================================

void FUN_10005013(void)

{
  char cVar1;
  undefined *this;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f14c;
  cVar1 = *(char *)(extraout_ECX + 0x12);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (cVar1 != '\0') {
    FUN_1000564c(extraout_ECX);
  }
  this = (undefined *)extraout_ECX[0x11];
  if (this != (undefined *)0x0) {
    FUN_10001290(this,'\x01');
    FUN_1000675f(this);
  }
  FUN_10004e48(extraout_ECX + 0x13);
  *extraout_ECX = &PTR_FUN_1000f184;
  FUN_10004e48(extraout_ECX + 0xd);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10005078 @ 0x10005078 310B
// ============================================================

int __thiscall FUN_10005078(void *this,int param_1)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int local_14;
  char *local_10;
  int local_c;
  char local_5;
  
  if (param_1 == -1) {
    return 0;
  }
  uVar4 = **(uint **)((int)this + 0x20);
  cVar6 = (char)param_1;
  if ((uVar4 != 0) && (uVar4 < **(int **)((int)this + 0x30) + uVar4)) {
    pcVar3 = (char *)FUN_1000563c((int)this);
    *pcVar3 = cVar6;
    return param_1;
  }
  if (*(int **)((int)this + 0x50) == (int *)0x0) {
    return -1;
  }
  if (*(int *)((int)this + 0x38) == 0) {
    uVar4 = FUN_1000819e((int)cVar6,*(int **)((int)this + 0x50));
joined_r0x10005163:
    if (uVar4 != 0xffffffff) {
      return param_1;
    }
  }
  else {
    local_5 = cVar6;
    FUN_1000553b(*(void **)((int)this + 0x44),0,DAT_1000f10c);
    FUN_100054e2(*(void **)((int)this + 0x44),8,'\0');
    pvVar1 = *(void **)((int)this + 0x44);
    FUN_100056eb(pvVar1);
    pvVar2 = *(void **)((int)this + 0x44);
    local_c = *(int *)((int)pvVar1 + 4);
    FUN_100056eb(pvVar2);
    iVar5 = (**(code **)(**(int **)((int)this + 0x38) + 0x14))
                      ((int)this + 0x40,&local_5,&stack0xfffffffc,&local_10,
                       *(undefined4 *)((int)pvVar2 + 4),
                       -(uint)(local_c != 0) & *(int *)((int)pvVar1 + 8) + local_c,&local_14);
    if (iVar5 != 0) {
      if (iVar5 != 1) {
        if (iVar5 != 3) {
          return -1;
        }
        uVar4 = FUN_1000819e((int)local_5,*(int **)((int)this + 0x50));
        goto joined_r0x10005163;
      }
      if (local_10 == &local_5) {
        return -1;
      }
    }
    pvVar1 = *(void **)((int)this + 0x44);
    FUN_100056eb(pvVar1);
    uVar7 = local_14 - *(int *)((int)pvVar1 + 4);
    pvVar1 = *(void **)((int)this + 0x44);
    FUN_100056eb(pvVar1);
    uVar4 = FUN_10008065(*(char **)((int)pvVar1 + 4),1,uVar7,*(int **)((int)this + 0x50));
    if (uVar4 == uVar7) {
      return param_1;
    }
  }
  return -1;
}



// ============================================================
// FUN_100051ae @ 0x100051ae 173B
// ============================================================

uint __thiscall FUN_100051ae(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = **(uint **)((int)this + 0x1c);
  if (((uVar3 == 0) || (uVar3 <= **(uint **)((int)this + 0xc))) ||
     ((param_1 != 0xffffffff && (*(byte *)(uVar3 - 1) != param_1)))) {
    if ((*(int **)((int)this + 0x50) != (int *)0x0) && (param_1 != 0xffffffff)) {
      if (*(int *)((int)this + 0x38) == 0) {
        uVar3 = FUN_100081d9(param_1 & 0xff,*(int **)((int)this + 0x50));
        if (uVar3 != 0xffffffff) {
          return param_1;
        }
      }
      else {
        pvVar1 = *(void **)((int)this + 0x44);
        iVar2 = *(int *)((int)pvVar1 + 8);
        if (iVar2 != 0) {
          FUN_100056eb(pvVar1);
          uVar4 = FUN_1000574c(*(int *)((int)pvVar1 + 4),*(int **)((int)this + 0x50),iVar2);
          if ((char)uVar4 != '\0') {
            FUN_1000553b(*(void **)((int)this + 0x44),0,DAT_1000f10c);
            *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x3c);
            return param_1;
          }
        }
      }
    }
    uVar3 = 0xffffffff;
  }
  else {
    FUN_1000561c((int)this);
    uVar3 = -(uint)(param_1 != 0xffffffff) & param_1;
  }
  return uVar3;
}



// ============================================================
// FUN_1000525b @ 0x1000525b 45B
// ============================================================

uint __fastcall FUN_1000525b(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[0xb])) {
    return (uint)*pbVar1;
  }
  iVar2 = *param_1;
  uVar3 = (**(code **)(iVar2 + 0x14))();
  uVar4 = (**(code **)(iVar2 + 8))(uVar3);
  return uVar4;
}



// ============================================================
// FUN_10005288 @ 0x10005288 277B
// ============================================================

uint __fastcall FUN_10005288(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  void *pvVar1;
  void *pvVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  int local_c;
  byte local_5;
  
  uVar4 = **(uint **)(param_1 + 0x1c);
  if ((uVar4 != 0) && (uVar4 < **(int **)(param_1 + 0x2c) + uVar4)) {
    pbVar3 = (byte *)std::basic_streambuf<char,std::char_traits<char>_>::_Gninc(param_1);
    return (uint)*pbVar3;
  }
  if (*(undefined4 **)(param_1 + 0x50) != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar4 = FUN_10008270(*(undefined4 **)(param_1 + 0x50));
      if (uVar4 != 0xffffffff) {
        return uVar4 & 0xff;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
      FUN_1000553b(*(void **)(param_1 + 0x44),0,DAT_1000f10c);
      while (uVar4 = FUN_10008270(*(undefined4 **)(param_1 + 0x50)), uVar4 != 0xffffffff) {
        FUN_100054e2(*(void **)(param_1 + 0x44),1,(char)uVar4);
        pvVar1 = *(void **)(param_1 + 0x44);
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
        FUN_100056eb(pvVar1);
        pvVar2 = *(void **)(param_1 + 0x44);
        local_c = *(int *)((int)pvVar1 + 4);
        FUN_100056eb(pvVar2);
        iVar5 = (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
                          (param_1 + 0x40,*(undefined4 *)((int)pvVar2 + 4),
                           -(uint)(local_c != 0) & *(int *)((int)pvVar1 + 8) + local_c,local_14,
                           &local_5,&stack0xfffffffc,local_10);
        if (iVar5 == 0) goto LAB_10005394;
        if (iVar5 != 1) {
          if (iVar5 != 3) {
            return 0xffffffff;
          }
          pvVar1 = *(void **)(param_1 + 0x44);
          if (*(int *)((int)pvVar1 + 8) != 0) {
            FUN_100056eb(pvVar1);
            FUN_10007d30((undefined4 *)&local_5,*(undefined4 **)((int)pvVar1 + 4),1);
LAB_10005394:
            return (uint)local_5;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



// ============================================================
// FUN_1000539d @ 0x1000539d 111B
// ============================================================

void __thiscall FUN_1000539d(void *this,undefined4 *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int **)((int)this + 0x50) != (int *)0x0) {
    iVar1 = FUN_100082c3(*(int **)((int)this + 0x50),param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_100082a1(*(char **)((int)this + 0x50),(ulonglong *)&local_c);
      if (iVar1 == 0) {
        local_24[0] = 0;
        local_1c = local_c;
        local_18 = local_8;
        local_14 = *(undefined4 *)((int)this + 0x40);
        puVar2 = local_24;
        goto LAB_100053ff;
      }
    }
  }
  puVar2 = FUN_100055e2(local_24,0xffffffff);
LAB_100053ff:
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// ============================================================
// FUN_1000540c @ 0x1000540c 43B
// ============================================================

int __thiscall FUN_1000540c(void *this,int *param_1,uint param_2)

{
  int iVar1;
  
  if ((*(FILE **)((int)this + 0x50) == (FILE *)0x0) ||
     (iVar1 = FUN_10008394(*(FILE **)((int)this + 0x50),param_1,0,param_2), iVar1 != 0)) {
    this = (void *)0x0;
  }
  return (int)this;
}



// ============================================================
// FUN_1000546f @ 0x1000546f 28B
// ============================================================

undefined4 * __thiscall FUN_1000546f(void *this,byte param_1)

{
  FUN_10004cc2(this);
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_100054aa @ 0x100054aa 28B
// ============================================================

undefined4 * __thiscall FUN_100054aa(void *this,byte param_1)

{
  FUN_10004e99(this);
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_100054c6 @ 0x100054c6 28B
// ============================================================

undefined * __thiscall FUN_100054c6(void *this,byte param_1)

{
  FUN_10005013();
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_100054e2 @ 0x100054e2 89B
// ============================================================

void * __thiscall FUN_100054e2(void *this,uint param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((uint)(DAT_1000f10c - *(int *)((int)this + 8)) <= param_1) {
    FUN_10006577();
  }
  if (param_1 != 0) {
    uVar2 = param_1 + *(int *)((int)this + 8);
    uVar1 = FUN_10001610(this,uVar2,'\0');
    if ((char)uVar1 != '\0') {
      _memset((void *)(*(int *)((int)this + 4) + *(int *)((int)this + 8)),(int)param_2,param_1);
      *(uint *)((int)this + 8) = uVar2;
      *(undefined1 *)(*(int *)((int)this + 4) + uVar2) = 0;
    }
  }
  return this;
}



// ============================================================
// FUN_1000553b @ 0x1000553b 103B
// ============================================================

void * __thiscall FUN_1000553b(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(uint *)((int)this + 8) < param_1) {
    FUN_100066c3();
  }
  FUN_10001740(this);
  uVar1 = *(int *)((int)this + 8) - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(*(int *)((int)this + 4) + param_1);
    FUN_10007500(puVar3,(undefined4 *)((int)puVar3 + param_2),uVar1 - param_2);
    uVar1 = *(int *)((int)this + 8) - param_2;
    uVar2 = FUN_10001610(this,uVar1,'\0');
    if ((char)uVar2 != '\0') {
      *(uint *)((int)this + 8) = uVar1;
      *(undefined1 *)(uVar1 + *(int *)((int)this + 4)) = 0;
    }
  }
  return this;
}



// ============================================================
// FUN_100055a2 @ 0x100055a2 64B
// ============================================================

void __thiscall FUN_100055a2(void *this,undefined4 param_1,char param_2)

{
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined1 *)((int)this + 0x30) = 0x20;
  FUN_10006b65((int)this);
  if (*(int *)((int)this + 0x28) == 0) {
    FUN_1000681b();
  }
  if (param_2 != '\0') {
    FUN_10006b17((int)this);
  }
  return;
}



// ============================================================
// FUN_100055e2 @ 0x100055e2 58B
// ============================================================

undefined4 * __thiscall FUN_100055e2(void *this,undefined4 param_1)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = DAT_1000f2a8;
  *(undefined4 *)((int)this + 0xc) = DAT_1000f2ac;
  FUN_1000676a(&param_1);
  *(undefined4 *)((int)this + 0x10) = DAT_10014a30;
  FUN_10006806();
  return this;
}



// ============================================================
// FUN_1000564c @ 0x1000564c 39B
// ============================================================

void * __fastcall FUN_1000564c(void *param_1)

{
  int iVar1;
  
  if (*(FILE **)((int)param_1 + 0x50) != (FILE *)0x0) {
    iVar1 = FUN_10008608(*(FILE **)((int)param_1 + 0x50));
    if (iVar1 == 0) {
      FUN_10005673(param_1,0,2);
      return param_1;
    }
  }
  return (void *)0x0;
}



// ============================================================
// FUN_10005673 @ 0x10005673 120B
// ============================================================

void __thiscall FUN_10005673(void *this,int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  
  *(bool *)((int)this + 0x48) = param_2 == 1;
  if (param_2 == 0) {
    puVar1 = (uint *)((int)this + 0x4c);
    FUN_10004e48(puVar1);
    if (puVar1 != (uint *)0x0) {
      FUN_10004df4(puVar1);
    }
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  FUN_100064f3((int)this);
  if ((param_1 != 0) && (*(char *)((int)this + 0x48) == '\0')) {
    *(int *)((int)this + 0x1c) = param_1;
    *(int *)((int)this + 0xc) = param_1 + 8;
    *(int *)((int)this + 0x10) = param_1 + 8;
    *(int *)((int)this + 0x20) = param_1;
    *(int *)((int)this + 0x2c) = param_1 + 4;
    *(int *)((int)this + 0x30) = param_1 + 4;
  }
  *(int *)((int)this + 0x50) = param_1;
  *(undefined4 *)((int)this + 0x40) = DAT_10014a2c;
  uVar2 = DAT_10014a2c;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  return;
}



// ============================================================
// FUN_100056eb @ 0x100056eb 44B
// ============================================================

void __fastcall FUN_100056eb(void *param_1)

{
  char cVar1;
  
  if (((*(int *)((int)param_1 + 4) != 0) &&
      (cVar1 = *(char *)(*(int *)((int)param_1 + 4) + -1), cVar1 != '\0')) && (cVar1 != -1)) {
    FUN_10001610(param_1,*(uint *)((int)param_1 + 8),'\0');
  }
  if (*(int *)((int)param_1 + 4) != 0) {
    *(undefined1 *)(*(int *)((int)param_1 + 4) + -1) = 0xff;
  }
  return;
}



// ============================================================
// FUN_10005717 @ 0x10005717 53B
// ============================================================

void * __thiscall FUN_10005717(void *this,undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_10001610(this,param_2,'\x01');
  if ((char)uVar1 != '\0') {
    FUN_10007d30(*(undefined4 **)((int)this + 4),param_1,param_2);
    *(uint *)((int)this + 8) = param_2;
    *(undefined1 *)(*(int *)((int)this + 4) + param_2) = 0;
  }
  return this;
}



// ============================================================
// FUN_1000574c @ 0x1000574c 77B
// ============================================================

uint __cdecl FUN_1000574c(int param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = param_3 == 0;
  iVar3 = param_1 + param_3;
  if (!bVar4) {
    do {
      pbVar1 = (byte *)(iVar3 + -1);
      iVar3 = iVar3 + -1;
      param_1 = FUN_100081d9((uint)*pbVar1,param_2);
      if (param_1 == 0xffffffff) break;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar4 = param_3 == 0;
  }
  if (bVar4) {
    uVar2 = CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  else {
    if (param_3 == 0) {
      iVar3 = 1;
      do {
        param_1 = FUN_10008270(param_2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar2 = param_1 & 0xffffff00;
  }
  return uVar2;
}



// ============================================================
// FUN_100058e6 @ 0x100058e6 21B
// ============================================================

void __fastcall FUN_100058e6(int *param_1)

{
  *(undefined ***)(*(int *)(*param_1 + 4) + -8 + (int)(param_1 + 2)) = &PTR_LAB_1000f1bc;
  FUN_10005c2a(param_1 + 2);
  return;
}



// ============================================================
// FUN_1000592a @ 0x1000592a 21B
// ============================================================

void __fastcall FUN_1000592a(int *param_1)

{
  *(undefined ***)(*(int *)(*param_1 + 4) + -4 + (int)(param_1 + 1)) = &PTR_LAB_1000f1c4;
  FUN_10005c2a(param_1 + 1);
  return;
}



// ============================================================
// FUN_1000599d @ 0x1000599d 385B
// ============================================================

undefined4 FUN_1000599d(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar2;
  
  FUN_10007d0c();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_1000676a(unaff_EBP + -0x10);
  bVar2 = DAT_100112c4 < 0;
  if (bVar2) {
    DAT_100112c4 = 1;
  }
  else {
    DAT_100112c4 = DAT_100112c4 + 1;
  }
  FUN_10006806();
  if (bVar2) {
    *(undefined **)(unaff_EBP + -0x10) = &DAT_10014540;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_10005cfc();
    *(undefined **)(unaff_EBP + -0x10) = &DAT_100144e8;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_10005cfc();
    *(undefined **)(unaff_EBP + -0x10) = &DAT_100145d0;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_10005cfc();
    *(int **)(unaff_EBP + -0x10) = &DAT_100144a8;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    FUN_10005c35();
    *(undefined **)(unaff_EBP + -0x10) = &DAT_10014598;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_10005b61();
    *(undefined **)(&DAT_100144d4 + *(int *)(DAT_100144a8 + 4)) = &DAT_10014598;
    *(int **)(unaff_EBP + -0x10) = &DAT_10014430;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    FUN_10005b61();
    iVar1 = DAT_10014430;
    *(int **)(unaff_EBP + -0x10) = &DAT_10014470;
    *(undefined **)(&DAT_1001445c + *(int *)(iVar1 + 4)) = &DAT_10014598;
    *(uint *)(&DAT_1001443c + *(int *)(DAT_10014430 + 4)) =
         *(uint *)(&DAT_1001443c + *(int *)(DAT_10014430 + 4)) | 2;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_10005b61();
    *(undefined **)(&DAT_1001449c + *(int *)(DAT_10014470 + 4)) = &DAT_10014598;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + -0x14);
}



// ============================================================
// FUN_10005b1e @ 0x10005b1e 67B
// ============================================================

void FUN_10005b1e(void)

{
  bool bVar1;
  undefined1 local_8 [4];
  
  FUN_1000676a(local_8);
  DAT_100112c4 = DAT_100112c4 + -1;
  bVar1 = DAT_100112c4 == 0;
  FUN_10006806();
  if (bVar1) {
    FUN_10004c78((int *)&DAT_10014598);
    FUN_10004c78(&DAT_10014430);
    FUN_10004c78(&DAT_10014470);
  }
  return;
}



// ============================================================
// FUN_10005b61 @ 0x10005b61 106B
// ============================================================

int * FUN_10005b61(void)

{
  char cVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    *extraout_ECX = (int)&DAT_1000f1d0;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_1000f1cc;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  cVar1 = *(char *)(unaff_EBP + 0x10);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000f1c4;
  if (cVar1 != '\0') {
    FUN_100063d3((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),
                 *(undefined4 *)(unaff_EBP + 8),(char)*(undefined4 *)(unaff_EBP + 0xc));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



// ============================================================
// FUN_10005bcb @ 0x10005bcb 95B
// ============================================================

int * FUN_10005bcb(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000f1d0;
    extraout_ECX[10] = 0;
    extraout_ECX[1] = (int)&PTR_FUN_1000f1cc;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000f1c4;
  FUN_10006b17(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



// ============================================================
// FUN_10005c35 @ 0x10005c35 104B
// ============================================================

int * FUN_10005c35(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    *extraout_ECX = (int)&DAT_1000f1d8;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_1000f1cc;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  extraout_ECX[1] = 0;
  uVar1 = *(undefined4 *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000f1bc;
  FUN_100063d3((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),uVar2,(char)uVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



// ============================================================
// FUN_10005c9d @ 0x10005c9d 95B
// ============================================================

int * FUN_10005c9d(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1000f1d8;
    extraout_ECX[0xb] = 0;
    extraout_ECX[2] = (int)&PTR_FUN_1000f1cc;
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1000f1bc;
  FUN_10006b17(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



// ============================================================
// FUN_10005cfc @ 0x10005cfc 96B
// ============================================================

undefined4 * FUN_10005cfc(void)

{
  undefined4 uVar1;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(undefined4 **)(unaff_EBP + -0x10) = this;
  FUN_10004df4(this + 0xd);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *this = &PTR_FUN_1000f21c;
  FUN_100064f3((int)this);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_10004df4(this + 0x13);
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *this = &PTR_FUN_1000f1e4;
  FUN_1000649d(this,uVar1,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}



// ============================================================
// uflow @ 0x10005d76 33B
// ============================================================

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual unsigned short __thiscall std::basic_streambuf<unsigned short,struct
   std::char_traits<unsigned short> >::uflow(void)
    protected: virtual unsigned short __thiscall std::basic_streambuf<wchar_t,struct
   std::char_traits<wchar_t> >::uflow(void)
   
   Library: Visual Studio 2003 Release */

undefined2 __fastcall uflow(int *param_1)

{
  short sVar1;
  undefined2 *puVar2;
  
  sVar1 = (**(code **)(*param_1 + 0x10))();
  if (sVar1 == -1) {
    return 0xffff;
  }
  puVar2 = (undefined2 *)Gninc((int)param_1);
  return *puVar2;
}



// ============================================================
// FUN_10005d97 @ 0x10005d97 135B
// ============================================================

int __thiscall FUN_10005d97(void *this,short *param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    while( true ) {
      if (param_2 < 1) {
        return local_8;
      }
      psVar5 = (short *)**(undefined4 **)((int)this + 0x1c);
      if ((psVar5 == (short *)0x0) || (iVar3 = (**(int **)((int)this + 0x2c) << 1) >> 1, iVar3 < 1))
      break;
      psVar1 = param_1;
      iVar4 = iVar3;
      if (param_2 < iVar3) {
        iVar3 = param_2;
        iVar4 = param_2;
      }
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *psVar1 = *psVar5;
        psVar5 = psVar5 + 1;
        psVar1 = psVar1 + 1;
      }
      local_8 = local_8 + iVar4;
      param_2 = param_2 - iVar4;
      param_1 = param_1 + iVar4;
      FUN_1000641d(this,iVar4);
    }
    sVar2 = (**(code **)(*(int *)this + 0x14))();
    if (sVar2 == -1) break;
    *param_1 = sVar2;
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
    param_2 = param_2 + -1;
  }
  return local_8;
}



// ============================================================
// FUN_10005e1e @ 0x10005e1e 136B
// ============================================================

int __thiscall FUN_10005e1e(void *this,undefined2 *param_1,undefined4 *param_2)

{
  undefined2 *puVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    while( true ) {
      if ((int)param_2 < 1) {
        return local_8;
      }
      puVar3 = *(undefined4 **)((int)this + 0x20);
      puVar5 = (undefined2 *)*puVar3;
      if ((puVar5 == (undefined2 *)0x0) ||
         (puVar3 = (undefined4 *)((**(int **)((int)this + 0x30) << 1) >> 1), (int)puVar3 < 1))
      break;
      puVar1 = param_1;
      puVar4 = puVar3;
      if ((int)param_2 < (int)puVar3) {
        puVar3 = param_2;
        puVar4 = param_2;
      }
      for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)((int)puVar3 + -1)) {
        *puVar5 = *puVar1;
        puVar5 = puVar5 + 1;
        puVar1 = puVar1 + 1;
      }
      local_8 = local_8 + (int)puVar4;
      param_2 = (undefined4 *)((int)param_2 - (int)puVar4);
      param_1 = param_1 + (int)puVar4;
      FUN_10006452(this,(int)puVar4);
    }
    sVar2 = (**(code **)(*(int *)this + 4))(CONCAT22((short)((uint)puVar3 >> 0x10),*param_1));
    if (sVar2 == -1) break;
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
    param_2 = (undefined4 *)((int)param_2 + -1);
  }
  return local_8;
}



// ============================================================
// FUN_10005eb4 @ 0x10005eb4 101B
// ============================================================

void FUN_10005eb4(void)

{
  char cVar1;
  undefined *this;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f1e4;
  cVar1 = *(char *)(extraout_ECX + 0x12);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (cVar1 != '\0') {
    FUN_10006476(extraout_ECX);
  }
  this = (undefined *)extraout_ECX[0x11];
  if (this != (undefined *)0x0) {
    FUN_10001290(this,'\x01');
    FUN_1000675f(this);
  }
  FUN_10004e48(extraout_ECX + 0x13);
  *extraout_ECX = &PTR_FUN_1000f21c;
  FUN_10004e48(extraout_ECX + 0xd);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10005f19 @ 0x10005f19 328B
// ============================================================

uint __thiscall FUN_10005f19(void *this,uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  short sVar3;
  uint in_EAX;
  short *psVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  sVar3 = (short)param_1;
  if (sVar3 == -1) {
    return in_EAX & 0xffff0000;
  }
  uVar5 = **(uint **)((int)this + 0x20);
  if ((uVar5 != 0) && (uVar5 < uVar5 + **(int **)((int)this + 0x30) * 2)) {
    psVar4 = (short *)FUN_10006466((int)this);
    *psVar4 = sVar3;
    return CONCAT22((short)((uint)psVar4 >> 0x10),sVar3);
  }
  puVar7 = (undefined4 *)0x0;
  if (*(int **)((int)this + 0x50) == (int *)0x0) goto LAB_10005f66;
  if (*(int *)((int)this + 0x38) == 0) {
    uVar5 = FUN_1000870b(param_1,*(int **)((int)this + 0x50));
    sVar3 = (short)uVar5;
LAB_10006012:
    if (sVar3 != -1) {
      return param_1;
    }
  }
  else {
    local_8 = param_1;
    FUN_1000553b(*(void **)((int)this + 0x44),0,DAT_1000f10c);
    FUN_100054e2(*(void **)((int)this + 0x44),8,'\0');
    pvVar1 = *(void **)((int)this + 0x44);
    FUN_100056eb(pvVar1);
    pvVar2 = *(void **)((int)this + 0x44);
    local_c = *(int *)((int)pvVar1 + 4);
    FUN_100056eb(pvVar2);
    iVar6 = (**(code **)(**(int **)((int)this + 0x38) + 0x14))
                      ((int)this + 0x40,&local_8,(int)&local_8 + 2,&local_10,
                       *(undefined4 *)((int)pvVar2 + 4),
                       -(uint)(local_c != 0) & *(int *)((int)pvVar1 + 8) + local_c,&local_14);
    if (iVar6 != 0) {
      if (iVar6 != 1) {
        puVar7 = (undefined4 *)(iVar6 + -3);
        if (puVar7 != (undefined4 *)0x0) {
LAB_10005f66:
          return CONCAT22((short)((uint)puVar7 >> 0x10),0xffff);
        }
        uVar5 = FUN_1000870b(local_8,*(int **)((int)this + 0x50));
        sVar3 = (short)uVar5;
        goto LAB_10006012;
      }
      puVar7 = &local_8;
      if (local_10 == puVar7) goto LAB_10005f66;
    }
    pvVar1 = *(void **)((int)this + 0x44);
    FUN_100056eb(pvVar1);
    uVar8 = local_14 - *(int *)((int)pvVar1 + 4);
    pvVar1 = *(void **)((int)this + 0x44);
    FUN_100056eb(pvVar1);
    uVar5 = FUN_10008065(*(char **)((int)pvVar1 + 4),1,uVar8,*(int **)((int)this + 0x50));
    if (uVar5 == uVar8) {
      return param_1;
    }
  }
  return 0xffff;
}



// ============================================================
// FUN_10006061 @ 0x10006061 183B
// ============================================================

uint __thiscall FUN_10006061(void *this,uint param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  short sVar5;
  
  uVar3 = **(uint **)((int)this + 0x1c);
  sVar5 = (short)param_1;
  if (((uVar3 == 0) || (uVar3 <= **(uint **)((int)this + 0xc))) ||
     ((sVar5 != -1 && (*(short *)(uVar3 - 2) != sVar5)))) {
    piVar4 = *(int **)((int)this + 0x50);
    if ((piVar4 != (int *)0x0) && (sVar5 != -1)) {
      if (*(int *)((int)this + 0x38) == 0) {
        uVar3 = FUN_1000882e(param_1,piVar4);
        if ((short)uVar3 != -1) {
          return param_1;
        }
        return 0xffff;
      }
      pvVar1 = *(void **)((int)this + 0x44);
      iVar2 = *(int *)((int)pvVar1 + 8);
      if (iVar2 != 0) {
        FUN_100056eb(pvVar1);
        piVar4 = (int *)FUN_1000574c(*(int *)((int)pvVar1 + 4),*(int **)((int)this + 0x50),iVar2);
        if ((char)piVar4 != '\0') {
          FUN_1000553b(*(void **)((int)this + 0x44),0,DAT_1000f10c);
          *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x3c);
          return CONCAT22((short)((uint)*(undefined4 *)((int)this + 0x3c) >> 0x10),sVar5);
        }
      }
    }
    uVar3 = CONCAT22((short)((uint)piVar4 >> 0x10),0xffff);
  }
  else {
    FUN_10006431((int)this);
    uVar3 = -(uint)(sVar5 != -1) & param_1;
  }
  return uVar3;
}



// ============================================================
// FUN_10006118 @ 0x10006118 46B
// ============================================================

undefined4 __fastcall FUN_10006118(int *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined2 **)param_1[7];
  if ((puVar1 != (undefined2 *)0x0) && (puVar1 < puVar1 + *(int *)param_1[0xb])) {
    return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
  }
  iVar2 = *param_1;
  uVar3 = (**(code **)(iVar2 + 0x14))();
  uVar3 = (**(code **)(iVar2 + 8))(uVar3);
  return uVar3;
}



// ============================================================
// FUN_10006146 @ 0x10006146 286B
// ============================================================

short __fastcall FUN_10006146(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  int local_c;
  short local_6;
  
  uVar4 = **(uint **)(param_1 + 0x1c);
  if ((uVar4 == 0) || (uVar4 + **(int **)(param_1 + 0x2c) * 2 <= uVar4)) {
    if (*(int **)(param_1 + 0x50) == (int *)0x0) {
LAB_1000617c:
      local_6 = -1;
    }
    else if (*(int *)(param_1 + 0x38) == 0) {
      local_6 = FUN_10008945(*(int **)(param_1 + 0x50));
      if (local_6 == -1) {
        local_6 = -1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
      FUN_1000553b(*(void **)(param_1 + 0x44),0,DAT_1000f10c);
      do {
        do {
          uVar4 = FUN_10008270(*(undefined4 **)(param_1 + 0x50));
          if (uVar4 == 0xffffffff) goto LAB_1000617c;
          FUN_100054e2(*(void **)(param_1 + 0x44),1,(char)uVar4);
          pvVar1 = *(void **)(param_1 + 0x44);
          *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x3c);
          FUN_100056eb(pvVar1);
          pvVar2 = *(void **)(param_1 + 0x44);
          local_c = *(int *)((int)pvVar1 + 4);
          FUN_100056eb(pvVar2);
          iVar5 = (**(code **)(**(int **)(param_1 + 0x38) + 0x10))
                            (param_1 + 0x40,*(undefined4 *)((int)pvVar2 + 4),
                             -(uint)(local_c != 0) & *(int *)((int)pvVar1 + 8) + local_c,local_14,
                             &local_6,&stack0xfffffffc,local_10);
          if (iVar5 == 0) {
            return local_6;
          }
        } while (iVar5 == 1);
        if (iVar5 != 3) goto LAB_1000617c;
        pvVar1 = *(void **)(param_1 + 0x44);
      } while (*(uint *)((int)pvVar1 + 8) < 2);
      FUN_100056eb(pvVar1);
      FUN_10007d30((undefined4 *)&local_6,*(undefined4 **)((int)pvVar1 + 4),2);
    }
  }
  else {
    psVar3 = (short *)Gninc(param_1);
    local_6 = *psVar3;
  }
  return local_6;
}



// ============================================================
// FUN_10006264 @ 0x10006264 175B
// ============================================================

void __thiscall
FUN_10006264(void *this,undefined4 *param_1,int param_2,undefined4 param_3,LONG param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 local_c;
  
  iVar2 = param_2;
  local_c._0_4_ = param_4;
  local_c._4_4_ = param_5;
  if (*(int **)((int)this + 0x50) != (int *)0x0) {
    iVar1 = FUN_1000837c(*(int **)((int)this + 0x50),(LONG *)&local_c);
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        iVar2 = FUN_100082c3(*(int **)((int)this + 0x50),iVar2,1);
        if (iVar2 != 0) goto LAB_100062f7;
      }
      iVar2 = FUN_100082a1(*(char **)((int)this + 0x50),&local_c);
      if (iVar2 == 0) {
        if (*(void **)((int)this + 0x44) != (void *)0x0) {
          *(undefined4 *)((int)this + 0x40) = param_6;
          FUN_1000553b(*(void **)((int)this + 0x44),0,DAT_1000f10c);
        }
        param_2 = 0;
        param_4 = (LONG)local_c;
        param_5 = local_c._4_4_;
        param_6 = *(undefined4 *)((int)this + 0x40);
        piVar3 = &param_2;
        goto LAB_10006306;
      }
    }
  }
LAB_100062f7:
  piVar3 = FUN_100055e2(&param_2,0xffffffff);
LAB_10006306:
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *piVar3;
    piVar3 = piVar3 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// ============================================================
// FUN_10006313 @ 0x10006313 46B
// ============================================================

int __thiscall FUN_10006313(void *this,int *param_1,int param_2)

{
  int iVar1;
  
  if ((*(FILE **)((int)this + 0x50) == (FILE *)0x0) ||
     (iVar1 = FUN_10008394(*(FILE **)((int)this + 0x50),param_1,0,param_2 * 2), iVar1 != 0)) {
    this = (void *)0x0;
  }
  return (int)this;
}



// ============================================================
// FUN_10006360 @ 0x10006360 28B
// ============================================================

undefined4 * __thiscall FUN_10006360(void *this,byte param_1)

{
  FUN_10005c2a(this);
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_1000639b @ 0x1000639b 28B
// ============================================================

undefined4 * __thiscall FUN_1000639b(void *this,byte param_1)

{
  FUN_10005d5c(this);
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_100063b7 @ 0x100063b7 28B
// ============================================================

undefined * __thiscall FUN_100063b7(void *this,byte param_1)

{
  FUN_10005eb4();
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_100063d3 @ 0x100063d3 74B
// ============================================================

void __thiscall FUN_100063d3(void *this,undefined4 param_1,char param_2)

{
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = param_1;
  uVar1 = FUN_10007006(0x20);
  *(short *)((int)this + 0x30) = (short)uVar1;
  FUN_10006b65((int)this);
  if (*(int *)((int)this + 0x28) == 0) {
    FUN_1000681b();
  }
  if (param_2 != '\0') {
    FUN_10006b17((int)this);
  }
  return;
}



// ============================================================
// FUN_1000641d @ 0x1000641d 20B
// ============================================================

void __thiscall FUN_1000641d(void *this,int param_1)

{
  **(int **)((int)this + 0x2c) = **(int **)((int)this + 0x2c) - param_1;
  **(int **)((int)this + 0x1c) = **(int **)((int)this + 0x1c) + param_1 * 2;
  return;
}



// ============================================================
// FUN_10006452 @ 0x10006452 20B
// ============================================================

void __thiscall FUN_10006452(void *this,int param_1)

{
  **(int **)((int)this + 0x30) = **(int **)((int)this + 0x30) - param_1;
  **(int **)((int)this + 0x20) = **(int **)((int)this + 0x20) + param_1 * 2;
  return;
}



// ============================================================
// FUN_10006476 @ 0x10006476 39B
// ============================================================

void * __fastcall FUN_10006476(void *param_1)

{
  int iVar1;
  
  if (*(FILE **)((int)param_1 + 0x50) != (FILE *)0x0) {
    iVar1 = FUN_10008608(*(FILE **)((int)param_1 + 0x50));
    if (iVar1 == 0) {
      FUN_1000649d(param_1,0,2);
      return param_1;
    }
  }
  return (void *)0x0;
}



// ============================================================
// FUN_1000649d @ 0x1000649d 86B
// ============================================================

void __thiscall FUN_1000649d(void *this,undefined4 param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  
  *(bool *)((int)this + 0x48) = param_2 == 1;
  if (param_2 == 0) {
    puVar1 = (uint *)((int)this + 0x4c);
    FUN_10004e48(puVar1);
    if (puVar1 != (uint *)0x0) {
      FUN_10004df4(puVar1);
    }
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  FUN_100064f3((int)this);
  *(undefined4 *)((int)this + 0x50) = param_1;
  *(undefined4 *)((int)this + 0x40) = DAT_10014a24;
  uVar2 = DAT_10014a24;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar2;
  return;
}



// ============================================================
// FUN_100064f3 @ 0x100064f3 66B
// ============================================================

void __fastcall FUN_100064f3(int param_1)

{
  *(int *)(param_1 + 0x1c) = param_1 + 0x14;
  *(int *)(param_1 + 0x20) = param_1 + 0x18;
  *(int *)(param_1 + 0x2c) = param_1 + 0x24;
  *(int *)(param_1 + 0xc) = param_1 + 4;
  *(int *)(param_1 + 0x30) = param_1 + 0x28;
  *(undefined4 **)(param_1 + 0x10) = (undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x30) = 0;
  **(undefined4 **)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 0x1c) = 0;
  **(undefined4 **)(param_1 + 0x2c) = 0;
  return;
}



// ============================================================
// FUN_10006577 @ 0x10006577 89B
// ============================================================

void FUN_10006577(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_10001290((void *)(unaff_EBP + -0x20),'\0');
  sVar1 = _strlen("string too long");
  FUN_10005717((void *)(unaff_EBP + -0x20),(undefined4 *)"string too long",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100065d1();
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_LAB_1000f254;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_100105a0);
}



// ============================================================
// FUN_100065d1 @ 0x100065d1 100B
// ============================================================

undefined4 * FUN_100065d1(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  undefined4 *this_00;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(undefined4 **)(unaff_EBP + -0x14) = this_00;
  *(undefined4 **)(unaff_EBP + -0x10) = &DAT_1001417c;
  FUN_100078da(this_00,(undefined4 *)(unaff_EBP + -0x10));
  puVar1 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = this_00 + 3;
  *(undefined1 *)this = *puVar1;
  FUN_10001290(this,'\0');
  FUN_100013f0(this,puVar1,0,DAT_1000f10c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *this_00 = &PTR_FUN_1000f274;
  return this_00;
}



// ============================================================
// FUN_10006635 @ 0x10006635 61B
// ============================================================

void FUN_10006635(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_1000f274;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10001290(this + 0xc,'\x01');
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10006672 @ 0x10006672 29B
// ============================================================

void __fastcall FUN_10006672(int param_1)

{
  undefined1 local_20 [28];
  
  FUN_100066ab(local_20,param_1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_100105a0);
}



// ============================================================
// FUN_100066ab @ 0x100066ab 24B
// ============================================================

undefined4 * __thiscall FUN_100066ab(void *this,int param_1)

{
  FUN_10003020(this,param_1);
  *(undefined ***)this = &PTR_LAB_1000f254;
  return this;
}



// ============================================================
// FUN_100066c3 @ 0x100066c3 89B
// ============================================================

void FUN_100066c3(void)

{
  size_t sVar1;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_10001290((void *)(unaff_EBP + -0x20),'\0');
  sVar1 = _strlen("invalid string position");
  FUN_10005717((void *)(unaff_EBP + -0x20),(undefined4 *)"invalid string position",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100065d1();
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_FUN_1000f284;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_10010150);
}



// ============================================================
// FUN_1000676a @ 0x1000676a 126B
// ============================================================

undefined4 __fastcall FUN_1000676a(undefined4 param_1)

{
  LONG LVar1;
  
  if (DAT_10014640 != 2) {
    if (DAT_10014640 == 0) {
      LVar1 = InterlockedExchange(&DAT_10014640,1);
      if (LVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_10014628);
        FUN_100070c5(&LAB_100067e8);
        DAT_10014640 = 2;
        goto LAB_100067dc;
      }
      if (LVar1 == 2) {
        DAT_10014640 = 2;
      }
    }
    while (DAT_10014640 == 1) {
      Sleep(1);
    }
    if (DAT_10014640 != 2) {
      return param_1;
    }
  }
LAB_100067dc:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10014628);
  return param_1;
}



// ============================================================
// FUN_10006806 @ 0x10006806 21B
// ============================================================

void FUN_10006806(void)

{
  if (DAT_10014640 == 2) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10014628);
  }
  return;
}



// ============================================================
// FUN_1000681b @ 0x1000681b 155B
// ============================================================

void FUN_1000681b(void)

{
  uint uVar1;
  size_t sVar2;
  int extraout_ECX;
  int unaff_EBP;
  char *_Str;
  
  FUN_10007d0c();
  uVar1 = *(uint *)(unaff_EBP + 8) & 7;
  *(uint *)(extraout_ECX + 4) = uVar1;
  uVar1 = *(uint *)(extraout_ECX + 8) & uVar1;
  if (uVar1 == 0) {
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  if (*(char *)(unaff_EBP + 0xc) != '\0') {
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(0,0);
  }
  if ((uVar1 & 4) == 0) {
    _Str = "ios::failbit set";
    if ((uVar1 & 2) == 0) {
      _Str = "ios::eofbit set";
    }
  }
  else {
    _Str = "ios::badbit set";
  }
  *(undefined1 *)(unaff_EBP + -0x1c) = *(undefined1 *)(unaff_EBP + 0xf);
  FUN_10001290((void *)(unaff_EBP + -0x1c),'\0');
  sVar2 = _strlen(_Str);
  FUN_10005717((void *)(unaff_EBP + -0x1c),(undefined4 *)_Str,sVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_100068b7();
  *(undefined ***)(unaff_EBP + -0x38) = &PTR_LAB_1000f2b4;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x38,&DAT_100106a0);
}



// ============================================================
// FUN_100068b7 @ 0x100068b7 100B
// ============================================================

undefined4 * FUN_100068b7(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  undefined4 *this_00;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(undefined4 **)(unaff_EBP + -0x14) = this_00;
  *(undefined4 **)(unaff_EBP + -0x10) = &DAT_1001417c;
  FUN_100078da(this_00,(undefined4 *)(unaff_EBP + -0x10));
  puVar1 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = this_00 + 3;
  *(undefined1 *)this = *puVar1;
  FUN_10001290(this,'\0');
  FUN_100013f0(this,puVar1,0,DAT_1000f10c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *this_00 = &PTR_FUN_1000f2f8;
  return this_00;
}



// ============================================================
// FUN_10006928 @ 0x10006928 29B
// ============================================================

void FUN_10006928(void)

{
  undefined1 local_20 [28];
  
  FUN_1000699e();
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_10010710);
}



// ============================================================
// FUN_10006945 @ 0x10006945 61B
// ============================================================

void FUN_10006945(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_1000f2f8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10001290(this + 0xc,'\x01');
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10006982 @ 0x10006982 28B
// ============================================================

undefined * __thiscall FUN_10006982(void *this,byte param_1)

{
  FUN_10006945();
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_1000699e @ 0x1000699e 93B
// ============================================================

undefined4 * FUN_1000699e(void)

{
  undefined4 *this;
  undefined1 uVar1;
  int iVar2;
  undefined4 *this_00;
  int unaff_EBP;
  
  FUN_10007d0c();
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 **)(unaff_EBP + -0x10) = this_00;
  FUN_10007917(this_00,iVar2);
  uVar1 = *(undefined1 *)(iVar2 + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = this_00 + 3;
  *(undefined1 *)this = uVar1;
  FUN_10001290(this,'\0');
  FUN_100013f0(this,(void *)(iVar2 + 0xc),0,DAT_1000f10c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *this_00 = &PTR_FUN_1000f2f8;
  return this_00;
}



// ============================================================
// FUN_100069fb @ 0x100069fb 61B
// ============================================================

void FUN_100069fb(void)

{
  exception *this;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_1000f2f8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10001290(this + 0xc,'\x01');
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10006a38 @ 0x10006a38 29B
// ============================================================

void FUN_10006a38(void)

{
  undefined4 local_20 [7];
  
  FUN_10006a71(local_20);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_20,&DAT_100106a0);
}



// ============================================================
// FUN_10006a71 @ 0x10006a71 24B
// ============================================================

undefined4 * __fastcall FUN_10006a71(undefined4 *param_1)

{
  FUN_1000699e();
  *param_1 = &PTR_LAB_1000f2b4;
  return param_1;
}



// ============================================================
// FUN_10006a89 @ 0x10006a89 80B
// ============================================================

void FUN_10006a89(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f308;
  iVar1 = extraout_ECX[9];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 == 0) ||
     ((&DAT_1001466c)[iVar1] = (&DAT_1001466c)[iVar1] + -1,
     (char)(&DAT_1001466c)[extraout_ECX[9]] < '\x01')) {
    FUN_10006b9d(extraout_ECX);
  }
  FUN_10004e48(extraout_ECX + 8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10006ad9 @ 0x10006ad9 28B
// ============================================================

undefined * __thiscall FUN_10006ad9(void *this,byte param_1)

{
  FUN_10006a89();
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_10006af5 @ 0x10006af5 34B
// ============================================================

void __thiscall FUN_10006af5(void *this,undefined4 param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = *(undefined4 **)((int)this + 0x1c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    (*(code *)puVar1[2])(param_1,this,puVar1[1]);
  }
  return;
}



// ============================================================
// FUN_10006b17 @ 0x10006b17 78B
// ============================================================

void __fastcall FUN_10006b17(int param_1)

{
  uint uVar1;
  int local_8;
  
  local_8 = param_1;
  FUN_1000676a(&local_8);
  uVar1 = *(uint *)(param_1 + 0x24);
  while (uVar1 < 8) {
    if ((*(int *)(&DAT_10014648 + *(int *)(param_1 + 0x24) * 4) == 0) ||
       (*(int *)(&DAT_10014648 + *(int *)(param_1 + 0x24) * 4) == param_1)) break;
    uVar1 = *(int *)(param_1 + 0x24) + 1;
    *(uint *)(param_1 + 0x24) = uVar1;
  }
  *(int *)(&DAT_10014648 + *(int *)(param_1 + 0x24) * 4) = param_1;
  (&DAT_1001466c)[*(int *)(param_1 + 0x24)] = (&DAT_1001466c)[*(int *)(param_1 + 0x24)] + '\x01';
  FUN_10006806();
  return;
}



// ============================================================
// FUN_10006b65 @ 0x10006b65 56B
// ============================================================

void __fastcall FUN_10006b65(int param_1)

{
  if ((undefined4 *)(param_1 + 0x20) != (undefined4 *)0x0) {
    FUN_10004df4((undefined4 *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x201;
  *(undefined4 *)(param_1 + 0x10) = 6;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_1000681b();
  return;
}



// ============================================================
// FUN_10006b9d @ 0x10006b9d 66B
// ============================================================

void __fastcall FUN_10006b9d(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_10006af5(param_1,0);
  puVar2 = *(undefined4 **)((int)param_1 + 0x18);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_1000675f((undefined *)puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0x18) = 0;
  puVar2 = *(undefined4 **)((int)param_1 + 0x1c);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_1000675f((undefined *)puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)((int)param_1 + 0x1c) = 0;
  return;
}



// ============================================================
// FUN_10006c00 @ 0x10006c00 202B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_10006c00(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  size_t sVar3;
  int unaff_EBP;
  
  FUN_10007d0c();
  FUN_1000676a(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (DAT_10014680 == (undefined4 *)0x0) {
    pvVar2 = operator_new(0x28);
    *(void **)(unaff_EBP + -0x14) = pvVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (pvVar2 == (void *)0x0) {
      DAT_10014680 = (undefined4 *)0x0;
    }
    else {
      DAT_10014680 = FUN_10006d14();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_100070c5(FUN_10006cca);
    DAT_10014680[4] = 0x3f;
    puVar1 = DAT_10014680 + 6;
    sVar3 = _strlen("C");
    FUN_10005717(puVar1,(undefined4 *)&DAT_1000f314,sVar3);
    DAT_1001467c = DAT_10014680;
    FUN_10004e22((int)DAT_10014680);
    _DAT_10014678 = DAT_1001467c;
  }
  puVar1 = DAT_10014680;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_10006806();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}



// ============================================================
// FUN_10006cca @ 0x10006cca 74B
// ============================================================

void FUN_10006cca(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_10007d0c();
  uVar3 = extraout_ECX;
  FUN_1000676a(unaff_EBP + -0x10);
  uVar1 = DAT_10014680;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (uVar1 != 0) {
    puVar2 = (undefined4 *)FUN_10004e60(uVar1);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1,uVar3);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_10006806();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



// ============================================================
// FUN_10006d14 @ 0x10006d14 114B
// ============================================================

undefined4 * FUN_10006d14(void)

{
  undefined4 *this;
  undefined1 uVar1;
  size_t sVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_10007d0c();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = 1;
  *extraout_ECX = &PTR_LAB_1000f324;
  *(undefined1 *)(extraout_ECX + 5) = *(undefined1 *)(unaff_EBP + 8);
  uVar1 = *(undefined1 *)(unaff_EBP + 0xb);
  this = extraout_ECX + 6;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  extraout_ECX[4] = 0;
  *(undefined1 *)this = uVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_10001290(this,'\0');
  sVar2 = _strlen("*");
  FUN_10005717(this,(undefined4 *)&DAT_1000f310,sVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_1000f31c;
  return extraout_ECX;
}



// ============================================================
// FUN_10006daa @ 0x10006daa 28B
// ============================================================

undefined * __thiscall FUN_10006daa(void *this,byte param_1)

{
  FUN_10006dc6();
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_10006dc6 @ 0x10006dc6 136B
// ============================================================

void FUN_10006dc6(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  int iVar3;
  
  FUN_10007d0c();
  *(undefined4 **)(unaff_EBP + -0x14) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_1000f31c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_1000676a(unaff_EBP + -0x10);
  iVar3 = extraout_ECX[3];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    uVar1 = *(uint *)(extraout_ECX[2] + iVar3 * 4);
    if (uVar1 != 0) {
      puVar2 = (undefined4 *)FUN_10004e60(uVar1);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  FUN_10008a59((undefined *)extraout_ECX[2]);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_10006806();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_10001290(extraout_ECX + 6,'\x01');
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_1000f324;
  return;
}



// ============================================================
// FUN_10006e90 @ 0x10006e90 99B
// ============================================================

uint __cdecl FUN_10006e90(LPWSTR param_1,byte *param_2,uint param_3,byte *param_4,int *param_5)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_10014da0);
  bVar2 = DAT_10014d9c != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_10014da0);
    FUN_10008c91(0x13);
  }
  uVar1 = FUN_10006ef3(param_1,param_2,param_3,param_4,param_5);
  if (bVar2) {
    FUN_10008cf2(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_10014da0);
  }
  return uVar1;
}



// ============================================================
// FUN_10006ef3 @ 0x10006ef3 275B
// ============================================================

uint __cdecl FUN_10006ef3(LPWSTR param_1,byte *param_2,uint param_3,byte *param_4,int *param_5)

{
  byte bVar1;
  UINT CodePage;
  int iVar2;
  DWORD *pDVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      CodePage = DAT_1001474c;
      iVar2 = DAT_1001473c;
      if (param_5 != (int *)0x0) {
        CodePage = param_5[1];
        iVar2 = *param_5;
      }
      if (iVar2 == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if (*(int *)param_4 == 0) {
        if ((PTR_DAT_1001193c[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
          iVar2 = MultiByteToWideChar(CodePage,9,(LPCSTR)param_2,1,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return 1;
          }
        }
        else {
          if (param_3 < DAT_10011cb0) {
            *param_4 = bVar1;
            return 0xfffffffe;
          }
          if ((1 < (int)DAT_10011cb0) &&
             (iVar2 = MultiByteToWideChar(CodePage,9,(LPCSTR)param_2,DAT_10011cb0,param_1,
                                          (uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) {
            return DAT_10011cb0;
          }
          if (param_2[1] != 0) {
            return DAT_10011cb0;
          }
          param_4[0] = 0;
          param_4[1] = 0;
          param_4[2] = 0;
          param_4[3] = 0;
        }
      }
      else {
        param_4[1] = bVar1;
        if ((1 < (int)DAT_10011cb0) &&
           (iVar2 = MultiByteToWideChar(CodePage,9,(LPCSTR)param_4,2,param_1,
                                        (uint)(param_1 != (LPWSTR)0x0)), iVar2 != 0)) {
          param_4[0] = 0;
          param_4[1] = 0;
          param_4[2] = 0;
          param_4[3] = 0;
          return DAT_10011cb0;
        }
        param_4[0] = 0;
        param_4[1] = 0;
        param_4[2] = 0;
        param_4[3] = 0;
      }
      pDVar3 = FUN_10008d7a();
      *pDVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}



// ============================================================
// FUN_10007006 @ 0x10007006 65B
// ============================================================

uint __cdecl FUN_10007006(int param_1)

{
  uint uVar1;
  uint uVar2;
  byte local_c [6];
  WCHAR local_6;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  param_1 = CONCAT13((char)param_1,(undefined3)param_1);
  local_c[0] = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  local_c[3] = 0;
  uVar1 = FUN_10006e90(&local_6,(byte *)((int)&param_1 + 3),1,local_c,(int *)0x0);
  uVar2 = 0xffff;
  if (-1 < (int)uVar1) {
    uVar2 = (uint)(ushort)local_6;
  }
  return uVar2;
}



// ============================================================
// FUN_10007047 @ 0x10007047 126B
// ============================================================

undefined4 __cdecl FUN_10007047(undefined4 param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  
  FUN_10008e7e();
  pbVar1 = (byte *)FUN_100091d9(DAT_10014d94);
  if (pbVar1 < DAT_10014d90 + (4 - (int)DAT_10014d94)) {
    SVar2 = FUN_100091d9(DAT_10014d94);
    pbVar1 = FUN_10008eaa(DAT_10014d94,(uint *)(SVar2 + 0x10));
    if (pbVar1 == (byte *)0x0) {
      param_1 = 0;
      goto LAB_100070bc;
    }
    DAT_10014d90 = pbVar1 + ((int)DAT_10014d90 - (int)DAT_10014d94 >> 2) * 4;
    DAT_10014d94 = pbVar1;
  }
  *(undefined4 *)DAT_10014d90 = param_1;
  DAT_10014d90 = DAT_10014d90 + 4;
LAB_100070bc:
  FUN_10008e87();
  return param_1;
}



// ============================================================
// FUN_1000710f @ 0x1000710f 45B
// ============================================================

void FUN_1000710f(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x1000713a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// ============================================================
// FUN_10007151 @ 0x10007151 79B
// ============================================================

void FUN_10007151(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x10007179,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// ============================================================
// FUN_100071a0 @ 0x100071a0 54B
// ============================================================

undefined4 __cdecl
FUN_100071a0(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_10009401(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



// ============================================================
// FUN_100071d6 @ 0x100071d6 84B
// ============================================================

undefined4 __cdecl
FUN_100071d6(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_1000722a;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// ============================================================
// FUN_1000722a @ 0x1000722a 37B
// ============================================================

void __cdecl FUN_1000722a(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_10009401(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



// ============================================================
// FUN_1000724f @ 0x1000724f 182B
// ============================================================

undefined4 __cdecl
FUN_1000724f(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_28 = FUN_10007305;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x100072d7;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_10009cf1();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// ============================================================
// FUN_10007305 @ 0x10007305 114B
// ============================================================

undefined4 __cdecl FUN_10007305(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_10009401(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_10007151(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x1000736f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// ============================================================
// FUN_1000737a @ 0x1000737a 123B
// ============================================================

int __cdecl FUN_1000737a(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

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
      FUN_10009e59();
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
    FUN_10009e59();
  }
  return iVar1 + uVar5 * 0x14;
}



// ============================================================
// __global_unwind2 @ 0x100073f8 32B
// ============================================================

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10007410,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// ============================================================
// __local_unwind2 @ 0x1000743a 104B
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
  puStack_18 = &LAB_10007418;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_100074ce();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// ============================================================
// __abnormal_termination @ 0x100074a2 35B
// ============================================================

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10007418) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// ============================================================
// FUN_100074ce @ 0x100074ce 24B
// ============================================================

void FUN_100074ce(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_100114bc = *(undefined4 *)(unaff_EBP + 8);
  DAT_100114b8 = in_EAX;
  DAT_100114c0 = unaff_EBP;
  return;
}



// ============================================================
// FUN_10007500 @ 0x10007500 664B
// ============================================================

undefined4 * __cdecl FUN_10007500(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_100076b7_caseD_2;
        case 3:
          goto switchD_100076b7_caseD_3;
        }
        goto switchD_100076b7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_100076b7_caseD_0;
      case 1:
        goto switchD_100076b7_caseD_1;
      case 2:
        goto switchD_100076b7_caseD_2;
      case 3:
        goto switchD_100076b7_caseD_3;
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
              goto switchD_100076b7_caseD_2;
            case 3:
              goto switchD_100076b7_caseD_3;
            }
            goto switchD_100076b7_caseD_1;
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
              goto switchD_100076b7_caseD_2;
            case 3:
              goto switchD_100076b7_caseD_3;
            }
            goto switchD_100076b7_caseD_1;
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
              goto switchD_100076b7_caseD_2;
            case 3:
              goto switchD_100076b7_caseD_3;
            }
            goto switchD_100076b7_caseD_1;
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
switchD_100076b7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_100076b7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_100076b7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_100076b7_caseD_0:
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
        goto switchD_10007535_caseD_2;
      case 3:
        goto switchD_10007535_caseD_3;
      }
      goto switchD_10007535_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10007535_caseD_0;
    case 1:
      goto switchD_10007535_caseD_1;
    case 2:
      goto switchD_10007535_caseD_2;
    case 3:
      goto switchD_10007535_caseD_3;
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
            goto switchD_10007535_caseD_2;
          case 3:
            goto switchD_10007535_caseD_3;
          }
          goto switchD_10007535_caseD_1;
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
            goto switchD_10007535_caseD_2;
          case 3:
            goto switchD_10007535_caseD_3;
          }
          goto switchD_10007535_caseD_1;
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
            goto switchD_10007535_caseD_2;
          case 3:
            goto switchD_10007535_caseD_3;
          }
          goto switchD_10007535_caseD_1;
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
switchD_10007535_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10007535_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10007535_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10007535_caseD_0:
  return param_1;
}



// ============================================================
// FUN_10007835 @ 0x10007835 68B
// ============================================================

int __cdecl FUN_10007835(byte param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if (param_2 == 1) {
    return (-(uint)((*(byte *)((int)&DAT_10014c80 + uVar2 + 1) & 8) != 0) & 3) - 1;
  }
  bVar1 = *(byte *)((int)&DAT_10014c80 + uVar2 + 1);
  if ((bVar1 & 4) != 0) {
    return 1;
  }
  if (((*(ushort *)(&DAT_10011946 + uVar2 * 2) & 0x157) == 0) && ((bVar1 & 3) == 0)) {
    return -1;
  }
  return 0;
}



// ============================================================
// FUN_10007879 @ 0x10007879 29B
// ============================================================

int __cdecl FUN_10007879(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar2 = psVar2 + 1, sVar1 != 0) {
    sVar1 = *psVar2;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}



// ============================================================
// FUN_10007896 @ 0x10007896 40B
// ============================================================

undefined4 __cdecl FUN_10007896(uint param_1)

{
  if (((*(byte *)((int)&DAT_10014c80 + (param_1 >> 8 & 0xff) + 1) & 4) != 0) &&
     ((*(byte *)((int)&DAT_10014c80 + (param_1 & 0xff) + 1) & 8) != 0)) {
    return 1;
  }
  return 0;
}



// ============================================================
// FUN_100078be @ 0x100078be 28B
// ============================================================

exception * __thiscall FUN_100078be(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// FUN_100078da @ 0x100078da 61B
// ============================================================

undefined4 * __thiscall FUN_100078da(void *this,undefined4 *param_1)

{
  size_t sVar1;
  uint *puVar2;
  
  *(undefined ***)this = &PTR_FUN_1000f330;
  sVar1 = _strlen((char *)*param_1);
  puVar2 = operator_new(sVar1 + 1);
  *(uint **)((int)this + 4) = puVar2;
  if (puVar2 != (uint *)0x0) {
    FUN_1000a3c0(puVar2,(uint *)*param_1);
  }
  *(undefined4 *)((int)this + 8) = 1;
  return this;
}



// ============================================================
// FUN_10007917 @ 0x10007917 74B
// ============================================================

undefined4 * __thiscall FUN_10007917(void *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  uint *puVar3;
  
  *(undefined ***)this = &PTR_FUN_1000f330;
  iVar1 = *(int *)(param_1 + 8);
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  }
  else {
    sVar2 = _strlen(*(char **)(param_1 + 4));
    puVar3 = operator_new(sVar2 + 1);
    *(uint **)((int)this + 4) = puVar3;
    if (puVar3 != (uint *)0x0) {
      FUN_1000a3c0(puVar3,*(uint **)(param_1 + 4));
    }
  }
  return this;
}



// ============================================================
// ~exception @ 0x10007961 22B
// ============================================================

/* Library Function - Single Match
    public: virtual __thiscall exception::~exception(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __thiscall exception::~exception(exception *this)

{
  *(undefined ***)this = &PTR_FUN_1000f330;
  if (*(int *)(this + 8) != 0) {
    FUN_1000675f(*(undefined **)(this + 4));
  }
  return;
}



// ============================================================
// FUN_10007984 @ 0x10007984 41B
// ============================================================

void __fastcall FUN_10007984(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_10008c91(0x1b);
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_10008a59((undefined *)param_1[1]);
  }
  FUN_10008cf2(0x1b);
  return;
}



// ============================================================
// FUN_100079ad @ 0x100079ad 28B
// ============================================================

undefined4 * __thiscall FUN_100079ad(void *this,byte param_1)

{
  FUN_10007984(this);
  if ((param_1 & 1) != 0) {
    FUN_1000675f(this);
  }
  return this;
}



// ============================================================
// __CxxThrowException@8 @ 0x100079c9 58B
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
  
  pDVar2 = &DAT_1000f358;
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
// FUN_10007a03 @ 0x10007a03 217B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10007a03(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_10014758 = GetVersion();
    iVar1 = FUN_1000ad55(1);
    if (iVar1 != 0) {
      _DAT_10014764 = DAT_10014758 >> 8 & 0xff;
      _DAT_10014760 = DAT_10014758 & 0xff;
      DAT_10014758 = DAT_10014758 >> 0x10;
      _DAT_1001475c = _DAT_10014760 * 0x100 + _DAT_10014764;
      iVar1 = FUN_10009c6c();
      if (iVar1 != 0) {
        DAT_10015dc4 = GetCommandLineA();
        DAT_100146b0 = FUN_1000aaae();
        FUN_1000a598();
        FUN_1000a861();
        FUN_1000a7a8();
        FUN_10008d8c();
        DAT_100146ac = DAT_100146ac + 1;
        goto LAB_10007ad6;
      }
      FUN_1000adb2();
    }
LAB_10007a63:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_100146ac < 1) goto LAB_10007a63;
      DAT_100146ac = DAT_100146ac + -1;
      if (DAT_10014790 == 0) {
        FUN_10008dca();
      }
      FUN_1000a754();
      FUN_10009cc0();
      FUN_1000adb2();
    }
    else if (param_2 == 3) {
      FUN_10009d58((undefined *)0x0);
    }
LAB_10007ad6:
    uVar2 = 1;
  }
  return uVar2;
}



// ============================================================
// entry @ 0x10007adc 157B
// ============================================================

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100146ac;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10007b24;
    if ((DAT_10015dc8 != (code *)0x0) &&
       (iVar2 = (*DAT_10015dc8)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10007a03(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10007b24:
  iVar2 = FUN_10004750();
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10007a03(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10007a03(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_10015dc8 != (code *)0x0) {
      iVar2 = (*DAT_10015dc8)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// ============================================================
// __amsg_exit @ 0x10007b79 48B
// ============================================================

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100146b8 == 1) || ((DAT_100146b8 == 0 && (DAT_100146bc == 1)))) {
    FUN_1000ae5a();
  }
  FUN_1000ae93(param_1);
  (*(code *)PTR___exit_100114ec)(0xff);
  return;
}



// ============================================================
// FUN_10007c68 @ 0x10007c68 47B
// ============================================================

void __cdecl FUN_10007c68(uint param_1)

{
  if ((0x100114ef < param_1) && (param_1 < 0x10011751)) {
    FUN_10008c91(((int)(param_1 + 0xeffeeb10) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// ============================================================
// FUN_10007c97 @ 0x10007c97 35B
// ============================================================

void __cdecl FUN_10007c97(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10008c91(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// ============================================================
// FUN_10007cba @ 0x10007cba 47B
// ============================================================

void __cdecl FUN_10007cba(uint param_1)

{
  if ((0x100114ef < param_1) && (param_1 < 0x10011751)) {
    FUN_10008cf2(((int)(param_1 + 0xeffeeb10) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



// ============================================================
// FUN_10007ce9 @ 0x10007ce9 35B
// ============================================================

void __cdecl FUN_10007ce9(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10008cf2(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



// ============================================================
// FUN_10007d0c @ 0x10007d0c 31B
// ============================================================

void FUN_10007d0c(void)

{
  undefined1 auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}



// ============================================================
// FUN_10007d30 @ 0x10007d30 664B
// ============================================================

undefined4 * __cdecl FUN_10007d30(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10007ee7_caseD_2;
        case 3:
          goto switchD_10007ee7_caseD_3;
        }
        goto switchD_10007ee7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10007ee7_caseD_0;
      case 1:
        goto switchD_10007ee7_caseD_1;
      case 2:
        goto switchD_10007ee7_caseD_2;
      case 3:
        goto switchD_10007ee7_caseD_3;
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
              goto switchD_10007ee7_caseD_2;
            case 3:
              goto switchD_10007ee7_caseD_3;
            }
            goto switchD_10007ee7_caseD_1;
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
              goto switchD_10007ee7_caseD_2;
            case 3:
              goto switchD_10007ee7_caseD_3;
            }
            goto switchD_10007ee7_caseD_1;
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
              goto switchD_10007ee7_caseD_2;
            case 3:
              goto switchD_10007ee7_caseD_3;
            }
            goto switchD_10007ee7_caseD_1;
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
switchD_10007ee7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10007ee7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10007ee7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10007ee7_caseD_0:
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
        goto switchD_10007d65_caseD_2;
      case 3:
        goto switchD_10007d65_caseD_3;
      }
      goto switchD_10007d65_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10007d65_caseD_0;
    case 1:
      goto switchD_10007d65_caseD_1;
    case 2:
      goto switchD_10007d65_caseD_2;
    case 3:
      goto switchD_10007d65_caseD_3;
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
            goto switchD_10007d65_caseD_2;
          case 3:
            goto switchD_10007d65_caseD_3;
          }
          goto switchD_10007d65_caseD_1;
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
            goto switchD_10007d65_caseD_2;
          case 3:
            goto switchD_10007d65_caseD_3;
          }
          goto switchD_10007d65_caseD_1;
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
            goto switchD_10007d65_caseD_2;
          case 3:
            goto switchD_10007d65_caseD_3;
          }
          goto switchD_10007d65_caseD_1;
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
switchD_10007d65_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10007d65_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10007d65_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10007d65_caseD_0:
  return param_1;
}



// ============================================================
// FUN_10008065 @ 0x10008065 47B
// ============================================================

uint __cdecl FUN_10008065(char *param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  
  FUN_10007c68((uint)param_4);
  uVar1 = FUN_10008094(param_1,param_2,param_3,param_4);
  FUN_10007cba((uint)param_4);
  return uVar1;
}



// ============================================================
// FUN_10008094 @ 0x10008094 266B
// ============================================================

uint __cdecl FUN_10008094(char *param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar1 = param_4;
  piVar6 = (int *)(param_2 * param_3);
  if (piVar6 == (int *)0x0) {
    param_3 = 0;
  }
  else {
    piVar5 = piVar6;
    if ((*(ushort *)(param_4 + 3) & 0x10c) == 0) {
      param_4 = (int *)0x1000;
    }
    else {
      param_4 = (int *)param_4[6];
    }
    do {
      if (((piVar1[3] & 0x108U) == 0) || (piVar7 = (int *)piVar1[1], piVar7 == (int *)0x0)) {
        if (param_4 <= piVar5) {
          if (((piVar1[3] & 0x108U) != 0) && (iVar2 = FUN_100084a0(piVar1), iVar2 != 0)) {
LAB_10008195:
            return (uint)((int)piVar6 - (int)piVar5) / param_2;
          }
          piVar7 = piVar5;
          if (param_4 != (int *)0x0) {
            piVar7 = (int *)((int)piVar5 - (uint)piVar5 % (uint)param_4);
          }
          piVar3 = (int *)FUN_1000b1a4(piVar1[4],param_1,(uint)piVar7);
          if ((piVar3 == (int *)0xffffffff) ||
             (piVar5 = (int *)((int)piVar5 - (int)piVar3), piVar3 < piVar7)) {
            piVar1[3] = piVar1[3] | 0x20;
            goto LAB_10008195;
          }
          goto LAB_1000814c;
        }
        uVar4 = FUN_10009eaf((int)*param_1,piVar1);
        if (uVar4 == 0xffffffff) goto LAB_10008195;
        param_1 = param_1 + 1;
        param_4 = (int *)piVar1[6];
        piVar5 = (int *)((int)piVar5 - 1);
        if ((int)param_4 < 1) {
          param_4 = (int *)0x1;
        }
      }
      else {
        piVar3 = piVar5;
        if (piVar7 <= piVar5) {
          piVar3 = piVar7;
        }
        FUN_10007d30((undefined4 *)*piVar1,(undefined4 *)param_1,(uint)piVar3);
        piVar1[1] = piVar1[1] - (int)piVar3;
        *piVar1 = *piVar1 + (int)piVar3;
        piVar5 = (int *)((int)piVar5 - (int)piVar3);
LAB_1000814c:
        param_1 = param_1 + (int)piVar3;
      }
    } while (piVar5 != (int *)0x0);
  }
  return param_3;
}



// ============================================================
// FUN_1000819e @ 0x1000819e 59B
// ============================================================

uint __cdecl FUN_1000819e(uint param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_10007c68((uint)param_2);
  piVar1 = param_2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_10009eaf(param_1,param_2);
  }
  else {
    uVar2 = param_1 & 0xff;
    *(undefined1 *)*param_2 = (undefined1)param_1;
    *param_2 = *param_2 + 1;
  }
  FUN_10007cba((uint)param_2);
  return uVar2;
}



// ============================================================
// FUN_100081d9 @ 0x100081d9 41B
// ============================================================

uint __cdecl FUN_100081d9(uint param_1,int *param_2)

{
  uint uVar1;
  
  FUN_10007c68((uint)param_2);
  uVar1 = FUN_10008202(param_1,param_2);
  FUN_10007cba((uint)param_2);
  return uVar1;
}



// ============================================================
// FUN_10008202 @ 0x10008202 110B
// ============================================================

uint __cdecl FUN_10008202(uint param_1,int *param_2)

{
  uint uVar1;
  
  if ((param_1 != 0xffffffff) &&
     ((uVar1 = param_2[3], (uVar1 & 1) != 0 || (((uVar1 & 0x80) != 0 && ((uVar1 & 2) == 0)))))) {
    if (param_2[2] == 0) {
      FUN_1000b394(param_2);
    }
    if (*param_2 == param_2[2]) {
      if (param_2[1] != 0) {
        return 0xffffffff;
      }
      *param_2 = *param_2 + 1;
    }
    if ((*(byte *)(param_2 + 3) & 0x40) == 0) {
      *param_2 = *param_2 + -1;
      *(char *)*param_2 = (char)param_1;
    }
    else {
      *param_2 = *param_2 + -1;
      if (*(char *)*param_2 != (char)param_1) {
        *param_2 = (int)((char *)*param_2 + 1);
        return 0xffffffff;
      }
    }
    param_2[1] = param_2[1] + 1;
    param_2[3] = param_2[3] & 0xffffffefU | 1;
    return param_1 & 0xff;
  }
  return 0xffffffff;
}



// ============================================================
// FUN_10008270 @ 0x10008270 49B
// ============================================================

uint __cdecl FUN_10008270(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_10007c68((uint)param_1);
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    uVar2 = FUN_1000b3d8(param_1);
  }
  else {
    uVar2 = (uint)*(byte *)*param_1;
    *param_1 = (byte *)*param_1 + 1;
  }
  FUN_10007cba((uint)param_1);
  return uVar2;
}



// ============================================================
// FUN_100082a1 @ 0x100082a1 34B
// ============================================================

undefined4 __cdecl FUN_100082a1(char *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_1000b4b4(param_1);
  *param_2 = uVar2;
  uVar1 = 0xffffffff;
  if (((uint)*param_2 & *(uint *)((int)param_2 + 4)) != 0xffffffff) {
    uVar1 = 0;
  }
  return uVar1;
}



// ============================================================
// FUN_100082c3 @ 0x100082c3 44B
// ============================================================

int __cdecl FUN_100082c3(int *param_1,int param_2,DWORD param_3)

{
  int iVar1;
  
  FUN_10007c68((uint)param_1);
  iVar1 = FUN_100082ef(param_1,param_2,param_3);
  FUN_10007cba((uint)param_1);
  return iVar1;
}



// ============================================================
// FUN_100082ef @ 0x100082ef 141B
// ============================================================

int __cdecl FUN_100082ef(int *param_1,int param_2,DWORD param_3)

{
  uint uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  
  if (((param_1[3] & 0x83U) == 0) || (((param_3 != 0 && (param_3 != 1)) && (param_3 != 2)))) {
    pDVar4 = FUN_10008d7a();
    *pDVar4 = 0x16;
    iVar2 = -1;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_3 == 1) {
      iVar2 = FUN_1000b744((char *)param_1);
      param_2 = param_2 + iVar2;
      param_3 = 0;
    }
    FUN_100084a0(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    DVar3 = FUN_1000b66c(param_1[4],param_2,param_3);
    iVar2 = (DVar3 != 0xffffffff) - 1;
  }
  return iVar2;
}



// ============================================================
// FUN_1000837c @ 0x1000837c 24B
// ============================================================

void __cdecl FUN_1000837c(int *param_1,LONG *param_2)

{
  FUN_1000b8a5(param_1,*param_2,param_2[1],0);
  return;
}



// ============================================================
// FUN_10008394 @ 0x10008394 175B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10008394(FILE *param_1,int *param_2,uint param_3,uint param_4)

{
  uint _Size;
  undefined4 local_8;
  
  local_8 = 0;
  if ((param_3 != 4) &&
     (((param_4 < 2 || (0x7fffffff < param_4)) || ((param_3 != 0 && (param_3 != 0x40)))))) {
    return 0xffffffff;
  }
  _Size = param_4 & 0xfffffffe;
  FUN_10007c68((uint)param_1);
  FUN_100084a0((int *)param_1);
  __freebuf(param_1);
  *(ushort *)&param_1->_flag = (ushort)param_1->_flag & 0xc2f3;
  if ((param_3 & 4) == 0) {
    if (param_2 == (int *)0x0) {
      param_2 = _malloc(_Size);
      if (param_2 == (int *)0x0) {
        _DAT_100146c0 = _DAT_100146c0 + 1;
        local_8 = 0xffffffff;
        goto LAB_10008434;
      }
      *(ushort *)&param_1->_flag = (ushort)param_1->_flag | 0x408;
    }
    else {
      param_1->_flag = param_1->_flag | 0x500;
    }
  }
  else {
    param_1->_flag = param_1->_flag | 4;
    param_2 = &param_1->_charbuf;
    _Size = 2;
  }
  param_1->_cnt = 0;
  param_1->_bufsiz = _Size;
  param_1->_base = (char *)param_2;
  param_1->_ptr = (char *)param_2;
LAB_10008434:
  FUN_10007cba((uint)param_1);
  return local_8;
}



// ============================================================
// FUN_10008443 @ 0x10008443 47B
// ============================================================

int __cdecl FUN_10008443(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = FUN_10008505(0);
    return iVar1;
  }
  FUN_10007c68((uint)param_1);
  iVar1 = FUN_10008472(param_1);
  FUN_10007cba((uint)param_1);
  return iVar1;
}



// ============================================================
// FUN_10008472 @ 0x10008472 46B
// ============================================================

int __cdecl FUN_10008472(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100084a0(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_1000b990(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}



// ============================================================
// FUN_100084a0 @ 0x100084a0 92B
// ============================================================

undefined4 __cdecl FUN_100084a0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    if (0 < (int)uVar3) {
      uVar1 = FUN_1000b1a4(param_1[4],(char *)param_1[2],uVar3);
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
// FUN_10008505 @ 0x10008505 164B
// ============================================================

int __cdecl FUN_10008505(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  FUN_10008c91(2);
  iVar4 = 0;
  if (0 < DAT_10015dc0) {
    do {
      iVar2 = *(int *)(DAT_10014da4 + iVar4 * 4);
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x83) != 0)) {
        FUN_10007c97(iVar4,iVar2);
        piVar1 = *(int **)(DAT_10014da4 + iVar4 * 4);
        if ((piVar1[3] & 0x83U) != 0) {
          if (param_1 == 1) {
            iVar2 = FUN_10008472(piVar1);
            if (iVar2 != -1) {
              iVar3 = iVar3 + 1;
            }
          }
          else if ((param_1 == 0) && ((piVar1[3] & 2U) != 0)) {
            iVar2 = FUN_10008472(piVar1);
            if (iVar2 == -1) {
              iVar5 = -1;
            }
          }
        }
        FUN_10007ce9(iVar4,*(int *)(DAT_10014da4 + iVar4 * 4));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10015dc0);
  }
  FUN_10008cf2(2);
  if (param_1 != 1) {
    iVar3 = iVar5;
  }
  return iVar3;
}



// ============================================================
// _memset @ 0x100085b0 88B
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
// FUN_10008608 @ 0x10008608 49B
// ============================================================

undefined4 __cdecl FUN_10008608(FILE *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1->_flag & 0x40) == 0) {
    FUN_10007c68((uint)param_1);
    uVar1 = __fclose_lk(param_1);
    FUN_10007cba((uint)param_1);
  }
  else {
    param_1->_flag = 0;
  }
  return uVar1;
}



// ============================================================
// __fclose_lk @ 0x10008639 76B
// ============================================================

/* Library Function - Single Match
    __fclose_lk
   
   Library: Visual Studio 2003 Release */

undefined4 __cdecl __fclose_lk(FILE *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_1->_flag & 0x83) != 0) {
    uVar2 = FUN_100084a0((int *)param_1);
    __freebuf(param_1);
    iVar1 = FUN_1000ba23(param_1->_file);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else if (param_1->_tmpfname != (char *)0x0) {
      FUN_10008a59(param_1->_tmpfname);
      param_1->_tmpfname = (char *)0x0;
    }
  }
  param_1->_flag = 0;
  return uVar2;
}



// ============================================================
// _strlen @ 0x10008690 123B
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
    if (((uint)puVar2 & 3) == 0) goto LAB_100086b0;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_100086e3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_100086b0:
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
  goto LAB_100086e3;
}



// ============================================================
// FUN_1000870b @ 0x1000870b 42B
// ============================================================

uint __cdecl FUN_1000870b(uint param_1,int *param_2)

{
  uint uVar1;
  undefined2 extraout_var;
  
  FUN_10007c68((uint)param_2);
  uVar1 = FUN_10008735(param_1,param_2);
  FUN_10007cba((uint)param_2);
  return CONCAT22(extraout_var,(short)uVar1);
}



// ============================================================
// FUN_10008735 @ 0x10008735 249B
// ============================================================

uint __cdecl FUN_10008735(uint param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  DWORD *pDVar7;
  
  piVar2 = param_2;
  if ((*(byte *)(param_2 + 3) & 0x40) != 0) {
LAB_1000880b:
    piVar2 = param_2 + 1;
    *piVar2 = *piVar2 + -2;
    if (*piVar2 < 0) {
      param_1 = FUN_1000bb03(param_1 & 0xffff,param_2);
    }
    else {
      *(WCHAR *)*param_2 = (WCHAR)param_1;
      *param_2 = *param_2 + 2;
    }
    return param_1;
  }
  uVar4 = param_2[4];
  if (uVar4 == 0xffffffff) {
    puVar5 = &DAT_10011dd0;
  }
  else {
    puVar5 = (undefined *)((&DAT_10014a60)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x24);
  }
  if ((puVar5[4] & 0x80) == 0) goto LAB_1000880b;
  iVar6 = FUN_1000bc2a((LPSTR)&param_2,(WCHAR)param_1);
  if (iVar6 == -1) {
    pDVar7 = FUN_10008d7a();
    *pDVar7 = 0x2a;
    goto LAB_10008792;
  }
  if (iVar6 == 1) {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    bVar3 = (byte)param_2;
    if (-1 < *piVar1) {
      *(byte *)*piVar2 = (byte)param_2;
      goto LAB_100087b0;
    }
LAB_100087b9:
    pDVar7 = (DWORD *)FUN_10009eaf((int)(char)bVar3,piVar2);
  }
  else {
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      pDVar7 = (DWORD *)FUN_10009eaf((int)(char)(byte)param_2,piVar2);
    }
    else {
      *(byte *)*piVar2 = (byte)param_2;
      *piVar2 = *piVar2 + 1;
      pDVar7 = (DWORD *)((uint)param_2 & 0xff);
    }
    if (pDVar7 == (DWORD *)0xffffffff) goto LAB_10008792;
    piVar1 = piVar2 + 1;
    *piVar1 = *piVar1 + -1;
    bVar3 = param_2._1_1_;
    if (*piVar1 < 0) goto LAB_100087b9;
    *(byte *)*piVar2 = param_2._1_1_;
    param_2._0_1_ = param_2._1_1_;
LAB_100087b0:
    pDVar7 = (DWORD *)(uint)(byte)param_2;
    *piVar2 = *piVar2 + 1;
  }
  if (pDVar7 != (DWORD *)0xffffffff) {
    return CONCAT22((short)((uint)pDVar7 >> 0x10),(WCHAR)param_1);
  }
LAB_10008792:
  return CONCAT22((short)((uint)pDVar7 >> 0x10),0xffff);
}



// ============================================================
// FUN_1000882e @ 0x1000882e 42B
// ============================================================

uint __cdecl FUN_1000882e(uint param_1,int *param_2)

{
  uint uVar1;
  undefined2 extraout_var;
  
  FUN_10007c68((uint)param_2);
  uVar1 = FUN_10008858(param_1,param_2);
  FUN_10007cba((uint)param_2);
  return CONCAT22(extraout_var,(short)uVar1);
}



// ============================================================
// FUN_10008858 @ 0x10008858 237B
// ============================================================

uint __cdecl FUN_10008858(uint param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  DWORD *in_EAX;
  undefined *puVar3;
  WCHAR WVar4;
  
  piVar2 = param_2;
  WVar4 = (WCHAR)param_1;
  if ((WVar4 == L'\xffff') ||
     ((in_EAX = (DWORD *)param_2[3], ((uint)in_EAX & 1) == 0 &&
      ((((uint)in_EAX & 0x80) == 0 || (((uint)in_EAX & 2) != 0)))))) goto LAB_100088d7;
  if (param_2[2] == 0) {
    FUN_1000b394(param_2);
  }
  in_EAX = (DWORD *)piVar2[3];
  if (((uint)in_EAX & 0x40) == 0) {
    uVar1 = piVar2[4];
    if (uVar1 == 0xffffffff) {
      puVar3 = &DAT_10011dd0;
    }
    else {
      puVar3 = (undefined *)((&DAT_10014a60)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
    }
    if ((puVar3[4] & 0x80) != 0) {
      in_EAX = (DWORD *)FUN_1000bc2a((LPSTR)&param_1,WVar4);
      if (in_EAX != (DWORD *)0xffffffff) {
        if (*piVar2 == piVar2[2]) {
          if (piVar2[1] != 0) goto LAB_100088d7;
          *piVar2 = *piVar2 + (int)in_EAX;
        }
        if (in_EAX != (DWORD *)0x1) {
          *piVar2 = *piVar2 + -1;
          *(undefined1 *)*piVar2 = param_1._1_1_;
        }
        *piVar2 = *piVar2 + -1;
        *(undefined1 *)*piVar2 = (undefined1)param_1;
        piVar2[1] = piVar2[1] + (int)in_EAX;
        uVar1 = piVar2[3];
        piVar2[3] = uVar1 & 0xffffffef | 1;
        return CONCAT22((short)((uVar1 & 0xffffffef) >> 0x10),WVar4);
      }
      in_EAX = FUN_10008d7a();
      *in_EAX = 0x2a;
      goto LAB_100088d7;
    }
  }
  if (*piVar2 == piVar2[2]) {
    if (piVar2[1] != 0) {
LAB_100088d7:
      return CONCAT22((short)((uint)in_EAX >> 0x10),0xffff);
    }
    *piVar2 = *piVar2 + 2;
  }
  piVar2[1] = piVar2[1] + 2;
  *piVar2 = *piVar2 + -2;
  piVar2[3] = (uint)in_EAX & 0xffffffef | 1;
  *(WCHAR *)*piVar2 = WVar4;
  return CONCAT22((short)((uint)*piVar2 >> 0x10),*(undefined2 *)*piVar2);
}



// ============================================================
// FUN_10008945 @ 0x10008945 35B
// ============================================================

undefined2 __cdecl FUN_10008945(int *param_1)

{
  undefined2 uVar1;
  void *this;
  
  FUN_10007c68((uint)param_1);
  uVar1 = FUN_10008968(this,param_1);
  FUN_10007cba((uint)param_1);
  return uVar1;
}



// ============================================================
// FUN_10008968 @ 0x10008968 241B
// ============================================================

undefined2 __thiscall FUN_10008968(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  DWORD *pDVar7;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_8 = this;
  if ((*(byte *)(param_1 + 3) & 0x40) == 0) {
    uVar6 = param_1[4];
    if (uVar6 == 0xffffffff) {
      puVar4 = &DAT_10011dd0;
    }
    else {
      puVar4 = (undefined *)((&DAT_10014a60)[(int)uVar6 >> 5] + (uVar6 & 0x1f) * 0x24);
    }
    if ((puVar4[4] & 0x80) != 0) {
      piVar1 = param_1 + 1;
      *piVar1 = *piVar1 + -1;
      uVar6 = 1;
      if (*piVar1 < 0) {
        uVar5 = FUN_1000b3d8(param_1);
      }
      else {
        uVar5 = (uint)*(byte *)*param_1;
        *param_1 = (int)((byte *)*param_1 + 1);
      }
      if (uVar5 != 0xffffffff) {
        local_8 = (void *)CONCAT31(local_8._1_3_,(char)uVar5);
        if ((PTR_DAT_1001193c[(uVar5 & 0xff) * 2 + 1] & 0x80) != 0) {
          piVar1 = piVar2 + 1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 < 0) {
            uVar6 = FUN_1000b3d8(piVar2);
          }
          else {
            uVar6 = (uint)*(byte *)*piVar2;
            *piVar2 = (int)((byte *)*piVar2 + 1);
          }
          if (uVar6 == 0xffffffff) {
            FUN_100081d9((int)(char)(byte)local_8,piVar2);
            return 0xffff;
          }
          local_8._0_2_ = CONCAT11((char)uVar6,(byte)local_8);
          uVar6 = 2;
        }
        uVar6 = FUN_1000bdd3((LPWSTR)((int)&param_1 + 2),(byte *)&local_8,uVar6);
        if (uVar6 != 0xffffffff) {
          return param_1._2_2_;
        }
        pDVar7 = FUN_10008d7a();
        *pDVar7 = 0x2a;
      }
      return 0xffff;
    }
  }
  piVar2 = param_1 + 1;
  *piVar2 = *piVar2 + -2;
  if (*piVar2 < 0) {
    uVar3 = FUN_1000bcec(param_1);
  }
  else {
    uVar3 = *(undefined2 *)*param_1;
    *param_1 = (int)((undefined2 *)*param_1 + 1);
  }
  return uVar3;
}



// ============================================================
// FUN_10008a59 @ 0x10008a59 215B
// ============================================================

void __cdecl FUN_10008a59(undefined *param_1)

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
  puStack_c = &DAT_1000f378;
  puStack_10 = &LAB_1000d118;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_10014a54 == 3) {
    ExceptionList = &local_14;
    FUN_10008c91(9);
    local_8 = 0;
    local_20 = (uint *)FUN_1000bf41((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_1000bf6c(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10008ac3();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10014a54 != 2) goto LAB_10008b25;
    ExceptionList = &local_14;
    FUN_10008c91(9);
    local_8 = 1;
    local_28 = (uint *)FUN_1000cc9c(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_1000ccf3(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10008b1b();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10008b25:
  HeapFree(DAT_10014a50,0,param_1);
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10008bfc @ 0x10008bfc 41B
// ============================================================

void FUN_10008bfc(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100117b4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100117a4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011794);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011774);
  return;
}



// ============================================================
// FUN_10008c25 @ 0x10008c25 108B
// ============================================================

void FUN_10008c25(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_10011770;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_100117b4)) && (ppuVar1 != &PTR_DAT_100117a4)) &&
       ((ppuVar1 != &PTR_DAT_10011794 && (ppuVar1 != &PTR_DAT_10011774)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10008a59(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x10011830);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011794);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100117a4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_100117b4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_10011774);
  return;
}



// ============================================================
// FUN_10008c91 @ 0x10008c91 97B
// ============================================================

void __cdecl FUN_10008c91(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_10011770 + param_1;
  if ((&DAT_10011770)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10008c91(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10008a59((undefined *)lpCriticalSection);
    }
    FUN_10008cf2(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// ============================================================
// FUN_10008cf2 @ 0x10008cf2 21B
// ============================================================

void __cdecl FUN_10008cf2(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_10011770)[param_1]);
  return;
}



// ============================================================
// FUN_10008d07 @ 0x10008d07 115B
// ============================================================

void __cdecl FUN_10008d07(uint param_1)

{
  DWORD *pDVar1;
  uint *puVar2;
  int iVar3;
  
  pDVar1 = FUN_10008d83();
  iVar3 = 0;
  *pDVar1 = param_1;
  puVar2 = &DAT_10011b48;
  do {
    if (param_1 == *puVar2) {
      pDVar1 = FUN_10008d7a();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x10011b4c);
      return;
    }
    puVar2 = puVar2 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x10011cb0);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    pDVar1 = FUN_10008d7a();
    *pDVar1 = 0xd;
    return;
  }
  if ((0xbb < param_1) && (param_1 < 0xcb)) {
    pDVar1 = FUN_10008d7a();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_10008d7a();
  *pDVar1 = 0x16;
  return;
}



// ============================================================
// FUN_10008d8c @ 0x10008d8c 45B
// ============================================================

void FUN_10008d8c(void)

{
  if (DAT_10014d98 != (code *)0x0) {
    (*DAT_10014d98)();
  }
  FUN_10008e90((undefined4 *)&DAT_10011084,(undefined4 *)&DAT_10011098);
  FUN_10008e90((undefined4 *)&DAT_10011000,(undefined4 *)&DAT_10011080);
  return;
}



// ============================================================
// FUN_10008dd9 @ 0x10008dd9 163B
// ============================================================

void __cdecl FUN_10008dd9(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_10008e7e();
  if (DAT_10014794 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_10014790 = 1;
  DAT_1001478c = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_10014d94 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_10014d90 - 4), DAT_10014d94 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_10014d94 <= puVar1);
    }
    FUN_10008e90((undefined4 *)&DAT_1001109c,(undefined4 *)&DAT_100110a4);
  }
  FUN_10008e90((undefined4 *)&DAT_100110a8,(undefined4 *)&DAT_100110b0);
  if (param_3 == 0) {
    DAT_10014794 = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_10008e87();
  return;
}



// ============================================================
// FUN_10008e90 @ 0x10008e90 26B
// ============================================================

void __cdecl FUN_10008e90(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// ============================================================
// FUN_10008eaa @ 0x10008eaa 781B
// ============================================================

byte * __cdecl FUN_10008eaa(byte *param_1,uint *param_2)

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
  puStack_c = &DAT_1000f390;
  puStack_10 = &LAB_1000d118;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_10008a59(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_10014a54 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10008c91(9);
            local_8 = 0;
            local_2c = (uint *)FUN_1000bf41((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_10014a4c) {
                iVar1 = FUN_1000c74a(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_1000c295(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_10007d30((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_1000bf41((int)param_1);
                    FUN_1000bf6c(local_2c,(int)param_1);
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
                local_28 = HeapAlloc(DAT_10014a50,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_10007d30((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_1000bf6c(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_10009035();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_10014a50,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_10014918 == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_1000d3aa(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_10014a54 == 2) {
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
              FUN_10008c91(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_1000cc9c(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_10014a50,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_10013eac) {
                  iVar1 = FUN_1000d064(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_1000cd38((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_10007d30((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_1000ccf3(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_10014a50,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_10007d30((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_1000ccf3(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_10009183();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_10014918 == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_1000d3aa(param_2);
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
              pbVar3 = HeapReAlloc(DAT_10014a50,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_10014918 == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_1000d3aa(param_2);
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
// FUN_100091d9 @ 0x100091d9 214B
// ============================================================

SIZE_T __cdecl FUN_100091d9(undefined *param_1)

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
  puStack_c = &DAT_1000f3a8;
  puStack_10 = &LAB_1000d118;
  local_14 = ExceptionList;
  if (DAT_10014a54 == 3) {
    ExceptionList = &local_14;
    FUN_10008c91(9);
    local_8 = 0;
    local_20 = (byte *)FUN_1000bf41((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10009243();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10014a54 != 2) goto LAB_10009297;
    ExceptionList = &local_14;
    FUN_10008c91(9);
    local_8 = 1;
    local_2c = (byte *)FUN_1000cc9c(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_100092be();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_10009297:
  SVar2 = HeapSize(DAT_10014a50,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}



// ============================================================
// __nh_malloc @ 0x100092d9 44B
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
      pvVar1 = (void *)FUN_10009305((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_1000d3aa(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// ============================================================
// FUN_10009305 @ 0x10009305 231B
// ============================================================

void __cdecl FUN_10009305(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000f3c0;
  puStack_10 = &LAB_1000d118;
  local_14 = ExceptionList;
  if (DAT_10014a54 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_10014a4c) {
      ExceptionList = &local_14;
      FUN_10008c91(9);
      local_8 = 0;
      piVar1 = FUN_1000c295(param_1);
      local_8 = 0xffffffff;
      FUN_1000936c();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_10014a54 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_10013eac) {
        ExceptionList = &local_14;
        FUN_10008c91(9);
        local_8 = 1;
        piVar1 = FUN_1000cd38(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_100093cb();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_100093e4;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_100093e4:
  HeapAlloc(DAT_10014a50,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10009401 @ 0x10009401 155B
// ============================================================

undefined4 __cdecl
FUN_10009401(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_10009e59();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_1000949c(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_10009756((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// ============================================================
// FUN_1000949c @ 0x1000949c 435B
// ============================================================

void __cdecl
FUN_1000949c(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
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
    FUN_10009e59();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_10009cf1();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_10009cf1();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_10009cf1();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_1000d3c5(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_10009e59();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_10009624;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_10009e59();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_1000737a(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_10009b8e((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_100096f9(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_1000980a(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                iVar5 = local_14;
                goto LAB_10009604;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_10009604:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_10009624:
  if (param_6 == '\0') {
    FUN_1000964f(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_10009df8();
  return;
}



// ============================================================
// FUN_1000964f @ 0x1000964f 170B
// ============================================================

void __cdecl
FUN_1000964f(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_10009cf1();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_1000724f(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_1000737a(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_1000980a(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



// ============================================================
// FUN_100096f9 @ 0x100096f9 93B
// ============================================================

undefined4 __cdecl FUN_100096f9(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_10009750:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_1000972a:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_10009750;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_1000972a;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// FUN_10009756 @ 0x10009756 132B
// ============================================================

void __cdecl FUN_10009756(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000f3d8;
  puStack_10 = &LAB_1000d118;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_10009e59();
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
// FUN_100097f4 @ 0x100097f4 22B
// ============================================================

undefined4 __cdecl FUN_100097f4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_10009df8();
  return uVar1;
}



// ============================================================
// FUN_1000980a @ 0x1000980a 123B
// ============================================================

void __cdecl
FUN_1000980a(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_100099ca((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_10007151(param_10,param_1);
  FUN_10009756((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_10009885((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000710f(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// ============================================================
// FUN_10009885 @ 0x10009885 165B
// ============================================================

undefined4 __cdecl
FUN_10009885(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000f3e8;
  puStack_10 = &LAB_1000d118;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10009cf1();
  FUN_10009cf1();
  pDVar1 = FUN_10009cf1();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10009cf1();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_100071d6(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_10009952();
  ExceptionList = local_14;
  return uVar2;
}



// ============================================================
// FUN_10009952 @ 0x10009952 78B
// ============================================================

void FUN_10009952(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_10009cf1();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_10009cf1();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_10009b8e((int)unaff_EDI);
  }
  return;
}



// ============================================================
// FUN_100099a0 @ 0x100099a0 42B
// ============================================================

undefined4 __cdecl FUN_100099a0(int *param_1)

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
// FUN_100099ca @ 0x100099ca 440B
// ============================================================

void __cdecl FUN_100099ca(int param_1,int param_2,byte *param_3,byte *param_4)

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
  
  puStack_c = &DAT_1000f400;
  puStack_10 = &LAB_1000d118;
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
        bVar2 = FUN_1000d3c5(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_1000d3e1(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_10009bf5(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_10007500(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_1000d3c5(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_1000d3e1(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_1000d3fd(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_10009bf5(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_1000714a(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_10009bf5(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_10007143(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_1000d3c5(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_1000d3e1(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_10007500(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_10009a58;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_1000d3c5(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_1000d3e1(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_10009a58:
      iVar3 = FUN_10009bf5(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_10009e59();
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10009b8e @ 0x10009b8e 86B
// ============================================================

void __cdecl FUN_10009b8e(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000f410;
  puStack_10 = &LAB_1000d118;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_10007143(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10009bf5 @ 0x10009bf5 35B
// ============================================================

int __cdecl FUN_10009bf5(int param_1,int *param_2)

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
// __CallSettingFrame@12 @ 0x10009c20 76B
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
// FUN_10009c6c @ 0x10009c6c 84B
// ============================================================

undefined4 FUN_10009c6c(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10008bfc();
  DAT_10011cc0 = TlsAlloc();
  if (DAT_10011cc0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1000afe6(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10011cc0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10009cde((int)lpTlsValue);
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
// FUN_10009cc0 @ 0x10009cc0 30B
// ============================================================

void FUN_10009cc0(void)

{
  FUN_10008c25();
  if (DAT_10011cc0 != 0xffffffff) {
    TlsFree(DAT_10011cc0);
    DAT_10011cc0 = 0xffffffff;
  }
  return;
}



// ============================================================
// FUN_10009cf1 @ 0x10009cf1 103B
// ============================================================

DWORD * FUN_10009cf1(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_10011cc0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1000afe6(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10011cc0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10009cde((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10009d4c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10009d4c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// ============================================================
// FUN_10009d58 @ 0x10009d58 160B
// ============================================================

void __cdecl FUN_10009d58(undefined *param_1)

{
  if (DAT_10011cc0 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_10011cc0), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10008a59(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10008a59(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10008a59(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10008a59(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10008a59(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10008a59(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_10013eb0) {
        FUN_10008a59(*(undefined **)(param_1 + 0x50));
      }
      FUN_10008a59(param_1);
    }
    TlsSetValue(DAT_10011cc0,(LPVOID)0x0);
    return;
  }
  return;
}



// ============================================================
// FUN_10009df8 @ 0x10009df8 86B
// ============================================================

void FUN_10009df8(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000f420;
  puStack_10 = &LAB_1000d118;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10009cf1();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10009cf1();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_1000d415();
  return;
}



// ============================================================
// FUN_10009e59 @ 0x10009e59 79B
// ============================================================

void FUN_10009e59(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000f438;
  puStack_10 = &LAB_1000d118;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10011cc4 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10011cc4)();
  }
  local_8 = 0xffffffff;
  FUN_10009df8();
  return;
}



// ============================================================
// FUN_10009eaf @ 0x10009eaf 280B
// ============================================================

uint __cdecl FUN_10009eaf(uint param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  byte bVar5;
  undefined3 extraout_var;
  undefined *puVar6;
  int *piVar7;
  
  piVar4 = param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  if (((uVar1 & 0x82) == 0) || ((uVar1 & 0x40) != 0)) {
LAB_10009fbb:
    param_2[3] = uVar1 | 0x20;
  }
  else {
    if ((uVar1 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar1 & 0x10) == 0) goto LAB_10009fbb;
      *param_2 = param_2[2];
      param_2[3] = uVar1 & 0xfffffffe;
    }
    uVar1 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar4[3] = uVar1 & 0xffffffef | 2;
    if (((uVar1 & 0x10c) == 0) &&
       (((piVar4 != (int *)&DAT_10011510 && (piVar4 != (int *)&DAT_10011530)) ||
        (bVar5 = FUN_1000d42c(uVar2), CONCAT31(extraout_var,bVar5) == 0)))) {
      FUN_1000b394(piVar4);
    }
    if ((*(ushort *)(piVar4 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x1;
      param_2 = (int *)FUN_1000b1a4(uVar2,(char *)&param_1,1);
    }
    else {
      pcVar3 = (char *)piVar4[2];
      piVar7 = (int *)(*piVar4 - (int)pcVar3);
      *piVar4 = (int)(pcVar3 + 1);
      piVar4[1] = piVar4[6] + -1;
      if ((int)piVar7 < 1) {
        if (uVar2 == 0xffffffff) {
          puVar6 = &DAT_10011dd0;
        }
        else {
          puVar6 = (undefined *)((&DAT_10014a60)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
        }
        if ((puVar6[4] & 0x20) != 0) {
          FUN_1000b66c(uVar2,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_1000b1a4(uVar2,pcVar3,(uint)piVar7);
      }
      *(undefined1 *)piVar4[2] = (undefined1)param_1;
    }
    if (param_2 == piVar7) {
      return param_1 & 0xff;
    }
    piVar4[3] = piVar4[3] | 0x20;
  }
  return 0xffffffff;
}



// ============================================================
// FUN_10009fc7 @ 0x10009fc7 429B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10009fc7(int param_1)

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
  
  FUN_10008c91(0x19);
  CodePage = FUN_1000a174(param_1);
  if (CodePage != DAT_10014b64) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_10011cd8;
LAB_1000a004:
      if (*pUVar5 != CodePage) goto code_r0x1000a008;
      local_8 = 0;
      puVar15 = &DAT_10014c80;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x10011ce8);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_10011cd0)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_10014c80 + uVar8 + 1);
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
      _DAT_10014b7c = 1;
      DAT_10014b64 = CodePage;
      DAT_10014d84 = FUN_1000a1be(CodePage);
      DAT_10014b70 = *(undefined4 *)(iVar12 + 0x10011cdc);
      DAT_10014b74 = *(undefined4 *)(iVar12 + 0x10011ce0);
      DAT_10014b78 = *(undefined4 *)(iVar12 + 0x10011ce4);
      goto LAB_1000a158;
    }
    goto LAB_1000a153;
  }
  goto LAB_10009fee;
code_r0x1000a008:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if (0x10011dc7 < (int)pUVar5) goto code_r0x1000a013;
  goto LAB_1000a004;
code_r0x1000a013:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_10014d84 = 0;
    puVar15 = &DAT_10014c80;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_10014b7c = 0;
      DAT_10014b64 = CodePage;
    }
    else {
      DAT_10014b64 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_10014c80 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_10014c80 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_10014d84 = FUN_1000a1be(CodePage);
      _DAT_10014b7c = 1;
    }
    DAT_10014b70 = 0;
    DAT_10014b74 = 0;
    DAT_10014b78 = 0;
  }
  else {
    if (DAT_10014798 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_1000a165;
    }
LAB_1000a153:
    FUN_1000a1f1();
  }
LAB_1000a158:
  FUN_1000a21a();
LAB_10009fee:
  uVar14 = 0;
LAB_1000a165:
  FUN_10008cf2(0x19);
  return uVar14;
}



// ============================================================
// FUN_1000a174 @ 0x1000a174 74B
// ============================================================

int __cdecl FUN_1000a174(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_10014798 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000a18e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_10014798 = 1;
                    /* WARNING: Could not recover jumptable at 0x1000a1a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1001474c;
  }
  DAT_10014798 = (uint)bVar2;
  return param_1;
}



// ============================================================
// FUN_1000a1be @ 0x1000a1be 51B
// ============================================================

undefined4 __cdecl FUN_1000a1be(int param_1)

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
// FUN_1000a1f1 @ 0x1000a1f1 41B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a1f1(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10014c80;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_10014b64 = 0;
  _DAT_10014b7c = 0;
  DAT_10014d84 = 0;
  DAT_10014b70 = 0;
  DAT_10014b74 = 0;
  DAT_10014b78 = 0;
  return;
}



// ============================================================
// FUN_1000a21a @ 0x1000a21a 389B
// ============================================================

void FUN_1000a21a(void)

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
  
  BVar2 = GetCPInfo(DAT_10014b64,&local_18);
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
    FUN_1000d794(1,local_118,0x100,local_518,DAT_10014b64,DAT_10014d84,0);
    FUN_1000d545(DAT_10014d84,0x100,local_118,0x100,local_218,0x100,DAT_10014b64,0);
    FUN_1000d545(DAT_10014d84,0x200,local_118,0x100,local_318,0x100,DAT_10014b64,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_10014c80 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_1000a326;
        }
        (&DAT_10014b80)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10014c80 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_1000a326:
        (&DAT_10014b80)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_10014c80 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1000a370;
        }
        (&DAT_10014b80)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_10014c80 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1000a370:
        (&DAT_10014b80)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// ============================================================
// FUN_1000a39f @ 0x1000a39f 28B
// ============================================================

void FUN_1000a39f(void)

{
  if (DAT_10014d8c == 0) {
    FUN_10009fc7(-3);
    DAT_10014d8c = 1;
  }
  return;
}



// ============================================================
// FUN_1000a3d0 @ 0x1000a3d0 224B
// ============================================================

uint * __cdecl FUN_1000a3d0(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_1000a3ec;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_1000a41f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x1000a43b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_1000a3ec:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x1000a43b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x1000a43b;
    }
  }
LAB_1000a41f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x1000a43b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_1000a4a8:
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
    if (bVar1 == 0) goto LAB_1000a4a8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// ============================================================
// _strcmp @ 0x1000a4b0 129B
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
      if (bVar4 != *_Str2) goto LAB_1000a4f4;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_1000a4c0;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_1000a4f4;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_1000a4f4;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_1000a4c0:
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
LAB_1000a4f4:
  return (uint)bVar5 * -2 + 1;
}



// ============================================================
// FUN_1000a534 @ 0x1000a534 70B
// ============================================================

int FUN_1000a534(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_10009df8();
    return iVar3;
  }
  if ((DAT_1001479c != (FARPROC)0x0) &&
     (bVar2 = FUN_1000d3fd(DAT_1001479c), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_1001479c)(param_1);
    return iVar3;
  }
  return 0;
}



// ============================================================
// FUN_1000a598 @ 0x1000a598 444B
// ============================================================

void FUN_1000a598(void)

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
  DAT_10014b60 = 0x20;
  DAT_10014a60 = puVar2;
  for (; puVar2 < DAT_10014a60 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_10014b60 < (int)UVar8) {
      puVar2 = &DAT_10014a64;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_10014b60;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_10014b60 = DAT_10014b60 + 0x20;
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
      } while ((int)DAT_10014b60 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_10014a60)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_10014a60 + iVar6 * 9;
    if (DAT_10014a60[iVar6 * 9] == -1) {
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
          goto LAB_1000a73d;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1000a73d:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_10014b60);
      return;
    }
  } while( true );
}



// ============================================================
// FUN_1000a754 @ 0x1000a754 84B
// ============================================================

void FUN_1000a754(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_10014a60;
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
      FUN_10008a59((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x10014b60);
  return;
}



// ============================================================
// FUN_1000a7a8 @ 0x1000a7a8 185B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a7a8(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_10014d8c == 0) {
    FUN_1000a39f();
  }
  iVar5 = 0;
  for (puVar6 = DAT_100146b0; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_10014774 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_100146b0;
  puVar6 = DAT_100146b0;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_1000a3c0((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10008a59((undefined *)DAT_100146b0);
  DAT_100146b0 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_10014d88 = 1;
  return;
}



// ============================================================
// FUN_1000a861 @ 0x1000a861 153B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a861(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10014d8c == 0) {
    FUN_1000a39f();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100147a0,0x104);
  _DAT_10014784 = &DAT_100147a0;
  pbVar2 = &DAT_100147a0;
  if (*DAT_10015dc4 != 0) {
    pbVar2 = DAT_10015dc4;
  }
  FUN_1000a8fa(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000a8fa(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1001476c = puVar1;
  _DAT_10014768 = local_8 + -1;
  return;
}



// ============================================================
// FUN_1000a8fa @ 0x1000a8fa 436B
// ============================================================

void __cdecl FUN_1000a8fa(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_10014c80 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_10014c80 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_1000a9a5;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_1000a9a5:
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
          if ((*(byte *)((int)&DAT_10014c80 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_10014c80 + bVar1 + 1) & 4) != 0) {
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
// FUN_1000aaae @ 0x1000aaae 306B
// ============================================================

LPSTR FUN_1000aaae(void)

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
  if (DAT_100148a4 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_100148a4 = 1;
LAB_1000ab05:
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
        FUN_10008a59(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_100148a4 = 2;
  }
  else {
    if (DAT_100148a4 == 1) goto LAB_1000ab05;
    if (DAT_100148a4 != 2) {
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
    FUN_10007d30((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// ============================================================
// FUN_1000abe0 @ 0x1000abe0 45B
// ============================================================

void __cdecl FUN_1000abe0(undefined4 *param_1)

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
// FUN_1000ac0d @ 0x1000ac0d 328B
// ============================================================

int FUN_1000ac0d(void)

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
  
  FUN_1000dc50();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = 'g';
    aCStackY_18[1] = -0x54;
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
      aCStackY_18[0] = -0x5b;
      aCStackY_18[1] = -0x54;
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",local_1230,0x16);
      if (iVar5 == 0) {
        pcVar7 = local_1230;
      }
      else {
        aCStackY_18[0] = -0x39;
        aCStackY_18[1] = -0x54;
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
        aCStackY_18[0] = '-';
        aCStackY_18[1] = -0x53;
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_1000d8dd(this,pbVar6,(int *)0x0,(void *)0xa);
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
    FUN_1000abe0((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// ============================================================
// FUN_1000ad55 @ 0x1000ad55 93B
// ============================================================

undefined4 __cdecl FUN_1000ad55(int param_1)

{
  undefined **ppuVar1;
  
  DAT_10014a50 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_10014a50 != (HANDLE)0x0) {
    DAT_10014a54 = FUN_1000ac0d();
    if (DAT_10014a54 == 3) {
      ppuVar1 = (undefined **)FUN_1000bef9(0x3f8);
    }
    else {
      if (DAT_10014a54 != 2) {
        return 1;
      }
      ppuVar1 = FUN_1000ca40();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_10014a50);
  }
  return 0;
}



// ============================================================
// FUN_1000adb2 @ 0x1000adb2 168B
// ============================================================

void FUN_1000adb2(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_10014a54 == 3) {
    iVar1 = 0;
    if (0 < DAT_10014a44) {
      puVar2 = (undefined4 *)((int)DAT_10014a48 + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_10014a50,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_10014a44);
    }
    HeapFree(DAT_10014a50,0,DAT_10014a48);
  }
  else if (DAT_10014a54 == 2) {
    ppuVar3 = &PTR_LOOP_10011e88;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_10011e88);
  }
  HeapDestroy(DAT_10014a50);
  return;
}



// ============================================================
// FUN_1000ae5a @ 0x1000ae5a 57B
// ============================================================

void FUN_1000ae5a(void)

{
  if ((DAT_100146b8 == 1) || ((DAT_100146b8 == 0 && (DAT_100146bc == 1)))) {
    FUN_1000ae93(0xfc);
    if (DAT_100148a8 != (code *)0x0) {
      (*DAT_100148a8)();
    }
    FUN_1000ae93(0xff);
  }
  return;
}



// ============================================================
// FUN_1000ae93 @ 0x1000ae93 339B
// ============================================================

void __cdecl FUN_1000ae93(DWORD param_1)

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
  pDVar2 = &DAT_10011df8;
  do {
    if (param_1 == *pDVar2) break;
    pDVar2 = pDVar2 + 2;
    iVar5 = iVar5 + 1;
  } while ((int)pDVar2 < 0x10011e88);
  if (param_1 == (&DAT_10011df8)[iVar5 * 2]) {
    if ((DAT_100146b8 == 1) || ((DAT_100146b8 == 0 && (DAT_100146bc == 1)))) {
      pDVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x10011dfc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,pDVar2,lpOverlapped);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_1000a3c0(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_1000a3c0(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_1000a3d0(local_a4,_Dest);
      FUN_1000a3d0(local_a4,(uint *)&DAT_1000f7a8);
      FUN_1000a3d0(local_a4,*(uint **)(iVar5 * 8 + 0x10011dfc));
      auStackY_1e3._3_4_ = 0x1000afb7;
      FUN_1000dc7f(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// ============================================================
// FUN_1000afe6 @ 0x1000afe6 289B
// ============================================================

int * __cdecl FUN_1000afe6(int param_1,int param_2)

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
  puStack_c = &DAT_1000f7e8;
  puStack_10 = &LAB_1000d118;
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
      if (DAT_10014a54 == 3) {
        if (puVar2 <= DAT_10014a4c) {
          FUN_10008c91(9);
          local_8 = 0;
          local_24 = FUN_1000c295(puVar2);
          local_8 = 0xffffffff;
          FUN_1000b07f();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1000b0d3;
LAB_1000b0c2:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_1000b0ce:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_10014a54 != 2) || (DAT_10013eac < puVar3)) goto LAB_1000b0ce;
        FUN_10008c91(9);
        local_8 = 1;
        local_24 = FUN_1000cd38((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_1000b108();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1000b0c2;
      }
LAB_1000b0d3:
      local_24 = HeapAlloc(DAT_10014a50,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_10014918 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_1000d3aa(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// ============================================================
// FUN_1000b1a4 @ 0x1000b1a4 101B
// ============================================================

int __cdecl FUN_1000b1a4(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10014b60) &&
     ((*(byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000ddc9(param_1);
    iVar1 = FUN_1000b209(param_1,param_2,param_3);
    FUN_1000de28(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10008d7a();
  *pDVar2 = 9;
  pDVar2 = FUN_10008d83();
  *pDVar2 = 0;
  return -1;
}



// ============================================================
// FUN_1000b209 @ 0x1000b209 395B
// ============================================================

int __cdecl FUN_1000b209(DWORD param_1,char *param_2,uint param_3)

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
LAB_1000b222:
    iVar4 = 0;
  }
  else {
    piVar1 = &DAT_10014a60 + ((int)param_1 >> 5);
    iVar4 = (param_1 & 0x1f) * 0x24;
    if ((*(byte *)(*piVar1 + 4 + iVar4) & 0x20) != 0) {
      FUN_1000b6d1(param_1,0,2);
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
LAB_1000b2f1:
      if (local_c != 0) {
        return local_c - local_14;
      }
      if (param_1 == 0) goto LAB_1000b363;
      if (param_1 == 5) {
        pDVar7 = FUN_10008d7a();
        *pDVar7 = 9;
        pDVar7 = FUN_10008d83();
        *pDVar7 = 5;
      }
      else {
        FUN_10008d07(param_1);
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
            goto LAB_1000b2f1;
          }
          local_c = local_c + local_10;
          if (((int)local_10 < (int)pcVar5 - (int)local_418) ||
             (param_3 <= (uint)((int)local_8 - (int)param_2))) goto LAB_1000b2f1;
        } while( true );
      }
LAB_1000b363:
      if (((*(byte *)(*piVar1 + 4 + iVar4) & 0x40) != 0) && (*param_2 == '\x1a')) goto LAB_1000b222;
      pDVar7 = FUN_10008d7a();
      *pDVar7 = 0x1c;
      pDVar7 = FUN_10008d83();
      *pDVar7 = 0;
    }
    iVar4 = -1;
  }
  return iVar4;
}



// ============================================================
// FUN_1000b394 @ 0x1000b394 68B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000b394(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_100146c0 = _DAT_100146c0 + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}



// ============================================================
// FUN_1000b3d8 @ 0x1000b3d8 220B
// ============================================================

uint __cdecl FUN_1000b3d8(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      param_1[3] = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        FUN_1000b394(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_1000de4a(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if ((iVar3 != 0) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_10011dd0;
          }
          else {
            puVar4 = (undefined *)((&DAT_10014a60)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            param_1[3] = param_1[3] | 0x2000;
          }
        }
        if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
          param_1[6] = 0x1000;
        }
        param_1[1] = iVar3 + -1;
        bVar1 = *(byte *)*param_1;
        *param_1 = (byte *)*param_1 + 1;
        return (uint)bVar1;
      }
      param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      param_1[1] = 0;
    }
    else {
      param_1[3] = uVar2 | 0x20;
    }
  }
  return 0xffffffff;
}



// ============================================================
// FUN_1000b4b4 @ 0x1000b4b4 40B
// ============================================================

ulonglong __cdecl FUN_1000b4b4(char *param_1)

{
  ulonglong uVar1;
  
  FUN_10007c68((uint)param_1);
  uVar1 = FUN_1000b4dc(param_1);
  FUN_10007cba((uint)param_1);
  return uVar1;
}



// ============================================================
// FUN_1000b4dc @ 0x1000b4dc 400B
// ============================================================

ulonglong __cdecl FUN_1000b4dc(char *param_1)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  char *pcVar4;
  DWORD *pDVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 local_14;
  uint local_8;
  
  pcVar8 = param_1;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(int *)(param_1 + 4) < 0) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  local_14 = FUN_1000e088(uVar1,0,0,1);
  iVar10 = (int)((ulonglong)local_14 >> 0x20);
  pcVar4 = (char *)local_14;
  if ((iVar10 != 0 && -1 < local_14) || (-1 < local_14)) {
    if ((*(ushort *)(param_1 + 0xc) & 0x108) == 0) {
      return local_14 - *(int *)(param_1 + 4);
    }
    pcVar6 = *(char **)param_1;
    pcVar7 = *(char **)(param_1 + 8);
    local_8 = (int)pcVar6 - (int)pcVar7;
    if ((*(uint *)(param_1 + 0xc) & 3) == 0) {
      if ((*(uint *)(param_1 + 0xc) & 0x80) == 0) {
        pDVar5 = FUN_10008d7a();
        *pDVar5 = 0x16;
        goto LAB_1000b582;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_10014a60)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
        for (; pcVar9 < pcVar6; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            local_8 = local_8 + 1;
          }
        }
      }
    }
    if (local_14 == 0) {
      uVar3 = (ulonglong)local_8;
    }
    else {
      if ((param_1[0xc] & 1U) != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          local_8 = 0;
        }
        else {
          pcVar6 = pcVar6 + (*(int *)(param_1 + 4) - (int)pcVar7);
          iVar11 = (uVar1 & 0x1f) * 0x24;
          if ((*(byte *)(iVar11 + 4 + (&DAT_10014a60)[(int)uVar1 >> 5]) & 0x80) != 0) {
            lVar12 = FUN_1000e088(uVar1,0,0,2);
            if (lVar12 == local_14) {
              pcVar7 = *(char **)(param_1 + 8);
              pcVar9 = pcVar6 + (int)pcVar7;
              param_1 = pcVar6;
              for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar2 = pcVar8[0xd] & 0x20;
            }
            else {
              FUN_1000e088(uVar1,(LONG)pcVar4,iVar10,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar6) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar2 = *(byte *)(iVar11 + 4 + (&DAT_10014a60)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar8;
            }
            pcVar6 = param_1;
            if (bVar2 != 0) {
              pcVar6 = param_1 + 1;
            }
          }
          param_1 = pcVar6;
          local_14 = CONCAT44(iVar10 - (uint)(pcVar4 < param_1),(int)pcVar4 - (int)param_1);
        }
      }
      uVar3 = CONCAT44(local_14._4_4_ + (uint)CARRY4(local_8,(uint)local_14),
                       local_8 + (uint)local_14);
    }
  }
  else {
LAB_1000b582:
    uVar3 = 0xffffffffffffffff;
  }
  return uVar3;
}



// ============================================================
// FUN_1000b66c @ 0x1000b66c 101B
// ============================================================

DWORD __cdecl FUN_1000b66c(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10014b60) &&
     ((*(byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000ddc9(param_1);
    DVar1 = FUN_1000b6d1(param_1,param_2,param_3);
    FUN_1000de28(param_1);
    return DVar1;
  }
  pDVar2 = FUN_10008d7a();
  *pDVar2 = 9;
  pDVar2 = FUN_10008d83();
  *pDVar2 = 0;
  return 0xffffffff;
}



// ============================================================
// FUN_1000b6d1 @ 0x1000b6d1 115B
// ============================================================

DWORD __cdecl FUN_1000b6d1(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  uint uVar4;
  
  hFile = (HANDLE)FUN_1000dd87(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10008d7a();
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
      pbVar1 = (byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar3;
    }
    FUN_10008d07(uVar4);
  }
  return 0xffffffff;
}



// ============================================================
// FUN_1000b744 @ 0x1000b744 353B
// ============================================================

int __cdecl FUN_1000b744(char *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  DWORD *pDVar4;
  char *pcVar5;
  DWORD DVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int local_c;
  DWORD local_8;
  
  pcVar8 = param_1;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(int *)(param_1 + 4) < 0) {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
  }
  local_8 = FUN_1000b66c(uVar1,0,1);
  if ((int)local_8 < 0) {
LAB_1000b7d2:
    local_c = -1;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc);
    if ((uVar2 & 0x108) == 0) {
      return local_8 - *(int *)(param_1 + 4);
    }
    pcVar5 = *(char **)param_1;
    pcVar7 = *(char **)(param_1 + 8);
    local_c = (int)pcVar5 - (int)pcVar7;
    if ((uVar2 & 3) == 0) {
      if ((uVar2 & 0x80) == 0) {
        pDVar4 = FUN_10008d7a();
        *pDVar4 = 0x16;
        goto LAB_1000b7d2;
      }
    }
    else {
      pcVar9 = pcVar7;
      if ((*(byte *)((&DAT_10014a60)[(int)uVar1 >> 5] + 4 + (uVar1 & 0x1f) * 0x24) & 0x80) != 0) {
        for (; pcVar9 < pcVar5; pcVar9 = pcVar9 + 1) {
          if (*pcVar9 == '\n') {
            local_c = local_c + 1;
          }
        }
      }
    }
    if (local_8 != 0) {
      if ((param_1[0xc] & 1U) != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          local_c = 0;
        }
        else {
          pcVar5 = pcVar5 + (*(int *)(param_1 + 4) - (int)pcVar7);
          iVar10 = (uVar1 & 0x1f) * 0x24;
          if ((*(byte *)(iVar10 + 4 + (&DAT_10014a60)[(int)uVar1 >> 5]) & 0x80) != 0) {
            DVar6 = FUN_1000b66c(uVar1,0,2);
            if (DVar6 == local_8) {
              pcVar7 = *(char **)(param_1 + 8);
              pcVar9 = pcVar5 + (int)pcVar7;
              param_1 = pcVar5;
              for (; pcVar7 < pcVar9; pcVar7 = pcVar7 + 1) {
                if (*pcVar7 == '\n') {
                  param_1 = param_1 + 1;
                }
              }
              bVar3 = pcVar8[0xd] & 0x20;
            }
            else {
              FUN_1000b66c(uVar1,local_8,0);
              pcVar8 = (char *)0x200;
              if ((((char *)0x200 < pcVar5) || ((*(uint *)(param_1 + 0xc) & 8) == 0)) ||
                 ((*(uint *)(param_1 + 0xc) & 0x400) != 0)) {
                pcVar8 = *(char **)(param_1 + 0x18);
              }
              bVar3 = *(byte *)(iVar10 + 4 + (&DAT_10014a60)[(int)uVar1 >> 5]) & 4;
              param_1 = pcVar8;
            }
            pcVar5 = param_1;
            if (bVar3 != 0) {
              pcVar5 = param_1 + 1;
            }
          }
          param_1 = pcVar5;
          local_8 = local_8 - (int)param_1;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}



// ============================================================
// FUN_1000b8a5 @ 0x1000b8a5 47B
// ============================================================

undefined4 __cdecl FUN_1000b8a5(int *param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  undefined4 uVar1;
  
  FUN_10007c68((uint)param_1);
  uVar1 = FUN_1000b8d4(param_1,param_2,param_3,param_4);
  FUN_10007cba((uint)param_1);
  return uVar1;
}



// ============================================================
// FUN_1000b8d4 @ 0x1000b8d4 145B
// ============================================================

undefined4 __cdecl FUN_1000b8d4(int *param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  uint uVar1;
  DWORD *pDVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = CONCAT44(param_3,param_2);
  if (((param_1[3] & 0x83U) == 0) || (((param_4 != 0 && (param_4 != 1)) && (param_4 != 2)))) {
    pDVar2 = FUN_10008d7a();
    *pDVar2 = 0x16;
  }
  else {
    param_1[3] = param_1[3] & 0xffffffef;
    if (param_4 == 1) {
      uVar3 = FUN_1000b4dc((char *)param_1);
      lVar4 = uVar3 + lVar4;
      param_4 = 0;
    }
    param_3 = (LONG)((ulonglong)lVar4 >> 0x20);
    param_2 = (LONG)lVar4;
    FUN_100084a0(param_1);
    uVar1 = param_1[3];
    if ((uVar1 & 0x80) == 0) {
      if ((((uVar1 & 1) != 0) && ((uVar1 & 8) != 0)) && ((uVar1 & 0x400) == 0)) {
        param_1[6] = 0x200;
      }
    }
    else {
      param_1[3] = uVar1 & 0xfffffffc;
    }
    lVar4 = FUN_1000e088(param_1[4],param_2,param_3,param_4);
    if (lVar4 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}



// ============================================================
// __freebuf @ 0x1000b965 43B
// ============================================================

/* Library Function - Single Match
    __freebuf
   
   Library: Visual Studio 2003 Release */

void __cdecl __freebuf(FILE *_File)

{
  if (((_File->_flag & 0x83U) != 0) && ((_File->_flag & 8U) != 0)) {
    FUN_10008a59(_File->_base);
    *(ushort *)&_File->_flag = (ushort)_File->_flag & 0xfbf7;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_cnt = 0;
  }
  return;
}



// ============================================================
// FUN_1000b990 @ 0x1000b990 147B
// ============================================================

undefined4 __cdecl FUN_1000b990(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_10014b60 <= param_1) {
LAB_1000ba11:
    pDVar3 = FUN_10008d7a();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_1000ba11;
  FUN_1000ddc9(param_1);
  if ((*(byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1000dd87(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1000ba06;
    pDVar3 = FUN_10008d83();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_10008d7a();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1000ba06:
  FUN_1000de28(param_1);
  return uVar5;
}



// ============================================================
// FUN_1000ba23 @ 0x1000ba23 93B
// ============================================================

undefined4 __cdecl FUN_1000ba23(uint param_1)

{
  undefined4 uVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10014b60) &&
     ((*(byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000ddc9(param_1);
    uVar1 = FUN_1000ba80(param_1);
    FUN_1000de28(param_1);
    return uVar1;
  }
  pDVar2 = FUN_10008d7a();
  *pDVar2 = 9;
  pDVar2 = FUN_10008d83();
  *pDVar2 = 0;
  return 0xffffffff;
}



// ============================================================
// FUN_1000ba80 @ 0x1000ba80 131B
// ============================================================

undefined4 __cdecl FUN_1000ba80(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1000dd87(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1000dd87(2);
      iVar2 = FUN_1000dd87(1);
      if (iVar2 == iVar1) goto LAB_1000bace;
    }
    hObject = (HANDLE)FUN_1000dd87(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1000bad0;
    }
  }
LAB_1000bace:
  DVar4 = 0;
LAB_1000bad0:
  FUN_1000dd08(param_1);
  *(undefined1 *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_10008d07(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// ============================================================
// FUN_1000bb03 @ 0x1000bb03 295B
// ============================================================

uint __cdecl FUN_1000bb03(uint param_1,int *param_2)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  byte bVar4;
  undefined3 extraout_var;
  undefined *puVar5;
  uint uVar6;
  int *piVar7;
  
  piVar3 = param_2;
  uVar6 = param_2[3];
  uVar1 = param_2[4];
  if (((uVar6 & 0x82) == 0) || ((uVar6 & 0x40) != 0)) {
LAB_1000bc1c:
    param_2[3] = uVar6 | 0x20;
  }
  else {
    if ((uVar6 & 1) != 0) {
      param_2[1] = 0;
      if ((uVar6 & 0x10) == 0) goto LAB_1000bc1c;
      *param_2 = param_2[2];
      param_2[3] = uVar6 & 0xfffffffe;
    }
    uVar6 = param_2[3];
    param_2[1] = 0;
    param_2 = (int *)0x0;
    piVar3[3] = uVar6 & 0xffffffef | 2;
    if (((uVar6 & 0x10c) == 0) &&
       (((piVar3 != (int *)&DAT_10011510 && (piVar3 != (int *)&DAT_10011530)) ||
        (bVar4 = FUN_1000d42c(uVar1), CONCAT31(extraout_var,bVar4) == 0)))) {
      FUN_1000b394(piVar3);
    }
    uVar6 = param_1;
    if ((*(ushort *)(piVar3 + 3) & 0x108) == 0) {
      piVar7 = (int *)0x2;
      param_2 = (int *)FUN_1000b1a4(uVar1,(char *)&param_1,2);
    }
    else {
      pcVar2 = (char *)piVar3[2];
      piVar7 = (int *)(*piVar3 - (int)pcVar2);
      *piVar3 = (int)(pcVar2 + 2);
      piVar3[1] = piVar3[6] + -2;
      if ((int)piVar7 < 1) {
        if (uVar1 == 0xffffffff) {
          puVar5 = &DAT_10011dd0;
        }
        else {
          puVar5 = (undefined *)((&DAT_10014a60)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
        }
        if ((puVar5[4] & 0x20) != 0) {
          FUN_1000b66c(uVar1,0,2);
        }
      }
      else {
        param_2 = (int *)FUN_1000b1a4(uVar1,pcVar2,(uint)piVar7);
      }
      *(short *)piVar3[2] = (short)param_1;
      uVar6 = param_1;
    }
    if (param_2 == piVar7) {
      return uVar6 & 0xffff;
    }
    piVar3[3] = piVar3[3] | 0x20;
  }
  return 0xffff;
}



// ============================================================
// FUN_1000bc2a @ 0x1000bc2a 89B
// ============================================================

int __cdecl FUN_1000bc2a(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_10014da0);
  bVar2 = DAT_10014d9c != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_10014da0);
    FUN_10008c91(0x13);
  }
  iVar1 = FUN_1000bc83(param_1,param_2);
  if (bVar2) {
    FUN_10008cf2(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_10014da0);
  }
  return iVar1;
}



// ============================================================
// FUN_1000bc83 @ 0x1000bc83 105B
// ============================================================

int __cdecl FUN_1000bc83(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_1001473c == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_1001474c,0x220,&param_2,1,lpMultiByteStr,DAT_10011cb0,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_10008d7a();
  *pDVar2 = 0x2a;
  return -1;
}



// ============================================================
// FUN_1000bcec @ 0x1000bcec 231B
// ============================================================

undefined2 __cdecl FUN_1000bcec(undefined4 *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar2 = param_1[3];
  if (((uVar2 & 0x83) != 0) && ((uVar2 & 0x40) == 0)) {
    if ((uVar2 & 2) == 0) {
      param_1[3] = uVar2 | 1;
      if ((uVar2 & 0x10c) == 0) {
        FUN_1000b394(param_1);
      }
      else {
        *param_1 = param_1[2];
      }
      iVar3 = FUN_1000de4a(param_1[4],(char *)param_1[2],(char *)param_1[6]);
      param_1[1] = iVar3;
      if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != -1)) {
        if ((param_1[3] & 0x82) == 0) {
          uVar2 = param_1[4];
          if (uVar2 == 0xffffffff) {
            puVar4 = &DAT_10011dd0;
          }
          else {
            puVar4 = (undefined *)((&DAT_10014a60)[(int)uVar2 >> 5] + (uVar2 & 0x1f) * 0x24);
          }
          if ((puVar4[4] & 0x82) == 0x82) {
            param_1[3] = param_1[3] | 0x2000;
          }
        }
        if (((param_1[6] == 0x200) && ((param_1[3] & 8) != 0)) && ((param_1[3] & 0x400) == 0)) {
          param_1[6] = 0x1000;
        }
        param_1[1] = iVar3 + -2;
        uVar1 = *(undefined2 *)*param_1;
        *param_1 = (undefined2 *)*param_1 + 1;
        return uVar1;
      }
      param_1[3] = param_1[3] | (-(uint)(iVar3 != 0) & 0x10) + 0x10;
      param_1[1] = 0;
    }
    else {
      param_1[3] = uVar2 | 0x20;
    }
  }
  return 0xffff;
}



// ============================================================
// FUN_1000bdd3 @ 0x1000bdd3 93B
// ============================================================

uint __cdecl FUN_1000bdd3(LPWSTR param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_10014da0);
  bVar2 = DAT_10014d9c != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_10014da0);
    FUN_10008c91(0x13);
  }
  uVar1 = FUN_1000be30(param_1,param_2,param_3);
  if (bVar2) {
    FUN_10008cf2(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_10014da0);
  }
  return uVar1;
}



// ============================================================
// FUN_1000be30 @ 0x1000be30 201B
// ============================================================

uint __cdecl FUN_1000be30(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  DWORD *pDVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_1001473c == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_1001193c[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_1001474c,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_10011cb0) {
          if ((int)param_3 < (int)DAT_10011cb0) goto LAB_1000bec2;
          iVar2 = MultiByteToWideChar(DAT_1001474c,9,(LPCSTR)param_2,DAT_10011cb0,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_10011cb0;
          }
        }
        if ((DAT_10011cb0 <= param_3) && (param_2[1] != 0)) {
          return DAT_10011cb0;
        }
      }
LAB_1000bec2:
      pDVar3 = FUN_10008d7a();
      *pDVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}



// ============================================================
// FUN_1000bef9 @ 0x1000bef9 72B
// ============================================================

undefined4 __cdecl FUN_1000bef9(undefined4 param_1)

{
  DAT_10014a48 = HeapAlloc(DAT_10014a50,0,0x140);
  if (DAT_10014a48 == (LPVOID)0x0) {
    return 0;
  }
  DAT_10014a40 = 0;
  DAT_10014a44 = 0;
  DAT_10014a3c = DAT_10014a48;
  DAT_10014a4c = param_1;
  DAT_10014a34 = 0x10;
  return 1;
}



// ============================================================
// FUN_1000bf41 @ 0x1000bf41 43B
// ============================================================

uint __cdecl FUN_1000bf41(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_10014a48;
  while( true ) {
    if (DAT_10014a48 + DAT_10014a44 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// ============================================================
// FUN_1000bf6c @ 0x1000bf6c 809B
// ============================================================

void __cdecl FUN_1000bf6c(uint *param_1,int param_2)

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
      if (DAT_10014a40 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_10014a38 * 0x8000 + DAT_10014a40[3]),0x8000,0x4000);
        DAT_10014a40[2] = DAT_10014a40[2] | 0x80000000U >> ((byte)DAT_10014a38 & 0x1f);
        *(undefined4 *)(DAT_10014a40[4] + 0xc4 + DAT_10014a38 * 4) = 0;
        *(char *)(DAT_10014a40[4] + 0x43) = *(char *)(DAT_10014a40[4] + 0x43) + -1;
        if (*(char *)(DAT_10014a40[4] + 0x43) == '\0') {
          DAT_10014a40[1] = DAT_10014a40[1] & 0xfffffffe;
        }
        if (DAT_10014a40[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_10014a40[3],0,0x8000);
          HeapFree(DAT_10014a50,0,(LPVOID)DAT_10014a40[4]);
          FUN_10007500(DAT_10014a40,DAT_10014a40 + 5,
                       (DAT_10014a44 * 0x14 - (int)DAT_10014a40) + -0x14 + DAT_10014a48);
          DAT_10014a44 = DAT_10014a44 + -1;
          if (DAT_10014a40 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_10014a3c = DAT_10014a48;
        }
      }
      DAT_10014a40 = param_1;
      DAT_10014a38 = uVar14;
    }
  }
  return;
}



// ============================================================
// FUN_1000c295 @ 0x1000c295 777B
// ============================================================

int * __cdecl FUN_1000c295(uint *param_1)

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
  
  puVar8 = DAT_10014a48 + DAT_10014a44 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_10014a3c;
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
  puVar11 = DAT_10014a48;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_10014a3c && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_10014a3c) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_10014a48;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_10014a3c && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_10014a3c) && (param_1 = FUN_1000c59e(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_1000c64f((int)param_1);
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
  DAT_10014a3c = param_1;
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
    if (iVar9 == 0) goto LAB_1000c55b;
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
LAB_1000c55b:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_10014a40)) && (local_8 == DAT_10014a38)) {
    DAT_10014a40 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// ============================================================
// FUN_1000c59e @ 0x1000c59e 177B
// ============================================================

undefined4 * FUN_1000c59e(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_10014a44 == DAT_10014a34) {
    pvVar2 = HeapReAlloc(DAT_10014a50,0,DAT_10014a48,(DAT_10014a34 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_10014a34 = DAT_10014a34 + 0x10;
    DAT_10014a48 = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_10014a48 + DAT_10014a44 * 0x14);
  pvVar2 = HeapAlloc(DAT_10014a50,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_10014a44 = DAT_10014a44 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_10014a50,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// ============================================================
// FUN_1000c64f @ 0x1000c64f 251B
// ============================================================

int __cdecl FUN_1000c64f(int param_1)

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
// FUN_1000c74a @ 0x1000c74a 758B
// ============================================================

undefined4 __cdecl FUN_1000c74a(uint *param_1,int param_2,int param_3)

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
// FUN_1000ca40 @ 0x1000ca40 324B
// ============================================================

undefined ** FUN_1000ca40(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_10011e98 == -1) {
    lpMem = &PTR_LOOP_10011e88;
  }
  else {
    lpMem = HeapAlloc(DAT_10014a50,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_10011e88) {
        if (PTR_LOOP_10011e88 == (undefined *)0x0) {
          PTR_LOOP_10011e88 = (undefined *)&PTR_LOOP_10011e88;
        }
        if (PTR_LOOP_10011e8c == (undefined *)0x0) {
          PTR_LOOP_10011e8c = (undefined *)&PTR_LOOP_10011e88;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_10011e88;
        lpMem[1] = PTR_LOOP_10011e8c;
        PTR_LOOP_10011e8c = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_10011e88) {
    HeapFree(DAT_10014a50,0,lpMem);
  }
  return (undefined **)0x0;
}



// ============================================================
// FUN_1000cb84 @ 0x1000cb84 86B
// ============================================================

void __cdecl FUN_1000cb84(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_10013ea8 == param_1) {
    PTR_LOOP_10013ea8 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_10011e88) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_10014a50,0,param_1);
    return;
  }
  DAT_10011e98 = 0xffffffff;
  return;
}



// ============================================================
// FUN_1000cbda @ 0x1000cbda 194B
// ============================================================

void __cdecl FUN_1000cbda(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_10011e8c;
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
            DAT_100148ac = DAT_100148ac + -1;
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
          FUN_1000cb84(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_10011e8c) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// ============================================================
// FUN_1000cc9c @ 0x1000cc9c 87B
// ============================================================

int __cdecl FUN_1000cc9c(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_10011e88;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_10011e88) {
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
// FUN_1000ccf3 @ 0x1000ccf3 69B
// ============================================================

void __cdecl FUN_1000ccf3(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_100148ac = DAT_100148ac + 1, DAT_100148ac == 0x20)) {
    FUN_1000cbda(0x10);
  }
  return;
}



// ============================================================
// FUN_1000cd38 @ 0x1000cd38 520B
// ============================================================

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_1000cd38(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_10013ea8;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_1000cf40(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_1000ce03;
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
          piVar5 = (int *)FUN_1000cf40(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_1000ce03:
            PTR_LOOP_10013ea8 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_10013ea8) {
      ppuVar9 = &PTR_LOOP_10011e88;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_10011e88) {
          ppuVar9 = FUN_1000ca40();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_10013ea8 = (undefined *)ppuVar9;
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
      PTR_LOOP_10013ea8 = (undefined *)ppuVar9;
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
// FUN_1000cf40 @ 0x1000cf40 292B
// ============================================================

int __cdecl FUN_1000cf40(int *param_1,uint param_2,uint param_3)

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
          goto LAB_1000d053;
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
LAB_1000d053:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// ============================================================
// FUN_1000d064 @ 0x1000d064 169B
// ============================================================

undefined4 __cdecl FUN_1000d064(int param_1,int *param_2,byte *param_3,uint param_4)

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
// FUN_1000d1d5 @ 0x1000d1d5 27B
// ============================================================

void FUN_1000d1d5(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// ============================================================
// _strncpy @ 0x1000d1f0 254B
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
        goto joined_r0x1000d22e;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_1000d26b;
        goto LAB_1000d2d9;
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
joined_r0x1000d2d5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_1000d2d9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_1000d26b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x1000d2d5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x1000d2d5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x1000d2d5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x1000d22e:
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
LAB_1000d26b:
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
// FUN_1000d2f0 @ 0x1000d2f0 62B
// ============================================================

int __cdecl FUN_1000d2f0(byte *param_1,byte *param_2)

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
// _strncmp @ 0x1000d330 56B
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
// FUN_1000d370 @ 0x1000d370 58B
// ============================================================

byte * __cdecl FUN_1000d370(byte *param_1,byte *param_2)

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
// FUN_1000d3aa @ 0x1000d3aa 27B
// ============================================================

undefined4 __cdecl FUN_1000d3aa(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_10014914 != (code *)0x0) {
    iVar1 = (*DAT_10014914)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// ============================================================
// FUN_1000d3c5 @ 0x1000d3c5 28B
// ============================================================

bool __cdecl FUN_1000d3c5(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// ============================================================
// FUN_1000d3e1 @ 0x1000d3e1 28B
// ============================================================

bool __cdecl FUN_1000d3e1(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// ============================================================
// FUN_1000d3fd @ 0x1000d3fd 24B
// ============================================================

bool __cdecl FUN_1000d3fd(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



// ============================================================
// FUN_1000d415 @ 0x1000d415 23B
// ============================================================

void FUN_1000d415(void)

{
  FUN_1000ae93(10);
  FUN_1000e351((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// ============================================================
// FUN_1000d42c @ 0x1000d42c 41B
// ============================================================

byte __cdecl FUN_1000d42c(uint param_1)

{
  if (DAT_10014b60 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



// ============================================================
// FUN_1000d545 @ 0x1000d545 511B
// ============================================================

int __cdecl
FUN_1000d545(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000f808;
  puStack_10 = &LAB_1000d118;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1001491c == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1001491c = 2;
    }
    else {
      DAT_1001491c = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000d769(param_3,param_4);
  }
  if (DAT_1001491c == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1001491c == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1001474c;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_1000dc50();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_1000dc50();
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
// FUN_1000d769 @ 0x1000d769 43B
// ============================================================

int __cdecl FUN_1000d769(char *param_1,int param_2)

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
// FUN_1000d794 @ 0x1000d794 318B
// ============================================================

BOOL __cdecl
FUN_1000d794(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000f820;
  puStack_10 = &LAB_1000d118;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_10014920;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_10014920 == 0) {
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
  DAT_10014920 = iVar3;
  if (DAT_10014920 != 2) {
    if (DAT_10014920 == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1001474c;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_1000dc50();
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
    param_6 = DAT_1001473c;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// ============================================================
// FUN_1000d8dd @ 0x1000d8dd 23B
// ============================================================

void __thiscall FUN_1000d8dd(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_1000d8f4(this,param_1,param_2,param_3,0);
  return;
}



// ============================================================
// FUN_1000d8f4 @ 0x1000d8f4 517B
// ============================================================

void * __thiscall FUN_1000d8f4(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_10011cb0 < 2) {
      uVar3 = (byte)PTR_DAT_1001193c[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1001193c;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_1000e654(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1000d94f:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_1000d94f;
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
      goto LAB_1000d9b9;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_1000d9b9;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_1000d9b9:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_10011cb0 < 2) {
      uVar5 = (byte)PTR_DAT_1001193c[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_1000e654(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_10011cb0 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1001193c + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1000e654(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_1000da65:
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
          pDVar6 = FUN_10008d7a();
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
      uVar3 = FUN_1000e519((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_1000da65;
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
// _strchr @ 0x1000db10 193B
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
// _strstr @ 0x1000dbd0 128B
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
LAB_1000dc43:
        return _Str + -1;
      }
      if (*pcVar10 != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') goto LAB_1000dc43;
      pcVar2 = pcVar10 + 1;
      pcVar8 = pcVar8 + 2;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// ============================================================
// FUN_1000dc50 @ 0x1000dc50 47B
// ============================================================

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1000dc50(void)

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
// FUN_1000dc7f @ 0x1000dc7f 137B
// ============================================================

int __cdecl FUN_1000dc7f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10014924 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10014924 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10014924 != (FARPROC)0x0) {
        DAT_10014928 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1001492c = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1000dcce;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1000dcce:
    if (DAT_10014928 != (FARPROC)0x0) {
      iVar1 = (*DAT_10014928)();
      if ((iVar1 != 0) && (DAT_1001492c != (FARPROC)0x0)) {
        iVar1 = (*DAT_1001492c)(iVar1);
      }
    }
    iVar1 = (*DAT_10014924)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// ============================================================
// FUN_1000dd08 @ 0x1000dd08 127B
// ============================================================

undefined4 __cdecl FUN_1000dd08(uint param_1)

{
  int *piVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10014b60) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_10014a60)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_100146bc == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000dd64;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000dd64:
      *(undefined4 *)((&DAT_10014a60)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_10008d7a();
  *pDVar2 = 9;
  pDVar2 = FUN_10008d83();
  *pDVar2 = 0;
  return 0xffffffff;
}



// ============================================================
// FUN_1000dd87 @ 0x1000dd87 66B
// ============================================================

undefined4 __cdecl FUN_1000dd87(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_10014b60) &&
     ((*(byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(undefined4 *)((&DAT_10014a60)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_10008d7a();
  *pDVar1 = 9;
  pDVar1 = FUN_10008d83();
  *pDVar1 = 0;
  return 0xffffffff;
}



// ============================================================
// FUN_1000ddc9 @ 0x1000ddc9 95B
// ============================================================

void __cdecl FUN_1000ddc9(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_10014a60)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_10008c91(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_10008cf2(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_10014a60)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



// ============================================================
// FUN_1000de28 @ 0x1000de28 34B
// ============================================================

void __cdecl FUN_1000de28(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_10014a60)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



// ============================================================
// FUN_1000de4a @ 0x1000de4a 101B
// ============================================================

int __cdecl FUN_1000de4a(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_10014b60) &&
     ((*(byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000ddc9(param_1);
    iVar1 = FUN_1000deaf(param_1,param_2,param_3);
    FUN_1000de28(param_1);
    return iVar1;
  }
  pDVar2 = FUN_10008d7a();
  *pDVar2 = 9;
  pDVar2 = FUN_10008d83();
  *pDVar2 = 0;
  return -1;
}



// ============================================================
// FUN_1000deaf @ 0x1000deaf 473B
// ============================================================

int __cdecl FUN_1000deaf(uint param_1,char *param_2,char *param_3)

{
  int *piVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  BOOL BVar5;
  DWORD DVar6;
  DWORD *pDVar7;
  char *pcVar8;
  int iVar9;
  DWORD local_10;
  char *local_c;
  char local_5;
  
  local_c = (char *)0x0;
  if (param_3 != (char *)0x0) {
    piVar1 = &DAT_10014a60 + ((int)param_1 >> 5);
    iVar9 = (param_1 & 0x1f) * 0x24;
    bVar4 = *(byte *)((&DAT_10014a60)[(int)param_1 >> 5] + iVar9 + 4);
    if ((bVar4 & 2) == 0) {
      pcVar8 = param_2;
      if (((bVar4 & 0x48) != 0) &&
         (cVar3 = *(char *)((&DAT_10014a60)[(int)param_1 >> 5] + iVar9 + 5), cVar3 != '\n')) {
        param_3 = param_3 + -1;
        *param_2 = cVar3;
        pcVar8 = param_2 + 1;
        local_c = (char *)0x1;
        *(undefined1 *)(*piVar1 + 5 + iVar9) = 10;
      }
      BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),pcVar8,(DWORD)param_3,&local_10,
                       (LPOVERLAPPED)0x0);
      if (BVar5 == 0) {
        DVar6 = GetLastError();
        if (DVar6 == 5) {
          pDVar7 = FUN_10008d7a();
          *pDVar7 = 9;
          pDVar7 = FUN_10008d83();
          *pDVar7 = 5;
        }
        else {
          if (DVar6 == 0x6d) {
            return 0;
          }
          FUN_10008d07(DVar6);
        }
        return -1;
      }
      bVar4 = *(byte *)(*piVar1 + 4 + iVar9);
      if ((bVar4 & 0x80) == 0) {
        return (int)local_c + local_10;
      }
      if ((local_10 == 0) || (*param_2 != '\n')) {
        bVar4 = bVar4 & 0xfb;
      }
      else {
        bVar4 = bVar4 | 4;
      }
      *(byte *)(*piVar1 + 4 + iVar9) = bVar4;
      param_3 = param_2;
      local_c = param_2 + (int)local_c + local_10;
      pcVar8 = param_2;
      if (param_2 < local_c) {
        do {
          cVar3 = *param_3;
          if (cVar3 == '\x1a') {
            pbVar2 = (byte *)(*piVar1 + 4 + iVar9);
            bVar4 = *pbVar2;
            if ((bVar4 & 0x40) == 0) {
              *pbVar2 = bVar4 | 2;
            }
            break;
          }
          if (cVar3 == '\r') {
            if (param_3 < local_c + -1) {
              if (param_3[1] == '\n') {
                param_3 = param_3 + 2;
                goto LAB_1000e03a;
              }
              *pcVar8 = '\r';
              pcVar8 = pcVar8 + 1;
              param_3 = param_3 + 1;
            }
            else {
              param_3 = param_3 + 1;
              BVar5 = ReadFile(*(HANDLE *)(*piVar1 + iVar9),&local_5,1,&local_10,(LPOVERLAPPED)0x0);
              if (((BVar5 == 0) && (DVar6 = GetLastError(), DVar6 != 0)) || (local_10 == 0)) {
LAB_1000e054:
                *pcVar8 = '\r';
LAB_1000e057:
                pcVar8 = pcVar8 + 1;
              }
              else if ((*(byte *)(*piVar1 + 4 + iVar9) & 0x48) == 0) {
                if ((pcVar8 == param_2) && (local_5 == '\n')) {
LAB_1000e03a:
                  *pcVar8 = '\n';
                  goto LAB_1000e057;
                }
                FUN_1000b6d1(param_1,-1,1);
                if (local_5 != '\n') goto LAB_1000e054;
              }
              else {
                if (local_5 == '\n') goto LAB_1000e03a;
                *pcVar8 = '\r';
                pcVar8 = pcVar8 + 1;
                *(char *)(*piVar1 + 5 + iVar9) = local_5;
              }
            }
          }
          else {
            *pcVar8 = cVar3;
            pcVar8 = pcVar8 + 1;
            param_3 = param_3 + 1;
          }
        } while (param_3 < local_c);
      }
      return (int)pcVar8 - (int)param_2;
    }
  }
  return 0;
}



// ============================================================
// FUN_1000e088 @ 0x1000e088 113B
// ============================================================

undefined8 __cdecl FUN_1000e088(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  DWORD *pDVar1;
  undefined8 uVar2;
  
  if ((param_1 < DAT_10014b60) &&
     ((*(byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1000ddc9(param_1);
    uVar2 = FUN_1000e0f9(param_1,param_2,param_3,param_4);
    FUN_1000de28(param_1);
    return uVar2;
  }
  pDVar1 = FUN_10008d7a();
  *pDVar1 = 9;
  pDVar1 = FUN_10008d83();
  *pDVar1 = 0;
  return 0xffffffffffffffff;
}



// ============================================================
// FUN_1000e0f9 @ 0x1000e0f9 133B
// ============================================================

undefined8 __cdecl FUN_1000e0f9(uint param_1,LONG param_2,LONG param_3,DWORD param_4)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD *pDVar2;
  DWORD DVar3;
  DWORD DVar4;
  LONG local_8;
  
  local_8 = param_3;
  hFile = (HANDLE)FUN_1000dd87(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar2 = FUN_10008d7a();
    *pDVar2 = 9;
LAB_1000e153:
    DVar4 = 0xffffffff;
    local_8 = -1;
  }
  else {
    DVar4 = SetFilePointer(hFile,param_2,&local_8,param_4);
    if (DVar4 == 0xffffffff) {
      DVar3 = GetLastError();
      if (DVar3 != 0) {
        FUN_10008d07(DVar3);
        goto LAB_1000e153;
      }
    }
    pbVar1 = (byte *)((&DAT_10014a60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24);
    *pbVar1 = *pbVar1 & 0xfd;
  }
  return CONCAT44(local_8,DVar4);
}



// ============================================================
// FUN_1000e180 @ 0x1000e180 208B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000e180(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_10014da0;
  if (DAT_1001473c == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000e1ce;
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
LAB_1000e1ce:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_10014da0 = _DAT_10014da0 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_10014d9c;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_10014da0 = iVar2;
      FUN_10008c91(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000e22f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1000e6c9(this,uVar8);
      uVar7 = FUN_1000e6c9(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000e22f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_10014da0 = _DAT_10014da0 + -1;
      UNLOCK();
    }
    else {
      FUN_10008cf2(0x13);
    }
  }
  return uVar7;
}



// ============================================================
// FUN_1000e250 @ 0x1000e250 257B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000e250(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_10014da0;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1001473c == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000e2af;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000e2af:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_10014da0 = _DAT_10014da0 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_10014d9c;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_10014da0 = iVar2;
        FUN_10008c91(0x13);
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
        uVar7 = FUN_1000e6c9(param_3,uVar7);
        uVar5 = FUN_1000e6c9(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000e325;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000e325:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_10014da0 = _DAT_10014da0 + -1;
        UNLOCK();
      }
      else {
        FUN_10008cf2(0x13);
      }
    }
  }
  return uVar6;
}



// ============================================================
// FUN_1000e351 @ 0x1000e351 386B
// ============================================================

undefined4 __cdecl FUN_1000e351(DWORD *param_1)

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
    puVar7 = &DAT_10014940;
    pcVar6 = DAT_10014940;
LAB_1000e3d7:
    bVar1 = true;
    FUN_10008c91(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_1001494c;
        pcVar6 = DAT_1001494c;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_10014944;
        pcVar6 = DAT_10014944;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_10014948;
        pcVar6 = DAT_10014948;
      }
      goto LAB_1000e3d7;
    }
    pDVar2 = FUN_10009cf1();
    uVar3 = FUN_1000e4d3((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_10008cf2(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_10008cf2(1);
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
      goto LAB_1000e44b;
    }
  }
  else {
LAB_1000e44b:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_10013f28 < DAT_10013f2c + DAT_10013f28) {
        iVar4 = DAT_10013f28 * 0xc;
        iVar5 = DAT_10013f28;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_10013f2c + DAT_10013f28);
      }
      goto LAB_1000e489;
    }
  }
  *puVar7 = 0;
LAB_1000e489:
  if (bVar1) {
    FUN_10008cf2(1);
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
// FUN_1000e4d3 @ 0x1000e4d3 61B
// ============================================================

uint __cdecl FUN_1000e4d3(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_10013f34 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_10013f34 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// FUN_1000e519 @ 0x1000e519 111B
// ============================================================

uint __cdecl FUN_1000e519(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1001473c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_10014da0);
    bVar1 = DAT_10014d9c != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_10014da0);
      this = (void *)0x13;
      FUN_10008c91(0x13);
    }
    param_1 = FUN_1000e588(this,param_1);
    if (bVar1) {
      FUN_10008cf2(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_10014da0);
    }
  }
  return param_1;
}



// ============================================================
// FUN_1000e588 @ 0x1000e588 204B
// ============================================================

uint __thiscall FUN_1000e588(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1001473c == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10011cb0 < 2) {
        uVar2 = (byte)PTR_DAT_1001193c[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1000e654(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1001193c[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000d545(DAT_1001473c,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
// FUN_1000e654 @ 0x1000e654 117B
// ============================================================

uint __thiscall FUN_1000e654(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1001193c + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1001193c[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000d794(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// ============================================================
// FUN_1000e6c9 @ 0x1000e6c9 203B
// ============================================================

uint __thiscall FUN_1000e6c9(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1001473c == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_10011cb0 < 2) {
        uVar2 = (byte)PTR_DAT_1001193c[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1000e654(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1001193c[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_1000d545(DAT_1001473c,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
// Unwind@1000e968 @ 0x1000e968 26B
// ============================================================

void Unwind_1000e968(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10004cc2((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4));
    return;
  }
  return;
}



// ============================================================
// Unwind@1000e98c @ 0x1000e98c 26B
// ============================================================

void Unwind_1000e98c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10004cc2((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4));
    return;
  }
  return;
}



// ============================================================
// Unwind@1000e9b0 @ 0x1000e9b0 26B
// ============================================================

void Unwind_1000e9b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10004cc2((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8));
    return;
  }
  return;
}



// ============================================================
// Unwind@1000e9d4 @ 0x1000e9d4 26B
// ============================================================

void Unwind_1000e9d4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10004cc2((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8));
    return;
  }
  return;
}



// ============================================================
// Unwind@1000eabc @ 0x1000eabc 26B
// ============================================================

void Unwind_1000eabc(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10005c2a((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4));
    return;
  }
  return;
}



// ============================================================
// Unwind@1000eae0 @ 0x1000eae0 26B
// ============================================================

void Unwind_1000eae0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10005c2a((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4));
    return;
  }
  return;
}



// ============================================================
// Unwind@1000eb04 @ 0x1000eb04 26B
// ============================================================

void Unwind_1000eb04(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10005c2a((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8));
    return;
  }
  return;
}



// ============================================================
// Unwind@1000eb28 @ 0x1000eb28 26B
// ============================================================

void Unwind_1000eb28(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_10005c2a((undefined4 *)(*(int *)(unaff_EBP + -0x14) + 8));
    return;
  }
  return;
}



