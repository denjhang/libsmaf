package com.google.android.gms.common;

import java.util.concurrent.Callable;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class x extends v {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final Callable<String> f1373e;

    private x(Callable<String> callable) {
        super(false, null, null);
        this.f1373e = callable;
    }

    @Override // com.google.android.gms.common.v
    final String a() {
        try {
            return this.f1373e.call();
        } catch (Exception e2) {
            throw new RuntimeException(e2);
        }
    }
}
