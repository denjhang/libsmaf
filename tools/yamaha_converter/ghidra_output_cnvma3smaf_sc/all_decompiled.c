// ============================================================
// FUN_10001010 @ 0x10001010 55B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10001033) */

undefined * FUN_10001010(void)

{
  uint uVar1;
  
  uVar1 = GetMAxVersion();
  DAT_1004a0e2 = (char)((int)(uVar1 >> 8 & 0xff) >> 4) + '0';
  DAT_1004a0e3 = ((byte)(uVar1 >> 8) & 0xf) + 0x30;
  return &DAT_1004a0e0;
}



// ============================================================
// CnvFrom @ 0x10001050 6456B
// ============================================================

/* WARNING: Removing unreachable block (ram,0x10001b25) */
/* WARNING: Removing unreachable block (ram,0x10001b3a) */
/* WARNING: Removing unreachable block (ram,0x10001b3f) */
/* WARNING: Removing unreachable block (ram,0x10001b45) */
/* WARNING: Removing unreachable block (ram,0x10001b5d) */
/* WARNING: Removing unreachable block (ram,0x10001b63) */
/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl
CnvFrom(uint *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5,
       undefined1 param_6,undefined4 param_7,undefined1 param_8,undefined4 param_9,
       undefined1 param_10,undefined4 param_11,undefined1 param_12,undefined4 param_13,
       undefined1 param_14,undefined4 param_15,undefined1 param_16,undefined4 param_17,
       undefined1 param_18,undefined4 *param_19)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  int iVar13;
  void *pvVar14;
  undefined4 uVar15;
  uint *puVar16;
  uint *puVar17;
  byte *pbVar18;
  uint uVar19;
  uint *puVar20;
  void *this;
  void *this_00;
  uint uVar21;
  uint uVar22;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined2 uVar23;
  undefined4 unaff_EDI;
  undefined4 *puVar24;
  longlong lVar25;
  undefined4 unaff_retaddr;
  undefined4 local_4cd4 [2308];
  undefined4 local_28c4;
  undefined1 local_28c0 [1628];
  undefined1 local_2264 [1944];
  int local_1acc;
  int local_1a9c;
  undefined4 local_1a94;
  uint local_14a0;
  undefined4 local_1494;
  undefined4 local_13c0;
  undefined4 local_1390 [486];
  undefined **local_bf8;
  undefined **local_bf4;
  int local_5e8;
  int local_5e4;
  int local_5e0;
  int local_5dc [2];
  int local_5d4;
  int local_5d0;
  int local_5cc;
  int local_5c8 [7];
  undefined1 local_5ac [12];
  int local_5a0;
  int local_59c [116];
  undefined4 local_3cc [69];
  undefined4 local_2b8 [33];
  undefined1 local_234 [4];
  undefined **local_230 [4];
  uint local_220 [51];
  undefined4 uStack_154;
  uint *local_150;
  undefined4 uStack_14c;
  int local_148;
  undefined4 uStack_144;
  undefined **local_140 [4];
  uint *local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  int local_118;
  undefined4 uStack_114;
  undefined **local_110 [4];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec [6];
  undefined **local_d4;
  undefined4 *local_d0;
  uint local_cc;
  undefined4 local_c8;
  char local_c4;
  undefined **local_c0;
  int local_bc;
  undefined4 uStack_b8;
  undefined **local_b4;
  undefined *local_b0;
  uint *local_ac;
  int iStack_a8;
  undefined **local_a4;
  undefined *local_a0;
  undefined4 local_9c;
  int local_98;
  undefined **local_94;
  undefined **local_90;
  byte *local_8c;
  byte *local_88;
  char local_84;
  undefined4 local_80;
  uint *local_7c;
  undefined4 uStack_78;
  byte *local_74;
  uint *local_70;
  uint *local_6c;
  undefined **local_68;
  undefined **local_64;
  byte *local_60;
  uint local_5c;
  uint local_58;
  char *local_54;
  uint local_50;
  byte *local_4c;
  char *pcVar26;
  char *in_stack_ffffffbc;
  byte *in_stack_ffffffc4;
  undefined ***local_38;
  undefined1 *puVar27;
  uint uVar28;
  uint *puVar29;
  uint *_Size;
  int iVar30;
  undefined1 *puVar31;
  undefined4 *puVar32;
  
                    /* 0x1050  1  CnvFrom */
  puVar32 = (undefined4 *)&LAB_100406a1;
  pvVar14 = ExceptionList;
  ExceptionList = &stack0xfffffff0;
  FUN_100322a0();
  puVar31 = &stack0xffffffe0;
  FUN_100178c0(local_59c,0);
  FUN_10017a20();
  FUN_10006570(local_3cc,0);
  FUN_100067d0();
  pcVar26 = (char *)0x0;
  uVar8 = *param_1 & 0xc00ff0d;
  *param_1 = uVar8;
  FUN_1003a5a0(&local_74,(undefined4 *)param_1[1],4);
  iVar9 = FUN_10031eaf(local_74,&DAT_1004a100);
  if (iVar9 != 0) {
    FUN_1003b023((int *)&local_74);
    FUN_100065e0(local_3cc);
    FUN_10017920(local_59c);
    ExceptionList = pvVar14;
    return 0x80000002;
  }
  local_8c = (byte *)param_1[2];
  local_90 = (undefined **)param_1[1];
  local_94 = &PTR_FUN_1004336c;
  local_88 = (byte *)0x0;
  local_84 = '\0';
  local_68 = &PTR_FUN_1004336c;
  local_5c = 0;
  local_58 = local_58 & 0xffffff00;
  local_64 = local_90;
  local_60 = local_8c;
  FUN_1002ea10(local_2b8,&local_68);
  FUN_1002e7f0();
  piVar10 = FUN_1002ee30(local_2b8,&stack0xffffffc4,'\0');
  if (*(int *)(*piVar10 + -8) == 7) {
    piVar10 = FUN_1002ee30(local_2b8,&local_50,'\x02');
    iVar9 = *(int *)(*piVar10 + -8);
    FUN_1003b023((int *)&local_50);
    if (iVar9 != 7) goto LAB_100011da;
    bVar4 = true;
  }
  else {
LAB_100011da:
    bVar4 = false;
  }
  FUN_1003b023((int *)&stack0xffffffc4);
  if (bVar4) {
    puVar11 = FUN_1002ee30(local_2b8,&local_50,'\0');
    puVar24 = (undefined4 *)PTR_DAT_1004a674;
    FUN_1003b160(&stack0xffffffc0,(LPCSTR)*puVar11);
    FUN_1003b023((int *)&local_50);
    puVar11 = FUN_1002ee30(local_2b8,&stack0xffffffd8,'\x02');
    FUN_1003b160(&stack0xffffffdc,(LPCSTR)*puVar11);
    FUN_1003b023((int *)&stack0xffffffd8);
    puVar11 = (undefined4 *)0x2;
    FUN_1003a5a0(&stack0xffffffc4,puVar24,2);
    FUN_1003a5a0(&local_4c,puVar11,2);
    iVar9 = 2;
    FUN_1003a5a0(&local_6c,(undefined4 *)((int)puVar24 + 2),2);
    FUN_1003a5a0(&local_38,(undefined4 *)(iVar9 + 2),2);
    iVar9 = 2;
    FUN_1003a5a0(&local_54,(undefined4 *)((int)puVar24 + 5),2);
    FUN_1003a5a0(&stack0xffffffbc,(undefined4 *)(iVar9 + 5),2);
    iVar9 = FUN_10031eaf(local_4c,in_stack_ffffffc4);
    if ((iVar9 == 0) && (iVar9 = FUN_10031eaf((byte *)local_38,(byte *)local_6c), iVar9 == 0)) {
      iVar9 = FUN_10031eaf(local_4c,(byte *)&DAT_1004a0fc);
      if (iVar9 == 0) {
        puVar12 = FUN_10001010();
        iVar9 = FUN_10031ea4(this,puVar12 + 2);
        iVar13 = FUN_10031ea4(local_38,(byte *)local_38);
        if (iVar9 < iVar13) {
          uVar8 = uVar8 | 0x40000000;
        }
        else if (iVar13 < iVar9) {
          uVar8 = uVar8 | 0x30000000;
          iVar9 = FUN_10031ea4(this_00,&DAT_1004a0f8);
          if (iVar13 < iVar9) {
            pcVar26 = (char *)0x1;
          }
        }
        else {
          uVar28 = FUN_1002f530((int)local_2b8);
          FUN_10031d90((uVar28 ^ 0xfffffdff) >> 8 & 0xf,&stack0xffffffe0,0x10);
          uVar28 = FUN_10031c55((int)(char)unaff_EDI);
          uVar15 = CONCAT31((int3)((uint)unaff_EDI >> 8),(char)uVar28);
          uVar28 = FUN_1002f530((int)local_2b8);
          FUN_10031d90((uVar28 ^ 1) & 0xf,&stack0xffffffe1,0x10);
          uVar28 = FUN_10031c55((int)(char)((uint)uVar15 >> 8));
          unaff_EDI = CONCAT13((char)((uint)uVar15 >> 0x18),
                               (uint3)CONCAT11((char)uVar28,(char)uVar15));
          uVar7 = FUN_1002f220(local_2b8);
          FUN_10031d90((uVar7 ^ 0xfffffdff) >> 8 & 0xf,&stack0xffffffe8,0x10);
          uVar28 = FUN_10031c55((int)(char)unaff_EBX);
          uVar15 = CONCAT31((int3)((uint)unaff_EBX >> 8),(char)uVar28);
          uVar7 = FUN_1002f220(local_2b8);
          FUN_10031d90((uVar7 ^ 1) & 0xf,&stack0xffffffe9,0x10);
          uVar28 = FUN_10031c55((int)(char)((uint)uVar15 >> 8));
          unaff_EBX = CONCAT13((char)((uint)uVar15 >> 0x18),
                               (uint3)CONCAT11((char)uVar28,(char)uVar15));
          if ((((*local_54 != (char)unaff_EDI) || (*in_stack_ffffffbc != (char)uVar15)) ||
              (local_54[1] != (char)((uint)unaff_EDI >> 8))) ||
             (in_stack_ffffffbc[1] != (char)uVar28)) {
            uVar8 = uVar8 | 0x50000000;
          }
        }
      }
      else {
        iVar9 = FUN_10031eaf(local_4c,&DAT_1004a0f4);
        if (iVar9 != 0) goto LAB_1000148d;
        uVar8 = uVar8 | 0x10000000;
      }
    }
    else {
LAB_1000148d:
      uVar8 = uVar8 | 0x20000000;
    }
    FUN_1003b023((int *)&stack0xffffffbc);
    FUN_1003b023((int *)&local_54);
    FUN_1003b023((int *)&local_38);
    FUN_1003b023((int *)&local_6c);
    FUN_1003b023((int *)&local_4c);
    FUN_1003b023((int *)&stack0xffffffc4);
    FUN_1003b023((int *)&stack0xffffffdc);
    FUN_1003b023((int *)&stack0xffffffc0);
  }
  else {
    piVar10 = FUN_1002ee30(local_2b8,&stack0xffffffc4,'\0');
    if (*(int *)(*piVar10 + -8) == 0) {
      piVar10 = FUN_1002ee30(local_2b8,&stack0xffffffd8,'\x01');
      iVar9 = *(int *)(*piVar10 + -8);
      FUN_1003b023((int *)&stack0xffffffd8);
      if (iVar9 != 0) goto LAB_10001570;
      piVar10 = FUN_1002ee30(local_2b8,&local_50,'\x02');
      iVar9 = *(int *)(*piVar10 + -8);
      FUN_1003b023((int *)&local_50);
      if (iVar9 != 0) goto LAB_10001570;
      bVar4 = true;
    }
    else {
LAB_10001570:
      bVar4 = false;
    }
    FUN_1003b023((int *)&stack0xffffffc4);
    if (bVar4) {
      uVar8 = uVar8 | 0x60000000;
    }
    else {
      uVar8 = uVar8 | 0x20000000;
    }
  }
  FUN_1002e850(local_2b8);
  local_68 = &PTR_FUN_1004336c;
  if ((local_64 != (undefined **)0x0) && ((char)local_58 != '\0')) {
    FUN_10031b6c((undefined *)local_64);
  }
  FUN_100249d0(local_4cd4,(uint *)&local_94);
  iVar9 = FUN_1002f8b0((int)local_4cd4);
  if (iVar9 != 0x434e5449) {
    local_ec[2] = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_ec + 2,&DAT_10045788);
  }
  cVar5 = FUN_10025790(local_4cd4,5);
  if ((cVar5 != '\x01') && (cVar5 = FUN_10025790(local_4cd4,5), cVar5 != '\x02')) {
    local_f8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_f8,&DAT_10045788);
  }
  local_88 = local_8c + -2;
  if ((int)local_88 < 0) {
    local_88 = (byte *)0x0;
  }
  else if ((int)local_8c < (int)local_88) {
    local_88 = local_8c;
  }
  FUN_10005aa0(&local_94,(undefined4 *)&stack0xffffffc4,2);
  FUN_10018420((int)(local_8c + -2),(byte *)local_90);
  local_88 = (byte *)0x0;
  if ((int)local_8c < 0) {
    local_88 = local_8c;
  }
  FUN_10007d10(&local_28c4);
  FUN_10017be0(&local_bf8);
  FUN_10026030(local_4cd4,(char *)&local_bf8,pcVar26);
  uVar15 = 0;
  FUN_10017ed0(local_28c0,(int)&local_bf8,'\0');
  FUN_10007120(local_140);
  local_140[0] = &PTR_FUN_10043348;
  puVar27 = local_234;
  local_38 = (undefined ***)0x10001757;
  FUN_10025cf0(local_4cd4,puVar27,(uint *)&stack0xffffffcc,(undefined **)local_140,3,
               &stack0xffffffe4,unaff_EDI,uVar8,unaff_EBX,puVar31,pvVar14,puVar32,
               CONCAT31((int3)((uint)uVar15 >> 8),0x1a),unaff_EBP,unaff_retaddr,param_1,param_2,
               param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
               param_13,param_14,param_15,param_16,param_17,param_18,param_19);
  *param_1 = uVar8;
  switch(puVar27) {
  case (undefined1 *)0x0:
    uVar28 = 1;
    goto LAB_100017c9;
  case (undefined1 *)0x1:
    uVar28 = 2;
    uVar8 = uVar8 | 0x10;
    break;
  default:
    uVar28 = 4;
    uVar8 = uVar8 | 0x20;
    break;
  case (undefined1 *)0x3:
    uVar28 = 5;
    uVar8 = uVar8 | 0x30;
    break;
  case (undefined1 *)0x10:
    uVar28 = 10;
    uVar8 = uVar8 | 0x40;
    break;
  case (undefined1 *)0x11:
    uVar28 = 0x14;
    uVar8 = uVar8 | 0x50;
    break;
  case (undefined1 *)0x12:
    uVar28 = 0x28;
    uVar8 = uVar8 | 0x60;
    break;
  case (undefined1 *)0x13:
    uVar28 = 0x32;
    uVar8 = uVar8 | 0x70;
  }
  *param_1 = uVar8;
