/* _INIT_3 @ 0002ea50 88B */


void _INIT_3(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  pthread_mutex_t *__mutex;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = pthread_key_create((pthread_key_t *)(DAT_0002eaa0 + 0x2ea5a),
                             (__destr_function *)(DAT_0002eaa4 + 0x2ea5c));
  iVar1 = DAT_0002eaa8;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0011d970(DAT_0002eab8 + 0x2ea9c);
  }
  puVar5 = (undefined4 *)(DAT_0002eaa8 + 0x2ea70);
  __mutex = (pthread_mutex_t *)(DAT_0002eaa8 + 0x2ea7c);
  *(undefined4 *)(DAT_0002eaa8 + 0x2ea78) = 0xffc;
  *puVar5 = 0xc;
  *(undefined4 *)(iVar1 + 0x2ea74) = 0x155;
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  iVar2 = DAT_0002eab4;
  iVar3 = DAT_0002eab0;
  iVar4 = DAT_0002eaac + 0x2ea88;
  *(undefined4 *)(iVar1 + 0x2ea84) = 0;
  *(undefined4 *)(iVar1 + 0x2ea80) = 0;
                    /* WARNING: Could not recover jumptable at 0x001204a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(DAT_001204a8 + 0x1204ac))(iVar4,iVar3 + 0x2ea8c,iVar2 + 0x2ea90);
  return;
}

