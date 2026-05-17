package c.a.b.d;

import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile d f922a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Set<e> f923b = new HashSet();

    d() {
    }

    public static d a() {
        d dVar = f922a;
        if (dVar == null) {
            synchronized (d.class) {
                dVar = f922a;
                if (dVar == null) {
                    dVar = new d();
                    f922a = dVar;
                }
            }
        }
        return dVar;
    }

    Set<e> b() {
        Set<e> setUnmodifiableSet;
        synchronized (this.f923b) {
            setUnmodifiableSet = Collections.unmodifiableSet(this.f923b);
        }
        return setUnmodifiableSet;
    }
}
