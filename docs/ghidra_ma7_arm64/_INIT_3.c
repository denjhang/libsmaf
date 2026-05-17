/* _INIT_3 @ 001290ac 136B */


void _INIT_3(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00764e38,FUN_00276058);
  if (iVar1 == 0) {
    DAT_00764de8 = 0x10;
    DAT_00764df8 = 0xff8;
    DAT_00764df0 = 0xff;
    pthread_mutex_init((pthread_mutex_t *)&DAT_00764e00,(pthread_mutexattr_t *)0x0);
    DAT_00764e30 = 0;
    DAT_00764e28 = 0;
    __cxa_atexit(FUN_002760b4,&DAT_00764de0,&DAT_00568000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00276ab8("Can\'t allocate C++ runtime pthread_key_t");
}

