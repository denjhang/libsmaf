/* MaS2PCnvJP_Control @ 00201bd4 60B */


/* YAMAHA::MaS2PCnvJP_Control(unsigned int, void*) */

undefined8 YAMAHA::MaS2PCnvJP_Control(uint param_1,void *param_2)

{
  if (((param_1 == 1) && (DAT_0057c580 == 1)) && (DAT_0057c59c != 0)) {
    *(undefined4 *)param_2 = DAT_0057d268;
    return 0;
  }
  return 0xffffffff;
}

