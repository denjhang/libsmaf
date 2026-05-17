/* lcal_adj_ext @ 0024ec0c 40B */


/* YAMAHA::lcal_adj_ext(short) */

uint YAMAHA::lcal_adj_ext(short param_1)

{
  return (int)param_1 * (uint)(byte)PTR_ltb_mic_adj_00567750[*(uint *)PTR_lprm_00567530] >> 6;
}

