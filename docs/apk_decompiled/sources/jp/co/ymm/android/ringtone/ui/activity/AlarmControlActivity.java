package jp.co.ymm.android.ringtone.ui.activity;

import android.app.Activity;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.BroadcastReceiver;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.media.AudioManager;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Vibrator;
import android.telephony.PhoneStateListener;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import android.view.KeyEvent;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;
import androidx.core.app.e;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.alarm.AlarmItem;
import jp.co.ymm.android.ringtone.c.a.b.i;
import jp.co.ymm.android.ringtone.player.PlayerService;
import jp.co.ymm.android.ringtone.player.l;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class AlarmControlActivity extends Activity {

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    NotificationManager f3769d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private AlarmItem f3770e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Vibrator f3771f;
    private Button i;
    private Button j;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f3766a = false;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f3767b = false;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3768c = -1;
    private long[] g = {2000, 2000};
    private final Handler h = new Handler();
    private final int k = 0;
    private View.OnClickListener l = new b(this);
    private final BroadcastReceiver m = new c(this);
    private final PhoneStateListener n = new d(this);

    /* JADX INFO: Access modifiers changed from: private */
    public void a(boolean z) throws Throwable {
        if (z && this.f3770e.k() == 1) {
            this.f3770e.f(2);
            this.f3770e.b();
        }
        h();
        b();
        finish();
    }

    private void c() {
        NotificationManager notificationManager;
        Notification notificationBuild;
        this.f3769d = (NotificationManager) getSystemService("notification");
        Intent intent = new Intent(this, (Class<?>) i.class);
        intent.setFlags(335544320);
        PendingIntent activity = PendingIntent.getActivity(this, 0, intent, 0);
        if (Build.VERSION.SDK_INT < 26) {
            e.c cVar = new e.c(getApplicationContext());
            cVar.d(getString(2131492879));
            cVar.c(2131099648);
            cVar.a(Color.rgb(65, 135, 247));
            cVar.c(getString(2131492880));
            cVar.b(getString(2131492878));
            cVar.a((Bitmap) null);
            cVar.a(System.currentTimeMillis());
            cVar.a(activity);
            cVar.a().flags = 16;
            notificationManager = this.f3769d;
            notificationBuild = cVar.a();
        } else {
            Notification.Builder builder = new Notification.Builder(this, MyApplication.a(getApplicationContext()));
            builder.setTicker(getString(2131492879));
            builder.setSmallIcon(2131099648);
            builder.setColor(Color.rgb(65, 135, 247));
            builder.setContentTitle(getString(2131492880));
            builder.setContentText(getString(2131492878));
            builder.setWhen(System.currentTimeMillis());
            builder.setContentIntent(activity);
            builder.build().flags = 16;
            notificationManager = this.f3769d;
            notificationBuild = builder.build();
        }
        notificationManager.notify(0, notificationBuild);
        g.d("createNotification");
    }

    private void d() {
        findViewById(2131165209).setOnClickListener(this.l);
        findViewById(2131165208).setOnClickListener(this.l);
        e();
    }

    private void e() {
        if (!PlayerService.a(this)) {
            PlayerService.b(this);
        }
        SharedPreferences sharedPreferences = getSharedPreferences(o.L, 0);
        String strM = this.f3770e.m();
        AudioManager audioManager = (AudioManager) getSystemService("audio");
        g.a("ForcedPlay: " + this.f3770e.d());
        g.a("isWiredHeadsetOn() : " + audioManager.isWiredHeadsetOn());
        g.a("isBluetoothA2dpOn() : " + audioManager.isBluetoothA2dpOn());
        if (z.b(audioManager) && !this.f3770e.d() && !PlayerService.c(this)) {
            g.a("manner mode");
        } else if (!z.c(audioManager)) {
            if (!TextUtils.isEmpty(strM)) {
                String strA = PlayerService.a(this, strM, "アラーム");
                if (this.f3770e.d() && audioManager.getRingerMode() != 2) {
                    i();
                }
                z.a(this, strA, sharedPreferences.getInt(o.Volume_Alarm.name(), o.M), l.Alarm);
                this.f3766a = true;
            }
            if (!this.f3770e.n() || PlayerService.c(this)) {
                return;
            }
        }
        a();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void f() {
        this.f3769d.cancel(0);
        g.d("removeNotification");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void g() {
        if (this.f3767b) {
            this.f3767b = false;
            ((AudioManager) getSystemService("audio")).setRingerMode(this.f3768c);
            g.a("setRingerMode: 2 to " + this.f3768c);
        }
    }

    private void h() {
        if (this.f3766a) {
            this.f3766a = false;
            z.a(this, l.Alarm);
            if (this.f3767b) {
                g();
            }
        }
    }

    private void i() {
        if (this.f3767b) {
            return;
        }
        AudioManager audioManager = (AudioManager) getSystemService("audio");
        this.f3768c = audioManager.getRingerMode();
        audioManager.setRingerMode(2);
        g.a("setRingerMode: " + this.f3768c + " to 2");
        this.f3767b = true;
    }

    public void a() {
        g.a("is Vibrate enable");
        this.f3771f = (Vibrator) getSystemService("vibrator");
        this.f3771f.vibrate(this.g, 0);
    }

    public void b() {
        Vibrator vibrator = this.f3771f;
        if (vibrator != null) {
            vibrator.cancel();
        }
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        g.a("onCreate ");
        c();
        jp.co.ymm.android.ringtone.util.c.a(getApplicationContext());
        getWindow().addFlags(6815872);
        setContentView(2131296258);
        this.i = (Button) findViewById(2131165209);
        this.j = (Button) findViewById(2131165208);
        AlarmItem.a(getApplicationContext());
        Bundle extras = getIntent().getExtras();
        if (extras == null) {
            Toast.makeText(this, 2131492868, 0).show();
            finish();
        }
        int i = extras.getInt("extra_alarm_item_id", -1);
        g.a(" ID " + i);
        if (i != -1) {
            this.f3770e = new AlarmItem(i);
        } else {
            Toast.makeText(this, 2131492869, 0).show();
            finish();
        }
        d();
        ((TelephonyManager) getSystemService("phone")).listen(this.n, 32);
        registerReceiver(this.m, new IntentFilter("jp.co.ymm.android.ringtone.event.STOPPED"));
        ((TextView) findViewById(2131165248)).setText(this.f3770e.g() == null ? getString(2131492876) : this.f3770e.g());
        this.h.postDelayed(new a(this), this.f3770e.i() * 1000);
        if (this.f3770e.j() <= 0) {
            this.j.setVisibility(4);
        }
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        g.a("onDestroy: ");
        b();
        unregisterReceiver(this.m);
        h();
        jp.co.ymm.android.ringtone.util.c.a();
        this.f3771f = null;
        this.f3770e = null;
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyDown(int i, KeyEvent keyEvent) {
        if (i == 4 || i == 84) {
            return true;
        }
        return super.onKeyDown(i, keyEvent);
    }

    @Override // android.app.Activity
    protected void onPause() {
        super.onPause();
        g.a("onPause: ");
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        g.a("onResume: ");
    }

    @Override // android.app.Activity
    protected void onUserLeaveHint() {
        super.onUserLeaveHint();
        g.a("onUserLeaveHint");
        finish();
    }
}
