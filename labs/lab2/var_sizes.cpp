/*****************************************************************************************
** Program: var_sizes.cpp
** Author: Kyle Felix
** Date: 1/20/17
** Description:
** Input: N/A
** Output: Bits of memory used for each primative type of data.
*****************************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

#define NUM_BITS_IN_BYTE 8

int main() {

	cout<< "A char takes up " << NUM_BITS_IN_BYTE*sizeof(char) << " bits of memory." << endl;

	cout<< "An int takes up " << NUM_BITS_IN_BYTE*sizeof(int) << " bits of memory." << endl;

	cout<< "A long takes up " << NUM_BITS_IN_BYTE*sizeof(long) << " bits of memory." << endl;

	cout<< "A short takes up " << NUM_BITS_IN_BYTE*sizeof(short) << " bits of memory." << endl;

	cout<< "A float takes up " << NUM_BITS_IN_BYTE*sizeof(float) << " bits of memory." << endl;

	cout<< "A double takes up " << NUM_BITS_IN_BYTE*sizeof(double) << " bits of memory." << endl;

	cout<< "A bool takes up " << NUM_BITS_IN_BYTE*sizeof(bool) << " bits of memory." << endl;

// cmath section of program

	long result = pow(2,32)+1;

		cout<< result << endl;

	float a = pow(5.0,3);

		cout<< a << endl;

	int b = sqrt(25);

		cout<< b << endl;

	double c = fmod (34.0,5);

		cout<< c << endl;

	signed int d = abs(-50);

		cout<< d << endl;

	long e = sqrt(pow(2,64));

		cout<< e << endl;

	return 0;
}




























