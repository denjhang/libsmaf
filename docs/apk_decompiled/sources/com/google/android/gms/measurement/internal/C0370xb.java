package com.google.android.gms.measurement.internal;

import android.content.Context;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import com.google.android.gms.common.internal.AbstractC0065c;

/* JADX INFO: renamed from: com.google.android.gms.measurement.internal.xb, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0370xb extends AbstractC0065c<InterfaceC0326ob> {
    public C0370xb(Context context, Looper looper, AbstractC0065c.a aVar, AbstractC0065c.b bVar) {
        super(context, looper, 93, aVar, bVar, null);
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    public final /* synthetic */ IInterface a(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface iInterfaceQueryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.measurement.internal.IMeasurementService");
        return iInterfaceQueryLocalInterface instanceof InterfaceC0326ob ? (InterfaceC0326ob) iInterfaceQueryLocalInterface : new C0336qb(iBinder);
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c, com.google.android.gms.common.api.a.f
    public final int e() {
        return 12451000;
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected final String s() {
        return "com.google.android.gms.measurement.internal.IMeasurementService";
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected final String t() {
        return "com.google.android.gms.measurement.START";
    }
}
