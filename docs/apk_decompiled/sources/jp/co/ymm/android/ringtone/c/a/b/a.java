package jp.co.ymm.android.ringtone.c.a.b;

import android.preference.Preference;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class a implements Preference.OnPreferenceChangeListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ c f3558a;

    a(c cVar) {
        this.f3558a = cVar;
    }

    @Override // android.preference.Preference.OnPreferenceChangeListener
    public boolean onPreferenceChange(Preference preference, Object obj) {
        this.f3558a.n.setSummary((String) obj);
        return true;
    }
}
