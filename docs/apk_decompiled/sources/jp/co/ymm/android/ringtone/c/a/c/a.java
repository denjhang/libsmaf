package jp.co.ymm.android.ringtone.c.a.c;

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
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a extends jp.co.ymm.android.ringtone.c.a.g.a implements AdapterView.OnItemClickListener, AdapterView.OnItemLongClickListener {
    protected String o = null;

    /* JADX INFO: renamed from: jp.co.ymm.android.ringtone.c.a.c.a$a, reason: collision with other inner class name */
    class C0034a extends SimpleAdapter {
        public C0034a(Context context, List<? extends Map<String, ?>> list, int i, String[] strArr, int[] iArr) {
            super(context, list, i, strArr, iArr);
        }

        @Override // android.widget.BaseAdapter, android.widget.ListAdapter
        public boolean isEnabled(int i) {
            return false;
        }
    }

    private void a(Context context, Map<String, Object> map) {
        if (this.l == null) {
            return;
        }
        a(19, 2131296265);
        AlertDialog alertDialogE = this.l.e();
        String str = (String) map.get(jp.co.ymm.android.ringtone.a.a.a.f3466c);
        g.a("Contact ID: " + str);
        new ArrayList();
        ArrayList<Map<String, Object>> arrayListC = jp.co.ymm.android.ringtone.a.a.a.c(context, str);
        C0034a c0034a = new C0034a(context, arrayListC, R.layout.simple_list_item_1, new String[]{jp.co.ymm.android.ringtone.a.a.a.f3467d}, new int[]{R.id.text1});
        ListView listView = (ListView) alertDialogE.findViewById(R.id.list);
        listView.setAdapter((ListAdapter) c0034a);
        TextView textView = (TextView) alertDialogE.findViewById(R.id.empty);
        if (arrayListC.size() == 0) {
            listView.setVisibility(8);
            textView.setVisibility(0);
        } else {
            listView.setVisibility(0);
            textView.setVisibility(8);
        }
    }

    public static a c() {
        return new a();
    }

    @Override // android.app.Fragment
    public void onActivityResult(int i, int i2, Intent intent) {
        super.onActivityResult(i, i2, intent);
        if (i2 != -1) {
            return;
        }
        intent.putExtra("ContactId", this.o);
        getTargetFragment().onActivityResult(i, i2, intent);
        a();
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        super.onCreateView(layoutInflater, viewGroup, bundle);
        this.f3585e = layoutInflater.inflate(2131296266, viewGroup, false);
        this.f3586f = (ListView) this.f3585e.findViewById(2131165256);
        this.g = (TextView) this.f3585e.findViewById(2131165239);
        this.h = (TextView) this.f3585e.findViewById(2131165232);
        this.f3586f.setOnItemClickListener(this);
        this.f3586f.setOnItemLongClickListener(this);
        return this.f3585e;
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onDestroy() {
        super.onDestroy();
        g.d("onDestroy!!");
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Map map = (Map) this.f3586f.getItemAtPosition(i);
        this.o = (String) map.get(jp.co.ymm.android.ringtone.a.a.a.f3466c);
        a((String) map.get(jp.co.ymm.android.ringtone.a.a.a.f3467d), jp.co.ymm.android.ringtone.a.a.b.b(this.o), 2131492972);
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

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onStart() {
        super.onStart();
        this.f3583c = jp.co.ymm.android.ringtone.a.a.a.a(getActivity());
        this.f3584d = new SimpleAdapter(getActivity(), this.f3583c, 2131296272, new String[]{jp.co.ymm.android.ringtone.a.a.a.f3467d, jp.co.ymm.android.ringtone.a.a.a.i}, new int[]{R.id.text1, R.id.text2});
        this.f3586f.setAdapter((ListAdapter) this.f3584d);
        b();
    }
}
