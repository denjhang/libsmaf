package jp.co.ymm.android.ringtone.audition;

import android.R;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.widget.RemoteViews;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.player.PlayerService;
import jp.co.ymm.android.ringtone.player.l;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private jp.co.ymm.android.ringtone.audition.a f3494a = null;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Context f3495b;

    enum a {
        DownloadFailed(2131493081),
        PreviewFailed(2131493082);


        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private int f3499d;

        a(int i) {
            this.f3499d = i;
        }

        int getId() {
            return this.f3499d;
        }
    }

    b(Context context) {
        this.f3495b = context;
    }

    private String b(int i) {
        return this.f3495b.getResources().getString(i);
    }

    private void c(int i) {
        ((NotificationManager) this.f3495b.getSystemService("notification")).notify(i, this.f3494a.a());
    }

    public Notification a() {
        jp.co.ymm.android.ringtone.audition.a aVar = this.f3494a;
        if (aVar != null) {
            return aVar.a();
        }
        return null;
    }

    void a(int i) {
        g.a(this.f3494a != null);
        if (i < 0) {
            return;
        }
        if (i > 100) {
            i = 100;
        }
        RemoteViews remoteViews = this.f3494a.a().contentView;
        g.a(remoteViews != null);
        remoteViews.setProgressBar(2131165262, 100, i, false);
        c(1);
    }

    void a(a aVar) {
        g.a(this.f3494a != null);
        String strB = b(aVar.getId());
        this.f3494a = new jp.co.ymm.android.ringtone.audition.a(this.f3495b);
        jp.co.ymm.android.ringtone.audition.a aVar2 = this.f3494a;
        aVar2.c(strB);
        aVar2.a(Integer.valueOf(R.drawable.ic_dialog_alert).intValue());
        aVar2.b(b(com.yamaha.smafsynth.sample.d.app_name));
        aVar2.a(strB);
        aVar2.a(true);
        c(2);
        b();
    }

    void a(jp.co.ymm.android.ringtone.b.c cVar, c.a aVar) {
        g.a(this.f3494a != null);
        Intent intent = new Intent(this.f3495b, (Class<?>) PlayerService.class);
        intent.setAction("jp.co.ymm.android.ringtone.action.STOP");
        intent.putExtra("tone-id", cVar.c());
        intent.putExtra("ringtone-type", l.Trial.name());
        PendingIntent service = PendingIntent.getService(this.f3495b, 0, intent, 134217728);
        cVar.getAttributes();
        c.a aVarA = aVar != null ? cVar.a(aVar) : cVar.getAttributes();
        this.f3494a = new jp.co.ymm.android.ringtone.audition.a(this.f3495b);
        jp.co.ymm.android.ringtone.audition.a aVar2 = this.f3494a;
        aVar2.c(b(2131493085));
        aVar2.a(R.drawable.ic_media_play);
        aVar2.b(b(2131493083) + aVarA.f3513a + " / " + aVarA.f3514b);
        aVar2.a(b(2131493084));
        aVar2.a(service);
        this.f3494a.a().flags = 2;
        c(1);
    }

    void b() {
        if (this.f3494a == null) {
            return;
        }
        ((NotificationManager) this.f3495b.getSystemService("notification")).cancel(1);
        this.f3494a = null;
    }

    void c() {
        g.a(this.f3494a == null);
        RemoteViews remoteViews = new RemoteViews(this.f3495b.getPackageName(), 2131296285);
        remoteViews.setProgressBar(2131165262, 100, 0, false);
        this.f3494a = new jp.co.ymm.android.ringtone.audition.a(this.f3495b);
        jp.co.ymm.android.ringtone.audition.a aVar = this.f3494a;
        aVar.a(remoteViews);
        aVar.c(b(2131493079));
        aVar.a(R.drawable.stat_sys_download);
        this.f3494a.a().flags = 2;
        c(1);
    }
}
