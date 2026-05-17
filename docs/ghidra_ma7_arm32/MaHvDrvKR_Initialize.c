/* MaHvDrvKR_Initialize @ 000e7434 522B */


/* YAMAHA::MaHvDrvKR_Initialize(unsigned int) */

undefined4 YAMAHA::MaHvDrvKR_Initialize(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar2 = DAT_000e7648;
  iVar1 = DAT_000e7644;
  iVar3 = DAT_000e7640;
  piVar5 = (int *)(DAT_000e7640 + 0xe7442);
  if (*piVar5 == 0) {
    if (param_1 == 0x14) {
      *(undefined4 *)(DAT_000e7640 + 0xe744a) = 0x14;
      *(undefined2 *)(iVar3 + 0xe7f8a) = 0x14;
      *(int *)(iVar3 + 0xe7f86) = iVar1 + 0xe792c;
      *(undefined4 *)(iVar3 + 0xe745a) = 1;
      *(undefined1 *)(iVar3 + 0xe7e8a) = 1;
      *(undefined1 *)(iVar3 + 0xe7e8b) = 1;
      *(undefined1 *)(iVar3 + 0xe80f9) = 1;
      *(undefined2 *)(iVar3 + 0xe7f7a) = 200;
      *(undefined2 *)(iVar3 + 0xe7f82) = 0x4b0;
      *(undefined4 *)(iVar3 + 0xe7f8e) = 8;
      *(undefined4 *)(iVar3 + 0xe744e) = 0;
      *(undefined4 *)(iVar3 + 0xe7452) = 0;
      *(undefined4 *)(iVar3 + 0xe7456) = 0;
      *(undefined4 *)(iVar3 + 0xe745e) = 0;
      *(undefined4 *)(iVar3 + 0xe7462) = 0;
      *(undefined4 *)(iVar3 + 0xe7466) = 0;
      *(undefined2 *)(iVar3 + 0xe746a) = 0;
      *(undefined1 *)(iVar3 + 0xe746c) = 0;
      *(undefined1 *)(iVar3 + 0xe746d) = 0;
      *(undefined1 *)(iVar3 + 0xe7876) = 0;
      *(undefined1 *)(iVar3 + 0xe7c82) = 0;
      *(undefined4 *)(iVar3 + 0xe7e8e) = 0;
      *(undefined1 *)(iVar3 + 0xe7e92) = 0;
      *(undefined1 *)(iVar3 + 0xe7eae) = 0;
      *(undefined1 *)(iVar3 + 0xe7f33) = 0;
      *(undefined1 *)(iVar3 + 0xe7f34) = 0;
      *(undefined1 *)(iVar3 + 0xe7f32) = 0;
      *(undefined1 *)(iVar3 + 0xe7f76) = 0;
      *(undefined4 *)(iVar3 + 0xe7f7e) = 0;
      *(undefined2 *)(iVar3 + 0xe80f6) = 0;
      *(undefined1 *)(iVar3 + 0xe80f8) = 0;
      *(undefined2 *)(iVar3 + 0xe7f96) = 0xeb9;
      *piVar5 = 1;
      iVar1 = DAT_000e764c;
      *(int *)(iVar3 + 0xe802a) = iVar2 + 0xe7d8c;
      *(undefined2 *)(iVar3 + 0xe7f98) = 0x11;
      *(undefined4 *)(iVar3 + 0xe7f9a) = 0x6d;
      *(undefined4 *)(iVar3 + 0xe7faa) = 8;
      *(undefined2 *)(iVar3 + 0xe7fb4) = 0x11;
      *(undefined4 *)(iVar3 + 0xe7fb6) = 0x6d;
      *(undefined2 *)(iVar3 + 0xe7fa6) = 0x14;
      *(int *)(iVar3 + 0xe7fa2) = iVar1 + 0xe7b24;
      *(int *)(iVar3 + 0xe8022) = iVar2 + 0xe7d30;
      *(int *)(iVar3 + 0xe8026) = iVar2 + 0xe7d5e;
      *(int *)(iVar3 + 0xe802e) = iVar2 + 0xe7dba;
      *(int *)(iVar3 + 0xe8032) = iVar2 + 0xe7de8;
      *(undefined4 *)(iVar3 + 0xe7fbe) = 0;
      *(undefined2 *)(iVar3 + 0xe7fd0) = 0;
      *(undefined4 *)(iVar3 + 0xe7fc6) = 0;
      *(undefined4 *)(iVar3 + 0xe7fd2) = 0;
      *(undefined4 *)(iVar3 + 0xe7fd6) = 0;
      *(undefined4 *)(iVar3 + 0xe7fca) = 0;
      *(undefined2 *)(iVar3 + 0xe7fc2) = 0;
      *(undefined2 *)(iVar3 + 0xe7fce) = 0;
      *(undefined4 *)(iVar3 + 0xe7fea) = 0;
      *(undefined2 *)(iVar3 + 0xe7fe4) = 0;
      *(undefined2 *)(iVar3 + 0xe7fe2) = 0;
      *(undefined2 *)(iVar3 + 0xe7fe0) = 0;
      *(undefined2 *)(iVar3 + 0xe7fde) = 0;
      *(undefined2 *)(iVar3 + 0xe7fe6) = 0;
      *(undefined4 *)(iVar3 + 0xe7446) = 0;
      *(int *)(iVar3 + 0xe8036) = iVar2 + 0xe7e16;
      *(char **)(iVar3 + 0xe7f92) = "ResInfoEP15_MACNV_SEQ_INFO";
      *(char **)(iVar3 + 0xe7fae) = "YAMAHA19MaJtsCnv_GetResInfoEP15_MACNV_SEQ_INFO";
      *(undefined4 *)(iVar3 + 0xe7f9e) = 0x13c9;
      *(undefined4 *)(iVar3 + 0xe7fba) = 0x13c9;
      *(undefined2 *)(iVar3 + 0xe7fb2) = 0x122e;
      *(int *)(iVar3 + 0xe7fda) = iVar3 + 0xe7f86;
      *(int *)(iVar3 + 0xe803a) = iVar2 + 0xe7e44;
      *(int *)(iVar3 + 0xe803e) = iVar2 + 0xe7e72;
      *(int *)(iVar3 + 0xe8056) = iVar2 + 0xe7f86;
      *(int *)(iVar3 + 0xe805e) = iVar2 + 0xe7fe2;
      *(int *)(iVar3 + 0xe8042) = iVar2 + 0xe7ea0;
      *(int *)(iVar3 + 0xe8046) = iVar2 + 0xe7ece;
      *(int *)(iVar3 + 0xe804a) = iVar2 + 0xe7efc;
      *(int *)(iVar3 + 0xe804e) = iVar2 + 0xe7f2a;
      *(int *)(iVar3 + 0xe8052) = iVar2 + 0xe7f58;
      *(int *)(iVar3 + 0xe805a) = iVar2 + 0xe7fb4;
      memset((void *)(iVar3 + 0xe8062),0,0x40);
      *(undefined1 *)(iVar3 + 0xe80a2) = 0;
      iVar3 = FUN_000e6b64(0);
      if (iVar3 < 0) {
        *piVar5 = 0;
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0xfffffffe;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

