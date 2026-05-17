/* EmuSetPath @ 0012c134 440B */


/* CM7_EmuSmw7App::EmuSetPath(char*, char*, char*) */

void __thiscall
CM7_EmuSmw7App::EmuSetPath(CM7_EmuSmw7App *this,char *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  char acStack_310 [8];
  char acStack_308 [256];
  char local_208 [32] [8];
  undefined4 local_108;
  undefined1 local_104;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (*(int *)(this + 0x4b8) == 2) {
LAB_0012c2e0:
    uVar2 = 0xffffffff;
  }
  else {
    if (param_1 == (char *)0x0) {
      if ((param_3 != (char *)0x0) && (sVar1 = strlen(param_3), 0xff < sVar1)) goto LAB_0012c2e0;
      DAT_00581ea0 = DAT_0027bb78;
      DAT_00581ea8[0] = s_EMU_dll_0027bb80[0];
      DAT_00581ea8[1] = s_EMU_dll_0027bb80[1];
      DAT_00581ea8[2] = s_EMU_dll_0027bb80[2];
      DAT_00581ea8[3] = s_EMU_dll_0027bb80[3];
      DAT_00581ea8[4] = s_EMU_dll_0027bb80[4];
      DAT_00581ea8[5] = s_EMU_dll_0027bb80[5];
      DAT_00581ea8[6] = s_EMU_dll_0027bb80[6];
      DAT_00581ea8[7] = s_EMU_dll_0027bb80[7];
    }
    else {
      sVar1 = strlen(param_1);
      if (0xff < sVar1) goto LAB_0012c2e0;
      if (param_3 != (char *)0x0) {
        sVar1 = strlen(param_3);
        if (0xff < sVar1) goto LAB_0012c2e0;
      }
      strcpy((char *)&DAT_00581ea0,param_1);
    }
    if (param_3 == (char *)0x0) {
      uVar2 = 0;
      DAT_00581c80._0_1_ = s_M7_EmuHw_i386_dll_0027bb50[0];
      DAT_00581c80._1_1_ = s_M7_EmuHw_i386_dll_0027bb50[1];
      DAT_00581c80._2_1_ = s_M7_EmuHw_i386_dll_0027bb50[2];
      DAT_00581c80._3_1_ = s_M7_EmuHw_i386_dll_0027bb50[3];
      DAT_00581c80._4_1_ = s_M7_EmuHw_i386_dll_0027bb50[4];
      DAT_00581c80._5_1_ = s_M7_EmuHw_i386_dll_0027bb50[5];
      DAT_00581c80._6_1_ = s_M7_EmuHw_i386_dll_0027bb50[6];
      DAT_00581c80._7_1_ = s_M7_EmuHw_i386_dll_0027bb50[7];
      DAT_00581c88._0_1_ = s_M7_EmuHw_i386_dll_0027bb50[8];
      DAT_00581c88._1_1_ = s_M7_EmuHw_i386_dll_0027bb50[9];
      DAT_00581c88._2_1_ = s_M7_EmuHw_i386_dll_0027bb50[10];
      DAT_00581c88._3_1_ = s_M7_EmuHw_i386_dll_0027bb50[0xb];
      DAT_00581c88._4_1_ = s_M7_EmuHw_i386_dll_0027bb50[0xc];
      DAT_00581c88._5_1_ = s_M7_EmuHw_i386_dll_0027bb50[0xd];
      DAT_00581c88._6_1_ = s_M7_EmuHw_i386_dll_0027bb50[0xe];
      DAT_00581c88._7_1_ = s_M7_EmuHw_i386_dll_0027bb50[0xf];
      DAT_00581c90._0_1_ = s_M7_EmuHw_i386_dll_0027bb50[0x10];
      DAT_00581c90._1_1_ = s_M7_EmuHw_i386_dll_0027bb50[0x11];
      DAT_00581d90 = DAT_0027bb68;
      DAT_00581d98 = DAT_0027bb70;
      DAT_00581fa4 = 0;
    }
    else {
      strcpy((char *)&DAT_00581c80,param_3);
      _splitpath(param_3,acStack_310,acStack_308,local_208[0],(char *)&local_108);
      local_208[0][0] = s_M7_HwIF_0027bb88[0];
      local_208[0][1] = s_M7_HwIF_0027bb88[1];
      local_208[0][2] = s_M7_HwIF_0027bb88[2];
      local_208[0][3] = s_M7_HwIF_0027bb88[3];
      local_208[0][4] = s_M7_HwIF_0027bb88[4];
      local_208[0][5] = s_M7_HwIF_0027bb88[5];
      local_208[0][6] = s_M7_HwIF_0027bb88[6];
      local_208[0][7] = s_M7_HwIF_0027bb88[7];
      local_108 = DAT_0027bb90;
      local_104 = DAT_0027bb94;
      _makepath((char *)&DAT_00581d90,acStack_310,acStack_308,local_208[0],(char *)&local_108);
      uVar2 = 0;
      DAT_00581fa4 = 1;
    }
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

