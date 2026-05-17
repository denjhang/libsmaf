package androidx.core.app;

import android.app.Notification;
import android.app.RemoteInput;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.SparseArray;
import android.widget.RemoteViews;
import androidx.core.app.e;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class f implements d {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final Notification.Builder f191a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final e.c f192b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private RemoteViews f193c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private RemoteViews f194d;

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private final List<Bundle> f195e = new ArrayList();

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private final Bundle f196f = new Bundle();
    private int g;
    private RemoteViews h;

    f(e.c cVar) {
        ArrayList<String> arrayList;
        Bundle bundle;
        String str;
        this.f192b = cVar;
        this.f191a = Build.VERSION.SDK_INT >= 26 ? new Notification.Builder(cVar.f181a, cVar.I) : new Notification.Builder(cVar.f181a);
        Notification notification = cVar.N;
        this.f191a.setWhen(notification.when).setSmallIcon(notification.icon, notification.iconLevel).setContent(notification.contentView).setTicker(notification.tickerText, cVar.h).setVibrate(notification.vibrate).setLights(notification.ledARGB, notification.ledOnMS, notification.ledOffMS).setOngoing((notification.flags & 2) != 0).setOnlyAlertOnce((notification.flags & 8) != 0).setAutoCancel((notification.flags & 16) != 0).setDefaults(notification.defaults).setContentTitle(cVar.f184d).setContentText(cVar.f185e).setContentInfo(cVar.j).setContentIntent(cVar.f186f).setDeleteIntent(notification.deleteIntent).setFullScreenIntent(cVar.g, (notification.flags & 128) != 0).setLargeIcon(cVar.i).setNumber(cVar.k).setProgress(cVar.r, cVar.s, cVar.t);
        if (Build.VERSION.SDK_INT < 21) {
            this.f191a.setSound(notification.sound, notification.audioStreamType);
        }
        if (Build.VERSION.SDK_INT >= 16) {
            this.f191a.setSubText(cVar.p).setUsesChronometer(cVar.n).setPriority(cVar.l);
            Iterator<e.a> it = cVar.f182b.iterator();
            while (it.hasNext()) {
                a(it.next());
            }
            Bundle bundle2 = cVar.B;
            if (bundle2 != null) {
                this.f196f.putAll(bundle2);
            }
            if (Build.VERSION.SDK_INT < 20) {
                if (cVar.x) {
                    this.f196f.putBoolean("android.support.localOnly", true);
                }
                String str2 = cVar.u;
                if (str2 != null) {
                    this.f196f.putString("android.support.groupKey", str2);
                    if (cVar.v) {
                        bundle = this.f196f;
                        str = "android.support.isGroupSummary";
                    } else {
                        bundle = this.f196f;
                        str = "android.support.useSideChannel";
                    }
                    bundle.putBoolean(str, true);
                }
                String str3 = cVar.w;
                if (str3 != null) {
                    this.f196f.putString("android.support.sortKey", str3);
                }
            }
            this.f193c = cVar.F;
            this.f194d = cVar.G;
        }
        if (Build.VERSION.SDK_INT >= 19) {
            this.f191a.setShowWhen(cVar.m);
            if (Build.VERSION.SDK_INT < 21 && (arrayList = cVar.O) != null && !arrayList.isEmpty()) {
                Bundle bundle3 = this.f196f;
                ArrayList<String> arrayList2 = cVar.O;
                bundle3.putStringArray("android.people", (String[]) arrayList2.toArray(new String[arrayList2.size()]));
            }
        }
        if (Build.VERSION.SDK_INT >= 20) {
            this.f191a.setLocalOnly(cVar.x).setGroup(cVar.u).setGroupSummary(cVar.v).setSortKey(cVar.w);
            this.g = cVar.M;
        }
        if (Build.VERSION.SDK_INT >= 21) {
            this.f191a.setCategory(cVar.A).setColor(cVar.C).setVisibility(cVar.D).setPublicVersion(cVar.E).setSound(notification.sound, notification.audioAttributes);
            Iterator<String> it2 = cVar.O.iterator();
            while (it2.hasNext()) {
                this.f191a.addPerson(it2.next());
            }
            this.h = cVar.H;
            if (cVar.f183c.size() > 0) {
                Bundle bundle4 = cVar.b().getBundle("android.car.EXTENSIONS");
                bundle4 = bundle4 == null ? new Bundle() : bundle4;
                Bundle bundle5 = new Bundle();
                for (int i = 0; i < cVar.f183c.size(); i++) {
                    bundle5.putBundle(Integer.toString(i), g.a(cVar.f183c.get(i)));
                }
                bundle4.putBundle("invisible_actions", bundle5);
                cVar.b().putBundle("android.car.EXTENSIONS", bundle4);
                this.f196f.putBundle("android.car.EXTENSIONS", bundle4);
            }
        }
        if (Build.VERSION.SDK_INT >= 24) {
            this.f191a.setExtras(cVar.B).setRemoteInputHistory(cVar.q);
            RemoteViews remoteViews = cVar.F;
            if (remoteViews != null) {
                this.f191a.setCustomContentView(remoteViews);
            }
            RemoteViews remoteViews2 = cVar.G;
            if (remoteViews2 != null) {
                this.f191a.setCustomBigContentView(remoteViews2);
            }
            RemoteViews remoteViews3 = cVar.H;
            if (remoteViews3 != null) {
                this.f191a.setCustomHeadsUpContentView(remoteViews3);
            }
        }
        if (Build.VERSION.SDK_INT >= 26) {
            this.f191a.setBadgeIconType(cVar.J).setShortcutId(cVar.K).setTimeoutAfter(cVar.L).setGroupAlertBehavior(cVar.M);
            if (cVar.z) {
                this.f191a.setColorized(cVar.y);
            }
            if (TextUtils.isEmpty(cVar.I)) {
                return;
            }
            this.f191a.setSound(null).setDefaults(0).setLights(0, 0, 0).setVibrate(null);
        }
    }

    private void a(Notification notification) {
        notification.sound = null;
        notification.vibrate = null;
        notification.defaults &= -2;
        notification.defaults &= -3;
    }

    private void a(e.a aVar) {
        int i = Build.VERSION.SDK_INT;
        if (i < 20) {
            if (i >= 16) {
                this.f195e.add(g.a(this.f191a, aVar));
                return;
            }
            return;
        }
        Notification.Action.Builder builder = new Notification.Action.Builder(aVar.e(), aVar.i(), aVar.a());
        if (aVar.f() != null) {
            for (RemoteInput remoteInput : h.a(aVar.f())) {
                builder.addRemoteInput(remoteInput);
            }
        }
        Bundle bundle = aVar.d() != null ? new Bundle(aVar.d()) : new Bundle();
        bundle.putBoolean("android.support.allowGeneratedReplies", aVar.b());
        if (Build.VERSION.SDK_INT >= 24) {
            builder.setAllowGeneratedReplies(aVar.b());
        }
        bundle.putInt("android.support.action.semanticAction", aVar.g());
        if (Build.VERSION.SDK_INT >= 28) {
            builder.setSemanticAction(aVar.g());
        }
        bundle.putBoolean("android.support.action.showsUserInterface", aVar.h());
        builder.addExtras(bundle);
        this.f191a.addAction(builder.build());
    }

    @Override // androidx.core.app.d
    public Notification.Builder a() {
        return this.f191a;
    }

    public Notification b() {
        Bundle bundleA;
        RemoteViews remoteViewsD;
        RemoteViews remoteViewsB;
        e.d dVar = this.f192b.o;
        if (dVar != null) {
            dVar.a(this);
        }
        RemoteViews remoteViewsC = dVar != null ? dVar.c(this) : null;
        Notification notificationC = c();
        if (remoteViewsC != null || (remoteViewsC = this.f192b.F) != null) {
            notificationC.contentView = remoteViewsC;
        }
        if (Build.VERSION.SDK_INT >= 16 && dVar != null && (remoteViewsB = dVar.b(this)) != null) {
            notificationC.bigContentView = remoteViewsB;
        }
        if (Build.VERSION.SDK_INT >= 21 && dVar != null && (remoteViewsD = this.f192b.o.d(this)) != null) {
            notificationC.headsUpContentView = remoteViewsD;
        }
        if (Build.VERSION.SDK_INT >= 16 && dVar != null && (bundleA = e.a(notificationC)) != null) {
            dVar.a(bundleA);
        }
        return notificationC;
    }

    protected Notification c() {
        int i = Build.VERSION.SDK_INT;
        if (i >= 26) {
            return this.f191a.build();
        }
        if (i >= 24) {
            Notification notificationBuild = this.f191a.build();
            if (this.g != 0) {
                if (notificationBuild.getGroup() != null && (notificationBuild.flags & 512) != 0 && this.g == 2) {
                    a(notificationBuild);
                }
                if (notificationBuild.getGroup() != null && (notificationBuild.flags & 512) == 0 && this.g == 1) {
                    a(notificationBuild);
                }
            }
            return notificationBuild;
        }
        if (i >= 21) {
            this.f191a.setExtras(this.f196f);
            Notification notificationBuild2 = this.f191a.build();
            RemoteViews remoteViews = this.f193c;
            if (remoteViews != null) {
                notificationBuild2.contentView = remoteViews;
            }
            RemoteViews remoteViews2 = this.f194d;
            if (remoteViews2 != null) {
                notificationBuild2.bigContentView = remoteViews2;
            }
            RemoteViews remoteViews3 = this.h;
            if (remoteViews3 != null) {
                notificationBuild2.headsUpContentView = remoteViews3;
            }
            if (this.g != 0) {
                if (notificationBuild2.getGroup() != null && (notificationBuild2.flags & 512) != 0 && this.g == 2) {
                    a(notificationBuild2);
                }
                if (notificationBuild2.getGroup() != null && (notificationBuild2.flags & 512) == 0 && this.g == 1) {
                    a(notificationBuild2);
                }
            }
            return notificationBuild2;
        }
        if (i >= 20) {
            this.f191a.setExtras(this.f196f);
            Notification notificationBuild3 = this.f191a.build();
            RemoteViews remoteViews4 = this.f193c;
            if (remoteViews4 != null) {
                notificationBuild3.contentView = remoteViews4;
            }
            RemoteViews remoteViews5 = this.f194d;
            if (remoteViews5 != null) {
                notificationBuild3.bigContentView = remoteViews5;
            }
            if (this.g != 0) {
                if (notificationBuild3.getGroup() != null && (notificationBuild3.flags & 512) != 0 && this.g == 2) {
                    a(notificationBuild3);
                }
                if (notificationBuild3.getGroup() != null && (notificationBuild3.flags & 512) == 0 && this.g == 1) {
                    a(notificationBuild3);
                }
            }
            return notificationBuild3;
        }
        if (i >= 19) {
            SparseArray<Bundle> sparseArrayA = g.a(this.f195e);
            if (sparseArrayA != null) {
                this.f196f.putSparseParcelableArray("android.support.actionExtras", sparseArrayA);
            }
            this.f191a.setExtras(this.f196f);
            Notification notificationBuild4 = this.f191a.build();
            RemoteViews remoteViews6 = this.f193c;
            if (remoteViews6 != null) {
                notificationBuild4.contentView = remoteViews6;
            }
            RemoteViews remoteViews7 = this.f194d;
            if (remoteViews7 != null) {
                notificationBuild4.bigContentView = remoteViews7;
            }
            return notificationBuild4;
        }
        if (i < 16) {
            return this.f191a.getNotification();
        }
        Notification notificationBuild5 = this.f191a.build();
        Bundle bundleA = e.a(notificationBuild5);
        Bundle bundle = new Bundle(this.f196f);
        for (String str : this.f196f.keySet()) {
            if (bundleA.containsKey(str)) {
                bundle.remove(str);
            }
        }
        bundleA.putAll(bundle);
        SparseArray<Bundle> sparseArrayA2 = g.a(this.f195e);
        if (sparseArrayA2 != null) {
            e.a(notificationBuild5).putSparseParcelableArray("android.support.actionExtras", sparseArrayA2);
        }
        RemoteViews remoteViews8 = this.f193c;
        if (remoteViews8 != null) {
            notificationBuild5.contentView = remoteViews8;
        }
        RemoteViews remoteViews9 = this.f194d;
        if (remoteViews9 != null) {
            notificationBuild5.bigContentView = remoteViews9;
        }
        return notificationBuild5;
    }
}
