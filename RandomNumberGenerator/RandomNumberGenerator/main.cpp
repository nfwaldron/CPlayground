//  Nathan Waldron
//  CPSC 501
//  main.cpp
//  RandomNumberGenerator
//  Created by Admin on 2/27/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#include "UniformGenerator.h"
#include "ExponentialGenerator.h"
#include <fstream>

void main(){
	const int BITS = 4;
	const int RANGE = 16;
	const int TOTAL_COUNT = 10000;

	RandomGenerator randomGen;

	cout << "Running Uniform Generator" << endl;
	UniformGenerator uni_test;
	int counters_uni[RANGE] = { 0 };
	int randNumStor_uni[TOTAL_COUNT] = { 0 };
	int counters_exp[RANGE] = { 0 };

	for (int i = 0; i < TOTAL_COUNT; i++){
		int result = uni_test.random(BITS);
		counters_uni[result]++;
		randNumStor_uni[i] = result;
	}
	
	for (int i = 0; i < RANGE; i++)
	{
		cout << "[" << i << "] = " << counters_uni[i] << endl;
	}

	bool chiResult = uni_test.chiSquare(counters_uni, TOTAL_COUNT, RANGE);
	cout << "Chi Square Test: " <<
		(chiResult ? "Passed! UniformGenerator.csv saved!" : "Failed! No value saved!") << endl << endl;

	if (chiResult){
		ofstream out;
		out.open("UniformGenerator.csv", ios::trunc);
		for (int i = 0; i < TOTAL_COUNT; i++){
			out << randNumStor_uni[i] << endl;
		}
		out.close();
	}

	cout << "Running Exponential Generator" << endl;
	ExponentialGenerator Exp_test(10);

	double randNumStor_exp[TOTAL_COUNT];
	double expSum = 0.0;


	for (int i = 0; i < TOTAL_COUNT; i++){
		double result = Exp_test.ExpRandom(BITS);
		randNumStor_exp[i] = result;
		expSum += result;
	}

	cout << "The expected mean of Exponential Generator: " << expSum / TOTAL_COUNT << endl << endl;
	
	if (1){
		ofstream out("ExponentialGenerator.csv", ios::trunc);
		for (int i = 0; i < TOTAL_COUNT; i++){
			out << randNumStor_exp[i] << endl;
		}
		out.close();
	}

/*	
	for (int i = 0; i < TOTAL_COUNT; i++){
		int result = uni_test.random(BITS);
		counters_exp[result]++;
		//randNumStor_exp[i] = result;
	}

	for (int i = 0; i < RANGE; i++)
	{
		float value = (i*1.0)/ (RANGE-1);
		cout << "[" << value << "] = " << counters_exp[i] << endl;
	}
	
	
	cout << "Density Function" << endl;
	cout << " t                F(t)" << endl;

	double tempLambda = Exp_test.getLambda();
	double tempMyT = Exp_test.getmyT();
	for (int i = 0; i < RANGE; i++){
		float val = ((i)*1.0) / (RANGE - 1);
		cout <<  val <<" will be  "  << tempLambda*pow(2.718,(tempLambda)*-1*tempMyT)<< endl;
	}
*/

}
