package jp.co.ymm.android.ringtone.util;

import android.app.Activity;
import android.content.Context;
import android.content.SharedPreferences;
import android.os.AsyncTask;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;
import java.net.URL;
import java.text.DateFormat;
import java.text.ParseException;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private b f3909a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final int f3910b = 3000;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final int f3911c = 5000;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private int f3912d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final int f3913e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private long f3914f;
    private long g;
    private final String h;
    private final SharedPreferences i;

    public class a extends AsyncTask<Activity, Integer, Long> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        Activity f3915a;

        public a() {
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public Long doInBackground(Activity... activityArr) {
            this.f3915a = activityArr[0];
            try {
                HttpURLConnection httpURLConnection = (HttpURLConnection) new URL(p.this.h).openConnection();
                httpURLConnection.setConnectTimeout(3000);
                httpURLConnection.setReadTimeout(5000);
                httpURLConnection.connect();
                BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(httpURLConnection.getInputStream(), HTTP.UTF_8));
                new String();
                String line = bufferedReader.readLine();
                if (line != null) {
                    return Long.valueOf(DateFormat.getDateInstance().parse(line.trim()).getTime());
                }
            } catch (IOException | ParseException e2) {
                g.b("getLastPrivacyVersion", e2);
            }
            return -1L;
        }

        /* JADX INFO: Access modifiers changed from: protected */
        @Override // android.os.AsyncTask
        /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
        public void onPostExecute(Long l) {
            p.this.a(l, this.f3915a);
        }
    }

    public interface b {
        void a(Long l, Activity activity);
    }

    public p(Context context) {
        this.i = context.getSharedPreferences(o.L, 0);
        this.f3912d = this.i.getInt(o.Privacy_AppVersion.name(), -1);
        this.f3914f = this.i.getLong(o.Privacy_Date.name(), -1L);
        this.h = context.getString(2131493176);
        this.f3913e = z.e(context);
    }

    public void a(Activity activity) {
        new a().execute(activity);
    }

    public void a(Long l, Activity activity) {
        this.f3909a.a(l, activity);
    }

    public void a(b bVar) {
        this.f3909a = bVar;
    }

    public boolean a() {
        return this.f3912d > 0;
    }

    public boolean a(Long l) {
        g.a("Version:" + l);
        if (0 > l.longValue()) {
            return false;
        }
        this.g = l.longValue();
        return this.g <= this.f3914f;
    }

    public void b() {
        SharedPreferences.Editor editorEdit = this.i.edit();
        editorEdit.putInt(o.Privacy_AppVersion.name(), this.f3913e);
        editorEdit.putLong(o.Privacy_Date.name(), this.g);
        editorEdit.commit();
    }
}
