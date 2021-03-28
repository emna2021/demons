#ifndef perso_H_INCLUDED
#define perso_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
typedef struct
{
 
    SDL_Surface *image_perso;
    SDL_Rect position_perso;
    SDL_Rect animation_perso[60];
    int compteur;
    //direction
    int direction; //droite : 1 || gauche : 2
        //en mvt ou stable
    int etat; // mvt : 1 || stable : 0
    double mvtx;
    double acceleration; // active / desactive acceleration
    int vitesse_max_perso;
    int mvty;
int acc; // valeur acceleration
    int vie;
    int score;
} perso;
void initialiser_perso(perso *p, int x);
void deplacer_perso_droite(perso *p);
void deplacer_perso_gauche(perso *p);
void afficher_peso(perso *p, SDL_Surface *screen);
void apply_acceleration(perso *p,Uint32 dt)
