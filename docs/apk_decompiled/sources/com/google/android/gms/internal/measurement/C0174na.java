package com.google.android.gms.internal.measurement;

import android.os.Binder;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.na, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final /* synthetic */ class C0174na {
    public static <V> V a(InterfaceC0167ma<V> interfaceC0167ma) {
        try {
            return interfaceC0167ma.h();
        } catch (SecurityException unused) {
            long jClearCallingIdentity = Binder.clearCallingIdentity();
            try {
                return interfaceC0167ma.h();
            } finally {
                Binder.restoreCallingIdentity(jClearCallingIdentity);
            }
        }
    }
}
