#include "Malthy.h"


using namespace std;

Malthy::Malthy(int f)
:BattleShip(f)
{

}

Malthy::~Malthy()
{
    //dtor
}

void Malthy::WhoFires()
{
    cout << "fires both laser and proton gun-" << x << endl;
}
