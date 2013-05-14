

#include "Complex.h"
#include <cmath>

namespace IB {
   /**
    * Konstruktor domyslny. Implementacja.
    * Tutaj juz nie powtarzamy argumentow domyslnych!
    *
    * Korzysta z listy inicjalizacyjnej.
    */
    Complex::Complex( double re, double im) : re_ (re), im_ (im) {
        std::cerr << "Complex: konstruktor domyslny.\n"  ;

    }


    /** Destruktor. Implementacja
     *
     */
    Complex::~Complex() {
        std::cerr << "Complex: destruktor.\n"  ;
    }


    Complex Complex::operator+ ( Complex c)    {
        Complex suma;
        suma.re_ = re_ + c.re_;
        suma.im_ = im_ + c.im_;
        return suma;
    }

    double Complex::getRe()  {
        return re_;
    }

    double Complex::getIm()  {
        return im_;
    }

    void Complex::setRe( double re) {
        re_ = re;
    }

    void Complex::setIm( double im) {
        im_ = im;
    }


    double Complex::abs() {
        return std::sqrt(re_*re_+im_*im_);
    }

    Complex Complex::operator* ( Complex c)    {
        return Complex(re_*c.re_-im_*c.im_,  re_*c.im_+c.re_*im_);
    }


    bool Complex::operator== ( Complex c)    {
        return ((re_==c.re_) && (im_==c.im_));
    }


    bool Complex::operator== ( double d)    {
        return (re_ == d);
    }

    /* Niezaimplementowany w celu unikniecia bledow niejednoznacznosci
    Complex::operator double() const {
        return re_;
    }
    */

    double Complex::operator[](int index)  {
        switch (index) {
            case 0:
                return re_;
            case 1:
                return im_;
        }
        // Tutaj nalezy rzucic wyjatkiem 
        std::cerr << "Niepoprawna proba dostepu do tablicy. Mozliwe wartosci index to 0 lub 1.\n";
        return 0;
    }


}      //end namespace IB


/** Konstruktor kopiujacy. Implementacja. Dla odmiany - poza blokiem namespace.
 *
 */
IB::Complex::Complex( const IB::Complex& c) : re_(c.re_), im_(c.im_) {
    std::cerr << "Complex: konstruktor kopiujacy.\n"  ;
}

/** Ponownie przestrzen nazw IB */
namespace IB {

std::ostream& operator<< (std::ostream& os,  Complex c) {
    os << c.re_ << " " << c.im_;
    return os;
}

std::istream& operator>> (std::istream& is,  Complex c) {
    is >> c.re_ >> c.im_;
    return is;
}
}      //end namespace IB
