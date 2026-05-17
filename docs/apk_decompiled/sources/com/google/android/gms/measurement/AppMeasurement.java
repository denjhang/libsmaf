package com.google.android.gms.measurement;

import android.content.Context;
import android.os.Bundle;
import androidx.annotation.Keep;
import com.google.android.gms.common.internal.r;
import com.google.android.gms.measurement.internal.C0366wc;
import com.google.android.gms.measurement.internal.Zc;
import com.google.android.gms.measurement.internal._b;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Deprecated
public class AppMeasurement {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile AppMeasurement f1892a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private final _b f1893b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private final Zc f1894c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private final boolean f1895d;

    public static class ConditionalUserProperty {

        @Keep
        public boolean mActive;

        @Keep
        public String mAppId;

        @Keep
        public long mCreationTimestamp;

        @Keep
        public String mExpiredEventName;

        @Keep
        public Bundle mExpiredEventParams;

        @Keep
        public String mName;

        @Keep
        public String mOrigin;

        @Keep
        public long mTimeToLive;

        @Keep
        public String mTimedOutEventName;

        @Keep
        public Bundle mTimedOutEventParams;

        @Keep
        public String mTriggerEventName;

        @Keep
        public long mTriggerTimeout;

        @Keep
        public String mTriggeredEventName;

        @Keep
        public Bundle mTriggeredEventParams;

        @Keep
        public long mTriggeredTimestamp;

        @Keep
        public Object mValue;

        public ConditionalUserProperty() {
        }

        private ConditionalUserProperty(Bundle bundle) {
            r.a(bundle);
            this.mAppId = (String) C0366wc.a(bundle, "app_id", String.class, null);
            this.mOrigin = (String) C0366wc.a(bundle, "origin", String.class, null);
            this.mName = (String) C0366wc.a(bundle, "name", String.class, null);
            this.mValue = C0366wc.a(bundle, "value", Object.class, null);
            this.mTriggerEventName = (String) C0366wc.a(bundle, "trigger_event_name", String.class, null);
            this.mTriggerTimeout = ((Long) C0366wc.a(bundle, "trigger_timeout", Long.class, 0L)).longValue();
            this.mTimedOutEventName = (String) C0366wc.a(bundle, "timed_out_event_name", String.class, null);
            this.mTimedOutEventParams = (Bundle) C0366wc.a(bundle, "timed_out_event_params", Bundle.class, null);
            this.mTriggeredEventName = (String) C0366wc.a(bundle, "triggered_event_name", String.class, null);
            this.mTriggeredEventParams = (Bundle) C0366wc.a(bundle, "triggered_event_params", Bundle.class, null);
            this.mTimeToLive = ((Long) C0366wc.a(bundle, "time_to_live", Long.class, 0L)).longValue();
            this.mExpiredEventName = (String) C0366wc.a(bundle, "expired_event_name", String.class, null);
            this.mExpiredEventParams = (Bundle) C0366wc.a(bundle, "expired_event_params", Bundle.class, null);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final Bundle a() {
            Bundle bundle = new Bundle();
            String str = this.mAppId;
            if (str != null) {
                bundle.putString("app_id", str);
            }
            String str2 = this.mOrigin;
            if (str2 != null) {
                bundle.putString("origin", str2);
            }
            String str3 = this.mName;
            if (str3 != null) {
                bundle.putString("name", str3);
            }
            Object obj = this.mValue;
            if (obj != null) {
                C0366wc.a(bundle, obj);
            }
            String str4 = this.mTriggerEventName;
            if (str4 != null) {
                bundle.putString("trigger_event_name", str4);
            }
            bundle.putLong("trigger_timeout", this.mTriggerTimeout);
            String str5 = this.mTimedOutEventName;
            if (str5 != null) {
                bundle.putString("timed_out_event_name", str5);
            }
            Bundle bundle2 = this.mTimedOutEventParams;
            if (bundle2 != null) {
                bundle.putBundle("timed_out_event_params", bundle2);
            }
            String str6 = this.mTriggeredEventName;
            if (str6 != null) {
                bundle.putString("triggered_event_name", str6);
            }
            Bundle bundle3 = this.mTriggeredEventParams;
            if (bundle3 != null) {
                bundle.putBundle("triggered_event_params", bundle3);
            }
            bundle.putLong("time_to_live", this.mTimeToLive);
            String str7 = this.mExpiredEventName;
            if (str7 != null) {
                bundle.putString("expired_event_name", str7);
            }
            Bundle bundle4 = this.mExpiredEventParams;
            if (bundle4 != null) {
                bundle.putBundle("expired_event_params", bundle4);
            }
            bundle.putLong("creation_timestamp", this.mCreationTimestamp);
            bundle.putBoolean("active", this.mActive);
            bundle.putLong("triggered_timestamp", this.mTriggeredTimestamp);
            return bundle;
        }
    }

    private AppMeasurement(Zc zc) {
        r.a(zc);
        this.f1894c = zc;
        this.f1893b = null;
        this.f1895d = true;
    }

    private AppMeasurement(_b _bVar) {
        r.a(_bVar);
        this.f1893b = _bVar;
        this.f1894c = null;
        this.f1895d = false;
    }

