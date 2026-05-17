/* Minimal diagnostic test — trace FM rendering step by step */

#include "../src/synth/synth.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    smaf_synth_t synth;
    uint32_t sr = 22050;
    smaf_synth_init(&synth, sr);

    /* Set up a minimal 2-op FM voice on channel 0 */
    uint8_t voice[] = {
        0x00,        /* DrumKey */
        0x78,        /* PANPOT=15, BO=1 */
        0x80,        /* LFO=2, ALG=0 */
        /* Op1 */
        0x00, 0xA5, 0xFC, 0x00, 0x00, 0x01, 0x00,
        /* Op2 */
        0x00, 0xA5, 0xFC, 0x00, 0x00, 0x01, 0x00,
    };

    printf("=== Before set_voice ===\n");
    smaf_fm_set_voice(&synth, 0, voice, sizeof(voice));

    printf("  ch->active=%d, algorithm=%d\n", synth.fm[0].active, synth.fm[0].algorithm);
    printf("  ch->pan_L=%d, pan_R=%d\n", synth.fm[0].pan_L, synth.fm[0].pan_R);
    printf("  ch->volume=%d, expression=%d\n", synth.fm[0].volume, synth.fm[0].expression);
    printf("  ch->attenuation=%d\n", synth.fm[0].attenuation);
    printf("  ch->feedback=%d, fb_coef1=%d\n", synth.fm[0].feedback, synth.fm[0].feedback_coef1);

    for (int i = 0; i < 2; i++) {
        smaf_fm_op_t *op = &synth.fm[0].op[i];
        printf("  Op%d: active=%d eg_stage=%d current_level=%d\n", i, op->active, op->eg_stage, op->current_level);
        printf("    ar=%d dr=%d sr=%d rr=%d sl=%d tl=%d tl_coef=%d\n",
               op->ar, op->dr, op->sr, op->rr, op->sl, op->tl, op->tl_coef);
        printf("    sustain_level=%d ksl=%d ksr=%d\n", op->sustain_level, op->ksl, op->ksr);
        printf("    multi=%d dt=%d ws=%d fb=%d wave=%p\n", op->multi, op->dt, op->ws, op->fb, (void*)op->wave);
        printf("    ar_inc=%d dr_coef=%d sr_coef=%d rr_coef=%d\n",
               op->ar_inc, op->dr_coef, op->sr_coef, op->rr_coef);
        printf("    ksl_tl_coef=%d\n", op->ksl_tl_coef);
    }

    printf("\n=== Before note_on ===\n");
    smaf_fm_set_volume(&synth, 0, 100);
    smaf_fm_set_pan(&synth, 0, 64);
    printf("  ch->volume=%d, pan_L=%d, pan_R=%d\n", synth.fm[0].volume, synth.fm[0].pan_L, synth.fm[0].pan_R);
    printf("  ch->attenuation=%d\n", synth.fm[0].attenuation);

    printf("\n=== note_on(69, 100) ===\n");
    smaf_fm_note_on(&synth, 0, 69, 100);

    printf("  ch->active=%d, keyon=%d, velocity=%d\n", synth.fm[0].active, synth.fm[0].keyon, synth.fm[0].velocity);
    printf("  ch->attenuation=%d\n", synth.fm[0].attenuation);

    for (int i = 0; i < 2; i++) {
        smaf_fm_op_t *op = &synth.fm[0].op[i];
        printf("  Op%d: active=%d eg_stage=%d current_level=%d\n", i, op->active, op->eg_stage, op->current_level);
        printf("    phase_inc=%u\n", op->phase_inc);
        printf("    ar_inc=%d dr_coef=%d\n", op->ar_inc, op->dr_coef);
        printf("    ksl_tl_coef=%d\n", op->ksl_tl_coef);
        printf("    wave=%p\n", (void*)op->wave);
    }

    /* Render a few samples manually to trace */
    printf("\n=== Rendering 10 samples manually ===\n");
    int32_t out_L[10] = {0};
    int32_t out_R[10] = {0};
    smaf_synth_render(&synth, out_L, out_R, 10);

    for (int s = 0; s < 10; s++) {
        printf("  s[%d]: L=%d R=%d\n", s, out_L[s], out_R[s]);
    }

    /* Check if channel went silent immediately */
    printf("\n=== After 10 samples ===\n");
    printf("  ch->active=%d, keyon=%d\n", synth.fm[0].active, synth.fm[0].keyon);
    for (int i = 0; i < 2; i++) {
        smaf_fm_op_t *op = &synth.fm[0].op[i];
        printf("  Op%d: eg_stage=%d current_level=%d ksl_tl_coef=%d\n",
               i, op->eg_stage, op->current_level, op->ksl_tl_coef);
    }

    /* Render more samples */
    printf("\n=== Rendering 1000 more samples ===\n");
    int32_t mix_L[1000] = {0};
    int32_t mix_R[1000] = {0};
    smaf_synth_render(&synth, mix_L, mix_R, 1000);

    int32_t max_L = 0, max_R = 0;
    for (int i = 0; i < 1000; i++) {
        if (mix_L[i] > max_L || mix_L[i] < -max_L) max_L = mix_L[i] < 0 ? -mix_L[i] : mix_L[i];
        if (mix_R[i] > max_R || mix_R[i] < -max_R) max_R = mix_R[i] < 0 ? -mix_R[i] : mix_R[i];
    }
    printf("  max_L=%d max_R=%d\n", max_L, max_R);

    printf("\n=== After 1010 total samples ===\n");
    printf("  ch->active=%d, keyon=%d\n", synth.fm[0].active, synth.fm[0].keyon);
    for (int i = 0; i < 2; i++) {
        smaf_fm_op_t *op = &synth.fm[0].op[i];
        printf("  Op%d: eg_stage=%d current_level=%d ksl_tl_coef=%d\n",
               i, op->eg_stage, op->current_level, op->ksl_tl_coef);
    }

    smaf_synth_shutdown(&synth);
    return 0;
}
