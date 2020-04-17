#include "Jalthy.h"


using namespace std;

Jalthy::Jalthy(int f)
:Dolthy(f)
{

}

Jalthy::~Jalthy()
{
    //dtor
}

void Jalthy::WhoFires()
{
    cout << " fire proton gun-" << x << endl;
}
