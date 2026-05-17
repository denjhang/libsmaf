/* ~CSmwCtrl @ 0002edf4 34B */


/* CSmwCtrl::~CSmwCtrl() */

CSmwCtrl * __thiscall CSmwCtrl::~CSmwCtrl(CSmwCtrl *this)

{
  Stop(this);
  Term(this);
  DeleteCriticalSection((critical_section *)(this + 0x14));
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}

