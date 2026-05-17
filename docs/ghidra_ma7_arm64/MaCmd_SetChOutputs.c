/* MaCmd_SetChOutputs @ 0023a960 348B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaCmd_SetChOutputs(unsigned int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_SetChOutputs(uint param_1,uint param_2,uchar *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  char cVar8;
  byte bVar9;
  uchar local_40;
  uchar uStack_3f;
  uchar uStack_3e;
  uchar uStack_3d;
  uchar uStack_3c;
  uchar uStack_3b;
  uchar uStack_3a;
  uchar uStack_39;
  uchar uStack_38;
  uchar uStack_37;
  uchar uStack_36;
  uchar uStack_35;
  uchar uStack_34;
  uchar uStack_33;
  uchar uStack_32;
  uchar uStack_31;
  
  bVar6 = 0;
  lVar5 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_2 - 2 < 4) {
    bVar6 = (&DAT_00532da0)[param_2 - 2];
  }
  lVar7 = (ulong)param_1 * 0x65d0;
  (&DAT_0074a410)[lVar7] = bVar6;
  (&DAT_0074a42e)[lVar7] = bVar6;
  cVar8 = (char)(param_1 << 4);
  (&DAT_0074a44c)[lVar7] = bVar6;
  bVar9 = bVar6 | (byte)param_1 | 0x80;
  (&DAT_0074a46a)[lVar7] = bVar6;
  (&DAT_0074a488)[lVar7] = bVar6;
  (&DAT_0074a4a6)[lVar7] = bVar6;
  (&DAT_0074a4c4)[lVar7] = bVar6;
  (&DAT_0074a4e2)[lVar7] = bVar6;
  (&DAT_0074a500)[lVar7] = bVar6;
  (&DAT_0074a51e)[lVar7] = bVar6;
  (&DAT_0074a53c)[lVar7] = bVar6;
  (&DAT_0074a55a)[lVar7] = bVar6;
  (&DAT_0074a578)[lVar7] = bVar6;
  (&DAT_0074a596)[lVar7] = bVar6;
  (&DAT_0074a5b4)[lVar7] = bVar6;
  (&DAT_0074a5d2)[lVar7] = bVar6;
  (&DAT_0074a5f0)[lVar7] = bVar6;
  (&DAT_0074a60e)[lVar7] = bVar6;
  (&DAT_0074a62c)[lVar7] = bVar6;
  (&DAT_0074a64a)[lVar7] = bVar6;
  (&DAT_0074a668)[lVar7] = bVar6;
  (&DAT_0074a686)[lVar7] = bVar6;
  (&DAT_0074a6a4)[lVar7] = bVar6;
  (&DAT_0074a6c2)[lVar7] = bVar6;
  (&DAT_0074a6e0)[lVar7] = bVar6;
  (&DAT_0074a6fe)[lVar7] = bVar6;
  (&DAT_0074a71c)[lVar7] = bVar6;
  (&DAT_0074a73a)[lVar7] = bVar6;
  (&DAT_0074a758)[lVar7] = bVar6;
  (&DAT_0074a776)[lVar7] = bVar6;
  (&DAT_0074a794)[lVar7] = bVar6;
  uVar4 = _UNK_0023aac8;
  uVar3 = _DAT_0023aac0;
  (&DAT_0074a7b2)[lVar7] = bVar6;
  uVar2 = CONCAT17(cVar8 + (char)((ulong)uVar4 >> 0x38),
                   CONCAT16(cVar8 + (char)((ulong)uVar4 >> 0x30),
                            CONCAT15(cVar8 + (char)((ulong)uVar4 >> 0x28),
                                     CONCAT14(cVar8 + (char)((ulong)uVar4 >> 0x20),
                                              CONCAT13(cVar8 + (char)((ulong)uVar4 >> 0x18),
                                                       CONCAT12(cVar8 + (char)((ulong)uVar4 >> 0x10)
                                                                ,CONCAT11(cVar8 + (char)((ulong)
                                                  uVar4 >> 8),cVar8 + (char)uVar4))))))) |
          0x8080808080808080;
  uVar1 = CONCAT17(cVar8 + (char)((ulong)uVar3 >> 0x38),
                   CONCAT16(cVar8 + (char)((ulong)uVar3 >> 0x30),
                            CONCAT15(cVar8 + (char)((ulong)uVar3 >> 0x28),
                                     CONCAT14(cVar8 + (char)((ulong)uVar3 >> 0x20),
                                              CONCAT13(cVar8 + (char)((ulong)uVar3 >> 0x18),
                                                       CONCAT12(cVar8 + (char)((ulong)uVar3 >> 0x10)
                                                                ,CONCAT11(cVar8 + (char)((ulong)
                                                  uVar3 >> 8),cVar8 + (char)uVar3))))))) |
          0x8080808080808080;
  local_40 = (uchar)uVar1;
  uStack_3f = (uchar)(uVar1 >> 8);
  uStack_3e = (uchar)(uVar1 >> 0x10);
  uStack_3d = (uchar)(uVar1 >> 0x18);
  uStack_3c = (uchar)(uVar1 >> 0x20);
  uStack_3b = (uchar)(uVar1 >> 0x28);
  uStack_3a = (uchar)(uVar1 >> 0x30);
  uStack_39 = (uchar)(uVar1 >> 0x38);
  uStack_38 = (uchar)uVar2;
  uStack_37 = (uchar)(uVar2 >> 8);
  uStack_36 = (uchar)(uVar2 >> 0x10);
  uStack_35 = (uchar)(uVar2 >> 0x18);
  uStack_34 = (uchar)(uVar2 >> 0x20);
  uStack_33 = (uchar)(uVar2 >> 0x28);
  uStack_32 = (uchar)(uVar2 >> 0x30);
  uStack_31 = (uchar)(uVar2 >> 0x38);
  *param_3 = 0x8b;
  param_3[1] = local_40;
  param_3[2] = 0x94;
  param_3[3] = bVar9;
  param_3[4] = 0x8b;
  param_3[5] = uStack_3f;
  param_3[6] = 0x94;
  param_3[7] = bVar9;
  param_3[8] = 0x8b;
  param_3[9] = uStack_3e;
  param_3[10] = 0x94;
  param_3[0xb] = bVar9;
  param_3[0xc] = 0x8b;
  param_3[0xd] = uStack_3d;
  param_3[0xe] = 0x94;
  param_3[0xf] = bVar9;
  param_3[0x10] = 0x8b;
  param_3[0x11] = uStack_3c;
  param_3[0x12] = 0x94;
  param_3[0x13] = bVar9;
  param_3[0x14] = 0x8b;
  param_3[0x15] = uStack_3b;
  param_3[0x16] = 0x94;
  param_3[0x17] = bVar9;
  param_3[0x18] = 0x8b;
  param_3[0x19] = uStack_3a;
  param_3[0x1a] = 0x94;
  param_3[0x1b] = bVar9;
  param_3[0x1c] = 0x8b;
  param_3[0x1d] = uStack_39;
  param_3[0x1e] = 0x94;
  param_3[0x1f] = bVar9;
  param_3[0x20] = 0x8b;
  param_3[0x21] = uStack_38;
  param_3[0x22] = 0x94;
  param_3[0x23] = bVar9;
  param_3[0x24] = 0x8b;
  param_3[0x25] = uStack_37;
  param_3[0x26] = 0x94;
  param_3[0x27] = bVar9;
  param_3[0x28] = 0x8b;
  param_3[0x29] = uStack_36;
  param_3[0x2a] = 0x94;
  param_3[0x2b] = bVar9;
  param_3[0x2c] = 0x8b;
  param_3[0x2d] = uStack_35;
  param_3[0x2e] = 0x94;
  param_3[0x2f] = bVar9;
  param_3[0x30] = 0x8b;
  param_3[0x31] = uStack_34;
  param_3[0x32] = 0x94;
  param_3[0x33] = bVar9;
  param_3[0x34] = 0x8b;
  param_3[0x35] = uStack_33;
  param_3[0x36] = 0x94;
  param_3[0x37] = bVar9;
  param_3[0x38] = 0x8b;
  param_3[0x39] = uStack_32;
  param_3[0x3a] = 0x94;
  param_3[0x3b] = bVar9;
  param_3[0x3c] = 0x8b;
  param_3[0x3d] = uStack_31;
  param_3[0x3e] = 0x94;
  param_3[0x3f] = bVar9;
  if (lVar5 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0x40);
}