LAB_100017c9:
  FUN_10015700(local_1390);
  FUN_1002b600(local_4cd4,local_1390);
  iVar9 = FUN_10017b40();
  if (iVar9 != 0) {
    iVar9 = FUN_10017a50(local_59c);
    if (iVar9 == 0) {
      local_fc = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_fc,&DAT_10045788);
    }
    for (iVar9 = 0; iVar9 < 0x80; iVar9 = iVar9 + 1) {
      pvVar14 = (void *)FUN_10015aa0(local_1390,iVar9);
      if (((pvVar14 != (void *)0x0) && (bVar6 = FUN_10030030((int)pvVar14), bVar6 == 0x7c)) &&
         (bVar6 = FUN_10030060((int)pvVar14), bVar6 != 10)) {
        bVar6 = FUN_10030090((int)pvVar14);
        iVar13 = FUN_10017ab0(local_59c,(uint)bVar6);
        if (iVar13 == -1) {
          local_f4 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(&local_f4,&DAT_10045788);
        }
        FUN_10030070(pvVar14,(byte)iVar13);
      }
    }
  }
  iVar9 = FUN_10006990();
  if (iVar9 != 0) {
    iVar9 = FUN_10006800((int)local_3cc);
    if (iVar9 == 0) {
      local_ec[1] = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_ec + 1,&DAT_10045788);
    }
    for (iVar9 = 0; iVar9 < 0x80; iVar9 = iVar9 + 1) {
      pvVar14 = (void *)FUN_10015aa0(local_1390,iVar9);
      if (((pvVar14 != (void *)0x0) && (bVar6 = FUN_10030030((int)pvVar14), bVar6 == 0x7d)) &&
         (bVar6 = FUN_10030090((int)pvVar14), bVar6 != 10)) {
        bVar6 = FUN_100300c0((int)pvVar14);
        iVar13 = FUN_10006890(local_3cc,(uint)bVar6);
        if (iVar13 == -1) {
          local_ec[4] = 0xffffffff;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_ec + 4,&DAT_10045788);
        }
        FUN_100300a0(pvVar14,(byte)iVar13);
      }
    }
  }
  bVar4 = false;
  iVar9 = 0;
