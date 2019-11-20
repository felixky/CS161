/********************************************************************************************************
** Program: grade_calculator.cpp
** Author: Kyle Felix
** Description: Calculates the grade for a section or the overall grade.
** Input: 0-5 to decide what part of the grade to calculate.
** Output: The users grade.
********************************************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

float calc_lab_average();
float calc_recitation_average();
float calc_assignment_average();
float calc_test_average();
float calc_class_average();

int main() {
	int x;
	bool End=true;

	do{	cout<< "What grade would you like to calculate the average of?" << endl;
		cout<< "Enter 1 for lab, 2 for recitation, 3 for assignments, 4 for test, 5 for class, or 0 to quit program." << endl;
		cin>> x ; //User chooses which function to call here

		if(x == 1)
			calc_lab_average(); //call lab function
		else if(x == 2)
			calc_recitation_average(); //call recitation function
		else if(x == 3)
			calc_assignment_average(); //call assignment function
		else if(x == 4)
			calc_test_average(); //call test function
		else if(x == 5)
			calc_class_average(); //call class function
		else
			End=false; //Exit do-while loop
	} while (End==true);

	return 0;
} //main is under 20 lines

/*****************************************************************************************************
**Name: calc_lab_average
**Description: This function takes number of labs and the score on each and calculates the average.
**Pre Conditions:None
**Post Conditions:None
**Return: Lab average as a percent.
*****************************************************************************************************/
float calc_lab_average() {
	int x, i, y, Total=0;
	float percent;
	
	cout<< "How many labs have you had? " ;
	cin>> x ; 

	if(x>0){ //User input means they have completed a lab
		for(i=1;i<=x;i++){
			cout<< "Lab " << i << " score (out of 10): " ;
			cin>> y ;
		
		Total = Total + y; //Total sums the value of the scores
		}
	}

	else
	   	Total = 0 ;

	percent = ((float)Total/x)*10;
	cout<< "Your lab average is " << percent << " percent." << endl;

	return percent;
} //calc_lab_average is under 20 lines

/*****************************************************************************************************
**Name: recitation_quiz_average
**Description:This function takes the number of quizzes taken in recitation and averages the score off user inputted scores.
**Pre Conditions:None
**Post Conditions:None
**Return: Recitation quiz average as a percent.
*****************************************************************************************************/
float recitation_quiz_average() {
	int x, i, y, Total=0;
	float percent;
	
	cout<< "How many quizzes have you had? " ;
	cin>> x ;

	if(x>0){ //User inputted a value > 0
		for(i=1;i<=x;i++){
			cout<< "Quiz " << i << " score (out of 10): " ;
			cin>> y ;
		
		Total = Total + y; //Sums the total scores and store them in y
		}
	}

	else
	   	Total = 0 ;

	percent = ((float)Total/x)*10;
	cout<< "Your quiz average is " << percent << " percent." << endl;

	return percent;
} //recitation_quiz_average is under 20 lines

/*****************************************************************************************************
**Name: recitation_design_average
**Description:This function takes the number of designs turned in and average the score.
**Pre Conditions:None
**Post Conditions:None
**Return: Design grade as a percent.
*****************************************************************************************************/
float recitation_design_average() {
	int x, i, y, Total=0;
	float percent;	

	cout<< "How many designs have you had? " ;
	cin>> x ;

	if(x>0){
		for(i=3;i<=x+2;i++){ //User inputted they have completed a design
			cout<< "Design assignment " << i << " score (out of 10): " ;
			cin>> y ;
		
		Total = Total + y; //Sums y in Total
		}
	}

	else
	   	Total = 0 ;

	percent = ((float)Total/x)*10;
	cout<< "Your design average is " << percent << " percent." << endl;

	return percent;
} //recitation_design_average is under 20 lines

/*****************************************************************************************************
**Name:recitation_critique_average
**Description: This function takes the numbers of critiques and the scores and creates an average.
**Pre Conditions:None
**Post Conditions:None
**Return: Critique grade as a percent.
*****************************************************************************************************/
float recitation_critique_average() {
	int x, i, y, Total=0;	
	float percent;

	cout<< "How many designs critiques have you had? " ;
	cin>> x ;

	if(x>0){
		for(i=3;i<=x+2;i++){ 
			cout<< "Design critique assignment " << i << " score (out of 4): " ;
			cin>> y ;
		
		Total = Total + y; //Sums y in Total
		}
	}

	else
	   	Total = 0 ;

	percent = ((float)Total/(x*4))*100; //Changes Total into a percent
	cout<< "Your design critiques average is " << percent << " percent." << endl;

	return percent;
} //recitation_critique_average is under 20 lines

