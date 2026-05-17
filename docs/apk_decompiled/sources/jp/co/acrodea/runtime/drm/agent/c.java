package jp.co.acrodea.runtime.drm.agent;

import java.io.File;
import java.io.IOException;
import jp.co.acrodea.drm.DRMGetInfo;
import jp.co.acrodea.drm.DRMSecurityException;
import org.apache.http.protocol.HTTP;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class c implements DRMGetInfo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f3331a;

    private c(a aVar) {
        this.f3331a = aVar;
    }

    /* synthetic */ c(a aVar, c cVar) {
        this(aVar);
    }

    @Override // jp.co.acrodea.drm.DRMGetInfo
    public String getDeviceId() throws DRMSecurityException {
        String deviceId = this.f3331a.f3323e != null ? this.f3331a.f3323e.getDeviceId() : this.f3331a.f3321c == 1 ? this.f3331a.h.a() : this.f3331a.h.b();
        if (deviceId == null) {
            if (this.f3331a.j) {
                try {
                    deviceId = new String(r.b(new File(this.f3331a.d(), "i.dat")), HTTP.UTF_8);
                } catch (IOException unused) {
                    deviceId = null;
                }
            }
        } else if (this.f3331a.j) {
            try {
                r.b(new File(this.f3331a.d(), "i.dat"), deviceId.getBytes(HTTP.UTF_8));
            } catch (IOException unused2) {
            }
        }
        if (deviceId != null) {
            return deviceId;
        }
        throw new DRMSecurityException("Cannot get Device ID");
    }
}
