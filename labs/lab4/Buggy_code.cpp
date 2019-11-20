#include <iostream>

using namespace std;

int main(){
   int x=3, y, num, total=1;
   char myAnswer;

   y=x;
   cout<< "y is set to: " << y << endl;

   cout<< "Please input a number for y: " << endl;
   cin>> y ;

   bool again=true;
   while(again){
      if(x>y){
	 cout<< "X is greater than Y. " << endl;
	 cout<< "Would you like to input another number? 1 for yes and 2 for no." << endl;
	 cin>> y;
	 if(y==1){
	    cout<< "Enter a new number for y: " ;
	    cin>> y ;
	 }   
	 else   
	    again=false;
      }	 
      else if(x<y){
	 cout<< "X is less than Y." << endl;
	 cout<< "Would you like to input another number? 1 for yes and 2 for no." << endl;
	 cin>> y ;	 
	 if(y==1){
	    cout<< "Enter a new number for y: " ;
	    cin>> y ;
	 }   
	 else   
	    again=false;
      }
      else{
	 cout<< "Xand Y are equal. Would you like to input another number? 1 for yes and 2 for no." << endl;
	 cin>> y ;
	 if(y==1){
	    cout<< "Enter a new number for y: " ;
	    cin>> y ;
	 }   
	 else   
	    again=false;
      }	 
   }
for(x=0; x < 10; x++)
   cout<< x << endl;

cout<< "What number would you like to find the factorial for? " << endl;
cin>> num ;
for(int x = num; x > 0; x--)
   total = total* x;
   cout<< total << endl;
cout<< "Arer you enjoying cs161? (y or n) " << endl;
cin>> myAnswer ;
if(myAnswer == y)
   cout<< "YAY!" << endl;
else
   cout<< "YOU WILL SOON!" << endl;
return 0;
}