/*****************************************************************************************************
**Name:calc_recitation_average
**Description:This function takes the percentages returned from the recitation quiz, design, and critique functions and calculates the overall recitation grade.
**Pre Conditions:None
**Post Conditions:None
**Return: Overall recitation grade as a percentage.
*****************************************************************************************************/
float calc_recitation_average() {
	int x;
	float total=0, j=0, k=0, l=0;

	cout<< "Have you taken a recitation quiz? Enter 1 for yes and 2 for no. " << endl;
	cin>> x ;	
	
	if(x>0){
		if(x == 1){
	   	j = .4 ; //Quiz weight
			total= recitation_quiz_average()*j; //calls quiz function times weight
		}
	}
	   	
	cout<< "Have you turned in a design? Enter 1 for yes and 2 for no. " << endl;
	cin>> x ;

	if(x>0){
		if(x == 1){
	   	k = .4; //design weight
			total += recitation_design_average()*k; //design portion of recitation grade
		}	
	}
	cout<< "Have you turned in design critiques? Enter 1 for yes and 2 for no. " << endl;
	cin>> x ;

	if(x>0){
		if(x == 1){
	   	l = .2; //Critique weight
			total += recitation_critique_average()*l; //Critique portion of recitation grade
		}		
	}
	
	total = total/(j+k+l); //creates a percent that takes into account no points in a category
	cout<< "Your overall recitation grade is " << total << " percent." << endl;
	
	return total;
} //calc_recitation_average is not under 20 lines

/*****************************************************************************************************
**Name: calc_assignment_average
**Description: This function takes the number of assignments and their scores and creates an average.
**Pre Conditions:None
**Post Conditions:None
**Return: Average assignment grade.
*****************************************************************************************************/
float calc_assignment_average() {
	int x, i, y, Total=0;
	float percent;
	cout<< "How many assignments have you had? " ;
	cin>> x ;

	if(x>0){
		for(i=1;i<=x;i++){
			cout<< "Assignment " << i << " score (out of 100): " ;
			cin>> y ;
		
		Total = Total + y; //Sums score in variable Total
		}
	}
	else
	   	Total = 0 ;

	percent = ((float)Total/x); //Creates percent from Total
	cout<< "Your assignment average is " << percent << " percent." << endl;

	return percent;
} //calc_assignment_average is under 20 lines

/*****************************************************************************************************
**Name: calc_test_average
**Description:This function takes the number of tests and their scores and creates an average.
**Pre Conditions:None
**Post Conditions:None
**Return: Assignment grade as a percentage.
*****************************************************************************************************/
float calc_test_average () {
	int x, i, y, Total=0;
	float percent;
	cout<< "How many tests have you had? " ;
	cin>> x ;

	if(x>0){
		for(i=1;i<=x;i++){
			cout<< "Test " << i << " score (out of 100): " ;
			cin>> y ;
		
		Total = Total + y; //Sums y in variable Total
		}
	}
	else
	   	Total = 0 ;

	percent = ((float)Total/x); //Changes Total into a percent
	cout<< "Your test average is " << percent << " percent." << endl;

	return percent;
} //calc_test_average is under 20 lines

/*****************************************************************************************************
**Name: calc_class_average
**Description: This function takes the percentages returned from the lab, recitation, test, and assignment average, then multiplies each by the perspective weight for the class.
**Pre Conditions:None
**Post Conditions:None
**Return: 0
*****************************************************************************************************/
float calc_class_average() {
	int x;
	float total=0, d=0, e=0, f=0, g=0, value;

	value = calc_lab_average(); //Value hold percent for if
	if(value>0){
	   	d=.1; //Lab weight
		total= total + value*d;
	}

	value = calc_recitation_average(); //Value holds percent for if
	if(value>0){
	   	e=.2; //Recitation weight
	   	total+= value*e;
	}

	value = calc_assignment_average(); //Value holds percent for if
	if(value>0){
	   	f=.3; //Assignment weight
	   	total+= value*f;
	}

	value = calc_test_average(); //Value holds value for if
	if(value>0){
	   	g=.4; //Test weight
	   	total+= value*g;
	}

	total = total/(d+e+f+g); //Create percent based on categories with points
	cout<< "Your overall class grade is " << total << " percent." << endl;

	return 0;
} //calc_class_average is at 21 lines	

