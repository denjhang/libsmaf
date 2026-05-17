/* MaS2PCnvCN_Control @ 000cbb0c 34B */


/* YAMAHA::MaS2PCnvCN_Control(unsigned int, void*) */

undefined4 YAMAHA::MaS2PCnvCN_Control(uint param_1,void *param_2)

{
  if (((*(int *)(DAT_000cbb30 + 0xcbb12) == 1) && (param_1 == 1)) &&
     (*(int *)(DAT_000cbb30 + 0xcbb26) != 0)) {
    *(undefined4 *)param_2 = *(undefined4 *)(DAT_000cbb30 + 0xcc65e);
    return 0;
  }
  return 0xffffffff;
}

