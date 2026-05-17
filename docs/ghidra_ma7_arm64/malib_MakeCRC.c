/* malib_MakeCRC @ 001b9020 292B */


/* YAMAHA::malib_MakeCRC(unsigned int, unsigned char*) */

ushort YAMAHA::malib_MakeCRC(uint param_1,uchar *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  
  if (param_1 - 1 < 2) {
    return 0;
  }
  pbVar2 = param_2 + 1;
  pbVar1 = param_2 + (ulong)(param_1 - 3) + 1;
  uVar4 = (ulong)(pbVar1 + ~(ulong)param_2) & 3;
  uVar5 = *(ushort *)(&DAT_0048d220 + (ulong)(*param_2 ^ 0xff) * 2) ^ 0xff00;
  if (pbVar2 != pbVar1) {
    pbVar3 = pbVar2;
    if (uVar4 != 0) {
      if (uVar4 != 1) {
        if (uVar4 != 2) {
          pbVar3 = param_2 + 2;
          uVar5 = ((uint)*(ushort *)(&DAT_0048d220 + (long)(int)((uint)*pbVar2 ^ uVar5 >> 8) * 2) ^
                  uVar5 << 8) & 0xffff;
        }
        pbVar2 = pbVar3 + 1;
        uVar5 = ((uint)*(ushort *)(&DAT_0048d220 + (long)(int)((uint)*pbVar3 ^ uVar5 >> 8) * 2) ^
                uVar5 << 8) & 0xffff;
      }
      uVar5 = ((uint)*(ushort *)(&DAT_0048d220 + (long)(int)((uint)*pbVar2 ^ uVar5 >> 8) * 2) ^
              uVar5 << 8) & 0xffff;
      pbVar3 = pbVar2 + 1;
      if (pbVar2 + 1 == pbVar1) goto LAB_001b9130;
    }
    do {
      pbVar2 = pbVar3 + 4;
      uVar5 = ((uint)*(ushort *)(&DAT_0048d220 + (long)(int)((uint)*pbVar3 ^ uVar5 >> 8) * 2) ^
              uVar5 << 8) & 0xffff;
      uVar5 = ((uint)*(ushort *)(&DAT_0048d220 + (long)(int)((uint)pbVar3[1] ^ uVar5 >> 8) * 2) ^
              uVar5 << 8) & 0xffff;
      uVar5 = ((uint)*(ushort *)(&DAT_0048d220 + (long)(int)((uint)pbVar3[2] ^ uVar5 >> 8) * 2) ^
              uVar5 << 8) & 0xffff;
      uVar5 = ((uint)*(ushort *)(&DAT_0048d220 + (long)(int)((uint)pbVar3[3] ^ uVar5 >> 8) * 2) ^
              uVar5 << 8) & 0xffff;
      pbVar3 = pbVar2;
    } while (pbVar2 != pbVar1);
  }
LAB_001b9130:
  return ~(ushort)uVar5;
}

