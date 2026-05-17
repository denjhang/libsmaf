/* GetProcessHeap @ 0002f050 10B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GetProcessHeap() */

undefined4 GetProcessHeap(void)

{
  return **(undefined4 **)(DAT_0002f05c + 0x2f056);
}

