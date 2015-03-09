#include "ExpoGenerator.h"

ExpoGenerator::ExpoGenerator(){
    lambda = 0.0;
}
ExpoGenerator::ExpoGenerator(double lambda){
    this->lambda = lambda;
}

void ExpoGenerator::setLambda(double lambda){
    this->lambda = lambda;
}
double ExpoGenerator::getLambda(){
    return lambda;
}
double ExpoGenerator::ExpRandom(int bits){
    double base = pow(2,bits) - 1;
    unsigned long int temp = random(bits);
    double lam = getLambda();
    double temp2 = (double)temp / base;
    return (lam*pow(e, -lam*temp2));
}
double ExpoGenerator::ExpectedMean(){
    return 1 / getLambda();
}
