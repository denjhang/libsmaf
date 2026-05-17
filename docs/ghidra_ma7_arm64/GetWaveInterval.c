/* GetWaveInterval @ 0012fab0 40B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetWaveInterval() */

undefined4 GetWaveInterval(void)

{
  long lVar1;
  
  if ((*(long **)PTR_g_pWaveProc_00567560 != (long *)0x0) &&
     (lVar1 = **(long **)PTR_g_pWaveProc_00567560, lVar1 != 0)) {
    return *(undefined4 *)(lVar1 + 0x18);
  }
  return 10;
}

