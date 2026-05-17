package jp.co.acrodea.runtime.drm.agent;

import java.io.IOException;
import java.util.Collections;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import jp.co.acrodea.drm.DRMRightsConstraint;
import jp.co.acrodea.runtime.drm.v;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class d extends DRMRightsConstraint {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f3332a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    private Date f3333b;

    /* JADX INFO: renamed from: c, reason: collision with root package name */
    private int f3334c;

    /* JADX INFO: renamed from: d, reason: collision with root package name */
    private Date f3335d = new Date();

    /* JADX INFO: renamed from: e, reason: collision with root package name */
    private int f3336e;

    /* JADX INFO: renamed from: f, reason: collision with root package name */
    private Date f3337f;
    private Date g;
    private String h;
    private Map<String, String> i;

    public d(v vVar, l lVar) {
        int i;
        Date dateF;
        Date dateE;
        if (lVar != null) {
            this.f3332a = !lVar.f3367a;
            this.f3333b = lVar.f3368b;
            i = lVar.f3369c;
        } else {
            this.f3332a = true;
            this.f3333b = null;
            i = 0;
        }
        this.f3334c = i;
        if (vVar != null) {
            this.type = vVar.c();
        }
        if (this.f3333b == null) {
            this.f3333b = this.f3335d;
        }
        this.f3336e = -1;
        this.f3337f = null;
        this.g = null;
        this.h = null;
        this.i = null;
        if (vVar != null) {
            if ((this.type & 1) != 0) {
                this.f3336e = vVar.d();
            }
            if ((this.type & 6) != 0) {
                Date date = new Date(0L);
                if ((this.type & 2) != 0 && (dateE = vVar.e()) != null && date.compareTo(dateE) < 0) {
                    date = dateE;
                }
                if ((this.type & 4) != 0 && date.compareTo(this.f3333b) < 0) {
                    date = this.f3333b;
                }
                this.f3337f = date;
            }
            if ((this.type & 6) != 0) {
                Date date2 = new Date(Long.MAX_VALUE);
                if ((this.type & 2) != 0 && (dateF = vVar.f()) != null && date2.compareTo(dateF) > 0) {
                    date2 = dateF;
                }
                if ((this.type & 4) != 0) {
                    try {
                        Date dateA = r.a(this.f3333b, vVar.g());
                        if (date2.compareTo(dateA) > 0) {
                            date2 = dateA;
                        }
                    } catch (IOException unused) {
                        date2 = null;
                    }
                }
                this.g = date2;
            }
            if ((this.type & 4) != 0) {
                this.h = vVar.g();
            }
            Map<String, String> mapH = vVar.h();
            if (mapH != null) {
                this.i = Collections.unmodifiableMap(new HashMap(mapH));
            }
        }
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public String getDuration() {
        return this.h;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public Date getEndDate() {
        return this.g;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public int getInitialCount() {
        return this.f3336e;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public Map<String, String> getOptions() {
        return this.i;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public int getRemainCount() {
        int initialCount = getInitialCount();
        if (initialCount <= 0) {
            return initialCount;
        }
        int i = initialCount - this.f3334c;
        if (i <= 0) {
            return 0;
        }
        return i;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public Date getStartDate() {
        return this.f3337f;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public boolean isValid() {
        if (!this.f3332a) {
            return false;
        }
        if ((this.type & 1) != 0 && getRemainCount() == 0) {
            return false;
        }
        if ((this.type & 6) != 0) {
            Date startDate = getStartDate();
            Date endDate = getEndDate();
            Date date = new Date();
            if (date.compareTo(startDate) < 0 || date.compareTo(endDate) > 0) {
                return false;
            }
        }
        return true;
    }
}
