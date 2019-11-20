/***************************************************************************
 ** Program: Bowling.cpp
 ** Author: Kyle Felix
 ** Date: March 5, 2017
 ** Description: This program runs a bowling simulation.
 ** Input: Number of players and their names.
 ** Output: A game of bowling.
 ***************************************************************************/
#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <ctype.h>

using namespace std;

/***************************************************************************
 ** Function: Introduction
 ** Description: User enters player's names in here.
 ** Parameters: 2D array for names and variable p for number of players.
 ** Pre-Conditions: None
 ** Post-Conditions: None
 ** Return: None
 ***************************************************************************/
void Introduction(char **names, int &p){
   for(int i=0; i<p; i++){
      cin.ignore();
      cout << "What is the name of player " << (i+1) << "?" << endl;
      //cin.ignore();
      cin.getline(names[i], 15); //Max name length 14 letters
      /*if(strlen(names[i])>15){
	 cin.ignore();
	 cout << "Your name input was too long. Enter a new name.";
	 cin.getline(names[i], 15);
      }*/
   }
} //4 lines

/***************************************************************************
 ** Function: First_bowl
 ** Description: Makes a random number
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: None
 ** Return: A random number x.
 ***************************************************************************/
int first_bowl(){
   int x;
   srand(time(NULL)); //random number generator
   x= rand() % 11; //random number between 0-10
   return x;   
} //4 lines

/***************************************************************************
 ** Function: result
 ** Description: Tells the user how many pins they knocked down.
 ** Parameters: The random number generated from first_Bowl function.
 ** Pre-Conditions: Bowl must have a number assigned.
 ** Post-Conditions: None
 ** Return: None
 ***************************************************************************/
void result(int Bowl){
   if(Bowl==0)
      cout <<"Oops, you missed them all. 0 pins." << endl;
   else if(Bowl==10)
      cout <<"Strike! You knocked down all 10 pins." << endl;
   else
      cout <<"You knocked down " << Bowl << " pins." << endl;
   return;      
} //7 lines

/***************************************************************************
 ** Function: result2
 ** Description: Tells the user how many pins they knocked down.
 ** Parameters: The random number generated from first_Bowl function and second_bowl.
 ** Pre-Conditions: Bowl/Bowl2 must have a number assigned.
 ** Post-Conditions: None
 ** Return: None
 ***************************************************************************/
void result2(int Bowl, int Bowl2){
   int Total=Bowl+Bowl2;
   if(Total==10)
      cout<< "You knocked down " << Bowl << " and got a spare. You knocked down all 10 pins." << endl;
   if(Bowl2==0)
      cout <<"Oops, you missed them all. 0 pins." << endl;
   else if(Bowl2==10)
      cout <<"You got a spare. You knocked down all 10 pins." << endl;
   else
      cout <<"You knocked down " << Bowl << " pins." << endl;
   return;      
} //9 lines
/***************************************************************************
 ** Function: Second_bowl
 ** Description: Provides a second random number based on what the first number generated was.
 ** Parameters: The number bowled in the first_bowl function.
 ** Pre-Conditions: first_bowl must provide a number.
 ** Post-Conditions: None
 ** Return: The number of pins knocked down.
 ***************************************************************************/
int second_bowl(int Bowl){
   int z;
   z = rand() % (11-Bowl);
   return z;
} //3 lines

/***************************************************************************
 ** Function: Change_Holding
 ** Description: Changes total round score to X or \ if the user knocks down 10 pins.
 ** Parameters: Holding is the score from the previous two bowls, j is player number, l is bowl, and score_card..
 ** Pre-Conditions: None
 ** Post-Conditions: None
 ** Return: None
 ***************************************************************************/
void Change_Holding(int &Holding, int j, int l, int ****score_card){
   if((**score_card)[j][l]==10)
      cout << "X |   " ;
   else
      cout<< Holding << " |   ";
   Holding=0;
}

/***************************************************************************
 ** Function: shorten_Display
 ** Description: Display print out for each bowl.
 ** Parameters: 2D array score_card, round, temp/temp2, total round score, and player number.
 ** Pre-Conditions: None
 ** Post-Conditions: None
 ** Return: None
 ***************************************************************************/
void shorten_Display(int &k, int temp, int temp2, int ****score_card, int &j, int &total){
	 temp = (**score_card)[j][k]; //First bowl of each round
	 temp2 = (**score_card)[j][++k]; //Second bowl of each round
	 --k;
	 if(temp+temp2>=10 && k>=18)
	    cout << temp << " " << temp2 << " " << (**score_card)[j][20]<< "|";
	 else
	    cout<< " " << temp << " " << temp2 << " " << "|" ;
	 total+=(**score_card)[j][k] +(**score_card)[j][++k];
} //8 lines


/***************************************************************************
 ** Function: Display
 ** Description: Creates the scoreboard for the game.
 ** Parameters: Two 2D arrays, names and score_card, and number of players.
 ** Pre-Conditions: None
 ** Post-Conditions: None
 ** Return: None
 ***************************************************************************/
