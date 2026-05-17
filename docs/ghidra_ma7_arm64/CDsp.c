/* CDsp @ 0014d874 392B */


/* ARM::CDsp::CDsp(unsigned int) */

void __thiscall ARM::CDsp::CDsp(CDsp *this,uint param_1)

{
  uint uVar1;
  
  CDsp1::CDsp1((CDsp1 *)this);
  CDsp2::CDsp2((CDsp2 *)(this + 0xd0));
  CSrc::CSrc((CSrc *)(this + 0x36fc28));
  *(undefined4 *)(this + 0x3a302c) = 0;
  *(undefined4 *)(this + 0x3a3030) = 0;
  *(undefined4 *)(this + 0x3bf7e0) = 0;
  if ((((param_1 == 0x2b11) || (param_1 == 16000)) || (param_1 == 0x5622)) ||
     (((param_1 == 24000 || (param_1 == 0xac44 || param_1 == 32000)) ||
      (uVar1 = 48000, param_1 == 48000)))) {
    uVar1 = param_1;
  }
  *(uint *)(this + 0x3a3028) = uVar1;
  *(CDsp **)(this + 0x3bf738) = this + 0x3a3034;
  *(CDsp **)(this + 0x3bf748) = this + 0x3a7634;
  *(CDsp **)(this + 0x3bf750) = this + 0x3a9934;
  *(CDsp **)(this + 0x3bf758) = this + 0x3abc34;
  *(CDsp **)(this + 0x3bf760) = this + 0x3adf34;
  *(CDsp **)(this + 0x3bf768) = this + 0x3b0234;
  *(CDsp **)(this + 0x3bf770) = this + 0x3b2534;
  *(CDsp **)(this + 0x3bf778) = this + 0x3b4834;
  *(CDsp **)(this + 0x3bf780) = this + 0x3b6b34;
  *(CDsp **)(this + 0x3bf788) = this + 0x3b8e34;
  *(CDsp **)(this + 0x3bf790) = this + 0x3bb134;
  *(CDsp **)(this + 0x3bf798) = this + 0x3bd434;
  *(CDsp **)(this + 0x3bf740) = this + 0x3a5334;
  CDsp1::Init((CDsp1 *)this,this);
  CDsp2::Init((CDsp2 *)(this + 0xd0),this);
  CSrc::Init((CSrc *)(this + 0x36fc28),this,param_1);
  InitializeCriticalSection((critical_section *)(this + 0x3bf7b0));
  return;
}

