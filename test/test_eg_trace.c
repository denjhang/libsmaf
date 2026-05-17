/* Detailed EG tracing test */
#include "../src/synth/synth.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    smaf_synth_t synth;
    uint32_t sr = 22050;
    smaf_synth_init(&synth, sr);

    uint8_t voice[] = {
        0x00,        /* DrumKey */
        0x78,        /* PANPOT=15, BO=0 */
        0x80,        /* LFO=2, ALG=0 */
        /* Op1: same as test_debug */
        0x00, 0xA5, 0xFC, 0x00, 0x00, 0x01, 0x00,
        /* Op2: same */
        0x00, 0xA5, 0xFC, 0x00, 0x00, 0x01, 0x00,
    };

    smaf_fm_set_voice(&synth, 0, voice, sizeof(voice));
    smaf_fm_set_volume(&synth, 0, 100);
    smaf_fm_set_pan(&synth, 0, 64);
    smaf_fm_note_on(&synth, 0, 69, 100);

    /* Print all operator state after note_on */
    for (int i = 0; i < 2; i++) {
        smaf_fm_op_t *op = &synth.fm[0].op[i];
        printf("Op%d after note_on:\n", i);
        printf("  ar=%d dr=%d sr=%d rr=%d sl=%d\n", op->ar, op->dr, op->sr, op->rr, op->sl);
        printf("  ar_inc=%d dr_coef=%d sr_coef=%d rr_coef=%d\n",
               op->ar_inc, op->dr_coef, op->sr_coef, op->rr_coef);
        printf("  sustain_level=%d current_level=%d eg_stage=%d\n",
               op->sustain_level, op->current_level, op->eg_stage);
        printf("  ksl_tl_coef=%d tl_coef=%d\n", op->ksl_tl_coef, op->tl_coef);
        printf("  multi=%d dt=%d ksr=%d\n", op->multi, op->dt, op->ksr);
    }

    /* Render and trace EG every 100 samples */
    int32_t buf_L[100], buf_R[100];
    for (int block = 0; block < 50; block++) {
        memset(buf_L, 0, sizeof(buf_L));
        memset(buf_R, 0, sizeof(buf_R));
        smaf_synth_render(&synth, buf_L, buf_R, 100);

        if (block < 5 || block % 10 == 0) {
            smaf_fm_op_t *op0 = &synth.fm[0].op[0];
            smaf_fm_op_t *op1 = &synth.fm[0].op[1];
            printf("[%4d-%4d] op0: stage=%d level=%d  op1: stage=%d level=%d  max_L=%d\n",
                   block*100, block*100+99,
                   op0->eg_stage, op0->current_level,
                   op1->eg_stage, op1->current_level,
                   buf_L[0] > 0 ? buf_L[0] : -buf_L[0]);
        }
    }

    smaf_synth_shutdown(&synth);
    return 0;
}
