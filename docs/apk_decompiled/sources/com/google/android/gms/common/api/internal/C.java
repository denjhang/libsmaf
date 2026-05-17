package com.google.android.gms.common.api.internal;

import android.os.DeadObjectException;
import android.os.RemoteException;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.internal.C0055b;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
abstract class C<T> extends v {

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    protected final c.a.a.a.f.h<T> f1051b;

    public C(int i, c.a.a.a.f.h<T> hVar) {
        super(i);
        this.f1051b = hVar;
    }

    @Override // com.google.android.gms.common.api.internal.l
    public void a(Status status) {
        this.f1051b.b(new com.google.android.gms.common.api.b(status));
    }

    @Override // com.google.android.gms.common.api.internal.l
    public final void a(C0055b.a<?> aVar) throws DeadObjectException {
        try {
            d(aVar);
        } catch (DeadObjectException e2) {
            a(l.b(e2));
            throw e2;
        } catch (RemoteException e3) {
            a(l.b(e3));
        } catch (RuntimeException e4) {
            a(e4);
        }
    }

    @Override // com.google.android.gms.common.api.internal.l
    public void a(RuntimeException runtimeException) {
        this.f1051b.b(runtimeException);
    }

    protected abstract void d(C0055b.a<?> aVar);
}
