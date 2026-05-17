package jp.co.ymm.android.ringtone.ui.preferences.alarm;

import android.content.Context;
import android.graphics.drawable.Drawable;
import android.preference.DialogPreference;
import android.preference.PreferenceManager;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.CheckBox;
import jp.co.ymm.android.ringtone.ui.customview.NumberPicker;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class AlarmSnoozePreference extends DialogPreference {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final String f3815a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private CheckBox f3816b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private CheckBox f3817c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    protected NumberPicker f3818d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    protected int f3819e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    protected int f3820f;
    protected int g;

    public AlarmSnoozePreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f3817c = null;
        this.f3818d = null;
        this.f3819e = 0;
        this.f3820f = 0;
        this.g = 0;
        setDialogLayoutResource(2131296307);
        setDialogIcon((Drawable) null);
        this.f3815a = context.getString(2131492988);
        setWidgetLayoutResource(2131296308);
    }

    public int a() {
        return getPersistedInt(this.f3819e);
    }

    protected View a(View view, Class<?> cls) {
        if (!(view instanceof ViewGroup)) {
            return null;
        }
        ViewGroup viewGroup = (ViewGroup) view;
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (cls == childAt.getClass()) {
                return childAt;
            }
            View viewA = a(childAt, cls);
            if (viewA != null) {
                return viewA;
            }
        }
        return null;
    }

    public CharSequence a(int i) {
        if (a() == 0) {
            return this.f3815a;
        }
        return String.valueOf(i) + getContext().getString(2131492989);
    }

    public void b(int i) {
        persistInt(i);
    }

    int[] b() {
        return new int[]{3, 1, 60};
    }

    protected void c() {
        setSummary(a(a()));
    }

    @Override // android.preference.Preference
    protected void onAttachedToHierarchy(PreferenceManager preferenceManager) {
        super.onAttachedToHierarchy(preferenceManager);
        c();
    }

    @Override // android.preference.DialogPreference
    protected void onBindDialogView(View view) {
        super.onBindDialogView(view);
        this.f3818d = (NumberPicker) a(view, NumberPicker.class);
        int[] iArrB = b();
        if (iArrB != null) {
            if (iArrB.length > 0) {
                this.f3819e = iArrB[0];
            }
            if (iArrB.length > 1) {
                this.f3820f = iArrB[1];
            }
            if (iArrB.length > 2) {
                this.g = iArrB[2];
            }
        }
        this.f3818d.c(this.f3820f, this.g);
        this.f3818d.d();
        this.f3818d.setSpeed(150L);
        this.f3818d.setCurrent(a());
        this.f3817c = (CheckBox) a(view, CheckBox.class);
        int persistedInt = getPersistedInt(this.f3819e);
        this.f3817c.setChecked(persistedInt != 0);
        this.f3817c.setOnCheckedChangeListener(new d(this));
        if (persistedInt == 0) {
            this.f3818d.setCurrent(this.f3819e);
            this.f3818d.setEnabled(false);
        }
    }

    @Override // android.preference.Preference
    protected void onBindView(View view) {
        CheckBox checkBox;
        boolean z;
        super.onBindView(view);
        this.f3816b = (CheckBox) view.findViewById(2131165300);
        if (a() == 0) {
            checkBox = this.f3816b;
            z = false;
        } else {
            checkBox = this.f3816b;
            z = true;
        }
        checkBox.setChecked(z);
    }

    @Override // android.preference.DialogPreference
    protected void onDialogClosed(boolean z) {
        super.onDialogClosed(z);
        if (z) {
            this.f3818d.clearFocus();
            b(this.f3818d.getCurrent());
            persistInt(!this.f3817c.isChecked() ? 0 : this.f3818d.getCurrent());
        }
        c();
    }
}
