package jp.co.ymm.android.ringtone.c.a.d;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import jp.co.ymm.android.ringtone.b.c;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class j extends ArrayList<CharSequence> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ jp.co.ymm.android.ringtone.b.c f3577a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ k f3578b;

    j(k kVar, jp.co.ymm.android.ringtone.b.c cVar) {
        this.f3578b = kVar;
        this.f3577a = cVar;
        c.a attributes = this.f3577a.getAttributes();
        jp.co.ymm.android.ringtone.util.g.a(attributes != null);
        add(attributes.f3513a);
        add(attributes.f3514b);
        addAll(attributes.f3515c);
        removeAll(Collections.singleton(null));
        if (this.f3577a.d() || attributes.f3516d.equals(attributes.f3513a)) {
            return;
        }
        try {
            add(String.format("<small><small><br>%s: %s</small></small>", this.f3578b.getString(2131493155), new SimpleDateFormat("yyyy/MM/dd HH:mm").format(new SimpleDateFormat("yyyyMMddHHmmss").parse(attributes.f3516d))));
        } catch (ParseException unused) {
            jp.co.ymm.android.ringtone.util.g.b("ParseException");
        }
    }
}
