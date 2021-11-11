#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	// intitalizing/declaring cost of candies  
	const double BeansCost = 4;
	const double FrogsCost = 1.50;
	const double BonsCost = 2.5;
	const double CakesCost = 6.25;
	// intializing number of candies
	int NumBeans, NumFrogs, NumBons, NumCakes;
	//initializing total cost of each item before tax
	double BeansTotal,FrogsTotal,BonsTotal,CakesTotal;
	//initializing total cost of all items before tax
	double BeforeTax;
	//initializing tax of total before tax
	double WizTax;
	//initalizing wizard tax
	const double WizardTax = 6.5;
	//intializing total cost of items after WizTax
	double Total;
	//formatting for menu
	cout << "Anything off of the trolley, dears?\n";
	cout << "\tTROLLEY MENU\n\t-----------------------\n";
	cout << "\tBertie Bott's Every Flavour Beans: $4.00\n";
	cout << "\tChocolate Frog: $1.50\n";
	cout << "\tExploding Bonbons: $2.50\n";
	cout << "\tCauldron Cakes: $6.25\n";
	cout << "\t-----------------------";
	//prompts user to input # of each candy
	cout << "\nHow many Bertie Bott's Every Flavour Beans? --> ";
	cin >> NumBeans;
	cout << "\nHow many Chocolate Frogs? --> ";
	cin >> NumFrogs;
	cout << "\nHow many Exploding Bonbons? --> ";
	cin >> NumBons;
	cout << "\nHow many Cauldron Cakes? --> ";
	cin >> NumCakes;
	//Declares total of individual candies before tax to assigned variables.
	BeansTotal = BeansCost*NumBeans;
	FrogsTotal = FrogsCost*NumFrogs;
	BonsTotal = BonsCost*NumBons;
	CakesTotal = CakesCost*NumCakes;
	//prints out cost of items before tax
	BeforeTax = BeansTotal+FrogsTotal+BonsTotal+CakesTotal;
	cout << "Total (Before Wizard Tax): " << BeforeTax << endl;
	//prints out tax of items
	WizTax = BeforeTax * (WizardTax/100);
	cout << fixed << showpoint << setprecision(2);
	cout << "Tax (6.50%): " << WizTax << endl;
	//prints out total tax of items
	
	Total = BeforeTax + WizTax;
	cout << fixed << showpoint << setprecision(2);
	cout << "Total (After Wizard Tax): " << Total;
	//prints out cost of items after taxes
	cout << "\nEnjoy yout candies!";
	
		return 0;
}