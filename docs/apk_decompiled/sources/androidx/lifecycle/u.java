package androidx.lifecycle;

import java.util.HashMap;
import java.util.Iterator;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class u {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final HashMap<String, s> f486a = new HashMap<>();

    final s a(String str) {
        return this.f486a.get(str);
    }

    public final void a() {
        Iterator<s> it = this.f486a.values().iterator();
        while (it.hasNext()) {
            it.next().a();
        }
        this.f486a.clear();
    }

    final void a(String str, s sVar) {
        s sVarPut = this.f486a.put(str, sVar);
        if (sVarPut != null) {
            sVarPut.a();
        }
    }
}
