/* GetLinearPanL @ 00042b40 30B */


/* ARM::CPanIP::GetLinearPanL(unsigned int) */

undefined4 __thiscall ARM::CPanIP::GetLinearPanL(CPanIP *this,uint param_1)

{
  return *(undefined4 *)
          (*(int *)(DAT_00042b64 + 0x42b50) +
          (*(int *)(*(int *)(DAT_00042b60 + 0x42b4c) + (param_1 & 0x1f) * 4) >> 0x14) * 4);
}

