#ifndef BATTLESHIP_H
#define BATTLESHIP_H
#include <iostream>
using namespace std;

class BattleShip
{
    public:
        BattleShip(int);
        ~BattleShip();
        int x;
        virtual void WhoFires()= 0;

    protected:

    private:
};

#endif // BATTLESHIP_H
