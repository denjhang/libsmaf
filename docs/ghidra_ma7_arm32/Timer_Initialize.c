/* Timer_Initialize @ 00038ddc 82B */


/* ARM::Timer_Initialize() */

undefined4 ARM::Timer_Initialize(void)

{
  int iVar1;
  
  iVar1 = DAT_00038e30;
  *(undefined1 *)(DAT_00038e30 + 0x38de6) = 0;
  *(undefined1 *)(iVar1 + 0x38de7) = 0;
  *(undefined1 *)(iVar1 + 0x38de8) = 0;
  *(undefined4 *)(iVar1 + 0x38dea) = 0;
  *(undefined4 *)(iVar1 + 0x38dee) = 0;
  *(undefined4 *)(iVar1 + 0x38df2) = 0;
  *(undefined1 *)(iVar1 + 0x38e16) = 0;
  *(undefined1 *)(iVar1 + 0x38e17) = 0;
  *(undefined1 *)(iVar1 + 0x38e18) = 0;
  *(undefined4 *)(iVar1 + 0x38e1a) = 0;
  *(undefined4 *)(iVar1 + 0x38e1e) = 0;
  *(undefined4 *)(iVar1 + 0x38e22) = 0;
  *(undefined4 *)(iVar1 + 0x38df6) = 0;
  *(undefined4 *)(iVar1 + 0x38dfa) = 0;
  *(undefined4 *)(iVar1 + 0x38dfe) = 0;
  *(undefined4 *)(iVar1 + 0x38e02) = 0;
  *(undefined4 *)(iVar1 + 0x38e0e) = 0;
  *(undefined4 *)(iVar1 + 0x38e12) = 0;
  *(undefined4 *)(iVar1 + 0x38e06) = 0;
  *(undefined4 *)(iVar1 + 0x38e0a) = 0;
  *(undefined4 *)(iVar1 + 0x38e26) = 0;
  *(undefined4 *)(iVar1 + 0x38e2a) = 0;
  *(undefined4 *)(&UNK_00038e2e + iVar1) = 0;
  *(undefined4 *)((int)&DAT_00038e30 + iVar1 + 2) = 0;
  *(undefined4 *)(iVar1 + 0x38e3e) = 0;
  *(undefined4 *)(iVar1 + 0x38e42) = 0;
  *(undefined4 *)(Timer_SetMSTimer + iVar1 + 2) = 0;
  *(undefined4 *)(iVar1 + 0x38e3a) = 0;
  return 0;
}

