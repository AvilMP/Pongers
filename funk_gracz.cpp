#include <iostream>

#include "klasa_gracz.h"

using namespace std;

Gracz::Gracz(int poz)
{
    pozycja=poz;
}

bool Gracz::poz(int pozycja_input)
{
    if (pozycja == pozycja_input) return true;
    else return false;
}

void Gracz::ruch_lewo()
{
    if (pozycja!=1)  pozycja-=1;
}

void Gracz::ruch_prawo()
{
    if (pozycja!=29) pozycja+=1;
}

Gracz::~Gracz(){}
