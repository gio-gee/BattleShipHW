#ifndef MALTHY_H
#define MALTHY_H
#include "BattleShip.h"

using namespace std;


class Malthy final : public BattleShip
{
    public:
        Malthy(int);
        ~Malthy();
        void WhoFires();

    protected:

    private:
};

#endif // MALTHY_H
