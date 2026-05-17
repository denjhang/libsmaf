/* GetGenerate @ 0002ee18 16B */


/* CSmwCtrl::GetGenerate(unsigned char*, int) */

undefined4 __thiscall CSmwCtrl::GetGenerate(CSmwCtrl *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (0 < param_2) {
    uVar1 = GetGenerateData(param_1,param_2);
    return uVar1;
  }
  return 0;
}

