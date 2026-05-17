/* GetGenerate @ 00129698 28B */


/* CSmwCtrl::GetGenerate(unsigned char*, int) */

undefined8 __thiscall CSmwCtrl::GetGenerate(CSmwCtrl *this,uchar *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (0 < param_2) {
    uVar1 = GetGenerateData(param_1,param_2);
    return uVar1;
  }
  return 0;
}

