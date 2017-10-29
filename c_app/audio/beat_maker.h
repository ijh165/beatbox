#ifndef BEAT_MAKER_H
#define BEAT_MAKER_H

#define BEATMAKER_MIN_TEMPO 60
#define BEATMAKER_MAX_TEMPO 300

typedef enum {
	NONE,
	STANDARD_ROCK,
	DEATH_METAL
} mode_t;

void BeatMaker_init();

void BeatMaker_setMode(mode_t newBeatMode);
_Bool BeatMaker_setTempo(int newTempo);


void BeatMaker_cleanup();

#endif