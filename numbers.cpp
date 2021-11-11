/* Name: Jai'Mir Darby
Date: 02/13/2020
Section: (Your section)
Assignment: Numbers.cpp
Due Date: 02/13/2020
About this project: This project explores loops.
Assumptions: There are only numbers inputed by the user.

All work below was performed by Jai'Mir Darby */ 
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int UserInput, sum, DivisBy10, MaxValue, MinValue, FirstValue;
	double counter, Average;
	counter = 0;
	sum = 0;
	DivisBy10 = 0;
	MaxValue = 0;
	MinValue = 0;
	FirstValue = 0;
	Average = 0.0;
	
	cout << "Input interger (0 to stop): ";
	cin >> UserInput;
	FirstValue = UserInput;
	MaxValue = FirstValue;
	MinValue = FirstValue;
	sum = sum + FirstValue;
	
	while (UserInput != 0){
		cout << "Input interger (0 to stop): ";
		cin >> UserInput;
		counter += 1;
		sum = sum + UserInput;
		if (UserInput % 10 == 0 && UserInput != 0){
			DivisBy10 += 1;
		}
		if (MaxValue < UserInput && UserInput != 0){
			MaxValue = UserInput;
		}
		if (MinValue > UserInput && UserInput != 0){
			MinValue = UserInput;
		}
	}
	if (counter != 0){
		Average = sum/counter;
	}
	else {
		Average = 0.0;
	}
	
	cout << "\nTotal: " << counter << endl; 
	cout << "Sum: " << sum << endl;
	cout << "Divsible by 10: " << DivisBy10 << endl;
	cout << "Max: " << MaxValue << endl;
	cout << "Min: " << MinValue << endl;
	cout << fixed << showpoint << setprecision(1);
	cout << "Avg: " << Average << endl;
	
	
}