package c.a.a.a.e;

import android.content.Context;
import android.os.Looper;
import com.google.android.gms.common.api.a;
import com.google.android.gms.common.api.f;
import com.google.android.gms.common.api.g;
import com.google.android.gms.common.internal.C0066d;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class c extends a.AbstractC0021a<com.google.android.gms.signin.internal.a, a> {
    c() {
    }

    @Override // com.google.android.gms.common.api.a.AbstractC0021a
    public final /* synthetic */ a.f a(Context context, Looper looper, C0066d c0066d, a aVar, f fVar, g gVar) {
        a aVar2 = aVar;
        if (aVar2 == null) {
            aVar2 = a.f843a;
        }
        return new com.google.android.gms.signin.internal.a(context, looper, true, c0066d, aVar2, fVar, gVar);
    }
}