void Display(int ****score_card, char ****names, int p){
   int total=0, temp, temp2, Holding=0;

   cout << "Names        |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 | Total" << endl;
   cout << "--------------------------------------------------------------------------------" << endl;   
   for(int j=0;j<p;j++){ //Displaying each name with their individual scores
      for(int i=0;i<15 && (**names)[j][i]!='\0';i++){ //prints players name
	 cout << (**names)[j][i];
      }
      for(int t=0; t<(13-strlen((**names)[j]));t++) //Makes score board more even
	    cout<< " " ;
      cout<< "|";
      for(int k=0;k<20;k++){ //Loops for number of bowls
	 shorten_Display(k,temp, temp2, score_card, j, total);
      }
      cout << total << endl;
      total=0;
      cout<< "             |   ";
      for(int l=0;l<21;l++){
	 Holding=(**score_card)[j][l]+(**score_card)[j][++l];
	 Change_Holding(Holding, j, l, score_card);
      }
      cout<< endl;
      cout << "--------------------------------------------------------------------------------" << endl;
   }
} //18 lines

/***************************************************************************
 ** Function: foo
 ** Description: Decreasing length of lower function.
 ** Parameters:Number of players
 ** Pre-Conditions:None
 ** Post-Conditions:None
 ** Return: None
 ***************************************************************************/
void foo(int &j){
   cout << "Player " << (j+1) << ", press enter to bowl."; //Tells user what player's turn it is
   cin.ignore(); //So user can press enter to bowl
   cout<< endl;
} //3 lines

/***************************************************************************
 ** Function: Bowling_function
 ** Description: Calls functins for number of pins and inputs to display.
 ** Parameters:Score_card, names, Bowl/Bowl2, round and player number.
 ** Pre-Conditions: Must be called inside a loop.
 ** Post-Conditions:None
 ** Return:None
 ***************************************************************************/
void bowling_function(int ***score_card, int Bowl, int &j, int &r, char ***names, int p, int Bowl2){
   foo(j);
   Bowl = first_bowl();
   (*score_card)[j][r]= Bowl;
   result(Bowl);
   Display(&score_card, &names, p);

   if(Bowl!=10 && j!=10){ //skips second bowl if first was a strike
      foo(j);
      Bowl2 = second_bowl(Bowl);
      (*score_card)[j][++r]= Bowl2;
      result2(Bowl, Bowl2);
      ++r;
      Display(&score_card, &names, p);
   }
   if(j==10 && (Bowl==10 || Bowl+Bowl2==10)){ //Supposed to allow a third bowl on the 10th frame
      foo(j);
      Bowl = first_bowl();
      (*score_card)[j][20]= Bowl;
      result(Bowl);
      Display(&score_card, &names, p);
   }
   if(Bowl==10){
      r+=2;
   }
} //14 lines

/***************************************************************************
 ** Function: start_bowling
 ** Description: prints round number and interates through players.
 ** Parameters:Names, score_card, and number of players.
 ** Pre-Conditions:None
 ** Post-Conditions: None
 ** Return: None
 ***************************************************************************/
void start_bowling(int ***score_card, int &p, char ***names){
   int Bowl, Bowl2, i, r=0;

   for(int k=1;k<11;k++){ //looping through rounds 1-10
      cout<< "Round " << k << endl;
      for(int j=0;j<p;j++){ //looping through players
	 for(i=0;i<1;i++){
	    bowling_function(score_card,Bowl,j,r,names, p, Bowl2); 
	 }
         r-=2;	 
      }
      r+=2;
   }
   return;   
} //7 lines

/***************************************************************************
 ** Function: num_players
 ** Description: Error checks number of players input.
 ** Parameters: Number of players address.
 ** Pre-Conditions: None
 ** Post-Conditions: None
 ** Return:None
 ***************************************************************************/
void num_players(int &p){
   cout<< "How many players are there? " ;
   cin >> p ;

   while(p<1){
      if(isdigit(p)==0){ //Supposed to make sure the input is a number
	 cout << "That not a valid number, enter number of players again: ";
	 cin.clear();
	 cin.ignore();
	 cin>> p;
	 cout<< endl;
      }
      else  //if p is a number and less than 1 this else statement should run
	 cout << "That not a valid number, enter number of players again: ";
      cin.ignore();
      cin>> p;
      cout<< endl;
   }
} //13 lines

/***************************************************************************
 ** Function: Assign
 ** Description: Creates 2D array score_card and names
 ** Parameters:Number of players, names and score_card
 ** Pre-Conditions: names and score_card must be char***.
 ** Post-Conditions: None
 ** Return: None
 ***************************************************************************/
void Assign(char ***names, int &p, int ***score_card){
   *names = new char *[p]; //creates a char pointer that points to an array of pointers
   for(int i=0;i<p;i++)
      (*names)[i] = new char [15]; //array of pointers point here

   *score_card = new int *[p];
   for(int i=0;i<p;i++)
      (*score_card)[i] = new int [21];
} //6 lines

/***************************************************************************
 ** Function:delete_names
 ** Description: Deletes the 2D arrays
 ** Parameters: number of players, names and score_card
 ** Pre-Conditions: None
 ** Post-Conditions: None
 ** Return: None
 ***************************************************************************/
void delete_names(char ***names, int p, int ***score_card){
   for(int i=0;i<p;i++)
      delete [](*score_card)[i]; //deletes the contents

   for(int i=0;i<p;i++)
      delete [](*names)[i]; //deletes the contents

   delete [] *names; //deletes char*
   *names=NULL;
   delete [] *score_card; //deletes int*
   *score_card=NULL;
} //8 lines

/***************************************************************************
 ** Function: main
 ** Description: Start of program
 ** Parameters: None
 ** Pre-Conditions: None
 ** Post-Conditions: None
 ** Return: 0
 ***************************************************************************/
int main(){
   char **names;
   int **score_card, p;
   num_players(p);
   Assign(&names, p, &score_card);

   Introduction(names, p);
   start_bowling(&score_card, p, &names);
   delete_names(&names, p, &score_card);
   return 0;
} //5 lines

