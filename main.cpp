#include <iostream>
#include "Figura.h"
#include "Czworokat.h"
#include "Prostokat.h"
#include "Kwadrat.h"


int main(int argv, char** argc) {

    Figura f0 ;
    Czworokat cz0;
    Prostokat p0;
    Kwadrat k0;


    Czworokat cz1 (1.2, 4.7, 9.5, 6.1);
    Prostokat p1 (4.9, 8.01);
    Kwadrat k1 (8.2);


    std::cout << cz1.obwod() << "\n";
    std::cout << p1.pole() << "\n";
    std::cout << k1.pole() << "\n";




    return 0;
}
