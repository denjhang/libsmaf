package com.google.firebase.components;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class p {

    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final e<?> f2575a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final Set<a> f2576b = new HashSet();

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final Set<a> f2577c = new HashSet();

        a(e<?> eVar) {
            this.f2575a = eVar;
        }

        e<?> a() {
            return this.f2575a;
        }

        void a(a aVar) {
            this.f2576b.add(aVar);
        }

        Set<a> b() {
            return this.f2576b;
        }

        void b(a aVar) {
            this.f2577c.add(aVar);
        }

        void c(a aVar) {
            this.f2577c.remove(aVar);
        }

        boolean c() {
            return this.f2576b.isEmpty();
        }

        boolean d() {
            return this.f2577c.isEmpty();
        }
    }

    private static class b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Class<?> f2578a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final boolean f2579b;

        private b(Class<?> cls, boolean z) {
            this.f2578a = cls;
            this.f2579b = z;
        }

        public boolean equals(Object obj) {
            if (!(obj instanceof b)) {
                return false;
            }
            b bVar = (b) obj;
            return bVar.f2578a.equals(this.f2578a) && bVar.f2579b == this.f2579b;
        }

        public int hashCode() {
            return ((this.f2578a.hashCode() ^ 1000003) * 1000003) ^ Boolean.valueOf(this.f2579b).hashCode();
        }
    }

    private static Set<a> a(Set<a> set) {
        HashSet hashSet = new HashSet();
        for (a aVar : set) {
            if (aVar.d()) {
                hashSet.add(aVar);
            }
        }
        return hashSet;
    }

    static void a(List<e<?>> list) {
        Set<a> setB = b(list);
        Set<a> setA = a(setB);
        int i = 0;
        while (!setA.isEmpty()) {
            a next = setA.iterator().next();
            setA.remove(next);
            i++;
            for (a aVar : next.b()) {
                aVar.c(next);
                if (aVar.d()) {
                    setA.add(aVar);
                }
            }
        }
        if (i == list.size()) {
            return;
        }
        ArrayList arrayList = new ArrayList();
        for (a aVar2 : setB) {
            if (!aVar2.d() && !aVar2.c()) {
                arrayList.add(aVar2.a());
            }
        }
        throw new r(arrayList);
    }

    private static Set<a> b(List<e<?>> list) {
        Set<a> set;
        HashMap map = new HashMap(list.size());
        Iterator<e<?>> it = list.iterator();
        while (true) {
            if (!it.hasNext()) {
                Iterator it2 = map.values().iterator();
                while (it2.hasNext()) {
                    for (a aVar : (Set) it2.next()) {
                        for (q qVar : aVar.a().a()) {
                            if (qVar.b() && (set = (Set) map.get(new b(qVar.a(), qVar.d()))) != null) {
                                for (a aVar2 : set) {
                                    aVar.a(aVar2);
                                    aVar2.b(aVar);
                                }
                            }
                        }
                    }
                }
                HashSet hashSet = new HashSet();
                Iterator it3 = map.values().iterator();
                while (it3.hasNext()) {
                    hashSet.addAll((Set) it3.next());
                }
                return hashSet;
            }
            e<?> next = it.next();
            a aVar3 = new a(next);
            for (Class<? super Object> cls : next.c()) {
                b bVar = new b(cls, !next.g());
                if (!map.containsKey(bVar)) {
                    map.put(bVar, new HashSet());
                }
                Set set2 = (Set) map.get(bVar);
                if (!set2.isEmpty() && !bVar.f2579b) {
                    throw new IllegalArgumentException(String.format("Multiple components provide %s.", cls));
                }
                set2.add(aVar3);
            }
        }
    }
}
