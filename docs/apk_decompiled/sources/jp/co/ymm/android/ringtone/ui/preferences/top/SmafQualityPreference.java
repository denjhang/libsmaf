package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.preference.ListPreference;
import android.preference.PreferenceManager;
import android.util.AttributeSet;
import android.view.View;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class SmafQualityPreference extends ListPreference {
    public SmafQualityPreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        setDialogIcon((Drawable) null);
    }

    private void a() {
        setSummary(getEntry());
    }

    @Override // android.preference.Preference
    protected void onAttachedToHierarchy(PreferenceManager preferenceManager) {
        super.onAttachedToHierarchy(preferenceManager);
        a();
    }

    @Override // android.preference.DialogPreference
    protected void onBindDialogView(View view) {
        super.onBindDialogView(view);
    }

    @Override // android.preference.ListPreference, android.preference.DialogPreference
    protected void onDialogClosed(boolean z) {
        super.onDialogClosed(z);
        a();
    }
}
