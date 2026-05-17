package com.google.android.gms.common.stats;

import com.google.android.gms.common.internal.ReflectedParcelable;
import com.google.android.gms.common.internal.safeparcel.AbstractSafeParcelable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class StatsEvent extends AbstractSafeParcelable implements ReflectedParcelable {
    public abstract int a();

    public abstract long b();

    public abstract long c();

    public abstract String d();

    public String toString() {
        long jB = b();
        int iA = a();
        long jC = c();
        String strD = d();
        StringBuilder sb = new StringBuilder(String.valueOf(strD).length() + 53);
        sb.append(jB);
        sb.append("\t");
        sb.append(iA);
        sb.append("\t");
        sb.append(jC);
        sb.append(strD);
        return sb.toString();
    }
}
