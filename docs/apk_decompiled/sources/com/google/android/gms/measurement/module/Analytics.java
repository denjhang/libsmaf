package com.google.android.gms.measurement.module;

import android.content.Context;
import androidx.annotation.Keep;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.internal.measurement.zzv;
import com.google.android.gms.measurement.internal._b;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class Analytics {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile Analytics f2528a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final _b f2529b;

    private Analytics(_b _bVar) {
        r.a(_bVar);
        this.f2529b = _bVar;
    }

    @Keep
    public static Analytics getInstance(Context context) {
        if (f2528a == null) {
            synchronized (Analytics.class) {
                if (f2528a == null) {
                    f2528a = new Analytics(_b.a(context, (zzv) null));
                }
            }
        }
        return f2528a;
    }
}
