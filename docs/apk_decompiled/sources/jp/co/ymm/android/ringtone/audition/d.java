package jp.co.ymm.android.ringtone.audition;

import android.os.Message;
import android.text.TextUtils;
import jp.co.ymm.android.ringtone.audition.b;
import jp.co.ymm.android.ringtone.net.a.h;
import jp.co.ymm.android.ringtone.net.a.i;
import jp.co.ymm.android.ringtone.net.f;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d implements f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ PreviewService f3501a;

    d(PreviewService previewService) {
        this.f3501a = previewService;
    }

    @Override // jp.co.ymm.android.ringtone.net.f
    public void a(int i, int i2) {
        g.a("callbackNotifyDownLoading");
        this.f3501a.a(Message.obtain(null, 0, i, i2));
    }

    @Override // jp.co.ymm.android.ringtone.net.f
    public void a(jp.co.ymm.android.ringtone.net.a.a aVar, int i) {
        if (i == 1) {
            if (aVar != null) {
                if (aVar instanceof i) {
                    i iVar = (i) aVar;
                    i.b bVar = iVar.f3671b;
                    i.a aVar2 = iVar.f3670a;
                    if (bVar != null && aVar2 != null) {
                        if (this.f3501a.a(bVar.f3677a)) {
                            this.f3501a.f3485c = bVar.f3678b;
                            String str = aVar2.f3673b;
                            String str2 = aVar2.f3674c;
                            if (!TextUtils.isEmpty(str) && !TextUtils.isEmpty(str2)) {
                                g.a("RO response status : " + bVar.f3677a);
                                if (this.f3501a.f3486d != null) {
                                    this.f3501a.f3486d.a(str, str2, this.f3501a.g);
                                    return;
                                }
                                return;
                            }
                        }
                    }
                } else if (aVar instanceof jp.co.ymm.android.ringtone.net.a.g) {
                    jp.co.ymm.android.ringtone.net.a.g gVar = (jp.co.ymm.android.ringtone.net.a.g) aVar;
                    if (this.f3501a.a(gVar.f3659b.f3664a)) {
                        this.f3501a.a(Message.obtain(null, 1, gVar));
                        return;
                    }
                } else {
                    if (!(aVar instanceof h)) {
                        return;
                    }
                    if (this.f3501a.a(((h) aVar).f3667b.f3669a)) {
                        PreviewService previewService = this.f3501a;
                        previewService.b(previewService.f3487e);
                        return;
                    }
                }
            }
        } else if (i != 2) {
            return;
        }
        this.f3501a.a(b.a.DownloadFailed);
    }
}
