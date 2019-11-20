#include <iostream>
#include <string>

using namespace std;

int main() {
	string name;
	int x;
	bool got_it=false;

	do {
		cout<< "Do you want to guess your TA? Enter 1 for yes and 2 for no." << endl;
		cin>> x ;

		if(x == 1){
			cout<< "Who do you think it is?" << endl;
			cin>> name ;
			
			if(name == "Jeffery"){
				cout<< "You're Right!" << endl;
				got_it = true;
			}
			else{
				cout<< "Nope, not it" << endl;
			}	
		}
		else{
			cout<< "What gender is the TA?" << endl;
			cout<< "Enter male or female." << endl;
			cin>> name ;
			
			if(name== "male"){
				cout<< "Correct" << endl;
			}
			else{
				cout<< "Nope." << endl;
			}

				cout<< "What year is the TA?" << endl;
				cout<< " Enter 1, 2, 3, or 4." << endl;
				cin>> x;
				
				if(x == 3){
					cout<< "Correct." << endl;
				}
				else{
					cout<< "Not that year." << endl;
				}

					cout<< "What color is the TA's shirt?" << endl;
					cout<< "Enter orange, red, or blue." << endl;
					cin>> name ;
				
					if(name=="orange"){
						cout<< "Correct" << endl;
					}
					else{
						cout<< "Nope, not that color." << endl;
					}
						cout<< "What does the TA spend time doing outside of school?" << endl;
						cout<< "Enter running, hiking, or dancing." << endl;
						cin>> name;

						if(name=="running"){
							cout<< "Correct." << endl;
						}
						else{
							cout<< "Nope." << endl;
						}
							
							cout<< "Is the TA also an RA?" << endl;
							cout<< "Enter yes or no." << endl;
							cin>> name;
			
							if(name=="yes"){
								cout<< "Correct" << endl;
							}
							else{
								cout<< "Wrong, the TA is also an RA." << endl;
							}
		}



	} while(got_it==false);





	return 0;
}

























