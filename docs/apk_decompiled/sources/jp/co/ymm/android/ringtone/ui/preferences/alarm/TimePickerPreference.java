package jp.co.ymm.android.ringtone.ui.preferences.alarm;

import android.app.AlertDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Build;
import android.preference.DialogPreference;
import android.text.format.DateFormat;
import android.util.AttributeSet;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TimePicker;
import java.util.Calendar;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class TimePickerPreference extends DialogPreference {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private TimePicker f3821a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Calendar f3822b;

    public TimePickerPreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f3822b = Calendar.getInstance();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public String b(int i, int i2) {
        Calendar calendar = Calendar.getInstance();
        calendar.set(11, i);
        calendar.set(12, i2);
        return DateFormat.getTimeFormat(getContext()).format(Long.valueOf(calendar.getTimeInMillis()));
    }

    public int a(int i) {
        return this.f3822b.get(i);
    }

    public void a(int i, int i2) {
        if (this.f3822b.get(11) == i && this.f3822b.get(12) == i2) {
            return;
        }
        this.f3822b.set(11, i);
        this.f3822b.set(12, i2);
    }

    @Override // android.preference.DialogPreference
    public void onBindDialogView(View view) {
        super.onBindDialogView(view);
        this.f3821a = (TimePicker) view.findViewById(2131165199);
        this.f3821a.setIs24HourView(Boolean.valueOf(DateFormat.is24HourFormat(getContext())));
        if (Build.VERSION.SDK_INT < 23) {
            this.f3821a.setCurrentHour(Integer.valueOf(a(11)));
            this.f3821a.setCurrentMinute(Integer.valueOf(a(12)));
        } else {
            this.f3821a.setHour(a(11));
            this.f3821a.setMinute(a(12));
        }
        this.f3821a.setOnTimeChangedListener(new e(this));
    }

    @Override // android.preference.DialogPreference, android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        int hour;
        int minute;
        this.f3821a.clearFocus();
        if (i == -1) {
            if (Build.VERSION.SDK_INT < 23) {
                a(this.f3821a.getCurrentHour().intValue(), this.f3821a.getCurrentMinute().intValue());
                hour = this.f3821a.getCurrentHour().intValue();
                minute = this.f3821a.getCurrentMinute().intValue();
            } else {
                a(this.f3821a.getHour(), this.f3821a.getMinute());
                hour = this.f3821a.getHour();
                minute = this.f3821a.getMinute();
            }
            setSummary(b(hour, minute));
        }
    }

    @Override // android.preference.Preference
    protected View onCreateView(ViewGroup viewGroup) {
        setSummary(b(a(11), a(12)));
        return super.onCreateView(viewGroup);
    }

    @Override // android.preference.DialogPreference
    protected void onPrepareDialogBuilder(AlertDialog.Builder builder) {
        builder.setTitle(b(a(11), a(12)));
        super.onPrepareDialogBuilder(builder);
    }
}
