package b.b;

import java.lang.reflect.Array;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.NoSuchElementException;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class g<K, V> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    g<K, V>.b f721a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    g<K, V>.c f722b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    g<K, V>.e f723c;

    final class a<T> implements Iterator<T> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final int f724a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        int f725b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        int f726c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        boolean f727d = false;

        a(int i) {
            this.f724a = i;
            this.f725b = g.this.c();
        }

        @Override // java.util.Iterator
        public boolean hasNext() {
            return this.f726c < this.f725b;
        }

        @Override // java.util.Iterator
        public T next() {
            if (!hasNext()) {
                throw new NoSuchElementException();
            }
            T t = (T) g.this.a(this.f726c, this.f724a);
            this.f726c++;
            this.f727d = true;
            return t;
        }

        @Override // java.util.Iterator
        public void remove() {
            if (!this.f727d) {
                throw new IllegalStateException();
            }
            this.f726c--;
            this.f725b--;
            this.f727d = false;
            g.this.a(this.f726c);
        }
    }

    final class b implements Set<Map.Entry<K, V>> {
        b() {
        }

        public boolean a(Map.Entry<K, V> entry) {
            throw new UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public /* bridge */ /* synthetic */ boolean add(Object obj) {
            a((Map.Entry) obj);
            throw null;
        }

        @Override // java.util.Set, java.util.Collection
        public boolean addAll(Collection<? extends Map.Entry<K, V>> collection) {
            int iC = g.this.c();
            for (Map.Entry<K, V> entry : collection) {
                g.this.a(entry.getKey(), entry.getValue());
            }
            return iC != g.this.c();
        }

        @Override // java.util.Set, java.util.Collection
        public void clear() {
            g.this.a();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean contains(Object obj) {
            if (!(obj instanceof Map.Entry)) {
                return false;
            }
            Map.Entry entry = (Map.Entry) obj;
            int iA = g.this.a(entry.getKey());
            if (iA < 0) {
                return false;
            }
            return b.b.e.a(g.this.a(iA, 1), entry.getValue());
        }

        @Override // java.util.Set, java.util.Collection
        public boolean containsAll(Collection<?> collection) {
            Iterator<?> it = collection.iterator();
            while (it.hasNext()) {
                if (!contains(it.next())) {
                    return false;
                }
            }
            return true;
        }

        @Override // java.util.Set, java.util.Collection
        public boolean equals(Object obj) {
            return g.a((Set) this, obj);
        }

        @Override // java.util.Set, java.util.Collection
        public int hashCode() {
            int iHashCode = 0;
            for (int iC = g.this.c() - 1; iC >= 0; iC--) {
                Object objA = g.this.a(iC, 0);
                Object objA2 = g.this.a(iC, 1);
                iHashCode += (objA == null ? 0 : objA.hashCode()) ^ (objA2 == null ? 0 : objA2.hashCode());
            }
            return iHashCode;
        }

        @Override // java.util.Set, java.util.Collection
        public boolean isEmpty() {
            return g.this.c() == 0;
        }

        @Override // java.util.Set, java.util.Collection, java.lang.Iterable
        public Iterator<Map.Entry<K, V>> iterator() {
            return new d();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean remove(Object obj) {
            throw new UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean removeAll(Collection<?> collection) {
            throw new UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean retainAll(Collection<?> collection) {
            throw new UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public int size() {
            return g.this.c();
        }

        @Override // java.util.Set, java.util.Collection
        public Object[] toArray() {
            throw new UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public <T> T[] toArray(T[] tArr) {
            throw new UnsupportedOperationException();
        }
    }

    final class c implements Set<K> {
        c() {
        }

        @Override // java.util.Set, java.util.Collection
        public boolean add(K k) {
            throw new UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean addAll(Collection<? extends K> collection) {
            throw new UnsupportedOperationException();
        }

        @Override // java.util.Set, java.util.Collection
        public void clear() {
            g.this.a();
        }

        @Override // java.util.Set, java.util.Collection
        public boolean contains(Object obj) {
            return g.this.a(obj) >= 0;
        }

        @Override // java.util.Set, java.util.Collection
        public boolean containsAll(Collection<?> collection) {
            return g.a((Map) g.this.b(), collection);
        }

        @Override // java.util.Set, java.util.Collection
        public boolean equals(Object obj) {
            return g.a((Set) this, obj);
        }

        @Override // java.util.Set, java.util.Collection
        public int hashCode() {
            int iHashCode = 0;
            for (int iC = g.this.c() - 1; iC >= 0; iC--) {
                Object objA = g.this.a(iC, 0);
                iHashCode += objA == null ? 0 : objA.hashCode();
            }
            return iHashCode;
        }

        @Override // java.util.Set, java.util.Collection
        public boolean isEmpty() {
            return g.this.c() == 0;
        }

        @Override // java.util.Set, java.util.Collection, java.lang.Iterable
        public Iterator<K> iterator() {
            return new a(0);
        }

        @Override // java.util.Set, java.util.Collection
        public boolean remove(Object obj) {
            int iA = g.this.a(obj);
            if (iA < 0) {
                return false;
            }
            g.this.a(iA);
            return true;
        }

        @Override // java.util.Set, java.util.Collection
        public boolean removeAll(Collection<?> collection) {
            return g.b(g.this.b(), collection);
        }

        @Override // java.util.Set, java.util.Collection
        public boolean retainAll(Collection<?> collection) {
            return g.c(g.this.b(), collection);
        }

        @Override // java.util.Set, java.util.Collection
        public int size() {
            return g.this.c();
        }

        @Override // java.util.Set, java.util.Collection
        public Object[] toArray() {
            return g.this.b(0);
        }

        @Override // java.util.Set, java.util.Collection
        public <T> T[] toArray(T[] tArr) {
            return (T[]) g.this.a(tArr, 0);
        }
    }

    final class d implements Iterator<Map.Entry<K, V>>, Map.Entry<K, V> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        int f731a;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        boolean f733c = false;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        int f732b = -1;

        d() {
            this.f731a = g.this.c() - 1;
        }

        @Override // java.util.Map.Entry
        public boolean equals(Object obj) {
            if (!this.f733c) {
                throw new IllegalStateException("This container does not support retaining Map.Entry objects");
            }
            if (!(obj instanceof Map.Entry)) {
                return false;
            }
            Map.Entry entry = (Map.Entry) obj;
            return b.b.e.a(entry.getKey(), g.this.a(this.f732b, 0)) && b.b.e.a(entry.getValue(), g.this.a(this.f732b, 1));
        }

        @Override // java.util.Map.Entry
        public K getKey() {
            if (this.f733c) {
                return (K) g.this.a(this.f732b, 0);
            }
            throw new IllegalStateException("This container does not support retaining Map.Entry objects");
        }

        @Override // java.util.Map.Entry
        public V getValue() {
            if (this.f733c) {
                return (V) g.this.a(this.f732b, 1);
            }
            throw new IllegalStateException("This container does not support retaining Map.Entry objects");
        }

        @Override // java.util.Iterator
        public boolean hasNext() {
            return this.f732b < this.f731a;
        }

        @Override // java.util.Map.Entry
        public int hashCode() {
            if (!this.f733c) {
                throw new IllegalStateException("This container does not support retaining Map.Entry objects");
            }
            Object objA = g.this.a(this.f732b, 0);
            Object objA2 = g.this.a(this.f732b, 1);
            return (objA == null ? 0 : objA.hashCode()) ^ (objA2 != null ? objA2.hashCode() : 0);
        }

        @Override // java.util.Iterator
        public /* bridge */ /* synthetic */ Object next() {
            next();
            return this;
        }

        @Override // java.util.Iterator
        public Map.Entry<K, V> next() {
            if (!hasNext()) {
                throw new NoSuchElementException();
            }
            this.f732b++;
            this.f733c = true;
            return this;
        }

        @Override // java.util.Iterator
        public void remove() {
            if (!this.f733c) {
                throw new IllegalStateException();
            }
            g.this.a(this.f732b);
            this.f732b--;
            this.f731a--;
            this.f733c = false;
        }

        @Override // java.util.Map.Entry
        public V setValue(V v) {
            if (this.f733c) {
                return (V) g.this.a(this.f732b, v);
            }
            throw new IllegalStateException("This container does not support retaining Map.Entry objects");
        }

        public String toString() {
            return getKey() + "=" + getValue();
        }
    }

    final class e implements Collection<V> {
        e() {
        }

        @Override // java.util.Collection
        public boolean add(V v) {
            throw new UnsupportedOperationException();
        }

        @Override // java.util.Collection
        public boolean addAll(Collection<? extends V> collection) {
            throw new UnsupportedOperationException();
        }

        @Override // java.util.Collection
        public void clear() {
            g.this.a();
        }

        @Override // java.util.Collection
        public boolean contains(Object obj) {
            return g.this.b(obj) >= 0;
        }

        @Override // java.util.Collection
        public boolean containsAll(Collection<?> collection) {
            Iterator<?> it = collection.iterator();
            while (it.hasNext()) {
                if (!contains(it.next())) {
                    return false;
                }
            }
            return true;
        }

        @Override // java.util.Collection
        public boolean isEmpty() {
            return g.this.c() == 0;
        }

        @Override // java.util.Collection, java.lang.Iterable
        public Iterator<V> iterator() {
            return new a(1);
        }

        @Override // java.util.Collection
        public boolean remove(Object obj) {
            int iB = g.this.b(obj);
            if (iB < 0) {
                return false;
            }
            g.this.a(iB);
            return true;
        }

        @Override // java.util.Collection
        public boolean removeAll(Collection<?> collection) {
            int iC = g.this.c();
            int i = 0;
            boolean z = false;
            while (i < iC) {
                if (collection.contains(g.this.a(i, 1))) {
                    g.this.a(i);
                    i--;
                    iC--;
                    z = true;
                }
                i++;
            }
            return z;
        }

        @Override // java.util.Collection
        public boolean retainAll(Collection<?> collection) {
            int iC = g.this.c();
            int i = 0;
            boolean z = false;
            while (i < iC) {
                if (!collection.contains(g.this.a(i, 1))) {
                    g.this.a(i);
                    i--;
                    iC--;
                    z = true;
                }
                i++;
            }
            return z;
        }

        @Override // java.util.Collection
        public int size() {
            return g.this.c();
        }

        @Override // java.util.Collection
        public Object[] toArray() {
            return g.this.b(1);
        }

        @Override // java.util.Collection
        public <T> T[] toArray(T[] tArr) {
            return (T[]) g.this.a(tArr, 1);
        }
    }

    g() {
    }

    public static <K, V> boolean a(Map<K, V> map, Collection<?> collection) {
        Iterator<?> it = collection.iterator();
        while (it.hasNext()) {
            if (!map.containsKey(it.next())) {
                return false;
            }
        }
        return true;
    }

    public static <T> boolean a(Set<T> set, Object obj) {
        if (set == obj) {
            return true;
        }
        if (obj instanceof Set) {
            Set set2 = (Set) obj;
            try {
                if (set.size() == set2.size()) {
                    if (set.containsAll(set2)) {
                        return true;
                    }
                }
                return false;
            } catch (ClassCastException | NullPointerException unused) {
            }
        }
        return false;
    }

    public static <K, V> boolean b(Map<K, V> map, Collection<?> collection) {
        int size = map.size();
        Iterator<?> it = collection.iterator();
        while (it.hasNext()) {
            map.remove(it.next());
        }
        return size != map.size();
    }

    public static <K, V> boolean c(Map<K, V> map, Collection<?> collection) {
        int size = map.size();
        Iterator<K> it = map.keySet().iterator();
        while (it.hasNext()) {
            if (!collection.contains(it.next())) {
                it.remove();
            }
        }
        return size != map.size();
    }

    protected abstract int a(Object obj);

    protected abstract Object a(int i, int i2);

    protected abstract V a(int i, V v);

    protected abstract void a();

    protected abstract void a(int i);

    protected abstract void a(K k, V v);

    public <T> T[] a(T[] tArr, int i) {
        int iC = c();
        if (tArr.length < iC) {
            tArr = (T[]) ((Object[]) Array.newInstance(tArr.getClass().getComponentType(), iC));
        }
        for (int i2 = 0; i2 < iC; i2++) {
            tArr[i2] = a(i2, i);
        }
        if (tArr.length > iC) {
            tArr[iC] = null;
        }
        return tArr;
    }

    protected abstract int b(Object obj);

    protected abstract Map<K, V> b();

    public Object[] b(int i) {
        int iC = c();
        Object[] objArr = new Object[iC];
        for (int i2 = 0; i2 < iC; i2++) {
            objArr[i2] = a(i2, i);
        }
        return objArr;
    }

    protected abstract int c();

    public Set<Map.Entry<K, V>> d() {
        if (this.f721a == null) {
            this.f721a = new b();
        }
        return this.f721a;
    }

    public Set<K> e() {
        if (this.f722b == null) {
            this.f722b = new c();
        }
        return this.f722b;
    }

    public Collection<V> f() {
        if (this.f723c == null) {
            this.f723c = new e();
        }
        return this.f723c;
    }
}
