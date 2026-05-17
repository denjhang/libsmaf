/* CSmwCtrl @ 0002eaf0 30B */


/* CSmwCtrl::CSmwCtrl() */

CSmwCtrl * __thiscall CSmwCtrl::CSmwCtrl(CSmwCtrl *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  InitializeCriticalSection((critical_section *)(this + 0x14));
  return this;
}

