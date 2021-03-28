#include"perso.h"

void initialiser_perso(perso *p, int x){
p->image_perso=IMG_Load ("***");

p->position_perso.w=100;
p->position_perso.h=100;


p->direction=1;
p->vie=3;
p->score=0;
p->mvtx=2;
p->mvty=100;
p->acc=0;
p->vitesse_max_perso=45;
p->acceleration=0;

if (x==1){
p->position_perso.x=**;
p->position_perso.y=**;

}
if (x==2){
p->position_perso.x=**;
p->position_perso.y=**;

}
}

void afficher_perso(perso *p, SDL_Surface *screen){
SDL_BlitSurface(p->image_perso,***,screen,&p->position_perso);
}

void deplacer_perso_droite(perso *p){
p->direction=1;
p->position_perso.x+=p->mvtx;
}

void deplacer_perso_gauche(perso *p){
p->direction=2;
p->position_perso.x-=p->mvtx;
}
void apply_acceleration(perso *p,Uint32 dt){
  if (p->acc%2==0)     p->mvtx=3;
if(p->acc%2==1) {
   if(p->mvtx<p->vitesse_max_perso)
 {
 p->acceleration+=46;
   p->mvtx+=0.5*p->acceleration*dt/1000*dt/1000+p->mvtx*dt/1000;
 }
 }

}


