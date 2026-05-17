/* GetLinearVol @ 000533c0 30B */


/* ARM::CVolIP::GetLinearVol(unsigned int) */

undefined4 __thiscall ARM::CVolIP::GetLinearVol(CVolIP *this,uint param_1)

{
  return *(undefined4 *)
          (*(int *)(DAT_000533e4 + 0x533d0) +
          (*(int *)(*(int *)(DAT_000533e0 + 0x533cc) + (param_1 & 0x1f) * 4) >> 0x14) * 4);
}

