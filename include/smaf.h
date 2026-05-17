#ifndef SMAF_H
#define SMAF_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include "../src/smaf_common.h"

#ifdef __cplusplus
extern "C" {
#endif

#define SMAF_MAX_VOICES        64
#define SMAF_SAMPLE_RATE     22050
#define SMAF_MAX_BLOCK_SAMPLES 1024

typedef enum {
    SMAF_STATE_IDLE,
    SMAF_STATE_LOADED,
    SMAF_STATE_PLAYING,
    SMAF_STATE_STOPPED
} smaf_state_t;

typedef struct smaf_player_s smaf_player_t;

smaf_result_t smaf_init(void);
smaf_player_t *smaf_player_create(uint32_t sample_rate);
void smaf_player_destroy(smaf_player_t *player);
smaf_result_t smaf_player_load(smaf_player_t *player, const uint8_t *data, size_t len);
smaf_result_t smaf_player_play(smaf_player_t *player);
smaf_result_t smaf_player_stop(smaf_player_t *player);
int smaf_player_render(smaf_player_t *player, int16_t *out_L, int16_t *out_R, int n_samples);
smaf_result_t smaf_player_unload(smaf_player_t *player);
smaf_state_t smaf_player_state(const smaf_player_t *player);
void smaf_shutdown(void);

#ifdef __cplusplus
}
#endif

#endif /* SMAF_H */
