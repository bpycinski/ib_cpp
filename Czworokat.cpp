#include "Czworokat.h"

Czworokat::Czworokat()
: a_(0)
, b_(0)
, c_(0)
, d_(0) {
    std::cerr<<"Czworokat::Czworokat()"<<std::endl;
}

Czworokat::Czworokat(double a, double b, double c, double d)
: a_(a)
, b_(b)
, c_(c)
, d_(d) {
    std::cerr<<"Czworokat::Czworokat(double a, double b, double c, double d)"<<std::endl;
}

double Czworokat::getA() {
    return a_;
}

void Czworokat::setA(double a) {
    a_=a;
}

double Czworokat::getB() {
    return b_;
}

void Czworokat::setB(double b) {
    b_=b;
}

double Czworokat::getC() {
    return c_;
}

void Czworokat::setC(double c) {
    c_=c;
}

double Czworokat::getD() {
    return d_;
}

void Czworokat::setD(double d) {
    d_=d;
}

double Czworokat::obwod() {
    return a_+b_+c_+d_;
}

Czworokat::~Czworokat() {
    std::cerr<<"Czworokat::~Czworokat()"<<std::endl;
}
