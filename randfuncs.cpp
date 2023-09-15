//
// Created by amedvedev on 15.09.23.
//

#include <cstdlib>
#include "randfuncs.h"


double randDouble(double fMin, double fMax) {
    double f =(double)rand()/RAND_MAX;
    return fMin+f * (fMax-fMin);
}