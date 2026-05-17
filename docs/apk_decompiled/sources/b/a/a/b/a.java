package b.a.a.b;

import b.a.a.b.b;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a<K, V> extends b<K, V> {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private HashMap<K, b.c<K, V>> f696e = new HashMap<>();

    @Override // b.a.a.b.b
    protected b.c<K, V> a(K k) {
        return this.f696e.get(k);
    }

    @Override // b.a.a.b.b
    public V b(K k, V v) {
        b.c<K, V> cVarA = a(k);
        if (cVarA != null) {
            return cVarA.f702b;
        }
        this.f696e.put(k, a(k, v));
        return null;
    }

    public Map.Entry<K, V> b(K k) {
        if (contains(k)) {
            return this.f696e.get(k).f704d;
        }
        return null;
    }

    public boolean contains(K k) {
        return this.f696e.containsKey(k);
    }

    @Override // b.a.a.b.b
    public V remove(K k) {
        V v = (V) super.remove(k);
        this.f696e.remove(k);
        return v;
    }
}
