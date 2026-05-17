package com.google.android.gms.common.internal;

import android.accounts.Account;
import android.content.Context;
import android.os.IInterface;
import android.os.Looper;
import com.google.android.gms.common.api.Scope;
import com.google.android.gms.common.api.a;
import com.google.android.gms.common.internal.AbstractC0065c;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.g, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class AbstractC0069g<T extends IInterface> extends AbstractC0065c<T> implements a.f, InterfaceC0070h {
    private final C0066d D;
    private final Set<Scope> E;
    private final Account F;

    /* JADX WARN: Illegal instructions before constructor call */
    protected AbstractC0069g(Context context, Looper looper, int i, C0066d c0066d, com.google.android.gms.common.api.f fVar, com.google.android.gms.common.api.g gVar) {
        AbstractC0071i abstractC0071iA = AbstractC0071i.a(context);
        com.google.android.gms.common.c cVarA = com.google.android.gms.common.c.a();
        r.a(fVar);
        r.a(gVar);
        this(context, looper, abstractC0071iA, cVarA, i, c0066d, fVar, gVar);
    }

    protected AbstractC0069g(Context context, Looper looper, AbstractC0071i abstractC0071i, com.google.android.gms.common.c cVar, int i, C0066d c0066d, com.google.android.gms.common.api.f fVar, com.google.android.gms.common.api.g gVar) {
        super(context, looper, abstractC0071i, cVar, i, a(fVar), a(gVar), c0066d.e());
        this.D = c0066d;
        this.F = c0066d.a();
        Set<Scope> setC = c0066d.c();
        b(setC);
        this.E = setC;
    }

    private static AbstractC0065c.a a(com.google.android.gms.common.api.f fVar) {
        if (fVar == null) {
            return null;
        }
        return new y(fVar);
    }

    private static AbstractC0065c.b a(com.google.android.gms.common.api.g gVar) {
        if (gVar == null) {
            return null;
        }
        return new z(gVar);
    }

    private final Set<Scope> b(Set<Scope> set) {
        a(set);
        Iterator<Scope> it = set.iterator();
        while (it.hasNext()) {
            if (!set.contains(it.next())) {
                throw new IllegalStateException("Expanding scopes is not permitted, use implied scopes instead");
            }
        }
        return set;
    }

    protected Set<Scope> a(Set<Scope> set) {
        return set;
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c, com.google.android.gms.common.api.a.f
    public int e() {
        return super.e();
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    public final Account k() {
        return this.F;
    }

    @Override // com.google.android.gms.common.internal.AbstractC0065c
    protected final Set<Scope> q() {
        return this.E;
    }
}
