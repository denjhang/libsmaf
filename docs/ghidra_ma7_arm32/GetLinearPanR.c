/* GetLinearPanR @ 00042b68 30B */


/* ARM::CPanIP::GetLinearPanR(unsigned int) */

undefined4 __thiscall ARM::CPanIP::GetLinearPanR(CPanIP *this,uint param_1)

{
  return *(undefined4 *)
          (*(int *)(DAT_00042b8c + 0x42b7a) +
          (*(int *)(*(int *)(DAT_00042b88 + 0x42b76) + (~param_1 & 0x1f) * 4) >> 0x14) * 4);
}

