package com.google.android.gms.internal.measurement;

import java.util.Iterator;
import java.util.Map;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.qc, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0196qc implements InterfaceC0176nc {
    C0196qc() {
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0176nc
    public final int a(int i, Object obj, Object obj2) {
        C0183oc c0183oc = (C0183oc) obj;
        if (c0183oc.isEmpty()) {
            return 0;
        }
        Iterator it = c0183oc.entrySet().iterator();
        if (!it.hasNext()) {
            return 0;
        }
        Map.Entry entry = (Map.Entry) it.next();
        entry.getKey();
        entry.getValue();
        throw new NoSuchMethodError();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0176nc
    public final Object a(Object obj, Object obj2) {
        C0183oc c0183ocC = (C0183oc) obj;
        C0183oc c0183oc = (C0183oc) obj2;
        if (!c0183oc.isEmpty()) {
            if (!c0183ocC.e()) {
                c0183ocC = c0183ocC.c();
            }
            c0183ocC.a(c0183oc);
        }
        return c0183ocC;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0176nc
    public final Map<?, ?> a(Object obj) {
        return (C0183oc) obj;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0176nc
    public final Object b(Object obj) {
        ((C0183oc) obj).d();
        return obj;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0176nc
    public final boolean c(Object obj) {
        return !((C0183oc) obj).e();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0176nc
    public final Map<?, ?> d(Object obj) {
        return (C0183oc) obj;
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0176nc
    public final C0162lc<?, ?> e(Object obj) {
        throw new NoSuchMethodError();
    }

    @Override // com.google.android.gms.internal.measurement.InterfaceC0176nc
    public final Object f(Object obj) {
        return C0183oc.b().c();
    }
}
