package com.google.firebase.iid;

import androidx.annotation.Keep;
import com.google.firebase.components.e;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Keep
public final class Registrar implements com.google.firebase.components.j {

    /* JADX INFO: Access modifiers changed from: private */
    static class a implements com.google.firebase.iid.a.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final FirebaseInstanceId f2654a;

        public a(FirebaseInstanceId firebaseInstanceId) {
            this.f2654a = firebaseInstanceId;
        }
    }

    @Override // com.google.firebase.components.j
    @Keep
    public final List<com.google.firebase.components.e<?>> getComponents() {
        e.a aVarA = com.google.firebase.components.e.a(FirebaseInstanceId.class);
        aVarA.a(com.google.firebase.components.q.a(c.a.b.d.class));
        aVarA.a(com.google.firebase.components.q.a(c.a.b.a.d.class));
        aVarA.a(com.google.firebase.components.q.a(c.a.b.d.g.class));
        aVarA.a(r.f2698a);
        aVarA.a();
        com.google.firebase.components.e eVarB = aVarA.b();
        e.a aVarA2 = com.google.firebase.components.e.a(com.google.firebase.iid.a.a.class);
        aVarA2.a(com.google.firebase.components.q.a(FirebaseInstanceId.class));
        aVarA2.a(C0399q.f2697a);
        return Arrays.asList(eVarB, aVarA2.b(), c.a.b.d.f.a("fire-iid", "18.0.0"));
    }
}
