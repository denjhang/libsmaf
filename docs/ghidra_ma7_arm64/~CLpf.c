/* ~CLpf @ 0015ad68 52B */


/* ARM::CLpf::~CLpf() */

void __thiscall ARM::CLpf::~CLpf(CLpf *this)

{
  CWnoise *this_00;
  
  this_00 = *(CWnoise **)(this + 0xc0);
  if (this_00 != (CWnoise *)0x0) {
    CWnoise::~CWnoise(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

