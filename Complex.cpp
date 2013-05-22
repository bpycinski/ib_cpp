

#include "Complex.h"
#include <cmath>

namespace IB {
   /**
    * Konstruktor domyslny. Implementacja.
    * Tutaj juz nie powtarzamy argumentow domyslnych!
    *
    * Korzysta z listy inicjalizacyjnej.
    */
    Complex::Complex(double re, double im)
    : creation_time(time(0))
    , access_time(time(0))
    , modification_time(time(0))
    , re_ (re)
    , im_ (im)
   {
        std::cerr << "Complex: konstruktor domyslny.\n"  ;

    }


    /** Destruktor. Implementacja
     *
     */
    Complex::~Complex() {
        std::cerr << "Complex: destruktor.\n"  ;
    }


    Complex Complex::operator+ (const Complex& c)   const {

        access_time = c.access_time = time(0);

        Complex suma;
        suma.re_ = re_ + c.re_;
        suma.im_ = im_ + c.im_;
        return suma;
    }

    double Complex::getRe() const {
        access_time = time(0);
        return re_;
    }

    double Complex::getIm() const {
        access_time = time(0);
        return im_;
    }

    void Complex::setRe(double re) {
        modification_time = access_time = time(0);
        re_ = re;
    }

    void Complex::setIm(double im) {
        modification_time = access_time = time(0);
        im_ = im;
    }


    double Complex::abs() const {
        access_time = time(0);
        return std::sqrt(re_*re_+im_*im_);
    }

    Complex Complex::operator* (const Complex& c)   const {
        access_time = c.access_time = time(0);
        return Complex(re_*c.re_-im_*c.im_,  re_*c.im_+c.re_*im_);
    }


    bool Complex::operator== (const Complex& c)   const {
        access_time = c.access_time = time(0);
        return ((re_==c.re_) && (im_==c.im_));
    }


    bool Complex::operator== (const double d)   const {
        access_time = time(0);
        return (re_ == d);
    }

    /* Niezaimplementowany w celu unikniecia bledow niejednoznacznosci
    Complex::operator double() const {
        return re_;
    }
    */

    double Complex::operator[](int index) const {
        access_time = time(0);
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
IB::Complex::Complex(const IB::Complex& c)
: creation_time(time(0))
, access_time(time(0))
, modification_time(time(0))
, re_ (c.re_)
, im_ (c.im_)
{
    std::cerr << "Complex: konstruktor kopiujacy.\n"  ;
}

/** Ponownie przestrzen nazw IB */
namespace IB {

std::ostream& operator<< (std::ostream& os, const Complex& c) {
    c.access_time = time(0);
    os << c.re_ << " " << c.im_;
    return os;
}

std::istream& operator>> (std::istream& is, Complex& c) {
    c.modification_time = c.access_time = time(0);
    is >> c.re_ >> c.im_;
    return is;
}

void Complex::showModificationDateTime(ostream & os) const {
     tm* tm_time = localtime(&modification_time);
     os << "Modification time: " << tm_time->tm_mday<<"-"<<(1+tm_time->tm_mon)<<"-"<<(1900+tm_time->tm_year)
             << " " << tm_time->tm_hour << ":" << tm_time->tm_min << ":" << tm_time->tm_sec <<std::endl;
}

void Complex::showAccessDateTime(ostream & os) const {
    tm* tm_time = localtime(&access_time);
    os << "Access time: " << tm_time->tm_mday<<"-"<<(1+tm_time->tm_mon)<<"-"<<(1900+tm_time->tm_year)
            << " " << tm_time->tm_hour << ":" << tm_time->tm_min << ":" << tm_time->tm_sec <<std::endl;
}

void Complex::showCreationDateTime(ostream & os ) const {
    tm* tm_time = localtime(&creation_time);
    os << "Creation time: " << tm_time->tm_mday<<"-"<<(1+tm_time->tm_mon)<<"-"<<(1900+tm_time->tm_year)
            << " " << tm_time->tm_hour << ":" << tm_time->tm_min << ":" << tm_time->tm_sec <<std::endl;
}

void Complex::showAllDateTime(ostream & os) const {
    showCreationDateTime(os);
    showAccessDateTime(os);
    showModificationDateTime(os);
}

Complex operator -(Complex const & c1, Complex const & c2) {
    c2.modification_time = c2.access_time = c1.modification_time = c1.access_time = time(0);
    Complex tmp = Complex (c1.re_-c2.re_, c1.im_-c2.im_);
    return tmp;
}

Complex & Complex::operator = (Complex const & c) {
    access_time = time(0);
    //sprawdz, czy nie przypisuje zmiennej do samej siebie
    if (this==&c)
        return;
    re_ = c.re_;
    im_ = c.im_;

    modification_time = access_time;
    }

}      //end namespace IB
