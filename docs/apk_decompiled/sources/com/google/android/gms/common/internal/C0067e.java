package com.google.android.gms.common.internal;

import android.R;
import android.content.Context;
import android.content.pm.PackageManager;
import android.content.res.Resources;
import android.text.TextUtils;
import android.util.Log;
import org.apache.http.conn.params.ConnManagerParams;
import org.apache.http.protocol.HTTP;
import org.apache.http.util.LangUtils;

/* JADX INFO: renamed from: com.google.android.gms.common.internal.e, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public final class C0067e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final b.b.h<String, String> f1267a = new b.b.h<>();

    public static String a(Context context) {
        String packageName = context.getPackageName();
        try {
            return com.google.android.gms.common.a.c.a(context).b(packageName).toString();
        } catch (PackageManager.NameNotFoundException | NullPointerException unused) {
            String str = context.getApplicationInfo().name;
            return TextUtils.isEmpty(str) ? packageName : str;
        }
    }

    public static String a(Context context, int i) {
        return context.getResources().getString(i != 1 ? i != 2 ? i != 3 ? R.string.ok : c.a.a.a.b.c.common_google_play_services_enable_button : c.a.a.a.b.c.common_google_play_services_update_button : c.a.a.a.b.c.common_google_play_services_install_button);
    }

    private static String a(Context context, String str) {
        synchronized (f1267a) {
            String str2 = f1267a.get(str);
            if (str2 != null) {
                return str2;
            }
            Resources resourcesC = com.google.android.gms.common.f.c(context);
            if (resourcesC == null) {
                return null;
            }
            int identifier = resourcesC.getIdentifier(str, "string", "com.google.android.gms");
            if (identifier == 0) {
                String strValueOf = String.valueOf(str);
                Log.w("GoogleApiAvailability", strValueOf.length() != 0 ? "Missing resource: ".concat(strValueOf) : new String("Missing resource: "));
                return null;
            }
            String string = resourcesC.getString(identifier);
            if (!TextUtils.isEmpty(string)) {
                f1267a.put(str, string);
                return string;
            }
            String strValueOf2 = String.valueOf(str);
            Log.w("GoogleApiAvailability", strValueOf2.length() != 0 ? "Got empty resource: ".concat(strValueOf2) : new String("Got empty resource: "));
            return null;
        }
    }

    private static String a(Context context, String str, String str2) {
        Resources resources = context.getResources();
        String strA = a(context, str);
        if (strA == null) {
            strA = resources.getString(com.google.android.gms.common.i.common_google_play_services_unknown_issue);
        }
        return String.format(resources.getConfiguration().locale, strA, str2);
    }

    public static String b(Context context) {
        return context.getResources().getString(c.a.a.a.b.c.common_google_play_services_notification_channel_name);
    }

    public static String b(Context context, int i) {
        Resources resources = context.getResources();
        String strA = a(context);
        if (i == 1) {
            return resources.getString(c.a.a.a.b.c.common_google_play_services_install_text, strA);
        }
        if (i == 2) {
            return com.google.android.gms.common.util.i.c(context) ? resources.getString(c.a.a.a.b.c.common_google_play_services_wear_update_text) : resources.getString(c.a.a.a.b.c.common_google_play_services_update_text, strA);
        }
        if (i == 3) {
            return resources.getString(c.a.a.a.b.c.common_google_play_services_enable_text, strA);
        }
        if (i == 5) {
            return a(context, "common_google_play_services_invalid_account_text", strA);
        }
        if (i == 7) {
            return a(context, "common_google_play_services_network_error_text", strA);
        }
        if (i == 9) {
            return resources.getString(c.a.a.a.b.c.common_google_play_services_unsupported_text, strA);
        }
        if (i == 20) {
            return a(context, "common_google_play_services_restricted_profile_text", strA);
        }
        switch (i) {
            case 16:
                return a(context, "common_google_play_services_api_unavailable_text", strA);
            case LangUtils.HASH_SEED /* 17 */:
                return a(context, "common_google_play_services_sign_in_failed_text", strA);
            case 18:
                return resources.getString(c.a.a.a.b.c.common_google_play_services_updating_text, strA);
            default:
                return resources.getString(com.google.android.gms.common.i.common_google_play_services_unknown_issue, strA);
        }
    }

    public static String c(Context context, int i) {
        return i == 6 ? a(context, "common_google_play_services_resolution_required_text", a(context)) : b(context, i);
    }

    public static String d(Context context, int i) {
        String strA = i == 6 ? a(context, "common_google_play_services_resolution_required_title") : e(context, i);
        return strA == null ? context.getResources().getString(c.a.a.a.b.c.common_google_play_services_notification_ticker) : strA;
    }

    public static String e(Context context, int i) {
        String string;
        Resources resources = context.getResources();
        switch (i) {
            case 1:
                return resources.getString(c.a.a.a.b.c.common_google_play_services_install_title);
            case 2:
                return resources.getString(c.a.a.a.b.c.common_google_play_services_update_title);
            case 3:
                return resources.getString(c.a.a.a.b.c.common_google_play_services_enable_title);
            case 4:
            case 6:
            case 18:
                return null;
            case 5:
                Log.e("GoogleApiAvailability", "An invalid account was specified when connecting. Please provide a valid account.");
                return a(context, "common_google_play_services_invalid_account_title");
            case 7:
                Log.e("GoogleApiAvailability", "Network error occurred. Please retry request later.");
                return a(context, "common_google_play_services_network_error_title");
            case 8:
                string = "Internal error occurred. Please see logs for detailed information";
                break;
            case 9:
                string = "Google Play services is invalid. Cannot recover.";
                break;
            case 10:
                string = "Developer error occurred. Please see logs for detailed information";
                break;
            case 11:
                string = "The application is not licensed to the user.";
                break;
            case 12:
            case HTTP.CR /* 13 */:
            case 14:
            case 15:
            case 19:
            default:
                StringBuilder sb = new StringBuilder(33);
                sb.append("Unexpected error code ");
                sb.append(i);
                string = sb.toString();
                break;
            case 16:
                string = "One of the API components you attempted to connect to is not available.";
                break;
            case LangUtils.HASH_SEED /* 17 */:
                Log.e("GoogleApiAvailability", "The specified account could not be signed in.");
                return a(context, "common_google_play_services_sign_in_failed_title");
            case ConnManagerParams.DEFAULT_MAX_TOTAL_CONNECTIONS /* 20 */:
                Log.e("GoogleApiAvailability", "The current user profile is restricted and could not use authenticated features.");
                return a(context, "common_google_play_services_restricted_profile_title");
        }
        Log.e("GoogleApiAvailability", string);
        return null;
    }
}
