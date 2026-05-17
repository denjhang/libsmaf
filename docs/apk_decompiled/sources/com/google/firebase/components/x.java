package com.google.firebase.components;

import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class x extends com.google.firebase.components.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Set<Class<?>> f2592a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Set<Class<?>> f2593b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Set<Class<?>> f2594c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Set<Class<?>> f2595d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Set<Class<?>> f2596e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final f f2597f;

    private static class a implements c.a.b.a.c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Set<Class<?>> f2598a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final c.a.b.a.c f2599b;

        public a(Set<Class<?>> set, c.a.b.a.c cVar) {
            this.f2598a = set;
            this.f2599b = cVar;
        }
    }

    x(e<?> eVar, f fVar) {
        HashSet hashSet = new HashSet();
        HashSet hashSet2 = new HashSet();
        HashSet hashSet3 = new HashSet();
        HashSet hashSet4 = new HashSet();
        for (q qVar : eVar.a()) {
            if (qVar.b()) {
                if (qVar.d()) {
                    hashSet3.add(qVar.a());
                } else {
                    hashSet.add(qVar.a());
                }
            } else if (qVar.d()) {
                hashSet4.add(qVar.a());
            } else {
                hashSet2.add(qVar.a());
            }
        }
        if (!eVar.d().isEmpty()) {
            hashSet.add(c.a.b.a.c.class);
        }
        this.f2592a = Collections.unmodifiableSet(hashSet);
        this.f2593b = Collections.unmodifiableSet(hashSet2);
        this.f2594c = Collections.unmodifiableSet(hashSet3);
        this.f2595d = Collections.unmodifiableSet(hashSet4);
        this.f2596e = eVar.d();
        this.f2597f = fVar;
    }

    @Override // com.google.firebase.components.a, com.google.firebase.components.f
    public <T> T a(Class<T> cls) {
        if (!this.f2592a.contains(cls)) {
            throw new IllegalArgumentException(String.format("Attempting to request an undeclared dependency %s.", cls));
        }
        T t = (T) this.f2597f.a(cls);
        return !cls.equals(c.a.b.a.c.class) ? t : (T) new a(this.f2596e, (c.a.b.a.c) t);
    }

    @Override // com.google.firebase.components.f
    public <T> c.a.b.b.a<T> b(Class<T> cls) {
        if (this.f2593b.contains(cls)) {
            return this.f2597f.b(cls);
        }
        throw new IllegalArgumentException(String.format("Attempting to request an undeclared dependency Provider<%s>.", cls));
    }

    @Override // com.google.firebase.components.f
    public <T> c.a.b.b.a<Set<T>> c(Class<T> cls) {
        if (this.f2595d.contains(cls)) {
            return this.f2597f.c(cls);
        }
        throw new IllegalArgumentException(String.format("Attempting to request an undeclared dependency Provider<Set<%s>>.", cls));
    }

    @Override // com.google.firebase.components.a, com.google.firebase.components.f
    public <T> Set<T> d(Class<T> cls) {
        if (this.f2594c.contains(cls)) {
            return this.f2597f.d(cls);
        }
        throw new IllegalArgumentException(String.format("Attempting to request an undeclared dependency Set<%s>.", cls));
    }
}
