/********************************************************************************
**Program: number.cpp
**Author: Kyle Felix
**Date: 1/14/16
**Description: Using Macros to display values of ints, longs, and shorts. 
**Input: Number of bits.
**Output:Value of signed and unsigned ints, longs, and shorts.
********************************************************************************/
#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main() {
	
	// Values of signed and unsigned ints, longs, and shorts

	cout<< "Signed int Max:" << SCHAR_MAX <<endl; //Macro = 127

	cout<< "Signed int Min:" << SCHAR_MIN <<endl; //Macro = -128

	cout<< "Unsigned int Max:" << UCHAR_MAX <<endl; //Macro = 255

	cout<< "Unsigned int Min:" << 0 <<endl; //Macor = 0
	
	cout<< "Signed long Max:" << LONG_MAX <<endl; //Macro = 2,147,483,647

	cout<< "Signed long Min:" << LONG_MIN <<endl; //Macro = -2,147,483,648

	cout<< "Unsigned long Max:" << ULONG_MAX <<endl; //Macro = 4,294,967,295

	cout<< "Unsigned long Min:" << 0 <<endl; //Macro = 0
	
	cout<< "Signed short Max:" << SHRT_MAX <<endl; //Macro = 32,767

	cout<< "Signed short Min:" << SHRT_MIN <<endl; //Macro = -32,768

	cout<< "Unsigned short Max:" << USHRT_MAX <<endl; //Macro = 65,535

	cout<< "Unsigned short Min:" << 0 <<endl; //Macro = 0

/********************************************************************************
** Function: Values of a byte
** Description: Calculating and printing the max and min signed and max unsigned number stored in 1 byte.
** Parameters:N/A
** Pre-conditions:N/A
** Post-conditions:N/A
** Return:N/A
********************************************************************************/

	cout<< "Max signed number stored in 1 byte:" << pow(2,8-1)-1 <<endl; //127

	cout<< "Min signed number stored in 1 byte:" << pow(-2,8-1) <<endl; //-128

	cout<< "Max unsigned number stored in 1 byte:" << pow(2,8)-1 <<endl; //255

/**********************************************************************************
** Function: Extra Credit
** Description: Creating a variable for bits that accepts user input as the value.
** Parameters:N/A
** Pre-condition:N/A
** Post-condition:N/A
** Return:N/A
**********************************************************************************/
	
	int x; //Defining the variable x as an integer
	
	int& number = x; //Stating number is an integer and equal to x

	cout<< "How many bits?"; //Asking the user for bits 
	
	cin>> number; //User inputted number	
	
	cout<< "Max unsigned number for bits entered:" << pow(2,x)-1 <<endl;
	
	cout<< "Min unsigned number for bits entered:" << 0 <<endl;
	
	cout<< "Max signed number for bits entered:" << pow(2,x-1)-1 <<endl;
	
	cout<< "Min signed number for bits entered:" << pow(-2,x-1) <<endl;

	return 0;
}
