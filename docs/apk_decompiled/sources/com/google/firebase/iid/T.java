package com.google.firebase.iid;

import android.os.Build;
import android.os.Bundle;
import android.util.Log;
import java.io.IOException;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class T implements InterfaceC0384b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final c.a.b.d f2658a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final C0398p f2659b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final C0404w f2660c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final Executor f2661d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final c.a.b.d.g f2662e;

    T(c.a.b.d dVar, C0398p c0398p, Executor executor, c.a.b.d.g gVar) {
        this(dVar, c0398p, executor, new C0404w(dVar.b(), c0398p), gVar);
    }

    private T(c.a.b.d dVar, C0398p c0398p, Executor executor, C0404w c0404w, c.a.b.d.g gVar) {
        this.f2658a = dVar;
        this.f2659b = c0398p;
        this.f2660c = c0404w;
        this.f2661d = executor;
        this.f2662e = gVar;
    }

    private final <T> c.a.a.a.f.g<Void> a(c.a.a.a.f.g<T> gVar) {
        return gVar.a(I.a(), new V(this));
    }

    private final c.a.a.a.f.g<Bundle> a(String str, String str2, String str3, final Bundle bundle) {
        bundle.putString("scope", str3);
        bundle.putString("sender", str2);
        bundle.putString("subtype", str2);
        bundle.putString("appid", str);
        bundle.putString("gmp_app_id", this.f2658a.e().a());
        bundle.putString("gmsv", Integer.toString(this.f2659b.d()));
        bundle.putString("osv", Integer.toString(Build.VERSION.SDK_INT));
        bundle.putString("app_ver", this.f2659b.b());
        bundle.putString("app_ver_name", this.f2659b.c());
        bundle.putString("cliv", "fiid-12451000");
        bundle.putString("Firebase-Client", this.f2662e.a());
        final c.a.a.a.f.h hVar = new c.a.a.a.f.h();
        this.f2661d.execute(new Runnable(this, bundle, hVar) { // from class: com.google.firebase.iid.S

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final T f2655a;

            /* JADX INFO: renamed from: b, reason: collision with root package name */
            private final Bundle f2656b;

            /* JADX INFO: renamed from: c, reason: collision with root package name */
            private final c.a.a.a.f.h f2657c;

            {
                this.f2655a = this;
                this.f2656b = bundle;
                this.f2657c = hVar;
            }

            @Override // java.lang.Runnable
            public final void run() {
                this.f2655a.a(this.f2656b, this.f2657c);
            }
        });
        return hVar.a();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String a(Bundle bundle) throws IOException {
        if (bundle == null) {
            throw new IOException("SERVICE_NOT_AVAILABLE");
        }
        String string = bundle.getString("registration_id");
        if (string != null) {
            return string;
        }
        String string2 = bundle.getString("unregistered");
        if (string2 != null) {
            return string2;
        }
        String string3 = bundle.getString("error");
        if ("RST".equals(string3)) {
            throw new IOException("INSTANCE_ID_RESET");
        }
        if (string3 != null) {
            throw new IOException(string3);
        }
        String strValueOf = String.valueOf(bundle);
        StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 21);
        sb.append("Unexpected response: ");
        sb.append(strValueOf);
        Log.w("FirebaseInstanceId", sb.toString(), new Throwable());
        throw new IOException("SERVICE_NOT_AVAILABLE");
    }

    private final c.a.a.a.f.g<String> b(c.a.a.a.f.g<Bundle> gVar) {
        return gVar.a(this.f2661d, new U(this));
    }

    @Override // com.google.firebase.iid.InterfaceC0384b
    public final c.a.a.a.f.g<Void> a(String str, String str2, String str3) {
        Bundle bundle = new Bundle();
        String strValueOf = String.valueOf(str3);
        bundle.putString("gcm.topic", strValueOf.length() != 0 ? "/topics/".concat(strValueOf) : new String("/topics/"));
        bundle.putString("delete", "1");
        String strValueOf2 = String.valueOf(str3);
        return a(b(a(str, str2, strValueOf2.length() != 0 ? "/topics/".concat(strValueOf2) : new String("/topics/"), bundle)));
    }

    @Override // com.google.firebase.iid.InterfaceC0384b
    public final c.a.a.a.f.g<String> a(String str, String str2, String str3, String str4) {
        return b(a(str, str3, str4, new Bundle()));
    }

    final /* synthetic */ void a(Bundle bundle, c.a.a.a.f.h hVar) {
        try {
            hVar.a(this.f2660c.a(bundle));
        } catch (IOException e2) {
            hVar.a((Exception) e2);
        }
    }

    @Override // com.google.firebase.iid.InterfaceC0384b
    public final boolean a() {
        return false;
    }

    @Override // com.google.firebase.iid.InterfaceC0384b
    public final c.a.a.a.f.g<Void> b(String str, String str2, String str3) {
        Bundle bundle = new Bundle();
        String strValueOf = String.valueOf(str3);
        bundle.putString("gcm.topic", strValueOf.length() != 0 ? "/topics/".concat(strValueOf) : new String("/topics/"));
        String strValueOf2 = String.valueOf(str3);
        return a(b(a(str, str2, strValueOf2.length() != 0 ? "/topics/".concat(strValueOf2) : new String("/topics/"), bundle)));
    }

    @Override // com.google.firebase.iid.InterfaceC0384b
    public final boolean b() {
        return this.f2659b.a() != 0;
    }
}
