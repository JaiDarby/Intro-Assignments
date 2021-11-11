/* Name: Jai'Mir Darby
Date: 02/13/2020
Section: (Your section)
Assignment: pennies.cpp
Due Date: 02/13/2020
About this project: This project explores loops.
Assumptions: There are only numbers inputed by the user.

All work below was performed by Jai'Mir Darby */ 
#include <iostream>

using namespace std;
int main() {
	double salary, TotalPay;
	int days;
	bool Answer;
	TotalPay = 0;
	salary = .01;
	Answer = false;
	
	do {
		cout << "Please enter the number of days worked: ";
		cin >> days;
		if (days < 1){
			cout << "Invalid number of days. Try again" << endl;
		}
	}
	while (days < 1);
	
	cout << "Day                       Amount Earned" << endl;
	cout << "------------------------------------------------" << endl;
	
	int counter;
	counter = 1;
	while (counter != days+1){
		TotalPay = TotalPay + (salary);
		cout << counter << "                           $ " << salary << endl;
		salary = salary * 2; 
		counter += 1;
	}
	cout << "Total earnings: $" << TotalPay;
}