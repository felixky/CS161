#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
   char *str=new char[1];
   char s;
   char *temp;
   int x,z;
   srand(time(NULL));
   x=rand() % 11;
   cout << x << endl;
   z=rand() % (11-x);
   cout << z << endl;

   str[0]='\0';
   cout<<"Enter a sentence: ";
   cin.get(s);
   while(s!='\n'){
      temp=str;
      str=new char[strlen(temp)+2];
      strcpy(str, temp);
      str[strlen(temp)]=s;
      str[strlen(temp)+1]='\0';
      delete [] temp;
      cin.get(s);
      cout<< str << endl;
   }
   cout<< "str: " << str << endl;
   cout<< "Name   ";
   cout << "| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | Total" << endl;
   cout<< "-------------------------------------------------------" << endl;
   cout<< str << "   |" << x << " " << z << "|   |   |   |   |   |   |   |   |    |      " << endl;

return 0;
}
