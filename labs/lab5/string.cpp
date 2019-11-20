#include <iostream>
#include <string>

using namespace std;

//string get_sentence();
void get_sentence(string &s);

int main (){
   string sentence;

   get_sentence(sentence);
   cout<< sentence << endl;

   return 0;
} 

/*
**Pre Conditions: Sentence must have the variable type of string.
**Post Conditions: s is being returned as a string.
*/
/*string get_sentence(){
   string s;

   cout<< "Enter a sentence." << endl;
   getline(cin,s);

   return s ;
} */

/*
**Pre Conditions: The parameter sentence must be a string.
**Post Conditions: s is inputted into the same address as sentence.
*/
void get_sentence(string &s){

   cout<< "Enter a Sentence." << endl;
   getline(cin,s);
}
