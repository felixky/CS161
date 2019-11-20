/**************************************************************************
** Program: HW6.cpp
** Author: Kyle Felix
** Description: The user chooses a story via command line argument and the missing words are chosen from a file.
** Input: Command line argument.
** Output: A story with the missing words filled in.
*************************************************************************/
#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>

using namespace std;

int check(int argc, char *argv[]);
void Story1(char ***noun,char ***nouns,char ***verb,char ***verb_ing,char ***adj);
void Story1_cont(char ***noun,char ***nouns,char ***verb,char ***verb_ing,char ***adj);
void Story2(char ***noun,char ***nouns,char ***verb,char ***verb_ing,char ***adj);
void Story3(char ***noun,char ***nouns,char ***verb,char ***verb_ing,char ***adj);
char *noun_fun(char ***noun);
char *nouns_fun(char ***nouns);
char *verb_fun(char ***verb);
char *verb_ing_fun(char ***verb_ing);
char *adj_fun(char ***adj);

/**************************************************************************
** Function: Assign
** Description: Create the 2D arrays dynamically.
** Parameters: Five 2D arrays.
** Pre-Conditions: None
** Post-Conditions: None
** Return: None
*************************************************************************/
void Assign(char **noun, char **nouns, char **verb, char **verb_ing, char **adj){
   for(int i=0; i<25; i++){ //Dynamic arrays created here
      noun[i]=new char[30];
      nouns[i]=new char[30];
      verb[i]=new char[30];
      verb_ing[i]=new char[30];
      adj[i]=new char[30];
   }
}


/**************************************************************************
** Function: main
** Description: Call the functions.
** Parameters: argc and argv.
** Pre-Conditions: None
** Post-Conditions: None
** Return: 0
*************************************************************************/
int main(int argc, char *argv[]){
   int c, x;
   char z, **noun=new char*[25], **nouns=new char*[25], **verb=new char*[25], **verb_ing=new char*[25], **adj=new char*[25];

   Assign(noun, nouns, verb, verb_ing, adj);
   c=check(argc, argv);
   if(c==0)
      return 0;

   z= argv[1][0]; //changes the command line story choice from a char to an int
   x=(int)z;
   if(x==49) //Ascii value
      Story1(&noun, &nouns, &verb, &verb_ing, &adj);
   if(x==50) //Ascii value
      Story2(&noun, &nouns, &verb, &verb_ing, &adj);
   if(x==51) //Ascii value
      Story3(&noun, &nouns, &verb, &verb_ing, &adj);

   return 0;
}

/**************************************************************************
** Function: check 
** Description: Error checks the command line to make sure the user chooses story 1-3.
** Parameters: argc and argv.
** Pre-Conditions: None
** Post-Conditions: A valid story has been chosen.
** Return: None
*************************************************************************/
int check(int argc, char *argv[]){
   char z;
   int x;
   if(argc!=2){ //2 arguments are ./a.out and a number. < word_file is not counted here
      cout << "You did not provide the correct number of arguments." << endl;
      return 0;
   }
   z= argv[1][0];
   x=(int)z;

   if(x<49 || x>51){ //Converts argument 2 to it's ascii value
      cout << "You did not enter a number between 1 and 3." << endl;
      return 0;
   }
}   

/**************************************************************************
** Function: Story1 and story1_cont
** Description: The first story with calls to other functions to get the missing words.
** Parameters: 2D arrays for verbs, nouns, and adjectives.
** Pre-Conditions: None
** Post-Conditions: None
** Return: None
*************************************************************************/
void Story1(char ***noun,char ***nouns,char ***verb,char ***verb_ing,char ***adj){

   cout << "Most doctors agree that bicycle ";
      cout <<verb_ing_fun(verb_ing); //call to function to get missing word
   cout << " is a/an ";
      cout <<adj_fun(adj);
   cout << " form of exercise. ";
      cout <<verb_ing_fun(verb_ing);
   cout << " a bicycle enables you to develope your ";
      cout <<noun_fun(noun);
   cout << " muscles, as well as increase the rate of your ";
      cout <<noun_fun(noun);
   cout << " beat. More ";
      cout <<nouns_fun(nouns);
   cout << " around the world ";
      cout <<verb_fun(verb);
   Story1_cont(noun,nouns,verb,verb_ing,adj);   

}

