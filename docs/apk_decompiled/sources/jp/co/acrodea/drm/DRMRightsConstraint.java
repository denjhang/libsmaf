package jp.co.acrodea.drm;

import java.util.Date;
import java.util.Map;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public abstract class DRMRightsConstraint {
    public static final int TYPE_FLAG_COUNT = 1;
    public static final int TYPE_FLAG_DURATION = 4;
    public static final int TYPE_FLAG_INTERVAL = 2;
    public static final int TYPE_UNLIMITED = 0;
    protected int type = 0;

    protected DRMRightsConstraint() {
    }

    public abstract String getDuration();

    public abstract Date getEndDate();

    public abstract int getInitialCount();

    public abstract Map<String, String> getOptions();

    public abstract int getRemainCount();

    public abstract Date getStartDate();

    public int getType() {
        return this.type;
    }

    public abstract boolean isValid();
}
