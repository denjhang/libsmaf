package jp.co.ymm.android.ringtone.c.a.h;

import jp.co.ymm.android.ringtone.net.a.j;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements jp.co.ymm.android.ringtone.net.f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ f f3594a;

    d(f fVar) {
        this.f3594a = fVar;
    }

    @Override // jp.co.ymm.android.ringtone.net.f
    public void a(int i, int i2) {
        g.a("callbackNotifyDownLoading");
    }

    @Override // jp.co.ymm.android.ringtone.net.f
    public void a(jp.co.ymm.android.ringtone.net.a.a aVar, int i) {
        g.a("callBackResponse");
        if (i != 1) {
            if (i == 2) {
                this.f3594a.g();
                this.f3594a.i();
                return;
            }
            return;
        }
        if (aVar == null || !(aVar instanceof j) || ((j) aVar).f3680b.f3691a.get(0).f3681a != 200) {
            this.f3594a.g();
            this.f3594a.i();
        } else {
            this.f3594a.g();
            f.a(this.f3594a.getActivity(), this.f3594a.v, this.f3594a.q, this.f3594a.t, this.f3594a.u);
            this.f3594a.g();
        }
    }
}
