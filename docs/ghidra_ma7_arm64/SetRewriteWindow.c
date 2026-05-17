/* SetRewriteWindow @ 0014e274 100B */


/* ARM::CDsp::SetRewriteWindow(unsigned int, unsigned int) */

void __thiscall ARM::CDsp::SetRewriteWindow(CDsp *this,uint param_1,uint param_2)

{
  if (param_2 < param_1) {
    return;
  }
  EnterCriticalSection((critical_section *)(this + 0x3bf7b0));
  CDsp2::SetRewriteWindow((int)this + 0xd0,param_1);
  LeaveCriticalSection((critical_section *)(this + 0x3bf7b0));
  return;
}

