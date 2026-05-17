package b.a.a.b;

import java.util.Iterator;
import java.util.Map;
import java.util.WeakHashMap;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b<K, V> implements Iterable<Map.Entry<K, V>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    c<K, V> f697a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private c<K, V> f698b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private WeakHashMap<f<K, V>, Boolean> f699c = new WeakHashMap<>();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f700d = 0;

    static class a<K, V> extends e<K, V> {
        a(c<K, V> cVar, c<K, V> cVar2) {
            super(cVar, cVar2);
        }

        @Override // b.a.a.b.b.e
        c<K, V> b(c<K, V> cVar) {
            return cVar.f704d;
        }

        @Override // b.a.a.b.b.e
        c<K, V> c(c<K, V> cVar) {
            return cVar.f703c;
        }
    }

    /* JADX INFO: renamed from: b.a.a.b.b$b, reason: collision with other inner class name */
    private static class C0012b<K, V> extends e<K, V> {
        C0012b(c<K, V> cVar, c<K, V> cVar2) {
            super(cVar, cVar2);
        }

        @Override // b.a.a.b.b.e
        c<K, V> b(c<K, V> cVar) {
            return cVar.f703c;
        }

        @Override // b.a.a.b.b.e
        c<K, V> c(c<K, V> cVar) {
            return cVar.f704d;
        }
    }

    static class c<K, V> implements Map.Entry<K, V> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final K f701a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        final V f702b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        c<K, V> f703c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        c<K, V> f704d;

        c(K k, V v) {
            this.f701a = k;
            this.f702b = v;
        }

        @Override // java.util.Map.Entry
        public boolean equals(Object obj) {
            if (obj == this) {
                return true;
            }
            if (!(obj instanceof c)) {
                return false;
            }
            c cVar = (c) obj;
            return this.f701a.equals(cVar.f701a) && this.f702b.equals(cVar.f702b);
        }

        @Override // java.util.Map.Entry
        public K getKey() {
            return this.f701a;
        }

        @Override // java.util.Map.Entry
        public V getValue() {
            return this.f702b;
        }

        @Override // java.util.Map.Entry
        public int hashCode() {
            return this.f701a.hashCode() ^ this.f702b.hashCode();
        }

        @Override // java.util.Map.Entry
        public V setValue(V v) {
            throw new UnsupportedOperationException("An entry modification is not supported");
        }

        public String toString() {
            return this.f701a + "=" + this.f702b;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public class d implements Iterator<Map.Entry<K, V>>, f<K, V> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private c<K, V> f705a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private boolean f706b = true;

        d() {
        }

        @Override // b.a.a.b.b.f
        public void a(c<K, V> cVar) {
            c<K, V> cVar2 = this.f705a;
            if (cVar == cVar2) {
                this.f705a = cVar2.f704d;
                this.f706b = this.f705a == null;
            }
        }

        @Override // java.util.Iterator
        public boolean hasNext() {
            if (this.f706b) {
                return b.this.f697a != null;
            }
            c<K, V> cVar = this.f705a;
            return (cVar == null || cVar.f703c == null) ? false : true;
        }

        @Override // java.util.Iterator
        public Map.Entry<K, V> next() {
            c<K, V> cVar;
            if (this.f706b) {
                this.f706b = false;
                cVar = b.this.f697a;
            } else {
                c<K, V> cVar2 = this.f705a;
                cVar = cVar2 != null ? cVar2.f703c : null;
            }
            this.f705a = cVar;
            return this.f705a;
        }
    }

    private static abstract class e<K, V> implements Iterator<Map.Entry<K, V>>, f<K, V> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        c<K, V> f708a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        c<K, V> f709b;

        e(c<K, V> cVar, c<K, V> cVar2) {
            this.f708a = cVar2;
            this.f709b = cVar;
        }

        private c<K, V> a() {
            c<K, V> cVar = this.f709b;
            c<K, V> cVar2 = this.f708a;
            if (cVar == cVar2 || cVar2 == null) {
                return null;
            }
            return c(cVar);
        }

        @Override // b.a.a.b.b.f
        public void a(c<K, V> cVar) {
            if (this.f708a == cVar && cVar == this.f709b) {
                this.f709b = null;
                this.f708a = null;
            }
            c<K, V> cVar2 = this.f708a;
            if (cVar2 == cVar) {
                this.f708a = b(cVar2);
            }
            if (this.f709b == cVar) {
                this.f709b = a();
            }
        }

        abstract c<K, V> b(c<K, V> cVar);

        abstract c<K, V> c(c<K, V> cVar);

        @Override // java.util.Iterator
        public boolean hasNext() {
            return this.f709b != null;
        }

        @Override // java.util.Iterator
        public Map.Entry<K, V> next() {
            c<K, V> cVar = this.f709b;
            this.f709b = a();
            return cVar;
        }
    }

    interface f<K, V> {
        void a(c<K, V> cVar);
    }

    protected c<K, V> a(K k) {
        c<K, V> cVar = this.f697a;
        while (cVar != null && !cVar.f701a.equals(k)) {
            cVar = cVar.f703c;
        }
        return cVar;
    }

    protected c<K, V> a(K k, V v) {
        c<K, V> cVar = new c<>(k, v);
        this.f700d++;
        c<K, V> cVar2 = this.f698b;
        if (cVar2 == null) {
            this.f697a = cVar;
            this.f698b = this.f697a;
            return cVar;
        }
        cVar2.f703c = cVar;
        cVar.f704d = cVar2;
        this.f698b = cVar;
        return cVar;
    }

    public Map.Entry<K, V> a() {
        return this.f697a;
    }

    public b<K, V>.d b() {
        b<K, V>.d dVar = new d();
        this.f699c.put(dVar, false);
        return dVar;
    }

    public V b(K k, V v) {
        c<K, V> cVarA = a(k);
        if (cVarA != null) {
            return cVarA.f702b;
        }
        a(k, v);
        return null;
    }

    public Map.Entry<K, V> c() {
        return this.f698b;
    }

    public Iterator<Map.Entry<K, V>> descendingIterator() {
        C0012b c0012b = new C0012b(this.f698b, this.f697a);
        this.f699c.put(c0012b, false);
        return c0012b;
    }

    public boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        if (size() != bVar.size()) {
            return false;
        }
        Iterator<Map.Entry<K, V>> it = iterator();
        Iterator<Map.Entry<K, V>> it2 = bVar.iterator();
        while (it.hasNext() && it2.hasNext()) {
            Map.Entry<K, V> next = it.next();
            Map.Entry<K, V> next2 = it2.next();
            if ((next == null && next2 != null) || (next != null && !next.equals(next2))) {
                return false;
            }
        }
        return (it.hasNext() || it2.hasNext()) ? false : true;
    }

    public int hashCode() {
        Iterator<Map.Entry<K, V>> it = iterator();
        int iHashCode = 0;
        while (it.hasNext()) {
            iHashCode += it.next().hashCode();
        }
        return iHashCode;
    }

    @Override // java.lang.Iterable
    public Iterator<Map.Entry<K, V>> iterator() {
        a aVar = new a(this.f697a, this.f698b);
        this.f699c.put(aVar, false);
        return aVar;
    }

    public V remove(K k) {
        c<K, V> cVarA = a(k);
        if (cVarA == null) {
            return null;
        }
        this.f700d--;
        if (!this.f699c.isEmpty()) {
            Iterator<f<K, V>> it = this.f699c.keySet().iterator();
            while (it.hasNext()) {
                it.next().a(cVarA);
            }
        }
        c<K, V> cVar = cVarA.f704d;
        if (cVar != null) {
            cVar.f703c = cVarA.f703c;
        } else {
            this.f697a = cVarA.f703c;
        }
        c<K, V> cVar2 = cVarA.f703c;
        if (cVar2 != null) {
            cVar2.f704d = cVarA.f704d;
        } else {
            this.f698b = cVarA.f704d;
        }
        cVarA.f703c = null;
        cVarA.f704d = null;
        return cVarA.f702b;
    }

    public int size() {
        return this.f700d;
    }

    public String toString() {
        StringBuilder sb = new StringBuilder();
        sb.append("[");
        Iterator<Map.Entry<K, V>> it = iterator();
        while (it.hasNext()) {
            sb.append(it.next().toString());
            if (it.hasNext()) {
                sb.append(", ");
            }
        }
        sb.append("]");
        return sb.toString();
    }
}
