/* CWnoise @ 00144a84 24B */


/* ARM::CWnoise::CWnoise(unsigned int, unsigned char) */

CWnoise * __thiscall ARM::CWnoise::CWnoise(CWnoise *this,uint param_1,uchar param_2)

{
  if (param_2 != '\0') {
    *(uint *)PTR_m_dRand_00567230 = param_1;
    this = (CWnoise *)&PTR_munmap_00567000;
  }
  return this;
}

