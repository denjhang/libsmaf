package androidx.lifecycle;

import androidx.lifecycle.a;
import androidx.lifecycle.f;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class ReflectiveGenericLifecycleObserver implements e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Object f452a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final a.C0010a f453b;

    ReflectiveGenericLifecycleObserver(Object obj) {
        this.f452a = obj;
        this.f453b = a.f455a.a(this.f452a.getClass());
    }

    @Override // androidx.lifecycle.e
    public void a(h hVar, f.a aVar) {
        this.f453b.a(hVar, aVar, this.f452a);
    }
}
