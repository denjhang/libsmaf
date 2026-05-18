// ============================================================
// ConvertSMF1ToSMF0 @ 0x10001000 533B
// ============================================================

int __cdecl ConvertSMF1ToSMF0(char *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_6c [4];
  undefined4 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined4 local_5c [23];
  
                    /* 0x1000  1  ConvertSMF1ToSMF0 */
  if ((((param_1 == (char *)0x0) || (param_2 < 1)) || (param_3 == (undefined4 *)0x0)) ||
     ((int)param_4 < 1)) {
    return -5;
  }
  FUN_10002520(local_5c);
  local_6c[0] = param_3._0_1_;
  local_68 = (undefined4 *)0x0;
  local_64 = (undefined1 *)0x0;
  local_60 = 0;
  iVar1 = FUN_10002640(local_5c,param_1,param_2);
  if (iVar1 < -0x3ce) {
    if (iVar1 == -0x3cf) {
      FUN_10005120((undefined *)local_68);
      local_68 = (undefined4 *)0x0;
      local_64 = (undefined1 *)0x0;
      local_60 = 0;
      FUN_10002590(local_5c);
      return -2;
    }
    if (iVar1 == -0x3d8) {
      FUN_10005120((undefined *)local_68);
      local_68 = (undefined4 *)0x0;
      local_64 = (undefined1 *)0x0;
      local_60 = 0;
      FUN_10002590(local_5c);
      return -4;
    }
    if (iVar1 == -0x3d0) {
      FUN_10005120((undefined *)local_68);
      local_68 = (undefined4 *)0x0;
      local_64 = (undefined1 *)0x0;
      local_60 = 0;
      FUN_10002590(local_5c);
      return -3;
    }
  }
  else if (iVar1 == 0) {
    FUN_10001220(local_6c,(undefined1 *)local_68,local_64);
    FUN_10002b90(local_5c,local_6c);
    if (local_68 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (int)local_64 - (int)local_68;
      if (param_4 < uVar2) {
        FUN_10005120((undefined *)local_68);
        local_68 = (undefined4 *)0x0;
        local_64 = (undefined1 *)0x0;
        local_60 = 0;
        FUN_10002590(local_5c);
        return -6;
      }
    }
    puVar4 = local_68;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_3 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_3 = (undefined4 *)((int)param_3 + 1);
    }
    if (local_68 == (undefined4 *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)local_64 - (int)local_68;
    }
    FUN_10005120((undefined *)local_68);
    local_68 = (undefined4 *)0x0;
    local_64 = (undefined1 *)0x0;
    local_60 = 0;
    FUN_10002590(local_5c);
    return iVar1;
  }
  FUN_10001250();
  FUN_10005120((undefined *)local_68);
  local_68 = (undefined4 *)0x0;
  local_64 = (undefined1 *)0x0;
  local_60 = 0;
  FUN_10002590(local_5c);
  return -1;
}



// ============================================================
// FUN_10001220 @ 0x10001220 48B
// ============================================================

undefined1 * __thiscall FUN_10001220(void *this,undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)((int)this + 8);
  puVar2 = param_1;
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 **)((int)this + 8) = puVar2;
  return param_1;
}



// ============================================================
// FUN_10001260 @ 0x10001260 82B
// ============================================================

undefined4 * __fastcall FUN_10001260(undefined4 *param_1)

{
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000a88b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 3) = local_11;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_1000b0e8;
  FUN_100014c0((int)param_1);
  ExceptionList = local_c;
  return param_1;
}



// ============================================================
// FUN_100012c0 @ 0x100012c0 30B
// ============================================================

undefined4 * __thiscall FUN_100012c0(void *this,byte param_1)

{
  FUN_10001310(this);
  if ((param_1 & 1) != 0) {
    FUN_10005120(this);
  }
  return this;
}



// ============================================================
// FUN_100012e0 @ 0x100012e0 34B
// ============================================================

void __fastcall FUN_100012e0(int param_1)

{
  FUN_10005120(*(undefined **)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



// ============================================================
// FUN_10001310 @ 0x10001310 89B
// ============================================================

void __fastcall FUN_10001310(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000a8ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1000b0e8;
  local_4 = 0;
  FUN_100014c0((int)param_1);
  FUN_10005120((undefined *)param_1[4]);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_10001370 @ 0x10001370 327B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x100013ff) */
/* WARNING: Removing unreachable block (ram,0x1000140a) */
/* WARNING: Removing unreachable block (ram,0x1000146b) */
/* WARNING: Removing unreachable block (ram,0x10001475) */

undefined4 * __thiscall FUN_10001370(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_15;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000a8cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  local_4 = 0;
  *(undefined ***)this = &PTR_FUN_1000b0e8;
  local_14 = this;
  FUN_100014c0((int)this);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 9) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)((int)this + 10) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)((int)this + 0xb) = *(undefined1 *)(param_1 + 0xb);
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
    if (0 < (int)uVar3) {
      local_10 = *(undefined4 *)((int)this + 0x14);
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x10);
      iVar1 = *(int *)((int)this + 0x10);
      local_15 = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(int *)((int)this + 0x14) - iVar1;
      }
      if (uVar2 < uVar3) {
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x14) - iVar1;
        }
        FUN_10001ea0((void *)((int)this + 0xc),*(undefined1 **)((int)this + 0x14),uVar3 - iVar1,
                     &local_15);
      }
      else if ((iVar1 != 0) && (uVar3 < (uint)(*(int *)((int)this + 0x14) - iVar1))) {
        *(uint *)((int)this + 0x14) = iVar1 + uVar3;
      }
    }
  }
  iVar1 = 0;
  if (0 < (int)uVar3) {
    do {
      *(undefined1 *)(*(int *)((int)this + 0x10) + iVar1) =
           *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar3);
  }
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  ExceptionList = local_c;
  return this;
}



// ============================================================
// FUN_100014c0 @ 0x100014c0 59B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x100014cf) */

void __fastcall FUN_100014c0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// ============================================================
// FUN_10001540 @ 0x10001540 70B
// ============================================================

undefined4 __thiscall FUN_10001540(void *this,int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (0 < param_2)) {
    iVar1 = 0;
    if (0 < param_2) {
      do {
        FUN_10001ea0((void *)((int)this + 0xc),*(undefined1 **)((int)this + 0x14),1,
                     (undefined1 *)(iVar1 + param_1));
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_2);
    }
    return 0;
  }
  return 0xfffffc21;
}



// ============================================================
// FUN_10001600 @ 0x10001600 24B
// ============================================================

undefined4 __thiscall FUN_10001600(void *this,int param_1)

{
  if (param_1 < 0) {
    return 0xfffffc21;
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}



// ============================================================
// FUN_10001630 @ 0x10001630 24B
// ============================================================

undefined4 __thiscall FUN_10001630(void *this,int param_1)

{
  if (param_1 < 1) {
    return 0xfffffc21;
  }
  *(int *)((int)this + 0x1c) = param_1;
  return 0;
}



// ============================================================
// FUN_10001650 @ 0x10001650 21B
// ============================================================

undefined4 __fastcall FUN_10001650(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x10))) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}



// ============================================================
// FUN_10001670 @ 0x10001670 1760B
// ============================================================

char __fastcall FUN_10001670(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined1 local_24;
  uint local_20;
  undefined1 local_1c;
  uint local_18;
  undefined1 local_14;
  uint local_10;
  undefined1 local_c;
  uint local_8;
  undefined1 local_4;
  
  bVar1 = FUN_10001500(param_1);
  local_10 = CONCAT31(local_10._1_3_,bVar1);
  uVar2 = FUN_10001530(param_1);
  local_18 = CONCAT31(local_18._1_3_,uVar2);
  uVar2 = FUN_100015c0(param_1);
  local_8 = CONCAT31(local_8._1_3_,uVar2);
  cVar3 = FUN_100015d0(param_1);
  if ((local_10 & 0xff) == 0xf0) {
    local_10 = 0x7f067943;
    local_c = 1;
    local_18 = 0x7f067943;
    local_14 = 7;
    local_20 = 0x7f067943;
    local_1c = 0xb;
    local_28 = 0x7f067943;
    local_24 = 0x10;
    local_8 = 0x1047f7f;
    uVar5 = FUN_100015e0(param_1);
    puVar6 = (uint *)FUN_10001650(param_1);
    if (4 < uVar5) {
      iVar7 = 5;
      bVar11 = true;
      puVar9 = puVar6;
      puVar10 = &local_10;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar11 = (char)*puVar9 == (char)*puVar10;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar10 = (uint *)((int)puVar10 + 1);
      } while (bVar11);
      if (bVar11) {
        return '\t';
      }
      iVar7 = 5;
      bVar11 = true;
      puVar9 = puVar6;
      puVar10 = &local_18;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar11 = (char)*puVar9 == (char)*puVar10;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar10 = (uint *)((int)puVar10 + 1);
      } while (bVar11);
      if (bVar11) {
        return '\b';
      }
      iVar7 = 5;
      bVar11 = true;
      puVar9 = puVar6;
      puVar10 = &local_20;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar11 = (char)*puVar9 == (char)*puVar10;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar10 = (uint *)((int)puVar10 + 1);
      } while (bVar11);
      if (bVar11) {
        return '\x1a';
      }
      iVar7 = 5;
      bVar11 = true;
      puVar9 = puVar6;
      puVar10 = &local_28;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar11 = (char)*puVar9 == (char)*puVar10;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar10 = (uint *)((int)puVar10 + 1);
      } while (bVar11);
      if (bVar11) {
        return '\x1e';
      }
    }
    if (uVar5 < 4) {
      return 'd';
    }
    if (*puVar6 != local_8) {
      return 'd';
    }
    return '\x01';
  }
  if ((local_10 & 0xff) != 0xff) {
    if ((0x7f < bVar1) && (bVar1 < 0x90)) {
      return '\f';
    }
    if ((0x8f < bVar1) && (bVar1 < 0xa0)) {
      return (cVar3 == '\0') + '\v';
    }
    if ((0xaf < bVar1) && (bVar1 < 0xc0)) {
      switch(local_8 & 0xff) {
      case 0:
        return '\r';
      case 1:
        return '\x18';
      default:
        return 'd';
      case 6:
        return '\x15';
      case 7:
        return '\x10';
      case 10:
        return '\x12';
      case 0xb:
        return '\x11';
      case 0x20:
        return '\x0e';
      case 0x26:
        return '\x16';
      case 0x38:
        return '%';
      case 0x40:
        return '\x19';
      case 0x47:
        return '\x1c';
      case 0x4a:
        return '\x1d';
      case 100:
        return '\x14';
      case 0x65:
        return '\x13';
      case 0x7e:
      case 0x7f:
        return '\x1b';
      }
    }
    if ((0xbf < bVar1) && (bVar1 < 0xd0)) {
      return '\x0f';
    }
    if (bVar1 < 0xe0) {
      return 'd';
    }
    if (0xef < bVar1) {
      return 'd';
    }
    return '\x17';
  }
  if (((char)local_8 == '/') && (cVar3 == '\0')) {
    return ')';
  }
  switch(local_18 & 0xff) {
  case 6:
    local_3c = CONCAT13(local_3c._3_1_,0x303051);
    local_38 = CONCAT13(local_38._3_1_,0x463051);
    local_34 = 0x3d30304c;
    local_30 = 0x3d46304c;
    uVar5 = FUN_100015e0(param_1);
    piVar4 = (int *)FUN_10001650(param_1);
    if (2 < uVar5) {
      iVar7 = 3;
      bVar11 = true;
      piVar8 = piVar4;
      puVar6 = &local_3c;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar11 = (char)*piVar8 == (char)*puVar6;
        piVar8 = (int *)((int)piVar8 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      } while (bVar11);
      if (bVar11) {
        return '!';
      }
      iVar7 = 3;
      bVar11 = true;
      piVar8 = piVar4;
      puVar6 = &local_38;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar11 = (char)*piVar8 == (char)*puVar6;
        piVar8 = (int *)((int)piVar8 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      } while (bVar11);
      if (bVar11) {
        return '\"';
      }
    }
    if (3 < uVar5) {
      if (*piVar4 == local_34) {
        return '#';
      }
      if (*piVar4 == local_30) {
        return '$';
      }
    }
    break;
  case 7:
    local_8 = 0x52415453;
    local_4 = 0x54;
    local_30 = 0x504f5453;
    uVar5 = FUN_100015e0(param_1);
    piVar4 = (int *)FUN_10001650(param_1);
    if (4 < uVar5) {
      iVar7 = 5;
      bVar11 = true;
      piVar8 = piVar4;
      puVar6 = &local_8;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar11 = (char)*piVar8 == (char)*puVar6;
        piVar8 = (int *)((int)piVar8 + 1);
        puVar6 = (uint *)((int)puVar6 + 1);
      } while (bVar11);
      if (bVar11) {
        return '\x1f';
      }
    }
    if ((3 < uVar5) && (*piVar4 == local_30)) {
      return ' ';
    }
    break;
  case 0x51:
    return '\n';
  case 0x7f:
    local_30 = 0x243;
    local_34 = 0x10243;
    local_38 = 0x1000243;
    local_3c = 0x2000243;
    local_2c = 0x3000243;
    local_28 = 0x4000243;
    local_20 = 0x5000243;
    local_18 = 0x2010243;
    local_10 = 0x3010243;
    local_8 = 0x4010243;
    uVar5 = FUN_100015e0(param_1);
    puVar6 = (uint *)FUN_10001650(param_1);
    if (3 < uVar5) {
      if (*puVar6 == local_30) {
        if ((char)puVar6[6] == '\0') {
          return '\x04';
        }
        if ((char)puVar6[6] != '\x01') {
          return 'd';
        }
        return '\x06';
      }
      if (*puVar6 == local_34) {
        if ((char)puVar6[6] == '\0') {
          return '\x04';
        }
        if ((char)puVar6[6] == '\x01') {
          return '\x06';
        }
        return '\t';
      }
      if (*puVar6 == local_38) {
        return '\x05';
      }
      if (*puVar6 == local_3c) {
        return '\a';
      }
      if (*puVar6 == local_2c) {
        return '\x03';
      }
      if (*puVar6 == local_28) {
        return '\0';
      }
      if (*puVar6 == local_20) {
        return '\x02';
      }
    }
    if (uVar5 == 6) {
      if (*puVar6 == local_18) {
        return '&';
      }
LAB_10001be5:
      if (*puVar6 == local_10) {
        return '\'';
      }
    }
    else if (3 < uVar5) goto LAB_10001be5;
    if ((4 < (int)uVar5) && (*puVar6 == local_8)) {
      return '(';
    }
  }
  return 'd';
}



// ============================================================
// FUN_10001ea0 @ 0x10001ea0 450B
// ============================================================

void __thiscall FUN_10001ea0(void *this,undefined1 *param_1,uint param_2,undefined1 *param_3)

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
  FUN_10005120(*(undefined **)((int)this + 4));
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
// FUN_10002070 @ 0x10002070 28B
// ============================================================

undefined4 * __fastcall FUN_10002070(undefined4 *param_1)

{
  FUN_10003f60(param_1 + 1);
  *param_1 = &PTR_FUN_1000b0ec;
  param_1[7] = 0;
  return param_1;
}



// ============================================================
// FUN_10002090 @ 0x10002090 30B
// ============================================================

undefined4 * __thiscall FUN_10002090(void *this,byte param_1)

{
  FUN_100020b0(this);
  if ((param_1 & 1) != 0) {
    FUN_10005120(this);
  }
  return this;
}



// ============================================================
// FUN_100020c0 @ 0x100020c0 38B
// ============================================================

undefined4 __thiscall FUN_100020c0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100020f0((int)this);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    *(int *)((int)this + 0x1c) = param_1;
    return 0;
  }
  return 0xfffffc21;
}



// ============================================================
// FUN_10002100 @ 0x10002100 44B
// ============================================================

undefined4 __thiscall FUN_10002100(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = FUN_100020f0((int)this);
  if ((-1 < param_1) && (param_1 < iVar1)) {
    FUN_10004390((void *)((int)this + 4),param_1);
    return 1;
  }
  return 0;
}



// ============================================================
// FUN_10002130 @ 0x10002130 132B
// ============================================================

int __thiscall FUN_10002130(void *this,uint param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_100020f0((int)this);
  iVar5 = *(int *)((int)this + 0x1c);
  if (iVar5 < iVar3) {
    while (iVar4 = FUN_10004440((void *)((int)this + 4),iVar5), iVar4 != 0) {
      if ((((param_1 == 0xc) && (cVar1 = FUN_10001670(iVar4), cVar1 == '\v')) &&
          (cVar1 = FUN_100015d0(iVar4), cVar1 == '\0')) ||
         (bVar2 = FUN_10001670(iVar4), bVar2 == param_1)) {
        if (iVar4 == 0) {
          return -1;
        }
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      if (iVar3 <= iVar5) {
        return -1;
      }
    }
  }
  return -1;
}



// ============================================================
// FUN_100021d0 @ 0x100021d0 319B
// ============================================================

int __thiscall FUN_100021d0(void *this,int param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  
  if (this == (void *)param_1) {
    return (int)this;
  }
  puVar3 = *(undefined1 **)(param_1 + 4);
  if (puVar3 == (undefined1 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(int *)(param_1 + 8) - (int)puVar3;
  }
  puVar1 = *(undefined **)((int)this + 4);
  if (puVar1 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)((int)this + 8) - (int)puVar1;
  }
  if (uVar4 < uVar7) {
    if (puVar3 == (undefined1 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(int *)(param_1 + 8) - (int)puVar3;
    }
    if (puVar1 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)((int)this + 0xc) - (int)puVar1;
    }
    if (uVar4 < uVar7) {
      FUN_10005120(puVar1);
      if (*(int *)(param_1 + 4) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
      }
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      puVar2 = operator_new(uVar7);
      *(undefined1 **)((int)this + 4) = puVar2;
      puVar3 = *(undefined1 **)(param_1 + 8);
      for (puVar6 = *(undefined1 **)(param_1 + 4); puVar6 != puVar3; puVar6 = puVar6 + 1) {
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = *puVar6;
        }
        puVar2 = puVar2 + 1;
      }
      *(undefined1 **)((int)this + 8) = puVar2;
      *(undefined1 **)((int)this + 0xc) = puVar2;
      return (int)this;
    }
    if (puVar1 == (undefined *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 8) - (int)puVar1;
    }
    puVar6 = puVar3 + iVar5;
    for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
      *puVar1 = *puVar3;
      puVar1 = puVar1 + 1;
    }
    puVar3 = *(undefined1 **)(param_1 + 8);
    puVar2 = *(undefined1 **)((int)this + 8);
    for (; puVar6 != puVar3; puVar6 = puVar6 + 1) {
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = *puVar6;
      }
      puVar2 = puVar2 + 1;
    }
    iVar5 = *(int *)(param_1 + 4);
    if (iVar5 == 0) {
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
      return (int)this;
    }
  }
  else {
    puVar6 = *(undefined1 **)(param_1 + 8);
    for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
      *puVar1 = *puVar3;
      puVar1 = puVar1 + 1;
    }
    iVar5 = *(int *)(param_1 + 4);
    if (iVar5 == 0) {
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
      return (int)this;
    }
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 4) + (*(int *)(param_1 + 8) - iVar5);
  return (int)this;
}



// ============================================================
// FUN_10002310 @ 0x10002310 35B
// ============================================================

void FUN_10002310(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}



// ============================================================
// FUN_10002340 @ 0x10002340 435B
// ============================================================

