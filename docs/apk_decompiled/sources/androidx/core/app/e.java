package androidx.core.app;

import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.os.Build;
import android.os.Bundle;
import android.widget.RemoteViews;
import java.util.ArrayList;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class e {

    public static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final Bundle f174a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        private final h[] f175b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        private final h[] f176c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        private boolean f177d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        boolean f178e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        private final int f179f;
        public int g;
        public CharSequence h;
        public PendingIntent i;

        public a(int i, CharSequence charSequence, PendingIntent pendingIntent) {
            this(i, charSequence, pendingIntent, new Bundle(), null, null, true, 0, true);
        }

        a(int i, CharSequence charSequence, PendingIntent pendingIntent, Bundle bundle, h[] hVarArr, h[] hVarArr2, boolean z, int i2, boolean z2) {
            this.f178e = true;
            this.g = i;
            this.h = c.a(charSequence);
            this.i = pendingIntent;
            this.f174a = bundle == null ? new Bundle() : bundle;
            this.f175b = hVarArr;
            this.f176c = hVarArr2;
            this.f177d = z;
            this.f179f = i2;
            this.f178e = z2;
        }

        public PendingIntent a() {
            return this.i;
        }

        public boolean b() {
            return this.f177d;
        }

        public h[] c() {
            return this.f176c;
        }

        public Bundle d() {
            return this.f174a;
        }

        public int e() {
            return this.g;
        }

        public h[] f() {
            return this.f175b;
        }

        public int g() {
            return this.f179f;
        }

        public boolean h() {
            return this.f178e;
        }

        public CharSequence i() {
            return this.h;
        }
    }

    public static class b extends d {

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        private CharSequence f180e;

        public b a(CharSequence charSequence) {
            this.f180e = c.a(charSequence);
            return this;
        }

        @Override // androidx.core.app.e.d
        public void a(androidx.core.app.d dVar) {
            if (Build.VERSION.SDK_INT >= 16) {
                Notification.BigTextStyle bigTextStyleBigText = new Notification.BigTextStyle(dVar.a()).setBigContentTitle(this.f188b).bigText(this.f180e);
                if (this.f190d) {
                    bigTextStyleBigText.setSummaryText(this.f189c);
                }
            }
        }
    }

    public static class c {
        String A;
        Bundle B;
        int C;
        int D;
        Notification E;
        RemoteViews F;
        RemoteViews G;
        RemoteViews H;
        String I;
        int J;
        String K;
        long L;
        int M;
        Notification N;

        @Deprecated
        public ArrayList<String> O;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public Context f181a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        public ArrayList<a> f182b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        ArrayList<a> f183c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        CharSequence f184d;

        /* JADX INFO: renamed from: e, reason: collision with root package name */
        CharSequence f185e;

        /* JADX INFO: renamed from: f, reason: collision with root package name */
        PendingIntent f186f;
        PendingIntent g;
        RemoteViews h;
        Bitmap i;
        CharSequence j;
        int k;
        int l;
        boolean m;
        boolean n;
        d o;
        CharSequence p;
        CharSequence[] q;
        int r;
        int s;
        boolean t;
        String u;
        boolean v;
        String w;
        boolean x;
        boolean y;
        boolean z;

        @Deprecated
        public c(Context context) {
            this(context, null);
        }

        public c(Context context, String str) {
            this.f182b = new ArrayList<>();
            this.f183c = new ArrayList<>();
            this.m = true;
            this.x = false;
            this.C = 0;
            this.D = 0;
            this.J = 0;
            this.M = 0;
            this.N = new Notification();
            this.f181a = context;
            this.I = str;
            this.N.when = System.currentTimeMillis();
            this.N.audioStreamType = -1;
            this.l = 0;
            this.O = new ArrayList<>();
        }

        protected static CharSequence a(CharSequence charSequence) {
            return (charSequence != null && charSequence.length() > 5120) ? charSequence.subSequence(0, 5120) : charSequence;
        }

        private void a(int i, boolean z) {
            Notification notification;
            int i2;
            if (z) {
                notification = this.N;
                i2 = i | notification.flags;
            } else {
                notification = this.N;
                i2 = (i ^ (-1)) & notification.flags;
            }
            notification.flags = i2;
        }

        private Bitmap b(Bitmap bitmap) {
            if (bitmap == null || Build.VERSION.SDK_INT >= 27) {
                return bitmap;
            }
            Resources resources = this.f181a.getResources();
            int dimensionPixelSize = resources.getDimensionPixelSize(b.d.a.compat_notification_large_icon_max_width);
            int dimensionPixelSize2 = resources.getDimensionPixelSize(b.d.a.compat_notification_large_icon_max_height);
            if (bitmap.getWidth() <= dimensionPixelSize && bitmap.getHeight() <= dimensionPixelSize2) {
                return bitmap;
            }
            double d2 = dimensionPixelSize;
            double dMax = Math.max(1, bitmap.getWidth());
            Double.isNaN(d2);
            Double.isNaN(dMax);
            double d3 = d2 / dMax;
            double d4 = dimensionPixelSize2;
            double dMax2 = Math.max(1, bitmap.getHeight());
            Double.isNaN(d4);
            Double.isNaN(dMax2);
            double dMin = Math.min(d3, d4 / dMax2);
            double width = bitmap.getWidth();
            Double.isNaN(width);
            int iCeil = (int) Math.ceil(width * dMin);
            double height = bitmap.getHeight();
            Double.isNaN(height);
            return Bitmap.createScaledBitmap(bitmap, iCeil, (int) Math.ceil(height * dMin), true);
        }

        public Notification a() {
            return new f(this).b();
        }

        public c a(int i) {
            this.C = i;
            return this;
        }

        public c a(int i, CharSequence charSequence, PendingIntent pendingIntent) {
            this.f182b.add(new a(i, charSequence, pendingIntent));
            return this;
        }

        public c a(long j) {
            this.N.when = j;
            return this;
        }

        public c a(PendingIntent pendingIntent) {
            this.f186f = pendingIntent;
            return this;
        }

        public c a(Bitmap bitmap) {
            this.i = b(bitmap);
            return this;
        }

        public c a(RemoteViews remoteViews) {
            this.N.contentView = remoteViews;
            return this;
        }

        public c a(d dVar) {
            if (this.o != dVar) {
                this.o = dVar;
                d dVar2 = this.o;
                if (dVar2 != null) {
                    dVar2.a(this);
                }
            }
            return this;
        }

        public c a(String str) {
            this.I = str;
            return this;
        }

        public c a(boolean z) {
            a(16, z);
            return this;
        }

        public Bundle b() {
            if (this.B == null) {
                this.B = new Bundle();
            }
            return this.B;
        }

        public c b(int i) {
            this.l = i;
            return this;
        }

        public c b(CharSequence charSequence) {
            this.f185e = a(charSequence);
            return this;
        }

        public c b(boolean z) {
            this.x = z;
            return this;
        }

        public c c(int i) {
            this.N.icon = i;
            return this;
        }

        public c c(CharSequence charSequence) {
            this.f184d = a(charSequence);
            return this;
        }

        public c d(CharSequence charSequence) {
            this.N.tickerText = a(charSequence);
            return this;
        }
    }

    public static abstract class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected c f187a;

        /* JADX INFO: renamed from: b, reason: collision with root package name */
        CharSequence f188b;

        /* JADX INFO: renamed from: c, reason: collision with root package name */
        CharSequence f189c;

        /* JADX INFO: renamed from: d, reason: collision with root package name */
        boolean f190d = false;

        public void a(Bundle bundle) {
        }

        public abstract void a(androidx.core.app.d dVar);

        public void a(c cVar) {
            if (this.f187a != cVar) {
                this.f187a = cVar;
                c cVar2 = this.f187a;
                if (cVar2 != null) {
                    cVar2.a(this);
                }
            }
        }

        public RemoteViews b(androidx.core.app.d dVar) {
            return null;
        }

        public RemoteViews c(androidx.core.app.d dVar) {
            return null;
        }

        public RemoteViews d(androidx.core.app.d dVar) {
            return null;
        }
    }

    public static Bundle a(Notification notification) {
        int i = Build.VERSION.SDK_INT;
        if (i >= 19) {
            return notification.extras;
        }
        if (i >= 16) {
            return g.a(notification);
        }
        return null;
    }
}
