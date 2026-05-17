package com.google.firebase.analytics;

import android.os.Bundle;
import com.google.android.gms.internal.measurement.Mf;
import com.google.android.gms.measurement.internal.Zc;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class a implements Zc {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final /* synthetic */ Mf f2543a;

    a(Mf mf) {
        this.f2543a = mf;
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final List<Bundle> a(String str, String str2) {
        return this.f2543a.a(str, str2);
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final Map<String, Object> a(String str, String str2, boolean z) {
        return this.f2543a.a(str, str2, z);
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final void a(String str) {
        this.f2543a.a(str);
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final void a(String str, String str2, Bundle bundle) {
        this.f2543a.b(str, str2, bundle);
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final void a(boolean z) {
        this.f2543a.a(z);
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final int b(String str) {
        return this.f2543a.c(str);
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final long b() {
        return this.f2543a.c();
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final void b(Bundle bundle) {
        this.f2543a.a(bundle);
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final void b(String str, String str2, Bundle bundle) {
        this.f2543a.a(str, str2, bundle);
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final void c(String str) {
        this.f2543a.b(str);
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final String h() {
        return this.f2543a.d();
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final String m() {
        return this.f2543a.e();
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final String x() {
        return this.f2543a.b();
    }

    @Override // com.google.android.gms.measurement.internal.Zc
    public final String y() {
        return this.f2543a.a();
    }
}
