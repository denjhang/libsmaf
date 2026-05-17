/* ~CSmwCtrl @ 00129658 64B */


/* CSmwCtrl::~CSmwCtrl() */

void __thiscall CSmwCtrl::~CSmwCtrl(CSmwCtrl *this)

{
  Stop(this);
  Term(this);
  DeleteCriticalSection((critical_section *)(this + 0x18));
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}

