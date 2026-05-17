/* MaS2PCnvKR_Control @ 00215620 60B */


/* YAMAHA::MaS2PCnvKR_Control(unsigned int, void*) */

undefined8 YAMAHA::MaS2PCnvKR_Control(uint param_1,void *param_2)

{
  if (((param_1 == 1) && (DAT_0057de20 == 1)) && (DAT_0057de3c != 0)) {
    *(undefined4 *)param_2 = DAT_0057e7e8;
    return 0;
  }
  return 0xffffffff;
}

