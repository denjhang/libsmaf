package com.google.android.gms.common.api;

import android.accounts.Account;
import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;
import com.google.android.gms.common.api.a;
import com.google.android.gms.common.api.a.d;
import com.google.android.gms.common.api.internal.C0055b;
import com.google.android.gms.common.api.internal.E;
import com.google.android.gms.common.api.internal.w;
import com.google.android.gms.common.internal.C0066d;
import java.util.Collections;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class e<O extends a.d> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Context f1037a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final a<O> f1038b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final O f1039c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final E<O> f1040d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final int f1041e;

    public a.f a(Looper looper, C0055b.a<O> aVar) {
        return this.f1038b.b().a(this.f1037a, looper, a().a(), this.f1039c, aVar, aVar);
    }

    public w a(Context context, Handler handler) {
        return new w(context, handler, a().a());
    }

    protected C0066d.a a() {
        Account accountA;
        GoogleSignInAccount googleSignInAccountB;
        GoogleSignInAccount googleSignInAccountB2;
        C0066d.a aVar = new C0066d.a();
        O o = this.f1039c;
        if (!(o instanceof a.d.b) || (googleSignInAccountB2 = ((a.d.b) o).b()) == null) {
            O o2 = this.f1039c;
            accountA = o2 instanceof a.d.InterfaceC0022a ? ((a.d.InterfaceC0022a) o2).a() : null;
        } else {
            accountA = googleSignInAccountB2.a();
        }
        aVar.a(accountA);
        O o3 = this.f1039c;
        aVar.a((!(o3 instanceof a.d.b) || (googleSignInAccountB = ((a.d.b) o3).b()) == null) ? Collections.emptySet() : googleSignInAccountB.l());
        aVar.a(this.f1037a.getClass().getName());
        aVar.b(this.f1037a.getPackageName());
        return aVar;
    }

    public final int b() {
        return this.f1041e;
    }

    public final E<O> c() {
        return this.f1040d;
    }
}
