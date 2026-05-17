/* GetWaveInterval @ 00032db4 22B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetWaveInterval() */

undefined4 GetWaveInterval(void)

{
  int iVar1;
  
  if (((int *)**(int **)(DAT_00032dcc + 0x32dba) != (int *)0x0) &&
     (iVar1 = *(int *)**(int **)(DAT_00032dcc + 0x32dba), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return 10;
}

