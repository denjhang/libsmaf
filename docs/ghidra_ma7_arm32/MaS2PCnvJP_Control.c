/* MaS2PCnvJP_Control @ 000c7380 34B */


/* YAMAHA::MaS2PCnvJP_Control(unsigned int, void*) */

undefined4 YAMAHA::MaS2PCnvJP_Control(uint param_1,void *param_2)

{
  if (((*(int *)(DAT_000c73a4 + 0xc7386) == 1) && (param_1 == 1)) &&
     (*(int *)(DAT_000c73a4 + 0xc739a) != 0)) {
    *(undefined4 *)param_2 = *(undefined4 *)(&UNK_000c8062 + DAT_000c73a4);
    return 0;
  }
  return 0xffffffff;
}

