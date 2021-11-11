
/* Name: Jai'Mir Darby
Date: 01/30/2020
Section: (Your section)
Assignment: 
Due Date: 01/30/2020
About this project: This code was created with the intent to calculate my grade for the into to C++ and Unix class.
Assumptions: assumes user inputs valid intergers when asked

All work below was performed by Jai'Mir Darby */ 



#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	/*
	Homework Average = ((Add All Hws, recitations, and ex credit))/820) * 100

	Test Average = ((Midterm I * 17.5) + (Midterm II * 17.5) + (final * 25)) / 60

	Course Average = ((Midterm I * .175) + (Midterm II * .175) + (final * .25) + (Homework Avg * .40))
	*/
	//Intializing all variables needed to complete task
	double HW1, HW2, HW3, HW4, HW5, HW6, HW7;
	double Rec1, Rec2, Rec3, Rec4, Rec5, Rec6;
	double Midterm1, Midterm2, Final;
	double HWTotal, RecTotal, ExCredit;
	double HomeAvg, TestAvg, CourseAvg;
	char ExQuestion; 
	char Grade;
	//Takes user input for homework (HW) variables
	cout << "Welcome to the Grade Calculator!" << endl;
	cout << "\nHOMEWORK GRADES -->";
	cin >> HW1 >> HW2 >> HW3 >> HW4 >> HW5 >> HW6;
	//Totals up sum of HW variables and sets into one variable
	HWTotal = HW1 + HW2 + HW3 + HW4 + HW5 + HW6;
	//Takes user input for Recitation (Rec) Variabes
	cout << "\nRECITATION GRADES -->";
	cin >> Rec1 >> Rec2 >> Rec3 >> Rec4 >> Rec5;
	// Totals up sum of Rec variables and sets into one.
	RecTotal = Rec1 + Rec2 + Rec3 + Rec4 + Rec5;
	//Takes inputs for midterm and finals grades from user
	cout << "\nTEST GRADES -->\nMidterm I: ";
	cin >> Midterm1;
	cout << "MidtermII: ";
	cin >> Midterm2;
	cout << "Final: ";
	cin >> Final;
	//Asks user if there is extra credit and gets input of yes or no
	cout << "\nIs there any extra credit to add in? (Y or N) --> ";
	cin >> ExQuestion;
	//Switch statment to run based on user input.
	switch (ExQuestion){
		case 'Y':
		case 'y':
			cout << "How many extra credit points should be added? --> ";
			cin >> ExCredit;
			//Calculations for Averages
			HomeAvg = (HWTotal + RecTotal + ExCredit)/720 * 100;
			TestAvg = ((Midterm1*17.5) + (Midterm2*17.5) + (Final*25))/60;
			CourseAvg = ((Midterm1*.175) + (Midterm2*.175) + (Final*.25)+(HomeAvg * .40));
			// prints out averages
			cout << fixed << showpoint << setprecision(2);
			cout << "\nHoework Average: " << HomeAvg << "%" << endl;
			cout << fixed << showpoint << setprecision(2);
			cout << "Test Average: " << TestAvg << "%";
			if (TestAvg < 70){
				cout << "   ***Test average requirement not met***";
			}
			cout << fixed << showpoint << setprecision(2);
			cout << "\nCourse Average: " << CourseAvg << "%" << endl;
			//If statement used to determine letter grade
			cout << "Course Grade: ";
			if  (CourseAvg > 89){
				cout << 'A';
			}
			else if (CourseAvg < 90 && CourseAvg > 79){
				cout << 'B';
			}
			else if (CourseAvg < 80 && CourseAvg > 69){
				cout << 'C';
			}
			else if (CourseAvg < 70 && CourseAvg > 59){
				cout << 'D';
			}
			else{
				cout << 'F';
			}
			break;
		case 'N':
		case 'n':
			ExCredit = 0;
			HomeAvg = (HWTotal + RecTotal + ExCredit)/820 * 100;
			TestAvg = ((Midterm1*17.5) + (Midterm2*17.5) + (Final*25))/60;
			CourseAvg = ((Midterm1*.175) + (Midterm2*.175) + (Final*.25)+(HomeAvg * .40));
			//Prints out grade averages
			cout << fixed << showpoint << setprecision(2);
			cout << "\nHoework Average: " << HomeAvg << "%"<< endl;
			cout << fixed << showpoint << setprecision(2);
			cout << "Test Average: " << TestAvg << "%";
			if (TestAvg < 70){
				cout << "   ***Test average requirement not met***";
			}
			cout << fixed << showpoint << setprecision(2);
			cout << "\nCourse Average: " << CourseAvg << "%" << endl;
			// If Statement to determine letter grades
			cout << "Course Grade: ";
			if  (CourseAvg > 89){
				cout << 'A';
			}
			else if (CourseAvg < 90 && CourseAvg > 79){
				cout << 'B';
			}
			else if (CourseAvg < 80 && CourseAvg > 69){
				cout << 'C';
			}
			else if (CourseAvg < 70 && CourseAvg > 59){
				cout << 'D';
			}
			else{
				cout << 'F';
			}

			break;
		default:
			// In case of invalid inout prints out error message
			cout << "Invalid option, exiting program\n" << endl;
	}
	return 0;
}