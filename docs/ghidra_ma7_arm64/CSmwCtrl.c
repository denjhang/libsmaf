/* CSmwCtrl @ 00129164 32B */


/* CSmwCtrl::CSmwCtrl() */

void __thiscall CSmwCtrl::CSmwCtrl(CSmwCtrl *this)

{
  *(undefined4 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  InitializeCriticalSection((critical_section *)(this + 0x18));
  return;
}

