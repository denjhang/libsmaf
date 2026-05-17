package jp.co.ymm.android.ringtone.c.a.d;

import android.animation.Animator;
import android.animation.ObjectAnimator;
import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.content.res.Configuration;
import android.media.AudioManager;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.ListAdapter;
import android.widget.ListView;
import java.util.ArrayList;
import java.util.Iterator;
import jp.co.ymm.android.ringtone.MyApplication;
import jp.co.ymm.android.ringtone.b.c;
import jp.co.ymm.android.ringtone.player.l;
import jp.co.ymm.android.ringtone.util.f;
import jp.co.ymm.android.ringtone.util.n;
import jp.co.ymm.android.ringtone.util.o;
import jp.co.ymm.android.ringtone.util.z;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class k extends jp.co.ymm.android.ringtone.c.a.g.a implements jp.co.ymm.android.ringtone.b.e, f.a {
    private String J;
    private View o;
    private String p;
    private String q;
    private String r;
    private View.OnClickListener t;
    private Context v;
    private jp.co.ymm.android.ringtone.b.c x;
    private Button s = null;
    private int u = 0;
    private int w = 0;
    private boolean y = false;
    private boolean z = false;
    protected final int A = 3;
    protected ListView B = null;
    protected String C = null;
    protected Button D = null;
    protected Button E = null;
    protected Button F = null;
    protected Button G = null;
    protected String H = null;
    protected String I = null;

    private int a(String str, jp.co.ymm.android.ringtone.b.d dVar) {
        return ((ArrayAdapter) this.B.getAdapter()).getPosition(dVar.a(str));
    }

    public static k a(Intent intent, Context context) {
        String stringExtra = intent.getStringExtra("preference-id");
        if (stringExtra == null) {
            stringExtra = intent.getStringExtra("call-activity");
        }
        String str = stringExtra;
        return a(intent.getStringExtra("title") != null ? intent.getStringExtra("title") : context.getString(com.yamaha.smafsynth.sample.d.app_name), "", Boolean.valueOf(intent.getBooleanExtra("hidden_clear", false)), str, intent.getParcelableExtra("android.intent.extra.ringtone.EXISTING_URI") != null ? intent.getParcelableExtra("android.intent.extra.ringtone.EXISTING_URI").toString() : intent.getStringExtra("tone-id"), true);
    }

    public static k a(String str, String str2, Boolean bool, String str3, String str4, boolean z) {
        k kVar = new k();
        Bundle bundle = new Bundle();
        bundle.putString("call-activity", str3);
        bundle.putString("title", str);
        bundle.putString("tone-id", str4);
        bundle.putBoolean("hidden_clear", bool.booleanValue());
        bundle.putBoolean("key_external", z);
        kVar.setArguments(bundle);
        return kVar;
    }

    public static k a(String str, String str2, String str3) {
        k kVar = new k();
        Bundle bundle = new Bundle();
        bundle.putString("call-activity", str);
        bundle.putString("title", str2);
        bundle.putString("tone-id", str3);
        kVar.setArguments(bundle);
        return kVar;
    }

    private ArrayAdapter<jp.co.ymm.android.ringtone.b.c> b(jp.co.ymm.android.ringtone.b.d dVar) {
        int i;
        ArrayList arrayList = new ArrayList();
        for (jp.co.ymm.android.ringtone.b.c cVar : dVar) {
            if (!cVar.e() && ((i = this.u) < 0 || i == cVar.a())) {
                arrayList.add(cVar);
            }
        }
        return new c(this, getActivity().getBaseContext(), arrayList);
    }

    private void b(int i) {
        String str;
        jp.co.ymm.android.ringtone.b.c cVar = (jp.co.ymm.android.ringtone.b.c) this.B.getAdapter().getItem(i);
        c.a attributes = cVar.getAttributes();
        if (cVar.d()) {
            return;
        }
        if (attributes.f3514b == null) {
            str = attributes.f3513a;
        } else {
            str = attributes.f3513a + "/" + attributes.f3514b;
        }
        this.x = cVar;
        a(13, str);
    }

    private int c(String str) {
        return a(str, jp.co.ymm.android.ringtone.b.d.a());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        getActivity().setTitle(getString(com.yamaha.smafsynth.sample.d.app_name));
        a();
    }

    private void c(int i) {
        jp.co.ymm.android.ringtone.b.c cVar = (jp.co.ymm.android.ringtone.b.c) this.B.getAdapter().getItem(i);
        jp.co.ymm.android.ringtone.util.g.a("details tone: " + cVar.c());
        a(14, new j(this, cVar));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d() {
        this.E.setBackgroundResource(this.u == 0 ? 2131099652 : 2131099651);
        this.F.setBackgroundResource(this.u == 1 ? 2131099652 : 2131099651);
        this.G.setBackgroundResource(this.u != 2 ? 2131099651 : 2131099652);
        if (TextUtils.isEmpty(this.H)) {
            jp.co.ymm.android.ringtone.util.g.f("initial select: none");
            this.D.setEnabled(false);
            return;
        }
        jp.co.ymm.android.ringtone.util.g.f("initial select: " + this.H);
        this.B.setItemChecked(c(this.H), true);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d(int i) {
        jp.co.ymm.android.ringtone.b.c cVar = (jp.co.ymm.android.ringtone.b.c) this.B.getAdapter().getItem(i);
        jp.co.ymm.android.ringtone.util.g.a("preview tone: " + cVar.c());
        this.H = cVar.c();
        AudioManager audioManager = (AudioManager) this.v.getSystemService("audio");
        if (z.b(audioManager)) {
            jp.co.ymm.android.ringtone.util.g.a("manner mode");
            audioManager.setStreamVolume(3, 0, 0);
        }
        z.a(getActivity(), cVar.c(), l.Preview, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e() {
        Intent intent = new Intent();
        intent.putExtra("preference-id", this.p);
        if (!TextUtils.isEmpty(this.H)) {
            jp.co.ymm.android.ringtone.util.g.a(this.H != null);
            jp.co.ymm.android.ringtone.util.g.a("choose tone: " + this.H);
            b(i());
            intent.putExtra("tone-id", this.H);
            if (this.z) {
                jp.co.ymm.android.ringtone.util.g.a("called from RingtoneSelectListExternalActivity!!");
                Bundle bundle = new Bundle();
                bundle.putParcelable("android.intent.extra.ringtone.PICKED_URI", Uri.parse(this.H));
                intent.putExtras(bundle);
                intent.putExtra("packageName", getActivity().getPackageName());
                intent.putExtra("className", getActivity().getPackageName() + ".receiver.RingtoneReceiver");
                intent.putExtra("soundTitle", this.I);
                if (!TextUtils.isEmpty(this.H)) {
                    jp.co.ymm.android.ringtone.util.g.a(this.H != null);
                    jp.co.ymm.android.ringtone.util.g.a("choose tone: " + this.H);
                }
                getActivity().setResult(-1, intent);
                getActivity().finish();
                return;
            }
        }
        a();
        getTargetFragment().onActivityResult(getTargetRequestCode(), -1, intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e(int i) {
        this.w = i;
        jp.co.ymm.android.ringtone.b.c cVar = (jp.co.ymm.android.ringtone.b.c) this.B.getAdapter().getItem(i);
        c.a attributes = cVar.getAttributes();
        String[] stringArray = getResources().getStringArray(2130837511);
        if (cVar.d()) {
            stringArray = getResources().getStringArray(2130837512);
        }
        a(12, attributes, stringArray);
    }

    private void f() {
        jp.co.ymm.android.ringtone.util.g.a("CLEAR!");
        getActivity().setTitle(getString(com.yamaha.smafsynth.sample.d.app_name));
        a();
        Intent intent = new Intent();
        intent.putExtra("preference-id", this.p);
        intent.putExtra("tone-id", "");
        getTargetFragment().onActivityResult(getTargetRequestCode(), -1, intent);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void g() {
        a(11);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public ArrayAdapter<jp.co.ymm.android.ringtone.b.c> h() {
        return b(jp.co.ymm.android.ringtone.b.d.a());
    }

    private String i() {
        return TextUtils.isEmpty(this.H) ? "" : jp.co.ymm.android.ringtone.ui.activity.a.a.a(jp.co.ymm.android.ringtone.b.d.a().a(this.H));
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Removed duplicated region for block: B:13:0x001d  */
    /* JADX WARN: Removed duplicated region for block: B:17:0x0057  */
    /* JADX WARN: Removed duplicated region for block: B:5:0x0006  */
    @Override // jp.co.ymm.android.ringtone.c.a.g.a, jp.co.ymm.android.ringtone.util.f.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void a(android.content.DialogInterface r3, int r4, int r5) {
        /*
            r2 = this;
            r0 = -2
            r1 = -1
            switch(r4) {
                case 11: goto L5a;
                case 12: goto La;
                case 13: goto L1b;
                case 14: goto L6;
                default: goto L5;
            }
        L5:
            goto L63
        L6:
            r3.cancel()
            goto L63
        La:
            if (r5 == 0) goto L16
            r4 = 1
            if (r5 == r4) goto L10
            goto L1b
        L10:
            int r4 = r2.w
            r2.b(r4)
            goto L1b
        L16:
            int r4 = r2.w
            r2.c(r4)
        L1b:
            if (r5 != r1) goto L57
            jp.co.ymm.android.ringtone.b.d r3 = jp.co.ymm.android.ringtone.b.d.a()
            jp.co.ymm.android.ringtone.b.c r4 = r2.x
            java.lang.String r4 = r4.c()
            boolean r3 = r3.c(r4)
            r4 = 0
            if (r3 == 0) goto L44
            android.app.Activity r3 = r2.getActivity()
            r0 = 2131493170(0x7f0c0132, float:1.8609813E38)
            java.lang.String r0 = r2.getString(r0)
            android.widget.Toast r3 = android.widget.Toast.makeText(r3, r0, r4)
            r3.show()
            r2.d()
            goto L63
        L44:
            android.app.Activity r3 = r2.getActivity()
            r0 = 2131493169(0x7f0c0131, float:1.860981E38)
            java.lang.String r0 = r2.getString(r0)
            android.widget.Toast r3 = android.widget.Toast.makeText(r3, r0, r4)
            r3.show()
            goto L63
        L57:
            if (r5 != r0) goto L63
            goto L6
        L5a:
            if (r5 != r1) goto L60
            r2.f()
            goto L63
        L60:
            if (r5 != r0) goto L63
            goto L6
        L63:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "select action: "
            r3.append(r4)
            java.lang.String r4 = java.lang.String.valueOf(r5)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            jp.co.ymm.android.ringtone.util.g.a(r3)
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: jp.co.ymm.android.ringtone.c.a.d.k.a(android.content.DialogInterface, int, int):void");
    }

    @Override // jp.co.ymm.android.ringtone.b.e
    public void a(jp.co.ymm.android.ringtone.b.d dVar) {
        jp.co.ymm.android.ringtone.util.g.a("*");
        this.B.setAdapter((ListAdapter) b(dVar));
        if (!TextUtils.isEmpty(this.H)) {
            this.B.setItemChecked(a(this.H, dVar), true);
        }
        this.s.setEnabled(this.B.getCheckedItemPosition() != -1);
    }

    @Override // android.app.Fragment, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        jp.co.ymm.android.ringtone.util.g.f("onConfigurationChanged");
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public Animator onCreateAnimator(int i, boolean z, int i2) {
        if (i == 4097) {
            if (z) {
                return ObjectAnimator.ofFloat(getView(), "x", this.m, 0.0f);
            }
        } else if (i == 8194 && !z) {
            return ObjectAnimator.ofFloat(getView(), "x", 0.0f, this.m);
        }
        return super.onCreateAnimator(i, z, i2);
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public View onCreateView(LayoutInflater layoutInflater, ViewGroup viewGroup, Bundle bundle) {
        Activity activity;
        String string;
        super.onCreateView(layoutInflater, viewGroup, bundle);
        Bundle arguments = getArguments();
        if (arguments != null) {
            this.p = arguments.getString("call-activity");
            this.q = arguments.getString("title");
            this.r = arguments.getString("tone-id");
            this.y = arguments.getBoolean("hidden_clear");
            this.z = arguments.getBoolean("key_external");
        }
        if (bundle != null) {
            this.p = bundle.getString("call-activity");
            this.q = bundle.getString("title");
            this.r = bundle.getString("tone-id");
            this.y = bundle.getBoolean("hidden_clear");
            this.z = bundle.getBoolean("key_external");
        }
        jp.co.ymm.android.ringtone.util.g.f("onCreate");
        this.v = getActivity();
        this.o = layoutInflater.inflate(2131296303, viewGroup, false);
        getActivity().setVolumeControlStream(3);
        if (this.q != null) {
            activity = getActivity();
            string = this.q;
        } else {
            activity = getActivity();
            string = getString(com.yamaha.smafsynth.sample.d.app_name);
        }
        activity.setTitle(string);
        this.J = this.p;
        this.s = (Button) this.o.findViewById(2131165290);
        this.s.setOnClickListener(new a(this));
        this.D = (Button) this.o.findViewById(2131165289);
        this.D.setOnClickListener(new d(this));
        if (this.z) {
            this.D.setVisibility(8);
        }
        ((Button) this.o.findViewById(2131165288)).setOnClickListener(new e(this));
        this.E = (Button) this.o.findViewById(2131165291);
        this.F = (Button) this.o.findViewById(2131165285);
        this.G = (Button) this.o.findViewById(2131165287);
        this.t = new f(this);
        this.E.setOnClickListener(this.t);
        this.F.setOnClickListener(this.t);
        this.G.setOnClickListener(this.t);
        if (!MyApplication.b(getActivity())) {
            return this.o;
        }
        this.H = this.r;
        if (!TextUtils.isEmpty(this.H)) {
            Iterator<jp.co.ymm.android.ringtone.b.c> it = jp.co.ymm.android.ringtone.b.d.a().iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                jp.co.ymm.android.ringtone.b.c next = it.next();
                if (next.c().equals(this.H)) {
                    this.u = next.a();
                    break;
                }
            }
        }
        this.B = (ListView) this.o.findViewById(2131165286);
        this.B.setAdapter((ListAdapter) h());
        this.B.setChoiceMode(1);
        this.B.setOnItemClickListener(new g(this));
        this.B.setOnItemLongClickListener(new h(this));
        d();
        if (this.y) {
            this.D.setVisibility(8);
        }
        this.s.setEnabled(this.B.getCheckedItemPosition() != -1);
        jp.co.ymm.android.ringtone.b.d.a(this);
        n.a().a(this, new i(this), "android.permission.WRITE_EXTERNAL_STORAGE");
        return this.o;
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onDestroy() {
        super.onDestroy();
        jp.co.ymm.android.ringtone.util.g.f("onDestroy");
        jp.co.ymm.android.ringtone.b.d.b(this);
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onPause() {
        super.onPause();
        jp.co.ymm.android.ringtone.util.g.f("onPause");
        z.a(this.v, l.Preview);
    }

    @Override // jp.co.ymm.android.ringtone.c.a.g.a, android.app.Fragment
    public void onResume() {
        String str;
        jp.co.ymm.android.ringtone.util.g.a("mRingtoneType[" + this.J + "]");
        this.j = null;
        this.k = null;
        String str2 = this.J;
        if (str2 != null) {
            if (str2.equals(o.Tone_Phone.name())) {
                this.i = "/Phone/RingtoneSetting";
                jp.co.ymm.android.ringtone.util.g.a("pageView[" + this.i + "]");
                str = "Ringtone_Phone_set";
            } else if (this.J.equals(o.Tone_SMS.name())) {
                this.i = "/Mail/SMS";
                str = "Ringtone_SMS_set";
            } else if (this.J.equals(o.Tone_Carrier.name())) {
                this.i = "/Mail/Carrier";
                str = "Ringtone_Carrier_set";
            } else if (this.J.equals(o.Tone_Gmail.name())) {
                this.i = "/Mail/Gmail";
                str = "Ringtone_Gmail_set";
            } else if (!this.J.equals("Tone_Alarm")) {
                if (this.J.equals(jp.co.ymm.android.ringtone.c.a.c.a.class.getSimpleName()) || this.J.equals(jp.co.ymm.android.ringtone.c.a.c.c.class.getSimpleName())) {
                    this.i = "/PhoneGroup/GroupSetting";
                    str = "Ringtone_Phone_group_set";
                } else if (this.J.equals(jp.co.ymm.android.ringtone.c.a.a.b.class.getSimpleName()) || this.J.equals(jp.co.ymm.android.ringtone.c.a.a.c.class.getSimpleName())) {
                    str = "Ringtone_Phone_indivisual_set";
                }
            }
            this.j = str;
            this.k = "Ringtone_music_info";
        }
        super.onResume();
        jp.co.ymm.android.ringtone.util.g.f("onResume");
    }

    @Override // android.app.Fragment
    public void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        bundle.putString("call-activity", this.p);
        bundle.putString("title", this.q);
        bundle.putString("tone-id", this.r);
        bundle.putBoolean("hidden_clear", this.y);
        bundle.putBoolean("key_external", this.z);
    }
}