void Story1_cont(char ***noun,char ***nouns,char ***verb,char ***verb_ing,char ***adj){
   
   cout << " bicycles than drive ";
      cout <<nouns_fun(nouns);
   cout << ". No matter what kind of ";
      cout <<noun_fun(noun);
   cout << " you ";
      cout <<verb_fun(verb_ing);
   cout << ", always be sure to wear a/an ";
      cout <<adj_fun(adj);
   cout << ". Make sure to have ";
      cout <<adj_fun(adj);
   cout << " reflectors too!" << endl;
}   

/**************************************************************************
** Function: Story2
** Description: The second story with function calls the missing words.
** Parameters: 2D arrays for verbs, nouns, and adjectives.
** Pre-Conditions: None
** Post-Conditions: None
** Return: None
*************************************************************************/
void Story2(char ***noun,char ***nouns,char ***verb,char ***verb_ing,char ***adj){

   cout << "Yesterday, ";
      cout << noun_fun(noun);
   cout << " and I went to the park. On our way to the ";
      cout << adj_fun(adj);
   cout << " park, we saw a ";
      cout << adj_fun(adj) << " "; 
	 cout << noun_fun(noun);
   cout << " on a bike. We also saw big ";
      cout << adj_fun(adj);
   cout << " ballons tied to a ";
      cout << noun_fun(noun);
   cout << ". Once we got to the ";
      cout << adj_fun(adj);
   cout << " park, the sky turned ";
      cout << adj_fun(adj) << ". It started to " << verb_fun(verb) << " and " << verb_fun(verb);
   cout << ". " << noun_fun(noun) << " and I " << verb_fun(verb) << " all the way home. Tomorrow we will try to go to the " << adj_fun(adj) << " park again and hope it doesn't " << verb_fun(verb) << "." << endl;    

}

/**************************************************************************
** Function: Story3
** Description: Third story with function calls to get the missing words.
** Parameters: 2D arrays for nouns, verbs, and adjectives.
** Pre-Conditions: None 
** Post-Conditions: None
** Return: None
*************************************************************************/
void Story3(char ***noun,char ***nouns,char ***verb,char ***verb_ing,char ***adj){

   cout << "Spring break 2017, oh how I have been waiting for you! Spring break is when you go to some " << adj_fun(adj) << " place to spend time with " << noun_fun(noun) << ". Getting to ";
      cout << noun_fun(noun) << " is going to take " << adj_fun(adj) << " hours. My favorite part of spring break is " << verb_ing_fun(verb_ing) << " in the " << noun_fun(noun) ;
   cout << ". During spring break, " << noun_fun(noun) << " and I plan to " << verb_fun(verb) << " all the way to " << noun_fun(noun) << ". After spring break, I will be ready to return to " ;
      cout << noun_fun(noun) << " and " << verb_fun(verb) << " hard to finish " << noun_fun(noun);
   cout << ". Thanks spring break 2017!" << endl;
}