int __cdecl FUN_10002340(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  if (param_1 == param_2) {
    return param_3;
  }
  piVar8 = (int *)(param_2 + 0x10);
  piVar10 = (int *)(param_3 + 0x10);
  do {
    piVar9 = piVar8 + -8;
    piVar11 = piVar10 + -8;
    param_3 = param_3 + -0x20;
    param_2 = param_2 + -0x20;
    piVar10[-0xb] = piVar8[-0xb];
    *(char *)(piVar10 + -10) = (char)piVar8[-10];
    *(undefined1 *)((int)piVar10 + -0x27) = *(undefined1 *)((int)piVar8 + -0x27);
    *(undefined1 *)((int)piVar10 + -0x26) = *(undefined1 *)((int)piVar8 + -0x26);
    *(undefined1 *)((int)piVar10 + -0x25) = *(undefined1 *)((int)piVar8 + -0x25);
    if (piVar10 + -9 != piVar8 + -9) {
      puVar2 = (undefined1 *)*piVar9;
      if (puVar2 == (undefined1 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = piVar8[-7] - (int)puVar2;
      }
      puVar1 = (undefined *)*piVar11;
      if (puVar1 == (undefined *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = piVar10[-7] - (int)puVar1;
      }
      if (uVar3 < uVar6) {
        if (puVar2 == (undefined1 *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = piVar8[-7] - (int)puVar2;
        }
        if (puVar1 == (undefined *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = piVar10[-6] - (int)puVar1;
        }
        if (uVar3 < uVar6) {
          FUN_10005120(puVar1);
          if (*piVar9 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = piVar8[-7] - *piVar9;
          }
          if ((int)uVar6 < 0) {
            uVar6 = 0;
          }
          puVar7 = operator_new(uVar6);
          *piVar11 = (int)puVar7;
          puVar2 = (undefined1 *)piVar8[-7];
          for (puVar5 = (undefined1 *)*piVar9; puVar5 != puVar2; puVar5 = puVar5 + 1) {
            if (puVar7 != (undefined1 *)0x0) {
              *puVar7 = *puVar5;
            }
            puVar7 = puVar7 + 1;
          }
          piVar10[-7] = (int)puVar7;
          piVar10[-6] = (int)puVar7;
        }
        else {
          if (puVar1 == (undefined *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = piVar10[-7] - (int)puVar1;
          }
          puVar5 = puVar2 + iVar4;
          for (; puVar2 != puVar5; puVar2 = puVar2 + 1) {
            *puVar1 = *puVar2;
            puVar1 = puVar1 + 1;
          }
          puVar2 = (undefined1 *)piVar8[-7];
          puVar7 = (undefined1 *)piVar10[-7];
          for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
            FUN_10002500(puVar7,puVar5);
            puVar7 = puVar7 + 1;
          }
          if (*piVar9 == 0) {
            piVar10[-7] = *piVar11;
          }
          else {
            piVar10[-7] = *piVar11 + (piVar8[-7] - *piVar9);
          }
        }
      }
      else {
        puVar5 = (undefined1 *)piVar8[-7];
        for (; puVar2 != puVar5; puVar2 = puVar2 + 1) {
          *puVar1 = *puVar2;
          puVar1 = puVar1 + 1;
        }
        if (*piVar9 == 0) {
          piVar10[-7] = *piVar11;
        }
        else {
          piVar10[-7] = *piVar11 + (piVar8[-7] - *piVar9);
        }
      }
    }
    piVar10[-5] = piVar8[-5];
    piVar8 = piVar9;
    piVar10 = piVar11;
  } while (param_2 != param_1);
  return param_3;
}



// ============================================================
// FUN_10002520 @ 0x10002520 69B
// ============================================================

undefined4 * __fastcall FUN_10002520(undefined4 *param_1)

{
  undefined1 local_1;
  
  FUN_10002070(param_1);
  local_1 = (undefined1)((uint)param_1 >> 0x18);
  *(undefined1 *)(param_1 + 8) = local_1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = local_1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_1000b0f0;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  return param_1;
}



// ============================================================
// FUN_10002570 @ 0x10002570 30B
// ============================================================

undefined4 * __thiscall FUN_10002570(void *this,byte param_1)

{
  FUN_10002590(this);
  if ((param_1 & 1) != 0) {
    FUN_10005120(this);
  }
  return this;
}



// ============================================================
// FUN_10002590 @ 0x10002590 171B
// ============================================================

void __fastcall FUN_10002590(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1000a8fe;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1000b0f0;
  local_4 = 2;
  FUN_10002fc0((int)param_1);
  FUN_10005120((undefined *)param_1[0xd]);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  iVar1 = param_1[10];
  iVar3 = param_1[9];
  local_4 = local_4 & 0xffffff00;
  if (iVar3 != iVar1) {
    puVar2 = (undefined4 *)(iVar3 + 8);
    do {
      FUN_10003fc0(puVar2);
      iVar3 = iVar3 + 0x20;
      puVar2 = puVar2 + 8;
    } while (iVar3 != iVar1);
  }
  FUN_10005120((undefined *)param_1[9]);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_4 = 0xffffffff;
  FUN_100020b0(param_1);
  ExceptionList = pvStack_c;
  return;
}



// ============================================================
// FUN_10002640 @ 0x10002640 102B
// ============================================================

int __thiscall FUN_10002640(void *this,char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  pcVar1 = param_1;
  if ((param_1 == (char *)0x0) || (param_2 < 1)) {
    iVar2 = -0x3df;
  }
  else {
    param_1 = (char *)0x0;
    iVar2 = FUN_100027d0(this,pcVar1,param_2,(int *)&param_1);
    if (iVar2 == 0) {
      if (*(short *)((int)this + 0x40) == 0) {
        iVar3 = FUN_100030a0(this,(int)pcVar1,iVar3,(int *)&param_1);
        return iVar3;
      }
      iVar3 = FUN_10002db0(this,(int)pcVar1,iVar3);
      return iVar3;
    }
  }
  return iVar2;
}



// ============================================================
// FUN_100026c0 @ 0x100026c0 258B
// ============================================================

int __thiscall FUN_100026c0(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 local_1c [4];
  undefined4 *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000a918;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_2;
  local_18 = (undefined4 *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_10001250();
  local_14 = 0;
  iVar1 = FUN_10002b90(this,local_1c);
  if (iVar1 != 0) {
    FUN_10005120((undefined *)local_18);
    ExceptionList = local_c;
    return iVar1;
  }
  if (local_18 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = local_14 - (int)local_18;
  }
  if ((int)param_2 < (int)uVar3) {
    FUN_10005120((undefined *)local_18);
    ExceptionList = local_c;
    return -999;
  }
  puVar4 = param_1;
  for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  puVar4 = local_18;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  FUN_10005120((undefined *)local_18);
  ExceptionList = local_c;
  return 0;
}



// ============================================================
// FUN_100027d0 @ 0x100027d0 318B
// ============================================================

int __thiscall FUN_100027d0(void *this,char *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  int local_4;
  
  local_4 = 0;
  if (param_1 == (char *)0x0) {
    return -0x3df;
  }
  uVar4 = 0xffffffff;
  *(undefined2 *)((int)this + 0x40) = 0xffff;
  *(undefined2 *)((int)this + 0x42) = 0;
  *(undefined2 *)((int)this + 0x44) = 0;
  pcVar5 = &DAT_1000c0f8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = _strncmp(param_1,&DAT_1000c0f8,~uVar4 - 1);
  if (iVar2 != 0) {
    return -0x3db;
  }
  iVar2 = FUN_10002910((int)param_1,param_2,&DAT_1000c0f8,param_3,&local_4);
  if (local_4 < 1) {
    return -0x3da;
  }
  if (local_4 != 6) {
    return -0x3da;
  }
  if (iVar2 == 0) {
    pbVar3 = (byte *)(param_1 + *param_3);
    if (pbVar3 == (byte *)0x0) {
      return -0x3dc;
    }
    *(ushort *)((int)this + 0x40) = (ushort)*pbVar3 * 0x100 + (ushort)pbVar3[1];
    *(ushort *)((int)this + 0x42) = (ushort)pbVar3[2] * 0x100 + (ushort)pbVar3[3];
    *(ushort *)((int)this + 0x44) = (ushort)pbVar3[4] * 0x100 + (ushort)pbVar3[5];
    if ((pbVar3[4] & 0x80) != 0) {
      return -0x3d8;
    }
    if (*(short *)((int)this + 0x40) == 0) {
      return -0x3cf;
    }
    if (*(short *)((int)this + 0x40) != 1) {
      return -0x3d0;
    }
    *param_3 = *param_3 + 6;
    iVar2 = 0;
  }
  return iVar2;
}



// ============================================================
// FUN_10002910 @ 0x10002910 201B
// ============================================================

undefined4 FUN_10002910(int param_1,int param_2,char *param_3,int *param_4,int *param_5)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  *param_5 = 0;
  iVar7 = *param_4;
  while( true ) {
    if (param_2 <= iVar7) {
      return 0xfffffc24;
    }
    puVar6 = (uint *)(param_1 + iVar7);
    puVar3 = FUN_10005950(puVar6,param_3);
    if (puVar3 != (uint *)0x0) break;
    uVar4 = 0xffffffff;
    puVar3 = puVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      uVar2 = *puVar3;
      puVar3 = (uint *)((int)puVar3 + 1);
    } while ((char)uVar2 != '\0');
    iVar7 = iVar7 + (~uVar4 - 1);
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      uVar4 = *puVar6;
      puVar6 = (uint *)((int)puVar6 + 1);
    } while ((char)uVar4 != '\0');
    if (iVar5 == -2) {
      iVar7 = iVar7 + 1;
    }
  }
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar1 != '\0');
  iVar7 = (~uVar4 - 1) - param_1;
  iVar5 = (((uint)*(byte *)((int)puVar3 + param_1 + iVar7) * 0x100 +
           (uint)*(byte *)((int)puVar3 + param_1 + iVar7 + 1)) * 0x100 +
          (uint)*(byte *)((int)puVar3 + param_1 + iVar7 + 2)) * 0x100 +
          (uint)*(byte *)((int)puVar3 + param_1 + iVar7 + 3);
  *param_5 = iVar5;
  if (iVar5 < 1) {
    return 0xfffffc24;
  }
  *param_4 = (int)puVar3 + iVar7 + 4;
  return 0;
}



// ============================================================
// FUN_100029e0 @ 0x100029e0 83B
// ============================================================

undefined4 FUN_100029e0(int param_1,int param_2,int *param_3,uint *param_4)

{
  byte bVar1;
  
  *param_3 = 0;
  *param_4 = 0;
  if (param_1 + param_2 != 0) {
    do {
      bVar1 = *(byte *)(*param_3 + param_1 + param_2);
      *param_3 = *param_3 + 1;
      *param_4 = bVar1 & 0x7f | *param_4 << 7;
    } while ((bVar1 & 0x80) != 0);
    return 0;
  }
  return 0xfffffc24;
}



// ============================================================
// FUN_10002a50 @ 0x10002a50 311B
// ============================================================

undefined4 __fastcall FUN_10002a50(void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_20;
  undefined1 local_1c [4];
  undefined *local_18;
  undefined4 *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000a938;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_10004470((int)param_1 + 4);
  local_20 = 0;
  local_18 = (undefined *)0x0;
  local_14 = (undefined4 *)0x0;
  local_10 = 0;
  local_4 = 0;
  if (iVar1 < 1) {
    FUN_10005120((undefined *)0x0);
    ExceptionList = local_c;
    return 0xfffffc24;
  }
  puVar2 = FUN_10003e00((undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0);
  FUN_10001250();
  local_14 = puVar2;
  FUN_100020c0(param_1,0);
  local_20 = FUN_10002130(param_1,0x29);
  if (local_20 != iVar1 + -1) {
    while (0 < local_20) {
      FUN_10003bf0(local_1c,local_14,1,&local_20);
      iVar1 = FUN_100020c0(param_1,local_20 + 1);
      if (iVar1 != 0) break;
      local_20 = FUN_10002130(param_1,0x29);
    }
    if (local_18 == (undefined *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)local_14 - (int)local_18 >> 2;
      if (iVar1 == 1) goto LAB_10002b6a;
    }
    for (iVar1 = iVar1 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
      FUN_10002100(param_1,*(int *)(local_18 + iVar1 * 4));
    }
  }
LAB_10002b6a:
  FUN_10005120(local_18);
  ExceptionList = local_c;
  return 0;
}



// ============================================================
// FUN_10002b90 @ 0x10002b90 59B
// ============================================================

int __thiscall FUN_10002b90(void *this,void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_10004470((int)this + 4);
  if (iVar1 < 1) {
    return -0x3dc;
  }
  iVar1 = FUN_10002bd0(this,param_1,0,1);
  if (iVar1 == 0) {
    iVar1 = FUN_10002c60(this,param_1);
  }
  return iVar1;
}



// ============================================================
// FUN_10002bd0 @ 0x10002bd0 77B
// ============================================================

undefined4 __thiscall FUN_10002bd0(void *this,void *param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_10002c20(param_1,&DAT_1000c0f8);
  *(undefined2 *)((int)this + 0x40) = param_2;
  FUN_10004990(param_1,(undefined1 *)((int)this + 0x40));
  *(undefined2 *)((int)this + 0x42) = param_3;
  FUN_10004990(param_1,(undefined1 *)((int)this + 0x42));
  FUN_10004990(param_1,(undefined1 *)((int)this + 0x44));
  return 0;
}



// ============================================================
// FUN_10002c20 @ 0x10002c20 51B
// ============================================================

undefined4 FUN_10002c20(void *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_2;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_10004ce0(param_1,(int)param_2,~uVar2 - 1);
  FUN_10004780(param_1,&stack0x0000000c);
  return 0;
}



// ============================================================
// FUN_10002c60 @ 0x10002c60 112B
// ============================================================

undefined4 __thiscall FUN_10002c60(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_10002c20(param_1,&DAT_1000c100);
  iVar1 = FUN_10004470((int)this + 4);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_10004440((void *)((int)this + 4),iVar4);
      FUN_10002cd0(this,(int)param_1,iVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  if (*(int *)((int)param_1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)param_1 + 8) - *(int *)((int)param_1 + 4);
  }
  uVar3 = FUN_10004ef0(iVar1 + -0x16);
  *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x12) = uVar3;
  return 0;
}



// ============================================================
// FUN_10002cd0 @ 0x10002cd0 222B
// ============================================================

undefined4 __thiscall FUN_10002cd0(void *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  piVar3 = (int *)FUN_10001590(param_2);
  iVar5 = *(int *)((int)this + 0x48);
  iVar2 = *piVar3;
  *(int *)((int)this + 0x48) = iVar2;
  FUN_10004d30(param_1,iVar2 - iVar5);
  FUN_10004b50(param_1,(char)piVar3[1]);
  bVar1 = *(byte *)(piVar3 + 1);
  if (bVar1 == 0xff) {
    if (*(char *)((int)piVar3 + 5) == '\0') {
      FUN_10004b50(param_1,*(undefined1 *)((int)piVar3 + 6));
      FUN_10004b50(param_1,*(undefined1 *)((int)piVar3 + 7));
      return 0;
    }
    FUN_10004b50(param_1,*(char *)((int)piVar3 + 5));
  }
  else if (bVar1 != 0xf0) {
    if (bVar1 < 0xf0) {
      iVar5 = *(int *)(&DAT_1000c07c + (uint)(bVar1 >> 4) * 4);
    }
    else {
      iVar5 = *(int *)(&DAT_1000c0b8 + (bVar1 & 0xf) * 4);
    }
    if (iVar5 != 0) {
      FUN_10004b50(param_1,*(undefined1 *)((int)piVar3 + 6));
      if (iVar5 != 1 && -1 < iVar5 + -1) {
        FUN_10004b50(param_1,*(undefined1 *)((int)piVar3 + 7));
      }
    }
    return 0;
  }
  uVar4 = FUN_100015e0(param_2);
  FUN_10004d30(param_1,uVar4);
  FUN_10004f30(param_1,(int)(piVar3 + 2));
  return 0;
}



// ============================================================
// FUN_10002db0 @ 0x10002db0 231B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10002e32) */
/* WARNING: Removing unreachable block (ram,0x10002e38) */
/* WARNING: Removing unreachable block (ram,0x10002e5f) */

int __thiscall FUN_10002db0(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if ((param_1 == 0) || (param_2 < 1)) {
    iVar1 = -0x3df;
  }
  else {
    iVar1 = FUN_100030a0(this,param_1,param_2,(int *)&stack0x0000000c);
    if ((iVar1 == 0) && (iVar1 = FUN_100035c0(this), iVar1 == 0)) {
      *(undefined4 *)((int)this + 0x48) = 0;
      if ((*(int *)((int)this + 0x24) != 0) &&
         (iVar1 = *(int *)((int)this + 0x28) - *(int *)((int)this + 0x24) >> 5, 0 < iVar1)) {
        do {
          FUN_10004130(iVar2 + 8 + *(int *)((int)this + 0x24));
          iVar2 = iVar2 + 0x20;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar1 = *(int *)((int)this + 0x28);
        iVar2 = *(int *)((int)this + 0x24);
        for (iVar3 = iVar2; iVar3 != iVar1; iVar3 = iVar3 + 0x20) {
          FUN_10002a40(iVar3);
        }
        *(int *)((int)this + 0x28) = iVar2;
      }
      iVar2 = FUN_10002a50(this);
      return iVar2;
    }
  }
  return iVar1;
}



// ============================================================
// FUN_10002ea0 @ 0x10002ea0 274B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10002f24) */

undefined4 __fastcall FUN_10002ea0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c [2];
  undefined4 local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000a958;
  local_c = ExceptionList;
  if (*(short *)(param_1 + 0x42) < 1) {
    return 0xfffffc24;
  }
  ExceptionList = &local_c;
  FUN_10002fc0(param_1);
  if (*(short *)(param_1 + 0x40) != 0) {
    FUN_10003f60(local_24);
    sVar1 = *(short *)(param_1 + 0x42);
    iVar2 = *(int *)(param_1 + 0x24);
    local_4 = 0;
    FUN_10003bc0(iVar2,*(int *)(param_1 + 0x28));
    *(int *)(param_1 + 0x28) = iVar2;
    FUN_100038e0((void *)(param_1 + 0x20),*(undefined4 **)(param_1 + 0x24),(int)sVar1,local_2c);
    local_4 = 0xffffffff;
    FUN_10003fc0(local_24);
    iVar2 = 0;
    if (0 < *(short *)(param_1 + 0x42)) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 0x20;
        *(int *)(*(int *)(param_1 + 0x24) + -0x20 + iVar3) = iVar2;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x24) + -0x1c + iVar3) = 0;
      } while (iVar2 < *(short *)(param_1 + 0x42));
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0;
}



// ============================================================
// FUN_10002fc0 @ 0x10002fc0 216B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10003072) */
/* WARNING: Removing unreachable block (ram,0x10003009) */
/* WARNING: Removing unreachable block (ram,0x10003010) */
/* WARNING: Removing unreachable block (ram,0x10003036) */

undefined4 __fastcall FUN_10002fc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 5;
  }
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      FUN_10004130(*(int *)(param_1 + 0x24) + 8 + iVar2);
      iVar2 = iVar2 + 0x20;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x24);
  for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x20) {
    FUN_10002a40(iVar3);
  }
  *(int *)(param_1 + 0x28) = iVar1;
  FUN_10004130(param_1 + 4);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
  return 0;
}



// ============================================================
// FUN_100030a0 @ 0x100030a0 157B
// ============================================================

int __thiscall FUN_100030a0(void *this,int param_1,int param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  
  iVar2 = FUN_10002ea0((int)this);
  if (iVar2 == 0) {
    if (*(short *)((int)this + 0x40) == 0) {
      iVar2 = FUN_10003140(this,param_1,param_2,(void *)((int)this + 4),param_3,0);
      return iVar2;
    }
    iVar2 = 0;
    sVar1 = *(short *)((int)this + 0x42);
    if (0 < sVar1) {
      iVar4 = 0;
      do {
        iVar3 = FUN_10003140(this,param_1,param_2,(void *)(iVar4 + 8 + *(int *)((int)this + 0x24)),
                             param_3,iVar2);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x20;
      } while (iVar2 < *(short *)((int)this + 0x42));
      sVar1 = *(short *)((int)this + 0x42);
    }
    if (sVar1 != 0) {
      iVar2 = *(int *)((int)this + 0x58);
      this_00 = (void *)FUN_10004440((void *)(*(int *)((int)this + 0x24) + 8),
                                     *(int *)((int)this + 0x54));
      FUN_10001600(this_00,iVar2);
    }
    iVar2 = 0;
  }
  return iVar2;
}



// ============================================================
// FUN_10003140 @ 0x10003140 684B
// ============================================================

int __thiscall
FUN_10003140(void *this,int param_1,int param_2,void *param_3,int *param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000a978;
  local_c = ExceptionList;
  iVar5 = 0;
  local_34 = 0;
  ExceptionList = &local_c;
  FUN_10001260(local_2c);
  local_4 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = local_30 & 0xffffff00;
  iVar3 = FUN_10002910(param_1,param_2,&DAT_1000c100,param_4,&local_34);
  if (iVar3 == 0) {
    if ((local_34 < 1) || (param_2 < local_34)) {
      local_4 = 0xffffffff;
      FUN_10001310(local_2c);
      iVar3 = -0x3d6;
    }
    else {
      local_3c = *param_4;
      while( true ) {
        FUN_100014c0((int)local_2c);
        param_1 = 0;
        if (*(short *)((int)this + 0x40) == 0) {
          local_38 = local_3c;
        }
        iVar3 = FUN_100033f0(local_2c,iVar4,&local_3c);
        if (iVar3 != 0) goto LAB_100031a4;
        iVar3 = FUN_100015f0((int)local_2c);
        FUN_10001600(local_2c,iVar3 + iVar5);
        if (*(short *)((int)this + 0x40) == 1) {
          local_38 = local_3c;
        }
        iVar5 = local_38;
        FUN_10003460(local_2c,iVar4,&local_3c);
        bVar1 = FUN_10001500((int)local_2c);
        if (bVar1 == 0xff) {
          FUN_10003490(local_2c,iVar4,&local_3c);
          FUN_100034c0(local_2c,iVar4,&local_3c);
          cVar2 = FUN_10001530((int)local_2c);
          if (cVar2 == '/') {
            FUN_10001630(local_2c,local_3c - iVar5);
            if (param_5 == 0) {
              FUN_100041e0(param_3,(int)local_2c);
              iVar4 = FUN_10004470((int)param_3);
              *(int *)((int)this + 0x54) = iVar4 + -1;
            }
            iVar4 = FUN_100015f0((int)local_2c);
            if ((0 < iVar4) && (*(int *)((int)this + 0x58) < iVar4)) {
              *(int *)((int)this + 0x58) = iVar4;
            }
            local_4 = 0xffffffff;
            *param_4 = local_3c;
            FUN_10001310(local_2c);
            ExceptionList = local_c;
            return 0;
          }
        }
        else if ((bVar1 & 0x80) == 0) {
          FUN_10001510(local_2c,(char)local_30);
          local_3c = local_3c + -1;
          FUN_10003530(local_2c,iVar4,&local_3c);
          param_1 = 1;
        }
        else if (bVar1 == 0xf0) {
          FUN_100034c0(local_2c,iVar4,&local_3c);
        }
        else {
          FUN_10003530(local_2c,iVar4,&local_3c);
          local_30 = CONCAT31(local_30._1_3_,bVar1);
        }
        FUN_10001630(local_2c,param_1 + (local_3c - iVar5));
        if (param_2 <= local_3c) break;
        iVar5 = FUN_100015f0((int)local_2c);
        FUN_100041e0(param_3,(int)local_2c);
      }
      local_4 = 0xffffffff;
      FUN_10001310(local_2c);
      iVar3 = -0x3dc;
    }
  }
  else {
LAB_100031a4:
    local_4 = 0xffffffff;
    FUN_10001310(local_2c);
  }
  ExceptionList = local_c;
  return iVar3;
}



