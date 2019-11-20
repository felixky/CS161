#include <iostream>

using namespace std;

/*int sum_elements(int arr[][3]);

int main(){
   int arr[3][3];

   for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
	 arr[i][j]= (j+1);
   sum_elements(arr);
   return 0;
}
int sum_elements(int arr[][3]){
   int total=0;
   for(int i=0;i<3;i++)
      for(int j=0;j<3;j++)
	 total+=arr[i][j];
   cout<< "Total of elements: " << total << endl;
}*/

void sum_elements(int *x, int *y, int *z, int N);

int main(){
   int *x, *y, *z, N;

   cout<<"Enter number of elements in each array: " ;
   cin>> N;

   x= new int[N];
   y= new int[N];
   z= new int[N];

   for(int i=0;i<N;i++){
      x[i]=2;
      y[i]=1;
   }
   sum_elements(x, y, z, N);
return 0;
}

void sum_elements(int *x, int *y, int *z, int N){
   int Sum;

   for(int i=0;i<N;i++){
      Sum=x[i]+y[i];
      z[i]=Sum;
      Sum=0;
   }
   for(int k=0;k<N;k++)
      cout << z[k] << "," ;
}









