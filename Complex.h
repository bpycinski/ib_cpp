
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

    /** Deklaracje przyjazni */
    friend Complex operator- (const Complex&c1, const Complex& c2);
    friend std::ostream& operator<< (std::ostream& os, const Complex&);

}; //koniec klasy IB::Complex



    //Deklaracje funkcji nieskladowych

    /** Operator odejmowania. Metoda globalna.
     *  PROBLEM: Jak zapewnic dostep do skladnikow prywatnych?
     */
    Complex operator- (const Complex&c1, const Complex& c2);

    /** Operator wypisywania do strumienia wyjsciowego
    */
    std::ostream& operator<< (std::ostream& os, const Complex& c);

}

#endif //__Complex_H_
