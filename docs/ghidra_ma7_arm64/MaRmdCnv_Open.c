/* MaRmdCnv_Open @ 001f9f00 484B */


/* YAMAHA::MaRmdCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

undefined8 YAMAHA::MaRmdCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  uVar1 = DAT_001fa0e8;
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (puVar5 = *(undefined4 **)(param_1 + 8), puVar5 != (undefined4 *)0x0)) {
    if ((*(uint *)param_2 & 1) != 0) {
      puVar5[7] = 0;
      uVar3 = DAT_001fa0f8;
      uVar2 = DAT_001fa0f0;
      puVar5[1] = 0x7f;
      puVar5[3] = 0x7f;
      puVar5[4] = 0x7900;
      puVar5[5] = 0x7f7f;
      puVar5[2] = 100;
      puVar5[6] = 0x2000;
      *(undefined8 *)(puVar5 + 8) = uVar1;
      *(undefined8 *)(puVar5 + 10) = uVar2;
      *(undefined8 *)(puVar5 + 0xc) = uVar3;
      *(undefined8 *)(puVar5 + 0xe) = uVar1;
      *(undefined8 *)(puVar5 + 0x10) = uVar2;
      *(undefined8 *)(puVar5 + 0x12) = uVar3;
      *(undefined8 *)(puVar5 + 0x14) = uVar1;
      *(undefined8 *)(puVar5 + 0x16) = uVar2;
      *(undefined8 *)(puVar5 + 0x18) = uVar3;
      *(undefined8 *)(puVar5 + 0x1a) = uVar1;
      *(undefined8 *)(puVar5 + 0x1c) = uVar2;
      *(undefined8 *)(puVar5 + 0x1e) = uVar3;
      *(undefined8 *)(puVar5 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + 0x22) = uVar2;
      *(undefined8 *)(puVar5 + 0x24) = uVar3;
      *(undefined8 *)(puVar5 + 0x26) = uVar1;
      *(undefined8 *)(puVar5 + 0x28) = uVar2;
      *(undefined8 *)(puVar5 + 0x2a) = uVar3;
      *(undefined8 *)(puVar5 + 0x2c) = uVar1;
      *(undefined8 *)(puVar5 + 0x2e) = uVar2;
      *(undefined8 *)(puVar5 + 0x30) = uVar3;
      *(undefined8 *)(puVar5 + 0x32) = uVar1;
      *(undefined8 *)(puVar5 + 0x34) = uVar2;
      *(undefined8 *)(puVar5 + 0x36) = uVar3;
      uVar4 = DAT_001fa100;
      *(undefined8 *)(puVar5 + 0x38) = uVar1;
      *(undefined8 *)(puVar5 + 0x3a) = uVar4;
      *(undefined8 *)(puVar5 + 0x3c) = uVar3;
      *(undefined8 *)(puVar5 + 0x3e) = uVar1;
      *(undefined8 *)(puVar5 + 0x40) = uVar2;
      *(undefined8 *)(puVar5 + 0x42) = uVar3;
      *(undefined8 *)(puVar5 + 0x44) = uVar1;
      *(undefined8 *)(puVar5 + 0x46) = uVar2;
      *(undefined8 *)(puVar5 + 0x48) = uVar3;
      *(undefined8 *)(puVar5 + 0x4a) = uVar1;
      *(undefined8 *)(puVar5 + 0x4c) = uVar2;
      *(undefined8 *)(puVar5 + 0x4e) = uVar3;
      *(undefined8 *)(puVar5 + 0x50) = uVar1;
      *(undefined8 *)(puVar5 + 0x52) = uVar2;
      *(undefined8 *)(puVar5 + 0x54) = uVar3;
      *(undefined8 *)(puVar5 + 0x56) = uVar1;
      *(undefined8 *)(puVar5 + 0x58) = uVar2;
      *(undefined8 *)(puVar5 + 0x5a) = uVar3;
      *(undefined8 *)(puVar5 + 0x5c) = uVar1;
      *(undefined8 *)(puVar5 + 0x5e) = uVar2;
      *(undefined8 *)(puVar5 + 0x60) = uVar3;
    }
    *puVar5 = 1;
    return 0;
  }
  return 0xfffffffe;
}

