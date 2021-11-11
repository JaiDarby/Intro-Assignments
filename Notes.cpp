#include <iostream>

using namespace std;
int main() {
	
	//Notes for 1/23/2020
	/*
	(ch == "A" || ch =="B"|| ch == "C")
	(x%100 == 0)
	(x%2 == 1 && y%2 == 1)
	*/
	
	cout << "Enter a number that is positive: ";
	cin >> x;
	
	if(x > 0)
	{
		cout << "You're a great listner . Have a good day.\n";
		
}
	else if (x < 0)
	{cout << "Thats a negative number\n";
	}
	
	else
	{
		cout << "Try again next time.";
}
		return 0;
}