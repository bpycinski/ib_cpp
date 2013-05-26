#ifndef __Kwadrat_H_
#define __Kwadrat_H_

#include <iostream>
#include "Prostokat.h"


class Kwadrat : public Prostokat{
public:
    Kwadrat();

    Kwadrat(double a);

    ~Kwadrat();

    double obwod();

    double pole();

};


#endif //__Kwadrat_H_
