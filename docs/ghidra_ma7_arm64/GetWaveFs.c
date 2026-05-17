/* GetWaveFs @ 0012fa88 40B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetWaveFs() */

undefined4 GetWaveFs(void)

{
  long lVar1;
  
  if ((*(long **)PTR_g_pWaveProc_00567560 != (long *)0x0) &&
     (lVar1 = **(long **)PTR_g_pWaveProc_00567560, lVar1 != 0)) {
    return *(undefined4 *)(lVar1 + 0x14);
  }
  return 0xac44;
}

