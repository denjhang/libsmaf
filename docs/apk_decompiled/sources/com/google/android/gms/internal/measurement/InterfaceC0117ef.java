package com.google.android.gms.internal.measurement;

import android.os.Bundle;
import android.os.IInterface;
import java.util.Map;

/* JADX INFO: renamed from: com.google.android.gms.internal.measurement.ef, reason: case insensitive filesystem */
/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public interface InterfaceC0117ef extends IInterface {
    void beginAdUnitExposure(String str, long j);

    void clearConditionalUserProperty(String str, String str2, Bundle bundle);

    void endAdUnitExposure(String str, long j);

    void generateEventId(Ef ef);

    void getAppInstanceId(Ef ef);

    void getCachedAppInstanceId(Ef ef);

    void getConditionalUserProperties(String str, String str2, Ef ef);

    void getCurrentScreenClass(Ef ef);

    void getCurrentScreenName(Ef ef);

    void getGmpAppId(Ef ef);

    void getMaxUserProperties(String str, Ef ef);

    void getTestFlag(Ef ef, int i);

    void getUserProperties(String str, String str2, boolean z, Ef ef);

    void initForTests(Map map);

    void initialize(c.a.a.a.c.a aVar, zzv zzvVar, long j);

    void isDataCollectionEnabled(Ef ef);

    void logEvent(String str, String str2, Bundle bundle, boolean z, boolean z2, long j);

    void logEventAndBundle(String str, String str2, Bundle bundle, Ef ef, long j);

    void logHealthData(int i, String str, c.a.a.a.c.a aVar, c.a.a.a.c.a aVar2, c.a.a.a.c.a aVar3);

    void onActivityCreated(c.a.a.a.c.a aVar, Bundle bundle, long j);

    void onActivityDestroyed(c.a.a.a.c.a aVar, long j);

    void onActivityPaused(c.a.a.a.c.a aVar, long j);

    void onActivityResumed(c.a.a.a.c.a aVar, long j);

    void onActivitySaveInstanceState(c.a.a.a.c.a aVar, Ef ef, long j);

    void onActivityStarted(c.a.a.a.c.a aVar, long j);

    void onActivityStopped(c.a.a.a.c.a aVar, long j);

    void performAction(Bundle bundle, Ef ef, long j);

    void registerOnMeasurementEventListener(If r1);

    void resetAnalyticsData(long j);

    void setConditionalUserProperty(Bundle bundle, long j);

    void setCurrentScreen(c.a.a.a.c.a aVar, String str, String str2, long j);

    void setDataCollectionEnabled(boolean z);

    void setEventInterceptor(If r1);

    void setInstanceIdProvider(Jf jf);

    void setMeasurementEnabled(boolean z, long j);

    void setMinimumSessionDuration(long j);

    void setSessionTimeoutDuration(long j);

    void setUserId(String str, long j);

    void setUserProperty(String str, String str2, c.a.a.a.c.a aVar, boolean z, long j);

    void unregisterOnMeasurementEventListener(If r1);
}
