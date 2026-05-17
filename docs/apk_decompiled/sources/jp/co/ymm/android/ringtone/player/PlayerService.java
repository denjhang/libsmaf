package jp.co.ymm.android.ringtone.player;

import android.annotation.SuppressLint;
import android.app.ActivityManager;
import android.app.Notification;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.media.AudioManager;
import android.os.Build;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.Looper;
import android.os.Message;
import android.telephony.TelephonyManager;
import androidx.core.app.e;
import java.util.Iterator;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.player.h;
import jp.co.ymm.android.ringtone.ui.activity.TopActivity;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@SuppressLint({"HandlerLeak"})
public class PlayerService extends Service implements h.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static String f3706a = "preinstalled/tone/02935GM6.MMF";

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public static String f3707b = "preinstalled/tone/SILENT.MMF";

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final String f3708c = "jp.co.ymm.android.ringtone.player.PlayerService";

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static int f3709d = -1;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private Handler f3710e = null;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Looper f3711f = null;
    private h g = null;
    private c h = null;
    private Boolean i = false;
    private final BroadcastReceiver j = new i(this);

    public static String a(Context context, String str, String str2) {
        jp.co.ymm.android.ringtone.b.c cVarB = jp.co.ymm.android.ringtone.b.d.b(str);
        if (cVarB != null && cVarB.b()) {
            return str;
        }
        jp.co.ymm.android.ringtone.util.g.a("not toneId");
        String str3 = f3706a;
        a(context, str2);
        return str3;
    }

    private void a() {
        if (f3709d == -1) {
            return;
        }
        Object systemService = getSystemService("notification");
        if (Build.VERSION.SDK_INT < 23) {
            return;
        }
        AudioManager audioManager = (AudioManager) getSystemService("audio");
        if (f3709d != audioManager.getRingerMode() && ((NotificationManager) systemService).isNotificationPolicyAccessGranted()) {
            audioManager.setRingerMode(f3709d);
        }
    }

    private static void a(Context context, String str) {
        Notification notificationBuild;
        Intent intent = new Intent(context, (Class<?>) TopActivity.class);
        intent.setFlags(335544320);
        PendingIntent activity = PendingIntent.getActivity(context, 0, intent, 0);
        NotificationManager notificationManager = (NotificationManager) context.getSystemService("notification");
        if (notificationManager == null) {
            return;
        }
        if (Build.VERSION.SDK_INT < 26) {
            e.c cVar = new e.c(context.getApplicationContext());
            cVar.d(context.getString(2131492879));
            cVar.c(2131099648);
            cVar.a(Color.rgb(65, 135, 247));
            cVar.c("着信音設定(" + str + ")");
            cVar.b("音源が認識できないため、デフォルト音が鳴動しました");
            cVar.a((Bitmap) null);
            cVar.a(System.currentTimeMillis());
            cVar.a(activity);
            notificationBuild = cVar.a();
        } else {
            Notification.Builder builder = new Notification.Builder(context.getApplicationContext(), MyApplication.c(context.getApplicationContext()));
            builder.setTicker(context.getString(2131492879));
            builder.setSmallIcon(2131099648);
            builder.setColor(Color.rgb(65, 135, 247));
            builder.setContentTitle("着信音設定(" + str + ")");
            builder.setContentText("音源が認識できないため、デフォルト音が鳴動しました");
            builder.setWhen(System.currentTimeMillis());
            builder.setContentIntent(activity);
            notificationBuild = builder.build();
        }
        notificationBuild.flags = 16;
        notificationManager.notify(1, notificationBuild);
        jp.co.ymm.android.ringtone.util.g.g("notFoundNotification");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Intent intent) {
        String action = intent.getAction();
        l lVarValueOf = l.valueOf(intent.getExtras().getString("ringtone-type"));
        if (action == null || lVarValueOf == null) {
            jp.co.ymm.android.ringtone.util.g.b("unset action or ringtoneType");
            return;
        }
        if ("jp.co.ymm.android.ringtone.action.PLAY".equals(action)) {
            a(lVarValueOf, intent);
            return;
        }
        if ("jp.co.ymm.android.ringtone.action.STOP".equals(action)) {
            a(lVarValueOf);
            return;
        }
        jp.co.ymm.android.ringtone.util.g.b("unknown action: " + action);
    }

    private void a(l lVar) {
        jp.co.ymm.android.ringtone.util.g.f("STOP!!!");
        this.g.a(lVar);
        a();
        if (this.g.b()) {
            return;
        }
        stopSelf();
    }

    private void a(l lVar, Intent intent) {
        String stringExtra = intent.getStringExtra("tone-id");
        if (stringExtra == null) {
            jp.co.ymm.android.ringtone.util.g.b("unset ToneID");
            return;
        }
        h.b bVar = new h.b(lVar, intent);
        if (bVar.e().name().equals(l.Phone.name()) || bVar.e().name().equals(l.CarrierMail.name()) || bVar.e().name().equals(l.SMS.name()) || bVar.e().name().equals(l.Gmail.name()) || bVar.e().name().equals(l.Alarm.name())) {
            this.i = true;
        }
        bVar.a(getSharedPreferences(o.L, 0).getString(o.SmafQuality.name(), String.valueOf('0')).charAt(0));
        this.g.b(bVar);
        if (!bVar.e().name().equals(l.Phone.name()) && c((Context) this)) {
            stringExtra = f3707b;
        }
        if (z.f(getApplicationContext())) {
            AudioManager audioManager = (AudioManager) getSystemService("audio");
            if (a(audioManager)) {
                audioManager.setRingerMode(2);
                this.h.c(bVar);
            } else {
                this.h.a(bVar);
            }
        } else {
            this.h.c(bVar);
            jp.co.ymm.android.ringtone.util.g.d("Mixer:changeVolume");
        }
        jp.co.ymm.android.ringtone.util.g.f("PLAY!!!: " + stringExtra);
        if (this.g.a(stringExtra, bVar)) {
            return;
        }
        this.h.b(bVar);
        if (this.g.b()) {
            return;
        }
        stopSelf();
    }

    public static boolean a(Context context) {
        Iterator<ActivityManager.RunningServiceInfo> it = ((ActivityManager) context.getSystemService("activity")).getRunningServices(Integer.MAX_VALUE).iterator();
        while (it.hasNext()) {
            if (f3708c.equals(it.next().service.getClassName())) {
                jp.co.ymm.android.ringtone.util.g.d("PlayerServiceRunning...");
                return true;
            }
        }
        return false;
    }

    private boolean a(AudioManager audioManager) {
        if (Build.VERSION.SDK_INT < 23) {
            return false;
        }
        f3709d = -1;
        if (audioManager.getRingerMode() == 2 || audioManager.getRingerMode() == 1) {
            return false;
        }
        f3709d = audioManager.getRingerMode();
        return ((NotificationManager) getSystemService("notification")).isNotificationPolicyAccessGranted();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        jp.co.ymm.android.ringtone.util.g.f("STOP PLAYING TONE!!!");
        h hVar = this.g;
        hVar.a(hVar.a());
        a();
        if (this.g.b()) {
            return;
        }
        stopSelf();
    }

    public static void b(Context context) {
        AudioManager audioManager = (AudioManager) context.getSystemService("audio");
        SharedPreferences sharedPreferences = context.getSharedPreferences(o.L, 0);
        int i = sharedPreferences.getInt(o.Mute_System_Volume.name(), -1);
        if (i != -1) {
            audioManager.setStreamMute(i, false);
            sharedPreferences.edit().remove(o.Mute_System_Volume.name()).apply();
        }
        SharedPreferences.Editor editorEdit = sharedPreferences.edit();
        int streamVolume = audioManager.getStreamVolume(3);
        int streamVolume2 = audioManager.getStreamVolume(1);
        int streamVolume3 = audioManager.getStreamVolume(2);
        int streamVolume4 = audioManager.getStreamVolume(5);
        editorEdit.putInt(o.Stream_Music.name(), streamVolume);
        editorEdit.putInt(o.Stream_System.name(), streamVolume2);
        editorEdit.putInt(o.Stream_Ring.name(), streamVolume3);
        editorEdit.putInt(o.Stream_Notification.name(), streamVolume4);
        editorEdit.commit();
        jp.co.ymm.android.ringtone.util.g.d("[save]music_volume:" + streamVolume);
        jp.co.ymm.android.ringtone.util.g.d("[save]system_volume:" + streamVolume2);
        jp.co.ymm.android.ringtone.util.g.d("[save]ring_volume:" + streamVolume3);
        jp.co.ymm.android.ringtone.util.g.d("[save]notification_volume:" + streamVolume4);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        AudioManager audioManager = (AudioManager) getSystemService("audio");
        SharedPreferences sharedPreferences = getSharedPreferences(o.L, 0);
        int i = sharedPreferences.getInt(o.Stream_Music.name(), -1);
        int i2 = sharedPreferences.getInt(o.Stream_System.name(), -1);
        int i3 = sharedPreferences.getInt(o.Stream_Ring.name(), -1);
        int i4 = sharedPreferences.getInt(o.Stream_Notification.name(), -1);
        if (-1 < i) {
            audioManager.setStreamVolume(3, i, 0);
            jp.co.ymm.android.ringtone.util.g.d("[set]STREAM_MUSIC: " + i);
        }
        if (-1 < i2) {
            audioManager.setStreamVolume(1, i2, 0);
            jp.co.ymm.android.ringtone.util.g.d("[set]STREAM_SYSTEM: " + i2);
        }
        if (-1 < i3) {
            audioManager.setStreamVolume(2, i3, 0);
            jp.co.ymm.android.ringtone.util.g.d("[set]STREAM_RING: " + i3);
        }
        if (-1 < i4) {
            audioManager.setStreamVolume(5, i4, 0);
            jp.co.ymm.android.ringtone.util.g.d("[set]STREAM_NOTIFICATION: " + i4);
        }
    }

    public static boolean c(Context context) {
        String str;
        int callState = ((TelephonyManager) context.getSystemService("phone")).getCallState();
        if (callState == 1) {
            str = "CALL_STATE_RINGING";
        } else {
            if (callState != 2) {
                return false;
            }
            str = "CALL_STATE_OFFHOOK";
        }
        jp.co.ymm.android.ringtone.util.g.d(str);
        return true;
    }

    @Override // jp.co.ymm.android.ringtone.player.h.a
    public void a(boolean z) {
        this.h.a();
        StringBuilder sb = new StringBuilder();
        sb.append("play stopped(");
        sb.append(z ? "normal" : "error");
        sb.append(")");
        jp.co.ymm.android.ringtone.util.g.d(sb.toString());
        sendBroadcast(new Intent("jp.co.ymm.android.ringtone.event.STOPPED"));
        a();
        if (this.g.b() || !z) {
            return;
        }
        stopSelf();
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        jp.co.ymm.android.ringtone.util.g.d("onCreate");
        this.g = new h(getApplicationContext(), this);
        this.h = new c(getApplicationContext());
        getApplicationContext().registerReceiver(this.j, new IntentFilter("android.media.AUDIO_BECOMING_NOISY"));
        HandlerThread handlerThread = new HandlerThread("PlayerEntry");
        handlerThread.start();
        this.f3711f = handlerThread.getLooper();
        this.f3710e = new j(this, this.f3711f);
    }

    @Override // android.app.Service
    public void onDestroy() {
        jp.co.ymm.android.ringtone.util.g.d("MyService::onDestroy");
        try {
            getApplicationContext().unregisterReceiver(this.j);
        } catch (IllegalArgumentException unused) {
            jp.co.ymm.android.ringtone.util.g.a("IllegalArgumentException ");
        }
        this.f3710e.post(new k(this));
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        jp.co.ymm.android.ringtone.util.g.d("onStartCommand(" + i2 + ":" + intent + ")");
        if (intent == null || intent.getAction() == null || intent.getExtras() == null) {
            jp.co.ymm.android.ringtone.util.g.g("unknown intent");
            return 2;
        }
        Message messageObtainMessage = this.f3710e.obtainMessage();
        messageObtainMessage.obj = intent;
        this.f3710e.sendMessage(messageObtainMessage);
        return 2;
    }
}
