/* GetGenerateData @ 0012f9ec 156B */


/* GetGenerateData(unsigned char*, int) */

undefined8 GetGenerateData(uchar *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_005824d4;
  if (((*(long **)PTR_g_pWaveProc_00567560 != (long *)0x0) &&
      (**(long **)PTR_g_pWaveProc_00567560 != 0)) && ((&DAT_00582510)[DAT_005824d4] == 1)) {
    memcpy(param_1,(void *)(&DAT_005824e0)[DAT_005824d4],(ulong)(uint)param_2);
    (&DAT_00582510)[iVar1] = 0;
    DAT_005824d4 = iVar1 + 1;
    if (4 < DAT_005824d4) {
      DAT_005824d4 = 0;
    }
    return 1;
  }
  return 0;
}

