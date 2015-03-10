#include <iostream>
using namespace std;

#ifndef   BYTE
#define   BYTE

class Byte {
public:

enum { UNDER, OVER, OK, BYTESIZE = 8 }; Byte() { error = false; }
Byte(char *);
int read(istream & = cin); Byte add(Byte);

// switch high-order bit only
Byte biasTo2sComplement();

// apply 2s complement conversion for magnitude evaluation
Byte to2sComplement();

friend ostream & operator << (ostream &, const Byte &);
int toInteger();
const char * getErrorMessage() const;
bool hasError() const;
char byte[BYTESIZE];

private:
bool error;
const char * errorMessage;
int magnitude();
};

#endif