/* FM synthesis test — generate a simple sine wave and FM tone as WAV */

#include "../include/smaf.h"
#include "../src/synth/synth.h"
#include "../src/audio/audio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define SAMPLE_RATE 22050
#define DURATION_SEC 2
#define NUM_SAMPLES (SAMPLE_RATE * DURATION_SEC)

/* Helper: check WAV amplitude and report */
static void check_amplitude(const char *label, const int16_t *buf_L, const int16_t *buf_R, int n) {
    int32_t max_L = 0, max_R = 0;
    int64_t sum_sq = 0;
    for (int i = 0; i < n; i++) {
        int32_t aL = buf_L[i] < 0 ? -buf_L[i] : buf_L[i];
        int32_t aR = buf_R[i] < 0 ? -buf_R[i] : buf_R[i];
        if (aL > max_L) max_L = aL;
        if (aR > max_R) max_R = aR;
        sum_sq += (int64_t)buf_L[i] * buf_L[i] + (int64_t)buf_R[i] * buf_R[i];
    }
    double rms = sqrt((double)sum_sq / (n * 2));
    int32_t max_both = max_L > max_R ? max_L : max_R;
    printf("  [%s] peak=%d RMS=%.1f %s\n", label, max_both, rms,
           max_both > 100 ? "OK" : "SILENT/FAIL");
}

/* Test using the public API: create player, load, render */
int test_fm_basic(void) {
    printf("=== Test: FM Basic (A4, Alg0, 2s) ===\n");

    smaf_init();
    smaf_player_t *player = smaf_player_create(SAMPLE_RATE);
    if (!player) { printf("  FAIL: cannot create player\n"); return 1; }

    /* Use smaf_init/shutdown */
    smaf_synth_t synth;
    smaf_synth_init(&synth, SAMPLE_RATE);

    /* Set up voice on channel 0 — a simple 2-op FM voice for A4 */
    /* Voice data matching vm35fm.go layout:
       byte 0: DrumKey=0
       byte 1: PANPOT(5)/BO(2) = 0b01111000 = 0x78 (panpot=15, bo=1)
       byte 2: LFO(2)/PE(1)/ALG(3) = 0b10000000 = 0x80 (LFO=2, alg=0)
       Op1 (7 bytes): SR=0/XOF=0/SUS=0/KSR=0, RR=10/DR=5, AR=15/SL=12, TL=0/KSL=0, DAM=0/EAM=0/DVB=0/EVB=0, MULTI=1/DT=0, WS=0/FB=0
       Op2 (7 bytes): SR=0/XOF=0/SUS=0/KSR=0, RR=10/DR=5, AR=15/SL=12, TL=20/KSL=0, DAM=0/EAM=0/DVB=0/EVB=0, MULTI=1/DT=0, WS=0/FB=0 */
    uint8_t voice[] = {
        0x00,        /* DrumKey */
        0x78,        /* PANPOT=15, BO=1 */
        0x80,        /* LFO=2, ALG=0 */
        /* Op1: SR/XOF/SUS/KSR, RR/DR, AR/SL, TL/KSL, DAM/EAM/DVB/EVB, MULTI/DT, WS/FB */
        0x00, 0xA5, 0xFC, 0x00, 0x00, 0x01, 0x00,
        /* Op2: same but TL=20 */
        0x00, 0xA5, 0xFC, 0x28, 0x00, 0x01, 0x00,
    };

    smaf_fm_set_voice(&synth, 0, voice, sizeof(voice));
    smaf_fm_set_volume(&synth, 0, 100);
    smaf_fm_set_pan(&synth, 0, 64);
    smaf_fm_note_on(&synth, 0, 69, 100); /* A4, velocity=100 */

    /* Render */
    int16_t *buf_L = calloc(NUM_SAMPLES, sizeof(int16_t));
    int16_t *buf_R = calloc(NUM_SAMPLES, sizeof(int16_t));
    int32_t *mix_L = calloc(NUM_SAMPLES, sizeof(int32_t));
    int32_t *mix_R = calloc(NUM_SAMPLES, sizeof(int32_t));

    /* Render in blocks */
    int block = 1024;
    int pos = 0;
    while (pos < NUM_SAMPLES) {
        int n = (pos + block > NUM_SAMPLES) ? NUM_SAMPLES - pos : block;
        smaf_synth_render(&synth, mix_L + pos, mix_R + pos, n);
        pos += n;
    }

    /* Clamp to 16-bit */
    for (int i = 0; i < NUM_SAMPLES; i++) {
        int32_t sL = mix_L[i];
        int32_t sR = mix_R[i];
        if (sL > 32767) sL = 32767;
        if (sL < -32768) sL = -32768;
        if (sR > 32767) sR = 32767;
        if (sR < -32768) sR = -32768;
        buf_L[i] = (int16_t)sL;
        buf_R[i] = (int16_t)sR;
    }

    audio_write_wav("test_fm_basic.wav", buf_L, buf_R, NUM_SAMPLES, SAMPLE_RATE);
    check_amplitude("FM Basic A4", buf_L, buf_R, NUM_SAMPLES);

    smaf_synth_shutdown(&synth);
    smaf_player_destroy(player);
    free(buf_L); free(buf_R); free(mix_L); free(mix_R);
    return 0;
}

