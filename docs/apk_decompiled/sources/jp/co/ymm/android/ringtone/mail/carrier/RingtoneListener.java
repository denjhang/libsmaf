package jp.co.ymm.android.ringtone.mail.carrier;

import android.app.AlarmManager;
import android.app.Notification;
import android.app.PendingIntent;
import android.app.Service;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.SharedPreferences;
import android.graphics.Color;
import android.media.AudioManager;
import android.os.Build;
import android.os.Handler;
import android.os.IBinder;
import android.telephony.PhoneStateListener;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import androidx.core.app.e;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.player.PlayerService;
import jp.co.ymm.android.ringtone.player.l;
import jp.co.ymm.android.ringtone.ui.activity.TopActivity;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class RingtoneListener extends Service {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private PhoneStateListener f3615a = new c(this);

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private boolean f3616b = false;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private boolean f3617c = false;

    public static class BootReceiver extends BroadcastReceiver {
        @Override // android.content.BroadcastReceiver
        public void onReceive(Context context, Intent intent) {
            g.d("RingtoneListener::onReceive(" + intent + ")");
            if ("android.intent.action.BOOT_COMPLETED".equals(intent.getAction())) {
                if (Build.VERSION.SDK_INT >= 26) {
                    context.startForegroundService(new Intent(context, (Class<?>) RingtoneListener.class));
                } else {
                    context.startService(new Intent(context, (Class<?>) RingtoneListener.class));
                }
            }
            if (intent.getBooleanExtra("android.intent.extra.REPLACING", false) || "android.intent.action.MY_PACKAGE_REPLACED".equals(intent.getAction())) {
                if (Build.VERSION.SDK_INT >= 26) {
                    context.startForegroundService(new Intent(context, (Class<?>) RingtoneListener.class));
                } else {
                    context.startService(new Intent(context, (Class<?>) RingtoneListener.class));
                }
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a() {
        if (this.f3616b) {
            this.f3616b = false;
            z.a(this, l.Phone);
            a(false);
        }
    }

    public static void a(Context context) {
        if (context != null) {
            Intent intent = new Intent(context, (Class<?>) RingtoneListener.class);
            intent.setAction("jp.co.ymm.android.ringtone.action.ACTION_RESET_LISTENER");
            context.startService(intent);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str) {
        SharedPreferences sharedPreferences = getSharedPreferences(o.L, 0);
        if (TextUtils.isEmpty(str)) {
            if (!sharedPreferences.contains(o.Tone_Phone.name())) {
                g.g("unset tone");
                return;
            }
            str = sharedPreferences.getString(o.Tone_Phone.name(), "");
        }
        if (z.a((AudioManager) getSystemService("audio"), getApplicationContext())) {
            g.a("manner mode");
            return;
        }
        a(true);
        new Handler().postDelayed(new d(this, PlayerService.a(this, str, "電話"), sharedPreferences.getInt(o.Volume_Ringtone.name(), o.M)), 100L);
        this.f3616b = true;
    }

    private void a(boolean z) {
        if (this.f3617c == z) {
            return;
        }
        if (z && !PlayerService.a(this)) {
            PlayerService.b(this);
        }
        AudioManager audioManager = (AudioManager) getSystemService("audio");
        z.a(audioManager, 2, z);
        if (z && z.c(audioManager)) {
            audioManager.setStreamVolume(2, 0, 0);
        }
        this.f3617c = z;
        StringBuilder sb = new StringBuilder();
        sb.append("STREAM_RING is ");
        sb.append(this.f3617c ? "muted" : "unmuted");
        g.a(sb.toString());
    }

    @Override // android.app.Service
    public IBinder onBind(Intent intent) {
        return null;
    }

    @Override // android.app.Service
    public void onCreate() {
        Notification notificationBuild;
        g.d("RingtoneListener::onCreate");
        ((TelephonyManager) getSystemService("phone")).listen(this.f3615a, 32);
        if (Build.VERSION.SDK_INT < 18) {
            notificationBuild = new Notification();
        } else {
            Intent intent = new Intent(this, (Class<?>) TopActivity.class);
            intent.putExtra("jp.co.ymm.android.ringtone.intent.INTENT_START_NOTIFICATION", true);
            PendingIntent activity = PendingIntent.getActivity(this, 0, intent, 268435456);
            if (Build.VERSION.SDK_INT < 26) {
                e.c cVar = new e.c(getApplicationContext());
                cVar.a(activity);
                cVar.d(getString(com.yamaha.smafsynth.sample.d.app_name));
                cVar.c(2131099648);
                cVar.a(Color.rgb(65, 135, 247));
                cVar.c(getString(com.yamaha.smafsynth.sample.d.app_name));
                cVar.b(getString(2131493078));
                notificationBuild = cVar.a();
            } else {
                notificationBuild = new Notification.Builder(this, MyApplication.d(getApplicationContext())).setContentIntent(activity).setTicker(getString(com.yamaha.smafsynth.sample.d.app_name)).setSmallIcon(2131099648).setColor(Color.rgb(65, 135, 247)).setContentTitle(getString(com.yamaha.smafsynth.sample.d.app_name)).setContentText(getString(2131493078)).build();
            }
        }
        startForeground(com.yamaha.smafsynth.sample.d.app_name, notificationBuild);
    }

    @Override // android.app.Service
    public void onDestroy() {
        g.d("RingtoneListener::onDestroy");
        a(false);
        stopForeground(true);
        ((TelephonyManager) getSystemService("phone")).listen(this.f3615a, 0);
        PendingIntent service = PendingIntent.getService(this, 0, new Intent(getApplicationContext(), (Class<?>) RingtoneListener.class), 0);
        ((AlarmManager) getSystemService("alarm")).set(0, System.currentTimeMillis() + 2000, service);
    }

    @Override // android.app.Service
    public int onStartCommand(Intent intent, int i, int i2) {
        StringBuilder sb = new StringBuilder();
        sb.append("RingtoneListener::onStartCommand action:");
        sb.append(intent != null ? intent.getAction() : "intent is null");
        g.d(sb.toString());
        if (intent == null || intent.getAction() == null || !intent.getAction().equals("jp.co.ymm.android.ringtone.action.ACTION_RESET_LISTENER")) {
            return 1;
        }
        TelephonyManager telephonyManager = (TelephonyManager) getSystemService("phone");
        telephonyManager.listen(this.f3615a, 0);
        telephonyManager.listen(this.f3615a, 32);
        return 1;
    }
}
