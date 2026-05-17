package com.google.android.gms.internal.measurement;

import android.util.Log;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.za, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0247za extends AbstractC0217ua<Boolean> {
    C0247za(Aa aa, String str, Boolean bool) {
        super(aa, str, bool, null);
    }

    @Override // com.google.android.gms.internal.measurement.AbstractC0217ua
    final /* synthetic */ Boolean a(Object obj) {
        if (obj instanceof Boolean) {
            return (Boolean) obj;
        }
        if (obj instanceof String) {
            String str = (String) obj;
            if (C0112ea.f1678c.matcher(str).matches()) {
                return true;
            }
            if (C0112ea.f1679d.matcher(str).matches()) {
                return false;
            }
        }
        String strB = super.b();
        String strValueOf = String.valueOf(obj);
        StringBuilder sb = new StringBuilder(String.valueOf(strB).length() + 28 + String.valueOf(strValueOf).length());
        sb.append("Invalid boolean value for ");
        sb.append(strB);
        sb.append(": ");
        sb.append(strValueOf);
        Log.e("PhenotypeFlag", sb.toString());
        return null;
    }
}
