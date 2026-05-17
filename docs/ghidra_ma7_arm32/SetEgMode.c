/* SetEgMode @ 000530b8 118B */


/* ARM::CLpf::SetEgMode(ARM::_EGMODE) */

void __thiscall ARM::CLpf::SetEgMode(CLpf *this,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00053134;
  iVar2 = DAT_00053130 + 0x530c2;
  if (param_2 == 1) {
    if (this[0x35] == (CLpf)0x0) {
      if (*(int *)(this + 8) != *(int *)(iVar2 + DAT_00053138)) {
        if (*(int *)(this + 8) != *(int *)(iVar2 + DAT_00053134)) {
          *(int *)(this + 8) = *(int *)(iVar2 + DAT_00053138);
        }
        return;
      }
    }
  }
  else {
    if (param_2 == 2) {
      if ((*(int *)(this + 8) == *(int *)(iVar2 + DAT_00053138)) ||
         (*(int *)(this + 8) == *(int *)(iVar2 + DAT_00053134))) {
        *(undefined4 *)(this + 8) = *(undefined4 *)(iVar2 + DAT_0005313c);
      }
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 4) = 0;
      return;
    }
    if (param_2 == 0) {
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)(this + 8) = *(undefined4 *)(iVar2 + iVar1);
      return;
    }
  }
  return;
}