/**************************************************************************
** Function: char *noun 
** Description: Reads into the file provided and finds a noun.
** Parameters: pointer to a 2D array.
** Pre-Conditions: None
** Post-Conditions: A word will be returned from this function.
** Return: A noun.
*************************************************************************/
char *noun_fun(char ***noun){
   int hold=1, x, total=1;
   char Cmp[]= "noun";
   srand(time(NULL)); //random number generator
   x=rand()%25;
   cin.clear(); //This line and the one below return you back to the top of the word_file
   cin.seekg(0, ios::beg);
   while(hold==1 && cin.eof()==false){ 
      for(int i=0; i<x;i++) //randomizes the noun chosen
         cin >> (*noun)[x];
      if(strcmp((*noun)[x],Cmp)==0){ //Finds first word noun
         cin >> (*noun)[x];
	 hold=2;
      }
   }
return (*noun)[x];
}
/**************************************************************************
** Function: char *nouns
** Description: Reads into the file provided and finds a noun ending in s.
** Parameters: A pointer to the 2D array nouns.
** Pre-Conditions: None
** Post-Conditions: None
** Return: A noun ending in s.
*************************************************************************/
char *nouns_fun(char ***nouns){
   int hold=1, x, y, stop=1, total=1;
   char Cmp[]= "noun";
   x=rand()%25;
   cin.clear(); //This line and the one below return you back to the top of the word_file
   cin.seekg(0, ios::beg);
   while(hold==1){
         cin >> (*nouns)[x];
      if(strcmp((*nouns)[x],Cmp)==0){
	 while(stop==1){
            cin >> (*nouns)[x];
            y=strlen((*nouns)[x]); //finds the length of the noun ending in -s
	    if((*nouns)[x][(y-1)]=='s') //makes sure the word after noun ends in an s
	       stop=2;
	 }
	 hold=2;
      }
   }

return (*nouns)[x]; 
}
/**************************************************************************
** Function: char *verb_fun
** Description:Reads into the file provided and finds a verb.
** Parameters: A pointer to a 2D array verb.
** Pre-Conditions:  None
** Post-Conditions: None
** Return: a verb
*************************************************************************/
char *verb_fun(char ***verb){
   int hold=1, x, total=1;
   char Cmp[]= "verb";
   x=rand()%25;
   cin.clear(); //This line and the one below return you back to the top of the word_file
   cin.seekg(0, ios::beg);
   while(hold==1){
         cin >> (*verb)[x];
      if(strcmp((*verb)[x],Cmp)==0){
         cin >> (*verb)[x];
	 hold=2;
      }
   }
return (*verb)[x];
}
/**************************************************************************
** Function: char *verb_ing_fun
** Description:Reads into the file provided and finds a verb ending in ing.
** Parameters: A pointer to a 2D array verb_ing.
** Pre-Conditions: None
** Post-Conditions: None
** Return: A verb ending in ing.
*************************************************************************/
char *verb_ing_fun(char ***verb_ing){
   int hold=1, x, y, stop=1, total=1;
   char Cmp[]= "verb";
   x=rand()%25;
   cin.clear(); //This line and the one below return you back to the top of the word_file
   cin.seekg(0, ios::beg);
   while(hold==1){
         cin >> (*verb_ing)[x];
      if(strcmp((*verb_ing)[x],Cmp)==0){
	 while(stop==1){
            cin >> (*verb_ing)[x];
            y=strlen((*verb_ing)[x]);
	    if((*verb_ing)[x][(y)]=='g' && (*verb_ing)[x][(y-1)]=='n' && (*verb_ing)[x][(y-2)]=='i') //makes sure verb ends in -ing
	       stop=2;
	 }
	 hold=2;
      }
   }

return (*verb_ing)[x];
}
/**************************************************************************
** Function: char *adj_fun
** Description:Reads into the file provided and finds a adjective.
** Parameters: a 2D array pointer.
** Pre-Conditions: None
** Post-Conditions: None
** Return: An adjective.
*************************************************************************/
char *adj_fun(char ***adj){
   int hold=1, x, total=1;
   char Cmp[]= "adjective";
   x=rand()%25;
   cin.clear(); //This line and the one below return you back to the top of the word_file
   cin.seekg(0, ios::beg);
   while(hold==1 && cin.eof()==false){
         cin >> (*adj)[x];
      if(strcmp((*adj)[x],Cmp)==0){
         cin >> (*adj)[x];
	 hold=2;
      }
   }
return (*adj)[x];
}







