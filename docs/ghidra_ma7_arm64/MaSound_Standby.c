/* MaSound_Standby @ 0018b4ec 168B */


/* YAMAHA::MaSound_Standby(int, int, void*) */

undefined8 YAMAHA::MaSound_Standby(int param_1,int param_2,void *param_3)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = 0;
  }
  else {
    if (param_1 != 0xd) {
      return 0xfffffffe;
    }
    lVar1 = 1;
  }
  if (param_2 != 1) {
    return 0xfffffffe;
  }
  if ((&DAT_0057c43d)[lVar1 * 0x38] != '\x02') {
    return 0xffffffff;
  }
  MaSmw_Ctrl((&DAT_0048a424)[lVar1 * 2],0x34,(&DAT_0057c438)[lVar1 * 0xe],(void *)0x0);
  (&DAT_0057c43d)[lVar1 * 0x38] = 3;
  return 0;
}

