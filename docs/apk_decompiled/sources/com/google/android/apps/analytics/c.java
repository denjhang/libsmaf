package com.google.android.apps.analytics;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b[] f934a = new b[50];

    private void d(int i) {
        if (i < 1 || i > 50) {
            throw new IllegalArgumentException("Index must be between 1 and 50, inclusive.");
        }
    }

    public void a(int i) {
        d(i);
        this.f934a[i - 1] = null;
    }

    public void a(b bVar) {
        d(bVar.a());
        this.f934a[bVar.a() - 1] = bVar;
    }

    public b[] a() {
        return (b[]) this.f934a.clone();
    }

    public b b(int i) {
        d(i);
        return this.f934a[i - 1];
    }

    public boolean b() {
        int i = 0;
        while (true) {
            b[] bVarArr = this.f934a;
            if (i >= bVarArr.length) {
                return false;
            }
            if (bVarArr[i] != null) {
                return true;
            }
            i++;
        }
    }

    public boolean c(int i) {
        d(i);
        return this.f934a[i - 1] == null;
    }
}