    public static AppMeasurement a(Context context, Bundle bundle) {
        if (f1892a == null) {
            synchronized (AppMeasurement.class) {
                if (f1892a == null) {
                    Zc zcB = b(context, bundle);
                    if (zcB != null) {
                        f1892a = new AppMeasurement(zcB);
                    } else {
                        f1892a = new AppMeasurement(_b.a(context, null, null, bundle));
                    }
                }
            }
        }
        return f1892a;
    }

    private static AppMeasurement a(Context context, String str, String str2) {
        if (f1892a == null) {
            synchronized (AppMeasurement.class) {
                if (f1892a == null) {
                    Zc zcB = b(context, null);
                    if (zcB != null) {
                        f1892a = new AppMeasurement(zcB);
                    } else {
                        f1892a = new AppMeasurement(_b.a(context, null, null, null));
                    }
                }
            }
        }
        return f1892a;
    }

    private static Zc b(Context context, Bundle bundle) {
        try {
            return (Zc) Class.forName("com.google.firebase.analytics.FirebaseAnalytics").getDeclaredMethod("getScionFrontendApiImplementation", Context.class, Bundle.class).invoke(null, context, bundle);
        } catch (ClassNotFoundException | Exception unused) {
            return null;
        }
    }

    @Keep
    @Deprecated
    public static AppMeasurement getInstance(Context context) {
        return a(context, null, null);
    }

    public final void a(boolean z) {
        if (this.f1895d) {
            this.f1894c.a(z);
        } else {
            this.f1893b.u().b(z);
        }
    }

    @Keep
    public void beginAdUnitExposure(String str) {
        if (this.f1895d) {
            this.f1894c.a(str);
        } else {
            this.f1893b.H().a(str, this.f1893b.g().b());
        }
    }

    @Keep
    public void clearConditionalUserProperty(String str, String str2, Bundle bundle) {
        if (this.f1895d) {
            this.f1894c.a(str, str2, bundle);
        } else {
            this.f1893b.u().c(str, str2, bundle);
        }
    }

    @Keep
    protected void clearConditionalUserPropertyAs(String str, String str2, String str3, Bundle bundle) {
        if (this.f1895d) {
            throw new IllegalStateException("Unexpected call on client side");
        }
        this.f1893b.u().a(str, str2, str3, bundle);
        throw null;
    }

    @Keep
    public void endAdUnitExposure(String str) {
        if (this.f1895d) {
            this.f1894c.c(str);
        } else {
            this.f1893b.H().b(str, this.f1893b.g().b());
        }
    }

    @Keep
    public long generateEventId() {
        return this.f1895d ? this.f1894c.b() : this.f1893b.v().t();
    }

    @Keep
    public String getAppInstanceId() {
        return this.f1895d ? this.f1894c.x() : this.f1893b.u().H();
    }

    @Keep
    public List<ConditionalUserProperty> getConditionalUserProperties(String str, String str2) {
        List<Bundle> listA = this.f1895d ? this.f1894c.a(str, str2) : this.f1893b.u().a(str, str2);
        ArrayList arrayList = new ArrayList(listA == null ? 0 : listA.size());
        Iterator<Bundle> it = listA.iterator();
        while (it.hasNext()) {
            arrayList.add(new ConditionalUserProperty(it.next()));
        }
        return arrayList;
    }

    @Keep
    protected List<ConditionalUserProperty> getConditionalUserPropertiesAs(String str, String str2, String str3) {
        if (this.f1895d) {
            throw new IllegalStateException("Unexpected call on client side");
        }
        this.f1893b.u().a(str, str2, str3);
        throw null;
    }

    @Keep
    public String getCurrentScreenClass() {
        return this.f1895d ? this.f1894c.m() : this.f1893b.u().K();
    }

    @Keep
    public String getCurrentScreenName() {
        return this.f1895d ? this.f1894c.h() : this.f1893b.u().J();
    }

    @Keep
    public String getGmpAppId() {
        return this.f1895d ? this.f1894c.y() : this.f1893b.u().L();
    }

    @Keep
    public int getMaxUserProperties(String str) {
        if (this.f1895d) {
            return this.f1894c.b(str);
        }
        this.f1893b.u();
        r.b(str);
        return 25;
    }

    @Keep
    protected Map<String, Object> getUserProperties(String str, String str2, boolean z) {
        return this.f1895d ? this.f1894c.a(str, str2, z) : this.f1893b.u().a(str, str2, z);
    }

    @Keep
    protected Map<String, Object> getUserPropertiesAs(String str, String str2, String str3, boolean z) {
        if (this.f1895d) {
            throw new IllegalStateException("Unexpected call on client side");
        }
        this.f1893b.u().a(str, str2, str3, z);
        throw null;
    }

    @Keep
    public void logEventInternal(String str, String str2, Bundle bundle) {
        if (this.f1895d) {
            this.f1894c.b(str, str2, bundle);
        } else {
            this.f1893b.u().a(str, str2, bundle);
        }
    }

    @Keep
    public void setConditionalUserProperty(ConditionalUserProperty conditionalUserProperty) {
        r.a(conditionalUserProperty);
        if (this.f1895d) {
            this.f1894c.b(conditionalUserProperty.a());
        } else {
            this.f1893b.u().a(conditionalUserProperty.a());
        }
    }

    @Keep
    protected void setConditionalUserPropertyAs(ConditionalUserProperty conditionalUserProperty) {
        r.a(conditionalUserProperty);
        if (this.f1895d) {
            throw new IllegalStateException("Unexpected call on client side");
        }
        this.f1893b.u().b(conditionalUserProperty.a());
        throw null;
    }
}
