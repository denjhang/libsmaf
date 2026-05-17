#include "../include/smaf.h"
#include "synth/synth.h"
#include "parser/parser.h"
#include "sequencer/seq.h"
#include "audio/audio.h"
#include <stdlib.h>
#include <string.h>

struct smaf_player_s {
    smaf_state_t   state;
    uint32_t       sample_rate;
    smaf_synth_t   synth;
    smaf_file_t    mf;
    uint8_t       *file_data;     /* owned copy of MMF data */
    size_t         file_len;
    seq_state_t    seq;

    int32_t       *mix_buf_L;
    int32_t       *mix_buf_R;
    int16_t       *out_buf_L;
    int16_t       *out_buf_R;
    int            buf_size;
};

static bool smaf_initialized = false;

smaf_result_t smaf_init(void) {
    smaf_initialized = true;
    return SMAF_OK;
}

smaf_player_t *smaf_player_create(uint32_t sample_rate) {
    if (!smaf_initialized) return NULL;

    smaf_player_t *p = calloc(1, sizeof(smaf_player_t));
    if (!p) return NULL;

    p->sample_rate = sample_rate ? sample_rate : SMAF_SAMPLE_RATE;
    p->state = SMAF_STATE_IDLE;

    /* Allocate render buffers */
    p->buf_size = SMAF_MAX_BLOCK_SAMPLES;
    p->mix_buf_L = calloc(p->buf_size, sizeof(int32_t));
    p->mix_buf_R = calloc(p->buf_size, sizeof(int32_t));
    p->out_buf_L = calloc(p->buf_size, sizeof(int16_t));
    p->out_buf_R = calloc(p->buf_size, sizeof(int16_t));

    if (!p->mix_buf_L || !p->mix_buf_R || !p->out_buf_L || !p->out_buf_R) {
        smaf_player_destroy(p);
        return NULL;
    }

    smaf_synth_init(&p->synth, p->sample_rate);
    return p;
}

void smaf_player_destroy(smaf_player_t *player) {
    if (!player) return;
    smaf_synth_shutdown(&player->synth);
    smaf_parse_free(&player->mf);
    free(player->file_data);
    free(player->mix_buf_L);
    free(player->mix_buf_R);
    free(player->out_buf_L);
    free(player->out_buf_R);
    free(player);
}

smaf_result_t smaf_player_load(smaf_player_t *player, const uint8_t *data, size_t len) {
    if (!player || !data || len < 12) return SMAF_ERR_INVALID;
    if (player->state == SMAF_STATE_PLAYING) return SMAF_ERR_BUSY;

    /* Free previous data */
    smaf_parse_free(&player->mf);
    free(player->file_data);
    player->file_data = NULL;

    /* Copy file data */
    player->file_data = malloc(len);
    if (!player->file_data) return SMAF_ERR_MEMORY;
    memcpy(player->file_data, data, len);
    player->file_len = len;

    /* Parse MMF */
    smaf_result_t res = smaf_parse(&player->mf, player->file_data, len);
    if (res != SMAF_OK) {
        free(player->file_data);
        player->file_data = NULL;
        return res;
    }

    player->state = SMAF_STATE_LOADED;
    return SMAF_OK;
}

smaf_result_t smaf_player_play(smaf_player_t *player) {
    if (!player || player->state != SMAF_STATE_LOADED) return SMAF_ERR_INVALID;
    if (player->mf.num_tracks == 0) return SMAF_ERR_PARSE;

    /* Use first track */
    seq_init(&player->seq, &player->synth, &player->mf.tracks[0], player->sample_rate);
    player->state = SMAF_STATE_PLAYING;
    return SMAF_OK;
}

smaf_result_t smaf_player_stop(smaf_player_t *player) {
    if (!player) return SMAF_ERR_INVALID;
    player->state = SMAF_STATE_STOPPED;
    return SMAF_OK;
}

int smaf_player_render(smaf_player_t *player, int16_t *out_L, int16_t *out_R, int n_samples) {
    if (!player || !out_L || !out_R || n_samples <= 0) return -1;
    if (player->state != SMAF_STATE_PLAYING) return -1;

    int processed = 0;
    int remaining = n_samples;

    while (remaining > 0 && player->state == SMAF_STATE_PLAYING) {
        int block = (remaining > player->buf_size) ? player->buf_size : remaining;

        /* Clear mix buffers */
        memset(player->mix_buf_L, 0, block * sizeof(int32_t));
        memset(player->mix_buf_R, 0, block * sizeof(int32_t));

        /* Advance sequencer */
        seq_advance(&player->seq, block);

        /* Render synth into mix buffers */
        smaf_synth_render(&player->synth, player->mix_buf_L, player->mix_buf_R, block);

        /* Mix down to 16-bit */
        for (int i = 0; i < block; i++) {
            int32_t sL = player->mix_buf_L[i];
            int32_t sR = player->mix_buf_R[i];
            if (sL > 32767) sL = 32767;
            if (sL < -32768) sL = -32768;
            if (sR > 32767) sR = 32767;
            if (sR < -32768) sR = -32768;
            out_L[processed + i] = (int16_t)sL;
            out_R[processed + i] = (int16_t)sR;
        }

        processed += block;
        remaining -= block;

        /* Check end of track */
        if (seq_is_done(&player->seq)) {
            player->state = SMAF_STATE_STOPPED;
        }
    }

    return processed;
}

smaf_result_t smaf_player_unload(smaf_player_t *player) {
    if (!player) return SMAF_ERR_INVALID;
    if (player->state == SMAF_STATE_PLAYING) smaf_player_stop(player);

    smaf_parse_free(&player->mf);
    free(player->file_data);
    player->file_data = NULL;
    player->file_len = 0;
    player->state = SMAF_STATE_IDLE;
    return SMAF_OK;
}

smaf_state_t smaf_player_state(const smaf_player_t *player) {
    return player ? player->state : SMAF_STATE_IDLE;
}

void smaf_shutdown(void) {
    smaf_initialized = false;
}
