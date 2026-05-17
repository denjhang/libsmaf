package d.a.a.a;

import android.os.AsyncTask;
import java.util.Hashtable;
import java.util.Map;
import org.json.JSONException;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c extends AsyncTask<Void, Void, Boolean> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f2763a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    final /* synthetic */ String f2764b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    final /* synthetic */ Object f2765c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    final /* synthetic */ int f2766d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    final /* synthetic */ int f2767e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    final /* synthetic */ Map f2768f;
    final /* synthetic */ m g;

    c(m mVar, String str, String str2, Object obj, int i, int i2, Map map) {
        this.g = mVar;
        this.f2763a = str;
        this.f2764b = str2;
        this.f2765c = obj;
        this.f2766d = i;
        this.f2767e = i2;
        this.f2768f = map;
    }

    @Override // android.os.AsyncTask
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public Boolean doInBackground(Void... voidArr) {
        synchronized (this.f2765c) {
            if (isCancelled()) {
                return true;
            }
            Hashtable hashtable = new Hashtable();
            hashtable.put("act", Integer.valueOf(this.f2766d));
            hashtable.put("appkey", this.g.o);
            hashtable.put("pkg_id", this.g.s);
            try {
                this.g.n = this.g.a(this.f2766d, (Hashtable<String, Object>) hashtable);
                return this.g.n != null;
            } catch (JSONException unused) {
                return false;
            }
        }
    }

    @Override // android.os.AsyncTask
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(Boolean bool) {
        m mVar;
        int i;
        int i2;
        this.g.c();
        if (bool.booleanValue()) {
            mVar = this.g;
            i = this.f2767e;
            i2 = 0;
        } else {
            mVar = this.g;
            i = this.f2767e;
            i2 = 10;
        }
        mVar.a(i, i2, mVar.n, (Map<String, Object>) this.f2768f);
    }

    @Override // android.os.AsyncTask
    public void onCancelled() {
        super.onCancelled();
    }

    @Override // android.os.AsyncTask
    public void onPreExecute() {
        m mVar = this.g;
        mVar.a(this.f2763a, this.f2764b, mVar.A, this.g.B, this.g.z);
    }
}
