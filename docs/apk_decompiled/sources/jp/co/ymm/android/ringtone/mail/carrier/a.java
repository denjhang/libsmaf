package jp.co.ymm.android.ringtone.mail.carrier;

import android.content.Context;
import android.database.ContentObserver;
import android.database.Cursor;
import android.net.Uri;
import android.os.Handler;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.l;
import jp.co.ymm.android.ringtone.util.n;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a extends ContentObserver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f3619a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    a(Handler handler, Context context) {
        super(handler);
        this.f3619a = context;
    }

    @Override // android.database.ContentObserver
    public void onChange(boolean z) {
        if (n.a(this.f3619a, "android.permission.WRITE_EXTERNAL_STORAGE")) {
            super.onChange(z);
            Cursor cursorQuery = this.f3619a.getContentResolver().query(Uri.parse("content://com.kddi.android.email.maildb.provider.type1"), null, null, null, null);
            if (cursorQuery != null) {
                if (cursorQuery.moveToFirst()) {
                    int unused = CarrierKddiEmail.f3612c = CarrierKddiEmail.f3610a;
                    int unused2 = CarrierKddiEmail.f3610a = cursorQuery.getInt(cursorQuery.getColumnIndex("Unread"));
                    int unused3 = CarrierKddiEmail.f3613d = CarrierKddiEmail.f3611b;
                    int unused4 = CarrierKddiEmail.f3611b = cursorQuery.getInt(cursorQuery.getColumnIndex("Recent"));
                }
                cursorQuery.close();
            }
            g.a("unread: " + CarrierKddiEmail.f3612c + " to " + CarrierKddiEmail.f3610a + ", recent: " + CarrierKddiEmail.f3613d + " to " + CarrierKddiEmail.f3611b);
            if (CarrierKddiEmail.f3611b > CarrierKddiEmail.f3613d) {
                g.a("KDDI Email received!");
                l.j(this.f3619a);
            } else if (CarrierKddiEmail.f3611b < CarrierKddiEmail.f3613d) {
                g.a("KDDI Email stop!");
                z.a(this.f3619a.getApplicationContext(), jp.co.ymm.android.ringtone.player.l.CarrierMail);
            }
        }
    }
}
