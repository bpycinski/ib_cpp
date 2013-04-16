
#include <iostream>
#include "Complex.h"



int main(int argc, const char * argv[])
{

    IB::Complex z1 (2, 5);
    IB::Complex* z2 = new IB::Complex(3, -4);

    IB::Complex z3 ;
    z3 = z1+(*z2);



    return 0;
}
