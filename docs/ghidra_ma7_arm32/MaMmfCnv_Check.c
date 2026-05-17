/* MaMmfCnv_Check @ 000b5a0c 254B */


/* YAMAHA::MaMmfCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

int YAMAHA::MaMmfCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
       (puVar3 = *(undefined4 **)(param_1 + 4), puVar3 == (undefined4 *)0x0)) ||
      (param_2 == (_MACNV_CHECK_PARAM *)0x0)) || (*(int *)(param_2 + 8) == 0)) {
    iVar1 = -2;
  }
  else {
    *(undefined1 *)(puVar3 + 2) = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[6] = 0;
    *(undefined1 *)((int)puVar3 + 0xc51) = 100;
    *(undefined1 *)(puVar3 + 10) = 0;
    puVar3[0x307] = 0;
    puVar3[0x308] = 0;
    puVar3[0x309] = 0;
    puVar3[5] = 0xffff0000;
    puVar3[0x30a] = 0;
    puVar3[0x30b] = 0;
    puVar3[0x30d] = 0;
    puVar3[0x30e] = 0;
    puVar3[0x30f] = 0;
    puVar3[0x310] = 0;
    puVar3[0x311] = 0;
    puVar3[0x312] = 0;
    puVar3[0x30c] = 1;
    *(undefined1 *)((int)puVar3 + 0x1c75) = 0xff;
    *(undefined1 *)((int)puVar3 + 0x1c76) = 0x10;
    *(undefined1 *)((int)puVar3 + 0x1c6b) = 0x7f;
    *(undefined1 *)((int)puVar3 + 0x1c6e) = 0;
    puVar3[0x71c] = 0;
    *(undefined1 *)(puVar3 + 0x71d) = 0;
    *(undefined1 *)((int)puVar3 + 0x1c77) = 0;
    memset(puVar3 + 0x71e,0,0x20);
    puVar3[0x727] = 0;
    puVar3[0x726] = 0;
    puVar3[0x72a] = 0;
    puVar3[0x729] = 0;
    puVar3[0x715] = 0;
    memset(puVar3 + 0x315,0,0x1000);
    *puVar3 = 0;
    puVar3[1] = 0;
    uVar2 = *(uint *)param_2;
    iVar1 = FUN_000af94c(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),uVar2 & 3,
                         puVar3 + 3);
    if ((-1 < iVar1) && (((uVar2 & 3) == 1 || (iVar1 = FUN_000ae9e0(puVar3), -1 < iVar1)))) {
      *puVar3 = *(undefined4 *)(param_2 + 8);
      puVar3[1] = *(undefined4 *)(param_2 + 0xc);
      return 0;
    }
  }
  return iVar1;
}

