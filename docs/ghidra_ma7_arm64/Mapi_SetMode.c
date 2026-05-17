/* Mapi_SetMode @ 0017efcc 368B */


/* YAMAHA::Mapi_SetMode(unsigned int) */

undefined4 YAMAHA::Mapi_SetMode(uint param_1)

{
  undefined4 uVar1;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') {
    mapimachdep_UnlockApi();
    uVar1 = 0xfffffff8;
  }
  else if (param_1 - 1 < 2) {
    if (((((((DAT_00577f38 != 0) || (DAT_00577f88 != 0)) || (DAT_00577fd8 != 0)) ||
          ((DAT_00578028 != 0 || (DAT_00578078 != 0)))) ||
         ((DAT_005780c8 != 0 || ((DAT_00578118 != 0 || (DAT_00578168 != 0)))))) ||
        (DAT_005781b8 != 0)) ||
       ((((DAT_00578208 != 0 || (DAT_00578258 != 1)) || (DAT_00578280 != 1)) ||
        (((DAT_005782a8 != 1 || (DAT_005782d0 != 1)) ||
         ((DAT_005782f8 != 1 || ((DAT_00578320 != 0 || (DAT_00578350 != 0)))))))))) {
      mapimachdep_UnlockApi();
      return 0xffffffff;
    }
    DAT_00578268 = 100;
    DAT_0057826c = 0x40;
    DAT_00578270 = DAT_00578350;
    DAT_00578274 = DAT_00578350;
    DAT_00578290 = 100;
    DAT_00578294 = 0x40;
    DAT_00578298 = DAT_00578350;
    DAT_0057829c = DAT_00578350;
    DAT_005782b8 = 100;
    DAT_005782bc = 0x40;
    DAT_005782c0 = DAT_00578350;
    DAT_005782c4 = DAT_00578350;
    DAT_005782e0 = 100;
    DAT_005782e4 = 0x40;
    DAT_005782e8 = DAT_00578350;
    DAT_005782ec = DAT_00578350;
    DAT_00578308 = 100;
    DAT_0057830c = 0x40;
    DAT_00578310 = DAT_00578350;
    DAT_00578314 = DAT_00578350;
    DAT_00577e14 = param_1;
    mapimachdep_UnlockApi();
    uVar1 = 0;
  }
  else {
    mapimachdep_UnlockApi();
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

