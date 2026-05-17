package com.google.android.gms.common.api.internal;

import com.google.android.gms.common.api.Status;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;
import java.util.WeakHashMap;

/* JADX INFO: renamed from: com.google.android.gms.common.api.internal.i, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0062i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Map<BasePendingResult<?>, Boolean> f1095a = Collections.synchronizedMap(new WeakHashMap());

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Map<c.a.a.a.f.h<?>, Boolean> f1096b = Collections.synchronizedMap(new WeakHashMap());

    private final void a(boolean z, Status status) {
        HashMap map;
        HashMap map2;
        synchronized (this.f1095a) {
            map = new HashMap(this.f1095a);
        }
        synchronized (this.f1096b) {
            map2 = new HashMap(this.f1096b);
        }
        for (Map.Entry entry : map.entrySet()) {
            if (z || ((Boolean) entry.getValue()).booleanValue()) {
                ((BasePendingResult) entry.getKey()).b(status);
            }
        }
        for (Map.Entry entry2 : map2.entrySet()) {
            if (z || ((Boolean) entry2.getValue()).booleanValue()) {
                ((c.a.a.a.f.h) entry2.getKey()).b((Exception) new com.google.android.gms.common.api.b(status));
            }
        }
    }

    final boolean a() {
        return (this.f1095a.isEmpty() && this.f1096b.isEmpty()) ? false : true;
    }

    public final void b() {
        a(false, C0055b.f1067a);
    }

    public final void c() {
        a(true, A.f1042a);
    }
}
