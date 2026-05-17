package jp.co.acrodea.drm;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class DRMDeviceDoesNotMatchException extends DRMGeneralException {
    private static final long serialVersionUID = 1;

    public DRMDeviceDoesNotMatchException() {
    }

    public DRMDeviceDoesNotMatchException(String str) {
        super(str);
    }

    public DRMDeviceDoesNotMatchException(String str, Throwable th) {
        super(str, th);
    }

    public DRMDeviceDoesNotMatchException(Throwable th) {
        super(th);
    }
}
