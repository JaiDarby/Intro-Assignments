 /* Name: Jai'Mir Darby
Date: 03/26/2020
Section: (Your section)
Assignment: Array.cpp
Due Date: 03/03/2020
About this project: This code was created with the intent to text knowledge of coding in regards to arays and for to manipulate them.
All work below was performed by Jai'Mir Darby */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void menu() {
	cout << "\nMENU:   (or SELECT Q ro QUIT)" << endl;
		cout << "F - Fill Array: RANDOM values 1 - 100" << endl;
		cout << "R - Reverse Array Contents" << endl;
		cout << "X - Shift Right" << endl;
		cout << "C - Change Array Element" << endl;
		cout << "D - Delete Array Element" << endl;
		cout << "A - Print Average" << endl;
		cout << "M - Print Max Value" << endl;
		cout << "G - Grow Array Size by 5" << endl;
		cout << "S - Shrink Array Size by 5" << endl;
		cout << "P - Print Array" << endl;
		cout << "---------------------------" << endl;
}
void ReverseArray(int, int);

int main() {
	srand(time(0));
	int x,y, i, ChangeNum, ChangeIndex, SumArray, counter, AvgArray, MaxValue, holder;
	MaxValue = 0;
	SumArray = 0;
	cout << "How big would you like to make your array?" << endl;
	cout << "Enter a value 5 --> 40: ";
		cin >> x;
		
	while (x > 40 || x < 5){
		cout << "\nTry again: ";
		cin >> x;
	}
		y = x;
		x = x-1;
	int Array[x], NewArray[y];
	char MenuChoice; 
	do{
		menu();
	cin >> MenuChoice;
	switch (MenuChoice){
		case 'F':
			for (i = 0; i < x + 1; i += 1 ){
				 Array[i] = rand() % 100 + 1;
			}
			break;
		case 'R':
			counter = 0;
			for (i = x; i > -1; i -= 1){
				NewArray[counter] = Array[i];
				counter += 1;
			}
			for (i = 0; i < x + 1; i += 1 ){
				Array[i] = NewArray[i];
			}
			
			break;
		case 'X':
			holder = Array[x];
			for (i = x - 1; i >= 0 ; i -= 1){
				Array[i+1] = Array[i];
			}
			Array[0] = holder;
			break;
		case 'C':
			cout << "What number would you like to insert?" << endl;
			cin >> ChangeNum;
			cout << "What index would you like to change?" << endl;
			cin >> ChangeIndex;
			Array[ChangeIndex] = ChangeNum;
			cout << "Thank you! Your index has been changed!" << endl;
			break;
		case 'D':
			cout << "Which index would you like to delete?: ";
			cin >> ChangeIndex;
			for(i=ChangeIndex;i<x;i+=1)
			{
				Array[i] = Array[i+1];
			}
			Array[x] = 0;

			break;
		case 'A':
		for (i = 0; i < x + 1; i += 1 ){
			SumArray = SumArray + Array[i];
		}
		cout << "The sum of your array is: " << SumArray << endl;
		AvgArray = SumArray/x;
		cout << "The Average of your array is: " << AvgArray << endl;
			break;	
		case 'M':
			for (i = 0; i < x + 1; i += 1 ){
				if (Array[i] > MaxValue)
					MaxValue = Array[i];
				}
				cout << "The max value in your array is: " << MaxValue << endl;
			break;
		case 'G':
			if (x+5 < 40){
			x = x + 5;
			for (i = y; i < x + 1; i += 1 ){
					Array[i] = 0;
			}
			y = x;	
			}
			else {
				cout << "Sorry, the array can't grow by 5 without extending limit" << endl;
			}
			break;
		case 'S':
			if (x-5 > 1){
				x = x - 5;
			y = x + 1;
			}
			else {
				cout << "Sorry, the array can't shorten by 5 without extending limit" << endl;
			}
			break;
		case 'P':
			cout << '[';
			for (i = 0; i < x + 1; i += 1 ){
				 cout << Array[i] << ",";
			}
			cout << ']' << endl;
			break;
	}
	}
	while (MenuChoice != 'Q');
	
	
}  
