package com.google.android.gms.internal.measurement;

import com.google.android.gms.internal.measurement.Db;
import java.util.Map;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.yb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class AbstractC0242yb<T extends Db<T>> {
    AbstractC0242yb() {
    }

    abstract int a(Map.Entry<?, ?> entry);

    abstract Bb<T> a(Object obj);

    abstract Object a(C0230wb c0230wb, InterfaceC0219uc interfaceC0219uc, int i);

    abstract void a(InterfaceC0226vd interfaceC0226vd, Map.Entry<?, ?> entry);

    abstract boolean a(InterfaceC0219uc interfaceC0219uc);

    abstract Bb<T> b(Object obj);

    abstract void c(Object obj);
}
