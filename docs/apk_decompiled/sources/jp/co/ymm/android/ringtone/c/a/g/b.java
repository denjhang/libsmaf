package jp.co.ymm.android.ringtone.c.a.g;

import android.app.Activity;
import android.app.Fragment;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.preference.PreferenceFragment;
import android.text.TextUtils;
import d.a.a.a.m;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.ui.activity.TopActivity;
import jp.co.ymm.android.ringtone.util.c;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.g;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b extends PreferenceFragment {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private jp.co.ymm.android.ringtone.ui.activity.a.a f3587a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private m f3588b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    protected jp.co.ymm.android.ringtone.util.a f3589c = null;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    protected String f3590d = "";

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    protected String f3591e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    protected BaseActivity f3592f;

    protected void a() {
        if (getFragmentManager().getBackStackEntryCount() != 0) {
            getFragmentManager().popBackStack();
        }
    }

    protected void a(int i, f.a aVar) {
        BaseActivity baseActivity = this.f3592f;
        if (baseActivity != null) {
            baseActivity.a(i, aVar);
        }
    }

    protected void a(Fragment fragment) {
        BaseActivity baseActivity = this.f3592f;
        if (baseActivity != null) {
            baseActivity.a(fragment);
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    public void a(String str, String str2, String str3, String str4) {
        this.f3587a.a(str, str2, str3, str4);
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public void onActivityResult(int i, int i2, Intent intent) {
        g.a("return Activity: " + intent);
        super.onActivityResult(i, i2, intent);
        this.f3589c.a(i2, intent);
        if (intent == null) {
            MyApplication.a(getActivity());
            return;
        }
        String stringExtra = intent.getStringExtra("preference-id");
        g.a("preferenceKey: " + stringExtra);
        String stringExtra2 = intent.getStringExtra("tone-id");
        g.a("keyToneId:" + stringExtra2);
        if (!TextUtils.isEmpty(stringExtra2)) {
            a("Ringtone", "click", o.Tone_Phone.name().equals(stringExtra) ? "Phone_set" : o.Tone_SMS.name().equals(stringExtra) ? "SMS_set" : o.Tone_Carrier.name().equals(stringExtra) ? "Carrier_set" : o.Tone_Gmail.name().equals(stringExtra) ? "Gmail_set" : "no label", this.f3591e);
        }
        if (!TextUtils.isEmpty(stringExtra)) {
            if (this.f3590d.equals(o.T) && stringExtra.equals(o.Tone_Carrier.name())) {
                MyApplication.a(getActivity(), o.T);
                return;
            }
            if (this.f3590d.equals(o.U) && stringExtra.equals(o.Tone_Carrier.name())) {
                MyApplication.a(getActivity(), o.U);
                return;
            }
            if (this.f3590d.equals(o.V) && stringExtra.equals(o.Tone_Carrier.name())) {
                MyApplication.a(getActivity(), o.V);
                return;
            } else if (o.Tone_Gmail.name().equals(stringExtra)) {
                MyApplication.a(getActivity(), stringExtra);
                return;
            } else if (o.Tone_SMS.name().equals(stringExtra)) {
                MyApplication.a(getActivity(), stringExtra);
                return;
            }
        }
        MyApplication.a(getActivity());
    }

    @Override // android.app.Fragment
    public void onAttach(Activity activity) {
        super.onAttach(activity);
        if (activity instanceof BaseActivity) {
            this.f3592f = (BaseActivity) activity;
        }
    }

    @Override // android.app.Fragment
    public void onAttach(Context context) {
        super.onAttach(context);
        if (context instanceof BaseActivity) {
            this.f3592f = (BaseActivity) context;
        }
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.f3587a = new jp.co.ymm.android.ringtone.ui.activity.a.a(getActivity());
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public void onDestroy() {
        super.onDestroy();
        this.f3587a.a();
    }

    @Override // android.app.Fragment
    public void onDetach() {
        super.onDetach();
        this.f3592f = null;
    }

    @Override // android.app.Fragment
    public void onPause() {
        super.onPause();
        m mVar = this.f3588b;
        if (mVar != null) {
            mVar.a();
        }
    }

    @Override // android.app.Fragment
    public void onResume() {
        super.onResume();
        c.a(getActivity(), this.f3588b);
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public void onStart() {
        super.onStart();
        this.f3587a.b();
        if (this.f3589c == null) {
            this.f3589c = new jp.co.ymm.android.ringtone.util.a();
            this.f3589c.a((TopActivity) getActivity(), this);
        }
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public void onStop() {
        super.onStop();
        this.f3587a.c();
    }
}
