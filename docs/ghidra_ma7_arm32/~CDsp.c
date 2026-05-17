/* ~CDsp @ 00048c00 20B */


/* ARM::CDsp::~CDsp() */

CDsp * __thiscall ARM::CDsp::~CDsp(CDsp *this)

{
  DeleteCriticalSection((critical_section *)(this + 0x3bf700));
  return this;
}

