package com.google.firebase.iid;

import android.util.Log;
import android.util.Pair;
import c.a.a.a.f.InterfaceC0053a;
import java.util.Map;
import java.util.concurrent.Executor;

/* JADX INFO: renamed from: com.google.firebase.iid.s, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class C0400s {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Executor f2699a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final Map<Pair<String, String>, c.a.a.a.f.g<InterfaceC0383a>> f2700b = new b.b.b();

    C0400s(Executor executor) {
        this.f2699a = executor;
    }

    final /* synthetic */ c.a.a.a.f.g a(Pair pair, c.a.a.a.f.g gVar) {
        synchronized (this) {
            this.f2700b.remove(pair);
        }
        return gVar;
    }

    final synchronized c.a.a.a.f.g<InterfaceC0383a> a(String str, String str2, InterfaceC0401t interfaceC0401t) {
        final Pair<String, String> pair = new Pair<>(str, str2);
        c.a.a.a.f.g<InterfaceC0383a> gVar = this.f2700b.get(pair);
        if (gVar != null) {
            if (Log.isLoggable("FirebaseInstanceId", 3)) {
                String strValueOf = String.valueOf(pair);
                StringBuilder sb = new StringBuilder(String.valueOf(strValueOf).length() + 29);
                sb.append("Joining ongoing request for: ");
                sb.append(strValueOf);
                Log.d("FirebaseInstanceId", sb.toString());
            }
            return gVar;
        }
        if (Log.isLoggable("FirebaseInstanceId", 3)) {
            String strValueOf2 = String.valueOf(pair);
            StringBuilder sb2 = new StringBuilder(String.valueOf(strValueOf2).length() + 24);
            sb2.append("Making new request for: ");
            sb2.append(strValueOf2);
            Log.d("FirebaseInstanceId", sb2.toString());
        }
        c.a.a.a.f.g gVarB = interfaceC0401t.a().b(this.f2699a, new InterfaceC0053a(this, pair) { // from class: com.google.firebase.iid.u

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final C0400s f2701a;

            /* JADX INFO: renamed from: b, reason: collision with root package name */
            private final Pair f2702b;

            {
                this.f2701a = this;
                this.f2702b = pair;
            }

            @Override // c.a.a.a.f.InterfaceC0053a
            public final Object a(c.a.a.a.f.g gVar2) {
                this.f2701a.a(this.f2702b, gVar2);
                return gVar2;
            }
        });
        this.f2700b.put(pair, (c.a.a.a.f.g<InterfaceC0383a>) gVarB);
        return gVarB;
    }
}
