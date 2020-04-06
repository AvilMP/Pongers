#include <iostream>

#include "ball.h"

using namespace std;

Ball::Ball(int poz_x, int poz_y, int poz_a, int poz_b)
{
    pozycja_x  = poz_x;
    pozycja_y  = poz_y;
    kierunek_a = poz_a;
    kierunek_b = poz_b;
}

bool Ball::tracking(int x, int y) /// prosta metoda zwarcajaca pozycje pilki.
{
    if (    (x==pozycja_x)&&(y==pozycja_y)    ) return true;
    else return false;
}

/// ponizej metoda wyszukania kolizji oraz pseudo fizyki (kiedys dam pozycje na float i paraboliczne paletki ;) ).

void Ball::new_pos(int pozycja_gracza, int pozycja_komputer)  /// IF-y wbijaja na impreze :)) (optymalizacja placze)
{
   if ( (pozycja_y==38)&&(kierunek_a==1)&&(kierunek_b==1) )   ///dol prawo11 na dol lewo
   {
       kierunek_b=-1;
       if       (kierunek_a>0)   pozycja_x++;
       else if  (kierunek_a<0)   pozycja_x--;
       if       (kierunek_b>0)   pozycja_y++;
       else if  (kierunek_b<0)   pozycja_y--;
   }
    if ( (pozycja_y==1)&&(kierunek_a==-1)&&(kierunek_b==-1) )    ///gora lewo-1-1 na gora prawo
   {
       kierunek_b=1;
       if       (kierunek_a>0)   pozycja_x++;
       else if  (kierunek_a<0)   pozycja_x--;
       if       (kierunek_b>0)   pozycja_y++;
       else if  (kierunek_b<0)   pozycja_y--;
   }
    if ( (pozycja_y==38)&&(kierunek_a==-1)&&(kierunek_b==1) ) /// gora prawo-11 na gora lewo
   {
       kierunek_b=-1;
       if       (kierunek_a>0)   pozycja_x++;
       else if  (kierunek_a<0)   pozycja_x--;
       if       (kierunek_b>0)   pozycja_y++;
       else if  (kierunek_b<0)   pozycja_y--;
   }
    if ( (pozycja_y==1)&&(kierunek_a==1)&&(kierunek_b==-1) )  ///dol lewo1-1 na dol prawo
   {
       kierunek_b=1;
       if       (kierunek_a>0)   pozycja_x++;
       else if  (kierunek_a<0)   pozycja_x--;
       if       (kierunek_b>0)   pozycja_y++;
       else if  (kierunek_b<0)   pozycja_y--;
   }
   if ( (pozycja_gracza<=pozycja_y)&&(pozycja_gracza+9>=pozycja_y)&&(pozycja_x==18)   )
   {
       if ( (kierunek_a==1)&&(kierunek_b==-1) ) ///dol lewo
       {
       kierunek_a=-1;
       if       (kierunek_a>0)   pozycja_x++;
       else if  (kierunek_a<0)   pozycja_x--;
       if       (kierunek_b>0)   pozycja_y++;
       else if  (kierunek_b<0)   pozycja_y--;
       }
       else if( (kierunek_a==1)&&(kierunek_b==1) ) ///dol prawo
       {
       kierunek_a=-1;
       if       (kierunek_a>0)   pozycja_x++;
       else if  (kierunek_a<0)   pozycja_x--;
       if       (kierunek_b>0)   pozycja_y++;
       else if  (kierunek_b<0)   pozycja_y--;
       }
   }
    if ( (pozycja_komputer<=pozycja_y)&&(pozycja_gracza+9>=pozycja_y)&&(pozycja_x==2)   )
   {
       if ( (kierunek_a==-1)&&(kierunek_b==-1) ) ///gora lewo
       {
       kierunek_a=1;
       if       (kierunek_a>0)   pozycja_x++;
       else if  (kierunek_a<0)   pozycja_x--;
       if       (kierunek_b>0)   pozycja_y++;
       else if  (kierunek_b<0)   pozycja_y--;
       }
       else if( (kierunek_a==-1)&&(kierunek_b==1) ) ///gora prawo
       {
       kierunek_a=1;
       if       (kierunek_a>0)   pozycja_x++;
       else if  (kierunek_a<0)   pozycja_x--;
       if       (kierunek_b>0)   pozycja_y++;
       else if  (kierunek_b<0)   pozycja_y--;
       }
   }
   else
   {
       if       (kierunek_a>0)   pozycja_x++;
       else if  (kierunek_a<0)   pozycja_x--;
       if       (kierunek_b>0)   pozycja_y++;
       else if  (kierunek_b<0)   pozycja_y--;
   }
}



Ball::~Ball(){};
