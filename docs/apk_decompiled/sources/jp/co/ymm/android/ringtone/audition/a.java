package jp.co.ymm.android.ringtone.audition;

import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.widget.RemoteViews;
import androidx.core.app.e;
import jp.co.ymm.android.ringtone.MyApplication;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Context f3489a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Notification.Builder f3490b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private e.c f3491c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private CharSequence f3492d = "";

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private CharSequence f3493e = "";

    a(Context context) {
        this.f3489a = context;
        Intent intent = new Intent();
        if (Build.VERSION.SDK_INT < 26) {
            this.f3491c = new e.c(context.getApplicationContext());
            this.f3491c.a(PendingIntent.getActivity(this.f3489a, 0, intent, 134217728));
        } else {
            this.f3490b = new Notification.Builder(context.getApplicationContext(), MyApplication.b(context.getApplicationContext()));
            this.f3490b.setContentIntent(PendingIntent.getActivity(this.f3489a, 0, intent, 134217728));
        }
        b();
    }

    private void b() {
        if (Build.VERSION.SDK_INT < 26) {
            this.f3491c.c(this.f3492d);
            this.f3491c.b(this.f3493e);
            e.c cVar = this.f3491c;
            cVar.a(cVar.a().contentIntent);
            return;
        }
        this.f3490b.setContentTitle(this.f3492d);
        this.f3490b.setContentText(this.f3493e);
        Notification.Builder builder = this.f3490b;
        builder.setContentIntent(builder.build().contentIntent);
    }

    Notification a() {
        return Build.VERSION.SDK_INT < 26 ? this.f3491c.a() : this.f3490b.build();
    }

    a a(int i) {
        if (Build.VERSION.SDK_INT < 26) {
            this.f3491c.c(i);
        } else {
            this.f3490b.setSmallIcon(i);
        }
        return this;
    }

    a a(PendingIntent pendingIntent) {
        if (Build.VERSION.SDK_INT < 26) {
            this.f3491c.a(pendingIntent);
        } else {
            this.f3490b.setContentIntent(pendingIntent);
        }
        b();
        return this;
    }

    a a(RemoteViews remoteViews) {
        if (Build.VERSION.SDK_INT < 26) {
            this.f3491c.a(remoteViews);
        } else {
            this.f3490b.setCustomContentView(remoteViews);
        }
        return this;
    }

    a a(CharSequence charSequence) {
        this.f3493e = charSequence;
        b();
        return this;
    }

    a a(boolean z) {
        Notification notificationBuild;
        int i;
        Notification notificationBuild2;
        int i2;
        if (Build.VERSION.SDK_INT < 26) {
            if (z) {
                notificationBuild = this.f3491c.a();
                i2 = notificationBuild.flags | 16;
            } else {
                notificationBuild = this.f3491c.a();
                i = notificationBuild.flags;
                notificationBuild2 = this.f3491c.a();
                i2 = i & (notificationBuild2.flags ^ 16);
            }
        } else if (z) {
            notificationBuild = this.f3490b.build();
            i2 = notificationBuild.flags | 16;
        } else {
            notificationBuild = this.f3490b.build();
            i = notificationBuild.flags;
            notificationBuild2 = this.f3490b.build();
            i2 = i & (notificationBuild2.flags ^ 16);
        }
        notificationBuild.flags = i2;
        return this;
    }

    a b(CharSequence charSequence) {
        this.f3492d = charSequence;
        b();
        return this;
    }

    a c(CharSequence charSequence) {
        if (Build.VERSION.SDK_INT < 26) {
            this.f3491c.d(charSequence);
        } else {
            this.f3490b.setTicker(charSequence);
        }
        return this;
    }
}
