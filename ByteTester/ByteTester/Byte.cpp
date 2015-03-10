#include <iostream>
#include "Byte.h"

const char * comp = "2\'s complement"; 
const char * bias = "biased notation"; 
const char * over = "overflow";
const char * under = "underflow";



// Constructor 
Byte::Byte(char * str) //receiving information from the user. there is information in each position
{
for (int i = 0; i < BYTESIZE; i++) // create a for loop that goes from 0 to the end of the array
byte[i] = str[i]; // *(str + i); // This line of code copies from the users array into my array. Copying starts from the first index in the user's array.
error = false;
}


int Byte::read(istream & in)
{
for (int i = 0; i < Byte::BYTESIZE; i++)
in >> byte[i];
if (in.fail())
return false; 
else
return true; 

}

Byte Byte::biasTo2sComplement() // In order to convert a number from bias to 2C, you need to complement the value of the first bit
{
Byte temp; // This is a copy of the object containing the whole class. we can work with this copy without altering the original array
// Temp has access to all of the methods and attributes of the Byte Object.
// The attribute of interest to us is the attribute "byte" which is an array of 8 integers
temp.byte[0] = byte[0] == '0' ? '1' : '0'; // If the first position in the array is equal to '0', it will change it to one, if it is '1', change it to '0'
for (int i = 1; i < Byte::BYTESIZE; i++) // We have already taken care of flipping the first bit. Now from the second element in the array, which is at index 1, we are going to copy the value of the elements in the array into the array "byte"
temp.byte[i] = byte[i]; 
return temp; // return the modified array, stored in the variable temp.
}

 
Byte Byte::to2sComplement()
{
	// byte is an array of characters. Because of this we need to store the calculations with the characters
	int sum = 0; 
	int num = 1;
	int rem = 0;

	Byte temp = *this; // this refers to the object of the class BYTE that called the method. This temp has all of the methods and attributes of the object that is calling the method

	// Now you need to flip the bits. Array is an 8 bit array, but with the 2C system, you are starting from position 0, so you need to start reading BYTESIZE from not the first position, but from the 0th position  
	for (int i = 0; i < BYTESIZE ; i++) 
	{
		if (temp.byte[i] == '0') //if the bit read is equal to zero, change the value to one
		{
			temp.byte[i] = '1';
		}
		else // otherwise, the value of the bit is 1, and we need to change it to 0
		{ 
			temp.byte[i] = '0';
		}

	}

	int n = 0;

	for (int i = BYTESIZE -1; i>=0; i--) //Remember this is an 8 bit number, but it starts from and index 0-->7. We will read from index 7 to zero
	{
		if (temp.byte[i] == '0')
		{
			n = 0;
		}
		else 
			n = 1;
	
		sum = n + rem + num;
		num = 0;

		if (sum == 2)
		{
			temp.byte[i] = '0';
			rem = 1;
		}

		if (sum == 1)
		{
			temp.byte[i] = '1';
			rem = 0;
		}

		if (sum == 0)
		{
			temp.byte[i] = '0';
			rem = 0;
		}
		sum = 0;

	}

	return temp;
}


int Byte::toInteger()
{
Byte temp = *this; // create a temporary object of the Byte class
int sign = 1;
if (byte[0] == '1' || temp.byte[0]=='1') // If the first element of the array is a '1' 
{ 
	temp = to2sComplement(); // Implement the to2sComplement method 
	sign = -1; // Change the sign to -1
}

return temp.magnitude() * sign; // Multiply the value by the sign
} 

int Byte::magnitude()
{
	int value = 0;
	for (int i = BYTESIZE -1, mag = 1; i>=0; i --, mag*=2)
	{
		value += byte [i] == '1' ? mag : 0;
	}

	return value;
}

Byte Byte::add(Byte b)
{
	Byte temp = *this;
	Byte result;

	//We have two numbers that we are adding. We need the two number variable because we cannot add char values. We need a temporary variable in which to store the values.
	int remainder = 0;
	int sum = 0;
	int number1 = 0;
	int number2 = 0;

	for (int i = BYTESIZE -1; i>=0; i--)
	{
		if (temp.byte[i] == '0')
		{ 
			number1 = 0;
		}

		else 
		{
			number1 = 1;
		}
	
		if (b.byte[i] == '0')

		{
			number2 = 0;
		}

		else 
		{
			number2 = 1;
		}
		sum = number1 + number2 + remainder;

		if (sum == 3)
		{
			result.byte[i] = '1';
			remainder = 1;
		}

		if (sum == 2)
		{
			result.byte[i] = '0';
			remainder = 1;
		}

		if (sum == 1)
		{
			result.byte[i] = '1';
			remainder = 0;
		}

		if (sum == 0)
		{
			result.byte[i] = '0';
			remainder = 0;
		}

		sum = 0;
	}

	if (temp.byte[0] == '1' && b.byte[0] == '1' && result.byte[0] == '0')
	{
		result.error = true;
		result.errorMessage = under;
	}

	if (temp.byte[0] == '0' && b.byte[0] == '0' && result.byte[0] == '1')
	{
		result.error = true;
		result.errorMessage = over;
	}

	return result;
}

bool Byte::hasError() const
{
	
	return error;
}

const char *Byte::getErrorMessage() const
{
	
	return errorMessage;
}


ostream & operator << (ostream & out, const Byte & b)
{
		return out;
}