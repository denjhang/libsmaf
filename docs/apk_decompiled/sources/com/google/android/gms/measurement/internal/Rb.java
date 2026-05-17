package com.google.android.gms.measurement.internal;

import android.content.BroadcastReceiver;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.os.Bundle;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class Rb {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Wb f2086a;

    public Rb(Wb wb) {
        com.google.android.gms.common.internal.r.a(wb);
        this.f2086a = wb;
    }

    public static boolean a(Context context) {
        ActivityInfo receiverInfo;
        com.google.android.gms.common.internal.r.a(context);
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager != null && (receiverInfo = packageManager.getReceiverInfo(new ComponentName(context, "com.google.android.gms.measurement.AppMeasurementReceiver"), 0)) != null) {
                if (receiverInfo.enabled) {
                    return true;
                }
            }
        } catch (PackageManager.NameNotFoundException unused) {
        }
        return false;
    }

    public final void a(Context context, Intent intent) {
        _b _bVarA = _b.a(context, (com.google.android.gms.internal.measurement.zzv) null);
        C0365wb c0365wbD = _bVarA.d();
        if (intent == null) {
            c0365wbD.w().a("Receiver called with null intent");
            return;
        }
        _bVarA.f();
        String action = intent.getAction();
        c0365wbD.B().a("Local receiver got", action);
        if ("com.google.android.gms.measurement.UPLOAD".equals(action)) {
            Intent className = new Intent().setClassName(context, "com.google.android.gms.measurement.AppMeasurementService");
            className.setAction("com.google.android.gms.measurement.UPLOAD");
            c0365wbD.B().a("Starting wakeful intent.");
            this.f2086a.a(context, className);
            return;
        }
        if ("com.android.vending.INSTALL_REFERRER".equals(action)) {
            try {
                _bVarA.c().a(new Ub(this, _bVarA, c0365wbD));
            } catch (Exception e2) {
                c0365wbD.w().a("Install Referrer Reporter encountered a problem", e2);
            }
            BroadcastReceiver.PendingResult pendingResultA = this.f2086a.a();
            String stringExtra = intent.getStringExtra("referrer");
            if (stringExtra == null) {
                c0365wbD.B().a("Install referrer extras are null");
                if (pendingResultA != null) {
                    pendingResultA.finish();
                    return;
                }
                return;
            }
            c0365wbD.z().a("Install referrer extras are", stringExtra);
            if (!stringExtra.contains("?")) {
                String strValueOf = String.valueOf(stringExtra);
                stringExtra = strValueOf.length() != 0 ? "?".concat(strValueOf) : new String("?");
            }
            Bundle bundleA = _bVarA.v().a(Uri.parse(stringExtra));
            if (bundleA == null) {
                c0365wbD.B().a("No campaign defined in install referrer broadcast");
                if (pendingResultA != null) {
                    pendingResultA.finish();
                    return;
                }
                return;
            }
            long longExtra = intent.getLongExtra("referrer_timestamp_seconds", 0L) * 1000;
            if (longExtra == 0) {
                c0365wbD.w().a("Install referrer is missing timestamp");
            }
            _bVarA.c().a(new Tb(this, _bVarA, longExtra, bundleA, context, c0365wbD, pendingResultA));
        }
    }
}
