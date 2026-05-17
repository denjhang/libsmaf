package androidx.coordinatorlayout.widget;

import b.b.h;
import b.d.c.e;
import b.d.c.f;
import java.util.ArrayList;
import java.util.HashSet;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class c<T> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final e<ArrayList<T>> f137a = new f(10);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final h<T, ArrayList<T>> f138b = new h<>();

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final ArrayList<T> f139c = new ArrayList<>();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final HashSet<T> f140d = new HashSet<>();

    private void a(T t, ArrayList<T> arrayList, HashSet<T> hashSet) {
        if (arrayList.contains(t)) {
            return;
        }
        if (hashSet.contains(t)) {
            throw new RuntimeException("This graph contains cyclic dependencies");
        }
        hashSet.add(t);
        ArrayList<T> arrayList2 = this.f138b.get(t);
        if (arrayList2 != null) {
            int size = arrayList2.size();
            for (int i = 0; i < size; i++) {
                a(arrayList2.get(i), arrayList, hashSet);
            }
        }
        hashSet.remove(t);
        arrayList.add(t);
    }

    private void a(ArrayList<T> arrayList) {
        arrayList.clear();
        this.f137a.a(arrayList);
    }

    private ArrayList<T> c() {
        ArrayList<T> arrayListA = this.f137a.a();
        return arrayListA == null ? new ArrayList<>() : arrayListA;
    }

    public void a() {
        int size = this.f138b.size();
        for (int i = 0; i < size; i++) {
            ArrayList<T> arrayListD = this.f138b.d(i);
            if (arrayListD != null) {
                a((ArrayList) arrayListD);
            }
        }
        this.f138b.clear();
    }

    public void a(T t) {
        if (this.f138b.containsKey(t)) {
            return;
        }
        this.f138b.put(t, null);
    }

    public void a(T t, T t2) {
        if (!this.f138b.containsKey(t) || !this.f138b.containsKey(t2)) {
            throw new IllegalArgumentException("All nodes must be present in the graph before being added as an edge");
        }
        ArrayList<T> arrayListC = this.f138b.get(t);
        if (arrayListC == null) {
            arrayListC = c();
            this.f138b.put(t, arrayListC);
        }
        arrayListC.add(t2);
    }

    public ArrayList<T> b() {
        this.f139c.clear();
        this.f140d.clear();
        int size = this.f138b.size();
        for (int i = 0; i < size; i++) {
            a(this.f138b.b(i), this.f139c, this.f140d);
        }
        return this.f139c;
    }

    public boolean b(T t) {
        return this.f138b.containsKey(t);
    }

    public boolean c(T t) {
        int size = this.f138b.size();
        for (int i = 0; i < size; i++) {
            ArrayList<T> arrayListD = this.f138b.d(i);
            if (arrayListD != null && arrayListD.contains(t)) {
                return true;
            }
        }
        return false;
    }
}
