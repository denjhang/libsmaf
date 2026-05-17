package com.google.android.gms.internal.measurement;

import java.io.Serializable;
import java.util.Arrays;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Na<T> implements Ia<T>, Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final T f1536a;

    Na(T t) {
        this.f1536a = t;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof Na)) {
            return false;
        }
        T t = this.f1536a;
        T t2 = ((Na) obj).f1536a;
        if (t != t2) {
            return t != null && t.equals(t2);
        }
        return true;
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final T h() {
        return this.f1536a;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f1536a});
    }

    public final String toString() {
        String strValueOf = String.valueOf(this.f1536a);
        StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 22);
        sb.append("Suppliers.ofInstance(");
        sb.append(strValueOf);
        sb.append(")");
        return sb.toString();
    }
}
