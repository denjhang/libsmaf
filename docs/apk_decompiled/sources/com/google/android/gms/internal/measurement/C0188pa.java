package com.google.android.gms.internal.measurement;

import android.content.Context;
import android.database.ContentObserver;
import android.util.Log;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.pa, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0188pa implements InterfaceC0153ka {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static C0188pa f1774a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Context f1775b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final ContentObserver f1776c;

    private C0188pa() {
        this.f1775b = null;
        this.f1776c = null;
    }

    private C0188pa(Context context) {
        this.f1775b = context;
        this.f1776c = new C0199ra(this, null);
        context.getContentResolver().registerContentObserver(C0112ea.f1676a, true, this.f1776c);
    }

    static C0188pa a(Context context) {
        C0188pa c0188pa;
        synchronized (C0188pa.class) {
            if (f1774a == null) {
                f1774a = androidx.core.content.b.a(context, "com.google.android.providers.gsf.permission.READ_GSERVICES") == 0 ? new C0188pa(context) : new C0188pa();
            }
            c0188pa = f1774a;
        }
        return c0188pa;
    }

    static synchronized void a() {
        if (f1774a != null && f1774a.f1775b != null && f1774a.f1776c != null) {
            f1774a.f1775b.getContentResolver().unregisterContentObserver(f1774a.f1776c);
        }
        f1774a = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    @Override // com.google.android.gms.internal.measurement.InterfaceC0153ka
    /* JADX INFO: renamed from: c, reason: merged with bridge method [inline-methods] */
    public final String a(final String str) {
        if (this.f1775b == null) {
            return null;
        }
        try {
            return (String) C0174na.a(new InterfaceC0167ma(this, str) { // from class: com.google.android.gms.internal.measurement.oa

                /* JADX INFO: renamed from: a, reason: collision with root package name */
                private final C0188pa f1764a;

                /* JADX INFO: renamed from: b, reason: collision with root package name */
                private final String f1765b;

                {
                    this.f1764a = this;
                    this.f1765b = str;
                }

                @Override // com.google.android.gms.internal.measurement.InterfaceC0167ma
                public final Object h() {
                    return this.f1764a.b(this.f1765b);
                }
            });
        } catch (IllegalStateException | SecurityException e2) {
            String strValueOf = String.valueOf(str);
            Log.e("GservicesLoader", strValueOf.length() != 0 ? "Unable to read GServices for: ".concat(strValueOf) : new String("Unable to read GServices for: "), e2);
            return null;
        }
    }

    final /* synthetic */ String b(String str) {
        return C0112ea.a(this.f1775b.getContentResolver(), str, (String) null);
    }
}
