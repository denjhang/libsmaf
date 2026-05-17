package com.google.android.gms.common.internal;

import android.os.IBinder;
import android.os.IInterface;
import com.google.android.gms.common.api.a;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.t, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class C0081t<T extends IInterface> extends AbstractC0069g<T> {
    private final a.h<T> G;

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected T a(IBinder iBinder) {
        return (T) this.G.a(iBinder);
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected void a(int i, T t) {
        this.G.a(i, t);
    }

    @Override // com.google.android.gms.common.internal.AbstractC0069g, com.google.android.gms.common.internal.AbstractC0065c, com.google.android.gms.common.api.a.f
    public int e() {
        return super.e();
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected String s() {
        return this.G.h();
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected String t() {
        return this.G.i();
    }

    public a.h<T> w() {
        return this.G;
    }
}
