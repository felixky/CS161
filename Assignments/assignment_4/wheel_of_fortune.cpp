/****************************************************************************
**Program: Wheel_of_fortune.cpp
**Author: Kyle Felix
**Date: 2/19/17
**Description: This programs resembles the tv game show wheel of fortune.
**Input: Number of rounds, letters, the message, and decisions.
**Output: A game of wheel of fortune.
***************************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

void congrats(int k, int m);

/****************************************************************************
**Name: Introduction
**Description: Beginning of the game. 
**Parameters: Two int *, one for rounds and one for number of players.
**Pre Conditions:N/A
**Post Conditions:*x and *y must have a value.
**Return:N/A
***************************************************************************/
void Introduction(int *x, int *y){

   cout << "Welcome to Wheel of Fortune" << endl;

   cout << "How many players will be playing? " ;
   cin >> *x ;

   cout << "How many rounds do you want to play? " ;
   cin >> *y ;
}

/****************************************************************************
**Name: Message_choice
**Description: User inputs the hidden message here.
**Parameters: String *s points to a string in main.
**Pre Conditions:S has nothing in it.
**Post Conditions:N/A
**Return:N/A
***************************************************************************/
void Message_choice(string*s){

   cout << "Enter the hidden message: ";
   getline(cin,*s); //The program only lets me enter a string if two getlines are here?
   getline(cin,*s);
}

/****************************************************************************
**Name: set_replace_string
**Description: Changes user inputted string to dashes.
**Parameters:string with user input, an empty string for the hidden message, and another empty string to clear the contents of str2 after each round.
**Pre Conditions:string c must have a string inside, *m and str3 must be empty.
**Post Conditions:string *m must have a dashed out message in it.
**Return:N/A
***************************************************************************/
void set_replace_string(string c, string *m, string str3){
   *m=str3; //At the beginning of a round *m is cleared out for a new hidden message
   for(int i=0;i<c.size();i++){
      if(c[i]==' ')
	 *m+=" "; //replaces spaces with spaces
      else
	 *m+="-"; //replaces letters with hyphens	 
   }
   cout<< *m << endl; 
}   

/****************************************************************************
**Name: get_search_replace
**Description: User inputs a letter and if it matches any in the message, the letter is revealed.
**Parameters: Both hidden and origional strings, an int to hold money earned, and a reference to a variable to hold number of letters found.
**Pre Conditions:Both strings must have inputs and money must be initialized earlier to be equal to zero.
**Post Conditions: N/A
**Return: Money earned with that guess.
***************************************************************************/
int get_search_replace(string a, string &b, int money, int &total){
   char x;
   int ascii, Money_round=0;
   total = 0;

   cout << "Each letter found is worth $" << money << "." << endl;
   cout << "Enter a lowercase letter: ";
   cin >> x ;
   ascii=(int)x - 32; //ascii table values so inputted lower case letters will also find capital letters
   for(int i=0;i<a.size();i++){
      if(a[i]==x){
	 b[i]=x;
	 total+=1; //Number of letters found
      }
      if(a[i]==ascii){
	 b[i]=(char)ascii;
	 total+=1; //Number of letters found
      }
   }
   cout << total << " were found." << endl;
   Money_round+= total*money;
   cout << "The message is: " << b << endl;

   return Money_round;      
}

/****************************************************************************
**Name: spin
**Description: A random number between 0 and 21 is chosen.
**Parameters:N/A
**Pre Conditions:N/A
**Post Conditions:N/A
**Return:The number chosen at random.
***************************************************************************/
int spin(){
   int x; 

   srand(time(NULL)); //creates random number generator
   x = rand() % 22; //call the function rand to get a number
   cout << "You spun a " << x << endl;
   return x;   
}

/****************************************************************************
**Name: vowel_choice
**Description:When the user chooses to buy a vowel, they a charged for it here.
**Parameters:reference m is the players money, str and str2 are the origional and hidden message.
**Pre Conditions:m>10
**Post Conditions:N/A
**Return:N/A
***************************************************************************/
void vowel_choice(int &m,string str, string &str2){
   int x, ascii;
   m-=10; //Decrease player's money by $10
   cout << "Enter in a lowercase vowel to buy: ";
   cin>> x; 
   ascii=(int)x - 32;
   for(int i=0;i<str.size();i++){
      if(str[i]==x){
	 str2[i]=x;
      }
      if(str[i]==ascii){
	 str2[i]=(char)ascii;
      }
   }
}


