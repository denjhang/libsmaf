package jp.co.acrodea.runtime.drm;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
class AcDRME4PartInfo extends h implements Comparable<AcDRME4PartInfo> {
    long encode;
    long length;
    long offset;

    public AcDRME4PartInfo(long j, long j2, long j3) {
        this.offset = j;
        this.length = j2;
        this.encode = j3;
    }

    @Override // java.lang.Comparable
    public int compareTo(AcDRME4PartInfo acDRME4PartInfo) {
        long j = this.offset;
        long j2 = acDRME4PartInfo.offset;
        return j < j2 ? j + this.length <= j2 ? -1 : 0 : j2 + acDRME4PartInfo.length <= j ? 1 : 0;
    }

    public boolean equals(Object obj) {
        if (!(obj instanceof AcDRME4PartInfo)) {
            return false;
        }
        AcDRME4PartInfo acDRME4PartInfo = (AcDRME4PartInfo) obj;
        long j = this.offset;
        long j2 = acDRME4PartInfo.offset;
        return j < j2 ? j + this.length > j2 : j2 + acDRME4PartInfo.length > j;
    }
}
