package com.google.firebase.components;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class n extends a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final c.a.b.b.a<Set<Object>> f2570a = m.a();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Map<e<?>, v<?>> f2571b = new HashMap();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Map<Class<?>, v<?>> f2572c = new HashMap();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Map<Class<?>, v<Set<?>>> f2573d = new HashMap();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final u f2574e;

    public n(Executor executor, Iterable<j> iterable, e<?>... eVarArr) {
        this.f2574e = new u(executor);
        ArrayList<e<?>> arrayList = new ArrayList();
        arrayList.add(e.a(this.f2574e, u.class, c.a.b.a.d.class, c.a.b.a.c.class));
        Iterator<j> it = iterable.iterator();
        while (it.hasNext()) {
            arrayList.addAll(it.next().getComponents());
        }
        Collections.addAll(arrayList, eVarArr);
        p.a(arrayList);
        for (e<?> eVar : arrayList) {
            this.f2571b.put(eVar, new v<>(k.a(this, eVar)));
        }
        a();
        b();
    }

    static /* synthetic */ Set a(Set set) {
        HashSet hashSet = new HashSet();
        Iterator it = set.iterator();
        while (it.hasNext()) {
            hashSet.add(((v) it.next()).get());
        }
        return Collections.unmodifiableSet(hashSet);
    }

    private void a() {
        for (Map.Entry<e<?>, v<?>> entry : this.f2571b.entrySet()) {
            e<?> key = entry.getKey();
            if (key.g()) {
                v<?> value = entry.getValue();
                Iterator<Class<? super Object>> it = key.c().iterator();
                while (it.hasNext()) {
                    this.f2572c.put(it.next(), value);
                }
            }
        }
        c();
    }

    private void b() {
        HashMap map = new HashMap();
        for (Map.Entry<e<?>, v<?>> entry : this.f2571b.entrySet()) {
            e<?> key = entry.getKey();
            if (!key.g()) {
                v<?> value = entry.getValue();
                for (Class<? super Object> cls : key.c()) {
                    if (!map.containsKey(cls)) {
                        map.put(cls, new HashSet());
                    }
                    ((Set) map.get(cls)).add(value);
                }
            }
        }
        for (Map.Entry entry2 : map.entrySet()) {
            this.f2573d.put((Class) entry2.getKey(), new v<>(l.a((Set) entry2.getValue())));
        }
    }

    private void c() {
        for (e<?> eVar : this.f2571b.keySet()) {
            for (q qVar : eVar.a()) {
                if (qVar.c() && !this.f2572c.containsKey(qVar.a())) {
                    throw new w(String.format("Unsatisfied dependency for component %s: %s", eVar, qVar.a()));
                }
            }
        }
    }

    @Override // com.google.firebase.components.a, com.google.firebase.components.f
    public /* bridge */ /* synthetic */ Object a(Class cls) {
        return super.a(cls);
    }

    public void a(boolean z) {
        for (Map.Entry<e<?>, v<?>> entry : this.f2571b.entrySet()) {
            e<?> key = entry.getKey();
            v<?> value = entry.getValue();
            if (key.e() || (key.f() && z)) {
                value.get();
            }
        }
        this.f2574e.a();
    }

    @Override // com.google.firebase.components.f
    public <T> c.a.b.b.a<T> b(Class<T> cls) {
        com.google.android.gms.common.internal.r.a(cls, "Null interface requested.");
        return this.f2572c.get(cls);
    }

    @Override // com.google.firebase.components.f
    public <T> c.a.b.b.a<Set<T>> c(Class<T> cls) {
        v<Set<?>> vVar = this.f2573d.get(cls);
        return vVar != null ? vVar : (c.a.b.b.a<Set<T>>) f2570a;
    }

    @Override // com.google.firebase.components.a, com.google.firebase.components.f
    public /* bridge */ /* synthetic */ Set d(Class cls) {
        return super.d(cls);
    }
}
