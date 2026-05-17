package jp.co.ymm.android.ringtone.ui.preferences.alarm;

import android.R;
import android.content.Context;
import android.content.DialogInterface;
import android.preference.DialogPreference;
import android.util.AttributeSet;
import android.view.View;
import android.widget.BaseAdapter;
import android.widget.CheckBox;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.TextView;
import java.util.ArrayList;
import java.util.EnumSet;
import java.util.Iterator;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class AlarmRepeatPreference extends DialogPreference {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ListView f3811a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private CheckBox f3812b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private TextView f3813c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private EnumSet<jp.co.ymm.android.ringtone.alarm.b> f3814d;

    public AlarmRepeatPreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet, R.attr.dialogPreferenceStyle);
        this.f3814d = EnumSet.noneOf(jp.co.ymm.android.ringtone.alarm.b.class);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(boolean z) {
        this.f3813c.setEnabled(z);
        this.f3811a.setEnabled(!z);
        ((BaseAdapter) this.f3811a.getAdapter()).notifyDataSetChanged();
    }

    private ListAdapter b() {
        ArrayList arrayList = new ArrayList();
        Iterator it = EnumSet.allOf(jp.co.ymm.android.ringtone.alarm.b.class).iterator();
        while (it.hasNext()) {
            arrayList.add(getContext().getString(((jp.co.ymm.android.ringtone.alarm.b) it.next()).j) + getContext().getString(2131493187));
        }
        return new b(this, getContext(), 2131296314, arrayList);
    }

    private EnumSet<jp.co.ymm.android.ringtone.alarm.b> c() {
        EnumSet<jp.co.ymm.android.ringtone.alarm.b> enumSetNoneOf = EnumSet.noneOf(jp.co.ymm.android.ringtone.alarm.b.class);
        if (this.f3812b.isChecked()) {
            return enumSetNoneOf;
        }
        for (jp.co.ymm.android.ringtone.alarm.b bVar : EnumSet.allOf(jp.co.ymm.android.ringtone.alarm.b.class)) {
            if (this.f3811a.isItemChecked(bVar.i)) {
                enumSetNoneOf.add(bVar);
            }
        }
        return enumSetNoneOf;
    }

    private void d() {
        if (this.f3814d.isEmpty()) {
            this.f3812b.setChecked(true);
            return;
        }
        Iterator it = this.f3814d.iterator();
        while (it.hasNext()) {
            this.f3811a.setItemChecked(((jp.co.ymm.android.ringtone.alarm.b) it.next()).i, true);
        }
    }

    public EnumSet<jp.co.ymm.android.ringtone.alarm.b> a() {
        return this.f3814d.clone();
    }

    public void a(EnumSet<jp.co.ymm.android.ringtone.alarm.b> enumSet) {
        g.a(enumSet != null);
        this.f3814d = enumSet;
        setSummary(jp.co.ymm.android.ringtone.alarm.b.a(getContext(), this.f3814d));
    }

    @Override // android.preference.DialogPreference
    public void onBindDialogView(View view) {
        super.onBindDialogView(view);
        this.f3811a = (ListView) view.findViewById(2131165332);
        this.f3811a.setAdapter(b());
        this.f3813c = (TextView) view.findViewById(2131165278);
        this.f3813c.setOnClickListener(new a(this));
        this.f3812b = (CheckBox) view.findViewById(2131165277);
        this.f3812b.setOnCheckedChangeListener(new c(this));
        d();
        a(this.f3812b.isChecked());
    }

    @Override // android.preference.DialogPreference, android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        if (i == -1) {
            a(c());
        }
    }
}