LAB_1000195a:
  do {
    if (0x7f < iVar9) break;
    pvVar14 = (void *)FUN_10015aa0(local_1390,iVar9);
    if ((pvVar14 != (void *)0x0) && (iVar13 = FUN_100307b0((int)pvVar14), iVar13 != 0)) {
      uVar7 = FUN_100304b0((int)pvVar14);
      if (uVar7 < 0x5dc) {
        FUN_10030490(pvVar14,0x5dc);
        bVar4 = true;
        iVar9 = iVar9 + 1;
        goto LAB_1000195a;
      }
      if (48000 < uVar7) {
        FUN_10030490(pvVar14,48000);
        bVar4 = true;
      }
    }
    iVar9 = iVar9 + 1;
  } while( true );
  if (bVar4) {
    *param_1 = *param_1 | 0x20000;
  }
  FUN_10007120(local_110);
  local_110[0] = &PTR_FUN_10043348;
  FUN_10025f90(local_4cd4,(int *)local_110);
  FUN_10007120(local_230);
  local_230[0] = &PTR_FUN_10043348;
  local_a4 = &PTR_LAB_10043344;
  local_a0 = _malloc(400);
  local_9c = 100;
  local_98 = 0;
  FUN_100073b0(&local_c0,(int)local_110);
  local_c0 = &PTR_FUN_10043340;
  FUN_10005920(&local_80,(int)local_140);
  FUN_10005be0(&local_64,100);
  FUN_10005be0(&local_b4,100);
  iVar9 = FUN_10007190((int)local_110);
  if (iVar9 != 0) {
    while (uVar15 = FUN_100073d0(&local_c0,(undefined4 *)&stack0xffffffe8), (char)uVar15 != '\0') {
      FUN_10005c40(&local_64,unaff_EBX);
    }
    while (uVar15 = FUN_100073d0(&local_80,&local_38), (char)uVar15 != '\0') {
      FUN_10005c40(&local_b4,local_38);
    }
    FUN_10007400((int)&local_c0);
    FUN_10007400((int)&local_80);
    iVar13 = 0;
    iVar9 = 0;
    uVar8 = *(uint *)(*(int *)local_60 + 4);
    uVar22 = local_58;
LAB_10001bb4:
    do {
      if (iStack_a8 <= iVar9) goto LAB_10001bdd;
      while ((uVar8 <= *(uint *)(*(int *)(local_b0 + iVar9 * 4) + 4) &&
             (uVar21 = uVar8, iVar13 < (int)uVar22))) {
        do {
          uVar8 = *(uint *)(*(int *)(local_60 + iVar13 * 4) + 4);
          if (uVar21 < uVar8) {
            if (iVar13 < (int)uVar22) goto LAB_10001bb4;
            break;
          }
          FUN_10005c40(&local_a4,*(int *)(local_60 + iVar13 * 4));
          iVar13 = iVar13 + 1;
          uVar22 = local_58;
          uVar8 = uVar21;
LAB_10001bdd:
          uVar21 = uVar8;
        } while (iVar13 < (int)uVar22);
        if (iStack_a8 <= iVar9) {
          local_b4 = &PTR_LAB_10043344;
          FUN_10031b6c(local_b0);
          local_64 = &PTR_LAB_10043344;
          uVar15 = 0x10001c23;
          FUN_10031b6c(local_60);
          FUN_1002d790(&local_80);
          FUN_1002d790(&local_c0);
          goto LAB_10001c41;
        }
      }
      FUN_10005c40(&local_a4,*(int *)(local_b0 + iVar9 * 4));
      iVar9 = iVar9 + 1;
      uVar22 = local_58;
    } while( true );
  }
  while (uVar15 = FUN_100073d0(&local_80,&local_38), (char)uVar15 != '\0') {
    FUN_10005c40(&local_a4,local_38);
  }
  local_b4 = &PTR_LAB_10043344;
  FUN_10031b6c(local_b0);
  local_64 = &PTR_LAB_10043344;
  uVar15 = 0x10001ade;
  FUN_10031b6c(local_60);
  FUN_1002d790(&local_80);
  FUN_1002d790(&local_c0);
