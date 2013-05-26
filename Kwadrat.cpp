#include "Kwadrat.h"

Kwadrat::Kwadrat() {
    std::cerr<<"Kwadrat::Kwadrat()"<<std::endl;
}

Kwadrat::Kwadrat(double a) {
    std::cerr<<"Kwadrat::Kwadrat(double a)"<<std::endl;
    a_ = b_ = c_ = d_ = a;
}


Kwadrat::~Kwadrat() {
    std::cerr<<"Kwadrat::~Kwadrat()"<<std::endl;
}

double Kwadrat::obwod() {
    return 4*a_;
}

double Kwadrat::pole() {
    return a_*a_;
}
