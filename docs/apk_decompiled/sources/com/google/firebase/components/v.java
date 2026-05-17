package com.google.firebase.components;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class v<T> implements c.a.b.b.a<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f2589a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private volatile Object f2590b = f2589a;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private volatile c.a.b.b.a<T> f2591c;

    public v(c.a.b.b.a<T> aVar) {
        this.f2591c = aVar;
    }

    @Override // c.a.b.b.a
    public T get() {
        T t = (T) this.f2590b;
        if (t == f2589a) {
            synchronized (this) {
                t = (T) this.f2590b;
                if (t == f2589a) {
                    t = this.f2591c.get();
                    this.f2590b = t;
                    this.f2591c = null;
                }
            }
        }
        return t;
    }
}
