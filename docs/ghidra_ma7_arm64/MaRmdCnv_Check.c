/* MaRmdCnv_Check @ 001f9cf0 456B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaRmdCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

undefined8 YAMAHA::MaRmdCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  uVar6 = DAT_001f9ef0;
  uVar5 = DAT_001f9ee8;
  uVar4 = DAT_001f9ee0;
  uVar3 = _UNK_001f9ed8;
  uVar2 = _DAT_001f9ed0;
  uVar1 = _DAT_001f9ec0;
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (puVar7 = *(undefined8 **)(param_1 + 8), param_2 != (_MACNV_CHECK_PARAM *)0x0)) &&
     (puVar7 != (undefined8 *)0x0)) {
    puVar7[1] = _UNK_001f9ec8;
    *puVar7 = uVar1;
    puVar7[3] = uVar3;
    puVar7[2] = uVar2;
    puVar7[4] = uVar4;
    puVar7[5] = uVar5;
    puVar7[6] = uVar6;
    puVar7[7] = uVar4;
    puVar7[8] = uVar5;
    puVar7[9] = uVar6;
    puVar7[10] = uVar4;
    puVar7[0xb] = uVar5;
    puVar7[0xc] = uVar6;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar5;
    puVar7[0xf] = uVar6;
    puVar7[0x10] = uVar4;
    puVar7[0x11] = uVar5;
    puVar7[0x12] = uVar6;
    puVar7[0x13] = uVar4;
    puVar7[0x14] = uVar5;
    puVar7[0x15] = uVar6;
    puVar7[0x16] = uVar4;
    puVar7[0x17] = uVar5;
    puVar7[0x18] = uVar6;
    puVar7[0x19] = uVar4;
    uVar1 = DAT_001f9ef8;
    puVar7[0x1a] = uVar5;
    puVar7[0x1b] = uVar6;
    puVar7[0x1c] = uVar4;
    puVar7[0x1d] = uVar1;
    puVar7[0x1e] = uVar6;
    puVar7[0x1f] = uVar4;
    puVar7[0x20] = uVar5;
    puVar7[0x21] = uVar6;
    puVar7[0x22] = uVar4;
    puVar7[0x23] = uVar5;
    puVar7[0x24] = uVar6;
    puVar7[0x25] = uVar4;
    puVar7[0x26] = uVar5;
    puVar7[0x27] = uVar6;
    puVar7[0x28] = uVar4;
    puVar7[0x29] = uVar5;
    puVar7[0x2a] = uVar6;
    puVar7[0x2b] = uVar4;
    puVar7[0x2c] = uVar5;
    puVar7[0x2d] = uVar6;
    puVar7[0x2e] = uVar4;
    puVar7[0x2f] = uVar5;
    puVar7[0x30] = uVar6;
    return 0;
  }
  return 0xfffffffe;
}

