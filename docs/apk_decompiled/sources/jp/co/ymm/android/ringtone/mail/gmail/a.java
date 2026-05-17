package jp.co.ymm.android.ringtone.mail.gmail;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f3628a;

    /* JADX INFO: renamed from: b, reason: collision with root package name */
    public int f3629b;

    public a(String str, int i) {
        this.f3628a = str;
        this.f3629b = i;
    }

    public boolean a(String str) {
        return this.f3628a.equals(str);
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || !(obj instanceof a)) {
            return false;
        }
        a aVar = (a) obj;
        String str = this.f3628a;
        if (str == null) {
            if (aVar.f3628a != null) {
                return false;
            }
        } else if (!str.equals(aVar.f3628a)) {
            return false;
        }
        return true;
    }

    public int hashCode() {
        String str = this.f3628a;
        return 31 + (str == null ? 0 : str.hashCode());
    }

    public String toString() {
        return String.valueOf(this.f3629b) + "-" + this.f3628a;
    }
}
