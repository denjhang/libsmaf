/* ~CLpf @ 000533a0 32B */


/* ARM::CLpf::~CLpf() */

CLpf * __thiscall ARM::CLpf::~CLpf(CLpf *this)

{
  CWnoise *this_00;
  
  this_00 = *(CWnoise **)(this + 0xa0);
  if (this_00 != (CWnoise *)0x0) {
    CWnoise::~CWnoise(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 0xa0) = 0;
  return this;
}

