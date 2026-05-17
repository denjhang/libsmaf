package c.a.a.a.a.a;

import android.content.Context;
import android.content.SharedPreferences;
import android.util.Log;
import com.google.android.gms.common.g;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private SharedPreferences f819a;

    public c(Context context) {
        try {
            Context contextB = g.b(context);
            this.f819a = contextB == null ? null : contextB.getSharedPreferences("google_ads_flags", 0);
        } catch (Throwable th) {
            Log.w("GmscoreFlag", "Error while getting SharedPreferences ", th);
            this.f819a = null;
        }
    }

    final float a(String str, float f2) {
        try {
            if (this.f819a == null) {
                return 0.0f;
            }
            return this.f819a.getFloat(str, 0.0f);
        } catch (Throwable th) {
            Log.w("GmscoreFlag", "Error while reading from SharedPreferences ", th);
            return 0.0f;
        }
    }

    final String a(String str, String str2) {
        try {
            return this.f819a == null ? str2 : this.f819a.getString(str, str2);
        } catch (Throwable th) {
            Log.w("GmscoreFlag", "Error while reading from SharedPreferences ", th);
            return str2;
        }
    }

    public final boolean a(String str, boolean z) {
        try {
            if (this.f819a == null) {
                return false;
            }
            return this.f819a.getBoolean(str, false);
        } catch (Throwable th) {
            Log.w("GmscoreFlag", "Error while reading from SharedPreferences ", th);
            return false;
        }
    }
}
