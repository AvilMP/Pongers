#include <iostream>



using namespace std;

class Gracz  /// posiada metody dla ruchu paletek oraz okreslienia pozycji.
{
public:

    int pozycja;

    string gracz;

    Gracz(int=15);
    ~Gracz();

    void ruch_lewo();
    void ruch_prawo();
    bool poz(int pozycja_input);
};