LAB_10001c41:
  if ((char)((uint)uVar15 >> 0x18) != '\0') {
    local_64 = &PTR_LAB_10043344;
    local_60 = _malloc(400);
    local_5c = 100;
    local_58 = 0;
    local_54 = (char *)0x0;
    uVar8 = 0;
    puVar29 = (uint *)0x0;
    local_38 = (undefined ***)(uVar28 * 1000);
    for (iVar9 = 0; iVar9 < local_98; iVar9 = iVar9 + 1) {
      iVar13 = *(int *)(local_a0 + iVar9 * 4);
      if (*(int *)(iVar13 + 0x24) == 0) {
        pcVar26 = *(char **)(iVar13 + 0x1c);
        if (pcVar26 == (char *)0x0) {
          cVar5 = *(char *)(iVar13 + 0xc);
        }
        else {
          cVar5 = *pcVar26;
        }
        if (cVar5 == -0x10) {
          if (pcVar26 == (char *)0x0) {
            cVar5 = *(char *)(iVar13 + 0xe);
          }
          else {
            cVar5 = pcVar26[2];
          }
          if (cVar5 == 'C') {
            if (pcVar26 == (char *)0x0) {
              cVar5 = *(char *)(iVar13 + 0xf);
            }
            else {
              cVar5 = pcVar26[3];
            }
            if (cVar5 == 'y') {
              if (pcVar26 == (char *)0x0) {
                cVar5 = *(char *)(iVar13 + 0x10);
              }
              else {
                cVar5 = pcVar26[4];
              }
              if (cVar5 == '\x06') {
                if (pcVar26 == (char *)0x0) {
                  cVar5 = *(char *)(iVar13 + 0x11);
                }
                else {
                  cVar5 = pcVar26[5];
                }
                if (cVar5 == '}') {
                  if (pcVar26 == (char *)0x0) {
                    cVar5 = *(char *)(iVar13 + 0x12);
                  }
                  else {
                    cVar5 = pcVar26[6];
                  }
                  if (cVar5 == '\x10') {
                    puVar29 = (uint *)0x2c;
                    puVar16 = FUN_1003ad64(0x2c);
                    local_70 = puVar16;
                    if (puVar16 == (uint *)0x0) {
                      puVar16 = (uint *)0x0;
                    }
                    else {
                      puVar20 = *(uint **)(iVar13 + 0x1c);
                      uVar22 = *(uint *)(iVar13 + 0x24);
                      uVar21 = *(uint *)(iVar13 + 0x20);
                      if (puVar20 == (uint *)0x0) {
                        puVar20 = (uint *)(iVar13 + 0xc);
                      }
                      _Size = *(uint **)(iVar13 + 8);
                      uVar19 = *(uint *)(iVar13 + 4);
                      puVar16[7] = 0;
                      *puVar16 = (uint)&PTR_FUN_1004333c;
                      puVar16[1] = uVar19;
                      puVar16[2] = (uint)_Size;
                      puVar16[8] = uVar21;
                      puVar16[9] = uVar22;
                      if (_Size < (uint *)0x11) {
                        puVar17 = puVar16 + 3;
                      }
                      else {
                        puVar17 = _malloc((size_t)_Size);
                        puVar16[7] = (uint)puVar17;
                        puVar29 = _Size;
                        if (puVar17 == (uint *)0x0) {
                          local_ec[3] = 0xffffff94;
                    /* WARNING: Subroutine does not return */
                          __CxxThrowException_8(local_ec + 3,&DAT_10045788);
                        }
                      }
                      uVar22 = puVar16[2];
                      for (uVar21 = uVar22 >> 2; uVar21 != 0; uVar21 = uVar21 - 1) {
                        *puVar17 = *puVar20;
                        puVar20 = puVar20 + 1;
                        puVar17 = puVar17 + 1;
                      }
                      for (uVar22 = uVar22 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
                        *(char *)puVar17 = (char)*puVar20;
                        puVar20 = (uint *)((int)puVar20 + 1);
                        puVar17 = (uint *)((int)puVar17 + 1);
                      }
                      *(undefined1 *)(puVar16 + 10) = 0;
                    }
                    uVar22 = local_5c;
                    if (local_58 == local_5c) {
                      puVar29 = (uint *)(local_5c * 4 + 400);
                      uVar15 = 0x10001e15;
                      pbVar18 = FUN_10031703(local_60,puVar29);
                      if (pbVar18 == (byte *)0x0) {
                        local_100 = 999;
                    /* WARNING: Subroutine does not return */
                        __CxxThrowException_8(&local_100,&DAT_10045788);
                      }
                      local_5c = uVar22 + 100;
                      local_60 = pbVar18;
                    }
                    *(uint **)(local_60 + local_58 * 4) = puVar16;
                    local_58 = local_58 + 1;
                    if (puVar29 == (uint *)0x0) {
                      iVar30 = *(int *)(iVar13 + 0x1c);
                      if (iVar30 == 0) {
                        bVar6 = *(byte *)(iVar13 + 0x13);
                      }
                      else {
                        bVar6 = *(byte *)(iVar30 + 7);
                      }
                      if ((bVar6 & 0x80) == 0) {
                        if (iVar30 == 0) {
                          cVar5 = *(char *)(iVar13 + 0xd);
                        }
                        else {
                          cVar5 = *(char *)(iVar30 + 1);
                        }
                        if (cVar5 == '\n') {
                          if (iVar30 == 0) goto LAB_10001e89;
                          uVar22 = (uint)*(byte *)(iVar30 + 7);
                          goto LAB_10001e8c;
                        }
LAB_10001ee4:
                        if (iVar30 == 0) {
                          bVar6 = *(byte *)(iVar13 + 0x13);
                        }
                        else {
                          bVar6 = *(byte *)(iVar30 + 7);
                        }
                        if (iVar30 == 0) {
                          bVar1 = *(byte *)(iVar13 + 0x14);
                        }
                        else {
                          bVar1 = *(byte *)(iVar30 + 8);
                        }
                        uVar22 = (bVar6 & 0x7f) << 0xe | (bVar1 & 0x7f) << 7;
                        if (iVar30 == 0) {
                          uVar21 = (uint)*(byte *)(iVar13 + 0x15);
                        }
                        else {
                          uVar21 = (uint)*(byte *)(iVar30 + 9);
                        }
                      }
                      else {
                        if (iVar30 == 0) {
                          bVar6 = *(byte *)(iVar13 + 0x15);
                        }
                        else {
                          bVar6 = *(byte *)(iVar30 + 9);
                        }
                        if ((bVar6 & 0x80) == 0) goto LAB_10001ee4;
                        if (iVar30 == 0) {
LAB_10001e89:
                          uVar22 = (uint)*(byte *)(iVar13 + 0x13);
                        }
                        else {
                          uVar22 = (uint)*(byte *)(iVar30 + 7);
                        }
LAB_10001e8c:
                        if (iVar30 == 0) {
                          bVar6 = *(byte *)(iVar13 + 0x14);
                        }
                        else {
                          bVar6 = *(byte *)(iVar30 + 8);
                        }
                        if (iVar30 == 0) {
                          bVar1 = *(byte *)(iVar13 + 0x15);
                        }
                        else {
                          bVar1 = *(byte *)(iVar30 + 9);
                        }
                        uVar22 = (uVar22 & 0x7f) << 0x15 | (bVar6 & 0x7f) << 0xe |
                                 (bVar1 & 0x7f) << 7;
                        if (iVar30 == 0) {
                          uVar21 = (uint)*(byte *)(iVar13 + 0x16);
                        }
                        else {
                          uVar21 = (uint)*(byte *)(iVar30 + 10);
                        }
                      }
                      puVar29 = (uint *)(uVar22 | uVar21 & 0x7f);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (puVar29 == (uint *)0x0) {
      puVar29 = (uint *)0x7a120;
    }
    local_70 = puVar29;
    local_6c = puVar29;
    for (iVar9 = 0; uVar22 = local_58, pbVar18 = local_60, iVar9 < local_98; iVar9 = iVar9 + 1) {
      local_220[0x31] = 0;
      uStack_12c = 0;
      iVar13 = *(int *)(local_a0 + iVar9 * 4);
      local_220[0x30] = 0x1e0;
      local_50 = *(uint *)(iVar13 + 4);
      local_220[0x32] = (local_50 - uVar8) * (int)local_38;
      uStack_154 = 0;
      local_4c = (byte *)(((float)local_220[0x32] * 480.0) / (float)puVar29 + (float)local_54);
      local_130 = puVar29;
      if (*(uint *)(iVar13 + 0x20) == local_50) {
        uStack_b8 = 0;
        local_bc = (*(uint *)(iVar13 + 0x20) - uVar8) * (int)local_38;
        lVar25 = __ftol();
        puVar16 = (uint *)lVar25;
        lVar25 = __ftol();
        puVar20 = (uint *)lVar25;
      }
      else {
        local_ac = puVar29;
        uVar22 = uVar8;
        for (iVar30 = 0; iVar30 < (int)local_58; iVar30 = iVar30 + 1) {
          iVar2 = *(int *)(local_60 + iVar30 * 4);
          uVar21 = *(uint *)(iVar2 + 4);
          puVar16 = local_ac;
          if ((local_50 < uVar21) && (uVar21 < *(uint *)(iVar13 + 0x20))) {
            uStack_144 = 0;
            local_148 = (uVar21 - uVar22) * (int)local_38;
            local_128 = 0x1e0;
            uStack_124 = 0;
            uStack_14c = 0;
            iVar3 = *(int *)(iVar2 + 0x1c);
            if (iVar3 == 0) {
              bVar6 = *(byte *)(iVar2 + 0x13);
            }
            else {
              bVar6 = *(byte *)(iVar3 + 7);
            }
            if ((bVar6 & 0x80) == 0) {
              if (iVar3 == 0) {
                cVar5 = *(char *)(iVar2 + 0xd);
              }
              else {
                cVar5 = *(char *)(iVar3 + 1);
              }
              if (cVar5 == '\n') {
                if (iVar3 == 0) goto LAB_1000209f;
                uVar22 = (uint)*(byte *)(iVar3 + 7);
                goto LAB_100020a2;
              }
LAB_100020f8:
              if (iVar3 == 0) {
                bVar6 = *(byte *)(iVar2 + 0x13);
              }
              else {
                bVar6 = *(byte *)(iVar3 + 7);
              }
              if (iVar3 == 0) {
                bVar1 = *(byte *)(iVar2 + 0x14);
              }
              else {
                bVar1 = *(byte *)(iVar3 + 8);
              }
              uVar22 = (bVar6 & 0x7f) << 0xe | (bVar1 & 0x7f) << 7;
              if (iVar3 == 0) {
                uVar19 = (uint)*(byte *)(iVar2 + 0x15);
              }
              else {
                uVar19 = (uint)*(byte *)(iVar3 + 9);
              }
            }
            else {
              if (iVar3 == 0) {
                bVar6 = *(byte *)(iVar2 + 0x15);
              }
              else {
                bVar6 = *(byte *)(iVar3 + 9);
              }
              if ((bVar6 & 0x80) == 0) goto LAB_100020f8;
              if (iVar3 == 0) {
LAB_1000209f:
                uVar22 = (uint)*(byte *)(iVar2 + 0x13);
              }
              else {
                uVar22 = (uint)*(byte *)(iVar3 + 7);
              }
LAB_100020a2:
              if (iVar3 == 0) {
                bVar6 = *(byte *)(iVar2 + 0x14);
              }
              else {
                bVar6 = *(byte *)(iVar3 + 8);
              }
              if (iVar3 == 0) {
                bVar1 = *(byte *)(iVar2 + 0x15);
              }
              else {
                bVar1 = *(byte *)(iVar3 + 9);
              }
              uVar22 = (uVar22 & 0x7f) << 0x15 | (bVar6 & 0x7f) << 0xe | (bVar1 & 0x7f) << 7;
              if (iVar3 == 0) {
                uVar19 = (uint)*(byte *)(iVar2 + 0x16);
              }
              else {
                uVar19 = (uint)*(byte *)(iVar3 + 10);
              }
            }
            puVar16 = (uint *)(uVar22 | uVar19 & 0x7f);
            uVar22 = uVar21;
            local_150 = local_ac;
          }
          local_ac = puVar16;
        }
        local_120 = 0x1e0;
        local_118 = (*(int *)(iVar13 + 0x20) - uVar22) * (int)local_38;
        uStack_114 = 0;
        uStack_11c = 0;
        iStack_a8 = 0;
        lVar25 = __ftol();
        puVar16 = (uint *)lVar25;
        lVar25 = __ftol();
        puVar20 = (uint *)lVar25;
        if (puVar20 == puVar16) {
          puVar20 = (uint *)((int)puVar20 + 1);
        }
      }
      if (*(int *)(iVar13 + 0x24) == 0) {
        pcVar26 = *(char **)(iVar13 + 0x1c);
        if (pcVar26 == (char *)0x0) {
          cVar5 = *(char *)(iVar13 + 0xc);
        }
        else {
          cVar5 = *pcVar26;
        }
        if (cVar5 == -0x10) {
          if (pcVar26 == (char *)0x0) {
            cVar5 = *(char *)(iVar13 + 0xe);
          }
          else {
            cVar5 = pcVar26[2];
          }
          if (cVar5 == 'C') {
            if (pcVar26 == (char *)0x0) {
              cVar5 = *(char *)(iVar13 + 0xf);
            }
            else {
              cVar5 = pcVar26[3];
            }
            if (cVar5 == 'y') {
              if (pcVar26 == (char *)0x0) {
                cVar5 = *(char *)(iVar13 + 0x10);
              }
              else {
                cVar5 = pcVar26[4];
              }
              if (cVar5 == '\x06') {
                if (pcVar26 == (char *)0x0) {
                  cVar5 = *(char *)(iVar13 + 0x11);
                }
                else {
                  cVar5 = pcVar26[5];
                }
                if (cVar5 == '}') {
                  if (pcVar26 == (char *)0x0) {
                    cVar5 = *(char *)(iVar13 + 0x12);
                  }
                  else {
                    cVar5 = pcVar26[6];
                  }
                  if (cVar5 == '\x10') {
                    if (pcVar26 == (char *)0x0) {
                      bVar6 = *(byte *)(iVar13 + 0x13);
                    }
                    else {
                      bVar6 = pcVar26[7];
                    }
                    if ((bVar6 & 0x80) == 0) {
                      if (pcVar26 == (char *)0x0) {
                        cVar5 = *(char *)(iVar13 + 0xd);
                      }
                      else {
                        cVar5 = pcVar26[1];
                      }
                      if (cVar5 == '\n') {
                        if (pcVar26 == (char *)0x0) goto LAB_10002305;
                        uVar22 = (uint)(byte)pcVar26[7];
                        goto LAB_10002308;
                      }
LAB_10002360:
                      if (pcVar26 == (char *)0x0) {
                        bVar6 = *(byte *)(iVar13 + 0x13);
                      }
                      else {
                        bVar6 = pcVar26[7];
                      }
                      if (pcVar26 == (char *)0x0) {
                        bVar1 = *(byte *)(iVar13 + 0x14);
                      }
                      else {
                        bVar1 = pcVar26[8];
                      }
                      uVar22 = (bVar6 & 0x7f) << 0xe | (bVar1 & 0x7f) << 7;
                      if (pcVar26 == (char *)0x0) {
                        uVar21 = (uint)*(byte *)(iVar13 + 0x15);
                      }
                      else {
                        uVar21 = (uint)(byte)pcVar26[9];
                      }
                    }
                    else {
                      if (pcVar26 == (char *)0x0) {
                        bVar6 = *(byte *)(iVar13 + 0x15);
                      }
                      else {
                        bVar6 = pcVar26[9];
                      }
                      if ((bVar6 & 0x80) == 0) goto LAB_10002360;
                      if (pcVar26 == (char *)0x0) {
LAB_10002305:
                        uVar22 = (uint)*(byte *)(iVar13 + 0x13);
                      }
                      else {
                        uVar22 = (uint)(byte)pcVar26[7];
                      }
LAB_10002308:
                      if (pcVar26 == (char *)0x0) {
                        bVar6 = *(byte *)(iVar13 + 0x14);
                      }
                      else {
                        bVar6 = pcVar26[8];
                      }
                      if (pcVar26 == (char *)0x0) {
                        bVar1 = *(byte *)(iVar13 + 0x15);
                      }
                      else {
                        bVar1 = pcVar26[9];
                      }
                      uVar22 = (uVar22 & 0x7f) << 0x15 | (bVar6 & 0x7f) << 0xe | (bVar1 & 0x7f) << 7
                      ;
                      if (pcVar26 == (char *)0x0) {
                        uVar21 = (uint)*(byte *)(iVar13 + 0x16);
                      }
                      else {
                        uVar21 = (uint)(byte)pcVar26[10];
                      }
                    }
                    puVar29 = (uint *)(uVar22 | uVar21 & 0x7f);
                    if (puVar29 != local_6c) {
                      uStack_78 = 0;
                      local_54 = (char *)(float)puVar16;
                      local_7c = puVar16;
                      local_6c = puVar29;
                      uVar8 = local_50;
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(uint **)(iVar13 + 0x20) = puVar20;
      *(uint **)(iVar13 + 4) = puVar16;
    }
    for (iVar9 = 0; iVar9 < (int)uVar22; iVar9 = iVar9 + 1) {
      puVar32 = *(undefined4 **)(pbVar18 + iVar9 * 4);
      if (puVar32 != (undefined4 *)0x0) {
        (**(code **)*puVar32)();
      }
    }
    FUN_10031b6c(pbVar18);
  }
  iVar9 = 0;
  local_220[0x20] = 0xff;
  local_220[0x21] = 0xff;
  local_220[0x22] = 0xff;
  local_220[0x23] = 0xff;
  local_220[0x24] = 0xff;
  local_220[0x25] = 0xff;
  local_220[0x26] = 0xff;
  local_220[0x27] = 0xff;
  local_220[0x28] = 0xff;
  local_220[0x29] = 0xff;
  local_220[0x2a] = 0xff;
  local_220[0x2b] = 0xff;
  local_220[0x2c] = 0xff;
  local_220[0x2d] = 0xff;
  local_220[0x2e] = 0xff;
  local_220[0x2f] = 0xff;
  local_220[0x10] = 0xff;
  local_220[0x11] = 0xff;
  local_220[0x12] = 0xff;
  local_220[0x13] = 0xff;
  local_220[0x14] = 0xff;
  local_220[0x15] = 0xff;
  local_220[0x16] = 0xff;
  local_220[0x17] = 0xff;
  local_220[0x18] = 0xff;
  local_220[0x19] = 0xff;
  local_220[0x1a] = 0xff;
  local_220[0x1b] = 0xff;
  local_220[0x1c] = 0xff;
  local_220[0x1d] = 0xff;
  local_220[0x1e] = 0xff;
  local_220[0x1f] = 0xff;
  local_220[0] = 0xff;
  local_220[1] = 0xff;
  local_220[2] = 0xff;
  local_220[3] = 0xff;
  local_220[4] = 0xff;
  local_220[5] = 0xff;
  local_220[6] = 0xff;
  local_220[7] = 0xff;
  local_220[8] = 0xff;
  local_220[9] = 0xff;
  local_220[10] = 0xff;
  local_220[0xb] = 0xff;
  local_220[0xc] = 0xff;
  local_220[0xd] = 0xff;
  local_220[0xe] = 0xff;
  local_220[0xf] = 0xff;
  do {
    cVar5 = (char)((uint)uVar15 >> 0x18);
    if (local_98 <= iVar9) {
      uVar23 = 0;
      local_1a9c = uVar28 * 1000;
      if (cVar5 != '\0') {
        uStack_78 = 0;
        local_7c = local_70;
        uVar23 = 0x1e0;
        local_70 = (uint *)(float)local_70;
        lVar25 = __ftol();
        local_1a9c = (int)lVar25;
      }
      local_d0 = (undefined4 *)0x0;
      local_d4 = &PTR_FUN_1004336c;
      local_cc = 0;
      local_c8 = 0;
      local_c4 = '\x01';
      FUN_10015a80(local_1390,uVar23);
      local_14a0 = uVar28;
      FUN_10015cb0(local_2264,local_1390);
      local_1a94 = 0x1e0;
      if (cVar5 != '\0') {
        local_13c0 = 1;
      }
      local_38 = &local_d4;
      local_1494 = 0;
      iVar9 = FUN_1000e730();
      if ((iVar9 != 0) && (local_cc <= param_1[4])) {
        param_1[4] = local_cc;
        puVar32 = local_d0;
        puVar24 = (undefined4 *)param_1[3];
        for (uVar8 = local_cc >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar24 = *puVar32;
          puVar32 = puVar32 + 1;
          puVar24 = puVar24 + 1;
        }
        for (uVar8 = local_cc & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar24 = *(undefined1 *)puVar32;
          puVar32 = (undefined4 *)((int)puVar32 + 1);
          puVar24 = (undefined4 *)((int)puVar24 + 1);
        }
      }
      local_d4 = &PTR_FUN_1004336c;
      if ((local_d0 != (undefined4 *)0x0) && (local_c4 != '\0')) {
        FUN_10031b6c((undefined *)local_d0);
      }
      local_a4 = &PTR_LAB_10043344;
      FUN_10031b6c(local_a0);
      local_230[0] = &PTR_FUN_10043348;
      FUN_10007160(local_230);
      local_110[0] = &PTR_FUN_10043348;
      FUN_10007160(local_110);
      FUN_10015720(local_1390);
      local_140[0] = &PTR_FUN_10043348;
      FUN_10007160(local_140);
      local_bf8 = &PTR_FUN_1004332c;
      FUN_1003b023(&local_5a0);
      local_4c = (byte *)0x100028b7;
      FUN_1003160f(local_5ac,4,3,FUN_1003b023);
      FUN_1003b023(local_5c8);
      FUN_1003b023(&local_5cc);
      FUN_1003b023(&local_5d0);
      FUN_1003b023(&local_5d4);
      FUN_1003b023(local_5dc);
      FUN_1003b023(&local_5e0);
      FUN_1003b023(&local_5e4);
      FUN_1003b023(&local_5e8);
      local_bf4 = &PTR_LAB_10043328;
      FUN_10007f40(&local_28c4);
      FUN_10025530(local_4cd4);
      local_94 = &PTR_FUN_1004336c;
      if ((local_90 != (undefined **)0x0) && (local_84 != '\0')) {
        FUN_10031b6c((undefined *)local_90);
      }
      FUN_1003b023((int *)&local_74);
      uVar15 = FUN_100029ad();
      return uVar15;
    }
    iVar13 = *(int *)(local_a0 + iVar9 * 4);
    pbVar18 = *(byte **)(iVar13 + 0x1c);
    if (pbVar18 == (byte *)0x0) {
      bVar6 = *(byte *)(iVar13 + 0xc);
    }
    else {
      bVar6 = *pbVar18;
    }
    if ((bVar6 & 0xf0) == 0xb0) {
      if (pbVar18 == (byte *)0x0) {
        pbVar18 = (byte *)(iVar13 + 0xc);
      }
      if (pbVar18[1] == 0) {
        local_220[(*pbVar18 & 0xf) + 0x20] = (uint)pbVar18[2];
      }
      else if (pbVar18[1] == 0x20) {
        local_220[(*pbVar18 & 0xf) + 0x10] = (uint)pbVar18[2];
      }
    }
    else {
      if (pbVar18 == (byte *)0x0) {
        bVar6 = *(byte *)(iVar13 + 0xc);
      }
      else {
        bVar6 = *pbVar18;
      }
      if ((bVar6 & 0xf0) == 0xc0) {
        if (pbVar18 == (byte *)0x0) {
          pbVar18 = (byte *)(iVar13 + 0xc);
        }
        uVar8 = *pbVar18 & 0xf;
        iVar30 = FUN_10017b40();
        if (((iVar30 != 0) && (local_220[uVar8 + 0x20] == 0x7c)) && (local_220[uVar8 + 0x10] != 10))
        {
          local_ec[0] = FUN_10017ab0(local_59c,(uint)pbVar18[1]);
          if (local_ec[0] == -1) {
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8(local_ec,&DAT_10045788);
          }
          pbVar18[1] = (byte)local_ec[0];
        }
        local_220[uVar8] = (uint)pbVar18[1];
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          bVar6 = *(byte *)(iVar13 + 0xc);
        }
        else {
          bVar6 = *pbVar18;
        }
        if ((bVar6 & 0xf0) != 0x80) {
          if (pbVar18 == (byte *)0x0) {
            bVar6 = *(byte *)(iVar13 + 0xc);
          }
          else {
            bVar6 = *pbVar18;
          }
          if ((bVar6 & 0xf0) != 0x90) goto LAB_100026a0;
        }
        iVar30 = FUN_10006990();
        if (iVar30 != 0) {
          pbVar18 = *(byte **)(iVar13 + 0x1c);
          if (pbVar18 == (byte *)0x0) {
            pbVar18 = (byte *)(iVar13 + 0xc);
          }
          if ((local_220[(*pbVar18 & 0xf) + 0x20] == 0x7d) && (local_220[*pbVar18 & 0xf] != 10)) {
            local_f0 = FUN_10006890(local_3c