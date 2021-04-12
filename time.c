#include "time.h"

SDL_Surface* chargerImage(char* imagetemps)
{
    SDL_Surface* image;

    image = IMG_Load(imagetemps);
    if (!image) {
        printf("Failed to load \"%s\"\n", imagetemps);
        printf("IMG_Load: %s\n", IMG_GetError());
    }

    return image;
}
   

void startTimer(Temps* t)
{
    t->isStarted = true;
    t->isPaused = false;
    t->startTime = SDL_GetTicks();
    t->pausedTime = 0;
}

void stopTimer(Temps* t)
{
    t->isStarted = false;
    t->isPaused = false;
    t->startTime = 0;
    t->pausedTime = 0;
}

void pauseTimer(Temps* t)
{
    if (t->isStarted && !t->isPaused) {
        t->isPaused = true;

        t->pausedTime = SDL_GetTicks() - t->startTime;
        t->startTime = 0;
    }
}

void continueTimer(Temps* t)
{
    if (t->isStarted && t->isPaused) {
        t->isPaused = false;
        t->startTime = SDL_GetTicks() - t->pausedTime;
        t->pausedTime = 0;
    }
}


