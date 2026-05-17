package com.google.firebase.analytics.connector.internal;

import android.annotation.SuppressLint;
import android.content.Context;
import androidx.annotation.Keep;
import c.a.b.d;
import c.a.b.d.f;
import com.google.firebase.components.e;
import com.google.firebase.components.j;
import com.google.firebase.components.q;
import java.util.Arrays;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Keep
public class AnalyticsConnectorRegistrar implements j {
    @Override // com.google.firebase.components.j
    @Keep
    @SuppressLint({"MissingPermission"})
    public List<e<?>> getComponents() {
        e.a aVarA = e.a(com.google.firebase.analytics.a.a.class);
        aVarA.a(q.a(d.class));
        aVarA.a(q.a(Context.class));
        aVarA.a(q.a(c.a.b.a.d.class));
        aVarA.a(a.f2549a);
        aVarA.c();
        return Arrays.asList(aVarA.b(), f.a("fire-analytics", "17.2.0"));
    }
}
