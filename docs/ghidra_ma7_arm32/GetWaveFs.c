/* GetWaveFs @ 00032d98 24B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetWaveFs() */

undefined4 GetWaveFs(void)

{
  int iVar1;
  
  if (((int *)**(int **)(DAT_00032db0 + 0x32d9e) != (int *)0x0) &&
     (iVar1 = *(int *)**(int **)(DAT_00032db0 + 0x32d9e), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0xac44;
}

