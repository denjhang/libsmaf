package com.google.android.gms.common.internal;

import android.content.Context;
import android.util.SparseIntArray;
import com.google.android.gms.common.api.a;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.j, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class C0072j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final SparseIntArray f1274a = new SparseIntArray();

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private com.google.android.gms.common.d f1275b;

    public C0072j(com.google.android.gms.common.d dVar) {
        r.a(dVar);
        this.f1275b = dVar;
    }

    public int a(Context context, a.f fVar) {
        r.a(context);
        r.a(fVar);
        if (!fVar.d()) {
            return 0;
        }
        int iE = fVar.e();
        int iA = this.f1274a.get(iE, -1);
        if (iA != -1) {
            return iA;
        }
        int i = 0;
        while (true) {
            if (i < this.f1274a.size()) {
                int iKeyAt = this.f1274a.keyAt(i);
                if (iKeyAt > iE && this.f1274a.get(iKeyAt) == 0) {
                    iA = 0;
                    break;
                }
                i++;
            } else {
                break;
            }
        }
        if (iA == -1) {
            iA = this.f1275b.a(context, iE);
        }
        this.f1274a.put(iE, iA);
        return iA;
    }

    public void a() {
        this.f1274a.clear();
    }
}
