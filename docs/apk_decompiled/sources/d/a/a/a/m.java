package d.a.a.a;

import android.app.Activity;
import android.app.AlertDialog;
import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.net.Uri;
import android.os.AsyncTask;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Hashtable;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.apache.http.HttpStatus;
import org.json.JSONObject;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class m {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private g f2780a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private int f2781b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private String f2782c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private String f2783d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private String f2784e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private String f2785f;
    private String g;
    private int h;
    private ProgressDialog i;
    private AlertDialog j;
    private AsyncTask<Void, Void, Boolean> l;
    private AsyncTask<Void, Void, Boolean> m;
    private c n;
    private String o;
    private Activity p;
    private Context q;
    private String r;
    private String s;
    private int t;
    private String u;
    private List<a> k = new ArrayList();
    private int v = 2;
    private long w = System.currentTimeMillis();
    private DialogInterface.OnKeyListener x = new d.a.a.a.d(this);
    private DialogInterface.OnCancelListener y = new d.a.a.a.e(this);
    private DialogInterface.OnDismissListener z = new d.a.a.a.f(this);
    private DialogInterface.OnKeyListener A = new d.a.a.a.g(this);
    private DialogInterface.OnCancelListener B = new h(this);

    private interface a {
        void a(int i, int i2, c cVar, Map<String, Object> map);
    }

    /* JADX INFO: Access modifiers changed from: private */
    class b implements a {
        private b() {
        }

        /* synthetic */ b(m mVar, d.a.a.a.d dVar) {
            this();
        }

        @Override // d.a.a.a.m.a
        public void a(int i, int i2, c cVar, Map<String, Object> map) {
            String str;
            String str2;
            if (i != 100) {
                if (i != 200) {
                    if (i != 300) {
                        return;
                    }
                    if (i2 == 0) {
                        m.this.f2780a.a(0);
                        m.this.p.moveTaskToBack(true);
                        return;
                    }
                } else if (i2 == 0 && (str2 = cVar.f2788b) != null && str2.equals("ok")) {
                    m.this.u = cVar.f2791e;
                    if (m.this.u == null || m.this.u.equals("")) {
                        m.this.a(HttpStatus.SC_OK, HttpStatus.SC_CREATED, (c) null, (Map<String, Object>) null);
                        return;
                    }
                    if (m.this.l != null) {
                        m.this.l.cancel(true);
                    }
                    StringBuffer stringBuffer = new StringBuffer();
                    stringBuffer.append(m.this.q.getString(d.a.a.a.mktlibrary_url_apk));
                    stringBuffer.append("?appkey=" + m.this.o);
                    stringBuffer.append("&pkg_id=" + m.this.s);
                    stringBuffer.append("&dlkey=" + m.this.u);
                    m.this.a(stringBuffer.toString());
                    return;
                }
            } else if (i2 == 0 && (str = cVar.f2788b) != null && str.equals("ok")) {
                if (m.this.t < cVar.f2789c) {
                    m.this.a(cVar.f2790d);
                    return;
                } else if (((Boolean) map.get("autoUpdate")).booleanValue()) {
                    m.this.f2780a.a(1);
                    return;
                } else {
                    m.this.p.runOnUiThread(new n(this));
                    return;
                }
            }
            m.this.b(HttpStatus.SC_ACCEPTED);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    class c {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f2787a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public String f2788b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        public int f2789c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        public int f2790d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        public String f2791e;

        private c() {
        }

        /* synthetic */ c(m mVar, d.a.a.a.d dVar) {
            this();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    class d implements DialogInterface.OnClickListener {
        private d() {
        }

        /* synthetic */ d(m mVar, d.a.a.a.d dVar) {
            this();
        }

        @Override // android.content.DialogInterface.OnClickListener
        public void onClick(DialogInterface dialogInterface, int i) {
            dialogInterface.dismiss();
            m.this.e();
            m.this.a(dialogInterface);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    class e implements DialogInterface.OnClickListener {
        private e() {
        }

        /* synthetic */ e(m mVar, d.a.a.a.d dVar) {
            this();
        }

        @Override // android.content.DialogInterface.OnClickListener
        public void onClick(DialogInterface dialogInterface, int i) {
            dialogInterface.dismiss();
            m.this.e();
            m.this.b(dialogInterface);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    class f implements DialogInterface.OnClickListener {
        private f() {
        }

        /* synthetic */ f(m mVar, d.a.a.a.d dVar) {
            this();
        }

        @Override // android.content.DialogInterface.OnClickListener
        public void onClick(DialogInterface dialogInterface, int i) {
            dialogInterface.dismiss();
            m.this.e();
            m.this.c(dialogInterface);
        }
    }

    public interface g {
        void a(int i);
    }

    public m(Activity activity, String str, String str2, int i) {
        this.p = activity;
        this.q = activity;
        this.r = str;
        this.s = str2;
        this.t = i;
        this.o = d.a.a.a.a.a(this.q);
        a(new b(this, null));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public c a(int i, Hashtable<String, Object> hashtable) throws Throwable {
        c cVar = new c(this, null);
        if (i != 1 && i != 2) {
            return cVar;
        }
        String strA = a(this.q.getString(d.a.a.a.mktlibrary_url_yom_api) + "/mkt/d/", hashtable);
        if (strA == null) {
            return null;
        }
        JSONObject jSONObject = new JSONObject(strA);
        cVar.f2787a = i;
        if (i == 1) {
            cVar.f2788b = jSONObject.optString("result");
            cVar.f2789c = jSONObject.optInt("v_code");
            cVar.f2790d = jSONObject.optInt("upd_kind");
        } else {
            if (i != 2) {
                return cVar;
            }
            cVar.f2788b = jSONObject.optString("result");
            cVar.f2791e = jSONObject.optString("dlkey");
        }
        return cVar;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0076 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Type inference failed for: r5v1, types: [java.lang.String] */
    /* JADX WARN: Type inference failed for: r5v2 */
    /* JADX WARN: Type inference failed for: r5v4, types: [java.io.InputStream] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.String a(java.lang.String r5, java.util.Hashtable<java.lang.String, java.lang.Object> r6) throws java.lang.Throwable {
        /*
            r4 = this;
            java.lang.String r5 = r4.b(r5, r6)
            org.apache.http.impl.client.DefaultHttpClient r6 = new org.apache.http.impl.client.DefaultHttpClient
            r6.<init>()
            org.apache.http.params.HttpParams r0 = r6.getParams()
            r1 = 30000(0x7530, float:4.2039E-41)
            org.apache.http.params.HttpConnectionParams.setConnectionTimeout(r0, r1)
            org.apache.http.params.HttpConnectionParams.setSoTimeout(r0, r1)
            r0 = 0
            org.apache.http.client.methods.HttpGet r1 = new org.apache.http.client.methods.HttpGet     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L63
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L63
            org.apache.http.HttpResponse r5 = r6.execute(r1)     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L63
            org.apache.http.StatusLine r6 = r5.getStatusLine()     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L63
            int r6 = r6.getStatusCode()     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L63
            r1 = 400(0x190, float:5.6E-43)
            if (r6 >= r1) goto L72
            org.apache.http.HttpEntity r5 = r5.getEntity()     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L63
            java.io.InputStream r5 = r5.getContent()     // Catch: java.lang.Throwable -> L60 java.io.IOException -> L63
            r6 = 1024(0x400, float:1.435E-42)
            byte[] r6 = new byte[r6]     // Catch: java.io.IOException -> L5e java.lang.Throwable -> L73
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream     // Catch: java.io.IOException -> L5e java.lang.Throwable -> L73
            r1.<init>()     // Catch: java.io.IOException -> L5e java.lang.Throwable -> L73
        L3c:
            int r2 = r5.read(r6)     // Catch: java.io.IOException -> L5e java.lang.Throwable -> L73
            r3 = -1
            if (r2 == r3) goto L48
            r3 = 0
            r1.write(r6, r3, r2)     // Catch: java.io.IOException -> L5e java.lang.Throwable -> L73
            goto L3c
        L48:
            java.lang.String r6 = new java.lang.String     // Catch: java.io.IOException -> L5e java.lang.Throwable -> L73
            byte[] r1 = r1.toByteArray()     // Catch: java.io.IOException -> L5e java.lang.Throwable -> L73
            java.lang.String r2 = "UTF-8"
            r6.<init>(r1, r2)     // Catch: java.io.IOException -> L5e java.lang.Throwable -> L73
            if (r5 == 0) goto L5d
            r5.close()     // Catch: java.io.IOException -> L59
            goto L5d
        L59:
            r5 = move-exception
            r5.printStackTrace()
        L5d:
            return r6
        L5e:
            r6 = move-exception
            goto L65
        L60:
            r6 = move-exception
            r5 = r0
            goto L74
        L63:
            r6 = move-exception
            r5 = r0
        L65:
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L73
            if (r5 == 0) goto L72
            r5.close()     // Catch: java.io.IOException -> L6e
            goto L72
        L6e:
            r5 = move-exception
            r5.printStackTrace()
        L72:
            return r0
        L73:
            r6 = move-exception
        L74:
            if (r5 == 0) goto L7e
            r5.close()     // Catch: java.io.IOException -> L7a
            goto L7e
        L7a:
            r5 = move-exception
            r5.printStackTrace()
        L7e:
            goto L80
        L7f:
            throw r6
        L80:
            goto L7f
        */
        throw new UnsupportedOperationException("Method not decompiled: d.a.a.a.m.a(java.lang.String, java.util.Hashtable):java.lang.String");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(int i) {
        Activity activity;
        Runnable jVar;
        this.v = i;
        if (this.v == 2) {
            activity = this.p;
            jVar = new i(this);
        } else {
            activity = this.p;
            jVar = new j(this);
        }
        activity.runOnUiThread(jVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(int i, int i2, c cVar, Map<String, Object> map) {
        Iterator<a> it = this.k.iterator();
        while (it.hasNext()) {
            it.next().a(i, i2, cVar, map);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(DialogInterface dialogInterface) {
        switch (this.f2781b) {
            case HttpStatus.SC_OK /* 200 */:
                f();
                break;
            case HttpStatus.SC_CREATED /* 201 */:
                this.f2780a.a(1);
                break;
            case HttpStatus.SC_ACCEPTED /* 202 */:
                a();
                a((Map<String, Object>) null);
                break;
        }
    }

    private void a(a aVar) {
        this.k.add(aVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str) {
        this.l = new d.a.a.a.b(this, new Object(), str).execute(null);
    }

    private void a(String str, String str2, int i, int i2, Map<String, Object> map) {
        this.m = new d.a.a.a.c(this, str, str2, new Object(), i, i2, map).execute(null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, String str2, int i, String str3, String str4, String str5) {
        this.f2782c = str;
        this.f2783d = str2;
        this.h = i;
        this.f2784e = str3;
        this.f2785f = str4;
        this.g = str5;
        d();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, String str2, DialogInterface.OnKeyListener onKeyListener, DialogInterface.OnCancelListener onCancelListener, DialogInterface.OnDismissListener onDismissListener) {
        d();
        ProgressDialog progressDialog = this.i;
        if (progressDialog == null || !progressDialog.isShowing()) {
            this.i = new ProgressDialog(this.q);
            this.i.setTitle(str);
            this.i.setMessage(str2);
            this.i.setIndeterminate(false);
            this.i.setProgressStyle(0);
            this.i.setCancelable(false);
            if (onKeyListener != null) {
                this.i.setOnKeyListener(onKeyListener);
            }
            if (onCancelListener != null) {
                this.i.setOnCancelListener(onCancelListener);
            }
            if (onDismissListener != null) {
                this.i.setOnDismissListener(onDismissListener);
            }
            this.i.setOwnerActivity(this.p);
            this.i.show();
        }
    }

    private void a(Map<String, Object> map) {
        AsyncTask<Void, Void, Boolean> asyncTask = this.m;
        if (asyncTask != null) {
            asyncTask.cancel(true);
        }
        a(this.q.getString(d.a.a.a.mktlibrary_progress_verification_title), this.q.getString(d.a.a.a.mktlibrary_progress_verification_message), 1, 100, map);
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0096 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:23:0x0024 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.String b(java.lang.String r5, java.util.Hashtable<java.lang.String, java.lang.Object> r6) {
        /*
            r4 = this;
            if (r6 != 0) goto L3
            return r5
        L3:
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r5 = "?"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.append(r5)
            java.util.Set r5 = r6.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L24:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L9c
            java.lang.Object r6 = r5.next()
            java.util.Map$Entry r6 = (java.util.Map.Entry) r6
            java.lang.Object r1 = r6.getValue()
            boolean r1 = r1 instanceof java.lang.String
            java.lang.String r2 = "="
            if (r1 == 0) goto L6f
            java.lang.Object r1 = r6.getValue()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r3 = "cid[]="
            boolean r1 = r1.startsWith(r3)
            if (r1 == 0) goto L50
            java.lang.Object r6 = r6.getValue()
            r0.append(r6)
            goto L90
        L50:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Object r3 = r6.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r1.append(r3)
            r1.append(r2)
            java.lang.Object r6 = r6.getValue()
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String r6 = java.net.URLEncoder.encode(r6)
            r1.append(r6)
            goto L89
        L6f:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Object r3 = r6.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r1.append(r3)
            r1.append(r2)
            java.lang.Object r6 = r6.getValue()
            java.lang.Integer r6 = (java.lang.Integer) r6
            r1.append(r6)
        L89:
            java.lang.String r6 = r1.toString()
            r0.append(r6)
        L90:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L24
            java.lang.String r6 = "&"
            r0.append(r6)
            goto L24
        L9c:
            java.lang.String r5 = r0.toString()
            return r5
        */
        throw new UnsupportedOperationException("Method not decompiled: d.a.a.a.m.b(java.lang.String, java.util.Hashtable):java.lang.String");
    }

    private void b() {
        e();
        AlertDialog alertDialog = this.j;
        if (alertDialog == null || !alertDialog.isShowing()) {
            return;
        }
        this.j.dismiss();
        this.j = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(int i) {
        Activity activity;
        Runnable lVar;
        if (i != 202) {
            return;
        }
        if (this.v == 2) {
            activity = this.p;
            lVar = new k(this, i);
        } else {
            activity = this.p;
            lVar = new l(this, i);
        }
        activity.runOnUiThread(lVar);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(DialogInterface dialogInterface) {
        int i = this.f2781b;
        if (i == 200 || i == 202) {
            if (this.v == 2) {
                this.f2780a.a(1);
            } else {
                this.p.moveTaskToBack(true);
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        e();
        ProgressDialog progressDialog = this.i;
        if (progressDialog == null || !progressDialog.isShowing()) {
            return;
        }
        this.i.dismiss();
        this.i = null;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c(DialogInterface dialogInterface) {
        if (this.f2781b != 200) {
            return;
        }
        this.q.getSharedPreferences("mkt_pref", 0).edit().putLong(this.s, this.w - 86400000).commit();
        StringBuffer stringBuffer = new StringBuffer();
        stringBuffer.append(this.q.getString(d.a.a.a.mktlibrary_url_apk_history));
        stringBuffer.append(this.s + "/");
        this.q.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(stringBuffer.toString())));
    }

    private void d() {
        Activity activity;
        int i = 1;
        if (this.q.getResources().getConfiguration().orientation == 1) {
            activity = this.p;
        } else {
            activity = this.p;
            i = 0;
        }
        activity.setRequestedOrientation(i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void e() {
        this.p.setRequestedOrientation(-1);
    }

    private void f() {
        AsyncTask<Void, Void, Boolean> asyncTask = this.m;
        if (asyncTask != null) {
            asyncTask.cancel(true);
        }
        a(this.q.getString(d.a.a.a.mktlibrary_progress_connect_title), this.q.getString(d.a.a.a.mktlibrary_progress_connect_message), 2, HttpStatus.SC_OK, (Map<String, Object>) null);
    }

    public AlertDialog a(DialogInterface.OnClickListener onClickListener, DialogInterface.OnClickListener onClickListener2, DialogInterface.OnClickListener onClickListener3, DialogInterface.OnKeyListener onKeyListener, DialogInterface.OnCancelListener onCancelListener) {
        this.f2781b = 3;
        AlertDialog alertDialogCreate = new AlertDialog.Builder(this.q).setTitle(this.f2782c).setMessage(this.f2783d).setPositiveButton(this.f2784e, onClickListener).setNeutralButton(this.f2785f, onClickListener2).setNegativeButton(this.g, onClickListener3).setIcon(this.h).setOnKeyListener(onKeyListener).setOnCancelListener(onCancelListener).create();
        alertDialogCreate.show();
        return alertDialogCreate;
    }

    public AlertDialog a(DialogInterface.OnClickListener onClickListener, DialogInterface.OnClickListener onClickListener2, DialogInterface.OnKeyListener onKeyListener, DialogInterface.OnCancelListener onCancelListener) {
        this.f2781b = 2;
        AlertDialog alertDialogCreate = new AlertDialog.Builder(this.q).setTitle(this.f2782c).setMessage(this.f2783d).setPositiveButton(this.f2784e, onClickListener).setNegativeButton(this.f2785f, onClickListener2).setIcon(this.h).setOnKeyListener(onKeyListener).setOnCancelListener(onCancelListener).create();
        alertDialogCreate.show();
        return alertDialogCreate;
    }

    public AlertDialog a(DialogInterface.OnClickListener onClickListener, DialogInterface.OnKeyListener onKeyListener, DialogInterface.OnCancelListener onCancelListener) {
        this.f2781b = 1;
        AlertDialog alertDialogCreate = new AlertDialog.Builder(this.q).setTitle(this.f2782c).setMessage(this.f2783d).setPositiveButton(this.f2784e, onClickListener).setIcon(this.h).setOnKeyListener(onKeyListener).setOnCancelListener(onCancelListener).create();
        alertDialogCreate.show();
        return alertDialogCreate;
    }

    public void a() {
        c();
        b();
        AsyncTask<Void, Void, Boolean> asyncTask = this.m;
        if (asyncTask != null) {
            asyncTask.cancel(true);
        }
        AsyncTask<Void, Void, Boolean> asyncTask2 = this.l;
        if (asyncTask2 != null) {
            asyncTask2.cancel(true);
        }
    }

    public void a(boolean z, int i, g gVar) {
        HashMap map = new HashMap();
        this.f2780a = gVar;
        if (!z) {
            a(1);
            this.v = 1;
            return;
        }
        if (i == 0) {
            map.put("autoUpdate", false);
            a(map);
            return;
        }
        this.w = System.currentTimeMillis();
        if (this.q.getSharedPreferences("mkt_pref", 0).getLong(this.s, this.w) > this.w) {
            this.f2780a.a(1);
            return;
        }
        map.put("autoUpdate", true);
        a(map);
        this.q.getSharedPreferences("mkt_pref", 0).edit().putLong(this.s, this.w + ((long) (i * 60 * 1000))).commit();
    }
}
