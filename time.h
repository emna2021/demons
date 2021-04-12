#ifndef time_H
#define time_H
#include <SDL/SDL_image.h>
#include <stdbool.h>

void affichertemps (int * temps); 
SDL_Surface* chargerImage(char* imagetemps);
void startTimer(Temps* t);
void stopTimer(Temps* t)



#endif

