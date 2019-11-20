#include <iostream>
#include <cstring>

using namespace std;


void create(int *i, int **p){   
   cout << "How many numbers in the array? ";
   cin >> *i;
   *p=new int [*i];
}
void assign(int *i, int *p){
   for(int n=0;n<*i;n++){
      cout << "Enter a number: ";
      cin >> p[n];
   }
}   
   
void delete_mem(int **p){
   delete [] *p;
   *p=NULL;
}   
int main(){
   int i;
   int *p;
   
   create(&i,&p);
   assign(&i, p);
   delete_mem(&p);
return 0;
}
