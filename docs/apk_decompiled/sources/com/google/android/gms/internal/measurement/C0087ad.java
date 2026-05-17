package com.google.android.gms.internal.measurement;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ad, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0087ad extends Zc<C0094bd, C0094bd> {
    C0087ad() {
    }

    /* JADX INFO: renamed from: a, reason: avoid collision after fix types in other method */
    private static void a2(Object obj, C0094bd c0094bd) {
        ((Jb) obj).zzb = c0094bd;
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final /* synthetic */ C0094bd a() {
        return C0094bd.b();
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final /* synthetic */ C0094bd a(Object obj) {
        return ((Jb) obj).zzb;
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final /* synthetic */ void a(C0094bd c0094bd, int i, long j) {
        c0094bd.a(i << 3, Long.valueOf(j));
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final /* synthetic */ void a(C0094bd c0094bd, InterfaceC0226vd interfaceC0226vd) {
        c0094bd.b(interfaceC0226vd);
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final /* bridge */ /* synthetic */ void a(Object obj, C0094bd c0094bd) {
        a2(obj, c0094bd);
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final void b(Object obj) {
        ((Jb) obj).zzb.c();
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final /* synthetic */ void b(C0094bd c0094bd, InterfaceC0226vd interfaceC0226vd) {
        c0094bd.a(interfaceC0226vd);
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final /* synthetic */ void b(Object obj, C0094bd c0094bd) {
        a2(obj, c0094bd);
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final /* synthetic */ int c(C0094bd c0094bd) {
        return c0094bd.d();
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final /* synthetic */ C0094bd c(C0094bd c0094bd, C0094bd c0094bd2) {
        C0094bd c0094bd3 = c0094bd;
        C0094bd c0094bd4 = c0094bd2;
        return c0094bd4.equals(C0094bd.a()) ? c0094bd3 : C0094bd.a(c0094bd3, c0094bd4);
    }

    @Override // com.google.android.gms.internal.measurement.Zc
    final /* synthetic */ int d(C0094bd c0094bd) {
        return c0094bd.e();
    }
}
