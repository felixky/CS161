#include <iostream>

using namespace std;

int main(){
   int x;

   cout<< "Do you like vim as an editor?" << endl;
   cout<< "Enter 0 for yes and 1 for no." << endl;
   cin>> x ;

   if(x == 0){
      cout<< "You love vim!!" << endl;
   }
   else if(x == 1){
      cout<< "You hate vim!!" << endl;
   }
   return 0;
}






