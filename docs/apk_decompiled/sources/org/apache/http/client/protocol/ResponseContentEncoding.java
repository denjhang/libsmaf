package org.apache.http.client.protocol;

import java.util.Locale;
import org.apache.http.Header;
import org.apache.http.HeaderElement;
import org.apache.http.HttpEntity;
import org.apache.http.HttpException;
import org.apache.http.HttpResponse;
import org.apache.http.HttpResponseInterceptor;
import org.apache.http.annotation.Immutable;
import org.apache.http.client.entity.DeflateDecompressingEntity;
import org.apache.http.client.entity.GzipDecompressingEntity;
import org.apache.http.protocol.HTTP;
import org.apache.http.protocol.HttpContext;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@Immutable
public class ResponseContentEncoding implements HttpResponseInterceptor {
    @Override // org.apache.http.HttpResponseInterceptor
    public void process(HttpResponse httpResponse, HttpContext httpContext) throws HttpException {
        Header contentEncoding;
        HttpEntity gzipDecompressingEntity;
        HttpEntity entity = httpResponse.getEntity();
        if (entity == null || (contentEncoding = entity.getContentEncoding()) == null) {
            return;
        }
        HeaderElement[] elements = contentEncoding.getElements();
        if (elements.length > 0) {
            HeaderElement headerElement = elements[0];
            String lowerCase = headerElement.getName().toLowerCase(Locale.US);
            if ("gzip".equals(lowerCase) || "x-gzip".equals(lowerCase)) {
                gzipDecompressingEntity = new GzipDecompressingEntity(httpResponse.getEntity());
            } else {
                if (!"deflate".equals(lowerCase)) {
                    if (HTTP.IDENTITY_CODING.equals(lowerCase)) {
                        return;
                    }
                    throw new HttpException("Unsupported Content-Coding: " + headerElement.getName());
                }
                gzipDecompressingEntity = new DeflateDecompressingEntity(httpResponse.getEntity());
            }
            httpResponse.setEntity(gzipDecompressingEntity);
        }
    }
}
