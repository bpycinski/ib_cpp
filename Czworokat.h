#ifndef __Czworokat_H_
#define __Czworokat_H_

#include <iostream>
#include "Figura.h"

class Czworokat : public Figura {
protected:
    double a_;
    double b_;
    double c_;
    double d_;
public:
    Czworokat();

    Czworokat(double a,double b,double c,double d);

    ~Czworokat();

    double getA();
    void setA(double);
    double getB();
    void setB(double);
    double getC();
    void setC(double);
    double getD();
    void setD(double);

    double obwod();
};


#endif //__Czworokat_H_
