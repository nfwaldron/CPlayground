// Nathan Waldron
// CPSC 501
// 2/13/2015
// Assignment 1: Byte Tester

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include "Byte.h"

using namespace std;

int main ()
{

// Create three objects of the class Byte
Byte b1, b2, b3;
char * comp = "2\'s complement ";
char * bias = "biased notation";

ofstream out("sum.out", ios::out); // File to write output to
ifstream in("byte.txt", ios::in); // File to write input to

while (b1.read(in) && b2.read(in))
{
b3 = b1.add(b2.biasTo2sComplement());
out << "  " << b1.byte << "\t" << comp << "\t" << std::right
<< std::setw(8) << b1.toInteger() << endl;

out << "+ " << b2.byte << "\t" << bias << "\t" << std::right
<< std::setw(8) << b2.biasTo2sComplement().toInteger() << endl;

out << "-----------\t\t\t" << std::right << std::setw(8) << "----"
<< endl;
if(!b3.hasError())
{
out << "  " << b3.byte << "\t" << comp << "\t" << std::right
<< std::setw(8) << b3.toInteger() << endl << endl;
}
else {
	out << "  " << b3.getErrorMessage() << "\t" << comp << "\t" << std::right
		<< std::setw(8) << b3.getErrorMessage() << endl << endl;
}
}

out.close();
in.close();

return 0;
} 
