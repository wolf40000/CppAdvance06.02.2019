#include "mypow.h"


int main()
{
    namespace MyPow = MyLib::Math::Pow;

    MyPow::pow(1.0, 2.0);

    return 0;
}
