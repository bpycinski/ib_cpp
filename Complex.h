
#ifndef __Complex_H_
#define __Complex_H_

#include <iostream>
#include <ctime>

//uproszczenie, by nie pisac ciagle std::
using namespace std;

namespace IB {

/** Klasa liczb zaspolonych */
class Complex {
    double re_;
    double im_;
    
    const time_t creation_time;
    mutable time_t modification_time;
    mutable time_t access_time;
    
    
public:
    Complex(double re=0.0, double im=0.0) ;
    Complex(const Complex& c);
    ~Complex() ;


    double getRe() const;
    double getIm() const;
    void setRe(double re);
    void setIm(double im);

    /** Metoda zwracaja modul */
    double abs() const ;

    /** Operator dodawania.*/
    Complex operator+ (const Complex& c)   const;

    /** Operator mnozenia.*/
    Complex operator* (const Complex& c)   const;

    /** Operator porownania.*/
    bool operator== (const Complex& c)   const;

    /** Operator porownania z liczba rzeczywista.*/
    bool operator== (const double d)   const;

    //Operator rzutowania - niezaimplementowany
    //operator double() const;

    double operator[](int index) const;

    /** Operator przypisania */
    Complex& operator=(const Complex& c);



    void showCreationDateTime(std::ostream& os=std::cout) const;
    void showModificationDateTime(std::ostream& os=std::cout) const;
    void showAccessDateTime(std::ostream& os=std::cout) const;
    void showAllDateTime(std::ostream& os=std::cout) const;
    
    
    
    
    
    /** Deklaracje przyjazni */
    friend Complex operator- (const Complex&c1, const Complex& c2);
    friend std::ostream& operator<< (std::ostream& os, const Complex&);
    friend std::istream& operator>> (std::istream& is,  Complex&);

}; //koniec klasy IB::Complex



    //Deklaracje funkcji nieskladowych

    /** Operator odejmowania. Metoda globalna.
     *  PROBLEM: Jak zapewnic dostep do skladnikow prywatnych?
     */
    Complex operator- (const Complex&c1, const Complex& c2);

    /** Operator wypisywania do strumienia wyjsciowego
    */
    std::ostream& operator<< (std::ostream& os, const Complex& c);

    /** Operator pobierania ze strumienia wejsciowego
    */
    std::istream& operator>> (std::istream& is, Complex& c);

}

#endif //__Complex_H_