/* Test wave table generation */
int test_wave_table(void) {
    printf("=== Test: Wave Tables ===\n");
    smaf_synth_init_tables(22050);

    const int16_t *sine = smaf_get_sine_table();
    if (!sine) { printf("  FAIL: sine table is NULL\n"); return 1; }

    if (sine[0] < -100 || sine[0] > 100) {
        printf("  FAIL: sine[0] = %d (expected ~0)\n", sine[0]);
        return 1;
    }

    if (sine[256] < 32000) {
        printf("  FAIL: sine[256] = %d (expected ~32767)\n", sine[256]);
        return 1;
    }

    printf("  PASS: sine table verified (sine[0]=%d, sine[256]=%d)\n", sine[0], sine[256]);

    uint32_t a4_phase = smaf_get_note_phase(69);
    double expected = 440.0 * 4294967296.0 / 22050.0;
    uint32_t expected_phase = (uint32_t)expected;
    if (a4_phase < expected_phase - 100 || a4_phase > expected_phase + 100) {
        printf("  FAIL: A4 phase = %u (expected ~%u)\n", a4_phase, expected_phase);
        return 1;
    }
    printf("  PASS: A4 phase = %u\n", a4_phase);

    return 0;
}

/* Test all 8 algorithms via public API */
int test_algorithms(void) {
    printf("=== Test: 8 FM Algorithms ===\n");

    int n = 22050; /* 1 second */
    int32_t *mix_L = calloc(n, sizeof(int32_t));
    int32_t *mix_R = calloc(n, sizeof(int32_t));
    int16_t *buf_L = calloc(n, sizeof(int16_t));
    int16_t *buf_R = calloc(n, sizeof(int16_t));

    const char *alg_names[8] = {
        "Alg0:2opFM", "Alg1:2opPar", "Alg2:4opPar", "Alg3:3opCas+Car",
        "Alg4:4opCas", "Alg5:DualPair", "Alg6:Par+Cas", "Alg7:3par+Cas"
    };

    for (int alg = 0; alg < 8; alg++) {
        smaf_synth_t synth;
        smaf_synth_init(&synth, 22050);

        int num_ops = (alg < 2) ? 2 : 4;
        int voice_len = 3 + num_ops * 7;
        uint8_t voice[3 + 4 * 7];
        memset(voice, 0, sizeof(voice));

        voice[0] = 0x00; /* DrumKey */
        voice[1] = 0x78; /* PANPOT=15, BO=1 */
        voice[2] = 0x80 | (alg & 0x07); /* LFO=2, ALG */

        /* Set up operators with fast attack, reasonable TL */
        for (int i = 0; i < num_ops; i++) {
            int off = 3 + i * 7;
            voice[off + 0] = 0x00; /* SR=0, XOF=0, SUS=0, KSR=0 */
            voice[off + 1] = 0xA5; /* RR=10, DR=5 */
            voice[off + 2] = 0xFC; /* AR=15, SL=12 */
            voice[off + 3] = (i * 8) << 1; /* TL = i*8 (different per op) */
            voice[off + 4] = 0x00;
            voice[off + 5] = 0x01; /* MULTI=1, DT=0 */
            voice[off + 6] = 0x00; /* WS=0, FB=0 */
        }

        smaf_fm_set_voice(&synth, 0, voice, voice_len);
        smaf_fm_set_volume(&synth, 0, 100);
        smaf_fm_set_pan(&synth, 0, 64);
        smaf_fm_note_on(&synth, 0, 60, 100); /* C4 */

        memset(mix_L, 0, n * sizeof(int32_t));
        memset(mix_R, 0, n * sizeof(int32_t));
        smaf_synth_render(&synth, mix_L, mix_R, n);

        /* Clamp */
        for (int i = 0; i < n; i++) {
            if (mix_L[i] > 32767) mix_L[i] = 32767;
            if (mix_L[i] < -32768) mix_L[i] = -32768;
            if (mix_R[i] > 32767) mix_R[i] = 32767;
            if (mix_R[i] < -32768) mix_R[i] = -32768;
            buf_L[i] = (int16_t)mix_L[i];
            buf_R[i] = (int16_t)mix_R[i];
        }

        check_amplitude(alg_names[alg], buf_L, buf_R, n);

        char filename[64];
        snprintf(filename, sizeof(filename), "test_alg%d.wav", alg);
        audio_write_wav(filename, buf_L, buf_R, n, 22050);

        smaf_synth_shutdown(&synth);
    }

    free(mix_L); free(mix_R); free(buf_L); free(buf_R);
    return 0;
}

int main(void) {
    int failures = 0;
    failures += test_wave_table();
    failures += test_fm_basic();
    failures += test_algorithms();
    printf("\nTotal failures: %d\n", failures);
    return failures;
}