// ============================================================
// FUN_100033f0 @ 0x100033f0 104B
// ============================================================

int FUN_100033f0(void *param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_8;
  uint local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar1 = FUN_100029e0(param_2,*param_3,&local_8,&local_4);
  if (iVar1 == 0) {
    if (local_8 < 0) {
      return -0x3dc;
    }
    FUN_10001600(param_1,local_4);
    *param_3 = *param_3 + local_8;
    iVar1 = 0;
  }
  return iVar1;
}



// ============================================================
// FUN_10003460 @ 0x10003460 35B
// ============================================================

undefined4 FUN_10003460(void *param_1,int param_2,int *param_3)

{
  FUN_10001510(param_1,*(undefined1 *)(*param_3 + param_2));
  *param_3 = *param_3 + 1;
  return 0;
}



// ============================================================
// FUN_10003490 @ 0x10003490 35B
// ============================================================

undefined4 FUN_10003490(void *param_1,int param_2,int *param_3)

{
  FUN_10001520(param_1,*(undefined1 *)(*param_3 + param_2));
  *param_3 = *param_3 + 1;
  return 0;
}



// ============================================================
// FUN_100034c0 @ 0x100034c0 101B
// ============================================================

int FUN_100034c0(void *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  iVar1 = FUN_100029e0(param_2,*param_3,&local_4,&local_8);
  if (iVar1 == 0) {
    iVar1 = *param_3;
    *param_3 = iVar1 + local_4;
    FUN_10001540(param_1,iVar1 + local_4 + param_2,local_8);
    iVar1 = 0;
    *param_3 = *param_3 + local_8;
  }
  return iVar1;
}



// ============================================================
// FUN_10003530 @ 0x10003530 135B
// ============================================================

undefined4 FUN_10003530(void *param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  void *this;
  byte bVar3;
  int iVar4;
  
  this = param_1;
  bVar3 = FUN_10001500((int)param_1);
  if (bVar3 < 0xf0) {
    bVar3 = FUN_10001500((int)param_1);
    iVar4 = *(int *)(&DAT_1000c07c + (uint)(bVar3 >> 4) * 4);
  }
  else {
    bVar3 = FUN_10001500((int)param_1);
    iVar4 = *(int *)(&DAT_1000c0b8 + (bVar3 & 0xf) * 4);
  }
  if (iVar4 == 0) {
    param_3._0_1_ = 0;
    uVar1 = param_3._0_1_;
  }
  else {
    iVar2 = *param_3;
    uVar1 = *(undefined1 *)(iVar2 + param_2);
    *param_3 = iVar2 + 1;
    if (0 < iVar4 + -1) {
      param_1._0_1_ = *(undefined1 *)(iVar2 + 1 + param_2);
      *param_3 = iVar2 + 2;
      param_3._0_1_ = uVar1;
      goto LAB_1000359e;
    }
  }
  param_3._0_1_ = uVar1;
  param_1._0_1_ = 0;
LAB_1000359e:
  FUN_100015a0(this,param_3._0_1_,param_1._0_1_);
  return 0;
}



// ============================================================
// FUN_100035c0 @ 0x100035c0 208B
// ============================================================

undefined4 __fastcall FUN_100035c0(void *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  do {
    while( true ) {
      iVar1 = FUN_100036e0((int)param_1);
      if (iVar1 != 0) {
        return 0;
      }
      if (*(int *)((int)param_1 + 0x4c) != 0) break;
      pvVar2 = (void *)FUN_10004440((void *)(*(int *)((int)param_1 + 0x24) + 8),
                                    *(int *)((int)param_1 + 0x50));
      FUN_10003690(param_1,pvVar2);
      *(int *)(*(int *)((int)param_1 + 0x4c) * 0x20 + 4 + *(int *)((int)param_1 + 0x24)) =
           *(int *)((int)param_1 + 0x50) + 1;
    }
    iVar1 = *(int *)((int)param_1 + 0x4c) + -1;
    if (-1 < iVar1) {
      iVar4 = iVar1 * 0x20;
      do {
        if (*(int *)((int)param_1 + 0x4c) == 0) break;
        piVar5 = (int *)(iVar4 + *(int *)((int)param_1 + 0x24));
        iVar3 = FUN_10004440((void *)(*(int *)((int)param_1 + 0x4c) * 0x20 + 8 +
                                     *(int *)((int)param_1 + 0x24)),*(int *)((int)param_1 + 0x50));
        FUN_10003750(param_1,iVar3,piVar5);
        iVar1 = iVar1 + -1;
        iVar4 = iVar4 + -0x20;
      } while (-1 < iVar1);
    }
    if ((-1 < *(int *)((int)param_1 + 0x4c)) && (-1 < *(int *)((int)param_1 + 0x50))) {
      pvVar2 = (void *)FUN_10004440((void *)(*(int *)((int)param_1 + 0x4c) * 0x20 + 8 +
                                            *(int *)((int)param_1 + 0x24)),
                                    *(int *)((int)param_1 + 0x50));
      FUN_10003690(param_1,pvVar2);
      *(int *)(*(int *)((int)param_1 + 0x4c) * 0x20 + 4 + *(int *)((int)param_1 + 0x24)) =
           *(int *)((int)param_1 + 0x50) + 1;
    }
  } while( true );
}



// ============================================================
// FUN_10003690 @ 0x10003690 72B
// ============================================================

undefined4 __thiscall FUN_10003690(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_100015f0((int)param_1);
  iVar2 = FUN_10003830(iVar1 - *(int *)((int)this + 0x48));
  iVar3 = FUN_10001620((int)param_1);
  FUN_10001630(param_1,iVar3 + iVar2);
  FUN_100041e0((void *)((int)this + 4),(int)param_1);
  *(int *)((int)this + 0x48) = iVar1;
  return 0;
}



// ============================================================
// FUN_100036e0 @ 0x100036e0 111B
// ============================================================

undefined4 __fastcall FUN_100036e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 5;
  }
  iVar1 = iVar1 + -1;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  if (-1 < iVar1) {
    iVar3 = *(int *)(param_1 + 0x24);
    iVar4 = iVar1 * 0x20;
    do {
      iVar2 = FUN_10004470(iVar4 + 8 + iVar3);
      iVar3 = *(int *)(param_1 + 0x24);
      if (*(int *)(iVar4 + 4 + iVar3) < iVar2) {
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 * 0x20 + *(int *)(param_1 + 0x24));
        *(undefined4 *)(param_1 + 0x50) =
             *(undefined4 *)(iVar1 * 0x20 + 4 + *(int *)(param_1 + 0x24));
        return 0;
      }
      iVar1 = iVar1 + -1;
      iVar4 = iVar4 + -0x20;
    } while (-1 < iVar1);
  }
  return 2;
}



// ============================================================
// FUN_10003750 @ 0x10003750 84B
// ============================================================

undefined4 __thiscall FUN_10003750(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_10004470((int)(param_2 + 2));
  iVar1 = param_2[1];
  if (iVar1 < iVar2) {
    if (*param_2 == 0) {
      iVar2 = iVar2 + -1;
    }
    if (iVar1 < iVar2) {
      iVar2 = FUN_10004440(param_2 + 2,iVar1);
      iVar2 = FUN_100015f0(iVar2);
      iVar3 = FUN_100015f0(param_1);
      if (iVar2 <= iVar3) {
        iVar2 = *param_2;
        *(int *)((int)this + 0x50) = iVar1;
        *(int *)((int)this + 0x4c) = iVar2;
      }
    }
  }
  return 0;
}



// ============================================================
// FUN_100037f0 @ 0x100037f0 53B
// ============================================================

int __fastcall FUN_100037f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_10004470(param_1 + 4);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_10004440((void *)(param_1 + 4),iVar4);
      iVar2 = FUN_10001620(iVar2);
      iVar3 = iVar3 + iVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar3;
}



// ============================================================
// FUN_10003830 @ 0x10003830 54B
// ============================================================

int FUN_10003830(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = param_1 & 0x7f;
  while (param_1 = (int)param_1 >> 7, 0 < (int)param_1) {
    uVar2 = (uVar2 << 8 | 0x80) + (param_1 & 0x7f);
  }
  for (; iVar1 = iVar1 + 1, (uVar2 & 0x80) != 0; uVar2 = uVar2 >> 8) {
  }
  return iVar1;
}



// ============================================================
// FUN_10003870 @ 0x10003870 34B
// ============================================================

void __fastcall FUN_10003870(int param_1)

{
  FUN_10005120(*(undefined **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// ============================================================
// FUN_100038a0 @ 0x100038a0 56B
// ============================================================

void __fastcall FUN_100038a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  for (iVar2 = *(int *)(param_1 + 4); iVar2 != iVar1; iVar2 = iVar2 + 0x20) {
    FUN_10002a40(iVar2);
  }
  FUN_10005120(*(undefined **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// ============================================================
// FUN_100038e0 @ 0x100038e0 721B
// ============================================================

void __thiscall FUN_100038e0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  puVar5 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)(*(int *)((int)this + 0xc) - (int)puVar5 >> 5)) {
    if (param_2 <= (uint)((int)puVar5 - (int)param_1 >> 5)) {
      if (param_2 != 0) {
        puVar9 = puVar5;
        for (puVar4 = puVar5 + param_2 * -8; puVar4 != puVar5; puVar4 = puVar4 + 8) {
          FUN_10003e30(puVar9,puVar4);
          puVar9 = puVar9 + 8;
        }
        puVar5 = *(undefined4 **)((int)this + 8);
        puVar9 = puVar5 + param_2 * -8;
        if (param_1 != puVar9) {
          puVar4 = puVar9 + 2;
          puVar6 = puVar5 + 2;
          do {
            puVar1 = puVar9 + -8;
            puVar9 = puVar9 + -8;
            puVar5 = puVar5 + -8;
            *puVar5 = *puVar1;
            puVar6[-9] = puVar4[-9];
            FUN_10004040(puVar6 + -8,puVar4 + -8);
            puVar4 = puVar4 + -8;
            puVar6 = puVar6 + -8;
          } while (puVar9 != param_1);
        }
        puVar5 = param_1 + param_2 * 8;
        if (param_1 != puVar5) {
          do {
            *param_1 = *param_3;
            param_1[1] = param_3[1];
            FUN_10004040(param_1 + 2,param_3 + 2);
            param_1 = param_1 + 8;
          } while (param_1 != puVar5);
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x20;
      }
      return;
    }
    puVar9 = param_1 + param_2 * 8;
    for (puVar4 = param_1; puVar4 != puVar5; puVar4 = puVar4 + 8) {
      FUN_10003e30(puVar9,puVar4);
      puVar9 = puVar9 + 8;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    for (iVar7 = param_2 - ((int)puVar5 - (int)param_1 >> 5); iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_10003e30(puVar5,param_3);
      puVar5 = puVar5 + 8;
    }
    puVar5 = *(undefined4 **)((int)this + 8);
    if (param_1 != puVar5) {
      do {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        FUN_10004040(param_1 + 2,param_3 + 2);
        param_1 = param_1 + 8;
      } while (param_1 != puVar5);
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0x20;
    return;
  }
  iVar7 = *(int *)((int)this + 4);
  if ((iVar7 == 0) || (uVar2 = (int)puVar5 - iVar7 >> 5, uVar2 <= param_2)) {
    uVar2 = param_2;
  }
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)puVar5 - iVar7 >> 5;
  }
  iVar7 = uVar2 + iVar7;
  iVar3 = iVar7;
  if (iVar7 < 0) {
    iVar3 = 0;
  }
  puVar4 = operator_new(iVar3 << 5);
  puVar5 = puVar4;
  for (puVar9 = *(undefined4 **)((int)this + 4); uVar2 = param_2, puVar6 = puVar5, puVar9 != param_1
      ; puVar9 = puVar9 + 8) {
    FUN_10003e30(puVar5,puVar9);
    puVar5 = puVar5 + 8;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_10003e30(puVar6,param_3);
    puVar6 = puVar6 + 8;
  }
  puVar5 = puVar5 + param_2 * 8;
  puVar9 = *(undefined4 **)((int)this + 8);
  for (; param_1 != puVar9; param_1 = param_1 + 8) {
    FUN_10003e30(puVar5,param_1);
    puVar5 = puVar5 + 8;
  }
  iVar3 = *(int *)((int)this + 8);
  for (iVar8 = *(int *)((int)this + 4); iVar8 != iVar3; iVar8 = iVar8 + 0x20) {
    FUN_10002a40(iVar8);
  }
  FUN_10005120(*(undefined **)((int)this + 4));
  iVar3 = *(int *)((int)this + 4);
  *(undefined4 **)((int)this + 0xc) = puVar4 + iVar7 * 8;
  if (iVar3 != 0) {
    *(undefined4 **)((int)this + 4) = puVar4;
    *(undefined4 **)((int)this + 8) =
         puVar4 + ((*(int *)((int)this + 8) - iVar3 >> 5) + param_2) * 8;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar4;
  *(undefined4 **)((int)this + 8) = puVar4 + param_2 * 8;
  return;
}



// ============================================================
// FUN_10003bc0 @ 0x10003bc0 33B
// ============================================================

void FUN_10003bc0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_10002a40(param_1);
  }
  return;
}



// ============================================================
// FUN_10003bf0 @ 0x10003bf0 521B
// ============================================================

void __thiscall FUN_10003bf0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

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
  puVar4 = operator_new(iVar3 * 4);
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
  FUN_10005120(*(undefined **)((int)this + 4));
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
// FUN_10003e00 @ 0x10003e00 38B
// ============================================================

undefined4 * __cdecl FUN_10003e00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    *param_3 = uVar1;
    param_3 = param_3 + 1;
  } while (param_1 != param_2);
  return param_3;
}



// ============================================================
// FUN_10003e30 @ 0x10003e30 211B
// ============================================================

void __cdecl FUN_10003e30(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *this;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_1000a9b2;
  local_c = ExceptionList;
  local_4 = 0;
  uStack_3 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    if (param_2[4] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(param_2[5] - param_2[4]) >> 5;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    this = operator_new(iVar1 << 5);
    param_1[4] = this;
    iVar1 = param_2[5];
    for (iVar2 = param_2[4]; iVar2 != iVar1; iVar2 = iVar2 + 0x20) {
      local_4 = 1;
      if (this != (void *)0x0) {
        FUN_10001370(this,iVar2);
      }
      this = (void *)((int)this + 0x20);
    }
    param_1[5] = this;
    param_1[6] = this;
    param_1[7] = param_2[7];
    param_1[2] = &PTR_FUN_1000b100;
  }
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_10003f10 @ 0x10003f10 35B
// ============================================================

undefined4 * __thiscall FUN_10003f10(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  FUN_10004040((void *)((int)this + 8),param_1 + 2);
  return this;
}



// ============================================================
// FUN_10003f40 @ 0x10003f40 30B
// ============================================================

undefined4 * __thiscall FUN_10003f40(void *this,byte param_1)

{
  FUN_10003fc0(this);
  if ((param_1 & 1) != 0) {
    FUN_10005120(this);
  }
  return this;
}



// ============================================================
// FUN_10003f60 @ 0x10003f60 82B
// ============================================================

undefined4 * __fastcall FUN_10003f60(undefined4 *param_1)

{
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000a9cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = local_11;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_1000b100;
  FUN_10004130((int)param_1);
  ExceptionList = local_c;
  return param_1;
}



// ============================================================
// FUN_10003fc0 @ 0x10003fc0 121B
// ============================================================

void __fastcall FUN_10003fc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000a9eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_1000b100;
  local_4 = 0;
  FUN_10004130((int)param_1);
  puVar1 = (undefined4 *)param_1[3];
  puVar2 = (undefined4 *)param_1[2];
  local_4 = 0xffffffff;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 8) {
    (**(code **)*puVar2)(0);
  }
  FUN_10005120((undefined *)param_1[2]);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = pvStack_c;
  return;
}



// ============================================================
// FUN_10004040 @ 0x10004040 130B
// ============================================================

void * __thiscall FUN_10004040(void *this,void *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1000aa08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_10004470((int)param_1);
  FUN_10004130((int)this);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      pvVar2 = FUN_100040d0(param_1,local_2c,iVar3);
      local_4 = 0;
      FUN_100041e0(this,(int)pvVar2);
      local_4 = 0xffffffff;
      FUN_10001310(local_2c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  ExceptionList = local_c;
  return this;
}



// ============================================================
// FUN_100040d0 @ 0x100040d0 96B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10004149) */
/* WARNING: Removing unreachable block (ram,0x1000414f) */
/* WARNING: Removing unreachable block (ram,0x10004191) */

void * __thiscall FUN_100040d0(void *this,void *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *extraout_ECX;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  
  if (*(int *)((int)this + 8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 5;
  }
  if ((-1 < param_2) && (param_2 < iVar4)) {
    FUN_10001370(param_1,param_2 * 0x20 + *(int *)((int)this + 8));
    return param_1;
  }
  param_2 = 1;
  pvVar3 = (void *)__CxxThrowException_8(&param_2,&DAT_1000b978);
  puVar1 = *(undefined4 **)((int)extraout_ECX + 8);
  puVar2 = *(undefined4 **)((int)extraout_ECX + 0xc);
  puVar5 = puVar1;
  pvVar6 = extraout_ECX;
  if (puVar1 == puVar2) {
    *(undefined4 **)((int)extraout_ECX + 0xc) = puVar1;
    *(undefined4 *)((int)extraout_ECX + 0x14) = 0xffffffff;
    return pvVar3;
  }
  do {
    (**(code **)*puVar5)(0);
    puVar5 = puVar5 + 8;
  } while (puVar5 != puVar2);
  *(undefined4 **)((int)pvVar6 + 0xc) = puVar1;
  *(undefined4 *)((int)pvVar6 + 0x14) = 0xffffffff;
  return pvVar6;
}



// ============================================================
// FUN_10004130 @ 0x10004130 165B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10004149) */
/* WARNING: Removing unreachable block (ram,0x1000414f) */
/* WARNING: Removing unreachable block (ram,0x10004191) */

void __fastcall FUN_10004130(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  puVar3 = puVar1;
  if (puVar1 == puVar2) {
    *(undefined4 **)(param_1 + 0xc) = puVar1;
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    return;
  }
  do {
    (**(code **)*puVar3)(0);
    puVar3 = puVar3 + 8;
  } while (puVar3 != puVar2);
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}



// ============================================================
// FUN_100041e0 @ 0x100041e0 424B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10004349) */

void __thiscall FUN_100041e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  void *pvVar6;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (*(int *)((int)this + 0x10) - iVar1 >> 5 != 0) {
    FUN_10004510(iVar1,iVar1,(void *)(iVar1 + 0x20));
    FUN_10004550(*(void **)((int)this + 0xc),1 - ((int)*(void **)((int)this + 0xc) - iVar1 >> 5),
                 param_1);
    FUN_10004580(iVar1,*(int *)((int)this + 0xc),param_1);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x20;
    return;
  }
  iVar2 = *(int *)((int)this + 8);
  if ((iVar2 == 0) || (uVar5 = iVar1 - iVar2 >> 5, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 - iVar2 >> 5;
  }
  iVar2 = iVar2 + uVar5;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  pvVar4 = operator_new(iVar3 << 5);
  pvVar6 = pvVar4;
  for (iVar3 = *(int *)((int)this + 8); iVar3 != iVar1; iVar3 = iVar3 + 0x20) {
    FUN_10004730(pvVar6,iVar3);
    pvVar6 = (void *)((int)pvVar6 + 0x20);
  }
  FUN_10004550(pvVar6,1,param_1);
  FUN_10004510(iVar1,*(int *)((int)this + 0xc),(void *)((int)pvVar6 + 0x20));
  FUN_100044e0(*(undefined4 **)((int)this + 8),*(undefined4 **)((int)this + 0xc));
  FUN_10005120(*(undefined **)((int)this + 8));
  iVar1 = *(int *)((int)this + 8);
  *(void **)((int)this + 0x10) = (void *)(iVar2 * 0x20 + (int)pvVar4);
  if (iVar1 != 0) {
    *(void **)((int)this + 8) = pvVar4;
    *(void **)((int)this + 0xc) =
         (void *)(((*(int *)((int)this + 0xc) - iVar1 >> 5) + 1) * 0x20 + (int)pvVar4);
    return;
  }
  *(void **)((int)this + 8) = pvVar4;
  *(int *)((int)this + 0xc) = (int)pvVar4 + 0x20;
  return;
}



// ============================================================
// FUN_10004390 @ 0x10004390 171B
// ============================================================

undefined4 __thiscall FUN_10004390(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)((int)this + 8) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 5;
  }
  if ((-1 < param_1) && (param_1 < iVar4)) {
    iVar1 = *(int *)((int)this + 0xc);
    iVar3 = param_1 * 0x20 + *(int *)((int)this + 8);
    iVar4 = iVar3 + 0x20;
    if (iVar4 != iVar1) {
      puVar5 = (undefined1 *)(iVar3 + 9);
      do {
        *(undefined4 *)(puVar5 + -5) = *(undefined4 *)(puVar5 + 0x1b);
        puVar5[-1] = puVar5[0x1f];
        *puVar5 = puVar5[0x20];
        puVar5[1] = puVar5[0x21];
        puVar5[2] = puVar5[0x22];
        FUN_100021d0(puVar5 + 3,(int)(puVar5 + 0x23));
        iVar4 = iVar4 + 0x20;
        *(undefined4 *)(puVar5 + 0x13) = *(undefined4 *)(puVar5 + 0x33);
        puVar5 = puVar5 + 0x20;
      } while (iVar4 != iVar1);
    }
    puVar2 = *(undefined4 **)((int)this + 0xc);
    for (puVar6 = puVar2 + -8; puVar6 != puVar2; puVar6 = puVar6 + 8) {
      (**(code **)*puVar6)(0);
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -0x20;
    return 0;
  }
  return 0xfffffc21;
}



// ============================================================
// FUN_10004440 @ 0x10004440 47B
// ============================================================

int __thiscall FUN_10004440(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 5;
  }
  if ((-1 < param_1) && (param_1 < iVar1)) {
    return param_1 * 0x20 + *(int *)((int)this + 8);
  }
  return 0;
}



