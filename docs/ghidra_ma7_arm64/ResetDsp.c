/* ResetDsp @ 0014dfc0 128B */


/* ARM::CDsp::ResetDsp(unsigned int) */

void __thiscall ARM::CDsp::ResetDsp(CDsp *this,uint param_1)

{
  if (1 < param_1) {
    return;
  }
  EnterCriticalSection((critical_section *)(this + 0x3bf7b0));
  if ((param_1 == 0) && (*(int *)(this + 0x3a302c) == 1)) {
    CDsp2::ProgramReset((CDsp2 *)(this + 0xd0));
  }
  *(uint *)(this + 0x3a302c) = param_1;
  LeaveCriticalSection((critical_section *)(this + 0x3bf7b0));
  return;
}

