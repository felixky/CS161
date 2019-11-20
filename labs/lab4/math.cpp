/**********************************************************************
** Program:math.cpp
** Author: Kyle Felix
** Description: Area under the curve.
** Input:
** Output:
********************************************************************/
#include<iostream>
#include<cmath>

using namespace std;
double f(double x, double a, double b);
double area(double a, double b, int n);
void quadratic_equation();

int main(){
   double a, b, width, total,x;
   int n;

   cout<< "What is the upper boundary of x? " << endl;
   cin>> b ;
   
   cout<< "What is the lower boundary of x? " << endl;
   cin>> a ;
   
   cout<< "How many rectangles are there? " << endl;
   cin>> n ;
  
   total= area(a, b, n);
   cout<< "The area under the curve is " << total << "." << endl;
 
   quadratic_equation();
   return 0;
} 

//Name: f
//Description: Calculation of height with the use of a while loop
//Pre Conditions: The double x, a, and b come from user input in main.
//Post Conditions: none
//Return: total. This is the height of each rectangle added to one variable.

double f(double x, double a, double b){ //Height of each rectangle
   
   double total=0, y=a;
   
   while(y<=b){  
   total+= 2*(y+x);
   y+=x;
   }   
   
   //cout<< total << endl;
   return total;
}

//Name: area
//Description:This function calculates the width then calls f and produces the area with those two values.
//Pre Condition:The double a and b,and the int n.
//Post Condition:none
//Return: Area under the curve

double area(double a, double b, int n){ //Area under the curve
   double width, area, x, height;
   width=((b-a)/n);
   //cout<< "Width = " << width << endl;

   x=(b-a)/n;
  // cout<< "x = " << x << endl;
   //cout<< "a =" << a << " and b =" << b << endl;

   height=f(x, a, b);
   //cout<< "Height = " << height << endl;

   area= width*height;
   //cout<< "Area = " << area << endl;
   return area;
}

//Name: quadratic_equation
//Description:This function takes user values and inputs them into the quadratic formula.
//Pre Condition:none
//Post Condition:none
//Return:none

void quadratic_equation(){
   double a, b, c, x1, x2;
   cout<< "What value is a? ";
   cin>> a;

   cout<< "What value is b? ";
   cin>> b ;

   cout<< "What value is c? ";
   cin>> c ;


   x1=(-b + sqrt(b*b -4*a*c))/(2*a);
   cout<< "x1 = " << x1 << endl;

   x2=(-b - sqrt(b*b -4*a*c))/(2*a);
   cout<< "x2 = " << x2 << endl;

return;   
}












