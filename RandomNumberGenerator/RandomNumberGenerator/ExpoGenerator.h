#ifndef EXPONENTIALGENERATOR_H
#define EXPONENTIALGENERATOR_H

#include "RandomGenerator.h"
#include <cmath>

class ExponentialGenerator:public RandomGenerator{
public:
	ExponentialGenerator();
	ExponentialGenerator(double);

	double getLambda();
	void setLambda(double);
	double ExpRandom(int);
	double ExpectedMean();
	double getmyT();

private:
	double myLambda;
	double myT;
	//const double e = 2.71828;
};

#endif
