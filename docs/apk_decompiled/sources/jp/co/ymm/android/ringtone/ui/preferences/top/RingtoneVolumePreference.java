package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.annotation.TargetApi;
import android.app.NotificationManager;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.IntentFilter;
import android.content.SharedPreferences;
import android.graphics.drawable.Drawable;
import android.media.AudioAttributes;
import android.media.AudioManager;
import android.media.Ringtone;
import android.media.RingtoneManager;
import android.net.Uri;
import android.os.Build;
import android.os.Handler;
import android.preference.DialogPreference;
import android.provider.Settings;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.view.View;
import android.widget.SeekBar;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class RingtoneVolumePreference extends DialogPreference implements SeekBar.OnSeekBarChangeListener, View.OnKeyListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private AudioManager f3847a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Ringtone f3848b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private SeekBar f3849c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private SeekBar f3850d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private SeekBar f3851e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private SeekBar f3852f;
    private int g;
    private int h;
    private final BroadcastReceiver i;
    private NotificationManager j;

    public RingtoneVolumePreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f3847a = null;
        this.f3848b = null;
        this.f3849c = null;
        this.f3850d = null;
        this.f3851e = null;
        this.f3852f = null;
        this.g = -1;
        this.h = -1;
        this.i = new g(this);
        setDialogLayoutResource(2131296311);
        setDialogIcon((Drawable) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a() {
        Ringtone ringtone = this.f3848b;
        if (ringtone != null) {
            ringtone.stop();
            this.f3848b = null;
        }
    }

    private void a(int i) {
        int max = this.f3852f.getMax();
        int progress = this.f3852f.getProgress() + i;
        if (progress < 0 || max < progress) {
            return;
        }
        this.f3852f.setProgress(progress);
    }

    private void a(SeekBar seekBar, int i, o oVar) {
        int i2 = getContext().getSharedPreferences(o.L, 0).getInt(oVar.name(), o.M);
        seekBar.setMax(this.f3847a.getStreamMaxVolume(i));
        seekBar.setProgress(i2);
        seekBar.setOnSeekBarChangeListener(this);
    }

    @TargetApi(23)
    private boolean a(boolean z) {
        if (this.j == null || this.f3847a.getRingerMode() == 2 || this.j.isNotificationPolicyAccessGranted()) {
            return true;
        }
        if (!z) {
            return false;
        }
        getContext().startActivity(new Intent("android.settings.NOTIFICATION_POLICY_ACCESS_SETTINGS"));
        return false;
    }

    private void b() {
        SharedPreferences.Editor editorEdit = getContext().getSharedPreferences(o.L, 0).edit();
        editorEdit.putInt(o.Volume_Ringtone.name(), this.f3849c.getProgress());
        editorEdit.putInt(o.Volume_Mail.name(), this.f3850d.getProgress());
        editorEdit.putInt(o.Volume_Alarm.name(), this.f3851e.getProgress());
        editorEdit.commit();
    }

    private void b(int i) {
        if (a(false)) {
            this.f3847a.setRingerMode(2);
            this.f3847a.setStreamVolume(1, i, 0);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        int i = this.g;
        if (i >= 0) {
            b(i);
        }
        if (this.h < 0 || !a(false)) {
            return;
        }
        this.f3847a.setRingerMode(this.h);
    }

    @Override // android.preference.DialogPreference
    protected void onBindDialogView(View view) {
        super.onBindDialogView(view);
        Context context = getContext();
        this.f3847a = (AudioManager) context.getSystemService("audio");
        if (23 <= Build.VERSION.SDK_INT) {
            this.j = (NotificationManager) context.getSystemService("notification");
        }
        this.f3849c = (SeekBar) view.findViewById(2131165297);
        a(this.f3849c, 1, o.Volume_Ringtone);
        this.f3850d = (SeekBar) view.findViewById(2131165296);
        a(this.f3850d, 1, o.Volume_Mail);
        this.f3851e = (SeekBar) view.findViewById(2131165295);
        a(this.f3851e, 1, o.Volume_Alarm);
        this.f3852f = this.f3849c;
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction("android.intent.action.SCREEN_OFF");
        intentFilter.addAction("android.intent.action.CLOSE_SYSTEM_DIALOGS");
        context.registerReceiver(this.i, intentFilter);
        view.setOnKeyListener(this);
        view.setFocusableInTouchMode(true);
        view.requestFocus();
        this.g = this.f3847a.getStreamVolume(1);
        this.h = this.f3847a.getRingerMode();
    }

    @Override // android.preference.DialogPreference
    protected void onDialogClosed(boolean z) {
        super.onDialogClosed(z);
        if (z) {
            b();
        }
        getContext().unregisterReceiver(this.i);
        a();
    }

    @Override // android.preference.DialogPreference, android.content.DialogInterface.OnDismissListener
    public void onDismiss(DialogInterface dialogInterface) {
        super.onDismiss(dialogInterface);
        c();
    }

    @Override // android.view.View.OnKeyListener
    public boolean onKey(View view, int i, KeyEvent keyEvent) {
        if (keyEvent.getAction() != 0) {
            return false;
        }
        if (i != 24 && i != 25) {
            return false;
        }
        a(i == 25 ? -1 : 1);
        return true;
    }

    @Override // android.widget.SeekBar.OnSeekBarChangeListener
    public void onProgressChanged(SeekBar seekBar, int i, boolean z) {
        Ringtone ringtone = this.f3848b;
        if (ringtone == null || !ringtone.isPlaying()) {
            return;
        }
        b(i);
    }

    @Override // android.widget.SeekBar.OnSeekBarChangeListener
    public void onStartTrackingTouch(SeekBar seekBar) {
        Ringtone ringtone;
        if (this.f3852f != seekBar && (ringtone = this.f3848b) != null) {
            ringtone.stop();
            this.f3848b = null;
        }
        if (a(true)) {
            return;
        }
        seekBar.setEnabled(false);
        new Handler().postDelayed(new h(this, seekBar), 1500L);
    }

    @Override // android.widget.SeekBar.OnSeekBarChangeListener
    public void onStopTrackingTouch(SeekBar seekBar) {
        this.f3852f = seekBar;
        Uri uri = (seekBar.getId() == 2131165297 || seekBar.getId() == 2131165296) ? Settings.System.DEFAULT_RINGTONE_URI : Settings.System.DEFAULT_ALARM_ALERT_URI;
        b(seekBar.getProgress());
        if (this.f3848b == null) {
            this.f3848b = RingtoneManager.getRingtone(getContext(), uri);
        }
        Ringtone ringtone = this.f3848b;
        if (ringtone == null || ringtone.isPlaying()) {
            return;
        }
        if (Build.VERSION.SDK_INT < 21) {
            this.f3848b.setStreamType(1);
        } else {
            this.f3848b.setAudioAttributes(new AudioAttributes.Builder().setLegacyStreamType(1).build());
        }
        this.f3848b.play();
    }
}
