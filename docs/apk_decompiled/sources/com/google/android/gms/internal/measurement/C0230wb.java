package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Jb;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.wb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class C0230wb {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static volatile C0230wb f1850b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static volatile C0230wb f1851c;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Map<a, Jb.f<?, ?>> f1853e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Class<?> f1849a = c();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final C0230wb f1852d = new C0230wb(true);

    /* JADX INFO: renamed from: com.google.android.gms.internal.measurement.wb$a */
    static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Object f1854a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final int f1855b;

        a(Object obj, int i) {
            this.f1854a = obj;
            this.f1855b = i;
        }

        public final boolean equals(Object obj) {
            if (!(obj instanceof a)) {
                return false;
            }
            a aVar = (a) obj;
            return this.f1854a == aVar.f1854a && this.f1855b == aVar.f1855b;
        }

        public final int hashCode() {
            return (System.identityHashCode(this.f1854a) * 65535) + this.f1855b;
        }
    }

    C0230wb() {
        this.f1853e = new HashMap();
    }

    private C0230wb(boolean z) {
        this.f1853e = Collections.emptyMap();
    }

    public static C0230wb a() {
        C0230wb c0230wb = f1850b;
        if (c0230wb == null) {
            synchronized (C0230wb.class) {
                c0230wb = f1850b;
                if (c0230wb == null) {
                    c0230wb = f1852d;
                    f1850b = c0230wb;
                }
            }
        }
        return c0230wb;
    }

    public static C0230wb b() {
        C0230wb c0230wbA = f1851c;
        if (c0230wbA == null) {
            synchronized (C0230wb.class) {
                c0230wbA = f1851c;
                if (c0230wbA == null) {
                    c0230wbA = Hb.a(C0230wb.class);
                    f1851c = c0230wbA;
                }
            }
        }
        return c0230wbA;
    }

    private static Class<?> c() {
        try {
            return Class.forName("com.google.protobuf.Extension");
        } catch (ClassNotFoundException unused) {
            return null;
        }
    }

    public final <ContainingType extends InterfaceC0219uc> Jb.f<ContainingType, ?> a(ContainingType containingtype, int i) {
        return (Jb.f) this.f1853e.get(new a(containingtype, i));
    }
}
