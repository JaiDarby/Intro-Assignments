#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int randnum, ran;
	srand(time(0));
	randnum = rand();
	ran = rand();
	cout << randnum << endl<< ran;
	bool b = true;
	cout << b;
}