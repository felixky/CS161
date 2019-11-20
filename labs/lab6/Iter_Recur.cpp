#include<iostream>
#include<sys/time.h>
#include<cstdlib>

using std::cout;
using std::endl;
using std::cin;
void fib_iter(int);
int fib_recurs(int);

int main(){
   typedef struct timeval time;
   time stop, start;

   int x;
   gettimeofday(&start, NULL);
   //Time you iterative or recursive function here
   cout <<"Enter a number: " ;
   cin>> x ;
   fib_iter(x);
   cout << "Start time: " << start.tv_usec << " micro seconds." << endl;

   gettimeofday(&stop, NULL);
   cout << "fib_recurs at the (" << x << ") spot is: " << fib_recurs(x) << endl;
   cout << "Stop time: " << stop.tv_usec << " micro seconds." <<  endl;
   
   if(stop.tv_sec > start.tv_sec)
      cout<< "Seconds; " << stop.tv_sec-start.tv_sec << endl;
   
   else
      cout << "Micro: " << stop.tv_usec-start.tv_usec << endl;

   return 0;
}   

void fib_iter(int n){
   int start=0, second=1, end;

   for(int x=0;x<n;x++){
      if(x==0){
	 end = x;
	// cout << "Fibonacci series: " << end << endl;
      }	    
      else{
         end = start + second;
         start = second;
         second = end;
         //cout << "Fibonacci series: " << end << endl;
      }
   }   
         cout << "fib_iter at the (" << n << ") spot is: " << end << endl;
}

int fib_recurs(int n){

   if(n<2){
      return n;
   }
   
   else{
      return fib_recurs(n-2)+fib_recurs(n-1);
   }
      
}  









































