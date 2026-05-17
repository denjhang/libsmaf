/* malib_MakeCRC @ 000957cc 210B */


/* YAMAHA::malib_MakeCRC(unsigned int, unsigned char*) */

uint YAMAHA::malib_MakeCRC(uint param_1,uchar *param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (param_1 - 1 < 2) {
    return 0;
  }
  pbVar5 = param_2 + 1;
  iVar2 = DAT_000958a0 + 0x957e2;
  pbVar3 = param_2 + (param_1 - 2);
  uVar4 = (uint)(pbVar3 + ~(uint)param_2) & 3;
  uVar1 = *(ushort *)(iVar2 + (*param_2 ^ 0xff) * 2) ^ 0xff00;
  if (pbVar5 != pbVar3) {
    pbVar6 = pbVar5;
    if (uVar4 != 0) {
      if (uVar4 != 1) {
        bVar7 = uVar4 != 2;
        if (bVar7) {
          pbVar6 = param_2 + 2;
          uVar4 = (uint)*pbVar5;
        }
        if (bVar7) {
          uVar4 = uVar4 ^ uVar1 >> 8;
        }
        pbVar5 = pbVar6 + 1;
        if (bVar7) {
          uVar4 = (uint)*(ushort *)(iVar2 + uVar4 * 2);
        }
        if (bVar7) {
          uVar1 = (uVar4 ^ uVar1 << 8) & 0xffff;
        }
        uVar1 = ((uint)*(ushort *)(iVar2 + ((uint)*pbVar6 ^ uVar1 >> 8) * 2) ^ uVar1 << 8) & 0xffff;
      }
      uVar1 = ((uint)*(ushort *)(iVar2 + ((uint)*pbVar5 ^ uVar1 >> 8) * 2) ^ uVar1 << 8) & 0xffff;
      pbVar6 = pbVar5 + 1;
      if (pbVar5 + 1 == pbVar3) goto LAB_00095892;
    }
    do {
      pbVar5 = pbVar6 + 4;
      uVar1 = ((uint)*(ushort *)(iVar2 + ((uint)*pbVar6 ^ uVar1 >> 8) * 2) ^ uVar1 << 8) & 0xffff;
      uVar1 = ((uint)*(ushort *)(iVar2 + ((uint)pbVar6[1] ^ uVar1 >> 8) * 2) ^ uVar1 << 8) & 0xffff;
      uVar1 = ((uint)*(ushort *)(iVar2 + ((uint)pbVar6[2] ^ uVar1 >> 8) * 2) ^ uVar1 << 8) & 0xffff;
      uVar1 = ((uint)*(ushort *)(iVar2 + ((uint)pbVar6[3] ^ uVar1 >> 8) * 2) ^ uVar1 << 8) & 0xffff;
      pbVar6 = pbVar5;
    } while (pbVar5 != pbVar3);
  }
LAB_00095892:
  return ~uVar1 & 0xffff;
}

