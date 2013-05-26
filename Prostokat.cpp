#include "Prostokat.h"

Prostokat::Prostokat() {
    std::cerr<<"Prostokat::Prostokat()"<<std::endl;
}

Prostokat::Prostokat(double a, double b)
: Czworokat(a, b, 0, 0)
{
    std::cerr<<"Prostokat::Prostokat(a, b)"<<std::endl;
    a_ = c_ = a;
    b_ = d_ = b;
}

double Prostokat::obwod() {
    return 2*(a_+b_);
}

double Prostokat::pole() {
    return a_*b_;
}

Prostokat::~Prostokat() {
    std::cerr<<"Prostokat::~Prostokat()"<<std::endl;
}
