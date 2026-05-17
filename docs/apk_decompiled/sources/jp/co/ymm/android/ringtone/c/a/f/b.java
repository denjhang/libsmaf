package jp.co.ymm.android.ringtone.c.a.f;

import android.content.Context;
import android.os.Build;
import android.os.Bundle;
import android.preference.Preference;
import android.preference.PreferenceCategory;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import com.yamaha.smafsynth.sample.d;
import java.util.List;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.ui.preferences.RingtoneSelectPreference;
import jp.co.ymm.android.ringtone.ui.preferences.top.AddContentDialogPreference;
import jp.co.ymm.android.ringtone.util.BookmarkAgent;
import jp.co.ymm.android.ringtone.util.c;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.l;
import jp.co.ymm.android.ringtone.util.n;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b extends jp.co.ymm.android.ringtone.c.a.g.b implements Preference.OnPreferenceClickListener, n.b {
    private final String g = "mysound";
    private final String h = "Tone_Phone_Individual";
    private final String i = "Tone_Phone_Group";
    private final String j = "setting";
    private final String k = "help";
    private final String l = "alarm";
    private final int m = 0;
    private final int n = 1;
    private final int o = 2;
    private MyApplication p;
    private AddContentDialogPreference q;
    private boolean r;
    public View s;
    public Context t;
    public Preference u;
    public Preference v;
    public Preference w;
    public Preference x;
    public Preference y;

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:20:0x003f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public boolean a(java.lang.String r7) {
        /*
            r6 = this;
            int r0 = r7.hashCode()
            r1 = 0
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            switch(r0) {
                case -1789008553: goto L35;
                case 3198785: goto L2b;
                case 92895825: goto L21;
                case 850752769: goto L17;
                case 1985941072: goto Ld;
                default: goto Lc;
            }
        Lc:
            goto L3f
        Ld:
            java.lang.String r0 = "setting"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3f
            r7 = 2
            goto L40
        L17:
            java.lang.String r0 = "Tone_Phone_Group"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3f
            r7 = 1
            goto L40
        L21:
            java.lang.String r0 = "alarm"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3f
            r7 = 4
            goto L40
        L2b:
            java.lang.String r0 = "help"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3f
            r7 = 3
            goto L40
        L35:
            java.lang.String r0 = "Tone_Phone_Individual"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L3f
            r7 = 0
            goto L40
        L3f:
            r7 = -1
        L40:
            if (r7 == 0) goto L60
            if (r7 == r5) goto L5b
            if (r7 == r4) goto L56
            if (r7 == r3) goto L51
            if (r7 == r2) goto L4c
            r7 = 0
            goto L64
        L4c:
            jp.co.ymm.android.ringtone.c.a.b.i r7 = jp.co.ymm.android.ringtone.c.a.b.i.c()
            goto L64
        L51:
            jp.co.ymm.android.ringtone.c.a.h.f r7 = jp.co.ymm.android.ringtone.c.a.h.f.c()
            goto L64
        L56:
            jp.co.ymm.android.ringtone.c.a.e.a r7 = jp.co.ymm.android.ringtone.c.a.e.a.b()
            goto L64
        L5b:
            jp.co.ymm.android.ringtone.c.a.c.c r7 = jp.co.ymm.android.ringtone.c.a.c.c.c()
            goto L64
        L60:
            jp.co.ymm.android.ringtone.c.a.a.b r7 = jp.co.ymm.android.ringtone.c.a.a.b.c()
        L64:
            if (r7 == 0) goto L6a
            r6.a(r7)
            return r5
        L6a:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.ymm.android.ringtone.c.a.f.b.a(java.lang.String):boolean");
    }

    public static b b() {
        return new b();
    }

    @Override // jp.co.ymm.android.ringtone.util.n.b
    public void a(List<String> list, boolean z) {
        g.b("=== onPermissionResult " + list + ", " + z);
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.b, android.preference.PreferenceFragment, android.app.Fragment
    public void onCreate(Bundle bundle) {
        Preference preferenceFindPreference;
        super.onCreate(bundle);
        this.t = getActivity();
        this.p = (MyApplication) getActivity().getApplication();
        this.p.f(getActivity());
        this.r = !this.t.getSharedPreferences(o.L, 0).getBoolean(o.Welcome.name(), false);
        getPreferenceManager().setSharedPreferencesName(o.L);
        addPreferencesFromResource(2131689473);
        if (!c.c(getActivity()) || (preferenceFindPreference = findPreference(o.addContent.name())) == null) {
            return;
        }
        getPreferenceScreen().removePreference(preferenceFindPreference);
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        super.onCreateView(layoutInflater, viewGroup, bundle);
        if (!MyApplication.b(getActivity())) {
            return this.s;
        }
        this.s = layoutInflater.inflate(2131296300, viewGroup, false);
        getActivity().setTitle(d.app_name);
        this.q = (AddContentDialogPreference) findPreference(o.addContent.name());
        if (Build.VERSION.SDK_INT <= 27) {
            this.u = findPreference("Tone_Phone_Individual");
            this.u.setOnPreferenceClickListener(this);
            this.v = findPreference("Tone_Phone_Group");
            this.v.setOnPreferenceClickListener(this);
        }
        this.w = findPreference("setting");
        this.w.setOnPreferenceClickListener(this);
        this.x = findPreference("help");
        this.x.setOnPreferenceClickListener(this);
        this.y = findPreference("alarm");
        this.y.setOnPreferenceClickListener(this);
        return this.s;
    }

    @Override // android.preference.Preference.OnPreferenceClickListener
    public boolean onPreferenceClick(Preference preference) {
        String key = preference.getKey();
        if (!"Tone_Phone_Group".equals(key) && !"Tone_Phone_Individual".equals(key)) {
            return a(key);
        }
        if (n.a(this.t, "android.permission.WRITE_EXTERNAL_STORAGE") && n.a(this.t, "android.permission.READ_CONTACTS") && n.a(this.t, "android.permission.READ_PHONE_STATE")) {
            return a(key);
        }
        n.a().a(this, new a(this, key), "android.permission.WRITE_EXTERNAL_STORAGE", "android.permission.READ_CONTACTS", "android.permission.READ_PHONE_STATE");
        return true;
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.b, android.app.Fragment
    public void onResume() {
        g.a("mFlgFirstBoot=" + this.r);
        String str = this.r ? "/AppStart/FirstStart/" : "/AppStart/NormalStart/";
        String strB = c.b(getActivity());
        if (strB != null) {
            str = str + strB;
        }
        this.f3591e = str;
        super.onResume();
        if (findPreference(o.addContent.name()) != null) {
            if ((Boolean.valueOf(z.a((Context) getActivity(), o.Utm_Medium.name(), false)).booleanValue() || new BookmarkAgent(getActivity()).c().equalsIgnoreCase("mysound")) && c.d(getActivity())) {
                this.q.setTitle(2131493140);
                this.q.setSummary(2131493134);
            } else {
                this.q.setTitle(2131493141);
                this.q.setSummary("");
            }
        }
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.b, android.preference.PreferenceFragment, android.app.Fragment
    public void onStart() {
        super.onStart();
        this.f3590d = l.f((Context) getActivity());
        g.a("Carrier: " + this.f3590d);
        RingtoneSelectPreference ringtoneSelectPreference = (RingtoneSelectPreference) findPreference(o.Tone_Carrier.name());
        if (ringtoneSelectPreference != null) {
            if ((this.f3590d.equals(o.T) || this.f3590d.equals(o.U)) && ((!this.f3590d.equals(o.T) || l.a((Context) getActivity())) && (!this.f3590d.equals(o.U) || l.c((Context) getActivity())))) {
                ringtoneSelectPreference.setTitle(l.g((Context) getActivity()));
            } else {
                ((PreferenceCategory) findPreference(o.CategoryMail.name())).removePreference(ringtoneSelectPreference);
            }
        }
        RingtoneSelectPreference ringtoneSelectPreference2 = (RingtoneSelectPreference) findPreference(o.Tone_SMS.name());
        if (ringtoneSelectPreference2 != null && this.f3590d.equals(o.U)) {
            ringtoneSelectPreference2.setTitle(getString(2131493162));
        }
        if (27 < Build.VERSION.SDK_INT) {
            Preference preferenceFindPreference = findPreference("Tone_Phone_Individual");
            PreferenceCategory preferenceCategory = (PreferenceCategory) findPreference(o.CategoryPhone.name());
            if (preferenceFindPreference != null) {
                preferenceCategory.removePreference(preferenceFindPreference);
            }
            Preference preferenceFindPreference2 = findPreference("Tone_Phone_Group");
            if (preferenceFindPreference2 != null) {
                preferenceCategory.removePreference(preferenceFindPreference2);
            }
        }
        MyApplication.a(this.f3592f, false);
    }
}
