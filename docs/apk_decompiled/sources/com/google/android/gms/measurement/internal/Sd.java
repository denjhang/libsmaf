package com.google.android.gms.measurement.internal;

import android.os.Bundle;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class Sd {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Runnable f2097a = new Runnable(this) { // from class: com.google.android.gms.measurement.internal.Rd

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Sd f2089a;

        {
            this.f2089a = this;
        }

        @Override // java.lang.Runnable
        public final void run() {
            final Sd sd = this.f2089a;
            sd.f2098b.c().a(new Runnable(sd) { // from class: com.google.android.gms.measurement.internal.Ud

                /* JADX INFO: renamed from: a, reason: collision with root package name */
                private final Sd f2119a;

                {
                    this.f2119a = sd;
                }

                @Override // java.lang.Runnable
                public final void run() {
                    Sd sd2 = this.f2119a;
                    sd2.f2098b.h();
                    sd2.f2098b.d().A().a("Application backgrounded");
                    sd2.f2098b.p().b("auto", "_ab", new Bundle());
                }
            });
        }
    };

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ Nd f2098b;

    Sd(Nd nd) {
        this.f2098b = nd;
    }

    final void a(long j) {
        this.f2098b.h();
        if (this.f2098b.m().a(C0324o.Oa)) {
            this.f2098b.f2053c.removeCallbacks(this.f2097a);
        }
    }

    final void b(long j) {
        if (this.f2098b.m().a(C0324o.Oa)) {
            this.f2098b.f2053c.postDelayed(this.f2097a, 2000L);
        }
    }
}
