/* lcal_pitch @ 000feba8 140B */


/* YAMAHA::lcal_pitch(short) */

int YAMAHA::lcal_pitch(short param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (int)param_1;
  iVar3 = DAT_000fec34 + 0xfebb0;
  uVar2 = (uint)*(ushort *)(*(int *)(iVar3 + DAT_000fec38) + 0x306);
  if (uVar2 == 0x40) {
    return (int)(short)((uint)(*(int *)(*(int *)(iVar3 + DAT_000fec40) + (iVar1 + -0xe) * 4) *
                              0x3c00) >> 0x10);
  }
  if (uVar2 < 0x40) {
    iVar4 = *(int *)(*(int *)(iVar3 + DAT_000fec3c) + (uVar2 - 0x28) * 4);
    iVar3 = *(int *)(*(int *)(iVar3 + DAT_000fec40) + (iVar1 + -0xe) * 4) * (0x1e00 - iVar4);
    if (0x3f < iVar1) goto LAB_000fec0c;
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar3 + DAT_000fec3c) + (uVar2 - 0x28) * 4);
    iVar3 = *(int *)(*(int *)(iVar3 + DAT_000fec40) + (iVar1 + -0xe) * 4) * (0x1e00 - iVar4);
    if (iVar1 < 0x41) {
LAB_000fec0c:
      return (int)(short)((short)iVar4 - (short)(iVar3 >> 0xf));
    }
  }
  return (int)(short)((short)iVar4 + (short)(iVar3 >> 0xf));
}

