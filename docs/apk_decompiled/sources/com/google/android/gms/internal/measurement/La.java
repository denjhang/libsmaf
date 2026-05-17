package com.google.android.gms.internal.measurement;

import java.io.Serializable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class La<T> implements Ia<T>, Serializable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Ia<T> f1497a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private volatile transient boolean f1498b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private transient T f1499c;

    La(Ia<T> ia) {
        Ga.a(ia);
        this.f1497a = ia;
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final T h() {
        if (!this.f1498b) {
            synchronized (this) {
                if (!this.f1498b) {
                    T tH = this.f1497a.h();
                    this.f1499c = tH;
                    this.f1498b = true;
                    return tH;
                }
            }
        }
        return this.f1499c;
    }

    public final String toString() {
        Object string;
        if (this.f1498b) {
            String strValueOf = String.valueOf(this.f1499c);
            StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 25);
            sb.append("<supplier that returned ");
            sb.append(strValueOf);
            sb.append(">");
            string = sb.toString();
        } else {
            string = this.f1497a;
        }
        String strValueOf2 = String.valueOf(string);
        StringBuilder sb2 = new StringBuilder(String.valueOf(strValueOf2).length() + 19);
        sb2.append("Suppliers.memoize(");
        sb2.append(strValueOf2);
        sb2.append(")");
        return sb2.toString();
    }
}
