 /* Name: Jai'Mir Darby
Date: 01/30/2020
Section: (Your section)
Assignment: games.cpp
Due Date: 03/03/2020
About this project: This code was created with the intent to create a fun game which also keeps track of wins and losses
All work below was performed by Jai'Mir Darby */
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

//Declaring game variables
bool guessNumber();
bool highLow();
bool collectPairs();
//Declaring Statistics Variable
void viewStatistics(double, double);
//Declaring print rules variable
void printRules();
int menu(){
	int game;
		do{
			cout << "GAME MENU:" << endl;
				cout << "--------------------------" << endl; 
				cout << "1: PLAY Guess the Number" << endl;
				cout << "2: PLAY High Low" << endl;
				cout << "3: Play Collect Pairs" << endl;
				cout << "4: View Statistics" << endl;
				cout << "5: Reset Statistics" << endl;
				cout << "6: RULES" << endl;
				cout << "0: QUIT" << endl;
				cout << "--------------------------" << endl;
			cin >> game;
			}
		while (game < 0 || game > 6);
		return game;
}

int main() {
	srand(time(0));
	int wins, losses, game;
	bool check;
	wins = 0;
	losses = 0;
	do{
		switch (game = menu()){
		case 1:
			check = guessNumber();
			if (check){
				wins += 1;
			}
			else{
				losses += 1;
			}
			break;
		case 2:
			check = highLow();
			if(check){
				wins += 1;
			}
			else{
				losses += 1;
			}
			break;
		case 3:
			check = collectPairs();
			if (check){
				wins += 1;
			}
			else{
				losses += 1;
			}
			break;
		case 4:
			viewStatistics(wins, losses);
			break;
		case 5:
			wins = 0;
			losses = 0;
			break;
		case 6:
			printRules();
			break;
		case 0:
			viewStatistics(wins, losses);
			cout << "\nThanks for playing!"<< endl;
			break;
	}
	}
	while(game != 0);
	
}


bool guessNumber(){
	int RandNum, Tries, UserGuess;
	Tries = 1;
	RandNum = rand() % 100 + 1;
	do{
		cout << "\nGuess the Number 1 --> 100!" << endl;
		cout << "Attempt " << Tries << "/6 : ";
		cin >> UserGuess;
		if (UserGuess < RandNum){
			cout << "\nTOO SMALL" << endl;
		}
		else if (UserGuess > RandNum){
			cout << "\nTOO BIG" << endl;
		}
		Tries += 1;	
	}
	while (Tries != 7 && RandNum != UserGuess);
	
	if (RandNum != UserGuess){
		cout << "Sorry, you lose. The number was " << RandNum << endl;
		return false;
	}
	else {
			cout << "You WIN!" << endl;
			return true;
	}
}
bool highLow(){
	/* 
			High or Low! Stay alive for 5 rounds to win! (Numbers range from 1 to 1,000)
			Round 1 of 5. The number is 969
				... is the next number [H]igher or [L]ower?: 
	*/
	int Round, RandNum, NextRandNum;
	char UserInput;
	RandNum = rand() % 1000 + 1;
	Round = 1;
	bool RightWrong = true;
	cout << "\nHigh or Low! Stay alive for 5 rounds to win! (Numbers range from 1 to 1,000)" << endl;
	while (Round != 6 && RightWrong == true){
		NextRandNum = rand() % 1000 + 1;
		cout << "Round " << Round << " of 5. The number is " << RandNum;
		cout << "	... is the next number [H]igher or [L]ower: ";
		cin >> UserInput;
		if (UserInput == 'L'){
			if (RandNum > NextRandNum){
				cout << "Correct!" << endl;
			}
			else if (RandNum < NextRandNum){
				cout << "The next number is: " << NextRandNum << endl;
				cout << "Sorry, you lose" << endl;
				RightWrong = false;
			}
		}
		else if (UserInput == 'H'){
			if (RandNum < NextRandNum){
				cout << "Correct!" << endl;
			}
			else if (RandNum > NextRandNum){
				cout << "The next number is: " << NextRandNum << endl;
				cout << "Sorry, you lose" << endl;
				RightWrong = false;
			}
		}
		RandNum = NextRandNum;
		Round += 1;
	}
	if (RightWrong == true){
		return true;
	}
	else{
		return false;
	}
}
bool collectPairs(){
	int i, dice1, dice2;
	bool PairOnes = false, PairTwos = false, PairThrees = false, PairFours = false, PairFives = false, PairSixes = false;
	dice1 = 0;
	dice2 = 0;
	for (i = 1; i < 101; i ++){
	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;
	if (dice1 == dice2){
		if (dice2 == 1){
			PairOnes = true;
		}
		else if (dice2 == 2){
			PairTwos = true;
		}
		else if (dice2 == 3){
			PairThrees = true;
		}
		else if (dice2 == 4){
			PairFours = true;
		}
		else if (dice2 == 5){
			PairFives = true;
		}
		else{
			PairSixes = true;
		}
	}
	}
	cout << "\nRolling a pair of dice 100 times for pairs!" << endl;
	if (PairOnes)
		cout << "PAIR OF ONES found" << endl;
	if (PairTwos)
		cout << "PAIR OF TWOS found" << endl;
	if (PairThrees)
		cout << "PAIR OF THREES found" << endl;
	if (PairFours)
		cout << "PAIR OF FOURS found" << endl;
	if (PairFives)
		cout << "PAIR OF FIVES found" << endl;
	if (PairSixes)
		cout << "PAIR OF SIXES found" << endl;
	if (PairOnes && PairTwos && PairThrees && PairFours && PairFives && PairSixes){
		cout << "You Win!" << endl;
		return true;
		
	}
	else {
		cout << "You Lose!"	<< endl;
		return false;
		
	}
}
void viewStatistics(double wins, double losses){
	int total = wins+losses;
	cout << "\nSTATISTICS" << endl;
	cout << "---------------------------" << endl;
	cout << "Wins: " << wins << "       Losses: " << losses << endl;
	cout << fixed << showpoint << setprecision(1);
	cout << "Total Win Percent: " << wins/total * 100 << "%" << endl;
}
void printRules(){
	cout << "\nRULES:\n\nGuess the Number Game:\nYou'll only get 6 tries to guess a number between 1 and 100!\nGuess Wisely!\n\n";
	cout << "High/Low Game:\nMake it through 5 rounds of guessing whether the next random number\n";
	cout << "between 1 and 1,000 is higher or lower than the previous, and you win!\n\n";
	cout << "Collect the Pairs Game:\nRoll two dice 100 times. If in the 100 times you roll a pair\n";
	cout << "of each type (1's, 2's, 3's, 4's, 5's, 6's) at least once, then YOU WIN!\n\n";
	return;
}