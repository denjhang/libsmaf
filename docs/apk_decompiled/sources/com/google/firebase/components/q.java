package com.google.firebase.components;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Class<?> f2580a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f2581b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final int f2582c;

    private q(Class<?> cls, int i, int i2) {
        com.google.android.gms.common.internal.r.a(cls, "Null dependency anInterface.");
        this.f2580a = cls;
        this.f2581b = i;
        this.f2582c = i2;
    }

    public static q a(Class<?> cls) {
        return new q(cls, 1, 0);
    }

    public static q b(Class<?> cls) {
        return new q(cls, 2, 0);
    }

    public Class<?> a() {
        return this.f2580a;
    }

    public boolean b() {
        return this.f2582c == 0;
    }

    public boolean c() {
        return this.f2581b == 1;
    }

    public boolean d() {
        return this.f2581b == 2;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof q)) {
            return false;
        }
        q qVar = (q) obj;
        return this.f2580a == qVar.f2580a && this.f2581b == qVar.f2581b && this.f2582c == qVar.f2582c;
    }

    public int hashCode() {
        return ((((this.f2580a.hashCode() ^ 1000003) * 1000003) ^ this.f2581b) * 1000003) ^ this.f2582c;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder("Dependency{anInterface=");
        sb.append(this.f2580a);
        sb.append(", type=");
        int i = this.f2581b;
        sb.append(i == 1 ? "required" : i == 0 ? "optional" : "set");
        sb.append(", direct=");
        sb.append(this.f2582c == 0);
        sb.append("}");
        return sb.toString();
    }
}
