
#ifndef __Complex_H_
#define __Complex_H_

#include <iostream>

namespace IB {

/** Klasa liczb zaspolonych */
class Complex {
    double re_;
    double im_;
public:
    Complex( double re=0.0, double im=0.0) ;
    Complex( const Complex& c);
    ~Complex() ;


    double getRe() ;
    double getIm() ;
    void setRe(double re);
    void setIm(double im);

    /** Metoda zwracaja modul */
    double abs();

    /** Operator dodawania.*/
    Complex operator+ ( Complex c)   ;

    /** Operator mnozenia.*/
    Complex operator* ( Complex c)   ;

    /** Operator porownania.*/
    bool operator== ( Complex c)   ;

    /** Operator porownania z liczba rzeczywista.*/
    bool operator== ( double d)   ;

    //Operator rzutowania - niezaimplementowany
    //operator double() const;

    double operator[](int index) ;

    /** Deklaracje przyjazni */
    friend Complex operator- ( Complex c1,  Complex  c2);
    friend std::ostream& operator<< (std::ostream& os,  Complex c);
    friend std::istream& operator>> (std::istream& is,  Complex c);

}; //koniec klasy IB::Complex



    //Deklaracje funkcji nieskladowych

    /** Operator odejmowania. Metoda globalna.
     *  PROBLEM: Jak zapewnic dostep do skladnikow prywatnych?
     */
    Complex operator- ( Complex c1,  Complex  c2);

    /** Operator wypisywania do strumienia wyjsciowego
    */
    std::ostream& operator<< (std::ostream& os,  Complex  c);

    /** Operator pobierania ze strumienia wejsciowego
    */
    std::istream& operator>> (std::istream& is,  Complex  c);

}

#endif //__Complex_H_
