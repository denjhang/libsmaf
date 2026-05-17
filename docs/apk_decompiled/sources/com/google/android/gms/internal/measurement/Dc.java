package com.google.android.gms.internal.measurement;

import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Dc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Dc f1431a = new Dc();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final ConcurrentMap<Class<?>, Ic<?>> f1433c = new ConcurrentHashMap();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Kc f1432b = new C0135hc();

    private Dc() {
    }

    public static Dc a() {
        return f1431a;
    }

    public final <T> Ic<T> a(Class<T> cls) {
        Lb.a(cls, "messageType");
        Ic<T> ic = (Ic) this.f1433c.get(cls);
        if (ic != null) {
            return ic;
        }
        Ic<T> icA = this.f1432b.a(cls);
        Lb.a(cls, "messageType");
        Lb.a(icA, "schema");
        Ic<T> ic2 = (Ic) this.f1433c.putIfAbsent(cls, icA);
        return ic2 != null ? ic2 : icA;
    }

    public final <T> Ic<T> a(T t) {
        return a((Class) t.getClass());
    }
}
