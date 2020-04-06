#include <iostream>

using namespace std;

class Ball /// okresla swoja pozycje na osiach oraz przelicza fizyke kolizji.
{
public:
    int pozycja_x;
    int pozycja_y;

    int kierunek_a;
    int kierunek_b;

    string nazwa;

    Ball(int=4, int=20, int=1, int=-1);
    ~Ball();

    bool tracking(int x, int y);
    void new_pos(int pozycja_gracza, int pozycja_komputer);
};
