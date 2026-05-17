package com.google.android.gms.internal.measurement;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Oa<T> implements Ia<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private volatile Ia<T> f1540a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private volatile boolean f1541b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private T f1542c;

    Oa(Ia<T> ia) {
        Ga.a(ia);
        this.f1540a = ia;
    }

    @Override // com.google.android.gms.internal.measurement.Ia
    public final T h() {
        if (!this.f1541b) {
            synchronized (this) {
                if (!this.f1541b) {
                    T tH = this.f1540a.h();
                    this.f1542c = tH;
                    this.f1541b = true;
                    this.f1540a = null;
                    return tH;
                }
            }
        }
        return this.f1542c;
    }

    public final String toString() {
        Object string = this.f1540a;
        if (string == null) {
            String strValueOf = String.valueOf(this.f1542c);
            StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 25);
            sb.append("<supplier that returned ");
            sb.append(strValueOf);
            sb.append(">");
            string = sb.toString();
        }
        String strValueOf2 = String.valueOf(string);
        StringBuilder sb2 = new StringBuilder(String.valueOf(strValueOf2).length() + 19);
        sb2.append("Suppliers.memoize(");
        sb2.append(strValueOf2);
        sb2.append(")");
        return sb2.toString();
    }
}
