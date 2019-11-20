#include <iostream>

using namespace std;

void create(int **);
void assign(int **);
void delete_mem(int *);

int main(){
   int *d;

   create(&d);   
   assign(&d);
   cout<< *d << endl;
   delete_mem(d);
   cout<< *d << endl;

return 0;
}

void create(int **d){
   *d=new int;
}

void assign(int **d){
   **d=15;
return;
}

void delete_mem(int *d){   
   delete d;
   d=NULL;
return;
}


