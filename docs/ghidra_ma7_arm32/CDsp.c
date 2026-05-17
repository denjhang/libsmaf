/* CDsp @ 00048a30 462B */


/* ARM::CDsp::CDsp(unsigned int) */

CDsp * __thiscall ARM::CDsp::CDsp(CDsp *this,uint param_1)

{
  uint uVar1;
  
  CDsp1::CDsp1((CDsp1 *)this);
  CDsp2::CDsp2((CDsp2 *)(this + 200));
  CSrc::CSrc((CSrc *)(this + 0x36fc20));
  *(undefined4 *)(this + 0x3a2fbc) = 0;
  *(undefined4 *)(this + 0x3a2fc0) = 0;
  *(undefined4 *)(this + 0x3bf708) = 0;
  uVar1 = param_1;
  if (((param_1 != 0x2b11 && param_1 != 16000) && (param_1 != 0x5622 && param_1 != 24000)) &&
     (uVar1 = 48000, param_1 == 32000 || param_1 == 0xac44)) {
    uVar1 = param_1;
  }
  *(uint *)(this + 0x3a2fb8) = uVar1;
  *(CDsp **)(this + 0x3bf6c4) = this + 0x3a2fc4;
  *(CDsp **)(this + 0x3bf6c8) = this + 0x3a52c4;
  *(CDsp **)(this + 0x3bf6cc) = this + 0x3a75c4;
  *(CDsp **)(this + 0x3bf6d0) = this + 0x3a98c4;
  *(CDsp **)(this + 0x3bf6d4) = this + 0x3abbc4;
  *(CDsp **)(this + 0x3bf6d8) = this + 0x3adec4;
  *(CDsp **)(this + 0x3bf6dc) = this + 0x3b01c4;
  *(CDsp **)(this + 0x3bf6e0) = this + 0x3b24c4;
  *(CDsp **)(this + 0x3bf6e4) = this + 0x3b47c4;
  *(CDsp **)(this + 0x3bf6e8) = this + 0x3b6ac4;
  *(CDsp **)(this + 0x3bf6ec) = this + 0x3b8dc4;
  *(CDsp **)(this + 0x3bf6f0) = this + 0x3bb0c4;
  *(CDsp **)(this + 0x3bf6f4) = this + 0x3bd3c4;
  CDsp1::Init((CDsp1 *)this,this);
  CDsp2::Init((CDsp2 *)(this + 200),this);
  CSrc::Init((CSrc *)(this + 0x36fc20),this,param_1);
  InitializeCriticalSection((critical_section *)(this + 0x3bf700));
  return this;
}

