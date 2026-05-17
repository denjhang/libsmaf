package com.google.firebase.components;

import java.util.ArrayDeque;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Queue;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class u implements c.a.b.a.d, c.a.b.a.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Map<Class<?>, ConcurrentHashMap<c.a.b.a.b<Object>, Executor>> f2586a = new HashMap();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Queue<c.a.b.a.a<?>> f2587b = new ArrayDeque();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Executor f2588c;

    u(Executor executor) {
        this.f2588c = executor;
    }

    private synchronized Set<Map.Entry<c.a.b.a.b<Object>, Executor>> b(c.a.b.a.a<?> aVar) {
        ConcurrentHashMap<c.a.b.a.b<Object>, Executor> concurrentHashMap;
        concurrentHashMap = this.f2586a.get(aVar.b());
        return concurrentHashMap == null ? Collections.emptySet() : concurrentHashMap.entrySet();
    }

    void a() {
        Queue<c.a.b.a.a<?>> queue;
        synchronized (this) {
            if (this.f2587b != null) {
                queue = this.f2587b;
                this.f2587b = null;
            } else {
                queue = null;
            }
        }
        if (queue != null) {
            Iterator<c.a.b.a.a<?>> it = queue.iterator();
            while (it.hasNext()) {
                a(it.next());
            }
        }
    }

    public void a(c.a.b.a.a<?> aVar) {
        com.google.android.gms.common.internal.r.a(aVar);
        synchronized (this) {
            if (this.f2587b != null) {
                this.f2587b.add(aVar);
                return;
            }
            for (Map.Entry<c.a.b.a.b<Object>, Executor> entry : b(aVar)) {
                entry.getValue().execute(t.a(entry, aVar));
            }
        }
    }

    @Override // c.a.b.a.d
    public <T> void a(Class<T> cls, c.a.b.a.b<? super T> bVar) {
        a(cls, this.f2588c, bVar);
    }

    @Override // c.a.b.a.d
    public synchronized <T> void a(Class<T> cls, Executor executor, c.a.b.a.b<? super T> bVar) {
        com.google.android.gms.common.internal.r.a(cls);
        com.google.android.gms.common.internal.r.a(bVar);
        com.google.android.gms.common.internal.r.a(executor);
        if (!this.f2586a.containsKey(cls)) {
            this.f2586a.put(cls, new ConcurrentHashMap<>());
        }
        this.f2586a.get(cls).put(bVar, executor);
    }
}