/****************************************************************************
**Name: solve
**Description: If the user chooses to solve the message it is done here.
**Parameters:The origional string for comparison, the player, and the players money.
**Pre Conditions:N/A
**Post Conditions:N/A
**Return:N/A
***************************************************************************/
void solve(string str, string &str2, int k,int m){
   string s;
   cout << "Enter in a message: " ;
   getline(cin, s);
   if(s!=str)
      cout << "Nope, that's not it." << endl;
   else if(s==str)
      congrats(k, m);
}

/****************************************************************************
**Name: buy_vowel
**Description: user is checked if they have more than 10 dollars then sent to another function to select vowel.
**Parameters:Player's money, origional string, hidden string, and player number.
**Pre Conditions:m must be initalized before this function.
**Post Conditions:N/A
**Return:N/A
***************************************************************************/
void buy_vowel(int &m,string str, string &str2, int k){
   if(m<10){
      cout<< "You don't have enogh money to buy a vowel." << endl;
      return; //Crashes is you get here
   }
   else
      vowel_choice(m, str, str2);
}


/****************************************************************************
**Name: three_choices
**Description: Here the user chooses to spin, buy a vowel, or solve the puzzle.
**Parameters:player's number and money, original string and hidden string.
**Pre Conditions:N/A
**Post Conditions:N/A
**Return:t is the number spun by the user.
***************************************************************************/
int three_choices(int *m, int k, string str, string &str2){
   int d, t=23; //t=23 because it is a number outside possible spin values
   cout << "Player " << k << ", do you want to spin the wheel, buy a vowel, or solve the message?" << endl;
   cout << "Enter 1 to spin, 2 to buy a vowel, or 3 to solve the message: " ;
   cin >> d ;

   do{
      if(d==1)
	 t=spin();
      else if(d==2)
	 buy_vowel(*m, str, str2, k);
	 //three_choices(*m,k,str, &str2);
      else if(d==3)
        solve(str, str2, k, *m);
      else
	 cin>> d;
   }while(t==23);
   
   return t;
}


/****************************************************************************
**Name: if_spin_is_0_or_21
**Description: This function bankrupts or ends the users turn if the spin a 0 or 21 respectively.
**Parameters:Spin number, Original message, hidden message, total letters found, and player's money.
**Pre Conditions:spin function must already have taken place
**Post Conditions:N/A
**Return:Player's money
***************************************************************************/
int if_spin_is_0_or_21(int &sv, string &str,string &str2,int total,int m){
   if(sv==0){
      cout << "You've gone backrupt!" << endl;
      return 0;
   }   
   else if(sv==21){
      cout << "You spun a 21, you lose a turn. " << endl;   
      return 0;
   }
   m=get_search_replace(str,str2, sv, total); //here m changes after each leter is inputted
   return m;
}

/****************************************************************************
**Name:congrats
**Description: This is a function that runs when the message is solved.
**Parameters:Player number and player money.
**Pre Conditions:N/A
**Post Conditions:N/A
**Return:N/A
***************************************************************************/
void congrats(int k, int m){
   cout << "Congrats player " << k << " you solved the puzzle and win the round!!" << endl;
   //for(int i=0;i<k;i++){
   cout << "Total round earnings for player " << k << " is $" << m << "." << endl;
   return;
}   

/****************************************************************************
**Name:main
**Description:Connects the functions together and holds the original and hidden message.
**Parameters:N/A
**Pre Conditions:N/A
**Post Conditions:N/A
**Return:0
***************************************************************************/
int main(){
   int p, r, sv=1, total=1,m=0, k;
   string str, str2, str3;

   Introduction(&p, &r);
   for(int w=0;w<r;w++){
      Message_choice(&str);
      set_replace_string(str, &str2, str3);

      for(k=1;k<(p+1);k++){
	 while((sv!=0 && sv!=21) && total>0){
	    if(str==str2)
	       congrats(k,m);  

	    sv = three_choices(&m,k, str, str2);  
	    m+=if_spin_is_0_or_21(sv,str,str2,total,m);  //Here m is the total money from all inputs
	    cout<< "Total round earnings: $" << m << endl;
	 }
	 m=0;
      }
   }
   return 0;
}
