/* MaSound_Pause @ 0018b794 8B */


/* YAMAHA::MaSound_Pause(int, int, void*) */

undefined1  [16] YAMAHA::MaSound_Pause(int param_1,int param_2,void *param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._8_4_ = param_2;
  auVar1._0_8_ = 0xffffffff;
  return auVar1;
}

