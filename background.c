#include "background.h"
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>

void initialiser_backround (background *b)
{

b->background=IMG_Load("habs.png");
b->backg.x=0;
b->backg.y=0;
b->backg.w=b->background->w;
b->backg.h=b->background->h;
}



void afficher_background (SDL_Surface *screen,background *b)
{
SDL_BlitSurface(b->background,&b->camera,screen,NULL);


// background 
    background=IMG_Load("habs.png");
    if(background==NULL)
    {
        printf("Unable to load bitmap: %s\n",SDL_GetError());
        return 1;
    }


// musique
    if ( Mix_OpenAudio ( 44100, MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024) == -1 )
    {
        printf ( " %s", Mix_GetError());
    }
    Mix_AllocateChannels(1);
    music= Mix_LoadMUS("mk.mp3");
    Mix_PlayMusic(music,-1);

}



void scrolling_left (background *b);
{
if (b->bckg.x != 0)
    b->bckg.x--;
}

void scrolling_right (background *b);
{
 if (b->bckg.w - b->bckg.x != CAMERA_W)
      b->bckg.x++;
}