// ============================================================
// FUN_10004490 @ 0x10004490 67B
// ============================================================

void __fastcall FUN_10004490(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (puVar2 = *(undefined4 **)(param_1 + 4); puVar2 != puVar1; puVar2 = puVar2 + 8) {
    (**(code **)*puVar2)(0);
  }
  FUN_10005120(*(undefined **)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// ============================================================
// FUN_100044e0 @ 0x100044e0 34B
// ============================================================

void FUN_100044e0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    (**(code **)*param_1)(0);
  }
  return;
}



// ============================================================
// FUN_10004510 @ 0x10004510 56B
// ============================================================

void * FUN_10004510(int param_1,int param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_10004730(param_3,param_1);
    param_1 = param_1 + 0x20;
    param_3 = (void *)((int)param_3 + 0x20);
  } while (param_1 != param_2);
  return param_3;
}



// ============================================================
// FUN_10004550 @ 0x10004550 41B
// ============================================================

void FUN_10004550(void *param_1,int param_2,int param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_10004730(param_1,param_3);
    param_1 = (void *)((int)param_1 + 0x20);
  }
  return;
}



// ============================================================
// FUN_10004580 @ 0x10004580 423B
// ============================================================

void __cdecl FUN_10004580(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  uint uVar8;
  
  if (param_1 != param_2) {
    piVar7 = (int *)(param_1 + 0x10);
    do {
      piVar7[-3] = *(int *)(param_3 + 4);
      *(undefined1 *)(piVar7 + -2) = *(undefined1 *)(param_3 + 8);
      *(undefined1 *)((int)piVar7 + -7) = *(undefined1 *)(param_3 + 9);
      *(undefined1 *)((int)piVar7 + -6) = *(undefined1 *)(param_3 + 10);
      *(undefined1 *)((int)piVar7 + -5) = *(undefined1 *)(param_3 + 0xb);
      if (piVar7 + -1 != (int *)(param_3 + 0xc)) {
        puVar3 = *(undefined1 **)(param_3 + 0x10);
        if (puVar3 == (undefined1 *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(int *)(param_3 + 0x14) - (int)puVar3;
        }
        puVar1 = (undefined *)*piVar7;
        if (puVar1 == (undefined *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = piVar7[1] - (int)puVar1;
        }
        if (uVar4 < uVar8) {
          if (puVar3 == (undefined1 *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(int *)(param_3 + 0x14) - (int)puVar3;
          }
          if (puVar1 == (undefined *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = piVar7[2] - (int)puVar1;
          }
          if (uVar4 < uVar8) {
            FUN_10005120(puVar1);
            if (*(int *)(param_3 + 0x10) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10);
            }
            if ((int)uVar8 < 0) {
              uVar8 = 0;
            }
            puVar2 = operator_new(uVar8);
            *piVar7 = (int)puVar2;
            puVar3 = *(undefined1 **)(param_3 + 0x14);
            for (puVar6 = *(undefined1 **)(param_3 + 0x10); puVar6 != puVar3; puVar6 = puVar6 + 1) {
              if (puVar2 != (undefined1 *)0x0) {
                *puVar2 = *puVar6;
              }
              puVar2 = puVar2 + 1;
            }
            piVar7[1] = (int)puVar2;
            piVar7[2] = (int)puVar2;
          }
          else {
            if (puVar1 == (undefined *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = piVar7[1] - (int)puVar1;
            }
            puVar6 = puVar3 + iVar5;
            for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
              *puVar1 = *puVar3;
              puVar1 = puVar1 + 1;
            }
            puVar3 = (undefined1 *)piVar7[1];
            puVar2 = *(undefined1 **)(param_3 + 0x14);
            for (; puVar6 != puVar2; puVar6 = puVar6 + 1) {
              FUN_10002500(puVar3,puVar6);
              puVar3 = puVar3 + 1;
            }
            if (*(int *)(param_3 + 0x10) == 0) {
              piVar7[1] = *piVar7;
            }
            else {
              piVar7[1] = *piVar7 + (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10));
            }
          }
        }
        else {
          puVar6 = *(undefined1 **)(param_3 + 0x14);
          for (; puVar3 != puVar6; puVar3 = puVar3 + 1) {
            *puVar1 = *puVar3;
            puVar1 = puVar1 + 1;
          }
          if (*(int *)(param_3 + 0x10) == 0) {
            piVar7[1] = *piVar7;
          }
          else {
            piVar7[1] = *piVar7 + (*(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10));
          }
        }
      }
      piVar7[3] = *(int *)(param_3 + 0x1c);
      param_1 = param_1 + 0x20;
      piVar7 = piVar7 + 8;
    } while (param_1 != param_2);
  }
  return;
}



// ============================================================
// FUN_10004730 @ 0x10004730 67B
// ============================================================

void __cdecl FUN_10004730(void *param_1,int param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1000aa31;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_10001370(param_1,param_2);
  }
  ExceptionList = local_c;
  return;
}



// ============================================================
// FUN_10004780 @ 0x10004780 498B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10004930) */
/* WARNING: Removing unreachable block (ram,0x10004945) */
/* WARNING: Removing unreachable block (ram,0x10004951) */
/* WARNING: Removing unreachable block (ram,0x10004958) */

undefined4 __cdecl FUN_10004780(void *param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  iVar1 = FUN_10004980();
  if (iVar1 != 0) {
    FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,param_2);
    FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,param_2 + 1);
    FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,param_2 + 2);
    FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,param_2 + 3);
    return 4;
  }
  FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,param_2 + 3);
  FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,param_2 + 2);
  FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,param_2 + 1);
  puVar6 = *(undefined1 **)((int)param_1 + 8);
  if (*(undefined1 **)((int)param_1 + 0xc) != puVar6) {
    FUN_10002310(puVar6,puVar6,puVar6 + 1);
    FUN_100050f0(*(undefined1 **)((int)param_1 + 8),
                 (int)(puVar6 + (1 - (int)*(undefined1 **)((int)param_1 + 8))),param_2);
    puVar3 = *(undefined1 **)((int)param_1 + 8);
    if (puVar6 == puVar3) {
      *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + 1;
      return 4;
    }
    do {
      *puVar6 = *param_2;
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar3);
    *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + 1;
    return 4;
  }
  iVar1 = *(int *)((int)param_1 + 4);
  if ((iVar1 == 0) || (uVar5 = (int)puVar6 - iVar1, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar6 - iVar1;
  }
  uVar5 = iVar1 + uVar5;
  uVar2 = uVar5;
  if ((int)uVar5 < 0) {
    uVar2 = 0;
  }
  puVar3 = operator_new(uVar2);
  puVar4 = (undefined1 *)FUN_10002310(*(undefined1 **)((int)param_1 + 4),puVar6,puVar3);
  FUN_100050f0(puVar4,1,param_2);
  FUN_10002310(puVar6,*(undefined1 **)((int)param_1 + 8),puVar4 + 1);
  FUN_10001250();
  FUN_10005120(*(undefined **)((int)param_1 + 4));
  *(undefined1 **)((int)param_1 + 0xc) = puVar3 + uVar5;
  iVar1 = *(int *)((int)param_1 + 4);
  if (iVar1 != 0) {
    *(undefined1 **)((int)param_1 + 4) = puVar3;
    *(undefined1 **)((int)param_1 + 8) = puVar3 + (*(int *)((int)param_1 + 8) - iVar1) + 1;
    return 4;
  }
  *(undefined1 **)((int)param_1 + 4) = puVar3;
  *(undefined1 **)((int)param_1 + 8) = puVar3 + 1;
  return 4;
}



// ============================================================
// FUN_10004990 @ 0x10004990 446B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10004b0c) */
/* WARNING: Removing unreachable block (ram,0x10004b21) */
/* WARNING: Removing unreachable block (ram,0x10004b2c) */
/* WARNING: Removing unreachable block (ram,0x10004b33) */

undefined4 __cdecl FUN_10004990(void *param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  iVar1 = FUN_10004980();
  if (iVar1 != 0) {
    FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,param_2);
    FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,param_2 + 1);
    return 2;
  }
  FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,param_2 + 1);
  puVar7 = *(undefined1 **)((int)param_1 + 8);
  if (*(undefined1 **)((int)param_1 + 0xc) == puVar7) {
    iVar1 = *(int *)((int)param_1 + 4);
    if ((iVar1 == 0) || (uVar4 = (int)puVar7 - iVar1, uVar4 < 2)) {
      uVar4 = 1;
    }
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)puVar7 - iVar1;
    }
    uVar4 = iVar1 + uVar4;
    uVar2 = uVar4;
    if ((int)uVar4 < 0) {
      uVar2 = 0;
    }
    puVar3 = operator_new(uVar2);
    puVar5 = puVar3;
    for (puVar6 = *(undefined1 **)((int)param_1 + 4); puVar6 != puVar7; puVar6 = puVar6 + 1) {
      FUN_10002500(puVar5,puVar6);
      puVar5 = puVar5 + 1;
    }
    FUN_10002500(puVar5,param_2);
    FUN_10002310(puVar7,*(undefined1 **)((int)param_1 + 8),puVar5 + 1);
    FUN_10001250();
    FUN_10005120(*(undefined **)((int)param_1 + 4));
    *(undefined1 **)((int)param_1 + 0xc) = puVar3 + uVar4;
    iVar1 = *(int *)((int)param_1 + 4);
    if (iVar1 == 0) {
      *(undefined1 **)((int)param_1 + 4) = puVar3;
      *(undefined1 **)((int)param_1 + 8) = puVar3 + 1;
      return 2;
    }
    *(undefined1 **)((int)param_1 + 4) = puVar3;
    *(undefined1 **)((int)param_1 + 8) = puVar3 + (*(int *)((int)param_1 + 8) - iVar1) + 1;
    return 2;
  }
  FUN_10002310(puVar7,puVar7,puVar7 + 1);
  FUN_100050f0(*(undefined1 **)((int)param_1 + 8),
               (int)(puVar7 + (1 - (int)*(undefined1 **)((int)param_1 + 8))),param_2);
  puVar6 = *(undefined1 **)((int)param_1 + 8);
  if (puVar7 != puVar6) {
    do {
      *puVar7 = *param_2;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar6);
    *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + 1;
    return 2;
  }
  *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + 1;
  return 2;
}



// ============================================================
// FUN_10004b50 @ 0x10004b50 387B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10004c8f) */
/* WARNING: Removing unreachable block (ram,0x10004ca4) */
/* WARNING: Removing unreachable block (ram,0x10004caf) */
/* WARNING: Removing unreachable block (ram,0x10004cb6) */

undefined4 __cdecl FUN_10004b50(int param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  puVar7 = *(undefined1 **)(param_1 + 8);
  if (*(undefined1 **)(param_1 + 0xc) != puVar7) {
    FUN_10002310(puVar7,puVar7,puVar7 + 1);
    FUN_100050f0(*(undefined1 **)(param_1 + 8),
                 (int)(puVar7 + (1 - (int)*(undefined1 **)(param_1 + 8))),&param_2);
    puVar6 = *(undefined1 **)(param_1 + 8);
    if (puVar7 != puVar6) {
      do {
        *puVar7 = param_2;
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar6);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return 1;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return 1;
  }
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (uVar4 = (int)puVar7 - iVar1, uVar4 < 2)) {
    uVar4 = 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar7 - iVar1;
  }
  uVar4 = iVar1 + uVar4;
  uVar2 = uVar4;
  if ((int)uVar4 < 0) {
    uVar2 = 0;
  }
  puVar3 = operator_new(uVar2);
  puVar5 = puVar3;
  for (puVar6 = *(undefined1 **)(param_1 + 4); puVar6 != puVar7; puVar6 = puVar6 + 1) {
    FUN_10002500(puVar5,puVar6);
    puVar5 = puVar5 + 1;
  }
  FUN_10002500(puVar5,&param_2);
  puVar6 = *(undefined1 **)(param_1 + 8);
  for (; puVar7 != puVar6; puVar7 = puVar7 + 1) {
    puVar5 = puVar5 + 1;
    FUN_10002500(puVar5,puVar7);
  }
  FUN_10005120(*(undefined **)(param_1 + 4));
  *(undefined1 **)(param_1 + 0xc) = puVar3 + uVar4;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    *(undefined1 **)(param_1 + 4) = puVar3;
    *(undefined1 **)(param_1 + 8) = puVar3 + 1;
    return 1;
  }
  *(undefined1 **)(param_1 + 4) = puVar3;
  *(undefined1 **)(param_1 + 8) = puVar3 + (*(int *)(param_1 + 8) - iVar1) + 1;
  return 1;
}



// ============================================================
// FUN_10004ce0 @ 0x10004ce0 75B
// ============================================================

int __cdecl FUN_10004ce0(void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3;
  iVar1 = param_2;
  if ((param_2 != 0) && (0 < param_3)) {
    iVar3 = 0;
    if (0 < param_3) {
      do {
        param_2 = CONCAT31(param_2._1_3_,*(undefined1 *)(iVar3 + iVar1));
        FUN_10001ea0(param_1,*(undefined1 **)((int)param_1 + 8),1,(undefined1 *)&param_2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    return iVar2;
  }
  return -0x3df;
}



// ============================================================
// FUN_10004d30 @ 0x10004d30 445B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10004e8c) */
/* WARNING: Removing unreachable block (ram,0x10004ea7) */
/* WARNING: Removing unreachable block (ram,0x10004eb2) */
/* WARNING: Removing unreachable block (ram,0x10004eb9) */

int __cdecl FUN_10004d30(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint local_10;
  int local_c;
  
  local_10 = param_2 & 0x7f;
  local_c = 0;
  uVar4 = param_2;
  while (uVar4 = (int)uVar4 >> 7, 0 < (int)uVar4) {
    local_10 = (local_10 << 8 | 0x80) + (uVar4 & 0x7f);
  }
  while( true ) {
    puVar7 = *(undefined1 **)(param_1 + 8);
    param_2 = CONCAT31(param_2._1_3_,(char)local_10);
    if (*(undefined1 **)(param_1 + 0xc) == puVar7) {
      iVar1 = *(int *)(param_1 + 4);
      if ((iVar1 == 0) || (uVar4 = (int)puVar7 - iVar1, uVar4 < 2)) {
        uVar4 = 1;
      }
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (int)puVar7 - iVar1;
      }
      uVar4 = iVar1 + uVar4;
      uVar2 = uVar4;
      if ((int)uVar4 < 0) {
        uVar2 = 0;
      }
      puVar3 = operator_new(uVar2);
      puVar5 = puVar3;
      for (puVar6 = *(undefined1 **)(param_1 + 4); puVar6 != puVar7; puVar6 = puVar6 + 1) {
        FUN_10002500(puVar5,puVar6);
        puVar5 = puVar5 + 1;
      }
      FUN_10002500(puVar5,(undefined1 *)&param_2);
      puVar6 = *(undefined1 **)(param_1 + 8);
      for (; puVar7 != puVar6; puVar7 = puVar7 + 1) {
        puVar5 = puVar5 + 1;
        FUN_10002500(puVar5,puVar7);
      }
      FUN_10005120(*(undefined **)(param_1 + 4));
      *(undefined1 **)(param_1 + 0xc) = puVar3 + uVar4;
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 == 0) {
        *(undefined1 **)(param_1 + 4) = puVar3;
        *(undefined1 **)(param_1 + 8) = puVar3 + 1;
      }
      else {
        *(undefined1 **)(param_1 + 4) = puVar3;
        *(undefined1 **)(param_1 + 8) = puVar3 + (*(int *)(param_1 + 8) - iVar1) + 1;
      }
    }
    else {
      FUN_10002310(puVar7,puVar7,puVar7 + 1);
      FUN_100050f0(*(undefined1 **)(param_1 + 8),
                   (int)(puVar7 + (1 - (int)*(undefined1 **)(param_1 + 8))),(undefined1 *)&param_2);
      puVar6 = *(undefined1 **)(param_1 + 8);
      for (; puVar7 != puVar6; puVar7 = puVar7 + 1) {
        *puVar7 = (undefined1)param_2;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    local_c = local_c + 1;
    if ((local_10 & 0x80) == 0) break;
    local_10 = local_10 >> 8;
  }
  return local_c;
}



// ============================================================
// FUN_10004ef0 @ 0x10004ef0 63B
// ============================================================

undefined4 __cdecl FUN_10004ef0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = CONCAT13((char)param_1,
                     CONCAT12((char)((uint)param_1 >> 8),
                              CONCAT11((char)((uint)param_1 >> 0x10),(char)((uint)param_1 >> 0x18)))
                    );
  iVar1 = FUN_10004980();
  if (iVar1 == 0) {
    param_1 = local_4;
  }
  return param_1;
}



// ============================================================
// FUN_10004f30 @ 0x10004f30 442B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x1000508a) */
/* WARNING: Removing unreachable block (ram,0x100050a5) */
/* WARNING: Removing unreachable block (ram,0x100050b1) */
/* WARNING: Removing unreachable block (ram,0x100050b8) */
/* WARNING: Removing unreachable block (ram,0x100050c1) */

int __cdecl FUN_10004f30(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int local_10;
  int local_c;
  
  if (*(int *)(param_2 + 4) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
  }
  local_c = 0;
  if (local_10 < 1) {
    return local_10;
  }
  do {
    puVar8 = *(undefined1 **)(param_1 + 8);
    puVar5 = (undefined1 *)(local_c + *(int *)(param_2 + 4));
    if (*(undefined1 **)(param_1 + 0xc) == puVar8) {
      iVar1 = *(int *)(param_1 + 4);
      if ((iVar1 == 0) || (uVar4 = (int)puVar8 - iVar1, uVar4 < 2)) {
        uVar4 = 1;
      }
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = (int)puVar8 - iVar1;
      }
      uVar4 = iVar1 + uVar4;
      uVar2 = uVar4;
      if ((int)uVar4 < 0) {
        uVar2 = 0;
      }
      puVar3 = operator_new(uVar2);
      puVar7 = puVar3;
      for (puVar6 = *(undefined1 **)(param_1 + 4); puVar6 != puVar8; puVar6 = puVar6 + 1) {
        FUN_10002500(puVar7,puVar6);
        puVar7 = puVar7 + 1;
      }
      FUN_10002500(puVar7,puVar5);
      puVar5 = *(undefined1 **)(param_1 + 8);
      for (; puVar8 != puVar5; puVar8 = puVar8 + 1) {
        puVar7 = puVar7 + 1;
        FUN_10002500(puVar7,puVar8);
      }
      FUN_10005120(*(undefined **)(param_1 + 4));
      iVar1 = *(int *)(param_1 + 4);
      *(undefined1 **)(param_1 + 0xc) = puVar3 + uVar4;
      if (iVar1 == 0) {
        *(undefined1 **)(param_1 + 4) = puVar3;
        *(undefined1 **)(param_1 + 8) = puVar3 + 1;
      }
      else {
        *(undefined1 **)(param_1 + 4) = puVar3;
        *(undefined1 **)(param_1 + 8) = puVar3 + (*(int *)(param_1 + 8) - iVar1) + 1;
      }
    }
    else {
      FUN_10002310(puVar8,puVar8,puVar8 + 1);
      FUN_100050f0(*(undefined1 **)(param_1 + 8),
                   (int)(puVar8 + (1 - (int)*(undefined1 **)(param_1 + 8))),puVar5);
      puVar6 = *(undefined1 **)(param_1 + 8);
      for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
        *puVar8 = *puVar5;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    local_c = local_c + 1;
  } while (local_c < local_10);
  return local_10;
}



// ============================================================
// FUN_100050f0 @ 0x100050f0 35B
// ============================================================

void FUN_100050f0(undefined1 *param_1,int param_2,undefined1 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined1 *)0x0) {
      *param_1 = *param_3;
    }
    param_1 = param_1 + 1;
  }
  return;
}



