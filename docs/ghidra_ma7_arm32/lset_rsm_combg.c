/* lset_rsm_combg @ 00100618 168B */


/* YAMAHA::lset_rsm_combg(unsigned short, short, unsigned short, unsigned char const*) */

void YAMAHA::lset_rsm_combg(ushort param_1,short param_2,ushort param_3,uchar *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)param_1;
  iVar4 = DAT_001006c0 + 0x100622;
  uVar3 = (uint)*(byte *)(*(int *)(iVar4 + DAT_001006c4) + (uint)param_3);
  if (uVar3 < 0x38) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar3 - 0x38 & 0xff;
  }
  if (param_2 < 0) {
    if (uVar6 == 0) {
      uVar6 = (uint)**(byte **)(iVar4 + DAT_001006c8);
      goto LAB_00100658;
    }
    uVar2 = (uint)*(byte *)(*(int *)(iVar4 + DAT_001006c8) + uVar6);
    iVar5 = uVar2 - *(byte *)(*(int *)(iVar4 + DAT_001006c8) + uVar6 + -1);
  }
  else {
    uVar2 = (uint)*(byte *)(*(int *)(iVar4 + DAT_001006c8) + uVar6);
    iVar5 = *(byte *)(*(int *)(iVar4 + DAT_001006c8) + uVar6 + 1) - uVar2;
  }
  uVar6 = (iVar5 * param_2) / 10 + uVar2 & 0xffff;
LAB_00100658:
  uVar3 = uVar6 + uVar3 & 0xff;
  iVar5 = *(int *)(iVar4 + DAT_001006d0);
  uVar6 = uVar3;
  if (0xca < uVar3) {
    uVar6 = 0x3fc0;
  }
  if (uVar3 < 0xcb) {
    uVar6 = (uint)*(ushort *)(*(int *)(iVar4 + DAT_001006cc) + uVar6 * 4);
  }
  *(undefined2 *)(iVar5 + (uint)*param_4 * 2 + 0x26) =
       *(undefined2 *)(*(int *)(iVar4 + DAT_001006cc) + uVar3 * 4 + 2);
  if (uVar3 < 0xcb) {
    bVar1 = param_4[1];
  }
  else {
    bVar1 = param_4[1];
  }
  *(short *)(iVar5 + (uint)bVar1 * 2 + 0x26) = (short)uVar6;
  *(short *)(iVar5 + (uint)param_4[2] * 2 + 0x26) = (short)uVar6;
  return;
}

