#include <iostream>
#include "BattleShip.h"
#include "Dolthy.h"
#include "Jalthy.h"
#include "Malthy.h"

using namespace std;

int main()
{
    BattleShip * firepower[4];
    cout << "Lets understand Polymorphism" <<endl;
    firepower[0] = new Malthy(600);
    firepower[1] = new Jalthy(150);
    firepower[2] = new Malthy(600);
    firepower[3] = new Jalthy(450);


    for(int i=0; i < 4; i++){
        firepower[i]->WhoFires();
    }


    return 0;
}
