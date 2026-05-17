package com.google.android.gms.common.internal;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.i, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractC0071i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final Object f1268a = new Object();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private static AbstractC0071i f1269b;

    /* JADX INFO: renamed from: com.google.android.gms.common.internal.i$a */
    protected static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final String f1270a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final String f1271b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final ComponentName f1272c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private final int f1273d;

        public a(String str, String str2, int i) {
            r.b(str);
            this.f1270a = str;
            r.b(str2);
            this.f1271b = str2;
            this.f1272c = null;
            this.f1273d = i;
        }

        public final ComponentName a() {
            return this.f1272c;
        }

        public final Intent a(Context context) {
            String str = this.f1270a;
            return str != null ? new Intent(str).setPackage(this.f1271b) : new Intent().setComponent(this.f1272c);
        }

        public final String b() {
            return this.f1271b;
        }

        public final int c() {
            return this.f1273d;
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (!(obj instanceof a)) {
                return false;
            }
            a aVar = (a) obj;
            return C0079q.a(this.f1270a, aVar.f1270a) && C0079q.a(this.f1271b, aVar.f1271b) && C0079q.a(this.f1272c, aVar.f1272c) && this.f1273d == aVar.f1273d;
        }

        public final int hashCode() {
            return C0079q.a(this.f1270a, this.f1271b, this.f1272c, Integer.valueOf(this.f1273d));
        }

        public final String toString() {
            String str = this.f1270a;
            return str == null ? this.f1272c.flattenToString() : str;
        }
    }

    public static AbstractC0071i a(Context context) {
        synchronized (f1268a) {
            if (f1269b == null) {
                f1269b = new H(context.getApplicationContext());
            }
        }
        return f1269b;
    }

    public final void a(String str, String str2, int i, ServiceConnection serviceConnection, String str3) {
        b(new a(str, str2, i), serviceConnection, str3);
    }

    protected abstract boolean a(a aVar, ServiceConnection serviceConnection, String str);

    protected abstract void b(a aVar, ServiceConnection serviceConnection, String str);
}
