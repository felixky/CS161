#include <iostream>
#include <cstdlib>

using namespace std;

void towers(int disks, int b[][3], int from_col, int to_col, int spare);
void print_array(int array[][3]);
void move_disks(int disks, int b[][3], int from_col, int to_col, int spare);

int main(){
   int array[3][3]={{1,0,0},{2,0,0},{3,0,0}};
       
   towers(3, array, 1, 3, 2);
return 0;
}

void towers(int disks, int b[][3], int from_col, int to_col, int spare){

   if(disks>=1){
      towers(disks-1, b,from_col, spare, to_col);
      move_disks(disks, b,from_col,to_col,spare);
      print_array(b);
      towers(disks-1,b,spare,to_col,from_col);
   }
}

void print_array(int array[][3]){
 
   for(int i=0;i<3;i++){
      for(int j=0;j<3;j++)
	 cout << array[i][j] << " " ;
      cout << endl;	
   }    
   cout << "------" << endl;

}

void move_disks(int disks, int b[][3], int from_col, int to_col, int spare){

   for(int i=0; i<disks; i++){
      if(b[i][0]>0 && i<3){
	 b[2][disks] = b[i][0];
         b[i][0]=0;
      }
      else{
         b[1][2]=b[2][1];
	 b[1][1]=0;
      }

   }
}



