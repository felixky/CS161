#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

void get_string(string*s){
   string p;
   cout<< "Enter a message: "; 
   getline(cin,*s );
}

void set_replace_string(string c, string *m){
   for(int i = 0; i<c.size();i++){
	 if(c[i]==' ')
	    *m+=" ";
	 else
	    *m+="-";    
   }
}

int get_search_replace(string a, string &b){
   char x;
   int total=0, ascii;

   while(b!=a){
   cout<< "Enter a lowercase letter: " ;
   cin>> x ;
   ascii = (int)x - 32;
   for(int i = 0; i<a.size();i++){
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
   string str, str2;

   get_string(&str);
   set_replace_string(str, &str2);
   get_search_replace(str,str2);

   return 0;
}
