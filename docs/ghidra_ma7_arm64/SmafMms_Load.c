/* SmafMms_Load @ 001b0998 724B */


/* YAMAHA::SmafMms_Load(unsigned char*, unsigned int, unsigned char) */

ulong YAMAHA::SmafMms_Load(uchar *param_1,uint param_2,uchar param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  uVar6 = PreMms_Load(param_1,param_2,param_3);
  if ((int)uVar6 != -0x65) {
    return uVar6;
  }
  if ((char)param_3 < '\0') {
    return 0xffffffff;
  }
  uVar6 = MaSound_Load(DAT_005ddba0,param_1,param_2,param_3 & 3,FUN_001b0824,(void *)0x0);
  iVar4 = (int)uVar6;
  if (iVar4 < 0) {
    return uVar6;
  }
  if ((((6 < param_2 - 1) && (param_1 != (uchar *)0x0)) &&
      (((uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18 | (uint)param_1[3] | (uint)param_1[2] << 8
       ) == 0x4d4d4d44)) &&
     (((uVar8 = (uint)param_1[5] << 0x10 | (uint)param_1[4] << 0x18 | (uint)param_1[7] |
                (uint)param_1[6] << 8, 7 < (int)(uVar8 + 8) &&
       (pbVar7 = param_1 + 8, pbVar7 != (byte *)0x0)) &&
      (((int)param_2 < 1 || ((int)uVar8 <= (int)(param_2 - 8))))))) {
    if ((int)uVar8 < 8) {
      MaSound_Control(DAT_005ddba0,iVar4,' ',(void *)0x0,(void *)0x0);
    }
    else {
      pbVar12 = (byte *)0x0;
      uVar10 = 0;
      do {
        iVar5 = ((uint)pbVar7[5] << 0x10 | (uint)pbVar7[4] << 0x18 | (uint)pbVar7[7] |
                (uint)pbVar7[6] << 8) + 8;
        uVar2 = (uint)pbVar7[1] << 0x10 | (uint)*pbVar7 << 0x18;
        uVar3 = uVar2 | pbVar7[3] | (uint)pbVar7[2] << 8;
        if ((iVar5 < 8) || ((int)uVar8 < iVar5)) goto LAB_001b0b58;
        pbVar11 = pbVar7;
        uVar9 = uVar10;
        if ((uVar3 != 0x434e5449) &&
           (uVar2 = uVar2 | (uint)pbVar7[2] << 8, pbVar11 = pbVar12, uVar3 != 0x47545200)) {
          if (uVar2 == 0x41545200) {
            uVar9 = uVar10 | 2;
          }
          else {
            uVar9 = uVar10 | 1;
            if (uVar2 != 0x4d545200) {
              uVar9 = uVar10;
            }
          }
        }
        uVar8 = uVar8 - iVar5;
        pbVar7 = pbVar7 + iVar5;
        pbVar12 = pbVar11;
        uVar10 = uVar9;
      } while (7 < (int)uVar8);
      iVar5 = MaSound_Control(DAT_005ddba0,iVar4,' ',(void *)0x0,(void *)0x0);
      uVar8 = uVar9 | 0x10;
      if (iVar5 < 0) {
        uVar8 = uVar9;
      }
      if (((((pbVar11 != (byte *)0x0) &&
            (((uint)pbVar11[1] << 0x10 | (uint)*pbVar11 << 0x18 | (uint)pbVar11[3] |
             (uint)pbVar11[2] << 8) == 0x434e5449)) &&
           (((uint)pbVar11[5] << 0x10 | (uint)pbVar11[4] << 0x18 | (uint)pbVar11[7] |
            (uint)pbVar11[6] << 8) - 5 < 0x7ffffff3)) && (pbVar11 != (byte *)0xfffffffffffffff8)) &&
         ((bVar1 = pbVar11[9], bVar1 < 0x30 || ((bVar1 < 0x60 && ((bVar1 & 0xf) < 0xb))))))
      goto LAB_001b0b5c;
    }
  }
LAB_001b0b58:
  uVar8 = 0;
LAB_001b0b5c:
  (&DAT_005ddbb8)[iVar4] = uVar8;
  return uVar6 & 0xffffffff;
}

