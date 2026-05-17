/* MaMmfCnv_Check @ 001ea870 356B */


/* YAMAHA::MaMmfCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

undefined8 YAMAHA::MaMmfCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
       (puVar5 = *(undefined8 **)(param_1 + 8), param_2 == (_MACNV_CHECK_PARAM *)0x0)) ||
      (puVar5 == (undefined8 *)0x0)) || (*(long *)(param_2 + 8) == 0)) {
    uVar3 = 0xfffffffe;
  }
  else {
    *(undefined1 *)((long)puVar5 + 0xc) = 0;
    puVar5[2] = 0;
    *(undefined4 *)(puVar5 + 3) = 0;
    *(undefined4 *)(puVar5 + 4) = 0;
    *(undefined1 *)(puVar5 + 6) = 0;
    *(undefined4 *)((long)puVar5 + 0x1c) = 0xffff0000;
    puVar5[0x1bb] = 0;
    puVar5[0x1bc] = 0;
    puVar5[0x1bd] = 0;
    puVar5[0x1be] = 0;
    *(undefined4 *)(puVar5 + 0x1bf) = 0;
    *(undefined4 *)((long)puVar5 + 0xdfc) = 1;
    *(undefined4 *)(puVar5 + 0x1c0) = 0;
    *(undefined4 *)((long)puVar5 + 0xe04) = 0;
    *(undefined4 *)(puVar5 + 0x1c1) = 0;
    *(undefined4 *)((long)puVar5 + 0xe0c) = 0;
    *(undefined4 *)(puVar5 + 0x1c2) = 0;
    *(undefined4 *)((long)puVar5 + 0xe14) = 0;
    *(undefined1 *)((long)puVar5 + 0xe1d) = 100;
    *(undefined1 *)((long)puVar5 + 0x2e4e) = 0;
    *(undefined4 *)(puVar5 + 0x5ca) = 0;
    *(undefined1 *)((long)puVar5 + 0x2e54) = 0;
    *(undefined1 *)((long)puVar5 + 0x2e55) = 0xff;
    *(undefined1 *)((long)puVar5 + 0x2e56) = 0x10;
    *(undefined1 *)((long)puVar5 + 0x2e57) = 0;
    *(undefined1 *)((long)puVar5 + 0x2e4b) = 0x7f;
    puVar5[0x5cb] = 0;
    puVar5[0x5cc] = 0;
    puVar5[0x5cd] = 0;
    puVar5[0x5ce] = 0;
    puVar5[0x5d0] = 0;
    *(undefined4 *)(puVar5 + 0x5cf) = 0;
    puVar5[0x5d3] = 0;
    *(undefined4 *)(puVar5 + 0x5d2) = 0;
    *(undefined4 *)(puVar5 + 0x5c4) = 0;
    memset(puVar5 + 0x1c4,0,0x2000);
    uVar1 = *(uint *)param_2;
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    *puVar5 = 0;
    *(undefined4 *)(puVar5 + 1) = 0;
    uVar3 = FUN_001df7f0(uVar3,uVar2,uVar1 & 3,puVar5 + 2);
    if ((-1 < (int)uVar3) && (((uVar1 & 3) == 1 || (uVar3 = FUN_001e151c(puVar5), -1 < (int)uVar3)))
       ) {
      uVar4 = *(undefined8 *)(param_2 + 8);
      uVar3 = 0;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 0x10);
      *puVar5 = uVar4;
    }
  }
  return uVar3;
}

