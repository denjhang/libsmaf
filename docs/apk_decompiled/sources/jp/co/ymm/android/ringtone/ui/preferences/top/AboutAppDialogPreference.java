package jp.co.ymm.android.ringtone.ui.preferences.top;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.graphics.drawable.Drawable;
import android.preference.DialogPreference;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.TextView;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.a;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class AboutAppDialogPreference extends DialogPreference implements a.InterfaceC0036a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Activity f3834a;

    static class a extends ArrayAdapter<String> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private LayoutInflater f3835a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private TextView f3836b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private Context f3837c;

        public a(Context context) {
            super(context, 2131296257, context.getResources().getStringArray(2130837504));
            this.f3837c = context;
            this.f3835a = (LayoutInflater) context.getSystemService("layout_inflater");
        }

        @Override // android.widget.ArrayAdapter, android.widget.Adapter
        public View getView(int i, View view, ViewGroup viewGroup) {
            String item = getItem(i);
            if (view == null) {
                view = this.f3835a.inflate(2131296257, (ViewGroup) null);
            }
            this.f3836b = (TextView) view.findViewById(2131165330);
            this.f3836b.setText(item);
            if (i == 0) {
                this.f3836b.setTextColor(-7829368);
                this.f3836b.setTextSize(24.0f);
                this.f3836b.setGravity(17);
            } else if (i == 1) {
                String strB = z.b(this.f3837c);
                if (strB == null) {
                    strB = "";
                }
                this.f3836b.setText(this.f3837c.getString(2131492893) + strB);
            } else if (i == 4) {
                this.f3836b.setTextColor(-7829368);
                this.f3836b.setTextSize(10.0f);
            }
            return view;
        }

        @Override // android.widget.BaseAdapter, android.widget.ListAdapter
        public boolean isEnabled(int i) {
            return (i == 0 || i == 1 || i == 4) ? false : true;
        }
    }

    public AboutAppDialogPreference(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        setDialogLayoutResource(2131296256);
        setDialogIcon((Drawable) null);
        setDialogTitle((CharSequence) null);
        setNegativeButtonText((CharSequence) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(Context context, int i, int i2) {
        jp.co.ymm.android.ringtone.c.a.h.f fVarB = jp.co.ymm.android.ringtone.c.a.h.f.b(i, i2);
        Activity activity = this.f3834a;
        if (activity instanceof BaseActivity) {
            ((BaseActivity) activity).a(fVarB);
        }
        getDialog().dismiss();
    }

    @Override // jp.co.ymm.android.ringtone.util.a.InterfaceC0036a
    public void a(int i, Intent intent) {
    }

    @Override // jp.co.ymm.android.ringtone.util.a.InterfaceC0036a
    public void a(Activity activity) {
        this.f3834a = activity;
    }

    @Override // android.preference.DialogPreference
    protected void onBindDialogView(View view) {
        super.onBindDialogView(view);
        Context context = getContext();
        ListView listView = (ListView) view.findViewById(2131165202);
        listView.setAdapter((ListAdapter) new a(context));
        listView.setOnItemClickListener(new jp.co.ymm.android.ringtone.ui.preferences.top.a(this, context));
    }
}
