/* SmafMms_Load @ 00090150 522B */


/* YAMAHA::SmafMms_Load(unsigned char*, unsigned int, unsigned char) */

int YAMAHA::SmafMms_Load(uchar *param_1,uint param_2,uchar param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  iVar3 = PreMms_Load(param_1,param_2,param_3);
  if (iVar3 != -0x65) {
    return iVar3;
  }
  if ((int)((uint)param_3 << 0x18) < 0) {
    return -1;
  }
  iVar3 = MaSound_Load(*(int *)(DAT_0009035c + 0x90180),param_1,param_2,param_3 & 3,
                       (_func_int_uchar *)(DAT_00090360 + 0x90184),(void *)0x0);
  if (iVar3 < 0) {
    return iVar3;
  }
  if ((((6 < param_2 - 1) && (param_1 != (uchar *)0x0)) &&
      (((uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18 | (uint)param_1[3] | (uint)param_1[2] << 8
       ) == 0x4d4d4d44)) &&
     (((uVar4 = (uint)param_1[5] << 0x10 | (uint)param_1[4] << 0x18 | (uint)param_1[7] |
                (uint)param_1[6] << 8, -1 < (int)uVar4 &&
       (pbVar10 = param_1 + 8, pbVar10 != (byte *)0x0)) &&
      (((int)param_2 < 1 || ((int)uVar4 <= (int)(param_2 - 8))))))) {
    pbVar5 = (byte *)0x0;
    pbVar9 = pbVar5;
    if (7 < (int)uVar4) {
      pbVar5 = (byte *)0x0;
      do {
        iVar6 = ((uint)pbVar10[5] << 0x10 | (uint)pbVar10[4] << 0x18 | (uint)pbVar10[7] |
                (uint)pbVar10[6] << 8) + 8;
        uVar8 = (uint)pbVar10[1] << 0x10 | (uint)*pbVar10 << 0x18;
        uVar7 = uVar8 | pbVar10[3] | (uint)pbVar10[2] << 8;
        if ((iVar6 < 8) || ((int)uVar4 < iVar6)) goto LAB_0009019e;
        pbVar2 = pbVar10;
        if ((uVar7 != 0x434e5449) && (pbVar2 = pbVar9, uVar7 != 0x47545200)) {
          uVar8 = uVar8 | (uint)pbVar10[2] << 8;
          if (uVar8 == 0x41545200) {
            pbVar5 = (byte *)((uint)pbVar5 | 2);
          }
          else if (uVar8 == 0x4d545200) {
            pbVar5 = (byte *)((uint)pbVar5 | 1);
          }
        }
        pbVar9 = pbVar2;
        uVar4 = uVar4 - iVar6;
        pbVar10 = pbVar10 + iVar6;
      } while (7 < (int)uVar4);
    }
    iVar6 = MaSound_Control(*(int *)(DAT_00090368 + 0x902be),iVar3,' ',(void *)0x0,(void *)0x0);
    if (-1 < iVar6) {
      pbVar5 = (byte *)((uint)pbVar5 | 0x10);
    }
    if (((((pbVar9 != (byte *)0x0) &&
          (((uint)pbVar9[1] << 0x10 | (uint)*pbVar9 << 0x18 | (uint)pbVar9[3] | (uint)pbVar9[2] << 8
           ) == 0x434e5449)) && (pbVar9 != (byte *)0xfffffff8)) &&
        (4 < (int)((uint)pbVar9[5] << 0x10 | (uint)pbVar9[4] << 0x18 | (uint)pbVar9[7] |
                  (uint)pbVar9[6] << 8))) &&
       ((bVar1 = pbVar9[9], bVar1 < 0x30 || ((bVar1 < 0x60 && ((bVar1 & 0xf) < 0xb))))))
    goto LAB_000901a0;
  }
LAB_0009019e:
  pbVar5 = (byte *)0x0;
LAB_000901a0:
  *(byte **)(DAT_00090364 + iVar3 * 4 + 0x901b6) = pbVar5;
  return iVar3;
}

