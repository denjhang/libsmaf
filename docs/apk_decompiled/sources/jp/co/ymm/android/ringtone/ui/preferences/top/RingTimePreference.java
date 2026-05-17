package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.preference.DialogPreference;
import android.preference.PreferenceManager;
import android.util.AttributeSet;
import android.view.View;
import android.widget.CheckBox;
import jp.co.ymm.android.ringtone.ui.customview.NumberPicker;
import jp.co.ymm.android.ringtone.util.o;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class RingTimePreference extends DialogPreference {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private NumberPicker f3845a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private CheckBox f3846b;

    public RingTimePreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f3845a = null;
        this.f3846b = null;
        setDialogLayoutResource(2131296306);
        setDialogIcon((Drawable) null);
    }

    private void a() {
        String string;
        int persistedInt = getPersistedInt(o.N);
        if (persistedInt == 0) {
            string = getContext().getString(2131492990);
        } else {
            string = String.valueOf(persistedInt) + getContext().getString(2131492991);
        }
        setSummary(string);
    }

    @Override // android.preference.Preference
    protected void onAttachedToHierarchy(PreferenceManager preferenceManager) {
        super.onAttachedToHierarchy(preferenceManager);
        a();
    }

    @Override // android.preference.DialogPreference
    protected void onBindDialogView(View view) {
        super.onBindDialogView(view);
        this.f3845a = (NumberPicker) view.findViewById(2131165282);
        this.f3846b = (CheckBox) view.findViewById(2131165223);
        this.f3845a.c(1, 60);
        this.f3845a.d();
        this.f3845a.setSpeed(150L);
        int persistedInt = getPersistedInt(o.N);
        this.f3845a.setCurrent(persistedInt);
        if (persistedInt == 0) {
            this.f3845a.setCurrent(o.N);
            this.f3845a.setEnabled(false);
        }
        this.f3846b.setChecked(persistedInt == 0);
        this.f3846b.setOnCheckedChangeListener(new f(this));
    }

    @Override // android.preference.DialogPreference
    protected void onDialogClosed(boolean z) {
        super.onDialogClosed(z);
        if (z) {
            this.f3845a.clearFocus();
            persistInt(this.f3846b.isChecked() ? 0 : this.f3845a.getCurrent());
        }
        a();
    }
}
