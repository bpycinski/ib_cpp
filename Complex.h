


#ifndef __Complex_H_
#define __Complex_H_

#include <iostream>

namespace IB {

/** Klasa liczb zaspolonych */
class Complex {
    double re_;
    double im_;
public:
    Complex(double re=0.0, double im=0.0) ;
    Complex(const Complex& c);
    ~Complex() ;

    /** Operator dodawania. Metoda skladowa */
    Complex operator+ (const Complex& c)   const;

};
    /** Operator odejmowania. Metoda globalna.
     *  PROBLEM: Jak zapewnic dostep do skladnikow prywatnych?
      * */
    Complex operator- (const Complex&c1, const Complex& c2);


}

/*program zajec:

Czytanie WE/WY -

Ile razy uruchamiany jest konstruktor w przykladowym programie?

zaimplementowac operator dodawania i odejmowania, samodzielnie napisac operator mnozenia.

Co w przypadku dodawania do liczby zespolonej liczby double? Kolejnosc argumentow!

Zaimplementowac operator przypisania.

Zaimplementowac operator wypisywania do strumienia << . Jak (gdzie) powinien byc zdefiniowany operator?



 */



#endif //__Complex_H_
