/* MaS2PCnvKR_Control @ 000d6e94 34B */


/* YAMAHA::MaS2PCnvKR_Control(unsigned int, void*) */

undefined4 YAMAHA::MaS2PCnvKR_Control(uint param_1,void *param_2)

{
  if (((*(int *)(DAT_000d6eb8 + 0xd6e9a) == 1) && (param_1 == 1)) &&
     (*(int *)(DAT_000d6eb8 + 0xd6eae) != 0)) {
    *(undefined4 *)param_2 = *(undefined4 *)(DAT_000d6eb8 + 0xd7856);
    return 0;
  }
  return 0xffffffff;
}

