
#include <iostream>
#include "Complex.h"

/** Do samodzielnego wykonania:
*
* Zaimplementowac metode:
*
* zwracajaca modul
* ustawiajaca i zwracjaca czesc rzeczywista i urojona (setRe, getIm...)
*
* Zaimplementowac operator:
*
* jako funkcja zaprzyjazniona:
*
* wypisywania liczby do strumienia <<
* wczytywania danych ze strumienia >> w formacie dwoch liczb oddzielonych bialym znakiem
* odejmowania dwoch liczb zespolonych
*
* jako publiczna funkcja skladowa:
*
* mnozenia
* porownania dwoch liczb zespolonych
* porownania liczby zespolonej i liczby rzeczywistej
* konwersji na liczbe rzeczywista (zwraca czesc rzeczywista)
* tablicowy zwracajacy: [0] - czesc rzeczywista; [1] - czesc urojona
* (*) tablicowy, umozliwiajacy przypisanie np. z[1] = 2.71;
*
*/


int main(int argc, const char * argv[])
{

    const IB::Complex z1 (2, 5);
    IB::Complex* z2 = new IB::Complex(3, -4);

    IB::Complex z3 ;
    z3 = z1+(*z2);
    // dygresja: dlaczego mozliwe jest ponizsze dodawanie, skoro jest
    // zaimplementowany tylko operator dwoch liczb zespolonych
    z3 = z1*34.0;


    delete z2;
    return 0;
}
