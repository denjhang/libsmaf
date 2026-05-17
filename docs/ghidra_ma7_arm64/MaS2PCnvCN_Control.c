/* MaS2PCnvCN_Control @ 00206f4c 60B */


/* YAMAHA::MaS2PCnvCN_Control(unsigned int, void*) */

undefined8 YAMAHA::MaS2PCnvCN_Control(uint param_1,void *param_2)

{
  if (((param_1 == 1) && (DAT_0057d2b8 == 1)) && (DAT_0057d2d4 != 0)) {
    *(undefined4 *)param_2 = DAT_0057de14;
    return 0;
  }
  return 0xffffffff;
}

