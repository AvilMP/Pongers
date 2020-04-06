#include <iostream>
#include <conio.h> /// dla funkcji getch();
#include <windows.h> /// dla funk. cls;

#include "klasa_gracz.h"
#include "ball.h"

using namespace std;

int pozycja_gracza;
int pozycja_komputer;   /// globalne pozycje paletek dla latwego dostepu.

void pongers(); /// sztuka dla sztuki.

int main()
{
    Gracz g1, k1;
    Ball kula;

    for(;;)
    {
    pongers();

    char ruch;

    cout<<endl;
    kula.new_pos(pozycja_gracza,pozycja_komputer);
    for (int x=0; x<=20; x++)
    {
        for (int y=0; y<=39; y++)
        {
            if      ((x==0)||(x==20)||(y==0)||(y==39))    {cout<<"X";                                   }   /// budowa scian
            else if ((x==1)&&(k1.poz(y)==true))           {cout<<"XXXXXXXXXX";pozycja_komputer=y; y+=9; }   /// gorna paletka docelowo dla ai
            else if (kula.tracking(x,y)==true)            {cout<<"0";                                   }   /// obliczenie pozycji pilki
            else if ((x==19)&&(g1.poz(y)==true))          {cout<<"XXXXXXXXXX";pozycja_gracza=y; y+=9;   }   /// paletka gracza
            else cout<<" ";
        }
        cout<<endl;
    }

    ruch=getch();

    switch(ruch)
    {
    case '4':   g1.ruch_lewo(); k1.ruch_lewo();  break; /// medoda dla ruchu
    case '6':   g1.ruch_prawo(); k1.ruch_prawo(); break; /// jw.
    }



    system("cls");

    } /// end for


    return 0;
}

void pongers()
{
    cout<<"~~~~~~~~~~~~~~~~PONGERS~~~~~~~~~~~~~~~~~";
}




