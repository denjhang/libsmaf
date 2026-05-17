package jp.co.ymm.android.ringtone.c.a.a;

import android.R;
import android.app.Activity;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.Button;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.SimpleAdapter;
import android.widget.TextView;
import android.widget.Toast;
import java.util.Map;
import jp.co.ymm.android.ringtone.b.d;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class b extends jp.co.ymm.android.ringtone.c.a.g.a implements f.a, AdapterView.OnItemClickListener, AdapterView.OnItemLongClickListener {
    private d p;
    private int q;
    private Button o = null;
    protected String r = null;

    private void b(int i) {
        this.q = i;
        a(20, (String) ((Map) this.f3586f.getItemAtPosition(i)).get(jp.co.ymm.android.ringtone.a.a.a.f3467d));
    }

    public static b c() {
        return new b();
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, jp.co.ymm.android.ringtone.util.f.a
    public void a(DialogInterface dialogInterface, int i, int i2) {
        Context applicationContext;
        int i3;
        if (i != 20) {
            if (i != 35) {
                return;
            }
            if (i2 == 0) {
                Map map = (Map) this.f3586f.getItemAtPosition(this.q);
                this.r = (String) map.get("cid");
                a((String) map.get(jp.co.ymm.android.ringtone.a.a.a.f3467d), (String) map.get("tid"), 2131492977);
                return;
            } else {
                if (i2 == 1) {
                    b(this.q);
                    return;
                }
                return;
            }
        }
        if (i2 != -1) {
            if (i2 == -2) {
                dialogInterface.cancel();
                return;
            }
            return;
        }
        if (jp.co.ymm.android.ringtone.a.a.c.a((String) ((Map) this.f3586f.getItemAtPosition(this.q)).get("cid"))) {
            this.f3583c.remove(this.q);
            this.f3584d.notifyDataSetChanged();
            applicationContext = getActivity().getApplicationContext();
            i3 = 2131492967;
        } else {
            applicationContext = getActivity().getApplicationContext();
            i3 = 2131492966;
        }
        Toast.makeText(applicationContext, getString(i3), 0).show();
        b();
    }

    public void d() {
        a(c.c(), 0, 4097);
    }

    @Override // android.app.Fragment
    public void onActivityResult(int i, int i2, Intent intent) {
        Activity activity;
        int i3;
        super.onActivityResult(i, i2, intent);
        this.n = true;
        if (i2 != -1) {
            return;
        }
        if (this.r == null) {
            this.r = intent.getStringExtra("ContactId");
        }
        if (i != 1) {
            if (i == 2) {
                if (jp.co.ymm.android.ringtone.a.a.c.b(intent.getStringExtra("tone-id"), this.r)) {
                    activity = getActivity();
                    i3 = 2131492982;
                } else {
                    activity = getActivity();
                    i3 = 2131492981;
                }
            }
            a("Ringtone", "click", "Phone_indivisual_set", "/PhoneIndividual/IndividualList");
        }
        if (jp.co.ymm.android.ringtone.a.a.c.a(intent.getStringExtra("tone-id"), this.r).booleanValue()) {
            activity = getActivity();
            i3 = 2131492980;
        } else {
            activity = getActivity();
            i3 = 2131492979;
        }
        Toast.makeText(activity, getString(i3), 0).show();
        a("Ringtone", "click", "Phone_indivisual_set", "/PhoneIndividual/IndividualList");
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        super.onCreateView(layoutInflater, viewGroup, bundle);
        if (bundle != null) {
            this.r = bundle.getString("selectedContactId");
        }
        this.f3585e = layoutInflater.inflate(2131296270, viewGroup, false);
        this.f3586f = (ListView) this.f3585e.findViewById(2131165256);
        this.f3586f.setOnItemClickListener(this);
        this.f3586f.setOnItemLongClickListener(this);
        this.g = (TextView) this.f3585e.findViewById(2131165239);
        this.h = (TextView) this.f3585e.findViewById(2131165232);
        this.o = (Button) this.f3585e.findViewById(2131165207);
        this.o.setOnClickListener(new a(this));
        getActivity().setTitle(2131492976);
        this.p = d.a();
        return this.f3585e;
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onDestroy() {
        super.onDestroy();
        g.d("onDestroy!!");
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public void onItemClick(AdapterView<?> adapterView, View view, int i, long j) {
        Map map = (Map) adapterView.getItemAtPosition(i);
        this.r = (String) map.get("cid");
        a((String) map.get(jp.co.ymm.android.ringtone.a.a.a.f3467d), (String) map.get("tid"), 2131492977);
        this.n = true;
    }

    @Override // android.widget.AdapterView.OnItemLongClickListener
    public boolean onItemLongClick(AdapterView<?> adapterView, View view, int i, long j) {
        this.q = i;
        Map map = (Map) adapterView.getItemAtPosition(i);
        a(35, (String) map.get(jp.co.ymm.android.ringtone.a.a.a.f3467d), getResources().getStringArray(2130837506));
        return true;
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onResume() {
        super.onResume();
        jp.co.ymm.android.ringtone.util.c.a(getActivity(), this.f3582b);
        this.f3583c = jp.co.ymm.android.ringtone.a.a.c.a(getActivity(), this.p);
        this.f3584d = new SimpleAdapter(getActivity(), this.f3583c, 2131296272, new String[]{jp.co.ymm.android.ringtone.a.a.a.f3467d, "toneName"}, new int[]{R.id.text1, R.id.text2});
        this.f3586f.setAdapter((ListAdapter) this.f3584d);
        b();
    }

    @Override // android.app.Fragment
    public void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putString("selectedContactId", this.r);
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onStart() {
        super.onStart();
    }
}
