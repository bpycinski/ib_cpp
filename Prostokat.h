#ifndef __Prostokat_H_
#define __Prostokat_H_

#include <iostream>
#import "Czworokat.h"


class Prostokat : public Czworokat{
public:
    Prostokat();

    Prostokat(double a, double b);

    ~Prostokat();

    double obwod();

    double pole();

};


#endif //__Prostokat_H_
