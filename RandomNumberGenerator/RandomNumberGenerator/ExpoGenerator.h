#ifndef EXPONENTIALGENERATOR_H
#define EXPONENTIALGENERATOR_H

#include "Generator.h"
#include <cmath>

class ExpoGenerator:public Generator{
public:
    ExpoGenerator();
    ExpoGenerator(double);
    
    double getLambda();
    void setLambda(double);
    double ExpRandom(int);
    double ExpectedMean();
    
private:
    double lambda;
    const double e = 2.71828;
};

#endif
