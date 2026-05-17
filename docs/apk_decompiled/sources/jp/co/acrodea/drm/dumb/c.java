package jp.co.acrodea.drm.dumb;

import java.util.Date;
import java.util.Map;
import jp.co.acrodea.drm.DRMRightsConstraint;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c extends DRMRightsConstraint {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f3306a;

    public c(a aVar) {
        this.f3306a = aVar;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public String getDuration() {
        return null;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public Date getEndDate() {
        return null;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public int getInitialCount() {
        return -1;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public Map<String, String> getOptions() {
        return null;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public int getRemainCount() {
        return -1;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public Date getStartDate() {
        return null;
    }

    @Override // jp.co.acrodea.drm.DRMRightsConstraint
    public boolean isValid() {
        return true;
    }
}
