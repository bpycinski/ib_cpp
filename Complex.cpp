

#include "Complex.h"


namespace IB {
    /**
    * Konstruktor domyslny. Implementacja.
    * Tutaj juz nie powtarzamy argumentow domyslnych!
    *
    * Korzysta z listy inicjalizacyjnej.
    */
    Complex::Complex(double re, double im) : re_ (re), im_ (im) {
        std::cerr << "Complex: konstruktor domyslny.\n"  ;

    }


    /** Destruktor. Implementacja
     *
     */
    Complex::~Complex() {
        std::cerr << "Complex: destruktor.\n"  ;
    }

}


/** Konstruktor kopiujacy. Implementacja. Dla odmiany - poza blokiem namespace.
 *
 */
IB::Complex::Complex(const IB::Complex& c) : re_(c.re_), im_(c.im_) {
    std::cerr << "Complex: konstruktor kopiujacy.\n"  ;
}



