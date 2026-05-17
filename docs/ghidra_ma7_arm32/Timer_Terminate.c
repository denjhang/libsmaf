/* Timer_Terminate @ 000390dc 14B */


/* ARM::Timer_Terminate() */

void ARM::Timer_Terminate(void)

{
  int iVar1;
  
  iVar1 = DAT_000390ec;
  *(undefined1 *)(DAT_000390ec + 0x390e4) = 0;
  *(undefined1 *)(iVar1 + 0x39114) = 0;
  return;
}

