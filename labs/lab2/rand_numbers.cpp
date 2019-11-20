/*****************************************************************************************
** Program: rand_numbers.cpp
** Author: Kyle Felix
** Date: 1/20/17
** Description:
** Input: 
** Output: 
*****************************************************************************************/
#include <iostream>
#include <ctime> /*included to allow time() to be used*/
#include <cstdlib> /*included to allow rand() and srand() to be used*/

using namespace std;

int main() {
	int x;	/*variable to hold our random integer*/
	srand(time(NULL));	/*seeds random number generator. Do this just once*/

	x = rand() % 6;
		cout<< "x = " << x << endl;
	if(x == 0){
			cout<< "Bummer, I'm zero!!!" << endl;
	}
	else if(x == 1 || x == 3 || x == 5){
			cout<< "I'm an odd number!" << endl;
	}
	else{
		cout<< "I'm an even number!" << endl; 
	}

	x = rand() % 6;
		cout<< "x = " << x << endl;
	if(x == 0){
		cout<< "Bummer, I'm zero!!!" << endl;
	}
	else if(x == 1 || x == 3 || x == 5){
		cout<< "I'm an odd number!" << endl;
	}
	else{
		cout<< "I'm an even number!" << endl;
	}
	return 0;
}






























