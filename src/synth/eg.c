#include "synth.h"
#include <stdlib.h>

/* EG rate to per-tick increment.
   MA-7 uses a function pointer state machine, but the effect is:
   - ATTACK: ramp from 0 to 32767 at rate ar
   - DECAY: ramp from peak to sustain_level at rate dr
   - SUSTAIN: hold at sustain_level, decay at sr
   - RELEASE: ramp from current to 0 at rate rr
*/
static const int16_t eg_rate_to_inc[16] = {
       0,     /* 0: no change */
      50,     /* 1 */
     100,     /* 2 */
     200,     /* 3 */
     400,     /* 4 */
     600,     /* 5 */
     800,     /* 6 */
    1000,     /* 7 */
    1200,     /* 8 */
    1500,     /* 9 */
    1800,     /* 10 */
    2200,     /* 11 */
    2700,     /* 12 */
    3200,     /* 13 */
    4000,     /* 14 */
    32767,    /* 15: instant */
};

/* Sustain level mapping: sl 0-15 → Q15 value (0 to -0dB)
   sl=0 = -48dB (very quiet), sl=15 = 0dB (full) */
static const int16_t eg_sl_table[16] = {
        0,    /* sl=0: silent */
       43,
       86,
      172,
      344,
      516,
      688,
      860,
     1032,
     1290,
     1548,
     1806,
     2168,
     2530,
     3093,
     32767,  /* sl=15: full */
};

void smaf_eg_init(smaf_eg_t *eg, uint8_t ar, uint8_t dr, uint8_t sr, uint8_t rr, uint8_t sl) {
    eg->ar = ar;
    eg->dr = dr;
    eg->sr = sr;
    eg->rr = rr;
    eg->sl = sl;
    eg->current = 0;
    eg->target = 0;
    eg->phase = EG_RELEASE;
}

void smaf_eg_key_on(smaf_eg_t *eg) {
    eg->phase = EG_ATTACK;
    eg->current = 0;
    eg->target = 32767; /* peak */
}

void smaf_eg_key_off(smaf_eg_t *eg) {
    eg->phase = EG_RELEASE;
    eg->target = 0;
}

void smaf_eg_tick(smaf_eg_t *eg) {
    int16_t inc;
    switch (eg->phase) {
        case EG_ATTACK:
            inc = eg_rate_to_inc[eg->ar & 0xF];
            if (inc == 0) break;
            eg->current += inc;
            if (eg->current >= 32767) {
                eg->current = 32767;
                eg->phase = EG_DECAY;
                eg->target = eg_sl_table[eg->sl & 0xF];
            }
            break;

        case EG_DECAY:
            inc = eg_rate_to_inc[eg->dr & 0xF];
            if (inc == 0) { eg->current = eg->target; break; }
            eg->current -= inc;
            if (eg->current <= eg->target) {
                eg->current = eg->target;
                eg->phase = EG_SUSTAIN;
            }
            break;

        case EG_SUSTAIN:
            /* Slow decay towards 0 using sr rate */
            if (eg->sr == 0) break;
            inc = eg_rate_to_inc[eg->sr & 0xF];
            eg->current -= (inc >> 4); /* much slower than decay */
            if (eg->current < 0) eg->current = 0;
            break;

        case EG_RELEASE:
            inc = eg_rate_to_inc[eg->rr & 0xF];
            if (inc == 0) { eg->current = 0; break; }
            eg->current -= inc;
            if (eg->current <= 0) {
                eg->current = 0;
            }
            break;
    }
}
