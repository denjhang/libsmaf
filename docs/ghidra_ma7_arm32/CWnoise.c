/* CWnoise @ 00040bac 12B */


/* ARM::CWnoise::CWnoise(unsigned int, unsigned char) */

CWnoise * __thiscall ARM::CWnoise::CWnoise(CWnoise *this,uint param_1,uchar param_2)

{
  if (param_2 != '\0') {
    **(uint **)(DAT_00040bb8 + 0x40bb4) = param_1;
  }
  return this;
}

