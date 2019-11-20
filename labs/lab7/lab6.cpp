#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void get_string(char *s){
   cout<< "Enter a message: "; 
   cin.getline(s,256);
}

void set_replace_string(char *c, char *m){
   for(int i = 0; i<strlen(c);i++){
	 if(c[i]==' ')
	    m[i]=' ';
	 else
	    m[i]='-';    
   }
}

int get_search_replace(char *a, char *b){
   char x;
   int total=0, ascii;

   while(strcmp(a,b)!=0){
   cout<< "Enter a lowercase letter: " ;
   cin>> x ;
   ascii = (int)x - 32;
   for(int i = 0; i<strlen(a);i++){
      if(a[i]==x){
         b[i]=x;
	 total = total + 1;
      }
      if(a[i]==ascii){
         b[i]= (char)ascii;
      }	 
   }	 
   cout<< "There was "<< total <<" found." << endl;
   cout<< "The message is:" << b << endl;
   total = 0;
   }
   return total;
}




int main(){
   char str[256]; 
   char str2[256];

   get_string(&str[256]);
   set_replace_string(&str[256], &str2[256]);
   get_search_replace(&str[256],&str2[256]);

   return 0;
}
