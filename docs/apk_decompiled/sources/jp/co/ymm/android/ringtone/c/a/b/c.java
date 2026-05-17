package jp.co.ymm.android.ringtone.c.a.b;

import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.Configuration;
import android.os.Bundle;
import android.preference.CheckBoxPreference;
import android.preference.EditTextPreference;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import java.util.Calendar;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.alarm.AlarmItem;
import jp.co.ymm.android.ringtone.player.PlayerService;
import jp.co.ymm.android.ringtone.ui.preferences.RingtoneSelectPreference;
import jp.co.ymm.android.ringtone.ui.preferences.alarm.AlarmRepeatPreference;
import jp.co.ymm.android.ringtone.ui.preferences.alarm.AlarmSnoozePreference;
import jp.co.ymm.android.ringtone.ui.preferences.alarm.TimePickerPreference;
import jp.co.ymm.android.ringtone.ui.preferences.alarm.TimeSecPreference;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class c extends jp.co.ymm.android.ringtone.c.a.g.b implements f.a {
    public static String g = "alarm-setting";
    public static String h = "alarm-position";
    public static String i = "alarm-add";
    public static String j = "alarm-state";
    private AlarmItem k;
    private CheckBoxPreference l;
    private CheckBoxPreference m;
    private EditTextPreference n;
    private RingtoneSelectPreference o;
    private AlarmRepeatPreference p;
    private TimePickerPreference q;
    private TimeSecPreference r;
    private AlarmSnoozePreference s;
    private int t;
    private View v;
    private Boolean u = false;
    private View.OnClickListener w = new b(this);

    public static c a(AlarmItem alarmItem, int i2) {
        c cVar = new c();
        Bundle bundle = new Bundle();
        bundle.putParcelable(g, alarmItem);
        bundle.putInt(h, i2);
        cVar.setArguments(bundle);
        return cVar;
    }

    public static c a(AlarmItem alarmItem, Boolean bool) {
        c cVar = new c();
        Bundle bundle = new Bundle();
        bundle.putParcelable(g, alarmItem);
        bundle.putBoolean(i, bool.booleanValue());
        cVar.setArguments(bundle);
        return cVar;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        a(15, this);
    }

    public void a(int i2) {
        this.k.a(this.q.a(11), this.q.a(12));
        this.k.a(this.p.a());
        this.k.b(this.o.a());
        this.k.a(this.l.isChecked());
        this.k.c(this.m.isChecked());
        this.k.a(this.n.getText());
        this.k.d(this.r.a());
        this.k.e(this.s.a());
        this.k.s();
        Intent intent = new Intent();
        intent.putExtra(g, this.k);
        intent.putExtra(h, this.t);
        intent.putExtra(i, this.u);
        intent.putExtra(j, i2);
        getTargetFragment().onActivityResult(getTargetRequestCode(), -1, intent);
        a();
        this.k = null;
    }

    @Override // jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i2, int i3) {
        if (i3 == -1) {
            a(0);
        } else if (i3 == -2) {
            dialogInterface.cancel();
        }
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.b, android.preference.PreferenceFragment, android.app.Fragment
    public void onActivityResult(int i2, int i3, Intent intent) {
        jp.co.ymm.android.ringtone.util.g.a("return Activity: " + intent);
        super.onActivityResult(i2, i3, intent);
        this.f3589c.a(i3, intent);
    }

    @Override // android.app.Fragment, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        jp.co.ymm.android.ringtone.util.g.f("onConfigurationChanged");
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.b, android.preference.PreferenceFragment, android.app.Fragment
    public void onCreate(Bundle bundle) {
        RingtoneSelectPreference ringtoneSelectPreference;
        String strM;
        super.onCreate(bundle);
        getPreferenceManager().setSharedPreferencesName(o.L);
        addPreferencesFromResource(2131689472);
        Bundle arguments = getArguments();
        this.k = (AlarmItem) arguments.getParcelable(g);
        this.t = arguments.getInt(h, -1);
        this.u = Boolean.valueOf(arguments.getBoolean(i, false));
        jp.co.ymm.android.ringtone.util.g.a(this.k != null);
        this.q = (TimePickerPreference) findPreference("preference_alerm_time_key");
        if (this.u.booleanValue()) {
            Calendar calendar = Calendar.getInstance();
            this.q.a(calendar.get(11), calendar.get(12));
        } else {
            this.q.a(this.k.c(11), this.k.c(12));
        }
        this.p = (AlarmRepeatPreference) findPreference("preference_alerm_repeat_key");
        this.p.a(this.k.c());
        this.l = (CheckBoxPreference) findPreference("preference_alarm_forced_play_key");
        this.l.setChecked(this.k.d());
        this.m = (CheckBoxPreference) findPreference("preference_alarm_vibrate_key");
        this.m.setChecked(this.k.n());
        this.o = (RingtoneSelectPreference) findPreference("Tone_Alarm");
        this.o.a((Boolean) true);
        if (this.k.m() != null) {
            ringtoneSelectPreference = this.o;
            strM = this.k.m();
        } else {
            ringtoneSelectPreference = this.o;
            strM = PlayerService.f3706a;
        }
        ringtoneSelectPreference.a(strM);
        this.n = (EditTextPreference) findPreference("preference_alerm_label_key");
        this.n.setText(this.k.g());
        this.n.setSummary(this.k.g());
        this.n.setOnPreferenceChangeListener(new a(this));
        this.r = (TimeSecPreference) findPreference("preference_alerm_ring_time_key");
        this.r.c(this.k.i());
        TimeSecPreference timeSecPreference = this.r;
        timeSecPreference.setSummary(timeSecPreference.a(this.k.i()));
        this.s = (AlarmSnoozePreference) findPreference("preference_alerm_snooze_key");
        this.s.b(this.k.j());
        AlarmSnoozePreference alarmSnoozePreference = this.s;
        alarmSnoozePreference.setSummary(alarmSnoozePreference.a(this.k.j()));
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        super.onCreateView(layoutInflater, viewGroup, bundle);
        this.v = layoutInflater.inflate(2131296261, viewGroup, false);
        this.v.findViewById(2131165212).setOnClickListener(this.w);
        this.v.findViewById(2131165210).setOnClickListener(this.w);
        this.v.findViewById(2131165211).setOnClickListener(this.w);
        getActivity().setTitle(2131493145);
        return this.v;
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putInt("mTimeHours", this.q.a(11));
        bundle.putInt("mTimeMinutes", this.q.a(12));
        bundle.putInt("mRingTime", this.r.a());
        bundle.putSerializable("mRepeat", this.p.a());
        bundle.putString("mLabel", this.n.getText());
        bundle.putBoolean("mForcedPlay", this.l.isChecked());
        bundle.putBoolean("mVibrate", this.m.isChecked());
        bundle.putInt("mSnooze", this.s.a());
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.b, android.preference.PreferenceFragment, android.app.Fragment
    public void onStart() {
        super.onStart();
        MyApplication.b(getActivity());
    }
}
