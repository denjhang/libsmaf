package jp.co.ymm.android.ringtone.purchase;

import android.content.Intent;
import android.net.Uri;
import android.text.TextUtils;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.net.a.d;
import jp.co.ymm.android.ringtone.net.a.h;
import jp.co.ymm.android.ringtone.net.a.i;
import jp.co.ymm.android.ringtone.net.f;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class b implements f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ContentsDownLoadActivity f3759a;

    b(ContentsDownLoadActivity contentsDownLoadActivity) {
        this.f3759a = contentsDownLoadActivity;
    }

    @Override // jp.co.ymm.android.ringtone.net.f
    public void a(int i, int i2) {
        g.a("callbackNotifyDownLoading");
        if (this.f3759a.f()) {
            int i3 = i * 10;
            this.f3759a.b(i3);
            if (i3 == this.f3759a.d()) {
                g.a("dialogBtn.setEnabled == false");
                this.f3759a.a(false);
                g.a("\u3000Progress ratio " + i3);
            }
        }
    }

    @Override // jp.co.ymm.android.ringtone.net.f
    public void a(jp.co.ymm.android.ringtone.net.a.a aVar, int i) {
        g.a("callBackResponse");
        if (i != 1) {
            if (i == 2) {
                this.f3759a.i();
                this.f3759a.k();
                return;
            }
            return;
        }
        if (aVar == null) {
            this.f3759a.k();
            return;
        }
        if (aVar instanceof jp.co.ymm.android.ringtone.net.a.d) {
            this.f3759a.removeDialog(7);
            this.f3759a.a();
            jp.co.ymm.android.ringtone.net.a.d dVar = (jp.co.ymm.android.ringtone.net.a.d) aVar;
            d.b bVar = dVar.f3641b;
            byte[] bArr = bVar.f3648b;
            if (bArr == null) {
                this.f3759a.setTitle(2131492985);
                this.f3759a.showDialog(8);
                return;
            }
            String str = bVar.f3647a;
            String string = this.f3759a.getString(2131493011);
            if (!this.f3759a.j && !TextUtils.isEmpty(str) && this.f3759a.a(str, string)) {
                d.b bVar2 = dVar.f3641b;
                String str2 = bVar2.f3649c;
                String str3 = bVar2.f3652f;
                this.f3759a.i = new c.a();
                this.f3759a.i.f3513a = dVar.f3641b.f3651e;
                this.f3759a.i.f3514b = dVar.f3641b.f3650d;
                this.f3759a.g = jp.co.ymm.android.ringtone.b.d.a().a(null, bArr, str2, str3);
                if (TextUtils.isEmpty(this.f3759a.g)) {
                    this.f3759a.a(string);
                } else {
                    this.f3759a.j();
                }
            }
        }
        if (aVar instanceof jp.co.ymm.android.ringtone.net.a.b) {
            this.f3759a.i();
            jp.co.ymm.android.ringtone.net.a.b bVar3 = (jp.co.ymm.android.ringtone.net.a.b) aVar;
            String str4 = bVar3.f3634b.f3637a;
            String string2 = this.f3759a.getString(2131493010);
            if (!TextUtils.isEmpty(str4)) {
                if (!this.f3759a.a(str4, string2)) {
                    return;
                }
                String str5 = bVar3.f3634b.f3638b;
                if (!TextUtils.isEmpty(str5)) {
                    g.a("responseUrl : " + str5);
                    String str6 = str5 + "?vid=" + bVar3.f3633a.f3635a;
                    if (this.f3759a.isFinishing()) {
                        return;
                    }
                    this.f3759a.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str6)));
                    this.f3759a.finish();
                    return;
                }
            }
            this.f3759a.a(string2);
            return;
        }
        if (aVar instanceof i) {
            this.f3759a.i();
            i iVar = (i) aVar;
            i.b bVar4 = iVar.f3671b;
            i.a aVar2 = iVar.f3670a;
            String string3 = this.f3759a.getString(2131493012);
            if (bVar4 != null && aVar2 != null) {
                String str7 = bVar4.f3677a;
                if (!TextUtils.isEmpty(str7)) {
                    if (!this.f3759a.a(str7, string3)) {
                        return;
                    }
                    this.f3759a.h = bVar4.f3678b;
                    String str8 = aVar2.f3673b;
                    String str9 = aVar2.f3674c;
                    if (!TextUtils.isEmpty(str8) && !TextUtils.isEmpty(str9)) {
                        g.a("RO response status : " + bVar4.f3677a);
                        this.f3759a.showDialog(8);
                        if (this.f3759a.f3754d != null) {
                            this.f3759a.f3754d.a(str8, str9, this.f3759a.m);
                        }
                        this.f3759a.setTitle(2131492985);
                        return;
                    }
                }
            }
            this.f3759a.a(string3);
            return;
        }
        if (!(aVar instanceof jp.co.ymm.android.ringtone.net.a.g)) {
            if (aVar instanceof h) {
                this.f3759a.removeDialog(6);
                this.f3759a.b();
                String str10 = ((h) aVar).f3667b.f3669a;
                String string4 = this.f3759a.getString(2131493013);
                if (TextUtils.isEmpty(str10)) {
                    this.f3759a.a(string4);
                    return;
                } else {
                    if (!this.f3759a.a(str10, string4) || this.f3759a.isFinishing()) {
                        return;
                    }
                    this.f3759a.showDialog(9);
                    return;
                }
            }
            return;
        }
        this.f3759a.i();
        jp.co.ymm.android.ringtone.net.a.g gVar = (jp.co.ymm.android.ringtone.net.a.g) aVar;
        String str11 = gVar.f3659b.f3664a;
        String string5 = this.f3759a.getString(2131493011);
        if (!TextUtils.isEmpty(str11)) {
            if (!this.f3759a.a(str11, string5)) {
                return;
            }
            byte[] bArr2 = gVar.f3659b.f3665b;
            jp.co.ymm.android.ringtone.b.d dVarA = jp.co.ymm.android.ringtone.b.d.a();
            if (this.f3759a.h != null && !this.f3759a.isFinishing()) {
                ContentsDownLoadActivity contentsDownLoadActivity = this.f3759a;
                contentsDownLoadActivity.g = dVarA.a(contentsDownLoadActivity.h, bArr2, null, null);
                if (TextUtils.isEmpty(this.f3759a.g)) {
                    g.g("not iToneStock.create error");
                } else {
                    String str12 = gVar.f3658a.f3662a;
                    if (!TextUtils.isEmpty(str12)) {
                        this.f3759a.showDialog(6);
                        if (this.f3759a.f3754d != null) {
                            this.f3759a.f3754d.a(str12, this.f3759a.m);
                            return;
                        }
                        return;
                    }
                }
            }
        }
        this.f3759a.a(string5);
    }
}
