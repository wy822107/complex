#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex  b(1,1),c(2,2),d(3,3);
    cout << Complex::Add(b,c) << Complex::division(b,c) << endl ;
    cout << b+c << b-c << endl;
    return 0;
}

