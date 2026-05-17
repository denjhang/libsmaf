package jp.co.ymm.android.ringtone.ui.preferences.alarm;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.preference.DialogPreference;
import android.preference.PreferenceManager;
import android.util.AttributeSet;
import android.view.View;
import jp.co.ymm.android.ringtone.ui.customview.NumberPicker;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class TimeSecPreference extends DialogPreference {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected NumberPicker f3823a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    protected NumberPicker f3824b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    protected int f3825c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    protected int f3826d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    protected int f3827e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    protected int f3828f;
    protected int g;

    public TimeSecPreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f3823a = null;
        this.f3824b = null;
        this.f3825c = 5;
        this.f3826d = 0;
        this.f3827e = 0;
        this.f3828f = 9;
        this.g = 59;
        setDialogLayoutResource(2131296310);
        setDialogIcon((Drawable) null);
    }

    public int a() {
        return getPersistedInt(this.f3825c);
    }

    public CharSequence a(int i) {
        int i2 = i / 60;
        if (i2 == 0) {
            return String.valueOf(i % 60) + getContext().getString(2131492991);
        }
        return String.valueOf(i2) + getContext().getString(2131492989) + String.valueOf(i % 60) + getContext().getString(2131492991);
    }

    protected void b() {
        setSummary(a(a()));
    }

    void b(int i) {
    }

    public void c(int i) {
        persistInt(i);
    }

    @Override // android.preference.Preference
    protected void onAttachedToHierarchy(PreferenceManager preferenceManager) {
        super.onAttachedToHierarchy(preferenceManager);
        b();
    }

    @Override // android.preference.DialogPreference
    protected void onBindDialogView(View view) {
        super.onBindDialogView(view);
        this.f3823a = (NumberPicker) view.findViewById(2131165283);
        this.f3824b = (NumberPicker) view.findViewById(2131165284);
        this.f3823a.c(this.f3827e, this.f3828f);
        this.f3824b.c(this.f3827e, this.g);
        this.f3823a.d();
        this.f3824b.d();
        this.f3823a.setSpeed(150L);
        this.f3824b.setSpeed(150L);
        this.f3823a.setCurrent(a() / 60);
        this.f3824b.setCurrent(a() % 60);
    }

    @Override // android.preference.DialogPreference
    protected void onDialogClosed(boolean z) {
        super.onDialogClosed(z);
        if (z) {
            this.f3824b.clearFocus();
            c((this.f3823a.getCurrent() * 60) + this.f3824b.getCurrent());
            b((this.f3823a.getCurrent() * 60) + this.f3824b.getCurrent());
        }
        b();
    }
}
