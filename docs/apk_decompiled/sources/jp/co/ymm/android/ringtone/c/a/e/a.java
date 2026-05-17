package jp.co.ymm.android.ringtone.c.a.e;

import android.media.AudioTrack;
import android.os.Bundle;
import android.preference.ListPreference;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import java.util.ArrayList;
import java.util.Arrays;
import jp.co.ymm.android.ringtone.c.a.g.b;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a extends b {
    private View g;

    public static a b() {
        return new a();
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.b, android.preference.PreferenceFragment, android.app.Fragment
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        getPreferenceManager().setSharedPreferencesName(o.L);
        addPreferencesFromResource(2131689474);
        if (AudioTrack.getNativeOutputSampleRate(3) == 48000) {
            ListPreference listPreference = (ListPreference) findPreference("SmafQuality");
            ArrayList arrayList = new ArrayList(Arrays.asList(listPreference.getEntries()));
            arrayList.remove(arrayList.indexOf(getString(2131493119)));
            CharSequence[] charSequenceArr = (CharSequence[]) arrayList.toArray(new CharSequence[0]);
            ArrayList arrayList2 = new ArrayList(Arrays.asList(listPreference.getEntryValues()));
            arrayList2.remove(arrayList2.indexOf(getString(2131493120)));
            CharSequence[] charSequenceArr2 = (CharSequence[]) arrayList2.toArray(new CharSequence[0]);
            listPreference.setEntries(charSequenceArr);
            listPreference.setEntryValues(charSequenceArr2);
        }
    }

    @Override // android.preference.PreferenceFragment, android.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        super.onCreateView(layoutInflater, viewGroup, bundle);
        this.g = layoutInflater.inflate(2131296312, viewGroup, false);
        getActivity().setTitle(2131493163);
        return this.g;
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.b, android.preference.PreferenceFragment, android.app.Fragment
    public void onDestroy() {
        super.onDestroy();
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.b, android.preference.PreferenceFragment, android.app.Fragment
    public void onStart() {
        super.onStart();
    }
}
