#include "ExponentialGenerator.h"

ExponentialGenerator::ExponentialGenerator(){
	myLambda = 0.0;
}
ExponentialGenerator::ExponentialGenerator(double lambda){
	myLambda = lambda;
}

void ExponentialGenerator::setLambda(double lambda){
	myLambda = lambda;
}
double ExponentialGenerator::getLambda(){
	return myLambda;
}
double ExponentialGenerator::ExpRandom(int bits){
	double base = pow(2,bits);
	unsigned long int temp = random(bits);
	double lam = getLambda();
	double temp2 = (double)temp / base;
	myT = temp2;
	return (lam*pow(2.71828, -lam*temp2));
}

double ExponentialGenerator::getmyT()
{
	return myT;
}

double ExponentialGenerator::ExpectedMean(){
	return 1 / getLambda();
}