// ============================================================
// FUN_1000516e @ 0x1000516e 45B
// ============================================================

void FUN_1000516e(undefined *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    /* WARNING: Could not recover jumptable at 0x10005199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



// ============================================================
// FUN_100051b0 @ 0x100051b0 79B
// ============================================================

void FUN_100051b0(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x100051d8,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



// ============================================================
// FUN_100051ff @ 0x100051ff 54B
// ============================================================

undefined4 __cdecl
FUN_100051ff(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4)

{
  int *in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_10006259(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



// ============================================================
// FUN_10005235 @ 0x10005235 84B
// ============================================================

undefined4 __cdecl
FUN_10005235(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_18;
  code *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_14 = FUN_10005289;
  local_8 = param_4 + 1;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



// ============================================================
// FUN_10005289 @ 0x10005289 37B
// ============================================================

void __cdecl FUN_10005289(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_10006259(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



// ============================================================
// FUN_100052ae @ 0x100052ae 182B
// ============================================================

undefined4 __cdecl
FUN_100052ae(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  local_28 = FUN_10005364;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x10005336;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_10006b41();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(undefined4 *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}



// ============================================================
// FUN_10005364 @ 0x10005364 114B
// ============================================================

undefined4 __cdecl FUN_10005364(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  undefined4 uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(undefined4 *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_10006259(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_100051b0(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x100053ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}



// ============================================================
// FUN_100053d9 @ 0x100053d9 123B
// ============================================================

int __cdecl FUN_100053d9(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

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
      FUN_10006ca9();
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
    FUN_10006ca9();
  }
  return iVar1 + uVar5 * 0x14;
}



// ============================================================
// __global_unwind2 @ 0x10005454 32B
// ============================================================

/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000546c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}



// ============================================================
// __local_unwind2 @ 0x10005496 104B
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
  puStack_18 = &LAB_10005474;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == -1) || (iVar2 == param_2)) break;
    local_14 = *(undefined4 *)(iVar1 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 0xc) = local_14;
    if (*(int *)(iVar1 + 4 + iVar2 * 0xc) == 0) {
      FUN_1000552a();
      (**(code **)(iVar1 + 8 + iVar2 * 0xc))();
    }
  }
  ExceptionList = pvStack_1c;
  return;
}



// ============================================================
// __abnormal_termination @ 0x100054fe 35B
// ============================================================

/* Library Function - Single Match
    __abnormal_termination
   
   Library: Visual Studio */

int __cdecl __abnormal_termination(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(undefined1 **)((int)ExceptionList + 4) == &LAB_10005474) &&
     (*(int *)((int)ExceptionList + 8) == *(int *)(*(int *)((int)ExceptionList + 0xc) + 0xc))) {
    iVar1 = 1;
  }
  return iVar1;
}



// ============================================================
// FUN_1000552a @ 0x1000552a 24B
// ============================================================

void FUN_1000552a(void)

{
  undefined4 in_EAX;
  int unaff_EBP;
  
  DAT_1000c178 = *(undefined4 *)(unaff_EBP + 8);
  DAT_1000c174 = in_EAX;
  DAT_1000c17c = unaff_EBP;
  return;
}



// ============================================================
// FUN_10005550 @ 0x10005550 41B
// ============================================================

void __fastcall FUN_10005550(undefined4 *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_10006e85(0x1b);
  if ((undefined *)param_1[1] != (undefined *)0x0) {
    FUN_10005b79((undefined *)param_1[1]);
  }
  FUN_10006ee6(0x1b);
  return;
}



// ============================================================
// FUN_10005579 @ 0x10005579 28B
// ============================================================

undefined4 * __thiscall FUN_10005579(void *this,byte param_1)

{
  FUN_10005550(this);
  if ((param_1 & 1) != 0) {
    FUN_10005120(this);
  }
  return this;
}



// ============================================================
// __CxxThrowException@8 @ 0x10005595 58B
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
  
  pDVar2 = &DAT_1000b110;
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
// FUN_100055d0 @ 0x100055d0 664B
// ============================================================

undefined4 * __cdecl FUN_100055d0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10005787_caseD_2;
        case 3:
          goto switchD_10005787_caseD_3;
        }
        goto switchD_10005787_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10005787_caseD_0;
      case 1:
        goto switchD_10005787_caseD_1;
      case 2:
        goto switchD_10005787_caseD_2;
      case 3:
        goto switchD_10005787_caseD_3;
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
              goto switchD_10005787_caseD_2;
            case 3:
              goto switchD_10005787_caseD_3;
            }
            goto switchD_10005787_caseD_1;
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
              goto switchD_10005787_caseD_2;
            case 3:
              goto switchD_10005787_caseD_3;
            }
            goto switchD_10005787_caseD_1;
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
              goto switchD_10005787_caseD_2;
            case 3:
              goto switchD_10005787_caseD_3;
            }
            goto switchD_10005787_caseD_1;
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
switchD_10005787_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10005787_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10005787_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10005787_caseD_0:
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
        goto switchD_10005605_caseD_2;
      case 3:
        goto switchD_10005605_caseD_3;
      }
      goto switchD_10005605_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005605_caseD_0;
    case 1:
      goto switchD_10005605_caseD_1;
    case 2:
      goto switchD_10005605_caseD_2;
    case 3:
      goto switchD_10005605_caseD_3;
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
            goto switchD_10005605_caseD_2;
          case 3:
            goto switchD_10005605_caseD_3;
          }
          goto switchD_10005605_caseD_1;
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
            goto switchD_10005605_caseD_2;
          case 3:
            goto switchD_10005605_caseD_3;
          }
          goto switchD_10005605_caseD_1;
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
            goto switchD_10005605_caseD_2;
          case 3:
            goto switchD_10005605_caseD_3;
          }
          goto switchD_10005605_caseD_1;
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
switchD_10005605_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005605_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005605_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005605_caseD_0:
  return param_1;
}



// ============================================================
// _strncmp @ 0x10005910 56B
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
// FUN_10005950 @ 0x10005950 133B
// ============================================================

uint * __cdecl FUN_10005950(uint *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return param_1;
  }
  if (param_2[1] == '\0') {
    while (((uint)param_1 & 3) != 0) {
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      param_1 = (uint *)((int)param_1 + 1);
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
    }
    while( true ) {
      while( true ) {
        uVar5 = *param_1;
        uVar9 = uVar5 ^ CONCAT22(CONCAT11(cVar3,cVar3),CONCAT11(cVar3,cVar3));
        uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
        puVar10 = param_1 + 1;
        if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
        param_1 = puVar10;
        if ((uVar7 & 0x81010100) != 0) {
          if ((uVar7 & 0x1010100) != 0) {
            return (uint *)0x0;
          }
          if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
            return (uint *)0x0;
          }
        }
      }
      uVar5 = *param_1;
      if ((char)uVar5 == cVar3) {
        return param_1;
      }
      if ((char)uVar5 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 8);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 1);
      }
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
      cVar6 = (char)(uVar5 >> 0x10);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 2);
      }
      if (cVar6 == '\0') break;
      cVar6 = (char)(uVar5 >> 0x18);
      if (cVar6 == cVar3) {
        return (uint *)((int)param_1 + 3);
      }
      param_1 = puVar10;
      if (cVar6 == '\0') {
        return (uint *)0x0;
      }
    }
    return (uint *)0x0;
  }
  do {
    cVar6 = (char)*param_1;
    do {
      while (puVar10 = param_1, param_1 = (uint *)((int)puVar10 + 1), cVar6 != cVar3) {
        if (cVar6 == '\0') {
          return (uint *)0x0;
        }
        cVar6 = *(char *)param_1;
      }
      cVar6 = *(char *)param_1;
      pcVar8 = param_2;
      puVar4 = puVar10;
    } while (cVar6 != param_2[1]);
    do {
      if (pcVar8[2] == '\0') {
        return puVar10;
      }
      if (*(char *)((int)puVar4 + 2) != pcVar8[2]) break;
      pcVar1 = pcVar8 + 3;
      if (*pcVar1 == '\0') {
        return puVar10;
      }
      pcVar2 = (char *)((int)puVar4 + 3);
      pcVar8 = pcVar8 + 2;
      puVar4 = (uint *)((int)puVar4 + 2);
    } while (*pcVar1 == *pcVar2);
  } while( true );
}



// ============================================================
// FUN_100059d0 @ 0x100059d0 217B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100059d0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 1) {
    DAT_1000ec40 = GetVersion();
    iVar1 = FUN_10007997(1);
    if (iVar1 != 0) {
      _DAT_1000ec4c = DAT_1000ec40 >> 8 & 0xff;
      _DAT_1000ec48 = DAT_1000ec40 & 0xff;
      DAT_1000ec40 = DAT_1000ec40 >> 0x10;
      _DAT_1000ec44 = _DAT_1000ec48 * 0x100 + _DAT_1000ec4c;
      iVar1 = FUN_10006abc();
      if (iVar1 != 0) {
        DAT_1000f2b8 = GetCommandLineA();
        DAT_1000ebc0 = FUN_100076f0();
        FUN_100071da();
        FUN_100074a3();
        FUN_100073ea();
        FUN_100070bc();
        DAT_1000ebbc = DAT_1000ebbc + 1;
        goto LAB_10005aa3;
      }
      FUN_100079f4();
    }
LAB_10005a30:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (DAT_1000ebbc < 1) goto LAB_10005a30;
      DAT_1000ebbc = DAT_1000ebbc + -1;
      if (DAT_1000ec78 == 0) {
        FUN_100070fa();
      }
      FUN_10007396();
      FUN_10006b10();
      FUN_100079f4();
    }
    else if (param_2 == 3) {
      FUN_10006ba8((undefined *)0x0);
    }
LAB_10005aa3:
    uVar2 = 1;
  }
  return uVar2;
}



// ============================================================
// entry @ 0x10005aa9 157B
// ============================================================

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_1000ebbc;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10005af1;
    if ((DAT_1000f2bc != (code *)0x0) &&
       (iVar2 = (*DAT_1000f2bc)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_100059d0(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10005af1:
  iVar2 = FUN_10007a9c();
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_100059d0(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_100059d0(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_1000f2bc != (code *)0x0) {
      iVar2 = (*DAT_1000f2bc)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}



// ============================================================
// __amsg_exit @ 0x10005b46 48B
// ============================================================

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1000ebc8 == 1) || ((DAT_1000ebc8 == 0 && (DAT_1000ebcc == 1)))) {
    FUN_10007aa2();
  }
  FUN_10007adb((undefined *)param_1);
  (*(code *)PTR___exit_1000c1a0)(0xff);
  return;
}



// ============================================================
// FUN_10005b79 @ 0x10005b79 215B
// ============================================================

void __cdecl FUN_10005b79(undefined *param_1)

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
  puStack_c = &DAT_1000b130;
  puStack_10 = &LAB_10008e4c;
  local_14 = ExceptionList;
  if (param_1 == (undefined *)0x0) {
    return;
  }
  if (DAT_1000f188 == 3) {
    ExceptionList = &local_14;
    FUN_10006e85(9);
    local_8 = 0;
    local_20 = (uint *)FUN_10007c76((int)param_1);
    if (local_20 != (uint *)0x0) {
      FUN_10007ca1(local_20,(int)param_1);
    }
    local_8 = 0xffffffff;
    FUN_10005be3();
    puVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000f188 != 2) goto LAB_10005c45;
    ExceptionList = &local_14;
    FUN_10006e85(9);
    local_8 = 1;
    local_28 = (uint *)FUN_100089d1(param_1,&local_2c,&local_24);
    if (local_28 != (uint *)0x0) {
      FUN_10008a28(local_2c,local_24,(byte *)local_28);
    }
    local_8 = 0xffffffff;
    FUN_10005c3b();
    puVar1 = local_28;
  }
  if (puVar1 != (uint *)0x0) {
    ExceptionList = local_14;
    return;
  }
LAB_10005c45:
  HeapFree(DAT_1000f184,0,param_1);
  ExceptionList = local_14;
  return;
}



// ============================================================
// _strlen @ 0x10005c70 123B
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
    if (((uint)puVar2 & 3) == 0) goto LAB_10005c90;
    uVar1 = *puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
  } while ((char)uVar1 != '\0');
LAB_10005cc3:
  return (size_t)((int)puVar2 + (-1 - (int)_Str));
LAB_10005c90:
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
  goto LAB_10005cc3;
}



// ============================================================
// FUN_10005d10 @ 0x10005d10 664B
// ============================================================

undefined4 * __cdecl FUN_10005d10(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
          goto switchD_10005ec7_caseD_2;
        case 3:
          goto switchD_10005ec7_caseD_3;
        }
        goto switchD_10005ec7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10005ec7_caseD_0;
      case 1:
        goto switchD_10005ec7_caseD_1;
      case 2:
        goto switchD_10005ec7_caseD_2;
      case 3:
        goto switchD_10005ec7_caseD_3;
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
              goto switchD_10005ec7_caseD_2;
            case 3:
              goto switchD_10005ec7_caseD_3;
            }
            goto switchD_10005ec7_caseD_1;
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
              goto switchD_10005ec7_caseD_2;
            case 3:
              goto switchD_10005ec7_caseD_3;
            }
            goto switchD_10005ec7_caseD_1;
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
              goto switchD_10005ec7_caseD_2;
            case 3:
              goto switchD_10005ec7_caseD_3;
            }
            goto switchD_10005ec7_caseD_1;
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
switchD_10005ec7_caseD_1:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_10005ec7_caseD_2:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_10005ec7_caseD_3:
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return param_1;
    }
switchD_10005ec7_caseD_0:
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
        goto switchD_10005d45_caseD_2;
      case 3:
        goto switchD_10005d45_caseD_3;
      }
      goto switchD_10005d45_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10005d45_caseD_0;
    case 1:
      goto switchD_10005d45_caseD_1;
    case 2:
      goto switchD_10005d45_caseD_2;
    case 3:
      goto switchD_10005d45_caseD_3;
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
            goto switchD_10005d45_caseD_2;
          case 3:
            goto switchD_10005d45_caseD_3;
          }
          goto switchD_10005d45_caseD_1;
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
            goto switchD_10005d45_caseD_2;
          case 3:
            goto switchD_10005d45_caseD_3;
          }
          goto switchD_10005d45_caseD_1;
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
            goto switchD_10005d45_caseD_2;
          case 3:
            goto switchD_10005d45_caseD_3;
          }
          goto switchD_10005d45_caseD_1;
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
switchD_10005d45_caseD_1:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10005d45_caseD_2:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10005d45_caseD_3:
    *(undefined1 *)puVar3 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar3 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10005d45_caseD_0:
  return param_1;
}



// ============================================================
// FUN_10006104 @ 0x10006104 27B
// ============================================================

undefined4 __cdecl FUN_10006104(undefined4 param_1)

