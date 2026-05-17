package jp.co.ymm.android.ringtone.util;

import android.app.Activity;
import android.content.Intent;
import android.preference.PreferenceFragment;
import android.preference.PreferenceGroup;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Activity f3868a = null;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private PreferenceFragment f3869b = null;

    /* JADX INFO: renamed from: jp.co.ymm.android.ringtone.util.a$a, reason: collision with other inner class name */
    public interface InterfaceC0036a {
        void a(int i, Intent intent);

        void a(Activity activity);
    }

    private void a(Activity activity, PreferenceGroup preferenceGroup) {
        int preferenceCount = preferenceGroup.getPreferenceCount();
        for (int i = 0; i < preferenceCount; i++) {
            Object preference = preferenceGroup.getPreference(i);
            if (preference instanceof PreferenceGroup) {
                a(activity, (PreferenceGroup) preference);
            } else if (preference instanceof InterfaceC0036a) {
                ((InterfaceC0036a) preference).a(activity);
            }
        }
    }

    public void a(Activity activity, PreferenceFragment preferenceFragment) {
        this.f3868a = activity;
        this.f3869b = preferenceFragment;
        a(activity, preferenceFragment.getPreferenceScreen());
    }

    public boolean a(int i, Intent intent) {
        String stringExtra;
        g.a(this.f3869b != null);
        if (intent == null || (stringExtra = intent.getStringExtra("preference-id")) == null || stringExtra.equals("")) {
            return false;
        }
        Object objFindPreference = this.f3869b.findPreference(stringExtra);
        if (!(objFindPreference instanceof InterfaceC0036a)) {
            return false;
        }
        g.a("ActivityResult dispatch to " + stringExtra);
        ((InterfaceC0036a) objFindPreference).a(i, intent);
        return true;
    }
}
