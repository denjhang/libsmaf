package com.google.android.gms.common;

import android.R;
import android.annotation.SuppressLint;
import android.annotation.TargetApi;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.app.Notification;
import android.app.NotificationChannel;
import android.app.NotificationManager;
import android.app.PendingIntent;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Looper;
import android.os.Message;
import android.util.Log;
import android.util.TypedValue;
import androidx.core.app.e;
import androidx.fragment.app.FragmentActivity;
import com.google.android.gms.common.api.GoogleApiActivity;
import com.google.android.gms.common.internal.AbstractDialogInterfaceOnClickListenerC0068f;
import com.google.android.gms.common.internal.C0067e;
import org.apache.http.conn.params.ConnManagerParams;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class c extends d {

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private static final Object f1126c = new Object();

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private static final c f1127d = new c();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    public static final int f1128e = d.f1132a;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private String f1129f;

    @SuppressLint({"HandlerLeak"})
    private class a extends c.a.a.a.d.b.e {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Context f1130a;

        public a(Context context) {
            super(Looper.myLooper() == null ? Looper.getMainLooper() : Looper.myLooper());
            this.f1130a = context.getApplicationContext();
        }

        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            int i = message.what;
            if (i != 1) {
                StringBuilder sb = new StringBuilder(50);
                sb.append("Don't know how to handle this message: ");
                sb.append(i);
                Log.w("GoogleApiAvailability", sb.toString());
                return;
            }
            int iB = c.this.b(this.f1130a);
            if (c.this.b(iB)) {
                c.this.b(this.f1130a, iB);
            }
        }
    }

    static Dialog a(Context context, int i, AbstractDialogInterfaceOnClickListenerC0068f abstractDialogInterfaceOnClickListenerC0068f, DialogInterface.OnCancelListener onCancelListener) {
        if (i == 0) {
            return null;
        }
        TypedValue typedValue = new TypedValue();
        context.getTheme().resolveAttribute(R.attr.alertDialogTheme, typedValue, true);
        AlertDialog.Builder builder = "Theme.Dialog.Alert".equals(context.getResources().getResourceEntryName(typedValue.resourceId)) ? new AlertDialog.Builder(context, 5) : null;
        if (builder == null) {
            builder = new AlertDialog.Builder(context);
        }
        builder.setMessage(C0067e.b(context, i));
        if (onCancelListener != null) {
            builder.setOnCancelListener(onCancelListener);
        }
        String strA = C0067e.a(context, i);
        if (strA != null) {
            builder.setPositiveButton(strA, abstractDialogInterfaceOnClickListenerC0068f);
        }
        String strE = C0067e.e(context, i);
        if (strE != null) {
            builder.setTitle(strE);
        }
        return builder.create();
    }

    public static c a() {
        return f1127d;
    }

    static void a(Activity activity, Dialog dialog, String str, DialogInterface.OnCancelListener onCancelListener) {
        if (activity instanceof FragmentActivity) {
            j.a(dialog, onCancelListener).a(((FragmentActivity) activity).c(), str);
        } else {
            b.a(dialog, onCancelListener).show(activity.getFragmentManager(), str);
        }
    }

    @TargetApi(ConnManagerParams.DEFAULT_MAX_TOTAL_CONNECTIONS)
    private final void a(Context context, int i, String str, PendingIntent pendingIntent) {
        int i2;
        if (i == 18) {
            c(context);
            return;
        }
        if (pendingIntent == null) {
            if (i == 6) {
                Log.w("GoogleApiAvailability", "Missing resolution for ConnectionResult.RESOLUTION_REQUIRED. Call GoogleApiAvailability#showErrorNotification(Context, ConnectionResult) instead.");
                return;
            }
            return;
        }
        String strD = C0067e.d(context, i);
        String strC = C0067e.c(context, i);
        Resources resources = context.getResources();
        NotificationManager notificationManager = (NotificationManager) context.getSystemService("notification");
        e.c cVar = new e.c(context);
        cVar.b(true);
        cVar.a(true);
        cVar.c(strD);
        e.b bVar = new e.b();
        bVar.a(strC);
        cVar.a(bVar);
        if (com.google.android.gms.common.util.i.b(context)) {
            com.google.android.gms.common.internal.r.b(com.google.android.gms.common.util.n.f());
            cVar.c(context.getApplicationInfo().icon);
            cVar.b(2);
            if (com.google.android.gms.common.util.i.c(context)) {
                cVar.a(c.a.a.a.b.b.common_full_open_on_phone, resources.getString(c.a.a.a.b.c.common_open_on_phone), pendingIntent);
            } else {
                cVar.a(pendingIntent);
            }
        } else {
            cVar.c(R.drawable.stat_sys_warning);
            cVar.d(resources.getString(c.a.a.a.b.c.common_google_play_services_notification_ticker));
            cVar.a(System.currentTimeMillis());
            cVar.a(pendingIntent);
            cVar.b(strC);
        }
        if (com.google.android.gms.common.util.n.i()) {
            com.google.android.gms.common.internal.r.b(com.google.android.gms.common.util.n.i());
            String strB = b();
            if (strB == null) {
                strB = "com.google.android.gms.availability";
                NotificationChannel notificationChannel = notificationManager.getNotificationChannel("com.google.android.gms.availability");
                String strB2 = C0067e.b(context);
                if (notificationChannel == null) {
                    notificationChannel = new NotificationChannel("com.google.android.gms.availability", strB2, 4);
                } else if (!strB2.contentEquals(notificationChannel.getName())) {
                    notificationChannel.setName(strB2);
                }
                notificationManager.createNotificationChannel(notificationChannel);
            }
            cVar.a(strB);
        }
        Notification notificationA = cVar.a();
        if (i == 1 || i == 2 || i == 3) {
            i2 = 10436;
            g.f1157d.set(false);
        } else {
            i2 = 39789;
        }
        notificationManager.notify(i2, notificationA);
    }

    private final String b() {
        String str;
        synchronized (f1126c) {
            str = this.f1129f;
        }
        return str;
    }

    @Override // com.google.android.gms.common.d
    public int a(Context context, int i) {
        return super.a(context, i);
    }

    public Dialog a(Activity activity, int i, int i2, DialogInterface.OnCancelListener onCancelListener) {
        return a(activity, i, AbstractDialogInterfaceOnClickListenerC0068f.a(activity, a(activity, i, "d"), i2), onCancelListener);
    }

    @Override // com.google.android.gms.common.d
    public PendingIntent a(Context context, int i, int i2) {
        return super.a(context, i, i2);
    }

    public PendingIntent a(Context context, ConnectionResult connectionResult) {
        return connectionResult.d() ? connectionResult.c() : a(context, connectionResult.a(), 0);
    }

    @Override // com.google.android.gms.common.d
    public Intent a(Context context, int i, String str) {
        return super.a(context, i, str);
    }

    @Override // com.google.android.gms.common.d
    public final String a(int i) {
        return super.a(i);
    }

    public final boolean a(Context context, ConnectionResult connectionResult, int i) {
        PendingIntent pendingIntentA = a(context, connectionResult);
        if (pendingIntentA == null) {
            return false;
        }
        a(context, connectionResult.a(), (String) null, GoogleApiActivity.a(context, pendingIntentA, i));
        return true;
    }

    @Override // com.google.android.gms.common.d
    public int b(Context context) {
        return super.b(context);
    }

    public void b(Context context, int i) {
        a(context, i, (String) null, a(context, i, 0, "n"));
    }

    @Override // com.google.android.gms.common.d
    public final boolean b(int i) {
        return super.b(i);
    }

    public boolean b(Activity activity, int i, int i2, DialogInterface.OnCancelListener onCancelListener) {
        Dialog dialogA = a(activity, i, i2, onCancelListener);
        if (dialogA == null) {
            return false;
        }
        a(activity, dialogA, "GooglePlayServicesErrorDialog", onCancelListener);
        return true;
    }

    final void c(Context context) {
        new a(context).sendEmptyMessageDelayed(1, 120000L);
    }
}
