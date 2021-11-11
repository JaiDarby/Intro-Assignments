 /* Name: Jai'Mir Darby
Date: 02/01/2020
Section: 
Assignment: stringstats.cpp
Due Date: 02/07/2020
About this project: This code was created with the intent to focus and deal with manipuating strings.
All work below was performed by Jai'Mir Darby */

#include <iostream>
#include <string>
using namespace std;

bool Repeat;

int main() {
	
	do{
		string UserSentence, UserWord, SubUser, Rep;
			int Bingo, NumPunc, NumVow, NumWords, length, One, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Eleven, Twelve, Thirteen, Fourteen, Fiffteen, Sixteen, Seventeen, Eighteen, Nineteen, Twenty, i, x, y;
			bool Check;
			Check = false;
			NumPunc = 0;
			NumVow = 0;
			NumWords = 0;
			
			y = 0;
			
			One = 0;
			Two = 0;
			Three = 0;
			Four = 0;
			Five = 0;
			Six = 0;
			Seven = 0;
			Eight = 0;
			Nine = 0;
			Ten = 0;
			Eleven = 0;
			Twelve = 0;
			Thirteen= 0;
			Fourteen = 0;
			Fiffteen = 0;
			Sixteen = 0;
			Seventeen = 0;
			Eighteen = 0;
			Nineteen = 0;
			Twenty = 0;
			
			cout << "Enter your sentence: ";
			getline(cin, UserSentence);
			cout << "Enter a word: ";
			cin >> UserWord;
			
			for (i = 0; i < UserSentence.length(); i += 1){
				if (UserSentence.at(i) == '?' || UserSentence.at(i) == '.' || UserSentence.at(i) == '!' || UserSentence.at(i) == ',' || UserSentence.at(i) == ';' || UserSentence.at(i) == '\'' || UserSentence.at(i) == '\"'){
					NumPunc = NumPunc + 1;
				}
			}
			cout << "Punctuation Characters: " << NumPunc << endl;
			
			for (i = 0; i < UserSentence.length(); i += 1){
					if (UserSentence.at(i) == 'a' || UserSentence.at(i) == 'e' || UserSentence.at(i) == 'i' || UserSentence.at(i) == 'o' || UserSentence.at(i) == 'u' || UserSentence.at(i) == 'y'){
						NumVow = NumVow + 1;
					}
				}
			cout << "Vowels: " << NumVow << endl;
			
			for (i = 0; i < UserSentence.length(); i += 1){
						if (UserSentence.at(i) == ' '){
							NumWords = NumWords + 1;
						}
					}
				cout << "Words: " << NumWords + 1 << endl;
				
			for (i = 0; i < UserSentence.length(); i += 1){
							if (UserSentence.at(i) == ' '){
								x = i - 1;
								length = x-y;
								switch(length){
									case 1:
										One = One += 1;
										break;
									case 2:
										Two = Two += 1;
										break;
									case 3:
										Three = Three += 1;
										break;
									case 4:
										Four = Four += 1;
										break;
									case 5:
										Five = Five += 1;
										break;
									case 6:
										Six = Six += 1;
										break;
									case 7:
										Seven = Seven += 1;
										break;
									case 8:
										Eight = Eight += 1;
										break;
									case 9:
										Nine = Nine += 1;
										break;
									case 10:
										Ten = Ten += 1;
										break;
									case 11:
										Eleven = Eleven += 1;
										break;
									case 12:
										Twelve = Twelve += 1;
										break;
									case 13:
										Thirteen = Thirteen += 1;
										break;
									case 14:
										Fourteen = Fourteen += 1;
										break;
									case 15:
										Fiffteen = Fiffteen += 1;
										break;
									case 16:
										Sixteen = Sixteen += 1;
										break;
									case 17:
										Seventeen = Seventeen += 1;
										break;
									case 18:
										Eighteen = Eighteen += 1;
										break;
									case 19:
										Nineteen = Nineteen += 1;
										break;
									case 20:
										Twenty = Twenty += 1;
										break;
								}
								y = i;
									
							}
						}
						if (One > 0){
							cout << "One Character long: " << One << " words" << endl;
						}
						if (Two > 0){
							cout << "Two Character long: " << Two << " words" << endl;
						}
						if (Three > 0){
							cout << "Three Character long: " << Three << " words" << endl;
						}
						if (Four > 0){
							cout << "Four Character long: " << Four << " words" << endl;
						}
						if (Five > 0){
							cout << "Five Character long: " << Five << " words" << endl;
						}
						if (Six > 0){
							cout << "Six Character long: " << Six << " words" << endl;
						}
						if (Seven > 0){
							cout << "Seven Character long: " << Seven << " words" << endl;
						}
						if (Eight > 0){
							cout << "Eight Character long: " << Eight << " words" << endl;
						}
						if (Nine > 0){
							cout << "Nine Character long: " << Nine << " words" << endl;
						}
						if (Ten > 0){
							cout << "Ten Character long: " << Ten << " words" << endl;
						}
						if (Eleven > 0){
							cout << "Eleven Character long: " << Eleven << " words" << endl;
						}
						if (Twelve > 0){
							cout << "Twelve Character long: " << Twelve << " words" << endl;
						}
						if (Thirteen > 0){
							cout << "Thirteen Character long: " << Thirteen << " words" << endl;
						}
						if (Fourteen > 0){
							cout << "Fourteen Character long: " << Fourteen << " words" << endl;
						}
						if (Fiffteen > 0){
							cout << "Fifteen Character long: " << Fiffteen << " words" << endl;
						}
						if (Sixteen > 0){
							cout << "Sixteen Character long: " << Sixteen << " words" << endl;
						}
						if (Seventeen > 0){
							cout << "Seventeen Character long: " << Seventeen << " words" << endl;
						}
						if (Eighteen > 0){
							cout << "Eighteen Character long: " << Eighteen << " words" << endl;
						}
						if (Nineteen > 0){
							cout << "Nineteen Character long: " << Nineteen << " words" << endl;
						}
						if (Twenty > 0){
							cout << "Twenty Character long: " << Twenty << " words" << endl;
						}
				
				x = UserSentence.length() - UserWord.length();
				y = UserWord.length();
				for (i=UserSentence.length(); i > 1; i -= 1){
					SubUser = UserSentence.substr(x, y);
					if (SubUser == UserWord){
						Check = true;
					}
					
					x = i - UserWord.length();
					
				}
				if (Check){
					cout << "The word: \"" << UserWord << "\"IS a part of the sentence you entered." << endl;
				}
				else{
					cout << "The word: \"" << UserWord << "\" IS NOT a part of the sentence you entered." << endl;
				}
				
				cout << "Would you like to run program again? (Yes/No): ";
				cin >> Rep;
				if (Rep == "YES" || Rep == "YEs" || Rep == "YeS" || Rep == "yES" || Rep == "yes" || Rep == "Yes" || Rep == "yEs" || Rep == "yeS"){
					Repeat = true;
				}
				
	}
	while (Repeat == true);
	}