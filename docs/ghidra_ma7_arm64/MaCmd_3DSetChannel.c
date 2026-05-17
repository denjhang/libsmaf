/* MaCmd_3DSetChannel @ 002398d4 336B */


/* YAMAHA::MaCmd_3DSetChannel(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_3DSetChannel(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar7 = (ulong)param_1 * 0x65d0;
  if ((&DAT_0074a7d8)[lVar7] != '\x01') {
    (&DAT_0074a410)[(ulong)param_3 * 0x1e + lVar7] = (byte)((param_4 & 3) << 4) | 0x40;
    if (param_3 < 0x10) {
      if (param_2 < 0) {
        *param_5 = 0x8b;
        param_5[1] = (char)param_3 + (char)(param_1 << 4) | 0x80;
        uVar4 = 4;
        uVar3 = 3;
        uVar6 = 2;
      }
      else {
        if (param_2 < 0x80) {
          uVar4 = 6;
          uVar3 = 5;
          uVar6 = 4;
          uVar9 = 2;
          uVar10 = 1;
          uVar8 = 0;
          uVar5 = 3;
        }
        else {
          lVar7 = 0;
          do {
            iVar2 = (int)lVar7;
            bVar1 = (byte)param_2;
            param_2 = param_2 >> 7;
            param_5[lVar7] = bVar1 & 0x7f;
            if (1 < iVar2 + 1U) break;
            lVar7 = 1;
          } while (0x7f < param_2);
          uVar5 = (ulong)(iVar2 + 4);
          uVar10 = (ulong)(iVar2 + 2);
          uVar9 = (ulong)(iVar2 + 3);
          uVar6 = (ulong)(iVar2 + 5);
          uVar3 = (ulong)(iVar2 + 6);
          uVar8 = (ulong)(iVar2 + 1U);
          uVar4 = iVar2 + 7;
        }
        param_5[uVar8] = (byte)param_2 | 0x80;
        param_5[uVar10] = 0x8b;
        param_5[uVar9] = (char)param_3 + (char)(param_1 << 4) | 0x80;
        param_5[uVar5] = 0x80;
      }
      param_5[uVar6] = 0x94;
      param_5[uVar3] =
           (&DAT_0074a410)[(ulong)param_3 * 0x1e + (ulong)param_1 * 0x65d0] | 0x80 | (byte)param_1;
      return (ulong)uVar4;
    }
  }
  uVar3 = MaCmd_Nop(param_2,0,param_5);
  return uVar3;
}

