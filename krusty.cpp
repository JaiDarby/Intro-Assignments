/* Name: Jai'Mir Darby
Date: 02/13/2020
Section: (Your section)
Assignment: Krusty.cpp
Due Date: 02/13/2020
About this project: This project explores fuctions as well as loops that can be used in order to insure for valid user inputs.
Assumptions: There are only numbers inputed by the user.

All work below was performed by Jai'Mir Darby */ 
#include <iostream>
#include <iomanip>
using namespace std;

double OrderTotal(int, int, int, int);

void menu(){
	cout << "-----------Menu-----------" << endl;
	cout << "1. Krabby Patty......$3.50" << endl;
	cout << "2. Barnicle Fries....$1.50" << endl;
	cout << "3. Kelp Shake........$1.00" << endl;
	cout << "4. Krusty Krab Pizza.$5.00" << endl;
}

int main() {
	int ItemNum, NumOfItem;
	int NumPatty,NumFries,NumShake,NumPizza;
	NumPatty = 0;
	NumFries = 0;
	NumShake = 0;
	NumPizza = 0;
	do {
		menu();
		cout << "What would you like? (Enter 0 to finish order): ";
		cin >> ItemNum;
		if (ItemNum > 0 && ItemNum < 5){

			do {
				cout << "How many: ";
				cin >> NumOfItem;
				if (NumOfItem < 0){
					cout << "You can't order a negative amount of food!" << endl;
				}
			}
			while (NumOfItem < 0);
		}
		if (ItemNum == 1)
			NumPatty += NumOfItem;
		else if (ItemNum == 2)
			NumFries += NumOfItem;
		else if (ItemNum == 3)
			NumShake += NumOfItem;
		else if (ItemNum == 4)
			NumPizza += NumOfItem;
		else if (ItemNum != 0)
			cout << "That isn't on the menu! Try again" << endl;
	}
	while (ItemNum != 0);
if (NumPatty > 0 || NumPizza > 0 || NumShake > 0 || NumFries > 0){
	cout << "\nYour order: " << endl;
	
	if (NumPatty > 0)
		cout << NumPatty << " Krabby patties." << endl;
	
	if (NumFries > 0)
		cout << NumFries << " Barnicle fries." << endl;
	
	if (NumShake > 0)
		cout << NumShake << " Kelp shakes" << endl;
	
	if (NumPizza > 0)
		cout << NumPizza << " Krusty Krab Pizzas" << endl;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nYour total is $" << OrderTotal(NumPatty, NumFries, NumShake, NumPizza) << endl << "Enjoy the food!";
}
else {
	cout << "I guess you aren't hungry.";
}
	return 0;
	
}

double OrderTotal(int NumPatty, int NumFries, int NumShake, int NumPizza){
		
		double PattyPrice,FriesPrice,ShakePrice,PizzaPrice;
		double total, PattyTotal,FriesTotal,ShakeTotal,PizzaTotal;
		
		PattyPrice = 3.50;
		FriesPrice = 1.50;
		ShakePrice = 1.00;
		PizzaPrice = 5.00;
		
		PattyTotal = NumPatty*PattyPrice;
		FriesTotal = NumFries*FriesPrice;
		ShakeTotal = NumShake*ShakePrice;
		PizzaTotal = NumPizza*PizzaPrice;
		
		total = PattyTotal+FriesTotal+ShakeTotal+PizzaTotal;
			return total;
	}
