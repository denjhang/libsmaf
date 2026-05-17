package com.google.android.gms.internal.measurement;

import android.content.Context;
import android.os.Bundle;
import android.os.RemoteException;
import android.util.Log;
import com.google.android.gms.internal.measurement.Mf;
import java.util.ArrayList;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.b, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0090b extends Mf.a {

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final /* synthetic */ String f1638e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final /* synthetic */ String f1639f;
    private final /* synthetic */ Context g;
    private final /* synthetic */ Bundle h;
    private final /* synthetic */ Mf i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    C0090b(Mf mf, String str, String str2, Context context, Bundle bundle) {
        super(mf);
        this.i = mf;
        this.f1638e = str;
        this.f1639f = str2;
        this.g = context;
        this.h = bundle;
    }

    @Override // com.google.android.gms.internal.measurement.Mf.a
    public final void a() {
        String str;
        String str2;
        String str3;
        int iMax;
        boolean z;
        try {
            this.i.l = new ArrayList();
            Mf mf = this.i;
            if (Mf.b(this.f1638e, this.f1639f)) {
                String str4 = this.f1639f;
                str2 = this.f1638e;
                str3 = str4;
                str = this.i.h;
            } else {
                str = null;
                str2 = null;
                str3 = null;
            }
            Mf.i(this.g);
            boolean z2 = Mf.f1526c.booleanValue() || str2 != null;
            this.i.p = this.i.a(this.g, z2);
            if (this.i.p == null) {
                Log.w(this.i.h, "Failed to connect to measurement client.");
                return;
            }
            int iH = Mf.h(this.g);
            int iG = Mf.g(this.g);
            if (z2) {
                iMax = Math.max(iH, iG);
                z = iG < iH;
            } else {
                iMax = iH > 0 ? iH : iG;
                if (iH > 0) {
                }
            }
            this.i.p.initialize(c.a.a.a.c.b.a(this.g), new zzv(18202L, iMax, z, str, str2, str3, this.h), this.f1530a);
        } catch (RemoteException e2) {
            this.i.a((Exception) e2, true, false);
        }
    }
}
