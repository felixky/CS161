/**************************************************************************************
** Program: adventure.cpp
** Author: Kyle Felix
** Date: 1/22/17
** Description: You have entered Magic Mountain and are deciding how to spend your time.
** Input: User values for decisions. Either 1 or 2. 
** Output: Story based on user output.
**************************************************************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	
	int x; //x, y, z, are all varibles that will be used in the program as ints
	int y;
	int z;

	srand(time(NULL)); //Allows the element of choice
	y = rand() % 3; //Range from 0-2
	z = rand() % 11; //Range from 0-10

//Beginning of story

	cout<< "Welcome to Magic Mountain! Do you want to ride roller coasters or play games?" <<endl;
	cout<< "Type 1 for roller coasters and 2 for games." <<endl;	
	cin>> x ;   //User inputs value to decide course of the story

//The comment of X question helped remind me which statements were embedded in each other
	if(x == 1){  //First question
		cout<< "Do you want to ride a coaster that will make you dizzy or goes really fast?" << endl;
		cout<< "Type 1 for dizzy and 2 for fast." << endl;
		cin>> x ;
	
		if(x == 1){ //second question
			cout<< "Great choice! Your going on Green Launturn! Here you will experience quick changes in speed and flips.";
			cout<< "Now that the ride is over, would you like to ride again or find another ride?" << endl;
			cout<< "Type 1 to ride again or 2 for a new ride." << endl;
			cin>> x ;
		
			if(x == 1){ //third question
				cout<< "Nice choice! You are riding Green Launturn again.";
				cout<< "Now that that's over, let's go to a new ride."<< endl;
				cout<< " Type 1 to ride Ninja and 2 for Scream." << endl;
				cin>> x ;
			
				if(x == 1){ //fourth question
					cout<< "Wow! Wasn't Ninja fun!? The park is now closing. Do you want to come again tomorrow?"<< endl;
					cout<< "Type 1 for yes and 2 for no." << endl;
					cin>> x ;
				
					if(x == 1){ //Fifth question
						cout<< "Fantastic, see you then." << endl;
						return 0; //End of story
					}
						
					else if(x == 2){ //Fifth question
						cout<< "Aww! That's too bad." << endl;
						return 0; //End of story
					}				
				}
				else if(x == 2){ //fourth question
					cout<< "We're sorry. Scream is now closed and the park is closing. Will you come tomorrow?" << endl;
					cout<< "Type 1 for yes and 2 for no." << endl;
					cin>> x ;
					
					if(x == 1){ //Fifth question
						cout<< "See you then!" << endl;
						return 0; //Possible end to story
					}

					else if(x == 2){ //Fifth question
						cout<< "What? I guess you don't want to have fun." << endl;
						return 0; //Posssible end to story
					}
				}
			}

			else if(x == 2){ //Third question
				cout<< "Great! Ninja or Scream?" << endl;
				cout<< "Type 1 to ride Ninja and 2 to ride Scream." << endl;
				cin>> x ;
				
				if(x == 1){ //Fourth question
					cout<< "Great choice!... It looks like Ninja is closed." << endl;
					cout<< "Type 1 to leave the park and 2 to go onto Scream." << endl;
					cin>> x ;
					
					if(x == 1){ //Fifth question
						cout<< "Good bye. Will you come back tomorrow?" << endl;
						cout<< "Type 1 for yes and 2 for no." << endl;
						cin>> x ;
						
						if(x == 1){ //Sixth question
							cout<< "Great!" << endl;
							return 0; //End to story
						}
						
						else if(x == 2){ //Sixth question
							cout<< "Too bad." << endl;
							return 0; //End to story
						}
					}
			
					else if(x == 2){ //Fifth question
						cout<< "The line is very long. Wait or leave the park?" << endl;
						cout<< "Type 1 to wait and 2 to leave." << endl;
						cin>> x ;

						if(x == 1){ //Sixth question
							cout<< "That wasn't worth the wait..." << endl;
							return 0; //End to story
						}	
						
						else if(x == 2){ //Sixth question
							cout<< "Bye" << endl;
							return 0;  //End to the story
						}
					}
				}
				else if(x == 2){ //Fourth question
					cout<< "Nice choice! Scream is always fun." << endl;
					cout<< "Type 1 to ride Scream again or 2 to leave the park." << endl;
					cin>> x ;
					
					if(x == 1){ //Fifth question
						cout<< "It's too late the park is closing." << endl;
						return 0;
					}
					
					else if(x == 2){ //Fifth question
						cout<< "Hope to see you again soon." << endl;
						return 0;
					}
				}
			}    //These brackets are the end of the if and else if statements
		
		}
		else if(x == 2){ //Second questiom
			cout<< "You're going on Superman! 415 feet and 100 MPH of fun!" << endl;
			cout<< "Type 1 to ride Superman again or 2 to ride a different fast ride." << endl;
			cin>> x ;

			if(x == 1){ //third question
				cout<< "Wow, that was better the second time. Let's choose a new ride." << endl;
				cout<< "Type 1 for Tatsu and 2 for Viper." << endl;
				cin>> x ;

				if(x == 1){ //Fourth question
					cout<< "Nice choice, but it's too late. Will you back tomorrow?" << endl;
					cout<< "Type 1 for yes and 2 for no." << endl;
					cin>> x ;

					if(x == 1){ //Fifth question
						cout<< "See you then." << endl;
						return 0; //Another ending
					}

					else if(x == 2){ //Fifth question
						cout<< "Too Bad." << endl;
						return 0; //Ending
					}
				}
				else if(x == 2){ //Fourth question
					cout<< "Oh no!! Viper is closed. Will you come back tomorrow?" << endl;
					cout<< "Type 1 for yes and 2 for no." << endl;
					cin>> x ;

					if(x == 1){ //Fifth question
						cout<< "Great!" << endl;
						return 0; //Ending
					}

					else if(x == 2){ //Fifth question
						cout<< "Well ok then." << endl;
						return 0; //Ending
					}
				}
			}
			else if(x == 2){ //third question
				cout<< "Let's go on X2!" << endl;
				cout<< "Now that your off X2, what now?" << endl;
				cout<< "Type 1 to ride again or 2 to ride Viper." << endl;
				cin>> x ;

				if(x == 1){ //Fourth question
					cout<< "Double the fun!! The parks closing now. Will you come back tomorrow?" << endl;
					cout<< "Type 1 for yes and 2 for no." << endl;
					cin>> x ;

					if(x == 1){ //Fifth question
						cout<< "Great choice, see you tomorrow." << endl;
						return 0; //Ending
					}

					else if(x == 2){ //Fifth uestion
						cout<< "That's too bad." << endl;
						return 0; //Ending
					}
				}
				else if(x == 2){ //Fourth question
					cout<< "Looks like it's closed. Time to leave the park." << endl;
				}
			}
		}	
	}
	
	else if(x == 2){ //First question
		cout<< "Let's play Ring Toss." << endl;
		cout<< "If y = 1 you win, but if y = 0 or 2 you lose." <<endl;
		cout<< "y = " << y << endl;

		if(y == 1){ //Second question
			cout<< "Nice throw!! You win a stuffed bear!" << endl;
			cout<< "Do you want to play again or find a new game?" <<endl;
			cout<< "Type 1 to play again or 2 to find a new game." << endl;
			cin>> x ;

			if(x == 1){ //third question
				cout<< "Let's play Ring Toss." << endl;
				cout<< "If y = 1 you win, but if y = 0 or 2 you lose." << endl;
				cout<< "y = " << y << endl;

				if(y == 1){ //Fourth question
					cout<< "Nice toss! You win a GIANT bear!" << endl;
					cout<< "Let's play a new game. Go to the arcade or to the 3 point shootout." <<endl;
					cout<< "Type 1 to got to the arcade or 2 to go to the 3 point shootout." << endl;
					cin>> x ;

					if(x == 1){ //Fifth question
						cout<< "Welcome to the arcade." << endl;
						cout<< "Type 1 to play the claw machine or 2 to play Pacman." << endl;
						cin>> x ;

						if(x == 1){ //Sixth question
							cout<< "If y = 1 you win, but if y = 0 or 2 you lose." << endl;
							cout<< "y = " << y << endl;
							
							if(y == 1){ //Seventh question
								cout<< "You win and leave the park feeling happy." << endl;
								return 0; //Ending
							}

							else if(y == 0 || y == 2){ //Seventh question
								cout<< "You lose and leave the park feeling sad." << endl;
								return 0; //Ending
							}
						}
						
						else if(x == 2){ // Sixth question
							cout<< "You become addicted to Pacman and spend the whole day playing." << endl;
							return 0; //Ending
						}
					}

					else if(x == 2){ //Fifth question
						cout<< "You are at the 3 point shootout and need to make 8/10 to win a prize." << endl;
						cout<< "You made " << z << endl;
					
						if(z < 8){ //Sixth question
							cout<< "Better luck next time." << endl;
							return 0; //Ending
						}
						else if(z > 7){ //Sixth question
							cout<< " Nice shot!! You win your own ball!" << endl;
							return 0; //Ending
						} 
					}
				}
				else if(y == 0 || y == 2){ //Fourth question
					cout<< "You lose... and decide to go to the arcade." << endl;
					cout<< "Type 1 to play pacman and 2 to play the claw machine." << endl;
					cin>> x ;

					if(x == 1){ //Fifth question
						cout<< "You spend the whole day playing pacman." << endl;
						return 0; //Ending
					}

					else if(x == 2){ //Fifth question
						cout<< "You struggle for hours at this game... but eventually win!" << endl;
						return 0; //Ending
					}
				}
			}
			else if(x == 2){ //third question
				cout<< "Do you want to go to a 3 point shootout or knock pins over with a baseball?" << endl;
				cout<< "Type 1 for the 3 point shootout and 2 for baseball." << endl;
				cin>> x ;

				if(x == 1){ //Fourth question
					cout<< "Make 8/10 to win a prize." << endl;
					cout<< "You made " << z << endl;

					if(z < 8){ //Fifth question
						cout<< "Better luck next time... You leave the park feeling sad fromm losing." << endl;
						return 0;
					}
	
					else if(z > 7){ //Fifth question
						cout<< "You're on fire!! You leave the park with a new basketball." << endl;
						return 0;
					}
				}
				else if(x == 2){ //fourth question
					cout<< "You throw at pins for an hour... Your arm starts to hurt." << endl;
					cout<< "You decide to go home and ice your arm." << endl;
					return 0;
				}
			}
		}
		else if(y == 0 || y == 2){ //second question
			cout<< "Better luck next time." << endl;
			cout<< "Type 1 to play again or 2 for a new game." << endl;
			cin>> x ;

			if(x == 1){ //third question
				cout<< "Let's play Ring Toss." << endl;
				cout<< "If y = 1 you win, but if y = 0 or 2 you lose." << endl;
				cout<< "y = " << y << endl;
				
				if(y == 1){ //Fourth question
					cout<< "Nice toss!! You win." << endl;
					cout<< "Type 1 to play again or 2 to play a new game." << endl;
					cin>> x ;

					if(x == 1){ //Fifth question
						cout<< "Let's play Ring Toss." << endl;
						cout<< "If y = 1 you win, but if y = 0 or 2 you lose." << endl;
						cout<< "y = " << y << endl;

						if(y == 1){ //Sixth question
							cout<< "Nice throw! Your on fire!" << endl;
							cout<< "You decide to leave happily with the toys you won." << endl;
							return 0;
						}

						else if(y == 0 || y == 2){ //Sixth question
							cout<< "Better luck next time." << endl;
							cout<< "The park is closing and you leave to go home." << endl;
							return 0;
						}
					}
					else if(x == 2){ //Fifth question
						cout<<  "You decide to go play a the 3 point shootout." << endl;
						cout<< "Make 8/10 to win a prize." << endl;
						cout<< "You made " << z << endl;

						if(z < 8){ //Sixth question
							cout<< "Nice try...You leave without a prize." << endl;
							return 0;
						}
						
						else if(z > 7){ //Sixth question
							cout<< "You have Curry range!!" << endl;
							cout<< " You leave happy and with a new basketball." << endl;
							return 0;
						}
					}
				}
			
				else if(y == 0 || y == 2){ //Fourth question
					cout<< "Nice try, but no luck." << endl;
					cout<< "You become frustrated and decide to go home." << endl;
					return 0;
				}
			}			
			else if(x == 2){ //Third question
				cout<< "You're now playing Cornhole. Make 2/2 to win." << endl;
				cout<< "Y = " << y << endl;

				if(y <= 1){ //Fourth question
					cout<< "Better luck next time." << endl;
					cout<< "Type 1 to play again or 2 for a new game." << endl;
					cin>> x ;
					
					if(x == 1){ //Fifth question
						cout<< "Your playing Cornhole. Make 2/2 to win." << endl;
						cout<< "y = " << y << endl;
				
						if(y <= 1){ //Sixth question
							cout<< "You lose and leave the park feeling defeated." << endl;
							return 0;
						}

						else if(y == 2){ //Sixth question
							cout<< "You win and get a Goldfish as your prize." << endl;
							return 0;
						}
					}
				}
					else if(x == 2){ //Fifth question
						cout<< "Looks like the park is closinng. Time to leave." << endl;
						return 0;
					}
				else if(y == 2){ //Fourth question
					cout<< "Nice job! You're a pro at this. You decided to leave after winnin your first game." << endl;
					return 0; //Last possible ending
				}
			}
		}

	}	
	return 0;
}























