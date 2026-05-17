package jp.co.ymm.android.ringtone.c.a.a;

import android.R;
import android.app.AlertDialog;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.SimpleAdapter;
import android.widget.TextView;
import java.util.Map;
import jp.co.ymm.android.ringtone.ui.activity.BaseActivity;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class c extends jp.co.ymm.android.ringtone.c.a.g.a implements AdapterView.OnItemClickListener, AdapterView.OnItemLongClickListener {
    private View o;
    protected String p = null;

    private void a(Context context, Map<String, Object> map) {
        BaseActivity baseActivity = this.l;
        if (baseActivity == null) {
            return;
        }
        if (baseActivity == null) {
            baseActivity = null;
        }
        a(21, 2131296267);
        AlertDialog alertDialogE = baseActivity.e();
        TextView textView = (TextView) alertDialogE.findViewById(2131165323);
        TextView textView2 = (TextView) alertDialogE.findViewById(2131165326);
        TextView textView3 = (TextView) alertDialogE.findViewById(2131165324);
        TextView textView4 = (TextView) alertDialogE.findViewById(2131165325);
        String str = (String) map.get(jp.co.ymm.android.ringtone.a.a.a.f3466c);
        g.a("Contact ID: " + str);
        Map<String, Object> mapA = jp.co.ymm.android.ringtone.a.a.a.a(context, str);
        String str2 = (String) map.get(jp.co.ymm.android.ringtone.a.a.a.f3467d);
        textView.setText(str2);
        if (str2.equals("")) {
            textView.setVisibility(8);
        }
        String str3 = (String) mapA.get(jp.co.ymm.android.ringtone.a.a.a.f3468e);
        textView2.setText(str3);
        if (str3.equals("")) {
            textView2.setVisibility(8);
        }
        String str4 = (String) mapA.get(jp.co.ymm.android.ringtone.a.a.a.g);
        textView3.setText(str4);
        if (str4.equals("")) {
            textView3.setVisibility(8);
        }
        if (((String) mapA.get(jp.co.ymm.android.ringtone.a.a.a.h)).equals("0")) {
            textView4.setVisibility(8);
        }
    }

    public static c c() {
        return new c();
    }

    @Override // android.app.Fragment
    public void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        if (i2 != -1) {
            return;
        }
        intent.putExtra("ContactId", this.p);
        getTargetFragment().onActivityResult(i, i2, intent);
        a();
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        super.onCreateView(layoutInflater, viewGroup, bundle);
        if (bundle != null) {
            this.p = bundle.getString("selectedContactId");
        }
        getActivity().setTitle(2131492962);
        this.o = layoutInflater.inflate(2131296268, viewGroup, false);
        this.f3586f = (ListView) this.o.findViewById(2131165256);
        this.f3586f.setOnItemClickListener(this);
        this.f3586f.setOnItemLongClickListener(this);
        this.g = (TextView) this.o.findViewById(2131165239);
        this.h = (TextView) this.o.findViewById(2131165232);
        return this.o;
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onDestroy() {
        super.onDestroy();
        g.d("onDestroy!!");
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Map map = (Map) this.f3586f.getItemAtPosition(i);
        this.p = (String) map.get(jp.co.ymm.android.ringtone.a.a.a.f3466c);
        a((String) map.get(jp.co.ymm.android.ringtone.a.a.a.f3467d), jp.co.ymm.android.ringtone.a.a.c.b(this.p), 2131492977);
    }

    @Override // android.widget.AdapterView.OnItemLongClickListener
    public boolean onItemLongClick(AdapterView<?> adapterView, View view, int i, long j) {
        a(getActivity(), (Map<String, Object>) this.f3586f.getItemAtPosition(i));
        return true;
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onResume() {
        super.onResume();
        jp.co.ymm.android.ringtone.util.c.a(getActivity(), this.f3582b);
    }

    @Override // android.app.Fragment
    public void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putString("selectedContactId", this.p);
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onStart() {
        super.onStart();
        this.f3583c = jp.co.ymm.android.ringtone.a.a.a.b(getActivity());
        this.f3584d = new SimpleAdapter(getActivity(), this.f3583c, 2131296271, new String[]{jp.co.ymm.android.ringtone.a.a.a.f3467d}, new int[]{R.id.text1});
        this.f3586f.setAdapter((ListAdapter) this.f3584d);
        b();
    }
}