{
  int iVar1;
  
  if (DAT_1000ebd0 != (code *)0x0) {
    iVar1 = (*DAT_1000ebd0)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// ============================================================
// __nh_malloc @ 0x10006131 44B
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
      pvVar1 = (void *)FUN_1000615d((uint *)_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_10006104(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}



// ============================================================
// FUN_1000615d @ 0x1000615d 231B
// ============================================================

void __cdecl FUN_1000615d(uint *param_1)

{
  int *piVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b148;
  puStack_10 = &LAB_10008e4c;
  local_14 = ExceptionList;
  if (DAT_1000f188 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_1000f180) {
      ExceptionList = &local_14;
      FUN_10006e85(9);
      local_8 = 0;
      piVar1 = FUN_10007fca(param_1);
      local_8 = 0xffffffff;
      FUN_100061c4();
      if (piVar1 != (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000f188 == 2) {
      if (param_1 == (uint *)0x0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_1000e36c) {
        ExceptionList = &local_14;
        FUN_10006e85(9);
        local_8 = 1;
        piVar1 = FUN_10008a6d(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_10006223();
        if (piVar1 != (int *)0x0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_1000623c;
    }
  }
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)0x1;
  }
  dwBytes = (int)param_1 + 0xfU & 0xfffffff0;
LAB_1000623c:
  HeapAlloc(DAT_1000f184,0,dwBytes);
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10006259 @ 0x10006259 155B
// ============================================================

undefined4 __cdecl
FUN_10006259(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_10006ca9();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_100062f4(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_100065ae((int)param_2,param_4,(int)param_5,-1);
  }
  return 1;
}



// ============================================================
// FUN_100062f4 @ 0x100062f4 435B
// ============================================================

void __cdecl
FUN_100062f4(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
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
    FUN_10006ca9();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_10006b41();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_10006b41();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_10006b41();
      param_3 = pDVar3[0x1c];
      local_18 = CONCAT31(local_18._1_3_,1);
      bVar2 = FUN_10009341(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_10006ca9();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_1000647c;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_10006ca9();
      }
    }
    iVar5 = local_14;
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      piVar4 = (int *)FUN_100053d9(param_5,param_7,local_14,&local_8,&local_1c);
      do {
        if (local_1c <= local_8) {
          if (param_6 == '\0') {
            return;
          }
          FUN_100069e6((int)param_1);
          return;
        }
        if ((*piVar4 <= iVar5) && (iVar5 <= piVar4[1])) {
          pbVar1 = (byte *)piVar4[4];
          for (local_10 = piVar4[3]; iVar5 = local_14, 0 < local_10; local_10 = local_10 + -1) {
            piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
            for (local_c = *piVar6; 0 < local_c; local_c = local_c + -1) {
              piVar6 = piVar6 + 1;
              iVar5 = FUN_10006551(pbVar1,(byte *)*piVar6,(uint *)param_1->ExceptionInformation[2]);
              if (iVar5 != 0) {
                FUN_10006662(param_1,param_2,param_3,param_4,param_5,pbVar1,(byte *)*piVar6,piVar4,
                             param_7,param_8);
                iVar5 = local_14;
                goto LAB_1000645c;
              }
            }
            pbVar1 = pbVar1 + 0x10;
          }
        }
LAB_1000645c:
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_1000647c:
  if (param_6 == '\0') {
    FUN_100064a7(param_1,param_2,param_3,param_4,param_5,local_14,param_7,param_8);
    return;
  }
  FUN_10006c48();
  return;
}



// ============================================================
// FUN_100064a7 @ 0x100064a7 170B
// ============================================================

void __cdecl
FUN_100064a7(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_c;
  uint local_8;
  
  pDVar1 = FUN_10006b41();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_100052ae(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_100053d9(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
      iVar4 = piVar3[3] * 0x10 + piVar3[4];
      iVar2 = *(int *)(iVar4 + -0xc);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
        FUN_10006662(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                     piVar3,param_7,param_8);
      }
    }
    piVar3 = piVar3 + 5;
  }
  return;
}



// ============================================================
// FUN_10006551 @ 0x10006551 93B
// ============================================================

undefined4 __cdecl FUN_10006551(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_100065a8:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_10006582:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_100065a8;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_10006582;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// FUN_100065ae @ 0x100065ae 132B
// ============================================================

void __cdecl FUN_100065ae(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000b160;
  puStack_10 = &LAB_10008e4c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_10006ca9();
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
// FUN_1000664c @ 0x1000664c 22B
// ============================================================

undefined4 __cdecl FUN_1000664c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 != -0x1f928c9d) {
    return 0;
  }
  uVar1 = FUN_10006c48();
  return uVar1;
}



// ============================================================
// FUN_10006662 @ 0x10006662 123B
// ============================================================

void __cdecl
FUN_10006662(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,undefined4 param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  undefined *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_10006822((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_100051b0(param_10,param_1);
  FUN_100065ae((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (undefined *)
       FUN_100066dd((DWORD)param_1,param_2,param_3,param_5,*(undefined4 *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (undefined *)0x0) {
    FUN_1000516e(UNRECOVERED_JUMPTABLE);
  }
  return;
}



// ============================================================
// FUN_100066dd @ 0x100066dd 165B
// ============================================================

undefined4 __cdecl
FUN_100066dd(DWORD param_1,undefined4 param_2,DWORD param_3,undefined4 param_4,undefined4 param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b170;
  puStack_10 = &LAB_10008e4c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_10006b41();
  FUN_10006b41();
  pDVar1 = FUN_10006b41();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_10006b41();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_10005235(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_100067aa();
  ExceptionList = local_14;
  return uVar2;
}



// ============================================================
// FUN_100067aa @ 0x100067aa 78B
// ============================================================

void FUN_100067aa(void)

{
  DWORD *pDVar1;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  pDVar1 = FUN_10006b41();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_10006b41();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    __abnormal_termination();
    FUN_100069e6((int)unaff_EDI);
  }
  return;
}



// ============================================================
// FUN_100067f8 @ 0x100067f8 42B
// ============================================================

undefined4 __cdecl FUN_100067f8(int *param_1)

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
// FUN_10006822 @ 0x10006822 440B
// ============================================================

void __cdecl FUN_10006822(int param_1,int param_2,byte *param_3,byte *param_4)

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
  
  puStack_c = &DAT_1000b188;
  puStack_10 = &LAB_10008e4c;
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
        bVar2 = FUN_10009341(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
           (bVar2 = FUN_1000935d(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
          uVar5 = *(uint *)(param_4 + 0x14);
          puVar4 = (undefined4 *)FUN_10006a4d(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_100055d0(piVar1,puVar4,uVar5);
          ExceptionList = local_14;
          return;
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_10009341(*(void **)(param_1 + 0x18),1);
        if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
            (bVar2 = FUN_1000935d(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
           (bVar2 = FUN_10009379(*(FARPROC *)(param_4 + 0x18)), CONCAT31(extraout_var_07,bVar2) != 0
           )) {
          if ((*param_4 & 4) != 0) {
            FUN_10006a4d(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_100051a9(piVar1,*(undefined **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
          FUN_10006a4d(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
          FUN_100051a2(piVar1,*(undefined **)(param_4 + 0x18));
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_10009341(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
         (bVar2 = FUN_1000935d(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
        FUN_100055d0(piVar1,*(undefined4 **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
        if (*(int *)(param_4 + 0x14) != 4) {
          ExceptionList = local_14;
          return;
        }
        iVar3 = *piVar1;
        if (iVar3 == 0) {
          ExceptionList = local_14;
          return;
        }
        goto LAB_100068b0;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    bVar2 = FUN_10009341(*(void **)(param_1 + 0x18),1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_1000935d(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
      iVar3 = *(int *)(param_1 + 0x18);
      *piVar1 = iVar3;
LAB_100068b0:
      iVar3 = FUN_10006a4d(iVar3,(int *)(param_4 + 8));
      *piVar1 = iVar3;
      ExceptionList = local_14;
      return;
    }
  }
  FUN_10006ca9();
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_100069e6 @ 0x100069e6 86B
// ============================================================

void __cdecl FUN_100069e6(int param_1)

{
  undefined *UNRECOVERED_JUMPTABLE;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000b198;
  puStack_10 = &LAB_10008e4c;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(undefined **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (undefined *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_100051a2(*(undefined4 *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



// ============================================================
// FUN_10006a4d @ 0x10006a4d 35B
// ============================================================

int __cdecl FUN_10006a4d(int param_1,int *param_2)

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
// __CallSettingFrame@12 @ 0x10006a70 76B
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
// FUN_10006abc @ 0x10006abc 84B
// ============================================================

undefined4 FUN_10006abc(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10006df0();
  DAT_1000c1c0 = TlsAlloc();
  if (DAT_1000c1c0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10009391(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000c1c0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10006b2e((int)lpTlsValue);
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
// FUN_10006b10 @ 0x10006b10 30B
// ============================================================

void FUN_10006b10(void)

{
  FUN_10006e19();
  if (DAT_1000c1c0 != 0xffffffff) {
    TlsFree(DAT_1000c1c0);
    DAT_1000c1c0 = 0xffffffff;
  }
  return;
}



// ============================================================
// FUN_10006b41 @ 0x10006b41 103B
// ============================================================

DWORD * FUN_10006b41(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1000c1c0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10009391(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1000c1c0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10006b2e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10006b9c;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10006b9c:
  SetLastError(dwErrCode);
  return lpTlsValue;
}



// ============================================================
// FUN_10006ba8 @ 0x10006ba8 160B
// ============================================================

void __cdecl FUN_10006ba8(undefined *param_1)

{
  if (DAT_1000c1c0 != 0xffffffff) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = TlsGetValue(DAT_1000c1c0), param_1 != (undefined *)0x0)) {
      if (*(undefined **)(param_1 + 0x24) != (undefined *)0x0) {
        FUN_10005b79(*(undefined **)(param_1 + 0x24));
      }
      if (*(undefined **)(param_1 + 0x28) != (undefined *)0x0) {
        FUN_10005b79(*(undefined **)(param_1 + 0x28));
      }
      if (*(undefined **)(param_1 + 0x30) != (undefined *)0x0) {
        FUN_10005b79(*(undefined **)(param_1 + 0x30));
      }
      if (*(undefined **)(param_1 + 0x38) != (undefined *)0x0) {
        FUN_10005b79(*(undefined **)(param_1 + 0x38));
      }
      if (*(undefined **)(param_1 + 0x40) != (undefined *)0x0) {
        FUN_10005b79(*(undefined **)(param_1 + 0x40));
      }
      if (*(undefined **)(param_1 + 0x44) != (undefined *)0x0) {
        FUN_10005b79(*(undefined **)(param_1 + 0x44));
      }
      if (*(undefined **)(param_1 + 0x50) != &DAT_1000e370) {
        FUN_10005b79(*(undefined **)(param_1 + 0x50));
      }
      FUN_10005b79(param_1);
    }
    TlsSetValue(DAT_1000c1c0,(LPVOID)0x0);
    return;
  }
  return;
}



// ============================================================
// FUN_10006c48 @ 0x10006c48 86B
// ============================================================

void FUN_10006c48(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000b1a8;
  puStack_10 = &LAB_10008e4c;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10006b41();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10006b41();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_100094ce();
  return;
}



// ============================================================
// FUN_10006ca9 @ 0x10006ca9 79B
// ============================================================

void FUN_10006ca9(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1000b1c0;
  puStack_10 = &LAB_10008e4c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_1000c1c4 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_1000c1c4)();
  }
  local_8 = 0xffffffff;
  FUN_10006c48();
  return;
}



// ============================================================
// FUN_10006d10 @ 0x10006d10 224B
// ============================================================

uint * __cdecl FUN_10006d10(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = param_1;
  do {
    if (((uint)puVar3 & 3) == 0) goto LAB_10006d2c;
    uVar4 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 1);
  } while ((byte)uVar4 != 0);
  goto LAB_10006d5f;
  while( true ) {
    if ((uVar4 & 0xff0000) == 0) {
      puVar5 = (uint *)((int)puVar5 + 2);
      goto joined_r0x10006d7b;
    }
    if ((uVar4 & 0xff000000) == 0) break;
LAB_10006d2c:
    do {
      puVar5 = puVar3;
      puVar3 = puVar5 + 1;
    } while (((*puVar5 ^ 0xffffffff ^ *puVar5 + 0x7efefeff) & 0x81010100) == 0);
    uVar4 = *puVar5;
    if ((char)uVar4 == '\0') goto joined_r0x10006d7b;
    if ((char)(uVar4 >> 8) == '\0') {
      puVar5 = (uint *)((int)puVar5 + 1);
      goto joined_r0x10006d7b;
    }
  }
LAB_10006d5f:
  puVar5 = (uint *)((int)puVar3 + -1);
joined_r0x10006d7b:
  do {
    if (((uint)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        uVar4 = *param_2;
        param_2 = param_2 + 1;
        if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
          if ((char)uVar4 == '\0') {
LAB_10006de8:
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
    if (bVar1 == 0) goto LAB_10006de8;
    *(byte *)puVar5 = bVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
  } while( true );
}



// ============================================================
// FUN_10006df0 @ 0x10006df0 41B
// ============================================================

void FUN_10006df0(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c214);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c204);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c1f4);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c1d4);
  return;
}



// ============================================================
// FUN_10006e19 @ 0x10006e19 108B
// ============================================================

void FUN_10006e19(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_1000c1d0;
  do {
    if (((((LPCRITICAL_SECTION)*ppuVar1 != (LPCRITICAL_SECTION)0x0) &&
         (ppuVar1 != &PTR_DAT_1000c214)) && (ppuVar1 != &PTR_DAT_1000c204)) &&
       ((ppuVar1 != &PTR_DAT_1000c1f4 && (ppuVar1 != &PTR_DAT_1000c1d4)))) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*ppuVar1);
      FUN_10005b79(*ppuVar1);
    }
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1000c290);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c1f4);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c204);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c214);
  DeleteCriticalSection((LPCRITICAL_SECTION)PTR_DAT_1000c1d4);
  return;
}



// ============================================================
// FUN_10006e85 @ 0x10006e85 97B
// ============================================================

void __cdecl FUN_10006e85(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = &DAT_1000c1d0 + param_1;
  if ((&DAT_1000c1d0)[param_1] == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_10006e85(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_10005b79((undefined *)lpCriticalSection);
    }
    FUN_10006ee6(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}



// ============================================================
// FUN_10006ee6 @ 0x10006ee6 21B
// ============================================================

void __cdecl FUN_10006ee6(int param_1)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1000c1d0)[param_1]);
  return;
}



// ============================================================
// _strcmp @ 0x10006f00 129B
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
      if (bVar4 != *_Str2) goto LAB_10006f44;
      _Str2 = _Str2 + 1;
      if (bVar4 == 0) {
        return 0;
      }
      if (((uint)_Str1 & 2) == 0) goto LAB_10006f10;
    }
    uVar1 = *(undefined2 *)_Str1;
    _Str1 = _Str1 + 2;
    bVar4 = (byte)uVar1;
    bVar5 = bVar4 < (byte)*_Str2;
    if (bVar4 != *_Str2) goto LAB_10006f44;
    if (bVar4 == 0) {
      return 0;
    }
    bVar4 = (byte)((ushort)uVar1 >> 8);
    bVar5 = bVar4 < (byte)_Str2[1];
    if (bVar4 != _Str2[1]) goto LAB_10006f44;
    if (bVar4 == 0) {
      return 0;
    }
    _Str2 = _Str2 + 2;
  }
LAB_10006f10:
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
LAB_10006f44:
  return (uint)bVar5 * -2 + 1;
}



// ============================================================
// FUN_10006f84 @ 0x10006f84 70B
// ============================================================

int FUN_10006f84(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_10006c48();
    return iVar3;
  }
  if ((DAT_1000ec38 != (FARPROC)0x0) &&
     (bVar2 = FUN_10009379(DAT_1000ec38), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_1000ec38)(param_1);
    return iVar3;
  }
  return 0;
}



// ============================================================
// FUN_10007000 @ 0x10007000 188B
// ============================================================

uint * __cdecl FUN_10007000(uint *param_1,char param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar1 = *param_1;
      uVar4 = uVar1 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar3 = uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff;
      puVar5 = param_1 + 1;
      if (((uVar4 ^ 0xffffffff ^ uVar4 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar5;
      if ((uVar3 & 0x81010100) != 0) {
        if ((uVar3 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar1 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar1 = *param_1;
    if ((char)uVar1 == param_2) {
      return param_1;
    }
    if ((char)uVar1 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar1 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar1 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar5;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}



// ============================================================
// FUN_100070bc @ 0x100070bc 45B
// ============================================================

void FUN_100070bc(void)

{
  if (DAT_1000f2b4 != (code *)0x0) {
    (*DAT_1000f2b4)();
  }
  FUN_100071c0((undefined4 *)&DAT_1000c00c,(undefined4 *)&DAT_1000c01c);
  FUN_100071c0((undefined4 *)&DAT_1000c000,(undefined4 *)&DAT_1000c008);
  return;
}



// ============================================================
// FUN_10007109 @ 0x10007109 163B
// ============================================================

void __cdecl FUN_10007109(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  FUN_100071ae();
  if (DAT_1000ec7c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_1000ec78 = 1;
  DAT_1000ec74 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_1000f2b0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_1000f2ac - 4), DAT_1000f2b0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_1000f2b0 <= puVar1);
    }
    FUN_100071c0((undefined4 *)&DAT_1000c020,(undefined4 *)&DAT_1000c024);
  }
  FUN_100071c0((undefined4 *)&DAT_1000c028,(undefined4 *)&DAT_1000c030);
  if (param_3 == 0) {
    DAT_1000ec7c = 1;
                    /* WARNING: Subroutine does not return */
    ExitProcess(param_1);
  }
  FUN_100071b7();
  return;
}



// ============================================================
// FUN_100071c0 @ 0x100071c0 26B
// ============================================================

void __cdecl FUN_100071c0(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}



// ============================================================
// FUN_100071da @ 0x100071da 444B
// ============================================================

void FUN_100071da(void)

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
  DAT_1000f2a0 = 0x20;
  DAT_1000f1a0 = puVar2;
  for (; puVar2 < DAT_1000f1a0 + 0x120; puVar2 = puVar2 + 9) {
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
    if ((int)DAT_1000f2a0 < (int)UVar8) {
      puVar2 = &DAT_1000f1a4;
      do {
        puVar3 = _malloc(0x480);
        UVar9 = DAT_1000f2a0;
        if (puVar3 == (undefined4 *)0x0) break;
        DAT_1000f2a0 = DAT_1000f2a0 + 0x20;
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
      } while ((int)DAT_1000f2a0 < (int)UVar8);
    }
    uVar7 = 0;
    if (0 < (int)UVar9) {
      do {
        if (((*(HANDLE *)local_8 != (HANDLE)0xffffffff) && ((*pUVar5 & 1) != 0)) &&
           (((*pUVar5 & 8) != 0 || (DVar4 = GetFileType(*(HANDLE *)local_8), DVar4 != 0)))) {
          puVar2 = (undefined4 *)((int)(&DAT_1000f1a0)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
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
    puVar2 = DAT_1000f1a0 + iVar6 * 9;
    if (DAT_1000f1a0[iVar6 * 9] == -1) {
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
          goto LAB_1000737f;
        }
      }
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x40;
    }
    else {
      *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) | 0x80;
    }
LAB_1000737f:
    iVar6 = iVar6 + 1;
    if (2 < iVar6) {
      SetHandleCount(DAT_1000f2a0);
      return;
    }
  } while( true );
}



// ============================================================
// FUN_10007396 @ 0x10007396 84B
// ============================================================

void FUN_10007396(void)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_1000f1a0;
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
      FUN_10005b79((undefined *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x1000f2a0);
  return;
}



// ============================================================
// FUN_100073ea @ 0x100073ea 185B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100073ea(void)

{
  char cVar1;
  size_t sVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  uint *puVar6;
  
  if (DAT_1000f2a8 == 0) {
    FUN_100098bd();
  }
  iVar5 = 0;
  for (puVar6 = DAT_1000ebc0; (char)*puVar6 != '\0'; puVar6 = (uint *)((int)puVar6 + sVar2 + 1)) {
    if ((char)*puVar6 != '=') {
      iVar5 = iVar5 + 1;
    }
    sVar2 = _strlen((char *)puVar6);
  }
  puVar3 = _malloc(iVar5 * 4 + 4);
  _DAT_1000ec5c = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __amsg_exit(9);
  }
  cVar1 = (char)*DAT_1000ebc0;
  puVar6 = DAT_1000ebc0;
  while (cVar1 != '\0') {
    sVar2 = _strlen((char *)puVar6);
    if ((char)*puVar6 != '=') {
      pvVar4 = _malloc(sVar2 + 1);
      *puVar3 = pvVar4;
      if (pvVar4 == (void *)0x0) {
        __amsg_exit(9);
      }
      FUN_10006d00((uint *)*puVar3,puVar6);
      puVar3 = puVar3 + 1;
    }
    puVar6 = (uint *)((int)puVar6 + sVar2 + 1);
    cVar1 = (char)*puVar6;
  }
  FUN_10005b79((undefined *)DAT_1000ebc0);
  DAT_1000ebc0 = (uint *)0x0;
  *puVar3 = 0;
  _DAT_1000f2a4 = 1;
  return;
}



// ============================================================
// FUN_100074a3 @ 0x100074a3 153B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100074a3(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_1000f2a8 == 0) {
    FUN_100098bd();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_1000ec80,0x104);
  _DAT_1000ec6c = &DAT_1000ec80;
  pbVar2 = &DAT_1000ec80;
  if (*DAT_1000f2b8 != 0) {
    pbVar2 = DAT_1000f2b8;
  }
  FUN_1000753c(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_1000753c(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_1000ec54 = puVar1;
  _DAT_1000ec50 = local_8 + -1;
  return;
}



// ============================================================
// FUN_1000753c @ 0x1000753c 436B
// ============================================================

void __cdecl FUN_1000753c(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

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
      if (((*(byte *)((int)&DAT_1000f060 + bVar1 + 1) & 4) != 0) &&
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
      if ((*(byte *)((int)&DAT_1000f060 + bVar1 + 1) & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar4;
          param_3 = param_3 + 1;
        }
        pbVar4 = param_1 + 2;
      }
      if (bVar1 == 0x20) break;
      if (bVar1 == 0) goto LAB_100075e7;
      param_1 = pbVar4;
    } while (bVar1 != 9);
    if (bVar1 == 0) {
LAB_100075e7:
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
          if ((*(byte *)((int)&DAT_1000f060 + bVar1 + 1) & 4) != 0) {
            pbVar4 = pbVar4 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if ((*(byte *)((int)&DAT_1000f060 + bVar1 + 1) & 4) != 0) {
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
// FUN_100076f0 @ 0x100076f0 306B
// ============================================================

LPSTR FUN_100076f0(void)

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
  if (DAT_1000ed84 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr != (LPWCH)0x0) {
      DAT_1000ed84 = 1;
LAB_10007747:
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
        FUN_10005b79(pCVar6);
        local_8 = (LPSTR)0x0;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return local_8;
    }
    pCVar9 = GetEnvironmentStrings();
    if (pCVar9 == (LPCH)0x0) {
      return (LPSTR)0x0;
    }
    DAT_1000ed84 = 2;
  }
  else {
    if (DAT_1000ed84 == 1) goto LAB_10007747;
    if (DAT_1000ed84 != 2) {
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
    FUN_10005d10((undefined4 *)pCVar6,(undefined4 *)pCVar9,(uint)(pcVar7 + (1 - (int)pCVar9)));
  }
  FreeEnvironmentStringsA(pCVar9);
  return pCVar6;
}



// ============================================================
// FUN_10007822 @ 0x10007822 45B
// ============================================================

void __cdecl FUN_10007822(undefined4 *param_1)

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
// FUN_1000784f @ 0x1000784f 328B
// ============================================================

int FUN_1000784f(void)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *this;
  byte unaff_BL;
  undefined4 local_1230;
  char local_1a0 [260];
  DWORD local_9c;
  uint local_98;
  DWORD local_8c;
  CHAR aCStackY_18 [4];
  
  FUN_10009b00();
  local_9c = 0x94;
  BVar3 = GetVersionExA((LPOSVERSIONINFOA)&local_9c);
  if (((BVar3 == 0) || (local_8c != 2)) || (local_98 < 5)) {
    aCStackY_18[0] = -0x57;
    aCStackY_18[1] = 'x';
    aCStackY_18[2] = '\0';
    aCStackY_18[3] = '\x10';
    DVar4 = GetEnvironmentVariableA("__MSVCRT_HEAP_SELECT",(LPSTR)&local_1230,0x1090);
    if (DVar4 != 0) {
      pcVar8 = (char *)&local_1230;
      while ((char)local_1230 != '\0') {
        cVar1 = *pcVar8;
        if (('`' < cVar1) && (cVar1 < '{')) {
          *pcVar8 = cVar1 + -0x20;
        }
        pcVar8 = pcVar8 + 1;
        local_1230._0_1_ = *pcVar8;
      }
      aCStackY_18[0] = -0x19;
      aCStackY_18[1] = 'x';
      aCStackY_18[2] = '\0';
      aCStackY_18[3] = '\x10';
      iVar5 = _strncmp("__GLOBAL_HEAP_SELECTED",(char *)&local_1230,0x16);
      if (iVar5 == 0) {
        puVar6 = &local_1230;
      }
      else {
        aCStackY_18[0] = '\t';
        aCStackY_18[1] = 'y';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        GetModuleFileNameA((HMODULE)0x0,local_1a0,0x104);
        pcVar8 = local_1a0;
        while (local_1a0[0] != '\0') {
          cVar1 = *pcVar8;
          if (('`' < cVar1) && (cVar1 < '{')) {
            *pcVar8 = cVar1 + -0x20;
          }
          pcVar8 = pcVar8 + 1;
          local_1a0[0] = *pcVar8;
        }
        puVar6 = FUN_10005950(&local_1230,local_1a0);
      }
      if ((puVar6 != (uint *)0x0) && (puVar6 = FUN_10007000(puVar6,','), puVar6 != (uint *)0x0)) {
        pbVar7 = (byte *)((int)puVar6 + 1);
        bVar2 = *pbVar7;
        this = pbVar7;
        while (bVar2 != 0) {
          if (*this == 0x3b) {
            *this = 0;
          }
          else {
            this = this + 1;
          }
          bVar2 = *this;
        }
        aCStackY_18[0] = 'o';
        aCStackY_18[1] = 'y';
        aCStackY_18[2] = '\0';
        aCStackY_18[3] = '\x10';
        iVar5 = FUN_100098d9(this,pbVar7,(int *)0x0,(void *)0xa);
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
    FUN_10007822((undefined4 *)&stack0xfffffff8);
    iVar5 = 3 - (uint)(unaff_BL < 6);
  }
  else {
    iVar5 = 1;
  }
  return iVar5;
}



// ============================================================
// FUN_10007997 @ 0x10007997 93B
// ============================================================

undefined4 __cdecl FUN_10007997(int param_1)

{
  undefined **ppuVar1;
  
  DAT_1000f184 = HeapCreate((uint)(param_1 == 0),0x1000,0);
  if (DAT_1000f184 != (HANDLE)0x0) {
    DAT_1000f188 = FUN_1000784f();
    if (DAT_1000f188 == 3) {
      ppuVar1 = (undefined **)FUN_10007c2e(0x3f8);
    }
    else {
      if (DAT_1000f188 != 2) {
        return 1;
      }
      ppuVar1 = FUN_10008775();
    }
    if (ppuVar1 != (undefined **)0x0) {
      return 1;
    }
    HeapDestroy(DAT_1000f184);
  }
  return 0;
}



// ============================================================
// FUN_100079f4 @ 0x100079f4 168B
// ============================================================

void FUN_100079f4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined **ppuVar3;
  
  if (DAT_1000f188 == 3) {
    iVar1 = 0;
    if (0 < DAT_1000f178) {
      puVar2 = (undefined4 *)((int)DAT_1000f17c + 0xc);
      do {
        VirtualFree((LPVOID)*puVar2,0x100000,0x4000);
        VirtualFree((LPVOID)*puVar2,0,0x8000);
        HeapFree(DAT_1000f184,0,(LPVOID)puVar2[1]);
        puVar2 = puVar2 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_1000f178);
    }
    HeapFree(DAT_1000f184,0,DAT_1000f17c);
  }
  else if (DAT_1000f188 == 2) {
    ppuVar3 = &PTR_LOOP_1000c348;
    do {
      if (ppuVar3[4] != (undefined *)0x0) {
        VirtualFree(ppuVar3[4],0,0x8000);
      }
      ppuVar3 = (undefined **)*ppuVar3;
    } while (ppuVar3 != &PTR_LOOP_1000c348);
  }
  HeapDestroy(DAT_1000f184);
  return;
}



// ============================================================
// FUN_10007aa2 @ 0x10007aa2 57B
// ============================================================

void FUN_10007aa2(void)

{
  if ((DAT_1000ebc8 == 1) || ((DAT_1000ebc8 == 0 && (DAT_1000ebcc == 1)))) {
    FUN_10007adb((undefined *)0xfc);
    if (DAT_1000ed88 != (code *)0x0) {
      (*DAT_1000ed88)();
    }
    FUN_10007adb((undefined *)0xff);
  }
  return;
}



// ============================================================
// FUN_10007adb @ 0x10007adb 339B
// ============================================================

void __cdecl FUN_10007adb(undefined *param_1)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
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
  ppuVar2 = (undefined **)&DAT_1000c2b8;
  do {
    if (param_1 == *ppuVar2) break;
    ppuVar2 = ppuVar2 + 2;
    iVar5 = iVar5 + 1;
  } while (ppuVar2 < &PTR_LOOP_1000c348);
  if (param_1 == (undefined *)(&DAT_1000c2b8)[iVar5 * 2]) {
    if ((DAT_1000ebc8 == 1) || ((DAT_1000ebc8 == 0 && (DAT_1000ebcc == 1)))) {
      ppuVar2 = &param_1;
      puVar1 = (undefined4 *)(iVar5 * 8 + 0x1000c2bc);
      lpOverlapped = (LPOVERLAPPED)0x0;
      sVar4 = _strlen((char *)*puVar1);
      lpBuffer = (LPCVOID)*puVar1;
      hFile = GetStdHandle(0xfffffff4);
      WriteFile(hFile,lpBuffer,sVar4,(LPDWORD)ppuVar2,lpOverlapped);
    }
    else if (param_1 != (undefined *)0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_1a8,0x104);
      if (DVar3 == 0) {
        FUN_10006d00(local_1a8,(uint *)"<program name unknown>");
      }
      _Dest = local_1a8;
      sVar4 = _strlen((char *)local_1a8);
      if (0x3c < sVar4 + 1) {
        sVar4 = _strlen((char *)local_1a8);
        _Dest = (uint *)(auStackY_1e3 + sVar4);
        _strncpy((char *)_Dest,"...",3);
      }
      FUN_10006d00(local_a4,(uint *)"Runtime Error!\n\nProgram: ");
      FUN_10006d10(local_a4,_Dest);
      FUN_10006d10(local_a4,(uint *)&DAT_1000b4bc);
      FUN_10006d10(local_a4,*(uint **)(iVar5 * 8 + 0x1000c2bc));
      auStackY_1e3._3_4_ = 0x10007bff;
      FUN_10009b2f(local_a4,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}



// ============================================================
// FUN_10007c2e @ 0x10007c2e 72B
// ============================================================

undefined4 __cdecl FUN_10007c2e(undefined4 param_1)

{
  DAT_1000f17c = HeapAlloc(DAT_1000f184,0,0x140);
  if (DAT_1000f17c == (LPVOID)0x0) {
    return 0;
  }
  DAT_1000f174 = 0;
  DAT_1000f178 = 0;
  DAT_1000f170 = DAT_1000f17c;
  DAT_1000f180 = param_1;
  DAT_1000f168 = 0x10;
  return 1;
}



// ============================================================
// FUN_10007c76 @ 0x10007c76 43B
// ============================================================

uint __cdecl FUN_10007c76(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1000f17c;
  while( true ) {
    if (DAT_1000f17c + DAT_1000f178 * 0x14 <= uVar1) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(uVar1 + 0xc)) < 0x100000) break;
    uVar1 = uVar1 + 0x14;
  }
  return uVar1;
}



// ============================================================
// FUN_10007ca1 @ 0x10007ca1 809B
// ============================================================

void __cdecl FUN_10007ca1(uint *param_1,int param_2)

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
      if (DAT_1000f174 != (uint *)0x0) {
        VirtualFree((LPVOID)(DAT_1000f16c * 0x8000 + DAT_1000f174[3]),0x8000,0x4000);
        DAT_1000f174[2] = DAT_1000f174[2] | 0x80000000U >> ((byte)DAT_1000f16c & 0x1f);
        *(undefined4 *)(DAT_1000f174[4] + 0xc4 + DAT_1000f16c * 4) = 0;
        *(char *)(DAT_1000f174[4] + 0x43) = *(char *)(DAT_1000f174[4] + 0x43) + -1;
        if (*(char *)(DAT_1000f174[4] + 0x43) == '\0') {
          DAT_1000f174[1] = DAT_1000f174[1] & 0xfffffffe;
        }
        if (DAT_1000f174[2] == 0xffffffff) {
          VirtualFree((LPVOID)DAT_1000f174[3],0,0x8000);
          HeapFree(DAT_1000f184,0,(LPVOID)DAT_1000f174[4]);
          FUN_100055d0(DAT_1000f174,DAT_1000f174 + 5,
                       (DAT_1000f178 * 0x14 - (int)DAT_1000f174) + -0x14 + DAT_1000f17c);
          DAT_1000f178 = DAT_1000f178 + -1;
          if (DAT_1000f174 < param_1) {
            param_1 = param_1 + -5;
          }
          DAT_1000f170 = DAT_1000f17c;
        }
      }
      DAT_1000f174 = param_1;
      DAT_1000f16c = uVar14;
    }
  }
  return;
}



// ============================================================
// FUN_10007fca @ 0x10007fca 777B
// ============================================================

int * __cdecl FUN_10007fca(uint *param_1)

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
  
  puVar8 = DAT_1000f17c + DAT_1000f178 * 5;
  uVar6 = (int)param_1 + 0x17U & 0xfffffff0;
  iVar7 = ((int)((int)param_1 + 0x17U) >> 4) + -1;
  bVar5 = (byte)iVar7;
  param_1 = DAT_1000f170;
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
  puVar11 = DAT_1000f17c;
  if (param_1 == puVar8) {
    for (; (puVar11 < DAT_1000f170 && ((puVar11[1] & local_c) == 0 && (*puVar11 & local_10) == 0));
        puVar11 = puVar11 + 5) {
    }
    param_1 = puVar11;
    if (puVar11 == DAT_1000f170) {
      for (; (puVar11 < puVar8 && (puVar11[2] == 0)); puVar11 = puVar11 + 5) {
      }
      puVar12 = DAT_1000f17c;
      param_1 = puVar11;
      if (puVar11 == puVar8) {
        for (; (puVar12 < DAT_1000f170 && (puVar12[2] == 0)); puVar12 = puVar12 + 5) {
        }
        param_1 = puVar12;
        if ((puVar12 == DAT_1000f170) && (param_1 = FUN_100082d3(), param_1 == (uint *)0x0)) {
          return (int *)0x0;
        }
      }
      iVar7 = FUN_10008384((int)param_1);
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
  DAT_1000f170 = param_1;
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
    if (iVar9 == 0) goto LAB_10008290;
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
LAB_10008290:
  piVar10 = (int *)((int)piVar10 + iVar9);
  *piVar10 = uVar6 + 1;
  *(uint *)((int)piVar10 + (uVar6 - 4)) = uVar6 + 1;
  iVar7 = *piVar2;
  *piVar2 = iVar7 + 1;
  if (((iVar7 == 0) && (param_1 == DAT_1000f174)) && (local_8 == DAT_1000f16c)) {
    DAT_1000f174 = (uint *)0x0;
  }
  *piVar4 = local_8;
  return piVar10 + 1;
}



// ============================================================
// FUN_100082d3 @ 0x100082d3 177B
// ============================================================

undefined4 * FUN_100082d3(void)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  if (DAT_1000f178 == DAT_1000f168) {
    pvVar2 = HeapReAlloc(DAT_1000f184,0,DAT_1000f17c,(DAT_1000f168 * 5 + 0x50) * 4);
    if (pvVar2 == (LPVOID)0x0) {
      return (undefined4 *)0x0;
    }
    DAT_1000f168 = DAT_1000f168 + 0x10;
    DAT_1000f17c = pvVar2;
  }
  puVar1 = (undefined4 *)((int)DAT_1000f17c + DAT_1000f178 * 0x14);
  pvVar2 = HeapAlloc(DAT_1000f184,8,0x41c4);
  puVar1[4] = pvVar2;
  if (pvVar2 != (LPVOID)0x0) {
    pvVar2 = VirtualAlloc((LPVOID)0x0,0x100000,0x2000,4);
    puVar1[3] = pvVar2;
    if (pvVar2 != (LPVOID)0x0) {
      puVar1[2] = 0xffffffff;
      *puVar1 = 0;
      puVar1[1] = 0;
      DAT_1000f178 = DAT_1000f178 + 1;
      *(undefined4 *)puVar1[4] = 0xffffffff;
      return puVar1;
    }
    HeapFree(DAT_1000f184,0,(LPVOID)puVar1[4]);
  }
  return (undefined4 *)0x0;
}



// ============================================================
// FUN_10008384 @ 0x10008384 251B
// ============================================================

int __cdecl FUN_10008384(int param_1)

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
// FUN_1000847f @ 0x1000847f 758B
// ============================================================

undefined4 __cdecl FUN_1000847f(uint *param_1,int param_2,int param_3)

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
// FUN_10008775 @ 0x10008775 324B
// ============================================================

undefined ** FUN_10008775(void)

{
  bool bVar1;
  int *lpAddress;
  LPVOID pvVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined **lpMem;
  
  if (DAT_1000c358 == -1) {
    lpMem = &PTR_LOOP_1000c348;
  }
  else {
    lpMem = HeapAlloc(DAT_1000f184,0,0x2020);
    if (lpMem == (undefined **)0x0) {
      return (undefined **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (int *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_1000c348) {
        if (PTR_LOOP_1000c348 == (undefined *)0x0) {
          PTR_LOOP_1000c348 = (undefined *)&PTR_LOOP_1000c348;
        }
        if (PTR_LOOP_1000c34c == (undefined *)0x0) {
          PTR_LOOP_1000c34c = (undefined *)&PTR_LOOP_1000c348;
        }
      }
      else {
        *lpMem = (undefined *)&PTR_LOOP_1000c348;
        lpMem[1] = PTR_LOOP_1000c34c;
        PTR_LOOP_1000c34c = (undefined *)lpMem;
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
  if (lpMem != &PTR_LOOP_1000c348) {
    HeapFree(DAT_1000f184,0,lpMem);
  }
  return (undefined **)0x0;
}



// ============================================================
// FUN_100088b9 @ 0x100088b9 86B
// ============================================================

void __cdecl FUN_100088b9(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_1000e368 == param_1) {
    PTR_LOOP_1000e368 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_1000c348) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_1000f184,0,param_1);
    return;
  }
  DAT_1000c358 = 0xffffffff;
  return;
}



// ============================================================
// FUN_1000890f @ 0x1000890f 194B
// ============================================================

void __cdecl FUN_1000890f(int param_1)

{
  BOOL BVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int local_8;
  
  ppuVar4 = (undefined **)PTR_LOOP_1000c34c;
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
            DAT_1000ed8c = DAT_1000ed8c + -1;
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
          FUN_100088b9(ppuVar4);
        }
      }
    }
    if ((ppuVar5 == (undefined **)PTR_LOOP_1000c34c) || (ppuVar4 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



// ============================================================
// FUN_100089d1 @ 0x100089d1 87B
// ============================================================

int __cdecl FUN_100089d1(undefined *param_1,undefined4 *param_2,uint *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_1000c348;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (undefined **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_1000c348) {
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
// FUN_10008a28 @ 0x10008a28 69B
// ============================================================

void __cdecl FUN_10008a28(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18 + (param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  *piVar1 = *piVar1 + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_1000ed8c = DAT_1000ed8c + 1, DAT_1000ed8c == 0x20)) {
    FUN_1000890f(0x10);
  }
  return;
}



// ============================================================
// FUN_10008a6d @ 0x10008a6d 520B
// ============================================================

/* WARNING: Type propagation algorithm not settling */

int * __cdecl FUN_10008a6d(uint param_1)

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
  
  piVar7 = (int *)PTR_LOOP_1000e368;
  do {
    if (piVar7[4] != -1) {
      puVar8 = (uint *)piVar7[2];
      piVar4 = (int *)(((int)puVar8 + (-0x18 - (int)piVar7) >> 3) * 0x1000 + piVar7[4]);
      if (puVar8 < piVar7 + 0x806) {
        do {
          if (((int)param_1 <= (int)*puVar8) && (param_1 < puVar8[1])) {
            piVar5 = (int *)FUN_10008c75(piVar4,*puVar8,param_1);
            if (piVar5 != (int *)0x0) goto LAB_10008b38;
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
          piVar5 = (int *)FUN_10008c75(piVar4,*puVar8,param_1);
          if (piVar5 != (int *)0x0) {
LAB_10008b38:
            PTR_LOOP_1000e368 = (undefined *)piVar7;
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
    if (piVar7 == (int *)PTR_LOOP_1000e368) {
      ppuVar9 = &PTR_LOOP_1000c348;
      while ((ppuVar9[4] == (undefined *)0xffffffff || (ppuVar9[3] == (undefined *)0x0))) {
        ppuVar9 = (undefined **)*ppuVar9;
        if (ppuVar9 == &PTR_LOOP_1000c348) {
          ppuVar9 = FUN_10008775();
          if (ppuVar9 == (undefined **)0x0) {
            return (int *)0x0;
          }
          piVar7 = (int *)ppuVar9[4];
          *(char *)(piVar7 + 2) = (char)param_1;
          PTR_LOOP_1000e368 = (undefined *)ppuVar9;
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
      PTR_LOOP_1000e368 = (undefined *)ppuVar9;
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
// FUN_10008c75 @ 0x10008c75 292B
// ============================================================

int __cdecl FUN_10008c75(int *param_1,uint param_2,uint param_3)

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
          goto LAB_10008d88;
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
LAB_10008d88:
  return (int)pbVar2 * 0x10 + (int)param_1 * -0xf;
}



// ============================================================
// FUN_10008d99 @ 0x10008d99 169B
// ============================================================

undefined4 __cdecl FUN_10008d99(int param_1,int *param_2,byte *param_3,uint param_4)

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
// FUN_10008f09 @ 0x10008f09 27B
// ============================================================

void FUN_10008f09(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



// ============================================================
// FUN_10008f24 @ 0x10008f24 781B
// ============================================================

byte * __cdecl FUN_10008f24(byte *param_1,uint *param_2)

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
  puStack_c = &DAT_1000b4f8;
  puStack_10 = &LAB_10008e4c;
  local_14 = ExceptionList;
  pbVar3 = (byte *)0x0;
  if (param_1 == (byte *)0x0) {
    ExceptionList = &local_14;
    pbVar3 = _malloc((size_t)param_2);
  }
  else {
    if (param_2 == (uint *)0x0) {
      ExceptionList = &local_14;
      FUN_10005b79(param_1);
    }
    else {
      ExceptionList = &local_14;
      if (DAT_1000f188 == 3) {
        do {
          local_28 = (byte *)0x0;
          if (param_2 < (uint *)0xffffffe1) {
            FUN_10006e85(9);
            local_8 = 0;
            local_2c = (uint *)FUN_10007c76((int)param_1);
            if (local_2c != (uint *)0x0) {
              if (param_2 <= DAT_1000f180) {
                iVar1 = FUN_1000847f(local_2c,(int)param_1,(int)param_2);
                if (iVar1 == 0) {
                  local_28 = (byte *)FUN_10007fca(param_2);
                  if (local_28 != (byte *)0x0) {
                    local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                    puVar2 = local_24;
                    if (param_2 <= local_24) {
                      puVar2 = param_2;
                    }
                    FUN_10005d10((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                    local_2c = (uint *)FUN_10007c76((int)param_1);
                    FUN_10007ca1(local_2c,(int)param_1);
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
                local_28 = HeapAlloc(DAT_1000f184,0,(SIZE_T)param_2);
                if (local_28 != (byte *)0x0) {
                  local_24 = (uint *)(*(int *)(param_1 + -4) - 1);
                  puVar2 = local_24;
                  if (param_2 <= local_24) {
                    puVar2 = param_2;
                  }
                  FUN_10005d10((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10007ca1(local_2c,(int)param_1);
                }
              }
            }
            local_8 = 0xffffffff;
            FUN_100090af();
            if (local_2c == (uint *)0x0) {
              if (param_2 == (uint *)0x0) {
                param_2 = (uint *)0x1;
              }
              param_2 = (uint *)((int)param_2 + 0xfU & 0xfffffff0);
              local_28 = HeapReAlloc(DAT_1000f184,0,param_1,(SIZE_T)param_2);
            }
          }
          if (local_28 != (byte *)0x0) {
            ExceptionList = local_14;
            return local_28;
          }
          if (DAT_1000ed90 == (byte *)0x0) {
            ExceptionList = local_14;
            return (byte *)0x0;
          }
          iVar1 = FUN_10006104(param_2);
        } while (iVar1 != 0);
      }
      else {
        ExceptionList = &local_14;
        if (DAT_1000f188 == 2) {
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
              FUN_10006e85(9);
              local_8 = 1;
              pbVar3 = (byte *)FUN_100089d1(param_1,&local_3c,(uint *)&local_30);
              local_34 = pbVar3;
              if (pbVar3 == (byte *)0x0) {
                local_28 = HeapReAlloc(DAT_1000f184,0,param_1,(SIZE_T)param_2);
              }
              else {
                if (param_2 < DAT_1000e36c) {
                  iVar1 = FUN_10008d99(local_3c,local_30,pbVar3,(uint)param_2 >> 4);
                  if (iVar1 == 0) {
                    local_28 = (byte *)FUN_10008a6d((uint)param_2 >> 4);
                    if (local_28 != (byte *)0x0) {
                      local_38 = (uint *)((uint)*pbVar3 << 4);
                      puVar2 = local_38;
                      if (param_2 <= local_38) {
                        puVar2 = param_2;
                      }
                      FUN_10005d10((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                      FUN_10008a28(local_3c,(int)local_30,pbVar3);
                    }
                  }
                  else {
                    local_28 = param_1;
                  }
                }
                if ((local_28 == (byte *)0x0) &&
                   (local_28 = HeapAlloc(DAT_1000f184,0,(SIZE_T)param_2), local_28 != (byte *)0x0))
                {
                  local_38 = (uint *)((uint)*pbVar3 << 4);
                  puVar2 = local_38;
                  if (param_2 <= local_38) {
                    puVar2 = param_2;
                  }
                  FUN_10005d10((undefined4 *)local_28,(undefined4 *)param_1,(uint)puVar2);
                  FUN_10008a28(local_3c,(int)local_30,pbVar3);
                }
              }
              local_8 = 0xffffffff;
              FUN_100091fd();
            }
            if (local_28 != pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            if (DAT_1000ed90 == pbVar3) {
              ExceptionList = local_14;
              return local_28;
            }
            iVar1 = FUN_10006104(param_2);
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
              pbVar3 = HeapReAlloc(DAT_1000f184,0,param_1,(SIZE_T)param_2);
            }
            if (pbVar3 != (byte *)0x0) {
              ExceptionList = local_14;
              return pbVar3;
            }
            if (DAT_1000ed90 == (byte *)0x0) {
              ExceptionList = local_14;
              return (byte *)0x0;
            }
            iVar1 = FUN_10006104(param_2);
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
// FUN_10009253 @ 0x10009253 214B
// ============================================================

SIZE_T __cdecl FUN_10009253(undefined *param_1)

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
  puStack_c = &DAT_1000b510;
  puStack_10 = &LAB_10008e4c;
  local_14 = ExceptionList;
  if (DAT_1000f188 == 3) {
    ExceptionList = &local_14;
    FUN_10006e85(9);
    local_8 = 0;
    local_20 = (byte *)FUN_10007c76((int)param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)(param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_100092bd();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_1000f188 != 2) goto LAB_10009311;
    ExceptionList = &local_14;
    FUN_10006e85(9);
    local_8 = 1;
    local_2c = (byte *)FUN_100089d1(param_1,&local_30,&local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_10009338();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_10009311:
  SVar2 = HeapSize(DAT_1000f184,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}



// ============================================================
// FUN_10009341 @ 0x10009341 28B
// ============================================================

bool __cdecl FUN_10009341(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



// ============================================================
// FUN_1000935d @ 0x1000935d 28B
// ============================================================

bool __cdecl FUN_1000935d(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



// ============================================================
// FUN_10009379 @ 0x10009379 24B
// ============================================================

bool __cdecl FUN_10009379(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



// ============================================================
// FUN_10009391 @ 0x10009391 289B
// ============================================================

int * __cdecl FUN_10009391(int param_1,int param_2)

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
  puStack_c = &DAT_1000b528;
  puStack_10 = &LAB_10008e4c;
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
      if (DAT_1000f188 == 3) {
        if (puVar2 <= DAT_1000f180) {
          FUN_10006e85(9);
          local_8 = 0;
          local_24 = FUN_10007fca(puVar2);
          local_8 = 0xffffffff;
          FUN_1000942a();
          _Size = puVar2;
          if (local_24 == (int *)0x0) goto LAB_1000947e;
LAB_1000946d:
          _memset(local_24,0,(size_t)_Size);
        }
LAB_10009479:
        if (local_24 != (int *)0x0) {
          ExceptionList = local_14;
          return local_24;
        }
      }
      else {
        if ((DAT_1000f188 != 2) || (DAT_1000e36c < puVar3)) goto LAB_10009479;
        FUN_10006e85(9);
        local_8 = 1;
        local_24 = FUN_10008a6d((uint)puVar3 >> 4);
        local_8 = 0xffffffff;
        FUN_100094b3();
        _Size = puVar3;
        if (local_24 != (int *)0x0) goto LAB_1000946d;
      }
LAB_1000947e:
      local_24 = HeapAlloc(DAT_1000f184,8,(SIZE_T)puVar3);
    }
    if (local_24 != (int *)0x0) {
      ExceptionList = local_14;
      return local_24;
    }
    if (DAT_1000ed90 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
    iVar1 = FUN_10006104(puVar3);
    if (iVar1 == 0) {
      ExceptionList = local_14;
      return (int *)0x0;
    }
  } while( true );
}



// ============================================================
// FUN_100094ce @ 0x100094ce 23B
// ============================================================

void FUN_100094ce(void)

{
  FUN_10007adb((undefined *)0xa);
  FUN_10009d18((DWORD *)0x16);
                    /* WARNING: Subroutine does not return */
  __exit(3);
}



// ============================================================
// FUN_100094e5 @ 0x100094e5 429B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100094e5(int param_1)

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
  
  FUN_10006e85(0x19);
  CodePage = FUN_10009692(param_1);
  if (CodePage != DAT_1000ef34) {
    if (CodePage != 0) {
      iVar12 = 0;
      pUVar5 = &DAT_1000e400;
LAB_10009522:
      if (*pUVar5 != CodePage) goto code_r0x10009526;
      local_8 = 0;
      puVar15 = &DAT_1000f060;
      for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      iVar12 = iVar12 * 0x30;
      *(undefined1 *)puVar15 = 0;
      pbVar13 = (byte *)(iVar12 + 0x1000e410);
      do {
        bVar3 = *pbVar13;
        pbVar11 = pbVar13;
        while ((bVar3 != 0 && (bVar3 = pbVar11[1], bVar3 != 0))) {
          uVar8 = (uint)*pbVar11;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_1000e3f8)[local_8];
            do {
              pbVar2 = (byte *)((int)&DAT_1000f060 + uVar8 + 1);
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
      _DAT_1000ef4c = 1;
      DAT_1000ef34 = CodePage;
      DAT_1000f164 = FUN_100096dc(CodePage);
      DAT_1000ef40 = *(undefined4 *)(iVar12 + 0x1000e404);
      DAT_1000ef44 = *(undefined4 *)(iVar12 + 0x1000e408);
      DAT_1000ef48 = *(undefined4 *)(iVar12 + 0x1000e40c);
      goto LAB_10009676;
    }
    goto LAB_10009671;
  }
  goto LAB_1000950c;
code_r0x10009526:
  pUVar5 = pUVar5 + 0xc;
  iVar12 = iVar12 + 1;
  if ((UINT *)0x1000e4ef < pUVar5) goto code_r0x10009531;
  goto LAB_10009522;
code_r0x10009531:
  BVar6 = GetCPInfo(CodePage,&local_1c);
  uVar8 = 1;
  if (BVar6 == 1) {
    DAT_1000f164 = 0;
    puVar15 = &DAT_1000f060;
    for (iVar12 = 0x40; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    *(undefined1 *)puVar15 = 0;
    if (local_1c.MaxCharSize < 2) {
      _DAT_1000ef4c = 0;
      DAT_1000ef34 = CodePage;
    }
    else {
      DAT_1000ef34 = CodePage;
      if (local_1c.LeadByte[0] != '\0') {
        pBVar9 = local_1c.LeadByte + 1;
        do {
          bVar3 = *pBVar9;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar9[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            pbVar13 = (byte *)((int)&DAT_1000f060 + uVar7 + 1);
            *pbVar13 = *pbVar13 | 4;
          }
          pBVar1 = pBVar9 + 1;
          pBVar9 = pBVar9 + 2;
        } while (*pBVar1 != 0);
      }
      do {
        pbVar13 = (byte *)((int)&DAT_1000f060 + uVar8 + 1);
        *pbVar13 = *pbVar13 | 8;
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0xff);
      DAT_1000f164 = FUN_100096dc(CodePage);
      _DAT_1000ef4c = 1;
    }
    DAT_1000ef40 = 0;
    DAT_1000ef44 = 0;
    DAT_1000ef48 = 0;
  }
  else {
    if (DAT_1000ed94 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_10009683;
    }
LAB_10009671:
    FUN_1000970f();
  }
LAB_10009676:
  FUN_10009738();
LAB_1000950c:
  uVar14 = 0;
LAB_10009683:
  FUN_10006ee6(0x19);
  return uVar14;
}



// ============================================================
// FUN_10009692 @ 0x10009692 74B
// ============================================================

int __cdecl FUN_10009692(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_1000ed94 = 1;
                    /* WARNING: Could not recover jumptable at 0x100096ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_1000ed94 = 1;
                    /* WARNING: Could not recover jumptable at 0x100096c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_1000edd0;
  }
  DAT_1000ed94 = (uint)bVar2;
  return param_1;
}



// ============================================================
// FUN_100096dc @ 0x100096dc 51B
// ============================================================

undefined4 __cdecl FUN_100096dc(int param_1)

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
// FUN_1000970f @ 0x1000970f 41B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000970f(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_1000f060;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_1000ef34 = 0;
  _DAT_1000ef4c = 0;
  DAT_1000f164 = 0;
  DAT_1000ef40 = 0;
  DAT_1000ef44 = 0;
  DAT_1000ef48 = 0;
  return;
}



// ============================================================
// FUN_10009738 @ 0x10009738 389B
// ============================================================

void FUN_10009738(void)

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
  
  BVar2 = GetCPInfo(DAT_1000ef34,&local_18);
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
    FUN_1000a126(1,local_118,0x100,local_518,DAT_1000ef34,DAT_1000f164,0);
    FUN_10009ed7(DAT_1000f164,0x100,local_118,0x100,local_218,0x100,DAT_1000ef34,0);
    FUN_10009ed7(DAT_1000f164,0x200,local_118,0x100,local_318,0x100,DAT_1000ef34,0);
    uVar3 = 0;
    puVar7 = local_518;
    do {
      if ((*puVar7 & 1) == 0) {
        if ((*puVar7 & 2) != 0) {
          pbVar1 = (byte *)((int)&DAT_1000f060 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          uVar8 = *(undefined1 *)((int)local_318 + uVar3);
          goto LAB_10009844;
        }
        (&DAT_1000ef60)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000f060 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        uVar8 = *(undefined1 *)((int)local_218 + uVar3);
LAB_10009844:
        (&DAT_1000ef60)[uVar3] = uVar8;
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
          pbVar1 = (byte *)((int)&DAT_1000f060 + uVar3 + 1);
          *pbVar1 = *pbVar1 | 0x20;
          cVar4 = (char)uVar3 + -0x20;
          goto LAB_1000988e;
        }
        (&DAT_1000ef60)[uVar3] = 0;
      }
      else {
        pbVar1 = (byte *)((int)&DAT_1000f060 + uVar3 + 1);
        *pbVar1 = *pbVar1 | 0x10;
        cVar4 = (char)uVar3 + ' ';
LAB_1000988e:
        (&DAT_1000ef60)[uVar3] = cVar4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x100);
  }
  return;
}



// ============================================================
// FUN_100098bd @ 0x100098bd 28B
// ============================================================

void FUN_100098bd(void)

{
  if (DAT_1000f2a8 == 0) {
    FUN_100094e5(-3);
    DAT_1000f2a8 = 1;
  }
  return;
}



// ============================================================
// FUN_100098d9 @ 0x100098d9 23B
// ============================================================

void __thiscall FUN_100098d9(void *this,byte *param_1,int *param_2,void *param_3)

{
  FUN_100098f0(this,param_1,param_2,param_3,0);
  return;
}



// ============================================================
// FUN_100098f0 @ 0x100098f0 517B
// ============================================================

void * __thiscall FUN_100098f0(void *this,byte *param_1,int *param_2,void *param_3,uint param_4)

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
    if (DAT_1000e864 < 2) {
      uVar3 = (byte)PTR_DAT_1000e658[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1000e658;
    }
    else {
      puVar8 = (undefined *)0x8;
      uVar3 = FUN_1000a3b3(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_1000994b:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_1000994b;
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
      goto LAB_100099b5;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = (void *)0x8;
      goto LAB_100099b5;
    }
    param_3 = (void *)0x10;
  }
  if (((param_3 == (void *)0x10) && (bVar7 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58))))
  {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_100099b5:
  pvVar4 = (void *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1000e864 < 2) {
      uVar5 = (byte)PTR_DAT_1000e658[uVar3 * 2] & 4;
    }
    else {
      pvVar2 = (void *)0x4;
      uVar5 = FUN_1000a3b3(this_00,uVar3,4);
      this_00 = pvVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1000e864 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1000e658 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1000a3b3(this_00,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10009a61:
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
          pDVar6 = FUN_1000a26f();
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
      uVar3 = FUN_1000a278((int)(char)bVar7);
      this_00 = (void *)(uVar3 - 0x37);
    }
    else {
      this_00 = (void *)((char)bVar7 + -0x30);
    }
    if (param_3 <= this_00) goto LAB_10009a61;
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
// FUN_10009b00 @ 0x10009b00 47B
// ============================================================

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10009b00(void)

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
// FUN_10009b2f @ 0x10009b2f 137B
// ============================================================

int __cdecl FUN_10009b2f(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_1000ed98 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_1000ed98 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_1000ed98 != (FARPROC)0x0) {
        DAT_1000ed9c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_1000eda0 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10009b7e;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10009b7e:
    if (DAT_1000ed9c != (FARPROC)0x0) {
      iVar1 = (*DAT_1000ed9c)();
      if ((iVar1 != 0) && (DAT_1000eda0 != (FARPROC)0x0)) {
        iVar1 = (*DAT_1000eda0)(iVar1);
      }
    }
    iVar1 = (*DAT_1000ed98)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}



// ============================================================
// _strncpy @ 0x10009bc0 254B
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
        goto joined_r0x10009bfe;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = _Count >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_10009c3b;
        goto LAB_10009ca9;
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
joined_r0x10009ca5:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_10009ca9:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          _Count = _Count & 3;
          if (_Count != 0) goto LAB_10009c3b;
          return _Dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x10009ca5;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x10009ca5;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x10009ca5;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x10009bfe:
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
LAB_10009c3b:
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
// _memset @ 0x10009cc0 88B
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
// FUN_10009d18 @ 0x10009d18 386B
// ============================================================

undefined4 __cdecl FUN_10009d18(DWORD *param_1)

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
    puVar7 = &DAT_1000eda4;
    pcVar6 = DAT_1000eda4;
LAB_10009d9e:
    bVar1 = true;
    FUN_10006e85(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)0x8)) && (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_1000edb0;
        pcVar6 = DAT_1000edb0;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_1000eda8;
        pcVar6 = DAT_1000eda8;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_1000edac;
        pcVar6 = DAT_1000edac;
      }
      goto LAB_10009d9e;
    }
    pDVar2 = FUN_10006b41();
    uVar3 = FUN_10009e9a((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_10006ee6(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_10006ee6(1);
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
      goto LAB_10009e12;
    }
  }
  else {
LAB_10009e12:
    if (param_1 == (DWORD *)0x8) {
      if (DAT_1000e3e8 < DAT_1000e3ec + DAT_1000e3e8) {
        iVar4 = DAT_1000e3e8 * 0xc;
        iVar5 = DAT_1000e3e8;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_1000e3ec + DAT_1000e3e8);
      }
      goto LAB_10009e50;
    }
  }
  *puVar7 = 0;
LAB_10009e50:
  if (bVar1) {
    FUN_10006ee6(1);
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
// FUN_10009e9a @ 0x10009e9a 61B
// ============================================================

uint __cdecl FUN_10009e9a(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_1000e3f4 * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_1000e3f4 * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



// ============================================================
// FUN_10009ed7 @ 0x10009ed7 511B
// ============================================================

int __cdecl
FUN_10009ed7(LCID param_1,uint param_2,char *param_3,int param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  int iVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1000b588;
  puStack_10 = &LAB_10008e4c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_1000edd8 == 0) {
    ExceptionList = &local_14;
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      DAT_1000edd8 = 2;
    }
    else {
      DAT_1000edd8 = 1;
    }
  }
  if (0 < param_4) {
    param_4 = FUN_1000a0fb(param_3,param_4);
  }
  if (DAT_1000edd8 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,param_4,(LPSTR)param_5,param_6);
    ExceptionList = local_14;
    return iVar1;
  }
  if (DAT_1000edd8 == 1) {
    if (param_7 == 0) {
      param_7 = DAT_1000edd0;
    }
    iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,
                                0);
    if (iVar1 != 0) {
      local_8 = 0;
      FUN_10009b00();
      local_8 = 0xffffffff;
      if ((&stack0x00000000 != (undefined1 *)0x3c) &&
         (iVar2 = MultiByteToWideChar(param_7,1,param_3,param_4,(LPWSTR)&stack0xffffffc4,iVar1),
         iVar2 != 0)) {
        iVar2 = LCMapStringW(param_1,param_2,(LPCWSTR)&stack0xffffffc4,iVar1,(LPWSTR)0x0,0);
        if (iVar2 != 0) {
          if ((param_2 & 0x400) == 0) {
            local_8 = 1;
            FUN_10009b00();
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
// FUN_1000a0fb @ 0x1000a0fb 43B
// ============================================================

int __cdecl FUN_1000a0fb(char *param_1,int param_2)

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
// FUN_1000a126 @ 0x1000a126 318B
// ============================================================

BOOL __cdecl
FUN_1000a126(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
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
  puStack_c = &DAT_1000b5a0;
  puStack_10 = &LAB_10008e4c;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  iVar3 = DAT_1000eddc;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffffc8;
  if (DAT_1000eddc == 0) {
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
  DAT_1000eddc = iVar3;
  if (DAT_1000eddc != 2) {
    if (DAT_1000eddc == 1) {
      if (param_5 == 0) {
        param_5 = DAT_1000edd0;
      }
      iVar3 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,
                                  (LPWSTR)0x0,0);
      if (iVar3 != 0) {
        local_8 = 0;
        FUN_10009b00();
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
    param_6 = DAT_1000edc0;
  }
  BVar2 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
  ExceptionList = local_14;
  return BVar2;
}



// ============================================================
// FUN_1000a278 @ 0x1000a278 111B
// ============================================================

uint __cdecl FUN_1000a278(uint param_1)

{
  void *extraout_ECX;
  bool bVar1;
  void *this;
  
  if (DAT_1000edc0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_1000ef30);
    bVar1 = DAT_1000ef2c != 0;
    this = extraout_ECX;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_1000ef30);
      this = (void *)0x13;
      FUN_10006e85(0x13);
    }
    param_1 = FUN_1000a2e7(this,param_1);
    if (bVar1) {
      FUN_10006ee6(0x13);
    }
    else {
      InterlockedDecrement((LONG *)&DAT_1000ef30);
    }
  }
  return param_1;
}



// ============================================================
// FUN_1000a2e7 @ 0x1000a2e7 204B
// ============================================================

uint __thiscall FUN_1000a2e7(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000edc0 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      uVar1 = param_1 - 0x20;
    }
  }
  else {
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000e864 < 2) {
        uVar2 = (byte)PTR_DAT_1000e658[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_1000a3b3(this,param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000e658[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
      iVar3 = 1;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10009ed7(DAT_1000edc0,0x200,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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
// FUN_1000a3b3 @ 0x1000a3b3 117B
// ============================================================

uint __thiscall FUN_1000a3b3(void *this,int param_1,uint param_2)

{
  BOOL BVar1;
  int iVar2;
  undefined4 local_8;
  
  if (param_1 + 1U < 0x101) {
    param_1._2_2_ = *(ushort *)(PTR_DAT_1000e658 + param_1 * 2);
  }
  else {
    if ((PTR_DAT_1000e658[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      local_8 = CONCAT31((int3)((uint)this >> 8),(char)param_1) & 0xffff00ff;
      iVar2 = 1;
    }
    else {
      local_8._0_2_ = CONCAT11((char)param_1,(char)((uint)param_1 >> 8));
      local_8 = CONCAT22((short)((uint)this >> 0x10),(undefined2)local_8) & 0xff00ffff;
      iVar2 = 2;
    }
    BVar1 = FUN_1000a126(1,(LPCSTR)&local_8,iVar2,(LPWORD)((int)&param_1 + 2),0,0,1);
    if (BVar1 == 0) {
      return 0;
    }
  }
  return param_1._2_2_ & param_2;
}



// ============================================================
// FUN_1000a430 @ 0x1000a430 62B
// ============================================================

int __cdecl FUN_1000a430(byte *param_1,byte *param_2)

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
// FUN_1000a470 @ 0x1000a470 58B
// ============================================================

byte * __cdecl FUN_1000a470(byte *param_1,byte *param_2)

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
// FUN_1000a4b0 @ 0x1000a4b0 208B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_1000a4b0(void *this,byte *param_1,byte *param_2)

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
  
  iVar2 = _DAT_1000ef30;
  if (DAT_1000edc0 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000a4fe;
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
LAB_1000a4fe:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_1000ef30 = _DAT_1000ef30 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_1000ef2c;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_1000ef30 = iVar2;
      FUN_10006e85(0x13);
      this = extraout_ECX;
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_1000a55f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_1000a775(this,uVar8);
      uVar7 = FUN_1000a775(this_00,uVar7);
      this = extraout_ECX_00;
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_1000a55f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_1000ef30 = _DAT_1000ef30 + -1;
      UNLOCK();
    }
    else {
      FUN_10006ee6(0x13);
    }
  }
  return uVar7;
}



// ============================================================
// FUN_1000a580 @ 0x1000a580 257B
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1000a580(byte *param_1,char *param_2,void *param_3)

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
  
  iVar2 = _DAT_1000ef30;
  uVar6 = 0;
  if (param_3 != (void *)0x0) {
    if (DAT_1000edc0 == 0) {
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
        if (bVar3 != (byte)uVar4) goto LAB_1000a5df;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_1000a5df:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_1000ef30 = _DAT_1000ef30 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_1000ef2c;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_1000ef30 = iVar2;
        FUN_10006e85(0x13);
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
        uVar7 = FUN_1000a775(param_3,uVar7);
        uVar5 = FUN_1000a775(this,uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_1000a655;
        param_3 = (void *)((int)param_3 + -1);
      } while (param_3 != (void *)0x0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_1000a655:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_1000ef30 = _DAT_1000ef30 + -1;
        UNLOCK();
      }
      else {
        FUN_10006ee6(0x13);
      }
    }
  }
  return uVar6;
}



// ============================================================
// FUN_1000a775 @ 0x1000a775 203B
// ============================================================

uint __thiscall FUN_1000a775(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *local_8;
  
  uVar1 = param_1;
  if (DAT_1000edc0 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      uVar1 = param_1 + 0x20;
    }
  }
  else {
    iVar3 = 1;
    local_8 = this;
    if ((int)param_1 < 0x100) {
      if (DAT_1000e864 < 2) {
        uVar2 = (byte)PTR_DAT_1000e658[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_1000a3b3(this,param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    if ((PTR_DAT_1000e658[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1 = CONCAT31((int3)(param_1 >> 8),(char)uVar1) & 0xffff00ff;
    }
    else {
      uVar2 = param_1 >> 0x10;
      param_1._0_2_ = CONCAT11((char)uVar1,(char)(uVar1 >> 8));
      param_1 = CONCAT22((short)uVar2,(undefined2)param_1) & 0xff00ffff;
      iVar3 = 2;
    }
    iVar3 = FUN_10009ed7(DAT_1000edc0,0x100,(char *)&param_1,iVar3,(LPWSTR)&local_8,3,0,1);
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



