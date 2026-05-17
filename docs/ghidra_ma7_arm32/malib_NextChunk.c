/* malib_NextChunk @ 000958a4 608B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::malib_NextChunk(unsigned char*, unsigned int, unsigned int, unsigned int*, unsigned int*)
    */

uint YAMAHA::malib_NextChunk(uchar *param_1,uint param_2,uint param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0xfffffffe;
  }
  uVar2 = (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18 | (uint)param_1[3] |
          (uint)param_1[2] << 8;
  uVar1 = (uint)param_1[7] | (uint)param_1[5] << 0x10 | (uint)param_1[4] << 0x18 |
          (uint)param_1[6] << 8;
  if (uVar2 == 0x4d687673) {
    *param_4 = 0x36;
joined_r0x00095a6a:
    if (param_3 != 7) {
      return 0xffffffff;
    }
    goto LAB_000959c4;
  }
  if (0x4d687673 < uVar2) {
    if (uVar2 == 0x4d747370) {
      *param_4 = 0x33;
    }
    else if (uVar2 < 0x4d747371) {
      if (uVar2 == 0x4d737049) {
        *param_4 = 0x30;
      }
      else {
        if (uVar2 != 0x4d746876) goto LAB_00095926;
        *param_4 = 0x35;
      }
    }
    else if (uVar2 == 0x4d747375) {
      *param_4 = 0x31;
    }
    else {
      if (uVar2 == 0x4f504441) {
        *param_4 = 2;
        goto joined_r0x00095976;
      }
      if (uVar2 != 0x4d747371) goto LAB_00095926;
      *param_4 = 0x32;
    }
    if (param_3 != 3) {
      return 0xffffffff;
    }
    goto LAB_000959c4;
  }
  if (uVar2 == 0x41747375) {
    *param_4 = 0x41;
  }
  else {
    if (0x41747375 < uVar2) {
      if (uVar2 == 0x4d4d4d44) {
        *param_4 = 0;
        if (param_3 != 0) {
          return 0xffffffff;
        }
        goto LAB_000959c4;
      }
      if (uVar2 == 0x4d687363) {
        *param_4 = 0x38;
        goto joined_r0x00095a6a;
      }
      if (uVar2 == 0x434e5449) {
        *param_4 = 1;
        if (param_3 != 1) {
          return 0xffffffff;
        }
        goto LAB_000959c4;
      }
LAB_00095926:
      uVar2 = (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18 | (uint)param_1[2] << 8;
      *param_5 = (uint)param_1[3];
      if (uVar2 == 0x48565000) {
        *param_4 = 0x37;
        goto joined_r0x00095a6a;
      }
      if (uVar2 < 0x48565001) {
        if (uVar2 == 0x41776100) {
          *param_4 = 0x43;
          goto joined_r0x00095a76;
        }
        if (uVar2 == 0x44636800) {
          *param_4 = 0x20;
joined_r0x00095af0:
          if (param_3 != 5) {
            return 0xffffffff;
          }
          goto LAB_000959c4;
        }
        if (uVar2 != 0x41545200) {
LAB_00095aa6:
          *param_4 = 0xff;
          goto LAB_000959c4;
        }
        *param_4 = 4;
      }
      else {
        if (uVar2 == 0x4d776100) {
          *param_4 = 0x3f;
          if (param_3 != 6) {
            return 0xffffffff;
          }
          goto LAB_000959c4;
        }
        if (uVar2 == 0x50726f00) {
          *param_4 = 0x21;
          goto joined_r0x00095af0;
        }
        if (uVar2 != 0x4d545200) goto LAB_00095aa6;
        *param_4 = 3;
      }
joined_r0x00095976:
      if (param_3 != 2) {
        return 0xffffffff;
      }
      goto LAB_000959c4;
    }
    if (uVar2 == 0x41737049) {
      *param_4 = 0x40;
    }
    else {
      if (uVar2 != 0x41747371) goto LAB_00095926;
      *param_4 = 0x42;
    }
  }
joined_r0x00095a76:
  if (param_3 != 4) {
    return 0xffffffff;
  }
LAB_000959c4:
  if (uVar1 <= param_2 - 8) {
    return uVar1;
  }
  return 0xfffffffe;
}

