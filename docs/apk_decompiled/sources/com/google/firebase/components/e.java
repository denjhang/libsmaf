package com.google.firebase.components;

import java.util.Arrays;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class e<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Set<Class<? super T>> f2552a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Set<q> f2553b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final int f2554c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final int f2555d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final i<T> f2556e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Set<Class<?>> f2557f;

    public static class a<T> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Set<Class<? super T>> f2558a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final Set<q> f2559b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private int f2560c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private int f2561d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private i<T> f2562e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private Set<Class<?>> f2563f;

        @SafeVarargs
        private a(Class<T> cls, Class<? super T>... clsArr) {
            this.f2558a = new HashSet();
            this.f2559b = new HashSet();
            this.f2560c = 0;
            this.f2561d = 0;
            this.f2563f = new HashSet();
            com.google.android.gms.common.internal.r.a(cls, "Null interface");
            this.f2558a.add(cls);
            for (Class<? super T> cls2 : clsArr) {
                com.google.android.gms.common.internal.r.a(cls2, "Null interface");
            }
            Collections.addAll(this.f2558a, clsArr);
        }

        private a<T> a(int i) {
            com.google.android.gms.common.internal.r.b(this.f2560c == 0, "Instantiation type has already been set.");
            this.f2560c = i;
            return this;
        }

        static /* synthetic */ a a(a aVar) {
            aVar.d();
            return aVar;
        }

        private void a(Class<?> cls) {
            com.google.android.gms.common.internal.r.a(!this.f2558a.contains(cls), "Components are not allowed to depend on interfaces they themselves provide.");
        }

        private a<T> d() {
            this.f2561d = 1;
            return this;
        }

        public a<T> a() {
            a(1);
            return this;
        }

        public a<T> a(i<T> iVar) {
            com.google.android.gms.common.internal.r.a(iVar, "Null factory");
            this.f2562e = iVar;
            return this;
        }

        public a<T> a(q qVar) {
            com.google.android.gms.common.internal.r.a(qVar, "Null dependency");
            a(qVar.a());
            this.f2559b.add(qVar);
            return this;
        }

        public e<T> b() {
            com.google.android.gms.common.internal.r.b(this.f2562e != null, "Missing required property: factory.");
            return new e<>(new HashSet(this.f2558a), new HashSet(this.f2559b), this.f2560c, this.f2561d, this.f2562e, this.f2563f);
        }

        public a<T> c() {
            a(2);
            return this;
        }
    }

    private e(Set<Class<? super T>> set, Set<q> set2, int i, int i2, i<T> iVar, Set<Class<?>> set3) {
        this.f2552a = Collections.unmodifiableSet(set);
        this.f2553b = Collections.unmodifiableSet(set2);
        this.f2554c = i;
        this.f2555d = i2;
        this.f2556e = iVar;
        this.f2557f = Collections.unmodifiableSet(set3);
    }

    public static <T> a<T> a(Class<T> cls) {
        return new a<>(cls, new Class[0]);
    }

    @SafeVarargs
    public static <T> a<T> a(Class<T> cls, Class<? super T>... clsArr) {
        return new a<>(cls, clsArr);
    }

    public static <T> e<T> a(T t, Class<T> cls) {
        a aVarB = b(cls);
        aVarB.a(c.a(t));
        return aVarB.b();
    }

    @SafeVarargs
    public static <T> e<T> a(T t, Class<T> cls, Class<? super T>... clsArr) {
        a aVarA = a(cls, clsArr);
        aVarA.a(b.a(t));
        return aVarA.b();
    }

    static /* synthetic */ Object a(Object obj, f fVar) {
        return obj;
    }

    public static <T> a<T> b(Class<T> cls) {
        a<T> aVarA = a(cls);
        a.a(aVarA);
        return aVarA;
    }

    static /* synthetic */ Object b(Object obj, f fVar) {
        return obj;
    }

    public Set<q> a() {
        return this.f2553b;
    }

    public i<T> b() {
        return this.f2556e;
    }

    public Set<Class<? super T>> c() {
        return this.f2552a;
    }

    public Set<Class<?>> d() {
        return this.f2557f;
    }

    public boolean e() {
        return this.f2554c == 1;
    }

    public boolean f() {
        return this.f2554c == 2;
    }

    public boolean g() {
        return this.f2555d == 0;
    }

    public String toString() {
        return "Component<" + Arrays.toString(this.f2552a.toArray()) + ">{" + this.f2554c + ", type=" + this.f2555d + ", deps=" + Arrays.toString(this.f2553b.toArray()) + "}";
    }
}
