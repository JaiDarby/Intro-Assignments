/*
Name: Jai'Mir Darby
Date: 04/28/2020
Section: (Your section)
Assignment: Movies.cpp
Due Date: 04/28/2020
About this project: This is the final project that utalizes both text files and dynamic arrays
All work below was performed by Jai'Mir Darby
*/

/*libraries*/
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

/*Declare your struct of type Movies here*/
struct Movies{
	string genre;
	string title;
	int year;
	int runtime;
	string rating;
};
/*Declare any functions you decide to create here*/
int TotalRuntime(Movies a[], int b);
void ExportMovies(Movies a[], int b);
void SortYear(Movies a[], int b);

void menu(){
	cout << "1 - Load Movie File" << endl;
	cout << "2 - View Total Movie Database Runtime" << endl;
	cout << "3 - View Movies by Rating" << endl;
	cout << "4 - Export Movies by Genre" << endl;
	cout << "5 - Clear Currently Loaded Database" << endl;
	cout << "6 - Print Database Sorted by Year" << endl;
	cout << "Q - Quit" << endl;
	cout << "Selection > " ;
}

int main() 
{
	//Use this pointer whenever you need to create a dynamic array. 
	//This is the ONLY pointer you will need for this program.
	//It is initialized to NULL to signify that it is currently not in use/no movie array allocated yet.
		
	Movies * movieArr = 0;
	ifstream Check;
	string filename, UserRating;
	int i, ArrayLength, sum;
	char MenuOption, YN;
	bool Loaded;
	Loaded = false;
	
	do{
		menu();
		cin >> MenuOption;
		//Load File
		if (MenuOption == '1'){
			if (Loaded)	{
				cout << "There is a database already loaded. Do you want to overwrite the current database?";
				
				do{
					cout << "(y/n) > ";
					cin >> YN;
					if (YN == 'y'){
						do{ Loaded = true;
							Check.clear();
								
							cout << "\nWhat file would you like to open?: " << endl;
							cout << "Filename: ";
							cin >> filename;
								
							Check.open(filename.c_str());
								
							if (!Check)
								cout << "Invalid file name" << endl;
							} while (!Check);
							
							Check >> ArrayLength;
							
							movieArr = new Movies[ArrayLength];
							
							for(i = 0; i < ArrayLength; i++){
								getline(Check, movieArr[i].genre, ':');
								getline(Check, movieArr[i].title, ',');
								Check >> movieArr[i].year;
								Check >> movieArr[i].runtime;
								getline(Check, movieArr[i].rating);
							}
							Check.close();
					}
					else if (YN == 'n'){
						break;
					}
				} while (YN != 'y' || YN != 'n');
				
			}
			else{
				do{
						Loaded = true;
						Check.clear();
						
						cout << "\nWhat file would you like to open?: " << endl;
						cout << "Filename: ";
						cin >> filename;
						
						Check.open(filename.c_str());
						
						if (!Check)
							cout << "Invalid file name" << endl;
					} while (!Check);
					
					Check >> ArrayLength;
					
					movieArr = new Movies[ArrayLength];
					
					for(i = 0; i < ArrayLength; i++){
						getline(Check, movieArr[i].genre, ':');
						getline(Check, movieArr[i].title, ',');
						Check >> movieArr[i].year;
						Check >> movieArr[i].runtime;
						Check >> movieArr[i].rating;
					}
					Check.close();
			}
			}
		else if (MenuOption == '2'){
				
				if(!Loaded)
					cout << "\nRuntime: 0hrs 0min\n" << endl;
				else{
					sum = TotalRuntime(movieArr, ArrayLength);
				cout << "\nRuntime: " << sum/12 << "hrs" << " " << sum%12 << "mins\n" << endl;
				}
				
		}
		else if (MenuOption == '3'){
			if (!Loaded){
				cout << "\nPlease fill in a database first using [1]\n" << endl; 
			}
			else {
				cout << "\nWhat rating are you looking for?: ";
				cin >> UserRating;
				for (i = 0; i < ArrayLength; i++){
					if (movieArr[i].rating == UserRating){
						cout << movieArr[i].genre << ":" << movieArr[i].title << ":" << movieArr[i].year << ":" << movieArr[i].rating << "\n" << endl;
					}
				}
			}
		}
		else if (MenuOption == '4'){
			if (Loaded){
				ExportMovies(movieArr, ArrayLength);
			}
			else{
				cout << "\nYou need to run the first option before this\n" << endl;
			}
		}
		else if (MenuOption == '5'){
			if (Loaded){
			Loaded = false;
			Check.clear();
			cout << "\nThe database is now empty\n" << endl;
			
			}
			else{
				cout << "\nMovie database already empty\n" << endl;
			}
			
		}
		else if (MenuOption == '6'){
			if (Loaded){
				SortYear(movieArr, ArrayLength);
			}
			else {
				cout << "\nUse option 1 first please!\n" << endl;
			}
		}
		else if (MenuOption != 'Q'){
			cout << "\nInvalid Menu Option, Try Again!\n"<< endl;
		}
		
	}
	while (MenuOption != 'Q');
	
	movieArr = 0;
	Check.close();
	
	return 0;
}

/*Define any of your functions here*/
int TotalRuntime(Movies a[], int b){
	int sum = 0;
	int i;
	for(i = 0; i < b; i++){
		sum = sum + a[i].runtime;
	}
	return sum;
	
}
void ExportMovies(Movies a[], int b){
	ofstream Action, Drama, Scifi, Comedy;
	int i;
	string A,D,S,C;
	A = "ACTION";
	D = "DRAMA";
	S = "SCIENCE FICTION";
	C = "COMEDY";
	//creates files
	for (i = 0; i < b; i++){
		if (a[i].genre[1] == 'A'){
			Action.open("action.txt", ios::app);
			Action << a[i].title << "(" << a[i].year << ")\n";
			Action.close();	
		}
	}
	for (i = 0; i < b; i++){
		if(a[i].genre[1] == 'D'){
			Drama.open("drama.txt", ios::app);
			Drama << a[i].title << "(" << a[i].year << ")\n";
			Drama.close();
		}

	}
	for (i = 0; i < b; i++){
		if(a[i].genre[1]== 'S'){
			Scifi.open("scifi.txt", ios::app);
			Scifi << a[i].title << "(" << a[i].year << ")\n";
			Scifi.close();

	}
	}
	for (i = 0; i < b; i++){
		if(a[i].genre[1]== 'C'){
			Comedy.open("comedy.txt", ios::app);
			Comedy << a[i].title << "(" << a[i].year << ")\n";
			Comedy.close();
	}
	}
	cout << "\nYour files have been created!\n" << endl;
}
void SortYear(Movies a[], int b){
	int i, y;
	Movies x;
	for (y = 0; y < 100; y++){
		i = 0;
	for(i = 0; i < b; i++){
		x = a[i];
		if (a[i].year > a[i+1].year){
			a[i] = a[i+1];
			a[i+1] = x;
	}
	}
}
for(int i = 0; i < b; i++){
	cout << a[i].year << " : " << a[i].title << endl; 
}
}

//Reminder of the Input File Format our program should expect:
/*
	NumberOfRecords
	GENRE:TITLE, year runtime rating
	GENRE:TITLE, year runtime rating
	GENRE:TITLE, year runtime rating
	...
*/