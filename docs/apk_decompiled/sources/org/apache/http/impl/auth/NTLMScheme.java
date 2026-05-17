package org.apache.http.impl.auth;

import org.apache.http.Header;
import org.apache.http.HttpRequest;
import org.apache.http.annotation.NotThreadSafe;
import org.apache.http.auth.AuthenticationException;
import org.apache.http.auth.Credentials;
import org.apache.http.auth.InvalidCredentialsException;
import org.apache.http.auth.NTCredentials;
import org.apache.http.message.BufferedHeader;
import org.apache.http.util.CharArrayBuffer;

/* JADX INFO: loaded from: D:\working\vscode-projects\Reference_Project\RP2350-Reference\smaf_20260516\apk_extract\classes.dex */
@NotThreadSafe
public class NTLMScheme extends AuthSchemeBase {
    private String challenge;
    private final NTLMEngine engine;
    private State state;

    enum State {
        UNINITIATED,
        CHALLENGE_RECEIVED,
        MSG_TYPE1_GENERATED,
        MSG_TYPE2_RECEVIED,
        MSG_TYPE3_GENERATED,
        FAILED
    }

    public NTLMScheme(NTLMEngine nTLMEngine) {
        if (nTLMEngine == null) {
            throw new IllegalArgumentException("NTLM engine may not be null");
        }
        this.engine = nTLMEngine;
        this.state = State.UNINITIATED;
        this.challenge = null;
    }

    @Override // org.apache.http.auth.AuthScheme
    public Header authenticate(Credentials credentials, HttpRequest httpRequest) throws AuthenticationException {
        String strGenerateType1Msg;
        State state;
        try {
            NTCredentials nTCredentials = (NTCredentials) credentials;
            State state2 = this.state;
            if (state2 == State.CHALLENGE_RECEIVED || state2 == State.FAILED) {
                strGenerateType1Msg = this.engine.generateType1Msg(nTCredentials.getDomain(), nTCredentials.getWorkstation());
                state = State.MSG_TYPE1_GENERATED;
            } else {
                if (state2 != State.MSG_TYPE2_RECEVIED) {
                    throw new AuthenticationException("Unexpected state: " + this.state);
                }
                strGenerateType1Msg = this.engine.generateType3Msg(nTCredentials.getUserName(), nTCredentials.getPassword(), nTCredentials.getDomain(), nTCredentials.getWorkstation(), this.challenge);
                state = State.MSG_TYPE3_GENERATED;
            }
            this.state = state;
            CharArrayBuffer charArrayBuffer = new CharArrayBuffer(32);
            charArrayBuffer.append(isProxy() ? "Proxy-Authorization" : "Authorization");
            charArrayBuffer.append(": NTLM ");
            charArrayBuffer.append(strGenerateType1Msg);
            return new BufferedHeader(charArrayBuffer);
        } catch (ClassCastException unused) {
            throw new InvalidCredentialsException("Credentials cannot be used for NTLM authentication: " + credentials.getClass().getName());
        }
    }

    @Override // org.apache.http.auth.AuthScheme
    public String getParameter(String str) {
        return null;
    }

    @Override // org.apache.http.auth.AuthScheme
    public String getRealm() {
        return null;
    }

    @Override // org.apache.http.auth.AuthScheme
    public String getSchemeName() {
        return "ntlm";
    }

    @Override // org.apache.http.auth.AuthScheme
    public boolean isComplete() {
        State state = this.state;
        return state == State.MSG_TYPE3_GENERATED || state == State.FAILED;
    }

    @Override // org.apache.http.auth.AuthScheme
    public boolean isConnectionBased() {
        return true;
    }

    @Override // org.apache.http.impl.auth.AuthSchemeBase
    protected void parseChallenge(CharArrayBuffer charArrayBuffer, int i, int i2) {
        String strSubstringTrimmed = charArrayBuffer.substringTrimmed(i, i2);
        if (strSubstringTrimmed.length() == 0) {
            this.state = this.state == State.UNINITIATED ? State.CHALLENGE_RECEIVED : State.FAILED;
            strSubstringTrimmed = null;
        } else {
            this.state = State.MSG_TYPE2_RECEVIED;
        }
        this.challenge = strSubstringTrimmed;
    }
}
