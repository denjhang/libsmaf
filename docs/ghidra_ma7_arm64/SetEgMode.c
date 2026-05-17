/* SetEgMode @ 0015a8a0 160B */


/* ARM::CLpf::SetEgMode(ARM::_EGMODE) */

void __thiscall ARM::CLpf::SetEgMode(CLpf *this,int param_2)

{
  if (param_2 == 1) {
    if (((this[0x51] == (CLpf)0x0) && (*(undefined **)(this + 8) != PTR_CalcEg_RELEASE_005679d0)) &&
       (*(undefined **)(this + 8) != PTR_CalcEg_DEAD_00567f08)) {
      *(undefined **)(this + 8) = PTR_CalcEg_RELEASE_005679d0;
      return;
    }
  }
  else {
    if (param_2 == 0) {
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 4) = 0;
      *(undefined **)(this + 8) = PTR_CalcEg_DEAD_00567f08;
      return;
    }
    if (param_2 == 2) {
      if ((*(undefined **)(this + 8) == PTR_CalcEg_RELEASE_005679d0) ||
         (*(undefined **)(this + 8) == PTR_CalcEg_DEAD_00567f08)) {
        *(undefined **)(this + 8) = PTR_CalcEg_KEYON_00567500;
      }
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 4) = 0;
    }
  }
  return;
}

